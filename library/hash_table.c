/*
** Automatically generated from `hash_table.m'
** by the Mercury compiler,
** version 22.01.5-beta-2022-12-30
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


// :- module hash_table.
// :- implementation.

/*
INIT mercury__hash_table__init
ENDINIT
*/

#include "hash_table.mih"


#include "array.mih"
#include "assoc_list.mih"
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
#include "kv_list.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "prolog.mih"
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
#include "string.to_string.mih"




static const MR_DuFunctorDesc mercury__hash_table__hash_table__du_functor_desc_hash_bucket_2_0;

static const MR_PseudoTypeInfo mercury__hash_table__hash_table__field_types_hash_bucket_2_1[2];

static const MR_DuFunctorDesc mercury__hash_table__hash_table__du_functor_desc_hash_bucket_2_1;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__hash_table__kv_list__pti_kv_list_2__pseudo_1__pseudo_2;

static const MR_PseudoTypeInfo mercury__hash_table__hash_table__field_types_hash_bucket_2_2[5];

static const MR_DuFunctorDesc mercury__hash_table__hash_table__du_functor_desc_hash_bucket_2_2;

static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_bucket_2_0[1];

static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_bucket_2_1[1];

static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_bucket_2_2[1];

static const MR_DuPtagLayout mercury__hash_table__hash_table__du_ptag_ordered_hash_bucket_2[3];

static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_name_ordered_hash_bucket_2[3];

static const MR_Integer mercury__hash_table__hash_table__functor_number_map_hash_bucket_2[3];

static const MR_FA_PseudoTypeInfo_Struct2 mercury__hash_table__hash_table__pti_hash_bucket_2__pseudo_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__hash_table__array__pti_array_1__pseudo_hash_table__pti_hash_bucket_2__pseudo_1__pseudo_2;

static const MR_VA_PseudoTypeInfo_Struct2 mercury__hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo mercury__hash_table__hash_table__field_types_hash_table_2_0[4];

static const MR_ConstString mercury__hash_table__hash_table__field_names_hash_table_2_0[4];

static const MR_DuFunctorDesc mercury__hash_table__hash_table__du_functor_desc_hash_table_2_0;

static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_table_2_0[1];

static const MR_DuPtagLayout mercury__hash_table__hash_table__du_ptag_ordered_hash_table_2[1];

static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_name_ordered_hash_table_2[1];

static const MR_Integer mercury__hash_table__hash_table__functor_number_map_hash_table_2[1];

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_52_56_95_95_91_50_44_32_51_93_95_48_6_p_in__array_0(
  MR_Word Var_19,
  MR_ArrayPtr HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Integer HeadVar__5_11,
  MR_Integer * HeadVar__6_12);

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
  MR_Integer HeadVar__2_12,
  MR_Integer HeadVar__3_13,
  MR_ArrayPtr HeadVar__4_14,
  MR_Box HeadVar__5_15,
  MR_Box * HeadVar__6_16,
  MR_Box HeadVar__7_17,
  MR_Box * HeadVar__8_18,
  MR_Box HeadVar__9_19,
  MR_Box * HeadVar__10_20);

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Word Var_36,
  MR_Word Var_37,
  MR_Word Var_38,
  MR_Word Var_39,
  MR_Integer HeadVar__2_12,
  MR_Integer HeadVar__3_13,
  MR_ArrayPtr HeadVar__4_14,
  MR_Box HeadVar__5_15,
  MR_Box * HeadVar__6_16,
  MR_Box HeadVar__7_17,
  MR_Box * HeadVar__8_18,
  MR_Box HeadVar__9_19,
  MR_Box * HeadVar__10_20);

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Word Var_36,
  MR_Word Var_37,
  MR_Word Var_38,
  MR_Word Var_39,
  MR_Integer HeadVar__2_12,
  MR_Integer HeadVar__3_13,
  MR_ArrayPtr HeadVar__4_14,
  MR_Box HeadVar__5_15,
  MR_Box * HeadVar__6_16,
  MR_Box HeadVar__7_17,
  MR_Box * HeadVar__8_18,
  MR_Box HeadVar__9_19,
  MR_Box * HeadVar__10_20);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_52_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Word Var_36,
  MR_Word Var_37,
  MR_Word Var_38,
  MR_Word Var_39,
  MR_Integer HeadVar__2_12,
  MR_Integer HeadVar__3_13,
  MR_ArrayPtr HeadVar__4_14,
  MR_Box HeadVar__5_15,
  MR_Box * HeadVar__6_16,
  MR_Box HeadVar__7_17,
  MR_Box * HeadVar__8_18,
  MR_Box HeadVar__9_19,
  MR_Box * HeadVar__10_20);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Word Var_36,
  MR_Word Var_37,
  MR_Word Var_38,
  MR_Word Var_39,
  MR_Integer HeadVar__2_12,
  MR_Integer HeadVar__3_13,
  MR_ArrayPtr HeadVar__4_14,
  MR_Box HeadVar__5_15,
  MR_Box * HeadVar__6_16,
  MR_Box HeadVar__7_17,
  MR_Box * HeadVar__8_18,
  MR_Box HeadVar__9_19,
  MR_Box * HeadVar__10_20);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_50_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Word Var_36,
  MR_Word Var_37,
  MR_Word Var_38,
  MR_Word Var_39,
  MR_Integer HeadVar__2_12,
  MR_Integer HeadVar__3_13,
  MR_ArrayPtr HeadVar__4_14,
  MR_Box HeadVar__5_15,
  MR_Box * HeadVar__6_16,
  MR_Box HeadVar__7_17,
  MR_Box * HeadVar__8_18,
  MR_Box HeadVar__9_19,
  MR_Box * HeadVar__10_20);

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_52_49_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Integer HeadVar__2_10,
  MR_Integer HeadVar__3_11,
  MR_ArrayPtr HeadVar__4_12,
  MR_Box HeadVar__5_13,
  MR_Box * HeadVar__6_14,
  MR_Box HeadVar__7_15,
  MR_Box * HeadVar__8_16);

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Integer HeadVar__2_10,
  MR_Integer HeadVar__3_11,
  MR_ArrayPtr HeadVar__4_12,
  MR_Box HeadVar__5_13,
  MR_Box * HeadVar__6_14,
  MR_Box HeadVar__7_15,
  MR_Box * HeadVar__8_16);

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_57_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Integer HeadVar__2_10,
  MR_Integer HeadVar__3_11,
  MR_ArrayPtr HeadVar__4_12,
  MR_Box HeadVar__5_13,
  MR_Box * HeadVar__6_14,
  MR_Box HeadVar__7_15,
  MR_Box * HeadVar__8_16);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Integer HeadVar__2_10,
  MR_Integer HeadVar__3_11,
  MR_ArrayPtr HeadVar__4_12,
  MR_Box HeadVar__5_13,
  MR_Box * HeadVar__6_14,
  MR_Box HeadVar__7_15,
  MR_Box * HeadVar__8_16);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Integer HeadVar__2_10,
  MR_Integer HeadVar__3_11,
  MR_ArrayPtr HeadVar__4_12,
  MR_Box HeadVar__5_13,
  MR_Box * HeadVar__6_14,
  MR_Box HeadVar__7_15,
  MR_Box * HeadVar__8_16);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Integer HeadVar__2_10,
  MR_Integer HeadVar__3_11,
  MR_ArrayPtr HeadVar__4_12,
  MR_Box HeadVar__5_13,
  MR_Box * HeadVar__6_14,
  MR_Box HeadVar__7_15,
  MR_Box * HeadVar__8_16);

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12);

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12);

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__array_0(
  MR_Word Var_27,
  MR_Word Var_28,
  MR_ArrayPtr HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_118_95_97_99_99_95_97_115_115_111_99_95_108_105_115_116_95_95_91_49_44_32_50_93_95_48_3_p_0(
  MR_Word KVs_4,
  MR_Word STATE_VARIABLE_AL_0_9,
  MR_Word * STATE_VARIABLE_AL_10);

static MR_Word MR_CALL 
mercury__hash_table__expand_4_f_0(
  MR_Word TypeInfo_for_K_20,
  MR_Word TypeInfo_for_V_21,
  MR_Integer NumOccupants_6,
  MR_Integer MaxOccupants0_7,
  MR_Word HashPred_8,
  MR_ArrayPtr Buckets0_9);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_104_97_115_104_95_98_117_99_107_101_116_115_95_95_91_49_44_32_50_93_95_48_6_p_0(
  MR_Integer I_7,
  MR_ArrayPtr OldBuckets_8,
  MR_Word HashPred_9,
  MR_Integer NumBuckets_10,
  MR_ArrayPtr STATE_VARIABLE_Buckets_0_13,
  MR_ArrayPtr * STATE_VARIABLE_Buckets_14);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_104_97_115_104_95_98_117_99_107_101_116_95_95_91_49_44_32_50_93_95_48_5_p_0(
  MR_Word HB_6,
  MR_Word HashPred_7,
  MR_Integer NumBuckets_8,
  MR_ArrayPtr STATE_VARIABLE_Buckets_0_17,
  MR_ArrayPtr * STATE_VARIABLE_Buckets_18);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_95_91_49_44_32_50_93_95_48_6_p_0(
  MR_Box Key_7,
  MR_Box Value_8,
  MR_Word HashPred_9,
  MR_Integer NumBuckets_10,
  MR_ArrayPtr STATE_VARIABLE_Buckets_0_20,
  MR_ArrayPtr * STATE_VARIABLE_Buckets_21);

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_107_118_95_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0(
  MR_Word KVs_6,
  MR_Word HashPred_7,
  MR_Integer NumBuckets_8,
  MR_ArrayPtr STATE_VARIABLE_Buckets_0_13,
  MR_ArrayPtr * STATE_VARIABLE_Buckets_14);

static MR_bool MR_CALL 
mercury__hash_table____Unify____hash_bucket_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__hash_table____Compare____hash_bucket_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__hash_table____Unify____hash_bucket_array_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__hash_table____Compare____hash_bucket_array_2_0_10001(
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



static const MR_DuFunctorDesc mercury__hash_table__hash_table__du_functor_desc_hash_bucket_2_0 = {
  (MR_String) "hb_zero",
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

static const MR_PseudoTypeInfo mercury__hash_table__hash_table__field_types_hash_bucket_2_1[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 2)
};

static const MR_DuFunctorDesc mercury__hash_table__hash_table__du_functor_desc_hash_bucket_2_1 = {
  (MR_String) "hb_one",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__hash_table__hash_table__field_types_hash_bucket_2_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__hash_table__kv_list__pti_kv_list_2__pseudo_1__pseudo_2 = {
  &mercury__kv_list__kv_list__type_ctor_info_kv_list_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_PseudoTypeInfo mercury__hash_table__hash_table__field_types_hash_bucket_2_2[5] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 2),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 2),
  (MR_PseudoTypeInfo) (&mercury__hash_table__kv_list__pti_kv_list_2__pseudo_1__pseudo_2)
};

static const MR_DuFunctorDesc mercury__hash_table__hash_table__du_functor_desc_hash_bucket_2_2 = {
  (MR_String) "hb_two_plus",
  INT16_C(5),
  UINT16_C(31),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__hash_table__hash_table__field_types_hash_bucket_2_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_bucket_2_0[1] = {
  &mercury__hash_table__hash_table__du_functor_desc_hash_bucket_2_0
};

static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_bucket_2_1[1] = {
  &mercury__hash_table__hash_table__du_functor_desc_hash_bucket_2_1
};

static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_bucket_2_2[1] = {
  &mercury__hash_table__hash_table__du_functor_desc_hash_bucket_2_2
};

static const MR_DuPtagLayout mercury__hash_table__hash_table__du_ptag_ordered_hash_bucket_2[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__hash_table__hash_table__du_stag_ordered_hash_bucket_2_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__hash_table__hash_table__du_stag_ordered_hash_bucket_2_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__hash_table__hash_table__du_stag_ordered_hash_bucket_2_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_name_ordered_hash_bucket_2[3] = {
  &mercury__hash_table__hash_table__du_functor_desc_hash_bucket_2_1,
  &mercury__hash_table__hash_table__du_functor_desc_hash_bucket_2_2,
  &mercury__hash_table__hash_table__du_functor_desc_hash_bucket_2_0
};

static const MR_Integer mercury__hash_table__hash_table__functor_number_map_hash_bucket_2[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__hash_table__hash_table__type_ctor_info_hash_bucket_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__hash_table____Unify____hash_bucket_2_0_10001)),
  ((MR_Box) (mercury__hash_table____Compare____hash_bucket_2_0_10001)),
  (MR_String) "hash_table",
  (MR_String) "hash_bucket",
  {     mercury__hash_table__hash_table__du_name_ordered_hash_bucket_2 },
  {     mercury__hash_table__hash_table__du_ptag_ordered_hash_bucket_2 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__hash_table__hash_table__functor_number_map_hash_bucket_2,

};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__hash_table__hash_table__pti_hash_bucket_2__pseudo_1__pseudo_2 = {
  &mercury__hash_table__hash_table__type_ctor_info_hash_bucket_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__hash_table__array__pti_array_1__pseudo_hash_table__pti_hash_bucket_2__pseudo_1__pseudo_2 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) (&mercury__hash_table__hash_table__pti_hash_bucket_2__pseudo_1__pseudo_2)
  }
};

const MR_TypeCtorInfo_Struct mercury__hash_table__hash_table__type_ctor_info_hash_bucket_array_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__hash_table____Unify____hash_bucket_array_2_0_10001)),
  ((MR_Box) (mercury__hash_table____Compare____hash_bucket_array_2_0_10001)),
  (MR_String) "hash_table",
  (MR_String) "hash_bucket_array",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__hash_table__array__pti_array_1__pseudo_hash_table__pti_hash_bucket_2__pseudo_1__pseudo_2) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_VA_PseudoTypeInfo_Struct2 mercury__hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

const MR_TypeCtorInfo_Struct mercury__hash_table__hash_table__type_ctor_info_hash_pred_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__hash_table____Unify____hash_pred_1_0_10001)),
  ((MR_Box) (mercury__hash_table____Compare____hash_pred_1_0_10001)),
  (MR_String) "hash_table",
  (MR_String) "hash_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo mercury__hash_table__hash_table__field_types_hash_table_2_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__hash_table__array__pti_array_1__pseudo_hash_table__pti_hash_bucket_2__pseudo_1__pseudo_2)
};

static const MR_ConstString mercury__hash_table__hash_table__field_names_hash_table_2_0[4] = {
  (MR_String) "num_occupants",
  (MR_String) "max_occupants",
  (MR_String) "hash_pred",
  (MR_String) "buckets"
};

static const MR_DuFunctorDesc mercury__hash_table__hash_table__du_functor_desc_hash_table_2_0 = {
  (MR_String) "ht",
  INT16_C(4),
  UINT16_C(12),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__hash_table__hash_table__field_types_hash_table_2_0,
  mercury__hash_table__hash_table__field_names_hash_table_2_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_table_2_0[1] = {
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_2_0
};

static const MR_DuPtagLayout mercury__hash_table__hash_table__du_ptag_ordered_hash_table_2[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__hash_table__hash_table__du_stag_ordered_hash_table_2_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__hash_table____Unify____hash_table_2_0_10001)),
  ((MR_Box) (mercury__hash_table____Compare____hash_table_2_0_10001)),
  (MR_String) "hash_table",
  (MR_String) "hash_table",
  {     mercury__hash_table__hash_table__du_name_ordered_hash_table_2 },
  {     mercury__hash_table__hash_table__du_ptag_ordered_hash_table_2 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__hash_table__hash_table__functor_number_map_hash_table_2,

};

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
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_ArrayPtr ArgX4_13 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_ArrayPtr ArgY4_14 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word SubResult1_6;

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX1_4 == ArgY1_5);
        if (succeeded)
          SubResult1_6 = (MR_Integer) 0;
        else
          SubResult1_6 = (MR_Integer) 2;
      }
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
          SubResult2_9 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX2_7 == ArgY2_8);
          if (succeeded)
            SubResult2_9 = (MR_Integer) 0;
          else
            SubResult2_9 = (MR_Integer) 2;
        }
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__private_builtin__builtin_compare_pred_3_p_0(&SubResult3_12, (MR_Word) (ArgX3_10), (MR_Word) (ArgY3_11));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word TypeInfo_26_26;

            {
              TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_26_26, 0) = ((MR_Box) (&mercury__hash_table__hash_table__type_ctor_info_hash_bucket_2));
              MR_hl_field(MR_mktag(0), TypeInfo_26_26, 1) = ((MR_Box) (TypeInfo_for_K_17));
              MR_hl_field(MR_mktag(0), TypeInfo_26_26, 2) = ((MR_Box) (TypeInfo_for_V_18));
            }
            mercury__array____Compare____array_1_0(TypeInfo_26_26, HeadVar__1_1, (MR_ArrayPtr) (ArgX4_13), (MR_ArrayPtr) (ArgY4_14));
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
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeCtorInfo_15_15;
      MR_Word TypeInfo_16_16;
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_ArrayPtr ArgX4_9 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_ArrayPtr ArgY4_10 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX3_7), (MR_Word) (ArgY3_8));
          if (succeeded)
          {
            TypeCtorInfo_15_15 = (MR_Word) (&mercury__hash_table__hash_table__type_ctor_info_hash_bucket_2);
            {
              TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_16_16, 0) = ((MR_Box) (TypeCtorInfo_15_15));
              MR_hl_field(MR_mktag(0), TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_for_K_13));
              MR_hl_field(MR_mktag(0), TypeInfo_16_16, 2) = ((MR_Box) (TypeInfo_for_V_14));
            }
            succeeded = mercury__array____Unify____array_1_0(TypeInfo_16_16, (MR_ArrayPtr) (ArgX4_9), (MR_ArrayPtr) (ArgY4_10));
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

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
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

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
mercury__hash_table____Compare____hash_bucket_array_2_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word * HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2,
  MR_ArrayPtr HeadVar__3_3)
{
  {
    MR_Word TypeInfo_9_9;
    MR_ArrayPtr Cast_HeadVar1_4 = HeadVar__2_2;
    MR_ArrayPtr Cast_HeadVar2_5 = HeadVar__3_3;

    {
      TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__hash_table__hash_table__type_ctor_info_hash_bucket_2));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_K_6));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 2) = ((MR_Box) (TypeInfo_for_V_7));
    }
    mercury__array____Compare____array_1_0(TypeInfo_9_9, HeadVar__1_1, (MR_ArrayPtr) (Cast_HeadVar1_4), (MR_ArrayPtr) (Cast_HeadVar2_5));
  }
}

MR_bool MR_CALL 
mercury__hash_table____Unify____hash_bucket_array_2_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_ArrayPtr HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_8_8;
    MR_ArrayPtr Cast_HeadVar1_3 = HeadVar__1_1;
    MR_ArrayPtr Cast_HeadVar2_4 = HeadVar__2_2;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__hash_table__hash_table__type_ctor_info_hash_bucket_2));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_K_5));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 2) = ((MR_Box) (TypeInfo_for_V_6));
    }
    succeeded = mercury__array____Unify____array_1_0(TypeInfo_8_8, (MR_ArrayPtr) (Cast_HeadVar1_3), (MR_ArrayPtr) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
mercury__hash_table____Compare____hash_bucket_2_0(
  MR_Word TypeInfo_for_K_53,
  MR_Word TypeInfo_for_V_54,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_51 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_52 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_51 == CastY_52);
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
            MR_Box Var_57 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
            MR_Box Var_58 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box ArgY1_14 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
                  MR_Box ArgY2_17 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));
                  MR_Word SubResult1_15;

                  mercury__builtin__compare_3_p_0(TypeInfo_for_K_53, &SubResult1_15, Var_58, ArgY1_14);
                  succeeded = (SubResult1_15 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_15;
                  else
                    mercury__builtin__compare_3_p_0(TypeInfo_for_V_54, HeadVar__1_1, Var_57, ArgY2_17);
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
            MR_Word Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4))));
            MR_Box Var_60 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3));
            MR_Box Var_61 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2));
            MR_Box Var_62 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
            MR_Box Var_63 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));

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
                  MR_Box ArgY1_38 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0));
                  MR_Box ArgY2_41 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1));
                  MR_Box ArgY3_44 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2));
                  MR_Box ArgY4_47 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 3));
                  MR_Word ArgY5_50 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 4))));
                  MR_Word SubResult1_39;

                  mercury__builtin__compare_3_p_0(TypeInfo_for_K_53, &SubResult1_39, Var_63, ArgY1_38);
                  succeeded = (SubResult1_39 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_39;
                  else
                  {
                    MR_Word SubResult2_42;

                    mercury__builtin__compare_3_p_0(TypeInfo_for_V_54, &SubResult2_42, Var_62, ArgY2_41);
                    succeeded = (SubResult2_42 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_42;
                    else
                    {
                      MR_Word SubResult3_45;

                      mercury__builtin__compare_3_p_0(TypeInfo_for_K_53, &SubResult3_45, Var_61, ArgY3_44);
                      succeeded = (SubResult3_45 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult3_45;
                      else
                      {
                        MR_Word SubResult4_48;

                        mercury__builtin__compare_3_p_0(TypeInfo_for_V_54, &SubResult4_48, Var_60, ArgY4_47);
                        succeeded = (SubResult4_48 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult4_48;
                        else
                          mercury__kv_list____Compare____kv_list_2_0(TypeInfo_for_K_53, TypeInfo_for_V_54, HeadVar__1_1, Var_59, ArgY5_50);
                      }
                    }
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
mercury__hash_table____Unify____hash_bucket_2_0(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V_22,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_19 == CastY_20);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_4 == CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_6;
            MR_Box ArgX2_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
            MR_Box ArgY2_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
              ArgY2_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_21, ArgX1_5, ArgY1_6);
              if (succeeded)
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_V_22, ArgX2_7, ArgY2_8);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box ArgX1_9 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_10;
            MR_Box ArgX2_11 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1));
            MR_Box ArgY2_12;
            MR_Box ArgX3_13 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2));
            MR_Box ArgY3_14;
            MR_Box ArgX4_15 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3));
            MR_Box ArgY4_16;
            MR_Word ArgX5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 4))));
            MR_Word ArgY5_18;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
              ArgY2_12 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
              ArgY3_14 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2));
              ArgY4_16 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3));
              ArgY5_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4))));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_21, ArgX1_9, ArgY1_10);
              if (succeeded)
              {
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_V_22, ArgX2_11, ArgY2_12);
                if (succeeded)
                {
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_21, ArgX3_13, ArgY3_14);
                  if (succeeded)
                  {
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_V_22, ArgX4_15, ArgY4_16);
                    if (succeeded)
                      succeeded = mercury__kv_list____Unify____kv_list_2_0(TypeInfo_for_K_21, TypeInfo_for_V_22, ArgX5_17, ArgY5_18);
                  }
                }
              }
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mercury__hash_table__find_slot_2_4_p_0(
  MR_Word TypeInfo_for_K_12,
  MR_Word HashPred_5,
  MR_Box K_6,
  MR_Integer NumBuckets_7,
  MR_Integer * HashSlot_8)
{
  {
    MR_Integer Hash_9;
    MR_Integer Var_10;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HashPred_5, (MR_Integer) 1))));
    MR_Box conv1_Hash_9;

    func_0(((MR_Box) (HashPred_5)), K_6, &conv1_Hash_9);
    Hash_9 = ((MR_Integer) (conv1_Hash_9));
    Var_10 = (MR_Integer) ((MR_Unsigned) NumBuckets_7 - (MR_Unsigned) 1);
    *HashSlot_8 = (Hash_9 & Var_10);
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
    MR_Integer HashSlot_6;
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HT_4, (MR_Integer) 2))));
    MR_Integer Var_8;
    MR_ArrayPtr Var_13 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT_4, (MR_Integer) 3))));
    MR_Integer Hash_27;
    MR_Integer Var_28;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_Hash_27;

{
#define MR_PROC_LABEL mercury__hash_table__find_slot_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_13) ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 Var_8  = Max;
}
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 1))));
    func_0(((MR_Box) (Var_7)), K_5, &conv1_Hash_27);
    Hash_27 = ((MR_Integer) (conv1_Hash_27));
    Var_28 = (MR_Integer) ((MR_Unsigned) Var_8 - (MR_Unsigned) 1);
    HashSlot_6 = (Hash_27 & Var_28);
    return HashSlot_6;
  }
}

void MR_CALL 
mercury__hash_table__generic_hash_2_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Box T_3,
  MR_Integer * Hash_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Int_5;
    MR_Box conv0_Int_5;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_21, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), T_3, &conv0_Int_5);
    if (succeeded)
    {
      Int_5 = ((MR_Integer) (conv0_Int_5));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Unsigned UKey_43;

{
#define MR_PROC_LABEL mercury__hash_table__generic_hash_2_p_0

	MR_Integer I;
	MR_Unsigned U;

	I = Int_5 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	 UKey_43  = U;
}
      *Hash_4 = mercury__uint__hash_1_f_0(UKey_43);
    }
    else
    {
      MR_String String_6;
      MR_Box conv1_String_6;

      succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_21, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), T_3, &conv1_String_6);
      if (succeeded)
      {
        String_6 = ((MR_String) (conv1_String_6));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        mercury__string__hash_2_p_0(String_6, Hash_4);
      else
      {
        MR_Float Float_7;
        MR_Box conv2_Float_7;

        succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_21, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), T_3, &conv2_Float_7);
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

	F = Float_7 ;
		{

    H = MR_hash_float(F);


		;}
#undef MR_PROC_LABEL
	 *Hash_4  = H;
}
        }
        else
        {
          MR_Char Char_8;
          MR_Box conv3_Char_8;

          succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_21, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), T_3, &conv3_Char_8);
          if (succeeded)
          {
            Char_8 = ((MR_Char) (MR_Word) conv3_Char_8);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Unsigned Var_66;
            MR_Integer Var_67;

{
#define MR_PROC_LABEL mercury__hash_table__generic_hash_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_8 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 Var_67  = Int;
}
{
#define MR_PROC_LABEL mercury__hash_table__generic_hash_2_p_0

	MR_Integer I;
	MR_Unsigned U;

	I = Var_67 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	 Var_66  = U;
}
            *Hash_4 = mercury__uint__hash_1_f_0(Var_66);
          }
          else
          {
            MR_Word Univ_9;
            MR_Box conv4_Univ_9;

            succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_21, (MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), T_3, &conv4_Univ_9);
            if (succeeded)
            {
              Univ_9 = ((MR_Word) (conv4_Univ_9));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word TypeInfo_27_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 0))));
              MR_Box Var_16 = (MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 1));
              MR_Word next_value_of_TypeInfo_for_T_21 = TypeInfo_27_27;
              MR_Box next_value_of_T_3 = Var_16;

              // direct tailcall eliminated
              ;
              TypeInfo_for_T_21 = next_value_of_TypeInfo_for_T_21;
              T_3 = next_value_of_T_3;
              continue;
            }
            else
            {
              MR_Word TypeInfo_28_28;
              MR_ArrayPtr Array_10;
              MR_ArrayPtr conv5_Array_10;

              succeeded = mercury__array__dynamic_cast_to_array_2_p_0(TypeInfo_for_T_21, &TypeInfo_28_28, T_3, &conv5_Array_10);
              if (succeeded)
              {
                Array_10 = (MR_ArrayPtr) (conv5_Array_10);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Integer Var_79;
                MR_Integer Var_80;

                Var_79 = mercury__array__min_1_f_0(TypeInfo_28_28, (MR_ArrayPtr) (Array_10));
                Var_80 = mercury__array__max_1_f_0(TypeInfo_28_28, (MR_ArrayPtr) (Array_10));
                mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_52_56_95_95_91_50_44_32_51_93_95_48_6_p_in__array_0(TypeInfo_28_28, Array_10, Var_79, Var_80, (MR_Integer) 0, Hash_4);
              }
              else
              {
                MR_String FunctorName_11;
                MR_Integer Arity_12;
                MR_Word Args_13;
                MR_Integer Hash0_14;
                MR_Integer Hash1_15;
                MR_Integer Var_87;
                MR_Integer Var_88;
                MR_Integer Var_89;
                MR_Integer Var_90;

                mercury__deconstruct__deconstruct_5_p_1(TypeInfo_for_T_21, T_3, (MR_Integer) 1, &FunctorName_11, &Arity_12, &Args_13);
                mercury__string__hash_2_p_0(FunctorName_11, &Hash0_14);
                Var_87 = (Hash0_14 << Arity_12);
{
#define MR_PROC_LABEL mercury__hash_table__generic_hash_2_p_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Var_90  = Bits;
}
                Var_89 = (MR_Integer) ((MR_Unsigned) Var_90 - (MR_Unsigned) Arity_12);
                Var_88 = (Hash0_14 >> Var_89);
                Hash1_15 = (Var_87 ^ Var_88);
                mercury__hash_table__foldl__ho4_4_p_in__list_0(Args_13, Hash1_15, Hash_4);
              }
            }
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_52_56_95_95_91_50_44_32_51_93_95_48_6_p_in__array_0(
  MR_Word Var_19,
  MR_ArrayPtr HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Integer HeadVar__5_11,
  MR_Integer * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__4_10 < HeadVar__3_9);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *HeadVar__6_12 = HeadVar__5_11;
    else
    {
      MR_Box Var_13;
      MR_Integer Var_14;
      MR_Integer Var_15;
      MR_Integer HashValue_27;
      MR_Integer Var_32;
      MR_Integer Var_33;
      MR_Integer Var_34;
      MR_Integer Var_35;
      MR_Integer next_value_of_HeadVar__3_9;
      MR_Integer next_value_of_HeadVar__5_11;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_52_56_95_95_91_50_44_32_51_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__2_8) ;
	Index = HeadVar__3_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 Var_13  = (MR_Box) Item;
}
      mercury__hash_table__generic_hash_2_p_0(Var_19, Var_13, &HashValue_27);
      Var_32 = (HeadVar__5_11 << HashValue_27);
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_52_56_95_95_91_50_44_32_51_93_95_48_6_p_in__array_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Var_35  = Bits;
}
      Var_34 = (MR_Integer) ((MR_Unsigned) Var_35 - (MR_Unsigned) HashValue_27);
      Var_33 = (HeadVar__5_11 >> Var_34);
      Var_14 = (Var_32 ^ Var_33);
      Var_15 = (MR_Integer) ((MR_Unsigned) HeadVar__3_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_9 = Var_15;
      next_value_of_HeadVar__5_11 = Var_14;
      HeadVar__3_9 = next_value_of_HeadVar__3_9;
      HeadVar__5_11 = next_value_of_HeadVar__5_11;
      continue;
    }
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
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_13;
      MR_Integer HashValue_55;
      MR_Integer Var_60;
      MR_Integer Var_61;
      MR_Integer Var_62;
      MR_Integer Var_63;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_HeadVar__3_3;

      mercury__hash_table__generic_hash_2_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), ((MR_Box) (Var_9)), &HashValue_55);
      Var_60 = (HeadVar__3_3 << HashValue_55);
{
#define MR_PROC_LABEL mercury__hash_table__foldl__ho4_4_p_in__list_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Var_63  = Bits;
}
      Var_62 = (MR_Integer) ((MR_Unsigned) Var_63 - (MR_Unsigned) HashValue_55);
      Var_61 = (HeadVar__3_3 >> Var_62);
      Var_13 = (Var_60 ^ Var_61);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_10;
      next_value_of_HeadVar__3_3 = Var_13;
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
  MR_Integer * Hash_4)
{
  mercury__string__hash_2_p_0(S_3, Hash_4);
}

void MR_CALL 
mercury__hash_table__char_hash_2_p_0(
  MR_Char C_3,
  MR_Integer * Hash_4)
{
  {
    MR_Unsigned Var_9;
    MR_Integer Var_10;

{
#define MR_PROC_LABEL mercury__hash_table__char_hash_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = C_3 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 Var_10  = Int;
}
{
#define MR_PROC_LABEL mercury__hash_table__char_hash_2_p_0

	MR_Integer I;
	MR_Unsigned U;

	I = Var_10 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	 Var_9  = U;
}
    *Hash_4 = mercury__uint__hash_1_f_0(Var_9);
  }
}

void MR_CALL 
mercury__hash_table__float_hash_2_p_0(
  MR_Float F_3,
  MR_Integer * Hash_4)
{
  {
{
#define MR_PROC_LABEL mercury__hash_table__float_hash_2_p_0

	MR_Float F;
	MR_Integer H;

	F = F_3 ;
		{

    H = MR_hash_float(F);


		;}
#undef MR_PROC_LABEL
	 *Hash_4  = H;
}
  }
}

void MR_CALL 
mercury__hash_table__uint_hash_2_p_0(
  MR_Unsigned Key_3,
  MR_Integer * Hash_4)
{
  *Hash_4 = mercury__uint__hash_1_f_0(Key_3);
}

void MR_CALL 
mercury__hash_table__int_hash_2_p_0(
  MR_Integer Key_3,
  MR_Integer * Hash_4)
{
  {
    MR_Unsigned UKey_5;

{
#define MR_PROC_LABEL mercury__hash_table__int_hash_2_p_0

	MR_Integer I;
	MR_Unsigned U;

	I = Key_3 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	 UKey_5  = U;
}
    *Hash_4 = mercury__uint__hash_1_f_0(UKey_5);
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
    MR_ArrayPtr Var_21 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT_10, (MR_Integer) 3))));
    MR_Integer Var_50;
    MR_Integer Var_51;

{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_21) ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 Var_50  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_21) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 Var_51  = Max;
}
    succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_55_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(TypeInfo_for_K_28, TypeInfo_for_V_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, P_9, Var_50, Var_51, Var_21, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
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
  MR_Integer HeadVar__2_12,
  MR_Integer HeadVar__3_13,
  MR_ArrayPtr HeadVar__4_14,
  MR_Box HeadVar__5_15,
  MR_Box * HeadVar__6_16,
  MR_Box HeadVar__7_17,
  MR_Box * HeadVar__8_18,
  MR_Box HeadVar__9_19,
  MR_Box * HeadVar__10_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_13 < HeadVar__2_12);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *HeadVar__10_20 = HeadVar__9_19;
      *HeadVar__8_18 = HeadVar__7_17;
      *HeadVar__6_16 = HeadVar__5_15;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_21;
      MR_Box Var_22;
      MR_Box Var_23;
      MR_Box Var_24;
      MR_Integer Var_25;
      MR_Integer Var_26;
      MR_Box conv0_Item;
      MR_Integer next_value_of_HeadVar__2_12;
      MR_Box next_value_of_HeadVar__5_15;
      MR_Box next_value_of_HeadVar__7_17;
      MR_Box next_value_of_HeadVar__9_19;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_55_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__4_14) ;
	Index = HeadVar__2_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      Var_21 = ((MR_Word) (conv0_Item));
}
      succeeded = mercury__hash_table__fold3_p_8_p_5(Var_34, Var_35, Var_36, Var_37, Var_38, Var_39, Var_21, HeadVar__5_15, &Var_22, HeadVar__7_17, &Var_23, HeadVar__9_19, &Var_24);
      if (succeeded)
      {
        Var_26 = (MR_Integer) 1;
        Var_25 = (MR_Integer) ((MR_Unsigned) HeadVar__2_12 + (MR_Unsigned) Var_26);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_12 = Var_25;
        next_value_of_HeadVar__5_15 = Var_22;
        next_value_of_HeadVar__7_17 = Var_23;
        next_value_of_HeadVar__9_19 = Var_24;
        HeadVar__2_12 = next_value_of_HeadVar__2_12;
        HeadVar__5_15 = next_value_of_HeadVar__5_15;
        HeadVar__7_17 = next_value_of_HeadVar__7_17;
        HeadVar__9_19 = next_value_of_HeadVar__9_19;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold3_p_8_p_5(
  MR_Word TypeInfo_for_K_39,
  MR_Word TypeInfo_for_V_40,
  MR_Word TypeInfo_for_A_41,
  MR_Word TypeInfo_for_B_42,
  MR_Word TypeInfo_for_C_43,
  MR_Word P_9,
  MR_Word HB_10,
  MR_Box STATE_VARIABLE_A_0_21,
  MR_Box * STATE_VARIABLE_A_22,
  MR_Box STATE_VARIABLE_B_0_23,
  MR_Box * STATE_VARIABLE_B_24,
  MR_Box STATE_VARIABLE_C_0_25,
  MR_Box * STATE_VARIABLE_C_26)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HB_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_A_22 = STATE_VARIABLE_A_0_21;
          *STATE_VARIABLE_B_24 = STATE_VARIABLE_B_0_23;
          *STATE_VARIABLE_C_26 = STATE_VARIABLE_C_0_25;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_14 = (MR_hl_field(MR_mktag(1), HB_10, (MR_Integer) 0));
          MR_Box V_15 = (MR_hl_field(MR_mktag(1), HB_10, (MR_Integer) 1));
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));

          succeeded = func_0(((MR_Box) (P_9)), K_14, V_15, STATE_VARIABLE_A_0_21, STATE_VARIABLE_A_22, STATE_VARIABLE_B_0_23, STATE_VARIABLE_B_24, STATE_VARIABLE_C_0_25, STATE_VARIABLE_C_26);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_16 = (MR_hl_field(MR_mktag(2), HB_10, (MR_Integer) 0));
          MR_Box V0_17 = (MR_hl_field(MR_mktag(2), HB_10, (MR_Integer) 1));
          MR_Box K1_18 = (MR_hl_field(MR_mktag(2), HB_10, (MR_Integer) 2));
          MR_Box V1_19 = (MR_hl_field(MR_mktag(2), HB_10, (MR_Integer) 3));
          MR_Word KVs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB_10, (MR_Integer) 4))));
          MR_Box STATE_VARIABLE_A_27_27;
          MR_Box STATE_VARIABLE_B_28_28;
          MR_Box STATE_VARIABLE_C_29_29;
          MR_Box STATE_VARIABLE_A_30_30;
          MR_Box STATE_VARIABLE_B_31_31;
          MR_Box STATE_VARIABLE_C_32_32;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));
          MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

          succeeded = func_1(((MR_Box) (P_9)), K0_16, V0_17, STATE_VARIABLE_A_0_21, &STATE_VARIABLE_A_27_27, STATE_VARIABLE_B_0_23, &STATE_VARIABLE_B_28_28, STATE_VARIABLE_C_0_25, &STATE_VARIABLE_C_29_29);
          if (succeeded)
          {
            func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));
            succeeded = func_2(((MR_Box) (P_9)), K1_18, V1_19, STATE_VARIABLE_A_27_27, &STATE_VARIABLE_A_30_30, STATE_VARIABLE_B_28_28, &STATE_VARIABLE_B_31_31, STATE_VARIABLE_C_29_29, &STATE_VARIABLE_C_32_32);
            if (succeeded)
              succeeded = mercury__kv_list__foldl3_8_p_5(TypeInfo_for_K_39, TypeInfo_for_V_40, TypeInfo_for_A_41, TypeInfo_for_B_42, TypeInfo_for_C_43, P_9, KVs_20, STATE_VARIABLE_A_30_30, STATE_VARIABLE_A_22, STATE_VARIABLE_B_31_31, STATE_VARIABLE_B_24, STATE_VARIABLE_C_32_32, STATE_VARIABLE_C_26);
          }
        }
        break;
    }
    return succeeded;
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
    MR_ArrayPtr Var_21 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT_10, (MR_Integer) 3))));
    MR_Integer Var_50;
    MR_Integer Var_51;

{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_21) ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 Var_50  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_21) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 Var_51  = Max;
}
    succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(TypeInfo_for_K_28, TypeInfo_for_V_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, P_9, Var_50, Var_51, Var_21, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
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
  MR_Integer HeadVar__2_12,
  MR_Integer HeadVar__3_13,
  MR_ArrayPtr HeadVar__4_14,
  MR_Box HeadVar__5_15,
  MR_Box * HeadVar__6_16,
  MR_Box HeadVar__7_17,
  MR_Box * HeadVar__8_18,
  MR_Box HeadVar__9_19,
  MR_Box * HeadVar__10_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_13 < HeadVar__2_12);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *HeadVar__10_20 = HeadVar__9_19;
      *HeadVar__8_18 = HeadVar__7_17;
      *HeadVar__6_16 = HeadVar__5_15;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_21;
      MR_Box Var_22;
      MR_Box Var_23;
      MR_Box Var_24;
      MR_Integer Var_25;
      MR_Integer Var_26;
      MR_Box conv0_Item;
      MR_Integer next_value_of_HeadVar__2_12;
      MR_Box next_value_of_HeadVar__5_15;
      MR_Box next_value_of_HeadVar__7_17;
      MR_Box next_value_of_HeadVar__9_19;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__4_14) ;
	Index = HeadVar__2_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      Var_21 = ((MR_Word) (conv0_Item));
}
      succeeded = mercury__hash_table__fold3_p_8_p_4(Var_34, Var_35, Var_36, Var_37, Var_38, Var_39, Var_21, HeadVar__5_15, &Var_22, HeadVar__7_17, &Var_23, HeadVar__9_19, &Var_24);
      if (succeeded)
      {
        Var_26 = (MR_Integer) 1;
        Var_25 = (MR_Integer) ((MR_Unsigned) HeadVar__2_12 + (MR_Unsigned) Var_26);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_12 = Var_25;
        next_value_of_HeadVar__5_15 = Var_22;
        next_value_of_HeadVar__7_17 = Var_23;
        next_value_of_HeadVar__9_19 = Var_24;
        HeadVar__2_12 = next_value_of_HeadVar__2_12;
        HeadVar__5_15 = next_value_of_HeadVar__5_15;
        HeadVar__7_17 = next_value_of_HeadVar__7_17;
        HeadVar__9_19 = next_value_of_HeadVar__9_19;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold3_p_8_p_4(
  MR_Word TypeInfo_for_K_39,
  MR_Word TypeInfo_for_V_40,
  MR_Word TypeInfo_for_A_41,
  MR_Word TypeInfo_for_B_42,
  MR_Word TypeInfo_for_C_43,
  MR_Word P_9,
  MR_Word HB_10,
  MR_Box STATE_VARIABLE_A_0_21,
  MR_Box * STATE_VARIABLE_A_22,
  MR_Box STATE_VARIABLE_B_0_23,
  MR_Box * STATE_VARIABLE_B_24,
  MR_Box STATE_VARIABLE_C_0_25,
  MR_Box * STATE_VARIABLE_C_26)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HB_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_A_22 = STATE_VARIABLE_A_0_21;
          *STATE_VARIABLE_B_24 = STATE_VARIABLE_B_0_23;
          *STATE_VARIABLE_C_26 = STATE_VARIABLE_C_0_25;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_14 = (MR_hl_field(MR_mktag(1), HB_10, (MR_Integer) 0));
          MR_Box V_15 = (MR_hl_field(MR_mktag(1), HB_10, (MR_Integer) 1));
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));

          succeeded = func_0(((MR_Box) (P_9)), K_14, V_15, STATE_VARIABLE_A_0_21, STATE_VARIABLE_A_22, STATE_VARIABLE_B_0_23, STATE_VARIABLE_B_24, STATE_VARIABLE_C_0_25, STATE_VARIABLE_C_26);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_16 = (MR_hl_field(MR_mktag(2), HB_10, (MR_Integer) 0));
          MR_Box V0_17 = (MR_hl_field(MR_mktag(2), HB_10, (MR_Integer) 1));
          MR_Box K1_18 = (MR_hl_field(MR_mktag(2), HB_10, (MR_Integer) 2));
          MR_Box V1_19 = (MR_hl_field(MR_mktag(2), HB_10, (MR_Integer) 3));
          MR_Word KVs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB_10, (MR_Integer) 4))));
          MR_Box STATE_VARIABLE_A_27_27;
          MR_Box STATE_VARIABLE_B_28_28;
          MR_Box STATE_VARIABLE_C_29_29;
          MR_Box STATE_VARIABLE_A_30_30;
          MR_Box STATE_VARIABLE_B_31_31;
          MR_Box STATE_VARIABLE_C_32_32;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));
          MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

          succeeded = func_1(((MR_Box) (P_9)), K0_16, V0_17, STATE_VARIABLE_A_0_21, &STATE_VARIABLE_A_27_27, STATE_VARIABLE_B_0_23, &STATE_VARIABLE_B_28_28, STATE_VARIABLE_C_0_25, &STATE_VARIABLE_C_29_29);
          if (succeeded)
          {
            func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));
            succeeded = func_2(((MR_Box) (P_9)), K1_18, V1_19, STATE_VARIABLE_A_27_27, &STATE_VARIABLE_A_30_30, STATE_VARIABLE_B_28_28, &STATE_VARIABLE_B_31_31, STATE_VARIABLE_C_29_29, &STATE_VARIABLE_C_32_32);
            if (succeeded)
              succeeded = mercury__kv_list__foldl3_8_p_4(TypeInfo_for_K_39, TypeInfo_for_V_40, TypeInfo_for_A_41, TypeInfo_for_B_42, TypeInfo_for_C_43, P_9, KVs_20, STATE_VARIABLE_A_30_30, STATE_VARIABLE_A_22, STATE_VARIABLE_B_31_31, STATE_VARIABLE_B_24, STATE_VARIABLE_C_32_32, STATE_VARIABLE_C_26);
          }
        }
        break;
    }
    return succeeded;
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
    MR_ArrayPtr Var_21 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT_10, (MR_Integer) 3))));
    MR_Integer Var_50;
    MR_Integer Var_51;

{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_21) ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 Var_50  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_21) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 Var_51  = Max;
}
    succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(TypeInfo_for_K_28, TypeInfo_for_V_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, P_9, Var_50, Var_51, Var_21, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
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
  MR_Integer HeadVar__2_12,
  MR_Integer HeadVar__3_13,
  MR_ArrayPtr HeadVar__4_14,
  MR_Box HeadVar__5_15,
  MR_Box * HeadVar__6_16,
  MR_Box HeadVar__7_17,
  MR_Box * HeadVar__8_18,
  MR_Box HeadVar__9_19,
  MR_Box * HeadVar__10_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_13 < HeadVar__2_12);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *HeadVar__10_20 = HeadVar__9_19;
      *HeadVar__8_18 = HeadVar__7_17;
      *HeadVar__6_16 = HeadVar__5_15;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_21;
      MR_Box Var_22;
      MR_Box Var_23;
      MR_Box Var_24;
      MR_Integer Var_25;
      MR_Integer Var_26;
      MR_Box conv0_Item;
      MR_Integer next_value_of_HeadVar__2_12;
      MR_Box next_value_of_HeadVar__5_15;
      MR_Box next_value_of_HeadVar__7_17;
      MR_Box next_value_of_HeadVar__9_19;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__4_14) ;
	Index = HeadVar__2_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      Var_21 = ((MR_Word) (conv0_Item));
}
      succeeded = mercury__hash_table__fold3_p_8_p_3(Var_34, Var_35, Var_36, Var_37, Var_38, Var_39, Var_21, HeadVar__5_15, &Var_22, HeadVar__7_17, &Var_23, HeadVar__9_19, &Var_24);
      if (succeeded)
      {
        Var_26 = (MR_Integer) 1;
        Var_25 = (MR_Integer) ((MR_Unsigned) HeadVar__2_12 + (MR_Unsigned) Var_26);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_12 = Var_25;
        next_value_of_HeadVar__5_15 = Var_22;
        next_value_of_HeadVar__7_17 = Var_23;
        next_value_of_HeadVar__9_19 = Var_24;
        HeadVar__2_12 = next_value_of_HeadVar__2_12;
        HeadVar__5_15 = next_value_of_HeadVar__5_15;
        HeadVar__7_17 = next_value_of_HeadVar__7_17;
        HeadVar__9_19 = next_value_of_HeadVar__9_19;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold3_p_8_p_3(
  MR_Word TypeInfo_for_K_39,
  MR_Word TypeInfo_for_V_40,
  MR_Word TypeInfo_for_A_41,
  MR_Word TypeInfo_for_B_42,
  MR_Word TypeInfo_for_C_43,
  MR_Word P_9,
  MR_Word HB_10,
  MR_Box STATE_VARIABLE_A_0_21,
  MR_Box * STATE_VARIABLE_A_22,
  MR_Box STATE_VARIABLE_B_0_23,
  MR_Box * STATE_VARIABLE_B_24,
  MR_Box STATE_VARIABLE_C_0_25,
  MR_Box * STATE_VARIABLE_C_26)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HB_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_A_22 = STATE_VARIABLE_A_0_21;
          *STATE_VARIABLE_B_24 = STATE_VARIABLE_B_0_23;
          *STATE_VARIABLE_C_26 = STATE_VARIABLE_C_0_25;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_14 = (MR_hl_field(MR_mktag(1), HB_10, (MR_Integer) 0));
          MR_Box V_15 = (MR_hl_field(MR_mktag(1), HB_10, (MR_Integer) 1));
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));

          succeeded = func_0(((MR_Box) (P_9)), K_14, V_15, STATE_VARIABLE_A_0_21, STATE_VARIABLE_A_22, STATE_VARIABLE_B_0_23, STATE_VARIABLE_B_24, STATE_VARIABLE_C_0_25, STATE_VARIABLE_C_26);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_16 = (MR_hl_field(MR_mktag(2), HB_10, (MR_Integer) 0));
          MR_Box V0_17 = (MR_hl_field(MR_mktag(2), HB_10, (MR_Integer) 1));
          MR_Box K1_18 = (MR_hl_field(MR_mktag(2), HB_10, (MR_Integer) 2));
          MR_Box V1_19 = (MR_hl_field(MR_mktag(2), HB_10, (MR_Integer) 3));
          MR_Word KVs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB_10, (MR_Integer) 4))));
          MR_Box STATE_VARIABLE_A_27_27;
          MR_Box STATE_VARIABLE_B_28_28;
          MR_Box STATE_VARIABLE_C_29_29;
          MR_Box STATE_VARIABLE_A_30_30;
          MR_Box STATE_VARIABLE_B_31_31;
          MR_Box STATE_VARIABLE_C_32_32;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));
          MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

          succeeded = func_1(((MR_Box) (P_9)), K0_16, V0_17, STATE_VARIABLE_A_0_21, &STATE_VARIABLE_A_27_27, STATE_VARIABLE_B_0_23, &STATE_VARIABLE_B_28_28, STATE_VARIABLE_C_0_25, &STATE_VARIABLE_C_29_29);
          if (succeeded)
          {
            func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));
            succeeded = func_2(((MR_Box) (P_9)), K1_18, V1_19, STATE_VARIABLE_A_27_27, &STATE_VARIABLE_A_30_30, STATE_VARIABLE_B_28_28, &STATE_VARIABLE_B_31_31, STATE_VARIABLE_C_29_29, &STATE_VARIABLE_C_32_32);
            if (succeeded)
              succeeded = mercury__kv_list__foldl3_8_p_3(TypeInfo_for_K_39, TypeInfo_for_V_40, TypeInfo_for_A_41, TypeInfo_for_B_42, TypeInfo_for_C_43, P_9, KVs_20, STATE_VARIABLE_A_30_30, STATE_VARIABLE_A_22, STATE_VARIABLE_B_31_31, STATE_VARIABLE_B_24, STATE_VARIABLE_C_32_32, STATE_VARIABLE_C_26);
          }
        }
        break;
    }
    return succeeded;
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
    MR_ArrayPtr Var_21 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT_10, (MR_Integer) 3))));
    MR_Integer Var_50;
    MR_Integer Var_51;

{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_21) ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 Var_50  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_21) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 Var_51  = Max;
}
    mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_52_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(TypeInfo_for_K_28, TypeInfo_for_V_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, P_9, Var_50, Var_51, Var_21, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
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
  MR_Integer HeadVar__2_12,
  MR_Integer HeadVar__3_13,
  MR_ArrayPtr HeadVar__4_14,
  MR_Box HeadVar__5_15,
  MR_Box * HeadVar__6_16,
  MR_Box HeadVar__7_17,
  MR_Box * HeadVar__8_18,
  MR_Box HeadVar__9_19,
  MR_Box * HeadVar__10_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_13 < HeadVar__2_12);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *HeadVar__10_20 = HeadVar__9_19;
      *HeadVar__8_18 = HeadVar__7_17;
      *HeadVar__6_16 = HeadVar__5_15;
    }
    else
    {
      MR_Word Var_21;
      MR_Box Var_22;
      MR_Box Var_23;
      MR_Box Var_24;
      MR_Integer Var_25;
      MR_Box conv0_Item;
      MR_Integer next_value_of_HeadVar__2_12;
      MR_Box next_value_of_HeadVar__5_15;
      MR_Box next_value_of_HeadVar__7_17;
      MR_Box next_value_of_HeadVar__9_19;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_52_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__4_14) ;
	Index = HeadVar__2_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      Var_21 = ((MR_Word) (conv0_Item));
}
      mercury__hash_table__fold3_p_8_p_2(Var_34, Var_35, Var_36, Var_37, Var_38, Var_39, Var_21, HeadVar__5_15, &Var_22, HeadVar__7_17, &Var_23, HeadVar__9_19, &Var_24);
      Var_25 = (MR_Integer) ((MR_Unsigned) HeadVar__2_12 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_12 = Var_25;
      next_value_of_HeadVar__5_15 = Var_22;
      next_value_of_HeadVar__7_17 = Var_23;
      next_value_of_HeadVar__9_19 = Var_24;
      HeadVar__2_12 = next_value_of_HeadVar__2_12;
      HeadVar__5_15 = next_value_of_HeadVar__5_15;
      HeadVar__7_17 = next_value_of_HeadVar__7_17;
      HeadVar__9_19 = next_value_of_HeadVar__9_19;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__hash_table__fold3_p_8_p_2(
  MR_Word TypeInfo_for_K_39,
  MR_Word TypeInfo_for_V_40,
  MR_Word TypeInfo_for_A_41,
  MR_Word TypeInfo_for_B_42,
  MR_Word TypeInfo_for_C_43,
  MR_Word P_9,
  MR_Word HB_10,
  MR_Box STATE_VARIABLE_A_0_21,
  MR_Box * STATE_VARIABLE_A_22,
  MR_Box STATE_VARIABLE_B_0_23,
  MR_Box * STATE_VARIABLE_B_24,
  MR_Box STATE_VARIABLE_C_0_25,
  MR_Box * STATE_VARIABLE_C_26)
{
  switch (MR_tag((MR_Word) HB_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_A_22 = STATE_VARIABLE_A_0_21;
        *STATE_VARIABLE_B_24 = STATE_VARIABLE_B_0_23;
        *STATE_VARIABLE_C_26 = STATE_VARIABLE_C_0_25;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box K_14 = (MR_hl_field(MR_mktag(1), HB_10, (MR_Integer) 0));
        MR_Box V_15 = (MR_hl_field(MR_mktag(1), HB_10, (MR_Integer) 1));
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));

        func_0(((MR_Box) (P_9)), K_14, V_15, STATE_VARIABLE_A_0_21, STATE_VARIABLE_A_22, STATE_VARIABLE_B_0_23, STATE_VARIABLE_B_24, STATE_VARIABLE_C_0_25, STATE_VARIABLE_C_26);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box K0_16 = (MR_hl_field(MR_mktag(2), HB_10, (MR_Integer) 0));
        MR_Box V0_17 = (MR_hl_field(MR_mktag(2), HB_10, (MR_Integer) 1));
        MR_Box K1_18 = (MR_hl_field(MR_mktag(2), HB_10, (MR_Integer) 2));
        MR_Box V1_19 = (MR_hl_field(MR_mktag(2), HB_10, (MR_Integer) 3));
        MR_Word KVs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB_10, (MR_Integer) 4))));
        MR_Box STATE_VARIABLE_A_27_27;
        MR_Box STATE_VARIABLE_B_28_28;
        MR_Box STATE_VARIABLE_C_29_29;
        MR_Box STATE_VARIABLE_A_30_30;
        MR_Box STATE_VARIABLE_B_31_31;
        MR_Box STATE_VARIABLE_C_32_32;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

        func_1(((MR_Box) (P_9)), K0_16, V0_17, STATE_VARIABLE_A_0_21, &STATE_VARIABLE_A_27_27, STATE_VARIABLE_B_0_23, &STATE_VARIABLE_B_28_28, STATE_VARIABLE_C_0_25, &STATE_VARIABLE_C_29_29);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));
        func_2(((MR_Box) (P_9)), K1_18, V1_19, STATE_VARIABLE_A_27_27, &STATE_VARIABLE_A_30_30, STATE_VARIABLE_B_28_28, &STATE_VARIABLE_B_31_31, STATE_VARIABLE_C_29_29, &STATE_VARIABLE_C_32_32);
        mercury__kv_list__foldl3_8_p_2(TypeInfo_for_K_39, TypeInfo_for_V_40, TypeInfo_for_A_41, TypeInfo_for_B_42, TypeInfo_for_C_43, P_9, KVs_20, STATE_VARIABLE_A_30_30, STATE_VARIABLE_A_22, STATE_VARIABLE_B_31_31, STATE_VARIABLE_B_24, STATE_VARIABLE_C_32_32, STATE_VARIABLE_C_26);
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
    MR_ArrayPtr Var_21 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT_10, (MR_Integer) 3))));
    MR_Integer Var_50;
    MR_Integer Var_51;

{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_21) ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 Var_50  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_21) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 Var_51  = Max;
}
    mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(TypeInfo_for_K_28, TypeInfo_for_V_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, P_9, Var_50, Var_51, Var_21, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
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
  MR_Integer HeadVar__2_12,
  MR_Integer HeadVar__3_13,
  MR_ArrayPtr HeadVar__4_14,
  MR_Box HeadVar__5_15,
  MR_Box * HeadVar__6_16,
  MR_Box HeadVar__7_17,
  MR_Box * HeadVar__8_18,
  MR_Box HeadVar__9_19,
  MR_Box * HeadVar__10_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_13 < HeadVar__2_12);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *HeadVar__10_20 = HeadVar__9_19;
      *HeadVar__8_18 = HeadVar__7_17;
      *HeadVar__6_16 = HeadVar__5_15;
    }
    else
    {
      MR_Word Var_21;
      MR_Box Var_22;
      MR_Box Var_23;
      MR_Box Var_24;
      MR_Integer Var_25;
      MR_Box conv0_Item;
      MR_Integer next_value_of_HeadVar__2_12;
      MR_Box next_value_of_HeadVar__5_15;
      MR_Box next_value_of_HeadVar__7_17;
      MR_Box next_value_of_HeadVar__9_19;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__4_14) ;
	Index = HeadVar__2_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      Var_21 = ((MR_Word) (conv0_Item));
}
      mercury__hash_table__fold3_p_8_p_1(Var_34, Var_35, Var_36, Var_37, Var_38, Var_39, Var_21, HeadVar__5_15, &Var_22, HeadVar__7_17, &Var_23, HeadVar__9_19, &Var_24);
      Var_25 = (MR_Integer) ((MR_Unsigned) HeadVar__2_12 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_12 = Var_25;
      next_value_of_HeadVar__5_15 = Var_22;
      next_value_of_HeadVar__7_17 = Var_23;
      next_value_of_HeadVar__9_19 = Var_24;
      HeadVar__2_12 = next_value_of_HeadVar__2_12;
      HeadVar__5_15 = next_value_of_HeadVar__5_15;
      HeadVar__7_17 = next_value_of_HeadVar__7_17;
      HeadVar__9_19 = next_value_of_HeadVar__9_19;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__hash_table__fold3_p_8_p_1(
  MR_Word TypeInfo_for_K_39,
  MR_Word TypeInfo_for_V_40,
  MR_Word TypeInfo_for_A_41,
  MR_Word TypeInfo_for_B_42,
  MR_Word TypeInfo_for_C_43,
  MR_Word P_9,
  MR_Word HB_10,
  MR_Box STATE_VARIABLE_A_0_21,
  MR_Box * STATE_VARIABLE_A_22,
  MR_Box STATE_VARIABLE_B_0_23,
  MR_Box * STATE_VARIABLE_B_24,
  MR_Box STATE_VARIABLE_C_0_25,
  MR_Box * STATE_VARIABLE_C_26)
{
  switch (MR_tag((MR_Word) HB_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_A_22 = STATE_VARIABLE_A_0_21;
        *STATE_VARIABLE_B_24 = STATE_VARIABLE_B_0_23;
        *STATE_VARIABLE_C_26 = STATE_VARIABLE_C_0_25;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box K_14 = (MR_hl_field(MR_mktag(1), HB_10, (MR_Integer) 0));
        MR_Box V_15 = (MR_hl_field(MR_mktag(1), HB_10, (MR_Integer) 1));
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));

        func_0(((MR_Box) (P_9)), K_14, V_15, STATE_VARIABLE_A_0_21, STATE_VARIABLE_A_22, STATE_VARIABLE_B_0_23, STATE_VARIABLE_B_24, STATE_VARIABLE_C_0_25, STATE_VARIABLE_C_26);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box K0_16 = (MR_hl_field(MR_mktag(2), HB_10, (MR_Integer) 0));
        MR_Box V0_17 = (MR_hl_field(MR_mktag(2), HB_10, (MR_Integer) 1));
        MR_Box K1_18 = (MR_hl_field(MR_mktag(2), HB_10, (MR_Integer) 2));
        MR_Box V1_19 = (MR_hl_field(MR_mktag(2), HB_10, (MR_Integer) 3));
        MR_Word KVs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB_10, (MR_Integer) 4))));
        MR_Box STATE_VARIABLE_A_27_27;
        MR_Box STATE_VARIABLE_B_28_28;
        MR_Box STATE_VARIABLE_C_29_29;
        MR_Box STATE_VARIABLE_A_30_30;
        MR_Box STATE_VARIABLE_B_31_31;
        MR_Box STATE_VARIABLE_C_32_32;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

        func_1(((MR_Box) (P_9)), K0_16, V0_17, STATE_VARIABLE_A_0_21, &STATE_VARIABLE_A_27_27, STATE_VARIABLE_B_0_23, &STATE_VARIABLE_B_28_28, STATE_VARIABLE_C_0_25, &STATE_VARIABLE_C_29_29);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));
        func_2(((MR_Box) (P_9)), K1_18, V1_19, STATE_VARIABLE_A_27_27, &STATE_VARIABLE_A_30_30, STATE_VARIABLE_B_28_28, &STATE_VARIABLE_B_31_31, STATE_VARIABLE_C_29_29, &STATE_VARIABLE_C_32_32);
        mercury__kv_list__foldl3_8_p_1(TypeInfo_for_K_39, TypeInfo_for_V_40, TypeInfo_for_A_41, TypeInfo_for_B_42, TypeInfo_for_C_43, P_9, KVs_20, STATE_VARIABLE_A_30_30, STATE_VARIABLE_A_22, STATE_VARIABLE_B_31_31, STATE_VARIABLE_B_24, STATE_VARIABLE_C_32_32, STATE_VARIABLE_C_26);
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
    MR_ArrayPtr Var_21 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT_10, (MR_Integer) 3))));
    MR_Integer Var_50;
    MR_Integer Var_51;

{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_21) ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 Var_50  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold3_8_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_21) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 Var_51  = Max;
}
    mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_50_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0(TypeInfo_for_K_28, TypeInfo_for_V_29, TypeInfo_for_A_30, TypeInfo_for_B_31, TypeInfo_for_C_32, P_9, Var_50, Var_51, Var_21, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
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
  MR_Integer HeadVar__2_12,
  MR_Integer HeadVar__3_13,
  MR_ArrayPtr HeadVar__4_14,
  MR_Box HeadVar__5_15,
  MR_Box * HeadVar__6_16,
  MR_Box HeadVar__7_17,
  MR_Box * HeadVar__8_18,
  MR_Box HeadVar__9_19,
  MR_Box * HeadVar__10_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_13 < HeadVar__2_12);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *HeadVar__10_20 = HeadVar__9_19;
      *HeadVar__8_18 = HeadVar__7_17;
      *HeadVar__6_16 = HeadVar__5_15;
    }
    else
    {
      MR_Word Var_21;
      MR_Box Var_22;
      MR_Box Var_23;
      MR_Box Var_24;
      MR_Integer Var_25;
      MR_Box conv0_Item;
      MR_Integer next_value_of_HeadVar__2_12;
      MR_Box next_value_of_HeadVar__5_15;
      MR_Box next_value_of_HeadVar__7_17;
      MR_Box next_value_of_HeadVar__9_19;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_51_95_95_104_111_52_50_95_95_91_49_44_32_50_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__4_14) ;
	Index = HeadVar__2_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      Var_21 = ((MR_Word) (conv0_Item));
}
      mercury__hash_table__fold3_p_8_p_0(Var_34, Var_35, Var_36, Var_37, Var_38, Var_39, Var_21, HeadVar__5_15, &Var_22, HeadVar__7_17, &Var_23, HeadVar__9_19, &Var_24);
      Var_25 = (MR_Integer) ((MR_Unsigned) HeadVar__2_12 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_12 = Var_25;
      next_value_of_HeadVar__5_15 = Var_22;
      next_value_of_HeadVar__7_17 = Var_23;
      next_value_of_HeadVar__9_19 = Var_24;
      HeadVar__2_12 = next_value_of_HeadVar__2_12;
      HeadVar__5_15 = next_value_of_HeadVar__5_15;
      HeadVar__7_17 = next_value_of_HeadVar__7_17;
      HeadVar__9_19 = next_value_of_HeadVar__9_19;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__hash_table__fold3_p_8_p_0(
  MR_Word TypeInfo_for_K_39,
  MR_Word TypeInfo_for_V_40,
  MR_Word TypeInfo_for_A_41,
  MR_Word TypeInfo_for_B_42,
  MR_Word TypeInfo_for_C_43,
  MR_Word P_9,
  MR_Word HB_10,
  MR_Box STATE_VARIABLE_A_0_21,
  MR_Box * STATE_VARIABLE_A_22,
  MR_Box STATE_VARIABLE_B_0_23,
  MR_Box * STATE_VARIABLE_B_24,
  MR_Box STATE_VARIABLE_C_0_25,
  MR_Box * STATE_VARIABLE_C_26)
{
  switch (MR_tag((MR_Word) HB_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_A_22 = STATE_VARIABLE_A_0_21;
        *STATE_VARIABLE_B_24 = STATE_VARIABLE_B_0_23;
        *STATE_VARIABLE_C_26 = STATE_VARIABLE_C_0_25;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box K_14 = (MR_hl_field(MR_mktag(1), HB_10, (MR_Integer) 0));
        MR_Box V_15 = (MR_hl_field(MR_mktag(1), HB_10, (MR_Integer) 1));
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));

        func_0(((MR_Box) (P_9)), K_14, V_15, STATE_VARIABLE_A_0_21, STATE_VARIABLE_A_22, STATE_VARIABLE_B_0_23, STATE_VARIABLE_B_24, STATE_VARIABLE_C_0_25, STATE_VARIABLE_C_26);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box K0_16 = (MR_hl_field(MR_mktag(2), HB_10, (MR_Integer) 0));
        MR_Box V0_17 = (MR_hl_field(MR_mktag(2), HB_10, (MR_Integer) 1));
        MR_Box K1_18 = (MR_hl_field(MR_mktag(2), HB_10, (MR_Integer) 2));
        MR_Box V1_19 = (MR_hl_field(MR_mktag(2), HB_10, (MR_Integer) 3));
        MR_Word KVs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB_10, (MR_Integer) 4))));
        MR_Box STATE_VARIABLE_A_27_27;
        MR_Box STATE_VARIABLE_B_28_28;
        MR_Box STATE_VARIABLE_C_29_29;
        MR_Box STATE_VARIABLE_A_30_30;
        MR_Box STATE_VARIABLE_B_31_31;
        MR_Box STATE_VARIABLE_C_32_32;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

        func_1(((MR_Box) (P_9)), K0_16, V0_17, STATE_VARIABLE_A_0_21, &STATE_VARIABLE_A_27_27, STATE_VARIABLE_B_0_23, &STATE_VARIABLE_B_28_28, STATE_VARIABLE_C_0_25, &STATE_VARIABLE_C_29_29);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_9, (MR_Integer) 1))));
        func_2(((MR_Box) (P_9)), K1_18, V1_19, STATE_VARIABLE_A_27_27, &STATE_VARIABLE_A_30_30, STATE_VARIABLE_B_28_28, &STATE_VARIABLE_B_31_31, STATE_VARIABLE_C_29_29, &STATE_VARIABLE_C_32_32);
        mercury__kv_list__foldl3_8_p_0(TypeInfo_for_K_39, TypeInfo_for_V_40, TypeInfo_for_A_41, TypeInfo_for_B_42, TypeInfo_for_C_43, P_9, KVs_20, STATE_VARIABLE_A_30_30, STATE_VARIABLE_A_22, STATE_VARIABLE_B_31_31, STATE_VARIABLE_B_24, STATE_VARIABLE_C_32_32, STATE_VARIABLE_C_26);
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
    MR_ArrayPtr Var_16 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT_8, (MR_Integer) 3))));
    MR_Integer Var_39;
    MR_Integer Var_40;

{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_16) ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 Var_39  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_16) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 Var_40  = Max;
}
    succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_52_49_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(TypeInfo_for_K_22, TypeInfo_for_V_23, TypeInfo_for_A_24, TypeInfo_for_B_25, P_7, Var_39, Var_40, Var_16, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
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
  MR_Integer HeadVar__2_10,
  MR_Integer HeadVar__3_11,
  MR_ArrayPtr HeadVar__4_12,
  MR_Box HeadVar__5_13,
  MR_Box * HeadVar__6_14,
  MR_Box HeadVar__7_15,
  MR_Box * HeadVar__8_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_11 < HeadVar__2_10);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *HeadVar__8_16 = HeadVar__7_15;
      *HeadVar__6_14 = HeadVar__5_13;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_17;
      MR_Box Var_18;
      MR_Box Var_19;
      MR_Integer Var_20;
      MR_Integer Var_21;
      MR_Box conv0_Item;
      MR_Integer next_value_of_HeadVar__2_10;
      MR_Box next_value_of_HeadVar__5_13;
      MR_Box next_value_of_HeadVar__7_15;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_52_49_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__4_12) ;
	Index = HeadVar__2_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      Var_17 = ((MR_Word) (conv0_Item));
}
      succeeded = mercury__hash_table__fold2_p_6_p_5(Var_28, Var_29, Var_30, Var_31, Var_32, Var_17, HeadVar__5_13, &Var_18, HeadVar__7_15, &Var_19);
      if (succeeded)
      {
        Var_21 = (MR_Integer) 1;
        Var_20 = (MR_Integer) ((MR_Unsigned) HeadVar__2_10 + (MR_Unsigned) Var_21);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_10 = Var_20;
        next_value_of_HeadVar__5_13 = Var_18;
        next_value_of_HeadVar__7_15 = Var_19;
        HeadVar__2_10 = next_value_of_HeadVar__2_10;
        HeadVar__5_13 = next_value_of_HeadVar__5_13;
        HeadVar__7_15 = next_value_of_HeadVar__7_15;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold2_p_6_p_5(
  MR_Word TypeInfo_for_K_30,
  MR_Word TypeInfo_for_V_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word P_7,
  MR_Word HB_8,
  MR_Box STATE_VARIABLE_A_0_18,
  MR_Box * STATE_VARIABLE_A_19,
  MR_Box STATE_VARIABLE_B_0_20,
  MR_Box * STATE_VARIABLE_B_21)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HB_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_A_19 = STATE_VARIABLE_A_0_18;
          *STATE_VARIABLE_B_21 = STATE_VARIABLE_B_0_20;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_11 = (MR_hl_field(MR_mktag(1), HB_8, (MR_Integer) 0));
          MR_Box V_12 = (MR_hl_field(MR_mktag(1), HB_8, (MR_Integer) 1));
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));

          succeeded = func_0(((MR_Box) (P_7)), K_11, V_12, STATE_VARIABLE_A_0_18, STATE_VARIABLE_A_19, STATE_VARIABLE_B_0_20, STATE_VARIABLE_B_21);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_13 = (MR_hl_field(MR_mktag(2), HB_8, (MR_Integer) 0));
          MR_Box V0_14 = (MR_hl_field(MR_mktag(2), HB_8, (MR_Integer) 1));
          MR_Box K1_15 = (MR_hl_field(MR_mktag(2), HB_8, (MR_Integer) 2));
          MR_Box V1_16 = (MR_hl_field(MR_mktag(2), HB_8, (MR_Integer) 3));
          MR_Word KVs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB_8, (MR_Integer) 4))));
          MR_Box STATE_VARIABLE_A_22_22;
          MR_Box STATE_VARIABLE_B_23_23;
          MR_Box STATE_VARIABLE_A_24_24;
          MR_Box STATE_VARIABLE_B_25_25;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));
          MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

          succeeded = func_1(((MR_Box) (P_7)), K0_13, V0_14, STATE_VARIABLE_A_0_18, &STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_20, &STATE_VARIABLE_B_23_23);
          if (succeeded)
          {
            func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));
            succeeded = func_2(((MR_Box) (P_7)), K1_15, V1_16, STATE_VARIABLE_A_22_22, &STATE_VARIABLE_A_24_24, STATE_VARIABLE_B_23_23, &STATE_VARIABLE_B_25_25);
            if (succeeded)
              succeeded = mercury__kv_list__foldl2_6_p_5(TypeInfo_for_K_30, TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_B_33, P_7, KVs_17, STATE_VARIABLE_A_24_24, STATE_VARIABLE_A_19, STATE_VARIABLE_B_25_25, STATE_VARIABLE_B_21);
          }
        }
        break;
    }
    return succeeded;
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
    MR_ArrayPtr Var_16 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT_8, (MR_Integer) 3))));
    MR_Integer Var_39;
    MR_Integer Var_40;

{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_16) ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 Var_39  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_16) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 Var_40  = Max;
}
    succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(TypeInfo_for_K_22, TypeInfo_for_V_23, TypeInfo_for_A_24, TypeInfo_for_B_25, P_7, Var_39, Var_40, Var_16, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
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
  MR_Integer HeadVar__2_10,
  MR_Integer HeadVar__3_11,
  MR_ArrayPtr HeadVar__4_12,
  MR_Box HeadVar__5_13,
  MR_Box * HeadVar__6_14,
  MR_Box HeadVar__7_15,
  MR_Box * HeadVar__8_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_11 < HeadVar__2_10);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *HeadVar__8_16 = HeadVar__7_15;
      *HeadVar__6_14 = HeadVar__5_13;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_17;
      MR_Box Var_18;
      MR_Box Var_19;
      MR_Integer Var_20;
      MR_Integer Var_21;
      MR_Box conv0_Item;
      MR_Integer next_value_of_HeadVar__2_10;
      MR_Box next_value_of_HeadVar__5_13;
      MR_Box next_value_of_HeadVar__7_15;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__4_12) ;
	Index = HeadVar__2_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      Var_17 = ((MR_Word) (conv0_Item));
}
      succeeded = mercury__hash_table__fold2_p_6_p_4(Var_28, Var_29, Var_30, Var_31, Var_32, Var_17, HeadVar__5_13, &Var_18, HeadVar__7_15, &Var_19);
      if (succeeded)
      {
        Var_21 = (MR_Integer) 1;
        Var_20 = (MR_Integer) ((MR_Unsigned) HeadVar__2_10 + (MR_Unsigned) Var_21);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_10 = Var_20;
        next_value_of_HeadVar__5_13 = Var_18;
        next_value_of_HeadVar__7_15 = Var_19;
        HeadVar__2_10 = next_value_of_HeadVar__2_10;
        HeadVar__5_13 = next_value_of_HeadVar__5_13;
        HeadVar__7_15 = next_value_of_HeadVar__7_15;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold2_p_6_p_4(
  MR_Word TypeInfo_for_K_30,
  MR_Word TypeInfo_for_V_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word P_7,
  MR_Word HB_8,
  MR_Box STATE_VARIABLE_A_0_18,
  MR_Box * STATE_VARIABLE_A_19,
  MR_Box STATE_VARIABLE_B_0_20,
  MR_Box * STATE_VARIABLE_B_21)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HB_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_A_19 = STATE_VARIABLE_A_0_18;
          *STATE_VARIABLE_B_21 = STATE_VARIABLE_B_0_20;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_11 = (MR_hl_field(MR_mktag(1), HB_8, (MR_Integer) 0));
          MR_Box V_12 = (MR_hl_field(MR_mktag(1), HB_8, (MR_Integer) 1));
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));

          succeeded = func_0(((MR_Box) (P_7)), K_11, V_12, STATE_VARIABLE_A_0_18, STATE_VARIABLE_A_19, STATE_VARIABLE_B_0_20, STATE_VARIABLE_B_21);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_13 = (MR_hl_field(MR_mktag(2), HB_8, (MR_Integer) 0));
          MR_Box V0_14 = (MR_hl_field(MR_mktag(2), HB_8, (MR_Integer) 1));
          MR_Box K1_15 = (MR_hl_field(MR_mktag(2), HB_8, (MR_Integer) 2));
          MR_Box V1_16 = (MR_hl_field(MR_mktag(2), HB_8, (MR_Integer) 3));
          MR_Word KVs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB_8, (MR_Integer) 4))));
          MR_Box STATE_VARIABLE_A_22_22;
          MR_Box STATE_VARIABLE_B_23_23;
          MR_Box STATE_VARIABLE_A_24_24;
          MR_Box STATE_VARIABLE_B_25_25;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));
          MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

          succeeded = func_1(((MR_Box) (P_7)), K0_13, V0_14, STATE_VARIABLE_A_0_18, &STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_20, &STATE_VARIABLE_B_23_23);
          if (succeeded)
          {
            func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));
            succeeded = func_2(((MR_Box) (P_7)), K1_15, V1_16, STATE_VARIABLE_A_22_22, &STATE_VARIABLE_A_24_24, STATE_VARIABLE_B_23_23, &STATE_VARIABLE_B_25_25);
            if (succeeded)
              succeeded = mercury__kv_list__foldl2_6_p_4(TypeInfo_for_K_30, TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_B_33, P_7, KVs_17, STATE_VARIABLE_A_24_24, STATE_VARIABLE_A_19, STATE_VARIABLE_B_25_25, STATE_VARIABLE_B_21);
          }
        }
        break;
    }
    return succeeded;
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
    MR_ArrayPtr Var_16 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT_8, (MR_Integer) 3))));
    MR_Integer Var_39;
    MR_Integer Var_40;

{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_16) ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 Var_39  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_16) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 Var_40  = Max;
}
    succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_57_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(TypeInfo_for_K_22, TypeInfo_for_V_23, TypeInfo_for_A_24, TypeInfo_for_B_25, P_7, Var_39, Var_40, Var_16, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
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
  MR_Integer HeadVar__2_10,
  MR_Integer HeadVar__3_11,
  MR_ArrayPtr HeadVar__4_12,
  MR_Box HeadVar__5_13,
  MR_Box * HeadVar__6_14,
  MR_Box HeadVar__7_15,
  MR_Box * HeadVar__8_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_11 < HeadVar__2_10);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *HeadVar__8_16 = HeadVar__7_15;
      *HeadVar__6_14 = HeadVar__5_13;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_17;
      MR_Box Var_18;
      MR_Box Var_19;
      MR_Integer Var_20;
      MR_Integer Var_21;
      MR_Box conv0_Item;
      MR_Integer next_value_of_HeadVar__2_10;
      MR_Box next_value_of_HeadVar__5_13;
      MR_Box next_value_of_HeadVar__7_15;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_57_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__4_12) ;
	Index = HeadVar__2_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      Var_17 = ((MR_Word) (conv0_Item));
}
      succeeded = mercury__hash_table__fold2_p_6_p_3(Var_28, Var_29, Var_30, Var_31, Var_32, Var_17, HeadVar__5_13, &Var_18, HeadVar__7_15, &Var_19);
      if (succeeded)
      {
        Var_21 = (MR_Integer) 1;
        Var_20 = (MR_Integer) ((MR_Unsigned) HeadVar__2_10 + (MR_Unsigned) Var_21);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_10 = Var_20;
        next_value_of_HeadVar__5_13 = Var_18;
        next_value_of_HeadVar__7_15 = Var_19;
        HeadVar__2_10 = next_value_of_HeadVar__2_10;
        HeadVar__5_13 = next_value_of_HeadVar__5_13;
        HeadVar__7_15 = next_value_of_HeadVar__7_15;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold2_p_6_p_3(
  MR_Word TypeInfo_for_K_30,
  MR_Word TypeInfo_for_V_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word P_7,
  MR_Word HB_8,
  MR_Box STATE_VARIABLE_A_0_18,
  MR_Box * STATE_VARIABLE_A_19,
  MR_Box STATE_VARIABLE_B_0_20,
  MR_Box * STATE_VARIABLE_B_21)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HB_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_A_19 = STATE_VARIABLE_A_0_18;
          *STATE_VARIABLE_B_21 = STATE_VARIABLE_B_0_20;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_11 = (MR_hl_field(MR_mktag(1), HB_8, (MR_Integer) 0));
          MR_Box V_12 = (MR_hl_field(MR_mktag(1), HB_8, (MR_Integer) 1));
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));

          succeeded = func_0(((MR_Box) (P_7)), K_11, V_12, STATE_VARIABLE_A_0_18, STATE_VARIABLE_A_19, STATE_VARIABLE_B_0_20, STATE_VARIABLE_B_21);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_13 = (MR_hl_field(MR_mktag(2), HB_8, (MR_Integer) 0));
          MR_Box V0_14 = (MR_hl_field(MR_mktag(2), HB_8, (MR_Integer) 1));
          MR_Box K1_15 = (MR_hl_field(MR_mktag(2), HB_8, (MR_Integer) 2));
          MR_Box V1_16 = (MR_hl_field(MR_mktag(2), HB_8, (MR_Integer) 3));
          MR_Word KVs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB_8, (MR_Integer) 4))));
          MR_Box STATE_VARIABLE_A_22_22;
          MR_Box STATE_VARIABLE_B_23_23;
          MR_Box STATE_VARIABLE_A_24_24;
          MR_Box STATE_VARIABLE_B_25_25;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));
          MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

          succeeded = func_1(((MR_Box) (P_7)), K0_13, V0_14, STATE_VARIABLE_A_0_18, &STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_20, &STATE_VARIABLE_B_23_23);
          if (succeeded)
          {
            func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));
            succeeded = func_2(((MR_Box) (P_7)), K1_15, V1_16, STATE_VARIABLE_A_22_22, &STATE_VARIABLE_A_24_24, STATE_VARIABLE_B_23_23, &STATE_VARIABLE_B_25_25);
            if (succeeded)
              succeeded = mercury__kv_list__foldl2_6_p_3(TypeInfo_for_K_30, TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_B_33, P_7, KVs_17, STATE_VARIABLE_A_24_24, STATE_VARIABLE_A_19, STATE_VARIABLE_B_25_25, STATE_VARIABLE_B_21);
          }
        }
        break;
    }
    return succeeded;
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
    MR_ArrayPtr Var_16 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT_8, (MR_Integer) 3))));
    MR_Integer Var_39;
    MR_Integer Var_40;

{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_16) ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 Var_39  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_16) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 Var_40  = Max;
}
    mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(TypeInfo_for_K_22, TypeInfo_for_V_23, TypeInfo_for_A_24, TypeInfo_for_B_25, P_7, Var_39, Var_40, Var_16, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Integer HeadVar__2_10,
  MR_Integer HeadVar__3_11,
  MR_ArrayPtr HeadVar__4_12,
  MR_Box HeadVar__5_13,
  MR_Box * HeadVar__6_14,
  MR_Box HeadVar__7_15,
  MR_Box * HeadVar__8_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_11 < HeadVar__2_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *HeadVar__8_16 = HeadVar__7_15;
      *HeadVar__6_14 = HeadVar__5_13;
    }
    else
    {
      MR_Word Var_17;
      MR_Box Var_18;
      MR_Box Var_19;
      MR_Integer Var_20;
      MR_Box conv0_Item;
      MR_Integer next_value_of_HeadVar__2_10;
      MR_Box next_value_of_HeadVar__5_13;
      MR_Box next_value_of_HeadVar__7_15;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__4_12) ;
	Index = HeadVar__2_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      Var_17 = ((MR_Word) (conv0_Item));
}
      mercury__hash_table__fold2_p_6_p_2(Var_28, Var_29, Var_30, Var_31, Var_32, Var_17, HeadVar__5_13, &Var_18, HeadVar__7_15, &Var_19);
      Var_20 = (MR_Integer) ((MR_Unsigned) HeadVar__2_10 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_10 = Var_20;
      next_value_of_HeadVar__5_13 = Var_18;
      next_value_of_HeadVar__7_15 = Var_19;
      HeadVar__2_10 = next_value_of_HeadVar__2_10;
      HeadVar__5_13 = next_value_of_HeadVar__5_13;
      HeadVar__7_15 = next_value_of_HeadVar__7_15;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__hash_table__fold2_p_6_p_2(
  MR_Word TypeInfo_for_K_30,
  MR_Word TypeInfo_for_V_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word P_7,
  MR_Word HB_8,
  MR_Box STATE_VARIABLE_A_0_18,
  MR_Box * STATE_VARIABLE_A_19,
  MR_Box STATE_VARIABLE_B_0_20,
  MR_Box * STATE_VARIABLE_B_21)
{
  switch (MR_tag((MR_Word) HB_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_A_19 = STATE_VARIABLE_A_0_18;
        *STATE_VARIABLE_B_21 = STATE_VARIABLE_B_0_20;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box K_11 = (MR_hl_field(MR_mktag(1), HB_8, (MR_Integer) 0));
        MR_Box V_12 = (MR_hl_field(MR_mktag(1), HB_8, (MR_Integer) 1));
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));

        func_0(((MR_Box) (P_7)), K_11, V_12, STATE_VARIABLE_A_0_18, STATE_VARIABLE_A_19, STATE_VARIABLE_B_0_20, STATE_VARIABLE_B_21);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box K0_13 = (MR_hl_field(MR_mktag(2), HB_8, (MR_Integer) 0));
        MR_Box V0_14 = (MR_hl_field(MR_mktag(2), HB_8, (MR_Integer) 1));
        MR_Box K1_15 = (MR_hl_field(MR_mktag(2), HB_8, (MR_Integer) 2));
        MR_Box V1_16 = (MR_hl_field(MR_mktag(2), HB_8, (MR_Integer) 3));
        MR_Word KVs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB_8, (MR_Integer) 4))));
        MR_Box STATE_VARIABLE_A_22_22;
        MR_Box STATE_VARIABLE_B_23_23;
        MR_Box STATE_VARIABLE_A_24_24;
        MR_Box STATE_VARIABLE_B_25_25;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

        func_1(((MR_Box) (P_7)), K0_13, V0_14, STATE_VARIABLE_A_0_18, &STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_20, &STATE_VARIABLE_B_23_23);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));
        func_2(((MR_Box) (P_7)), K1_15, V1_16, STATE_VARIABLE_A_22_22, &STATE_VARIABLE_A_24_24, STATE_VARIABLE_B_23_23, &STATE_VARIABLE_B_25_25);
        mercury__kv_list__foldl2_6_p_2(TypeInfo_for_K_30, TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_B_33, P_7, KVs_17, STATE_VARIABLE_A_24_24, STATE_VARIABLE_A_19, STATE_VARIABLE_B_25_25, STATE_VARIABLE_B_21);
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
    MR_ArrayPtr Var_16 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT_8, (MR_Integer) 3))));
    MR_Integer Var_39;
    MR_Integer Var_40;

{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_16) ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 Var_39  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_16) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 Var_40  = Max;
}
    mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(TypeInfo_for_K_22, TypeInfo_for_V_23, TypeInfo_for_A_24, TypeInfo_for_B_25, P_7, Var_39, Var_40, Var_16, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Integer HeadVar__2_10,
  MR_Integer HeadVar__3_11,
  MR_ArrayPtr HeadVar__4_12,
  MR_Box HeadVar__5_13,
  MR_Box * HeadVar__6_14,
  MR_Box HeadVar__7_15,
  MR_Box * HeadVar__8_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_11 < HeadVar__2_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *HeadVar__8_16 = HeadVar__7_15;
      *HeadVar__6_14 = HeadVar__5_13;
    }
    else
    {
      MR_Word Var_17;
      MR_Box Var_18;
      MR_Box Var_19;
      MR_Integer Var_20;
      MR_Box conv0_Item;
      MR_Integer next_value_of_HeadVar__2_10;
      MR_Box next_value_of_HeadVar__5_13;
      MR_Box next_value_of_HeadVar__7_15;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__4_12) ;
	Index = HeadVar__2_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      Var_17 = ((MR_Word) (conv0_Item));
}
      mercury__hash_table__fold2_p_6_p_1(Var_28, Var_29, Var_30, Var_31, Var_32, Var_17, HeadVar__5_13, &Var_18, HeadVar__7_15, &Var_19);
      Var_20 = (MR_Integer) ((MR_Unsigned) HeadVar__2_10 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_10 = Var_20;
      next_value_of_HeadVar__5_13 = Var_18;
      next_value_of_HeadVar__7_15 = Var_19;
      HeadVar__2_10 = next_value_of_HeadVar__2_10;
      HeadVar__5_13 = next_value_of_HeadVar__5_13;
      HeadVar__7_15 = next_value_of_HeadVar__7_15;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__hash_table__fold2_p_6_p_1(
  MR_Word TypeInfo_for_K_30,
  MR_Word TypeInfo_for_V_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word P_7,
  MR_Word HB_8,
  MR_Box STATE_VARIABLE_A_0_18,
  MR_Box * STATE_VARIABLE_A_19,
  MR_Box STATE_VARIABLE_B_0_20,
  MR_Box * STATE_VARIABLE_B_21)
{
  switch (MR_tag((MR_Word) HB_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_A_19 = STATE_VARIABLE_A_0_18;
        *STATE_VARIABLE_B_21 = STATE_VARIABLE_B_0_20;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box K_11 = (MR_hl_field(MR_mktag(1), HB_8, (MR_Integer) 0));
        MR_Box V_12 = (MR_hl_field(MR_mktag(1), HB_8, (MR_Integer) 1));
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));

        func_0(((MR_Box) (P_7)), K_11, V_12, STATE_VARIABLE_A_0_18, STATE_VARIABLE_A_19, STATE_VARIABLE_B_0_20, STATE_VARIABLE_B_21);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box K0_13 = (MR_hl_field(MR_mktag(2), HB_8, (MR_Integer) 0));
        MR_Box V0_14 = (MR_hl_field(MR_mktag(2), HB_8, (MR_Integer) 1));
        MR_Box K1_15 = (MR_hl_field(MR_mktag(2), HB_8, (MR_Integer) 2));
        MR_Box V1_16 = (MR_hl_field(MR_mktag(2), HB_8, (MR_Integer) 3));
        MR_Word KVs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB_8, (MR_Integer) 4))));
        MR_Box STATE_VARIABLE_A_22_22;
        MR_Box STATE_VARIABLE_B_23_23;
        MR_Box STATE_VARIABLE_A_24_24;
        MR_Box STATE_VARIABLE_B_25_25;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

        func_1(((MR_Box) (P_7)), K0_13, V0_14, STATE_VARIABLE_A_0_18, &STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_20, &STATE_VARIABLE_B_23_23);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));
        func_2(((MR_Box) (P_7)), K1_15, V1_16, STATE_VARIABLE_A_22_22, &STATE_VARIABLE_A_24_24, STATE_VARIABLE_B_23_23, &STATE_VARIABLE_B_25_25);
        mercury__kv_list__foldl2_6_p_1(TypeInfo_for_K_30, TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_B_33, P_7, KVs_17, STATE_VARIABLE_A_24_24, STATE_VARIABLE_A_19, STATE_VARIABLE_B_25_25, STATE_VARIABLE_B_21);
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
    MR_ArrayPtr Var_16 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT_8, (MR_Integer) 3))));
    MR_Integer Var_39;
    MR_Integer Var_40;

{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_16) ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 Var_39  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold2_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_16) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 Var_40  = Max;
}
    mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(TypeInfo_for_K_22, TypeInfo_for_V_23, TypeInfo_for_A_24, TypeInfo_for_B_25, P_7, Var_39, Var_40, Var_16, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Integer HeadVar__2_10,
  MR_Integer HeadVar__3_11,
  MR_ArrayPtr HeadVar__4_12,
  MR_Box HeadVar__5_13,
  MR_Box * HeadVar__6_14,
  MR_Box HeadVar__7_15,
  MR_Box * HeadVar__8_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_11 < HeadVar__2_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *HeadVar__8_16 = HeadVar__7_15;
      *HeadVar__6_14 = HeadVar__5_13;
    }
    else
    {
      MR_Word Var_17;
      MR_Box Var_18;
      MR_Box Var_19;
      MR_Integer Var_20;
      MR_Box conv0_Item;
      MR_Integer next_value_of_HeadVar__2_10;
      MR_Box next_value_of_HeadVar__5_13;
      MR_Box next_value_of_HeadVar__7_15;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_8_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__4_12) ;
	Index = HeadVar__2_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      Var_17 = ((MR_Word) (conv0_Item));
}
      mercury__hash_table__fold2_p_6_p_0(Var_28, Var_29, Var_30, Var_31, Var_32, Var_17, HeadVar__5_13, &Var_18, HeadVar__7_15, &Var_19);
      Var_20 = (MR_Integer) ((MR_Unsigned) HeadVar__2_10 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_10 = Var_20;
      next_value_of_HeadVar__5_13 = Var_18;
      next_value_of_HeadVar__7_15 = Var_19;
      HeadVar__2_10 = next_value_of_HeadVar__2_10;
      HeadVar__5_13 = next_value_of_HeadVar__5_13;
      HeadVar__7_15 = next_value_of_HeadVar__7_15;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__hash_table__fold2_p_6_p_0(
  MR_Word TypeInfo_for_K_30,
  MR_Word TypeInfo_for_V_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word P_7,
  MR_Word HB_8,
  MR_Box STATE_VARIABLE_A_0_18,
  MR_Box * STATE_VARIABLE_A_19,
  MR_Box STATE_VARIABLE_B_0_20,
  MR_Box * STATE_VARIABLE_B_21)
{
  switch (MR_tag((MR_Word) HB_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_A_19 = STATE_VARIABLE_A_0_18;
        *STATE_VARIABLE_B_21 = STATE_VARIABLE_B_0_20;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box K_11 = (MR_hl_field(MR_mktag(1), HB_8, (MR_Integer) 0));
        MR_Box V_12 = (MR_hl_field(MR_mktag(1), HB_8, (MR_Integer) 1));
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));

        func_0(((MR_Box) (P_7)), K_11, V_12, STATE_VARIABLE_A_0_18, STATE_VARIABLE_A_19, STATE_VARIABLE_B_0_20, STATE_VARIABLE_B_21);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box K0_13 = (MR_hl_field(MR_mktag(2), HB_8, (MR_Integer) 0));
        MR_Box V0_14 = (MR_hl_field(MR_mktag(2), HB_8, (MR_Integer) 1));
        MR_Box K1_15 = (MR_hl_field(MR_mktag(2), HB_8, (MR_Integer) 2));
        MR_Box V1_16 = (MR_hl_field(MR_mktag(2), HB_8, (MR_Integer) 3));
        MR_Word KVs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB_8, (MR_Integer) 4))));
        MR_Box STATE_VARIABLE_A_22_22;
        MR_Box STATE_VARIABLE_B_23_23;
        MR_Box STATE_VARIABLE_A_24_24;
        MR_Box STATE_VARIABLE_B_25_25;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

        func_1(((MR_Box) (P_7)), K0_13, V0_14, STATE_VARIABLE_A_0_18, &STATE_VARIABLE_A_22_22, STATE_VARIABLE_B_0_20, &STATE_VARIABLE_B_23_23);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_7, (MR_Integer) 1))));
        func_2(((MR_Box) (P_7)), K1_15, V1_16, STATE_VARIABLE_A_22_22, &STATE_VARIABLE_A_24_24, STATE_VARIABLE_B_23_23, &STATE_VARIABLE_B_25_25);
        mercury__kv_list__foldl2_6_p_0(TypeInfo_for_K_30, TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_B_33, P_7, KVs_17, STATE_VARIABLE_A_24_24, STATE_VARIABLE_A_19, STATE_VARIABLE_B_25_25, STATE_VARIABLE_B_21);
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
    MR_ArrayPtr Var_11 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 3))));
    MR_Integer Var_28;
    MR_Integer Var_29;

{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_11) ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 Var_28  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_11) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 Var_29  = Max;
}
    succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, P_5, Var_11, Var_28, Var_29, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__4_10 < HeadVar__3_9);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *HeadVar__6_12 = HeadVar__5_11;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_13;
      MR_Box Var_14;
      MR_Integer Var_15;
      MR_Integer Var_16;
      MR_Box conv0_Item;
      MR_Integer next_value_of_HeadVar__3_9;
      MR_Box next_value_of_HeadVar__5_11;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__2_8) ;
	Index = HeadVar__3_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      Var_13 = ((MR_Word) (conv0_Item));
}
      succeeded = mercury__hash_table__fold_p_4_p_5(Var_22, Var_23, Var_24, Var_25, Var_13, HeadVar__5_11, &Var_14);
      if (succeeded)
      {
        Var_16 = (MR_Integer) 1;
        Var_15 = (MR_Integer) ((MR_Unsigned) HeadVar__3_9 + (MR_Unsigned) Var_16);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_9 = Var_15;
        next_value_of_HeadVar__5_11 = Var_14;
        HeadVar__3_9 = next_value_of_HeadVar__3_9;
        HeadVar__5_11 = next_value_of_HeadVar__5_11;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold_p_4_p_5(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V_22,
  MR_Word TypeInfo_for_A_23,
  MR_Word P_5,
  MR_Word HB_6,
  MR_Box STATE_VARIABLE_A_0_15,
  MR_Box * STATE_VARIABLE_A_16)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HB_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_A_16 = STATE_VARIABLE_A_0_15;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_8 = (MR_hl_field(MR_mktag(1), HB_6, (MR_Integer) 0));
          MR_Box V_9 = (MR_hl_field(MR_mktag(1), HB_6, (MR_Integer) 1));
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));

          succeeded = func_0(((MR_Box) (P_5)), K_8, V_9, STATE_VARIABLE_A_0_15, STATE_VARIABLE_A_16);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_10 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 0));
          MR_Box V0_11 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 1));
          MR_Box K1_12 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 2));
          MR_Box V1_13 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 3));
          MR_Word KVs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 4))));
          MR_Box STATE_VARIABLE_A_17_17;
          MR_Box STATE_VARIABLE_A_18_18;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));
          MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          succeeded = func_1(((MR_Box) (P_5)), K0_10, V0_11, STATE_VARIABLE_A_0_15, &STATE_VARIABLE_A_17_17);
          if (succeeded)
          {
            func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));
            succeeded = func_2(((MR_Box) (P_5)), K1_12, V1_13, STATE_VARIABLE_A_17_17, &STATE_VARIABLE_A_18_18);
            if (succeeded)
              succeeded = mercury__kv_list__foldl_4_p_5(TypeInfo_for_K_21, TypeInfo_for_V_22, TypeInfo_for_A_23, P_5, KVs_14, STATE_VARIABLE_A_18_18, STATE_VARIABLE_A_16);
          }
        }
        break;
    }
    return succeeded;
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
    MR_ArrayPtr Var_11 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 3))));
    MR_Integer Var_28;
    MR_Integer Var_29;

{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_11) ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 Var_28  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_11) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 Var_29  = Max;
}
    succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, P_5, Var_11, Var_28, Var_29, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__4_10 < HeadVar__3_9);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *HeadVar__6_12 = HeadVar__5_11;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_13;
      MR_Box Var_14;
      MR_Integer Var_15;
      MR_Integer Var_16;
      MR_Box conv0_Item;
      MR_Integer next_value_of_HeadVar__3_9;
      MR_Box next_value_of_HeadVar__5_11;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__2_8) ;
	Index = HeadVar__3_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      Var_13 = ((MR_Word) (conv0_Item));
}
      succeeded = mercury__hash_table__fold_p_4_p_4(Var_22, Var_23, Var_24, Var_25, Var_13, HeadVar__5_11, &Var_14);
      if (succeeded)
      {
        Var_16 = (MR_Integer) 1;
        Var_15 = (MR_Integer) ((MR_Unsigned) HeadVar__3_9 + (MR_Unsigned) Var_16);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_9 = Var_15;
        next_value_of_HeadVar__5_11 = Var_14;
        HeadVar__3_9 = next_value_of_HeadVar__3_9;
        HeadVar__5_11 = next_value_of_HeadVar__5_11;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold_p_4_p_4(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V_22,
  MR_Word TypeInfo_for_A_23,
  MR_Word P_5,
  MR_Word HB_6,
  MR_Box STATE_VARIABLE_A_0_15,
  MR_Box * STATE_VARIABLE_A_16)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HB_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_A_16 = STATE_VARIABLE_A_0_15;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_8 = (MR_hl_field(MR_mktag(1), HB_6, (MR_Integer) 0));
          MR_Box V_9 = (MR_hl_field(MR_mktag(1), HB_6, (MR_Integer) 1));
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));

          succeeded = func_0(((MR_Box) (P_5)), K_8, V_9, STATE_VARIABLE_A_0_15, STATE_VARIABLE_A_16);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_10 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 0));
          MR_Box V0_11 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 1));
          MR_Box K1_12 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 2));
          MR_Box V1_13 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 3));
          MR_Word KVs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 4))));
          MR_Box STATE_VARIABLE_A_17_17;
          MR_Box STATE_VARIABLE_A_18_18;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));
          MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          succeeded = func_1(((MR_Box) (P_5)), K0_10, V0_11, STATE_VARIABLE_A_0_15, &STATE_VARIABLE_A_17_17);
          if (succeeded)
          {
            func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));
            succeeded = func_2(((MR_Box) (P_5)), K1_12, V1_13, STATE_VARIABLE_A_17_17, &STATE_VARIABLE_A_18_18);
            if (succeeded)
              succeeded = mercury__kv_list__foldl_4_p_4(TypeInfo_for_K_21, TypeInfo_for_V_22, TypeInfo_for_A_23, P_5, KVs_14, STATE_VARIABLE_A_18_18, STATE_VARIABLE_A_16);
          }
        }
        break;
    }
    return succeeded;
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
    MR_ArrayPtr Var_11 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 3))));
    MR_Integer Var_28;
    MR_Integer Var_29;

{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_11) ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 Var_28  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_11) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 Var_29  = Max;
}
    succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, P_5, Var_11, Var_28, Var_29, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__4_10 < HeadVar__3_9);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *HeadVar__6_12 = HeadVar__5_11;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_13;
      MR_Box Var_14;
      MR_Integer Var_15;
      MR_Integer Var_16;
      MR_Box conv0_Item;
      MR_Integer next_value_of_HeadVar__3_9;
      MR_Box next_value_of_HeadVar__5_11;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__2_8) ;
	Index = HeadVar__3_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      Var_13 = ((MR_Word) (conv0_Item));
}
      succeeded = mercury__hash_table__fold_p_4_p_3(Var_22, Var_23, Var_24, Var_25, Var_13, HeadVar__5_11, &Var_14);
      if (succeeded)
      {
        Var_16 = (MR_Integer) 1;
        Var_15 = (MR_Integer) ((MR_Unsigned) HeadVar__3_9 + (MR_Unsigned) Var_16);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_9 = Var_15;
        next_value_of_HeadVar__5_11 = Var_14;
        HeadVar__3_9 = next_value_of_HeadVar__3_9;
        HeadVar__5_11 = next_value_of_HeadVar__5_11;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__hash_table__fold_p_4_p_3(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V_22,
  MR_Word TypeInfo_for_A_23,
  MR_Word P_5,
  MR_Word HB_6,
  MR_Box STATE_VARIABLE_A_0_15,
  MR_Box * STATE_VARIABLE_A_16)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HB_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_A_16 = STATE_VARIABLE_A_0_15;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_8 = (MR_hl_field(MR_mktag(1), HB_6, (MR_Integer) 0));
          MR_Box V_9 = (MR_hl_field(MR_mktag(1), HB_6, (MR_Integer) 1));
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));

          succeeded = func_0(((MR_Box) (P_5)), K_8, V_9, STATE_VARIABLE_A_0_15, STATE_VARIABLE_A_16);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_10 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 0));
          MR_Box V0_11 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 1));
          MR_Box K1_12 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 2));
          MR_Box V1_13 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 3));
          MR_Word KVs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 4))));
          MR_Box STATE_VARIABLE_A_17_17;
          MR_Box STATE_VARIABLE_A_18_18;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));
          MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          succeeded = func_1(((MR_Box) (P_5)), K0_10, V0_11, STATE_VARIABLE_A_0_15, &STATE_VARIABLE_A_17_17);
          if (succeeded)
          {
            func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));
            succeeded = func_2(((MR_Box) (P_5)), K1_12, V1_13, STATE_VARIABLE_A_17_17, &STATE_VARIABLE_A_18_18);
            if (succeeded)
              succeeded = mercury__kv_list__foldl_4_p_3(TypeInfo_for_K_21, TypeInfo_for_V_22, TypeInfo_for_A_23, P_5, KVs_14, STATE_VARIABLE_A_18_18, STATE_VARIABLE_A_16);
          }
        }
        break;
    }
    return succeeded;
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
    MR_ArrayPtr Var_11 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 3))));
    MR_Integer Var_28;
    MR_Integer Var_29;

{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_11) ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 Var_28  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_11) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 Var_29  = Max;
}
    mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, P_5, Var_11, Var_28, Var_29, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__4_10 < HeadVar__3_9);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *HeadVar__6_12 = HeadVar__5_11;
    else
    {
      MR_Word Var_13;
      MR_Box Var_14;
      MR_Integer Var_15;
      MR_Box conv0_Item;
      MR_Integer next_value_of_HeadVar__3_9;
      MR_Box next_value_of_HeadVar__5_11;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__2_8) ;
	Index = HeadVar__3_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      Var_13 = ((MR_Word) (conv0_Item));
}
      mercury__hash_table__fold_p_4_p_2(Var_22, Var_23, Var_24, Var_25, Var_13, HeadVar__5_11, &Var_14);
      Var_15 = (MR_Integer) ((MR_Unsigned) HeadVar__3_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_9 = Var_15;
      next_value_of_HeadVar__5_11 = Var_14;
      HeadVar__3_9 = next_value_of_HeadVar__3_9;
      HeadVar__5_11 = next_value_of_HeadVar__5_11;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__hash_table__fold_p_4_p_2(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V_22,
  MR_Word TypeInfo_for_A_23,
  MR_Word P_5,
  MR_Word HB_6,
  MR_Box STATE_VARIABLE_A_0_15,
  MR_Box * STATE_VARIABLE_A_16)
{
  switch (MR_tag((MR_Word) HB_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_A_16 = STATE_VARIABLE_A_0_15;
      break;
    case (MR_Integer) 1:
      {
        MR_Box K_8 = (MR_hl_field(MR_mktag(1), HB_6, (MR_Integer) 0));
        MR_Box V_9 = (MR_hl_field(MR_mktag(1), HB_6, (MR_Integer) 1));
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));

        func_0(((MR_Box) (P_5)), K_8, V_9, STATE_VARIABLE_A_0_15, STATE_VARIABLE_A_16);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box K0_10 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 0));
        MR_Box V0_11 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 1));
        MR_Box K1_12 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 2));
        MR_Box V1_13 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 3));
        MR_Word KVs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 4))));
        MR_Box STATE_VARIABLE_A_17_17;
        MR_Box STATE_VARIABLE_A_18_18;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_1(((MR_Box) (P_5)), K0_10, V0_11, STATE_VARIABLE_A_0_15, &STATE_VARIABLE_A_17_17);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));
        func_2(((MR_Box) (P_5)), K1_12, V1_13, STATE_VARIABLE_A_17_17, &STATE_VARIABLE_A_18_18);
        mercury__kv_list__foldl_4_p_2(TypeInfo_for_K_21, TypeInfo_for_V_22, TypeInfo_for_A_23, P_5, KVs_14, STATE_VARIABLE_A_18_18, STATE_VARIABLE_A_16);
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
    MR_ArrayPtr Var_11 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 3))));
    MR_Integer Var_28;
    MR_Integer Var_29;

{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_11) ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 Var_28  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_11) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 Var_29  = Max;
}
    mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, P_5, Var_11, Var_28, Var_29, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__4_10 < HeadVar__3_9);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *HeadVar__6_12 = HeadVar__5_11;
    else
    {
      MR_Word Var_13;
      MR_Box Var_14;
      MR_Integer Var_15;
      MR_Box conv0_Item;
      MR_Integer next_value_of_HeadVar__3_9;
      MR_Box next_value_of_HeadVar__5_11;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__2_8) ;
	Index = HeadVar__3_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      Var_13 = ((MR_Word) (conv0_Item));
}
      mercury__hash_table__fold_p_4_p_1(Var_22, Var_23, Var_24, Var_25, Var_13, HeadVar__5_11, &Var_14);
      Var_15 = (MR_Integer) ((MR_Unsigned) HeadVar__3_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_9 = Var_15;
      next_value_of_HeadVar__5_11 = Var_14;
      HeadVar__3_9 = next_value_of_HeadVar__3_9;
      HeadVar__5_11 = next_value_of_HeadVar__5_11;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__hash_table__fold_p_4_p_1(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V_22,
  MR_Word TypeInfo_for_A_23,
  MR_Word P_5,
  MR_Word HB_6,
  MR_Box STATE_VARIABLE_A_0_15,
  MR_Box * STATE_VARIABLE_A_16)
{
  switch (MR_tag((MR_Word) HB_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_A_16 = STATE_VARIABLE_A_0_15;
      break;
    case (MR_Integer) 1:
      {
        MR_Box K_8 = (MR_hl_field(MR_mktag(1), HB_6, (MR_Integer) 0));
        MR_Box V_9 = (MR_hl_field(MR_mktag(1), HB_6, (MR_Integer) 1));
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));

        func_0(((MR_Box) (P_5)), K_8, V_9, STATE_VARIABLE_A_0_15, STATE_VARIABLE_A_16);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box K0_10 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 0));
        MR_Box V0_11 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 1));
        MR_Box K1_12 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 2));
        MR_Box V1_13 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 3));
        MR_Word KVs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 4))));
        MR_Box STATE_VARIABLE_A_17_17;
        MR_Box STATE_VARIABLE_A_18_18;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_1(((MR_Box) (P_5)), K0_10, V0_11, STATE_VARIABLE_A_0_15, &STATE_VARIABLE_A_17_17);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));
        func_2(((MR_Box) (P_5)), K1_12, V1_13, STATE_VARIABLE_A_17_17, &STATE_VARIABLE_A_18_18);
        mercury__kv_list__foldl_4_p_1(TypeInfo_for_K_21, TypeInfo_for_V_22, TypeInfo_for_A_23, P_5, KVs_14, STATE_VARIABLE_A_18_18, STATE_VARIABLE_A_16);
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
    MR_ArrayPtr Var_11 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 3))));
    MR_Integer Var_28;
    MR_Integer Var_29;

{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_11) ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 Var_28  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_11) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 Var_29  = Max;
}
    mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, P_5, Var_11, Var_28, Var_29, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__4_10 < HeadVar__3_9);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *HeadVar__6_12 = HeadVar__5_11;
    else
    {
      MR_Word Var_13;
      MR_Box Var_14;
      MR_Integer Var_15;
      MR_Box conv0_Item;
      MR_Integer next_value_of_HeadVar__3_9;
      MR_Box next_value_of_HeadVar__5_11;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__2_8) ;
	Index = HeadVar__3_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      Var_13 = ((MR_Word) (conv0_Item));
}
      mercury__hash_table__fold_p_4_p_0(Var_22, Var_23, Var_24, Var_25, Var_13, HeadVar__5_11, &Var_14);
      Var_15 = (MR_Integer) ((MR_Unsigned) HeadVar__3_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_9 = Var_15;
      next_value_of_HeadVar__5_11 = Var_14;
      HeadVar__3_9 = next_value_of_HeadVar__3_9;
      HeadVar__5_11 = next_value_of_HeadVar__5_11;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__hash_table__fold_p_4_p_0(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V_22,
  MR_Word TypeInfo_for_A_23,
  MR_Word P_5,
  MR_Word HB_6,
  MR_Box STATE_VARIABLE_A_0_15,
  MR_Box * STATE_VARIABLE_A_16)
{
  switch (MR_tag((MR_Word) HB_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_A_16 = STATE_VARIABLE_A_0_15;
      break;
    case (MR_Integer) 1:
      {
        MR_Box K_8 = (MR_hl_field(MR_mktag(1), HB_6, (MR_Integer) 0));
        MR_Box V_9 = (MR_hl_field(MR_mktag(1), HB_6, (MR_Integer) 1));
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));

        func_0(((MR_Box) (P_5)), K_8, V_9, STATE_VARIABLE_A_0_15, STATE_VARIABLE_A_16);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box K0_10 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 0));
        MR_Box V0_11 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 1));
        MR_Box K1_12 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 2));
        MR_Box V1_13 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 3));
        MR_Word KVs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 4))));
        MR_Box STATE_VARIABLE_A_17_17;
        MR_Box STATE_VARIABLE_A_18_18;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_1(((MR_Box) (P_5)), K0_10, V0_11, STATE_VARIABLE_A_0_15, &STATE_VARIABLE_A_17_17);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));
        func_2(((MR_Box) (P_5)), K1_12, V1_13, STATE_VARIABLE_A_17_17, &STATE_VARIABLE_A_18_18);
        mercury__kv_list__foldl_4_p_0(TypeInfo_for_K_21, TypeInfo_for_V_22, TypeInfo_for_A_23, P_5, KVs_14, STATE_VARIABLE_A_18_18, STATE_VARIABLE_A_16);
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
  MR_Box A0_7)
{
  {
    MR_Box A_8;
    MR_ArrayPtr Var_10 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 3))));
    MR_Integer Var_26;
    MR_Integer Var_27;

{
#define MR_PROC_LABEL mercury__hash_table__fold_3_f_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_10) ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 Var_26  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold_3_f_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_10) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 Var_27  = Max;
}
    mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(TypeInfo_for_K_14, TypeInfo_for_V_15, TypeInfo_for_T_16, F_5, Var_10, Var_26, Var_27, A0_7, &A_8);
    return A_8;
  }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__4_10 < HeadVar__3_9);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *HeadVar__6_12 = HeadVar__5_11;
    else
    {
      MR_Word Var_13;
      MR_Box Var_14;
      MR_Integer Var_15;
      MR_Box conv0_Item;
      MR_Integer next_value_of_HeadVar__3_9;
      MR_Box next_value_of_HeadVar__5_11;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__2_8) ;
	Index = HeadVar__3_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      Var_13 = ((MR_Word) (conv0_Item));
}
      mercury__hash_table__fold_f_4_p_1(Var_22, Var_23, Var_24, Var_25, Var_13, HeadVar__5_11, &Var_14);
      Var_15 = (MR_Integer) ((MR_Unsigned) HeadVar__3_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_9 = Var_15;
      next_value_of_HeadVar__5_11 = Var_14;
      HeadVar__3_9 = next_value_of_HeadVar__3_9;
      HeadVar__5_11 = next_value_of_HeadVar__5_11;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__hash_table__fold_f_4_p_1(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V_22,
  MR_Word TypeInfo_for_T_23,
  MR_Word F_5,
  MR_Word HB_6,
  MR_Box STATE_VARIABLE_A_0_15,
  MR_Box * STATE_VARIABLE_A_16)
{
  switch (MR_tag((MR_Word) HB_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_A_16 = STATE_VARIABLE_A_0_15;
      break;
    case (MR_Integer) 1:
      {
        MR_Box K_8 = (MR_hl_field(MR_mktag(1), HB_6, (MR_Integer) 0));
        MR_Box V_9 = (MR_hl_field(MR_mktag(1), HB_6, (MR_Integer) 1));
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), F_5, (MR_Integer) 1))));

        *STATE_VARIABLE_A_16 = func_0(((MR_Box) (F_5)), K_8, V_9, STATE_VARIABLE_A_0_15);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box K0_10 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 0));
        MR_Box V0_11 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 1));
        MR_Box K1_12 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 2));
        MR_Box V1_13 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 3));
        MR_Word KVs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 4))));
        MR_Box STATE_VARIABLE_A_17_17;
        MR_Box STATE_VARIABLE_A_18_18;
        MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), F_5, (MR_Integer) 1))));
        MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box);

        STATE_VARIABLE_A_17_17 = func_1(((MR_Box) (F_5)), K0_10, V0_11, STATE_VARIABLE_A_0_15);
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), F_5, (MR_Integer) 1))));
        STATE_VARIABLE_A_18_18 = func_2(((MR_Box) (F_5)), K1_12, V1_13, STATE_VARIABLE_A_17_17);
        mercury__hash_table__foldlf_4_p_1(TypeInfo_for_K_21, TypeInfo_for_V_22, TypeInfo_for_T_23, F_5, KVs_14, STATE_VARIABLE_A_18_18, STATE_VARIABLE_A_16);
      }
      break;
  }
}

void MR_CALL 
mercury__hash_table__foldlf_4_p_1(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word TypeInfo_for_T_17,
  MR_Word F_5,
  MR_Word KVs_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((KVs_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_A_12 = STATE_VARIABLE_A_0_11;
    else
    {
      MR_Box K_8 = (MR_hl_field(MR_mktag(1), KVs_6, (MR_Integer) 0));
      MR_Box V_9 = (MR_hl_field(MR_mktag(1), KVs_6, (MR_Integer) 1));
      MR_Word TailKVs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), KVs_6, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_13_13;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), F_5, (MR_Integer) 1))));
      MR_Word next_value_of_KVs_6;
      MR_Box next_value_of_STATE_VARIABLE_A_0_11;

      STATE_VARIABLE_A_13_13 = func_0(((MR_Box) (F_5)), K_8, V_9, STATE_VARIABLE_A_0_11);
      // direct tailcall eliminated
      ;
      next_value_of_KVs_6 = TailKVs_10;
      next_value_of_STATE_VARIABLE_A_0_11 = STATE_VARIABLE_A_13_13;
      KVs_6 = next_value_of_KVs_6;
      STATE_VARIABLE_A_0_11 = next_value_of_STATE_VARIABLE_A_0_11;
      continue;
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
  MR_Box A0_7)
{
  {
    MR_Box A_8;
    MR_ArrayPtr Var_10 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT_6, (MR_Integer) 3))));
    MR_Integer Var_26;
    MR_Integer Var_27;

{
#define MR_PROC_LABEL mercury__hash_table__fold_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_10) ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 Var_26  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__fold_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_10) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 Var_27  = Max;
}
    mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(TypeInfo_for_K_14, TypeInfo_for_V_15, TypeInfo_for_T_16, F_5, Var_10, Var_26, Var_27, A0_7, &A_8);
    return A_8;
  }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_ArrayPtr HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__4_10 < HeadVar__3_9);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *HeadVar__6_12 = HeadVar__5_11;
    else
    {
      MR_Word Var_13;
      MR_Box Var_14;
      MR_Integer Var_15;
      MR_Box conv0_Item;
      MR_Integer next_value_of_HeadVar__3_9;
      MR_Box next_value_of_HeadVar__5_11;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__2_8) ;
	Index = HeadVar__3_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      Var_13 = ((MR_Word) (conv0_Item));
}
      mercury__hash_table__fold_f_4_p_0(Var_22, Var_23, Var_24, Var_25, Var_13, HeadVar__5_11, &Var_14);
      Var_15 = (MR_Integer) ((MR_Unsigned) HeadVar__3_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_9 = Var_15;
      next_value_of_HeadVar__5_11 = Var_14;
      HeadVar__3_9 = next_value_of_HeadVar__3_9;
      HeadVar__5_11 = next_value_of_HeadVar__5_11;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__hash_table__fold_f_4_p_0(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V_22,
  MR_Word TypeInfo_for_T_23,
  MR_Word F_5,
  MR_Word HB_6,
  MR_Box STATE_VARIABLE_A_0_15,
  MR_Box * STATE_VARIABLE_A_16)
{
  switch (MR_tag((MR_Word) HB_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_A_16 = STATE_VARIABLE_A_0_15;
      break;
    case (MR_Integer) 1:
      {
        MR_Box K_8 = (MR_hl_field(MR_mktag(1), HB_6, (MR_Integer) 0));
        MR_Box V_9 = (MR_hl_field(MR_mktag(1), HB_6, (MR_Integer) 1));
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), F_5, (MR_Integer) 1))));

        *STATE_VARIABLE_A_16 = func_0(((MR_Box) (F_5)), K_8, V_9, STATE_VARIABLE_A_0_15);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box K0_10 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 0));
        MR_Box V0_11 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 1));
        MR_Box K1_12 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 2));
        MR_Box V1_13 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 3));
        MR_Word KVs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 4))));
        MR_Box STATE_VARIABLE_A_17_17;
        MR_Box STATE_VARIABLE_A_18_18;
        MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), F_5, (MR_Integer) 1))));
        MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box);

        STATE_VARIABLE_A_17_17 = func_1(((MR_Box) (F_5)), K0_10, V0_11, STATE_VARIABLE_A_0_15);
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), F_5, (MR_Integer) 1))));
        STATE_VARIABLE_A_18_18 = func_2(((MR_Box) (F_5)), K1_12, V1_13, STATE_VARIABLE_A_17_17);
        mercury__hash_table__foldlf_4_p_0(TypeInfo_for_K_21, TypeInfo_for_V_22, TypeInfo_for_T_23, F_5, KVs_14, STATE_VARIABLE_A_18_18, STATE_VARIABLE_A_16);
      }
      break;
  }
}

void MR_CALL 
mercury__hash_table__foldlf_4_p_0(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word TypeInfo_for_T_17,
  MR_Word F_5,
  MR_Word KVs_6,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((KVs_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_A_12 = STATE_VARIABLE_A_0_11;
    else
    {
      MR_Box K_8 = (MR_hl_field(MR_mktag(1), KVs_6, (MR_Integer) 0));
      MR_Box V_9 = (MR_hl_field(MR_mktag(1), KVs_6, (MR_Integer) 1));
      MR_Word TailKVs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), KVs_6, (MR_Integer) 2))));
      MR_Box STATE_VARIABLE_A_13_13;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), F_5, (MR_Integer) 1))));
      MR_Word next_value_of_KVs_6;
      MR_Box next_value_of_STATE_VARIABLE_A_0_11;

      STATE_VARIABLE_A_13_13 = func_0(((MR_Box) (F_5)), K_8, V_9, STATE_VARIABLE_A_0_11);
      // direct tailcall eliminated
      ;
      next_value_of_KVs_6 = TailKVs_10;
      next_value_of_STATE_VARIABLE_A_0_11 = STATE_VARIABLE_A_13_13;
      KVs_6 = next_value_of_KVs_6;
      STATE_VARIABLE_A_0_11 = next_value_of_STATE_VARIABLE_A_0_11;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__hash_table__from_assoc_list_2_f_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word HashPred_4,
  MR_Word AL_5)
{
  {
    MR_Word HT_6;
    MR_Word HT0_7;

    HT0_7 = mercury__hash_table__init_3_f_0(TypeInfo_for_K_8, TypeInfo_for_V_9, HashPred_4, (MR_Integer) 7, (MR_Float) 0.87500000000000000);
    mercury__hash_table__from_assoc_list_loop_3_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, AL_5, HT0_7, &HT_6);
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
  MR_Word AL_9)
{
  {
    MR_Word HT_10;
    MR_Word HT0_11;

    HT0_11 = mercury__hash_table__init_3_f_0(TypeInfo_for_K_12, TypeInfo_for_V_13, HashPred_6, N_7, MaxOccupants_8);
    mercury__hash_table__from_assoc_list_loop_3_p_0(TypeInfo_for_K_12, TypeInfo_for_V_13, AL_9, HT0_11, &HT_10);
    return HT_10;
  }
}

void MR_CALL 
mercury__hash_table__from_assoc_list_loop_3_p_0(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_HT_0_2,
  MR_Word * STATE_VARIABLE_HT_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_HT_3 = STATE_VARIABLE_HT_0_2;
    else
    {
      MR_Box K_7;
      MR_Box V_8;
      MR_Word T_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_HT_14_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_HT_0_2;

      K_7 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0));
      V_8 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1));
      mercury__hash_table__set_4_p_0(TypeInfo_for_K_16, TypeInfo_for_V_17, K_7, V_8, STATE_VARIABLE_HT_0_2, &STATE_VARIABLE_HT_14_14);
      // direct tailcall eliminated
      ;
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
    MR_ArrayPtr Var_6 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT_3, (MR_Integer) 3))));
    MR_Integer Var_26;
    MR_Integer Var_27;

{
#define MR_PROC_LABEL mercury__hash_table__to_assoc_list_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_6) ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 Var_26  = Min;
}
{
#define MR_PROC_LABEL mercury__hash_table__to_assoc_list_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_6) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 Var_27  = Max;
}
    mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__array_0(TypeInfo_for_K_11, TypeInfo_for_V_12, Var_6, Var_26, Var_27, (MR_Word) ((MR_Unsigned) 0U), &AL_4);
    return AL_4;
  }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__array_0(
  MR_Word Var_27,
  MR_Word Var_28,
  MR_ArrayPtr HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__4_10 < HeadVar__3_9);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *HeadVar__6_12 = HeadVar__5_11;
    else
    {
      MR_Word Var_13;
      MR_Word Var_14;
      MR_Integer Var_15;
      MR_Box conv0_Item;
      MR_Integer next_value_of_HeadVar__3_9;
      MR_Word next_value_of_HeadVar__5_11;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__2_8) ;
	Index = HeadVar__3_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      Var_13 = ((MR_Word) (conv0_Item));
}
      mercury__hash_table__acc_assoc_list_3_p_0(Var_27, Var_28, Var_13, HeadVar__5_11, &Var_14);
      Var_15 = (MR_Integer) ((MR_Unsigned) HeadVar__3_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_9 = Var_15;
      next_value_of_HeadVar__5_11 = Var_14;
      HeadVar__3_9 = next_value_of_HeadVar__3_9;
      HeadVar__5_11 = next_value_of_HeadVar__5_11;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__hash_table__acc_assoc_list_3_p_0(
  MR_Word TypeInfo_for_K_22,
  MR_Word TypeInfo_for_V_23,
  MR_Word HB_4,
  MR_Word STATE_VARIABLE_AL_0_13,
  MR_Word * STATE_VARIABLE_AL_14)
{
  switch (MR_tag((MR_Word) HB_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_AL_14 = STATE_VARIABLE_AL_0_13;
      break;
    case (MR_Integer) 1:
      {
        MR_Box K_6 = (MR_hl_field(MR_mktag(1), HB_4, (MR_Integer) 0));
        MR_Box V_7 = (MR_hl_field(MR_mktag(1), HB_4, (MR_Integer) 1));
        MR_Word Var_21;

        {
          Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_21, 0) = K_6;
          MR_hl_field(MR_mktag(0), Var_21, 1) = V_7;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_AL_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_21));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_AL_0_13));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box K0_8 = (MR_hl_field(MR_mktag(2), HB_4, (MR_Integer) 0));
        MR_Box V0_9 = (MR_hl_field(MR_mktag(2), HB_4, (MR_Integer) 1));
        MR_Box K1_10 = (MR_hl_field(MR_mktag(2), HB_4, (MR_Integer) 2));
        MR_Box V1_11 = (MR_hl_field(MR_mktag(2), HB_4, (MR_Integer) 3));
        MR_Word KVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB_4, (MR_Integer) 4))));
        MR_Word STATE_VARIABLE_AL_15_15;
        MR_Word Var_16;
        MR_Word STATE_VARIABLE_AL_17_17;
        MR_Word Var_18;

        {
          Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_16, 0) = K0_8;
          MR_hl_field(MR_mktag(0), Var_16, 1) = V0_9;
        }
        {
          STATE_VARIABLE_AL_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_AL_15_15, 0) = ((MR_Box) (Var_16));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_AL_15_15, 1) = ((MR_Box) (STATE_VARIABLE_AL_0_13));
        }
        {
          Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_18, 0) = K1_10;
          MR_hl_field(MR_mktag(0), Var_18, 1) = V1_11;
        }
        {
          STATE_VARIABLE_AL_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_AL_17_17, 0) = ((MR_Box) (Var_18));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_AL_17_17, 1) = ((MR_Box) (STATE_VARIABLE_AL_15_15));
        }
        mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_118_95_97_99_99_95_97_115_115_111_99_95_108_105_115_116_95_95_91_49_44_32_50_93_95_48_3_p_0(KVs_12, STATE_VARIABLE_AL_17_17, STATE_VARIABLE_AL_14);
      }
      break;
  }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_118_95_97_99_99_95_97_115_115_111_99_95_108_105_115_116_95_95_91_49_44_32_50_93_95_48_3_p_0(
  MR_Word KVs_4,
  MR_Word STATE_VARIABLE_AL_0_9,
  MR_Word * STATE_VARIABLE_AL_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((KVs_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_AL_10 = STATE_VARIABLE_AL_0_9;
    else
    {
      MR_Box K_6 = (MR_hl_field(MR_mktag(1), KVs_4, (MR_Integer) 0));
      MR_Box V_7 = (MR_hl_field(MR_mktag(1), KVs_4, (MR_Integer) 1));
      MR_Word TailKVs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), KVs_4, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_AL_11_11;
      MR_Word Var_12;
      MR_Word next_value_of_KVs_4;
      MR_Word next_value_of_STATE_VARIABLE_AL_0_9;

      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_12, 0) = K_6;
        MR_hl_field(MR_mktag(0), Var_12, 1) = V_7;
      }
      {
        STATE_VARIABLE_AL_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_AL_11_11, 0) = ((MR_Box) (Var_12));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_AL_11_11, 1) = ((MR_Box) (STATE_VARIABLE_AL_0_9));
      }
      // direct tailcall eliminated
      ;
      next_value_of_KVs_4 = TailKVs_8;
      next_value_of_STATE_VARIABLE_AL_0_9 = STATE_VARIABLE_AL_11_11;
      KVs_4 = next_value_of_KVs_4;
      STATE_VARIABLE_AL_0_9 = next_value_of_STATE_VARIABLE_AL_0_9;
      continue;
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

    succeeded = mercury__hash_table__search_3_p_0(TypeInfo_for_K_6, TypeInfo_for_V_7, HT_5, K_4, &V_10);
    if (succeeded)
      HeadVar__3_3 = V_10;
    else
      HeadVar__3_3 = mercury__require__func_error_2_f_0(TypeInfo_for_V_7, (MR_String) "function \140hash_table.lookup\'/2", (MR_String) "key not found");
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

    succeeded = mercury__hash_table__search_3_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, HT_4, K_5, &V_6);
    if (succeeded)
      HeadVar__3_3 = V_6;
    else
      HeadVar__3_3 = mercury__require__func_error_2_f_0(TypeInfo_for_V_10, (MR_String) "function \140hash_table.lookup\'/2", (MR_String) "key not found");
    return HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mercury__hash_table__search_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word HT_4,
  MR_Box Key_5,
  MR_Box * Value_6)
{
  {
    MR_bool succeeded;

    succeeded = mercury__hash_table__search_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, HT_4, Key_5, Value_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__hash_table__search_3_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word HT_4,
  MR_Box Key_5,
  MR_Box * Value_6)
{
  {
    MR_bool succeeded;
    MR_Integer HashSlot_7;
    MR_Word HB_8;
    MR_ArrayPtr Var_9;
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HT_4, (MR_Integer) 2))));
    MR_Integer Var_21;
    MR_ArrayPtr Var_24 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT_4, (MR_Integer) 3))));
    MR_Integer Hash_38;
    MR_Integer Var_39;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_Hash_38;
    MR_Box conv2_Item;

{
#define MR_PROC_LABEL mercury__hash_table__search_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_24) ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 Var_21  = Max;
}
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 1))));
    func_0(((MR_Box) (Var_20)), Key_5, &conv1_Hash_38);
    Hash_38 = ((MR_Integer) (conv1_Hash_38));
    Var_39 = (MR_Integer) ((MR_Unsigned) Var_21 - (MR_Unsigned) 1);
    HashSlot_7 = (Hash_38 & Var_39);
    Var_9 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT_4, (MR_Integer) 3))));
{
#define MR_PROC_LABEL mercury__hash_table__search_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_9) ;
	Index = HashSlot_7 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv2_Item  = (MR_Box) Item;
    HB_8 = ((MR_Word) (conv2_Item));
}
    succeeded = mercury__hash_table__hash_bucket_search_3_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, HB_8, Key_5, Value_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__hash_table__hash_bucket_search_3_p_0(
  MR_Word TypeInfo_for_K_14,
  MR_Word TypeInfo_for_V_15,
  MR_Word HB_4,
  MR_Box Key_5,
  MR_Box * Value_6)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) HB_4)) == (MR_Integer) 1))
    {
      MR_Box K_7 = (MR_hl_field(MR_mktag(1), HB_4, (MR_Integer) 0));

      *Value_6 = (MR_hl_field(MR_mktag(1), HB_4, (MR_Integer) 1));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_14, K_7, Key_5);
    }
    else
    if (((MR_tag((MR_Word) HB_4)) == (MR_Integer) 2))
    {
      MR_Box K0_9 = (MR_hl_field(MR_mktag(2), HB_4, (MR_Integer) 0));
      MR_Box V0_10 = (MR_hl_field(MR_mktag(2), HB_4, (MR_Integer) 1));
      MR_Box K1_11 = (MR_hl_field(MR_mktag(2), HB_4, (MR_Integer) 2));
      MR_Box V1_12 = (MR_hl_field(MR_mktag(2), HB_4, (MR_Integer) 3));
      MR_Word KVs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB_4, (MR_Integer) 4))));

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_14, K0_9, Key_5);
      if (succeeded)
      {
        *Value_6 = V0_10;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_14, K1_11, Key_5);
        if (succeeded)
        {
          *Value_6 = V1_12;
          succeeded = MR_TRUE;
        }
        else
          succeeded = mercury__kv_list__search_3_p_0(TypeInfo_for_K_14, TypeInfo_for_V_15, KVs_13, Key_5, Value_6);
      }
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__hash_table__delete_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word HT0_4,
  MR_Box Key_5)
{
  {
    MR_Word HT_6;

    mercury__hash_table__delete_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Key_5, HT0_4, &HT_6);
    return HT_6;
  }
}

void MR_CALL 
mercury__hash_table__delete_3_p_0(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V_22,
  MR_Box Key_4,
  MR_Word HT0_5,
  MR_Word * HT_6)
{
  {
    MR_bool succeeded;
    MR_Integer HashSlot_7;
    MR_Word HB0_8;
    MR_ArrayPtr Var_16;
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 2))));
    MR_Integer Var_29;
    MR_ArrayPtr Var_32 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 3))));
    MR_Integer Hash_46;
    MR_Integer Var_47;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_Hash_46;
    MR_Box conv2_Item;
    MR_Word HB_9;

{
#define MR_PROC_LABEL mercury__hash_table__delete_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_32) ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 Var_29  = Max;
}
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 1))));
    func_0(((MR_Box) (Var_28)), Key_4, &conv1_Hash_46);
    Hash_46 = ((MR_Integer) (conv1_Hash_46));
    Var_47 = (MR_Integer) ((MR_Unsigned) Var_29 - (MR_Unsigned) 1);
    HashSlot_7 = (Hash_46 & Var_47);
    Var_16 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 3))));
{
#define MR_PROC_LABEL mercury__hash_table__delete_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_16) ;
	Index = HashSlot_7 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv2_Item  = (MR_Box) Item;
    HB0_8 = ((MR_Word) (conv2_Item));
}
    if (((MR_tag((MR_Word) HB0_8)) == (MR_Integer) 1))
    {
      MR_Box K_52 = (MR_hl_field(MR_mktag(1), HB0_8, (MR_Integer) 0));

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_21, K_52, Key_4);
      if (succeeded)
      {
        HB_9 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
    }
    else
    if (((MR_tag((MR_Word) HB0_8)) == (MR_Integer) 2))
    {
      MR_Box K0_54 = (MR_hl_field(MR_mktag(2), HB0_8, (MR_Integer) 0));
      MR_Box V0_55 = (MR_hl_field(MR_mktag(2), HB0_8, (MR_Integer) 1));
      MR_Box K1_56 = (MR_hl_field(MR_mktag(2), HB0_8, (MR_Integer) 2));
      MR_Box V1_57 = (MR_hl_field(MR_mktag(2), HB0_8, (MR_Integer) 3));
      MR_Word KVs0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB0_8, (MR_Integer) 4))));

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_21, K0_54, Key_4);
      if (succeeded)
      {
        if ((KVs0_58 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            HB_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HB_9, 0) = K1_56;
            MR_hl_field(MR_mktag(1), HB_9, 1) = V1_57;
          }
        else
        {
          MR_Box K2_59 = (MR_hl_field(MR_mktag(1), KVs0_58, (MR_Integer) 0));
          MR_Box V2_60 = (MR_hl_field(MR_mktag(1), KVs0_58, (MR_Integer) 1));
          MR_Word TailKVs_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), KVs0_58, (MR_Integer) 2))));

          {
            HB_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), HB_9, 0) = K1_56;
            MR_hl_field(MR_mktag(2), HB_9, 1) = V1_57;
            MR_hl_field(MR_mktag(2), HB_9, 2) = K2_59;
            MR_hl_field(MR_mktag(2), HB_9, 3) = V2_60;
            MR_hl_field(MR_mktag(2), HB_9, 4) = ((MR_Box) (TailKVs_61));
          }
        }
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_21, K1_56, Key_4);
        if (succeeded)
        {
          if ((KVs0_58 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              HB_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), HB_9, 0) = K0_54;
              MR_hl_field(MR_mktag(1), HB_9, 1) = V0_55;
            }
          else
          {
            MR_Box K2_64 = (MR_hl_field(MR_mktag(1), KVs0_58, (MR_Integer) 0));
            MR_Box V2_65 = (MR_hl_field(MR_mktag(1), KVs0_58, (MR_Integer) 1));
            MR_Word TailKVs_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), KVs0_58, (MR_Integer) 2))));

            {
              HB_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), HB_9, 0) = K0_54;
              MR_hl_field(MR_mktag(2), HB_9, 1) = V0_55;
              MR_hl_field(MR_mktag(2), HB_9, 2) = K2_64;
              MR_hl_field(MR_mktag(2), HB_9, 3) = V2_65;
              MR_hl_field(MR_mktag(2), HB_9, 4) = ((MR_Box) (TailKVs_66));
            }
          }
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word KVs_63;
          MR_Box _Value_62;

          succeeded = mercury__kv_list__remove_4_p_0(TypeInfo_for_K_21, TypeInfo_for_V_22, KVs0_58, Key_4, &_Value_62, &KVs_63);
          if (succeeded)
          {
            {
              HB_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), HB_9, 0) = K0_54;
              MR_hl_field(MR_mktag(2), HB_9, 1) = V0_55;
              MR_hl_field(MR_mktag(2), HB_9, 2) = K1_56;
              MR_hl_field(MR_mktag(2), HB_9, 3) = V1_57;
              MR_hl_field(MR_mktag(2), HB_9, 4) = ((MR_Box) (KVs_63));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      MR_Integer NumOccupants0_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 0))));
      MR_Integer MaxOccupants_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 1))));
      MR_Word HashPred_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 2))));
      MR_ArrayPtr Buckets0_13 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT0_5, (MR_Integer) 3))));
      MR_Integer NumOccupants_14 = (MR_Integer) ((MR_Unsigned) NumOccupants0_10 - (MR_Unsigned) 1);
      MR_ArrayPtr Buckets_15;
      MR_ArrayPtr conv3_Array;

{
#define MR_PROC_LABEL mercury__hash_table__delete_3_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = HashSlot_7 ;
	Item = (MR_Word) ((MR_Box) (HB_9)) ;
	Array0 = (MR_ArrayPtr)(MR_ArrayPtr) (Buckets0_13) ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	 conv3_Array  = (MR_Box) Array;
      Buckets_15 = (MR_ArrayPtr) (conv3_Array);
}
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *HT_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NumOccupants_14));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaxOccupants_11));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (HashPred_12));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Buckets_15));
      }
    }
    else
      *HT_6 = HT0_5;
  }
}

MR_Word MR_CALL 
mercury__hash_table__det_update_3_f_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word STATE_VARIABLE_HT_0_8,
  MR_Box Key_6,
  MR_Box Value_7)
{
  {
    MR_Word STATE_VARIABLE_HT_9;

    mercury__hash_table__det_update_4_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, Key_6, Value_7, STATE_VARIABLE_HT_0_8, &STATE_VARIABLE_HT_9);
    return STATE_VARIABLE_HT_9;
  }
}

void MR_CALL 
mercury__hash_table__det_update_4_p_0(
  MR_Word TypeInfo_for_K_26,
  MR_Word TypeInfo_for_V_27,
  MR_Box Key_5,
  MR_Box Value_6,
  MR_Word STATE_VARIABLE_HT_0_14,
  MR_Word * STATE_VARIABLE_HT_15)
{
  {
    MR_bool succeeded;
    MR_Integer HashSlot_8;
    MR_ArrayPtr Buckets0_9;
    MR_Word HB0_10;
    MR_Word HB_12;
    MR_ArrayPtr Buckets_13;
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HT_0_14, (MR_Integer) 2))));
    MR_Integer Var_34;
    MR_ArrayPtr Var_37 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HT_0_14, (MR_Integer) 3))));
    MR_Integer Hash_51;
    MR_Integer Var_52;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_Hash_51;
    MR_Box conv2_Item;
    MR_Word HB1_11;
    MR_ArrayPtr conv3_Array;
    MR_Integer Var_22;
    MR_Integer Var_23;
    MR_Word Var_24;

{
#define MR_PROC_LABEL mercury__hash_table__det_update_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_37) ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 Var_34  = Max;
}
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 1))));
    func_0(((MR_Box) (Var_33)), Key_5, &conv1_Hash_51);
    Hash_51 = ((MR_Integer) (conv1_Hash_51));
    Var_52 = (MR_Integer) ((MR_Unsigned) Var_34 - (MR_Unsigned) 1);
    HashSlot_8 = (Hash_51 & Var_52);
    Buckets0_9 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HT_0_14, (MR_Integer) 3))));
{
#define MR_PROC_LABEL mercury__hash_table__det_update_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Buckets0_9) ;
	Index = HashSlot_8 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv2_Item  = (MR_Box) Item;
    HB0_10 = ((MR_Word) (conv2_Item));
}
    if (((MR_tag((MR_Word) HB0_10)) == (MR_Integer) 1))
    {
      MR_Box K_58 = (MR_hl_field(MR_mktag(1), HB0_10, (MR_Integer) 0));

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_26, K_58, Key_5);
      if (succeeded)
      {
        {
          HB1_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HB1_11, 0) = K_58;
          MR_hl_field(MR_mktag(1), HB1_11, 1) = Value_6;
        }
        succeeded = MR_TRUE;
      }
    }
    else
    if (((MR_tag((MR_Word) HB0_10)) == (MR_Integer) 2))
    {
      MR_Box K0_60 = (MR_hl_field(MR_mktag(2), HB0_10, (MR_Integer) 0));
      MR_Box V0_61 = (MR_hl_field(MR_mktag(2), HB0_10, (MR_Integer) 1));
      MR_Box K1_62 = (MR_hl_field(MR_mktag(2), HB0_10, (MR_Integer) 2));
      MR_Box V1_63 = (MR_hl_field(MR_mktag(2), HB0_10, (MR_Integer) 3));
      MR_Word KVs0_64 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB0_10, (MR_Integer) 4))));

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_26, K0_60, Key_5);
      if (succeeded)
      {
        {
          HB1_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), HB1_11, 0) = K0_60;
          MR_hl_field(MR_mktag(2), HB1_11, 1) = Value_6;
          MR_hl_field(MR_mktag(2), HB1_11, 2) = K1_62;
          MR_hl_field(MR_mktag(2), HB1_11, 3) = V1_63;
          MR_hl_field(MR_mktag(2), HB1_11, 4) = ((MR_Box) (KVs0_64));
        }
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_26, K1_62, Key_5);
        if (succeeded)
        {
          {
            HB1_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), HB1_11, 0) = K0_60;
            MR_hl_field(MR_mktag(2), HB1_11, 1) = V0_61;
            MR_hl_field(MR_mktag(2), HB1_11, 2) = K1_62;
            MR_hl_field(MR_mktag(2), HB1_11, 3) = Value_6;
            MR_hl_field(MR_mktag(2), HB1_11, 4) = ((MR_Box) (KVs0_64));
          }
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word KVs_65;

          succeeded = mercury__kv_list__update_4_p_0(TypeInfo_for_K_26, TypeInfo_for_V_27, Key_5, Value_6, KVs0_64, &KVs_65);
          if (succeeded)
          {
            {
              HB1_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), HB1_11, 0) = K0_60;
              MR_hl_field(MR_mktag(2), HB1_11, 1) = V0_61;
              MR_hl_field(MR_mktag(2), HB1_11, 2) = K1_62;
              MR_hl_field(MR_mktag(2), HB1_11, 3) = V1_63;
              MR_hl_field(MR_mktag(2), HB1_11, 4) = ((MR_Box) (KVs_65));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
      HB_12 = HB1_11;
    else
      {
        mercury__require__error_2_p_0((MR_String) "predicate \140hash_table.det_update\'/4", (MR_String) "key not found");
        return;
      }
{
#define MR_PROC_LABEL mercury__hash_table__det_update_4_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = HashSlot_8 ;
	Item = (MR_Word) ((MR_Box) (HB_12)) ;
	Array0 = (MR_ArrayPtr)(MR_ArrayPtr) (Buckets0_9) ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	 conv3_Array  = (MR_Box) Array;
    Buckets_13 = (MR_ArrayPtr) (conv3_Array);
}
    Var_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HT_0_14, (MR_Integer) 0))));
    Var_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HT_0_14, (MR_Integer) 1))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HT_0_14, (MR_Integer) 2))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_HT_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Buckets_13));
    }
  }
}

MR_Word MR_CALL 
mercury__hash_table__det_insert_3_f_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word HT0_5,
  MR_Box Key_6,
  MR_Box Value_7)
{
  {
    MR_Word HT_8;

    mercury__hash_table__det_insert_4_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, Key_6, Value_7, HT0_5, &HT_8);
    return HT_8;
  }
}

void MR_CALL 
mercury__hash_table__det_insert_4_p_0(
  MR_Word TypeInfo_for_K_34,
  MR_Word TypeInfo_for_V_35,
  MR_Box Key_5,
  MR_Box Value_6,
  MR_Word HT0_7,
  MR_Word * HT_8)
{
  {
    MR_bool succeeded;
    MR_Integer HashSlot_9;
    MR_Integer NumOccupants0_10;
    MR_Integer MaxOccupants_11;
    MR_Word HashPred_12;
    MR_ArrayPtr Buckets0_13;
    MR_Word HB0_14;
    MR_Word HB_15;
    MR_ArrayPtr Buckets_21;
    MR_Integer NumOccupants_22;
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HT0_7, (MR_Integer) 2))));
    MR_Integer Var_42;
    MR_ArrayPtr Var_45 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT0_7, (MR_Integer) 3))));
    MR_Integer Hash_59;
    MR_Integer Var_60;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_Hash_59;
    MR_Box conv2_Item;
    MR_ArrayPtr conv3_Array;

{
#define MR_PROC_LABEL mercury__hash_table__det_insert_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_45) ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 Var_42  = Max;
}
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 1))));
    func_0(((MR_Box) (Var_41)), Key_5, &conv1_Hash_59);
    Hash_59 = ((MR_Integer) (conv1_Hash_59));
    Var_60 = (MR_Integer) ((MR_Unsigned) Var_42 - (MR_Unsigned) 1);
    HashSlot_9 = (Hash_59 & Var_60);
    NumOccupants0_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HT0_7, (MR_Integer) 0))));
    MaxOccupants_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HT0_7, (MR_Integer) 1))));
    HashPred_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HT0_7, (MR_Integer) 2))));
    Buckets0_13 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT0_7, (MR_Integer) 3))));
{
#define MR_PROC_LABEL mercury__hash_table__det_insert_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Buckets0_13) ;
	Index = HashSlot_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv2_Item  = (MR_Box) Item;
    HB0_14 = ((MR_Word) (conv2_Item));
}
    switch (MR_tag((MR_Word) HB0_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          HB_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HB_15, 0) = Key_5;
          MR_hl_field(MR_mktag(1), HB_15, 1) = Value_6;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_16 = (MR_hl_field(MR_mktag(1), HB0_14, (MR_Integer) 0));
          MR_Box V0_17 = (MR_hl_field(MR_mktag(1), HB0_14, (MR_Integer) 1));

          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_34, K0_16, Key_5);
          if (succeeded)
            {
              mercury__require__error_2_p_0((MR_String) "predicate \140hash_table.det_insert\'/4", (MR_String) "key already present");
              return;
            }
          else
            {
              HB_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), HB_15, 0) = Key_5;
              MR_hl_field(MR_mktag(2), HB_15, 1) = Value_6;
              MR_hl_field(MR_mktag(2), HB_15, 2) = K0_16;
              MR_hl_field(MR_mktag(2), HB_15, 3) = V0_17;
              MR_hl_field(MR_mktag(2), HB_15, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K1_18 = (MR_hl_field(MR_mktag(2), HB0_14, (MR_Integer) 2));
          MR_Box V1_19 = (MR_hl_field(MR_mktag(2), HB0_14, (MR_Integer) 3));
          MR_Word KVs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB0_14, (MR_Integer) 4))));
          MR_Box K0_32 = (MR_hl_field(MR_mktag(2), HB0_14, (MR_Integer) 0));
          MR_Box V0_33 = (MR_hl_field(MR_mktag(2), HB0_14, (MR_Integer) 1));

          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_34, K0_32, Key_5);
          if (succeeded)
            {
              mercury__require__error_2_p_0((MR_String) "predicate \140hash_table.det_insert\'/4", (MR_String) "key already present");
              return;
            }
          else
          {
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_34, K1_18, Key_5);
            if (succeeded)
              {
                mercury__require__error_2_p_0((MR_String) "predicate \140hash_table.det_insert\'/4", (MR_String) "key already present");
                return;
              }
            else
            {
              MR_Word Var_27;

              {
                Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_27, 0) = K1_18;
                MR_hl_field(MR_mktag(1), Var_27, 1) = V1_19;
                MR_hl_field(MR_mktag(1), Var_27, 2) = ((MR_Box) (KVs_20));
              }
              {
                HB_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), HB_15, 0) = Key_5;
                MR_hl_field(MR_mktag(2), HB_15, 1) = Value_6;
                MR_hl_field(MR_mktag(2), HB_15, 2) = K0_32;
                MR_hl_field(MR_mktag(2), HB_15, 3) = V0_33;
                MR_hl_field(MR_mktag(2), HB_15, 4) = ((MR_Box) (Var_27));
              }
            }
          }
        }
        break;
    }
{
#define MR_PROC_LABEL mercury__hash_table__det_insert_4_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = HashSlot_9 ;
	Item = (MR_Word) ((MR_Box) (HB_15)) ;
	Array0 = (MR_ArrayPtr)(MR_ArrayPtr) (Buckets0_13) ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	 conv3_Array  = (MR_Box) Array;
    Buckets_21 = (MR_ArrayPtr) (conv3_Array);
}
    NumOccupants_22 = (MR_Integer) ((MR_Unsigned) NumOccupants0_10 + (MR_Unsigned) 1);
    succeeded = (NumOccupants_22 > MaxOccupants_11);
    if (succeeded)
      *HT_8 = mercury__hash_table__expand_4_f_0(TypeInfo_for_K_34, TypeInfo_for_V_35, NumOccupants_22, MaxOccupants_11, HashPred_12, Buckets_21);
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *HT_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NumOccupants_22));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaxOccupants_11));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (HashPred_12));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Buckets_21));
      }
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
  MR_Box Key_6,
  MR_Box Value_7)
{
  {
    MR_Word HT_8;

    mercury__hash_table__set_4_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, Key_6, Value_7, HT0_5, &HT_8);
    return HT_8;
  }
}

void MR_CALL 
mercury__hash_table__set_4_p_0(
  MR_Word TypeInfo_for_K_30,
  MR_Word TypeInfo_for_V_31,
  MR_Box Key_5,
  MR_Box Value_6,
  MR_Word HT0_7,
  MR_Word * HT_8)
{
  {
    MR_bool succeeded;
    MR_Integer HashSlot_9;
    MR_Integer NumOccupants0_10;
    MR_Integer MaxOccupants_11;
    MR_Word HashPred_12;
    MR_ArrayPtr Buckets0_13;
    MR_Word HB0_14;
    MR_Word HB_15;
    MR_Word InsertedNew_16;
    MR_ArrayPtr Buckets_23;
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HT0_7, (MR_Integer) 2))));
    MR_Integer Var_38;
    MR_ArrayPtr Var_41 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT0_7, (MR_Integer) 3))));
    MR_Integer Hash_55;
    MR_Integer Var_56;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_Hash_55;
    MR_Box conv2_Item;
    MR_ArrayPtr conv3_Array;

{
#define MR_PROC_LABEL mercury__hash_table__set_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_41) ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 Var_38  = Max;
}
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 1))));
    func_0(((MR_Box) (Var_37)), Key_5, &conv1_Hash_55);
    Hash_55 = ((MR_Integer) (conv1_Hash_55));
    Var_56 = (MR_Integer) ((MR_Unsigned) Var_38 - (MR_Unsigned) 1);
    HashSlot_9 = (Hash_55 & Var_56);
    NumOccupants0_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HT0_7, (MR_Integer) 0))));
    MaxOccupants_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HT0_7, (MR_Integer) 1))));
    HashPred_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HT0_7, (MR_Integer) 2))));
    Buckets0_13 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT0_7, (MR_Integer) 3))));
{
#define MR_PROC_LABEL mercury__hash_table__set_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Buckets0_13) ;
	Index = HashSlot_9 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv2_Item  = (MR_Box) Item;
    HB0_14 = ((MR_Word) (conv2_Item));
}
    switch (MR_tag((MR_Word) HB0_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            HB_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HB_15, 0) = Key_5;
            MR_hl_field(MR_mktag(1), HB_15, 1) = Value_6;
          }
          InsertedNew_16 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_17 = (MR_hl_field(MR_mktag(1), HB0_14, (MR_Integer) 0));
          MR_Box V0_18 = (MR_hl_field(MR_mktag(1), HB0_14, (MR_Integer) 1));

          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_30, K0_17, Key_5);
          if (succeeded)
          {
            {
              HB_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), HB_15, 0) = K0_17;
              MR_hl_field(MR_mktag(1), HB_15, 1) = Value_6;
            }
            InsertedNew_16 = (MR_Integer) 0;
          }
          else
          {
            {
              HB_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), HB_15, 0) = Key_5;
              MR_hl_field(MR_mktag(2), HB_15, 1) = Value_6;
              MR_hl_field(MR_mktag(2), HB_15, 2) = K0_17;
              MR_hl_field(MR_mktag(2), HB_15, 3) = V0_18;
              MR_hl_field(MR_mktag(2), HB_15, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            InsertedNew_16 = (MR_Integer) 1;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K1_19 = (MR_hl_field(MR_mktag(2), HB0_14, (MR_Integer) 2));
          MR_Box V1_20 = (MR_hl_field(MR_mktag(2), HB0_14, (MR_Integer) 3));
          MR_Word KVs0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB0_14, (MR_Integer) 4))));
          MR_Box K0_28 = (MR_hl_field(MR_mktag(2), HB0_14, (MR_Integer) 0));
          MR_Box V0_29 = (MR_hl_field(MR_mktag(2), HB0_14, (MR_Integer) 1));
          MR_Word HB1_22;
          MR_Box K0_64 = (MR_hl_field(MR_mktag(2), HB0_14, (MR_Integer) 0));
          MR_Box V0_65 = (MR_hl_field(MR_mktag(2), HB0_14, (MR_Integer) 1));
          MR_Box K1_66 = (MR_hl_field(MR_mktag(2), HB0_14, (MR_Integer) 2));
          MR_Box V1_67 = (MR_hl_field(MR_mktag(2), HB0_14, (MR_Integer) 3));
          MR_Word KVs0_68 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB0_14, (MR_Integer) 4))));

          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_30, K0_64, Key_5);
          if (succeeded)
          {
            {
              HB1_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), HB1_22, 0) = K0_64;
              MR_hl_field(MR_mktag(2), HB1_22, 1) = Value_6;
              MR_hl_field(MR_mktag(2), HB1_22, 2) = K1_66;
              MR_hl_field(MR_mktag(2), HB1_22, 3) = V1_67;
              MR_hl_field(MR_mktag(2), HB1_22, 4) = ((MR_Box) (KVs0_68));
            }
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_30, K1_66, Key_5);
            if (succeeded)
            {
              {
                HB1_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), HB1_22, 0) = K0_64;
                MR_hl_field(MR_mktag(2), HB1_22, 1) = V0_65;
                MR_hl_field(MR_mktag(2), HB1_22, 2) = K1_66;
                MR_hl_field(MR_mktag(2), HB1_22, 3) = Value_6;
                MR_hl_field(MR_mktag(2), HB1_22, 4) = ((MR_Box) (KVs0_68));
              }
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word KVs_69;

              succeeded = mercury__kv_list__update_4_p_0(TypeInfo_for_K_30, TypeInfo_for_V_31, Key_5, Value_6, KVs0_68, &KVs_69);
              if (succeeded)
              {
                {
                  HB1_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), HB1_22, 0) = K0_64;
                  MR_hl_field(MR_mktag(2), HB1_22, 1) = V0_65;
                  MR_hl_field(MR_mktag(2), HB1_22, 2) = K1_66;
                  MR_hl_field(MR_mktag(2), HB1_22, 3) = V1_67;
                  MR_hl_field(MR_mktag(2), HB1_22, 4) = ((MR_Box) (KVs_69));
                }
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
          {
            HB_15 = HB1_22;
            InsertedNew_16 = (MR_Integer) 0;
          }
          else
          {
            MR_Word Var_25;

            {
              Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_25, 0) = K1_19;
              MR_hl_field(MR_mktag(1), Var_25, 1) = V1_20;
              MR_hl_field(MR_mktag(1), Var_25, 2) = ((MR_Box) (KVs0_21));
            }
            {
              HB_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), HB_15, 0) = Key_5;
              MR_hl_field(MR_mktag(2), HB_15, 1) = Value_6;
              MR_hl_field(MR_mktag(2), HB_15, 2) = K0_28;
              MR_hl_field(MR_mktag(2), HB_15, 3) = V0_29;
              MR_hl_field(MR_mktag(2), HB_15, 4) = ((MR_Box) (Var_25));
            }
            InsertedNew_16 = (MR_Integer) 1;
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

	Index = HashSlot_9 ;
	Item = (MR_Word) ((MR_Box) (HB_15)) ;
	Array0 = (MR_ArrayPtr)(MR_ArrayPtr) (Buckets0_13) ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	 conv3_Array  = (MR_Box) Array;
    Buckets_23 = (MR_ArrayPtr) (conv3_Array);
}
    switch (InsertedNew_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *HT_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NumOccupants0_10));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaxOccupants_11));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (HashPred_12));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Buckets_23));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer NumOccupants_24 = (MR_Integer) ((MR_Unsigned) NumOccupants0_10 + (MR_Unsigned) 1);

          succeeded = (NumOccupants_24 > MaxOccupants_11);
          if (succeeded)
            *HT_8 = mercury__hash_table__expand_4_f_0(TypeInfo_for_K_30, TypeInfo_for_V_31, NumOccupants_24, MaxOccupants_11, HashPred_12, Buckets_23);
          else
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
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
    MR_Word TypeInfo_23_23;
    MR_Integer NumBuckets0_11;
    MR_Integer NumBuckets_12;
    MR_Integer MaxOccupants_13;
    MR_ArrayPtr Buckets1_14;
    MR_ArrayPtr Buckets_15;
    MR_ArrayPtr conv0_Buckets1_14;

    {
      TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 0) = ((MR_Box) (&mercury__hash_table__hash_table__type_ctor_info_hash_bucket_2));
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_K_20));
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 2) = ((MR_Box) (TypeInfo_for_V_21));
    }
{
#define MR_PROC_LABEL mercury__hash_table__expand_4_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Buckets0_9) ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 NumBuckets0_11  = Max;
}
    NumBuckets_12 = (MR_Integer) ((MR_Unsigned) NumBuckets0_11 + (MR_Unsigned) NumBuckets0_11);
    MaxOccupants_13 = (MR_Integer) ((MR_Unsigned) MaxOccupants0_7 + (MR_Unsigned) MaxOccupants0_7);
    mercury__array__init_3_p_0(TypeInfo_23_23, NumBuckets_12, ((MR_Box) ((MR_Unsigned) 0U)), &conv0_Buckets1_14);
    Buckets1_14 = (MR_ArrayPtr) (conv0_Buckets1_14);
    mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_104_97_115_104_95_98_117_99_107_101_116_115_95_95_91_49_44_32_50_93_95_48_6_p_0((MR_Integer) 0, Buckets0_9, HashPred_8, NumBuckets_12, Buckets1_14, &Buckets_15);
    {
      HT_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HT_10, 0) = ((MR_Box) (NumOccupants_6));
      MR_hl_field(MR_mktag(0), HT_10, 1) = ((MR_Box) (MaxOccupants_13));
      MR_hl_field(MR_mktag(0), HT_10, 2) = ((MR_Box) (HashPred_8));
      MR_hl_field(MR_mktag(0), HT_10, 3) = ((MR_Box) (Buckets_15));
    }
    return HT_10;
  }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_104_97_115_104_95_98_117_99_107_101_116_115_95_95_91_49_44_32_50_93_95_48_6_p_0(
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

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_104_97_115_104_95_98_117_99_107_101_116_115_95_95_91_49_44_32_50_93_95_48_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (OldBuckets_8) ;
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
      MR_Word HB_12;
      MR_ArrayPtr STATE_VARIABLE_Buckets_16_16;
      MR_Integer Var_17;
      MR_Box conv0_Item;
      MR_Integer next_value_of_I_7;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_Buckets_0_13;

{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_104_97_115_104_95_98_117_99_107_101_116_115_95_95_91_49_44_32_50_93_95_48_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (OldBuckets_8) ;
	Index = I_7 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv0_Item  = (MR_Box) Item;
      HB_12 = ((MR_Word) (conv0_Item));
}
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_104_97_115_104_95_98_117_99_107_101_116_95_95_91_49_44_32_50_93_95_48_5_p_0(HB_12, HashPred_9, NumBuckets_10, STATE_VARIABLE_Buckets_0_13, &STATE_VARIABLE_Buckets_16_16);
      Var_17 = (MR_Integer) ((MR_Unsigned) I_7 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
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
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_104_97_115_104_95_98_117_99_107_101_116_95_95_91_49_44_32_50_93_95_48_5_p_0(
  MR_Word HB_6,
  MR_Word HashPred_7,
  MR_Integer NumBuckets_8,
  MR_ArrayPtr STATE_VARIABLE_Buckets_0_17,
  MR_ArrayPtr * STATE_VARIABLE_Buckets_18)
{
  switch (MR_tag((MR_Word) HB_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Buckets_18 = STATE_VARIABLE_Buckets_0_17;
      break;
    case (MR_Integer) 1:
      {
        MR_Box K_10 = (MR_hl_field(MR_mktag(1), HB_6, (MR_Integer) 0));
        MR_Box V_11 = (MR_hl_field(MR_mktag(1), HB_6, (MR_Integer) 1));
        MR_Integer HashSlot_32;
        MR_Word HB0_33;
        MR_Word HB_34;
        MR_Integer Hash_51;
        MR_Integer Var_52;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HashPred_7, (MR_Integer) 1))));
        MR_Box conv1_Hash_51;
        MR_Box conv2_Item;
        MR_ArrayPtr conv3_Array;

        func_0(((MR_Box) (HashPred_7)), K_10, &conv1_Hash_51);
        Hash_51 = ((MR_Integer) (conv1_Hash_51));
        Var_52 = (MR_Integer) ((MR_Unsigned) NumBuckets_8 - (MR_Unsigned) 1);
        HashSlot_32 = (Hash_51 & Var_52);
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_104_97_115_104_95_98_117_99_107_101_116_95_95_91_49_44_32_50_93_95_48_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (STATE_VARIABLE_Buckets_0_17) ;
	Index = HashSlot_32 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv2_Item  = (MR_Box) Item;
        HB0_33 = ((MR_Word) (conv2_Item));
}
        switch (MR_tag((MR_Word) HB0_33)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HB_34 = HB_6;
            break;
          case (MR_Integer) 1:
            {
              MR_Box K0_35 = (MR_hl_field(MR_mktag(1), HB0_33, (MR_Integer) 0));
              MR_Box V0_36 = (MR_hl_field(MR_mktag(1), HB0_33, (MR_Integer) 1));

              {
                HB_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), HB_34, 0) = K_10;
                MR_hl_field(MR_mktag(2), HB_34, 1) = V_11;
                MR_hl_field(MR_mktag(2), HB_34, 2) = K0_35;
                MR_hl_field(MR_mktag(2), HB_34, 3) = V0_36;
                MR_hl_field(MR_mktag(2), HB_34, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box K1_37 = (MR_hl_field(MR_mktag(2), HB0_33, (MR_Integer) 2));
              MR_Box V1_38 = (MR_hl_field(MR_mktag(2), HB0_33, (MR_Integer) 3));
              MR_Word KVs_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB0_33, (MR_Integer) 4))));
              MR_Word Var_40;
              MR_Box K0_43 = (MR_hl_field(MR_mktag(2), HB0_33, (MR_Integer) 0));
              MR_Box V0_44 = (MR_hl_field(MR_mktag(2), HB0_33, (MR_Integer) 1));

              {
                Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_40, 0) = K1_37;
                MR_hl_field(MR_mktag(1), Var_40, 1) = V1_38;
                MR_hl_field(MR_mktag(1), Var_40, 2) = ((MR_Box) (KVs_39));
              }
              {
                HB_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), HB_34, 0) = K_10;
                MR_hl_field(MR_mktag(2), HB_34, 1) = V_11;
                MR_hl_field(MR_mktag(2), HB_34, 2) = K0_43;
                MR_hl_field(MR_mktag(2), HB_34, 3) = V0_44;
                MR_hl_field(MR_mktag(2), HB_34, 4) = ((MR_Box) (Var_40));
              }
            }
            break;
        }
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_104_97_115_104_95_98_117_99_107_101_116_95_95_91_49_44_32_50_93_95_48_5_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = HashSlot_32 ;
	Item = (MR_Word) ((MR_Box) (HB_34)) ;
	Array0 = (MR_ArrayPtr)(MR_ArrayPtr) (STATE_VARIABLE_Buckets_0_17) ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	 conv3_Array  = (MR_Box) Array;
        *STATE_VARIABLE_Buckets_18 = (MR_ArrayPtr) (conv3_Array);
}
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box K0_12 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 0));
        MR_Box V0_13 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 1));
        MR_Box K1_14 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 2));
        MR_Box V1_15 = (MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 3));
        MR_Word KVs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB_6, (MR_Integer) 4))));
        MR_ArrayPtr STATE_VARIABLE_Buckets_19_19;
        MR_ArrayPtr STATE_VARIABLE_Buckets_20_20;
        MR_Integer HashSlot_61;
        MR_Word HB0_62;
        MR_Word HB_63;
        MR_Integer Hash_80;
        MR_Integer Var_81;
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HashPred_7, (MR_Integer) 1))));
        MR_Box conv5_Hash_80;
        MR_Box conv6_Item;
        MR_ArrayPtr conv7_Array;

        func_4(((MR_Box) (HashPred_7)), K0_12, &conv5_Hash_80);
        Hash_80 = ((MR_Integer) (conv5_Hash_80));
        Var_81 = (MR_Integer) ((MR_Unsigned) NumBuckets_8 - (MR_Unsigned) 1);
        HashSlot_61 = (Hash_80 & Var_81);
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_104_97_115_104_95_98_117_99_107_101_116_95_95_91_49_44_32_50_93_95_48_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (STATE_VARIABLE_Buckets_0_17) ;
	Index = HashSlot_61 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv6_Item  = (MR_Box) Item;
        HB0_62 = ((MR_Word) (conv6_Item));
}
        switch (MR_tag((MR_Word) HB0_62)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              HB_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), HB_63, 0) = K0_12;
              MR_hl_field(MR_mktag(1), HB_63, 1) = V0_13;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box K0_64 = (MR_hl_field(MR_mktag(1), HB0_62, (MR_Integer) 0));
              MR_Box V0_65 = (MR_hl_field(MR_mktag(1), HB0_62, (MR_Integer) 1));

              {
                HB_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), HB_63, 0) = K0_12;
                MR_hl_field(MR_mktag(2), HB_63, 1) = V0_13;
                MR_hl_field(MR_mktag(2), HB_63, 2) = K0_64;
                MR_hl_field(MR_mktag(2), HB_63, 3) = V0_65;
                MR_hl_field(MR_mktag(2), HB_63, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box K1_66 = (MR_hl_field(MR_mktag(2), HB0_62, (MR_Integer) 2));
              MR_Box V1_67 = (MR_hl_field(MR_mktag(2), HB0_62, (MR_Integer) 3));
              MR_Word KVs_68 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB0_62, (MR_Integer) 4))));
              MR_Word Var_69;
              MR_Box K0_72 = (MR_hl_field(MR_mktag(2), HB0_62, (MR_Integer) 0));
              MR_Box V0_73 = (MR_hl_field(MR_mktag(2), HB0_62, (MR_Integer) 1));

              {
                Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_69, 0) = K1_66;
                MR_hl_field(MR_mktag(1), Var_69, 1) = V1_67;
                MR_hl_field(MR_mktag(1), Var_69, 2) = ((MR_Box) (KVs_68));
              }
              {
                HB_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), HB_63, 0) = K0_12;
                MR_hl_field(MR_mktag(2), HB_63, 1) = V0_13;
                MR_hl_field(MR_mktag(2), HB_63, 2) = K0_72;
                MR_hl_field(MR_mktag(2), HB_63, 3) = V0_73;
                MR_hl_field(MR_mktag(2), HB_63, 4) = ((MR_Box) (Var_69));
              }
            }
            break;
        }
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_104_97_115_104_95_98_117_99_107_101_116_95_95_91_49_44_32_50_93_95_48_5_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = HashSlot_61 ;
	Item = (MR_Word) ((MR_Box) (HB_63)) ;
	Array0 = (MR_ArrayPtr)(MR_ArrayPtr) (STATE_VARIABLE_Buckets_0_17) ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	 conv7_Array  = (MR_Box) Array;
        STATE_VARIABLE_Buckets_19_19 = (MR_ArrayPtr) (conv7_Array);
}
        mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_95_91_49_44_32_50_93_95_48_6_p_0(K1_14, V1_15, HashPred_7, NumBuckets_8, STATE_VARIABLE_Buckets_19_19, &STATE_VARIABLE_Buckets_20_20);
        mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_107_118_95_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0(KVs_16, HashPred_7, NumBuckets_8, STATE_VARIABLE_Buckets_20_20, STATE_VARIABLE_Buckets_18);
      }
      break;
  }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_95_91_49_44_32_50_93_95_48_6_p_0(
  MR_Box Key_7,
  MR_Box Value_8,
  MR_Word HashPred_9,
  MR_Integer NumBuckets_10,
  MR_ArrayPtr STATE_VARIABLE_Buckets_0_20,
  MR_ArrayPtr * STATE_VARIABLE_Buckets_21)
{
  {
    MR_Integer HashSlot_12;
    MR_Word HB0_13;
    MR_Word HB_14;
    MR_Integer Hash_35;
    MR_Integer Var_36;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HashPred_9, (MR_Integer) 1))));
    MR_Box conv1_Hash_35;
    MR_Box conv2_Item;
    MR_ArrayPtr conv3_Array;

    func_0(((MR_Box) (HashPred_9)), Key_7, &conv1_Hash_35);
    Hash_35 = ((MR_Integer) (conv1_Hash_35));
    Var_36 = (MR_Integer) ((MR_Unsigned) NumBuckets_10 - (MR_Unsigned) 1);
    HashSlot_12 = (Hash_35 & Var_36);
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_95_91_49_44_32_50_93_95_48_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (STATE_VARIABLE_Buckets_0_20) ;
	Index = HashSlot_12 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv2_Item  = (MR_Box) Item;
    HB0_13 = ((MR_Word) (conv2_Item));
}
    switch (MR_tag((MR_Word) HB0_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          HB_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HB_14, 0) = Key_7;
          MR_hl_field(MR_mktag(1), HB_14, 1) = Value_8;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_15 = (MR_hl_field(MR_mktag(1), HB0_13, (MR_Integer) 0));
          MR_Box V0_16 = (MR_hl_field(MR_mktag(1), HB0_13, (MR_Integer) 1));

          {
            HB_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), HB_14, 0) = Key_7;
            MR_hl_field(MR_mktag(2), HB_14, 1) = Value_8;
            MR_hl_field(MR_mktag(2), HB_14, 2) = K0_15;
            MR_hl_field(MR_mktag(2), HB_14, 3) = V0_16;
            MR_hl_field(MR_mktag(2), HB_14, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K1_17 = (MR_hl_field(MR_mktag(2), HB0_13, (MR_Integer) 2));
          MR_Box V1_18 = (MR_hl_field(MR_mktag(2), HB0_13, (MR_Integer) 3));
          MR_Word KVs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB0_13, (MR_Integer) 4))));
          MR_Word Var_22;
          MR_Box K0_25 = (MR_hl_field(MR_mktag(2), HB0_13, (MR_Integer) 0));
          MR_Box V0_26 = (MR_hl_field(MR_mktag(2), HB0_13, (MR_Integer) 1));

          {
            Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_22, 0) = K1_17;
            MR_hl_field(MR_mktag(1), Var_22, 1) = V1_18;
            MR_hl_field(MR_mktag(1), Var_22, 2) = ((MR_Box) (KVs_19));
          }
          {
            HB_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), HB_14, 0) = Key_7;
            MR_hl_field(MR_mktag(2), HB_14, 1) = Value_8;
            MR_hl_field(MR_mktag(2), HB_14, 2) = K0_25;
            MR_hl_field(MR_mktag(2), HB_14, 3) = V0_26;
            MR_hl_field(MR_mktag(2), HB_14, 4) = ((MR_Box) (Var_22));
          }
        }
        break;
    }
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_95_91_49_44_32_50_93_95_48_6_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = HashSlot_12 ;
	Item = (MR_Word) ((MR_Box) (HB_14)) ;
	Array0 = (MR_ArrayPtr)(MR_ArrayPtr) (STATE_VARIABLE_Buckets_0_20) ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	 conv3_Array  = (MR_Box) Array;
    *STATE_VARIABLE_Buckets_21 = (MR_ArrayPtr) (conv3_Array);
}
  }
}

static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_107_118_95_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0(
  MR_Word KVs_6,
  MR_Word HashPred_7,
  MR_Integer NumBuckets_8,
  MR_ArrayPtr STATE_VARIABLE_Buckets_0_13,
  MR_ArrayPtr * STATE_VARIABLE_Buckets_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((KVs_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Buckets_14 = STATE_VARIABLE_Buckets_0_13;
    else
    {
      MR_Box K_10 = (MR_hl_field(MR_mktag(1), KVs_6, (MR_Integer) 0));
      MR_Box V_11 = (MR_hl_field(MR_mktag(1), KVs_6, (MR_Integer) 1));
      MR_Word TailKVs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), KVs_6, (MR_Integer) 2))));
      MR_ArrayPtr STATE_VARIABLE_Buckets_15_15;
      MR_Integer HashSlot_26;
      MR_Word HB0_27;
      MR_Word HB_28;
      MR_Integer Hash_45;
      MR_Integer Var_46;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HashPred_7, (MR_Integer) 1))));
      MR_Box conv1_Hash_45;
      MR_Box conv2_Item;
      MR_ArrayPtr conv3_Array;
      MR_Word next_value_of_KVs_6;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_Buckets_0_13;

      func_0(((MR_Box) (HashPred_7)), K_10, &conv1_Hash_45);
      Hash_45 = ((MR_Integer) (conv1_Hash_45));
      Var_46 = (MR_Integer) ((MR_Unsigned) NumBuckets_8 - (MR_Unsigned) 1);
      HashSlot_26 = (Hash_45 & Var_46);
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_107_118_95_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (STATE_VARIABLE_Buckets_0_13) ;
	Index = HashSlot_26 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 conv2_Item  = (MR_Box) Item;
      HB0_27 = ((MR_Word) (conv2_Item));
}
      switch (MR_tag((MR_Word) HB0_27)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            HB_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HB_28, 0) = K_10;
            MR_hl_field(MR_mktag(1), HB_28, 1) = V_11;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box K0_29 = (MR_hl_field(MR_mktag(1), HB0_27, (MR_Integer) 0));
            MR_Box V0_30 = (MR_hl_field(MR_mktag(1), HB0_27, (MR_Integer) 1));

            {
              HB_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), HB_28, 0) = K_10;
              MR_hl_field(MR_mktag(2), HB_28, 1) = V_11;
              MR_hl_field(MR_mktag(2), HB_28, 2) = K0_29;
              MR_hl_field(MR_mktag(2), HB_28, 3) = V0_30;
              MR_hl_field(MR_mktag(2), HB_28, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box K1_31 = (MR_hl_field(MR_mktag(2), HB0_27, (MR_Integer) 2));
            MR_Box V1_32 = (MR_hl_field(MR_mktag(2), HB0_27, (MR_Integer) 3));
            MR_Word KVs_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HB0_27, (MR_Integer) 4))));
            MR_Word Var_34;
            MR_Box K0_37 = (MR_hl_field(MR_mktag(2), HB0_27, (MR_Integer) 0));
            MR_Box V0_38 = (MR_hl_field(MR_mktag(2), HB0_27, (MR_Integer) 1));

            {
              Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_34, 0) = K1_31;
              MR_hl_field(MR_mktag(1), Var_34, 1) = V1_32;
              MR_hl_field(MR_mktag(1), Var_34, 2) = ((MR_Box) (KVs_33));
            }
            {
              HB_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), HB_28, 0) = K_10;
              MR_hl_field(MR_mktag(2), HB_28, 1) = V_11;
              MR_hl_field(MR_mktag(2), HB_28, 2) = K0_37;
              MR_hl_field(MR_mktag(2), HB_28, 3) = V0_38;
              MR_hl_field(MR_mktag(2), HB_28, 4) = ((MR_Box) (Var_34));
            }
          }
          break;
      }
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_107_118_95_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = HashSlot_26 ;
	Item = (MR_Word) ((MR_Box) (HB_28)) ;
	Array0 = (MR_ArrayPtr)(MR_ArrayPtr) (STATE_VARIABLE_Buckets_0_13) ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	 conv3_Array  = (MR_Box) Array;
      STATE_VARIABLE_Buckets_15_15 = (MR_ArrayPtr) (conv3_Array);
}
      // direct tailcall eliminated
      ;
      next_value_of_KVs_6 = TailKVs_12;
      next_value_of_STATE_VARIABLE_Buckets_0_13 = STATE_VARIABLE_Buckets_15_15;
      KVs_6 = next_value_of_KVs_6;
      STATE_VARIABLE_Buckets_0_13 = next_value_of_STATE_VARIABLE_Buckets_0_13;
      continue;
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
    MR_Integer NumOccupants_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Orig_3, (MR_Integer) 0))));
    MR_Integer MaxOccupants_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Orig_3, (MR_Integer) 1))));
    MR_Word HashPred_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Orig_3, (MR_Integer) 2))));
    MR_ArrayPtr Buckets0_8 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Orig_3, (MR_Integer) 3))));
    MR_ArrayPtr Buckets_9;
    MR_ArrayPtr conv0_Array;

{
#define MR_PROC_LABEL mercury__hash_table__copy_1_f_0

	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Array0 = (MR_ArrayPtr)(MR_ArrayPtr) (Buckets0_8) ;
		{

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);


		;}
#undef MR_PROC_LABEL
	 conv0_Array  = (MR_Box) Array;
    Buckets_9 = (MR_ArrayPtr) (conv0_Array);
}
    {
      Copy_4 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
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
    MR_Integer HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

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
    MR_ArrayPtr Var_4 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HT_3, (MR_Integer) 3))));

{
#define MR_PROC_LABEL mercury__hash_table__num_buckets_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_4) ;
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
    MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));

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

    HeadVar__2_2 = mercury__hash_table__init_3_f_0(TypeInfo_for_K_6, TypeInfo_for_V_7, HashPred_3, (MR_Integer) 7, (MR_Float) 0.87500000000000000);
    return HeadVar__2_2;
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
      mercury__require__error_2_p_0((MR_String) "function \140hash_table.init\'/3", (MR_String) "N =< 0");
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
        mercury__require__error_2_p_0((MR_String) "function \140hash_table.init\'/3", (MR_String) "N >= int.bits_per_int");
      else
      {
        succeeded = (MaxOccupancy_7 <= ((MR_Float) 0.0000000000000000));
        if (succeeded)
          mercury__require__error_2_p_0((MR_String) "function \140hash_table.init\'/3", (MR_String) "MaxOccupancy =< 0.0");
        else
        {
          MR_Word TypeInfo_29_29;
          MR_Integer NumBuckets_9;
          MR_Integer MaxOccupants_10;
          MR_ArrayPtr Buckets_11;
          MR_Float Var_22;
          MR_Float Var_23;
          MR_ArrayPtr conv0_Buckets_11;

          NumBuckets_9 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, N_6);
{
#define MR_PROC_LABEL mercury__hash_table__init_3_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal = NumBuckets_9 ;
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

	X = Var_22 ;
		{

    Ceil = (MR_Integer) ML_FLOAT_CEIL(X);


		;}
#undef MR_PROC_LABEL
	 MaxOccupants_10  = Ceil;
}
          {
            TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_29_29, 0) = ((MR_Box) (&mercury__hash_table__hash_table__type_ctor_info_hash_bucket_2));
            MR_hl_field(MR_mktag(0), TypeInfo_29_29, 1) = ((MR_Box) (TypeInfo_for_K_26));
            MR_hl_field(MR_mktag(0), TypeInfo_29_29, 2) = ((MR_Box) (TypeInfo_for_V_27));
          }
          mercury__array__init_3_p_0(TypeInfo_29_29, NumBuckets_9, ((MR_Box) ((MR_Unsigned) 0U)), &conv0_Buckets_11);
          Buckets_11 = (MR_ArrayPtr) (conv0_Buckets_11);
          {
            HT_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
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
mercury__hash_table____Unify____hash_bucket_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__hash_table____Unify____hash_bucket_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__hash_table____Compare____hash_bucket_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__hash_table____Compare____hash_bucket_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__hash_table____Unify____hash_bucket_array_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__hash_table____Unify____hash_bucket_array_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_ArrayPtr) (wrapper_arg_3)), ((MR_ArrayPtr) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__hash_table____Compare____hash_bucket_array_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__hash_table____Compare____hash_bucket_array_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_ArrayPtr) (wrapper_arg_4)), ((MR_ArrayPtr) (wrapper_arg_5)));
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

    succeeded = mercury__hash_table____Unify____hash_pred_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

    mercury__hash_table____Compare____hash_pred_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
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

    succeeded = mercury__hash_table____Unify____hash_table_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
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

    mercury__hash_table____Compare____hash_table_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
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

	MR_register_type_ctor_info(&mercury__hash_table__hash_table__type_ctor_info_hash_bucket_2);
	MR_register_type_ctor_info(&mercury__hash_table__hash_table__type_ctor_info_hash_bucket_array_2);
	MR_register_type_ctor_info(&mercury__hash_table__hash_table__type_ctor_info_hash_pred_1);
	MR_register_type_ctor_info(&mercury__hash_table__hash_table__type_ctor_info_hash_table_2);
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

// :- end_module hash_table.
