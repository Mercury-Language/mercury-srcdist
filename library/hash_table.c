/*
** Automatically generated from `hash_table.m'
** by the Mercury compiler,
** version rotd-2017-08-26
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
#include "int16.mih"
#include "int32.mih"
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
#include "uint8.mih"
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

static MR_Integer MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_Integer MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_52_56_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
  MR_Word Var_19,
  MR_ArrayPtr V_8_8,
  MR_Integer V_9_9,
  MR_Integer V_10_10,
  MR_Integer V_11_11);

static void MR_CALL 
mercury__hash_table__foldl__ho4_4_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4);

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_55_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Word Var_36,
  MR_Word Var_37,
  MR_Word Var_38,
  MR_Word Var_39,
  MR_Integer V_12_12,
  MR_Integer V_13_13,
  MR_ArrayPtr V_14_14,
  MR_Box V_18_15,
  MR_Box * V_19_16,
  MR_Box V_20_17,
  MR_Box * V_21_18,
  MR_Box V_22_19,
  MR_Box * V_23_20);

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Word Var_36,
  MR_Word Var_37,
  MR_Word Var_38,
  MR_Word Var_39,
  MR_Integer V_12_12,
  MR_Integer V_13_13,
  MR_ArrayPtr V_14_14,
  MR_Box V_18_15,
  MR_Box * V_19_16,
  MR_Box V_20_17,
  MR_Box * V_21_18,
  MR_Box V_22_19,
  MR_Box * V_23_20);

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Word Var_36,
  MR_Word Var_37,
  MR_Word Var_38,
  MR_Word Var_39,
  MR_Integer V_12_12,
  MR_Integer V_13_13,
  MR_ArrayPtr V_14_14,
  MR_Box V_18_15,
  MR_Box * V_19_16,
  MR_Box V_20_17,
  MR_Box * V_21_18,
  MR_Box V_22_19,
  MR_Box * V_23_20);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_52_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Word Var_36,
  MR_Word Var_37,
  MR_Word Var_38,
  MR_Word Var_39,
  MR_Integer V_12_12,
  MR_Integer V_13_13,
  MR_ArrayPtr V_14_14,
  MR_Box V_18_15,
  MR_Box * V_19_16,
  MR_Box V_20_17,
  MR_Box * V_21_18,
  MR_Box V_22_19,
  MR_Box * V_23_20);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Word Var_36,
  MR_Word Var_37,
  MR_Word Var_38,
  MR_Word Var_39,
  MR_Integer V_12_12,
  MR_Integer V_13_13,
  MR_ArrayPtr V_14_14,
  MR_Box V_18_15,
  MR_Box * V_19_16,
  MR_Box V_20_17,
  MR_Box * V_21_18,
  MR_Box V_22_19,
  MR_Box * V_23_20);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_50_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Word Var_36,
  MR_Word Var_37,
  MR_Word Var_38,
  MR_Word Var_39,
  MR_Integer V_12_12,
  MR_Integer V_13_13,
  MR_ArrayPtr V_14_14,
  MR_Box V_18_15,
  MR_Box * V_19_16,
  MR_Box V_20_17,
  MR_Box * V_21_18,
  MR_Box V_22_19,
  MR_Box * V_23_20);

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_52_49_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Integer V_10_10,
  MR_Integer V_11_11,
  MR_ArrayPtr V_12_12,
  MR_Box V_15_13,
  MR_Box * V_16_14,
  MR_Box V_17_15,
  MR_Box * V_18_16);

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Integer V_10_10,
  MR_Integer V_11_11,
  MR_ArrayPtr V_12_12,
  MR_Box V_15_13,
  MR_Box * V_16_14,
  MR_Box V_17_15,
  MR_Box * V_18_16);

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_57_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Integer V_10_10,
  MR_Integer V_11_11,
  MR_ArrayPtr V_12_12,
  MR_Box V_15_13,
  MR_Box * V_16_14,
  MR_Box V_17_15,
  MR_Box * V_18_16);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Integer V_10_10,
  MR_Integer V_11_11,
  MR_ArrayPtr V_12_12,
  MR_Box V_15_13,
  MR_Box * V_16_14,
  MR_Box V_17_15,
  MR_Box * V_18_16);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Integer V_10_10,
  MR_Integer V_11_11,
  MR_ArrayPtr V_12_12,
  MR_Box V_15_13,
  MR_Box * V_16_14,
  MR_Box V_17_15,
  MR_Box * V_18_16);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Integer V_10_10,
  MR_Integer V_11_11,
  MR_ArrayPtr V_12_12,
  MR_Box V_15_13,
  MR_Box * V_16_14,
  MR_Box V_17_15,
  MR_Box * V_18_16);

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr V_8_8,
  MR_Integer V_9_9,
  MR_Integer V_10_10,
  MR_Box V_12_11,
  MR_Box * V_13_12);

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr V_8_8,
  MR_Integer V_9_9,
  MR_Integer V_10_10,
  MR_Box V_12_11,
  MR_Box * V_13_12);

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr V_8_8,
  MR_Integer V_9_9,
  MR_Integer V_10_10,
  MR_Box V_12_11,
  MR_Box * V_13_12);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr V_8_8,
  MR_Integer V_9_9,
  MR_Integer V_10_10,
  MR_Box V_12_11,
  MR_Box * V_13_12);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr V_8_8,
  MR_Integer V_9_9,
  MR_Integer V_10_10,
  MR_Box V_12_11,
  MR_Box * V_13_12);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr V_8_8,
  MR_Integer V_9_9,
  MR_Integer V_10_10,
  MR_Box V_12_11,
  MR_Box * V_13_12);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr V_8_8,
  MR_Integer V_9_9,
  MR_Integer V_10_10,
  MR_Box V_12_11,
  MR_Box * V_13_12);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr V_8_8,
  MR_Integer V_9_9,
  MR_Integer V_10_10,
  MR_Box V_12_11,
  MR_Box * V_13_12);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__array_0(
  MR_Word Var_27,
  MR_Word Var_28,
  MR_ArrayPtr V_8_8,
  MR_Integer V_9_9,
  MR_Integer V_10_10,
  MR_Word V_12_11,
  MR_Word * V_13_12);

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(
  MR_Word TypeInfo_for_K_12,
  MR_Word AL0_4,
  MR_Box K_5,
  MR_Word * AL_6);

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeInfo_for_K_14,
  MR_Word AL0_5,
  MR_Box K_6,
  MR_Box V_7,
  MR_Word * AL_8);

static MR_Word MR_CALL 
mercury__hash_table__expand_4_f_0(
  MR_Word TypeInfo_for_K_20,
  MR_Word TypeInfo_for_V_21,
  MR_Integer NumOccupants_6,
  MR_Integer MaxOccupants0_7,
  MR_Word HashPred_8,
  MR_ArrayPtr Buckets0_9);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_p_0(
  MR_Integer I_7,
  MR_ArrayPtr OldBuckets_8,
  MR_Word HashPred_9,
  MR_Integer NumBuckets_10,
  MR_ArrayPtr STATE_VARIABLE_Buckets_0_13,
  MR_ArrayPtr * STATE_VARIABLE_Buckets_14);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0(
  MR_Word AL_6,
  MR_Word HashPred_7,
  MR_Integer NumBuckets_8,
  MR_ArrayPtr STATE_VARIABLE_Buckets_0_13,
  MR_ArrayPtr * STATE_VARIABLE_Buckets_14);

static MR_bool MR_CALL 
mercury__hash_table____Unify____buckets_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__hash_table____Compare____buckets_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__hash_table____Unify____hash_pred_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__hash_table____Compare____hash_pred_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__hash_table____Unify____hash_table_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__hash_table____Compare____hash_table_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__hash_table____Unify____hash_table_alist_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__hash_table____Compare____hash_table_alist_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);


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
#include "int16.mh"
#include "int32.mh"
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
#include "uint8.mh"
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
  MR_TYPECTOR_REP_EQUIV,
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
  MR_TYPECTOR_REP_EQUIV,
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__hash_table__hash_table__field_types_hash_table_2_0,
  mercury__hash_table__hash_table__field_names_hash_table_2_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_table_2_0[1] = {
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_2_0
};

static const MR_DuPtagLayout mercury__hash_table__hash_table__du_ptag_ordered_hash_table_2[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  MR_TYPECTOR_REP_DU,
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
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__hash_table__hash_table__field_types_hash_table_alist_2_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

static const MR_DuFunctorDesc mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_1 = {
  (MR_String) "ht_single",
  (MR_Integer) 2,
  (MR_Integer) 3,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__hash_table__hash_table__field_types_hash_table_alist_2_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__hash_table__hash_table__field_types_hash_table_alist_2_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    MR_SECTAG_LOCAL,
    mercury__hash_table__hash_table__du_stag_ordered_hash_table_alist_2_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__hash_table__hash_table__du_stag_ordered_hash_table_alist_2_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  MR_TYPECTOR_REP_DU,
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

static MR_Integer MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__hash_table____Compare____hash_table_alist_2_0(
  MR_Word TypeInfo_for_K_39,
  MR_Word TypeInfo_for_V_40,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_37 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_38 = (MR_Integer) HeadVar__3_3;

    /* setup for tailcalls optimized into a loop */
    succeeded = (CastX_37 == CastY_38);
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
            MR_Box Var_46 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
            MR_Box Var_47 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box ArgY1_12 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
                  MR_Box ArgY2_14 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));
                  MR_Word Var_15;

                  mercury__builtin__compare_3_p_0(TypeInfo_for_K_39, &Var_15, Var_47, ArgY1_12);
                  succeeded = (Var_15 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_15;
                  else
                    mercury__builtin__compare_3_p_0(TypeInfo_for_V_40, HeadVar__1_1, Var_46, ArgY2_14);
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
            MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2)));
            MR_Box Var_44 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
            MR_Box Var_45 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));

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
                  MR_Box ArgY1_30 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0));
                  MR_Box ArgY2_32 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1));
                  MR_Word ArgY3_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word Var_35;

                  mercury__builtin__compare_3_p_0(TypeInfo_for_K_39, &Var_35, Var_45, ArgY1_30);
                  succeeded = (Var_35 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_35;
                  else
                  {
                    MR_Word Var_36;

                    mercury__builtin__compare_3_p_0(TypeInfo_for_V_40, &Var_36, Var_44, ArgY2_32);
                    succeeded = (Var_36 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_36;
                    else
                    {
                      MR_Word next_value_of_HeadVar__2_2 = Var_43;
                      MR_Word next_value_of_HeadVar__3_3 = ArgY3_34;

                      /* direct tailcall eliminated */
                      HeadVar__2_2 = next_value_of_HeadVar__2_2;
                      HeadVar__3_3 = next_value_of_HeadVar__3_3;
                      continue;
                    }
                  }
                }
                break;
            }
          }
          break;
      }
    break;
  }
}

MR_bool MR_CALL 
mercury__hash_table____Unify____hash_table_alist_2_0(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_16 = (MR_Integer) HeadVar__2_2;

    /* setup for tailcalls optimized into a loop */
    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
            MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

            succeeded = (CastY_4 == CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_6;
            MR_Box ArgX2_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
            MR_Box ArgY2_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
              ArgY2_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_17, ArgX1_5, ArgY1_6);
              if (succeeded)
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_V_18, ArgX2_7, ArgY2_8);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box ArgX1_9 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_10;
            MR_Box ArgX2_11 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1));
            MR_Box ArgY2_12;
            MR_Word ArgX3_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2)));
            MR_Word ArgY3_14;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__2_2;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              ArgY1_10 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
              ArgY2_12 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
              ArgY3_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2)));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_17, ArgX1_9, ArgY1_10);
              if (succeeded)
              {
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_V_18, ArgX2_11, ArgY2_12);
                if (succeeded)
                {
                  /* direct tailcall eliminated */
                  next_value_of_HeadVar__1_1 = ArgX3_13;
                  next_value_of_HeadVar__2_2 = ArgY3_14;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  continue;
                }
              }
            }
          }
          break;
      }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__hash_table____Compare____hash_table_2_0(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_16 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_ArrayPtr ArgX4_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_ArrayPtr ArgY4_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word Var_12;

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
        Var_12 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX1_4 == ArgY1_5);
        if (succeeded)
          Var_12 = (MR_Integer) 0;
        else
          Var_12 = (MR_Integer) 2;
      }
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        succeeded = (ArgX2_6 < ArgY2_7);
        if (succeeded)
          Var_13 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX2_6 == ArgY2_7);
          if (succeeded)
            Var_13 = (MR_Integer) 0;
          else
            Var_13 = (MR_Integer) 2;
        }
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          mercury__private_builtin__builtin_compare_pred_3_p_0(&Var_14, (MR_Word) ArgX3_8, (MR_Word) ArgY3_9);
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
          {
            MR_Word TypeCtorInfo_25_25 = (MR_Word) &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2;
            MR_Word TypeInfo_26_26;

            {
              TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_26_26, 0) = ((MR_Box) (TypeCtorInfo_25_25));
              MR_hl_field(MR_mktag(0), TypeInfo_26_26, 1) = ((MR_Box) (TypeInfo_for_K_17));
              MR_hl_field(MR_mktag(0), TypeInfo_26_26, 2) = ((MR_Box) (TypeInfo_for_V_18));
            }
            mercury__array____Compare____array_1_0(TypeInfo_26_26, HeadVar__1_1, (MR_ArrayPtr) ArgX4_10, (MR_ArrayPtr) ArgY4_11);
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__hash_table____Unify____hash_table_2_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeCtorInfo_15_15;
      MR_Word TypeInfo_16_16;
      MR_Integer ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_ArrayPtr ArgX4_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_ArrayPtr ArgY4_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) ArgX3_7, (MR_Word) ArgY3_8);
          if (succeeded)
          {
            TypeCtorInfo_15_15 = (MR_Word) &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2;
            {
              TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_16_16, 0) = ((MR_Box) (TypeCtorInfo_15_15));
              MR_hl_field(MR_mktag(0), TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_for_K_13));
              MR_hl_field(MR_mktag(0), TypeInfo_16_16, 2) = ((MR_Box) (TypeInfo_for_V_14));
            }
            succeeded = mercury__array____Unify____array_1_0(TypeInfo_16_16, (MR_ArrayPtr) ArgX4_9, (MR_ArrayPtr) ArgY4_10);
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__hash_table____Compare____hash_pred_1_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) Cast_HeadVar1_4, (MR_Word) Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mercury__hash_table____Unify____hash_pred_1_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) Cast_HeadVar1_3, (MR_Word) Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__hash_table____Compare____buckets_2_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word * HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2,
  MR_ArrayPtr HeadVar__3_3)
{
  {
    MR_Word TypeCtorInfo_8_8 = (MR_Word) &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2;
    MR_Word TypeInfo_9_9;
    MR_ArrayPtr Cast_HeadVar1_4 = HeadVar__2_2;
    MR_ArrayPtr Cast_HeadVar2_5 = HeadVar__3_3;

    {
      TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (TypeCtorInfo_8_8));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_K_6));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 2) = ((MR_Box) (TypeInfo_for_V_7));
    }
    mercury__array____Compare____array_1_0(TypeInfo_9_9, HeadVar__1_1, (MR_ArrayPtr) Cast_HeadVar1_4, (MR_ArrayPtr) Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mercury__hash_table____Unify____buckets_2_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_ArrayPtr HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_7_7 = (MR_Word) &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2;
    MR_Word TypeInfo_8_8;
    MR_ArrayPtr Cast_HeadVar1_3 = HeadVar__1_1;
    MR_ArrayPtr Cast_HeadVar2_4 = HeadVar__2_2;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_K_5));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 2) = ((MR_Box) (TypeInfo_for_V_6));
    }
    succeeded = mercury__array____Unify____array_1_0(TypeInfo_8_8, (MR_ArrayPtr) Cast_HeadVar1_3, (MR_ArrayPtr) Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__hash_table__find_slot_2_4_p_0(
  MR_Word TypeInfo_for_K_12,
  MR_Word HashPred_5,
  MR_Box K_6,
  MR_Integer NumBuckets_7,
  MR_Integer * H_8)
{
  {
    MR_Integer Hash_9;
    MR_Integer Var_10;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), HashPred_5, (MR_Integer) 1)));
    MR_Box conv1_Hash_9;

    func_0(((MR_Box) HashPred_5), K_6, &conv1_Hash_9);
    Hash_9 = ((MR_Integer) conv1_Hash_9);
    Var_10 = (NumBuckets_7 - (MR_Integer) 1);
    *H_8 = (Hash_9 & Var_10);
  }
}

MR_Integer MR_CALL 
mercury__hash_table__find_slot_2_f_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word HT_4,
  MR_Box K_5)
{
  {
    MR_Integer H_6;
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT_4, (MR_Integer) 2)));
    MR_Integer Var_8;
    MR_ArrayPtr Var_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT_4, (MR_Integer) 3)));
    MR_Integer Hash_27;
    MR_Integer Var_28;
    MR_Integer Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_4, (MR_Integer) 0)));
    MR_Integer Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_4, (MR_Integer) 1)));
    MR_Word TypeInfo_11_30;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_Hash_27;

{
#define MR_PROC_LABEL mercury__hash_table__find_slot_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_13 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 Var_8  = Max;
}
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 1)));
    func_0(((MR_Box) Var_7), K_5, &conv1_Hash_27);
    Hash_27 = ((MR_Integer) conv1_Hash_27);
    Var_28 = (Var_8 - (MR_Integer) 1);
    H_6 = (Hash_27 & Var_28);
    return H_6;
  }
}

void MR_CALL 
mercury__hash_table__generic_hash_2_p_0(
  MR_Word TypeInfo_for_T_38,
  MR_Box T_3,
  MR_Integer * H_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Int_5;
    MR_Word TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Box conv0_Int_5;

    /* setup for tailcalls optimized into a loop */
    succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_38, TypeCtorInfo_39_39, T_3, &conv0_Int_5);
    if (succeeded)
    {
      Int_5 = ((MR_Integer) conv0_Int_5);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__hash_table__generic_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  Int_5 ;
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
	 *H_4  = H;
}
    }
    else
    {
      MR_String String_6;
      MR_Word TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      MR_Box conv1_String_6;

      succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_38, TypeCtorInfo_40_40, T_3, &conv1_String_6);
      if (succeeded)
      {
        String_6 = ((MR_String) conv1_String_6);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        mercury__string__hash_2_p_0(String_6, H_4);
      else
      {
        MR_Float Float_7;
        MR_Word TypeCtorInfo_41_41 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
        MR_Box conv2_Float_7;

        succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_38, TypeCtorInfo_41_41, T_3, &conv2_Float_7);
        if (succeeded)
        {
          Float_7 = MR_unbox_float(conv2_Float_7);
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__hash_table__generic_hash_2_p_0

	MR_Float F;
	MR_Integer H;

	F =  Float_7 ;
		{

    H = MR_hash_float(F);


		;}
#undef MR_PROC_LABEL
	 *H_4  = H;
}
        }
        else
        {
          MR_Char Char_8;
          MR_Word TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
          MR_Box conv3_Char_8;

          succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_38, TypeCtorInfo_42_42, T_3, &conv3_Char_8);
          if (succeeded)
          {
            Char_8 = ((MR_Char) (MR_Word) conv3_Char_8);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Integer Var_65;

{
#define MR_PROC_LABEL mercury__hash_table__generic_hash_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  Char_8 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 Var_65  = Int;
}
{
#define MR_PROC_LABEL mercury__hash_table__generic_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  Var_65 ;
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
	 *H_4  = H;
}
          }
          else
          {
            MR_Word Univ_9;
            MR_Word TypeCtorInfo_43_43 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
            MR_Box conv4_Univ_9;

            succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_38, TypeCtorInfo_43_43, T_3, &conv4_Univ_9);
            if (succeeded)
            {
              Univ_9 = ((MR_Word) conv4_Univ_9);
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word TypeInfo_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 0)));
              MR_Box Var_22 = (MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 1));
              MR_Word next_value_of_TypeInfo_for_T_38 = TypeInfo_44_44;
              MR_Box next_value_of_T_3 = Var_22;

              /* direct tailcall eliminated */
              TypeInfo_for_T_38 = next_value_of_TypeInfo_for_T_38;
              T_3 = next_value_of_T_3;
              continue;
            }
            else
            {
              MR_Word TypeInfo_45_45;
              MR_ArrayPtr Array_10;
              MR_ArrayPtr conv5_Array_10;

              succeeded = mercury__array__dynamic_cast_to_array_2_p_0(TypeInfo_for_T_38, &TypeInfo_45_45, T_3, &conv5_Array_10);
              if (succeeded)
              {
                Array_10 = (MR_ArrayPtr) conv5_Array_10;
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Integer V_8_76;
                MR_Integer V_9_77;

                V_8_76 = mercury__array__min_1_f_0(TypeInfo_45_45, (MR_ArrayPtr) Array_10);
                V_9_77 = mercury__array__max_1_f_0(TypeInfo_45_45, (MR_ArrayPtr) Array_10);
                *H_4 = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_52_56_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(TypeInfo_45_45, Array_10, (MR_Integer) 0, V_8_76, V_9_77);
              }
              else
              {
                MR_String FunctorName_15;
                MR_Integer Arity_16;
                MR_Word Args_17;
                MR_Integer H0_18;
                MR_Integer H1_19;
                MR_Integer Var_84;
                MR_Integer Var_85;
                MR_Integer Var_86;
                MR_Integer Var_87;

                mercury__deconstruct__deconstruct_5_p_1(TypeInfo_for_T_38, T_3, (MR_Integer) 1, &FunctorName_15, &Arity_16, &Args_17);
                mercury__string__hash_2_p_0(FunctorName_15, &H0_18);
                Var_84 = (H0_18 << Arity_16);
{
#define MR_PROC_LABEL mercury__hash_table__generic_hash_2_p_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Var_87  = Bits;
}
                Var_86 = (Var_87 - Arity_16);
                Var_85 = (H0_18 >> Var_86);
                H1_19 = (Var_84 ^ Var_85);
                mercury__hash_table__foldl__ho4_4_p_in__list_0(Args_17, H1_19, H_4);
              }
            }
          }
        }
      }
    }
    break;
  }
}

static MR_Integer MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_52_56_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
  MR_Word Var_19,
  MR_ArrayPtr V_8_8,
  MR_Integer V_9_9,
  MR_Integer V_10_10,
  MR_Integer V_11_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (V_11_11 < V_10_10);
    MR_Integer V_6_12;

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
      V_6_12 = V_9_9;
    else
    {
      MR_Integer V_12_13;
      MR_Integer V_14_14;
      MR_Box V_13_15;
      MR_Integer HX_36;
      MR_Integer Var_70;
      MR_Integer Var_71;
      MR_Integer Var_72;
      MR_Integer Var_73;
      MR_Word TypeInfo_for_T1_1_75;
      MR_Integer next_value_of_V_9_9;
      MR_Integer next_value_of_V_10_10;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_52_56_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) V_8_8 , Array);
	Index =  V_10_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 V_13_15  = (MR_Box) Item;
}
      mercury__hash_table__generic_hash_2_p_0(Var_19, V_13_15, &HX_36);
      Var_70 = (V_9_9 << HX_36);
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_52_56_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Var_73  = Bits;
}
      Var_72 = (Var_73 - HX_36);
      Var_71 = (V_9_9 >> Var_72);
      V_12_13 = (Var_70 ^ Var_71);
      V_14_14 = (V_10_10 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_V_9_9 = V_12_13;
      next_value_of_V_10_10 = V_14_14;
      V_9_9 = next_value_of_V_9_9;
      V_10_10 = next_value_of_V_10_10;
      continue;
    }
    return V_6_12;
    break;
  }
}

static void MR_CALL 
mercury__hash_table__foldl__ho4_4_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word TypeCtorInfo_47_59 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
      MR_Word V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer V_15_13;
      MR_Integer HUA_36;
      MR_Integer Var_64;
      MR_Integer Var_65;
      MR_Integer Var_66;
      MR_Integer Var_67;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_HeadVar__3_3;

      mercury__hash_table__generic_hash_2_p_0(TypeCtorInfo_47_59, ((MR_Box) (V_10_9)), &HUA_36);
      Var_64 = (HeadVar__3_3 << HUA_36);
{
#define MR_PROC_LABEL mercury__hash_table__foldl__ho4_4_p_in__list_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Var_67  = Bits;
}
      Var_66 = (Var_67 - HUA_36);
      Var_65 = (HeadVar__3_3 >> Var_66);
      V_15_13 = (Var_64 ^ Var_65);
      /* direct tailcall eliminated */
      next_value_of_HeadVar__2_2 = V_11_10;
      next_value_of_HeadVar__3_3 = V_15_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__hash_table__string_hash_2_p_0(
  MR_String S_3,
  MR_Integer * HeadVar__2_2)
{
  mercury__string__hash_2_p_0(S_3, HeadVar__2_2);
}

void MR_CALL 
mercury__hash_table__char_hash_2_p_0(
  MR_Char C_3,
  MR_Integer * H_4)
{
  {
    MR_Integer Var_5;

{
#define MR_PROC_LABEL mercury__hash_table__char_hash_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  C_3 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 Var_5  = Int;
}
{
#define MR_PROC_LABEL mercury__hash_table__char_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  Var_5 ;
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
	 *H_4  = H;
}
  }
}

void MR_CALL 
mercury__hash_table__float_hash_2_p_0(
  MR_Float F_3,
  MR_Integer * HeadVar__2_2)
{
  {
{
#define MR_PROC_LABEL mercury__hash_table__float_hash_2_p_0

	MR_Float F;
	MR_Integer H;

	F =  F_3 ;
		{

    H = MR_hash_float(F);


		;}
#undef MR_PROC_LABEL
	 *HeadVar__2_2  = H;
}
  }
}

void MR_CALL 
mercury__hash_table__int_hash_2_p_0(
  MR_Integer N_1,
  MR_Integer * H_2)
{
  {
{
#define MR_PROC_LABEL mercury__hash_table__int_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  N_1 ;
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
	 *H_2  = H;
}
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold3_8_p_5(
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word P_9,
  MR_Word HT_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_bool succeeded;
    MR_ArrayPtr Var_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT_10, (MR_Integer) 3)));
    MR_Integer V_20_50;
    MR_Integer V_21_51;
    MR_Integer Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_10, (MR_Integer) 0)));
    MR_Integer Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_10, (MR_Integer) 1)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT_10, (MR_Integer) 2)));
    MR_Word TypeInfo_41_57;
    MR_Word TypeInfo_41_58;

{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_21 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 V_20_50  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_21 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 V_21_51  = Max;
}
    succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_55_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(TypeInfo_for_K_28, TypeInfo_for_V_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, P_9, V_20_50, V_21_51, Var_21, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_55_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Word Var_36,
  MR_Word Var_37,
  MR_Word Var_38,
  MR_Word Var_39,
  MR_Integer V_12_12,
  MR_Integer V_13_13,
  MR_ArrayPtr V_14_14,
  MR_Box V_18_15,
  MR_Box * V_19_16,
  MR_Box V_20_17,
  MR_Box * V_21_18,
  MR_Box V_22_19,
  MR_Box * V_23_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (V_13_13 < V_12_12);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      *V_23_20 = V_22_19;
      *V_21_18 = V_20_17;
      *V_19_16 = V_18_15;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word V_24_21;
      MR_Box V_25_22;
      MR_Box V_26_23;
      MR_Box V_27_24;
      MR_Integer V_28_25;
      MR_Integer V_32_26;
      MR_Word TypeInfo_for_T1_1_43;
      MR_Box conv0_Item;
      MR_Integer next_value_of_V_12_12;
      MR_Box next_value_of_V_18_15;
      MR_Box next_value_of_V_20_17;
      MR_Box next_value_of_V_22_19;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_55_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) V_14_14 , Array);
	Index =  V_12_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      V_24_21 = ((MR_Word) conv0_Item);
}
      succeeded = mercury__hash_table__fold3_p_8_p_5(Var_34, Var_35, Var_36, Var_37, Var_38, Var_39, V_24_21, V_18_15, &V_25_22, V_20_17, &V_26_23, V_22_19, &V_27_24);
      if (succeeded)
      {
        V_32_26 = (MR_Integer) 1;
        V_28_25 = (V_12_12 + V_32_26);
        /* direct tailcall eliminated */
        next_value_of_V_12_12 = V_28_25;
        next_value_of_V_18_15 = V_25_22;
        next_value_of_V_20_17 = V_26_23;
        next_value_of_V_22_19 = V_27_24;
        V_12_12 = next_value_of_V_12_12;
        V_18_15 = next_value_of_V_18_15;
        V_20_17 = next_value_of_V_20_17;
        V_22_19 = next_value_of_V_22_19;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold3_p_8_p_5(
  MR_Word TypeInfo_for_K_34,
  MR_Word TypeInfo_for_V_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word P_9,
  MR_Word List_10,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    switch (MR_tag((MR_Word) List_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_A_18 = STATE_VARIABLE_A_0_17;
          *STATE_VARIABLE_B_20 = STATE_VARIABLE_B_0_19;
          *STATE_VARIABLE_C_22 = STATE_VARIABLE_C_0_21;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_14 = (MR_hl_field(MR_mktag(1), List_10, (MR_Integer) 0));
          MR_Box V_15 = (MR_hl_field(MR_mktag(1), List_10, (MR_Integer) 1));
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1)));

          succeeded = func_1(((MR_Box) P_9), K_14, V_15, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), List_10, (MR_Integer) 2)));
          MR_Box STATE_VARIABLE_A_23_23;
          MR_Box STATE_VARIABLE_B_24_24;
          MR_Box STATE_VARIABLE_C_25_25;
          MR_Box K_32 = (MR_hl_field(MR_mktag(2), List_10, (MR_Integer) 0));
          MR_Box V_33 = (MR_hl_field(MR_mktag(2), List_10, (MR_Integer) 1));
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1)));
          MR_Word next_value_of_List_10;
          MR_Box next_value_of_STATE_VARIABLE_A_0_17;
          MR_Box next_value_of_STATE_VARIABLE_B_0_19;
          MR_Box next_value_of_STATE_VARIABLE_C_0_21;

          succeeded = func_0(((MR_Box) P_9), K_32, V_33, STATE_VARIABLE_A_0_17, &STATE_VARIABLE_A_23_23, STATE_VARIABLE_B_0_19, &STATE_VARIABLE_B_24_24, STATE_VARIABLE_C_0_21, &STATE_VARIABLE_C_25_25);
          if (succeeded)
          {
            /* direct tailcall eliminated */
            next_value_of_List_10 = KVs_16;
            next_value_of_STATE_VARIABLE_A_0_17 = STATE_VARIABLE_A_23_23;
            next_value_of_STATE_VARIABLE_B_0_19 = STATE_VARIABLE_B_24_24;
            next_value_of_STATE_VARIABLE_C_0_21 = STATE_VARIABLE_C_25_25;
            List_10 = next_value_of_List_10;
            STATE_VARIABLE_A_0_17 = next_value_of_STATE_VARIABLE_A_0_17;
            STATE_VARIABLE_B_0_19 = next_value_of_STATE_VARIABLE_B_0_19;
            STATE_VARIABLE_C_0_21 = next_value_of_STATE_VARIABLE_C_0_21;
            continue;
          }
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold3_8_p_4(
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word P_9,
  MR_Word HT_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_bool succeeded;
    MR_ArrayPtr Var_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT_10, (MR_Integer) 3)));
    MR_Integer V_20_50;
    MR_Integer V_21_51;
    MR_Integer Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_10, (MR_Integer) 0)));
    MR_Integer Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_10, (MR_Integer) 1)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT_10, (MR_Integer) 2)));
    MR_Word TypeInfo_41_57;
    MR_Word TypeInfo_41_58;

{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_21 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 V_20_50  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_21 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 V_21_51  = Max;
}
    succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(TypeInfo_for_K_28, TypeInfo_for_V_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, P_9, V_20_50, V_21_51, Var_21, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Word Var_36,
  MR_Word Var_37,
  MR_Word Var_38,
  MR_Word Var_39,
  MR_Integer V_12_12,
  MR_Integer V_13_13,
  MR_ArrayPtr V_14_14,
  MR_Box V_18_15,
  MR_Box * V_19_16,
  MR_Box V_20_17,
  MR_Box * V_21_18,
  MR_Box V_22_19,
  MR_Box * V_23_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (V_13_13 < V_12_12);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      *V_23_20 = V_22_19;
      *V_21_18 = V_20_17;
      *V_19_16 = V_18_15;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word V_24_21;
      MR_Box V_25_22;
      MR_Box V_26_23;
      MR_Box V_27_24;
      MR_Integer V_28_25;
      MR_Integer V_32_26;
      MR_Word TypeInfo_for_T1_1_43;
      MR_Box conv0_Item;
      MR_Integer next_value_of_V_12_12;
      MR_Box next_value_of_V_18_15;
      MR_Box next_value_of_V_20_17;
      MR_Box next_value_of_V_22_19;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) V_14_14 , Array);
	Index =  V_12_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      V_24_21 = ((MR_Word) conv0_Item);
}
      succeeded = mercury__hash_table__fold3_p_8_p_4(Var_34, Var_35, Var_36, Var_37, Var_38, Var_39, V_24_21, V_18_15, &V_25_22, V_20_17, &V_26_23, V_22_19, &V_27_24);
      if (succeeded)
      {
        V_32_26 = (MR_Integer) 1;
        V_28_25 = (V_12_12 + V_32_26);
        /* direct tailcall eliminated */
        next_value_of_V_12_12 = V_28_25;
        next_value_of_V_18_15 = V_25_22;
        next_value_of_V_20_17 = V_26_23;
        next_value_of_V_22_19 = V_27_24;
        V_12_12 = next_value_of_V_12_12;
        V_18_15 = next_value_of_V_18_15;
        V_20_17 = next_value_of_V_20_17;
        V_22_19 = next_value_of_V_22_19;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold3_p_8_p_4(
  MR_Word TypeInfo_for_K_34,
  MR_Word TypeInfo_for_V_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word P_9,
  MR_Word List_10,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    switch (MR_tag((MR_Word) List_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_A_18 = STATE_VARIABLE_A_0_17;
          *STATE_VARIABLE_B_20 = STATE_VARIABLE_B_0_19;
          *STATE_VARIABLE_C_22 = STATE_VARIABLE_C_0_21;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_14 = (MR_hl_field(MR_mktag(1), List_10, (MR_Integer) 0));
          MR_Box V_15 = (MR_hl_field(MR_mktag(1), List_10, (MR_Integer) 1));
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1)));

          succeeded = func_1(((MR_Box) P_9), K_14, V_15, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), List_10, (MR_Integer) 2)));
          MR_Box STATE_VARIABLE_A_23_23;
          MR_Box STATE_VARIABLE_B_24_24;
          MR_Box STATE_VARIABLE_C_25_25;
          MR_Box K_32 = (MR_hl_field(MR_mktag(2), List_10, (MR_Integer) 0));
          MR_Box V_33 = (MR_hl_field(MR_mktag(2), List_10, (MR_Integer) 1));
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1)));
          MR_Word next_value_of_List_10;
          MR_Box next_value_of_STATE_VARIABLE_A_0_17;
          MR_Box next_value_of_STATE_VARIABLE_B_0_19;
          MR_Box next_value_of_STATE_VARIABLE_C_0_21;

          succeeded = func_0(((MR_Box) P_9), K_32, V_33, STATE_VARIABLE_A_0_17, &STATE_VARIABLE_A_23_23, STATE_VARIABLE_B_0_19, &STATE_VARIABLE_B_24_24, STATE_VARIABLE_C_0_21, &STATE_VARIABLE_C_25_25);
          if (succeeded)
          {
            /* direct tailcall eliminated */
            next_value_of_List_10 = KVs_16;
            next_value_of_STATE_VARIABLE_A_0_17 = STATE_VARIABLE_A_23_23;
            next_value_of_STATE_VARIABLE_B_0_19 = STATE_VARIABLE_B_24_24;
            next_value_of_STATE_VARIABLE_C_0_21 = STATE_VARIABLE_C_25_25;
            List_10 = next_value_of_List_10;
            STATE_VARIABLE_A_0_17 = next_value_of_STATE_VARIABLE_A_0_17;
            STATE_VARIABLE_B_0_19 = next_value_of_STATE_VARIABLE_B_0_19;
            STATE_VARIABLE_C_0_21 = next_value_of_STATE_VARIABLE_C_0_21;
            continue;
          }
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold3_8_p_3(
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word P_9,
  MR_Word HT_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_bool succeeded;
    MR_ArrayPtr Var_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT_10, (MR_Integer) 3)));
    MR_Integer V_20_50;
    MR_Integer V_21_51;
    MR_Integer Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_10, (MR_Integer) 0)));
    MR_Integer Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_10, (MR_Integer) 1)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT_10, (MR_Integer) 2)));
    MR_Word TypeInfo_41_57;
    MR_Word TypeInfo_41_58;

{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_21 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 V_20_50  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_21 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 V_21_51  = Max;
}
    succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(TypeInfo_for_K_28, TypeInfo_for_V_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, P_9, V_20_50, V_21_51, Var_21, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Word Var_36,
  MR_Word Var_37,
  MR_Word Var_38,
  MR_Word Var_39,
  MR_Integer V_12_12,
  MR_Integer V_13_13,
  MR_ArrayPtr V_14_14,
  MR_Box V_18_15,
  MR_Box * V_19_16,
  MR_Box V_20_17,
  MR_Box * V_21_18,
  MR_Box V_22_19,
  MR_Box * V_23_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (V_13_13 < V_12_12);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      *V_23_20 = V_22_19;
      *V_21_18 = V_20_17;
      *V_19_16 = V_18_15;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word V_24_21;
      MR_Box V_25_22;
      MR_Box V_26_23;
      MR_Box V_27_24;
      MR_Integer V_28_25;
      MR_Integer V_32_26;
      MR_Word TypeInfo_for_T1_1_43;
      MR_Box conv0_Item;
      MR_Integer next_value_of_V_12_12;
      MR_Box next_value_of_V_18_15;
      MR_Box next_value_of_V_20_17;
      MR_Box next_value_of_V_22_19;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) V_14_14 , Array);
	Index =  V_12_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      V_24_21 = ((MR_Word) conv0_Item);
}
      succeeded = mercury__hash_table__fold3_p_8_p_3(Var_34, Var_35, Var_36, Var_37, Var_38, Var_39, V_24_21, V_18_15, &V_25_22, V_20_17, &V_26_23, V_22_19, &V_27_24);
      if (succeeded)
      {
        V_32_26 = (MR_Integer) 1;
        V_28_25 = (V_12_12 + V_32_26);
        /* direct tailcall eliminated */
        next_value_of_V_12_12 = V_28_25;
        next_value_of_V_18_15 = V_25_22;
        next_value_of_V_20_17 = V_26_23;
        next_value_of_V_22_19 = V_27_24;
        V_12_12 = next_value_of_V_12_12;
        V_18_15 = next_value_of_V_18_15;
        V_20_17 = next_value_of_V_20_17;
        V_22_19 = next_value_of_V_22_19;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold3_p_8_p_3(
  MR_Word TypeInfo_for_K_34,
  MR_Word TypeInfo_for_V_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word P_9,
  MR_Word List_10,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    switch (MR_tag((MR_Word) List_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_A_18 = STATE_VARIABLE_A_0_17;
          *STATE_VARIABLE_B_20 = STATE_VARIABLE_B_0_19;
          *STATE_VARIABLE_C_22 = STATE_VARIABLE_C_0_21;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_14 = (MR_hl_field(MR_mktag(1), List_10, (MR_Integer) 0));
          MR_Box V_15 = (MR_hl_field(MR_mktag(1), List_10, (MR_Integer) 1));
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1)));

          succeeded = func_1(((MR_Box) P_9), K_14, V_15, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), List_10, (MR_Integer) 2)));
          MR_Box STATE_VARIABLE_A_23_23;
          MR_Box STATE_VARIABLE_B_24_24;
          MR_Box STATE_VARIABLE_C_25_25;
          MR_Box K_32 = (MR_hl_field(MR_mktag(2), List_10, (MR_Integer) 0));
          MR_Box V_33 = (MR_hl_field(MR_mktag(2), List_10, (MR_Integer) 1));
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1)));
          MR_Word next_value_of_List_10;
          MR_Box next_value_of_STATE_VARIABLE_A_0_17;
          MR_Box next_value_of_STATE_VARIABLE_B_0_19;
          MR_Box next_value_of_STATE_VARIABLE_C_0_21;

          succeeded = func_0(((MR_Box) P_9), K_32, V_33, STATE_VARIABLE_A_0_17, &STATE_VARIABLE_A_23_23, STATE_VARIABLE_B_0_19, &STATE_VARIABLE_B_24_24, STATE_VARIABLE_C_0_21, &STATE_VARIABLE_C_25_25);
          if (succeeded)
          {
            /* direct tailcall eliminated */
            next_value_of_List_10 = KVs_16;
            next_value_of_STATE_VARIABLE_A_0_17 = STATE_VARIABLE_A_23_23;
            next_value_of_STATE_VARIABLE_B_0_19 = STATE_VARIABLE_B_24_24;
            next_value_of_STATE_VARIABLE_C_0_21 = STATE_VARIABLE_C_25_25;
            List_10 = next_value_of_List_10;
            STATE_VARIABLE_A_0_17 = next_value_of_STATE_VARIABLE_A_0_17;
            STATE_VARIABLE_B_0_19 = next_value_of_STATE_VARIABLE_B_0_19;
            STATE_VARIABLE_C_0_21 = next_value_of_STATE_VARIABLE_C_0_21;
            continue;
          }
        }
        break;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__hash_table__fold3_8_p_2(
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word P_9,
  MR_Word HT_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_ArrayPtr Var_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT_10, (MR_Integer) 3)));
    MR_Integer V_20_50;
    MR_Integer V_21_51;
    MR_Integer Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_10, (MR_Integer) 0)));
    MR_Integer Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_10, (MR_Integer) 1)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT_10, (MR_Integer) 2)));
    MR_Word TypeInfo_41_57;
    MR_Word TypeInfo_41_58;

{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_21 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 V_20_50  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_21 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 V_21_51  = Max;
}
    mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_52_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(TypeInfo_for_K_28, TypeInfo_for_V_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, P_9, V_20_50, V_21_51, Var_21, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_52_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Word Var_36,
  MR_Word Var_37,
  MR_Word Var_38,
  MR_Word Var_39,
  MR_Integer V_12_12,
  MR_Integer V_13_13,
  MR_ArrayPtr V_14_14,
  MR_Box V_18_15,
  MR_Box * V_19_16,
  MR_Box V_20_17,
  MR_Box * V_21_18,
  MR_Box V_22_19,
  MR_Box * V_23_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (V_13_13 < V_12_12);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      *V_23_20 = V_22_19;
      *V_21_18 = V_20_17;
      *V_19_16 = V_18_15;
    }
    else
    {
      MR_Word V_24_21;
      MR_Box V_25_22;
      MR_Box V_26_23;
      MR_Box V_27_24;
      MR_Integer V_28_25;
      MR_Word TypeInfo_for_T1_1_43;
      MR_Box conv0_Item;
      MR_Integer next_value_of_V_12_12;
      MR_Box next_value_of_V_18_15;
      MR_Box next_value_of_V_20_17;
      MR_Box next_value_of_V_22_19;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_52_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) V_14_14 , Array);
	Index =  V_12_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      V_24_21 = ((MR_Word) conv0_Item);
}
      mercury__hash_table__fold3_p_8_p_2(Var_34, Var_35, Var_36, Var_37, Var_38, Var_39, V_24_21, V_18_15, &V_25_22, V_20_17, &V_26_23, V_22_19, &V_27_24);
      V_28_25 = (V_12_12 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_V_12_12 = V_28_25;
      next_value_of_V_18_15 = V_25_22;
      next_value_of_V_20_17 = V_26_23;
      next_value_of_V_22_19 = V_27_24;
      V_12_12 = next_value_of_V_12_12;
      V_18_15 = next_value_of_V_18_15;
      V_20_17 = next_value_of_V_20_17;
      V_22_19 = next_value_of_V_22_19;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__hash_table__fold3_p_8_p_2(
  MR_Word TypeInfo_for_K_34,
  MR_Word TypeInfo_for_V_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word P_9,
  MR_Word List_10,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    switch (MR_tag((MR_Word) List_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_A_18 = STATE_VARIABLE_A_0_17;
          *STATE_VARIABLE_B_20 = STATE_VARIABLE_B_0_19;
          *STATE_VARIABLE_C_22 = STATE_VARIABLE_C_0_21;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_14 = (MR_hl_field(MR_mktag(1), List_10, (MR_Integer) 0));
          MR_Box V_15 = (MR_hl_field(MR_mktag(1), List_10, (MR_Integer) 1));
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1)));

          func_1(((MR_Box) P_9), K_14, V_15, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), List_10, (MR_Integer) 2)));
          MR_Box STATE_VARIABLE_A_23_23;
          MR_Box STATE_VARIABLE_B_24_24;
          MR_Box STATE_VARIABLE_C_25_25;
          MR_Box K_32 = (MR_hl_field(MR_mktag(2), List_10, (MR_Integer) 0));
          MR_Box V_33 = (MR_hl_field(MR_mktag(2), List_10, (MR_Integer) 1));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1)));
          MR_Word next_value_of_List_10;
          MR_Box next_value_of_STATE_VARIABLE_A_0_17;
          MR_Box next_value_of_STATE_VARIABLE_B_0_19;
          MR_Box next_value_of_STATE_VARIABLE_C_0_21;

          func_0(((MR_Box) P_9), K_32, V_33, STATE_VARIABLE_A_0_17, &STATE_VARIABLE_A_23_23, STATE_VARIABLE_B_0_19, &STATE_VARIABLE_B_24_24, STATE_VARIABLE_C_0_21, &STATE_VARIABLE_C_25_25);
          /* direct tailcall eliminated */
          next_value_of_List_10 = KVs_16;
          next_value_of_STATE_VARIABLE_A_0_17 = STATE_VARIABLE_A_23_23;
          next_value_of_STATE_VARIABLE_B_0_19 = STATE_VARIABLE_B_24_24;
          next_value_of_STATE_VARIABLE_C_0_21 = STATE_VARIABLE_C_25_25;
          List_10 = next_value_of_List_10;
          STATE_VARIABLE_A_0_17 = next_value_of_STATE_VARIABLE_A_0_17;
          STATE_VARIABLE_B_0_19 = next_value_of_STATE_VARIABLE_B_0_19;
          STATE_VARIABLE_C_0_21 = next_value_of_STATE_VARIABLE_C_0_21;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__hash_table__fold3_8_p_1(
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word P_9,
  MR_Word HT_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_ArrayPtr Var_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT_10, (MR_Integer) 3)));
    MR_Integer V_20_50;
    MR_Integer V_21_51;
    MR_Integer Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_10, (MR_Integer) 0)));
    MR_Integer Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_10, (MR_Integer) 1)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT_10, (MR_Integer) 2)));
    MR_Word TypeInfo_41_57;
    MR_Word TypeInfo_41_58;

{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_21 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 V_20_50  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_21 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 V_21_51  = Max;
}
    mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(TypeInfo_for_K_28, TypeInfo_for_V_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, P_9, V_20_50, V_21_51, Var_21, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Word Var_36,
  MR_Word Var_37,
  MR_Word Var_38,
  MR_Word Var_39,
  MR_Integer V_12_12,
  MR_Integer V_13_13,
  MR_ArrayPtr V_14_14,
  MR_Box V_18_15,
  MR_Box * V_19_16,
  MR_Box V_20_17,
  MR_Box * V_21_18,
  MR_Box V_22_19,
  MR_Box * V_23_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (V_13_13 < V_12_12);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      *V_23_20 = V_22_19;
      *V_21_18 = V_20_17;
      *V_19_16 = V_18_15;
    }
    else
    {
      MR_Word V_24_21;
      MR_Box V_25_22;
      MR_Box V_26_23;
      MR_Box V_27_24;
      MR_Integer V_28_25;
      MR_Word TypeInfo_for_T1_1_43;
      MR_Box conv0_Item;
      MR_Integer next_value_of_V_12_12;
      MR_Box next_value_of_V_18_15;
      MR_Box next_value_of_V_20_17;
      MR_Box next_value_of_V_22_19;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) V_14_14 , Array);
	Index =  V_12_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      V_24_21 = ((MR_Word) conv0_Item);
}
      mercury__hash_table__fold3_p_8_p_1(Var_34, Var_35, Var_36, Var_37, Var_38, Var_39, V_24_21, V_18_15, &V_25_22, V_20_17, &V_26_23, V_22_19, &V_27_24);
      V_28_25 = (V_12_12 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_V_12_12 = V_28_25;
      next_value_of_V_18_15 = V_25_22;
      next_value_of_V_20_17 = V_26_23;
      next_value_of_V_22_19 = V_27_24;
      V_12_12 = next_value_of_V_12_12;
      V_18_15 = next_value_of_V_18_15;
      V_20_17 = next_value_of_V_20_17;
      V_22_19 = next_value_of_V_22_19;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__hash_table__fold3_p_8_p_1(
  MR_Word TypeInfo_for_K_34,
  MR_Word TypeInfo_for_V_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word P_9,
  MR_Word List_10,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    switch (MR_tag((MR_Word) List_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_A_18 = STATE_VARIABLE_A_0_17;
          *STATE_VARIABLE_B_20 = STATE_VARIABLE_B_0_19;
          *STATE_VARIABLE_C_22 = STATE_VARIABLE_C_0_21;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_14 = (MR_hl_field(MR_mktag(1), List_10, (MR_Integer) 0));
          MR_Box V_15 = (MR_hl_field(MR_mktag(1), List_10, (MR_Integer) 1));
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1)));

          func_1(((MR_Box) P_9), K_14, V_15, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), List_10, (MR_Integer) 2)));
          MR_Box STATE_VARIABLE_A_23_23;
          MR_Box STATE_VARIABLE_B_24_24;
          MR_Box STATE_VARIABLE_C_25_25;
          MR_Box K_32 = (MR_hl_field(MR_mktag(2), List_10, (MR_Integer) 0));
          MR_Box V_33 = (MR_hl_field(MR_mktag(2), List_10, (MR_Integer) 1));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1)));
          MR_Word next_value_of_List_10;
          MR_Box next_value_of_STATE_VARIABLE_A_0_17;
          MR_Box next_value_of_STATE_VARIABLE_B_0_19;
          MR_Box next_value_of_STATE_VARIABLE_C_0_21;

          func_0(((MR_Box) P_9), K_32, V_33, STATE_VARIABLE_A_0_17, &STATE_VARIABLE_A_23_23, STATE_VARIABLE_B_0_19, &STATE_VARIABLE_B_24_24, STATE_VARIABLE_C_0_21, &STATE_VARIABLE_C_25_25);
          /* direct tailcall eliminated */
          next_value_of_List_10 = KVs_16;
          next_value_of_STATE_VARIABLE_A_0_17 = STATE_VARIABLE_A_23_23;
          next_value_of_STATE_VARIABLE_B_0_19 = STATE_VARIABLE_B_24_24;
          next_value_of_STATE_VARIABLE_C_0_21 = STATE_VARIABLE_C_25_25;
          List_10 = next_value_of_List_10;
          STATE_VARIABLE_A_0_17 = next_value_of_STATE_VARIABLE_A_0_17;
          STATE_VARIABLE_B_0_19 = next_value_of_STATE_VARIABLE_B_0_19;
          STATE_VARIABLE_C_0_21 = next_value_of_STATE_VARIABLE_C_0_21;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__hash_table__fold3_8_p_0(
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word TypeInfo_for_C_32,
  MR_Word P_9,
  MR_Word HT_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_ArrayPtr Var_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT_10, (MR_Integer) 3)));
    MR_Integer V_20_50;
    MR_Integer V_21_51;
    MR_Integer Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_10, (MR_Integer) 0)));
    MR_Integer Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_10, (MR_Integer) 1)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT_10, (MR_Integer) 2)));
    MR_Word TypeInfo_41_57;
    MR_Word TypeInfo_41_58;

{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_21 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 V_20_50  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_21 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 V_21_51  = Max;
}
    mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_50_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(TypeInfo_for_K_28, TypeInfo_for_V_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, P_9, V_20_50, V_21_51, Var_21, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_50_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Word Var_36,
  MR_Word Var_37,
  MR_Word Var_38,
  MR_Word Var_39,
  MR_Integer V_12_12,
  MR_Integer V_13_13,
  MR_ArrayPtr V_14_14,
  MR_Box V_18_15,
  MR_Box * V_19_16,
  MR_Box V_20_17,
  MR_Box * V_21_18,
  MR_Box V_22_19,
  MR_Box * V_23_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (V_13_13 < V_12_12);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      *V_23_20 = V_22_19;
      *V_21_18 = V_20_17;
      *V_19_16 = V_18_15;
    }
    else
    {
      MR_Word V_24_21;
      MR_Box V_25_22;
      MR_Box V_26_23;
      MR_Box V_27_24;
      MR_Integer V_28_25;
      MR_Word TypeInfo_for_T1_1_43;
      MR_Box conv0_Item;
      MR_Integer next_value_of_V_12_12;
      MR_Box next_value_of_V_18_15;
      MR_Box next_value_of_V_20_17;
      MR_Box next_value_of_V_22_19;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_50_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) V_14_14 , Array);
	Index =  V_12_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      V_24_21 = ((MR_Word) conv0_Item);
}
      mercury__hash_table__fold3_p_8_p_0(Var_34, Var_35, Var_36, Var_37, Var_38, Var_39, V_24_21, V_18_15, &V_25_22, V_20_17, &V_26_23, V_22_19, &V_27_24);
      V_28_25 = (V_12_12 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_V_12_12 = V_28_25;
      next_value_of_V_18_15 = V_25_22;
      next_value_of_V_20_17 = V_26_23;
      next_value_of_V_22_19 = V_27_24;
      V_12_12 = next_value_of_V_12_12;
      V_18_15 = next_value_of_V_18_15;
      V_20_17 = next_value_of_V_20_17;
      V_22_19 = next_value_of_V_22_19;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__hash_table__fold3_p_8_p_0(
  MR_Word TypeInfo_for_K_34,
  MR_Word TypeInfo_for_V_35,
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word P_9,
  MR_Word List_10,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    switch (MR_tag((MR_Word) List_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_A_18 = STATE_VARIABLE_A_0_17;
          *STATE_VARIABLE_B_20 = STATE_VARIABLE_B_0_19;
          *STATE_VARIABLE_C_22 = STATE_VARIABLE_C_0_21;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_14 = (MR_hl_field(MR_mktag(1), List_10, (MR_Integer) 0));
          MR_Box V_15 = (MR_hl_field(MR_mktag(1), List_10, (MR_Integer) 1));
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1)));

          func_1(((MR_Box) P_9), K_14, V_15, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word KVs_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), List_10, (MR_Integer) 2)));
          MR_Box STATE_VARIABLE_A_23_23;
          MR_Box STATE_VARIABLE_B_24_24;
          MR_Box STATE_VARIABLE_C_25_25;
          MR_Box K_32 = (MR_hl_field(MR_mktag(2), List_10, (MR_Integer) 0));
          MR_Box V_33 = (MR_hl_field(MR_mktag(2), List_10, (MR_Integer) 1));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1)));
          MR_Word next_value_of_List_10;
          MR_Box next_value_of_STATE_VARIABLE_A_0_17;
          MR_Box next_value_of_STATE_VARIABLE_B_0_19;
          MR_Box next_value_of_STATE_VARIABLE_C_0_21;

          func_0(((MR_Box) P_9), K_32, V_33, STATE_VARIABLE_A_0_17, &STATE_VARIABLE_A_23_23, STATE_VARIABLE_B_0_19, &STATE_VARIABLE_B_24_24, STATE_VARIABLE_C_0_21, &STATE_VARIABLE_C_25_25);
          /* direct tailcall eliminated */
          next_value_of_List_10 = KVs_16;
          next_value_of_STATE_VARIABLE_A_0_17 = STATE_VARIABLE_A_23_23;
          next_value_of_STATE_VARIABLE_B_0_19 = STATE_VARIABLE_B_24_24;
          next_value_of_STATE_VARIABLE_C_0_21 = STATE_VARIABLE_C_25_25;
          List_10 = next_value_of_List_10;
          STATE_VARIABLE_A_0_17 = next_value_of_STATE_VARIABLE_A_0_17;
          STATE_VARIABLE_B_0_19 = next_value_of_STATE_VARIABLE_B_0_19;
          STATE_VARIABLE_C_0_21 = next_value_of_STATE_VARIABLE_C_0_21;
          continue;
        }
        break;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold2_6_p_5(
  MR_Word TypeInfo_for_K_22,
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word P_7,
  MR_Word HT_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_bool succeeded;
    MR_ArrayPtr Var_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT_8, (MR_Integer) 3)));
    MR_Integer V_15_39;
    MR_Integer V_16_40;
    MR_Integer Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_8, (MR_Integer) 0)));
    MR_Integer Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_8, (MR_Integer) 1)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT_8, (MR_Integer) 2)));
    MR_Word TypeInfo_32_46;
    MR_Word TypeInfo_32_47;

{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_16 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 V_15_39  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_16 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 V_16_40  = Max;
}
    succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_52_49_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(TypeInfo_for_K_22, TypeInfo_for_V_23, TypeInfo_for_A_24, TypeInfo_for_B_25, P_7, V_15_39, V_16_40, Var_16, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_52_49_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Integer V_10_10,
  MR_Integer V_11_11,
  MR_ArrayPtr V_12_12,
  MR_Box V_15_13,
  MR_Box * V_16_14,
  MR_Box V_17_15,
  MR_Box * V_18_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (V_11_11 < V_10_10);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      *V_18_16 = V_17_15;
      *V_16_14 = V_15_13;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word V_19_17;
      MR_Box V_20_18;
      MR_Box V_21_19;
      MR_Integer V_22_20;
      MR_Integer V_25_21;
      MR_Word TypeInfo_for_T1_1_36;
      MR_Box conv0_Item;
      MR_Integer next_value_of_V_10_10;
      MR_Box next_value_of_V_15_13;
      MR_Box next_value_of_V_17_15;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_52_49_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) V_12_12 , Array);
	Index =  V_10_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      V_19_17 = ((MR_Word) conv0_Item);
}
      succeeded = mercury__hash_table__fold2_p_6_p_5(Var_28, Var_29, Var_30, Var_31, Var_32, V_19_17, V_15_13, &V_20_18, V_17_15, &V_21_19);
      if (succeeded)
      {
        V_25_21 = (MR_Integer) 1;
        V_22_20 = (V_10_10 + V_25_21);
        /* direct tailcall eliminated */
        next_value_of_V_10_10 = V_22_20;
        next_value_of_V_15_13 = V_20_18;
        next_value_of_V_17_15 = V_21_19;
        V_10_10 = next_value_of_V_10_10;
        V_15_13 = next_value_of_V_15_13;
        V_17_15 = next_value_of_V_17_15;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold2_p_6_p_5(
  MR_Word TypeInfo_for_K_26,
  MR_Word TypeInfo_for_V_27,
  MR_Word TypeInfo_for_A_28,
  MR_Word TypeInfo_for_B_29,
  MR_Word P_7,
  MR_Word List_8,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    switch (MR_tag((MR_Word) List_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_A_15 = STATE_VARIABLE_A_0_14;
          *STATE_VARIABLE_B_17 = STATE_VARIABLE_B_0_16;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_11 = (MR_hl_field(MR_mktag(1), List_8, (MR_Integer) 0));
          MR_Box V_12 = (MR_hl_field(MR_mktag(1), List_8, (MR_Integer) 1));
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1)));

          succeeded = func_1(((MR_Box) P_7), K_11, V_12, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word KVs_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), List_8, (MR_Integer) 2)));
          MR_Box STATE_VARIABLE_A_18_18;
          MR_Box STATE_VARIABLE_B_19_19;
          MR_Box K_24 = (MR_hl_field(MR_mktag(2), List_8, (MR_Integer) 0));
          MR_Box V_25 = (MR_hl_field(MR_mktag(2), List_8, (MR_Integer) 1));
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1)));
          MR_Word next_value_of_List_8;
          MR_Box next_value_of_STATE_VARIABLE_A_0_14;
          MR_Box next_value_of_STATE_VARIABLE_B_0_16;

          succeeded = func_0(((MR_Box) P_7), K_24, V_25, STATE_VARIABLE_A_0_14, &STATE_VARIABLE_A_18_18, STATE_VARIABLE_B_0_16, &STATE_VARIABLE_B_19_19);
          if (succeeded)
          {
            /* direct tailcall eliminated */
            next_value_of_List_8 = KVs_13;
            next_value_of_STATE_VARIABLE_A_0_14 = STATE_VARIABLE_A_18_18;
            next_value_of_STATE_VARIABLE_B_0_16 = STATE_VARIABLE_B_19_19;
            List_8 = next_value_of_List_8;
            STATE_VARIABLE_A_0_14 = next_value_of_STATE_VARIABLE_A_0_14;
            STATE_VARIABLE_B_0_16 = next_value_of_STATE_VARIABLE_B_0_16;
            continue;
          }
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold2_6_p_4(
  MR_Word TypeInfo_for_K_22,
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word P_7,
  MR_Word HT_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_bool succeeded;
    MR_ArrayPtr Var_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT_8, (MR_Integer) 3)));
    MR_Integer V_15_39;
    MR_Integer V_16_40;
    MR_Integer Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_8, (MR_Integer) 0)));
    MR_Integer Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_8, (MR_Integer) 1)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT_8, (MR_Integer) 2)));
    MR_Word TypeInfo_32_46;
    MR_Word TypeInfo_32_47;

{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_16 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 V_15_39  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_16 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 V_16_40  = Max;
}
    succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(TypeInfo_for_K_22, TypeInfo_for_V_23, TypeInfo_for_A_24, TypeInfo_for_B_25, P_7, V_15_39, V_16_40, Var_16, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Integer V_10_10,
  MR_Integer V_11_11,
  MR_ArrayPtr V_12_12,
  MR_Box V_15_13,
  MR_Box * V_16_14,
  MR_Box V_17_15,
  MR_Box * V_18_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (V_11_11 < V_10_10);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      *V_18_16 = V_17_15;
      *V_16_14 = V_15_13;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word V_19_17;
      MR_Box V_20_18;
      MR_Box V_21_19;
      MR_Integer V_22_20;
      MR_Integer V_25_21;
      MR_Word TypeInfo_for_T1_1_36;
      MR_Box conv0_Item;
      MR_Integer next_value_of_V_10_10;
      MR_Box next_value_of_V_15_13;
      MR_Box next_value_of_V_17_15;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) V_12_12 , Array);
	Index =  V_10_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      V_19_17 = ((MR_Word) conv0_Item);
}
      succeeded = mercury__hash_table__fold2_p_6_p_4(Var_28, Var_29, Var_30, Var_31, Var_32, V_19_17, V_15_13, &V_20_18, V_17_15, &V_21_19);
      if (succeeded)
      {
        V_25_21 = (MR_Integer) 1;
        V_22_20 = (V_10_10 + V_25_21);
        /* direct tailcall eliminated */
        next_value_of_V_10_10 = V_22_20;
        next_value_of_V_15_13 = V_20_18;
        next_value_of_V_17_15 = V_21_19;
        V_10_10 = next_value_of_V_10_10;
        V_15_13 = next_value_of_V_15_13;
        V_17_15 = next_value_of_V_17_15;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold2_p_6_p_4(
  MR_Word TypeInfo_for_K_26,
  MR_Word TypeInfo_for_V_27,
  MR_Word TypeInfo_for_A_28,
  MR_Word TypeInfo_for_B_29,
  MR_Word P_7,
  MR_Word List_8,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    switch (MR_tag((MR_Word) List_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_A_15 = STATE_VARIABLE_A_0_14;
          *STATE_VARIABLE_B_17 = STATE_VARIABLE_B_0_16;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_11 = (MR_hl_field(MR_mktag(1), List_8, (MR_Integer) 0));
          MR_Box V_12 = (MR_hl_field(MR_mktag(1), List_8, (MR_Integer) 1));
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1)));

          succeeded = func_1(((MR_Box) P_7), K_11, V_12, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word KVs_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), List_8, (MR_Integer) 2)));
          MR_Box STATE_VARIABLE_A_18_18;
          MR_Box STATE_VARIABLE_B_19_19;
          MR_Box K_24 = (MR_hl_field(MR_mktag(2), List_8, (MR_Integer) 0));
          MR_Box V_25 = (MR_hl_field(MR_mktag(2), List_8, (MR_Integer) 1));
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1)));
          MR_Word next_value_of_List_8;
          MR_Box next_value_of_STATE_VARIABLE_A_0_14;
          MR_Box next_value_of_STATE_VARIABLE_B_0_16;

          succeeded = func_0(((MR_Box) P_7), K_24, V_25, STATE_VARIABLE_A_0_14, &STATE_VARIABLE_A_18_18, STATE_VARIABLE_B_0_16, &STATE_VARIABLE_B_19_19);
          if (succeeded)
          {
            /* direct tailcall eliminated */
            next_value_of_List_8 = KVs_13;
            next_value_of_STATE_VARIABLE_A_0_14 = STATE_VARIABLE_A_18_18;
            next_value_of_STATE_VARIABLE_B_0_16 = STATE_VARIABLE_B_19_19;
            List_8 = next_value_of_List_8;
            STATE_VARIABLE_A_0_14 = next_value_of_STATE_VARIABLE_A_0_14;
            STATE_VARIABLE_B_0_16 = next_value_of_STATE_VARIABLE_B_0_16;
            continue;
          }
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold2_6_p_3(
  MR_Word TypeInfo_for_K_22,
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word P_7,
  MR_Word HT_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_bool succeeded;
    MR_ArrayPtr Var_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT_8, (MR_Integer) 3)));
    MR_Integer V_15_39;
    MR_Integer V_16_40;
    MR_Integer Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_8, (MR_Integer) 0)));
    MR_Integer Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_8, (MR_Integer) 1)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT_8, (MR_Integer) 2)));
    MR_Word TypeInfo_32_46;
    MR_Word TypeInfo_32_47;

{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_16 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 V_15_39  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_16 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 V_16_40  = Max;
}
    succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_57_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(TypeInfo_for_K_22, TypeInfo_for_V_23, TypeInfo_for_A_24, TypeInfo_for_B_25, P_7, V_15_39, V_16_40, Var_16, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_57_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Integer V_10_10,
  MR_Integer V_11_11,
  MR_ArrayPtr V_12_12,
  MR_Box V_15_13,
  MR_Box * V_16_14,
  MR_Box V_17_15,
  MR_Box * V_18_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (V_11_11 < V_10_10);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      *V_18_16 = V_17_15;
      *V_16_14 = V_15_13;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word V_19_17;
      MR_Box V_20_18;
      MR_Box V_21_19;
      MR_Integer V_22_20;
      MR_Integer V_25_21;
      MR_Word TypeInfo_for_T1_1_36;
      MR_Box conv0_Item;
      MR_Integer next_value_of_V_10_10;
      MR_Box next_value_of_V_15_13;
      MR_Box next_value_of_V_17_15;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_57_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) V_12_12 , Array);
	Index =  V_10_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      V_19_17 = ((MR_Word) conv0_Item);
}
      succeeded = mercury__hash_table__fold2_p_6_p_3(Var_28, Var_29, Var_30, Var_31, Var_32, V_19_17, V_15_13, &V_20_18, V_17_15, &V_21_19);
      if (succeeded)
      {
        V_25_21 = (MR_Integer) 1;
        V_22_20 = (V_10_10 + V_25_21);
        /* direct tailcall eliminated */
        next_value_of_V_10_10 = V_22_20;
        next_value_of_V_15_13 = V_20_18;
        next_value_of_V_17_15 = V_21_19;
        V_10_10 = next_value_of_V_10_10;
        V_15_13 = next_value_of_V_15_13;
        V_17_15 = next_value_of_V_17_15;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold2_p_6_p_3(
  MR_Word TypeInfo_for_K_26,
  MR_Word TypeInfo_for_V_27,
  MR_Word TypeInfo_for_A_28,
  MR_Word TypeInfo_for_B_29,
  MR_Word P_7,
  MR_Word List_8,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    switch (MR_tag((MR_Word) List_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_A_15 = STATE_VARIABLE_A_0_14;
          *STATE_VARIABLE_B_17 = STATE_VARIABLE_B_0_16;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_11 = (MR_hl_field(MR_mktag(1), List_8, (MR_Integer) 0));
          MR_Box V_12 = (MR_hl_field(MR_mktag(1), List_8, (MR_Integer) 1));
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1)));

          succeeded = func_1(((MR_Box) P_7), K_11, V_12, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word KVs_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), List_8, (MR_Integer) 2)));
          MR_Box STATE_VARIABLE_A_18_18;
          MR_Box STATE_VARIABLE_B_19_19;
          MR_Box K_24 = (MR_hl_field(MR_mktag(2), List_8, (MR_Integer) 0));
          MR_Box V_25 = (MR_hl_field(MR_mktag(2), List_8, (MR_Integer) 1));
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1)));
          MR_Word next_value_of_List_8;
          MR_Box next_value_of_STATE_VARIABLE_A_0_14;
          MR_Box next_value_of_STATE_VARIABLE_B_0_16;

          succeeded = func_0(((MR_Box) P_7), K_24, V_25, STATE_VARIABLE_A_0_14, &STATE_VARIABLE_A_18_18, STATE_VARIABLE_B_0_16, &STATE_VARIABLE_B_19_19);
          if (succeeded)
          {
            /* direct tailcall eliminated */
            next_value_of_List_8 = KVs_13;
            next_value_of_STATE_VARIABLE_A_0_14 = STATE_VARIABLE_A_18_18;
            next_value_of_STATE_VARIABLE_B_0_16 = STATE_VARIABLE_B_19_19;
            List_8 = next_value_of_List_8;
            STATE_VARIABLE_A_0_14 = next_value_of_STATE_VARIABLE_A_0_14;
            STATE_VARIABLE_B_0_16 = next_value_of_STATE_VARIABLE_B_0_16;
            continue;
          }
        }
        break;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__hash_table__fold2_6_p_2(
  MR_Word TypeInfo_for_K_22,
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word P_7,
  MR_Word HT_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_ArrayPtr Var_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT_8, (MR_Integer) 3)));
    MR_Integer V_15_39;
    MR_Integer V_16_40;
    MR_Integer Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_8, (MR_Integer) 0)));
    MR_Integer Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_8, (MR_Integer) 1)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT_8, (MR_Integer) 2)));
    MR_Word TypeInfo_32_46;
    MR_Word TypeInfo_32_47;

{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_16 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 V_15_39  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_16 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 V_16_40  = Max;
}
    mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(TypeInfo_for_K_22, TypeInfo_for_V_23, TypeInfo_for_A_24, TypeInfo_for_B_25, P_7, V_15_39, V_16_40, Var_16, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Integer V_10_10,
  MR_Integer V_11_11,
  MR_ArrayPtr V_12_12,
  MR_Box V_15_13,
  MR_Box * V_16_14,
  MR_Box V_17_15,
  MR_Box * V_18_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (V_11_11 < V_10_10);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      *V_18_16 = V_17_15;
      *V_16_14 = V_15_13;
    }
    else
    {
      MR_Word V_19_17;
      MR_Box V_20_18;
      MR_Box V_21_19;
      MR_Integer V_22_20;
      MR_Word TypeInfo_for_T1_1_36;
      MR_Box conv0_Item;
      MR_Integer next_value_of_V_10_10;
      MR_Box next_value_of_V_15_13;
      MR_Box next_value_of_V_17_15;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) V_12_12 , Array);
	Index =  V_10_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      V_19_17 = ((MR_Word) conv0_Item);
}
      mercury__hash_table__fold2_p_6_p_2(Var_28, Var_29, Var_30, Var_31, Var_32, V_19_17, V_15_13, &V_20_18, V_17_15, &V_21_19);
      V_22_20 = (V_10_10 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_V_10_10 = V_22_20;
      next_value_of_V_15_13 = V_20_18;
      next_value_of_V_17_15 = V_21_19;
      V_10_10 = next_value_of_V_10_10;
      V_15_13 = next_value_of_V_15_13;
      V_17_15 = next_value_of_V_17_15;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__hash_table__fold2_p_6_p_2(
  MR_Word TypeInfo_for_K_26,
  MR_Word TypeInfo_for_V_27,
  MR_Word TypeInfo_for_A_28,
  MR_Word TypeInfo_for_B_29,
  MR_Word P_7,
  MR_Word List_8,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    switch (MR_tag((MR_Word) List_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_A_15 = STATE_VARIABLE_A_0_14;
          *STATE_VARIABLE_B_17 = STATE_VARIABLE_B_0_16;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_11 = (MR_hl_field(MR_mktag(1), List_8, (MR_Integer) 0));
          MR_Box V_12 = (MR_hl_field(MR_mktag(1), List_8, (MR_Integer) 1));
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1)));

          func_1(((MR_Box) P_7), K_11, V_12, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word KVs_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), List_8, (MR_Integer) 2)));
          MR_Box STATE_VARIABLE_A_18_18;
          MR_Box STATE_VARIABLE_B_19_19;
          MR_Box K_24 = (MR_hl_field(MR_mktag(2), List_8, (MR_Integer) 0));
          MR_Box V_25 = (MR_hl_field(MR_mktag(2), List_8, (MR_Integer) 1));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1)));
          MR_Word next_value_of_List_8;
          MR_Box next_value_of_STATE_VARIABLE_A_0_14;
          MR_Box next_value_of_STATE_VARIABLE_B_0_16;

          func_0(((MR_Box) P_7), K_24, V_25, STATE_VARIABLE_A_0_14, &STATE_VARIABLE_A_18_18, STATE_VARIABLE_B_0_16, &STATE_VARIABLE_B_19_19);
          /* direct tailcall eliminated */
          next_value_of_List_8 = KVs_13;
          next_value_of_STATE_VARIABLE_A_0_14 = STATE_VARIABLE_A_18_18;
          next_value_of_STATE_VARIABLE_B_0_16 = STATE_VARIABLE_B_19_19;
          List_8 = next_value_of_List_8;
          STATE_VARIABLE_A_0_14 = next_value_of_STATE_VARIABLE_A_0_14;
          STATE_VARIABLE_B_0_16 = next_value_of_STATE_VARIABLE_B_0_16;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__hash_table__fold2_6_p_1(
  MR_Word TypeInfo_for_K_22,
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word P_7,
  MR_Word HT_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_ArrayPtr Var_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT_8, (MR_Integer) 3)));
    MR_Integer V_15_39;
    MR_Integer V_16_40;
    MR_Integer Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_8, (MR_Integer) 0)));
    MR_Integer Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_8, (MR_Integer) 1)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT_8, (MR_Integer) 2)));
    MR_Word TypeInfo_32_46;
    MR_Word TypeInfo_32_47;

{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_16 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 V_15_39  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_16 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 V_16_40  = Max;
}
    mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(TypeInfo_for_K_22, TypeInfo_for_V_23, TypeInfo_for_A_24, TypeInfo_for_B_25, P_7, V_15_39, V_16_40, Var_16, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Integer V_10_10,
  MR_Integer V_11_11,
  MR_ArrayPtr V_12_12,
  MR_Box V_15_13,
  MR_Box * V_16_14,
  MR_Box V_17_15,
  MR_Box * V_18_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (V_11_11 < V_10_10);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      *V_18_16 = V_17_15;
      *V_16_14 = V_15_13;
    }
    else
    {
      MR_Word V_19_17;
      MR_Box V_20_18;
      MR_Box V_21_19;
      MR_Integer V_22_20;
      MR_Word TypeInfo_for_T1_1_36;
      MR_Box conv0_Item;
      MR_Integer next_value_of_V_10_10;
      MR_Box next_value_of_V_15_13;
      MR_Box next_value_of_V_17_15;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) V_12_12 , Array);
	Index =  V_10_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      V_19_17 = ((MR_Word) conv0_Item);
}
      mercury__hash_table__fold2_p_6_p_1(Var_28, Var_29, Var_30, Var_31, Var_32, V_19_17, V_15_13, &V_20_18, V_17_15, &V_21_19);
      V_22_20 = (V_10_10 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_V_10_10 = V_22_20;
      next_value_of_V_15_13 = V_20_18;
      next_value_of_V_17_15 = V_21_19;
      V_10_10 = next_value_of_V_10_10;
      V_15_13 = next_value_of_V_15_13;
      V_17_15 = next_value_of_V_17_15;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__hash_table__fold2_p_6_p_1(
  MR_Word TypeInfo_for_K_26,
  MR_Word TypeInfo_for_V_27,
  MR_Word TypeInfo_for_A_28,
  MR_Word TypeInfo_for_B_29,
  MR_Word P_7,
  MR_Word List_8,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    switch (MR_tag((MR_Word) List_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_A_15 = STATE_VARIABLE_A_0_14;
          *STATE_VARIABLE_B_17 = STATE_VARIABLE_B_0_16;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_11 = (MR_hl_field(MR_mktag(1), List_8, (MR_Integer) 0));
          MR_Box V_12 = (MR_hl_field(MR_mktag(1), List_8, (MR_Integer) 1));
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1)));

          func_1(((MR_Box) P_7), K_11, V_12, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word KVs_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), List_8, (MR_Integer) 2)));
          MR_Box STATE_VARIABLE_A_18_18;
          MR_Box STATE_VARIABLE_B_19_19;
          MR_Box K_24 = (MR_hl_field(MR_mktag(2), List_8, (MR_Integer) 0));
          MR_Box V_25 = (MR_hl_field(MR_mktag(2), List_8, (MR_Integer) 1));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1)));
          MR_Word next_value_of_List_8;
          MR_Box next_value_of_STATE_VARIABLE_A_0_14;
          MR_Box next_value_of_STATE_VARIABLE_B_0_16;

          func_0(((MR_Box) P_7), K_24, V_25, STATE_VARIABLE_A_0_14, &STATE_VARIABLE_A_18_18, STATE_VARIABLE_B_0_16, &STATE_VARIABLE_B_19_19);
          /* direct tailcall eliminated */
          next_value_of_List_8 = KVs_13;
          next_value_of_STATE_VARIABLE_A_0_14 = STATE_VARIABLE_A_18_18;
          next_value_of_STATE_VARIABLE_B_0_16 = STATE_VARIABLE_B_19_19;
          List_8 = next_value_of_List_8;
          STATE_VARIABLE_A_0_14 = next_value_of_STATE_VARIABLE_A_0_14;
          STATE_VARIABLE_B_0_16 = next_value_of_STATE_VARIABLE_B_0_16;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__hash_table__fold2_6_p_0(
  MR_Word TypeInfo_for_K_22,
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word P_7,
  MR_Word HT_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_ArrayPtr Var_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT_8, (MR_Integer) 3)));
    MR_Integer V_15_39;
    MR_Integer V_16_40;
    MR_Integer Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_8, (MR_Integer) 0)));
    MR_Integer Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_8, (MR_Integer) 1)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT_8, (MR_Integer) 2)));
    MR_Word TypeInfo_32_46;
    MR_Word TypeInfo_32_47;

{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_16 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 V_15_39  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_16 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 V_16_40  = Max;
}
    mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(TypeInfo_for_K_22, TypeInfo_for_V_23, TypeInfo_for_A_24, TypeInfo_for_B_25, P_7, V_15_39, V_16_40, Var_16, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Integer V_10_10,
  MR_Integer V_11_11,
  MR_ArrayPtr V_12_12,
  MR_Box V_15_13,
  MR_Box * V_16_14,
  MR_Box V_17_15,
  MR_Box * V_18_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (V_11_11 < V_10_10);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      *V_18_16 = V_17_15;
      *V_16_14 = V_15_13;
    }
    else
    {
      MR_Word V_19_17;
      MR_Box V_20_18;
      MR_Box V_21_19;
      MR_Integer V_22_20;
      MR_Word TypeInfo_for_T1_1_36;
      MR_Box conv0_Item;
      MR_Integer next_value_of_V_10_10;
      MR_Box next_value_of_V_15_13;
      MR_Box next_value_of_V_17_15;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) V_12_12 , Array);
	Index =  V_10_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      V_19_17 = ((MR_Word) conv0_Item);
}
      mercury__hash_table__fold2_p_6_p_0(Var_28, Var_29, Var_30, Var_31, Var_32, V_19_17, V_15_13, &V_20_18, V_17_15, &V_21_19);
      V_22_20 = (V_10_10 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_V_10_10 = V_22_20;
      next_value_of_V_15_13 = V_20_18;
      next_value_of_V_17_15 = V_21_19;
      V_10_10 = next_value_of_V_10_10;
      V_15_13 = next_value_of_V_15_13;
      V_17_15 = next_value_of_V_17_15;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__hash_table__fold2_p_6_p_0(
  MR_Word TypeInfo_for_K_26,
  MR_Word TypeInfo_for_V_27,
  MR_Word TypeInfo_for_A_28,
  MR_Word TypeInfo_for_B_29,
  MR_Word P_7,
  MR_Word List_8,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    switch (MR_tag((MR_Word) List_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_A_15 = STATE_VARIABLE_A_0_14;
          *STATE_VARIABLE_B_17 = STATE_VARIABLE_B_0_16;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_11 = (MR_hl_field(MR_mktag(1), List_8, (MR_Integer) 0));
          MR_Box V_12 = (MR_hl_field(MR_mktag(1), List_8, (MR_Integer) 1));
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1)));

          func_1(((MR_Box) P_7), K_11, V_12, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word KVs_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), List_8, (MR_Integer) 2)));
          MR_Box STATE_VARIABLE_A_18_18;
          MR_Box STATE_VARIABLE_B_19_19;
          MR_Box K_24 = (MR_hl_field(MR_mktag(2), List_8, (MR_Integer) 0));
          MR_Box V_25 = (MR_hl_field(MR_mktag(2), List_8, (MR_Integer) 1));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1)));
          MR_Word next_value_of_List_8;
          MR_Box next_value_of_STATE_VARIABLE_A_0_14;
          MR_Box next_value_of_STATE_VARIABLE_B_0_16;

          func_0(((MR_Box) P_7), K_24, V_25, STATE_VARIABLE_A_0_14, &STATE_VARIABLE_A_18_18, STATE_VARIABLE_B_0_16, &STATE_VARIABLE_B_19_19);
          /* direct tailcall eliminated */
          next_value_of_List_8 = KVs_13;
          next_value_of_STATE_VARIABLE_A_0_14 = STATE_VARIABLE_A_18_18;
          next_value_of_STATE_VARIABLE_B_0_16 = STATE_VARIABLE_B_19_19;
          List_8 = next_value_of_List_8;
          STATE_VARIABLE_A_0_14 = next_value_of_STATE_VARIABLE_A_0_14;
          STATE_VARIABLE_B_0_16 = next_value_of_STATE_VARIABLE_B_0_16;
          continue;
        }
        break;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold_4_p_5(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word P_5,
  MR_Word HT_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_bool succeeded;
    MR_ArrayPtr Var_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 3)));
    MR_Integer V_10_28;
    MR_Integer V_11_29;
    MR_Integer Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 0)));
    MR_Integer Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 2)));
    MR_Word TypeInfo_23_35;
    MR_Word TypeInfo_23_36;

{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_11 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 V_10_28  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_11 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 V_11_29  = Max;
}
    succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, P_5, Var_11, V_10_28, V_11_29, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr V_8_8,
  MR_Integer V_9_9,
  MR_Integer V_10_10,
  MR_Box V_12_11,
  MR_Box * V_13_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (V_10_10 < V_9_9);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      *V_13_12 = V_12_11;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word V_14_13;
      MR_Box V_15_14;
      MR_Integer V_16_15;
      MR_Integer V_18_16;
      MR_Word TypeInfo_for_T1_1_29;
      MR_Box conv0_Item;
      MR_Integer next_value_of_V_9_9;
      MR_Box next_value_of_V_12_11;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) V_8_8 , Array);
	Index =  V_9_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      V_14_13 = ((MR_Word) conv0_Item);
}
      succeeded = mercury__hash_table__fold_p_4_p_5(Var_22, Var_23, Var_24, Var_25, V_14_13, V_12_11, &V_15_14);
      if (succeeded)
      {
        V_18_16 = (MR_Integer) 1;
        V_16_15 = (V_9_9 + V_18_16);
        /* direct tailcall eliminated */
        next_value_of_V_9_9 = V_16_15;
        next_value_of_V_12_11 = V_15_14;
        V_9_9 = next_value_of_V_9_9;
        V_12_11 = next_value_of_V_12_11;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold_p_4_p_5(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word P_5,
  MR_Word List_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    switch (MR_tag((MR_Word) List_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_A_12 = STATE_VARIABLE_A_0_11;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_8 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 0));
          MR_Box V_9 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 1));
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1)));

          succeeded = func_1(((MR_Box) P_5), K_8, V_9, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 2)));
          MR_Box STATE_VARIABLE_A_13_13;
          MR_Box K_16 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 0));
          MR_Box V_17 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 1));
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1)));
          MR_Word next_value_of_List_6;
          MR_Box next_value_of_STATE_VARIABLE_A_0_11;

          succeeded = func_0(((MR_Box) P_5), K_16, V_17, STATE_VARIABLE_A_0_11, &STATE_VARIABLE_A_13_13);
          if (succeeded)
          {
            /* direct tailcall eliminated */
            next_value_of_List_6 = KVs_10;
            next_value_of_STATE_VARIABLE_A_0_11 = STATE_VARIABLE_A_13_13;
            List_6 = next_value_of_List_6;
            STATE_VARIABLE_A_0_11 = next_value_of_STATE_VARIABLE_A_0_11;
            continue;
          }
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold_4_p_4(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word P_5,
  MR_Word HT_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_bool succeeded;
    MR_ArrayPtr Var_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 3)));
    MR_Integer V_10_28;
    MR_Integer V_11_29;
    MR_Integer Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 0)));
    MR_Integer Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 2)));
    MR_Word TypeInfo_23_35;
    MR_Word TypeInfo_23_36;

{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_11 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 V_10_28  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_11 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 V_11_29  = Max;
}
    succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, P_5, Var_11, V_10_28, V_11_29, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr V_8_8,
  MR_Integer V_9_9,
  MR_Integer V_10_10,
  MR_Box V_12_11,
  MR_Box * V_13_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (V_10_10 < V_9_9);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      *V_13_12 = V_12_11;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word V_14_13;
      MR_Box V_15_14;
      MR_Integer V_16_15;
      MR_Integer V_18_16;
      MR_Word TypeInfo_for_T1_1_29;
      MR_Box conv0_Item;
      MR_Integer next_value_of_V_9_9;
      MR_Box next_value_of_V_12_11;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) V_8_8 , Array);
	Index =  V_9_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      V_14_13 = ((MR_Word) conv0_Item);
}
      succeeded = mercury__hash_table__fold_p_4_p_4(Var_22, Var_23, Var_24, Var_25, V_14_13, V_12_11, &V_15_14);
      if (succeeded)
      {
        V_18_16 = (MR_Integer) 1;
        V_16_15 = (V_9_9 + V_18_16);
        /* direct tailcall eliminated */
        next_value_of_V_9_9 = V_16_15;
        next_value_of_V_12_11 = V_15_14;
        V_9_9 = next_value_of_V_9_9;
        V_12_11 = next_value_of_V_12_11;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold_p_4_p_4(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word P_5,
  MR_Word List_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    switch (MR_tag((MR_Word) List_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_A_12 = STATE_VARIABLE_A_0_11;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_8 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 0));
          MR_Box V_9 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 1));
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1)));

          succeeded = func_1(((MR_Box) P_5), K_8, V_9, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 2)));
          MR_Box STATE_VARIABLE_A_13_13;
          MR_Box K_16 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 0));
          MR_Box V_17 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 1));
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1)));
          MR_Word next_value_of_List_6;
          MR_Box next_value_of_STATE_VARIABLE_A_0_11;

          succeeded = func_0(((MR_Box) P_5), K_16, V_17, STATE_VARIABLE_A_0_11, &STATE_VARIABLE_A_13_13);
          if (succeeded)
          {
            /* direct tailcall eliminated */
            next_value_of_List_6 = KVs_10;
            next_value_of_STATE_VARIABLE_A_0_11 = STATE_VARIABLE_A_13_13;
            List_6 = next_value_of_List_6;
            STATE_VARIABLE_A_0_11 = next_value_of_STATE_VARIABLE_A_0_11;
            continue;
          }
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold_4_p_3(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word P_5,
  MR_Word HT_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_bool succeeded;
    MR_ArrayPtr Var_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 3)));
    MR_Integer V_10_28;
    MR_Integer V_11_29;
    MR_Integer Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 0)));
    MR_Integer Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 2)));
    MR_Word TypeInfo_23_35;
    MR_Word TypeInfo_23_36;

{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_11 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 V_10_28  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_11 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 V_11_29  = Max;
}
    succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, P_5, Var_11, V_10_28, V_11_29, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr V_8_8,
  MR_Integer V_9_9,
  MR_Integer V_10_10,
  MR_Box V_12_11,
  MR_Box * V_13_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (V_10_10 < V_9_9);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      *V_13_12 = V_12_11;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word V_14_13;
      MR_Box V_15_14;
      MR_Integer V_16_15;
      MR_Integer V_18_16;
      MR_Word TypeInfo_for_T1_1_29;
      MR_Box conv0_Item;
      MR_Integer next_value_of_V_9_9;
      MR_Box next_value_of_V_12_11;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) V_8_8 , Array);
	Index =  V_9_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      V_14_13 = ((MR_Word) conv0_Item);
}
      succeeded = mercury__hash_table__fold_p_4_p_3(Var_22, Var_23, Var_24, Var_25, V_14_13, V_12_11, &V_15_14);
      if (succeeded)
      {
        V_18_16 = (MR_Integer) 1;
        V_16_15 = (V_9_9 + V_18_16);
        /* direct tailcall eliminated */
        next_value_of_V_9_9 = V_16_15;
        next_value_of_V_12_11 = V_15_14;
        V_9_9 = next_value_of_V_9_9;
        V_12_11 = next_value_of_V_12_11;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold_p_4_p_3(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word P_5,
  MR_Word List_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    switch (MR_tag((MR_Word) List_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_A_12 = STATE_VARIABLE_A_0_11;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_8 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 0));
          MR_Box V_9 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 1));
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1)));

          succeeded = func_1(((MR_Box) P_5), K_8, V_9, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 2)));
          MR_Box STATE_VARIABLE_A_13_13;
          MR_Box K_16 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 0));
          MR_Box V_17 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 1));
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1)));
          MR_Word next_value_of_List_6;
          MR_Box next_value_of_STATE_VARIABLE_A_0_11;

          succeeded = func_0(((MR_Box) P_5), K_16, V_17, STATE_VARIABLE_A_0_11, &STATE_VARIABLE_A_13_13);
          if (succeeded)
          {
            /* direct tailcall eliminated */
            next_value_of_List_6 = KVs_10;
            next_value_of_STATE_VARIABLE_A_0_11 = STATE_VARIABLE_A_13_13;
            List_6 = next_value_of_List_6;
            STATE_VARIABLE_A_0_11 = next_value_of_STATE_VARIABLE_A_0_11;
            continue;
          }
        }
        break;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__hash_table__fold_4_p_2(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word P_5,
  MR_Word HT_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_ArrayPtr Var_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 3)));
    MR_Integer V_10_28;
    MR_Integer V_11_29;
    MR_Integer Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 0)));
    MR_Integer Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 2)));
    MR_Word TypeInfo_23_35;
    MR_Word TypeInfo_23_36;

{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_11 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 V_10_28  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_11 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 V_11_29  = Max;
}
    mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, P_5, Var_11, V_10_28, V_11_29, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr V_8_8,
  MR_Integer V_9_9,
  MR_Integer V_10_10,
  MR_Box V_12_11,
  MR_Box * V_13_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (V_10_10 < V_9_9);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
      *V_13_12 = V_12_11;
    else
    {
      MR_Word V_14_13;
      MR_Box V_15_14;
      MR_Integer V_16_15;
      MR_Word TypeInfo_for_T1_1_29;
      MR_Box conv0_Item;
      MR_Integer next_value_of_V_9_9;
      MR_Box next_value_of_V_12_11;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) V_8_8 , Array);
	Index =  V_9_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      V_14_13 = ((MR_Word) conv0_Item);
}
      mercury__hash_table__fold_p_4_p_2(Var_22, Var_23, Var_24, Var_25, V_14_13, V_12_11, &V_15_14);
      V_16_15 = (V_9_9 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_V_9_9 = V_16_15;
      next_value_of_V_12_11 = V_15_14;
      V_9_9 = next_value_of_V_9_9;
      V_12_11 = next_value_of_V_12_11;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__hash_table__fold_p_4_p_2(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word P_5,
  MR_Word List_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    switch (MR_tag((MR_Word) List_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_A_12 = STATE_VARIABLE_A_0_11;
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_8 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 0));
          MR_Box V_9 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 1));
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1)));

          func_1(((MR_Box) P_5), K_8, V_9, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 2)));
          MR_Box STATE_VARIABLE_A_13_13;
          MR_Box K_16 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 0));
          MR_Box V_17 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 1));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1)));
          MR_Word next_value_of_List_6;
          MR_Box next_value_of_STATE_VARIABLE_A_0_11;

          func_0(((MR_Box) P_5), K_16, V_17, STATE_VARIABLE_A_0_11, &STATE_VARIABLE_A_13_13);
          /* direct tailcall eliminated */
          next_value_of_List_6 = KVs_10;
          next_value_of_STATE_VARIABLE_A_0_11 = STATE_VARIABLE_A_13_13;
          List_6 = next_value_of_List_6;
          STATE_VARIABLE_A_0_11 = next_value_of_STATE_VARIABLE_A_0_11;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__hash_table__fold_4_p_1(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word P_5,
  MR_Word HT_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_ArrayPtr Var_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 3)));
    MR_Integer V_10_28;
    MR_Integer V_11_29;
    MR_Integer Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 0)));
    MR_Integer Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 2)));
    MR_Word TypeInfo_23_35;
    MR_Word TypeInfo_23_36;

{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_11 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 V_10_28  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_11 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 V_11_29  = Max;
}
    mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, P_5, Var_11, V_10_28, V_11_29, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr V_8_8,
  MR_Integer V_9_9,
  MR_Integer V_10_10,
  MR_Box V_12_11,
  MR_Box * V_13_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (V_10_10 < V_9_9);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
      *V_13_12 = V_12_11;
    else
    {
      MR_Word V_14_13;
      MR_Box V_15_14;
      MR_Integer V_16_15;
      MR_Word TypeInfo_for_T1_1_29;
      MR_Box conv0_Item;
      MR_Integer next_value_of_V_9_9;
      MR_Box next_value_of_V_12_11;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) V_8_8 , Array);
	Index =  V_9_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      V_14_13 = ((MR_Word) conv0_Item);
}
      mercury__hash_table__fold_p_4_p_1(Var_22, Var_23, Var_24, Var_25, V_14_13, V_12_11, &V_15_14);
      V_16_15 = (V_9_9 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_V_9_9 = V_16_15;
      next_value_of_V_12_11 = V_15_14;
      V_9_9 = next_value_of_V_9_9;
      V_12_11 = next_value_of_V_12_11;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__hash_table__fold_p_4_p_1(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word P_5,
  MR_Word List_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    switch (MR_tag((MR_Word) List_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_A_12 = STATE_VARIABLE_A_0_11;
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_8 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 0));
          MR_Box V_9 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 1));
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1)));

          func_1(((MR_Box) P_5), K_8, V_9, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 2)));
          MR_Box STATE_VARIABLE_A_13_13;
          MR_Box K_16 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 0));
          MR_Box V_17 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 1));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1)));
          MR_Word next_value_of_List_6;
          MR_Box next_value_of_STATE_VARIABLE_A_0_11;

          func_0(((MR_Box) P_5), K_16, V_17, STATE_VARIABLE_A_0_11, &STATE_VARIABLE_A_13_13);
          /* direct tailcall eliminated */
          next_value_of_List_6 = KVs_10;
          next_value_of_STATE_VARIABLE_A_0_11 = STATE_VARIABLE_A_13_13;
          List_6 = next_value_of_List_6;
          STATE_VARIABLE_A_0_11 = next_value_of_STATE_VARIABLE_A_0_11;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__hash_table__fold_4_p_0(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word P_5,
  MR_Word HT_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_ArrayPtr Var_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 3)));
    MR_Integer V_10_28;
    MR_Integer V_11_29;
    MR_Integer Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 0)));
    MR_Integer Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 2)));
    MR_Word TypeInfo_23_35;
    MR_Word TypeInfo_23_36;

{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_11 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 V_10_28  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_11 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 V_11_29  = Max;
}
    mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, P_5, Var_11, V_10_28, V_11_29, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr V_8_8,
  MR_Integer V_9_9,
  MR_Integer V_10_10,
  MR_Box V_12_11,
  MR_Box * V_13_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (V_10_10 < V_9_9);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
      *V_13_12 = V_12_11;
    else
    {
      MR_Word V_14_13;
      MR_Box V_15_14;
      MR_Integer V_16_15;
      MR_Word TypeInfo_for_T1_1_29;
      MR_Box conv0_Item;
      MR_Integer next_value_of_V_9_9;
      MR_Box next_value_of_V_12_11;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) V_8_8 , Array);
	Index =  V_9_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      V_14_13 = ((MR_Word) conv0_Item);
}
      mercury__hash_table__fold_p_4_p_0(Var_22, Var_23, Var_24, Var_25, V_14_13, V_12_11, &V_15_14);
      V_16_15 = (V_9_9 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_V_9_9 = V_16_15;
      next_value_of_V_12_11 = V_15_14;
      V_9_9 = next_value_of_V_9_9;
      V_12_11 = next_value_of_V_12_11;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__hash_table__fold_p_4_p_0(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word P_5,
  MR_Word List_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    switch (MR_tag((MR_Word) List_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_A_12 = STATE_VARIABLE_A_0_11;
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_8 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 0));
          MR_Box V_9 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 1));
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1)));

          func_1(((MR_Box) P_5), K_8, V_9, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 2)));
          MR_Box STATE_VARIABLE_A_13_13;
          MR_Box K_16 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 0));
          MR_Box V_17 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 1));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1)));
          MR_Word next_value_of_List_6;
          MR_Box next_value_of_STATE_VARIABLE_A_0_11;

          func_0(((MR_Box) P_5), K_16, V_17, STATE_VARIABLE_A_0_11, &STATE_VARIABLE_A_13_13);
          /* direct tailcall eliminated */
          next_value_of_List_6 = KVs_10;
          next_value_of_STATE_VARIABLE_A_0_11 = STATE_VARIABLE_A_13_13;
          List_6 = next_value_of_List_6;
          STATE_VARIABLE_A_0_11 = next_value_of_STATE_VARIABLE_A_0_11;
          continue;
        }
        break;
    }
    break;
  }
}

MR_Box MR_CALL 
mercury__hash_table__fold_3_f_1(
  MR_Word TypeInfo_for_K_14,
  MR_Word TypeInfo_for_V_15,
  MR_Word TypeInfo_for_T_16,
  MR_Word F_5,
  MR_Word HT_6,
  MR_Box X0_7)
{
  {
    MR_Box X_8;
    MR_ArrayPtr Var_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 3)));
    MR_Integer V_10_26;
    MR_Integer V_11_27;
    MR_Integer Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 0)));
    MR_Integer Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 1)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 2)));
    MR_Word TypeInfo_21_33;
    MR_Word TypeInfo_21_34;

{
#define MR_PROC_LABEL mercury__hash_table__fold_3_f_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_10 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 V_10_26  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold_3_f_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_10 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 V_11_27  = Max;
}
    mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(TypeInfo_for_K_14, TypeInfo_for_V_15, TypeInfo_for_T_16, F_5, Var_10, V_10_26, V_11_27, X0_7, &X_8);
    return X_8;
  }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr V_8_8,
  MR_Integer V_9_9,
  MR_Integer V_10_10,
  MR_Box V_12_11,
  MR_Box * V_13_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (V_10_10 < V_9_9);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
      *V_13_12 = V_12_11;
    else
    {
      MR_Word V_14_13;
      MR_Box V_15_14;
      MR_Integer V_16_15;
      MR_Word TypeInfo_for_T1_1_29;
      MR_Box conv0_Item;
      MR_Integer next_value_of_V_9_9;
      MR_Box next_value_of_V_12_11;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) V_8_8 , Array);
	Index =  V_9_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      V_14_13 = ((MR_Word) conv0_Item);
}
      mercury__hash_table__fold_f_4_p_1(Var_22, Var_23, Var_24, Var_25, V_14_13, V_12_11, &V_15_14);
      V_16_15 = (V_9_9 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_V_9_9 = V_16_15;
      next_value_of_V_12_11 = V_15_14;
      V_9_9 = next_value_of_V_9_9;
      V_12_11 = next_value_of_V_12_11;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__hash_table__fold_f_4_p_1(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word TypeInfo_for_T_17,
  MR_Word F_5,
  MR_Word List_6,
  MR_Box A0_7,
  MR_Box * A_8)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    switch (MR_tag((MR_Word) List_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *A_8 = A0_7;
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_9 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 0));
          MR_Box V_10 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 1));
          MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), F_5, (MR_Integer) 1)));

          *A_8 = func_1(((MR_Box) F_5), K_9, V_10, A0_7);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 2)));
          MR_Box A1_12;
          MR_Box K_13 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 0));
          MR_Box V_14 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 1));
          MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), F_5, (MR_Integer) 1)));
          MR_Word next_value_of_List_6;
          MR_Box next_value_of_A0_7;

          A1_12 = func_0(((MR_Box) F_5), K_13, V_14, A0_7);
          /* direct tailcall eliminated */
          next_value_of_List_6 = KVs_11;
          next_value_of_A0_7 = A1_12;
          List_6 = next_value_of_List_6;
          A0_7 = next_value_of_A0_7;
          continue;
        }
        break;
    }
    break;
  }
}

MR_Box MR_CALL 
mercury__hash_table__fold_3_f_0(
  MR_Word TypeInfo_for_K_14,
  MR_Word TypeInfo_for_V_15,
  MR_Word TypeInfo_for_T_16,
  MR_Word F_5,
  MR_Word HT_6,
  MR_Box X0_7)
{
  {
    MR_Box X_8;
    MR_ArrayPtr Var_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 3)));
    MR_Integer V_10_26;
    MR_Integer V_11_27;
    MR_Integer Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 0)));
    MR_Integer Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 1)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 2)));
    MR_Word TypeInfo_21_33;
    MR_Word TypeInfo_21_34;

{
#define MR_PROC_LABEL mercury__hash_table__fold_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_10 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 V_10_26  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_10 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 V_11_27  = Max;
}
    mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(TypeInfo_for_K_14, TypeInfo_for_V_15, TypeInfo_for_T_16, F_5, Var_10, V_10_26, V_11_27, X0_7, &X_8);
    return X_8;
  }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr V_8_8,
  MR_Integer V_9_9,
  MR_Integer V_10_10,
  MR_Box V_12_11,
  MR_Box * V_13_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (V_10_10 < V_9_9);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
      *V_13_12 = V_12_11;
    else
    {
      MR_Word V_14_13;
      MR_Box V_15_14;
      MR_Integer V_16_15;
      MR_Word TypeInfo_for_T1_1_29;
      MR_Box conv0_Item;
      MR_Integer next_value_of_V_9_9;
      MR_Box next_value_of_V_12_11;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) V_8_8 , Array);
	Index =  V_9_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      V_14_13 = ((MR_Word) conv0_Item);
}
      mercury__hash_table__fold_f_4_p_0(Var_22, Var_23, Var_24, Var_25, V_14_13, V_12_11, &V_15_14);
      V_16_15 = (V_9_9 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_V_9_9 = V_16_15;
      next_value_of_V_12_11 = V_15_14;
      V_9_9 = next_value_of_V_9_9;
      V_12_11 = next_value_of_V_12_11;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__hash_table__fold_f_4_p_0(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word TypeInfo_for_T_17,
  MR_Word F_5,
  MR_Word List_6,
  MR_Box A0_7,
  MR_Box * A_8)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    switch (MR_tag((MR_Word) List_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *A_8 = A0_7;
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_9 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 0));
          MR_Box V_10 = (MR_hl_field(MR_mktag(1), List_6, (MR_Integer) 1));
          MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), F_5, (MR_Integer) 1)));

          *A_8 = func_1(((MR_Box) F_5), K_9, V_10, A0_7);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 2)));
          MR_Box A1_12;
          MR_Box K_13 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 0));
          MR_Box V_14 = (MR_hl_field(MR_mktag(2), List_6, (MR_Integer) 1));
          MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), F_5, (MR_Integer) 1)));
          MR_Word next_value_of_List_6;
          MR_Box next_value_of_A0_7;

          A1_12 = func_0(((MR_Box) F_5), K_13, V_14, A0_7);
          /* direct tailcall eliminated */
          next_value_of_List_6 = KVs_11;
          next_value_of_A0_7 = A1_12;
          List_6 = next_value_of_List_6;
          A0_7 = next_value_of_A0_7;
          continue;
        }
        break;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__hash_table__from_assoc_list_2_f_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word HashPred_4,
  MR_Word AList_5)
{
  {
    MR_Word HT_6;
    MR_Word Var_7;

    Var_7 = mercury__hash_table__init_3_f_0(TypeInfo_for_K_8, TypeInfo_for_V_9, HashPred_4, (MR_Integer) 7, (MR_Float) 0.90000000000000002);
    mercury__hash_table__from_assoc_list_2_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, AList_5, Var_7, &HT_6);
    return HT_6;
  }
}

MR_Word MR_CALL 
mercury__hash_table__from_assoc_list_4_f_0(
  MR_Word TypeInfo_for_K_12,
  MR_Word TypeInfo_for_V_13,
  MR_Word HashPred_6,
  MR_Integer N_7,
  MR_Float MaxOccupants_8,
  MR_Word AList_9)
{
  {
    MR_Word HT_10;
    MR_Word Var_11;

    Var_11 = mercury__hash_table__init_3_f_0(TypeInfo_for_K_12, TypeInfo_for_V_13, HashPred_6, N_7, MaxOccupants_8);
    mercury__hash_table__from_assoc_list_2_3_p_0(TypeInfo_for_K_12, TypeInfo_for_V_13, AList_9, Var_11, &HT_10);
    return HT_10;
  }
}

void MR_CALL 
mercury__hash_table__from_assoc_list_2_3_p_0(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_HT_0_2,
  MR_Word * STATE_VARIABLE_HT_3)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_HT_3 = STATE_VARIABLE_HT_0_2;
    else
    {
      MR_Box K_7;
      MR_Box V_8;
      MR_Word T_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word STATE_VARIABLE_HT_14_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_HT_0_2;

      K_7 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0));
      V_8 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1));
      mercury__hash_table__set_4_p_0(TypeInfo_for_K_16, TypeInfo_for_V_17, K_7, V_8, STATE_VARIABLE_HT_0_2, &STATE_VARIABLE_HT_14_14);
      /* direct tailcall eliminated */
      next_value_of_HeadVar__1_1 = T_9;
      next_value_of_STATE_VARIABLE_HT_0_2 = STATE_VARIABLE_HT_14_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_HT_0_2 = next_value_of_STATE_VARIABLE_HT_0_2;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__hash_table__to_assoc_list_1_f_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word HT_3)
{
  {
    MR_Word AL_4;
    MR_ArrayPtr Var_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT_3, (MR_Integer) 3)));
    MR_Word Var_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Integer V_10_26;
    MR_Integer V_11_27;
    MR_Integer Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_3, (MR_Integer) 0)));
    MR_Integer Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_3, (MR_Integer) 1)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT_3, (MR_Integer) 2)));
    MR_Word TypeInfo_17_35;
    MR_Word TypeInfo_17_36;

{
#define MR_PROC_LABEL mercury__hash_table__to_assoc_list_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_6 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 V_10_26  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__to_assoc_list_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_6 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 V_11_27  = Max;
}
    mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__array_0(TypeInfo_for_K_11, TypeInfo_for_V_12, Var_6, V_10_26, V_11_27, Var_7, &AL_4);
    return AL_4;
  }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__array_0(
  MR_Word Var_27,
  MR_Word Var_28,
  MR_ArrayPtr V_8_8,
  MR_Integer V_9_9,
  MR_Integer V_10_10,
  MR_Word V_12_11,
  MR_Word * V_13_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (V_10_10 < V_9_9);

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
      *V_13_12 = V_12_11;
    else
    {
      MR_Word V_14_13;
      MR_Word V_15_14;
      MR_Integer V_16_15;
      MR_Word TypeInfo_for_T1_1_32;
      MR_Box conv0_Item;
      MR_Integer next_value_of_V_9_9;
      MR_Word next_value_of_V_12_11;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) V_8_8 , Array);
	Index =  V_9_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      V_14_13 = ((MR_Word) conv0_Item);
}
      mercury__hash_table__to_assoc_list_2_3_p_0(Var_27, Var_28, V_14_13, V_12_11, &V_15_14);
      V_16_15 = (V_9_9 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_V_9_9 = V_16_15;
      next_value_of_V_12_11 = V_15_14;
      V_9_9 = next_value_of_V_9_9;
      V_12_11 = next_value_of_V_12_11;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__hash_table__to_assoc_list_2_3_p_0(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word X_4,
  MR_Word AL0_5,
  MR_Word * AL_6)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    switch (MR_tag((MR_Word) X_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *AL_6 = AL0_5;
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_7 = (MR_hl_field(MR_mktag(1), X_4, (MR_Integer) 0));
          MR_Box V_8 = (MR_hl_field(MR_mktag(1), X_4, (MR_Integer) 1));
          MR_Word Var_12;

          {
            Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_12, 0) = K_7;
            MR_hl_field(MR_mktag(0), Var_12, 1) = V_8;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *AL_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_12));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (AL0_5));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word T_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), X_4, (MR_Integer) 2)));
          MR_Word AL1_10;
          MR_Word Var_11;
          MR_Box K_13 = (MR_hl_field(MR_mktag(2), X_4, (MR_Integer) 0));
          MR_Box V_14 = (MR_hl_field(MR_mktag(2), X_4, (MR_Integer) 1));
          MR_Word next_value_of_X_4;
          MR_Word next_value_of_AL0_5;

          {
            Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_11, 0) = K_13;
            MR_hl_field(MR_mktag(0), Var_11, 1) = V_14;
          }
          {
            AL1_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), AL1_10, 0) = ((MR_Box) (Var_11));
            MR_hl_field(MR_mktag(1), AL1_10, 1) = ((MR_Box) (AL0_5));
          }
          /* direct tailcall eliminated */
          next_value_of_X_4 = T_9;
          next_value_of_AL0_5 = AL1_10;
          X_4 = next_value_of_X_4;
          AL0_5 = next_value_of_AL0_5;
          continue;
        }
        break;
    }
    break;
  }
}

MR_Box MR_CALL 
mercury__hash_table__elem_2_f_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Box K_4,
  MR_Word HT_5)
{
  {
    MR_bool succeeded;
    MR_Box HeadVar__3_3;
    MR_Box V_10;

    succeeded = mercury__hash_table__search_2_f_0(TypeInfo_for_K_6, TypeInfo_for_V_7, HT_5, K_4, &V_10);
    if (succeeded)
      HeadVar__3_3 = V_10;
    else
    {
      MR_Word TypeCtorInfo_11_13 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
      MR_Word Var_11 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.lookup: key not found"));

      return HeadVar__3_3 = mercury__exception__throw_1_f_0(TypeCtorInfo_11_13, TypeInfo_for_V_7, ((MR_Box) (Var_11)));
    }
    return HeadVar__3_3;
  }
}

MR_Box MR_CALL 
mercury__hash_table__lookup_2_f_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word HT_4,
  MR_Box K_5)
{
  {
    MR_bool succeeded;
    MR_Box HeadVar__3_3;
    MR_Box V_6;

    succeeded = mercury__hash_table__search_2_f_0(TypeInfo_for_K_9, TypeInfo_for_V_10, HT_4, K_5, &V_6);
    if (succeeded)
      HeadVar__3_3 = V_6;
    else
    {
      MR_Word TypeCtorInfo_11_11 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
      MR_Word Var_7 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.lookup: key not found"));

      return HeadVar__3_3 = mercury__exception__throw_1_f_0(TypeCtorInfo_11_11, TypeInfo_for_V_10, ((MR_Box) (Var_7)));
    }
    return HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mercury__hash_table__search_3_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word HT_4,
  MR_Box K_5,
  MR_Box * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__hash_table__search_2_f_0(TypeInfo_for_K_6, TypeInfo_for_V_7, HT_4, K_5, HeadVar__3_3);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__hash_table__search_2_f_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word HT_4,
  MR_Box K_5,
  MR_Box * V_6)
{
  {
    MR_bool succeeded;
    MR_Integer H_7;
    MR_Word AL_8;
    MR_ArrayPtr Var_9;
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT_4, (MR_Integer) 2)));
    MR_Integer Var_21;
    MR_ArrayPtr Var_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT_4, (MR_Integer) 3)));
    MR_Integer Hash_38;
    MR_Integer Var_39;
    MR_Integer Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_4, (MR_Integer) 0)));
    MR_Integer Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_4, (MR_Integer) 1)));
    MR_Word TypeInfo_11_41;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_Hash_38;
    MR_Integer Var_10;
    MR_Integer Var_11;
    MR_Word Var_12;
    MR_Word TypeInfo_16_42;
    MR_Box conv2_Item;

{
#define MR_PROC_LABEL mercury__hash_table__search_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_24 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 Var_21  = Max;
}
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 1)));
    func_0(((MR_Box) Var_20), K_5, &conv1_Hash_38);
    Hash_38 = ((MR_Integer) conv1_Hash_38);
    Var_39 = (Var_21 - (MR_Integer) 1);
    H_7 = (Hash_38 & Var_39);
    Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_4, (MR_Integer) 0)));
    Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_4, (MR_Integer) 1)));
    Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT_4, (MR_Integer) 2)));
    Var_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT_4, (MR_Integer) 3)));
{
#define MR_PROC_LABEL mercury__hash_table__search_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_9 , Array);
	Index =  H_7 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv2_Item  = (MR_Box) Item;
    AL_8 = ((MR_Word) conv2_Item);
}
    succeeded = mercury__hash_table__alist_search_3_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, AL_8, K_5, V_6);
    return succeeded;
  }
}

void MR_CALL 
mercury__hash_table__delete_3_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Box K_4,
  MR_Word HT_5,
  MR_Word * HeadVar__3_3)
{
  *HeadVar__3_3 = mercury__hash_table__delete_2_f_0(TypeInfo_for_K_6, TypeInfo_for_V_7, HT_5, K_4);
}

MR_Word MR_CALL 
mercury__hash_table__delete_2_f_0(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V_22,
  MR_Word HT0_4,
  MR_Box K_5)
{
  {
    MR_bool succeeded;
    MR_Word HT_6;
    MR_Integer H_7;
    MR_Word AL0_8;
    MR_ArrayPtr Var_16;
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT0_4, (MR_Integer) 2)));
    MR_Integer Var_29;
    MR_ArrayPtr Var_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT0_4, (MR_Integer) 3)));
    MR_Integer Hash_46;
    MR_Integer Var_47;
    MR_Integer Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT0_4, (MR_Integer) 0)));
    MR_Integer Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT0_4, (MR_Integer) 1)));
    MR_Word TypeInfo_11_49;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_Hash_46;
    MR_Integer Var_18;
    MR_Integer Var_19;
    MR_Word Var_20;
    MR_Word TypeInfo_24_50;
    MR_Box conv2_Item;
    MR_Word AL_9;

{
#define MR_PROC_LABEL mercury__hash_table__delete_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_32 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 Var_29  = Max;
}
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 1)));
    func_0(((MR_Box) Var_28), K_5, &conv1_Hash_46);
    Hash_46 = ((MR_Integer) conv1_Hash_46);
    Var_47 = (Var_29 - (MR_Integer) 1);
    H_7 = (Hash_46 & Var_47);
    Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT0_4, (MR_Integer) 0)));
    Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT0_4, (MR_Integer) 1)));
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT0_4, (MR_Integer) 2)));
    Var_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT0_4, (MR_Integer) 3)));
{
#define MR_PROC_LABEL mercury__hash_table__delete_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_16 , Array);
	Index =  H_7 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv2_Item  = (MR_Box) Item;
    AL0_8 = ((MR_Word) conv2_Item);
}
    succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(TypeInfo_for_K_21, AL0_8, K_5, &AL_9);
    if (succeeded)
    {
      MR_Integer NumOccupants0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT0_4, (MR_Integer) 0)));
      MR_Integer MaxOccupants_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT0_4, (MR_Integer) 1)));
      MR_Word HashPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT0_4, (MR_Integer) 2)));
      MR_ArrayPtr Buckets0_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT0_4, (MR_Integer) 3)));
      MR_ArrayPtr Buckets_14;
      MR_Integer NumOccupants_15;
      MR_Word TypeInfo_24_51;
      MR_ArrayPtr conv3_Array;

{
#define MR_PROC_LABEL mercury__hash_table__delete_2_f_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  H_7 ;
	Item = (MR_Word) ((MR_Box) (AL_9)) ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Buckets0_13 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, conv3_Array );
      Buckets_14 = (MR_ArrayPtr) conv3_Array;
}
      NumOccupants_15 = (NumOccupants0_10 - (MR_Integer) 1);
      {
        HT_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), HT_6, 0) = ((MR_Box) (NumOccupants_15));
        MR_hl_field(MR_mktag(0), HT_6, 1) = ((MR_Box) (MaxOccupants_11));
        MR_hl_field(MR_mktag(0), HT_6, 2) = ((MR_Box) (HashPred_12));
        MR_hl_field(MR_mktag(0), HT_6, 3) = ((MR_Box) (Buckets_14));
      }
    }
    else
      HT_6 = HT0_4;
    return HT_6;
  }
}

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(
  MR_Word TypeInfo_for_K_12,
  MR_Word AL0_4,
  MR_Box K_5,
  MR_Word * AL_6)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) AL0_4)) == (MR_mktag((MR_Integer) 2))))
    {
      MR_Box K0_8 = (MR_hl_field(MR_mktag(2), AL0_4, (MR_Integer) 0));
      MR_Box V0_9 = (MR_hl_field(MR_mktag(2), AL0_4, (MR_Integer) 1));
      MR_Word T0_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), AL0_4, (MR_Integer) 2)));

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_12, K0_8, K_5);
      if (succeeded)
      {
        *AL_6 = T0_10;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word T_11;

        succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(TypeInfo_for_K_12, T0_10, K_5, &T_11);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *AL_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = K0_8;
            MR_hl_field(MR_mktag(2), base, 1) = V0_9;
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (T_11));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    else
    if (((MR_tag((MR_Word) AL0_4)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Box Var_14 = (MR_hl_field(MR_mktag(1), AL0_4, (MR_Integer) 0));
      MR_Box Var_7 = (MR_hl_field(MR_mktag(1), AL0_4, (MR_Integer) 1));

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_12, K_5, Var_14);
      if (succeeded)
      {
        *AL_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        succeeded = MR_TRUE;
      }
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

void MR_CALL 
mercury__hash_table__det_update_4_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word HT_7,
  MR_Word * HeadVar__4_4)
{
  *HeadVar__4_4 = mercury__hash_table__det_update_3_f_0(TypeInfo_for_K_8, TypeInfo_for_V_9, HT_7, K_5, V_6);
}

MR_Word MR_CALL 
mercury__hash_table__det_update_3_f_0(
  MR_Word TypeInfo_for_K_26,
  MR_Word TypeInfo_for_V_27,
  MR_Word STATE_VARIABLE_HT_0_14,
  MR_Box K_6,
  MR_Box V_7)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_HT_15;
    MR_Integer H_8;
    MR_ArrayPtr Buckets0_9;
    MR_Word AL0_10;
    MR_Word AL_12;
    MR_ArrayPtr Buckets_13;
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_HT_0_14, (MR_Integer) 2)));
    MR_Integer Var_35;
    MR_ArrayPtr Var_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_HT_0_14, (MR_Integer) 3)));
    MR_Integer Hash_52;
    MR_Integer Var_53;
    MR_Integer Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_HT_0_14, (MR_Integer) 0)));
    MR_Integer Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_HT_0_14, (MR_Integer) 1)));
    MR_Word TypeInfo_11_55;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_Hash_52;
    MR_Integer Var_19;
    MR_Integer Var_20;
    MR_Word Var_21;
    MR_Word TypeInfo_29_56;
    MR_Box conv2_Item;
    MR_Word AL1_11;
    MR_Word TypeInfo_29_57;
    MR_ArrayPtr conv3_Array;
    MR_Integer Var_22;
    MR_Integer Var_23;
    MR_Word Var_24;
    MR_ArrayPtr Var_25;

{
#define MR_PROC_LABEL mercury__hash_table__det_update_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_38 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 Var_35  = Max;
}
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 1)));
    func_0(((MR_Box) Var_34), K_6, &conv1_Hash_52);
    Hash_52 = ((MR_Integer) conv1_Hash_52);
    Var_53 = (Var_35 - (MR_Integer) 1);
    H_8 = (Hash_52 & Var_53);
    Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_HT_0_14, (MR_Integer) 0)));
    Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_HT_0_14, (MR_Integer) 1)));
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_HT_0_14, (MR_Integer) 2)));
    Buckets0_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_HT_0_14, (MR_Integer) 3)));
{
#define MR_PROC_LABEL mercury__hash_table__det_update_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Buckets0_9 , Array);
	Index =  H_8 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv2_Item  = (MR_Box) Item;
    AL0_10 = ((MR_Word) conv2_Item);
}
    succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_K_26, AL0_10, K_6, V_7, &AL1_11);
    if (succeeded)
      AL_12 = AL1_11;
    else
    {
      MR_Word TypeCtorInfo_30_30 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
      MR_Word Var_16 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.det_update: key not found"));

      mercury__exception__throw_1_p_0(TypeCtorInfo_30_30, ((MR_Box) (Var_16)));
    }
{
#define MR_PROC_LABEL mercury__hash_table__det_update_3_f_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  H_8 ;
	Item = (MR_Word) ((MR_Box) (AL_12)) ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Buckets0_9 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, conv3_Array );
    Buckets_13 = (MR_ArrayPtr) conv3_Array;
}
    Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_HT_0_14, (MR_Integer) 0)));
    Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_HT_0_14, (MR_Integer) 1)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_HT_0_14, (MR_Integer) 2)));
    Var_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_HT_0_14, (MR_Integer) 3)));
    {
      STATE_VARIABLE_HT_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HT_15, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HT_15, 1) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HT_15, 2) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_HT_15, 3) = ((MR_Box) (Buckets_13));
    }
    return STATE_VARIABLE_HT_15;
  }
}

void MR_CALL 
mercury__hash_table__det_insert_4_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word HT_7,
  MR_Word * HeadVar__4_4)
{
  *HeadVar__4_4 = mercury__hash_table__det_insert_3_f_0(TypeInfo_for_K_8, TypeInfo_for_V_9, HT_7, K_5, V_6);
}

MR_Word MR_CALL 
mercury__hash_table__det_insert_3_f_0(
  MR_Word TypeInfo_for_K_27,
  MR_Word TypeInfo_for_V_28,
  MR_Word HT0_5,
  MR_Box K_6,
  MR_Box V_7)
{
  {
    MR_bool succeeded;
    MR_Word HT_8;
    MR_Integer H_9;
    MR_Integer NumOccupants0_10;
    MR_Integer MaxOccupants_11;
    MR_Word HashPred_12;
    MR_ArrayPtr Buckets0_13;
    MR_Word AL0_14;
    MR_Word AL_15;
    MR_ArrayPtr Buckets_22;
    MR_Integer NumOccupants_23;
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 2)));
    MR_Integer Var_48;
    MR_ArrayPtr Var_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 3)));
    MR_Integer Hash_65;
    MR_Integer Var_66;
    MR_Integer Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 0)));
    MR_Integer Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 1)));
    MR_Word TypeInfo_11_68;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_Hash_65;
    MR_Word TypeInfo_30_69;
    MR_Box conv2_Item;
    MR_Word TypeInfo_30_70;
    MR_ArrayPtr conv3_Array;

{
#define MR_PROC_LABEL mercury__hash_table__det_insert_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_51 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 Var_48  = Max;
}
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 1)));
    func_0(((MR_Box) Var_47), K_6, &conv1_Hash_65);
    Hash_65 = ((MR_Integer) conv1_Hash_65);
    Var_66 = (Var_48 - (MR_Integer) 1);
    H_9 = (Hash_65 & Var_66);
    NumOccupants0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 0)));
    MaxOccupants_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 1)));
    HashPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 2)));
    Buckets0_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 3)));
{
#define MR_PROC_LABEL mercury__hash_table__det_insert_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Buckets0_13 , Array);
	Index =  H_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv2_Item  = (MR_Box) Item;
    AL0_14 = ((MR_Word) conv2_Item);
}
    switch (MR_tag((MR_Word) AL0_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AL_15, 0) = K_6;
          MR_hl_field(MR_mktag(1), AL_15, 1) = V_7;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box Var_32;

          succeeded = mercury__hash_table__alist_search_3_p_0(TypeInfo_for_K_27, TypeInfo_for_V_28, AL0_14, K_6, &Var_32);
          if (succeeded)
          {
            MR_Word TypeCtorInfo_31_35 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
            MR_Word Var_33 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.det_insert: key already present"));

            mercury__exception__throw_1_p_0(TypeCtorInfo_31_35, ((MR_Box) (Var_33)));
          }
          else
            {
              AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), AL_15, 0) = K_6;
              MR_hl_field(MR_mktag(2), AL_15, 1) = V_7;
              MR_hl_field(MR_mktag(2), AL_15, 2) = ((MR_Box) (AL0_14));
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box Var_21;

          succeeded = mercury__hash_table__alist_search_3_p_0(TypeInfo_for_K_27, TypeInfo_for_V_28, AL0_14, K_6, &Var_21);
          if (succeeded)
          {
            MR_Word TypeCtorInfo_31_31 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
            MR_Word Var_24 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.det_insert: key already present"));

            mercury__exception__throw_1_p_0(TypeCtorInfo_31_31, ((MR_Box) (Var_24)));
          }
          else
            {
              AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), AL_15, 0) = K_6;
              MR_hl_field(MR_mktag(2), AL_15, 1) = V_7;
              MR_hl_field(MR_mktag(2), AL_15, 2) = ((MR_Box) (AL0_14));
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

	Index =  H_9 ;
	Item = (MR_Word) ((MR_Box) (AL_15)) ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Buckets0_13 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, conv3_Array );
    Buckets_22 = (MR_ArrayPtr) conv3_Array;
}
    NumOccupants_23 = (NumOccupants0_10 + (MR_Integer) 1);
    succeeded = (NumOccupants_23 > MaxOccupants_11);
    if (succeeded)
      HT_8 = mercury__hash_table__expand_4_f_0(TypeInfo_for_K_27, TypeInfo_for_V_28, NumOccupants_23, MaxOccupants_11, HashPred_12, Buckets_22);
    else
      {
        HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), HT_8, 0) = ((MR_Box) (NumOccupants_23));
        MR_hl_field(MR_mktag(0), HT_8, 1) = ((MR_Box) (MaxOccupants_11));
        MR_hl_field(MR_mktag(0), HT_8, 2) = ((MR_Box) (HashPred_12));
        MR_hl_field(MR_mktag(0), HT_8, 3) = ((MR_Box) (Buckets_22));
      }
    return HT_8;
  }
}

MR_bool MR_CALL 
mercury__hash_table__alist_search_3_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word AL_4,
  MR_Box K_5,
  MR_Box * V_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if (((MR_tag((MR_Word) AL_4)) == (MR_mktag((MR_Integer) 2))))
    {
      MR_Box HK_7 = (MR_hl_field(MR_mktag(2), AL_4, (MR_Integer) 0));
      MR_Box HV_8 = (MR_hl_field(MR_mktag(2), AL_4, (MR_Integer) 1));
      MR_Word T_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), AL_4, (MR_Integer) 2)));

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_10, HK_7, K_5);
      if (succeeded)
      {
        *V_6 = HV_8;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_AL_4 = T_9;

        /* direct tailcall eliminated */
        AL_4 = next_value_of_AL_4;
        continue;
      }
    }
    else
    if (((MR_tag((MR_Word) AL_4)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Box Var_12 = (MR_hl_field(MR_mktag(1), AL_4, (MR_Integer) 0));

      *V_6 = (MR_hl_field(MR_mktag(1), AL_4, (MR_Integer) 1));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_10, K_5, Var_12);
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
    break;
  }
}

MR_Word MR_CALL 
mercury__hash_table__f_101_108_101_109_32_58_61_3_f_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Box K_5,
  MR_Word HT_6,
  MR_Box V_7)
{
  {
    MR_Word HeadVar__4_4;

    mercury__hash_table__set_4_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, K_5, V_7, HT_6, &HeadVar__4_4);
    return HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__hash_table__set_3_f_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word HT0_5,
  MR_Box K_6,
  MR_Box V_7)
{
  {
    MR_Word HT_8;

    mercury__hash_table__set_4_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, K_6, V_7, HT0_5, &HT_8);
    return HT_8;
  }
}

void MR_CALL 
mercury__hash_table__set_4_p_0(
  MR_Word TypeInfo_for_K_26,
  MR_Word TypeInfo_for_V_27,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word HT0_7,
  MR_Word * HT_8)
{
  {
    MR_bool succeeded;
    MR_Integer H_9;
    MR_Integer NumOccupants0_10;
    MR_Integer MaxOccupants_11;
    MR_Word HashPred_12;
    MR_ArrayPtr Buckets0_13;
    MR_Word AL0_14;
    MR_Word AL_15;
    MR_Word MayExpand_16;
    MR_ArrayPtr Buckets_23;
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT0_7, (MR_Integer) 2)));
    MR_Integer Var_34;
    MR_ArrayPtr Var_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT0_7, (MR_Integer) 3)));
    MR_Integer Hash_51;
    MR_Integer Var_52;
    MR_Integer Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT0_7, (MR_Integer) 0)));
    MR_Integer Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT0_7, (MR_Integer) 1)));
    MR_Word TypeInfo_11_54;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_Hash_51;
    MR_Word TypeInfo_29_55;
    MR_Box conv2_Item;
    MR_Word TypeInfo_29_56;
    MR_ArrayPtr conv3_Array;

{
#define MR_PROC_LABEL mercury__hash_table__set_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_37 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 Var_34  = Max;
}
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 1)));
    func_0(((MR_Box) Var_33), K_5, &conv1_Hash_51);
    Hash_51 = ((MR_Integer) conv1_Hash_51);
    Var_52 = (Var_34 - (MR_Integer) 1);
    H_9 = (Hash_51 & Var_52);
    NumOccupants0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT0_7, (MR_Integer) 0)));
    MaxOccupants_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT0_7, (MR_Integer) 1)));
    HashPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT0_7, (MR_Integer) 2)));
    Buckets0_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT0_7, (MR_Integer) 3)));
{
#define MR_PROC_LABEL mercury__hash_table__set_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Buckets0_13 , Array);
	Index =  H_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv2_Item  = (MR_Box) Item;
    AL0_14 = ((MR_Word) conv2_Item);
}
    switch (MR_tag((MR_Word) AL0_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), AL_15, 0) = K_5;
            MR_hl_field(MR_mktag(1), AL_15, 1) = V_6;
          }
          MayExpand_16 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_17 = (MR_hl_field(MR_mktag(1), AL0_14, (MR_Integer) 0));
          MR_Box _V0_18 = (MR_hl_field(MR_mktag(1), AL0_14, (MR_Integer) 1));

          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_26, K0_17, K_5);
          if (succeeded)
          {
            {
              AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), AL_15, 0) = K0_17;
              MR_hl_field(MR_mktag(1), AL_15, 1) = V_6;
            }
            MayExpand_16 = (MR_Integer) 0;
          }
          else
          {
            {
              AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), AL_15, 0) = K_5;
              MR_hl_field(MR_mktag(2), AL_15, 1) = V_6;
              MR_hl_field(MR_mktag(2), AL_15, 2) = ((MR_Box) (AL0_14));
            }
            MayExpand_16 = (MR_Integer) 1;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word AL1_22;

          succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_K_26, AL0_14, K_5, V_6, &AL1_22);
          if (succeeded)
          {
            AL_15 = AL1_22;
            MayExpand_16 = (MR_Integer) 0;
          }
          else
          {
            {
              AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), AL_15, 0) = K_5;
              MR_hl_field(MR_mktag(2), AL_15, 1) = V_6;
              MR_hl_field(MR_mktag(2), AL_15, 2) = ((MR_Box) (AL0_14));
            }
            MayExpand_16 = (MR_Integer) 1;
          }
        }
        break;
    }
{
#define MR_PROC_LABEL mercury__hash_table__set_4_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  H_9 ;
	Item = (MR_Word) ((MR_Box) (AL_15)) ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Buckets0_13 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, conv3_Array );
    Buckets_23 = (MR_ArrayPtr) conv3_Array;
}
    switch (MayExpand_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *HT_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NumOccupants0_10));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaxOccupants_11));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (HashPred_12));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Buckets_23));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer NumOccupants_24 = (NumOccupants0_10 + (MR_Integer) 1);

          succeeded = (NumOccupants_24 > MaxOccupants_11);
          if (succeeded)
            *HT_8 = mercury__hash_table__expand_4_f_0(TypeInfo_for_K_26, TypeInfo_for_V_27, NumOccupants_24, MaxOccupants_11, HashPred_12, Buckets_23);
          else
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              *HT_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NumOccupants_24));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaxOccupants_11));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (HashPred_12));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Buckets_23));
            }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeInfo_for_K_14,
  MR_Word AL0_5,
  MR_Box K_6,
  MR_Box V_7,
  MR_Word * AL_8)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) AL0_5)) == (MR_mktag((MR_Integer) 2))))
    {
      MR_Box K0_10 = (MR_hl_field(MR_mktag(2), AL0_5, (MR_Integer) 0));
      MR_Box V0_11 = (MR_hl_field(MR_mktag(2), AL0_5, (MR_Integer) 1));
      MR_Word T0_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), AL0_5, (MR_Integer) 2)));

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_14, K0_10, K_6);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *AL_8 = base;
          MR_hl_field(MR_mktag(2), base, 0) = K0_10;
          MR_hl_field(MR_mktag(2), base, 1) = V_7;
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (T0_12));
        }
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word T_13;

        succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_K_14, T0_12, K_6, V_7, &T_13);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *AL_8 = base;
            MR_hl_field(MR_mktag(2), base, 0) = K0_10;
            MR_hl_field(MR_mktag(2), base, 1) = V0_11;
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (T_13));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    else
    if (((MR_tag((MR_Word) AL0_5)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Box Var_16 = (MR_hl_field(MR_mktag(1), AL0_5, (MR_Integer) 0));
      MR_Box Var_9 = (MR_hl_field(MR_mktag(1), AL0_5, (MR_Integer) 1));

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_14, K_6, Var_16);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *AL_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = K_6;
          MR_hl_field(MR_mktag(1), base, 1) = V_7;
        }
        succeeded = MR_TRUE;
      }
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

static MR_Word MR_CALL 
mercury__hash_table__expand_4_f_0(
  MR_Word TypeInfo_for_K_20,
  MR_Word TypeInfo_for_V_21,
  MR_Integer NumOccupants_6,
  MR_Integer MaxOccupants0_7,
  MR_Word HashPred_8,
  MR_ArrayPtr Buckets0_9)
{
  {
    MR_Word HT_10;
    MR_Word TypeCtorInfo_22_22 = (MR_Word) &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2;
    MR_Word TypeInfo_23_23;
    MR_Integer NumBuckets0_11;
    MR_Integer NumBuckets_12;
    MR_Integer MaxOccupants_13;
    MR_ArrayPtr Buckets1_14;
    MR_ArrayPtr Buckets_15;
    MR_Word Var_18;
    MR_Word TypeInfo_23_26;
    MR_ArrayPtr conv0_Buckets1_14;

    {
      TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 0) = ((MR_Box) (TypeCtorInfo_22_22));
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_K_20));
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 2) = ((MR_Box) (TypeInfo_for_V_21));
    }
{
#define MR_PROC_LABEL mercury__hash_table__expand_4_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Buckets0_9 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 NumBuckets0_11  = Max;
}
    NumBuckets_12 = (NumBuckets0_11 + NumBuckets0_11);
    MaxOccupants_13 = (MaxOccupants0_7 + MaxOccupants0_7);
    Var_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__array__init_3_p_0(TypeInfo_23_23, NumBuckets_12, ((MR_Box) (Var_18)), &conv0_Buckets1_14);
    Buckets1_14 = (MR_ArrayPtr) conv0_Buckets1_14;
    mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_p_0((MR_Integer) 0, Buckets0_9, HashPred_8, NumBuckets_12, Buckets1_14, &Buckets_15);
    {
      HT_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HT_10, 0) = ((MR_Box) (NumOccupants_6));
      MR_hl_field(MR_mktag(0), HT_10, 1) = ((MR_Box) (MaxOccupants_13));
      MR_hl_field(MR_mktag(0), HT_10, 2) = ((MR_Box) (HashPred_8));
      MR_hl_field(MR_mktag(0), HT_10, 3) = ((MR_Box) (Buckets_15));
    }
    return HT_10;
  }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_p_0(
  MR_Integer I_7,
  MR_ArrayPtr OldBuckets_8,
  MR_Word HashPred_9,
  MR_Integer NumBuckets_10,
  MR_ArrayPtr STATE_VARIABLE_Buckets_0_13,
  MR_ArrayPtr * STATE_VARIABLE_Buckets_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_15;
    MR_Word TypeInfo_23_28;

    /* setup for tailcalls optimized into a loop */
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) OldBuckets_8 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 Var_15  = Max;
}
    succeeded = (I_7 >= Var_15);
    if (succeeded)
      *STATE_VARIABLE_Buckets_14 = STATE_VARIABLE_Buckets_0_13;
    else
    {
      MR_Word AL_12;
      MR_ArrayPtr STATE_VARIABLE_Buckets_16_16;
      MR_Integer Var_17;
      MR_Word TypeInfo_25_29;
      MR_Box conv0_Item;
      MR_Integer next_value_of_I_7;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_Buckets_0_13;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) OldBuckets_8 , Array);
	Index =  I_7 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      AL_12 = ((MR_Word) conv0_Item);
}
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0(AL_12, HashPred_9, NumBuckets_10, STATE_VARIABLE_Buckets_0_13, &STATE_VARIABLE_Buckets_16_16);
      Var_17 = (I_7 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      next_value_of_I_7 = Var_17;
      next_value_of_STATE_VARIABLE_Buckets_0_13 = STATE_VARIABLE_Buckets_16_16;
      I_7 = next_value_of_I_7;
      STATE_VARIABLE_Buckets_0_13 = next_value_of_STATE_VARIABLE_Buckets_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0(
  MR_Word AL_6,
  MR_Word HashPred_7,
  MR_Integer NumBuckets_8,
  MR_ArrayPtr STATE_VARIABLE_Buckets_0_13,
  MR_ArrayPtr * STATE_VARIABLE_Buckets_14)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    switch (MR_tag((MR_Word) AL_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Buckets_14 = STATE_VARIABLE_Buckets_0_13;
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_10 = (MR_hl_field(MR_mktag(1), AL_6, (MR_Integer) 0));
          MR_Box V_11 = (MR_hl_field(MR_mktag(1), AL_6, (MR_Integer) 1));
          MR_Integer H_54;
          MR_Word AL0_55;
          MR_Word AL_56;
          MR_Integer Hash_69;
          MR_Integer Var_70;
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), HashPred_7, (MR_Integer) 1)));
          MR_Box conv5_Hash_69;
          MR_Word TypeInfo_26_74;
          MR_Box conv6_Item;
          MR_Word TypeInfo_26_75;
          MR_ArrayPtr conv7_Array;

          func_4(((MR_Box) HashPred_7), K_10, &conv5_Hash_69);
          Hash_69 = ((MR_Integer) conv5_Hash_69);
          Var_70 = (NumBuckets_8 - (MR_Integer) 1);
          H_54 = (Hash_69 & Var_70);
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) STATE_VARIABLE_Buckets_0_13 , Array);
	Index =  H_54 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv6_Item  = (MR_Box) Item;
          AL0_55 = ((MR_Word) conv6_Item);
}
          switch (MR_tag((MR_Word) AL0_55)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              AL_56 = AL_6;
              break;
            case (MR_Integer) 1:
              {
                AL_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), AL_56, 0) = K_10;
                MR_hl_field(MR_mktag(2), AL_56, 1) = V_11;
                MR_hl_field(MR_mktag(2), AL_56, 2) = ((MR_Box) (AL0_55));
              }
              break;
            case (MR_Integer) 2:
              {
                AL_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), AL_56, 0) = K_10;
                MR_hl_field(MR_mktag(2), AL_56, 1) = V_11;
                MR_hl_field(MR_mktag(2), AL_56, 2) = ((MR_Box) (AL0_55));
              }
              break;
          }
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  H_54 ;
	Item = (MR_Word) ((MR_Box) (AL_56)) ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) STATE_VARIABLE_Buckets_0_13 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, conv7_Array );
          *STATE_VARIABLE_Buckets_14 = (MR_ArrayPtr) conv7_Array;
}
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word T_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), AL_6, (MR_Integer) 2)));
          MR_ArrayPtr STATE_VARIABLE_Buckets_15_15;
          MR_Box K_18 = (MR_hl_field(MR_mktag(2), AL_6, (MR_Integer) 0));
          MR_Box V_19 = (MR_hl_field(MR_mktag(2), AL_6, (MR_Integer) 1));
          MR_Integer H_29;
          MR_Word AL0_30;
          MR_Word AL_31;
          MR_Integer Hash_44;
          MR_Integer Var_45;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), HashPred_7, (MR_Integer) 1)));
          MR_Box conv1_Hash_44;
          MR_Word TypeInfo_26_72;
          MR_Box conv2_Item;
          MR_Word TypeInfo_26_73;
          MR_ArrayPtr conv3_Array;
          MR_Word next_value_of_AL_6;
          MR_ArrayPtr next_value_of_STATE_VARIABLE_Buckets_0_13;

          func_0(((MR_Box) HashPred_7), K_18, &conv1_Hash_44);
          Hash_44 = ((MR_Integer) conv1_Hash_44);
          Var_45 = (NumBuckets_8 - (MR_Integer) 1);
          H_29 = (Hash_44 & Var_45);
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) STATE_VARIABLE_Buckets_0_13 , Array);
	Index =  H_29 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv2_Item  = (MR_Box) Item;
          AL0_30 = ((MR_Word) conv2_Item);
}
          switch (MR_tag((MR_Word) AL0_30)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                AL_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), AL_31, 0) = K_18;
                MR_hl_field(MR_mktag(1), AL_31, 1) = V_19;
              }
              break;
            case (MR_Integer) 1:
              {
                AL_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), AL_31, 0) = K_18;
                MR_hl_field(MR_mktag(2), AL_31, 1) = V_19;
                MR_hl_field(MR_mktag(2), AL_31, 2) = ((MR_Box) (AL0_30));
              }
              break;
            case (MR_Integer) 2:
              {
                AL_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), AL_31, 0) = K_18;
                MR_hl_field(MR_mktag(2), AL_31, 1) = V_19;
                MR_hl_field(MR_mktag(2), AL_31, 2) = ((MR_Box) (AL0_30));
              }
              break;
          }
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  H_29 ;
	Item = (MR_Word) ((MR_Box) (AL_31)) ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) STATE_VARIABLE_Buckets_0_13 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, conv3_Array );
          STATE_VARIABLE_Buckets_15_15 = (MR_ArrayPtr) conv3_Array;
}
          /* direct tailcall eliminated */
          next_value_of_AL_6 = T_12;
          next_value_of_STATE_VARIABLE_Buckets_0_13 = STATE_VARIABLE_Buckets_15_15;
          AL_6 = next_value_of_AL_6;
          STATE_VARIABLE_Buckets_0_13 = next_value_of_STATE_VARIABLE_Buckets_0_13;
          continue;
        }
        break;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__hash_table__copy_1_f_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word Orig_3)
{
  {
    MR_Word Copy_4;
    MR_Integer NumOccupants_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Orig_3, (MR_Integer) 0)));
    MR_Integer MaxOccupants_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Orig_3, (MR_Integer) 1)));
    MR_Word HashPred_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Orig_3, (MR_Integer) 2)));
    MR_ArrayPtr Buckets0_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Orig_3, (MR_Integer) 3)));
    MR_ArrayPtr Buckets_9;
    MR_Word TypeInfo_13_14;
    MR_ArrayPtr conv0_Array;

{
#define MR_PROC_LABEL mercury__hash_table__copy_1_f_0

	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Buckets0_8 , Array0);
		{

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, conv0_Array );
    Buckets_9 = (MR_ArrayPtr) conv0_Array;
}
    {
      Copy_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Copy_4, 0) = ((MR_Box) (NumOccupants_5));
      MR_hl_field(MR_mktag(0), Copy_4, 1) = ((MR_Box) (MaxOccupants_6));
      MR_hl_field(MR_mktag(0), Copy_4, 2) = ((MR_Box) (HashPred_7));
      MR_hl_field(MR_mktag(0), Copy_4, 3) = ((MR_Box) (Buckets_9));
    }
    return Copy_4;
  }
}

MR_Integer MR_CALL 
mercury__hash_table__num_occupants_1_f_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
    MR_ArrayPtr Var_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));

    return HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__hash_table__num_buckets_1_f_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word HT_3)
{
  {
    MR_Integer HeadVar__2_2;
    MR_ArrayPtr Var_4 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HT_3, (MR_Integer) 3)));
    MR_Integer Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_3, (MR_Integer) 0)));
    MR_Integer Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HT_3, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HT_3, (MR_Integer) 2)));
    MR_Word TypeInfo_11_14;

{
#define MR_PROC_LABEL mercury__hash_table__num_buckets_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Var_4 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 HeadVar__2_2  = Max;
}
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__hash_table__hash_pred_1_f_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
    MR_Integer Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_ArrayPtr Var_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__hash_table__new_default_1_f_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word HashPred_3)
{
  {
    MR_Word HeadVar__2_2;

    HeadVar__2_2 = mercury__hash_table__init_3_f_0(TypeInfo_for_K_6, TypeInfo_for_V_7, HashPred_3, (MR_Integer) 7, (MR_Float) 0.90000000000000002);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__hash_table__init_default_1_f_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word HashPred_3)
{
  {
    MR_Word HeadVar__2_2;

    HeadVar__2_2 = mercury__hash_table__init_3_f_0(TypeInfo_for_K_6, TypeInfo_for_V_7, HashPred_3, (MR_Integer) 7, (MR_Float) 0.90000000000000002);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__hash_table__new_3_f_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word HashPred_5,
  MR_Integer N_6,
  MR_Float MaxOccupancy_7)
{
  {
    MR_Word HeadVar__4_4;

    HeadVar__4_4 = mercury__hash_table__init_3_f_0(TypeInfo_for_K_8, TypeInfo_for_V_9, HashPred_5, N_6, MaxOccupancy_7);
    return HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__hash_table__init_3_f_0(
  MR_Word TypeInfo_for_K_26,
  MR_Word TypeInfo_for_V_27,
  MR_Word HashPred_5,
  MR_Integer N_6,
  MR_Float MaxOccupancy_7)
{
  {
    MR_bool succeeded = (N_6 <= (MR_Integer) 0);
    MR_Word HT_8;

    if (succeeded)
    {
      MR_Word TypeCtorInfo_28_28 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
      MR_Word Var_13 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.init: N =< 0"));

      mercury__exception__throw_1_p_0(TypeCtorInfo_28_28, ((MR_Box) (Var_13)));
    }
    else
    {
      MR_Integer Var_15;

{
#define MR_PROC_LABEL mercury__hash_table__init_3_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Var_15  = Bits;
}
      succeeded = (N_6 >= Var_15);
      if (succeeded)
      {
        MR_Word TypeCtorInfo_29_29 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
        MR_Word Var_16 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.init: N >= int.bits_per_int"));

        mercury__exception__throw_1_p_0(TypeCtorInfo_29_29, ((MR_Box) (Var_16)));
      }
      else
      {
        succeeded = (MaxOccupancy_7 <= ((MR_Float) 0.0000000000000000));
        if (succeeded)
        {
          MR_Word TypeCtorInfo_30_30 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
          MR_Word Var_19 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.init: MaxOccupancy =< 0.0"));

          mercury__exception__throw_1_p_0(TypeCtorInfo_30_30, ((MR_Box) (Var_19)));
        }
        else
        {
          MR_Word TypeCtorInfo_31_31;
          MR_Word TypeInfo_32_32;
          MR_Integer NumBuckets_9;
          MR_Integer MaxOccupants_10;
          MR_ArrayPtr Buckets_11;
          MR_Float Var_22;
          MR_Float Var_23;
          MR_Word Var_24;
          MR_ArrayPtr conv0_Buckets_11;

          NumBuckets_9 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, N_6);
{
#define MR_PROC_LABEL mercury__hash_table__init_3_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal =  NumBuckets_9 ;
		{

    FloatVal = IntVal;


		;}
#undef MR_PROC_LABEL
	 Var_23  = FloatVal;
}
          Var_22 = (Var_23 * MaxOccupancy_7);
{
#define MR_PROC_LABEL mercury__hash_table__init_3_f_0

	MR_Float X;
	MR_Integer Ceil;

	X =  Var_22 ;
		{

    Ceil = (MR_Integer) ceil(X);


		;}
#undef MR_PROC_LABEL
	 MaxOccupants_10  = Ceil;
}
          TypeCtorInfo_31_31 = (MR_Word) &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2;
          {
            TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_32_32, 0) = ((MR_Box) (TypeCtorInfo_31_31));
            MR_hl_field(MR_mktag(0), TypeInfo_32_32, 1) = ((MR_Box) (TypeInfo_for_K_26));
            MR_hl_field(MR_mktag(0), TypeInfo_32_32, 2) = ((MR_Box) (TypeInfo_for_V_27));
          }
          Var_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          mercury__array__init_3_p_0(TypeInfo_32_32, NumBuckets_9, ((MR_Box) (Var_24)), &conv0_Buckets_11);
          Buckets_11 = (MR_ArrayPtr) conv0_Buckets_11;
          {
            HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), HT_8, 0) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), HT_8, 1) = ((MR_Box) (MaxOccupants_10));
            MR_hl_field(MR_mktag(0), HT_8, 2) = ((MR_Box) (HashPred_5));
            MR_hl_field(MR_mktag(0), HT_8, 3) = ((MR_Box) (Buckets_11));
          }
        }
      }
    }
    return HT_8;
  }
}

static MR_bool MR_CALL 
mercury__hash_table____Unify____buckets_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__hash_table____Unify____buckets_2_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_ArrayPtr) wrapper_arg_3), ((MR_ArrayPtr) wrapper_arg_4));
    return succeeded;
  }
}

static void MR_CALL 
mercury__hash_table____Compare____buckets_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__hash_table____Compare____buckets_2_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_HeadVar__1_1, ((MR_ArrayPtr) wrapper_arg_4), ((MR_ArrayPtr) wrapper_arg_5));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__hash_table____Unify____hash_pred_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__hash_table____Unify____hash_pred_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mercury__hash_table____Compare____hash_pred_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__hash_table____Compare____hash_pred_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__hash_table____Unify____hash_table_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__hash_table____Unify____hash_table_2_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    return succeeded;
  }
}

static void MR_CALL 
mercury__hash_table____Compare____hash_table_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__hash_table____Compare____hash_table_2_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_4), ((MR_Word) wrapper_arg_5));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__hash_table____Unify____hash_table_alist_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__hash_table____Unify____hash_table_alist_2_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    return succeeded;
  }
}

static void MR_CALL 
mercury__hash_table____Compare____hash_table_alist_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__hash_table____Compare____hash_table_alist_2_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_4), ((MR_Word) wrapper_arg_5));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
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
