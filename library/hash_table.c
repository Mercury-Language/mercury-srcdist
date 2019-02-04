/*
** Automatically generated from `hash_table.m'
** by the Mercury compiler,
** version DEV
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


/* :- module hash_table. */
/* :- implementation. */

/*
INIT mercury__hash_table__init
ENDINIT
*/

#include "hash_table.mih"


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




static const MR_FA_PseudoTypeInfo_Struct2 mercury__hash_table__hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__hash_table__array__pti_array_1__pseudo_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2;

static const MR_VA_PseudoTypeInfo_Struct2 mercury__hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo mercury__hash_table__hash_table__field_types_hash_table_2_0[4];

static const MR_ConstString mercury__hash_table__hash_table__field_names_hash_table_2_0[4];

static const MR_DuFunctorDesc mercury__hash_table__hash_table__du_functor_desc_hash_table_2_0;

static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_table_2_0[1];

static const MR_DuPtagLayout mercury__hash_table__hash_table__du_ptag_ordered_hash_table_2[1];

static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_name_ordered_hash_table_2[1];

static const MR_Integer mercury__hash_table__hash_table__functor_number_map_hash_table_2[1];

static const MR_DuFunctorDesc mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_0;

static const MR_PseudoTypeInfo mercury__hash_table__hash_table__field_types_hash_table_alist_2_1[2];

static const MR_DuFunctorDesc mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_1;

static const MR_PseudoTypeInfo mercury__hash_table__hash_table__field_types_hash_table_alist_2_2[3];

static const MR_DuFunctorDesc mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_2;

static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_table_alist_2_0[1];

static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_table_alist_2_1[1];

static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_table_alist_2_2[1];

static const MR_DuPtagLayout mercury__hash_table__hash_table__du_ptag_ordered_hash_table_alist_2[3];

static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_name_ordered_hash_table_alist_2[3];

static const MR_Integer mercury__hash_table__hash_table__functor_number_map_hash_table_alist_2[3];

static MR_bool MR_CALL 
mercury__hash_table____Unify____buckets_2_0_10001(
  MR_Box mercury__hash_table__wrapper_arg_1,
  MR_Box mercury__hash_table__wrapper_arg_2,
  MR_Box mercury__hash_table__wrapper_arg_3,
  MR_Box mercury__hash_table__wrapper_arg_4);

static void MR_CALL 
mercury__hash_table____Compare____buckets_2_0_10001(
  MR_Box mercury__hash_table__wrapper_arg_1,
  MR_Box mercury__hash_table__wrapper_arg_2,
  MR_Box * mercury__hash_table__wrapper_arg_3,
  MR_Box mercury__hash_table__wrapper_arg_4,
  MR_Box mercury__hash_table__wrapper_arg_5);

static MR_bool MR_CALL 
mercury__hash_table____Unify____hash_pred_1_0_10001(
  MR_Box mercury__hash_table__wrapper_arg_1,
  MR_Box mercury__hash_table__wrapper_arg_2,
  MR_Box mercury__hash_table__wrapper_arg_3);

static void MR_CALL 
mercury__hash_table____Compare____hash_pred_1_0_10001(
  MR_Box mercury__hash_table__wrapper_arg_1,
  MR_Box * mercury__hash_table__wrapper_arg_2,
  MR_Box mercury__hash_table__wrapper_arg_3,
  MR_Box mercury__hash_table__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__hash_table____Unify____hash_table_2_0_10001(
  MR_Box mercury__hash_table__wrapper_arg_1,
  MR_Box mercury__hash_table__wrapper_arg_2,
  MR_Box mercury__hash_table__wrapper_arg_3,
  MR_Box mercury__hash_table__wrapper_arg_4);

static void MR_CALL 
mercury__hash_table____Compare____hash_table_2_0_10001(
  MR_Box mercury__hash_table__wrapper_arg_1,
  MR_Box mercury__hash_table__wrapper_arg_2,
  MR_Box * mercury__hash_table__wrapper_arg_3,
  MR_Box mercury__hash_table__wrapper_arg_4,
  MR_Box mercury__hash_table__wrapper_arg_5);

static MR_bool MR_CALL 
mercury__hash_table____Unify____hash_table_alist_2_0_10001(
  MR_Box mercury__hash_table__wrapper_arg_1,
  MR_Box mercury__hash_table__wrapper_arg_2,
  MR_Box mercury__hash_table__wrapper_arg_3,
  MR_Box mercury__hash_table__wrapper_arg_4);

static void MR_CALL 
mercury__hash_table____Compare____hash_table_alist_2_0_10001(
  MR_Box mercury__hash_table__wrapper_arg_1,
  MR_Box mercury__hash_table__wrapper_arg_2,
  MR_Box * mercury__hash_table__wrapper_arg_3,
  MR_Box mercury__hash_table__wrapper_arg_4,
  MR_Box mercury__hash_table__wrapper_arg_5);

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_56_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(
  MR_Word mercury__hash_table__Var_34,
  MR_Word mercury__hash_table__Var_35,
  MR_Word mercury__hash_table__Var_36,
  MR_Word mercury__hash_table__Var_37,
  MR_Word mercury__hash_table__Var_38,
  MR_Word mercury__hash_table__Var_39,
  MR_Integer mercury__hash_table__V_12_12,
  MR_Integer mercury__hash_table__V_13_13,
  MR_ArrayPtr mercury__hash_table__V_14_14,
  MR_Box mercury__hash_table__V_18_15,
  MR_Box * mercury__hash_table__V_19_16,
  MR_Box mercury__hash_table__V_20_17,
  MR_Box * mercury__hash_table__V_21_18,
  MR_Box mercury__hash_table__V_22_19,
  MR_Box * mercury__hash_table__V_23_20);

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_55_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(
  MR_Word mercury__hash_table__Var_34,
  MR_Word mercury__hash_table__Var_35,
  MR_Word mercury__hash_table__Var_36,
  MR_Word mercury__hash_table__Var_37,
  MR_Word mercury__hash_table__Var_38,
  MR_Word mercury__hash_table__Var_39,
  MR_Integer mercury__hash_table__V_12_12,
  MR_Integer mercury__hash_table__V_13_13,
  MR_ArrayPtr mercury__hash_table__V_14_14,
  MR_Box mercury__hash_table__V_18_15,
  MR_Box * mercury__hash_table__V_19_16,
  MR_Box mercury__hash_table__V_20_17,
  MR_Box * mercury__hash_table__V_21_18,
  MR_Box mercury__hash_table__V_22_19,
  MR_Box * mercury__hash_table__V_23_20);

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(
  MR_Word mercury__hash_table__Var_34,
  MR_Word mercury__hash_table__Var_35,
  MR_Word mercury__hash_table__Var_36,
  MR_Word mercury__hash_table__Var_37,
  MR_Word mercury__hash_table__Var_38,
  MR_Word mercury__hash_table__Var_39,
  MR_Integer mercury__hash_table__V_12_12,
  MR_Integer mercury__hash_table__V_13_13,
  MR_ArrayPtr mercury__hash_table__V_14_14,
  MR_Box mercury__hash_table__V_18_15,
  MR_Box * mercury__hash_table__V_19_16,
  MR_Box mercury__hash_table__V_20_17,
  MR_Box * mercury__hash_table__V_21_18,
  MR_Box mercury__hash_table__V_22_19,
  MR_Box * mercury__hash_table__V_23_20);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(
  MR_Word mercury__hash_table__Var_34,
  MR_Word mercury__hash_table__Var_35,
  MR_Word mercury__hash_table__Var_36,
  MR_Word mercury__hash_table__Var_37,
  MR_Word mercury__hash_table__Var_38,
  MR_Word mercury__hash_table__Var_39,
  MR_Integer mercury__hash_table__V_12_12,
  MR_Integer mercury__hash_table__V_13_13,
  MR_ArrayPtr mercury__hash_table__V_14_14,
  MR_Box mercury__hash_table__V_18_15,
  MR_Box * mercury__hash_table__V_19_16,
  MR_Box mercury__hash_table__V_20_17,
  MR_Box * mercury__hash_table__V_21_18,
  MR_Box mercury__hash_table__V_22_19,
  MR_Box * mercury__hash_table__V_23_20);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_52_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(
  MR_Word mercury__hash_table__Var_34,
  MR_Word mercury__hash_table__Var_35,
  MR_Word mercury__hash_table__Var_36,
  MR_Word mercury__hash_table__Var_37,
  MR_Word mercury__hash_table__Var_38,
  MR_Word mercury__hash_table__Var_39,
  MR_Integer mercury__hash_table__V_12_12,
  MR_Integer mercury__hash_table__V_13_13,
  MR_ArrayPtr mercury__hash_table__V_14_14,
  MR_Box mercury__hash_table__V_18_15,
  MR_Box * mercury__hash_table__V_19_16,
  MR_Box mercury__hash_table__V_20_17,
  MR_Box * mercury__hash_table__V_21_18,
  MR_Box mercury__hash_table__V_22_19,
  MR_Box * mercury__hash_table__V_23_20);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(
  MR_Word mercury__hash_table__Var_34,
  MR_Word mercury__hash_table__Var_35,
  MR_Word mercury__hash_table__Var_36,
  MR_Word mercury__hash_table__Var_37,
  MR_Word mercury__hash_table__Var_38,
  MR_Word mercury__hash_table__Var_39,
  MR_Integer mercury__hash_table__V_12_12,
  MR_Integer mercury__hash_table__V_13_13,
  MR_ArrayPtr mercury__hash_table__V_14_14,
  MR_Box mercury__hash_table__V_18_15,
  MR_Box * mercury__hash_table__V_19_16,
  MR_Box mercury__hash_table__V_20_17,
  MR_Box * mercury__hash_table__V_21_18,
  MR_Box mercury__hash_table__V_22_19,
  MR_Box * mercury__hash_table__V_23_20);

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_52_50_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word mercury__hash_table__Var_28,
  MR_Word mercury__hash_table__Var_29,
  MR_Word mercury__hash_table__Var_30,
  MR_Word mercury__hash_table__Var_31,
  MR_Word mercury__hash_table__Var_32,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Integer mercury__hash_table__V_11_11,
  MR_ArrayPtr mercury__hash_table__V_12_12,
  MR_Box mercury__hash_table__V_15_13,
  MR_Box * mercury__hash_table__V_16_14,
  MR_Box mercury__hash_table__V_17_15,
  MR_Box * mercury__hash_table__V_18_16);

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_52_49_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word mercury__hash_table__Var_28,
  MR_Word mercury__hash_table__Var_29,
  MR_Word mercury__hash_table__Var_30,
  MR_Word mercury__hash_table__Var_31,
  MR_Word mercury__hash_table__Var_32,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Integer mercury__hash_table__V_11_11,
  MR_ArrayPtr mercury__hash_table__V_12_12,
  MR_Box mercury__hash_table__V_15_13,
  MR_Box * mercury__hash_table__V_16_14,
  MR_Box mercury__hash_table__V_17_15,
  MR_Box * mercury__hash_table__V_18_16);

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word mercury__hash_table__Var_28,
  MR_Word mercury__hash_table__Var_29,
  MR_Word mercury__hash_table__Var_30,
  MR_Word mercury__hash_table__Var_31,
  MR_Word mercury__hash_table__Var_32,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Integer mercury__hash_table__V_11_11,
  MR_ArrayPtr mercury__hash_table__V_12_12,
  MR_Box mercury__hash_table__V_15_13,
  MR_Box * mercury__hash_table__V_16_14,
  MR_Box mercury__hash_table__V_17_15,
  MR_Box * mercury__hash_table__V_18_16);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_57_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word mercury__hash_table__Var_28,
  MR_Word mercury__hash_table__Var_29,
  MR_Word mercury__hash_table__Var_30,
  MR_Word mercury__hash_table__Var_31,
  MR_Word mercury__hash_table__Var_32,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Integer mercury__hash_table__V_11_11,
  MR_ArrayPtr mercury__hash_table__V_12_12,
  MR_Box mercury__hash_table__V_15_13,
  MR_Box * mercury__hash_table__V_16_14,
  MR_Box mercury__hash_table__V_17_15,
  MR_Box * mercury__hash_table__V_18_16);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word mercury__hash_table__Var_28,
  MR_Word mercury__hash_table__Var_29,
  MR_Word mercury__hash_table__Var_30,
  MR_Word mercury__hash_table__Var_31,
  MR_Word mercury__hash_table__Var_32,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Integer mercury__hash_table__V_11_11,
  MR_ArrayPtr mercury__hash_table__V_12_12,
  MR_Box mercury__hash_table__V_15_13,
  MR_Box * mercury__hash_table__V_16_14,
  MR_Box mercury__hash_table__V_17_15,
  MR_Box * mercury__hash_table__V_18_16);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word mercury__hash_table__Var_28,
  MR_Word mercury__hash_table__Var_29,
  MR_Word mercury__hash_table__Var_30,
  MR_Word mercury__hash_table__Var_31,
  MR_Word mercury__hash_table__Var_32,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Integer mercury__hash_table__V_11_11,
  MR_ArrayPtr mercury__hash_table__V_12_12,
  MR_Box mercury__hash_table__V_15_13,
  MR_Box * mercury__hash_table__V_16_14,
  MR_Box mercury__hash_table__V_17_15,
  MR_Box * mercury__hash_table__V_18_16);

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word mercury__hash_table__Var_22,
  MR_Word mercury__hash_table__Var_23,
  MR_Word mercury__hash_table__Var_24,
  MR_Word mercury__hash_table__Var_25,
  MR_ArrayPtr mercury__hash_table__V_8_8,
  MR_Integer mercury__hash_table__V_9_9,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Box mercury__hash_table__V_12_11,
  MR_Box * mercury__hash_table__V_13_12);

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word mercury__hash_table__Var_22,
  MR_Word mercury__hash_table__Var_23,
  MR_Word mercury__hash_table__Var_24,
  MR_Word mercury__hash_table__Var_25,
  MR_ArrayPtr mercury__hash_table__V_8_8,
  MR_Integer mercury__hash_table__V_9_9,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Box mercury__hash_table__V_12_11,
  MR_Box * mercury__hash_table__V_13_12);

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word mercury__hash_table__Var_22,
  MR_Word mercury__hash_table__Var_23,
  MR_Word mercury__hash_table__Var_24,
  MR_Word mercury__hash_table__Var_25,
  MR_ArrayPtr mercury__hash_table__V_8_8,
  MR_Integer mercury__hash_table__V_9_9,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Box mercury__hash_table__V_12_11,
  MR_Box * mercury__hash_table__V_13_12);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word mercury__hash_table__Var_22,
  MR_Word mercury__hash_table__Var_23,
  MR_Word mercury__hash_table__Var_24,
  MR_Word mercury__hash_table__Var_25,
  MR_ArrayPtr mercury__hash_table__V_8_8,
  MR_Integer mercury__hash_table__V_9_9,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Box mercury__hash_table__V_12_11,
  MR_Box * mercury__hash_table__V_13_12);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word mercury__hash_table__Var_22,
  MR_Word mercury__hash_table__Var_23,
  MR_Word mercury__hash_table__Var_24,
  MR_Word mercury__hash_table__Var_25,
  MR_ArrayPtr mercury__hash_table__V_8_8,
  MR_Integer mercury__hash_table__V_9_9,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Box mercury__hash_table__V_12_11,
  MR_Box * mercury__hash_table__V_13_12);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word mercury__hash_table__Var_22,
  MR_Word mercury__hash_table__Var_23,
  MR_Word mercury__hash_table__Var_24,
  MR_Word mercury__hash_table__Var_25,
  MR_ArrayPtr mercury__hash_table__V_8_8,
  MR_Integer mercury__hash_table__V_9_9,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Box mercury__hash_table__V_12_11,
  MR_Box * mercury__hash_table__V_13_12);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word mercury__hash_table__Var_22,
  MR_Word mercury__hash_table__Var_23,
  MR_Word mercury__hash_table__Var_24,
  MR_Word mercury__hash_table__Var_25,
  MR_ArrayPtr mercury__hash_table__V_8_8,
  MR_Integer mercury__hash_table__V_9_9,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Box mercury__hash_table__V_12_11,
  MR_Box * mercury__hash_table__V_13_12);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word mercury__hash_table__Var_22,
  MR_Word mercury__hash_table__Var_23,
  MR_Word mercury__hash_table__Var_24,
  MR_Word mercury__hash_table__Var_25,
  MR_ArrayPtr mercury__hash_table__V_8_8,
  MR_Integer mercury__hash_table__V_9_9,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Box mercury__hash_table__V_12_11,
  MR_Box * mercury__hash_table__V_13_12);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__array_0(
  MR_Word mercury__hash_table__Var_27,
  MR_Word mercury__hash_table__Var_28,
  MR_ArrayPtr mercury__hash_table__V_8_8,
  MR_Integer mercury__hash_table__V_9_9,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Word mercury__hash_table__V_12_11,
  MR_Word * mercury__hash_table__V_13_12);

static MR_Integer MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_50_55_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
  MR_Word mercury__hash_table__Var_19,
  MR_ArrayPtr mercury__hash_table__V_8_8,
  MR_Integer mercury__hash_table__V_9_9,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Integer mercury__hash_table__V_11_11);

static MR_Integer MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0(
  MR_Word mercury__hash_table__AL_6,
  MR_Word mercury__hash_table__HashPred_7,
  MR_Integer mercury__hash_table__NumBuckets_8,
  MR_ArrayPtr mercury__hash_table__STATE_VARIABLE_Buckets_0_13,
  MR_ArrayPtr * mercury__hash_table__STATE_VARIABLE_Buckets_14);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_p_0(
  MR_Integer mercury__hash_table__I_7,
  MR_ArrayPtr mercury__hash_table__OldBuckets_8,
  MR_Word mercury__hash_table__HashPred_9,
  MR_Integer mercury__hash_table__NumBuckets_10,
  MR_ArrayPtr mercury__hash_table__STATE_VARIABLE_Buckets_0_13,
  MR_ArrayPtr * mercury__hash_table__STATE_VARIABLE_Buckets_14);

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_12,
  MR_Word mercury__hash_table__AL0_4,
  MR_Box mercury__hash_table__K_5,
  MR_Word * mercury__hash_table__AL_6);

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_14,
  MR_Word mercury__hash_table__AL0_5,
  MR_Box mercury__hash_table__K_6,
  MR_Box mercury__hash_table__V_7,
  MR_Word * mercury__hash_table__AL_8);

static void MR_CALL 
mercury__hash_table__foldl__ho25_4_p_in__list_0(
  MR_Word mercury__hash_table__HeadVar__2_2,
  MR_Integer mercury__hash_table__HeadVar__3_3,
  MR_Integer * mercury__hash_table__HeadVar__4_4);

static MR_Word MR_CALL 
mercury__hash_table__expand_4_f_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_20,
  MR_Word mercury__hash_table__TypeInfo_for_V_21,
  MR_Integer mercury__hash_table__NumOccupants_6,
  MR_Integer mercury__hash_table__MaxOccupants0_7,
  MR_Word mercury__hash_table__HashPred_8,
  MR_ArrayPtr mercury__hash_table__Buckets0_9);


static /* final */ const MR_Box mercury__hash_table_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__hash_table_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__hash_table_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__hash_table_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__hash_table_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__hash_table_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__hash_table_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__hash_table_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__hash_table_scalar_common_2[0])),
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
#include "hash_table.mh"
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



static const MR_FA_PseudoTypeInfo_Struct2 mercury__hash_table__hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2 = {
  &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__hash_table__array__pti_array_1__pseudo_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &mercury__hash_table__hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
  }
};

const MR_TypeCtorInfo_Struct mercury__hash_table__hash_table__type_ctor_info_buckets_2 = {
  (MR_Integer) 2,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__hash_table____Unify____buckets_2_0_10001)),
  ((MR_Box) (mercury__hash_table____Compare____buckets_2_0_10001)),
  (MR_String) "hash_table",
  (MR_String) "buckets",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__hash_table__array__pti_array_1__pseudo_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_VA_PseudoTypeInfo_Struct2 mercury__hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

const MR_TypeCtorInfo_Struct mercury__hash_table__hash_table__type_ctor_info_hash_pred_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__hash_table____Unify____hash_pred_1_0_10001)),
  ((MR_Box) (mercury__hash_table____Compare____hash_pred_1_0_10001)),
  (MR_String) "hash_table",
  (MR_String) "hash_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo mercury__hash_table__hash_table__field_types_hash_table_2_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__hash_table__array__pti_array_1__pseudo_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
};

static const MR_ConstString mercury__hash_table__hash_table__field_names_hash_table_2_0[4] = {
  (MR_String) "num_occupants",
  (MR_String) "max_occupants",
  (MR_String) "hash_pred",
  (MR_String) "buckets"
};

static const MR_DuFunctorDesc mercury__hash_table__hash_table__du_functor_desc_hash_table_2_0 = {
  (MR_String) "ht",
  (MR_Integer) 4,
  (MR_Integer) 12,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__hash_table__hash_table__field_types_hash_table_2_0,
  mercury__hash_table__hash_table__field_names_hash_table_2_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_table_2_0[1] = {
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_2_0
};

static const MR_DuPtagLayout mercury__hash_table__hash_table__du_ptag_ordered_hash_table_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__hash_table__hash_table__du_stag_ordered_hash_table_2_0
  }
};

static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_name_ordered_hash_table_2[1] = {
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_2_0
};

static const MR_Integer mercury__hash_table__hash_table__functor_number_map_hash_table_2[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__hash_table__hash_table__type_ctor_info_hash_table_2 = {
  (MR_Integer) 2,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__hash_table____Unify____hash_table_2_0_10001)),
  ((MR_Box) (mercury__hash_table____Compare____hash_table_2_0_10001)),
  (MR_String) "hash_table",
  (MR_String) "hash_table",
  {     mercury__hash_table__hash_table__du_name_ordered_hash_table_2 },
  {     mercury__hash_table__hash_table__du_ptag_ordered_hash_table_2 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__hash_table__hash_table__functor_number_map_hash_table_2
};

static const MR_DuFunctorDesc mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_0 = {
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__hash_table__hash_table__field_types_hash_table_alist_2_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

static const MR_DuFunctorDesc mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_1 = {
  (MR_String) "ht_single",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__hash_table__hash_table__field_types_hash_table_alist_2_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__hash_table__hash_table__field_types_hash_table_alist_2_2[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &mercury__hash_table__hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
};

static const MR_DuFunctorDesc mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_2 = {
  (MR_String) "ht_cons",
  (MR_Integer) 3,
  (MR_Integer) 7,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__hash_table__hash_table__field_types_hash_table_alist_2_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_table_alist_2_0[1] = {
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_0
};

static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_table_alist_2_1[1] = {
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_1
};

static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_table_alist_2_2[1] = {
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_2
};

static const MR_DuPtagLayout mercury__hash_table__hash_table__du_ptag_ordered_hash_table_alist_2[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__hash_table__hash_table__du_stag_ordered_hash_table_alist_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__hash_table__hash_table__du_stag_ordered_hash_table_alist_2_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__hash_table__hash_table__du_stag_ordered_hash_table_alist_2_2
  }
};

static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_name_ordered_hash_table_alist_2[3] = {
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_2,
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_0,
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_1
};

static const MR_Integer mercury__hash_table__hash_table__functor_number_map_hash_table_alist_2[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2 = {
  (MR_Integer) 2,
  (MR_Integer) 17,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__hash_table____Unify____hash_table_alist_2_0_10001)),
  ((MR_Box) (mercury__hash_table____Compare____hash_table_alist_2_0_10001)),
  (MR_String) "hash_table",
  (MR_String) "hash_table_alist",
  {     mercury__hash_table__hash_table__du_name_ordered_hash_table_alist_2 },
  {     mercury__hash_table__hash_table__du_ptag_ordered_hash_table_alist_2 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__hash_table__hash_table__functor_number_map_hash_table_alist_2
};

static MR_bool MR_CALL 
mercury__hash_table____Unify____buckets_2_0_10001(
  MR_Box mercury__hash_table__wrapper_arg_1,
  MR_Box mercury__hash_table__wrapper_arg_2,
  MR_Box mercury__hash_table__wrapper_arg_3,
  MR_Box mercury__hash_table__wrapper_arg_4)
{
  {
    MR_bool mercury__hash_table__succeeded;

    {
      mercury__hash_table__succeeded = mercury__hash_table____Unify____buckets_2_0(((MR_Word) mercury__hash_table__wrapper_arg_1), ((MR_Word) mercury__hash_table__wrapper_arg_2), ((MR_ArrayPtr) mercury__hash_table__wrapper_arg_3), ((MR_ArrayPtr) mercury__hash_table__wrapper_arg_4));
    }
    return mercury__hash_table__succeeded;
  }
}

static void MR_CALL 
mercury__hash_table____Compare____buckets_2_0_10001(
  MR_Box mercury__hash_table__wrapper_arg_1,
  MR_Box mercury__hash_table__wrapper_arg_2,
  MR_Box * mercury__hash_table__wrapper_arg_3,
  MR_Box mercury__hash_table__wrapper_arg_4,
  MR_Box mercury__hash_table__wrapper_arg_5)
{
  {
    MR_Word mercury__hash_table__conv0_HeadVar__1_1;

    {
      mercury__hash_table____Compare____buckets_2_0(((MR_Word) mercury__hash_table__wrapper_arg_1), ((MR_Word) mercury__hash_table__wrapper_arg_2), &mercury__hash_table__conv0_HeadVar__1_1, ((MR_ArrayPtr) mercury__hash_table__wrapper_arg_4), ((MR_ArrayPtr) mercury__hash_table__wrapper_arg_5));
    }
    *mercury__hash_table__wrapper_arg_3 = ((MR_Box) (mercury__hash_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__hash_table____Unify____hash_pred_1_0_10001(
  MR_Box mercury__hash_table__wrapper_arg_1,
  MR_Box mercury__hash_table__wrapper_arg_2,
  MR_Box mercury__hash_table__wrapper_arg_3)
{
  {
    MR_bool mercury__hash_table__succeeded;

    {
      mercury__hash_table__succeeded = mercury__hash_table____Unify____hash_pred_1_0(((MR_Word) mercury__hash_table__wrapper_arg_1), ((MR_Word) mercury__hash_table__wrapper_arg_2), ((MR_Word) mercury__hash_table__wrapper_arg_3));
    }
    return mercury__hash_table__succeeded;
  }
}

static void MR_CALL 
mercury__hash_table____Compare____hash_pred_1_0_10001(
  MR_Box mercury__hash_table__wrapper_arg_1,
  MR_Box * mercury__hash_table__wrapper_arg_2,
  MR_Box mercury__hash_table__wrapper_arg_3,
  MR_Box mercury__hash_table__wrapper_arg_4)
{
  {
    MR_Word mercury__hash_table__conv0_HeadVar__1_1;

    {
      mercury__hash_table____Compare____hash_pred_1_0(((MR_Word) mercury__hash_table__wrapper_arg_1), &mercury__hash_table__conv0_HeadVar__1_1, ((MR_Word) mercury__hash_table__wrapper_arg_3), ((MR_Word) mercury__hash_table__wrapper_arg_4));
    }
    *mercury__hash_table__wrapper_arg_2 = ((MR_Box) (mercury__hash_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__hash_table____Unify____hash_table_2_0_10001(
  MR_Box mercury__hash_table__wrapper_arg_1,
  MR_Box mercury__hash_table__wrapper_arg_2,
  MR_Box mercury__hash_table__wrapper_arg_3,
  MR_Box mercury__hash_table__wrapper_arg_4)
{
  {
    MR_bool mercury__hash_table__succeeded;

    {
      mercury__hash_table__succeeded = mercury__hash_table____Unify____hash_table_2_0(((MR_Word) mercury__hash_table__wrapper_arg_1), ((MR_Word) mercury__hash_table__wrapper_arg_2), ((MR_Word) mercury__hash_table__wrapper_arg_3), ((MR_Word) mercury__hash_table__wrapper_arg_4));
    }
    return mercury__hash_table__succeeded;
  }
}

static void MR_CALL 
mercury__hash_table____Compare____hash_table_2_0_10001(
  MR_Box mercury__hash_table__wrapper_arg_1,
  MR_Box mercury__hash_table__wrapper_arg_2,
  MR_Box * mercury__hash_table__wrapper_arg_3,
  MR_Box mercury__hash_table__wrapper_arg_4,
  MR_Box mercury__hash_table__wrapper_arg_5)
{
  {
    MR_Word mercury__hash_table__conv0_HeadVar__1_1;

    {
      mercury__hash_table____Compare____hash_table_2_0(((MR_Word) mercury__hash_table__wrapper_arg_1), ((MR_Word) mercury__hash_table__wrapper_arg_2), &mercury__hash_table__conv0_HeadVar__1_1, ((MR_Word) mercury__hash_table__wrapper_arg_4), ((MR_Word) mercury__hash_table__wrapper_arg_5));
    }
    *mercury__hash_table__wrapper_arg_3 = ((MR_Box) (mercury__hash_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__hash_table____Unify____hash_table_alist_2_0_10001(
  MR_Box mercury__hash_table__wrapper_arg_1,
  MR_Box mercury__hash_table__wrapper_arg_2,
  MR_Box mercury__hash_table__wrapper_arg_3,
  MR_Box mercury__hash_table__wrapper_arg_4)
{
  {
    MR_bool mercury__hash_table__succeeded;

    {
      mercury__hash_table__succeeded = mercury__hash_table____Unify____hash_table_alist_2_0(((MR_Word) mercury__hash_table__wrapper_arg_1), ((MR_Word) mercury__hash_table__wrapper_arg_2), ((MR_Word) mercury__hash_table__wrapper_arg_3), ((MR_Word) mercury__hash_table__wrapper_arg_4));
    }
    return mercury__hash_table__succeeded;
  }
}

static void MR_CALL 
mercury__hash_table____Compare____hash_table_alist_2_0_10001(
  MR_Box mercury__hash_table__wrapper_arg_1,
  MR_Box mercury__hash_table__wrapper_arg_2,
  MR_Box * mercury__hash_table__wrapper_arg_3,
  MR_Box mercury__hash_table__wrapper_arg_4,
  MR_Box mercury__hash_table__wrapper_arg_5)
{
  {
    MR_Word mercury__hash_table__conv0_HeadVar__1_1;

    {
      mercury__hash_table____Compare____hash_table_alist_2_0(((MR_Word) mercury__hash_table__wrapper_arg_1), ((MR_Word) mercury__hash_table__wrapper_arg_2), &mercury__hash_table__conv0_HeadVar__1_1, ((MR_Word) mercury__hash_table__wrapper_arg_4), ((MR_Word) mercury__hash_table__wrapper_arg_5));
    }
    *mercury__hash_table__wrapper_arg_3 = ((MR_Box) (mercury__hash_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_56_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(
  MR_Word mercury__hash_table__Var_34,
  MR_Word mercury__hash_table__Var_35,
  MR_Word mercury__hash_table__Var_36,
  MR_Word mercury__hash_table__Var_37,
  MR_Word mercury__hash_table__Var_38,
  MR_Word mercury__hash_table__Var_39,
  MR_Integer mercury__hash_table__V_12_12,
  MR_Integer mercury__hash_table__V_13_13,
  MR_ArrayPtr mercury__hash_table__V_14_14,
  MR_Box mercury__hash_table__V_18_15,
  MR_Box * mercury__hash_table__V_19_16,
  MR_Box mercury__hash_table__V_20_17,
  MR_Box * mercury__hash_table__V_21_18,
  MR_Box mercury__hash_table__V_22_19,
  MR_Box * mercury__hash_table__V_23_20)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_13_13 < mercury__hash_table__V_12_12);

        if (mercury__hash_table__succeeded)
          {
            *mercury__hash_table__V_23_20 = mercury__hash_table__V_22_19;
            *mercury__hash_table__V_21_18 = mercury__hash_table__V_20_17;
            *mercury__hash_table__V_19_16 = mercury__hash_table__V_18_15;
            mercury__hash_table__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__hash_table__V_24_21;
            MR_Box mercury__hash_table__V_25_22;
            MR_Box mercury__hash_table__V_26_23;
            MR_Box mercury__hash_table__V_27_24;
            MR_Integer mercury__hash_table__V_28_25;
            MR_Integer mercury__hash_table__V_32_26;
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_43;
            MR_Box mercury__hash_table__conv0_Item;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_56_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_14_14 , Array);
	Index =  mercury__hash_table__V_12_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
            mercury__hash_table__V_24_21 = ((MR_Word) mercury__hash_table__conv0_Item);
}
            {
              mercury__hash_table__succeeded = mercury__hash_table__fold3_p_8_p_5(mercury__hash_table__Var_34, mercury__hash_table__Var_35, mercury__hash_table__Var_36, mercury__hash_table__Var_37, mercury__hash_table__Var_38, mercury__hash_table__Var_39, mercury__hash_table__V_24_21, mercury__hash_table__V_18_15, &mercury__hash_table__V_25_22, mercury__hash_table__V_20_17, &mercury__hash_table__V_26_23, mercury__hash_table__V_22_19, &mercury__hash_table__V_27_24);
            }
            if (mercury__hash_table__succeeded)
              {
                mercury__hash_table__V_32_26 = (MR_Integer) 1;
                mercury__hash_table__V_28_25 = (mercury__hash_table__V_12_12 + mercury__hash_table__V_32_26);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__hash_table__next_value_of_V_12_12 = mercury__hash_table__V_28_25;
                  MR_Box mercury__hash_table__next_value_of_V_18_15 = mercury__hash_table__V_25_22;
                  MR_Box mercury__hash_table__next_value_of_V_20_17 = mercury__hash_table__V_26_23;
                  MR_Box mercury__hash_table__next_value_of_V_22_19 = mercury__hash_table__V_27_24;

                  mercury__hash_table__V_22_19 = mercury__hash_table__next_value_of_V_22_19;
                  mercury__hash_table__V_20_17 = mercury__hash_table__next_value_of_V_20_17;
                  mercury__hash_table__V_18_15 = mercury__hash_table__next_value_of_V_18_15;
                  mercury__hash_table__V_12_12 = mercury__hash_table__next_value_of_V_12_12;
                }
                continue;
              }
          }
        return mercury__hash_table__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_55_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(
  MR_Word mercury__hash_table__Var_34,
  MR_Word mercury__hash_table__Var_35,
  MR_Word mercury__hash_table__Var_36,
  MR_Word mercury__hash_table__Var_37,
  MR_Word mercury__hash_table__Var_38,
  MR_Word mercury__hash_table__Var_39,
  MR_Integer mercury__hash_table__V_12_12,
  MR_Integer mercury__hash_table__V_13_13,
  MR_ArrayPtr mercury__hash_table__V_14_14,
  MR_Box mercury__hash_table__V_18_15,
  MR_Box * mercury__hash_table__V_19_16,
  MR_Box mercury__hash_table__V_20_17,
  MR_Box * mercury__hash_table__V_21_18,
  MR_Box mercury__hash_table__V_22_19,
  MR_Box * mercury__hash_table__V_23_20)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_13_13 < mercury__hash_table__V_12_12);

        if (mercury__hash_table__succeeded)
          {
            *mercury__hash_table__V_23_20 = mercury__hash_table__V_22_19;
            *mercury__hash_table__V_21_18 = mercury__hash_table__V_20_17;
            *mercury__hash_table__V_19_16 = mercury__hash_table__V_18_15;
            mercury__hash_table__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__hash_table__V_24_21;
            MR_Box mercury__hash_table__V_25_22;
            MR_Box mercury__hash_table__V_26_23;
            MR_Box mercury__hash_table__V_27_24;
            MR_Integer mercury__hash_table__V_28_25;
            MR_Integer mercury__hash_table__V_32_26;
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_43;
            MR_Box mercury__hash_table__conv0_Item;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_55_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_14_14 , Array);
	Index =  mercury__hash_table__V_12_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
            mercury__hash_table__V_24_21 = ((MR_Word) mercury__hash_table__conv0_Item);
}
            {
              mercury__hash_table__succeeded = mercury__hash_table__fold3_p_8_p_4(mercury__hash_table__Var_34, mercury__hash_table__Var_35, mercury__hash_table__Var_36, mercury__hash_table__Var_37, mercury__hash_table__Var_38, mercury__hash_table__Var_39, mercury__hash_table__V_24_21, mercury__hash_table__V_18_15, &mercury__hash_table__V_25_22, mercury__hash_table__V_20_17, &mercury__hash_table__V_26_23, mercury__hash_table__V_22_19, &mercury__hash_table__V_27_24);
            }
            if (mercury__hash_table__succeeded)
              {
                mercury__hash_table__V_32_26 = (MR_Integer) 1;
                mercury__hash_table__V_28_25 = (mercury__hash_table__V_12_12 + mercury__hash_table__V_32_26);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__hash_table__next_value_of_V_12_12 = mercury__hash_table__V_28_25;
                  MR_Box mercury__hash_table__next_value_of_V_18_15 = mercury__hash_table__V_25_22;
                  MR_Box mercury__hash_table__next_value_of_V_20_17 = mercury__hash_table__V_26_23;
                  MR_Box mercury__hash_table__next_value_of_V_22_19 = mercury__hash_table__V_27_24;

                  mercury__hash_table__V_22_19 = mercury__hash_table__next_value_of_V_22_19;
                  mercury__hash_table__V_20_17 = mercury__hash_table__next_value_of_V_20_17;
                  mercury__hash_table__V_18_15 = mercury__hash_table__next_value_of_V_18_15;
                  mercury__hash_table__V_12_12 = mercury__hash_table__next_value_of_V_12_12;
                }
                continue;
              }
          }
        return mercury__hash_table__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(
  MR_Word mercury__hash_table__Var_34,
  MR_Word mercury__hash_table__Var_35,
  MR_Word mercury__hash_table__Var_36,
  MR_Word mercury__hash_table__Var_37,
  MR_Word mercury__hash_table__Var_38,
  MR_Word mercury__hash_table__Var_39,
  MR_Integer mercury__hash_table__V_12_12,
  MR_Integer mercury__hash_table__V_13_13,
  MR_ArrayPtr mercury__hash_table__V_14_14,
  MR_Box mercury__hash_table__V_18_15,
  MR_Box * mercury__hash_table__V_19_16,
  MR_Box mercury__hash_table__V_20_17,
  MR_Box * mercury__hash_table__V_21_18,
  MR_Box mercury__hash_table__V_22_19,
  MR_Box * mercury__hash_table__V_23_20)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_13_13 < mercury__hash_table__V_12_12);

        if (mercury__hash_table__succeeded)
          {
            *mercury__hash_table__V_23_20 = mercury__hash_table__V_22_19;
            *mercury__hash_table__V_21_18 = mercury__hash_table__V_20_17;
            *mercury__hash_table__V_19_16 = mercury__hash_table__V_18_15;
            mercury__hash_table__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__hash_table__V_24_21;
            MR_Box mercury__hash_table__V_25_22;
            MR_Box mercury__hash_table__V_26_23;
            MR_Box mercury__hash_table__V_27_24;
            MR_Integer mercury__hash_table__V_28_25;
            MR_Integer mercury__hash_table__V_32_26;
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_43;
            MR_Box mercury__hash_table__conv0_Item;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_14_14 , Array);
	Index =  mercury__hash_table__V_12_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
            mercury__hash_table__V_24_21 = ((MR_Word) mercury__hash_table__conv0_Item);
}
            {
              mercury__hash_table__succeeded = mercury__hash_table__fold3_p_8_p_3(mercury__hash_table__Var_34, mercury__hash_table__Var_35, mercury__hash_table__Var_36, mercury__hash_table__Var_37, mercury__hash_table__Var_38, mercury__hash_table__Var_39, mercury__hash_table__V_24_21, mercury__hash_table__V_18_15, &mercury__hash_table__V_25_22, mercury__hash_table__V_20_17, &mercury__hash_table__V_26_23, mercury__hash_table__V_22_19, &mercury__hash_table__V_27_24);
            }
            if (mercury__hash_table__succeeded)
              {
                mercury__hash_table__V_32_26 = (MR_Integer) 1;
                mercury__hash_table__V_28_25 = (mercury__hash_table__V_12_12 + mercury__hash_table__V_32_26);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__hash_table__next_value_of_V_12_12 = mercury__hash_table__V_28_25;
                  MR_Box mercury__hash_table__next_value_of_V_18_15 = mercury__hash_table__V_25_22;
                  MR_Box mercury__hash_table__next_value_of_V_20_17 = mercury__hash_table__V_26_23;
                  MR_Box mercury__hash_table__next_value_of_V_22_19 = mercury__hash_table__V_27_24;

                  mercury__hash_table__V_22_19 = mercury__hash_table__next_value_of_V_22_19;
                  mercury__hash_table__V_20_17 = mercury__hash_table__next_value_of_V_20_17;
                  mercury__hash_table__V_18_15 = mercury__hash_table__next_value_of_V_18_15;
                  mercury__hash_table__V_12_12 = mercury__hash_table__next_value_of_V_12_12;
                }
                continue;
              }
          }
        return mercury__hash_table__succeeded;
      }
      break;
    }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(
  MR_Word mercury__hash_table__Var_34,
  MR_Word mercury__hash_table__Var_35,
  MR_Word mercury__hash_table__Var_36,
  MR_Word mercury__hash_table__Var_37,
  MR_Word mercury__hash_table__Var_38,
  MR_Word mercury__hash_table__Var_39,
  MR_Integer mercury__hash_table__V_12_12,
  MR_Integer mercury__hash_table__V_13_13,
  MR_ArrayPtr mercury__hash_table__V_14_14,
  MR_Box mercury__hash_table__V_18_15,
  MR_Box * mercury__hash_table__V_19_16,
  MR_Box mercury__hash_table__V_20_17,
  MR_Box * mercury__hash_table__V_21_18,
  MR_Box mercury__hash_table__V_22_19,
  MR_Box * mercury__hash_table__V_23_20)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_13_13 < mercury__hash_table__V_12_12);

        if (mercury__hash_table__succeeded)
          {
            *mercury__hash_table__V_23_20 = mercury__hash_table__V_22_19;
            *mercury__hash_table__V_21_18 = mercury__hash_table__V_20_17;
            *mercury__hash_table__V_19_16 = mercury__hash_table__V_18_15;
          }
        else
          {
            MR_Word mercury__hash_table__V_24_21;
            MR_Box mercury__hash_table__V_25_22;
            MR_Box mercury__hash_table__V_26_23;
            MR_Box mercury__hash_table__V_27_24;
            MR_Integer mercury__hash_table__V_28_25;
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_43;
            MR_Box mercury__hash_table__conv0_Item;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_14_14 , Array);
	Index =  mercury__hash_table__V_12_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
            mercury__hash_table__V_24_21 = ((MR_Word) mercury__hash_table__conv0_Item);
}
            {
              mercury__hash_table__fold3_p_8_p_2(mercury__hash_table__Var_34, mercury__hash_table__Var_35, mercury__hash_table__Var_36, mercury__hash_table__Var_37, mercury__hash_table__Var_38, mercury__hash_table__Var_39, mercury__hash_table__V_24_21, mercury__hash_table__V_18_15, &mercury__hash_table__V_25_22, mercury__hash_table__V_20_17, &mercury__hash_table__V_26_23, mercury__hash_table__V_22_19, &mercury__hash_table__V_27_24);
            }
            mercury__hash_table__V_28_25 = (mercury__hash_table__V_12_12 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__hash_table__next_value_of_V_12_12 = mercury__hash_table__V_28_25;
              MR_Box mercury__hash_table__next_value_of_V_18_15 = mercury__hash_table__V_25_22;
              MR_Box mercury__hash_table__next_value_of_V_20_17 = mercury__hash_table__V_26_23;
              MR_Box mercury__hash_table__next_value_of_V_22_19 = mercury__hash_table__V_27_24;

              mercury__hash_table__V_22_19 = mercury__hash_table__next_value_of_V_22_19;
              mercury__hash_table__V_20_17 = mercury__hash_table__next_value_of_V_20_17;
              mercury__hash_table__V_18_15 = mercury__hash_table__next_value_of_V_18_15;
              mercury__hash_table__V_12_12 = mercury__hash_table__next_value_of_V_12_12;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_52_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(
  MR_Word mercury__hash_table__Var_34,
  MR_Word mercury__hash_table__Var_35,
  MR_Word mercury__hash_table__Var_36,
  MR_Word mercury__hash_table__Var_37,
  MR_Word mercury__hash_table__Var_38,
  MR_Word mercury__hash_table__Var_39,
  MR_Integer mercury__hash_table__V_12_12,
  MR_Integer mercury__hash_table__V_13_13,
  MR_ArrayPtr mercury__hash_table__V_14_14,
  MR_Box mercury__hash_table__V_18_15,
  MR_Box * mercury__hash_table__V_19_16,
  MR_Box mercury__hash_table__V_20_17,
  MR_Box * mercury__hash_table__V_21_18,
  MR_Box mercury__hash_table__V_22_19,
  MR_Box * mercury__hash_table__V_23_20)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_13_13 < mercury__hash_table__V_12_12);

        if (mercury__hash_table__succeeded)
          {
            *mercury__hash_table__V_23_20 = mercury__hash_table__V_22_19;
            *mercury__hash_table__V_21_18 = mercury__hash_table__V_20_17;
            *mercury__hash_table__V_19_16 = mercury__hash_table__V_18_15;
          }
        else
          {
            MR_Word mercury__hash_table__V_24_21;
            MR_Box mercury__hash_table__V_25_22;
            MR_Box mercury__hash_table__V_26_23;
            MR_Box mercury__hash_table__V_27_24;
            MR_Integer mercury__hash_table__V_28_25;
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_43;
            MR_Box mercury__hash_table__conv0_Item;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_52_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_14_14 , Array);
	Index =  mercury__hash_table__V_12_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
            mercury__hash_table__V_24_21 = ((MR_Word) mercury__hash_table__conv0_Item);
}
            {
              mercury__hash_table__fold3_p_8_p_1(mercury__hash_table__Var_34, mercury__hash_table__Var_35, mercury__hash_table__Var_36, mercury__hash_table__Var_37, mercury__hash_table__Var_38, mercury__hash_table__Var_39, mercury__hash_table__V_24_21, mercury__hash_table__V_18_15, &mercury__hash_table__V_25_22, mercury__hash_table__V_20_17, &mercury__hash_table__V_26_23, mercury__hash_table__V_22_19, &mercury__hash_table__V_27_24);
            }
            mercury__hash_table__V_28_25 = (mercury__hash_table__V_12_12 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__hash_table__next_value_of_V_12_12 = mercury__hash_table__V_28_25;
              MR_Box mercury__hash_table__next_value_of_V_18_15 = mercury__hash_table__V_25_22;
              MR_Box mercury__hash_table__next_value_of_V_20_17 = mercury__hash_table__V_26_23;
              MR_Box mercury__hash_table__next_value_of_V_22_19 = mercury__hash_table__V_27_24;

              mercury__hash_table__V_22_19 = mercury__hash_table__next_value_of_V_22_19;
              mercury__hash_table__V_20_17 = mercury__hash_table__next_value_of_V_20_17;
              mercury__hash_table__V_18_15 = mercury__hash_table__next_value_of_V_18_15;
              mercury__hash_table__V_12_12 = mercury__hash_table__next_value_of_V_12_12;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(
  MR_Word mercury__hash_table__Var_34,
  MR_Word mercury__hash_table__Var_35,
  MR_Word mercury__hash_table__Var_36,
  MR_Word mercury__hash_table__Var_37,
  MR_Word mercury__hash_table__Var_38,
  MR_Word mercury__hash_table__Var_39,
  MR_Integer mercury__hash_table__V_12_12,
  MR_Integer mercury__hash_table__V_13_13,
  MR_ArrayPtr mercury__hash_table__V_14_14,
  MR_Box mercury__hash_table__V_18_15,
  MR_Box * mercury__hash_table__V_19_16,
  MR_Box mercury__hash_table__V_20_17,
  MR_Box * mercury__hash_table__V_21_18,
  MR_Box mercury__hash_table__V_22_19,
  MR_Box * mercury__hash_table__V_23_20)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_13_13 < mercury__hash_table__V_12_12);

        if (mercury__hash_table__succeeded)
          {
            *mercury__hash_table__V_23_20 = mercury__hash_table__V_22_19;
            *mercury__hash_table__V_21_18 = mercury__hash_table__V_20_17;
            *mercury__hash_table__V_19_16 = mercury__hash_table__V_18_15;
          }
        else
          {
            MR_Word mercury__hash_table__V_24_21;
            MR_Box mercury__hash_table__V_25_22;
            MR_Box mercury__hash_table__V_26_23;
            MR_Box mercury__hash_table__V_27_24;
            MR_Integer mercury__hash_table__V_28_25;
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_43;
            MR_Box mercury__hash_table__conv0_Item;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_14_14 , Array);
	Index =  mercury__hash_table__V_12_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
            mercury__hash_table__V_24_21 = ((MR_Word) mercury__hash_table__conv0_Item);
}
            {
              mercury__hash_table__fold3_p_8_p_0(mercury__hash_table__Var_34, mercury__hash_table__Var_35, mercury__hash_table__Var_36, mercury__hash_table__Var_37, mercury__hash_table__Var_38, mercury__hash_table__Var_39, mercury__hash_table__V_24_21, mercury__hash_table__V_18_15, &mercury__hash_table__V_25_22, mercury__hash_table__V_20_17, &mercury__hash_table__V_26_23, mercury__hash_table__V_22_19, &mercury__hash_table__V_27_24);
            }
            mercury__hash_table__V_28_25 = (mercury__hash_table__V_12_12 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__hash_table__next_value_of_V_12_12 = mercury__hash_table__V_28_25;
              MR_Box mercury__hash_table__next_value_of_V_18_15 = mercury__hash_table__V_25_22;
              MR_Box mercury__hash_table__next_value_of_V_20_17 = mercury__hash_table__V_26_23;
              MR_Box mercury__hash_table__next_value_of_V_22_19 = mercury__hash_table__V_27_24;

              mercury__hash_table__V_22_19 = mercury__hash_table__next_value_of_V_22_19;
              mercury__hash_table__V_20_17 = mercury__hash_table__next_value_of_V_20_17;
              mercury__hash_table__V_18_15 = mercury__hash_table__next_value_of_V_18_15;
              mercury__hash_table__V_12_12 = mercury__hash_table__next_value_of_V_12_12;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_52_50_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word mercury__hash_table__Var_28,
  MR_Word mercury__hash_table__Var_29,
  MR_Word mercury__hash_table__Var_30,
  MR_Word mercury__hash_table__Var_31,
  MR_Word mercury__hash_table__Var_32,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Integer mercury__hash_table__V_11_11,
  MR_ArrayPtr mercury__hash_table__V_12_12,
  MR_Box mercury__hash_table__V_15_13,
  MR_Box * mercury__hash_table__V_16_14,
  MR_Box mercury__hash_table__V_17_15,
  MR_Box * mercury__hash_table__V_18_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_11_11 < mercury__hash_table__V_10_10);

        if (mercury__hash_table__succeeded)
          {
            *mercury__hash_table__V_18_16 = mercury__hash_table__V_17_15;
            *mercury__hash_table__V_16_14 = mercury__hash_table__V_15_13;
            mercury__hash_table__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__hash_table__V_19_17;
            MR_Box mercury__hash_table__V_20_18;
            MR_Box mercury__hash_table__V_21_19;
            MR_Integer mercury__hash_table__V_22_20;
            MR_Integer mercury__hash_table__V_25_21;
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_36;
            MR_Box mercury__hash_table__conv0_Item;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_52_50_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_12_12 , Array);
	Index =  mercury__hash_table__V_10_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
            mercury__hash_table__V_19_17 = ((MR_Word) mercury__hash_table__conv0_Item);
}
            {
              mercury__hash_table__succeeded = mercury__hash_table__fold2_p_6_p_5(mercury__hash_table__Var_28, mercury__hash_table__Var_29, mercury__hash_table__Var_30, mercury__hash_table__Var_31, mercury__hash_table__Var_32, mercury__hash_table__V_19_17, mercury__hash_table__V_15_13, &mercury__hash_table__V_20_18, mercury__hash_table__V_17_15, &mercury__hash_table__V_21_19);
            }
            if (mercury__hash_table__succeeded)
              {
                mercury__hash_table__V_25_21 = (MR_Integer) 1;
                mercury__hash_table__V_22_20 = (mercury__hash_table__V_10_10 + mercury__hash_table__V_25_21);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__hash_table__next_value_of_V_10_10 = mercury__hash_table__V_22_20;
                  MR_Box mercury__hash_table__next_value_of_V_15_13 = mercury__hash_table__V_20_18;
                  MR_Box mercury__hash_table__next_value_of_V_17_15 = mercury__hash_table__V_21_19;

                  mercury__hash_table__V_17_15 = mercury__hash_table__next_value_of_V_17_15;
                  mercury__hash_table__V_15_13 = mercury__hash_table__next_value_of_V_15_13;
                  mercury__hash_table__V_10_10 = mercury__hash_table__next_value_of_V_10_10;
                }
                continue;
              }
          }
        return mercury__hash_table__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_52_49_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word mercury__hash_table__Var_28,
  MR_Word mercury__hash_table__Var_29,
  MR_Word mercury__hash_table__Var_30,
  MR_Word mercury__hash_table__Var_31,
  MR_Word mercury__hash_table__Var_32,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Integer mercury__hash_table__V_11_11,
  MR_ArrayPtr mercury__hash_table__V_12_12,
  MR_Box mercury__hash_table__V_15_13,
  MR_Box * mercury__hash_table__V_16_14,
  MR_Box mercury__hash_table__V_17_15,
  MR_Box * mercury__hash_table__V_18_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_11_11 < mercury__hash_table__V_10_10);

        if (mercury__hash_table__succeeded)
          {
            *mercury__hash_table__V_18_16 = mercury__hash_table__V_17_15;
            *mercury__hash_table__V_16_14 = mercury__hash_table__V_15_13;
            mercury__hash_table__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__hash_table__V_19_17;
            MR_Box mercury__hash_table__V_20_18;
            MR_Box mercury__hash_table__V_21_19;
            MR_Integer mercury__hash_table__V_22_20;
            MR_Integer mercury__hash_table__V_25_21;
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_36;
            MR_Box mercury__hash_table__conv0_Item;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_52_49_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_12_12 , Array);
	Index =  mercury__hash_table__V_10_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
            mercury__hash_table__V_19_17 = ((MR_Word) mercury__hash_table__conv0_Item);
}
            {
              mercury__hash_table__succeeded = mercury__hash_table__fold2_p_6_p_4(mercury__hash_table__Var_28, mercury__hash_table__Var_29, mercury__hash_table__Var_30, mercury__hash_table__Var_31, mercury__hash_table__Var_32, mercury__hash_table__V_19_17, mercury__hash_table__V_15_13, &mercury__hash_table__V_20_18, mercury__hash_table__V_17_15, &mercury__hash_table__V_21_19);
            }
            if (mercury__hash_table__succeeded)
              {
                mercury__hash_table__V_25_21 = (MR_Integer) 1;
                mercury__hash_table__V_22_20 = (mercury__hash_table__V_10_10 + mercury__hash_table__V_25_21);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__hash_table__next_value_of_V_10_10 = mercury__hash_table__V_22_20;
                  MR_Box mercury__hash_table__next_value_of_V_15_13 = mercury__hash_table__V_20_18;
                  MR_Box mercury__hash_table__next_value_of_V_17_15 = mercury__hash_table__V_21_19;

                  mercury__hash_table__V_17_15 = mercury__hash_table__next_value_of_V_17_15;
                  mercury__hash_table__V_15_13 = mercury__hash_table__next_value_of_V_15_13;
                  mercury__hash_table__V_10_10 = mercury__hash_table__next_value_of_V_10_10;
                }
                continue;
              }
          }
        return mercury__hash_table__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word mercury__hash_table__Var_28,
  MR_Word mercury__hash_table__Var_29,
  MR_Word mercury__hash_table__Var_30,
  MR_Word mercury__hash_table__Var_31,
  MR_Word mercury__hash_table__Var_32,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Integer mercury__hash_table__V_11_11,
  MR_ArrayPtr mercury__hash_table__V_12_12,
  MR_Box mercury__hash_table__V_15_13,
  MR_Box * mercury__hash_table__V_16_14,
  MR_Box mercury__hash_table__V_17_15,
  MR_Box * mercury__hash_table__V_18_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_11_11 < mercury__hash_table__V_10_10);

        if (mercury__hash_table__succeeded)
          {
            *mercury__hash_table__V_18_16 = mercury__hash_table__V_17_15;
            *mercury__hash_table__V_16_14 = mercury__hash_table__V_15_13;
            mercury__hash_table__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__hash_table__V_19_17;
            MR_Box mercury__hash_table__V_20_18;
            MR_Box mercury__hash_table__V_21_19;
            MR_Integer mercury__hash_table__V_22_20;
            MR_Integer mercury__hash_table__V_25_21;
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_36;
            MR_Box mercury__hash_table__conv0_Item;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_12_12 , Array);
	Index =  mercury__hash_table__V_10_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
            mercury__hash_table__V_19_17 = ((MR_Word) mercury__hash_table__conv0_Item);
}
            {
              mercury__hash_table__succeeded = mercury__hash_table__fold2_p_6_p_3(mercury__hash_table__Var_28, mercury__hash_table__Var_29, mercury__hash_table__Var_30, mercury__hash_table__Var_31, mercury__hash_table__Var_32, mercury__hash_table__V_19_17, mercury__hash_table__V_15_13, &mercury__hash_table__V_20_18, mercury__hash_table__V_17_15, &mercury__hash_table__V_21_19);
            }
            if (mercury__hash_table__succeeded)
              {
                mercury__hash_table__V_25_21 = (MR_Integer) 1;
                mercury__hash_table__V_22_20 = (mercury__hash_table__V_10_10 + mercury__hash_table__V_25_21);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__hash_table__next_value_of_V_10_10 = mercury__hash_table__V_22_20;
                  MR_Box mercury__hash_table__next_value_of_V_15_13 = mercury__hash_table__V_20_18;
                  MR_Box mercury__hash_table__next_value_of_V_17_15 = mercury__hash_table__V_21_19;

                  mercury__hash_table__V_17_15 = mercury__hash_table__next_value_of_V_17_15;
                  mercury__hash_table__V_15_13 = mercury__hash_table__next_value_of_V_15_13;
                  mercury__hash_table__V_10_10 = mercury__hash_table__next_value_of_V_10_10;
                }
                continue;
              }
          }
        return mercury__hash_table__succeeded;
      }
      break;
    }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_57_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word mercury__hash_table__Var_28,
  MR_Word mercury__hash_table__Var_29,
  MR_Word mercury__hash_table__Var_30,
  MR_Word mercury__hash_table__Var_31,
  MR_Word mercury__hash_table__Var_32,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Integer mercury__hash_table__V_11_11,
  MR_ArrayPtr mercury__hash_table__V_12_12,
  MR_Box mercury__hash_table__V_15_13,
  MR_Box * mercury__hash_table__V_16_14,
  MR_Box mercury__hash_table__V_17_15,
  MR_Box * mercury__hash_table__V_18_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_11_11 < mercury__hash_table__V_10_10);

        if (mercury__hash_table__succeeded)
          {
            *mercury__hash_table__V_18_16 = mercury__hash_table__V_17_15;
            *mercury__hash_table__V_16_14 = mercury__hash_table__V_15_13;
          }
        else
          {
            MR_Word mercury__hash_table__V_19_17;
            MR_Box mercury__hash_table__V_20_18;
            MR_Box mercury__hash_table__V_21_19;
            MR_Integer mercury__hash_table__V_22_20;
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_36;
            MR_Box mercury__hash_table__conv0_Item;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_57_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_12_12 , Array);
	Index =  mercury__hash_table__V_10_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
            mercury__hash_table__V_19_17 = ((MR_Word) mercury__hash_table__conv0_Item);
}
            {
              mercury__hash_table__fold2_p_6_p_2(mercury__hash_table__Var_28, mercury__hash_table__Var_29, mercury__hash_table__Var_30, mercury__hash_table__Var_31, mercury__hash_table__Var_32, mercury__hash_table__V_19_17, mercury__hash_table__V_15_13, &mercury__hash_table__V_20_18, mercury__hash_table__V_17_15, &mercury__hash_table__V_21_19);
            }
            mercury__hash_table__V_22_20 = (mercury__hash_table__V_10_10 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__hash_table__next_value_of_V_10_10 = mercury__hash_table__V_22_20;
              MR_Box mercury__hash_table__next_value_of_V_15_13 = mercury__hash_table__V_20_18;
              MR_Box mercury__hash_table__next_value_of_V_17_15 = mercury__hash_table__V_21_19;

              mercury__hash_table__V_17_15 = mercury__hash_table__next_value_of_V_17_15;
              mercury__hash_table__V_15_13 = mercury__hash_table__next_value_of_V_15_13;
              mercury__hash_table__V_10_10 = mercury__hash_table__next_value_of_V_10_10;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word mercury__hash_table__Var_28,
  MR_Word mercury__hash_table__Var_29,
  MR_Word mercury__hash_table__Var_30,
  MR_Word mercury__hash_table__Var_31,
  MR_Word mercury__hash_table__Var_32,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Integer mercury__hash_table__V_11_11,
  MR_ArrayPtr mercury__hash_table__V_12_12,
  MR_Box mercury__hash_table__V_15_13,
  MR_Box * mercury__hash_table__V_16_14,
  MR_Box mercury__hash_table__V_17_15,
  MR_Box * mercury__hash_table__V_18_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_11_11 < mercury__hash_table__V_10_10);

        if (mercury__hash_table__succeeded)
          {
            *mercury__hash_table__V_18_16 = mercury__hash_table__V_17_15;
            *mercury__hash_table__V_16_14 = mercury__hash_table__V_15_13;
          }
        else
          {
            MR_Word mercury__hash_table__V_19_17;
            MR_Box mercury__hash_table__V_20_18;
            MR_Box mercury__hash_table__V_21_19;
            MR_Integer mercury__hash_table__V_22_20;
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_36;
            MR_Box mercury__hash_table__conv0_Item;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_12_12 , Array);
	Index =  mercury__hash_table__V_10_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
            mercury__hash_table__V_19_17 = ((MR_Word) mercury__hash_table__conv0_Item);
}
            {
              mercury__hash_table__fold2_p_6_p_1(mercury__hash_table__Var_28, mercury__hash_table__Var_29, mercury__hash_table__Var_30, mercury__hash_table__Var_31, mercury__hash_table__Var_32, mercury__hash_table__V_19_17, mercury__hash_table__V_15_13, &mercury__hash_table__V_20_18, mercury__hash_table__V_17_15, &mercury__hash_table__V_21_19);
            }
            mercury__hash_table__V_22_20 = (mercury__hash_table__V_10_10 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__hash_table__next_value_of_V_10_10 = mercury__hash_table__V_22_20;
              MR_Box mercury__hash_table__next_value_of_V_15_13 = mercury__hash_table__V_20_18;
              MR_Box mercury__hash_table__next_value_of_V_17_15 = mercury__hash_table__V_21_19;

              mercury__hash_table__V_17_15 = mercury__hash_table__next_value_of_V_17_15;
              mercury__hash_table__V_15_13 = mercury__hash_table__next_value_of_V_15_13;
              mercury__hash_table__V_10_10 = mercury__hash_table__next_value_of_V_10_10;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word mercury__hash_table__Var_28,
  MR_Word mercury__hash_table__Var_29,
  MR_Word mercury__hash_table__Var_30,
  MR_Word mercury__hash_table__Var_31,
  MR_Word mercury__hash_table__Var_32,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Integer mercury__hash_table__V_11_11,
  MR_ArrayPtr mercury__hash_table__V_12_12,
  MR_Box mercury__hash_table__V_15_13,
  MR_Box * mercury__hash_table__V_16_14,
  MR_Box mercury__hash_table__V_17_15,
  MR_Box * mercury__hash_table__V_18_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_11_11 < mercury__hash_table__V_10_10);

        if (mercury__hash_table__succeeded)
          {
            *mercury__hash_table__V_18_16 = mercury__hash_table__V_17_15;
            *mercury__hash_table__V_16_14 = mercury__hash_table__V_15_13;
          }
        else
          {
            MR_Word mercury__hash_table__V_19_17;
            MR_Box mercury__hash_table__V_20_18;
            MR_Box mercury__hash_table__V_21_19;
            MR_Integer mercury__hash_table__V_22_20;
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_36;
            MR_Box mercury__hash_table__conv0_Item;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_12_12 , Array);
	Index =  mercury__hash_table__V_10_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
            mercury__hash_table__V_19_17 = ((MR_Word) mercury__hash_table__conv0_Item);
}
            {
              mercury__hash_table__fold2_p_6_p_0(mercury__hash_table__Var_28, mercury__hash_table__Var_29, mercury__hash_table__Var_30, mercury__hash_table__Var_31, mercury__hash_table__Var_32, mercury__hash_table__V_19_17, mercury__hash_table__V_15_13, &mercury__hash_table__V_20_18, mercury__hash_table__V_17_15, &mercury__hash_table__V_21_19);
            }
            mercury__hash_table__V_22_20 = (mercury__hash_table__V_10_10 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__hash_table__next_value_of_V_10_10 = mercury__hash_table__V_22_20;
              MR_Box mercury__hash_table__next_value_of_V_15_13 = mercury__hash_table__V_20_18;
              MR_Box mercury__hash_table__next_value_of_V_17_15 = mercury__hash_table__V_21_19;

              mercury__hash_table__V_17_15 = mercury__hash_table__next_value_of_V_17_15;
              mercury__hash_table__V_15_13 = mercury__hash_table__next_value_of_V_15_13;
              mercury__hash_table__V_10_10 = mercury__hash_table__next_value_of_V_10_10;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word mercury__hash_table__Var_22,
  MR_Word mercury__hash_table__Var_23,
  MR_Word mercury__hash_table__Var_24,
  MR_Word mercury__hash_table__Var_25,
  MR_ArrayPtr mercury__hash_table__V_8_8,
  MR_Integer mercury__hash_table__V_9_9,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Box mercury__hash_table__V_12_11,
  MR_Box * mercury__hash_table__V_13_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_10_10 < mercury__hash_table__V_9_9);

        if (mercury__hash_table__succeeded)
          {
            *mercury__hash_table__V_13_12 = mercury__hash_table__V_12_11;
            mercury__hash_table__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__hash_table__V_14_13;
            MR_Box mercury__hash_table__V_15_14;
            MR_Integer mercury__hash_table__V_16_15;
            MR_Integer mercury__hash_table__V_18_16;
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
            MR_Box mercury__hash_table__conv0_Item;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_8_8 , Array);
	Index =  mercury__hash_table__V_9_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
}
            {
              mercury__hash_table__succeeded = mercury__hash_table__fold_p_4_p_5(mercury__hash_table__Var_22, mercury__hash_table__Var_23, mercury__hash_table__Var_24, mercury__hash_table__Var_25, mercury__hash_table__V_14_13, mercury__hash_table__V_12_11, &mercury__hash_table__V_15_14);
            }
            if (mercury__hash_table__succeeded)
              {
                mercury__hash_table__V_18_16 = (MR_Integer) 1;
                mercury__hash_table__V_16_15 = (mercury__hash_table__V_9_9 + mercury__hash_table__V_18_16);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__hash_table__next_value_of_V_9_9 = mercury__hash_table__V_16_15;
                  MR_Box mercury__hash_table__next_value_of_V_12_11 = mercury__hash_table__V_15_14;

                  mercury__hash_table__V_12_11 = mercury__hash_table__next_value_of_V_12_11;
                  mercury__hash_table__V_9_9 = mercury__hash_table__next_value_of_V_9_9;
                }
                continue;
              }
          }
        return mercury__hash_table__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word mercury__hash_table__Var_22,
  MR_Word mercury__hash_table__Var_23,
  MR_Word mercury__hash_table__Var_24,
  MR_Word mercury__hash_table__Var_25,
  MR_ArrayPtr mercury__hash_table__V_8_8,
  MR_Integer mercury__hash_table__V_9_9,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Box mercury__hash_table__V_12_11,
  MR_Box * mercury__hash_table__V_13_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_10_10 < mercury__hash_table__V_9_9);

        if (mercury__hash_table__succeeded)
          {
            *mercury__hash_table__V_13_12 = mercury__hash_table__V_12_11;
            mercury__hash_table__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__hash_table__V_14_13;
            MR_Box mercury__hash_table__V_15_14;
            MR_Integer mercury__hash_table__V_16_15;
            MR_Integer mercury__hash_table__V_18_16;
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
            MR_Box mercury__hash_table__conv0_Item;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_8_8 , Array);
	Index =  mercury__hash_table__V_9_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
}
            {
              mercury__hash_table__succeeded = mercury__hash_table__fold_p_4_p_4(mercury__hash_table__Var_22, mercury__hash_table__Var_23, mercury__hash_table__Var_24, mercury__hash_table__Var_25, mercury__hash_table__V_14_13, mercury__hash_table__V_12_11, &mercury__hash_table__V_15_14);
            }
            if (mercury__hash_table__succeeded)
              {
                mercury__hash_table__V_18_16 = (MR_Integer) 1;
                mercury__hash_table__V_16_15 = (mercury__hash_table__V_9_9 + mercury__hash_table__V_18_16);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__hash_table__next_value_of_V_9_9 = mercury__hash_table__V_16_15;
                  MR_Box mercury__hash_table__next_value_of_V_12_11 = mercury__hash_table__V_15_14;

                  mercury__hash_table__V_12_11 = mercury__hash_table__next_value_of_V_12_11;
                  mercury__hash_table__V_9_9 = mercury__hash_table__next_value_of_V_9_9;
                }
                continue;
              }
          }
        return mercury__hash_table__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word mercury__hash_table__Var_22,
  MR_Word mercury__hash_table__Var_23,
  MR_Word mercury__hash_table__Var_24,
  MR_Word mercury__hash_table__Var_25,
  MR_ArrayPtr mercury__hash_table__V_8_8,
  MR_Integer mercury__hash_table__V_9_9,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Box mercury__hash_table__V_12_11,
  MR_Box * mercury__hash_table__V_13_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_10_10 < mercury__hash_table__V_9_9);

        if (mercury__hash_table__succeeded)
          {
            *mercury__hash_table__V_13_12 = mercury__hash_table__V_12_11;
            mercury__hash_table__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__hash_table__V_14_13;
            MR_Box mercury__hash_table__V_15_14;
            MR_Integer mercury__hash_table__V_16_15;
            MR_Integer mercury__hash_table__V_18_16;
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
            MR_Box mercury__hash_table__conv0_Item;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_8_8 , Array);
	Index =  mercury__hash_table__V_9_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
}
            {
              mercury__hash_table__succeeded = mercury__hash_table__fold_p_4_p_3(mercury__hash_table__Var_22, mercury__hash_table__Var_23, mercury__hash_table__Var_24, mercury__hash_table__Var_25, mercury__hash_table__V_14_13, mercury__hash_table__V_12_11, &mercury__hash_table__V_15_14);
            }
            if (mercury__hash_table__succeeded)
              {
                mercury__hash_table__V_18_16 = (MR_Integer) 1;
                mercury__hash_table__V_16_15 = (mercury__hash_table__V_9_9 + mercury__hash_table__V_18_16);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__hash_table__next_value_of_V_9_9 = mercury__hash_table__V_16_15;
                  MR_Box mercury__hash_table__next_value_of_V_12_11 = mercury__hash_table__V_15_14;

                  mercury__hash_table__V_12_11 = mercury__hash_table__next_value_of_V_12_11;
                  mercury__hash_table__V_9_9 = mercury__hash_table__next_value_of_V_9_9;
                }
                continue;
              }
          }
        return mercury__hash_table__succeeded;
      }
      break;
    }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word mercury__hash_table__Var_22,
  MR_Word mercury__hash_table__Var_23,
  MR_Word mercury__hash_table__Var_24,
  MR_Word mercury__hash_table__Var_25,
  MR_ArrayPtr mercury__hash_table__V_8_8,
  MR_Integer mercury__hash_table__V_9_9,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Box mercury__hash_table__V_12_11,
  MR_Box * mercury__hash_table__V_13_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_10_10 < mercury__hash_table__V_9_9);

        if (mercury__hash_table__succeeded)
          *mercury__hash_table__V_13_12 = mercury__hash_table__V_12_11;
        else
          {
            MR_Word mercury__hash_table__V_14_13;
            MR_Box mercury__hash_table__V_15_14;
            MR_Integer mercury__hash_table__V_16_15;
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
            MR_Box mercury__hash_table__conv0_Item;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_8_8 , Array);
	Index =  mercury__hash_table__V_9_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
}
            {
              mercury__hash_table__fold_p_4_p_2(mercury__hash_table__Var_22, mercury__hash_table__Var_23, mercury__hash_table__Var_24, mercury__hash_table__Var_25, mercury__hash_table__V_14_13, mercury__hash_table__V_12_11, &mercury__hash_table__V_15_14);
            }
            mercury__hash_table__V_16_15 = (mercury__hash_table__V_9_9 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__hash_table__next_value_of_V_9_9 = mercury__hash_table__V_16_15;
              MR_Box mercury__hash_table__next_value_of_V_12_11 = mercury__hash_table__V_15_14;

              mercury__hash_table__V_12_11 = mercury__hash_table__next_value_of_V_12_11;
              mercury__hash_table__V_9_9 = mercury__hash_table__next_value_of_V_9_9;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word mercury__hash_table__Var_22,
  MR_Word mercury__hash_table__Var_23,
  MR_Word mercury__hash_table__Var_24,
  MR_Word mercury__hash_table__Var_25,
  MR_ArrayPtr mercury__hash_table__V_8_8,
  MR_Integer mercury__hash_table__V_9_9,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Box mercury__hash_table__V_12_11,
  MR_Box * mercury__hash_table__V_13_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_10_10 < mercury__hash_table__V_9_9);

        if (mercury__hash_table__succeeded)
          *mercury__hash_table__V_13_12 = mercury__hash_table__V_12_11;
        else
          {
            MR_Word mercury__hash_table__V_14_13;
            MR_Box mercury__hash_table__V_15_14;
            MR_Integer mercury__hash_table__V_16_15;
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
            MR_Box mercury__hash_table__conv0_Item;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_8_8 , Array);
	Index =  mercury__hash_table__V_9_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
}
            {
              mercury__hash_table__fold_p_4_p_1(mercury__hash_table__Var_22, mercury__hash_table__Var_23, mercury__hash_table__Var_24, mercury__hash_table__Var_25, mercury__hash_table__V_14_13, mercury__hash_table__V_12_11, &mercury__hash_table__V_15_14);
            }
            mercury__hash_table__V_16_15 = (mercury__hash_table__V_9_9 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__hash_table__next_value_of_V_9_9 = mercury__hash_table__V_16_15;
              MR_Box mercury__hash_table__next_value_of_V_12_11 = mercury__hash_table__V_15_14;

              mercury__hash_table__V_12_11 = mercury__hash_table__next_value_of_V_12_11;
              mercury__hash_table__V_9_9 = mercury__hash_table__next_value_of_V_9_9;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word mercury__hash_table__Var_22,
  MR_Word mercury__hash_table__Var_23,
  MR_Word mercury__hash_table__Var_24,
  MR_Word mercury__hash_table__Var_25,
  MR_ArrayPtr mercury__hash_table__V_8_8,
  MR_Integer mercury__hash_table__V_9_9,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Box mercury__hash_table__V_12_11,
  MR_Box * mercury__hash_table__V_13_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_10_10 < mercury__hash_table__V_9_9);

        if (mercury__hash_table__succeeded)
          *mercury__hash_table__V_13_12 = mercury__hash_table__V_12_11;
        else
          {
            MR_Word mercury__hash_table__V_14_13;
            MR_Box mercury__hash_table__V_15_14;
            MR_Integer mercury__hash_table__V_16_15;
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
            MR_Box mercury__hash_table__conv0_Item;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_8_8 , Array);
	Index =  mercury__hash_table__V_9_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
}
            {
              mercury__hash_table__fold_p_4_p_0(mercury__hash_table__Var_22, mercury__hash_table__Var_23, mercury__hash_table__Var_24, mercury__hash_table__Var_25, mercury__hash_table__V_14_13, mercury__hash_table__V_12_11, &mercury__hash_table__V_15_14);
            }
            mercury__hash_table__V_16_15 = (mercury__hash_table__V_9_9 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__hash_table__next_value_of_V_9_9 = mercury__hash_table__V_16_15;
              MR_Box mercury__hash_table__next_value_of_V_12_11 = mercury__hash_table__V_15_14;

              mercury__hash_table__V_12_11 = mercury__hash_table__next_value_of_V_12_11;
              mercury__hash_table__V_9_9 = mercury__hash_table__next_value_of_V_9_9;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word mercury__hash_table__Var_22,
  MR_Word mercury__hash_table__Var_23,
  MR_Word mercury__hash_table__Var_24,
  MR_Word mercury__hash_table__Var_25,
  MR_ArrayPtr mercury__hash_table__V_8_8,
  MR_Integer mercury__hash_table__V_9_9,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Box mercury__hash_table__V_12_11,
  MR_Box * mercury__hash_table__V_13_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_10_10 < mercury__hash_table__V_9_9);

        if (mercury__hash_table__succeeded)
          *mercury__hash_table__V_13_12 = mercury__hash_table__V_12_11;
        else
          {
            MR_Word mercury__hash_table__V_14_13;
            MR_Box mercury__hash_table__V_15_14;
            MR_Integer mercury__hash_table__V_16_15;
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
            MR_Box mercury__hash_table__conv0_Item;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_8_8 , Array);
	Index =  mercury__hash_table__V_9_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
}
            {
              mercury__hash_table__fold_f_4_p_1(mercury__hash_table__Var_22, mercury__hash_table__Var_23, mercury__hash_table__Var_24, mercury__hash_table__Var_25, mercury__hash_table__V_14_13, mercury__hash_table__V_12_11, &mercury__hash_table__V_15_14);
            }
            mercury__hash_table__V_16_15 = (mercury__hash_table__V_9_9 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__hash_table__next_value_of_V_9_9 = mercury__hash_table__V_16_15;
              MR_Box mercury__hash_table__next_value_of_V_12_11 = mercury__hash_table__V_15_14;

              mercury__hash_table__V_12_11 = mercury__hash_table__next_value_of_V_12_11;
              mercury__hash_table__V_9_9 = mercury__hash_table__next_value_of_V_9_9;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word mercury__hash_table__Var_22,
  MR_Word mercury__hash_table__Var_23,
  MR_Word mercury__hash_table__Var_24,
  MR_Word mercury__hash_table__Var_25,
  MR_ArrayPtr mercury__hash_table__V_8_8,
  MR_Integer mercury__hash_table__V_9_9,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Box mercury__hash_table__V_12_11,
  MR_Box * mercury__hash_table__V_13_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_10_10 < mercury__hash_table__V_9_9);

        if (mercury__hash_table__succeeded)
          *mercury__hash_table__V_13_12 = mercury__hash_table__V_12_11;
        else
          {
            MR_Word mercury__hash_table__V_14_13;
            MR_Box mercury__hash_table__V_15_14;
            MR_Integer mercury__hash_table__V_16_15;
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
            MR_Box mercury__hash_table__conv0_Item;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_8_8 , Array);
	Index =  mercury__hash_table__V_9_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
}
            {
              mercury__hash_table__fold_f_4_p_0(mercury__hash_table__Var_22, mercury__hash_table__Var_23, mercury__hash_table__Var_24, mercury__hash_table__Var_25, mercury__hash_table__V_14_13, mercury__hash_table__V_12_11, &mercury__hash_table__V_15_14);
            }
            mercury__hash_table__V_16_15 = (mercury__hash_table__V_9_9 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__hash_table__next_value_of_V_9_9 = mercury__hash_table__V_16_15;
              MR_Box mercury__hash_table__next_value_of_V_12_11 = mercury__hash_table__V_15_14;

              mercury__hash_table__V_12_11 = mercury__hash_table__next_value_of_V_12_11;
              mercury__hash_table__V_9_9 = mercury__hash_table__next_value_of_V_9_9;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__array_0(
  MR_Word mercury__hash_table__Var_27,
  MR_Word mercury__hash_table__Var_28,
  MR_ArrayPtr mercury__hash_table__V_8_8,
  MR_Integer mercury__hash_table__V_9_9,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Word mercury__hash_table__V_12_11,
  MR_Word * mercury__hash_table__V_13_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_10_10 < mercury__hash_table__V_9_9);

        if (mercury__hash_table__succeeded)
          *mercury__hash_table__V_13_12 = mercury__hash_table__V_12_11;
        else
          {
            MR_Word mercury__hash_table__V_14_13;
            MR_Word mercury__hash_table__V_15_14;
            MR_Integer mercury__hash_table__V_16_15;
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_32;
            MR_Box mercury__hash_table__conv0_Item;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_8_8 , Array);
	Index =  mercury__hash_table__V_9_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
}
            {
              mercury__hash_table__to_assoc_list_2_3_p_0(mercury__hash_table__Var_27, mercury__hash_table__Var_28, mercury__hash_table__V_14_13, mercury__hash_table__V_12_11, &mercury__hash_table__V_15_14);
            }
            mercury__hash_table__V_16_15 = (mercury__hash_table__V_9_9 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__hash_table__next_value_of_V_9_9 = mercury__hash_table__V_16_15;
              MR_Word mercury__hash_table__next_value_of_V_12_11 = mercury__hash_table__V_15_14;

              mercury__hash_table__V_12_11 = mercury__hash_table__next_value_of_V_12_11;
              mercury__hash_table__V_9_9 = mercury__hash_table__next_value_of_V_9_9;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Integer MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_50_55_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
  MR_Word mercury__hash_table__Var_19,
  MR_ArrayPtr mercury__hash_table__V_8_8,
  MR_Integer mercury__hash_table__V_9_9,
  MR_Integer mercury__hash_table__V_10_10,
  MR_Integer mercury__hash_table__V_11_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_11_11 < mercury__hash_table__V_10_10);
        MR_Integer mercury__hash_table__V_6_12;

        if (mercury__hash_table__succeeded)
          mercury__hash_table__V_6_12 = mercury__hash_table__V_9_9;
        else
          {
            MR_Integer mercury__hash_table__V_12_13;
            MR_Integer mercury__hash_table__V_14_14;
            MR_Box mercury__hash_table__V_13_15;
            MR_Integer mercury__hash_table__HX_36;
            MR_Integer mercury__hash_table__Var_70;
            MR_Integer mercury__hash_table__Var_71;
            MR_Integer mercury__hash_table__Var_72;
            MR_Integer mercury__hash_table__Var_73;
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_75;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_50_55_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_8_8 , Array);
	Index =  mercury__hash_table__V_10_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_13_15  = (MR_Box) Item;
}
            {
              mercury__hash_table__generic_hash_2_p_0(mercury__hash_table__Var_19, mercury__hash_table__V_13_15, &mercury__hash_table__HX_36);
            }
            mercury__hash_table__Var_70 = (mercury__hash_table__V_9_9 << mercury__hash_table__HX_36);
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_50_55_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__Var_73  = Bits;
}
            mercury__hash_table__Var_72 = (mercury__hash_table__Var_73 - mercury__hash_table__HX_36);
            mercury__hash_table__Var_71 = (mercury__hash_table__V_9_9 >> mercury__hash_table__Var_72);
            mercury__hash_table__V_12_13 = (mercury__hash_table__Var_70 ^ mercury__hash_table__Var_71);
            mercury__hash_table__V_14_14 = (mercury__hash_table__V_10_10 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__hash_table__next_value_of_V_9_9 = mercury__hash_table__V_12_13;
              MR_Integer mercury__hash_table__next_value_of_V_10_10 = mercury__hash_table__V_14_14;

              mercury__hash_table__V_10_10 = mercury__hash_table__next_value_of_V_10_10;
              mercury__hash_table__V_9_9 = mercury__hash_table__next_value_of_V_9_9;
            }
            continue;
          }
        return mercury__hash_table__V_6_12;
      }
      break;
    }
}

static MR_Integer MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__hash_table__succeeded;

    return (MR_Integer) 1200;
  }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0(
  MR_Word mercury__hash_table__AL_6,
  MR_Word mercury__hash_table__HashPred_7,
  MR_Integer mercury__hash_table__NumBuckets_8,
  MR_ArrayPtr mercury__hash_table__STATE_VARIABLE_Buckets_0_13,
  MR_ArrayPtr * mercury__hash_table__STATE_VARIABLE_Buckets_14)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__hash_table__AL_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__hash_table__STATE_VARIABLE_Buckets_14 = mercury__hash_table__STATE_VARIABLE_Buckets_0_13;
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__hash_table__K_10 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL_6, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_11 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL_6, (MR_Integer) 1));
              MR_Integer mercury__hash_table__H_54;
              MR_Word mercury__hash_table__AL0_55;
              MR_Word mercury__hash_table__AL_56;
              MR_Integer mercury__hash_table__Hash_69;
              MR_Integer mercury__hash_table__Var_70;
              void MR_CALL (* mercury__hash_table__func_4)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__HashPred_7, (MR_Integer) 1)));
              MR_Box mercury__hash_table__conv5_Hash_69;
              MR_Word mercury__hash_table__TypeInfo_26_74;
              MR_Box mercury__hash_table__conv6_Item;
              MR_Word mercury__hash_table__TypeInfo_26_75;
              MR_ArrayPtr mercury__hash_table__conv7_Array;

              {
                mercury__hash_table__func_4(((MR_Box) mercury__hash_table__HashPred_7), mercury__hash_table__K_10, &mercury__hash_table__conv5_Hash_69);
              }
              mercury__hash_table__Hash_69 = ((MR_Integer) mercury__hash_table__conv5_Hash_69);
              mercury__hash_table__Var_70 = (mercury__hash_table__NumBuckets_8 - (MR_Integer) 1);
              mercury__hash_table__H_54 = (mercury__hash_table__Hash_69 & mercury__hash_table__Var_70);
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__STATE_VARIABLE_Buckets_0_13 , Array);
	Index =  mercury__hash_table__H_54 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv6_Item  = (MR_Box) Item;
              mercury__hash_table__AL0_55 = ((MR_Word) mercury__hash_table__conv6_Item);
}
              switch (MR_tag((MR_Word) mercury__hash_table__AL0_55)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  mercury__hash_table__AL_56 = mercury__hash_table__AL_6;
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__hash_table__AL_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_56, 0) = mercury__hash_table__K_10;
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_56, 1) = mercury__hash_table__V_11;
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_56, 2) = ((MR_Box) (mercury__hash_table__AL0_55));
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__hash_table__AL_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_56, 0) = mercury__hash_table__K_10;
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_56, 1) = mercury__hash_table__V_11;
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_56, 2) = ((MR_Box) (mercury__hash_table__AL0_55));
                  }
                  break;
              }
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__hash_table__H_54 ;
	Item = (MR_Word) ((MR_Box) (mercury__hash_table__AL_56)) ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__STATE_VARIABLE_Buckets_0_13 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__hash_table__conv7_Array );
              *mercury__hash_table__STATE_VARIABLE_Buckets_14 = (MR_ArrayPtr) mercury__hash_table__conv7_Array;
}
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__hash_table__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__AL_6, (MR_Integer) 2)));
              MR_ArrayPtr mercury__hash_table__STATE_VARIABLE_Buckets_15_15;
              MR_Box mercury__hash_table__K_18 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL_6, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_19 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL_6, (MR_Integer) 1));
              MR_Integer mercury__hash_table__H_29;
              MR_Word mercury__hash_table__AL0_30;
              MR_Word mercury__hash_table__AL_31;
              MR_Integer mercury__hash_table__Hash_44;
              MR_Integer mercury__hash_table__Var_45;
              void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__HashPred_7, (MR_Integer) 1)));
              MR_Box mercury__hash_table__conv1_Hash_44;
              MR_Word mercury__hash_table__TypeInfo_26_72;
              MR_Box mercury__hash_table__conv2_Item;
              MR_Word mercury__hash_table__TypeInfo_26_73;
              MR_ArrayPtr mercury__hash_table__conv3_Array;

              {
                mercury__hash_table__func_0(((MR_Box) mercury__hash_table__HashPred_7), mercury__hash_table__K_18, &mercury__hash_table__conv1_Hash_44);
              }
              mercury__hash_table__Hash_44 = ((MR_Integer) mercury__hash_table__conv1_Hash_44);
              mercury__hash_table__Var_45 = (mercury__hash_table__NumBuckets_8 - (MR_Integer) 1);
              mercury__hash_table__H_29 = (mercury__hash_table__Hash_44 & mercury__hash_table__Var_45);
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__STATE_VARIABLE_Buckets_0_13 , Array);
	Index =  mercury__hash_table__H_29 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv2_Item  = (MR_Box) Item;
              mercury__hash_table__AL0_30 = ((MR_Word) mercury__hash_table__conv2_Item);
}
              switch (MR_tag((MR_Word) mercury__hash_table__AL0_30)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__hash_table__AL_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__hash_table__AL_31, 0) = mercury__hash_table__K_18;
                    MR_hl_field(MR_mktag(1), mercury__hash_table__AL_31, 1) = mercury__hash_table__V_19;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__hash_table__AL_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_31, 0) = mercury__hash_table__K_18;
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_31, 1) = mercury__hash_table__V_19;
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_31, 2) = ((MR_Box) (mercury__hash_table__AL0_30));
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__hash_table__AL_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_31, 0) = mercury__hash_table__K_18;
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_31, 1) = mercury__hash_table__V_19;
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_31, 2) = ((MR_Box) (mercury__hash_table__AL0_30));
                  }
                  break;
              }
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__hash_table__H_29 ;
	Item = (MR_Word) ((MR_Box) (mercury__hash_table__AL_31)) ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__STATE_VARIABLE_Buckets_0_13 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__hash_table__conv3_Array );
              mercury__hash_table__STATE_VARIABLE_Buckets_15_15 = (MR_ArrayPtr) mercury__hash_table__conv3_Array;
}
              /* direct tailcall eliminated */
              {
                MR_Word mercury__hash_table__next_value_of_AL_6 = mercury__hash_table__T_12;
                MR_ArrayPtr mercury__hash_table__next_value_of_STATE_VARIABLE_Buckets_0_13 = mercury__hash_table__STATE_VARIABLE_Buckets_15_15;

                mercury__hash_table__STATE_VARIABLE_Buckets_0_13 = mercury__hash_table__next_value_of_STATE_VARIABLE_Buckets_0_13;
                mercury__hash_table__AL_6 = mercury__hash_table__next_value_of_AL_6;
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
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_p_0(
  MR_Integer mercury__hash_table__I_7,
  MR_ArrayPtr mercury__hash_table__OldBuckets_8,
  MR_Word mercury__hash_table__HashPred_9,
  MR_Integer mercury__hash_table__NumBuckets_10,
  MR_ArrayPtr mercury__hash_table__STATE_VARIABLE_Buckets_0_13,
  MR_ArrayPtr * mercury__hash_table__STATE_VARIABLE_Buckets_14)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded;
        MR_Integer mercury__hash_table__Var_15;
        MR_Word mercury__hash_table__TypeInfo_23_28;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__OldBuckets_8 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__Var_15  = Max;
}
        mercury__hash_table__succeeded = (mercury__hash_table__I_7 >= mercury__hash_table__Var_15);
        if (mercury__hash_table__succeeded)
          *mercury__hash_table__STATE_VARIABLE_Buckets_14 = mercury__hash_table__STATE_VARIABLE_Buckets_0_13;
        else
          {
            MR_Word mercury__hash_table__AL_12;
            MR_ArrayPtr mercury__hash_table__STATE_VARIABLE_Buckets_16_16;
            MR_Integer mercury__hash_table__Var_17;
            MR_Word mercury__hash_table__TypeInfo_25_29;
            MR_Box mercury__hash_table__conv0_Item;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__OldBuckets_8 , Array);
	Index =  mercury__hash_table__I_7 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
            mercury__hash_table__AL_12 = ((MR_Word) mercury__hash_table__conv0_Item);
}
            {
              mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0(mercury__hash_table__AL_12, mercury__hash_table__HashPred_9, mercury__hash_table__NumBuckets_10, mercury__hash_table__STATE_VARIABLE_Buckets_0_13, &mercury__hash_table__STATE_VARIABLE_Buckets_16_16);
            }
            mercury__hash_table__Var_17 = (mercury__hash_table__I_7 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__hash_table__next_value_of_I_7 = mercury__hash_table__Var_17;
              MR_ArrayPtr mercury__hash_table__next_value_of_STATE_VARIABLE_Buckets_0_13 = mercury__hash_table__STATE_VARIABLE_Buckets_16_16;

              mercury__hash_table__STATE_VARIABLE_Buckets_0_13 = mercury__hash_table__next_value_of_STATE_VARIABLE_Buckets_0_13;
              mercury__hash_table__I_7 = mercury__hash_table__next_value_of_I_7;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_12,
  MR_Word mercury__hash_table__AL0_4,
  MR_Box mercury__hash_table__K_5,
  MR_Word * mercury__hash_table__AL_6)
{
  {
    MR_bool mercury__hash_table__succeeded;

    if (((MR_tag((MR_Word) mercury__hash_table__AL0_4)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Box mercury__hash_table__K0_8 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL0_4, (MR_Integer) 0));
        MR_Box mercury__hash_table__V0_9 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL0_4, (MR_Integer) 1));
        MR_Word mercury__hash_table__T0_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__AL0_4, (MR_Integer) 2)));

        {
          mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_12, mercury__hash_table__K0_8, mercury__hash_table__K_5);
        }
        if (mercury__hash_table__succeeded)
          {
            *mercury__hash_table__AL_6 = mercury__hash_table__T0_10;
            mercury__hash_table__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__hash_table__T_11;

            {
              mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(mercury__hash_table__TypeInfo_for_K_12, mercury__hash_table__T0_10, mercury__hash_table__K_5, &mercury__hash_table__T_11);
            }
            if (mercury__hash_table__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__hash_table__AL_6 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__hash_table__K0_8;
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__hash_table__V0_9;
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__hash_table__T_11));
                }
                mercury__hash_table__succeeded = MR_TRUE;
              }
          }
      }
    else
    if (((MR_tag((MR_Word) mercury__hash_table__AL0_4)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Box mercury__hash_table__Var_14 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL0_4, (MR_Integer) 0));
        MR_Box mercury__hash_table__Var_7 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL0_4, (MR_Integer) 1));

        {
          mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_12, mercury__hash_table__K_5, mercury__hash_table__Var_14);
        }
        if (mercury__hash_table__succeeded)
          {
            *mercury__hash_table__AL_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__hash_table__succeeded = MR_TRUE;
          }
      }
    else
      mercury__hash_table__succeeded = MR_FALSE;
    return mercury__hash_table__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_14,
  MR_Word mercury__hash_table__AL0_5,
  MR_Box mercury__hash_table__K_6,
  MR_Box mercury__hash_table__V_7,
  MR_Word * mercury__hash_table__AL_8)
{
  {
    MR_bool mercury__hash_table__succeeded;

    if (((MR_tag((MR_Word) mercury__hash_table__AL0_5)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Box mercury__hash_table__K0_10 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL0_5, (MR_Integer) 0));
        MR_Box mercury__hash_table__V0_11 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL0_5, (MR_Integer) 1));
        MR_Word mercury__hash_table__T0_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__AL0_5, (MR_Integer) 2)));

        {
          mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_14, mercury__hash_table__K0_10, mercury__hash_table__K_6);
        }
        if (mercury__hash_table__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *mercury__hash_table__AL_8 = base;
              MR_hl_field(MR_mktag(2), base, 0) = mercury__hash_table__K0_10;
              MR_hl_field(MR_mktag(2), base, 1) = mercury__hash_table__V_7;
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__hash_table__T0_12));
            }
            mercury__hash_table__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__hash_table__T_13;

            {
              mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(mercury__hash_table__TypeInfo_for_K_14, mercury__hash_table__T0_12, mercury__hash_table__K_6, mercury__hash_table__V_7, &mercury__hash_table__T_13);
            }
            if (mercury__hash_table__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__hash_table__AL_8 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__hash_table__K0_10;
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__hash_table__V0_11;
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__hash_table__T_13));
                }
                mercury__hash_table__succeeded = MR_TRUE;
              }
          }
      }
    else
    if (((MR_tag((MR_Word) mercury__hash_table__AL0_5)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Box mercury__hash_table__Var_16 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL0_5, (MR_Integer) 0));
        MR_Box mercury__hash_table__Var_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL0_5, (MR_Integer) 1));

        {
          mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_14, mercury__hash_table__K_6, mercury__hash_table__Var_16);
        }
        if (mercury__hash_table__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__hash_table__AL_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = mercury__hash_table__K_6;
              MR_hl_field(MR_mktag(1), base, 1) = mercury__hash_table__V_7;
            }
            mercury__hash_table__succeeded = MR_TRUE;
          }
      }
    else
      mercury__hash_table__succeeded = MR_FALSE;
    return mercury__hash_table__succeeded;
  }
}

static void MR_CALL 
mercury__hash_table__foldl__ho25_4_p_in__list_0(
  MR_Word mercury__hash_table__HeadVar__2_2,
  MR_Integer mercury__hash_table__HeadVar__3_3,
  MR_Integer * mercury__hash_table__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded;

        if ((mercury__hash_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__hash_table__HeadVar__4_4 = mercury__hash_table__HeadVar__3_3;
        else
          {
            MR_Word mercury__hash_table__TypeCtorInfo_47_59 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
            MR_Word mercury__hash_table__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__hash_table__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mercury__hash_table__V_15_13;
            MR_Integer mercury__hash_table__HUA_36;
            MR_Integer mercury__hash_table__Var_64;
            MR_Integer mercury__hash_table__Var_65;
            MR_Integer mercury__hash_table__Var_66;
            MR_Integer mercury__hash_table__Var_67;

            {
              mercury__hash_table__generic_hash_2_p_0(mercury__hash_table__TypeCtorInfo_47_59, ((MR_Box) (mercury__hash_table__V_10_9)), &mercury__hash_table__HUA_36);
            }
            mercury__hash_table__Var_64 = (mercury__hash_table__HeadVar__3_3 << mercury__hash_table__HUA_36);
{
#define MR_PROC_LABEL mercury__hash_table__foldl__ho25_4_p_in__list_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__Var_67  = Bits;
}
            mercury__hash_table__Var_66 = (mercury__hash_table__Var_67 - mercury__hash_table__HUA_36);
            mercury__hash_table__Var_65 = (mercury__hash_table__HeadVar__3_3 >> mercury__hash_table__Var_66);
            mercury__hash_table__V_15_13 = (mercury__hash_table__Var_64 ^ mercury__hash_table__Var_65);
            /* direct tailcall eliminated */
            {
              MR_Word mercury__hash_table__next_value_of_HeadVar__2_2 = mercury__hash_table__V_11_10;
              MR_Integer mercury__hash_table__next_value_of_HeadVar__3_3 = mercury__hash_table__V_15_13;

              mercury__hash_table__HeadVar__3_3 = mercury__hash_table__next_value_of_HeadVar__3_3;
              mercury__hash_table__HeadVar__2_2 = mercury__hash_table__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__hash_table____Compare____hash_table_alist_2_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_39,
  MR_Word mercury__hash_table__TypeInfo_for_V_40,
  MR_Word * mercury__hash_table__HeadVar__1_1,
  MR_Word mercury__hash_table__HeadVar__2_2,
  MR_Word mercury__hash_table__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded;
        MR_Integer mercury__hash_table__CastX_37 = (MR_Integer) mercury__hash_table__HeadVar__2_2;
        MR_Integer mercury__hash_table__CastY_38 = (MR_Integer) mercury__hash_table__HeadVar__3_3;

        mercury__hash_table__succeeded = (mercury__hash_table__CastX_37 == mercury__hash_table__CastY_38);
        if (mercury__hash_table__succeeded)
          *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 0;
        else
          switch (MR_tag((MR_Word) mercury__hash_table__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) mercury__hash_table__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box mercury__hash_table__Var_46 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__2_2, (MR_Integer) 1));
                MR_Box mercury__hash_table__Var_47 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__2_2, (MR_Integer) 0));

                switch (MR_tag((MR_Word) mercury__hash_table__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Box mercury__hash_table__Var_13 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__3_3, (MR_Integer) 0));
                      MR_Box mercury__hash_table__Var_14 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__3_3, (MR_Integer) 1));
                      MR_Word mercury__hash_table__Var_15;

                      {
                        mercury__builtin__compare_3_p_0(mercury__hash_table__TypeInfo_for_K_39, &mercury__hash_table__Var_15, mercury__hash_table__Var_47, mercury__hash_table__Var_13);
                      }
                      mercury__hash_table__succeeded = (mercury__hash_table__Var_15 == (MR_Integer) 0);
                      mercury__hash_table__succeeded = !(mercury__hash_table__succeeded);
                      if (mercury__hash_table__succeeded)
                        *mercury__hash_table__HeadVar__1_1 = mercury__hash_table__Var_15;
                      else
                        {
                          mercury__builtin__compare_3_p_0(mercury__hash_table__TypeInfo_for_V_40, mercury__hash_table__HeadVar__1_1, mercury__hash_table__Var_46, mercury__hash_table__Var_14);
                        }
                    }
                    break;
                  case (MR_Integer) 2:
                    *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mercury__hash_table__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__2_2, (MR_Integer) 2)));
                MR_Box mercury__hash_table__Var_44 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__2_2, (MR_Integer) 1));
                MR_Box mercury__hash_table__Var_45 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__2_2, (MR_Integer) 0));

                switch (MR_tag((MR_Word) mercury__hash_table__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Box mercury__hash_table__Var_32 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__3_3, (MR_Integer) 0));
                      MR_Box mercury__hash_table__Var_33 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__3_3, (MR_Integer) 1));
                      MR_Word mercury__hash_table__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__3_3, (MR_Integer) 2)));
                      MR_Word mercury__hash_table__Var_35;

                      {
                        mercury__builtin__compare_3_p_0(mercury__hash_table__TypeInfo_for_K_39, &mercury__hash_table__Var_35, mercury__hash_table__Var_45, mercury__hash_table__Var_32);
                      }
                      mercury__hash_table__succeeded = (mercury__hash_table__Var_35 == (MR_Integer) 0);
                      mercury__hash_table__succeeded = !(mercury__hash_table__succeeded);
                      if (mercury__hash_table__succeeded)
                        *mercury__hash_table__HeadVar__1_1 = mercury__hash_table__Var_35;
                      else
                        {
                          MR_Word mercury__hash_table__Var_36;

                          {
                            mercury__builtin__compare_3_p_0(mercury__hash_table__TypeInfo_for_V_40, &mercury__hash_table__Var_36, mercury__hash_table__Var_44, mercury__hash_table__Var_33);
                          }
                          mercury__hash_table__succeeded = (mercury__hash_table__Var_36 == (MR_Integer) 0);
                          mercury__hash_table__succeeded = !(mercury__hash_table__succeeded);
                          if (mercury__hash_table__succeeded)
                            *mercury__hash_table__HeadVar__1_1 = mercury__hash_table__Var_36;
                          else
                            {
                              /* direct tailcall eliminated */
                              {
                                MR_Word mercury__hash_table__next_value_of_HeadVar__2_2 = mercury__hash_table__Var_43;
                                MR_Word mercury__hash_table__next_value_of_HeadVar__3_3 = mercury__hash_table__Var_34;

                                mercury__hash_table__HeadVar__3_3 = mercury__hash_table__next_value_of_HeadVar__3_3;
                                mercury__hash_table__HeadVar__2_2 = mercury__hash_table__next_value_of_HeadVar__2_2;
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
mercury__hash_table____Unify____hash_table_alist_2_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_17,
  MR_Word mercury__hash_table__TypeInfo_for_V_18,
  MR_Word mercury__hash_table__HeadVar__1_1,
  MR_Word mercury__hash_table__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded;
        MR_Integer mercury__hash_table__CastX_15 = (MR_Integer) mercury__hash_table__HeadVar__1_1;
        MR_Integer mercury__hash_table__CastY_16 = (MR_Integer) mercury__hash_table__HeadVar__2_2;

        mercury__hash_table__succeeded = (mercury__hash_table__CastX_15 == mercury__hash_table__CastY_16);
        if (mercury__hash_table__succeeded)
          mercury__hash_table__succeeded = MR_TRUE;
        else
          switch (MR_tag((MR_Word) mercury__hash_table__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mercury__hash_table__CastX_3 = (MR_Integer) mercury__hash_table__HeadVar__1_1;
                MR_Integer mercury__hash_table__CastY_4 = (MR_Integer) mercury__hash_table__HeadVar__2_2;

                mercury__hash_table__succeeded = (mercury__hash_table__CastY_4 == mercury__hash_table__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box mercury__hash_table__Var_5 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__1_1, (MR_Integer) 0));
                MR_Box mercury__hash_table__Var_6 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__1_1, (MR_Integer) 1));
                MR_Box mercury__hash_table__Var_7;
                MR_Box mercury__hash_table__Var_8;

                mercury__hash_table__succeeded = ((MR_tag((MR_Word) mercury__hash_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__hash_table__succeeded)
                  {
                    mercury__hash_table__Var_7 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__2_2, (MR_Integer) 0));
                    mercury__hash_table__Var_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__2_2, (MR_Integer) 1));
                    {
                      mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_17, mercury__hash_table__Var_5, mercury__hash_table__Var_7);
                    }
                    if (mercury__hash_table__succeeded)
                      {
                        mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_V_18, mercury__hash_table__Var_6, mercury__hash_table__Var_8);
                      }
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Box mercury__hash_table__Var_9 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__1_1, (MR_Integer) 0));
                MR_Box mercury__hash_table__Var_10 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__1_1, (MR_Integer) 1));
                MR_Word mercury__hash_table__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__1_1, (MR_Integer) 2)));
                MR_Box mercury__hash_table__Var_12;
                MR_Box mercury__hash_table__Var_13;
                MR_Word mercury__hash_table__Var_14;

                mercury__hash_table__succeeded = ((MR_tag((MR_Word) mercury__hash_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
                if (mercury__hash_table__succeeded)
                  {
                    mercury__hash_table__Var_12 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__2_2, (MR_Integer) 0));
                    mercury__hash_table__Var_13 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__2_2, (MR_Integer) 1));
                    mercury__hash_table__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__2_2, (MR_Integer) 2)));
                    {
                      mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_17, mercury__hash_table__Var_9, mercury__hash_table__Var_12);
                    }
                    if (mercury__hash_table__succeeded)
                      {
                        {
                          mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_V_18, mercury__hash_table__Var_10, mercury__hash_table__Var_13);
                        }
                        if (mercury__hash_table__succeeded)
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word mercury__hash_table__next_value_of_HeadVar__1_1 = mercury__hash_table__Var_11;
                              MR_Word mercury__hash_table__next_value_of_HeadVar__2_2 = mercury__hash_table__Var_14;

                              mercury__hash_table__HeadVar__2_2 = mercury__hash_table__next_value_of_HeadVar__2_2;
                              mercury__hash_table__HeadVar__1_1 = mercury__hash_table__next_value_of_HeadVar__1_1;
                            }
                            continue;
                          }
                      }
                  }
              }
              break;
          }
        return mercury__hash_table__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__hash_table____Compare____hash_table_2_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_17,
  MR_Word mercury__hash_table__TypeInfo_for_V_18,
  MR_Word * mercury__hash_table__HeadVar__1_1,
  MR_Word mercury__hash_table__HeadVar__2_2,
  MR_Word mercury__hash_table__HeadVar__3_3)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_Integer mercury__hash_table__CastX_15 = (MR_Integer) mercury__hash_table__HeadVar__2_2;
    MR_Integer mercury__hash_table__CastY_16 = (MR_Integer) mercury__hash_table__HeadVar__3_3;

    mercury__hash_table__succeeded = (mercury__hash_table__CastX_15 == mercury__hash_table__CastY_16);
    if (mercury__hash_table__succeeded)
      *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer mercury__hash_table__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mercury__hash_table__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__hash_table__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 2)));
        MR_ArrayPtr mercury__hash_table__Var_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer mercury__hash_table__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer mercury__hash_table__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mercury__hash_table__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__3_3, (MR_Integer) 2)));
        MR_ArrayPtr mercury__hash_table__Var_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word mercury__hash_table__Var_12;

        mercury__hash_table__succeeded = (mercury__hash_table__Var_4 < mercury__hash_table__Var_8);
        if (mercury__hash_table__succeeded)
          mercury__hash_table__Var_12 = (MR_Integer) 1;
        else
          {
            mercury__hash_table__succeeded = (mercury__hash_table__Var_4 == mercury__hash_table__Var_8);
            if (mercury__hash_table__succeeded)
              mercury__hash_table__Var_12 = (MR_Integer) 0;
            else
              mercury__hash_table__Var_12 = (MR_Integer) 2;
          }
        mercury__hash_table__succeeded = (mercury__hash_table__Var_12 == (MR_Integer) 0);
        mercury__hash_table__succeeded = !(mercury__hash_table__succeeded);
        if (mercury__hash_table__succeeded)
          *mercury__hash_table__HeadVar__1_1 = mercury__hash_table__Var_12;
        else
          {
            MR_Word mercury__hash_table__Var_13;

            mercury__hash_table__succeeded = (mercury__hash_table__Var_5 < mercury__hash_table__Var_9);
            if (mercury__hash_table__succeeded)
              mercury__hash_table__Var_13 = (MR_Integer) 1;
            else
              {
                mercury__hash_table__succeeded = (mercury__hash_table__Var_5 == mercury__hash_table__Var_9);
                if (mercury__hash_table__succeeded)
                  mercury__hash_table__Var_13 = (MR_Integer) 0;
                else
                  mercury__hash_table__Var_13 = (MR_Integer) 2;
              }
            mercury__hash_table__succeeded = (mercury__hash_table__Var_13 == (MR_Integer) 0);
            mercury__hash_table__succeeded = !(mercury__hash_table__succeeded);
            if (mercury__hash_table__succeeded)
              *mercury__hash_table__HeadVar__1_1 = mercury__hash_table__Var_13;
            else
              {
                MR_Word mercury__hash_table__Var_14;

                {
                  mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__hash_table__Var_14, (MR_Word) mercury__hash_table__Var_6, (MR_Word) mercury__hash_table__Var_10);
                }
                mercury__hash_table__succeeded = (mercury__hash_table__Var_14 == (MR_Integer) 0);
                mercury__hash_table__succeeded = !(mercury__hash_table__succeeded);
                if (mercury__hash_table__succeeded)
                  *mercury__hash_table__HeadVar__1_1 = mercury__hash_table__Var_14;
                else
                  {
                    MR_Word mercury__hash_table__TypeCtorInfo_25_25 = (MR_Word) &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2;
                    MR_Word mercury__hash_table__TypeInfo_26_26;

                    {
                      mercury__hash_table__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_26_26, 0) = ((MR_Box) (mercury__hash_table__TypeCtorInfo_25_25));
                      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_26_26, 1) = ((MR_Box) (mercury__hash_table__TypeInfo_for_K_17));
                      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_26_26, 2) = ((MR_Box) (mercury__hash_table__TypeInfo_for_V_18));
                    }
                    {
                      mercury__array____Compare____array_1_0(mercury__hash_table__TypeInfo_26_26, mercury__hash_table__HeadVar__1_1, (MR_ArrayPtr) mercury__hash_table__Var_7, (MR_ArrayPtr) mercury__hash_table__Var_11);
                    }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__hash_table____Unify____hash_table_2_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_13,
  MR_Word mercury__hash_table__TypeInfo_for_V_14,
  MR_Word mercury__hash_table__HeadVar__1_1,
  MR_Word mercury__hash_table__HeadVar__2_2)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_Integer mercury__hash_table__CastX_11 = (MR_Integer) mercury__hash_table__HeadVar__1_1;
    MR_Integer mercury__hash_table__CastY_12 = (MR_Integer) mercury__hash_table__HeadVar__2_2;

    mercury__hash_table__succeeded = (mercury__hash_table__CastX_11 == mercury__hash_table__CastY_12);
    if (mercury__hash_table__succeeded)
      mercury__hash_table__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__hash_table__TypeCtorInfo_15_15;
        MR_Word mercury__hash_table__TypeInfo_16_16;
        MR_Integer mercury__hash_table__Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mercury__hash_table__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__hash_table__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 2)));
        MR_ArrayPtr mercury__hash_table__Var_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer mercury__hash_table__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mercury__hash_table__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__hash_table__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 2)));
        MR_ArrayPtr mercury__hash_table__Var_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 3)));

        mercury__hash_table__succeeded = (mercury__hash_table__Var_3 == mercury__hash_table__Var_7);
        if (mercury__hash_table__succeeded)
          {
            mercury__hash_table__succeeded = (mercury__hash_table__Var_4 == mercury__hash_table__Var_8);
            if (mercury__hash_table__succeeded)
              {
                {
                  mercury__hash_table__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__hash_table__Var_5, (MR_Word) mercury__hash_table__Var_9);
                }
                if (mercury__hash_table__succeeded)
                  {
                    mercury__hash_table__TypeCtorInfo_15_15 = (MR_Word) &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2;
                    {
                      mercury__hash_table__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_16_16, 0) = ((MR_Box) (mercury__hash_table__TypeCtorInfo_15_15));
                      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_16_16, 1) = ((MR_Box) (mercury__hash_table__TypeInfo_for_K_13));
                      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_16_16, 2) = ((MR_Box) (mercury__hash_table__TypeInfo_for_V_14));
                    }
                    {
                      mercury__hash_table__succeeded = mercury__array____Unify____array_1_0(mercury__hash_table__TypeInfo_16_16, (MR_ArrayPtr) mercury__hash_table__Var_6, (MR_ArrayPtr) mercury__hash_table__Var_10);
                    }
                  }
              }
          }
      }
    return mercury__hash_table__succeeded;
  }
}

void MR_CALL 
mercury__hash_table____Compare____hash_pred_1_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_6,
  MR_Word * mercury__hash_table__HeadVar__1_1,
  MR_Word mercury__hash_table__HeadVar__2_2,
  MR_Word mercury__hash_table__HeadVar__3_3)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_Word mercury__hash_table__Cast_HeadVar1_4 = mercury__hash_table__HeadVar__2_2;
    MR_Word mercury__hash_table__Cast_HeadVar2_5 = mercury__hash_table__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__hash_table__HeadVar__1_1, (MR_Word) mercury__hash_table__Cast_HeadVar1_4, (MR_Word) mercury__hash_table__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__hash_table____Unify____hash_pred_1_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_5,
  MR_Word mercury__hash_table__HeadVar__1_1,
  MR_Word mercury__hash_table__HeadVar__2_2)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_Word mercury__hash_table__Cast_HeadVar1_3 = mercury__hash_table__HeadVar__1_1;
    MR_Word mercury__hash_table__Cast_HeadVar2_4 = mercury__hash_table__HeadVar__2_2;

    {
      mercury__hash_table__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__hash_table__Cast_HeadVar1_3, (MR_Word) mercury__hash_table__Cast_HeadVar2_4);
    }
    return mercury__hash_table__succeeded;
  }
}

void MR_CALL 
mercury__hash_table____Compare____buckets_2_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_6,
  MR_Word mercury__hash_table__TypeInfo_for_V_7,
  MR_Word * mercury__hash_table__HeadVar__1_1,
  MR_ArrayPtr mercury__hash_table__HeadVar__2_2,
  MR_ArrayPtr mercury__hash_table__HeadVar__3_3)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_Word mercury__hash_table__TypeCtorInfo_8_8 = (MR_Word) &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2;
    MR_Word mercury__hash_table__TypeInfo_9_9;
    MR_ArrayPtr mercury__hash_table__Cast_HeadVar1_4 = mercury__hash_table__HeadVar__2_2;
    MR_ArrayPtr mercury__hash_table__Cast_HeadVar2_5 = mercury__hash_table__HeadVar__3_3;

    {
      mercury__hash_table__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_9_9, 0) = ((MR_Box) (mercury__hash_table__TypeCtorInfo_8_8));
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_9_9, 1) = ((MR_Box) (mercury__hash_table__TypeInfo_for_K_6));
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_9_9, 2) = ((MR_Box) (mercury__hash_table__TypeInfo_for_V_7));
    }
    {
      mercury__array____Compare____array_1_0(mercury__hash_table__TypeInfo_9_9, mercury__hash_table__HeadVar__1_1, (MR_ArrayPtr) mercury__hash_table__Cast_HeadVar1_4, (MR_ArrayPtr) mercury__hash_table__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__hash_table____Unify____buckets_2_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_5,
  MR_Word mercury__hash_table__TypeInfo_for_V_6,
  MR_ArrayPtr mercury__hash_table__HeadVar__1_1,
  MR_ArrayPtr mercury__hash_table__HeadVar__2_2)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_Word mercury__hash_table__TypeCtorInfo_7_7 = (MR_Word) &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2;
    MR_Word mercury__hash_table__TypeInfo_8_8;
    MR_ArrayPtr mercury__hash_table__Cast_HeadVar1_3 = mercury__hash_table__HeadVar__1_1;
    MR_ArrayPtr mercury__hash_table__Cast_HeadVar2_4 = mercury__hash_table__HeadVar__2_2;

    {
      mercury__hash_table__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_8_8, 0) = ((MR_Box) (mercury__hash_table__TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_8_8, 1) = ((MR_Box) (mercury__hash_table__TypeInfo_for_K_5));
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_8_8, 2) = ((MR_Box) (mercury__hash_table__TypeInfo_for_V_6));
    }
    {
      mercury__hash_table__succeeded = mercury__array____Unify____array_1_0(mercury__hash_table__TypeInfo_8_8, (MR_ArrayPtr) mercury__hash_table__Cast_HeadVar1_3, (MR_ArrayPtr) mercury__hash_table__Cast_HeadVar2_4);
    }
    return mercury__hash_table__succeeded;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold3_p_8_p_5(
  MR_Word mercury__hash_table__TypeInfo_for_K_34,
  MR_Word mercury__hash_table__TypeInfo_for_V_35,
  MR_Word mercury__hash_table__TypeInfo_for_A_36,
  MR_Word mercury__hash_table__TypeInfo_for_B_37,
  MR_Word mercury__hash_table__TypeInfo_for_C_38,
  MR_Word mercury__hash_table__P_9,
  MR_Word mercury__hash_table__List_10,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_18,
  MR_Box mercury__hash_table__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__hash_table__STATE_VARIABLE_B_20,
  MR_Box mercury__hash_table__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__hash_table__STATE_VARIABLE_C_22)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__hash_table__List_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__hash_table__STATE_VARIABLE_A_18 = mercury__hash_table__STATE_VARIABLE_A_0_17;
              *mercury__hash_table__STATE_VARIABLE_B_20 = mercury__hash_table__STATE_VARIABLE_B_0_19;
              *mercury__hash_table__STATE_VARIABLE_C_22 = mercury__hash_table__STATE_VARIABLE_C_0_21;
              mercury__hash_table__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__hash_table__K_14 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_10, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_15 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_10, (MR_Integer) 1));
              MR_bool MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_9, (MR_Integer) 1)));

              {
                mercury__hash_table__succeeded = mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_9), mercury__hash_table__K_14, mercury__hash_table__V_15, mercury__hash_table__STATE_VARIABLE_A_0_17, mercury__hash_table__STATE_VARIABLE_A_18, mercury__hash_table__STATE_VARIABLE_B_0_19, mercury__hash_table__STATE_VARIABLE_B_20, mercury__hash_table__STATE_VARIABLE_C_0_21, mercury__hash_table__STATE_VARIABLE_C_22);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__hash_table__KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_10, (MR_Integer) 2)));
              MR_Box mercury__hash_table__STATE_VARIABLE_A_23_23;
              MR_Box mercury__hash_table__STATE_VARIABLE_B_24_24;
              MR_Box mercury__hash_table__STATE_VARIABLE_C_25_25;
              MR_Box mercury__hash_table__K_32 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_10, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_33 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_10, (MR_Integer) 1));
              MR_bool MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_9, (MR_Integer) 1)));

              {
                mercury__hash_table__succeeded = mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_9), mercury__hash_table__K_32, mercury__hash_table__V_33, mercury__hash_table__STATE_VARIABLE_A_0_17, &mercury__hash_table__STATE_VARIABLE_A_23_23, mercury__hash_table__STATE_VARIABLE_B_0_19, &mercury__hash_table__STATE_VARIABLE_B_24_24, mercury__hash_table__STATE_VARIABLE_C_0_21, &mercury__hash_table__STATE_VARIABLE_C_25_25);
              }
              if (mercury__hash_table__succeeded)
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__hash_table__next_value_of_List_10 = mercury__hash_table__KVs_16;
                    MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_17 = mercury__hash_table__STATE_VARIABLE_A_23_23;
                    MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_B_0_19 = mercury__hash_table__STATE_VARIABLE_B_24_24;
                    MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_C_0_21 = mercury__hash_table__STATE_VARIABLE_C_25_25;

                    mercury__hash_table__STATE_VARIABLE_C_0_21 = mercury__hash_table__next_value_of_STATE_VARIABLE_C_0_21;
                    mercury__hash_table__STATE_VARIABLE_B_0_19 = mercury__hash_table__next_value_of_STATE_VARIABLE_B_0_19;
                    mercury__hash_table__STATE_VARIABLE_A_0_17 = mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_17;
                    mercury__hash_table__List_10 = mercury__hash_table__next_value_of_List_10;
                  }
                  continue;
                }
            }
            break;
        }
        return mercury__hash_table__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__hash_table__fold3_p_8_p_4(
  MR_Word mercury__hash_table__TypeInfo_for_K_34,
  MR_Word mercury__hash_table__TypeInfo_for_V_35,
  MR_Word mercury__hash_table__TypeInfo_for_A_36,
  MR_Word mercury__hash_table__TypeInfo_for_B_37,
  MR_Word mercury__hash_table__TypeInfo_for_C_38,
  MR_Word mercury__hash_table__P_9,
  MR_Word mercury__hash_table__List_10,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_18,
  MR_Box mercury__hash_table__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__hash_table__STATE_VARIABLE_B_20,
  MR_Box mercury__hash_table__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__hash_table__STATE_VARIABLE_C_22)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__hash_table__List_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__hash_table__STATE_VARIABLE_A_18 = mercury__hash_table__STATE_VARIABLE_A_0_17;
              *mercury__hash_table__STATE_VARIABLE_B_20 = mercury__hash_table__STATE_VARIABLE_B_0_19;
              *mercury__hash_table__STATE_VARIABLE_C_22 = mercury__hash_table__STATE_VARIABLE_C_0_21;
              mercury__hash_table__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__hash_table__K_14 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_10, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_15 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_10, (MR_Integer) 1));
              MR_bool MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_9, (MR_Integer) 1)));

              {
                mercury__hash_table__succeeded = mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_9), mercury__hash_table__K_14, mercury__hash_table__V_15, mercury__hash_table__STATE_VARIABLE_A_0_17, mercury__hash_table__STATE_VARIABLE_A_18, mercury__hash_table__STATE_VARIABLE_B_0_19, mercury__hash_table__STATE_VARIABLE_B_20, mercury__hash_table__STATE_VARIABLE_C_0_21, mercury__hash_table__STATE_VARIABLE_C_22);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__hash_table__KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_10, (MR_Integer) 2)));
              MR_Box mercury__hash_table__STATE_VARIABLE_A_23_23;
              MR_Box mercury__hash_table__STATE_VARIABLE_B_24_24;
              MR_Box mercury__hash_table__STATE_VARIABLE_C_25_25;
              MR_Box mercury__hash_table__K_32 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_10, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_33 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_10, (MR_Integer) 1));
              MR_bool MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_9, (MR_Integer) 1)));

              {
                mercury__hash_table__succeeded = mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_9), mercury__hash_table__K_32, mercury__hash_table__V_33, mercury__hash_table__STATE_VARIABLE_A_0_17, &mercury__hash_table__STATE_VARIABLE_A_23_23, mercury__hash_table__STATE_VARIABLE_B_0_19, &mercury__hash_table__STATE_VARIABLE_B_24_24, mercury__hash_table__STATE_VARIABLE_C_0_21, &mercury__hash_table__STATE_VARIABLE_C_25_25);
              }
              if (mercury__hash_table__succeeded)
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__hash_table__next_value_of_List_10 = mercury__hash_table__KVs_16;
                    MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_17 = mercury__hash_table__STATE_VARIABLE_A_23_23;
                    MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_B_0_19 = mercury__hash_table__STATE_VARIABLE_B_24_24;
                    MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_C_0_21 = mercury__hash_table__STATE_VARIABLE_C_25_25;

                    mercury__hash_table__STATE_VARIABLE_C_0_21 = mercury__hash_table__next_value_of_STATE_VARIABLE_C_0_21;
                    mercury__hash_table__STATE_VARIABLE_B_0_19 = mercury__hash_table__next_value_of_STATE_VARIABLE_B_0_19;
                    mercury__hash_table__STATE_VARIABLE_A_0_17 = mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_17;
                    mercury__hash_table__List_10 = mercury__hash_table__next_value_of_List_10;
                  }
                  continue;
                }
            }
            break;
        }
        return mercury__hash_table__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__hash_table__fold3_p_8_p_3(
  MR_Word mercury__hash_table__TypeInfo_for_K_34,
  MR_Word mercury__hash_table__TypeInfo_for_V_35,
  MR_Word mercury__hash_table__TypeInfo_for_A_36,
  MR_Word mercury__hash_table__TypeInfo_for_B_37,
  MR_Word mercury__hash_table__TypeInfo_for_C_38,
  MR_Word mercury__hash_table__P_9,
  MR_Word mercury__hash_table__List_10,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_18,
  MR_Box mercury__hash_table__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__hash_table__STATE_VARIABLE_B_20,
  MR_Box mercury__hash_table__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__hash_table__STATE_VARIABLE_C_22)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__hash_table__List_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__hash_table__STATE_VARIABLE_A_18 = mercury__hash_table__STATE_VARIABLE_A_0_17;
              *mercury__hash_table__STATE_VARIABLE_B_20 = mercury__hash_table__STATE_VARIABLE_B_0_19;
              *mercury__hash_table__STATE_VARIABLE_C_22 = mercury__hash_table__STATE_VARIABLE_C_0_21;
              mercury__hash_table__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__hash_table__K_14 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_10, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_15 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_10, (MR_Integer) 1));
              MR_bool MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_9, (MR_Integer) 1)));

              {
                mercury__hash_table__succeeded = mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_9), mercury__hash_table__K_14, mercury__hash_table__V_15, mercury__hash_table__STATE_VARIABLE_A_0_17, mercury__hash_table__STATE_VARIABLE_A_18, mercury__hash_table__STATE_VARIABLE_B_0_19, mercury__hash_table__STATE_VARIABLE_B_20, mercury__hash_table__STATE_VARIABLE_C_0_21, mercury__hash_table__STATE_VARIABLE_C_22);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__hash_table__KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_10, (MR_Integer) 2)));
              MR_Box mercury__hash_table__STATE_VARIABLE_A_23_23;
              MR_Box mercury__hash_table__STATE_VARIABLE_B_24_24;
              MR_Box mercury__hash_table__STATE_VARIABLE_C_25_25;
              MR_Box mercury__hash_table__K_32 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_10, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_33 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_10, (MR_Integer) 1));
              MR_bool MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_9, (MR_Integer) 1)));

              {
                mercury__hash_table__succeeded = mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_9), mercury__hash_table__K_32, mercury__hash_table__V_33, mercury__hash_table__STATE_VARIABLE_A_0_17, &mercury__hash_table__STATE_VARIABLE_A_23_23, mercury__hash_table__STATE_VARIABLE_B_0_19, &mercury__hash_table__STATE_VARIABLE_B_24_24, mercury__hash_table__STATE_VARIABLE_C_0_21, &mercury__hash_table__STATE_VARIABLE_C_25_25);
              }
              if (mercury__hash_table__succeeded)
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__hash_table__next_value_of_List_10 = mercury__hash_table__KVs_16;
                    MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_17 = mercury__hash_table__STATE_VARIABLE_A_23_23;
                    MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_B_0_19 = mercury__hash_table__STATE_VARIABLE_B_24_24;
                    MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_C_0_21 = mercury__hash_table__STATE_VARIABLE_C_25_25;

                    mercury__hash_table__STATE_VARIABLE_C_0_21 = mercury__hash_table__next_value_of_STATE_VARIABLE_C_0_21;
                    mercury__hash_table__STATE_VARIABLE_B_0_19 = mercury__hash_table__next_value_of_STATE_VARIABLE_B_0_19;
                    mercury__hash_table__STATE_VARIABLE_A_0_17 = mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_17;
                    mercury__hash_table__List_10 = mercury__hash_table__next_value_of_List_10;
                  }
                  continue;
                }
            }
            break;
        }
        return mercury__hash_table__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__hash_table__fold3_p_8_p_2(
  MR_Word mercury__hash_table__TypeInfo_for_K_34,
  MR_Word mercury__hash_table__TypeInfo_for_V_35,
  MR_Word mercury__hash_table__TypeInfo_for_A_36,
  MR_Word mercury__hash_table__TypeInfo_for_B_37,
  MR_Word mercury__hash_table__TypeInfo_for_C_38,
  MR_Word mercury__hash_table__P_9,
  MR_Word mercury__hash_table__List_10,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_18,
  MR_Box mercury__hash_table__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__hash_table__STATE_VARIABLE_B_20,
  MR_Box mercury__hash_table__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__hash_table__STATE_VARIABLE_C_22)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__hash_table__List_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__hash_table__STATE_VARIABLE_A_18 = mercury__hash_table__STATE_VARIABLE_A_0_17;
              *mercury__hash_table__STATE_VARIABLE_B_20 = mercury__hash_table__STATE_VARIABLE_B_0_19;
              *mercury__hash_table__STATE_VARIABLE_C_22 = mercury__hash_table__STATE_VARIABLE_C_0_21;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__hash_table__K_14 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_10, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_15 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_10, (MR_Integer) 1));
              void MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_9, (MR_Integer) 1)));

              {
                mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_9), mercury__hash_table__K_14, mercury__hash_table__V_15, mercury__hash_table__STATE_VARIABLE_A_0_17, mercury__hash_table__STATE_VARIABLE_A_18, mercury__hash_table__STATE_VARIABLE_B_0_19, mercury__hash_table__STATE_VARIABLE_B_20, mercury__hash_table__STATE_VARIABLE_C_0_21, mercury__hash_table__STATE_VARIABLE_C_22);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__hash_table__KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_10, (MR_Integer) 2)));
              MR_Box mercury__hash_table__STATE_VARIABLE_A_23_23;
              MR_Box mercury__hash_table__STATE_VARIABLE_B_24_24;
              MR_Box mercury__hash_table__STATE_VARIABLE_C_25_25;
              MR_Box mercury__hash_table__K_32 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_10, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_33 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_10, (MR_Integer) 1));
              void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_9, (MR_Integer) 1)));

              {
                mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_9), mercury__hash_table__K_32, mercury__hash_table__V_33, mercury__hash_table__STATE_VARIABLE_A_0_17, &mercury__hash_table__STATE_VARIABLE_A_23_23, mercury__hash_table__STATE_VARIABLE_B_0_19, &mercury__hash_table__STATE_VARIABLE_B_24_24, mercury__hash_table__STATE_VARIABLE_C_0_21, &mercury__hash_table__STATE_VARIABLE_C_25_25);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__hash_table__next_value_of_List_10 = mercury__hash_table__KVs_16;
                MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_17 = mercury__hash_table__STATE_VARIABLE_A_23_23;
                MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_B_0_19 = mercury__hash_table__STATE_VARIABLE_B_24_24;
                MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_C_0_21 = mercury__hash_table__STATE_VARIABLE_C_25_25;

                mercury__hash_table__STATE_VARIABLE_C_0_21 = mercury__hash_table__next_value_of_STATE_VARIABLE_C_0_21;
                mercury__hash_table__STATE_VARIABLE_B_0_19 = mercury__hash_table__next_value_of_STATE_VARIABLE_B_0_19;
                mercury__hash_table__STATE_VARIABLE_A_0_17 = mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_17;
                mercury__hash_table__List_10 = mercury__hash_table__next_value_of_List_10;
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
mercury__hash_table__fold3_p_8_p_1(
  MR_Word mercury__hash_table__TypeInfo_for_K_34,
  MR_Word mercury__hash_table__TypeInfo_for_V_35,
  MR_Word mercury__hash_table__TypeInfo_for_A_36,
  MR_Word mercury__hash_table__TypeInfo_for_B_37,
  MR_Word mercury__hash_table__TypeInfo_for_C_38,
  MR_Word mercury__hash_table__P_9,
  MR_Word mercury__hash_table__List_10,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_18,
  MR_Box mercury__hash_table__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__hash_table__STATE_VARIABLE_B_20,
  MR_Box mercury__hash_table__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__hash_table__STATE_VARIABLE_C_22)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__hash_table__List_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__hash_table__STATE_VARIABLE_A_18 = mercury__hash_table__STATE_VARIABLE_A_0_17;
              *mercury__hash_table__STATE_VARIABLE_B_20 = mercury__hash_table__STATE_VARIABLE_B_0_19;
              *mercury__hash_table__STATE_VARIABLE_C_22 = mercury__hash_table__STATE_VARIABLE_C_0_21;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__hash_table__K_14 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_10, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_15 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_10, (MR_Integer) 1));
              void MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_9, (MR_Integer) 1)));

              {
                mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_9), mercury__hash_table__K_14, mercury__hash_table__V_15, mercury__hash_table__STATE_VARIABLE_A_0_17, mercury__hash_table__STATE_VARIABLE_A_18, mercury__hash_table__STATE_VARIABLE_B_0_19, mercury__hash_table__STATE_VARIABLE_B_20, mercury__hash_table__STATE_VARIABLE_C_0_21, mercury__hash_table__STATE_VARIABLE_C_22);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__hash_table__KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_10, (MR_Integer) 2)));
              MR_Box mercury__hash_table__STATE_VARIABLE_A_23_23;
              MR_Box mercury__hash_table__STATE_VARIABLE_B_24_24;
              MR_Box mercury__hash_table__STATE_VARIABLE_C_25_25;
              MR_Box mercury__hash_table__K_32 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_10, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_33 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_10, (MR_Integer) 1));
              void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_9, (MR_Integer) 1)));

              {
                mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_9), mercury__hash_table__K_32, mercury__hash_table__V_33, mercury__hash_table__STATE_VARIABLE_A_0_17, &mercury__hash_table__STATE_VARIABLE_A_23_23, mercury__hash_table__STATE_VARIABLE_B_0_19, &mercury__hash_table__STATE_VARIABLE_B_24_24, mercury__hash_table__STATE_VARIABLE_C_0_21, &mercury__hash_table__STATE_VARIABLE_C_25_25);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__hash_table__next_value_of_List_10 = mercury__hash_table__KVs_16;
                MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_17 = mercury__hash_table__STATE_VARIABLE_A_23_23;
                MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_B_0_19 = mercury__hash_table__STATE_VARIABLE_B_24_24;
                MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_C_0_21 = mercury__hash_table__STATE_VARIABLE_C_25_25;

                mercury__hash_table__STATE_VARIABLE_C_0_21 = mercury__hash_table__next_value_of_STATE_VARIABLE_C_0_21;
                mercury__hash_table__STATE_VARIABLE_B_0_19 = mercury__hash_table__next_value_of_STATE_VARIABLE_B_0_19;
                mercury__hash_table__STATE_VARIABLE_A_0_17 = mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_17;
                mercury__hash_table__List_10 = mercury__hash_table__next_value_of_List_10;
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
mercury__hash_table__fold3_p_8_p_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_34,
  MR_Word mercury__hash_table__TypeInfo_for_V_35,
  MR_Word mercury__hash_table__TypeInfo_for_A_36,
  MR_Word mercury__hash_table__TypeInfo_for_B_37,
  MR_Word mercury__hash_table__TypeInfo_for_C_38,
  MR_Word mercury__hash_table__P_9,
  MR_Word mercury__hash_table__List_10,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_18,
  MR_Box mercury__hash_table__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__hash_table__STATE_VARIABLE_B_20,
  MR_Box mercury__hash_table__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__hash_table__STATE_VARIABLE_C_22)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__hash_table__List_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__hash_table__STATE_VARIABLE_A_18 = mercury__hash_table__STATE_VARIABLE_A_0_17;
              *mercury__hash_table__STATE_VARIABLE_B_20 = mercury__hash_table__STATE_VARIABLE_B_0_19;
              *mercury__hash_table__STATE_VARIABLE_C_22 = mercury__hash_table__STATE_VARIABLE_C_0_21;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__hash_table__K_14 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_10, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_15 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_10, (MR_Integer) 1));
              void MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_9, (MR_Integer) 1)));

              {
                mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_9), mercury__hash_table__K_14, mercury__hash_table__V_15, mercury__hash_table__STATE_VARIABLE_A_0_17, mercury__hash_table__STATE_VARIABLE_A_18, mercury__hash_table__STATE_VARIABLE_B_0_19, mercury__hash_table__STATE_VARIABLE_B_20, mercury__hash_table__STATE_VARIABLE_C_0_21, mercury__hash_table__STATE_VARIABLE_C_22);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__hash_table__KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_10, (MR_Integer) 2)));
              MR_Box mercury__hash_table__STATE_VARIABLE_A_23_23;
              MR_Box mercury__hash_table__STATE_VARIABLE_B_24_24;
              MR_Box mercury__hash_table__STATE_VARIABLE_C_25_25;
              MR_Box mercury__hash_table__K_32 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_10, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_33 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_10, (MR_Integer) 1));
              void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_9, (MR_Integer) 1)));

              {
                mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_9), mercury__hash_table__K_32, mercury__hash_table__V_33, mercury__hash_table__STATE_VARIABLE_A_0_17, &mercury__hash_table__STATE_VARIABLE_A_23_23, mercury__hash_table__STATE_VARIABLE_B_0_19, &mercury__hash_table__STATE_VARIABLE_B_24_24, mercury__hash_table__STATE_VARIABLE_C_0_21, &mercury__hash_table__STATE_VARIABLE_C_25_25);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__hash_table__next_value_of_List_10 = mercury__hash_table__KVs_16;
                MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_17 = mercury__hash_table__STATE_VARIABLE_A_23_23;
                MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_B_0_19 = mercury__hash_table__STATE_VARIABLE_B_24_24;
                MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_C_0_21 = mercury__hash_table__STATE_VARIABLE_C_25_25;

                mercury__hash_table__STATE_VARIABLE_C_0_21 = mercury__hash_table__next_value_of_STATE_VARIABLE_C_0_21;
                mercury__hash_table__STATE_VARIABLE_B_0_19 = mercury__hash_table__next_value_of_STATE_VARIABLE_B_0_19;
                mercury__hash_table__STATE_VARIABLE_A_0_17 = mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_17;
                mercury__hash_table__List_10 = mercury__hash_table__next_value_of_List_10;
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
mercury__hash_table__fold2_p_6_p_5(
  MR_Word mercury__hash_table__TypeInfo_for_K_26,
  MR_Word mercury__hash_table__TypeInfo_for_V_27,
  MR_Word mercury__hash_table__TypeInfo_for_A_28,
  MR_Word mercury__hash_table__TypeInfo_for_B_29,
  MR_Word mercury__hash_table__P_7,
  MR_Word mercury__hash_table__List_8,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_15,
  MR_Box mercury__hash_table__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__hash_table__STATE_VARIABLE_B_17)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__hash_table__List_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__hash_table__STATE_VARIABLE_A_15 = mercury__hash_table__STATE_VARIABLE_A_0_14;
              *mercury__hash_table__STATE_VARIABLE_B_17 = mercury__hash_table__STATE_VARIABLE_B_0_16;
              mercury__hash_table__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__hash_table__K_11 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_8, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_12 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_8, (MR_Integer) 1));
              MR_bool MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_7, (MR_Integer) 1)));

              {
                mercury__hash_table__succeeded = mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_7), mercury__hash_table__K_11, mercury__hash_table__V_12, mercury__hash_table__STATE_VARIABLE_A_0_14, mercury__hash_table__STATE_VARIABLE_A_15, mercury__hash_table__STATE_VARIABLE_B_0_16, mercury__hash_table__STATE_VARIABLE_B_17);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__hash_table__KVs_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_8, (MR_Integer) 2)));
              MR_Box mercury__hash_table__STATE_VARIABLE_A_18_18;
              MR_Box mercury__hash_table__STATE_VARIABLE_B_19_19;
              MR_Box mercury__hash_table__K_24 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_8, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_25 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_8, (MR_Integer) 1));
              MR_bool MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_7, (MR_Integer) 1)));

              {
                mercury__hash_table__succeeded = mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_7), mercury__hash_table__K_24, mercury__hash_table__V_25, mercury__hash_table__STATE_VARIABLE_A_0_14, &mercury__hash_table__STATE_VARIABLE_A_18_18, mercury__hash_table__STATE_VARIABLE_B_0_16, &mercury__hash_table__STATE_VARIABLE_B_19_19);
              }
              if (mercury__hash_table__succeeded)
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__hash_table__next_value_of_List_8 = mercury__hash_table__KVs_13;
                    MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_14 = mercury__hash_table__STATE_VARIABLE_A_18_18;
                    MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_B_0_16 = mercury__hash_table__STATE_VARIABLE_B_19_19;

                    mercury__hash_table__STATE_VARIABLE_B_0_16 = mercury__hash_table__next_value_of_STATE_VARIABLE_B_0_16;
                    mercury__hash_table__STATE_VARIABLE_A_0_14 = mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_14;
                    mercury__hash_table__List_8 = mercury__hash_table__next_value_of_List_8;
                  }
                  continue;
                }
            }
            break;
        }
        return mercury__hash_table__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__hash_table__fold2_p_6_p_4(
  MR_Word mercury__hash_table__TypeInfo_for_K_26,
  MR_Word mercury__hash_table__TypeInfo_for_V_27,
  MR_Word mercury__hash_table__TypeInfo_for_A_28,
  MR_Word mercury__hash_table__TypeInfo_for_B_29,
  MR_Word mercury__hash_table__P_7,
  MR_Word mercury__hash_table__List_8,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_15,
  MR_Box mercury__hash_table__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__hash_table__STATE_VARIABLE_B_17)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__hash_table__List_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__hash_table__STATE_VARIABLE_A_15 = mercury__hash_table__STATE_VARIABLE_A_0_14;
              *mercury__hash_table__STATE_VARIABLE_B_17 = mercury__hash_table__STATE_VARIABLE_B_0_16;
              mercury__hash_table__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__hash_table__K_11 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_8, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_12 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_8, (MR_Integer) 1));
              MR_bool MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_7, (MR_Integer) 1)));

              {
                mercury__hash_table__succeeded = mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_7), mercury__hash_table__K_11, mercury__hash_table__V_12, mercury__hash_table__STATE_VARIABLE_A_0_14, mercury__hash_table__STATE_VARIABLE_A_15, mercury__hash_table__STATE_VARIABLE_B_0_16, mercury__hash_table__STATE_VARIABLE_B_17);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__hash_table__KVs_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_8, (MR_Integer) 2)));
              MR_Box mercury__hash_table__STATE_VARIABLE_A_18_18;
              MR_Box mercury__hash_table__STATE_VARIABLE_B_19_19;
              MR_Box mercury__hash_table__K_24 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_8, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_25 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_8, (MR_Integer) 1));
              MR_bool MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_7, (MR_Integer) 1)));

              {
                mercury__hash_table__succeeded = mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_7), mercury__hash_table__K_24, mercury__hash_table__V_25, mercury__hash_table__STATE_VARIABLE_A_0_14, &mercury__hash_table__STATE_VARIABLE_A_18_18, mercury__hash_table__STATE_VARIABLE_B_0_16, &mercury__hash_table__STATE_VARIABLE_B_19_19);
              }
              if (mercury__hash_table__succeeded)
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__hash_table__next_value_of_List_8 = mercury__hash_table__KVs_13;
                    MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_14 = mercury__hash_table__STATE_VARIABLE_A_18_18;
                    MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_B_0_16 = mercury__hash_table__STATE_VARIABLE_B_19_19;

                    mercury__hash_table__STATE_VARIABLE_B_0_16 = mercury__hash_table__next_value_of_STATE_VARIABLE_B_0_16;
                    mercury__hash_table__STATE_VARIABLE_A_0_14 = mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_14;
                    mercury__hash_table__List_8 = mercury__hash_table__next_value_of_List_8;
                  }
                  continue;
                }
            }
            break;
        }
        return mercury__hash_table__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__hash_table__fold2_p_6_p_3(
  MR_Word mercury__hash_table__TypeInfo_for_K_26,
  MR_Word mercury__hash_table__TypeInfo_for_V_27,
  MR_Word mercury__hash_table__TypeInfo_for_A_28,
  MR_Word mercury__hash_table__TypeInfo_for_B_29,
  MR_Word mercury__hash_table__P_7,
  MR_Word mercury__hash_table__List_8,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_15,
  MR_Box mercury__hash_table__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__hash_table__STATE_VARIABLE_B_17)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__hash_table__List_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__hash_table__STATE_VARIABLE_A_15 = mercury__hash_table__STATE_VARIABLE_A_0_14;
              *mercury__hash_table__STATE_VARIABLE_B_17 = mercury__hash_table__STATE_VARIABLE_B_0_16;
              mercury__hash_table__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__hash_table__K_11 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_8, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_12 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_8, (MR_Integer) 1));
              MR_bool MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_7, (MR_Integer) 1)));

              {
                mercury__hash_table__succeeded = mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_7), mercury__hash_table__K_11, mercury__hash_table__V_12, mercury__hash_table__STATE_VARIABLE_A_0_14, mercury__hash_table__STATE_VARIABLE_A_15, mercury__hash_table__STATE_VARIABLE_B_0_16, mercury__hash_table__STATE_VARIABLE_B_17);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__hash_table__KVs_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_8, (MR_Integer) 2)));
              MR_Box mercury__hash_table__STATE_VARIABLE_A_18_18;
              MR_Box mercury__hash_table__STATE_VARIABLE_B_19_19;
              MR_Box mercury__hash_table__K_24 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_8, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_25 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_8, (MR_Integer) 1));
              MR_bool MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_7, (MR_Integer) 1)));

              {
                mercury__hash_table__succeeded = mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_7), mercury__hash_table__K_24, mercury__hash_table__V_25, mercury__hash_table__STATE_VARIABLE_A_0_14, &mercury__hash_table__STATE_VARIABLE_A_18_18, mercury__hash_table__STATE_VARIABLE_B_0_16, &mercury__hash_table__STATE_VARIABLE_B_19_19);
              }
              if (mercury__hash_table__succeeded)
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__hash_table__next_value_of_List_8 = mercury__hash_table__KVs_13;
                    MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_14 = mercury__hash_table__STATE_VARIABLE_A_18_18;
                    MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_B_0_16 = mercury__hash_table__STATE_VARIABLE_B_19_19;

                    mercury__hash_table__STATE_VARIABLE_B_0_16 = mercury__hash_table__next_value_of_STATE_VARIABLE_B_0_16;
                    mercury__hash_table__STATE_VARIABLE_A_0_14 = mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_14;
                    mercury__hash_table__List_8 = mercury__hash_table__next_value_of_List_8;
                  }
                  continue;
                }
            }
            break;
        }
        return mercury__hash_table__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__hash_table__fold2_p_6_p_2(
  MR_Word mercury__hash_table__TypeInfo_for_K_26,
  MR_Word mercury__hash_table__TypeInfo_for_V_27,
  MR_Word mercury__hash_table__TypeInfo_for_A_28,
  MR_Word mercury__hash_table__TypeInfo_for_B_29,
  MR_Word mercury__hash_table__P_7,
  MR_Word mercury__hash_table__List_8,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_15,
  MR_Box mercury__hash_table__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__hash_table__STATE_VARIABLE_B_17)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__hash_table__List_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__hash_table__STATE_VARIABLE_A_15 = mercury__hash_table__STATE_VARIABLE_A_0_14;
              *mercury__hash_table__STATE_VARIABLE_B_17 = mercury__hash_table__STATE_VARIABLE_B_0_16;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__hash_table__K_11 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_8, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_12 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_8, (MR_Integer) 1));
              void MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_7, (MR_Integer) 1)));

              {
                mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_7), mercury__hash_table__K_11, mercury__hash_table__V_12, mercury__hash_table__STATE_VARIABLE_A_0_14, mercury__hash_table__STATE_VARIABLE_A_15, mercury__hash_table__STATE_VARIABLE_B_0_16, mercury__hash_table__STATE_VARIABLE_B_17);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__hash_table__KVs_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_8, (MR_Integer) 2)));
              MR_Box mercury__hash_table__STATE_VARIABLE_A_18_18;
              MR_Box mercury__hash_table__STATE_VARIABLE_B_19_19;
              MR_Box mercury__hash_table__K_24 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_8, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_25 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_8, (MR_Integer) 1));
              void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_7, (MR_Integer) 1)));

              {
                mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_7), mercury__hash_table__K_24, mercury__hash_table__V_25, mercury__hash_table__STATE_VARIABLE_A_0_14, &mercury__hash_table__STATE_VARIABLE_A_18_18, mercury__hash_table__STATE_VARIABLE_B_0_16, &mercury__hash_table__STATE_VARIABLE_B_19_19);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__hash_table__next_value_of_List_8 = mercury__hash_table__KVs_13;
                MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_14 = mercury__hash_table__STATE_VARIABLE_A_18_18;
                MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_B_0_16 = mercury__hash_table__STATE_VARIABLE_B_19_19;

                mercury__hash_table__STATE_VARIABLE_B_0_16 = mercury__hash_table__next_value_of_STATE_VARIABLE_B_0_16;
                mercury__hash_table__STATE_VARIABLE_A_0_14 = mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_14;
                mercury__hash_table__List_8 = mercury__hash_table__next_value_of_List_8;
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
mercury__hash_table__fold2_p_6_p_1(
  MR_Word mercury__hash_table__TypeInfo_for_K_26,
  MR_Word mercury__hash_table__TypeInfo_for_V_27,
  MR_Word mercury__hash_table__TypeInfo_for_A_28,
  MR_Word mercury__hash_table__TypeInfo_for_B_29,
  MR_Word mercury__hash_table__P_7,
  MR_Word mercury__hash_table__List_8,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_15,
  MR_Box mercury__hash_table__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__hash_table__STATE_VARIABLE_B_17)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__hash_table__List_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__hash_table__STATE_VARIABLE_A_15 = mercury__hash_table__STATE_VARIABLE_A_0_14;
              *mercury__hash_table__STATE_VARIABLE_B_17 = mercury__hash_table__STATE_VARIABLE_B_0_16;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__hash_table__K_11 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_8, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_12 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_8, (MR_Integer) 1));
              void MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_7, (MR_Integer) 1)));

              {
                mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_7), mercury__hash_table__K_11, mercury__hash_table__V_12, mercury__hash_table__STATE_VARIABLE_A_0_14, mercury__hash_table__STATE_VARIABLE_A_15, mercury__hash_table__STATE_VARIABLE_B_0_16, mercury__hash_table__STATE_VARIABLE_B_17);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__hash_table__KVs_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_8, (MR_Integer) 2)));
              MR_Box mercury__hash_table__STATE_VARIABLE_A_18_18;
              MR_Box mercury__hash_table__STATE_VARIABLE_B_19_19;
              MR_Box mercury__hash_table__K_24 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_8, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_25 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_8, (MR_Integer) 1));
              void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_7, (MR_Integer) 1)));

              {
                mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_7), mercury__hash_table__K_24, mercury__hash_table__V_25, mercury__hash_table__STATE_VARIABLE_A_0_14, &mercury__hash_table__STATE_VARIABLE_A_18_18, mercury__hash_table__STATE_VARIABLE_B_0_16, &mercury__hash_table__STATE_VARIABLE_B_19_19);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__hash_table__next_value_of_List_8 = mercury__hash_table__KVs_13;
                MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_14 = mercury__hash_table__STATE_VARIABLE_A_18_18;
                MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_B_0_16 = mercury__hash_table__STATE_VARIABLE_B_19_19;

                mercury__hash_table__STATE_VARIABLE_B_0_16 = mercury__hash_table__next_value_of_STATE_VARIABLE_B_0_16;
                mercury__hash_table__STATE_VARIABLE_A_0_14 = mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_14;
                mercury__hash_table__List_8 = mercury__hash_table__next_value_of_List_8;
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
mercury__hash_table__fold2_p_6_p_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_26,
  MR_Word mercury__hash_table__TypeInfo_for_V_27,
  MR_Word mercury__hash_table__TypeInfo_for_A_28,
  MR_Word mercury__hash_table__TypeInfo_for_B_29,
  MR_Word mercury__hash_table__P_7,
  MR_Word mercury__hash_table__List_8,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_15,
  MR_Box mercury__hash_table__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__hash_table__STATE_VARIABLE_B_17)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__hash_table__List_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__hash_table__STATE_VARIABLE_A_15 = mercury__hash_table__STATE_VARIABLE_A_0_14;
              *mercury__hash_table__STATE_VARIABLE_B_17 = mercury__hash_table__STATE_VARIABLE_B_0_16;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__hash_table__K_11 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_8, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_12 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_8, (MR_Integer) 1));
              void MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_7, (MR_Integer) 1)));

              {
                mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_7), mercury__hash_table__K_11, mercury__hash_table__V_12, mercury__hash_table__STATE_VARIABLE_A_0_14, mercury__hash_table__STATE_VARIABLE_A_15, mercury__hash_table__STATE_VARIABLE_B_0_16, mercury__hash_table__STATE_VARIABLE_B_17);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__hash_table__KVs_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_8, (MR_Integer) 2)));
              MR_Box mercury__hash_table__STATE_VARIABLE_A_18_18;
              MR_Box mercury__hash_table__STATE_VARIABLE_B_19_19;
              MR_Box mercury__hash_table__K_24 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_8, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_25 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_8, (MR_Integer) 1));
              void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_7, (MR_Integer) 1)));

              {
                mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_7), mercury__hash_table__K_24, mercury__hash_table__V_25, mercury__hash_table__STATE_VARIABLE_A_0_14, &mercury__hash_table__STATE_VARIABLE_A_18_18, mercury__hash_table__STATE_VARIABLE_B_0_16, &mercury__hash_table__STATE_VARIABLE_B_19_19);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__hash_table__next_value_of_List_8 = mercury__hash_table__KVs_13;
                MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_14 = mercury__hash_table__STATE_VARIABLE_A_18_18;
                MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_B_0_16 = mercury__hash_table__STATE_VARIABLE_B_19_19;

                mercury__hash_table__STATE_VARIABLE_B_0_16 = mercury__hash_table__next_value_of_STATE_VARIABLE_B_0_16;
                mercury__hash_table__STATE_VARIABLE_A_0_14 = mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_14;
                mercury__hash_table__List_8 = mercury__hash_table__next_value_of_List_8;
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
mercury__hash_table__fold_p_4_p_5(
  MR_Word mercury__hash_table__TypeInfo_for_K_18,
  MR_Word mercury__hash_table__TypeInfo_for_V_19,
  MR_Word mercury__hash_table__TypeInfo_for_A_20,
  MR_Word mercury__hash_table__P_5,
  MR_Word mercury__hash_table__List_6,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__hash_table__List_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__hash_table__STATE_VARIABLE_A_12 = mercury__hash_table__STATE_VARIABLE_A_0_11;
              mercury__hash_table__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
              MR_bool MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

              {
                mercury__hash_table__succeeded = mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_8, mercury__hash_table__V_9, mercury__hash_table__STATE_VARIABLE_A_0_11, mercury__hash_table__STATE_VARIABLE_A_12);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
              MR_Box mercury__hash_table__STATE_VARIABLE_A_13_13;
              MR_Box mercury__hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
              MR_bool MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

              {
                mercury__hash_table__succeeded = mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_16, mercury__hash_table__V_17, mercury__hash_table__STATE_VARIABLE_A_0_11, &mercury__hash_table__STATE_VARIABLE_A_13_13);
              }
              if (mercury__hash_table__succeeded)
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__hash_table__next_value_of_List_6 = mercury__hash_table__KVs_10;
                    MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_11 = mercury__hash_table__STATE_VARIABLE_A_13_13;

                    mercury__hash_table__STATE_VARIABLE_A_0_11 = mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_11;
                    mercury__hash_table__List_6 = mercury__hash_table__next_value_of_List_6;
                  }
                  continue;
                }
            }
            break;
        }
        return mercury__hash_table__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__hash_table__fold_p_4_p_4(
  MR_Word mercury__hash_table__TypeInfo_for_K_18,
  MR_Word mercury__hash_table__TypeInfo_for_V_19,
  MR_Word mercury__hash_table__TypeInfo_for_A_20,
  MR_Word mercury__hash_table__P_5,
  MR_Word mercury__hash_table__List_6,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__hash_table__List_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__hash_table__STATE_VARIABLE_A_12 = mercury__hash_table__STATE_VARIABLE_A_0_11;
              mercury__hash_table__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
              MR_bool MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

              {
                mercury__hash_table__succeeded = mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_8, mercury__hash_table__V_9, mercury__hash_table__STATE_VARIABLE_A_0_11, mercury__hash_table__STATE_VARIABLE_A_12);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
              MR_Box mercury__hash_table__STATE_VARIABLE_A_13_13;
              MR_Box mercury__hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
              MR_bool MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

              {
                mercury__hash_table__succeeded = mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_16, mercury__hash_table__V_17, mercury__hash_table__STATE_VARIABLE_A_0_11, &mercury__hash_table__STATE_VARIABLE_A_13_13);
              }
              if (mercury__hash_table__succeeded)
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__hash_table__next_value_of_List_6 = mercury__hash_table__KVs_10;
                    MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_11 = mercury__hash_table__STATE_VARIABLE_A_13_13;

                    mercury__hash_table__STATE_VARIABLE_A_0_11 = mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_11;
                    mercury__hash_table__List_6 = mercury__hash_table__next_value_of_List_6;
                  }
                  continue;
                }
            }
            break;
        }
        return mercury__hash_table__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__hash_table__fold_p_4_p_3(
  MR_Word mercury__hash_table__TypeInfo_for_K_18,
  MR_Word mercury__hash_table__TypeInfo_for_V_19,
  MR_Word mercury__hash_table__TypeInfo_for_A_20,
  MR_Word mercury__hash_table__P_5,
  MR_Word mercury__hash_table__List_6,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__hash_table__List_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__hash_table__STATE_VARIABLE_A_12 = mercury__hash_table__STATE_VARIABLE_A_0_11;
              mercury__hash_table__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
              MR_bool MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

              {
                mercury__hash_table__succeeded = mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_8, mercury__hash_table__V_9, mercury__hash_table__STATE_VARIABLE_A_0_11, mercury__hash_table__STATE_VARIABLE_A_12);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
              MR_Box mercury__hash_table__STATE_VARIABLE_A_13_13;
              MR_Box mercury__hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
              MR_bool MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

              {
                mercury__hash_table__succeeded = mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_16, mercury__hash_table__V_17, mercury__hash_table__STATE_VARIABLE_A_0_11, &mercury__hash_table__STATE_VARIABLE_A_13_13);
              }
              if (mercury__hash_table__succeeded)
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__hash_table__next_value_of_List_6 = mercury__hash_table__KVs_10;
                    MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_11 = mercury__hash_table__STATE_VARIABLE_A_13_13;

                    mercury__hash_table__STATE_VARIABLE_A_0_11 = mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_11;
                    mercury__hash_table__List_6 = mercury__hash_table__next_value_of_List_6;
                  }
                  continue;
                }
            }
            break;
        }
        return mercury__hash_table__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__hash_table__fold_p_4_p_2(
  MR_Word mercury__hash_table__TypeInfo_for_K_18,
  MR_Word mercury__hash_table__TypeInfo_for_V_19,
  MR_Word mercury__hash_table__TypeInfo_for_A_20,
  MR_Word mercury__hash_table__P_5,
  MR_Word mercury__hash_table__List_6,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__hash_table__List_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__hash_table__STATE_VARIABLE_A_12 = mercury__hash_table__STATE_VARIABLE_A_0_11;
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
              void MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

              {
                mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_8, mercury__hash_table__V_9, mercury__hash_table__STATE_VARIABLE_A_0_11, mercury__hash_table__STATE_VARIABLE_A_12);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
              MR_Box mercury__hash_table__STATE_VARIABLE_A_13_13;
              MR_Box mercury__hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
              void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

              {
                mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_16, mercury__hash_table__V_17, mercury__hash_table__STATE_VARIABLE_A_0_11, &mercury__hash_table__STATE_VARIABLE_A_13_13);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__hash_table__next_value_of_List_6 = mercury__hash_table__KVs_10;
                MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_11 = mercury__hash_table__STATE_VARIABLE_A_13_13;

                mercury__hash_table__STATE_VARIABLE_A_0_11 = mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_11;
                mercury__hash_table__List_6 = mercury__hash_table__next_value_of_List_6;
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
mercury__hash_table__fold_p_4_p_1(
  MR_Word mercury__hash_table__TypeInfo_for_K_18,
  MR_Word mercury__hash_table__TypeInfo_for_V_19,
  MR_Word mercury__hash_table__TypeInfo_for_A_20,
  MR_Word mercury__hash_table__P_5,
  MR_Word mercury__hash_table__List_6,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__hash_table__List_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__hash_table__STATE_VARIABLE_A_12 = mercury__hash_table__STATE_VARIABLE_A_0_11;
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
              void MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

              {
                mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_8, mercury__hash_table__V_9, mercury__hash_table__STATE_VARIABLE_A_0_11, mercury__hash_table__STATE_VARIABLE_A_12);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
              MR_Box mercury__hash_table__STATE_VARIABLE_A_13_13;
              MR_Box mercury__hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
              void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

              {
                mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_16, mercury__hash_table__V_17, mercury__hash_table__STATE_VARIABLE_A_0_11, &mercury__hash_table__STATE_VARIABLE_A_13_13);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__hash_table__next_value_of_List_6 = mercury__hash_table__KVs_10;
                MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_11 = mercury__hash_table__STATE_VARIABLE_A_13_13;

                mercury__hash_table__STATE_VARIABLE_A_0_11 = mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_11;
                mercury__hash_table__List_6 = mercury__hash_table__next_value_of_List_6;
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
mercury__hash_table__fold_p_4_p_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_18,
  MR_Word mercury__hash_table__TypeInfo_for_V_19,
  MR_Word mercury__hash_table__TypeInfo_for_A_20,
  MR_Word mercury__hash_table__P_5,
  MR_Word mercury__hash_table__List_6,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__hash_table__List_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__hash_table__STATE_VARIABLE_A_12 = mercury__hash_table__STATE_VARIABLE_A_0_11;
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
              void MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

              {
                mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_8, mercury__hash_table__V_9, mercury__hash_table__STATE_VARIABLE_A_0_11, mercury__hash_table__STATE_VARIABLE_A_12);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
              MR_Box mercury__hash_table__STATE_VARIABLE_A_13_13;
              MR_Box mercury__hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
              void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

              {
                mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_16, mercury__hash_table__V_17, mercury__hash_table__STATE_VARIABLE_A_0_11, &mercury__hash_table__STATE_VARIABLE_A_13_13);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__hash_table__next_value_of_List_6 = mercury__hash_table__KVs_10;
                MR_Box mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_11 = mercury__hash_table__STATE_VARIABLE_A_13_13;

                mercury__hash_table__STATE_VARIABLE_A_0_11 = mercury__hash_table__next_value_of_STATE_VARIABLE_A_0_11;
                mercury__hash_table__List_6 = mercury__hash_table__next_value_of_List_6;
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
mercury__hash_table__fold_f_4_p_1(
  MR_Word mercury__hash_table__TypeInfo_for_K_15,
  MR_Word mercury__hash_table__TypeInfo_for_V_16,
  MR_Word mercury__hash_table__TypeInfo_for_T_17,
  MR_Word mercury__hash_table__F_5,
  MR_Word mercury__hash_table__List_6,
  MR_Box mercury__hash_table__A0_7,
  MR_Box * mercury__hash_table__A_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__hash_table__List_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__hash_table__A_8 = mercury__hash_table__A0_7;
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__hash_table__K_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_10 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
              MR_Box MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__hash_table__F_5, (MR_Integer) 1)));

              {
                *mercury__hash_table__A_8 = mercury__hash_table__func_1(((MR_Box) mercury__hash_table__F_5), mercury__hash_table__K_9, mercury__hash_table__V_10, mercury__hash_table__A0_7);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__hash_table__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
              MR_Box mercury__hash_table__A1_12;
              MR_Box mercury__hash_table__K_13 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_14 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
              MR_Box MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__hash_table__F_5, (MR_Integer) 1)));

              {
                mercury__hash_table__A1_12 = mercury__hash_table__func_0(((MR_Box) mercury__hash_table__F_5), mercury__hash_table__K_13, mercury__hash_table__V_14, mercury__hash_table__A0_7);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__hash_table__next_value_of_List_6 = mercury__hash_table__KVs_11;
                MR_Box mercury__hash_table__next_value_of_A0_7 = mercury__hash_table__A1_12;

                mercury__hash_table__A0_7 = mercury__hash_table__next_value_of_A0_7;
                mercury__hash_table__List_6 = mercury__hash_table__next_value_of_List_6;
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
mercury__hash_table__fold_f_4_p_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_15,
  MR_Word mercury__hash_table__TypeInfo_for_V_16,
  MR_Word mercury__hash_table__TypeInfo_for_T_17,
  MR_Word mercury__hash_table__F_5,
  MR_Word mercury__hash_table__List_6,
  MR_Box mercury__hash_table__A0_7,
  MR_Box * mercury__hash_table__A_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__hash_table__List_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__hash_table__A_8 = mercury__hash_table__A0_7;
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__hash_table__K_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_10 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
              MR_Box MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__hash_table__F_5, (MR_Integer) 1)));

              {
                *mercury__hash_table__A_8 = mercury__hash_table__func_1(((MR_Box) mercury__hash_table__F_5), mercury__hash_table__K_9, mercury__hash_table__V_10, mercury__hash_table__A0_7);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__hash_table__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
              MR_Box mercury__hash_table__A1_12;
              MR_Box mercury__hash_table__K_13 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_14 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
              MR_Box MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__hash_table__F_5, (MR_Integer) 1)));

              {
                mercury__hash_table__A1_12 = mercury__hash_table__func_0(((MR_Box) mercury__hash_table__F_5), mercury__hash_table__K_13, mercury__hash_table__V_14, mercury__hash_table__A0_7);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__hash_table__next_value_of_List_6 = mercury__hash_table__KVs_11;
                MR_Box mercury__hash_table__next_value_of_A0_7 = mercury__hash_table__A1_12;

                mercury__hash_table__A0_7 = mercury__hash_table__next_value_of_A0_7;
                mercury__hash_table__List_6 = mercury__hash_table__next_value_of_List_6;
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

static MR_Word MR_CALL 
mercury__hash_table__expand_4_f_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_20,
  MR_Word mercury__hash_table__TypeInfo_for_V_21,
  MR_Integer mercury__hash_table__NumOccupants_6,
  MR_Integer mercury__hash_table__MaxOccupants0_7,
  MR_Word mercury__hash_table__HashPred_8,
  MR_ArrayPtr mercury__hash_table__Buckets0_9)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_Word mercury__hash_table__HT_10;
    MR_Word mercury__hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2;
    MR_Word mercury__hash_table__TypeInfo_23_23;
    MR_Integer mercury__hash_table__NumBuckets0_11;
    MR_Integer mercury__hash_table__NumBuckets_12;
    MR_Integer mercury__hash_table__MaxOccupants_13;
    MR_ArrayPtr mercury__hash_table__Buckets1_14;
    MR_ArrayPtr mercury__hash_table__Buckets_15;
    MR_Word mercury__hash_table__Var_18;
    MR_Word mercury__hash_table__TypeInfo_23_26;
    MR_ArrayPtr mercury__hash_table__conv0_Buckets1_14;

    {
      mercury__hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__hash_table__TypeCtorInfo_22_22));
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__hash_table__TypeInfo_for_K_20));
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__hash_table__TypeInfo_for_V_21));
    }
{
#define MR_PROC_LABEL mercury__hash_table__expand_4_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Buckets0_9 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__NumBuckets0_11  = Max;
}
    mercury__hash_table__NumBuckets_12 = (mercury__hash_table__NumBuckets0_11 + mercury__hash_table__NumBuckets0_11);
    mercury__hash_table__MaxOccupants_13 = (mercury__hash_table__MaxOccupants0_7 + mercury__hash_table__MaxOccupants0_7);
    mercury__hash_table__Var_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__array__init_3_p_0(mercury__hash_table__TypeInfo_23_23, mercury__hash_table__NumBuckets_12, ((MR_Box) (mercury__hash_table__Var_18)), &mercury__hash_table__conv0_Buckets1_14);
    }
    mercury__hash_table__Buckets1_14 = (MR_ArrayPtr) mercury__hash_table__conv0_Buckets1_14;
    {
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_p_0((MR_Integer) 0, mercury__hash_table__Buckets0_9, mercury__hash_table__HashPred_8, mercury__hash_table__NumBuckets_12, mercury__hash_table__Buckets1_14, &mercury__hash_table__Buckets_15);
    }
    {
      mercury__hash_table__HT_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, 0) = ((MR_Box) (mercury__hash_table__NumOccupants_6));
      MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, 1) = ((MR_Box) (mercury__hash_table__MaxOccupants_13));
      MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, 2) = ((MR_Box) (mercury__hash_table__HashPred_8));
      MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, 3) = ((MR_Box) (mercury__hash_table__Buckets_15));
    }
    return mercury__hash_table__HT_10;
  }
}

void MR_CALL 
mercury__hash_table__from_assoc_list_2_3_p_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_16,
  MR_Word mercury__hash_table__TypeInfo_for_V_17,
  MR_Word mercury__hash_table__HeadVar__1_1,
  MR_Word mercury__hash_table__STATE_VARIABLE_HT_0_2,
  MR_Word * mercury__hash_table__STATE_VARIABLE_HT_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded;

        if ((mercury__hash_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__hash_table__STATE_VARIABLE_HT_3 = mercury__hash_table__STATE_VARIABLE_HT_0_2;
        else
          {
            MR_Box mercury__hash_table__K_7;
            MR_Box mercury__hash_table__V_8;
            MR_Word mercury__hash_table__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__hash_table__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__hash_table__STATE_VARIABLE_HT_14_14;

            mercury__hash_table__K_7 = (MR_hl_field(MR_mktag(0), mercury__hash_table__Var_13, (MR_Integer) 0));
            mercury__hash_table__V_8 = (MR_hl_field(MR_mktag(0), mercury__hash_table__Var_13, (MR_Integer) 1));
            {
              mercury__hash_table__STATE_VARIABLE_HT_14_14 = mercury__hash_table__set_3_f_0(mercury__hash_table__TypeInfo_for_K_16, mercury__hash_table__TypeInfo_for_V_17, mercury__hash_table__STATE_VARIABLE_HT_0_2, mercury__hash_table__K_7, mercury__hash_table__V_8);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__hash_table__next_value_of_HeadVar__1_1 = mercury__hash_table__T_9;
              MR_Word mercury__hash_table__next_value_of_STATE_VARIABLE_HT_0_2 = mercury__hash_table__STATE_VARIABLE_HT_14_14;

              mercury__hash_table__STATE_VARIABLE_HT_0_2 = mercury__hash_table__next_value_of_STATE_VARIABLE_HT_0_2;
              mercury__hash_table__HeadVar__1_1 = mercury__hash_table__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__hash_table__to_assoc_list_2_3_p_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_15,
  MR_Word mercury__hash_table__TypeInfo_for_V_16,
  MR_Word mercury__hash_table__X_4,
  MR_Word mercury__hash_table__AL0_5,
  MR_Word * mercury__hash_table__AL_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded;

        switch (MR_tag((MR_Word) mercury__hash_table__X_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__hash_table__AL_6 = mercury__hash_table__AL0_5;
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__hash_table__K_7 = (MR_hl_field(MR_mktag(1), mercury__hash_table__X_4, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__X_4, (MR_Integer) 1));
              MR_Word mercury__hash_table__Var_12;

              {
                mercury__hash_table__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__hash_table__Var_12, 0) = mercury__hash_table__K_7;
                MR_hl_field(MR_mktag(0), mercury__hash_table__Var_12, 1) = mercury__hash_table__V_8;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__hash_table__AL_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__hash_table__Var_12));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__hash_table__AL0_5));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__hash_table__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__X_4, (MR_Integer) 2)));
              MR_Word mercury__hash_table__AL1_10;
              MR_Word mercury__hash_table__Var_11;
              MR_Box mercury__hash_table__K_13 = (MR_hl_field(MR_mktag(2), mercury__hash_table__X_4, (MR_Integer) 0));
              MR_Box mercury__hash_table__V_14 = (MR_hl_field(MR_mktag(2), mercury__hash_table__X_4, (MR_Integer) 1));

              {
                mercury__hash_table__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__hash_table__Var_11, 0) = mercury__hash_table__K_13;
                MR_hl_field(MR_mktag(0), mercury__hash_table__Var_11, 1) = mercury__hash_table__V_14;
              }
              {
                mercury__hash_table__AL1_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__hash_table__AL1_10, 0) = ((MR_Box) (mercury__hash_table__Var_11));
                MR_hl_field(MR_mktag(1), mercury__hash_table__AL1_10, 1) = ((MR_Box) (mercury__hash_table__AL0_5));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__hash_table__next_value_of_X_4 = mercury__hash_table__T_9;
                MR_Word mercury__hash_table__next_value_of_AL0_5 = mercury__hash_table__AL1_10;

                mercury__hash_table__AL0_5 = mercury__hash_table__next_value_of_AL0_5;
                mercury__hash_table__X_4 = mercury__hash_table__next_value_of_X_4;
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
mercury__hash_table__alist_search_3_p_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_10,
  MR_Word mercury__hash_table__TypeInfo_for_V_11,
  MR_Word mercury__hash_table__AL_4,
  MR_Box mercury__hash_table__K_5,
  MR_Box * mercury__hash_table__V_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded;

        if (((MR_tag((MR_Word) mercury__hash_table__AL_4)) == (MR_mktag((MR_Integer) 2))))
          {
            MR_Box mercury__hash_table__HK_7 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL_4, (MR_Integer) 0));
            MR_Box mercury__hash_table__HV_8 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL_4, (MR_Integer) 1));
            MR_Word mercury__hash_table__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__AL_4, (MR_Integer) 2)));

            {
              mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_10, mercury__hash_table__HK_7, mercury__hash_table__K_5);
            }
            if (mercury__hash_table__succeeded)
              {
                *mercury__hash_table__V_6 = mercury__hash_table__HV_8;
                mercury__hash_table__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__hash_table__next_value_of_AL_4 = mercury__hash_table__T_9;

                  mercury__hash_table__AL_4 = mercury__hash_table__next_value_of_AL_4;
                }
                continue;
              }
          }
        else
        if (((MR_tag((MR_Word) mercury__hash_table__AL_4)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Box mercury__hash_table__Var_12 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL_4, (MR_Integer) 0));

            *mercury__hash_table__V_6 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL_4, (MR_Integer) 1));
            {
              mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_10, mercury__hash_table__K_5, mercury__hash_table__Var_12);
            }
          }
        else
          mercury__hash_table__succeeded = MR_FALSE;
        return mercury__hash_table__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__hash_table__find_slot_2_4_p_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_12,
  MR_Word mercury__hash_table__HashPred_5,
  MR_Box mercury__hash_table__K_6,
  MR_Integer mercury__hash_table__NumBuckets_7,
  MR_Integer * mercury__hash_table__H_8)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_Integer mercury__hash_table__Hash_9;
    MR_Integer mercury__hash_table__Var_10;
    void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__HashPred_5, (MR_Integer) 1)));
    MR_Box mercury__hash_table__conv1_Hash_9;

    {
      mercury__hash_table__func_0(((MR_Box) mercury__hash_table__HashPred_5), mercury__hash_table__K_6, &mercury__hash_table__conv1_Hash_9);
    }
    mercury__hash_table__Hash_9 = ((MR_Integer) mercury__hash_table__conv1_Hash_9);
    mercury__hash_table__Var_10 = (mercury__hash_table__NumBuckets_7 - (MR_Integer) 1);
    *mercury__hash_table__H_8 = (mercury__hash_table__Hash_9 & mercury__hash_table__Var_10);
  }
}

MR_Integer MR_CALL 
mercury__hash_table__find_slot_2_f_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_9,
  MR_Word mercury__hash_table__TypeInfo_for_V_10,
  MR_Word mercury__hash_table__HT_4,
  MR_Box mercury__hash_table__K_5)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_Integer mercury__hash_table__H_6;
    MR_Word mercury__hash_table__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 2)));
    MR_Integer mercury__hash_table__Var_8;
    MR_ArrayPtr mercury__hash_table__Var_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 3)));
    MR_Integer mercury__hash_table__Hash_27;
    MR_Integer mercury__hash_table__Var_28;
    MR_Integer mercury__hash_table__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 0)));
    MR_Integer mercury__hash_table__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 1)));
    MR_Word mercury__hash_table__TypeInfo_11_30;
    void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box mercury__hash_table__conv1_Hash_27;

{
#define MR_PROC_LABEL mercury__hash_table__find_slot_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_13 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__Var_8  = Max;
}
    mercury__hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__Var_7, (MR_Integer) 1)));
    {
      mercury__hash_table__func_0(((MR_Box) mercury__hash_table__Var_7), mercury__hash_table__K_5, &mercury__hash_table__conv1_Hash_27);
    }
    mercury__hash_table__Hash_27 = ((MR_Integer) mercury__hash_table__conv1_Hash_27);
    mercury__hash_table__Var_28 = (mercury__hash_table__Var_8 - (MR_Integer) 1);
    mercury__hash_table__H_6 = (mercury__hash_table__Hash_27 & mercury__hash_table__Var_28);
    return mercury__hash_table__H_6;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold3_8_p_5(
  MR_Word mercury__hash_table__TypeInfo_for_K_28,
  MR_Word mercury__hash_table__TypeInfo_for_V_29,
  MR_Word mercury__hash_table__TypeInfo_for_A_30,
  MR_Word mercury__hash_table__TypeInfo_for_B_31,
  MR_Word mercury__hash_table__TypeInfo_for_C_32,
  MR_Word mercury__hash_table__P_9,
  MR_Word mercury__hash_table__HT_10,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_15,
  MR_Box mercury__hash_table__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__hash_table__STATE_VARIABLE_B_17,
  MR_Box mercury__hash_table__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__hash_table__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_ArrayPtr mercury__hash_table__Var_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, (MR_Integer) 3)));
    MR_Integer mercury__hash_table__V_20_50;
    MR_Integer mercury__hash_table__V_21_51;
    MR_Integer mercury__hash_table__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, (MR_Integer) 0)));
    MR_Integer mercury__hash_table__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, (MR_Integer) 1)));
    MR_Word mercury__hash_table__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, (MR_Integer) 2)));
    MR_Word mercury__hash_table__TypeInfo_41_57;
    MR_Word mercury__hash_table__TypeInfo_41_58;

{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_21 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_20_50  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_21 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_21_51  = Max;
}
    {
      mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_56_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(mercury__hash_table__TypeInfo_for_K_28, mercury__hash_table__TypeInfo_for_V_29, mercury__hash_table__TypeInfo_for_A_30, mercury__hash_table__TypeInfo_for_B_31, mercury__hash_table__TypeInfo_for_C_32, mercury__hash_table__P_9, mercury__hash_table__V_20_50, mercury__hash_table__V_21_51, mercury__hash_table__Var_21, mercury__hash_table__STATE_VARIABLE_A_0_14, mercury__hash_table__STATE_VARIABLE_A_15, mercury__hash_table__STATE_VARIABLE_B_0_16, mercury__hash_table__STATE_VARIABLE_B_17, mercury__hash_table__STATE_VARIABLE_C_0_18, mercury__hash_table__STATE_VARIABLE_C_19);
    }
    return mercury__hash_table__succeeded;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold3_8_p_4(
  MR_Word mercury__hash_table__TypeInfo_for_K_28,
  MR_Word mercury__hash_table__TypeInfo_for_V_29,
  MR_Word mercury__hash_table__TypeInfo_for_A_30,
  MR_Word mercury__hash_table__TypeInfo_for_B_31,
  MR_Word mercury__hash_table__TypeInfo_for_C_32,
  MR_Word mercury__hash_table__P_9,
  MR_Word mercury__hash_table__HT_10,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_15,
  MR_Box mercury__hash_table__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__hash_table__STATE_VARIABLE_B_17,
  MR_Box mercury__hash_table__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__hash_table__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_ArrayPtr mercury__hash_table__Var_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, (MR_Integer) 3)));
    MR_Integer mercury__hash_table__V_20_50;
    MR_Integer mercury__hash_table__V_21_51;
    MR_Integer mercury__hash_table__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, (MR_Integer) 0)));
    MR_Integer mercury__hash_table__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, (MR_Integer) 1)));
    MR_Word mercury__hash_table__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, (MR_Integer) 2)));
    MR_Word mercury__hash_table__TypeInfo_41_57;
    MR_Word mercury__hash_table__TypeInfo_41_58;

{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_21 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_20_50  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_21 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_21_51  = Max;
}
    {
      mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_55_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(mercury__hash_table__TypeInfo_for_K_28, mercury__hash_table__TypeInfo_for_V_29, mercury__hash_table__TypeInfo_for_A_30, mercury__hash_table__TypeInfo_for_B_31, mercury__hash_table__TypeInfo_for_C_32, mercury__hash_table__P_9, mercury__hash_table__V_20_50, mercury__hash_table__V_21_51, mercury__hash_table__Var_21, mercury__hash_table__STATE_VARIABLE_A_0_14, mercury__hash_table__STATE_VARIABLE_A_15, mercury__hash_table__STATE_VARIABLE_B_0_16, mercury__hash_table__STATE_VARIABLE_B_17, mercury__hash_table__STATE_VARIABLE_C_0_18, mercury__hash_table__STATE_VARIABLE_C_19);
    }
    return mercury__hash_table__succeeded;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold3_8_p_3(
  MR_Word mercury__hash_table__TypeInfo_for_K_28,
  MR_Word mercury__hash_table__TypeInfo_for_V_29,
  MR_Word mercury__hash_table__TypeInfo_for_A_30,
  MR_Word mercury__hash_table__TypeInfo_for_B_31,
  MR_Word mercury__hash_table__TypeInfo_for_C_32,
  MR_Word mercury__hash_table__P_9,
  MR_Word mercury__hash_table__HT_10,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_15,
  MR_Box mercury__hash_table__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__hash_table__STATE_VARIABLE_B_17,
  MR_Box mercury__hash_table__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__hash_table__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_ArrayPtr mercury__hash_table__Var_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, (MR_Integer) 3)));
    MR_Integer mercury__hash_table__V_20_50;
    MR_Integer mercury__hash_table__V_21_51;
    MR_Integer mercury__hash_table__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, (MR_Integer) 0)));
    MR_Integer mercury__hash_table__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, (MR_Integer) 1)));
    MR_Word mercury__hash_table__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, (MR_Integer) 2)));
    MR_Word mercury__hash_table__TypeInfo_41_57;
    MR_Word mercury__hash_table__TypeInfo_41_58;

{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_21 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_20_50  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_21 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_21_51  = Max;
}
    {
      mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(mercury__hash_table__TypeInfo_for_K_28, mercury__hash_table__TypeInfo_for_V_29, mercury__hash_table__TypeInfo_for_A_30, mercury__hash_table__TypeInfo_for_B_31, mercury__hash_table__TypeInfo_for_C_32, mercury__hash_table__P_9, mercury__hash_table__V_20_50, mercury__hash_table__V_21_51, mercury__hash_table__Var_21, mercury__hash_table__STATE_VARIABLE_A_0_14, mercury__hash_table__STATE_VARIABLE_A_15, mercury__hash_table__STATE_VARIABLE_B_0_16, mercury__hash_table__STATE_VARIABLE_B_17, mercury__hash_table__STATE_VARIABLE_C_0_18, mercury__hash_table__STATE_VARIABLE_C_19);
    }
    return mercury__hash_table__succeeded;
  }
}

void MR_CALL 
mercury__hash_table__fold3_8_p_2(
  MR_Word mercury__hash_table__TypeInfo_for_K_28,
  MR_Word mercury__hash_table__TypeInfo_for_V_29,
  MR_Word mercury__hash_table__TypeInfo_for_A_30,
  MR_Word mercury__hash_table__TypeInfo_for_B_31,
  MR_Word mercury__hash_table__TypeInfo_for_C_32,
  MR_Word mercury__hash_table__P_9,
  MR_Word mercury__hash_table__HT_10,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_15,
  MR_Box mercury__hash_table__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__hash_table__STATE_VARIABLE_B_17,
  MR_Box mercury__hash_table__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__hash_table__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_ArrayPtr mercury__hash_table__Var_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, (MR_Integer) 3)));
    MR_Integer mercury__hash_table__V_20_50;
    MR_Integer mercury__hash_table__V_21_51;
    MR_Integer mercury__hash_table__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, (MR_Integer) 0)));
    MR_Integer mercury__hash_table__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, (MR_Integer) 1)));
    MR_Word mercury__hash_table__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, (MR_Integer) 2)));
    MR_Word mercury__hash_table__TypeInfo_41_57;
    MR_Word mercury__hash_table__TypeInfo_41_58;

{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_21 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_20_50  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_21 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_21_51  = Max;
}
    {
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(mercury__hash_table__TypeInfo_for_K_28, mercury__hash_table__TypeInfo_for_V_29, mercury__hash_table__TypeInfo_for_A_30, mercury__hash_table__TypeInfo_for_B_31, mercury__hash_table__TypeInfo_for_C_32, mercury__hash_table__P_9, mercury__hash_table__V_20_50, mercury__hash_table__V_21_51, mercury__hash_table__Var_21, mercury__hash_table__STATE_VARIABLE_A_0_14, mercury__hash_table__STATE_VARIABLE_A_15, mercury__hash_table__STATE_VARIABLE_B_0_16, mercury__hash_table__STATE_VARIABLE_B_17, mercury__hash_table__STATE_VARIABLE_C_0_18, mercury__hash_table__STATE_VARIABLE_C_19);
    }
  }
}

void MR_CALL 
mercury__hash_table__fold3_8_p_1(
  MR_Word mercury__hash_table__TypeInfo_for_K_28,
  MR_Word mercury__hash_table__TypeInfo_for_V_29,
  MR_Word mercury__hash_table__TypeInfo_for_A_30,
  MR_Word mercury__hash_table__TypeInfo_for_B_31,
  MR_Word mercury__hash_table__TypeInfo_for_C_32,
  MR_Word mercury__hash_table__P_9,
  MR_Word mercury__hash_table__HT_10,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_15,
  MR_Box mercury__hash_table__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__hash_table__STATE_VARIABLE_B_17,
  MR_Box mercury__hash_table__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__hash_table__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_ArrayPtr mercury__hash_table__Var_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, (MR_Integer) 3)));
    MR_Integer mercury__hash_table__V_20_50;
    MR_Integer mercury__hash_table__V_21_51;
    MR_Integer mercury__hash_table__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, (MR_Integer) 0)));
    MR_Integer mercury__hash_table__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, (MR_Integer) 1)));
    MR_Word mercury__hash_table__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, (MR_Integer) 2)));
    MR_Word mercury__hash_table__TypeInfo_41_57;
    MR_Word mercury__hash_table__TypeInfo_41_58;

{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_21 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_20_50  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_21 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_21_51  = Max;
}
    {
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_52_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(mercury__hash_table__TypeInfo_for_K_28, mercury__hash_table__TypeInfo_for_V_29, mercury__hash_table__TypeInfo_for_A_30, mercury__hash_table__TypeInfo_for_B_31, mercury__hash_table__TypeInfo_for_C_32, mercury__hash_table__P_9, mercury__hash_table__V_20_50, mercury__hash_table__V_21_51, mercury__hash_table__Var_21, mercury__hash_table__STATE_VARIABLE_A_0_14, mercury__hash_table__STATE_VARIABLE_A_15, mercury__hash_table__STATE_VARIABLE_B_0_16, mercury__hash_table__STATE_VARIABLE_B_17, mercury__hash_table__STATE_VARIABLE_C_0_18, mercury__hash_table__STATE_VARIABLE_C_19);
    }
  }
}

void MR_CALL 
mercury__hash_table__fold3_8_p_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_28,
  MR_Word mercury__hash_table__TypeInfo_for_V_29,
  MR_Word mercury__hash_table__TypeInfo_for_A_30,
  MR_Word mercury__hash_table__TypeInfo_for_B_31,
  MR_Word mercury__hash_table__TypeInfo_for_C_32,
  MR_Word mercury__hash_table__P_9,
  MR_Word mercury__hash_table__HT_10,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_15,
  MR_Box mercury__hash_table__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__hash_table__STATE_VARIABLE_B_17,
  MR_Box mercury__hash_table__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__hash_table__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_ArrayPtr mercury__hash_table__Var_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, (MR_Integer) 3)));
    MR_Integer mercury__hash_table__V_20_50;
    MR_Integer mercury__hash_table__V_21_51;
    MR_Integer mercury__hash_table__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, (MR_Integer) 0)));
    MR_Integer mercury__hash_table__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, (MR_Integer) 1)));
    MR_Word mercury__hash_table__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, (MR_Integer) 2)));
    MR_Word mercury__hash_table__TypeInfo_41_57;
    MR_Word mercury__hash_table__TypeInfo_41_58;

{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_21 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_20_50  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_21 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_21_51  = Max;
}
    {
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(mercury__hash_table__TypeInfo_for_K_28, mercury__hash_table__TypeInfo_for_V_29, mercury__hash_table__TypeInfo_for_A_30, mercury__hash_table__TypeInfo_for_B_31, mercury__hash_table__TypeInfo_for_C_32, mercury__hash_table__P_9, mercury__hash_table__V_20_50, mercury__hash_table__V_21_51, mercury__hash_table__Var_21, mercury__hash_table__STATE_VARIABLE_A_0_14, mercury__hash_table__STATE_VARIABLE_A_15, mercury__hash_table__STATE_VARIABLE_B_0_16, mercury__hash_table__STATE_VARIABLE_B_17, mercury__hash_table__STATE_VARIABLE_C_0_18, mercury__hash_table__STATE_VARIABLE_C_19);
    }
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold2_6_p_5(
  MR_Word mercury__hash_table__TypeInfo_for_K_22,
  MR_Word mercury__hash_table__TypeInfo_for_V_23,
  MR_Word mercury__hash_table__TypeInfo_for_A_24,
  MR_Word mercury__hash_table__TypeInfo_for_B_25,
  MR_Word mercury__hash_table__P_7,
  MR_Word mercury__hash_table__HT_8,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_12,
  MR_Box mercury__hash_table__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__hash_table__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_ArrayPtr mercury__hash_table__Var_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, (MR_Integer) 3)));
    MR_Integer mercury__hash_table__V_15_39;
    MR_Integer mercury__hash_table__V_16_40;
    MR_Integer mercury__hash_table__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, (MR_Integer) 0)));
    MR_Integer mercury__hash_table__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, (MR_Integer) 1)));
    MR_Word mercury__hash_table__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, (MR_Integer) 2)));
    MR_Word mercury__hash_table__TypeInfo_32_46;
    MR_Word mercury__hash_table__TypeInfo_32_47;

{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_16 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_15_39  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_16 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_16_40  = Max;
}
    {
      mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_52_50_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(mercury__hash_table__TypeInfo_for_K_22, mercury__hash_table__TypeInfo_for_V_23, mercury__hash_table__TypeInfo_for_A_24, mercury__hash_table__TypeInfo_for_B_25, mercury__hash_table__P_7, mercury__hash_table__V_15_39, mercury__hash_table__V_16_40, mercury__hash_table__Var_16, mercury__hash_table__STATE_VARIABLE_A_0_11, mercury__hash_table__STATE_VARIABLE_A_12, mercury__hash_table__STATE_VARIABLE_B_0_13, mercury__hash_table__STATE_VARIABLE_B_14);
    }
    return mercury__hash_table__succeeded;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold2_6_p_4(
  MR_Word mercury__hash_table__TypeInfo_for_K_22,
  MR_Word mercury__hash_table__TypeInfo_for_V_23,
  MR_Word mercury__hash_table__TypeInfo_for_A_24,
  MR_Word mercury__hash_table__TypeInfo_for_B_25,
  MR_Word mercury__hash_table__P_7,
  MR_Word mercury__hash_table__HT_8,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_12,
  MR_Box mercury__hash_table__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__hash_table__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_ArrayPtr mercury__hash_table__Var_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, (MR_Integer) 3)));
    MR_Integer mercury__hash_table__V_15_39;
    MR_Integer mercury__hash_table__V_16_40;
    MR_Integer mercury__hash_table__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, (MR_Integer) 0)));
    MR_Integer mercury__hash_table__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, (MR_Integer) 1)));
    MR_Word mercury__hash_table__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, (MR_Integer) 2)));
    MR_Word mercury__hash_table__TypeInfo_32_46;
    MR_Word mercury__hash_table__TypeInfo_32_47;

{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_16 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_15_39  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_16 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_16_40  = Max;
}
    {
      mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_52_49_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(mercury__hash_table__TypeInfo_for_K_22, mercury__hash_table__TypeInfo_for_V_23, mercury__hash_table__TypeInfo_for_A_24, mercury__hash_table__TypeInfo_for_B_25, mercury__hash_table__P_7, mercury__hash_table__V_15_39, mercury__hash_table__V_16_40, mercury__hash_table__Var_16, mercury__hash_table__STATE_VARIABLE_A_0_11, mercury__hash_table__STATE_VARIABLE_A_12, mercury__hash_table__STATE_VARIABLE_B_0_13, mercury__hash_table__STATE_VARIABLE_B_14);
    }
    return mercury__hash_table__succeeded;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold2_6_p_3(
  MR_Word mercury__hash_table__TypeInfo_for_K_22,
  MR_Word mercury__hash_table__TypeInfo_for_V_23,
  MR_Word mercury__hash_table__TypeInfo_for_A_24,
  MR_Word mercury__hash_table__TypeInfo_for_B_25,
  MR_Word mercury__hash_table__P_7,
  MR_Word mercury__hash_table__HT_8,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_12,
  MR_Box mercury__hash_table__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__hash_table__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_ArrayPtr mercury__hash_table__Var_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, (MR_Integer) 3)));
    MR_Integer mercury__hash_table__V_15_39;
    MR_Integer mercury__hash_table__V_16_40;
    MR_Integer mercury__hash_table__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, (MR_Integer) 0)));
    MR_Integer mercury__hash_table__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, (MR_Integer) 1)));
    MR_Word mercury__hash_table__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, (MR_Integer) 2)));
    MR_Word mercury__hash_table__TypeInfo_32_46;
    MR_Word mercury__hash_table__TypeInfo_32_47;

{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_16 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_15_39  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_16 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_16_40  = Max;
}
    {
      mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(mercury__hash_table__TypeInfo_for_K_22, mercury__hash_table__TypeInfo_for_V_23, mercury__hash_table__TypeInfo_for_A_24, mercury__hash_table__TypeInfo_for_B_25, mercury__hash_table__P_7, mercury__hash_table__V_15_39, mercury__hash_table__V_16_40, mercury__hash_table__Var_16, mercury__hash_table__STATE_VARIABLE_A_0_11, mercury__hash_table__STATE_VARIABLE_A_12, mercury__hash_table__STATE_VARIABLE_B_0_13, mercury__hash_table__STATE_VARIABLE_B_14);
    }
    return mercury__hash_table__succeeded;
  }
}

void MR_CALL 
mercury__hash_table__fold2_6_p_2(
  MR_Word mercury__hash_table__TypeInfo_for_K_22,
  MR_Word mercury__hash_table__TypeInfo_for_V_23,
  MR_Word mercury__hash_table__TypeInfo_for_A_24,
  MR_Word mercury__hash_table__TypeInfo_for_B_25,
  MR_Word mercury__hash_table__P_7,
  MR_Word mercury__hash_table__HT_8,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_12,
  MR_Box mercury__hash_table__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__hash_table__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_ArrayPtr mercury__hash_table__Var_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, (MR_Integer) 3)));
    MR_Integer mercury__hash_table__V_15_39;
    MR_Integer mercury__hash_table__V_16_40;
    MR_Integer mercury__hash_table__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, (MR_Integer) 0)));
    MR_Integer mercury__hash_table__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, (MR_Integer) 1)));
    MR_Word mercury__hash_table__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, (MR_Integer) 2)));
    MR_Word mercury__hash_table__TypeInfo_32_46;
    MR_Word mercury__hash_table__TypeInfo_32_47;

{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_16 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_15_39  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_16 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_16_40  = Max;
}
    {
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_57_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(mercury__hash_table__TypeInfo_for_K_22, mercury__hash_table__TypeInfo_for_V_23, mercury__hash_table__TypeInfo_for_A_24, mercury__hash_table__TypeInfo_for_B_25, mercury__hash_table__P_7, mercury__hash_table__V_15_39, mercury__hash_table__V_16_40, mercury__hash_table__Var_16, mercury__hash_table__STATE_VARIABLE_A_0_11, mercury__hash_table__STATE_VARIABLE_A_12, mercury__hash_table__STATE_VARIABLE_B_0_13, mercury__hash_table__STATE_VARIABLE_B_14);
    }
  }
}

void MR_CALL 
mercury__hash_table__fold2_6_p_1(
  MR_Word mercury__hash_table__TypeInfo_for_K_22,
  MR_Word mercury__hash_table__TypeInfo_for_V_23,
  MR_Word mercury__hash_table__TypeInfo_for_A_24,
  MR_Word mercury__hash_table__TypeInfo_for_B_25,
  MR_Word mercury__hash_table__P_7,
  MR_Word mercury__hash_table__HT_8,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_12,
  MR_Box mercury__hash_table__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__hash_table__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_ArrayPtr mercury__hash_table__Var_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, (MR_Integer) 3)));
    MR_Integer mercury__hash_table__V_15_39;
    MR_Integer mercury__hash_table__V_16_40;
    MR_Integer mercury__hash_table__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, (MR_Integer) 0)));
    MR_Integer mercury__hash_table__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, (MR_Integer) 1)));
    MR_Word mercury__hash_table__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, (MR_Integer) 2)));
    MR_Word mercury__hash_table__TypeInfo_32_46;
    MR_Word mercury__hash_table__TypeInfo_32_47;

{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_16 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_15_39  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_16 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_16_40  = Max;
}
    {
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(mercury__hash_table__TypeInfo_for_K_22, mercury__hash_table__TypeInfo_for_V_23, mercury__hash_table__TypeInfo_for_A_24, mercury__hash_table__TypeInfo_for_B_25, mercury__hash_table__P_7, mercury__hash_table__V_15_39, mercury__hash_table__V_16_40, mercury__hash_table__Var_16, mercury__hash_table__STATE_VARIABLE_A_0_11, mercury__hash_table__STATE_VARIABLE_A_12, mercury__hash_table__STATE_VARIABLE_B_0_13, mercury__hash_table__STATE_VARIABLE_B_14);
    }
  }
}

void MR_CALL 
mercury__hash_table__fold2_6_p_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_22,
  MR_Word mercury__hash_table__TypeInfo_for_V_23,
  MR_Word mercury__hash_table__TypeInfo_for_A_24,
  MR_Word mercury__hash_table__TypeInfo_for_B_25,
  MR_Word mercury__hash_table__P_7,
  MR_Word mercury__hash_table__HT_8,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_12,
  MR_Box mercury__hash_table__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__hash_table__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_ArrayPtr mercury__hash_table__Var_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, (MR_Integer) 3)));
    MR_Integer mercury__hash_table__V_15_39;
    MR_Integer mercury__hash_table__V_16_40;
    MR_Integer mercury__hash_table__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, (MR_Integer) 0)));
    MR_Integer mercury__hash_table__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, (MR_Integer) 1)));
    MR_Word mercury__hash_table__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, (MR_Integer) 2)));
    MR_Word mercury__hash_table__TypeInfo_32_46;
    MR_Word mercury__hash_table__TypeInfo_32_47;

{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_16 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_15_39  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_16 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_16_40  = Max;
}
    {
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(mercury__hash_table__TypeInfo_for_K_22, mercury__hash_table__TypeInfo_for_V_23, mercury__hash_table__TypeInfo_for_A_24, mercury__hash_table__TypeInfo_for_B_25, mercury__hash_table__P_7, mercury__hash_table__V_15_39, mercury__hash_table__V_16_40, mercury__hash_table__Var_16, mercury__hash_table__STATE_VARIABLE_A_0_11, mercury__hash_table__STATE_VARIABLE_A_12, mercury__hash_table__STATE_VARIABLE_B_0_13, mercury__hash_table__STATE_VARIABLE_B_14);
    }
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold_4_p_5(
  MR_Word mercury__hash_table__TypeInfo_for_K_16,
  MR_Word mercury__hash_table__TypeInfo_for_V_17,
  MR_Word mercury__hash_table__TypeInfo_for_A_18,
  MR_Word mercury__hash_table__P_5,
  MR_Word mercury__hash_table__HT_6,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_ArrayPtr mercury__hash_table__Var_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
    MR_Integer mercury__hash_table__V_10_28;
    MR_Integer mercury__hash_table__V_11_29;
    MR_Integer mercury__hash_table__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
    MR_Integer mercury__hash_table__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
    MR_Word mercury__hash_table__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
    MR_Word mercury__hash_table__TypeInfo_23_35;
    MR_Word mercury__hash_table__TypeInfo_23_36;

{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_11 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_28  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_11 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_29  = Max;
}
    {
      mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_16, mercury__hash_table__TypeInfo_for_V_17, mercury__hash_table__TypeInfo_for_A_18, mercury__hash_table__P_5, mercury__hash_table__Var_11, mercury__hash_table__V_10_28, mercury__hash_table__V_11_29, mercury__hash_table__STATE_VARIABLE_A_0_8, mercury__hash_table__STATE_VARIABLE_A_9);
    }
    return mercury__hash_table__succeeded;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold_4_p_4(
  MR_Word mercury__hash_table__TypeInfo_for_K_16,
  MR_Word mercury__hash_table__TypeInfo_for_V_17,
  MR_Word mercury__hash_table__TypeInfo_for_A_18,
  MR_Word mercury__hash_table__P_5,
  MR_Word mercury__hash_table__HT_6,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_ArrayPtr mercury__hash_table__Var_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
    MR_Integer mercury__hash_table__V_10_28;
    MR_Integer mercury__hash_table__V_11_29;
    MR_Integer mercury__hash_table__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
    MR_Integer mercury__hash_table__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
    MR_Word mercury__hash_table__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
    MR_Word mercury__hash_table__TypeInfo_23_35;
    MR_Word mercury__hash_table__TypeInfo_23_36;

{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_11 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_28  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_11 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_29  = Max;
}
    {
      mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_16, mercury__hash_table__TypeInfo_for_V_17, mercury__hash_table__TypeInfo_for_A_18, mercury__hash_table__P_5, mercury__hash_table__Var_11, mercury__hash_table__V_10_28, mercury__hash_table__V_11_29, mercury__hash_table__STATE_VARIABLE_A_0_8, mercury__hash_table__STATE_VARIABLE_A_9);
    }
    return mercury__hash_table__succeeded;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold_4_p_3(
  MR_Word mercury__hash_table__TypeInfo_for_K_16,
  MR_Word mercury__hash_table__TypeInfo_for_V_17,
  MR_Word mercury__hash_table__TypeInfo_for_A_18,
  MR_Word mercury__hash_table__P_5,
  MR_Word mercury__hash_table__HT_6,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_ArrayPtr mercury__hash_table__Var_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
    MR_Integer mercury__hash_table__V_10_28;
    MR_Integer mercury__hash_table__V_11_29;
    MR_Integer mercury__hash_table__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
    MR_Integer mercury__hash_table__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
    MR_Word mercury__hash_table__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
    MR_Word mercury__hash_table__TypeInfo_23_35;
    MR_Word mercury__hash_table__TypeInfo_23_36;

{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_11 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_28  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_11 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_29  = Max;
}
    {
      mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_16, mercury__hash_table__TypeInfo_for_V_17, mercury__hash_table__TypeInfo_for_A_18, mercury__hash_table__P_5, mercury__hash_table__Var_11, mercury__hash_table__V_10_28, mercury__hash_table__V_11_29, mercury__hash_table__STATE_VARIABLE_A_0_8, mercury__hash_table__STATE_VARIABLE_A_9);
    }
    return mercury__hash_table__succeeded;
  }
}

void MR_CALL 
mercury__hash_table__fold_4_p_2(
  MR_Word mercury__hash_table__TypeInfo_for_K_16,
  MR_Word mercury__hash_table__TypeInfo_for_V_17,
  MR_Word mercury__hash_table__TypeInfo_for_A_18,
  MR_Word mercury__hash_table__P_5,
  MR_Word mercury__hash_table__HT_6,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_ArrayPtr mercury__hash_table__Var_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
    MR_Integer mercury__hash_table__V_10_28;
    MR_Integer mercury__hash_table__V_11_29;
    MR_Integer mercury__hash_table__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
    MR_Integer mercury__hash_table__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
    MR_Word mercury__hash_table__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
    MR_Word mercury__hash_table__TypeInfo_23_35;
    MR_Word mercury__hash_table__TypeInfo_23_36;

{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_11 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_28  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_11 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_29  = Max;
}
    {
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_16, mercury__hash_table__TypeInfo_for_V_17, mercury__hash_table__TypeInfo_for_A_18, mercury__hash_table__P_5, mercury__hash_table__Var_11, mercury__hash_table__V_10_28, mercury__hash_table__V_11_29, mercury__hash_table__STATE_VARIABLE_A_0_8, mercury__hash_table__STATE_VARIABLE_A_9);
    }
  }
}

void MR_CALL 
mercury__hash_table__fold_4_p_1(
  MR_Word mercury__hash_table__TypeInfo_for_K_16,
  MR_Word mercury__hash_table__TypeInfo_for_V_17,
  MR_Word mercury__hash_table__TypeInfo_for_A_18,
  MR_Word mercury__hash_table__P_5,
  MR_Word mercury__hash_table__HT_6,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_ArrayPtr mercury__hash_table__Var_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
    MR_Integer mercury__hash_table__V_10_28;
    MR_Integer mercury__hash_table__V_11_29;
    MR_Integer mercury__hash_table__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
    MR_Integer mercury__hash_table__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
    MR_Word mercury__hash_table__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
    MR_Word mercury__hash_table__TypeInfo_23_35;
    MR_Word mercury__hash_table__TypeInfo_23_36;

{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_11 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_28  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_11 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_29  = Max;
}
    {
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_16, mercury__hash_table__TypeInfo_for_V_17, mercury__hash_table__TypeInfo_for_A_18, mercury__hash_table__P_5, mercury__hash_table__Var_11, mercury__hash_table__V_10_28, mercury__hash_table__V_11_29, mercury__hash_table__STATE_VARIABLE_A_0_8, mercury__hash_table__STATE_VARIABLE_A_9);
    }
  }
}

void MR_CALL 
mercury__hash_table__fold_4_p_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_16,
  MR_Word mercury__hash_table__TypeInfo_for_V_17,
  MR_Word mercury__hash_table__TypeInfo_for_A_18,
  MR_Word mercury__hash_table__P_5,
  MR_Word mercury__hash_table__HT_6,
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_ArrayPtr mercury__hash_table__Var_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
    MR_Integer mercury__hash_table__V_10_28;
    MR_Integer mercury__hash_table__V_11_29;
    MR_Integer mercury__hash_table__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
    MR_Integer mercury__hash_table__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
    MR_Word mercury__hash_table__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
    MR_Word mercury__hash_table__TypeInfo_23_35;
    MR_Word mercury__hash_table__TypeInfo_23_36;

{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_11 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_28  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_11 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_29  = Max;
}
    {
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_16, mercury__hash_table__TypeInfo_for_V_17, mercury__hash_table__TypeInfo_for_A_18, mercury__hash_table__P_5, mercury__hash_table__Var_11, mercury__hash_table__V_10_28, mercury__hash_table__V_11_29, mercury__hash_table__STATE_VARIABLE_A_0_8, mercury__hash_table__STATE_VARIABLE_A_9);
    }
  }
}

MR_Box MR_CALL 
mercury__hash_table__fold_3_f_1(
  MR_Word mercury__hash_table__TypeInfo_for_K_14,
  MR_Word mercury__hash_table__TypeInfo_for_V_15,
  MR_Word mercury__hash_table__TypeInfo_for_T_16,
  MR_Word mercury__hash_table__F_5,
  MR_Word mercury__hash_table__HT_6,
  MR_Box mercury__hash_table__X0_7)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_Box mercury__hash_table__X_8;
    MR_ArrayPtr mercury__hash_table__Var_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
    MR_Integer mercury__hash_table__V_10_26;
    MR_Integer mercury__hash_table__V_11_27;
    MR_Integer mercury__hash_table__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
    MR_Integer mercury__hash_table__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
    MR_Word mercury__hash_table__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
    MR_Word mercury__hash_table__TypeInfo_21_33;
    MR_Word mercury__hash_table__TypeInfo_21_34;

{
#define MR_PROC_LABEL mercury__hash_table__fold_3_f_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_10 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_26  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold_3_f_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_10 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_27  = Max;
}
    {
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_14, mercury__hash_table__TypeInfo_for_V_15, mercury__hash_table__TypeInfo_for_T_16, mercury__hash_table__F_5, mercury__hash_table__Var_10, mercury__hash_table__V_10_26, mercury__hash_table__V_11_27, mercury__hash_table__X0_7, &mercury__hash_table__X_8);
    }
    return mercury__hash_table__X_8;
  }
}

MR_Box MR_CALL 
mercury__hash_table__fold_3_f_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_14,
  MR_Word mercury__hash_table__TypeInfo_for_V_15,
  MR_Word mercury__hash_table__TypeInfo_for_T_16,
  MR_Word mercury__hash_table__F_5,
  MR_Word mercury__hash_table__HT_6,
  MR_Box mercury__hash_table__X0_7)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_Box mercury__hash_table__X_8;
    MR_ArrayPtr mercury__hash_table__Var_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
    MR_Integer mercury__hash_table__V_10_26;
    MR_Integer mercury__hash_table__V_11_27;
    MR_Integer mercury__hash_table__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
    MR_Integer mercury__hash_table__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
    MR_Word mercury__hash_table__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
    MR_Word mercury__hash_table__TypeInfo_21_33;
    MR_Word mercury__hash_table__TypeInfo_21_34;

{
#define MR_PROC_LABEL mercury__hash_table__fold_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_10 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_26  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_10 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_27  = Max;
}
    {
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_14, mercury__hash_table__TypeInfo_for_V_15, mercury__hash_table__TypeInfo_for_T_16, mercury__hash_table__F_5, mercury__hash_table__Var_10, mercury__hash_table__V_10_26, mercury__hash_table__V_11_27, mercury__hash_table__X0_7, &mercury__hash_table__X_8);
    }
    return mercury__hash_table__X_8;
  }
}

MR_Word MR_CALL 
mercury__hash_table__from_assoc_list_2_f_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_8,
  MR_Word mercury__hash_table__TypeInfo_for_V_9,
  MR_Word mercury__hash_table__HashPred_4,
  MR_Word mercury__hash_table__AList_5)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_Word mercury__hash_table__HT_6;
    MR_Word mercury__hash_table__Var_7;

    {
      mercury__hash_table__Var_7 = mercury__hash_table__init_3_f_0(mercury__hash_table__TypeInfo_for_K_8, mercury__hash_table__TypeInfo_for_V_9, mercury__hash_table__HashPred_4, (MR_Integer) 7, (MR_Float) 0.90000000000000002);
    }
    {
      mercury__hash_table__from_assoc_list_2_3_p_0(mercury__hash_table__TypeInfo_for_K_8, mercury__hash_table__TypeInfo_for_V_9, mercury__hash_table__AList_5, mercury__hash_table__Var_7, &mercury__hash_table__HT_6);
    }
    return mercury__hash_table__HT_6;
  }
}

MR_Word MR_CALL 
mercury__hash_table__from_assoc_list_4_f_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_12,
  MR_Word mercury__hash_table__TypeInfo_for_V_13,
  MR_Word mercury__hash_table__HashPred_6,
  MR_Integer mercury__hash_table__N_7,
  MR_Float mercury__hash_table__MaxOccupants_8,
  MR_Word mercury__hash_table__AList_9)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_Word mercury__hash_table__HT_10;
    MR_Word mercury__hash_table__Var_11;

    {
      mercury__hash_table__Var_11 = mercury__hash_table__init_3_f_0(mercury__hash_table__TypeInfo_for_K_12, mercury__hash_table__TypeInfo_for_V_13, mercury__hash_table__HashPred_6, mercury__hash_table__N_7, mercury__hash_table__MaxOccupants_8);
    }
    {
      mercury__hash_table__from_assoc_list_2_3_p_0(mercury__hash_table__TypeInfo_for_K_12, mercury__hash_table__TypeInfo_for_V_13, mercury__hash_table__AList_9, mercury__hash_table__Var_11, &mercury__hash_table__HT_10);
    }
    return mercury__hash_table__HT_10;
  }
}

MR_Word MR_CALL 
mercury__hash_table__to_assoc_list_1_f_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_11,
  MR_Word mercury__hash_table__TypeInfo_for_V_12,
  MR_Word mercury__hash_table__HT_3)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_Word mercury__hash_table__AL_4;
    MR_ArrayPtr mercury__hash_table__Var_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 3)));
    MR_Word mercury__hash_table__Var_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Integer mercury__hash_table__V_10_26;
    MR_Integer mercury__hash_table__V_11_27;
    MR_Integer mercury__hash_table__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 0)));
    MR_Integer mercury__hash_table__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 1)));
    MR_Word mercury__hash_table__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 2)));
    MR_Word mercury__hash_table__TypeInfo_17_35;
    MR_Word mercury__hash_table__TypeInfo_17_36;

{
#define MR_PROC_LABEL mercury__hash_table__to_assoc_list_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_6 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_26  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__to_assoc_list_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_6 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_27  = Max;
}
    {
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_11, mercury__hash_table__TypeInfo_for_V_12, mercury__hash_table__Var_6, mercury__hash_table__V_10_26, mercury__hash_table__V_11_27, mercury__hash_table__Var_7, &mercury__hash_table__AL_4);
    }
    return mercury__hash_table__AL_4;
  }
}

MR_bool MR_CALL 
mercury__hash_table__search_3_p_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_6,
  MR_Word mercury__hash_table__TypeInfo_for_V_7,
  MR_Word mercury__hash_table__HT_4,
  MR_Box mercury__hash_table__K_5,
  MR_Box * mercury__hash_table__HeadVar__3_3)
{
  {
    MR_bool mercury__hash_table__succeeded;

    {
      mercury__hash_table__succeeded = mercury__hash_table__search_2_f_0(mercury__hash_table__TypeInfo_for_K_6, mercury__hash_table__TypeInfo_for_V_7, mercury__hash_table__HT_4, mercury__hash_table__K_5, mercury__hash_table__HeadVar__3_3);
    }
    return mercury__hash_table__succeeded;
  }
}

MR_bool MR_CALL 
mercury__hash_table__search_2_f_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_13,
  MR_Word mercury__hash_table__TypeInfo_for_V_14,
  MR_Word mercury__hash_table__HT_4,
  MR_Box mercury__hash_table__K_5,
  MR_Box * mercury__hash_table__V_6)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_Integer mercury__hash_table__H_7;
    MR_Word mercury__hash_table__AL_8;
    MR_ArrayPtr mercury__hash_table__Var_9;
    MR_Word mercury__hash_table__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 2)));
    MR_Integer mercury__hash_table__Var_21;
    MR_ArrayPtr mercury__hash_table__Var_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 3)));
    MR_Integer mercury__hash_table__Hash_38;
    MR_Integer mercury__hash_table__Var_39;
    MR_Integer mercury__hash_table__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 0)));
    MR_Integer mercury__hash_table__Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 1)));
    MR_Word mercury__hash_table__TypeInfo_11_41;
    void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box mercury__hash_table__conv1_Hash_38;
    MR_Integer mercury__hash_table__Var_10;
    MR_Integer mercury__hash_table__Var_11;
    MR_Word mercury__hash_table__Var_12;
    MR_Word mercury__hash_table__TypeInfo_16_42;
    MR_Box mercury__hash_table__conv2_Item;

{
#define MR_PROC_LABEL mercury__hash_table__search_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_24 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__Var_21  = Max;
}
    mercury__hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__Var_20, (MR_Integer) 1)));
    {
      mercury__hash_table__func_0(((MR_Box) mercury__hash_table__Var_20), mercury__hash_table__K_5, &mercury__hash_table__conv1_Hash_38);
    }
    mercury__hash_table__Hash_38 = ((MR_Integer) mercury__hash_table__conv1_Hash_38);
    mercury__hash_table__Var_39 = (mercury__hash_table__Var_21 - (MR_Integer) 1);
    mercury__hash_table__H_7 = (mercury__hash_table__Hash_38 & mercury__hash_table__Var_39);
    mercury__hash_table__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 0)));
    mercury__hash_table__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 1)));
    mercury__hash_table__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 2)));
    mercury__hash_table__Var_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 3)));
{
#define MR_PROC_LABEL mercury__hash_table__search_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_9 , Array);
	Index =  mercury__hash_table__H_7 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv2_Item  = (MR_Box) Item;
    mercury__hash_table__AL_8 = ((MR_Word) mercury__hash_table__conv2_Item);
}
    {
      mercury__hash_table__succeeded = mercury__hash_table__alist_search_3_p_0(mercury__hash_table__TypeInfo_for_K_13, mercury__hash_table__TypeInfo_for_V_14, mercury__hash_table__AL_8, mercury__hash_table__K_5, mercury__hash_table__V_6);
    }
    return mercury__hash_table__succeeded;
  }
}

MR_Box MR_CALL 
mercury__hash_table__elem_2_f_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_6,
  MR_Word mercury__hash_table__TypeInfo_for_V_7,
  MR_Box mercury__hash_table__K_4,
  MR_Word mercury__hash_table__HT_5)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_Box mercury__hash_table__HeadVar__3_3;
    MR_Box mercury__hash_table__V_10;

    {
      mercury__hash_table__succeeded = mercury__hash_table__search_2_f_0(mercury__hash_table__TypeInfo_for_K_6, mercury__hash_table__TypeInfo_for_V_7, mercury__hash_table__HT_5, mercury__hash_table__K_4, &mercury__hash_table__V_10);
    }
    if (mercury__hash_table__succeeded)
      mercury__hash_table__HeadVar__3_3 = mercury__hash_table__V_10;
    else
      {
        MR_Word mercury__hash_table__TypeCtorInfo_11_13 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
        MR_Word mercury__hash_table__Var_11 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.lookup: key not found"));

        {
          return mercury__hash_table__HeadVar__3_3 = mercury__exception__throw_1_f_0(mercury__hash_table__TypeCtorInfo_11_13, mercury__hash_table__TypeInfo_for_V_7, ((MR_Box) (mercury__hash_table__Var_11)));
        }
      }
    return mercury__hash_table__HeadVar__3_3;
  }
}

MR_Box MR_CALL 
mercury__hash_table__lookup_2_f_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_9,
  MR_Word mercury__hash_table__TypeInfo_for_V_10,
  MR_Word mercury__hash_table__HT_4,
  MR_Box mercury__hash_table__K_5)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_Box mercury__hash_table__HeadVar__3_3;
    MR_Box mercury__hash_table__V_6;

    {
      mercury__hash_table__succeeded = mercury__hash_table__search_2_f_0(mercury__hash_table__TypeInfo_for_K_9, mercury__hash_table__TypeInfo_for_V_10, mercury__hash_table__HT_4, mercury__hash_table__K_5, &mercury__hash_table__V_6);
    }
    if (mercury__hash_table__succeeded)
      mercury__hash_table__HeadVar__3_3 = mercury__hash_table__V_6;
    else
      {
        MR_Word mercury__hash_table__TypeCtorInfo_11_11 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
        MR_Word mercury__hash_table__Var_7 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.lookup: key not found"));

        {
          return mercury__hash_table__HeadVar__3_3 = mercury__exception__throw_1_f_0(mercury__hash_table__TypeCtorInfo_11_11, mercury__hash_table__TypeInfo_for_V_10, ((MR_Box) (mercury__hash_table__Var_7)));
        }
      }
    return mercury__hash_table__HeadVar__3_3;
  }
}

void MR_CALL 
mercury__hash_table__delete_3_p_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_6,
  MR_Word mercury__hash_table__TypeInfo_for_V_7,
  MR_Box mercury__hash_table__K_4,
  MR_Word mercury__hash_table__HT_5,
  MR_Word * mercury__hash_table__HeadVar__3_3)
{
  {
    MR_bool mercury__hash_table__succeeded;

    {
      *mercury__hash_table__HeadVar__3_3 = mercury__hash_table__delete_2_f_0(mercury__hash_table__TypeInfo_for_K_6, mercury__hash_table__TypeInfo_for_V_7, mercury__hash_table__HT_5, mercury__hash_table__K_4);
    }
  }
}

MR_Word MR_CALL 
mercury__hash_table__delete_2_f_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_21,
  MR_Word mercury__hash_table__TypeInfo_for_V_22,
  MR_Word mercury__hash_table__HT0_4,
  MR_Box mercury__hash_table__K_5)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_Word mercury__hash_table__HT_6;
    MR_Integer mercury__hash_table__H_7;
    MR_Word mercury__hash_table__AL0_8;
    MR_ArrayPtr mercury__hash_table__Var_16;
    MR_Word mercury__hash_table__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 2)));
    MR_Integer mercury__hash_table__Var_29;
    MR_ArrayPtr mercury__hash_table__Var_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 3)));
    MR_Integer mercury__hash_table__Hash_46;
    MR_Integer mercury__hash_table__Var_47;
    MR_Integer mercury__hash_table__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 0)));
    MR_Integer mercury__hash_table__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 1)));
    MR_Word mercury__hash_table__TypeInfo_11_49;
    void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box mercury__hash_table__conv1_Hash_46;
    MR_Integer mercury__hash_table__Var_18;
    MR_Integer mercury__hash_table__Var_19;
    MR_Word mercury__hash_table__Var_20;
    MR_Word mercury__hash_table__TypeInfo_24_50;
    MR_Box mercury__hash_table__conv2_Item;
    MR_Word mercury__hash_table__AL_9;

{
#define MR_PROC_LABEL mercury__hash_table__delete_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_32 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__Var_29  = Max;
}
    mercury__hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__Var_28, (MR_Integer) 1)));
    {
      mercury__hash_table__func_0(((MR_Box) mercury__hash_table__Var_28), mercury__hash_table__K_5, &mercury__hash_table__conv1_Hash_46);
    }
    mercury__hash_table__Hash_46 = ((MR_Integer) mercury__hash_table__conv1_Hash_46);
    mercury__hash_table__Var_47 = (mercury__hash_table__Var_29 - (MR_Integer) 1);
    mercury__hash_table__H_7 = (mercury__hash_table__Hash_46 & mercury__hash_table__Var_47);
    mercury__hash_table__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 0)));
    mercury__hash_table__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 1)));
    mercury__hash_table__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 2)));
    mercury__hash_table__Var_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 3)));
{
#define MR_PROC_LABEL mercury__hash_table__delete_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_16 , Array);
	Index =  mercury__hash_table__H_7 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv2_Item  = (MR_Box) Item;
    mercury__hash_table__AL0_8 = ((MR_Word) mercury__hash_table__conv2_Item);
}
    {
      mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(mercury__hash_table__TypeInfo_for_K_21, mercury__hash_table__AL0_8, mercury__hash_table__K_5, &mercury__hash_table__AL_9);
    }
    if (mercury__hash_table__succeeded)
      {
        MR_Integer mercury__hash_table__NumOccupants0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 0)));
        MR_Integer mercury__hash_table__MaxOccupants_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 1)));
        MR_Word mercury__hash_table__HashPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 2)));
        MR_ArrayPtr mercury__hash_table__Buckets0_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 3)));
        MR_ArrayPtr mercury__hash_table__Buckets_14;
        MR_Integer mercury__hash_table__NumOccupants_15;
        MR_Word mercury__hash_table__TypeInfo_24_51;
        MR_ArrayPtr mercury__hash_table__conv3_Array;

{
#define MR_PROC_LABEL mercury__hash_table__delete_2_f_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__hash_table__H_7 ;
	Item = (MR_Word) ((MR_Box) (mercury__hash_table__AL_9)) ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Buckets0_13 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__hash_table__conv3_Array );
        mercury__hash_table__Buckets_14 = (MR_ArrayPtr) mercury__hash_table__conv3_Array;
}
        mercury__hash_table__NumOccupants_15 = (mercury__hash_table__NumOccupants0_10 - (MR_Integer) 1);
        {
          mercury__hash_table__HT_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, 0) = ((MR_Box) (mercury__hash_table__NumOccupants_15));
          MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, 1) = ((MR_Box) (mercury__hash_table__MaxOccupants_11));
          MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, 2) = ((MR_Box) (mercury__hash_table__HashPred_12));
          MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, 3) = ((MR_Box) (mercury__hash_table__Buckets_14));
        }
      }
    else
      mercury__hash_table__HT_6 = mercury__hash_table__HT0_4;
    return mercury__hash_table__HT_6;
  }
}

void MR_CALL 
mercury__hash_table__det_update_4_p_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_8,
  MR_Word mercury__hash_table__TypeInfo_for_V_9,
  MR_Box mercury__hash_table__K_5,
  MR_Box mercury__hash_table__V_6,
  MR_Word mercury__hash_table__HT_7,
  MR_Word * mercury__hash_table__HeadVar__4_4)
{
  {
    MR_bool mercury__hash_table__succeeded;

    {
      *mercury__hash_table__HeadVar__4_4 = mercury__hash_table__det_update_3_f_0(mercury__hash_table__TypeInfo_for_K_8, mercury__hash_table__TypeInfo_for_V_9, mercury__hash_table__HT_7, mercury__hash_table__K_5, mercury__hash_table__V_6);
    }
  }
}

MR_Word MR_CALL 
mercury__hash_table__det_update_3_f_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_26,
  MR_Word mercury__hash_table__TypeInfo_for_V_27,
  MR_Word mercury__hash_table__STATE_VARIABLE_HT_0_14,
  MR_Box mercury__hash_table__K_6,
  MR_Box mercury__hash_table__V_7)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_Word mercury__hash_table__STATE_VARIABLE_HT_15;
    MR_Integer mercury__hash_table__H_8;
    MR_ArrayPtr mercury__hash_table__Buckets0_9;
    MR_Word mercury__hash_table__AL0_10;
    MR_Word mercury__hash_table__AL_12;
    MR_ArrayPtr mercury__hash_table__Buckets_13;
    MR_Word mercury__hash_table__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 2)));
    MR_Integer mercury__hash_table__Var_35;
    MR_ArrayPtr mercury__hash_table__Var_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 3)));
    MR_Integer mercury__hash_table__Hash_52;
    MR_Integer mercury__hash_table__Var_53;
    MR_Integer mercury__hash_table__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 0)));
    MR_Integer mercury__hash_table__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 1)));
    MR_Word mercury__hash_table__TypeInfo_11_55;
    void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box mercury__hash_table__conv1_Hash_52;
    MR_Integer mercury__hash_table__Var_19;
    MR_Integer mercury__hash_table__Var_20;
    MR_Word mercury__hash_table__Var_21;
    MR_Word mercury__hash_table__TypeInfo_29_56;
    MR_Box mercury__hash_table__conv2_Item;
    MR_Word mercury__hash_table__AL1_11;
    MR_Word mercury__hash_table__TypeInfo_29_57;
    MR_ArrayPtr mercury__hash_table__conv3_Array;
    MR_Integer mercury__hash_table__Var_22;
    MR_Integer mercury__hash_table__Var_23;
    MR_Word mercury__hash_table__Var_24;
    MR_ArrayPtr mercury__hash_table__Var_25;

{
#define MR_PROC_LABEL mercury__hash_table__det_update_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_38 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__Var_35  = Max;
}
    mercury__hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__Var_34, (MR_Integer) 1)));
    {
      mercury__hash_table__func_0(((MR_Box) mercury__hash_table__Var_34), mercury__hash_table__K_6, &mercury__hash_table__conv1_Hash_52);
    }
    mercury__hash_table__Hash_52 = ((MR_Integer) mercury__hash_table__conv1_Hash_52);
    mercury__hash_table__Var_53 = (mercury__hash_table__Var_35 - (MR_Integer) 1);
    mercury__hash_table__H_8 = (mercury__hash_table__Hash_52 & mercury__hash_table__Var_53);
    mercury__hash_table__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 0)));
    mercury__hash_table__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 1)));
    mercury__hash_table__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 2)));
    mercury__hash_table__Buckets0_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 3)));
{
#define MR_PROC_LABEL mercury__hash_table__det_update_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Buckets0_9 , Array);
	Index =  mercury__hash_table__H_8 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv2_Item  = (MR_Box) Item;
    mercury__hash_table__AL0_10 = ((MR_Word) mercury__hash_table__conv2_Item);
}
    {
      mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(mercury__hash_table__TypeInfo_for_K_26, mercury__hash_table__AL0_10, mercury__hash_table__K_6, mercury__hash_table__V_7, &mercury__hash_table__AL1_11);
    }
    if (mercury__hash_table__succeeded)
      mercury__hash_table__AL_12 = mercury__hash_table__AL1_11;
    else
      {
        MR_Word mercury__hash_table__TypeCtorInfo_30_30 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
        MR_Word mercury__hash_table__Var_16 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.det_update: key not found"));

        {
          mercury__exception__throw_1_p_0(mercury__hash_table__TypeCtorInfo_30_30, ((MR_Box) (mercury__hash_table__Var_16)));
        }
      }
{
#define MR_PROC_LABEL mercury__hash_table__det_update_3_f_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__hash_table__H_8 ;
	Item = (MR_Word) ((MR_Box) (mercury__hash_table__AL_12)) ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Buckets0_9 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__hash_table__conv3_Array );
    mercury__hash_table__Buckets_13 = (MR_ArrayPtr) mercury__hash_table__conv3_Array;
}
    mercury__hash_table__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 0)));
    mercury__hash_table__Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 1)));
    mercury__hash_table__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 2)));
    mercury__hash_table__Var_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 3)));
    {
      mercury__hash_table__STATE_VARIABLE_HT_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_15, 0) = ((MR_Box) (mercury__hash_table__Var_22));
      MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_15, 1) = ((MR_Box) (mercury__hash_table__Var_23));
      MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_15, 2) = ((MR_Box) (mercury__hash_table__Var_24));
      MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_15, 3) = ((MR_Box) (mercury__hash_table__Buckets_13));
    }
    return mercury__hash_table__STATE_VARIABLE_HT_15;
  }
}

void MR_CALL 
mercury__hash_table__det_insert_4_p_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_8,
  MR_Word mercury__hash_table__TypeInfo_for_V_9,
  MR_Box mercury__hash_table__K_5,
  MR_Box mercury__hash_table__V_6,
  MR_Word mercury__hash_table__HT_7,
  MR_Word * mercury__hash_table__HeadVar__4_4)
{
  {
    MR_bool mercury__hash_table__succeeded;

    {
      *mercury__hash_table__HeadVar__4_4 = mercury__hash_table__det_insert_3_f_0(mercury__hash_table__TypeInfo_for_K_8, mercury__hash_table__TypeInfo_for_V_9, mercury__hash_table__HT_7, mercury__hash_table__K_5, mercury__hash_table__V_6);
    }
  }
}

MR_Word MR_CALL 
mercury__hash_table__det_insert_3_f_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_27,
  MR_Word mercury__hash_table__TypeInfo_for_V_28,
  MR_Word mercury__hash_table__HT0_5,
  MR_Box mercury__hash_table__K_6,
  MR_Box mercury__hash_table__V_7)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_Word mercury__hash_table__HT_8;
    MR_Integer mercury__hash_table__H_9;
    MR_Integer mercury__hash_table__NumOccupants0_10;
    MR_Integer mercury__hash_table__MaxOccupants_11;
    MR_Word mercury__hash_table__HashPred_12;
    MR_ArrayPtr mercury__hash_table__Buckets0_13;
    MR_Word mercury__hash_table__AL0_14;
    MR_Word mercury__hash_table__AL_15;
    MR_ArrayPtr mercury__hash_table__Buckets_22;
    MR_Integer mercury__hash_table__NumOccupants_23;
    MR_Word mercury__hash_table__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 2)));
    MR_Integer mercury__hash_table__Var_48;
    MR_ArrayPtr mercury__hash_table__Var_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 3)));
    MR_Integer mercury__hash_table__Hash_65;
    MR_Integer mercury__hash_table__Var_66;
    MR_Integer mercury__hash_table__Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 0)));
    MR_Integer mercury__hash_table__Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 1)));
    MR_Word mercury__hash_table__TypeInfo_11_68;
    void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box mercury__hash_table__conv1_Hash_65;
    MR_Word mercury__hash_table__TypeInfo_30_69;
    MR_Box mercury__hash_table__conv2_Item;
    MR_Word mercury__hash_table__TypeInfo_30_70;
    MR_ArrayPtr mercury__hash_table__conv3_Array;

{
#define MR_PROC_LABEL mercury__hash_table__det_insert_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_51 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__Var_48  = Max;
}
    mercury__hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__Var_47, (MR_Integer) 1)));
    {
      mercury__hash_table__func_0(((MR_Box) mercury__hash_table__Var_47), mercury__hash_table__K_6, &mercury__hash_table__conv1_Hash_65);
    }
    mercury__hash_table__Hash_65 = ((MR_Integer) mercury__hash_table__conv1_Hash_65);
    mercury__hash_table__Var_66 = (mercury__hash_table__Var_48 - (MR_Integer) 1);
    mercury__hash_table__H_9 = (mercury__hash_table__Hash_65 & mercury__hash_table__Var_66);
    mercury__hash_table__NumOccupants0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 0)));
    mercury__hash_table__MaxOccupants_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 1)));
    mercury__hash_table__HashPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 2)));
    mercury__hash_table__Buckets0_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 3)));
{
#define MR_PROC_LABEL mercury__hash_table__det_insert_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Buckets0_13 , Array);
	Index =  mercury__hash_table__H_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv2_Item  = (MR_Box) Item;
    mercury__hash_table__AL0_14 = ((MR_Word) mercury__hash_table__conv2_Item);
}
    switch (MR_tag((MR_Word) mercury__hash_table__AL0_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__hash_table__AL_15, 0) = mercury__hash_table__K_6;
          MR_hl_field(MR_mktag(1), mercury__hash_table__AL_15, 1) = mercury__hash_table__V_7;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__hash_table__Var_32;

          {
            mercury__hash_table__succeeded = mercury__hash_table__alist_search_3_p_0(mercury__hash_table__TypeInfo_for_K_27, mercury__hash_table__TypeInfo_for_V_28, mercury__hash_table__AL0_14, mercury__hash_table__K_6, &mercury__hash_table__Var_32);
          }
          if (mercury__hash_table__succeeded)
            {
              MR_Word mercury__hash_table__TypeCtorInfo_31_35 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
              MR_Word mercury__hash_table__Var_33 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.det_insert: key already present"));

              {
                mercury__exception__throw_1_p_0(mercury__hash_table__TypeCtorInfo_31_35, ((MR_Box) (mercury__hash_table__Var_33)));
              }
            }
          else
            {
              mercury__hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 0) = mercury__hash_table__K_6;
              MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 1) = mercury__hash_table__V_7;
              MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 2) = ((MR_Box) (mercury__hash_table__AL0_14));
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__hash_table__Var_21;

          {
            mercury__hash_table__succeeded = mercury__hash_table__alist_search_3_p_0(mercury__hash_table__TypeInfo_for_K_27, mercury__hash_table__TypeInfo_for_V_28, mercury__hash_table__AL0_14, mercury__hash_table__K_6, &mercury__hash_table__Var_21);
          }
          if (mercury__hash_table__succeeded)
            {
              MR_Word mercury__hash_table__TypeCtorInfo_31_31 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
              MR_Word mercury__hash_table__Var_24 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.det_insert: key already present"));

              {
                mercury__exception__throw_1_p_0(mercury__hash_table__TypeCtorInfo_31_31, ((MR_Box) (mercury__hash_table__Var_24)));
              }
            }
          else
            {
              mercury__hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 0) = mercury__hash_table__K_6;
              MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 1) = mercury__hash_table__V_7;
              MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 2) = ((MR_Box) (mercury__hash_table__AL0_14));
            }
        }
        break;
    }
{
#define MR_PROC_LABEL mercury__hash_table__det_insert_3_f_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__hash_table__H_9 ;
	Item = (MR_Word) ((MR_Box) (mercury__hash_table__AL_15)) ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Buckets0_13 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__hash_table__conv3_Array );
    mercury__hash_table__Buckets_22 = (MR_ArrayPtr) mercury__hash_table__conv3_Array;
}
    mercury__hash_table__NumOccupants_23 = (mercury__hash_table__NumOccupants0_10 + (MR_Integer) 1);
    mercury__hash_table__succeeded = (mercury__hash_table__NumOccupants_23 > mercury__hash_table__MaxOccupants_11);
    if (mercury__hash_table__succeeded)
      {
        mercury__hash_table__HT_8 = mercury__hash_table__expand_4_f_0(mercury__hash_table__TypeInfo_for_K_27, mercury__hash_table__TypeInfo_for_V_28, mercury__hash_table__NumOccupants_23, mercury__hash_table__MaxOccupants_11, mercury__hash_table__HashPred_12, mercury__hash_table__Buckets_22);
      }
    else
      {
        mercury__hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 0) = ((MR_Box) (mercury__hash_table__NumOccupants_23));
        MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 1) = ((MR_Box) (mercury__hash_table__MaxOccupants_11));
        MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 2) = ((MR_Box) (mercury__hash_table__HashPred_12));
        MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 3) = ((MR_Box) (mercury__hash_table__Buckets_22));
      }
    return mercury__hash_table__HT_8;
  }
}

MR_Word MR_CALL 
mercury__hash_table__f_101_108_101_109_32_58_61_3_f_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_8,
  MR_Word mercury__hash_table__TypeInfo_for_V_9,
  MR_Box mercury__hash_table__K_5,
  MR_Word mercury__hash_table__HT_6,
  MR_Box mercury__hash_table__V_7)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_Word mercury__hash_table__HeadVar__4_4;

    {
      mercury__hash_table__HeadVar__4_4 = mercury__hash_table__set_3_f_0(mercury__hash_table__TypeInfo_for_K_8, mercury__hash_table__TypeInfo_for_V_9, mercury__hash_table__HT_6, mercury__hash_table__K_5, mercury__hash_table__V_7);
    }
    return mercury__hash_table__HeadVar__4_4;
  }
}

void MR_CALL 
mercury__hash_table__set_4_p_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_8,
  MR_Word mercury__hash_table__TypeInfo_for_V_9,
  MR_Box mercury__hash_table__K_5,
  MR_Box mercury__hash_table__V_6,
  MR_Word mercury__hash_table__HT_7,
  MR_Word * mercury__hash_table__HeadVar__4_4)
{
  {
    MR_bool mercury__hash_table__succeeded;

    {
      *mercury__hash_table__HeadVar__4_4 = mercury__hash_table__set_3_f_0(mercury__hash_table__TypeInfo_for_K_8, mercury__hash_table__TypeInfo_for_V_9, mercury__hash_table__HT_7, mercury__hash_table__K_5, mercury__hash_table__V_6);
    }
  }
}

MR_Word MR_CALL 
mercury__hash_table__set_3_f_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_26,
  MR_Word mercury__hash_table__TypeInfo_for_V_27,
  MR_Word mercury__hash_table__HT0_5,
  MR_Box mercury__hash_table__K_6,
  MR_Box mercury__hash_table__V_7)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_Word mercury__hash_table__HT_8;
    MR_Integer mercury__hash_table__H_9;
    MR_Integer mercury__hash_table__NumOccupants0_10;
    MR_Integer mercury__hash_table__MaxOccupants_11;
    MR_Word mercury__hash_table__HashPred_12;
    MR_ArrayPtr mercury__hash_table__Buckets0_13;
    MR_Word mercury__hash_table__AL0_14;
    MR_Word mercury__hash_table__AL_15;
    MR_Word mercury__hash_table__MayExpand_16;
    MR_ArrayPtr mercury__hash_table__Buckets_23;
    MR_Word mercury__hash_table__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 2)));
    MR_Integer mercury__hash_table__Var_34;
    MR_ArrayPtr mercury__hash_table__Var_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 3)));
    MR_Integer mercury__hash_table__Hash_51;
    MR_Integer mercury__hash_table__Var_52;
    MR_Integer mercury__hash_table__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 0)));
    MR_Integer mercury__hash_table__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 1)));
    MR_Word mercury__hash_table__TypeInfo_11_54;
    void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box mercury__hash_table__conv1_Hash_51;
    MR_Word mercury__hash_table__TypeInfo_29_55;
    MR_Box mercury__hash_table__conv2_Item;
    MR_Word mercury__hash_table__TypeInfo_29_56;
    MR_ArrayPtr mercury__hash_table__conv3_Array;

{
#define MR_PROC_LABEL mercury__hash_table__set_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_37 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__Var_34  = Max;
}
    mercury__hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__Var_33, (MR_Integer) 1)));
    {
      mercury__hash_table__func_0(((MR_Box) mercury__hash_table__Var_33), mercury__hash_table__K_6, &mercury__hash_table__conv1_Hash_51);
    }
    mercury__hash_table__Hash_51 = ((MR_Integer) mercury__hash_table__conv1_Hash_51);
    mercury__hash_table__Var_52 = (mercury__hash_table__Var_34 - (MR_Integer) 1);
    mercury__hash_table__H_9 = (mercury__hash_table__Hash_51 & mercury__hash_table__Var_52);
    mercury__hash_table__NumOccupants0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 0)));
    mercury__hash_table__MaxOccupants_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 1)));
    mercury__hash_table__HashPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 2)));
    mercury__hash_table__Buckets0_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 3)));
{
#define MR_PROC_LABEL mercury__hash_table__set_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Buckets0_13 , Array);
	Index =  mercury__hash_table__H_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv2_Item  = (MR_Box) Item;
    mercury__hash_table__AL0_14 = ((MR_Word) mercury__hash_table__conv2_Item);
}
    switch (MR_tag((MR_Word) mercury__hash_table__AL0_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__hash_table__AL_15, 0) = mercury__hash_table__K_6;
            MR_hl_field(MR_mktag(1), mercury__hash_table__AL_15, 1) = mercury__hash_table__V_7;
          }
          mercury__hash_table__MayExpand_16 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__hash_table__K0_17 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL0_14, (MR_Integer) 0));
          MR_Box mercury__hash_table___V0_18 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL0_14, (MR_Integer) 1));

          {
            mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_26, mercury__hash_table__K0_17, mercury__hash_table__K_6);
          }
          if (mercury__hash_table__succeeded)
            {
              {
                mercury__hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__hash_table__AL_15, 0) = mercury__hash_table__K0_17;
                MR_hl_field(MR_mktag(1), mercury__hash_table__AL_15, 1) = mercury__hash_table__V_7;
              }
              mercury__hash_table__MayExpand_16 = (MR_Integer) 0;
            }
          else
            {
              {
                mercury__hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 0) = mercury__hash_table__K_6;
                MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 1) = mercury__hash_table__V_7;
                MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 2) = ((MR_Box) (mercury__hash_table__AL0_14));
              }
              mercury__hash_table__MayExpand_16 = (MR_Integer) 1;
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__hash_table__AL1_22;

          {
            mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(mercury__hash_table__TypeInfo_for_K_26, mercury__hash_table__AL0_14, mercury__hash_table__K_6, mercury__hash_table__V_7, &mercury__hash_table__AL1_22);
          }
          if (mercury__hash_table__succeeded)
            {
              mercury__hash_table__AL_15 = mercury__hash_table__AL1_22;
              mercury__hash_table__MayExpand_16 = (MR_Integer) 0;
            }
          else
            {
              {
                mercury__hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 0) = mercury__hash_table__K_6;
                MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 1) = mercury__hash_table__V_7;
                MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 2) = ((MR_Box) (mercury__hash_table__AL0_14));
              }
              mercury__hash_table__MayExpand_16 = (MR_Integer) 1;
            }
        }
        break;
    }
{
#define MR_PROC_LABEL mercury__hash_table__set_3_f_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__hash_table__H_9 ;
	Item = (MR_Word) ((MR_Box) (mercury__hash_table__AL_15)) ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Buckets0_13 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__hash_table__conv3_Array );
    mercury__hash_table__Buckets_23 = (MR_ArrayPtr) mercury__hash_table__conv3_Array;
}
    switch (mercury__hash_table__MayExpand_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 0) = ((MR_Box) (mercury__hash_table__NumOccupants0_10));
          MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 1) = ((MR_Box) (mercury__hash_table__MaxOccupants_11));
          MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 2) = ((MR_Box) (mercury__hash_table__HashPred_12));
          MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 3) = ((MR_Box) (mercury__hash_table__Buckets_23));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer mercury__hash_table__NumOccupants_24 = (mercury__hash_table__NumOccupants0_10 + (MR_Integer) 1);

          mercury__hash_table__succeeded = (mercury__hash_table__NumOccupants_24 > mercury__hash_table__MaxOccupants_11);
          if (mercury__hash_table__succeeded)
            {
              mercury__hash_table__HT_8 = mercury__hash_table__expand_4_f_0(mercury__hash_table__TypeInfo_for_K_26, mercury__hash_table__TypeInfo_for_V_27, mercury__hash_table__NumOccupants_24, mercury__hash_table__MaxOccupants_11, mercury__hash_table__HashPred_12, mercury__hash_table__Buckets_23);
            }
          else
            {
              mercury__hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 0) = ((MR_Box) (mercury__hash_table__NumOccupants_24));
              MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 1) = ((MR_Box) (mercury__hash_table__MaxOccupants_11));
              MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 2) = ((MR_Box) (mercury__hash_table__HashPred_12));
              MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 3) = ((MR_Box) (mercury__hash_table__Buckets_23));
            }
        }
        break;
    }
    return mercury__hash_table__HT_8;
  }
}

MR_Word MR_CALL 
mercury__hash_table__copy_1_f_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_10,
  MR_Word mercury__hash_table__TypeInfo_for_V_11,
  MR_Word mercury__hash_table__Orig_3)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_Word mercury__hash_table__Copy_4;
    MR_Integer mercury__hash_table__NumOccupants_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__Orig_3, (MR_Integer) 0)));
    MR_Integer mercury__hash_table__MaxOccupants_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__Orig_3, (MR_Integer) 1)));
    MR_Word mercury__hash_table__HashPred_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__Orig_3, (MR_Integer) 2)));
    MR_ArrayPtr mercury__hash_table__Buckets0_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__Orig_3, (MR_Integer) 3)));
    MR_ArrayPtr mercury__hash_table__Buckets_9;
    MR_Word mercury__hash_table__TypeInfo_13_14;
    MR_ArrayPtr mercury__hash_table__conv0_Array;

{
#define MR_PROC_LABEL mercury__hash_table__copy_1_f_0

	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Buckets0_8 , Array0);
		{

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__hash_table__conv0_Array );
    mercury__hash_table__Buckets_9 = (MR_ArrayPtr) mercury__hash_table__conv0_Array;
}
    {
      mercury__hash_table__Copy_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__hash_table__Copy_4, 0) = ((MR_Box) (mercury__hash_table__NumOccupants_5));
      MR_hl_field(MR_mktag(0), mercury__hash_table__Copy_4, 1) = ((MR_Box) (mercury__hash_table__MaxOccupants_6));
      MR_hl_field(MR_mktag(0), mercury__hash_table__Copy_4, 2) = ((MR_Box) (mercury__hash_table__HashPred_7));
      MR_hl_field(MR_mktag(0), mercury__hash_table__Copy_4, 3) = ((MR_Box) (mercury__hash_table__Buckets_9));
    }
    return mercury__hash_table__Copy_4;
  }
}

MR_Integer MR_CALL 
mercury__hash_table__num_occupants_1_f_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_6,
  MR_Word mercury__hash_table__TypeInfo_for_V_7,
  MR_Word mercury__hash_table__HeadVar__1_1)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_Integer mercury__hash_table__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer mercury__hash_table__Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__hash_table__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 2)));
    MR_ArrayPtr mercury__hash_table__Var_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 3)));

    return mercury__hash_table__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__hash_table__num_buckets_1_f_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_8,
  MR_Word mercury__hash_table__TypeInfo_for_V_9,
  MR_Word mercury__hash_table__HT_3)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_Integer mercury__hash_table__HeadVar__2_2;
    MR_ArrayPtr mercury__hash_table__Var_4 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 3)));
    MR_Integer mercury__hash_table__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 0)));
    MR_Integer mercury__hash_table__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 1)));
    MR_Word mercury__hash_table__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 2)));
    MR_Word mercury__hash_table__TypeInfo_11_14;

{
#define MR_PROC_LABEL mercury__hash_table__num_buckets_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Var_4 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__HeadVar__2_2  = Max;
}
    return mercury__hash_table__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__hash_table__generic_hash_2_p_0(
  MR_Word mercury__hash_table__TypeInfo_for_T_38,
  MR_Box mercury__hash_table__T_3,
  MR_Integer * mercury__hash_table__H_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__hash_table__succeeded;
        MR_Integer mercury__hash_table__Int_5;
        MR_Word mercury__hash_table__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Box mercury__hash_table__conv0_Int_5;

        {
          mercury__hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__hash_table__TypeInfo_for_T_38, mercury__hash_table__TypeCtorInfo_39_39, mercury__hash_table__T_3, &mercury__hash_table__conv0_Int_5);
        }
        if (mercury__hash_table__succeeded)
          {
            mercury__hash_table__Int_5 = ((MR_Integer) mercury__hash_table__conv0_Int_5);
            mercury__hash_table__succeeded = MR_TRUE;
          }
        if (mercury__hash_table__succeeded)
          {
{
#define MR_PROC_LABEL mercury__hash_table__generic_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__hash_table__Int_5 ;
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
	 *mercury__hash_table__H_4  = H;
}
          }
        else
          {
            MR_String mercury__hash_table__String_6;
            MR_Word mercury__hash_table__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Box mercury__hash_table__conv1_String_6;

            {
              mercury__hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__hash_table__TypeInfo_for_T_38, mercury__hash_table__TypeCtorInfo_40_40, mercury__hash_table__T_3, &mercury__hash_table__conv1_String_6);
            }
            if (mercury__hash_table__succeeded)
              {
                mercury__hash_table__String_6 = ((MR_String) mercury__hash_table__conv1_String_6);
                mercury__hash_table__succeeded = MR_TRUE;
              }
            if (mercury__hash_table__succeeded)
              {
                *mercury__hash_table__H_4 = mercury__string__hash_1_f_0(mercury__hash_table__String_6);
              }
            else
              {
                MR_Float mercury__hash_table__Float_7;
                MR_Word mercury__hash_table__TypeCtorInfo_41_41 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
                MR_Box mercury__hash_table__conv2_Float_7;

                {
                  mercury__hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__hash_table__TypeInfo_for_T_38, mercury__hash_table__TypeCtorInfo_41_41, mercury__hash_table__T_3, &mercury__hash_table__conv2_Float_7);
                }
                if (mercury__hash_table__succeeded)
                  {
                    mercury__hash_table__Float_7 = MR_unbox_float(mercury__hash_table__conv2_Float_7);
                    mercury__hash_table__succeeded = MR_TRUE;
                  }
                if (mercury__hash_table__succeeded)
                  {
{
#define MR_PROC_LABEL mercury__hash_table__generic_hash_2_p_0

	MR_Float F;
	MR_Integer H;

	F =  mercury__hash_table__Float_7 ;
		{

    H = MR_hash_float(F);


		;}
#undef MR_PROC_LABEL
	 *mercury__hash_table__H_4  = H;
}
                  }
                else
                  {
                    MR_Char mercury__hash_table__Char_8;
                    MR_Word mercury__hash_table__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
                    MR_Box mercury__hash_table__conv3_Char_8;

                    {
                      mercury__hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__hash_table__TypeInfo_for_T_38, mercury__hash_table__TypeCtorInfo_42_42, mercury__hash_table__T_3, &mercury__hash_table__conv3_Char_8);
                    }
                    if (mercury__hash_table__succeeded)
                      {
                        mercury__hash_table__Char_8 = ((MR_Char) (MR_Word) mercury__hash_table__conv3_Char_8);
                        mercury__hash_table__succeeded = MR_TRUE;
                      }
                    if (mercury__hash_table__succeeded)
                      {
                        MR_Integer mercury__hash_table__Var_63;

{
#define MR_PROC_LABEL mercury__hash_table__generic_hash_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__hash_table__Char_8 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__Var_63  = Int;
}
{
#define MR_PROC_LABEL mercury__hash_table__generic_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__hash_table__Var_63 ;
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
	 *mercury__hash_table__H_4  = H;
}
                      }
                    else
                      {
                        MR_Word mercury__hash_table__Univ_9;
                        MR_Word mercury__hash_table__TypeCtorInfo_43_43 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
                        MR_Box mercury__hash_table__conv4_Univ_9;

                        {
                          mercury__hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__hash_table__TypeInfo_for_T_38, mercury__hash_table__TypeCtorInfo_43_43, mercury__hash_table__T_3, &mercury__hash_table__conv4_Univ_9);
                        }
                        if (mercury__hash_table__succeeded)
                          {
                            mercury__hash_table__Univ_9 = ((MR_Word) mercury__hash_table__conv4_Univ_9);
                            mercury__hash_table__succeeded = MR_TRUE;
                          }
                        if (mercury__hash_table__succeeded)
                          {
                            MR_Word mercury__hash_table__TypeInfo_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__Univ_9, (MR_Integer) 0)));
                            MR_Box mercury__hash_table__Var_22 = (MR_hl_field(MR_mktag(0), mercury__hash_table__Univ_9, (MR_Integer) 1));

                            /* direct tailcall eliminated */
                            {
                              MR_Word mercury__hash_table__next_value_of_TypeInfo_for_T_38 = mercury__hash_table__TypeInfo_44_44;
                              MR_Box mercury__hash_table__next_value_of_T_3 = mercury__hash_table__Var_22;

                              mercury__hash_table__T_3 = mercury__hash_table__next_value_of_T_3;
                              mercury__hash_table__TypeInfo_for_T_38 = mercury__hash_table__next_value_of_TypeInfo_for_T_38;
                            }
                            continue;
                          }
                        else
                          {
                            MR_Word mercury__hash_table__TypeInfo_45_45;
                            MR_ArrayPtr mercury__hash_table__Array_10;
                            MR_ArrayPtr mercury__hash_table__conv5_Array_10;

                            {
                              mercury__hash_table__succeeded = mercury__array__dynamic_cast_to_array_2_p_0(mercury__hash_table__TypeInfo_for_T_38, &mercury__hash_table__TypeInfo_45_45, mercury__hash_table__T_3, &mercury__hash_table__conv5_Array_10);
                            }
                            if (mercury__hash_table__succeeded)
                              {
                                mercury__hash_table__Array_10 = (MR_ArrayPtr) mercury__hash_table__conv5_Array_10;
                                mercury__hash_table__succeeded = MR_TRUE;
                              }
                            if (mercury__hash_table__succeeded)
                              {
                                MR_Integer mercury__hash_table__V_8_74;
                                MR_Integer mercury__hash_table__V_9_75;

                                {
                                  mercury__hash_table__V_8_74 = mercury__array__min_1_f_0(mercury__hash_table__TypeInfo_45_45, (MR_ArrayPtr) mercury__hash_table__Array_10);
                                }
                                {
                                  mercury__hash_table__V_9_75 = mercury__array__max_1_f_0(mercury__hash_table__TypeInfo_45_45, (MR_ArrayPtr) mercury__hash_table__Array_10);
                                }
                                {
                                  *mercury__hash_table__H_4 = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_50_55_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(mercury__hash_table__TypeInfo_45_45, mercury__hash_table__Array_10, (MR_Integer) 0, mercury__hash_table__V_8_74, mercury__hash_table__V_9_75);
                                }
                              }
                            else
                              {
                                MR_String mercury__hash_table__FunctorName_15;
                                MR_Integer mercury__hash_table__Arity_16;
                                MR_Word mercury__hash_table__Args_17;
                                MR_Integer mercury__hash_table__H0_18;
                                MR_Integer mercury__hash_table__H1_19;
                                MR_Integer mercury__hash_table__Var_80;
                                MR_Integer mercury__hash_table__Var_81;
                                MR_Integer mercury__hash_table__Var_82;
                                MR_Integer mercury__hash_table__Var_83;

                                {
                                  mercury__deconstruct__deconstruct_5_p_1(mercury__hash_table__TypeInfo_for_T_38, mercury__hash_table__T_3, (MR_Integer) 1, &mercury__hash_table__FunctorName_15, &mercury__hash_table__Arity_16, &mercury__hash_table__Args_17);
                                }
                                {
                                  mercury__hash_table__H0_18 = mercury__string__hash_1_f_0(mercury__hash_table__FunctorName_15);
                                }
                                mercury__hash_table__Var_80 = (mercury__hash_table__H0_18 << mercury__hash_table__Arity_16);
{
#define MR_PROC_LABEL mercury__hash_table__generic_hash_2_p_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__Var_83  = Bits;
}
                                mercury__hash_table__Var_82 = (mercury__hash_table__Var_83 - mercury__hash_table__Arity_16);
                                mercury__hash_table__Var_81 = (mercury__hash_table__H0_18 >> mercury__hash_table__Var_82);
                                mercury__hash_table__H1_19 = (mercury__hash_table__Var_80 ^ mercury__hash_table__Var_81);
                                {
                                  mercury__hash_table__foldl__ho25_4_p_in__list_0(mercury__hash_table__Args_17, mercury__hash_table__H1_19, mercury__hash_table__H_4);
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
mercury__hash_table__float_hash_2_p_0(
  MR_Float mercury__hash_table__F_3,
  MR_Integer * mercury__hash_table__HeadVar__2_2)
{
  {
    MR_bool mercury__hash_table__succeeded;

{
#define MR_PROC_LABEL mercury__hash_table__float_hash_2_p_0

	MR_Float F;
	MR_Integer H;

	F =  mercury__hash_table__F_3 ;
		{

    H = MR_hash_float(F);


		;}
#undef MR_PROC_LABEL
	 *mercury__hash_table__HeadVar__2_2  = H;
}
  }
}

void MR_CALL 
mercury__hash_table__char_hash_2_p_0(
  MR_Char mercury__hash_table__C_3,
  MR_Integer * mercury__hash_table__H_4)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_Integer mercury__hash_table__Var_5;

{
#define MR_PROC_LABEL mercury__hash_table__char_hash_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__hash_table__C_3 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__Var_5  = Int;
}
{
#define MR_PROC_LABEL mercury__hash_table__char_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__hash_table__Var_5 ;
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
	 *mercury__hash_table__H_4  = H;
}
  }
}

void MR_CALL 
mercury__hash_table__string_hash_2_p_0(
  MR_String mercury__hash_table__S_3,
  MR_Integer * mercury__hash_table__HeadVar__2_2)
{
  {
    MR_bool mercury__hash_table__succeeded;

    {
      *mercury__hash_table__HeadVar__2_2 = mercury__string__hash_1_f_0(mercury__hash_table__S_3);
    }
  }
}

void MR_CALL 
mercury__hash_table__int_hash_2_p_0(
  MR_Integer mercury__hash_table__N_1,
  MR_Integer * mercury__hash_table__H_2)
{
  {
    MR_bool mercury__hash_table__succeeded;

{
#define MR_PROC_LABEL mercury__hash_table__int_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__hash_table__N_1 ;
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
	 *mercury__hash_table__H_2  = H;
}
  }
}

MR_Word MR_CALL 
mercury__hash_table__hash_pred_1_f_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_6,
  MR_Word mercury__hash_table__TypeInfo_for_V_7,
  MR_Word mercury__hash_table__HeadVar__1_1)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_Word mercury__hash_table__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 2)));
    MR_Integer mercury__hash_table__Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer mercury__hash_table__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 1)));
    MR_ArrayPtr mercury__hash_table__Var_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 3)));

    return mercury__hash_table__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__hash_table__new_default_1_f_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_6,
  MR_Word mercury__hash_table__TypeInfo_for_V_7,
  MR_Word mercury__hash_table__HashPred_3)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_Word mercury__hash_table__HeadVar__2_2;

    {
      mercury__hash_table__HeadVar__2_2 = mercury__hash_table__init_3_f_0(mercury__hash_table__TypeInfo_for_K_6, mercury__hash_table__TypeInfo_for_V_7, mercury__hash_table__HashPred_3, (MR_Integer) 7, (MR_Float) 0.90000000000000002);
    }
    return mercury__hash_table__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__hash_table__init_default_1_f_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_6,
  MR_Word mercury__hash_table__TypeInfo_for_V_7,
  MR_Word mercury__hash_table__HashPred_3)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_Word mercury__hash_table__HeadVar__2_2;

    {
      mercury__hash_table__HeadVar__2_2 = mercury__hash_table__init_3_f_0(mercury__hash_table__TypeInfo_for_K_6, mercury__hash_table__TypeInfo_for_V_7, mercury__hash_table__HashPred_3, (MR_Integer) 7, (MR_Float) 0.90000000000000002);
    }
    return mercury__hash_table__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__hash_table__new_3_f_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_8,
  MR_Word mercury__hash_table__TypeInfo_for_V_9,
  MR_Word mercury__hash_table__HashPred_5,
  MR_Integer mercury__hash_table__N_6,
  MR_Float mercury__hash_table__MaxOccupancy_7)
{
  {
    MR_bool mercury__hash_table__succeeded;
    MR_Word mercury__hash_table__HeadVar__4_4;

    {
      mercury__hash_table__HeadVar__4_4 = mercury__hash_table__init_3_f_0(mercury__hash_table__TypeInfo_for_K_8, mercury__hash_table__TypeInfo_for_V_9, mercury__hash_table__HashPred_5, mercury__hash_table__N_6, mercury__hash_table__MaxOccupancy_7);
    }
    return mercury__hash_table__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__hash_table__init_3_f_0(
  MR_Word mercury__hash_table__TypeInfo_for_K_26,
  MR_Word mercury__hash_table__TypeInfo_for_V_27,
  MR_Word mercury__hash_table__HashPred_5,
  MR_Integer mercury__hash_table__N_6,
  MR_Float mercury__hash_table__MaxOccupancy_7)
{
  {
    MR_bool mercury__hash_table__succeeded = (mercury__hash_table__N_6 <= (MR_Integer) 0);
    MR_Word mercury__hash_table__HT_8;

    if (mercury__hash_table__succeeded)
      {
        MR_Word mercury__hash_table__TypeCtorInfo_28_28 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
        MR_Word mercury__hash_table__Var_13 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.init: N =< 0"));

        {
          mercury__exception__throw_1_p_0(mercury__hash_table__TypeCtorInfo_28_28, ((MR_Box) (mercury__hash_table__Var_13)));
        }
      }
    else
      {
        MR_Integer mercury__hash_table__Var_15;

{
#define MR_PROC_LABEL mercury__hash_table__init_3_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__Var_15  = Bits;
}
        mercury__hash_table__succeeded = (mercury__hash_table__N_6 >= mercury__hash_table__Var_15);
        if (mercury__hash_table__succeeded)
          {
            MR_Word mercury__hash_table__TypeCtorInfo_29_29 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
            MR_Word mercury__hash_table__Var_16 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.init: N >= int.bits_per_int"));

            {
              mercury__exception__throw_1_p_0(mercury__hash_table__TypeCtorInfo_29_29, ((MR_Box) (mercury__hash_table__Var_16)));
            }
          }
        else
          {
            mercury__hash_table__succeeded = (mercury__hash_table__MaxOccupancy_7 <= ((MR_Float) 0.0000000000000000));
            if (mercury__hash_table__succeeded)
              {
                MR_Word mercury__hash_table__TypeCtorInfo_30_30 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
                MR_Word mercury__hash_table__Var_19 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.init: MaxOccupancy =< 0.0"));

                {
                  mercury__exception__throw_1_p_0(mercury__hash_table__TypeCtorInfo_30_30, ((MR_Box) (mercury__hash_table__Var_19)));
                }
              }
            else
              {
                MR_Word mercury__hash_table__TypeCtorInfo_31_31;
                MR_Word mercury__hash_table__TypeInfo_32_32;
                MR_Integer mercury__hash_table__NumBuckets_9;
                MR_Integer mercury__hash_table__MaxOccupants_10;
                MR_ArrayPtr mercury__hash_table__Buckets_11;
                MR_Float mercury__hash_table__Var_22;
                MR_Float mercury__hash_table__Var_23;
                MR_Word mercury__hash_table__Var_24;
                MR_ArrayPtr mercury__hash_table__conv0_Buckets_11;

                {
                  mercury__hash_table__NumBuckets_9 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, mercury__hash_table__N_6);
                }
{
#define MR_PROC_LABEL mercury__hash_table__init_3_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal =  mercury__hash_table__NumBuckets_9 ;
		{

    FloatVal = IntVal;


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__Var_23  = FloatVal;
}
                mercury__hash_table__Var_22 = (mercury__hash_table__Var_23 * mercury__hash_table__MaxOccupancy_7);
{
#define MR_PROC_LABEL mercury__hash_table__init_3_f_0

	MR_Float X;
	MR_Integer Ceil;

	X =  mercury__hash_table__Var_22 ;
		{

    Ceil = (MR_Integer) ceil(X);


		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__MaxOccupants_10  = Ceil;
}
                mercury__hash_table__TypeCtorInfo_31_31 = (MR_Word) &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2;
                {
                  mercury__hash_table__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_32_32, 0) = ((MR_Box) (mercury__hash_table__TypeCtorInfo_31_31));
                  MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_32_32, 1) = ((MR_Box) (mercury__hash_table__TypeInfo_for_K_26));
                  MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_32_32, 2) = ((MR_Box) (mercury__hash_table__TypeInfo_for_V_27));
                }
                mercury__hash_table__Var_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  mercury__array__init_3_p_0(mercury__hash_table__TypeInfo_32_32, mercury__hash_table__NumBuckets_9, ((MR_Box) (mercury__hash_table__Var_24)), &mercury__hash_table__conv0_Buckets_11);
                }
                mercury__hash_table__Buckets_11 = (MR_ArrayPtr) mercury__hash_table__conv0_Buckets_11;
                {
                  mercury__hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 0) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 1) = ((MR_Box) (mercury__hash_table__MaxOccupants_10));
                  MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 2) = ((MR_Box) (mercury__hash_table__HashPred_5));
                  MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 3) = ((MR_Box) (mercury__hash_table__Buckets_11));
                }
              }
          }
      }
    return mercury__hash_table__HT_8;
  }
}

void mercury__hash_table__init(void)
{
}

void mercury__hash_table__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__hash_table__hash_table__type_ctor_info_buckets_2);
	MR_register_type_ctor_info(&mercury__hash_table__hash_table__type_ctor_info_hash_pred_1);
	MR_register_type_ctor_info(&mercury__hash_table__hash_table__type_ctor_info_hash_table_2);
	MR_register_type_ctor_info(&mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2);
}

void mercury__hash_table__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hash_table__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module hash_table. */
