/*
** Automatically generated from `stream.string_writer.m'
** by the Mercury compiler,
** version rotd-2017-08-15
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


/* :- module stream.string_writer. */
/* :- implementation. */

/*
INIT mercury__stream__string_writer__init
ENDINIT
*/

#include "stream.string_writer.mih"


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
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static MR_Integer MR_CALL 
mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void);

static void MR_CALL 
mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void);

static void MR_CALL 
mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void);

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(
  MR_Word TypeClassInfo_for_writer_121,
  MR_Word TypeClassInfo_for_writer_122,
  MR_Word Stream_10,
  MR_Word NonCanon_11,
  MR_Word OpInfo_12,
  MR_Word OtherOpInfos_13,
  MR_Integer Priority_14,
  MR_String Functor_15,
  MR_Word Args_16);

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_114_101_109_97_105_110_105_110_103_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_8_p_0(
  MR_Word TypeClassInfo_for_writer_36,
  MR_Word TypeClassInfo_for_writer_37,
  MR_Word Stream_1,
  MR_Word NonCanon_2,
  MR_Word HeadVar__3_3,
  MR_Integer Priority_4,
  MR_String Functor_5,
  MR_Word Args_6);

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_108_105_115_116_95_116_97_105_108_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeClassInfo_for_writer_27,
  MR_Word TypeClassInfo_for_writer_28,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8);

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_111_114_100_105_110_97_114_121_95_116_101_114_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_writer_50,
  MR_Word TypeClassInfo_for_writer_51,
  MR_Word Stream_7,
  MR_Word NonCanon_8,
  MR_Word Univ_9,
  MR_Integer Priority_10);

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_116_101_114_109_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeClassInfo_for_writer_22,
  MR_Word TypeClassInfo_for_writer_23,
  MR_Word HeadVar__1_1,
  MR_Word NonCanon_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_108_105_115_116_95_116_97_105_108_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2(
  MR_Word TypeClassInfo_for_writer_27,
  MR_Word TypeClassInfo_for_writer_28,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8);

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_111_114_100_105_110_97_114_121_95_116_101_114_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_6_p_2(
  MR_Word TypeClassInfo_for_writer_50,
  MR_Word TypeClassInfo_for_writer_51,
  MR_Word Stream_7,
  MR_Word NonCanon_8,
  MR_Word Univ_9,
  MR_Integer Priority_10);

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_116_101_114_109_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2(
  MR_Word TypeClassInfo_for_writer_22,
  MR_Word TypeClassInfo_for_writer_23,
  MR_Word HeadVar__1_1,
  MR_Word NonCanon_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_9_p_2(
  MR_Word TypeClassInfo_for_writer_121,
  MR_Word TypeClassInfo_for_writer_122,
  MR_Word Stream_10,
  MR_Word NonCanon_11,
  MR_Word OpInfo_12,
  MR_Word OtherOpInfos_13,
  MR_Integer Priority_14,
  MR_String Functor_15,
  MR_Word Args_16);

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_9_p_3(
  MR_Word TypeClassInfo_for_writer_121,
  MR_Word TypeClassInfo_for_writer_122,
  MR_Word Stream_10,
  MR_Word NonCanon_11,
  MR_Word OpInfo_12,
  MR_Word OtherOpInfos_13,
  MR_Integer Priority_14,
  MR_String Functor_15,
  MR_Word Args_16);

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_114_101_109_97_105_110_105_110_103_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_8_p_3(
  MR_Word TypeClassInfo_for_writer_36,
  MR_Word TypeClassInfo_for_writer_37,
  MR_Word Stream_1,
  MR_Word NonCanon_2,
  MR_Word HeadVar__3_3,
  MR_Integer Priority_4,
  MR_String Functor_5,
  MR_Word Args_6);

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_108_105_115_116_95_116_97_105_108_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_5_p_3(
  MR_Word TypeClassInfo_for_writer_27,
  MR_Word TypeClassInfo_for_writer_28,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8);

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_111_114_100_105_110_97_114_121_95_116_101_114_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_6_p_3(
  MR_Word TypeClassInfo_for_writer_50,
  MR_Word TypeClassInfo_for_writer_51,
  MR_Word Stream_7,
  MR_Word NonCanon_8,
  MR_Word Univ_9,
  MR_Integer Priority_10);

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_116_101_114_109_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_5_p_3(
  MR_Word TypeClassInfo_for_writer_22,
  MR_Word TypeClassInfo_for_writer_23,
  MR_Word HeadVar__1_1,
  MR_Word NonCanon_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_9_p_1(
  MR_Word TypeClassInfo_for_writer_121,
  MR_Word TypeClassInfo_for_writer_122,
  MR_Word Stream_10,
  MR_Word NonCanon_11,
  MR_Word OpInfo_12,
  MR_Word OtherOpInfos_13,
  MR_Integer Priority_14,
  MR_String Functor_15,
  MR_Word Args_16);

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_114_101_109_97_105_110_105_110_103_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_8_p_1(
  MR_Word TypeClassInfo_for_writer_36,
  MR_Word TypeClassInfo_for_writer_37,
  MR_Word Stream_1,
  MR_Word NonCanon_2,
  MR_Word HeadVar__3_3,
  MR_Integer Priority_4,
  MR_String Functor_5,
  MR_Word Args_6);

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_108_105_115_116_95_116_97_105_108_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(
  MR_Word TypeClassInfo_for_writer_27,
  MR_Word TypeClassInfo_for_writer_28,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8);

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_111_114_100_105_110_97_114_121_95_116_101_114_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_6_p_1(
  MR_Word TypeClassInfo_for_writer_50,
  MR_Word TypeClassInfo_for_writer_51,
  MR_Word Stream_7,
  MR_Word NonCanon_8,
  MR_Word Univ_9,
  MR_Integer Priority_10);

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_116_101_114_109_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(
  MR_Word TypeClassInfo_for_writer_22,
  MR_Word TypeClassInfo_for_writer_23,
  MR_Word HeadVar__1_1,
  MR_Word NonCanon_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_97_114_114_97_121_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeClassInfo_for_writer_16,
  MR_Word TypeClassInfo_for_writer_17,
  MR_Word Stream_5,
  MR_ArrayPtr Array_6);

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeClassInfo_for_writer_16,
  MR_Word TypeClassInfo_for_writer_17,
  MR_Word Stream_5,
  MR_Box VersionArray_6);

static void MR_CALL 
mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_p_in__term_io_0(
  MR_Word TypeClassInfo_for_writer_10,
  MR_Word V_5_5,
  MR_Char V_6_6);

static void MR_CALL 
mercury__stream__string_writer__print_quoted_5_p_3(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeClassInfo_for_writer_13,
  MR_Word TypeClassInfo_for_writer_14,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8,
  MR_Box STATE_VARIABLE_State_0_10,
  MR_Box * STATE_VARIABLE_State_11);

static void MR_CALL 
mercury__stream__string_writer__print_quoted_5_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeClassInfo_for_writer_13,
  MR_Word TypeClassInfo_for_writer_14,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8,
  MR_Box STATE_VARIABLE_State_0_10,
  MR_Box * STATE_VARIABLE_State_11);

static void MR_CALL 
mercury__stream__string_writer__select_remaining_op_info_and_print_8_p_0(
  MR_Word TypeClassInfo_for_writer_36,
  MR_Word TypeClassInfo_for_writer_37,
  MR_Box Stream_1,
  MR_Word NonCanon_2,
  MR_Word HeadVar__3_3,
  MR_Integer Priority_4,
  MR_String Functor_5,
  MR_Word Args_6,
  MR_Box STATE_VARIABLE_State_0_7,
  MR_Box * STATE_VARIABLE_State_8);

static void MR_CALL 
mercury__stream__string_writer__select_op_info_and_print_9_p_0(
  MR_Word TypeClassInfo_for_writer_121,
  MR_Word TypeClassInfo_for_writer_122,
  MR_Box Stream_10,
  MR_Word NonCanon_11,
  MR_Word OpInfo_12,
  MR_Word OtherOpInfos_13,
  MR_Integer Priority_14,
  MR_String Functor_15,
  MR_Word Args_16,
  MR_Box STATE_VARIABLE_State_0_48,
  MR_Box * STATE_VARIABLE_State_49);

static void MR_CALL 
mercury__stream__string_writer__write_arg_5_p_0(
  MR_Word TypeClassInfo_for_writer_15,
  MR_Word TypeClassInfo_for_writer_16,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Word X_8,
  MR_Box STATE_VARIABLE_State_0_11,
  MR_Box * STATE_VARIABLE_State_12);

static void MR_CALL 
mercury__stream__string_writer__write_list_tail_5_p_0(
  MR_Word TypeClassInfo_for_writer_27,
  MR_Word TypeClassInfo_for_writer_28,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8,
  MR_Box STATE_VARIABLE_State_0_16,
  MR_Box * STATE_VARIABLE_State_17);

static void MR_CALL 
mercury__stream__string_writer__write_ordinary_term_6_p_0(
  MR_Word TypeClassInfo_for_writer_50,
  MR_Word TypeClassInfo_for_writer_51,
  MR_Box Stream_7,
  MR_Word NonCanon_8,
  MR_Word Univ_9,
  MR_Integer Priority_10,
  MR_Box STATE_VARIABLE_State_0_24,
  MR_Box * STATE_VARIABLE_State_25);

static void MR_CALL 
mercury__stream__string_writer__write_term_args_5_p_0(
  MR_Word TypeClassInfo_for_writer_22,
  MR_Word TypeClassInfo_for_writer_23,
  MR_Box HeadVar__1_1,
  MR_Word NonCanon_2,
  MR_Word HeadVar__3_3,
  MR_Box STATE_VARIABLE_State_0_4,
  MR_Box * STATE_VARIABLE_State_5);

static void MR_CALL 
mercury__stream__string_writer__print_quoted_5_p_2(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeClassInfo_for_writer_13,
  MR_Word TypeClassInfo_for_writer_14,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8,
  MR_Box STATE_VARIABLE_State_0_10,
  MR_Box * STATE_VARIABLE_State_11);

static void MR_CALL 
mercury__stream__string_writer__write_arg_5_p_2(
  MR_Word TypeClassInfo_for_writer_15,
  MR_Word TypeClassInfo_for_writer_16,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Word X_8,
  MR_Box STATE_VARIABLE_State_0_11,
  MR_Box * STATE_VARIABLE_State_12);

static void MR_CALL 
mercury__stream__string_writer__write_list_tail_5_p_2(
  MR_Word TypeClassInfo_for_writer_27,
  MR_Word TypeClassInfo_for_writer_28,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8,
  MR_Box STATE_VARIABLE_State_0_16,
  MR_Box * STATE_VARIABLE_State_17);

static void MR_CALL 
mercury__stream__string_writer__write_ordinary_term_6_p_2(
  MR_Word TypeClassInfo_for_writer_50,
  MR_Word TypeClassInfo_for_writer_51,
  MR_Box Stream_7,
  MR_Word NonCanon_8,
  MR_Word Univ_9,
  MR_Integer Priority_10,
  MR_Box STATE_VARIABLE_State_0_24,
  MR_Box * STATE_VARIABLE_State_25);

static void MR_CALL 
mercury__stream__string_writer__write_term_args_5_p_2(
  MR_Word TypeClassInfo_for_writer_22,
  MR_Word TypeClassInfo_for_writer_23,
  MR_Box HeadVar__1_1,
  MR_Word NonCanon_2,
  MR_Word HeadVar__3_3,
  MR_Box STATE_VARIABLE_State_0_4,
  MR_Box * STATE_VARIABLE_State_5);

static void MR_CALL 
mercury__stream__string_writer__select_op_info_and_print_9_p_2(
  MR_Word TypeClassInfo_for_writer_121,
  MR_Word TypeClassInfo_for_writer_122,
  MR_Box Stream_10,
  MR_Word NonCanon_11,
  MR_Word OpInfo_12,
  MR_Word OtherOpInfos_13,
  MR_Integer Priority_14,
  MR_String Functor_15,
  MR_Word Args_16,
  MR_Box STATE_VARIABLE_State_0_48,
  MR_Box * STATE_VARIABLE_State_49);

static void MR_CALL 
mercury__stream__string_writer__select_remaining_op_info_and_print_8_p_3(
  MR_Word TypeClassInfo_for_writer_36,
  MR_Word TypeClassInfo_for_writer_37,
  MR_Box Stream_1,
  MR_Word NonCanon_2,
  MR_Word HeadVar__3_3,
  MR_Integer Priority_4,
  MR_String Functor_5,
  MR_Word Args_6,
  MR_Box STATE_VARIABLE_State_0_7,
  MR_Box * STATE_VARIABLE_State_8);

static void MR_CALL 
mercury__stream__string_writer__select_op_info_and_print_9_p_3(
  MR_Word TypeClassInfo_for_writer_121,
  MR_Word TypeClassInfo_for_writer_122,
  MR_Box Stream_10,
  MR_Word NonCanon_11,
  MR_Word OpInfo_12,
  MR_Word OtherOpInfos_13,
  MR_Integer Priority_14,
  MR_String Functor_15,
  MR_Word Args_16,
  MR_Box STATE_VARIABLE_State_0_48,
  MR_Box * STATE_VARIABLE_State_49);

static void MR_CALL 
mercury__stream__string_writer__write_arg_5_p_3(
  MR_Word TypeClassInfo_for_writer_15,
  MR_Word TypeClassInfo_for_writer_16,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Word X_8,
  MR_Box STATE_VARIABLE_State_0_11,
  MR_Box * STATE_VARIABLE_State_12);

static void MR_CALL 
mercury__stream__string_writer__write_list_tail_5_p_3(
  MR_Word TypeClassInfo_for_writer_27,
  MR_Word TypeClassInfo_for_writer_28,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8,
  MR_Box STATE_VARIABLE_State_0_16,
  MR_Box * STATE_VARIABLE_State_17);

static void MR_CALL 
mercury__stream__string_writer__write_ordinary_term_6_p_3(
  MR_Word TypeClassInfo_for_writer_50,
  MR_Word TypeClassInfo_for_writer_51,
  MR_Box Stream_7,
  MR_Word NonCanon_8,
  MR_Word Univ_9,
  MR_Integer Priority_10,
  MR_Box STATE_VARIABLE_State_0_24,
  MR_Box * STATE_VARIABLE_State_25);

static void MR_CALL 
mercury__stream__string_writer__write_term_args_5_p_3(
  MR_Word TypeClassInfo_for_writer_22,
  MR_Word TypeClassInfo_for_writer_23,
  MR_Box HeadVar__1_1,
  MR_Word NonCanon_2,
  MR_Word HeadVar__3_3,
  MR_Box STATE_VARIABLE_State_0_4,
  MR_Box * STATE_VARIABLE_State_5);

static void MR_CALL 
mercury__stream__string_writer__print_quoted_5_p_1(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeClassInfo_for_writer_13,
  MR_Word TypeClassInfo_for_writer_14,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8,
  MR_Box STATE_VARIABLE_State_0_10,
  MR_Box * STATE_VARIABLE_State_11);

static MR_Integer MR_CALL 
mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_109_97_120_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__stream__string_writer__select_remaining_op_info_and_print_8_p_1(
  MR_Word TypeClassInfo_for_writer_36,
  MR_Word TypeClassInfo_for_writer_37,
  MR_Box Stream_1,
  MR_Word NonCanon_2,
  MR_Word HeadVar__3_3,
  MR_Integer Priority_4,
  MR_String Functor_5,
  MR_Word Args_6,
  MR_Box STATE_VARIABLE_State_0_7,
  MR_Box * STATE_VARIABLE_State_8);

static void MR_CALL 
mercury__stream__string_writer__select_op_info_and_print_9_p_1(
  MR_Word TypeClassInfo_for_writer_121,
  MR_Word TypeClassInfo_for_writer_122,
  MR_Box Stream_10,
  MR_Word NonCanon_11,
  MR_Word OpInfo_12,
  MR_Word OtherOpInfos_13,
  MR_Integer Priority_14,
  MR_String Functor_15,
  MR_Word Args_16,
  MR_Box STATE_VARIABLE_State_0_48,
  MR_Box * STATE_VARIABLE_State_49);

static void MR_CALL 
mercury__stream__string_writer__write_arg_5_p_1(
  MR_Word TypeClassInfo_for_writer_15,
  MR_Word TypeClassInfo_for_writer_16,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Word X_8,
  MR_Box STATE_VARIABLE_State_0_11,
  MR_Box * STATE_VARIABLE_State_12);

static void MR_CALL 
mercury__stream__string_writer__write_list_tail_5_p_1(
  MR_Word TypeClassInfo_for_writer_27,
  MR_Word TypeClassInfo_for_writer_28,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8,
  MR_Box STATE_VARIABLE_State_0_16,
  MR_Box * STATE_VARIABLE_State_17);

static void MR_CALL 
mercury__stream__string_writer__write_ordinary_term_6_p_1(
  MR_Word TypeClassInfo_for_writer_50,
  MR_Word TypeClassInfo_for_writer_51,
  MR_Box Stream_7,
  MR_Word NonCanon_8,
  MR_Word Univ_9,
  MR_Integer Priority_10,
  MR_Box STATE_VARIABLE_State_0_24,
  MR_Box * STATE_VARIABLE_State_25);

static void MR_CALL 
mercury__stream__string_writer__write_term_args_5_p_1(
  MR_Word TypeClassInfo_for_writer_22,
  MR_Word TypeClassInfo_for_writer_23,
  MR_Box HeadVar__1_1,
  MR_Word NonCanon_2,
  MR_Word HeadVar__3_3,
  MR_Box STATE_VARIABLE_State_0_4,
  MR_Box * STATE_VARIABLE_State_5);

static void MR_CALL 
mercury__stream__string_writer__write_version_array_4_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeClassInfo_for_writer_16,
  MR_Word TypeClassInfo_for_writer_17,
  MR_Box Stream_5,
  MR_Box VersionArray_6,
  MR_Box STATE_VARIABLE_State_0_9,
  MR_Box * STATE_VARIABLE_State_10);

static void MR_CALL 
mercury__stream__string_writer__write_array_4_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeClassInfo_for_writer_16,
  MR_Word TypeClassInfo_for_writer_17,
  MR_Box Stream_5,
  MR_ArrayPtr Array_6,
  MR_Box STATE_VARIABLE_State_0_9,
  MR_Box * STATE_VARIABLE_State_10);

static void MR_CALL 
mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_p_in__term_io_0(
  MR_Word TypeClassInfo_for_writer_10,
  MR_Box V_5_5,
  MR_Char V_6_6,
  MR_Box V_8_7,
  MR_Box * V_9_8);

static void MR_CALL 
mercury__stream__string_writer__write_private_builtin_type_info_4_p_0(
  MR_Word TypeClassInfo_for_writer_13,
  MR_Box Stream_5,
  MR_Word PrivateBuiltinTypeInfo_6,
  MR_Box STATE_VARIABLE_State_0_10,
  MR_Box * STATE_VARIABLE_State_11);

static MR_Word MR_CALL 
mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_49_52_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(
  MR_Word TypeInfo_for_T1_1_16,
  MR_Box V_7_7,
  MR_Word V_8_8,
  MR_Integer V_9_9);

static void MR_CALL 
mercury__stream__string_writer__write_c_pointer_4_p_0(
  MR_Word TypeClassInfo_for_writer_12,
  MR_Box Stream_5,
  MR_Word C_Pointer_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9);

static void MR_CALL 
mercury__stream__string_writer__write_type_ctor_desc_4_p_0(
  MR_Word TypeClassInfo_for_writer_31,
  MR_Box Stream_5,
  MR_Word TypeCtorDesc_6,
  MR_Box STATE_VARIABLE_State_0_12,
  MR_Box * STATE_VARIABLE_State_13);

static void MR_CALL 
mercury__stream__string_writer__write_type_desc_4_p_0(
  MR_Word TypeClassInfo_for_writer_12,
  MR_Box Stream_5,
  MR_Word TypeDesc_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9);

static void MR_CALL 
mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_3_p_0(
  MR_Integer * HeadVar__1_1,
  MR_Box STATE_VARIABLE_State_0_5,
  MR_Box * STATE_VARIABLE_State_6);


static /* final */ const MR_Box mercury__stream__string_writer_scalar_common_1[1][2];

static /* final */ const MR_Box mercury__stream__string_writer_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__stream__string_writer_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__stream__string_writer_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__stream__string_writer_scalar_common_5[1][1];




static /* final */ const MR_Box mercury__stream__string_writer_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
};

static /* final */ const MR_Box mercury__stream__string_writer_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__stream__string_writer_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__stream__string_writer_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__stream__string_writer_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__stream__string_writer_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__stream__string_writer_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__stream__string_writer_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
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



static MR_Integer MR_CALL 
mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

static void MR_CALL 
mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
{
  {
  }
}

static void MR_CALL 
mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
{
  {
  }
}

static void MR_CALL 
mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
{
  {
  }
}

void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_97_121_98_101_95_119_114_105_116_101_95_112_97_114_101_110_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_writer_15,
  MR_Word TypeClassInfo_for_writer_16,
  MR_Word Stream_7,
  MR_Char String_8,
  MR_Integer Priority_9,
  MR_Integer OpPriority_10)
{
  mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_97_121_98_101_95_119_114_105_116_101_95_112_97_114_101_110_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_49_93_95_48_6_p_0(TypeClassInfo_for_writer_16, Stream_7, String_8, Priority_9, OpPriority_10);
}

void MR_CALL 
mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_97_121_98_101_95_119_114_105_116_101_95_112_97_114_101_110_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_49_93_95_48_6_p_0(
  MR_Word TypeClassInfo_for_writer_16,
  MR_Word Stream_7,
  MR_Char String_8,
  MR_Integer Priority_9,
  MR_Integer OpPriority_10)
{
  {
    MR_bool succeeded = (OpPriority_10 > Priority_9);

    if (succeeded)
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5)));
      MR_Box conv1_STATE_VARIABLE_State_13;

      func_0(((MR_Box) TypeClassInfo_for_writer_16), ((MR_Box) (Stream_7)), ((MR_Box) (MR_Word) (String_8)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_13);
    }
    else
    {
    }
  }
}

void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word TypeClassInfo_for_writer_12,
  MR_Word TypeClassInfo_for_writer_13,
  MR_Word Stream_5,
  MR_Box X_6)
{
  {
    MR_Word Univ_21;
    MR_Integer Var_29;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_14, X_6, &Univ_21);
    Var_29 = ((MR_Integer) 1200 + (MR_Integer) 1);
    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_6_p_1(TypeClassInfo_for_writer_12, TypeClassInfo_for_writer_13, Stream_5, (MR_Integer) 1, Univ_21, Var_29);
  }
}

void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeClassInfo_for_writer_14,
  MR_Word TypeClassInfo_for_writer_15,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8)
{
  {
    MR_Word Univ_10;
    MR_Integer Var_23;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_16, Term_8, &Univ_10);
    Var_23 = ((MR_Integer) 1200 + (MR_Integer) 1);
    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_writer_14, TypeClassInfo_for_writer_15, Stream_6, NonCanon_7, Univ_10, Var_23);
  }
}

void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeClassInfo_for_writer_14,
  MR_Word TypeClassInfo_for_writer_15,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8)
{
  {
    MR_Word Univ_10;
    MR_Integer Var_23;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_16, Term_8, &Univ_10);
    Var_23 = ((MR_Integer) 1200 + (MR_Integer) 1);
    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_6_p_2(TypeClassInfo_for_writer_14, TypeClassInfo_for_writer_15, Stream_6, NonCanon_7, Univ_10, Var_23);
  }
}

void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_5_p_3(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeClassInfo_for_writer_14,
  MR_Word TypeClassInfo_for_writer_15,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8)
{
  {
    MR_Word Univ_10;
    MR_Integer Var_23;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_16, Term_8, &Univ_10);
    Var_23 = ((MR_Integer) 1200 + (MR_Integer) 1);
    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_6_p_3(TypeClassInfo_for_writer_14, TypeClassInfo_for_writer_15, Stream_6, NonCanon_7, Univ_10, Var_23);
  }
}

void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_12,
  MR_Word TypeClassInfo_for_writer_13,
  MR_Word Stream_5,
  MR_Word Univ_6)
{
  {
    MR_Integer Var_20 = ((MR_Integer) 1200 + (MR_Integer) 1);

    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_6_p_1(TypeClassInfo_for_writer_12, TypeClassInfo_for_writer_13, Stream_5, (MR_Integer) 1, Univ_6, Var_20);
  }
}

void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeClassInfo_for_writer_13,
  MR_Word TypeClassInfo_for_writer_14,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8)
{
  {
    MR_Integer Var_21 = ((MR_Integer) 1200 + (MR_Integer) 1);

    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_writer_13, TypeClassInfo_for_writer_14, Stream_6, NonCanon_7, Univ_8, Var_21);
  }
}

void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(
  MR_Word TypeClassInfo_for_writer_13,
  MR_Word TypeClassInfo_for_writer_14,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8)
{
  {
    MR_Integer Var_21 = ((MR_Integer) 1200 + (MR_Integer) 1);

    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_6_p_1(TypeClassInfo_for_writer_13, TypeClassInfo_for_writer_14, Stream_6, NonCanon_7, Univ_8, Var_21);
  }
}

void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2(
  MR_Word TypeClassInfo_for_writer_13,
  MR_Word TypeClassInfo_for_writer_14,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8)
{
  {
    MR_Integer Var_21 = ((MR_Integer) 1200 + (MR_Integer) 1);

    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_6_p_2(TypeClassInfo_for_writer_13, TypeClassInfo_for_writer_14, Stream_6, NonCanon_7, Univ_8, Var_21);
  }
}

void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_5_p_3(
  MR_Word TypeClassInfo_for_writer_13,
  MR_Word TypeClassInfo_for_writer_14,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8)
{
  {
    MR_Integer Var_21 = ((MR_Integer) 1200 + (MR_Integer) 1);

    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_6_p_3(TypeClassInfo_for_writer_13, TypeClassInfo_for_writer_14, Stream_6, NonCanon_7, Univ_8, Var_21);
  }
}

void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeClassInfo_for_writer_17,
  MR_Word TypeClassInfo_for_writer_18,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8)
{
  {
    MR_Integer Var_12 = ((MR_Integer) 1200 + (MR_Integer) 1);

    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_writer_17, TypeClassInfo_for_writer_18, Stream_6, NonCanon_7, Univ_8, Var_12);
  }
}

void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(
  MR_Word TypeClassInfo_for_writer_17,
  MR_Word TypeClassInfo_for_writer_18,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8)
{
  {
    MR_Integer Var_12 = ((MR_Integer) 1200 + (MR_Integer) 1);

    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_6_p_1(TypeClassInfo_for_writer_17, TypeClassInfo_for_writer_18, Stream_6, NonCanon_7, Univ_8, Var_12);
  }
}

void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2(
  MR_Word TypeClassInfo_for_writer_17,
  MR_Word TypeClassInfo_for_writer_18,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8)
{
  {
    MR_Integer Var_12 = ((MR_Integer) 1200 + (MR_Integer) 1);

    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_6_p_2(TypeClassInfo_for_writer_17, TypeClassInfo_for_writer_18, Stream_6, NonCanon_7, Univ_8, Var_12);
  }
}

void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_5_p_3(
  MR_Word TypeClassInfo_for_writer_17,
  MR_Word TypeClassInfo_for_writer_18,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8)
{
  {
    MR_Integer Var_12 = ((MR_Integer) 1200 + (MR_Integer) 1);

    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_6_p_3(TypeClassInfo_for_writer_17, TypeClassInfo_for_writer_18, Stream_6, NonCanon_7, Univ_8, Var_12);
  }
}

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(
  MR_Word TypeClassInfo_for_writer_121,
  MR_Word TypeClassInfo_for_writer_122,
  MR_Word Stream_10,
  MR_Word NonCanon_11,
  MR_Word OpInfo_12,
  MR_Word OtherOpInfos_13,
  MR_Integer Priority_14,
  MR_String Functor_15,
  MR_Word Args_16)
{
  {
    MR_bool succeeded;
    MR_Word OpClass_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
    MR_Integer Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) OpClass_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Arg1_30;
          MR_Word Arg2_31;
          MR_Word Var_64;
          MR_Word Var_65;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Arg1_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_64)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Arg2_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 0)));
              Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 1)));
              succeeded = (Var_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          if (succeeded)
          {
            MR_Word LeftAssoc_33;
            MR_Integer LeftPriority_35;
            MR_Word RightAssoc_37;
            MR_Integer RightPriority_38;
            MR_Integer OpPriority_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
            MR_Word Var_34;
            MR_Word Var_36;

            succeeded = (OpPriority_111 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv7_STATE_VARIABLE_State_67_67;

              func_6(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_State_67_67);
            }
            else
            {
            }
            LeftAssoc_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 0)));
            Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 1)));
            switch (LeftAssoc_33) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  LeftPriority_35 = (OpPriority_111 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                LeftPriority_35 = OpPriority_111;
                break;
            }
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg1_30, LeftPriority_35);
            succeeded = (strcmp(Functor_15, (MR_String) ",") == 0);
            if (succeeded)
            {
              MR_Box conv8_STATE_VARIABLE_State_70_70;

              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_State_70_70);
            }
            else
            {
              MR_Box conv9_STATE_VARIABLE_State_72_72;
              MR_Box conv10_STATE_VARIABLE_State_70_70;

              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_String) " ")), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_State_72_72);
              mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15);
              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_String) " ")), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_State_70_70);
            }
            Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 0)));
            RightAssoc_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 1)));
            switch (RightAssoc_37) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  RightPriority_38 = (OpPriority_111 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                RightPriority_38 = OpPriority_111;
                break;
            }
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg2_31, RightPriority_38);
            succeeded = (OpPriority_111 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv12_STATE_VARIABLE_State_49;

              func_11(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_State_49);
            }
            else
            {
            }
          }
          else
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_114_101_109_97_105_110_105_110_103_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_8_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Arg_21;
          MR_Word Var_90;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Arg_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = (Var_90 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Integer OpPriority_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word OpAssoc_24;
            MR_Integer NewPriority_25;
            MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
            MR_Box conv20_STATE_VARIABLE_State_95_95;

            succeeded = (OpPriority_23 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv19_STATE_VARIABLE_State_92_92;

              func_18(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_State_92_92);
            }
            else
            {
            }
            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_String) " ")), ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_State_95_95);
            OpAssoc_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), OpClass_18, (MR_Integer) 0)));
            switch (OpAssoc_24) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  NewPriority_25 = (OpPriority_23 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                NewPriority_25 = OpPriority_23;
                break;
            }
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg_21, NewPriority_25);
            succeeded = (OpPriority_23 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_21)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv22_STATE_VARIABLE_State_49;

              func_21(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_State_49);
            }
            else
            {
            }
          }
          else
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_114_101_109_97_105_110_105_110_103_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_8_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Arg1_116;
          MR_Word Arg2_117;
          MR_Word Var_50;
          MR_Word Var_51;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Arg1_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_50)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Arg2_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 0)));
              Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 1)));
              succeeded = (Var_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          if (succeeded)
          {
            MR_Word FirstAssoc_42;
            MR_Integer FirstPriority_44;
            MR_Word SecondAssoc_46;
            MR_Integer SecondPriority_47;
            MR_Integer OpPriority_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
            MR_Box conv2_STATE_VARIABLE_State_56_56;
            MR_Word Var_43;
            MR_Box conv3_STATE_VARIABLE_State_59_59;
            MR_Word Var_45;

            succeeded = (OpPriority_114 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv1_STATE_VARIABLE_State_53_53;

              func_0(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_53_53);
            }
            else
            {
            }
            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_String) " ")), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_State_56_56);
            FirstAssoc_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 0)));
            Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 1)));
            switch (FirstAssoc_42) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  FirstPriority_44 = (OpPriority_114 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                FirstPriority_44 = OpPriority_114;
                break;
            }
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg1_116, FirstPriority_44);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_String) " ")), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_59_59);
            Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 0)));
            SecondAssoc_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 1)));
            switch (SecondAssoc_46) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  SecondPriority_47 = (OpPriority_114 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                SecondPriority_47 = OpPriority_114;
                break;
            }
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg2_117, SecondPriority_47);
            succeeded = (OpPriority_114 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv5_STATE_VARIABLE_State_49;

              func_4(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_State_49);
            }
            else
            {
            }
          }
          else
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_114_101_109_97_105_110_105_110_103_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_8_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word PostfixArg_26;
          MR_Word Var_80;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            PostfixArg_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = (Var_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Integer OpPriority_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word OpAssoc_102;
            MR_Integer NewPriority_103;
            MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
            MR_Box conv15_STATE_VARIABLE_State_85_85;

            succeeded = (OpPriority_101 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv14_STATE_VARIABLE_State_82_82;

              func_13(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_State_82_82);
            }
            else
            {
            }
            OpAssoc_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), OpClass_18, (MR_Integer) 0)));
            switch (OpAssoc_102) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  NewPriority_103 = (OpPriority_101 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                NewPriority_103 = OpPriority_101;
                break;
            }
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, PostfixArg_26, NewPriority_103);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_String) " ")), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_State_85_85);
            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15);
            succeeded = (OpPriority_101 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv17_STATE_VARIABLE_State_49;

              func_16(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_State_49);
            }
            else
            {
            }
          }
          else
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_114_101_109_97_105_110_105_110_103_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_8_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16);
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_114_101_109_97_105_110_105_110_103_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_8_p_0(
  MR_Word TypeClassInfo_for_writer_36,
  MR_Word TypeClassInfo_for_writer_37,
  MR_Word Stream_1,
  MR_Word NonCanon_2,
  MR_Word HeadVar__3_3,
  MR_Integer Priority_4,
  MR_String Functor_5,
  MR_Word Args_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer Var_28;

      succeeded = (Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        Var_28 = (MR_Integer) 1200;
        succeeded = (Priority_4 <= Var_28);
      }
      if (succeeded)
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_37, (MR_Integer) 0)), (MR_Integer) 5)));
        MR_Box conv1_STATE_VARIABLE_State_31_31;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv3_STATE_VARIABLE_State_8;

        func_0(((MR_Box) TypeClassInfo_for_writer_37), ((MR_Box) (Stream_1)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_31_31);
        mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_36, TypeClassInfo_for_writer_37, Stream_1, Functor_5, (MR_Integer) 1);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_37, (MR_Integer) 0)), (MR_Integer) 5)));
        func_2(((MR_Box) TypeClassInfo_for_writer_37), ((MR_Box) (Stream_1)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_8);
      }
      else
      {
        mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_36, TypeClassInfo_for_writer_37, Stream_1, Functor_5, (MR_Integer) 0);
        if (!((Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
        {
          MR_Word X_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_6, (MR_Integer) 0)));
          MR_Word Xs_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_6, (MR_Integer) 1)));
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_37, (MR_Integer) 0)), (MR_Integer) 5)));
          MR_Box conv5_STATE_VARIABLE_State_13_68;
          void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv7_STATE_VARIABLE_State_8;

          func_4(((MR_Box) TypeClassInfo_for_writer_37), ((MR_Box) (Stream_1)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_State_13_68);
          mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_writer_36, TypeClassInfo_for_writer_37, Stream_1, NonCanon_2, X_51, (MR_Integer) 1000);
          mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_116_101_114_109_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_36, TypeClassInfo_for_writer_37, Stream_1, NonCanon_2, Xs_52);
          func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_37, (MR_Integer) 0)), (MR_Integer) 5)));
          func_6(((MR_Box) TypeClassInfo_for_writer_37), ((MR_Box) (Stream_1)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_State_8);
        }
      }
    }
    else
    {
      MR_Word FirstOpInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word MoreOpInfos_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));

      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeClassInfo_for_writer_36, TypeClassInfo_for_writer_37, Stream_1, NonCanon_2, FirstOpInfo_11, MoreOpInfos_12, Priority_4, Functor_5, Args_6);
    }
  }
}

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_108_105_115_116_95_116_97_105_108_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeClassInfo_for_writer_27,
  MR_Word TypeClassInfo_for_writer_28,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeInfo_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 0)));
    MR_Box Term_10 = (MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 1));
    MR_String Functor_11;
    MR_Word Args_13;
    MR_Integer _Arity_12;
    MR_Word ListHead_14;
    MR_Word ListTail_15;
    MR_Word Var_18;
    MR_Word Var_19;

    /* setup for tailcalls optimized into a loop */
    mercury__deconstruct__deconstruct_5_p_0(TypeInfo_29_29, Term_10, NonCanon_7, &Functor_11, &_Arity_12, &Args_13);
    succeeded = (strcmp(Functor_11, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Args_13)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ListHead_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0)));
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          ListTail_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0)));
          Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1)));
          succeeded = (Var_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    if (succeeded)
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
      MR_Box conv1_STATE_VARIABLE_State_13_38;

      func_0(((MR_Box) TypeClassInfo_for_writer_27), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_13_38);
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_writer_27, TypeClassInfo_for_writer_28, Stream_6, NonCanon_7, ListHead_14, (MR_Integer) 1000);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_Univ_8 = ListTail_15;

        Univ_8 = next_value_of_Univ_8;
      }
      continue;
    }
    else
    {
      succeeded = (strcmp(Functor_11, (MR_String) "[]") == 0);
      if (succeeded)
        succeeded = (Args_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (!(succeeded))
      {
        MR_Integer Var_51;
        MR_Integer Var_53;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
        MR_Box conv3_STATE_VARIABLE_State_25_25;

        func_2(((MR_Box) TypeClassInfo_for_writer_27), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_String) " | ")), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_25_25);
        Var_53 = mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_109_97_120_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_in__ops_0();
        Var_51 = (Var_53 + (MR_Integer) 1);
        mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_writer_27, TypeClassInfo_for_writer_28, Stream_6, NonCanon_7, Univ_8, Var_51);
      }
    }
    break;
  }
}

void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_writer_81,
  MR_Word TypeClassInfo_for_writer_82,
  MR_Word Stream_7,
  MR_Word NonCanon_8,
  MR_Word Univ_9,
  MR_Integer Priority_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_String String_12;
    MR_Word TypeCtorInfo_83_83 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Box conv0_String_12;

    /* setup for tailcalls optimized into a loop */
    succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_83_83, Univ_9, &conv0_String_12);
    if (succeeded)
    {
      String_12 = ((MR_String) conv0_String_12);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, String_12);
    else
    {
      MR_Char Char_13;
      MR_Word TypeCtorInfo_84_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
      MR_Box conv1_Char_13;

      succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_84_84, Univ_9, &conv1_Char_13);
      if (succeeded)
      {
        Char_13 = ((MR_Char) (MR_Word) conv1_Char_13);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_p_in__term_io_0(TypeClassInfo_for_writer_81, Stream_7, Char_13);
      else
      {
        MR_Integer Int_14;
        MR_Word TypeCtorInfo_85_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Box conv2_Int_14;

        succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_85_85, Univ_9, &conv2_Int_14);
        if (succeeded)
        {
          Int_14 = ((MR_Integer) conv2_Int_14);
          succeeded = MR_TRUE;
        }
        if (succeeded)
          mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_81, Stream_7, Int_14);
        else
        {
          MR_Unsigned UInt_15;
          MR_Word TypeCtorInfo_86_86 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_uint_0;
          MR_Box conv3_UInt_15;

          succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_86_86, Univ_9, &conv3_UInt_15);
          if (succeeded)
          {
            UInt_15 = ((MR_Unsigned) conv3_UInt_15);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_117_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_81, Stream_7, UInt_15);
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_81, Stream_7, (MR_Char) 117);
          }
          else
          {
            MR_Float Float_16;
            MR_Word TypeCtorInfo_87_87 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
            MR_Box conv4_Float_16;

            succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_87_87, Univ_9, &conv4_Float_16);
            if (succeeded)
            {
              Float_16 = MR_unbox_float(conv4_Float_16);
              succeeded = MR_TRUE;
            }
            if (succeeded)
              mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_102_108_111_97_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_81, Stream_7, Float_16);
            else
            {
              MR_Box Bitmap_17;
              MR_Word TypeCtorInfo_88_88 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
              MR_Box conv5_Bitmap_17;

              succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_88_88, Univ_9, &conv5_Bitmap_17);
              if (succeeded)
              {
                Bitmap_17 = ((MR_Box) conv5_Bitmap_17);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_String Var_42;
                MR_Box conv6_STATE_VARIABLE_State_43_43;

                mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_81, Stream_7, (MR_Char) 34);
                Var_42 = mercury__bitmap__to_string_1_f_0(Bitmap_17);
                mercury__stream__put_4_p_0(TypeClassInfo_for_writer_81, ((MR_Box) (Stream_7)), ((MR_Box) (Var_42)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_State_43_43);
                mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_81, Stream_7, (MR_Char) 34);
              }
              else
              {
                MR_Word TypeDesc_18;
                MR_Word TypeCtorInfo_89_89 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
                MR_Box conv7_TypeDesc_18;

                succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_89_89, Univ_9, &conv7_TypeDesc_18);
                if (succeeded)
                {
                  TypeDesc_18 = ((MR_Word) conv7_TypeDesc_18);
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Box conv8_STATE_VARIABLE_State_32;

                  mercury__stream__string_writer__write_type_desc_4_p_0(TypeClassInfo_for_writer_81, ((MR_Box) (Stream_7)), TypeDesc_18, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_State_32);
                }
                else
                {
                  MR_Word TypeCtorDesc_19;
                  MR_Word TypeCtorInfo_90_90 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0;
                  MR_Box conv9_TypeCtorDesc_19;

                  succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_90_90, Univ_9, &conv9_TypeCtorDesc_19);
                  if (succeeded)
                  {
                    TypeCtorDesc_19 = ((MR_Word) conv9_TypeCtorDesc_19);
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    MR_Box conv10_STATE_VARIABLE_State_32;

                    mercury__stream__string_writer__write_type_ctor_desc_4_p_0(TypeClassInfo_for_writer_81, ((MR_Box) (Stream_7)), TypeCtorDesc_19, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_State_32);
                  }
                  else
                  {
                    MR_Word C_Pointer_20;
                    MR_Word TypeCtorInfo_91_91 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_c_pointer_0;
                    MR_Box conv11_C_Pointer_20;

                    succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_91_91, Univ_9, &conv11_C_Pointer_20);
                    if (succeeded)
                    {
                      C_Pointer_20 = ((MR_Word) conv11_C_Pointer_20);
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                    {
                      MR_Box conv12_STATE_VARIABLE_State_32;

                      mercury__stream__string_writer__write_c_pointer_4_p_0(TypeClassInfo_for_writer_81, ((MR_Box) (Stream_7)), C_Pointer_20, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_State_32);
                    }
                    else
                    {
                      MR_Word StreamInfo_22;
                      MR_Word TypeInfo_92_92;
                      MR_Word StreamDB_21;
                      MR_Box Var_49;

                      mercury__io__get_stream_db_with_locking_1_p_0(&StreamDB_21);
                      Var_49 = mercury__univ__univ_value_1_f_0(&TypeInfo_92_92, Univ_9);
                      succeeded = mercury__io__get_io_stream_info_2_f_0(TypeInfo_92_92, StreamDB_21, Var_49, &StreamInfo_22);
                      if (succeeded)
                      {
                        MR_Word TypeCtorInfo_93_93 = (MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0;
                        MR_Word StreamInfoUniv_23;

                        mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_93_93, ((MR_Box) (StreamInfo_22)), &StreamInfoUniv_23);
                        /* direct tailcall eliminated */
                        {
                          MR_Word next_value_of_Univ_9 = StreamInfoUniv_23;

                          Univ_9 = next_value_of_Univ_9;
                        }
                        continue;
                      }
                      else
                      {
                        MR_Word ElemType_26;
                        MR_Word TypeCtor_24;
                        MR_Word ArgTypes_25;
                        MR_Word Var_51;
                        MR_Word Var_52;
                        MR_String Var_53;
                        MR_String Var_54;

                        Var_51 = mercury__univ__univ_type_1_f_0(Univ_9);
                        mercury__type_desc__type_ctor_and_args_3_p_0(Var_51, &TypeCtor_24, &ArgTypes_25);
                        succeeded = ((MR_tag((MR_Word) ArgTypes_25)) == (MR_mktag((MR_Integer) 1)));
                        if (succeeded)
                        {
                          ElemType_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_25, (MR_Integer) 0)));
                          Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_25, (MR_Integer) 1)));
                          succeeded = (Var_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (succeeded)
                          {
                            Var_53 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_24);
                            succeeded = (strcmp(Var_53, (MR_String) "array") == 0);
                            if (succeeded)
                            {
                              Var_54 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_24);
                              succeeded = (strcmp(Var_54, (MR_String) "array") == 0);
                            }
                          }
                        }
                        if (succeeded)
                        {
                          MR_Word TypeInfo_94_94;
                          MR_Word TypeCtorInfo_95_95;
                          MR_Word TypeInfo_96_96;
                          MR_ArrayPtr Array_28;
                          MR_Box Elem_27;
                          MR_Box conv13_Array_28;

                          mercury__type_desc__has_type_2_p_0(&TypeInfo_94_94, ElemType_26);
                          TypeCtorInfo_95_95 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
                          {
                            TypeInfo_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), TypeInfo_96_96, 0) = ((MR_Box) (TypeCtorInfo_95_95));
                            MR_hl_field(MR_mktag(0), TypeInfo_96_96, 1) = ((MR_Box) (TypeInfo_94_94));
                          }
                          mercury__univ__det_univ_to_type_2_p_0(TypeInfo_96_96, Univ_9, &conv13_Array_28);
                          Array_28 = ((MR_ArrayPtr) conv13_Array_28);
                          mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_97_114_114_97_121_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeInfo_94_94, TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, (MR_ArrayPtr) Array_28);
                        }
                        else
                        {
                          MR_Word ElemType_79;
                          MR_Word Var_56;
                          MR_Word Var_57;
                          MR_String Var_58;
                          MR_String Var_59;
                          MR_Word TypeCtor_67;
                          MR_Word ArgTypes_68;

                          Var_56 = mercury__univ__univ_type_1_f_0(Univ_9);
                          mercury__type_desc__type_ctor_and_args_3_p_0(Var_56, &TypeCtor_67, &ArgTypes_68);
                          succeeded = ((MR_tag((MR_Word) ArgTypes_68)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            ElemType_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_68, (MR_Integer) 0)));
                            Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_68, (MR_Integer) 1)));
                            succeeded = (Var_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_58 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_67);
                              succeeded = (strcmp(Var_58, (MR_String) "version_array") == 0);
                              if (succeeded)
                              {
                                Var_59 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_67);
                                succeeded = (strcmp(Var_59, (MR_String) "version_array") == 0);
                              }
                            }
                          }
                          if (succeeded)
                          {
                            MR_Word TypeInfo_97_97;
                            MR_Word TypeCtorInfo_98_98;
                            MR_Word TypeInfo_99_99;
                            MR_Box VersionArray_29;
                            MR_Box Elem_69;
                            MR_Box conv14_VersionArray_29;

                            mercury__type_desc__has_type_2_p_0(&TypeInfo_97_97, ElemType_79);
                            TypeCtorInfo_98_98 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
                            {
                              TypeInfo_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), TypeInfo_99_99, 0) = ((MR_Box) (TypeCtorInfo_98_98));
                              MR_hl_field(MR_mktag(0), TypeInfo_99_99, 1) = ((MR_Box) (TypeInfo_97_97));
                            }
                            mercury__univ__det_univ_to_type_2_p_0(TypeInfo_99_99, Univ_9, &conv14_VersionArray_29);
                            VersionArray_29 = ((MR_Box) conv14_VersionArray_29);
                            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeInfo_97_97, TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, VersionArray_29);
                          }
                          else
                          {
                            MR_Word Var_61;
                            MR_Word Var_62;
                            MR_String Var_63;
                            MR_String Var_64;
                            MR_Word TypeCtor_70;
                            MR_Word ArgTypes_71;
                            MR_Word ElemType_75;

                            Var_61 = mercury__univ__univ_type_1_f_0(Univ_9);
                            mercury__type_desc__type_ctor_and_args_3_p_0(Var_61, &TypeCtor_70, &ArgTypes_71);
                            succeeded = ((MR_tag((MR_Word) ArgTypes_71)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              ElemType_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_71, (MR_Integer) 0)));
                              Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_71, (MR_Integer) 1)));
                              succeeded = (Var_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                Var_63 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_70);
                                succeeded = (strcmp(Var_63, (MR_String) "type_info") == 0);
                                if (succeeded)
                                {
                                  Var_64 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_70);
                                  succeeded = (strcmp(Var_64, (MR_String) "private_builtin") == 0);
                                }
                              }
                            }
                            if (succeeded)
                            {
                              MR_Word PrivateBuiltinTypeInfo_30;
                              MR_Word TypeCtorInfo_101_101 = (MR_Word) &mercury__private_builtin__private_builtin__type_ctor_info_type_info_0;
                              MR_Box conv15_PrivateBuiltinTypeInfo_30;
                              MR_Box conv16_STATE_VARIABLE_State_32;

                              mercury__univ__det_univ_to_type_2_p_0(TypeCtorInfo_101_101, Univ_9, &conv15_PrivateBuiltinTypeInfo_30);
                              PrivateBuiltinTypeInfo_30 = ((MR_Word) conv15_PrivateBuiltinTypeInfo_30);
                              mercury__stream__string_writer__write_private_builtin_type_info_4_p_0(TypeClassInfo_for_writer_81, ((MR_Box) (Stream_7)), PrivateBuiltinTypeInfo_30, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_State_32);
                            }
                            else
                              mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_111_114_100_105_110_97_114_121_95_116_101_114_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, NonCanon_8, Univ_9, Priority_10);
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
    break;
  }
}

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_111_114_100_105_110_97_114_121_95_116_101_114_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_writer_50,
  MR_Word TypeClassInfo_for_writer_51,
  MR_Word Stream_7,
  MR_Word NonCanon_8,
  MR_Word Univ_9,
  MR_Integer Priority_10)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 0)));
    MR_Box Term_12 = (MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 1));
    MR_String Functor_13;
    MR_Word Args_15;
    MR_Integer _Arity_14;
    MR_Word ListHead_16;
    MR_Word ListTail_17;
    MR_Word Var_26;
    MR_Word Var_27;

    mercury__deconstruct__deconstruct_5_p_0(TypeInfo_52_52, Term_12, NonCanon_8, &Functor_13, &_Arity_14, &Args_15);
    succeeded = (strcmp(Functor_13, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ListHead_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
        Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          ListTail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0)));
          Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1)));
          succeeded = (Var_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    if (succeeded)
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
      MR_Box conv1_STATE_VARIABLE_State_13_62;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv3_STATE_VARIABLE_State_25;

      func_0(((MR_Box) TypeClassInfo_for_writer_51), ((MR_Box) (Stream_7)), ((MR_Box) (MR_Word) ((MR_Char) 91)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_13_62);
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, ListHead_16, (MR_Integer) 1000);
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_108_105_115_116_95_116_97_105_108_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, ListTail_17);
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
      func_2(((MR_Box) TypeClassInfo_for_writer_51), ((MR_Box) (Stream_7)), ((MR_Box) (MR_Word) ((MR_Char) 93)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_25);
    }
    else
    {
      succeeded = (strcmp(Functor_13, (MR_String) "[]") == 0);
      if (succeeded)
        succeeded = (Args_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5)));
        MR_Box conv5_STATE_VARIABLE_State_25;

        func_4(((MR_Box) TypeClassInfo_for_writer_50), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_String) "[]")), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_State_25);
      }
      else
      {
        MR_Word BracedHead_18;
        MR_Word BracedTail_19;

        succeeded = (strcmp(Functor_13, (MR_String) "{}") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            BracedHead_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
            BracedTail_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
          }
        }
        if (succeeded)
          if ((BracedTail_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Integer Var_75;
            MR_Integer Var_77;
            void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5)));
            MR_Box conv7_STATE_VARIABLE_State_43_43;
            void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv9_STATE_VARIABLE_State_25;

            func_6(((MR_Box) TypeClassInfo_for_writer_50), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_String) "{ ")), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_State_43_43);
            Var_77 = mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_109_97_120_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_in__ops_0();
            Var_75 = (Var_77 + (MR_Integer) 1);
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, BracedHead_18, Var_75);
            func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5)));
            func_8(((MR_Box) TypeClassInfo_for_writer_50), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_String) " }")), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_State_25);
          }
          else
          {
            void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
            MR_Box conv11_STATE_VARIABLE_State_13_87;
            void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv13_STATE_VARIABLE_State_25;

            func_10(((MR_Box) TypeClassInfo_for_writer_51), ((MR_Box) (Stream_7)), ((MR_Box) (MR_Word) ((MR_Char) 123)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_State_13_87);
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, BracedHead_18, (MR_Integer) 1000);
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_116_101_114_109_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, BracedTail_19);
            func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
            func_12(((MR_Box) TypeClassInfo_for_writer_51), ((MR_Box) (Stream_7)), ((MR_Box) (MR_Word) ((MR_Char) 125)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_State_25);
          }
        else
        {
          MR_Word FirstOpInfo_22;
          MR_Word OtherOpInfos_23;
          MR_Word TypeClassInfo_for_op_table_53;
          MR_bool MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
          MR_Box conv16_FirstOpInfo_22;
          MR_Box conv15_OtherOpInfos_23;

          TypeClassInfo_for_op_table_53 = (MR_Word) &mercury__stream__string_writer_scalar_common_1[0];
          func_14 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_53, (MR_Integer) 0)), (MR_Integer) 10)));
          succeeded = func_14(((MR_Box) TypeClassInfo_for_op_table_53), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Functor_13)), &conv16_FirstOpInfo_22, &conv15_OtherOpInfos_23);
          if (succeeded)
          {
            FirstOpInfo_22 = ((MR_Word) conv16_FirstOpInfo_22);
            OtherOpInfos_23 = ((MR_Word) conv15_OtherOpInfos_23);
            succeeded = MR_TRUE;
          }
          if (succeeded)
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, FirstOpInfo_22, OtherOpInfos_23, Priority_10, Functor_13, Args_15);
          else
          {
            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, Functor_13, (MR_Integer) 0);
            if (!((Args_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
            {
              MR_Word X_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
              MR_Word Xs_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
              void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv18_STATE_VARIABLE_State_13_118;
              void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              MR_Box conv20_STATE_VARIABLE_State_25;

              func_17(((MR_Box) TypeClassInfo_for_writer_51), ((MR_Box) (Stream_7)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_State_13_118);
              mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, X_101, (MR_Integer) 1000);
              mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_116_101_114_109_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, Xs_102);
              func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
              func_19(((MR_Box) TypeClassInfo_for_writer_51), ((MR_Box) (Stream_7)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_State_25);
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_116_101_114_109_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeClassInfo_for_writer_22,
  MR_Word TypeClassInfo_for_writer_23,
  MR_Word HeadVar__1_1,
  MR_Word NonCanon_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if (!((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Xs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_22, (MR_Integer) 0)), (MR_Integer) 5)));
      MR_Box conv1_STATE_VARIABLE_State_13_31;
      MR_Word TypeInfo_18_34;

      func_0(((MR_Box) TypeClassInfo_for_writer_22), ((MR_Box) (HeadVar__1_1)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_13_31);
{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_116_101_114_109_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_22 ;
	Index =  (MR_Integer) 4 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_18_34  = TypeInfo;
}
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_writer_22, TypeClassInfo_for_writer_23, HeadVar__1_1, NonCanon_2, X_13, (MR_Integer) 1000);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__3_3 = Xs_14;

        HeadVar__3_3 = next_value_of_HeadVar__3_3;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_108_105_115_116_95_116_97_105_108_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2(
  MR_Word TypeClassInfo_for_writer_27,
  MR_Word TypeClassInfo_for_writer_28,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeInfo_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 0)));
    MR_Box Term_10 = (MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 1));
    MR_String Functor_11;
    MR_Word Args_13;
    MR_Integer _Arity_12;
    MR_Word ListHead_14;
    MR_Word ListTail_15;
    MR_Word Var_18;
    MR_Word Var_19;

    /* setup for tailcalls optimized into a loop */
    mercury__deconstruct__deconstruct_5_p_2(TypeInfo_29_29, Term_10, NonCanon_7, &Functor_11, &_Arity_12, &Args_13);
    succeeded = (strcmp(Functor_11, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Args_13)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ListHead_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0)));
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          ListTail_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0)));
          Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1)));
          succeeded = (Var_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    if (succeeded)
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
      MR_Box conv1_STATE_VARIABLE_State_13_38;

      func_0(((MR_Box) TypeClassInfo_for_writer_27), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_13_38);
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_6_p_2(TypeClassInfo_for_writer_27, TypeClassInfo_for_writer_28, Stream_6, NonCanon_7, ListHead_14, (MR_Integer) 1000);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_Univ_8 = ListTail_15;

        Univ_8 = next_value_of_Univ_8;
      }
      continue;
    }
    else
    {
      succeeded = (strcmp(Functor_11, (MR_String) "[]") == 0);
      if (succeeded)
        succeeded = (Args_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (!(succeeded))
      {
        MR_Integer Var_51;
        MR_Integer Var_53;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
        MR_Box conv3_STATE_VARIABLE_State_25_25;

        func_2(((MR_Box) TypeClassInfo_for_writer_27), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_String) " | ")), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_25_25);
        Var_53 = mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_109_97_120_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_in__ops_0();
        Var_51 = (Var_53 + (MR_Integer) 1);
        mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_6_p_2(TypeClassInfo_for_writer_27, TypeClassInfo_for_writer_28, Stream_6, NonCanon_7, Univ_8, Var_51);
      }
    }
    break;
  }
}

void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_6_p_2(
  MR_Word TypeClassInfo_for_writer_81,
  MR_Word TypeClassInfo_for_writer_82,
  MR_Word Stream_7,
  MR_Word NonCanon_8,
  MR_Word Univ_9,
  MR_Integer Priority_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_String String_12;
    MR_Word TypeCtorInfo_83_83 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Box conv0_String_12;

    /* setup for tailcalls optimized into a loop */
    succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_83_83, Univ_9, &conv0_String_12);
    if (succeeded)
    {
      String_12 = ((MR_String) conv0_String_12);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, String_12);
    else
    {
      MR_Char Char_13;
      MR_Word TypeCtorInfo_84_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
      MR_Box conv1_Char_13;

      succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_84_84, Univ_9, &conv1_Char_13);
      if (succeeded)
      {
        Char_13 = ((MR_Char) (MR_Word) conv1_Char_13);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_p_in__term_io_0(TypeClassInfo_for_writer_81, Stream_7, Char_13);
      else
      {
        MR_Integer Int_14;
        MR_Word TypeCtorInfo_85_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Box conv2_Int_14;

        succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_85_85, Univ_9, &conv2_Int_14);
        if (succeeded)
        {
          Int_14 = ((MR_Integer) conv2_Int_14);
          succeeded = MR_TRUE;
        }
        if (succeeded)
          mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_81, Stream_7, Int_14);
        else
        {
          MR_Unsigned UInt_15;
          MR_Word TypeCtorInfo_86_86 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_uint_0;
          MR_Box conv3_UInt_15;

          succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_86_86, Univ_9, &conv3_UInt_15);
          if (succeeded)
          {
            UInt_15 = ((MR_Unsigned) conv3_UInt_15);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_117_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_81, Stream_7, UInt_15);
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_81, Stream_7, (MR_Char) 117);
          }
          else
          {
            MR_Float Float_16;
            MR_Word TypeCtorInfo_87_87 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
            MR_Box conv4_Float_16;

            succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_87_87, Univ_9, &conv4_Float_16);
            if (succeeded)
            {
              Float_16 = MR_unbox_float(conv4_Float_16);
              succeeded = MR_TRUE;
            }
            if (succeeded)
              mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_102_108_111_97_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_81, Stream_7, Float_16);
            else
            {
              MR_Box Bitmap_17;
              MR_Word TypeCtorInfo_88_88 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
              MR_Box conv5_Bitmap_17;

              succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_88_88, Univ_9, &conv5_Bitmap_17);
              if (succeeded)
              {
                Bitmap_17 = ((MR_Box) conv5_Bitmap_17);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_String Var_42;
                MR_Box conv6_STATE_VARIABLE_State_43_43;

                mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_81, Stream_7, (MR_Char) 34);
                Var_42 = mercury__bitmap__to_string_1_f_0(Bitmap_17);
                mercury__stream__put_4_p_0(TypeClassInfo_for_writer_81, ((MR_Box) (Stream_7)), ((MR_Box) (Var_42)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_State_43_43);
                mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_81, Stream_7, (MR_Char) 34);
              }
              else
              {
                MR_Word TypeDesc_18;
                MR_Word TypeCtorInfo_89_89 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
                MR_Box conv7_TypeDesc_18;

                succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_89_89, Univ_9, &conv7_TypeDesc_18);
                if (succeeded)
                {
                  TypeDesc_18 = ((MR_Word) conv7_TypeDesc_18);
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Box conv8_STATE_VARIABLE_State_32;

                  mercury__stream__string_writer__write_type_desc_4_p_0(TypeClassInfo_for_writer_81, ((MR_Box) (Stream_7)), TypeDesc_18, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_State_32);
                }
                else
                {
                  MR_Word TypeCtorDesc_19;
                  MR_Word TypeCtorInfo_90_90 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0;
                  MR_Box conv9_TypeCtorDesc_19;

                  succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_90_90, Univ_9, &conv9_TypeCtorDesc_19);
                  if (succeeded)
                  {
                    TypeCtorDesc_19 = ((MR_Word) conv9_TypeCtorDesc_19);
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    MR_Box conv10_STATE_VARIABLE_State_32;

                    mercury__stream__string_writer__write_type_ctor_desc_4_p_0(TypeClassInfo_for_writer_81, ((MR_Box) (Stream_7)), TypeCtorDesc_19, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_State_32);
                  }
                  else
                  {
                    MR_Word C_Pointer_20;
                    MR_Word TypeCtorInfo_91_91 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_c_pointer_0;
                    MR_Box conv11_C_Pointer_20;

                    succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_91_91, Univ_9, &conv11_C_Pointer_20);
                    if (succeeded)
                    {
                      C_Pointer_20 = ((MR_Word) conv11_C_Pointer_20);
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                    {
                      MR_Box conv12_STATE_VARIABLE_State_32;

                      mercury__stream__string_writer__write_c_pointer_4_p_0(TypeClassInfo_for_writer_81, ((MR_Box) (Stream_7)), C_Pointer_20, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_State_32);
                    }
                    else
                    {
                      MR_Word StreamInfo_22;
                      MR_Word TypeInfo_92_92;
                      MR_Word StreamDB_21;
                      MR_Box Var_49;

                      mercury__io__get_stream_db_with_locking_1_p_0(&StreamDB_21);
                      Var_49 = mercury__univ__univ_value_1_f_0(&TypeInfo_92_92, Univ_9);
                      succeeded = mercury__io__get_io_stream_info_2_f_0(TypeInfo_92_92, StreamDB_21, Var_49, &StreamInfo_22);
                      if (succeeded)
                      {
                        MR_Word TypeCtorInfo_93_93 = (MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0;
                        MR_Word StreamInfoUniv_23;

                        mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_93_93, ((MR_Box) (StreamInfo_22)), &StreamInfoUniv_23);
                        /* direct tailcall eliminated */
                        {
                          MR_Word next_value_of_Univ_9 = StreamInfoUniv_23;

                          Univ_9 = next_value_of_Univ_9;
                        }
                        continue;
                      }
                      else
                      {
                        MR_Word ElemType_26;
                        MR_Word TypeCtor_24;
                        MR_Word ArgTypes_25;
                        MR_Word Var_51;
                        MR_Word Var_52;
                        MR_String Var_53;
                        MR_String Var_54;

                        Var_51 = mercury__univ__univ_type_1_f_0(Univ_9);
                        mercury__type_desc__type_ctor_and_args_3_p_0(Var_51, &TypeCtor_24, &ArgTypes_25);
                        succeeded = ((MR_tag((MR_Word) ArgTypes_25)) == (MR_mktag((MR_Integer) 1)));
                        if (succeeded)
                        {
                          ElemType_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_25, (MR_Integer) 0)));
                          Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_25, (MR_Integer) 1)));
                          succeeded = (Var_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (succeeded)
                          {
                            Var_53 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_24);
                            succeeded = (strcmp(Var_53, (MR_String) "array") == 0);
                            if (succeeded)
                            {
                              Var_54 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_24);
                              succeeded = (strcmp(Var_54, (MR_String) "array") == 0);
                            }
                          }
                        }
                        if (succeeded)
                        {
                          MR_Word TypeInfo_94_94;
                          MR_Word TypeCtorInfo_95_95;
                          MR_Word TypeInfo_96_96;
                          MR_ArrayPtr Array_28;
                          MR_Box Elem_27;
                          MR_Box conv13_Array_28;

                          mercury__type_desc__has_type_2_p_0(&TypeInfo_94_94, ElemType_26);
                          TypeCtorInfo_95_95 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
                          {
                            TypeInfo_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), TypeInfo_96_96, 0) = ((MR_Box) (TypeCtorInfo_95_95));
                            MR_hl_field(MR_mktag(0), TypeInfo_96_96, 1) = ((MR_Box) (TypeInfo_94_94));
                          }
                          mercury__univ__det_univ_to_type_2_p_0(TypeInfo_96_96, Univ_9, &conv13_Array_28);
                          Array_28 = ((MR_ArrayPtr) conv13_Array_28);
                          mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_97_114_114_97_121_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeInfo_94_94, TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, (MR_ArrayPtr) Array_28);
                        }
                        else
                        {
                          MR_Word ElemType_79;
                          MR_Word Var_56;
                          MR_Word Var_57;
                          MR_String Var_58;
                          MR_String Var_59;
                          MR_Word TypeCtor_67;
                          MR_Word ArgTypes_68;

                          Var_56 = mercury__univ__univ_type_1_f_0(Univ_9);
                          mercury__type_desc__type_ctor_and_args_3_p_0(Var_56, &TypeCtor_67, &ArgTypes_68);
                          succeeded = ((MR_tag((MR_Word) ArgTypes_68)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            ElemType_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_68, (MR_Integer) 0)));
                            Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_68, (MR_Integer) 1)));
                            succeeded = (Var_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_58 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_67);
                              succeeded = (strcmp(Var_58, (MR_String) "version_array") == 0);
                              if (succeeded)
                              {
                                Var_59 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_67);
                                succeeded = (strcmp(Var_59, (MR_String) "version_array") == 0);
                              }
                            }
                          }
                          if (succeeded)
                          {
                            MR_Word TypeInfo_97_97;
                            MR_Word TypeCtorInfo_98_98;
                            MR_Word TypeInfo_99_99;
                            MR_Box VersionArray_29;
                            MR_Box Elem_69;
                            MR_Box conv14_VersionArray_29;

                            mercury__type_desc__has_type_2_p_0(&TypeInfo_97_97, ElemType_79);
                            TypeCtorInfo_98_98 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
                            {
                              TypeInfo_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), TypeInfo_99_99, 0) = ((MR_Box) (TypeCtorInfo_98_98));
                              MR_hl_field(MR_mktag(0), TypeInfo_99_99, 1) = ((MR_Box) (TypeInfo_97_97));
                            }
                            mercury__univ__det_univ_to_type_2_p_0(TypeInfo_99_99, Univ_9, &conv14_VersionArray_29);
                            VersionArray_29 = ((MR_Box) conv14_VersionArray_29);
                            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeInfo_97_97, TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, VersionArray_29);
                          }
                          else
                          {
                            MR_Word Var_61;
                            MR_Word Var_62;
                            MR_String Var_63;
                            MR_String Var_64;
                            MR_Word TypeCtor_70;
                            MR_Word ArgTypes_71;
                            MR_Word ElemType_75;

                            Var_61 = mercury__univ__univ_type_1_f_0(Univ_9);
                            mercury__type_desc__type_ctor_and_args_3_p_0(Var_61, &TypeCtor_70, &ArgTypes_71);
                            succeeded = ((MR_tag((MR_Word) ArgTypes_71)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              ElemType_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_71, (MR_Integer) 0)));
                              Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_71, (MR_Integer) 1)));
                              succeeded = (Var_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                Var_63 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_70);
                                succeeded = (strcmp(Var_63, (MR_String) "type_info") == 0);
                                if (succeeded)
                                {
                                  Var_64 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_70);
                                  succeeded = (strcmp(Var_64, (MR_String) "private_builtin") == 0);
                                }
                              }
                            }
                            if (succeeded)
                            {
                              MR_Word PrivateBuiltinTypeInfo_30;
                              MR_Word TypeCtorInfo_101_101 = (MR_Word) &mercury__private_builtin__private_builtin__type_ctor_info_type_info_0;
                              MR_Box conv15_PrivateBuiltinTypeInfo_30;
                              MR_Box conv16_STATE_VARIABLE_State_32;

                              mercury__univ__det_univ_to_type_2_p_0(TypeCtorInfo_101_101, Univ_9, &conv15_PrivateBuiltinTypeInfo_30);
                              PrivateBuiltinTypeInfo_30 = ((MR_Word) conv15_PrivateBuiltinTypeInfo_30);
                              mercury__stream__string_writer__write_private_builtin_type_info_4_p_0(TypeClassInfo_for_writer_81, ((MR_Box) (Stream_7)), PrivateBuiltinTypeInfo_30, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_State_32);
                            }
                            else
                              mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_111_114_100_105_110_97_114_121_95_116_101_114_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_6_p_2(TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, NonCanon_8, Univ_9, Priority_10);
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
    break;
  }
}

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_111_114_100_105_110_97_114_121_95_116_101_114_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_6_p_2(
  MR_Word TypeClassInfo_for_writer_50,
  MR_Word TypeClassInfo_for_writer_51,
  MR_Word Stream_7,
  MR_Word NonCanon_8,
  MR_Word Univ_9,
  MR_Integer Priority_10)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 0)));
    MR_Box Term_12 = (MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 1));
    MR_String Functor_13;
    MR_Word Args_15;
    MR_Integer _Arity_14;
    MR_Word ListHead_16;
    MR_Word ListTail_17;
    MR_Word Var_26;
    MR_Word Var_27;

    mercury__deconstruct__deconstruct_5_p_2(TypeInfo_52_52, Term_12, NonCanon_8, &Functor_13, &_Arity_14, &Args_15);
    succeeded = (strcmp(Functor_13, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ListHead_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
        Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          ListTail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0)));
          Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1)));
          succeeded = (Var_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    if (succeeded)
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
      MR_Box conv1_STATE_VARIABLE_State_13_62;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv3_STATE_VARIABLE_State_25;

      func_0(((MR_Box) TypeClassInfo_for_writer_51), ((MR_Box) (Stream_7)), ((MR_Box) (MR_Word) ((MR_Char) 91)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_13_62);
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_6_p_2(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, ListHead_16, (MR_Integer) 1000);
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_108_105_115_116_95_116_97_105_108_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, ListTail_17);
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
      func_2(((MR_Box) TypeClassInfo_for_writer_51), ((MR_Box) (Stream_7)), ((MR_Box) (MR_Word) ((MR_Char) 93)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_25);
    }
    else
    {
      succeeded = (strcmp(Functor_13, (MR_String) "[]") == 0);
      if (succeeded)
        succeeded = (Args_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5)));
        MR_Box conv5_STATE_VARIABLE_State_25;

        func_4(((MR_Box) TypeClassInfo_for_writer_50), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_String) "[]")), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_State_25);
      }
      else
      {
        MR_Word BracedHead_18;
        MR_Word BracedTail_19;

        succeeded = (strcmp(Functor_13, (MR_String) "{}") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            BracedHead_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
            BracedTail_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
          }
        }
        if (succeeded)
          if ((BracedTail_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Integer Var_75;
            MR_Integer Var_77;
            void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5)));
            MR_Box conv7_STATE_VARIABLE_State_43_43;
            void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv9_STATE_VARIABLE_State_25;

            func_6(((MR_Box) TypeClassInfo_for_writer_50), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_String) "{ ")), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_State_43_43);
            Var_77 = mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_109_97_120_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_in__ops_0();
            Var_75 = (Var_77 + (MR_Integer) 1);
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_6_p_2(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, BracedHead_18, Var_75);
            func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5)));
            func_8(((MR_Box) TypeClassInfo_for_writer_50), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_String) " }")), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_State_25);
          }
          else
          {
            void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
            MR_Box conv11_STATE_VARIABLE_State_13_87;
            void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv13_STATE_VARIABLE_State_25;

            func_10(((MR_Box) TypeClassInfo_for_writer_51), ((MR_Box) (Stream_7)), ((MR_Box) (MR_Word) ((MR_Char) 123)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_State_13_87);
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_6_p_2(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, BracedHead_18, (MR_Integer) 1000);
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_116_101_114_109_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, BracedTail_19);
            func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
            func_12(((MR_Box) TypeClassInfo_for_writer_51), ((MR_Box) (Stream_7)), ((MR_Box) (MR_Word) ((MR_Char) 125)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_State_25);
          }
        else
        {
          MR_Word FirstOpInfo_22;
          MR_Word OtherOpInfos_23;
          MR_Word TypeClassInfo_for_op_table_53;
          MR_bool MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
          MR_Box conv16_FirstOpInfo_22;
          MR_Box conv15_OtherOpInfos_23;

          TypeClassInfo_for_op_table_53 = (MR_Word) &mercury__stream__string_writer_scalar_common_1[0];
          func_14 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_53, (MR_Integer) 0)), (MR_Integer) 10)));
          succeeded = func_14(((MR_Box) TypeClassInfo_for_op_table_53), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Functor_13)), &conv16_FirstOpInfo_22, &conv15_OtherOpInfos_23);
          if (succeeded)
          {
            FirstOpInfo_22 = ((MR_Word) conv16_FirstOpInfo_22);
            OtherOpInfos_23 = ((MR_Word) conv15_OtherOpInfos_23);
            succeeded = MR_TRUE;
          }
          if (succeeded)
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_9_p_2(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, FirstOpInfo_22, OtherOpInfos_23, Priority_10, Functor_13, Args_15);
          else
          {
            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, Functor_13, (MR_Integer) 0);
            if (!((Args_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
            {
              MR_Word X_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
              MR_Word Xs_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
              void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv18_STATE_VARIABLE_State_13_118;
              void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              MR_Box conv20_STATE_VARIABLE_State_25;

              func_17(((MR_Box) TypeClassInfo_for_writer_51), ((MR_Box) (Stream_7)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_State_13_118);
              mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_6_p_2(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, X_101, (MR_Integer) 1000);
              mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_116_101_114_109_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, Xs_102);
              func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
              func_19(((MR_Box) TypeClassInfo_for_writer_51), ((MR_Box) (Stream_7)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_State_25);
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_116_101_114_109_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2(
  MR_Word TypeClassInfo_for_writer_22,
  MR_Word TypeClassInfo_for_writer_23,
  MR_Word HeadVar__1_1,
  MR_Word NonCanon_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if (!((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Xs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_22, (MR_Integer) 0)), (MR_Integer) 5)));
      MR_Box conv1_STATE_VARIABLE_State_13_31;
      MR_Word TypeInfo_18_34;

      func_0(((MR_Box) TypeClassInfo_for_writer_22), ((MR_Box) (HeadVar__1_1)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_13_31);
{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_116_101_114_109_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_5_p_2

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_22 ;
	Index =  (MR_Integer) 4 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_18_34  = TypeInfo;
}
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_6_p_2(TypeClassInfo_for_writer_22, TypeClassInfo_for_writer_23, HeadVar__1_1, NonCanon_2, X_13, (MR_Integer) 1000);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__3_3 = Xs_14;

        HeadVar__3_3 = next_value_of_HeadVar__3_3;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_9_p_2(
  MR_Word TypeClassInfo_for_writer_121,
  MR_Word TypeClassInfo_for_writer_122,
  MR_Word Stream_10,
  MR_Word NonCanon_11,
  MR_Word OpInfo_12,
  MR_Word OtherOpInfos_13,
  MR_Integer Priority_14,
  MR_String Functor_15,
  MR_Word Args_16)
{
  {
    MR_bool succeeded;
    MR_Word OpClass_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
    MR_Integer Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) OpClass_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Arg1_30;
          MR_Word Arg2_31;
          MR_Word Var_64;
          MR_Word Var_65;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Arg1_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_64)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Arg2_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 0)));
              Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 1)));
              succeeded = (Var_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          if (succeeded)
          {
            MR_Word LeftAssoc_33;
            MR_Integer LeftPriority_35;
            MR_Word RightAssoc_37;
            MR_Integer RightPriority_38;
            MR_Integer OpPriority_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
            MR_Word Var_34;
            MR_Word Var_36;

            succeeded = (OpPriority_111 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv7_STATE_VARIABLE_State_67_67;

              func_6(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_State_67_67);
            }
            else
            {
            }
            LeftAssoc_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 0)));
            Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 1)));
            switch (LeftAssoc_33) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  LeftPriority_35 = (OpPriority_111 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                LeftPriority_35 = OpPriority_111;
                break;
            }
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_6_p_2(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg1_30, LeftPriority_35);
            succeeded = (strcmp(Functor_15, (MR_String) ",") == 0);
            if (succeeded)
            {
              MR_Box conv8_STATE_VARIABLE_State_70_70;

              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_State_70_70);
            }
            else
            {
              MR_Box conv9_STATE_VARIABLE_State_72_72;
              MR_Box conv10_STATE_VARIABLE_State_70_70;

              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_String) " ")), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_State_72_72);
              mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15);
              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_String) " ")), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_State_70_70);
            }
            Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 0)));
            RightAssoc_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 1)));
            switch (RightAssoc_37) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  RightPriority_38 = (OpPriority_111 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                RightPriority_38 = OpPriority_111;
                break;
            }
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_6_p_2(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg2_31, RightPriority_38);
            succeeded = (OpPriority_111 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv12_STATE_VARIABLE_State_49;

              func_11(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_State_49);
            }
            else
            {
            }
          }
          else
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_114_101_109_97_105_110_105_110_103_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_8_p_3(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Arg_21;
          MR_Word Var_90;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Arg_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = (Var_90 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Integer OpPriority_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word OpAssoc_24;
            MR_Integer NewPriority_25;
            MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
            MR_Box conv20_STATE_VARIABLE_State_95_95;

            succeeded = (OpPriority_23 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv19_STATE_VARIABLE_State_92_92;

              func_18(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_State_92_92);
            }
            else
            {
            }
            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_String) " ")), ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_State_95_95);
            OpAssoc_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), OpClass_18, (MR_Integer) 0)));
            switch (OpAssoc_24) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  NewPriority_25 = (OpPriority_23 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                NewPriority_25 = OpPriority_23;
                break;
            }
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_6_p_2(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg_21, NewPriority_25);
            succeeded = (OpPriority_23 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_21)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv22_STATE_VARIABLE_State_49;

              func_21(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_State_49);
            }
            else
            {
            }
          }
          else
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_114_101_109_97_105_110_105_110_103_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_8_p_3(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Arg1_116;
          MR_Word Arg2_117;
          MR_Word Var_50;
          MR_Word Var_51;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Arg1_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_50)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Arg2_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 0)));
              Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 1)));
              succeeded = (Var_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          if (succeeded)
          {
            MR_Word FirstAssoc_42;
            MR_Integer FirstPriority_44;
            MR_Word SecondAssoc_46;
            MR_Integer SecondPriority_47;
            MR_Integer OpPriority_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
            MR_Box conv2_STATE_VARIABLE_State_56_56;
            MR_Word Var_43;
            MR_Box conv3_STATE_VARIABLE_State_59_59;
            MR_Word Var_45;

            succeeded = (OpPriority_114 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv1_STATE_VARIABLE_State_53_53;

              func_0(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_53_53);
            }
            else
            {
            }
            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_String) " ")), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_State_56_56);
            FirstAssoc_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 0)));
            Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 1)));
            switch (FirstAssoc_42) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  FirstPriority_44 = (OpPriority_114 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                FirstPriority_44 = OpPriority_114;
                break;
            }
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_6_p_2(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg1_116, FirstPriority_44);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_String) " ")), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_59_59);
            Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 0)));
            SecondAssoc_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 1)));
            switch (SecondAssoc_46) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  SecondPriority_47 = (OpPriority_114 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                SecondPriority_47 = OpPriority_114;
                break;
            }
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_6_p_2(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg2_117, SecondPriority_47);
            succeeded = (OpPriority_114 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv5_STATE_VARIABLE_State_49;

              func_4(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_State_49);
            }
            else
            {
            }
          }
          else
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_114_101_109_97_105_110_105_110_103_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_8_p_3(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word PostfixArg_26;
          MR_Word Var_80;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            PostfixArg_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = (Var_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Integer OpPriority_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word OpAssoc_102;
            MR_Integer NewPriority_103;
            MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
            MR_Box conv15_STATE_VARIABLE_State_85_85;

            succeeded = (OpPriority_101 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv14_STATE_VARIABLE_State_82_82;

              func_13(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_State_82_82);
            }
            else
            {
            }
            OpAssoc_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), OpClass_18, (MR_Integer) 0)));
            switch (OpAssoc_102) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  NewPriority_103 = (OpPriority_101 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                NewPriority_103 = OpPriority_101;
                break;
            }
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_50_95_49_6_p_2(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, PostfixArg_26, NewPriority_103);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_String) " ")), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_State_85_85);
            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15);
            succeeded = (OpPriority_101 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv17_STATE_VARIABLE_State_49;

              func_16(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_State_49);
            }
            else
            {
            }
          }
          else
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_114_101_109_97_105_110_105_110_103_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_8_p_3(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16);
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_9_p_3(
  MR_Word TypeClassInfo_for_writer_121,
  MR_Word TypeClassInfo_for_writer_122,
  MR_Word Stream_10,
  MR_Word NonCanon_11,
  MR_Word OpInfo_12,
  MR_Word OtherOpInfos_13,
  MR_Integer Priority_14,
  MR_String Functor_15,
  MR_Word Args_16)
{
  {
    MR_bool succeeded;
    MR_Word OpClass_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
    MR_Integer Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) OpClass_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Arg1_30;
          MR_Word Arg2_31;
          MR_Word Var_64;
          MR_Word Var_65;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Arg1_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_64)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Arg2_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 0)));
              Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 1)));
              succeeded = (Var_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          if (succeeded)
          {
            MR_Word LeftAssoc_33;
            MR_Integer LeftPriority_35;
            MR_Word RightAssoc_37;
            MR_Integer RightPriority_38;
            MR_Integer OpPriority_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
            MR_Word Var_34;
            MR_Word Var_36;

            succeeded = (OpPriority_111 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv7_STATE_VARIABLE_State_67_67;

              func_6(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_State_67_67);
            }
            else
            {
            }
            LeftAssoc_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 0)));
            Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 1)));
            switch (LeftAssoc_33) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  LeftPriority_35 = (OpPriority_111 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                LeftPriority_35 = OpPriority_111;
                break;
            }
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_6_p_3(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg1_30, LeftPriority_35);
            succeeded = (strcmp(Functor_15, (MR_String) ",") == 0);
            if (succeeded)
            {
              MR_Box conv8_STATE_VARIABLE_State_70_70;

              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_State_70_70);
            }
            else
            {
              MR_Box conv9_STATE_VARIABLE_State_72_72;
              MR_Box conv10_STATE_VARIABLE_State_70_70;

              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_String) " ")), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_State_72_72);
              mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15);
              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_String) " ")), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_State_70_70);
            }
            Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 0)));
            RightAssoc_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 1)));
            switch (RightAssoc_37) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  RightPriority_38 = (OpPriority_111 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                RightPriority_38 = OpPriority_111;
                break;
            }
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_6_p_3(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg2_31, RightPriority_38);
            succeeded = (OpPriority_111 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv12_STATE_VARIABLE_State_49;

              func_11(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_State_49);
            }
            else
            {
            }
          }
          else
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_114_101_109_97_105_110_105_110_103_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_8_p_3(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Arg_21;
          MR_Word Var_90;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Arg_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = (Var_90 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Integer OpPriority_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word OpAssoc_24;
            MR_Integer NewPriority_25;
            MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
            MR_Box conv20_STATE_VARIABLE_State_95_95;

            succeeded = (OpPriority_23 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv19_STATE_VARIABLE_State_92_92;

              func_18(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_State_92_92);
            }
            else
            {
            }
            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_String) " ")), ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_State_95_95);
            OpAssoc_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), OpClass_18, (MR_Integer) 0)));
            switch (OpAssoc_24) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  NewPriority_25 = (OpPriority_23 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                NewPriority_25 = OpPriority_23;
                break;
            }
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_6_p_3(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg_21, NewPriority_25);
            succeeded = (OpPriority_23 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_21)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv22_STATE_VARIABLE_State_49;

              func_21(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_State_49);
            }
            else
            {
            }
          }
          else
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_114_101_109_97_105_110_105_110_103_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_8_p_3(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Arg1_116;
          MR_Word Arg2_117;
          MR_Word Var_50;
          MR_Word Var_51;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Arg1_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_50)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Arg2_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 0)));
              Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 1)));
              succeeded = (Var_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          if (succeeded)
          {
            MR_Word FirstAssoc_42;
            MR_Integer FirstPriority_44;
            MR_Word SecondAssoc_46;
            MR_Integer SecondPriority_47;
            MR_Integer OpPriority_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
            MR_Box conv2_STATE_VARIABLE_State_56_56;
            MR_Word Var_43;
            MR_Box conv3_STATE_VARIABLE_State_59_59;
            MR_Word Var_45;

            succeeded = (OpPriority_114 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv1_STATE_VARIABLE_State_53_53;

              func_0(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_53_53);
            }
            else
            {
            }
            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_String) " ")), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_State_56_56);
            FirstAssoc_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 0)));
            Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 1)));
            switch (FirstAssoc_42) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  FirstPriority_44 = (OpPriority_114 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                FirstPriority_44 = OpPriority_114;
                break;
            }
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_6_p_3(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg1_116, FirstPriority_44);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_String) " ")), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_59_59);
            Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 0)));
            SecondAssoc_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 1)));
            switch (SecondAssoc_46) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  SecondPriority_47 = (OpPriority_114 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                SecondPriority_47 = OpPriority_114;
                break;
            }
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_6_p_3(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg2_117, SecondPriority_47);
            succeeded = (OpPriority_114 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv5_STATE_VARIABLE_State_49;

              func_4(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_State_49);
            }
            else
            {
            }
          }
          else
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_114_101_109_97_105_110_105_110_103_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_8_p_3(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word PostfixArg_26;
          MR_Word Var_80;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            PostfixArg_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = (Var_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Integer OpPriority_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word OpAssoc_102;
            MR_Integer NewPriority_103;
            MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
            MR_Box conv15_STATE_VARIABLE_State_85_85;

            succeeded = (OpPriority_101 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv14_STATE_VARIABLE_State_82_82;

              func_13(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_State_82_82);
            }
            else
            {
            }
            OpAssoc_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), OpClass_18, (MR_Integer) 0)));
            switch (OpAssoc_102) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  NewPriority_103 = (OpPriority_101 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                NewPriority_103 = OpPriority_101;
                break;
            }
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_6_p_3(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, PostfixArg_26, NewPriority_103);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_String) " ")), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_State_85_85);
            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15);
            succeeded = (OpPriority_101 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv17_STATE_VARIABLE_State_49;

              func_16(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_State_49);
            }
            else
            {
            }
          }
          else
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_114_101_109_97_105_110_105_110_103_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_8_p_3(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16);
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_114_101_109_97_105_110_105_110_103_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_8_p_3(
  MR_Word TypeClassInfo_for_writer_36,
  MR_Word TypeClassInfo_for_writer_37,
  MR_Word Stream_1,
  MR_Word NonCanon_2,
  MR_Word HeadVar__3_3,
  MR_Integer Priority_4,
  MR_String Functor_5,
  MR_Word Args_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer Var_28;

      succeeded = (Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        Var_28 = (MR_Integer) 1200;
        succeeded = (Priority_4 <= Var_28);
      }
      if (succeeded)
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_37, (MR_Integer) 0)), (MR_Integer) 5)));
        MR_Box conv1_STATE_VARIABLE_State_31_31;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv3_STATE_VARIABLE_State_8;

        func_0(((MR_Box) TypeClassInfo_for_writer_37), ((MR_Box) (Stream_1)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_31_31);
        mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_36, TypeClassInfo_for_writer_37, Stream_1, Functor_5, (MR_Integer) 1);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_37, (MR_Integer) 0)), (MR_Integer) 5)));
        func_2(((MR_Box) TypeClassInfo_for_writer_37), ((MR_Box) (Stream_1)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_8);
      }
      else
      {
        mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_36, TypeClassInfo_for_writer_37, Stream_1, Functor_5, (MR_Integer) 0);
        if (!((Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
        {
          MR_Word X_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_6, (MR_Integer) 0)));
          MR_Word Xs_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_6, (MR_Integer) 1)));
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_37, (MR_Integer) 0)), (MR_Integer) 5)));
          MR_Box conv5_STATE_VARIABLE_State_13_68;
          void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv7_STATE_VARIABLE_State_8;

          func_4(((MR_Box) TypeClassInfo_for_writer_37), ((MR_Box) (Stream_1)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_State_13_68);
          mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_6_p_3(TypeClassInfo_for_writer_36, TypeClassInfo_for_writer_37, Stream_1, NonCanon_2, X_51, (MR_Integer) 1000);
          mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_116_101_114_109_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_5_p_3(TypeClassInfo_for_writer_36, TypeClassInfo_for_writer_37, Stream_1, NonCanon_2, Xs_52);
          func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_37, (MR_Integer) 0)), (MR_Integer) 5)));
          func_6(((MR_Box) TypeClassInfo_for_writer_37), ((MR_Box) (Stream_1)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_State_8);
        }
      }
    }
    else
    {
      MR_Word FirstOpInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word MoreOpInfos_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));

      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_9_p_3(TypeClassInfo_for_writer_36, TypeClassInfo_for_writer_37, Stream_1, NonCanon_2, FirstOpInfo_11, MoreOpInfos_12, Priority_4, Functor_5, Args_6);
    }
  }
}

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_108_105_115_116_95_116_97_105_108_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_5_p_3(
  MR_Word TypeClassInfo_for_writer_27,
  MR_Word TypeClassInfo_for_writer_28,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeInfo_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 0)));
    MR_Box Term_10 = (MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 1));
    MR_String Functor_11;
    MR_Word Args_13;
    MR_Integer _Arity_12;
    MR_Word ListHead_14;
    MR_Word ListTail_15;
    MR_Word Var_18;
    MR_Word Var_19;

    /* setup for tailcalls optimized into a loop */
    mercury__deconstruct__deconstruct_5_p_3(TypeInfo_29_29, Term_10, NonCanon_7, &Functor_11, &_Arity_12, &Args_13);
    succeeded = (strcmp(Functor_11, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Args_13)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ListHead_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0)));
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          ListTail_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0)));
          Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1)));
          succeeded = (Var_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    if (succeeded)
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
      MR_Box conv1_STATE_VARIABLE_State_13_38;

      func_0(((MR_Box) TypeClassInfo_for_writer_27), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_13_38);
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_6_p_3(TypeClassInfo_for_writer_27, TypeClassInfo_for_writer_28, Stream_6, NonCanon_7, ListHead_14, (MR_Integer) 1000);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_Univ_8 = ListTail_15;

        Univ_8 = next_value_of_Univ_8;
      }
      continue;
    }
    else
    {
      succeeded = (strcmp(Functor_11, (MR_String) "[]") == 0);
      if (succeeded)
        succeeded = (Args_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (!(succeeded))
      {
        MR_Integer Var_51;
        MR_Integer Var_53;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
        MR_Box conv3_STATE_VARIABLE_State_25_25;

        func_2(((MR_Box) TypeClassInfo_for_writer_27), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_String) " | ")), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_25_25);
        Var_53 = mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_109_97_120_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_in__ops_0();
        Var_51 = (Var_53 + (MR_Integer) 1);
        mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_6_p_3(TypeClassInfo_for_writer_27, TypeClassInfo_for_writer_28, Stream_6, NonCanon_7, Univ_8, Var_51);
      }
    }
    break;
  }
}

void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_6_p_3(
  MR_Word TypeClassInfo_for_writer_81,
  MR_Word TypeClassInfo_for_writer_82,
  MR_Word Stream_7,
  MR_Word NonCanon_8,
  MR_Word Univ_9,
  MR_Integer Priority_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_String String_12;
    MR_Word TypeCtorInfo_83_83 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Box conv0_String_12;

    /* setup for tailcalls optimized into a loop */
    succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_83_83, Univ_9, &conv0_String_12);
    if (succeeded)
    {
      String_12 = ((MR_String) conv0_String_12);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, String_12);
    else
    {
      MR_Char Char_13;
      MR_Word TypeCtorInfo_84_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
      MR_Box conv1_Char_13;

      succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_84_84, Univ_9, &conv1_Char_13);
      if (succeeded)
      {
        Char_13 = ((MR_Char) (MR_Word) conv1_Char_13);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_p_in__term_io_0(TypeClassInfo_for_writer_81, Stream_7, Char_13);
      else
      {
        MR_Integer Int_14;
        MR_Word TypeCtorInfo_85_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Box conv2_Int_14;

        succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_85_85, Univ_9, &conv2_Int_14);
        if (succeeded)
        {
          Int_14 = ((MR_Integer) conv2_Int_14);
          succeeded = MR_TRUE;
        }
        if (succeeded)
          mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_81, Stream_7, Int_14);
        else
        {
          MR_Unsigned UInt_15;
          MR_Word TypeCtorInfo_86_86 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_uint_0;
          MR_Box conv3_UInt_15;

          succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_86_86, Univ_9, &conv3_UInt_15);
          if (succeeded)
          {
            UInt_15 = ((MR_Unsigned) conv3_UInt_15);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_117_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_81, Stream_7, UInt_15);
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_81, Stream_7, (MR_Char) 117);
          }
          else
          {
            MR_Float Float_16;
            MR_Word TypeCtorInfo_87_87 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
            MR_Box conv4_Float_16;

            succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_87_87, Univ_9, &conv4_Float_16);
            if (succeeded)
            {
              Float_16 = MR_unbox_float(conv4_Float_16);
              succeeded = MR_TRUE;
            }
            if (succeeded)
              mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_102_108_111_97_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_81, Stream_7, Float_16);
            else
            {
              MR_Box Bitmap_17;
              MR_Word TypeCtorInfo_88_88 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
              MR_Box conv5_Bitmap_17;

              succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_88_88, Univ_9, &conv5_Bitmap_17);
              if (succeeded)
              {
                Bitmap_17 = ((MR_Box) conv5_Bitmap_17);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_String Var_42;
                MR_Box conv6_STATE_VARIABLE_State_43_43;

                mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_81, Stream_7, (MR_Char) 34);
                Var_42 = mercury__bitmap__to_string_1_f_0(Bitmap_17);
                mercury__stream__put_4_p_0(TypeClassInfo_for_writer_81, ((MR_Box) (Stream_7)), ((MR_Box) (Var_42)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_State_43_43);
                mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_81, Stream_7, (MR_Char) 34);
              }
              else
              {
                MR_Word TypeDesc_18;
                MR_Word TypeCtorInfo_89_89 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
                MR_Box conv7_TypeDesc_18;

                succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_89_89, Univ_9, &conv7_TypeDesc_18);
                if (succeeded)
                {
                  TypeDesc_18 = ((MR_Word) conv7_TypeDesc_18);
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Box conv8_STATE_VARIABLE_State_32;

                  mercury__stream__string_writer__write_type_desc_4_p_0(TypeClassInfo_for_writer_81, ((MR_Box) (Stream_7)), TypeDesc_18, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_State_32);
                }
                else
                {
                  MR_Word TypeCtorDesc_19;
                  MR_Word TypeCtorInfo_90_90 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0;
                  MR_Box conv9_TypeCtorDesc_19;

                  succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_90_90, Univ_9, &conv9_TypeCtorDesc_19);
                  if (succeeded)
                  {
                    TypeCtorDesc_19 = ((MR_Word) conv9_TypeCtorDesc_19);
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    MR_Box conv10_STATE_VARIABLE_State_32;

                    mercury__stream__string_writer__write_type_ctor_desc_4_p_0(TypeClassInfo_for_writer_81, ((MR_Box) (Stream_7)), TypeCtorDesc_19, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_State_32);
                  }
                  else
                  {
                    MR_Word C_Pointer_20;
                    MR_Word TypeCtorInfo_91_91 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_c_pointer_0;
                    MR_Box conv11_C_Pointer_20;

                    succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_91_91, Univ_9, &conv11_C_Pointer_20);
                    if (succeeded)
                    {
                      C_Pointer_20 = ((MR_Word) conv11_C_Pointer_20);
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                    {
                      MR_Box conv12_STATE_VARIABLE_State_32;

                      mercury__stream__string_writer__write_c_pointer_4_p_0(TypeClassInfo_for_writer_81, ((MR_Box) (Stream_7)), C_Pointer_20, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_State_32);
                    }
                    else
                    {
                      MR_Word StreamInfo_22;
                      MR_Word TypeInfo_92_92;
                      MR_Word StreamDB_21;
                      MR_Box Var_49;

                      mercury__io__get_stream_db_with_locking_1_p_0(&StreamDB_21);
                      Var_49 = mercury__univ__univ_value_1_f_0(&TypeInfo_92_92, Univ_9);
                      succeeded = mercury__io__get_io_stream_info_2_f_0(TypeInfo_92_92, StreamDB_21, Var_49, &StreamInfo_22);
                      if (succeeded)
                      {
                        MR_Word TypeCtorInfo_93_93 = (MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0;
                        MR_Word StreamInfoUniv_23;

                        mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_93_93, ((MR_Box) (StreamInfo_22)), &StreamInfoUniv_23);
                        /* direct tailcall eliminated */
                        {
                          MR_Word next_value_of_Univ_9 = StreamInfoUniv_23;

                          Univ_9 = next_value_of_Univ_9;
                        }
                        continue;
                      }
                      else
                      {
                        MR_Word ElemType_26;
                        MR_Word TypeCtor_24;
                        MR_Word ArgTypes_25;
                        MR_Word Var_51;
                        MR_Word Var_52;
                        MR_String Var_53;
                        MR_String Var_54;

                        Var_51 = mercury__univ__univ_type_1_f_0(Univ_9);
                        mercury__type_desc__type_ctor_and_args_3_p_0(Var_51, &TypeCtor_24, &ArgTypes_25);
                        succeeded = ((MR_tag((MR_Word) ArgTypes_25)) == (MR_mktag((MR_Integer) 1)));
                        if (succeeded)
                        {
                          ElemType_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_25, (MR_Integer) 0)));
                          Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_25, (MR_Integer) 1)));
                          succeeded = (Var_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (succeeded)
                          {
                            Var_53 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_24);
                            succeeded = (strcmp(Var_53, (MR_String) "array") == 0);
                            if (succeeded)
                            {
                              Var_54 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_24);
                              succeeded = (strcmp(Var_54, (MR_String) "array") == 0);
                            }
                          }
                        }
                        if (succeeded)
                        {
                          MR_Word TypeInfo_94_94;
                          MR_Word TypeCtorInfo_95_95;
                          MR_Word TypeInfo_96_96;
                          MR_ArrayPtr Array_28;
                          MR_Box Elem_27;
                          MR_Box conv13_Array_28;

                          mercury__type_desc__has_type_2_p_0(&TypeInfo_94_94, ElemType_26);
                          TypeCtorInfo_95_95 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
                          {
                            TypeInfo_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), TypeInfo_96_96, 0) = ((MR_Box) (TypeCtorInfo_95_95));
                            MR_hl_field(MR_mktag(0), TypeInfo_96_96, 1) = ((MR_Box) (TypeInfo_94_94));
                          }
                          mercury__univ__det_univ_to_type_2_p_0(TypeInfo_96_96, Univ_9, &conv13_Array_28);
                          Array_28 = ((MR_ArrayPtr) conv13_Array_28);
                          mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_97_114_114_97_121_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeInfo_94_94, TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, (MR_ArrayPtr) Array_28);
                        }
                        else
                        {
                          MR_Word ElemType_79;
                          MR_Word Var_56;
                          MR_Word Var_57;
                          MR_String Var_58;
                          MR_String Var_59;
                          MR_Word TypeCtor_67;
                          MR_Word ArgTypes_68;

                          Var_56 = mercury__univ__univ_type_1_f_0(Univ_9);
                          mercury__type_desc__type_ctor_and_args_3_p_0(Var_56, &TypeCtor_67, &ArgTypes_68);
                          succeeded = ((MR_tag((MR_Word) ArgTypes_68)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            ElemType_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_68, (MR_Integer) 0)));
                            Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_68, (MR_Integer) 1)));
                            succeeded = (Var_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_58 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_67);
                              succeeded = (strcmp(Var_58, (MR_String) "version_array") == 0);
                              if (succeeded)
                              {
                                Var_59 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_67);
                                succeeded = (strcmp(Var_59, (MR_String) "version_array") == 0);
                              }
                            }
                          }
                          if (succeeded)
                          {
                            MR_Word TypeInfo_97_97;
                            MR_Word TypeCtorInfo_98_98;
                            MR_Word TypeInfo_99_99;
                            MR_Box VersionArray_29;
                            MR_Box Elem_69;
                            MR_Box conv14_VersionArray_29;

                            mercury__type_desc__has_type_2_p_0(&TypeInfo_97_97, ElemType_79);
                            TypeCtorInfo_98_98 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
                            {
                              TypeInfo_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), TypeInfo_99_99, 0) = ((MR_Box) (TypeCtorInfo_98_98));
                              MR_hl_field(MR_mktag(0), TypeInfo_99_99, 1) = ((MR_Box) (TypeInfo_97_97));
                            }
                            mercury__univ__det_univ_to_type_2_p_0(TypeInfo_99_99, Univ_9, &conv14_VersionArray_29);
                            VersionArray_29 = ((MR_Box) conv14_VersionArray_29);
                            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeInfo_97_97, TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, VersionArray_29);
                          }
                          else
                          {
                            MR_Word Var_61;
                            MR_Word Var_62;
                            MR_String Var_63;
                            MR_String Var_64;
                            MR_Word TypeCtor_70;
                            MR_Word ArgTypes_71;
                            MR_Word ElemType_75;

                            Var_61 = mercury__univ__univ_type_1_f_0(Univ_9);
                            mercury__type_desc__type_ctor_and_args_3_p_0(Var_61, &TypeCtor_70, &ArgTypes_71);
                            succeeded = ((MR_tag((MR_Word) ArgTypes_71)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              ElemType_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_71, (MR_Integer) 0)));
                              Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_71, (MR_Integer) 1)));
                              succeeded = (Var_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                Var_63 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_70);
                                succeeded = (strcmp(Var_63, (MR_String) "type_info") == 0);
                                if (succeeded)
                                {
                                  Var_64 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_70);
                                  succeeded = (strcmp(Var_64, (MR_String) "private_builtin") == 0);
                                }
                              }
                            }
                            if (succeeded)
                            {
                              MR_Word PrivateBuiltinTypeInfo_30;
                              MR_Word TypeCtorInfo_101_101 = (MR_Word) &mercury__private_builtin__private_builtin__type_ctor_info_type_info_0;
                              MR_Box conv15_PrivateBuiltinTypeInfo_30;
                              MR_Box conv16_STATE_VARIABLE_State_32;

                              mercury__univ__det_univ_to_type_2_p_0(TypeCtorInfo_101_101, Univ_9, &conv15_PrivateBuiltinTypeInfo_30);
                              PrivateBuiltinTypeInfo_30 = ((MR_Word) conv15_PrivateBuiltinTypeInfo_30);
                              mercury__stream__string_writer__write_private_builtin_type_info_4_p_0(TypeClassInfo_for_writer_81, ((MR_Box) (Stream_7)), PrivateBuiltinTypeInfo_30, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_State_32);
                            }
                            else
                              mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_111_114_100_105_110_97_114_121_95_116_101_114_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_6_p_3(TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, NonCanon_8, Univ_9, Priority_10);
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
    break;
  }
}

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_111_114_100_105_110_97_114_121_95_116_101_114_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_6_p_3(
  MR_Word TypeClassInfo_for_writer_50,
  MR_Word TypeClassInfo_for_writer_51,
  MR_Word Stream_7,
  MR_Word NonCanon_8,
  MR_Word Univ_9,
  MR_Integer Priority_10)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 0)));
    MR_Box Term_12 = (MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 1));
    MR_String Functor_13;
    MR_Word Args_15;
    MR_Integer _Arity_14;
    MR_Word ListHead_16;
    MR_Word ListTail_17;
    MR_Word Var_26;
    MR_Word Var_27;

    mercury__deconstruct__deconstruct_5_p_3(TypeInfo_52_52, Term_12, NonCanon_8, &Functor_13, &_Arity_14, &Args_15);
    succeeded = (strcmp(Functor_13, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ListHead_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
        Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          ListTail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0)));
          Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1)));
          succeeded = (Var_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    if (succeeded)
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
      MR_Box conv1_STATE_VARIABLE_State_13_62;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv3_STATE_VARIABLE_State_25;

      func_0(((MR_Box) TypeClassInfo_for_writer_51), ((MR_Box) (Stream_7)), ((MR_Box) (MR_Word) ((MR_Char) 91)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_13_62);
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_6_p_3(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, ListHead_16, (MR_Integer) 1000);
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_108_105_115_116_95_116_97_105_108_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_5_p_3(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, ListTail_17);
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
      func_2(((MR_Box) TypeClassInfo_for_writer_51), ((MR_Box) (Stream_7)), ((MR_Box) (MR_Word) ((MR_Char) 93)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_25);
    }
    else
    {
      succeeded = (strcmp(Functor_13, (MR_String) "[]") == 0);
      if (succeeded)
        succeeded = (Args_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5)));
        MR_Box conv5_STATE_VARIABLE_State_25;

        func_4(((MR_Box) TypeClassInfo_for_writer_50), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_String) "[]")), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_State_25);
      }
      else
      {
        MR_Word BracedHead_18;
        MR_Word BracedTail_19;

        succeeded = (strcmp(Functor_13, (MR_String) "{}") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            BracedHead_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
            BracedTail_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
          }
        }
        if (succeeded)
          if ((BracedTail_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Integer Var_75;
            MR_Integer Var_77;
            void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5)));
            MR_Box conv7_STATE_VARIABLE_State_43_43;
            void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv9_STATE_VARIABLE_State_25;

            func_6(((MR_Box) TypeClassInfo_for_writer_50), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_String) "{ ")), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_State_43_43);
            Var_77 = mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_109_97_120_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_in__ops_0();
            Var_75 = (Var_77 + (MR_Integer) 1);
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_6_p_3(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, BracedHead_18, Var_75);
            func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5)));
            func_8(((MR_Box) TypeClassInfo_for_writer_50), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_String) " }")), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_State_25);
          }
          else
          {
            void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
            MR_Box conv11_STATE_VARIABLE_State_13_87;
            void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv13_STATE_VARIABLE_State_25;

            func_10(((MR_Box) TypeClassInfo_for_writer_51), ((MR_Box) (Stream_7)), ((MR_Box) (MR_Word) ((MR_Char) 123)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_State_13_87);
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_6_p_3(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, BracedHead_18, (MR_Integer) 1000);
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_116_101_114_109_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_5_p_3(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, BracedTail_19);
            func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
            func_12(((MR_Box) TypeClassInfo_for_writer_51), ((MR_Box) (Stream_7)), ((MR_Box) (MR_Word) ((MR_Char) 125)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_State_25);
          }
        else
        {
          MR_Word FirstOpInfo_22;
          MR_Word OtherOpInfos_23;
          MR_Word TypeClassInfo_for_op_table_53;
          MR_bool MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
          MR_Box conv16_FirstOpInfo_22;
          MR_Box conv15_OtherOpInfos_23;

          TypeClassInfo_for_op_table_53 = (MR_Word) &mercury__stream__string_writer_scalar_common_1[0];
          func_14 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_53, (MR_Integer) 0)), (MR_Integer) 10)));
          succeeded = func_14(((MR_Box) TypeClassInfo_for_op_table_53), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Functor_13)), &conv16_FirstOpInfo_22, &conv15_OtherOpInfos_23);
          if (succeeded)
          {
            FirstOpInfo_22 = ((MR_Word) conv16_FirstOpInfo_22);
            OtherOpInfos_23 = ((MR_Word) conv15_OtherOpInfos_23);
            succeeded = MR_TRUE;
          }
          if (succeeded)
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_9_p_3(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, FirstOpInfo_22, OtherOpInfos_23, Priority_10, Functor_13, Args_15);
          else
          {
            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, Functor_13, (MR_Integer) 0);
            if (!((Args_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
            {
              MR_Word X_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
              MR_Word Xs_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
              void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv18_STATE_VARIABLE_State_13_118;
              void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              MR_Box conv20_STATE_VARIABLE_State_25;

              func_17(((MR_Box) TypeClassInfo_for_writer_51), ((MR_Box) (Stream_7)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_State_13_118);
              mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_6_p_3(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, X_101, (MR_Integer) 1000);
              mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_116_101_114_109_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_5_p_3(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, Xs_102);
              func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
              func_19(((MR_Box) TypeClassInfo_for_writer_51), ((MR_Box) (Stream_7)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_State_25);
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_116_101_114_109_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_5_p_3(
  MR_Word TypeClassInfo_for_writer_22,
  MR_Word TypeClassInfo_for_writer_23,
  MR_Word HeadVar__1_1,
  MR_Word NonCanon_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if (!((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Xs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_22, (MR_Integer) 0)), (MR_Integer) 5)));
      MR_Box conv1_STATE_VARIABLE_State_13_31;
      MR_Word TypeInfo_18_34;

      func_0(((MR_Box) TypeClassInfo_for_writer_22), ((MR_Box) (HeadVar__1_1)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_13_31);
{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_116_101_114_109_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_5_p_3

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_22 ;
	Index =  (MR_Integer) 4 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_18_34  = TypeInfo;
}
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_51_95_49_6_p_3(TypeClassInfo_for_writer_22, TypeClassInfo_for_writer_23, HeadVar__1_1, NonCanon_2, X_13, (MR_Integer) 1000);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__3_3 = Xs_14;

        HeadVar__3_3 = next_value_of_HeadVar__3_3;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_9_p_1(
  MR_Word TypeClassInfo_for_writer_121,
  MR_Word TypeClassInfo_for_writer_122,
  MR_Word Stream_10,
  MR_Word NonCanon_11,
  MR_Word OpInfo_12,
  MR_Word OtherOpInfos_13,
  MR_Integer Priority_14,
  MR_String Functor_15,
  MR_Word Args_16)
{
  {
    MR_bool succeeded;
    MR_Word OpClass_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
    MR_Integer Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) OpClass_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Arg1_30;
          MR_Word Arg2_31;
          MR_Word Var_64;
          MR_Word Var_65;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Arg1_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_64)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Arg2_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 0)));
              Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 1)));
              succeeded = (Var_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          if (succeeded)
          {
            MR_Word LeftAssoc_33;
            MR_Integer LeftPriority_35;
            MR_Word RightAssoc_37;
            MR_Integer RightPriority_38;
            MR_Integer OpPriority_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
            MR_Word Var_34;
            MR_Word Var_36;

            succeeded = (OpPriority_111 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv7_STATE_VARIABLE_State_67_67;

              func_6(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_State_67_67);
            }
            else
            {
            }
            LeftAssoc_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 0)));
            Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 1)));
            switch (LeftAssoc_33) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  LeftPriority_35 = (OpPriority_111 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                LeftPriority_35 = OpPriority_111;
                break;
            }
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_6_p_1(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg1_30, LeftPriority_35);
            succeeded = (strcmp(Functor_15, (MR_String) ",") == 0);
            if (succeeded)
            {
              MR_Box conv8_STATE_VARIABLE_State_70_70;

              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_State_70_70);
            }
            else
            {
              MR_Box conv9_STATE_VARIABLE_State_72_72;
              MR_Box conv10_STATE_VARIABLE_State_70_70;

              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_String) " ")), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_State_72_72);
              mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15);
              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_String) " ")), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_State_70_70);
            }
            Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 0)));
            RightAssoc_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 1)));
            switch (RightAssoc_37) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  RightPriority_38 = (OpPriority_111 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                RightPriority_38 = OpPriority_111;
                break;
            }
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_6_p_1(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg2_31, RightPriority_38);
            succeeded = (OpPriority_111 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv12_STATE_VARIABLE_State_49;

              func_11(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_State_49);
            }
            else
            {
            }
          }
          else
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_114_101_109_97_105_110_105_110_103_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_8_p_1(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Arg_21;
          MR_Word Var_90;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Arg_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = (Var_90 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Integer OpPriority_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word OpAssoc_24;
            MR_Integer NewPriority_25;
            MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
            MR_Box conv20_STATE_VARIABLE_State_95_95;

            succeeded = (OpPriority_23 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv19_STATE_VARIABLE_State_92_92;

              func_18(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_State_92_92);
            }
            else
            {
            }
            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_String) " ")), ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_State_95_95);
            OpAssoc_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), OpClass_18, (MR_Integer) 0)));
            switch (OpAssoc_24) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  NewPriority_25 = (OpPriority_23 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                NewPriority_25 = OpPriority_23;
                break;
            }
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_6_p_1(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg_21, NewPriority_25);
            succeeded = (OpPriority_23 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_21)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv22_STATE_VARIABLE_State_49;

              func_21(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_State_49);
            }
            else
            {
            }
          }
          else
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_114_101_109_97_105_110_105_110_103_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_8_p_1(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Arg1_116;
          MR_Word Arg2_117;
          MR_Word Var_50;
          MR_Word Var_51;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Arg1_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_50)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Arg2_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 0)));
              Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 1)));
              succeeded = (Var_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          if (succeeded)
          {
            MR_Word FirstAssoc_42;
            MR_Integer FirstPriority_44;
            MR_Word SecondAssoc_46;
            MR_Integer SecondPriority_47;
            MR_Integer OpPriority_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
            MR_Box conv2_STATE_VARIABLE_State_56_56;
            MR_Word Var_43;
            MR_Box conv3_STATE_VARIABLE_State_59_59;
            MR_Word Var_45;

            succeeded = (OpPriority_114 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv1_STATE_VARIABLE_State_53_53;

              func_0(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_53_53);
            }
            else
            {
            }
            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_String) " ")), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_State_56_56);
            FirstAssoc_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 0)));
            Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 1)));
            switch (FirstAssoc_42) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  FirstPriority_44 = (OpPriority_114 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                FirstPriority_44 = OpPriority_114;
                break;
            }
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_6_p_1(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg1_116, FirstPriority_44);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_String) " ")), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_59_59);
            Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 0)));
            SecondAssoc_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 1)));
            switch (SecondAssoc_46) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  SecondPriority_47 = (OpPriority_114 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                SecondPriority_47 = OpPriority_114;
                break;
            }
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_6_p_1(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg2_117, SecondPriority_47);
            succeeded = (OpPriority_114 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv5_STATE_VARIABLE_State_49;

              func_4(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_State_49);
            }
            else
            {
            }
          }
          else
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_114_101_109_97_105_110_105_110_103_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_8_p_1(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word PostfixArg_26;
          MR_Word Var_80;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            PostfixArg_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = (Var_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Integer OpPriority_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word OpAssoc_102;
            MR_Integer NewPriority_103;
            MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
            MR_Box conv15_STATE_VARIABLE_State_85_85;

            succeeded = (OpPriority_101 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv14_STATE_VARIABLE_State_82_82;

              func_13(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_State_82_82);
            }
            else
            {
            }
            OpAssoc_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), OpClass_18, (MR_Integer) 0)));
            switch (OpAssoc_102) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  NewPriority_103 = (OpPriority_101 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                NewPriority_103 = OpPriority_101;
                break;
            }
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_6_p_1(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, PostfixArg_26, NewPriority_103);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_String) " ")), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_State_85_85);
            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15);
            succeeded = (OpPriority_101 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv17_STATE_VARIABLE_State_49;

              func_16(((MR_Box) TypeClassInfo_for_writer_122), ((MR_Box) (Stream_10)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_State_49);
            }
            else
            {
            }
          }
          else
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_114_101_109_97_105_110_105_110_103_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_8_p_1(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16);
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_114_101_109_97_105_110_105_110_103_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_8_p_1(
  MR_Word TypeClassInfo_for_writer_36,
  MR_Word TypeClassInfo_for_writer_37,
  MR_Word Stream_1,
  MR_Word NonCanon_2,
  MR_Word HeadVar__3_3,
  MR_Integer Priority_4,
  MR_String Functor_5,
  MR_Word Args_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer Var_28;

      succeeded = (Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        Var_28 = (MR_Integer) 1200;
        succeeded = (Priority_4 <= Var_28);
      }
      if (succeeded)
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_37, (MR_Integer) 0)), (MR_Integer) 5)));
        MR_Box conv1_STATE_VARIABLE_State_31_31;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv3_STATE_VARIABLE_State_8;

        func_0(((MR_Box) TypeClassInfo_for_writer_37), ((MR_Box) (Stream_1)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_31_31);
        mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_36, TypeClassInfo_for_writer_37, Stream_1, Functor_5, (MR_Integer) 1);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_37, (MR_Integer) 0)), (MR_Integer) 5)));
        func_2(((MR_Box) TypeClassInfo_for_writer_37), ((MR_Box) (Stream_1)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_8);
      }
      else
      {
        mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_36, TypeClassInfo_for_writer_37, Stream_1, Functor_5, (MR_Integer) 0);
        if (!((Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
        {
          MR_Word X_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_6, (MR_Integer) 0)));
          MR_Word Xs_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_6, (MR_Integer) 1)));
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_37, (MR_Integer) 0)), (MR_Integer) 5)));
          MR_Box conv5_STATE_VARIABLE_State_13_68;
          void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv7_STATE_VARIABLE_State_8;

          func_4(((MR_Box) TypeClassInfo_for_writer_37), ((MR_Box) (Stream_1)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_State_13_68);
          mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_6_p_1(TypeClassInfo_for_writer_36, TypeClassInfo_for_writer_37, Stream_1, NonCanon_2, X_51, (MR_Integer) 1000);
          mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_116_101_114_109_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(TypeClassInfo_for_writer_36, TypeClassInfo_for_writer_37, Stream_1, NonCanon_2, Xs_52);
          func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_37, (MR_Integer) 0)), (MR_Integer) 5)));
          func_6(((MR_Box) TypeClassInfo_for_writer_37), ((MR_Box) (Stream_1)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_State_8);
        }
      }
    }
    else
    {
      MR_Word FirstOpInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word MoreOpInfos_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));

      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_9_p_1(TypeClassInfo_for_writer_36, TypeClassInfo_for_writer_37, Stream_1, NonCanon_2, FirstOpInfo_11, MoreOpInfos_12, Priority_4, Functor_5, Args_6);
    }
  }
}

void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeClassInfo_for_writer_14,
  MR_Word TypeClassInfo_for_writer_15,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8)
{
  {
    MR_Word Univ_10;
    MR_Integer Var_23;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_16, Term_8, &Univ_10);
    Var_23 = ((MR_Integer) 1200 + (MR_Integer) 1);
    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_6_p_1(TypeClassInfo_for_writer_14, TypeClassInfo_for_writer_15, Stream_6, NonCanon_7, Univ_10, Var_23);
  }
}

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_108_105_115_116_95_116_97_105_108_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(
  MR_Word TypeClassInfo_for_writer_27,
  MR_Word TypeClassInfo_for_writer_28,
  MR_Word Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeInfo_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 0)));
    MR_Box Term_10 = (MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 1));
    MR_String Functor_11;
    MR_Word Args_13;
    MR_Integer _Arity_12;
    MR_Word ListHead_14;
    MR_Word ListTail_15;
    MR_Word Var_18;
    MR_Word Var_19;

    /* setup for tailcalls optimized into a loop */
    mercury__deconstruct__deconstruct_5_p_1(TypeInfo_29_29, Term_10, NonCanon_7, &Functor_11, &_Arity_12, &Args_13);
    succeeded = (strcmp(Functor_11, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Args_13)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ListHead_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0)));
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          ListTail_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0)));
          Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1)));
          succeeded = (Var_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    if (succeeded)
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
      MR_Box conv1_STATE_VARIABLE_State_13_38;

      func_0(((MR_Box) TypeClassInfo_for_writer_27), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_13_38);
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_6_p_1(TypeClassInfo_for_writer_27, TypeClassInfo_for_writer_28, Stream_6, NonCanon_7, ListHead_14, (MR_Integer) 1000);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_Univ_8 = ListTail_15;

        Univ_8 = next_value_of_Univ_8;
      }
      continue;
    }
    else
    {
      succeeded = (strcmp(Functor_11, (MR_String) "[]") == 0);
      if (succeeded)
        succeeded = (Args_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (!(succeeded))
      {
        MR_Integer Var_51;
        MR_Integer Var_53;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));
        MR_Box conv3_STATE_VARIABLE_State_25_25;

        func_2(((MR_Box) TypeClassInfo_for_writer_27), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_String) " | ")), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_25_25);
        Var_53 = mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_109_97_120_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_in__ops_0();
        Var_51 = (Var_53 + (MR_Integer) 1);
        mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_6_p_1(TypeClassInfo_for_writer_27, TypeClassInfo_for_writer_28, Stream_6, NonCanon_7, Univ_8, Var_51);
      }
    }
    break;
  }
}

void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_6_p_1(
  MR_Word TypeClassInfo_for_writer_81,
  MR_Word TypeClassInfo_for_writer_82,
  MR_Word Stream_7,
  MR_Word NonCanon_8,
  MR_Word Univ_9,
  MR_Integer Priority_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_String String_12;
    MR_Word TypeCtorInfo_83_83 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Box conv0_String_12;

    /* setup for tailcalls optimized into a loop */
    succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_83_83, Univ_9, &conv0_String_12);
    if (succeeded)
    {
      String_12 = ((MR_String) conv0_String_12);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, String_12);
    else
    {
      MR_Char Char_13;
      MR_Word TypeCtorInfo_84_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
      MR_Box conv1_Char_13;

      succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_84_84, Univ_9, &conv1_Char_13);
      if (succeeded)
      {
        Char_13 = ((MR_Char) (MR_Word) conv1_Char_13);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_p_in__term_io_0(TypeClassInfo_for_writer_81, Stream_7, Char_13);
      else
      {
        MR_Integer Int_14;
        MR_Word TypeCtorInfo_85_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Box conv2_Int_14;

        succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_85_85, Univ_9, &conv2_Int_14);
        if (succeeded)
        {
          Int_14 = ((MR_Integer) conv2_Int_14);
          succeeded = MR_TRUE;
        }
        if (succeeded)
          mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_81, Stream_7, Int_14);
        else
        {
          MR_Unsigned UInt_15;
          MR_Word TypeCtorInfo_86_86 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_uint_0;
          MR_Box conv3_UInt_15;

          succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_86_86, Univ_9, &conv3_UInt_15);
          if (succeeded)
          {
            UInt_15 = ((MR_Unsigned) conv3_UInt_15);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_117_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_81, Stream_7, UInt_15);
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_81, Stream_7, (MR_Char) 117);
          }
          else
          {
            MR_Float Float_16;
            MR_Word TypeCtorInfo_87_87 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
            MR_Box conv4_Float_16;

            succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_87_87, Univ_9, &conv4_Float_16);
            if (succeeded)
            {
              Float_16 = MR_unbox_float(conv4_Float_16);
              succeeded = MR_TRUE;
            }
            if (succeeded)
              mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_102_108_111_97_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_81, Stream_7, Float_16);
            else
            {
              MR_Box Bitmap_17;
              MR_Word TypeCtorInfo_88_88 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
              MR_Box conv5_Bitmap_17;

              succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_88_88, Univ_9, &conv5_Bitmap_17);
              if (succeeded)
              {
                Bitmap_17 = ((MR_Box) conv5_Bitmap_17);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_String Var_42;
                MR_Box conv6_STATE_VARIABLE_State_43_43;

                mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_81, Stream_7, (MR_Char) 34);
                Var_42 = mercury__bitmap__to_string_1_f_0(Bitmap_17);
                mercury__stream__put_4_p_0(TypeClassInfo_for_writer_81, ((MR_Box) (Stream_7)), ((MR_Box) (Var_42)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_State_43_43);
                mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_81, Stream_7, (MR_Char) 34);
              }
              else
              {
                MR_Word TypeDesc_18;
                MR_Word TypeCtorInfo_89_89 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
                MR_Box conv7_TypeDesc_18;

                succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_89_89, Univ_9, &conv7_TypeDesc_18);
                if (succeeded)
                {
                  TypeDesc_18 = ((MR_Word) conv7_TypeDesc_18);
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Box conv8_STATE_VARIABLE_State_32;

                  mercury__stream__string_writer__write_type_desc_4_p_0(TypeClassInfo_for_writer_81, ((MR_Box) (Stream_7)), TypeDesc_18, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_State_32);
                }
                else
                {
                  MR_Word TypeCtorDesc_19;
                  MR_Word TypeCtorInfo_90_90 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0;
                  MR_Box conv9_TypeCtorDesc_19;

                  succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_90_90, Univ_9, &conv9_TypeCtorDesc_19);
                  if (succeeded)
                  {
                    TypeCtorDesc_19 = ((MR_Word) conv9_TypeCtorDesc_19);
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    MR_Box conv10_STATE_VARIABLE_State_32;

                    mercury__stream__string_writer__write_type_ctor_desc_4_p_0(TypeClassInfo_for_writer_81, ((MR_Box) (Stream_7)), TypeCtorDesc_19, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_State_32);
                  }
                  else
                  {
                    MR_Word C_Pointer_20;
                    MR_Word TypeCtorInfo_91_91 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_c_pointer_0;
                    MR_Box conv11_C_Pointer_20;

                    succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_91_91, Univ_9, &conv11_C_Pointer_20);
                    if (succeeded)
                    {
                      C_Pointer_20 = ((MR_Word) conv11_C_Pointer_20);
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                    {
                      MR_Box conv12_STATE_VARIABLE_State_32;

                      mercury__stream__string_writer__write_c_pointer_4_p_0(TypeClassInfo_for_writer_81, ((MR_Box) (Stream_7)), C_Pointer_20, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_State_32);
                    }
                    else
                    {
                      MR_Word StreamInfo_22;
                      MR_Word TypeInfo_92_92;
                      MR_Word StreamDB_21;
                      MR_Box Var_49;

                      mercury__io__get_stream_db_with_locking_1_p_0(&StreamDB_21);
                      Var_49 = mercury__univ__univ_value_1_f_0(&TypeInfo_92_92, Univ_9);
                      succeeded = mercury__io__get_io_stream_info_2_f_0(TypeInfo_92_92, StreamDB_21, Var_49, &StreamInfo_22);
                      if (succeeded)
                      {
                        MR_Word TypeCtorInfo_93_93 = (MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0;
                        MR_Word StreamInfoUniv_23;

                        mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_93_93, ((MR_Box) (StreamInfo_22)), &StreamInfoUniv_23);
                        /* direct tailcall eliminated */
                        {
                          MR_Word next_value_of_Univ_9 = StreamInfoUniv_23;

                          Univ_9 = next_value_of_Univ_9;
                        }
                        continue;
                      }
                      else
                      {
                        MR_Word ElemType_26;
                        MR_Word TypeCtor_24;
                        MR_Word ArgTypes_25;
                        MR_Word Var_51;
                        MR_Word Var_52;
                        MR_String Var_53;
                        MR_String Var_54;

                        Var_51 = mercury__univ__univ_type_1_f_0(Univ_9);
                        mercury__type_desc__type_ctor_and_args_3_p_0(Var_51, &TypeCtor_24, &ArgTypes_25);
                        succeeded = ((MR_tag((MR_Word) ArgTypes_25)) == (MR_mktag((MR_Integer) 1)));
                        if (succeeded)
                        {
                          ElemType_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_25, (MR_Integer) 0)));
                          Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_25, (MR_Integer) 1)));
                          succeeded = (Var_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (succeeded)
                          {
                            Var_53 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_24);
                            succeeded = (strcmp(Var_53, (MR_String) "array") == 0);
                            if (succeeded)
                            {
                              Var_54 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_24);
                              succeeded = (strcmp(Var_54, (MR_String) "array") == 0);
                            }
                          }
                        }
                        if (succeeded)
                        {
                          MR_Word TypeInfo_94_94;
                          MR_Word TypeCtorInfo_95_95;
                          MR_Word TypeInfo_96_96;
                          MR_ArrayPtr Array_28;
                          MR_Box Elem_27;
                          MR_Box conv13_Array_28;

                          mercury__type_desc__has_type_2_p_0(&TypeInfo_94_94, ElemType_26);
                          TypeCtorInfo_95_95 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
                          {
                            TypeInfo_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), TypeInfo_96_96, 0) = ((MR_Box) (TypeCtorInfo_95_95));
                            MR_hl_field(MR_mktag(0), TypeInfo_96_96, 1) = ((MR_Box) (TypeInfo_94_94));
                          }
                          mercury__univ__det_univ_to_type_2_p_0(TypeInfo_96_96, Univ_9, &conv13_Array_28);
                          Array_28 = ((MR_ArrayPtr) conv13_Array_28);
                          mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_97_114_114_97_121_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeInfo_94_94, TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, (MR_ArrayPtr) Array_28);
                        }
                        else
                        {
                          MR_Word ElemType_79;
                          MR_Word Var_56;
                          MR_Word Var_57;
                          MR_String Var_58;
                          MR_String Var_59;
                          MR_Word TypeCtor_67;
                          MR_Word ArgTypes_68;

                          Var_56 = mercury__univ__univ_type_1_f_0(Univ_9);
                          mercury__type_desc__type_ctor_and_args_3_p_0(Var_56, &TypeCtor_67, &ArgTypes_68);
                          succeeded = ((MR_tag((MR_Word) ArgTypes_68)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            ElemType_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_68, (MR_Integer) 0)));
                            Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_68, (MR_Integer) 1)));
                            succeeded = (Var_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_58 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_67);
                              succeeded = (strcmp(Var_58, (MR_String) "version_array") == 0);
                              if (succeeded)
                              {
                                Var_59 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_67);
                                succeeded = (strcmp(Var_59, (MR_String) "version_array") == 0);
                              }
                            }
                          }
                          if (succeeded)
                          {
                            MR_Word TypeInfo_97_97;
                            MR_Word TypeCtorInfo_98_98;
                            MR_Word TypeInfo_99_99;
                            MR_Box VersionArray_29;
                            MR_Box Elem_69;
                            MR_Box conv14_VersionArray_29;

                            mercury__type_desc__has_type_2_p_0(&TypeInfo_97_97, ElemType_79);
                            TypeCtorInfo_98_98 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
                            {
                              TypeInfo_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), TypeInfo_99_99, 0) = ((MR_Box) (TypeCtorInfo_98_98));
                              MR_hl_field(MR_mktag(0), TypeInfo_99_99, 1) = ((MR_Box) (TypeInfo_97_97));
                            }
                            mercury__univ__det_univ_to_type_2_p_0(TypeInfo_99_99, Univ_9, &conv14_VersionArray_29);
                            VersionArray_29 = ((MR_Box) conv14_VersionArray_29);
                            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeInfo_97_97, TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, VersionArray_29);
                          }
                          else
                          {
                            MR_Word Var_61;
                            MR_Word Var_62;
                            MR_String Var_63;
                            MR_String Var_64;
                            MR_Word TypeCtor_70;
                            MR_Word ArgTypes_71;
                            MR_Word ElemType_75;

                            Var_61 = mercury__univ__univ_type_1_f_0(Univ_9);
                            mercury__type_desc__type_ctor_and_args_3_p_0(Var_61, &TypeCtor_70, &ArgTypes_71);
                            succeeded = ((MR_tag((MR_Word) ArgTypes_71)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              ElemType_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_71, (MR_Integer) 0)));
                              Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_71, (MR_Integer) 1)));
                              succeeded = (Var_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                Var_63 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_70);
                                succeeded = (strcmp(Var_63, (MR_String) "type_info") == 0);
                                if (succeeded)
                                {
                                  Var_64 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_70);
                                  succeeded = (strcmp(Var_64, (MR_String) "private_builtin") == 0);
                                }
                              }
                            }
                            if (succeeded)
                            {
                              MR_Word PrivateBuiltinTypeInfo_30;
                              MR_Word TypeCtorInfo_101_101 = (MR_Word) &mercury__private_builtin__private_builtin__type_ctor_info_type_info_0;
                              MR_Box conv15_PrivateBuiltinTypeInfo_30;
                              MR_Box conv16_STATE_VARIABLE_State_32;

                              mercury__univ__det_univ_to_type_2_p_0(TypeCtorInfo_101_101, Univ_9, &conv15_PrivateBuiltinTypeInfo_30);
                              PrivateBuiltinTypeInfo_30 = ((MR_Word) conv15_PrivateBuiltinTypeInfo_30);
                              mercury__stream__string_writer__write_private_builtin_type_info_4_p_0(TypeClassInfo_for_writer_81, ((MR_Box) (Stream_7)), PrivateBuiltinTypeInfo_30, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_State_32);
                            }
                            else
                              mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_111_114_100_105_110_97_114_121_95_116_101_114_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_6_p_1(TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, NonCanon_8, Univ_9, Priority_10);
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
    break;
  }
}

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_111_114_100_105_110_97_114_121_95_116_101_114_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_6_p_1(
  MR_Word TypeClassInfo_for_writer_50,
  MR_Word TypeClassInfo_for_writer_51,
  MR_Word Stream_7,
  MR_Word NonCanon_8,
  MR_Word Univ_9,
  MR_Integer Priority_10)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 0)));
    MR_Box Term_12 = (MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 1));
    MR_String Functor_13;
    MR_Word Args_15;
    MR_Integer _Arity_14;
    MR_Word ListHead_16;
    MR_Word ListTail_17;
    MR_Word Var_26;
    MR_Word Var_27;

    mercury__deconstruct__deconstruct_5_p_1(TypeInfo_52_52, Term_12, NonCanon_8, &Functor_13, &_Arity_14, &Args_15);
    succeeded = (strcmp(Functor_13, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ListHead_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
        Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          ListTail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0)));
          Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1)));
          succeeded = (Var_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    if (succeeded)
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
      MR_Box conv1_STATE_VARIABLE_State_13_62;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv3_STATE_VARIABLE_State_25;

      func_0(((MR_Box) TypeClassInfo_for_writer_51), ((MR_Box) (Stream_7)), ((MR_Box) (MR_Word) ((MR_Char) 91)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_13_62);
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_6_p_1(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, ListHead_16, (MR_Integer) 1000);
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_108_105_115_116_95_116_97_105_108_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, ListTail_17);
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
      func_2(((MR_Box) TypeClassInfo_for_writer_51), ((MR_Box) (Stream_7)), ((MR_Box) (MR_Word) ((MR_Char) 93)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_25);
    }
    else
    {
      succeeded = (strcmp(Functor_13, (MR_String) "[]") == 0);
      if (succeeded)
        succeeded = (Args_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5)));
        MR_Box conv5_STATE_VARIABLE_State_25;

        func_4(((MR_Box) TypeClassInfo_for_writer_50), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_String) "[]")), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_State_25);
      }
      else
      {
        MR_Word BracedHead_18;
        MR_Word BracedTail_19;

        succeeded = (strcmp(Functor_13, (MR_String) "{}") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            BracedHead_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
            BracedTail_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
          }
        }
        if (succeeded)
          if ((BracedTail_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Integer Var_75;
            MR_Integer Var_77;
            void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5)));
            MR_Box conv7_STATE_VARIABLE_State_43_43;
            void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv9_STATE_VARIABLE_State_25;

            func_6(((MR_Box) TypeClassInfo_for_writer_50), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_String) "{ ")), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_State_43_43);
            Var_77 = mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_109_97_120_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_in__ops_0();
            Var_75 = (Var_77 + (MR_Integer) 1);
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_6_p_1(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, BracedHead_18, Var_75);
            func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5)));
            func_8(((MR_Box) TypeClassInfo_for_writer_50), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_String) " }")), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_State_25);
          }
          else
          {
            void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
            MR_Box conv11_STATE_VARIABLE_State_13_87;
            void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv13_STATE_VARIABLE_State_25;

            func_10(((MR_Box) TypeClassInfo_for_writer_51), ((MR_Box) (Stream_7)), ((MR_Box) (MR_Word) ((MR_Char) 123)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_State_13_87);
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_6_p_1(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, BracedHead_18, (MR_Integer) 1000);
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_116_101_114_109_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, BracedTail_19);
            func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
            func_12(((MR_Box) TypeClassInfo_for_writer_51), ((MR_Box) (Stream_7)), ((MR_Box) (MR_Word) ((MR_Char) 125)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_State_25);
          }
        else
        {
          MR_Word FirstOpInfo_22;
          MR_Word OtherOpInfos_23;
          MR_Word TypeClassInfo_for_op_table_53;
          MR_bool MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
          MR_Box conv16_FirstOpInfo_22;
          MR_Box conv15_OtherOpInfos_23;

          TypeClassInfo_for_op_table_53 = (MR_Word) &mercury__stream__string_writer_scalar_common_1[0];
          func_14 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_53, (MR_Integer) 0)), (MR_Integer) 10)));
          succeeded = func_14(((MR_Box) TypeClassInfo_for_op_table_53), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Functor_13)), &conv16_FirstOpInfo_22, &conv15_OtherOpInfos_23);
          if (succeeded)
          {
            FirstOpInfo_22 = ((MR_Word) conv16_FirstOpInfo_22);
            OtherOpInfos_23 = ((MR_Word) conv15_OtherOpInfos_23);
            succeeded = MR_TRUE;
          }
          if (succeeded)
            mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_112_95_105_110_102_111_95_97_110_100_95_112_114_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_9_p_1(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, FirstOpInfo_22, OtherOpInfos_23, Priority_10, Functor_13, Args_15);
          else
          {
            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, Functor_13, (MR_Integer) 0);
            if (!((Args_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
            {
              MR_Word X_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
              MR_Word Xs_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
              void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box conv18_STATE_VARIABLE_State_13_118;
              void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              MR_Box conv20_STATE_VARIABLE_State_25;

              func_17(((MR_Box) TypeClassInfo_for_writer_51), ((MR_Box) (Stream_7)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_State_13_118);
              mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_6_p_1(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, X_101, (MR_Integer) 1000);
              mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_116_101_114_109_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, Xs_102);
              func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
              func_19(((MR_Box) TypeClassInfo_for_writer_51), ((MR_Box) (Stream_7)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_State_25);
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_116_101_114_109_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(
  MR_Word TypeClassInfo_for_writer_22,
  MR_Word TypeClassInfo_for_writer_23,
  MR_Word HeadVar__1_1,
  MR_Word NonCanon_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if (!((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Xs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_22, (MR_Integer) 0)), (MR_Integer) 5)));
      MR_Box conv1_STATE_VARIABLE_State_13_31;
      MR_Word TypeInfo_18_34;

      func_0(((MR_Box) TypeClassInfo_for_writer_22), ((MR_Box) (HeadVar__1_1)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_13_31);
{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_116_101_114_109_95_97_114_103_115_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_22 ;
	Index =  (MR_Integer) 4 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_18_34  = TypeInfo;
}
      mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_111_95_119_114_105_116_101_95_117_110_105_118_95_112_114_105_111_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_6_p_1(TypeClassInfo_for_writer_22, TypeClassInfo_for_writer_23, HeadVar__1_1, NonCanon_2, X_13, (MR_Integer) 1000);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__3_3 = Xs_14;

        HeadVar__3_3 = next_value_of_HeadVar__3_3;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_97_114_114_97_121_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeClassInfo_for_writer_16,
  MR_Word TypeClassInfo_for_writer_17,
  MR_Word Stream_5,
  MR_ArrayPtr Array_6)
{
  {
    MR_Word TypeCtorInfo_19_19;
    MR_Word TypeInfo_20_20;
    MR_Word List_8;
    MR_Integer V_5_23;
    MR_Integer V_6_24;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box conv1_STATE_VARIABLE_State_12_12;
    MR_Word TypeInfo_for_T_35;
    MR_Word TypeInfo_for_T_36;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_State_10;

    func_0(((MR_Box) TypeClassInfo_for_writer_16), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_String) "array(")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_12_12);
{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_97_114_114_97_121_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, Array_6 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 V_5_23  = Min;
}
{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_97_114_114_97_121_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, Array_6 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 V_6_24  = Max;
}
    mercury__array__fetch_items_4_p_0(TypeInfo_for_T_18, Array_6, V_5_23, V_6_24, &List_8);
    TypeCtorInfo_19_19 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    {
      TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_20_20, 0) = ((MR_Box) (TypeCtorInfo_19_19));
      MR_hl_field(MR_mktag(0), TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_18));
    }
    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(TypeInfo_20_20, TypeClassInfo_for_writer_16, TypeClassInfo_for_writer_17, Stream_5, (MR_Integer) 1, ((MR_Box) (List_8)));
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5)));
    func_2(((MR_Box) TypeClassInfo_for_writer_16), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_10);
  }
}

static void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeClassInfo_for_writer_16,
  MR_Word TypeClassInfo_for_writer_17,
  MR_Word Stream_5,
  MR_Box VersionArray_6)
{
  {
    MR_Word TypeCtorInfo_19_19;
    MR_Word TypeInfo_20_20;
    MR_Word List_8;
    MR_Word V_5_26;
    MR_Integer V_8_37;
    MR_Integer V_4_41;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box conv1_STATE_VARIABLE_State_12_12;
    MR_Word TypeInfo_for_T_50;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_State_10;

    func_0(((MR_Box) TypeClassInfo_for_writer_16), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_String) "version_array(")), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_12_12);
    V_5_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, VersionArray_6 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 V_4_41  = N;
}
    V_8_37 = (V_4_41 - (MR_Integer) 1);
    List_8 = mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_49_52_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(TypeInfo_for_T_18, VersionArray_6, V_5_26, V_8_37);
    TypeCtorInfo_19_19 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    {
      TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_20_20, 0) = ((MR_Box) (TypeCtorInfo_19_19));
      MR_hl_field(MR_mktag(0), TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_18));
    }
    mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_5_p_1(TypeInfo_20_20, TypeClassInfo_for_writer_16, TypeClassInfo_for_writer_17, Stream_5, (MR_Integer) 1, ((MR_Box) (List_8)));
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5)));
    func_2(((MR_Box) TypeClassInfo_for_writer_16), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_10);
  }
}

static void MR_CALL 
mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_p_in__term_io_0(
  MR_Word TypeClassInfo_for_writer_10,
  MR_Word V_5_5,
  MR_Char V_6_6)
{
  {
    MR_String V_10_9;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_V_9_8;

    V_10_9 = mercury__term_io__quoted_char_1_f_0(V_6_6);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_10, (MR_Integer) 0)), (MR_Integer) 5)));
    func_0(((MR_Box) TypeClassInfo_for_writer_10), ((MR_Box) (V_5_5)), ((MR_Box) (V_10_9)), ((MR_Box) ((MR_Integer) 0)), &conv1_V_9_8);
  }
}

void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_19,
  MR_Word Stream_5,
  MR_Integer Int_6)
{
  {
    MR_bool succeeded;
    MR_Word IOStream_9;
    MR_Word TypeInfo_21_21;
    MR_Word TypeCtorInfo_22_22;
    MR_Word TypeInfo_24_24;
    MR_Word TypeCtorInfo_25_25;
    MR_Integer PolyConst2_23;
    MR_Box conv0_IOState0_8;
    MR_Box conv1_IOStream_9;

{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_19 ;
	Index =  (MR_Integer) 4 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_21_21  = TypeInfo;
}
    TypeCtorInfo_22_22 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_21_21, TypeCtorInfo_22_22, ((MR_Box) ((MR_Integer) 0)), &conv0_IOState0_8);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
    {
      PolyConst2_23 = (MR_Integer) 2;
{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_19 ;
	Index =  PolyConst2_23 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_24_24  = TypeInfo;
}
      TypeCtorInfo_25_25 = (MR_Word) &mercury__io__io__type_ctor_info_output_stream_0;
      succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_24_24, TypeCtorInfo_25_25, ((MR_Box) (Stream_5)), &conv1_IOStream_9);
      if (succeeded)
      {
        IOStream_9 = ((MR_Word) conv1_IOStream_9);
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Box V_5_36;
      MR_Box V_8_37;
      MR_Word V_8_47;
      MR_String V_6_51;
      MR_Word TypeCtorInfo_26_26;
      MR_Word TypeInfo_28_28;
      MR_Box conv2_STATE_VARIABLE_State_14_14;

      V_5_36 = (MR_Box) IOStream_9;
{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) V_5_36 ;
	Val =  Int_6 ;
		{

    if (ML_fprintf(Stream, "%" MR_INTEGER_LENGTH_MODIFIER "d", Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, V_8_37 );
}
{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, V_8_37 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = MR_FALSE;
      else
      {
{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, V_8_37 , Error);
	Msg0 =  (MR_String) "error writing to output file: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 V_6_51  = Msg;
}
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        V_8_47 = (MR_Word) V_6_51;
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word TypeCtorInfo_10_48 = (MR_Word) &mercury__io__io__type_ctor_info_error_0;

        {
          mercury__exception__throw_1_p_0(TypeCtorInfo_10_48, ((MR_Box) (V_8_47)));
          return;
        }
      }
      else
      {
      }
      TypeCtorInfo_26_26 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_19 ;
	Index =  (MR_Integer) 4 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_28_28  = TypeInfo;
}
      succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeCtorInfo_26_26, TypeInfo_28_28, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_State_14_14);
      if (succeeded)
        succeeded = MR_TRUE;
      if (!(succeeded))
      {
        {
          mercury__require__error_1_p_0((MR_String) "stream.string_writer.put_int: unexpected type error");
          return;
        }
      }
    }
    else
    {
      MR_String Var_17;
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv4_STATE_VARIABLE_State_12;

      mercury__string__int_to_base_string_3_p_0(Int_6, (MR_Integer) 10, &Var_17);
      func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
      func_3(((MR_Box) TypeClassInfo_for_writer_19), ((MR_Box) (Stream_5)), ((MR_Box) (Var_17)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_State_12);
    }
  }
}

void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_117_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_19,
  MR_Word Stream_5,
  MR_Unsigned UInt_6)
{
  {
    MR_bool succeeded;
    MR_Word IOStream_9;
    MR_Word TypeInfo_21_21;
    MR_Word TypeCtorInfo_22_22;
    MR_Word TypeInfo_24_24;
    MR_Word TypeCtorInfo_25_25;
    MR_Integer PolyConst2_23;
    MR_Box conv0_IOState0_8;
    MR_Box conv1_IOStream_9;

{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_117_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_19 ;
	Index =  (MR_Integer) 4 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_21_21  = TypeInfo;
}
    TypeCtorInfo_22_22 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_21_21, TypeCtorInfo_22_22, ((MR_Box) ((MR_Integer) 0)), &conv0_IOState0_8);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
    {
      PolyConst2_23 = (MR_Integer) 2;
{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_117_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_19 ;
	Index =  PolyConst2_23 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_24_24  = TypeInfo;
}
      TypeCtorInfo_25_25 = (MR_Word) &mercury__io__io__type_ctor_info_output_stream_0;
      succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_24_24, TypeCtorInfo_25_25, ((MR_Box) (Stream_5)), &conv1_IOStream_9);
      if (succeeded)
      {
        IOStream_9 = ((MR_Word) conv1_IOStream_9);
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Box V_5_36;
      MR_Box V_8_37;
      MR_Word V_8_47;
      MR_String V_6_51;
      MR_Word TypeCtorInfo_26_26;
      MR_Word TypeInfo_28_28;
      MR_Box conv2_STATE_VARIABLE_State_14_14;

      V_5_36 = (MR_Box) IOStream_9;
{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_117_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MercuryFilePtr Stream;
	MR_Unsigned Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) V_5_36 ;
	Val =  UInt_6 ;
		{

    if (ML_fprintf(Stream, "%" MR_INTEGER_LENGTH_MODIFIER "u", Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, V_8_37 );
}
{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_117_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, V_8_37 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = MR_FALSE;
      else
      {
{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_117_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, V_8_37 , Error);
	Msg0 =  (MR_String) "error writing to output file: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 V_6_51  = Msg;
}
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        V_8_47 = (MR_Word) V_6_51;
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word TypeCtorInfo_10_48 = (MR_Word) &mercury__io__io__type_ctor_info_error_0;

        {
          mercury__exception__throw_1_p_0(TypeCtorInfo_10_48, ((MR_Box) (V_8_47)));
          return;
        }
      }
      else
      {
      }
      TypeCtorInfo_26_26 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_117_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_19 ;
	Index =  (MR_Integer) 4 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_28_28  = TypeInfo;
}
      succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeCtorInfo_26_26, TypeInfo_28_28, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_State_14_14);
      if (succeeded)
        succeeded = MR_TRUE;
      if (!(succeeded))
      {
        {
          mercury__require__error_1_p_0((MR_String) "stream.string_writer.put_uint: unexpected type error");
          return;
        }
      }
    }
    else
    {
      MR_String Var_17;
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv4_STATE_VARIABLE_State_12;

{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_117_105_110_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_Unsigned U;
	MR_String Str;

	U =  UInt_6 ;
		{

    char buffer[21];
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "u", U);
    MR_allocate_aligned_string_msg(Str, strlen(buffer), MR_ALLOC_ID);
    strcpy(Str, buffer);


		;}
#undef MR_PROC_LABEL
	 Var_17  = Str;
}
      func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
      func_3(((MR_Box) TypeClassInfo_for_writer_19), ((MR_Box) (Stream_5)), ((MR_Box) (Var_17)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_State_12);
    }
  }
}

void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_102_108_111_97_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_19,
  MR_Word Stream_5,
  MR_Float Float_6)
{
  {
    MR_bool succeeded;
    MR_Word IOStream_9;
    MR_Word TypeInfo_21_21;
    MR_Word TypeCtorInfo_22_22;
    MR_Word TypeInfo_24_24;
    MR_Word TypeCtorInfo_25_25;
    MR_Integer PolyConst2_23;
    MR_Box conv0_IOState0_8;
    MR_Box conv1_IOStream_9;

{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_102_108_111_97_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_19 ;
	Index =  (MR_Integer) 4 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_21_21  = TypeInfo;
}
    TypeCtorInfo_22_22 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_21_21, TypeCtorInfo_22_22, ((MR_Box) ((MR_Integer) 0)), &conv0_IOState0_8);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
    {
      PolyConst2_23 = (MR_Integer) 2;
{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_102_108_111_97_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_19 ;
	Index =  PolyConst2_23 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_24_24  = TypeInfo;
}
      TypeCtorInfo_25_25 = (MR_Word) &mercury__io__io__type_ctor_info_output_stream_0;
      succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_24_24, TypeCtorInfo_25_25, ((MR_Box) (Stream_5)), &conv1_IOStream_9);
      if (succeeded)
      {
        IOStream_9 = ((MR_Word) conv1_IOStream_9);
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Box V_5_36;
      MR_Box V_8_37;
      MR_Word V_8_47;
      MR_String V_6_51;
      MR_Word TypeCtorInfo_26_26;
      MR_Word TypeInfo_28_28;
      MR_Box conv2_STATE_VARIABLE_State_14_14;

      V_5_36 = (MR_Box) IOStream_9;
{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_102_108_111_97_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MercuryFilePtr Stream;
	MR_Float Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) V_5_36 ;
	Val =  Float_6 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, V_8_37 );
}
{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_102_108_111_97_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, V_8_37 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = MR_FALSE;
      else
      {
{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_102_108_111_97_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, V_8_37 , Error);
	Msg0 =  (MR_String) "error writing to output file: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 V_6_51  = Msg;
}
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        V_8_47 = (MR_Word) V_6_51;
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word TypeCtorInfo_10_48 = (MR_Word) &mercury__io__io__type_ctor_info_error_0;

        {
          mercury__exception__throw_1_p_0(TypeCtorInfo_10_48, ((MR_Box) (V_8_47)));
          return;
        }
      }
      else
      {
      }
      TypeCtorInfo_26_26 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_102_108_111_97_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_19 ;
	Index =  (MR_Integer) 4 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_28_28  = TypeInfo;
}
      succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeCtorInfo_26_26, TypeInfo_28_28, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_State_14_14);
      if (succeeded)
        succeeded = MR_TRUE;
      if (!(succeeded))
      {
        {
          mercury__require__error_1_p_0((MR_String) "stream.string_writer.put_float: unexpected type error");
          return;
        }
      }
    }
    else
    {
      MR_String Var_17;
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv4_STATE_VARIABLE_State_12;

{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_102_108_111_97_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_Float Flt;
	MR_String Str;

	Flt =  Float_6 ;
		{
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	 Var_17  = Str;
}
      func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
      func_3(((MR_Box) TypeClassInfo_for_writer_19), ((MR_Box) (Stream_5)), ((MR_Box) (Var_17)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_State_12);
    }
  }
}

void MR_CALL 
mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_19,
  MR_Word Stream_5,
  MR_Char Char_6)
{
  {
    MR_bool succeeded;
    MR_Word IOStream_9;
    MR_Word TypeInfo_21_21;
    MR_Word TypeCtorInfo_22_22;
    MR_Word TypeInfo_24_24;
    MR_Word TypeCtorInfo_25_25;
    MR_Integer PolyConst2_23;
    MR_Box conv0_IOState0_8;
    MR_Box conv1_IOStream_9;

{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_19 ;
	Index =  (MR_Integer) 4 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_21_21  = TypeInfo;
}
    TypeCtorInfo_22_22 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_21_21, TypeCtorInfo_22_22, ((MR_Box) ((MR_Integer) 0)), &conv0_IOState0_8);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
    {
      PolyConst2_23 = (MR_Integer) 2;
{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_19 ;
	Index =  PolyConst2_23 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_24_24  = TypeInfo;
}
      TypeCtorInfo_25_25 = (MR_Word) &mercury__io__io__type_ctor_info_output_stream_0;
      succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_24_24, TypeCtorInfo_25_25, ((MR_Box) (Stream_5)), &conv1_IOStream_9);
      if (succeeded)
      {
        IOStream_9 = ((MR_Word) conv1_IOStream_9);
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Box V_5_36;
      MR_Box V_8_37;
      MR_Word V_8_47;
      MR_String V_6_51;
      MR_Word TypeCtorInfo_26_26;
      MR_Word TypeInfo_28_28;
      MR_Box conv2_STATE_VARIABLE_State_14_14;

      V_5_36 = (MR_Box) IOStream_9;
{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr) V_5_36 ;
	Character =  Char_6 ;
		{

    Error = 0;
    if (Character <= 0x7f) {
        if (MR_PUTCH(*Stream, Character) < 0) {
            Error = errno;
        } else if (Character == '\n') {
            MR_line_number(*Stream)++;
        }
    } else {
        char    buf[5];
        size_t  len;
        size_t  i;
        len = MR_utf8_encode(buf, Character);
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                Error = errno;
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, V_8_37 );
}
{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, V_8_37 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = MR_FALSE;
      else
      {
{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, V_8_37 , Error);
	Msg0 =  (MR_String) "error writing to output file: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 V_6_51  = Msg;
}
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        V_8_47 = (MR_Word) V_6_51;
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word TypeCtorInfo_10_48 = (MR_Word) &mercury__io__io__type_ctor_info_error_0;

        {
          mercury__exception__throw_1_p_0(TypeCtorInfo_10_48, ((MR_Box) (V_8_47)));
          return;
        }
      }
      else
      {
      }
      TypeCtorInfo_26_26 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
{
#define MR_PROC_LABEL mercury__stream__string_writer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_112_117_116_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_19 ;
	Index =  (MR_Integer) 4 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_28_28  = TypeInfo;
}
      succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeCtorInfo_26_26, TypeInfo_28_28, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_State_14_14);
      if (succeeded)
        succeeded = MR_TRUE;
      if (!(succeeded))
      {
        {
          mercury__require__error_1_p_0((MR_String) "stream.string_writer.put_char: unexpected type error");
          return;
        }
      }
    }
    else
    {
      MR_String Var_17;
      MR_Word V_5_58;
      MR_Word V_6_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv4_STATE_VARIABLE_State_12;

      {
        V_5_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), V_5_58, 0) = ((MR_Box) (MR_Word) (Char_6));
        MR_hl_field(MR_mktag(1), V_5_58, 1) = ((MR_Box) (V_6_59));
      }
      mercury__string__to_char_list_2_p_1(&Var_17, V_5_58);
      func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
      func_3(((MR_Box) TypeClassInfo_for_writer_19), ((MR_Box) (Stream_5)), ((MR_Box) (Var_17)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_State_12);
    }
  }
}

void MR_CALL 
mercury__stream__string_writer__do_write_univ_5_p_3(
  MR_Word TypeClassInfo_for_writer_17,
  MR_Word TypeClassInfo_for_writer_18,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8,
  MR_Box STATE_VARIABLE_State_0_10,
  MR_Box * STATE_VARIABLE_State_11)
{
  {
    MR_Integer Var_12 = ((MR_Integer) 1200 + (MR_Integer) 1);

    mercury__stream__string_writer__do_write_univ_prio_6_p_3(TypeClassInfo_for_writer_17, TypeClassInfo_for_writer_18, Stream_6, NonCanon_7, Univ_8, Var_12, STATE_VARIABLE_State_0_10, STATE_VARIABLE_State_11);
  }
}

void MR_CALL 
mercury__stream__string_writer__do_write_univ_5_p_2(
  MR_Word TypeClassInfo_for_writer_17,
  MR_Word TypeClassInfo_for_writer_18,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8,
  MR_Box STATE_VARIABLE_State_0_10,
  MR_Box * STATE_VARIABLE_State_11)
{
  {
    MR_Integer Var_12 = ((MR_Integer) 1200 + (MR_Integer) 1);

    mercury__stream__string_writer__do_write_univ_prio_6_p_2(TypeClassInfo_for_writer_17, TypeClassInfo_for_writer_18, Stream_6, NonCanon_7, Univ_8, Var_12, STATE_VARIABLE_State_0_10, STATE_VARIABLE_State_11);
  }
}

void MR_CALL 
mercury__stream__string_writer__do_write_univ_5_p_0(
  MR_Word TypeClassInfo_for_writer_17,
  MR_Word TypeClassInfo_for_writer_18,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8,
  MR_Box STATE_VARIABLE_State_0_10,
  MR_Box * STATE_VARIABLE_State_11)
{
  {
    MR_Integer Var_12 = ((MR_Integer) 1200 + (MR_Integer) 1);

    mercury__stream__string_writer__do_write_univ_prio_6_p_0(TypeClassInfo_for_writer_17, TypeClassInfo_for_writer_18, Stream_6, NonCanon_7, Univ_8, Var_12, STATE_VARIABLE_State_0_10, STATE_VARIABLE_State_11);
  }
}

void MR_CALL 
mercury__stream__string_writer__maybe_write_paren_6_p_0(
  MR_Word TypeClassInfo_for_writer_15,
  MR_Word TypeClassInfo_for_writer_16,
  MR_Box Stream_7,
  MR_Char String_8,
  MR_Integer Priority_9,
  MR_Integer OpPriority_10,
  MR_Box STATE_VARIABLE_State_0_12,
  MR_Box * STATE_VARIABLE_State_13)
{
  {
    MR_bool succeeded = (OpPriority_10 > Priority_9);

    if (succeeded)
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5)));

      func_0(((MR_Box) TypeClassInfo_for_writer_16), Stream_7, ((MR_Box) (MR_Word) (String_8)), STATE_VARIABLE_State_0_12, STATE_VARIABLE_State_13);
    }
    else
      *STATE_VARIABLE_State_13 = STATE_VARIABLE_State_0_12;
  }
}

void MR_CALL 
mercury__stream__string_writer__write_univ_5_p_3(
  MR_Word TypeClassInfo_for_writer_13,
  MR_Word TypeClassInfo_for_writer_14,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8,
  MR_Box STATE_VARIABLE_State_0_10,
  MR_Box * STATE_VARIABLE_State_11)
{
  {
    MR_Integer Var_21 = ((MR_Integer) 1200 + (MR_Integer) 1);

    mercury__stream__string_writer__do_write_univ_prio_6_p_3(TypeClassInfo_for_writer_13, TypeClassInfo_for_writer_14, Stream_6, NonCanon_7, Univ_8, Var_21, STATE_VARIABLE_State_0_10, STATE_VARIABLE_State_11);
  }
}

void MR_CALL 
mercury__stream__string_writer__write_univ_5_p_2(
  MR_Word TypeClassInfo_for_writer_13,
  MR_Word TypeClassInfo_for_writer_14,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8,
  MR_Box STATE_VARIABLE_State_0_10,
  MR_Box * STATE_VARIABLE_State_11)
{
  {
    MR_Integer Var_21 = ((MR_Integer) 1200 + (MR_Integer) 1);

    mercury__stream__string_writer__do_write_univ_prio_6_p_2(TypeClassInfo_for_writer_13, TypeClassInfo_for_writer_14, Stream_6, NonCanon_7, Univ_8, Var_21, STATE_VARIABLE_State_0_10, STATE_VARIABLE_State_11);
  }
}

void MR_CALL 
mercury__stream__string_writer__write_univ_5_p_1(
  MR_Word TypeClassInfo_for_writer_13,
  MR_Word TypeClassInfo_for_writer_14,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8,
  MR_Box STATE_VARIABLE_State_0_10,
  MR_Box * STATE_VARIABLE_State_11)
{
  {
    MR_Integer Var_21 = ((MR_Integer) 1200 + (MR_Integer) 1);

    mercury__stream__string_writer__do_write_univ_prio_6_p_1(TypeClassInfo_for_writer_13, TypeClassInfo_for_writer_14, Stream_6, NonCanon_7, Univ_8, Var_21, STATE_VARIABLE_State_0_10, STATE_VARIABLE_State_11);
  }
}

void MR_CALL 
mercury__stream__string_writer__write_univ_5_p_0(
  MR_Word TypeClassInfo_for_writer_13,
  MR_Word TypeClassInfo_for_writer_14,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8,
  MR_Box STATE_VARIABLE_State_0_10,
  MR_Box * STATE_VARIABLE_State_11)
{
  {
    MR_Integer Var_21 = ((MR_Integer) 1200 + (MR_Integer) 1);

    mercury__stream__string_writer__do_write_univ_prio_6_p_0(TypeClassInfo_for_writer_13, TypeClassInfo_for_writer_14, Stream_6, NonCanon_7, Univ_8, Var_21, STATE_VARIABLE_State_0_10, STATE_VARIABLE_State_11);
  }
}

void MR_CALL 
mercury__stream__string_writer__write_univ_4_p_0(
  MR_Word TypeClassInfo_for_writer_12,
  MR_Word TypeClassInfo_for_writer_13,
  MR_Box Stream_5,
  MR_Word Univ_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  {
    MR_Integer Var_20 = ((MR_Integer) 1200 + (MR_Integer) 1);

    mercury__stream__string_writer__do_write_univ_prio_6_p_1(TypeClassInfo_for_writer_12, TypeClassInfo_for_writer_13, Stream_5, (MR_Integer) 1, Univ_6, Var_20, STATE_VARIABLE_State_0_8, STATE_VARIABLE_State_9);
  }
}

void MR_CALL 
mercury__stream__string_writer__write_5_p_3(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeClassInfo_for_writer_14,
  MR_Word TypeClassInfo_for_writer_15,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8,
  MR_Box STATE_VARIABLE_State_0_11,
  MR_Box * STATE_VARIABLE_State_12)
{
  {
    MR_Word Univ_10;
    MR_Integer Var_23;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_16, Term_8, &Univ_10);
    Var_23 = ((MR_Integer) 1200 + (MR_Integer) 1);
    mercury__stream__string_writer__do_write_univ_prio_6_p_3(TypeClassInfo_for_writer_14, TypeClassInfo_for_writer_15, Stream_6, NonCanon_7, Univ_10, Var_23, STATE_VARIABLE_State_0_11, STATE_VARIABLE_State_12);
  }
}

void MR_CALL 
mercury__stream__string_writer__write_5_p_2(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeClassInfo_for_writer_14,
  MR_Word TypeClassInfo_for_writer_15,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8,
  MR_Box STATE_VARIABLE_State_0_11,
  MR_Box * STATE_VARIABLE_State_12)
{
  {
    MR_Word Univ_10;
    MR_Integer Var_23;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_16, Term_8, &Univ_10);
    Var_23 = ((MR_Integer) 1200 + (MR_Integer) 1);
    mercury__stream__string_writer__do_write_univ_prio_6_p_2(TypeClassInfo_for_writer_14, TypeClassInfo_for_writer_15, Stream_6, NonCanon_7, Univ_10, Var_23, STATE_VARIABLE_State_0_11, STATE_VARIABLE_State_12);
  }
}

void MR_CALL 
mercury__stream__string_writer__write_5_p_1(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeClassInfo_for_writer_14,
  MR_Word TypeClassInfo_for_writer_15,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8,
  MR_Box STATE_VARIABLE_State_0_11,
  MR_Box * STATE_VARIABLE_State_12)
{
  {
    MR_Word Univ_10;
    MR_Integer Var_23;
    MR_Integer Var_25;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_16, Term_8, &Univ_10);
    Var_25 = mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_109_97_120_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_in__ops_0();
    Var_23 = (Var_25 + (MR_Integer) 1);
    mercury__stream__string_writer__do_write_univ_prio_6_p_1(TypeClassInfo_for_writer_14, TypeClassInfo_for_writer_15, Stream_6, NonCanon_7, Univ_10, Var_23, STATE_VARIABLE_State_0_11, STATE_VARIABLE_State_12);
  }
}

void MR_CALL 
mercury__stream__string_writer__write_5_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeClassInfo_for_writer_14,
  MR_Word TypeClassInfo_for_writer_15,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8,
  MR_Box STATE_VARIABLE_State_0_11,
  MR_Box * STATE_VARIABLE_State_12)
{
  {
    MR_Word Univ_10;
    MR_Integer Var_23;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_16, Term_8, &Univ_10);
    Var_23 = ((MR_Integer) 1200 + (MR_Integer) 1);
    mercury__stream__string_writer__do_write_univ_prio_6_p_0(TypeClassInfo_for_writer_14, TypeClassInfo_for_writer_15, Stream_6, NonCanon_7, Univ_10, Var_23, STATE_VARIABLE_State_0_11, STATE_VARIABLE_State_12);
  }
}

void MR_CALL 
mercury__stream__string_writer__write_cc_4_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word TypeClassInfo_for_writer_12,
  MR_Word TypeClassInfo_for_writer_13,
  MR_Box Stream_5,
  MR_Box X_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  {
    MR_Word Univ_21;
    MR_Integer Var_29;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_14, X_6, &Univ_21);
    Var_29 = ((MR_Integer) 1200 + (MR_Integer) 1);
    mercury__stream__string_writer__do_write_univ_prio_6_p_2(TypeClassInfo_for_writer_12, TypeClassInfo_for_writer_13, Stream_5, (MR_Integer) 2, Univ_21, Var_29, STATE_VARIABLE_State_0_8, STATE_VARIABLE_State_9);
  }
}

void MR_CALL 
mercury__stream__string_writer__write_4_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word TypeClassInfo_for_writer_12,
  MR_Word TypeClassInfo_for_writer_13,
  MR_Box Stream_5,
  MR_Box X_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  {
    MR_Word Univ_21;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_14, X_6, &Univ_21);
    mercury__stream__string_writer__do_write_univ_5_p_1(TypeClassInfo_for_writer_12, TypeClassInfo_for_writer_13, Stream_5, (MR_Integer) 1, Univ_21, STATE_VARIABLE_State_0_8, STATE_VARIABLE_State_9);
  }
}

void MR_CALL 
mercury__stream__string_writer__print_5_p_3(
  MR_Word TypeInfo_for_T_36,
  MR_Word TypeClassInfo_for_writer_34,
  MR_Word TypeClassInfo_for_writer_35,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8,
  MR_Box STATE_VARIABLE_State_0_17,
  MR_Box * STATE_VARIABLE_State_18)
{
  {
    MR_bool succeeded;
    MR_String String_10;
    MR_Word TypeCtorInfo_37_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Box conv0_String_10;

    succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_36, TypeCtorInfo_37_37, Term_8, &conv0_String_10);
    if (succeeded)
    {
      String_10 = ((MR_String) conv0_String_10);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));

      func_1(((MR_Box) TypeClassInfo_for_writer_34), Stream_6, ((MR_Box) (String_10)), STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
    }
    else
    {
      MR_Char Char_11;
      MR_Word TypeCtorInfo_38_38 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
      MR_Box conv2_Char_11;

      succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_36, TypeCtorInfo_38_38, Term_8, &conv2_Char_11);
      if (succeeded)
      {
        Char_11 = ((MR_Char) (MR_Word) conv2_Char_11);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_35, (MR_Integer) 0)), (MR_Integer) 5)));

        func_3(((MR_Box) TypeClassInfo_for_writer_35), Stream_6, ((MR_Box) (MR_Word) (Char_11)), STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
      }
      else
      {
        MR_Unsigned UInt_12;
        MR_Word TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_uint_0;
        MR_Box conv4_UInt_12;

        succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_36, TypeCtorInfo_39_39, Term_8, &conv4_UInt_12);
        if (succeeded)
        {
          UInt_12 = ((MR_Unsigned) conv4_UInt_12);
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_String Var_24;
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__stream__string_writer__print_5_p_3

	MR_Unsigned U;
	MR_String Str;

	U =  UInt_12 ;
		{

    char buffer[21];
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "u", U);
    MR_allocate_aligned_string_msg(Str, strlen(buffer), MR_ALLOC_ID);
    strcpy(Str, buffer);


		;}
#undef MR_PROC_LABEL
	 Var_24  = Str;
}
          func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
          func_5(((MR_Box) TypeClassInfo_for_writer_34), Stream_6, ((MR_Box) (Var_24)), STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
        }
        else
        {
          MR_Word OrigUniv_13;
          MR_Word TypeCtorInfo_40_40 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
          MR_Box conv6_OrigUniv_13;

          succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_36, TypeCtorInfo_40_40, Term_8, &conv6_OrigUniv_13);
          if (succeeded)
          {
            OrigUniv_13 = ((MR_Word) conv6_OrigUniv_13);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Integer Var_65 = ((MR_Integer) 1200 + (MR_Integer) 1);

            mercury__stream__string_writer__do_write_univ_prio_6_p_1(TypeClassInfo_for_writer_34, TypeClassInfo_for_writer_35, Stream_6, (MR_Integer) 1, OrigUniv_13, Var_65, STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
          }
          else
          {
            MR_Word BigInt_14;
            MR_Word TypeCtorInfo_41_41 = (MR_Word) &mercury__integer__integer__type_ctor_info_integer_0;
            MR_Box conv7_BigInt_14;

            succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_36, TypeCtorInfo_41_41, Term_8, &conv7_BigInt_14);
            if (succeeded)
            {
              BigInt_14 = ((MR_Word) conv7_BigInt_14);
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_String Var_27;
              void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              Var_27 = mercury__integer__to_base_string_2_f_0(BigInt_14, (MR_Integer) 10);
              func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
              func_8(((MR_Box) TypeClassInfo_for_writer_34), Stream_6, ((MR_Box) (Var_27)), STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
            }
            else
            {
              MR_Word DateTime_15;
              MR_Word TypeCtorInfo_42_42 = (MR_Word) &mercury__calendar__calendar__type_ctor_info_date_0;
              MR_Box conv9_DateTime_15;

              succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_36, TypeCtorInfo_42_42, Term_8, &conv9_DateTime_15);
              if (succeeded)
              {
                DateTime_15 = ((MR_Word) conv9_DateTime_15);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_String Var_29;
                void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                Var_29 = mercury__calendar__date_to_string_1_f_0(DateTime_15);
                func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
                func_10(((MR_Box) TypeClassInfo_for_writer_34), Stream_6, ((MR_Box) (Var_29)), STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
              }
              else
              {
                MR_Word Duration_16;
                MR_Word TypeCtorInfo_43_43 = (MR_Word) &mercury__calendar__calendar__type_ctor_info_duration_0;
                MR_Box conv11_Duration_16;

                succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_36, TypeCtorInfo_43_43, Term_8, &conv11_Duration_16);
                if (succeeded)
                {
                  Duration_16 = ((MR_Word) conv11_Duration_16);
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_String Var_31;
                  void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                  Var_31 = mercury__calendar__duration_to_string_1_f_0(Duration_16);
                  func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
                  func_12(((MR_Box) TypeClassInfo_for_writer_34), Stream_6, ((MR_Box) (Var_31)), STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
                }
                else
                  mercury__stream__string_writer__print_quoted_5_p_3(TypeInfo_for_T_36, TypeClassInfo_for_writer_34, TypeClassInfo_for_writer_35, Stream_6, NonCanon_7, Term_8, STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
mercury__stream__string_writer__print_quoted_5_p_3(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeClassInfo_for_writer_13,
  MR_Word TypeClassInfo_for_writer_14,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8,
  MR_Box STATE_VARIABLE_State_0_10,
  MR_Box * STATE_VARIABLE_State_11)
{
  {
    MR_Word Univ_22;
    MR_Integer Var_30;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_15, Term_8, &Univ_22);
    Var_30 = ((MR_Integer) 1200 + (MR_Integer) 1);
    mercury__stream__string_writer__do_write_univ_prio_6_p_3(TypeClassInfo_for_writer_13, TypeClassInfo_for_writer_14, Stream_6, NonCanon_7, Univ_22, Var_30, STATE_VARIABLE_State_0_10, STATE_VARIABLE_State_11);
  }
}

void MR_CALL 
mercury__stream__string_writer__print_5_p_0(
  MR_Word TypeInfo_for_T_36,
  MR_Word TypeClassInfo_for_writer_34,
  MR_Word TypeClassInfo_for_writer_35,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8,
  MR_Box STATE_VARIABLE_State_0_17,
  MR_Box * STATE_VARIABLE_State_18)
{
  {
    MR_bool succeeded;
    MR_String String_10;
    MR_Word TypeCtorInfo_37_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Box conv0_String_10;

    succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_36, TypeCtorInfo_37_37, Term_8, &conv0_String_10);
    if (succeeded)
    {
      String_10 = ((MR_String) conv0_String_10);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));

      func_1(((MR_Box) TypeClassInfo_for_writer_34), Stream_6, ((MR_Box) (String_10)), STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
    }
    else
    {
      MR_Char Char_11;
      MR_Word TypeCtorInfo_38_38 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
      MR_Box conv2_Char_11;

      succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_36, TypeCtorInfo_38_38, Term_8, &conv2_Char_11);
      if (succeeded)
      {
        Char_11 = ((MR_Char) (MR_Word) conv2_Char_11);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_35, (MR_Integer) 0)), (MR_Integer) 5)));

        func_3(((MR_Box) TypeClassInfo_for_writer_35), Stream_6, ((MR_Box) (MR_Word) (Char_11)), STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
      }
      else
      {
        MR_Unsigned UInt_12;
        MR_Word TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_uint_0;
        MR_Box conv4_UInt_12;

        succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_36, TypeCtorInfo_39_39, Term_8, &conv4_UInt_12);
        if (succeeded)
        {
          UInt_12 = ((MR_Unsigned) conv4_UInt_12);
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_String Var_24;
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__stream__string_writer__print_5_p_0

	MR_Unsigned U;
	MR_String Str;

	U =  UInt_12 ;
		{

    char buffer[21];
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "u", U);
    MR_allocate_aligned_string_msg(Str, strlen(buffer), MR_ALLOC_ID);
    strcpy(Str, buffer);


		;}
#undef MR_PROC_LABEL
	 Var_24  = Str;
}
          func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
          func_5(((MR_Box) TypeClassInfo_for_writer_34), Stream_6, ((MR_Box) (Var_24)), STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
        }
        else
        {
          MR_Word OrigUniv_13;
          MR_Word TypeCtorInfo_40_40 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
          MR_Box conv6_OrigUniv_13;

          succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_36, TypeCtorInfo_40_40, Term_8, &conv6_OrigUniv_13);
          if (succeeded)
          {
            OrigUniv_13 = ((MR_Word) conv6_OrigUniv_13);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Integer Var_65 = ((MR_Integer) 1200 + (MR_Integer) 1);

            mercury__stream__string_writer__do_write_univ_prio_6_p_1(TypeClassInfo_for_writer_34, TypeClassInfo_for_writer_35, Stream_6, (MR_Integer) 1, OrigUniv_13, Var_65, STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
          }
          else
          {
            MR_Word BigInt_14;
            MR_Word TypeCtorInfo_41_41 = (MR_Word) &mercury__integer__integer__type_ctor_info_integer_0;
            MR_Box conv7_BigInt_14;

            succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_36, TypeCtorInfo_41_41, Term_8, &conv7_BigInt_14);
            if (succeeded)
            {
              BigInt_14 = ((MR_Word) conv7_BigInt_14);
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_String Var_27;
              void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              Var_27 = mercury__integer__to_base_string_2_f_0(BigInt_14, (MR_Integer) 10);
              func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
              func_8(((MR_Box) TypeClassInfo_for_writer_34), Stream_6, ((MR_Box) (Var_27)), STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
            }
            else
            {
              MR_Word DateTime_15;
              MR_Word TypeCtorInfo_42_42 = (MR_Word) &mercury__calendar__calendar__type_ctor_info_date_0;
              MR_Box conv9_DateTime_15;

              succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_36, TypeCtorInfo_42_42, Term_8, &conv9_DateTime_15);
              if (succeeded)
              {
                DateTime_15 = ((MR_Word) conv9_DateTime_15);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_String Var_29;
                void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                Var_29 = mercury__calendar__date_to_string_1_f_0(DateTime_15);
                func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
                func_10(((MR_Box) TypeClassInfo_for_writer_34), Stream_6, ((MR_Box) (Var_29)), STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
              }
              else
              {
                MR_Word Duration_16;
                MR_Word TypeCtorInfo_43_43 = (MR_Word) &mercury__calendar__calendar__type_ctor_info_duration_0;
                MR_Box conv11_Duration_16;

                succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_36, TypeCtorInfo_43_43, Term_8, &conv11_Duration_16);
                if (succeeded)
                {
                  Duration_16 = ((MR_Word) conv11_Duration_16);
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_String Var_31;
                  void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                  Var_31 = mercury__calendar__duration_to_string_1_f_0(Duration_16);
                  func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
                  func_12(((MR_Box) TypeClassInfo_for_writer_34), Stream_6, ((MR_Box) (Var_31)), STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
                }
                else
                  mercury__stream__string_writer__print_quoted_5_p_0(TypeInfo_for_T_36, TypeClassInfo_for_writer_34, TypeClassInfo_for_writer_35, Stream_6, NonCanon_7, Term_8, STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
mercury__stream__string_writer__print_quoted_5_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeClassInfo_for_writer_13,
  MR_Word TypeClassInfo_for_writer_14,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8,
  MR_Box STATE_VARIABLE_State_0_10,
  MR_Box * STATE_VARIABLE_State_11)
{
  {
    MR_Word Univ_22;
    MR_Integer Var_30;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_15, Term_8, &Univ_22);
    Var_30 = ((MR_Integer) 1200 + (MR_Integer) 1);
    mercury__stream__string_writer__do_write_univ_prio_6_p_0(TypeClassInfo_for_writer_13, TypeClassInfo_for_writer_14, Stream_6, NonCanon_7, Univ_22, Var_30, STATE_VARIABLE_State_0_10, STATE_VARIABLE_State_11);
  }
}

static void MR_CALL 
mercury__stream__string_writer__select_remaining_op_info_and_print_8_p_0(
  MR_Word TypeClassInfo_for_writer_36,
  MR_Word TypeClassInfo_for_writer_37,
  MR_Box Stream_1,
  MR_Word NonCanon_2,
  MR_Word HeadVar__3_3,
  MR_Integer Priority_4,
  MR_String Functor_5,
  MR_Word Args_6,
  MR_Box STATE_VARIABLE_State_0_7,
  MR_Box * STATE_VARIABLE_State_8)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer Var_28;

      succeeded = (Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        Var_28 = (MR_Integer) 1200;
        succeeded = (Priority_4 <= Var_28);
      }
      if (succeeded)
      {
        MR_Box STATE_VARIABLE_State_31_31;
        MR_Box STATE_VARIABLE_State_32_32;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_37, (MR_Integer) 0)), (MR_Integer) 5)));
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_0(((MR_Box) TypeClassInfo_for_writer_37), Stream_1, ((MR_Box) (MR_Word) ((MR_Char) 40)), STATE_VARIABLE_State_0_7, &STATE_VARIABLE_State_31_31);
        mercury__term_io__quote_atom_agt_5_p_0(TypeClassInfo_for_writer_36, TypeClassInfo_for_writer_37, Stream_1, Functor_5, (MR_Integer) 1, STATE_VARIABLE_State_31_31, &STATE_VARIABLE_State_32_32);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_37, (MR_Integer) 0)), (MR_Integer) 5)));
        func_1(((MR_Box) TypeClassInfo_for_writer_37), Stream_1, ((MR_Box) (MR_Word) ((MR_Char) 41)), STATE_VARIABLE_State_32_32, STATE_VARIABLE_State_8);
      }
      else
      {
        MR_Box STATE_VARIABLE_State_17_54;

        mercury__term_io__quote_atom_agt_5_p_0(TypeClassInfo_for_writer_36, TypeClassInfo_for_writer_37, Stream_1, Functor_5, (MR_Integer) 0, STATE_VARIABLE_State_0_7, &STATE_VARIABLE_State_17_54);
        if ((Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *STATE_VARIABLE_State_8 = STATE_VARIABLE_State_17_54;
        else
        {
          MR_Word X_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_6, (MR_Integer) 0)));
          MR_Word Xs_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_6, (MR_Integer) 1)));
          MR_Box STATE_VARIABLE_State_19_56;
          MR_Box STATE_VARIABLE_State_20_57;
          MR_Box STATE_VARIABLE_State_21_58;

          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_37, Stream_1, ((MR_Box) (MR_Word) ((MR_Char) 40)), STATE_VARIABLE_State_17_54, &STATE_VARIABLE_State_19_56);
          mercury__stream__string_writer__write_arg_5_p_0(TypeClassInfo_for_writer_36, TypeClassInfo_for_writer_37, Stream_1, NonCanon_2, X_51, STATE_VARIABLE_State_19_56, &STATE_VARIABLE_State_20_57);
          mercury__stream__string_writer__write_term_args_5_p_0(TypeClassInfo_for_writer_36, TypeClassInfo_for_writer_37, Stream_1, NonCanon_2, Xs_52, STATE_VARIABLE_State_20_57, &STATE_VARIABLE_State_21_58);
          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_37, Stream_1, ((MR_Box) (MR_Word) ((MR_Char) 41)), STATE_VARIABLE_State_21_58, STATE_VARIABLE_State_8);
        }
      }
    }
    else
    {
      MR_Word FirstOpInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word MoreOpInfos_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));

      mercury__stream__string_writer__select_op_info_and_print_9_p_0(TypeClassInfo_for_writer_36, TypeClassInfo_for_writer_37, Stream_1, NonCanon_2, FirstOpInfo_11, MoreOpInfos_12, Priority_4, Functor_5, Args_6, STATE_VARIABLE_State_0_7, STATE_VARIABLE_State_8);
    }
  }
}

static void MR_CALL 
mercury__stream__string_writer__select_op_info_and_print_9_p_0(
  MR_Word TypeClassInfo_for_writer_121,
  MR_Word TypeClassInfo_for_writer_122,
  MR_Box Stream_10,
  MR_Word NonCanon_11,
  MR_Word OpInfo_12,
  MR_Word OtherOpInfos_13,
  MR_Integer Priority_14,
  MR_String Functor_15,
  MR_Word Args_16,
  MR_Box STATE_VARIABLE_State_0_48,
  MR_Box * STATE_VARIABLE_State_49)
{
  {
    MR_bool succeeded;
    MR_Word OpClass_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
    MR_Integer Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) OpClass_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Arg1_30;
          MR_Word Arg2_31;
          MR_Word Var_64;
          MR_Word Var_65;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Arg1_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_64)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Arg2_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 0)));
              Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 1)));
              succeeded = (Var_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          if (succeeded)
          {
            MR_Word LeftAssoc_33;
            MR_Integer LeftPriority_35;
            MR_Word RightAssoc_37;
            MR_Integer RightPriority_38;
            MR_Box STATE_VARIABLE_State_67_67;
            MR_Box STATE_VARIABLE_State_68_68;
            MR_Box STATE_VARIABLE_State_70_70;
            MR_Box STATE_VARIABLE_State_76_76;
            MR_Integer OpPriority_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
            MR_Word Var_34;
            MR_Word Var_36;

            succeeded = (OpPriority_111 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_2(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 40)), STATE_VARIABLE_State_0_48, &STATE_VARIABLE_State_67_67);
            }
            else
              STATE_VARIABLE_State_67_67 = STATE_VARIABLE_State_0_48;
            LeftAssoc_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 0)));
            Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 1)));
            switch (LeftAssoc_33) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  LeftPriority_35 = (OpPriority_111 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                LeftPriority_35 = OpPriority_111;
                break;
            }
            mercury__stream__string_writer__do_write_univ_prio_6_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg1_30, LeftPriority_35, STATE_VARIABLE_State_67_67, &STATE_VARIABLE_State_68_68);
            succeeded = (strcmp(Functor_15, (MR_String) ",") == 0);
            if (succeeded)
            {
              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, Stream_10, ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_State_68_68, &STATE_VARIABLE_State_70_70);
            }
            else
            {
              MR_Box STATE_VARIABLE_State_72_72;
              MR_Box STATE_VARIABLE_State_73_73;

              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, Stream_10, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_68_68, &STATE_VARIABLE_State_72_72);
              mercury__term_io__quote_atom_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15, STATE_VARIABLE_State_72_72, &STATE_VARIABLE_State_73_73);
              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, Stream_10, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_73_73, &STATE_VARIABLE_State_70_70);
            }
            Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 0)));
            RightAssoc_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 1)));
            switch (RightAssoc_37) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  RightPriority_38 = (OpPriority_111 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                RightPriority_38 = OpPriority_111;
                break;
            }
            mercury__stream__string_writer__do_write_univ_prio_6_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg2_31, RightPriority_38, STATE_VARIABLE_State_70_70, &STATE_VARIABLE_State_76_76);
            succeeded = (OpPriority_111 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_3(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 41)), STATE_VARIABLE_State_76_76, STATE_VARIABLE_State_49);
            }
            else
              *STATE_VARIABLE_State_49 = STATE_VARIABLE_State_76_76;
          }
          else
            mercury__stream__string_writer__select_remaining_op_info_and_print_8_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16, STATE_VARIABLE_State_0_48, STATE_VARIABLE_State_49);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Arg_21;
          MR_Word Var_90;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Arg_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = (Var_90 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Integer OpPriority_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word OpAssoc_24;
            MR_Integer NewPriority_25;
            MR_Box STATE_VARIABLE_State_92_92;
            MR_Box STATE_VARIABLE_State_93_93;
            MR_Box STATE_VARIABLE_State_95_95;
            MR_Box STATE_VARIABLE_State_96_96;
            MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));

            succeeded = (OpPriority_23 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_6(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 40)), STATE_VARIABLE_State_0_48, &STATE_VARIABLE_State_92_92);
            }
            else
              STATE_VARIABLE_State_92_92 = STATE_VARIABLE_State_0_48;
            mercury__term_io__quote_atom_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15, STATE_VARIABLE_State_92_92, &STATE_VARIABLE_State_93_93);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, Stream_10, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_93_93, &STATE_VARIABLE_State_95_95);
            OpAssoc_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), OpClass_18, (MR_Integer) 0)));
            switch (OpAssoc_24) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  NewPriority_25 = (OpPriority_23 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                NewPriority_25 = OpPriority_23;
                break;
            }
            mercury__stream__string_writer__do_write_univ_prio_6_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg_21, NewPriority_25, STATE_VARIABLE_State_95_95, &STATE_VARIABLE_State_96_96);
            succeeded = (OpPriority_23 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_7(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 41)), STATE_VARIABLE_State_96_96, STATE_VARIABLE_State_49);
            }
            else
              *STATE_VARIABLE_State_49 = STATE_VARIABLE_State_96_96;
          }
          else
            mercury__stream__string_writer__select_remaining_op_info_and_print_8_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16, STATE_VARIABLE_State_0_48, STATE_VARIABLE_State_49);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Arg1_116;
          MR_Word Arg2_117;
          MR_Word Var_50;
          MR_Word Var_51;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Arg1_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_50)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Arg2_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 0)));
              Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 1)));
              succeeded = (Var_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          if (succeeded)
          {
            MR_Word FirstAssoc_42;
            MR_Integer FirstPriority_44;
            MR_Word SecondAssoc_46;
            MR_Integer SecondPriority_47;
            MR_Box STATE_VARIABLE_State_53_53;
            MR_Box STATE_VARIABLE_State_54_54;
            MR_Box STATE_VARIABLE_State_56_56;
            MR_Box STATE_VARIABLE_State_57_57;
            MR_Box STATE_VARIABLE_State_59_59;
            MR_Box STATE_VARIABLE_State_60_60;
            MR_Integer OpPriority_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
            MR_Word Var_43;
            MR_Word Var_45;

            succeeded = (OpPriority_114 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_0(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 40)), STATE_VARIABLE_State_0_48, &STATE_VARIABLE_State_53_53);
            }
            else
              STATE_VARIABLE_State_53_53 = STATE_VARIABLE_State_0_48;
            mercury__term_io__quote_atom_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15, STATE_VARIABLE_State_53_53, &STATE_VARIABLE_State_54_54);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, Stream_10, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_54_54, &STATE_VARIABLE_State_56_56);
            FirstAssoc_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 0)));
            Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 1)));
            switch (FirstAssoc_42) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  FirstPriority_44 = (OpPriority_114 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                FirstPriority_44 = OpPriority_114;
                break;
            }
            mercury__stream__string_writer__do_write_univ_prio_6_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg1_116, FirstPriority_44, STATE_VARIABLE_State_56_56, &STATE_VARIABLE_State_57_57);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, Stream_10, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_57_57, &STATE_VARIABLE_State_59_59);
            Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 0)));
            SecondAssoc_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 1)));
            switch (SecondAssoc_46) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  SecondPriority_47 = (OpPriority_114 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                SecondPriority_47 = OpPriority_114;
                break;
            }
            mercury__stream__string_writer__do_write_univ_prio_6_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg2_117, SecondPriority_47, STATE_VARIABLE_State_59_59, &STATE_VARIABLE_State_60_60);
            succeeded = (OpPriority_114 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_1(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 41)), STATE_VARIABLE_State_60_60, STATE_VARIABLE_State_49);
            }
            else
              *STATE_VARIABLE_State_49 = STATE_VARIABLE_State_60_60;
          }
          else
            mercury__stream__string_writer__select_remaining_op_info_and_print_8_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16, STATE_VARIABLE_State_0_48, STATE_VARIABLE_State_49);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word PostfixArg_26;
          MR_Word Var_80;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            PostfixArg_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = (Var_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Box STATE_VARIABLE_State_82_82;
            MR_Box STATE_VARIABLE_State_83_83;
            MR_Box STATE_VARIABLE_State_85_85;
            MR_Box STATE_VARIABLE_State_86_86;
            MR_Integer OpPriority_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word OpAssoc_102;
            MR_Integer NewPriority_103;
            MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));

            succeeded = (OpPriority_101 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_4(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 40)), STATE_VARIABLE_State_0_48, &STATE_VARIABLE_State_82_82);
            }
            else
              STATE_VARIABLE_State_82_82 = STATE_VARIABLE_State_0_48;
            OpAssoc_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), OpClass_18, (MR_Integer) 0)));
            switch (OpAssoc_102) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  NewPriority_103 = (OpPriority_101 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                NewPriority_103 = OpPriority_101;
                break;
            }
            mercury__stream__string_writer__do_write_univ_prio_6_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, PostfixArg_26, NewPriority_103, STATE_VARIABLE_State_82_82, &STATE_VARIABLE_State_83_83);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, Stream_10, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_83_83, &STATE_VARIABLE_State_85_85);
            mercury__term_io__quote_atom_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15, STATE_VARIABLE_State_85_85, &STATE_VARIABLE_State_86_86);
            succeeded = (OpPriority_101 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_5(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 41)), STATE_VARIABLE_State_86_86, STATE_VARIABLE_State_49);
            }
            else
              *STATE_VARIABLE_State_49 = STATE_VARIABLE_State_86_86;
          }
          else
            mercury__stream__string_writer__select_remaining_op_info_and_print_8_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16, STATE_VARIABLE_State_0_48, STATE_VARIABLE_State_49);
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__stream__string_writer__write_arg_5_p_0(
  MR_Word TypeClassInfo_for_writer_15,
  MR_Word TypeClassInfo_for_writer_16,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Word X_8,
  MR_Box STATE_VARIABLE_State_0_11,
  MR_Box * STATE_VARIABLE_State_12)
{
  {
    MR_Word TypeInfo_18_18;

{
#define MR_PROC_LABEL mercury__stream__string_writer__write_arg_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_15 ;
	Index =  (MR_Integer) 4 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_18_18  = TypeInfo;
}
    mercury__stream__string_writer__do_write_univ_prio_6_p_0(TypeClassInfo_for_writer_15, TypeClassInfo_for_writer_16, Stream_6, NonCanon_7, X_8, (MR_Integer) 1000, STATE_VARIABLE_State_0_11, STATE_VARIABLE_State_12);
  }
}

static void MR_CALL 
mercury__stream__string_writer__write_list_tail_5_p_0(
  MR_Word TypeClassInfo_for_writer_27,
  MR_Word TypeClassInfo_for_writer_28,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8,
  MR_Box STATE_VARIABLE_State_0_16,
  MR_Box * STATE_VARIABLE_State_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeInfo_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 0)));
    MR_Box Term_10 = (MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 1));
    MR_String Functor_11;
    MR_Word Args_13;
    MR_Integer _Arity_12;
    MR_Word ListHead_14;
    MR_Word ListTail_15;
    MR_Word Var_18;
    MR_Word Var_19;

    /* setup for tailcalls optimized into a loop */
    mercury__deconstruct__deconstruct_5_p_0(TypeInfo_29_29, Term_10, NonCanon_7, &Functor_11, &_Arity_12, &Args_13);
    succeeded = (strcmp(Functor_11, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Args_13)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ListHead_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0)));
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          ListTail_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0)));
          Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1)));
          succeeded = (Var_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_State_21_21;
      MR_Box STATE_VARIABLE_State_22_22;
      MR_Integer ArgPriority_37;
      MR_Box STATE_VARIABLE_State_13_38;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));

      func_0(((MR_Box) TypeClassInfo_for_writer_27), Stream_6, ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_State_0_16, &STATE_VARIABLE_State_21_21);
      mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_3_p_0(&ArgPriority_37, STATE_VARIABLE_State_21_21, &STATE_VARIABLE_State_13_38);
      mercury__stream__string_writer__do_write_univ_prio_6_p_0(TypeClassInfo_for_writer_27, TypeClassInfo_for_writer_28, Stream_6, NonCanon_7, ListHead_14, ArgPriority_37, STATE_VARIABLE_State_13_38, &STATE_VARIABLE_State_22_22);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_Univ_8 = ListTail_15;
        MR_Box next_value_of_STATE_VARIABLE_State_0_16 = STATE_VARIABLE_State_22_22;

        Univ_8 = next_value_of_Univ_8;
        STATE_VARIABLE_State_0_16 = next_value_of_STATE_VARIABLE_State_0_16;
      }
      continue;
    }
    else
    {
      succeeded = (strcmp(Functor_11, (MR_String) "[]") == 0);
      if (succeeded)
        succeeded = (Args_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        *STATE_VARIABLE_State_17 = STATE_VARIABLE_State_0_16;
      else
      {
        MR_Box STATE_VARIABLE_State_25_25;
        MR_Integer Var_48;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));

        func_1(((MR_Box) TypeClassInfo_for_writer_27), Stream_6, ((MR_Box) ((MR_String) " | ")), STATE_VARIABLE_State_0_16, &STATE_VARIABLE_State_25_25);
        Var_48 = ((MR_Integer) 1200 + (MR_Integer) 1);
        mercury__stream__string_writer__do_write_univ_prio_6_p_0(TypeClassInfo_for_writer_27, TypeClassInfo_for_writer_28, Stream_6, NonCanon_7, Univ_8, Var_48, STATE_VARIABLE_State_25_25, STATE_VARIABLE_State_17);
      }
    }
    break;
  }
}

void MR_CALL 
mercury__stream__string_writer__do_write_univ_prio_6_p_0(
  MR_Word TypeClassInfo_for_writer_81,
  MR_Word TypeClassInfo_for_writer_82,
  MR_Box Stream_7,
  MR_Word NonCanon_8,
  MR_Word Univ_9,
  MR_Integer Priority_10,
  MR_Box STATE_VARIABLE_State_0_31,
  MR_Box * STATE_VARIABLE_State_32)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_String String_12;
    MR_Word TypeCtorInfo_83_83 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Box conv0_String_12;

    /* setup for tailcalls optimized into a loop */
    succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_83_83, Univ_9, &conv0_String_12);
    if (succeeded)
    {
      String_12 = ((MR_String) conv0_String_12);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      mercury__term_io__quote_string_4_p_0(TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, String_12, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
    else
    {
      MR_Char Char_13;
      MR_Word TypeCtorInfo_84_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
      MR_Box conv1_Char_13;

      succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_84_84, Univ_9, &conv1_Char_13);
      if (succeeded)
      {
        Char_13 = ((MR_Char) (MR_Word) conv1_Char_13);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_p_in__term_io_0(TypeClassInfo_for_writer_81, Stream_7, Char_13, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
      else
      {
        MR_Integer Int_14;
        MR_Word TypeCtorInfo_85_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Box conv2_Int_14;

        succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_85_85, Univ_9, &conv2_Int_14);
        if (succeeded)
        {
          Int_14 = ((MR_Integer) conv2_Int_14);
          succeeded = MR_TRUE;
        }
        if (succeeded)
          mercury__stream__string_writer__put_int_4_p_0(TypeClassInfo_for_writer_81, Stream_7, Int_14, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
        else
        {
          MR_Unsigned UInt_15;
          MR_Word TypeCtorInfo_86_86 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_uint_0;
          MR_Box conv3_UInt_15;

          succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_86_86, Univ_9, &conv3_UInt_15);
          if (succeeded)
          {
            UInt_15 = ((MR_Unsigned) conv3_UInt_15);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Box STATE_VARIABLE_State_36_36;

            mercury__stream__string_writer__put_uint_4_p_0(TypeClassInfo_for_writer_81, Stream_7, UInt_15, STATE_VARIABLE_State_0_31, &STATE_VARIABLE_State_36_36);
            mercury__stream__string_writer__put_char_4_p_0(TypeClassInfo_for_writer_81, Stream_7, (MR_Char) 117, STATE_VARIABLE_State_36_36, STATE_VARIABLE_State_32);
          }
          else
          {
            MR_Float Float_16;
            MR_Word TypeCtorInfo_87_87 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
            MR_Box conv4_Float_16;

            succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_87_87, Univ_9, &conv4_Float_16);
            if (succeeded)
            {
              Float_16 = MR_unbox_float(conv4_Float_16);
              succeeded = MR_TRUE;
            }
            if (succeeded)
              mercury__stream__string_writer__put_float_4_p_0(TypeClassInfo_for_writer_81, Stream_7, Float_16, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
            else
            {
              MR_Box Bitmap_17;
              MR_Word TypeCtorInfo_88_88 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
              MR_Box conv5_Bitmap_17;

              succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_88_88, Univ_9, &conv5_Bitmap_17);
              if (succeeded)
              {
                Bitmap_17 = ((MR_Box) conv5_Bitmap_17);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Box STATE_VARIABLE_State_41_41;
                MR_String Var_42;
                MR_Box STATE_VARIABLE_State_43_43;

                mercury__stream__string_writer__put_char_4_p_0(TypeClassInfo_for_writer_81, Stream_7, (MR_Char) 34, STATE_VARIABLE_State_0_31, &STATE_VARIABLE_State_41_41);
                Var_42 = mercury__bitmap__to_string_1_f_0(Bitmap_17);
                mercury__stream__put_4_p_0(TypeClassInfo_for_writer_81, Stream_7, ((MR_Box) (Var_42)), STATE_VARIABLE_State_41_41, &STATE_VARIABLE_State_43_43);
                mercury__stream__string_writer__put_char_4_p_0(TypeClassInfo_for_writer_81, Stream_7, (MR_Char) 34, STATE_VARIABLE_State_43_43, STATE_VARIABLE_State_32);
              }
              else
              {
                MR_Word TypeDesc_18;
                MR_Word TypeCtorInfo_89_89 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
                MR_Box conv6_TypeDesc_18;

                succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_89_89, Univ_9, &conv6_TypeDesc_18);
                if (succeeded)
                {
                  TypeDesc_18 = ((MR_Word) conv6_TypeDesc_18);
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                  mercury__stream__string_writer__write_type_desc_4_p_0(TypeClassInfo_for_writer_81, Stream_7, TypeDesc_18, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
                else
                {
                  MR_Word TypeCtorDesc_19;
                  MR_Word TypeCtorInfo_90_90 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0;
                  MR_Box conv7_TypeCtorDesc_19;

                  succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_90_90, Univ_9, &conv7_TypeCtorDesc_19);
                  if (succeeded)
                  {
                    TypeCtorDesc_19 = ((MR_Word) conv7_TypeCtorDesc_19);
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                    mercury__stream__string_writer__write_type_ctor_desc_4_p_0(TypeClassInfo_for_writer_81, Stream_7, TypeCtorDesc_19, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
                  else
                  {
                    MR_Word C_Pointer_20;
                    MR_Word TypeCtorInfo_91_91 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_c_pointer_0;
                    MR_Box conv8_C_Pointer_20;

                    succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_91_91, Univ_9, &conv8_C_Pointer_20);
                    if (succeeded)
                    {
                      C_Pointer_20 = ((MR_Word) conv8_C_Pointer_20);
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                      mercury__stream__string_writer__write_c_pointer_4_p_0(TypeClassInfo_for_writer_81, Stream_7, C_Pointer_20, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
                    else
                    {
                      MR_Word StreamInfo_22;
                      MR_Word TypeInfo_92_92;
                      MR_Word StreamDB_21;
                      MR_Box Var_49;

                      mercury__io__get_stream_db_with_locking_1_p_0(&StreamDB_21);
                      Var_49 = mercury__univ__univ_value_1_f_0(&TypeInfo_92_92, Univ_9);
                      succeeded = mercury__io__get_io_stream_info_2_f_0(TypeInfo_92_92, StreamDB_21, Var_49, &StreamInfo_22);
                      if (succeeded)
                      {
                        MR_Word TypeCtorInfo_93_93 = (MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0;
                        MR_Word StreamInfoUniv_23;

                        mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_93_93, ((MR_Box) (StreamInfo_22)), &StreamInfoUniv_23);
                        /* direct tailcall eliminated */
                        {
                          MR_Word next_value_of_Univ_9 = StreamInfoUniv_23;

                          Univ_9 = next_value_of_Univ_9;
                        }
                        continue;
                      }
                      else
                      {
                        MR_Word ElemType_26;
                        MR_Word TypeCtor_24;
                        MR_Word ArgTypes_25;
                        MR_Word Var_51;
                        MR_Word Var_52;
                        MR_String Var_53;
                        MR_String Var_54;

                        Var_51 = mercury__univ__univ_type_1_f_0(Univ_9);
                        mercury__type_desc__type_ctor_and_args_3_p_0(Var_51, &TypeCtor_24, &ArgTypes_25);
                        succeeded = ((MR_tag((MR_Word) ArgTypes_25)) == (MR_mktag((MR_Integer) 1)));
                        if (succeeded)
                        {
                          ElemType_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_25, (MR_Integer) 0)));
                          Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_25, (MR_Integer) 1)));
                          succeeded = (Var_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (succeeded)
                          {
                            Var_53 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_24);
                            succeeded = (strcmp(Var_53, (MR_String) "array") == 0);
                            if (succeeded)
                            {
                              Var_54 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_24);
                              succeeded = (strcmp(Var_54, (MR_String) "array") == 0);
                            }
                          }
                        }
                        if (succeeded)
                        {
                          MR_Word TypeInfo_94_94;
                          MR_Word TypeCtorInfo_95_95;
                          MR_Word TypeInfo_96_96;
                          MR_ArrayPtr Array_28;
                          MR_Box Elem_27;
                          MR_Box conv9_Array_28;

                          mercury__type_desc__has_type_2_p_0(&TypeInfo_94_94, ElemType_26);
                          TypeCtorInfo_95_95 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
                          {
                            TypeInfo_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), TypeInfo_96_96, 0) = ((MR_Box) (TypeCtorInfo_95_95));
                            MR_hl_field(MR_mktag(0), TypeInfo_96_96, 1) = ((MR_Box) (TypeInfo_94_94));
                          }
                          mercury__univ__det_univ_to_type_2_p_0(TypeInfo_96_96, Univ_9, &conv9_Array_28);
                          Array_28 = ((MR_ArrayPtr) conv9_Array_28);
                          mercury__stream__string_writer__write_array_4_p_0(TypeInfo_94_94, TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, (MR_ArrayPtr) Array_28, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
                        }
                        else
                        {
                          MR_Word ElemType_79;
                          MR_Word Var_56;
                          MR_Word Var_57;
                          MR_String Var_58;
                          MR_String Var_59;
                          MR_Word TypeCtor_67;
                          MR_Word ArgTypes_68;

                          Var_56 = mercury__univ__univ_type_1_f_0(Univ_9);
                          mercury__type_desc__type_ctor_and_args_3_p_0(Var_56, &TypeCtor_67, &ArgTypes_68);
                          succeeded = ((MR_tag((MR_Word) ArgTypes_68)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            ElemType_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_68, (MR_Integer) 0)));
                            Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_68, (MR_Integer) 1)));
                            succeeded = (Var_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_58 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_67);
                              succeeded = (strcmp(Var_58, (MR_String) "version_array") == 0);
                              if (succeeded)
                              {
                                Var_59 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_67);
                                succeeded = (strcmp(Var_59, (MR_String) "version_array") == 0);
                              }
                            }
                          }
                          if (succeeded)
                          {
                            MR_Word TypeInfo_97_97;
                            MR_Word TypeCtorInfo_98_98;
                            MR_Word TypeInfo_99_99;
                            MR_Box VersionArray_29;
                            MR_Box Elem_69;
                            MR_Box conv10_VersionArray_29;

                            mercury__type_desc__has_type_2_p_0(&TypeInfo_97_97, ElemType_79);
                            TypeCtorInfo_98_98 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
                            {
                              TypeInfo_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), TypeInfo_99_99, 0) = ((MR_Box) (TypeCtorInfo_98_98));
                              MR_hl_field(MR_mktag(0), TypeInfo_99_99, 1) = ((MR_Box) (TypeInfo_97_97));
                            }
                            mercury__univ__det_univ_to_type_2_p_0(TypeInfo_99_99, Univ_9, &conv10_VersionArray_29);
                            VersionArray_29 = ((MR_Box) conv10_VersionArray_29);
                            mercury__stream__string_writer__write_version_array_4_p_0(TypeInfo_97_97, TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, VersionArray_29, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
                          }
                          else
                          {
                            MR_Word Var_61;
                            MR_Word Var_62;
                            MR_String Var_63;
                            MR_String Var_64;
                            MR_Word TypeCtor_70;
                            MR_Word ArgTypes_71;
                            MR_Word ElemType_75;

                            Var_61 = mercury__univ__univ_type_1_f_0(Univ_9);
                            mercury__type_desc__type_ctor_and_args_3_p_0(Var_61, &TypeCtor_70, &ArgTypes_71);
                            succeeded = ((MR_tag((MR_Word) ArgTypes_71)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              ElemType_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_71, (MR_Integer) 0)));
                              Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_71, (MR_Integer) 1)));
                              succeeded = (Var_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                Var_63 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_70);
                                succeeded = (strcmp(Var_63, (MR_String) "type_info") == 0);
                                if (succeeded)
                                {
                                  Var_64 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_70);
                                  succeeded = (strcmp(Var_64, (MR_String) "private_builtin") == 0);
                                }
                              }
                            }
                            if (succeeded)
                            {
                              MR_Word PrivateBuiltinTypeInfo_30;
                              MR_Word TypeCtorInfo_101_101 = (MR_Word) &mercury__private_builtin__private_builtin__type_ctor_info_type_info_0;
                              MR_Box conv11_PrivateBuiltinTypeInfo_30;

                              mercury__univ__det_univ_to_type_2_p_0(TypeCtorInfo_101_101, Univ_9, &conv11_PrivateBuiltinTypeInfo_30);
                              PrivateBuiltinTypeInfo_30 = ((MR_Word) conv11_PrivateBuiltinTypeInfo_30);
                              mercury__stream__string_writer__write_private_builtin_type_info_4_p_0(TypeClassInfo_for_writer_81, Stream_7, PrivateBuiltinTypeInfo_30, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
                            }
                            else
                              mercury__stream__string_writer__write_ordinary_term_6_p_0(TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, NonCanon_8, Univ_9, Priority_10, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
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
    break;
  }
}

static void MR_CALL 
mercury__stream__string_writer__write_ordinary_term_6_p_0(
  MR_Word TypeClassInfo_for_writer_50,
  MR_Word TypeClassInfo_for_writer_51,
  MR_Box Stream_7,
  MR_Word NonCanon_8,
  MR_Word Univ_9,
  MR_Integer Priority_10,
  MR_Box STATE_VARIABLE_State_0_24,
  MR_Box * STATE_VARIABLE_State_25)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 0)));
    MR_Box Term_12 = (MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 1));
    MR_String Functor_13;
    MR_Word Args_15;
    MR_Integer _Arity_14;
    MR_Word ListHead_16;
    MR_Word ListTail_17;
    MR_Word Var_26;
    MR_Word Var_27;

    mercury__deconstruct__deconstruct_5_p_0(TypeInfo_52_52, Term_12, NonCanon_8, &Functor_13, &_Arity_14, &Args_15);
    succeeded = (strcmp(Functor_13, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ListHead_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
        Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          ListTail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0)));
          Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1)));
          succeeded = (Var_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_State_29_29;
      MR_Box STATE_VARIABLE_State_30_30;
      MR_Box STATE_VARIABLE_State_31_31;
      MR_Integer ArgPriority_61;
      MR_Box STATE_VARIABLE_State_13_62;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      func_0(((MR_Box) TypeClassInfo_for_writer_51), Stream_7, ((MR_Box) (MR_Word) ((MR_Char) 91)), STATE_VARIABLE_State_0_24, &STATE_VARIABLE_State_29_29);
      mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_3_p_0(&ArgPriority_61, STATE_VARIABLE_State_29_29, &STATE_VARIABLE_State_13_62);
      mercury__stream__string_writer__do_write_univ_prio_6_p_0(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, ListHead_16, ArgPriority_61, STATE_VARIABLE_State_13_62, &STATE_VARIABLE_State_30_30);
      mercury__stream__string_writer__write_list_tail_5_p_0(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, ListTail_17, STATE_VARIABLE_State_30_30, &STATE_VARIABLE_State_31_31);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
      func_1(((MR_Box) TypeClassInfo_for_writer_51), Stream_7, ((MR_Box) (MR_Word) ((MR_Char) 93)), STATE_VARIABLE_State_31_31, STATE_VARIABLE_State_25);
    }
    else
    {
      succeeded = (strcmp(Functor_13, (MR_String) "[]") == 0);
      if (succeeded)
        succeeded = (Args_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5)));

        func_2(((MR_Box) TypeClassInfo_for_writer_50), Stream_7, ((MR_Box) ((MR_String) "[]")), STATE_VARIABLE_State_0_24, STATE_VARIABLE_State_25);
      }
      else
      {
        MR_Word BracedHead_18;
        MR_Word BracedTail_19;

        succeeded = (strcmp(Functor_13, (MR_String) "{}") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            BracedHead_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
            BracedTail_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
          }
        }
        if (succeeded)
          if ((BracedTail_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Box STATE_VARIABLE_State_43_43;
            MR_Box STATE_VARIABLE_State_44_44;
            MR_Integer Var_72;
            void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5)));
            void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            func_3(((MR_Box) TypeClassInfo_for_writer_50), Stream_7, ((MR_Box) ((MR_String) "{ ")), STATE_VARIABLE_State_0_24, &STATE_VARIABLE_State_43_43);
            Var_72 = ((MR_Integer) 1200 + (MR_Integer) 1);
            mercury__stream__string_writer__do_write_univ_prio_6_p_0(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, BracedHead_18, Var_72, STATE_VARIABLE_State_43_43, &STATE_VARIABLE_State_44_44);
            func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5)));
            func_4(((MR_Box) TypeClassInfo_for_writer_50), Stream_7, ((MR_Box) ((MR_String) " }")), STATE_VARIABLE_State_44_44, STATE_VARIABLE_State_25);
          }
          else
          {
            MR_Box STATE_VARIABLE_State_37_37;
            MR_Box STATE_VARIABLE_State_38_38;
            MR_Box STATE_VARIABLE_State_39_39;
            MR_Integer ArgPriority_84;
            MR_Box STATE_VARIABLE_State_13_85;
            void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
            void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            func_5(((MR_Box) TypeClassInfo_for_writer_51), Stream_7, ((MR_Box) (MR_Word) ((MR_Char) 123)), STATE_VARIABLE_State_0_24, &STATE_VARIABLE_State_37_37);
            mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_3_p_0(&ArgPriority_84, STATE_VARIABLE_State_37_37, &STATE_VARIABLE_State_13_85);
            mercury__stream__string_writer__do_write_univ_prio_6_p_0(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, BracedHead_18, ArgPriority_84, STATE_VARIABLE_State_13_85, &STATE_VARIABLE_State_38_38);
            mercury__stream__string_writer__write_term_args_5_p_0(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, BracedTail_19, STATE_VARIABLE_State_38_38, &STATE_VARIABLE_State_39_39);
            func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
            func_6(((MR_Box) TypeClassInfo_for_writer_51), Stream_7, ((MR_Box) (MR_Word) ((MR_Char) 125)), STATE_VARIABLE_State_39_39, STATE_VARIABLE_State_25);
          }
        else
        {
          MR_Word FirstOpInfo_22;
          MR_Word OtherOpInfos_23;
          MR_Word TypeClassInfo_for_op_table_53;
          MR_bool MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
          MR_Box conv9_FirstOpInfo_22;
          MR_Box conv8_OtherOpInfos_23;

          TypeClassInfo_for_op_table_53 = (MR_Word) &mercury__stream__string_writer_scalar_common_1[0];
          func_7 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_53, (MR_Integer) 0)), (MR_Integer) 10)));
          succeeded = func_7(((MR_Box) TypeClassInfo_for_op_table_53), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Functor_13)), &conv9_FirstOpInfo_22, &conv8_OtherOpInfos_23);
          if (succeeded)
          {
            FirstOpInfo_22 = ((MR_Word) conv9_FirstOpInfo_22);
            OtherOpInfos_23 = ((MR_Word) conv8_OtherOpInfos_23);
            succeeded = MR_TRUE;
          }
          if (succeeded)
            mercury__stream__string_writer__select_op_info_and_print_9_p_0(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, FirstOpInfo_22, OtherOpInfos_23, Priority_10, Functor_13, Args_15, STATE_VARIABLE_State_0_24, STATE_VARIABLE_State_25);
          else
          {
            MR_Box STATE_VARIABLE_State_17_99;

            mercury__term_io__quote_atom_agt_5_p_0(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, Functor_13, (MR_Integer) 0, STATE_VARIABLE_State_0_24, &STATE_VARIABLE_State_17_99);
            if ((Args_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *STATE_VARIABLE_State_25 = STATE_VARIABLE_State_17_99;
            else
            {
              MR_Word X_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
              MR_Word Xs_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
              MR_Box STATE_VARIABLE_State_19_101;
              MR_Box STATE_VARIABLE_State_20_102;
              MR_Box STATE_VARIABLE_State_21_103;

              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_51, Stream_7, ((MR_Box) (MR_Word) ((MR_Char) 40)), STATE_VARIABLE_State_17_99, &STATE_VARIABLE_State_19_101);
              mercury__stream__string_writer__write_arg_5_p_0(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, X_96, STATE_VARIABLE_State_19_101, &STATE_VARIABLE_State_20_102);
              mercury__stream__string_writer__write_term_args_5_p_0(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, Xs_97, STATE_VARIABLE_State_20_102, &STATE_VARIABLE_State_21_103);
              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_51, Stream_7, ((MR_Box) (MR_Word) ((MR_Char) 41)), STATE_VARIABLE_State_21_103, STATE_VARIABLE_State_25);
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
mercury__stream__string_writer__write_term_args_5_p_0(
  MR_Word TypeClassInfo_for_writer_22,
  MR_Word TypeClassInfo_for_writer_23,
  MR_Box HeadVar__1_1,
  MR_Word NonCanon_2,
  MR_Word HeadVar__3_3,
  MR_Box STATE_VARIABLE_State_0_4,
  MR_Box * STATE_VARIABLE_State_5)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_State_5 = STATE_VARIABLE_State_0_4;
    else
    {
      MR_Word X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Xs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Box STATE_VARIABLE_State_19_19;
      MR_Box STATE_VARIABLE_State_20_20;
      MR_Integer ArgPriority_30;
      MR_Box STATE_VARIABLE_State_13_31;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_22, (MR_Integer) 0)), (MR_Integer) 5)));

      func_0(((MR_Box) TypeClassInfo_for_writer_22), HeadVar__1_1, ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_State_0_4, &STATE_VARIABLE_State_19_19);
      mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_3_p_0(&ArgPriority_30, STATE_VARIABLE_State_19_19, &STATE_VARIABLE_State_13_31);
      mercury__stream__string_writer__do_write_univ_prio_6_p_0(TypeClassInfo_for_writer_22, TypeClassInfo_for_writer_23, HeadVar__1_1, NonCanon_2, X_13, ArgPriority_30, STATE_VARIABLE_State_13_31, &STATE_VARIABLE_State_20_20);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__3_3 = Xs_14;
        MR_Box next_value_of_STATE_VARIABLE_State_0_4 = STATE_VARIABLE_State_20_20;

        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_State_0_4 = next_value_of_STATE_VARIABLE_State_0_4;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__stream__string_writer__print_cc_4_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word TypeClassInfo_for_writer_12,
  MR_Word TypeClassInfo_for_writer_13,
  MR_Box Stream_5,
  MR_Box Term_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  {
    mercury__stream__string_writer__print_5_p_2(TypeInfo_for_T_14, TypeClassInfo_for_writer_12, TypeClassInfo_for_writer_13, Stream_5, (MR_Integer) 2, Term_6, STATE_VARIABLE_State_0_8, STATE_VARIABLE_State_9);
  }
}

void MR_CALL 
mercury__stream__string_writer__print_5_p_2(
  MR_Word TypeInfo_for_T_36,
  MR_Word TypeClassInfo_for_writer_34,
  MR_Word TypeClassInfo_for_writer_35,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8,
  MR_Box STATE_VARIABLE_State_0_17,
  MR_Box * STATE_VARIABLE_State_18)
{
  {
    MR_bool succeeded;
    MR_String String_10;
    MR_Word TypeCtorInfo_37_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Box conv0_String_10;

    succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_36, TypeCtorInfo_37_37, Term_8, &conv0_String_10);
    if (succeeded)
    {
      String_10 = ((MR_String) conv0_String_10);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));

      func_1(((MR_Box) TypeClassInfo_for_writer_34), Stream_6, ((MR_Box) (String_10)), STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
    }
    else
    {
      MR_Char Char_11;
      MR_Word TypeCtorInfo_38_38 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
      MR_Box conv2_Char_11;

      succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_36, TypeCtorInfo_38_38, Term_8, &conv2_Char_11);
      if (succeeded)
      {
        Char_11 = ((MR_Char) (MR_Word) conv2_Char_11);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_35, (MR_Integer) 0)), (MR_Integer) 5)));

        func_3(((MR_Box) TypeClassInfo_for_writer_35), Stream_6, ((MR_Box) (MR_Word) (Char_11)), STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
      }
      else
      {
        MR_Unsigned UInt_12;
        MR_Word TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_uint_0;
        MR_Box conv4_UInt_12;

        succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_36, TypeCtorInfo_39_39, Term_8, &conv4_UInt_12);
        if (succeeded)
        {
          UInt_12 = ((MR_Unsigned) conv4_UInt_12);
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_String Var_24;
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__stream__string_writer__print_5_p_2

	MR_Unsigned U;
	MR_String Str;

	U =  UInt_12 ;
		{

    char buffer[21];
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "u", U);
    MR_allocate_aligned_string_msg(Str, strlen(buffer), MR_ALLOC_ID);
    strcpy(Str, buffer);


		;}
#undef MR_PROC_LABEL
	 Var_24  = Str;
}
          func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
          func_5(((MR_Box) TypeClassInfo_for_writer_34), Stream_6, ((MR_Box) (Var_24)), STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
        }
        else
        {
          MR_Word OrigUniv_13;
          MR_Word TypeCtorInfo_40_40 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
          MR_Box conv6_OrigUniv_13;

          succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_36, TypeCtorInfo_40_40, Term_8, &conv6_OrigUniv_13);
          if (succeeded)
          {
            OrigUniv_13 = ((MR_Word) conv6_OrigUniv_13);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Integer Var_65 = ((MR_Integer) 1200 + (MR_Integer) 1);

            mercury__stream__string_writer__do_write_univ_prio_6_p_1(TypeClassInfo_for_writer_34, TypeClassInfo_for_writer_35, Stream_6, (MR_Integer) 1, OrigUniv_13, Var_65, STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
          }
          else
          {
            MR_Word BigInt_14;
            MR_Word TypeCtorInfo_41_41 = (MR_Word) &mercury__integer__integer__type_ctor_info_integer_0;
            MR_Box conv7_BigInt_14;

            succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_36, TypeCtorInfo_41_41, Term_8, &conv7_BigInt_14);
            if (succeeded)
            {
              BigInt_14 = ((MR_Word) conv7_BigInt_14);
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_String Var_27;
              void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              Var_27 = mercury__integer__to_base_string_2_f_0(BigInt_14, (MR_Integer) 10);
              func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
              func_8(((MR_Box) TypeClassInfo_for_writer_34), Stream_6, ((MR_Box) (Var_27)), STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
            }
            else
            {
              MR_Word DateTime_15;
              MR_Word TypeCtorInfo_42_42 = (MR_Word) &mercury__calendar__calendar__type_ctor_info_date_0;
              MR_Box conv9_DateTime_15;

              succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_36, TypeCtorInfo_42_42, Term_8, &conv9_DateTime_15);
              if (succeeded)
              {
                DateTime_15 = ((MR_Word) conv9_DateTime_15);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_String Var_29;
                void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                Var_29 = mercury__calendar__date_to_string_1_f_0(DateTime_15);
                func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
                func_10(((MR_Box) TypeClassInfo_for_writer_34), Stream_6, ((MR_Box) (Var_29)), STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
              }
              else
              {
                MR_Word Duration_16;
                MR_Word TypeCtorInfo_43_43 = (MR_Word) &mercury__calendar__calendar__type_ctor_info_duration_0;
                MR_Box conv11_Duration_16;

                succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_36, TypeCtorInfo_43_43, Term_8, &conv11_Duration_16);
                if (succeeded)
                {
                  Duration_16 = ((MR_Word) conv11_Duration_16);
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_String Var_31;
                  void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                  Var_31 = mercury__calendar__duration_to_string_1_f_0(Duration_16);
                  func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
                  func_12(((MR_Box) TypeClassInfo_for_writer_34), Stream_6, ((MR_Box) (Var_31)), STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
                }
                else
                  mercury__stream__string_writer__print_quoted_5_p_2(TypeInfo_for_T_36, TypeClassInfo_for_writer_34, TypeClassInfo_for_writer_35, Stream_6, NonCanon_7, Term_8, STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
mercury__stream__string_writer__print_quoted_5_p_2(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeClassInfo_for_writer_13,
  MR_Word TypeClassInfo_for_writer_14,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8,
  MR_Box STATE_VARIABLE_State_0_10,
  MR_Box * STATE_VARIABLE_State_11)
{
  {
    MR_Word Univ_22;
    MR_Integer Var_30;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_15, Term_8, &Univ_22);
    Var_30 = ((MR_Integer) 1200 + (MR_Integer) 1);
    mercury__stream__string_writer__do_write_univ_prio_6_p_2(TypeClassInfo_for_writer_13, TypeClassInfo_for_writer_14, Stream_6, NonCanon_7, Univ_22, Var_30, STATE_VARIABLE_State_0_10, STATE_VARIABLE_State_11);
  }
}

static void MR_CALL 
mercury__stream__string_writer__write_arg_5_p_2(
  MR_Word TypeClassInfo_for_writer_15,
  MR_Word TypeClassInfo_for_writer_16,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Word X_8,
  MR_Box STATE_VARIABLE_State_0_11,
  MR_Box * STATE_VARIABLE_State_12)
{
  {
    MR_Word TypeInfo_18_18;

{
#define MR_PROC_LABEL mercury__stream__string_writer__write_arg_5_p_2

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_15 ;
	Index =  (MR_Integer) 4 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_18_18  = TypeInfo;
}
    mercury__stream__string_writer__do_write_univ_prio_6_p_2(TypeClassInfo_for_writer_15, TypeClassInfo_for_writer_16, Stream_6, NonCanon_7, X_8, (MR_Integer) 1000, STATE_VARIABLE_State_0_11, STATE_VARIABLE_State_12);
  }
}

static void MR_CALL 
mercury__stream__string_writer__write_list_tail_5_p_2(
  MR_Word TypeClassInfo_for_writer_27,
  MR_Word TypeClassInfo_for_writer_28,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8,
  MR_Box STATE_VARIABLE_State_0_16,
  MR_Box * STATE_VARIABLE_State_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeInfo_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 0)));
    MR_Box Term_10 = (MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 1));
    MR_String Functor_11;
    MR_Word Args_13;
    MR_Integer _Arity_12;
    MR_Word ListHead_14;
    MR_Word ListTail_15;
    MR_Word Var_18;
    MR_Word Var_19;

    /* setup for tailcalls optimized into a loop */
    mercury__deconstruct__deconstruct_5_p_2(TypeInfo_29_29, Term_10, NonCanon_7, &Functor_11, &_Arity_12, &Args_13);
    succeeded = (strcmp(Functor_11, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Args_13)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ListHead_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0)));
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          ListTail_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0)));
          Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1)));
          succeeded = (Var_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_State_21_21;
      MR_Box STATE_VARIABLE_State_22_22;
      MR_Integer ArgPriority_37;
      MR_Box STATE_VARIABLE_State_13_38;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));

      func_0(((MR_Box) TypeClassInfo_for_writer_27), Stream_6, ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_State_0_16, &STATE_VARIABLE_State_21_21);
      mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_3_p_0(&ArgPriority_37, STATE_VARIABLE_State_21_21, &STATE_VARIABLE_State_13_38);
      mercury__stream__string_writer__do_write_univ_prio_6_p_2(TypeClassInfo_for_writer_27, TypeClassInfo_for_writer_28, Stream_6, NonCanon_7, ListHead_14, ArgPriority_37, STATE_VARIABLE_State_13_38, &STATE_VARIABLE_State_22_22);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_Univ_8 = ListTail_15;
        MR_Box next_value_of_STATE_VARIABLE_State_0_16 = STATE_VARIABLE_State_22_22;

        Univ_8 = next_value_of_Univ_8;
        STATE_VARIABLE_State_0_16 = next_value_of_STATE_VARIABLE_State_0_16;
      }
      continue;
    }
    else
    {
      succeeded = (strcmp(Functor_11, (MR_String) "[]") == 0);
      if (succeeded)
        succeeded = (Args_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        *STATE_VARIABLE_State_17 = STATE_VARIABLE_State_0_16;
      else
      {
        MR_Box STATE_VARIABLE_State_25_25;
        MR_Integer Var_48;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));

        func_1(((MR_Box) TypeClassInfo_for_writer_27), Stream_6, ((MR_Box) ((MR_String) " | ")), STATE_VARIABLE_State_0_16, &STATE_VARIABLE_State_25_25);
        Var_48 = ((MR_Integer) 1200 + (MR_Integer) 1);
        mercury__stream__string_writer__do_write_univ_prio_6_p_2(TypeClassInfo_for_writer_27, TypeClassInfo_for_writer_28, Stream_6, NonCanon_7, Univ_8, Var_48, STATE_VARIABLE_State_25_25, STATE_VARIABLE_State_17);
      }
    }
    break;
  }
}

void MR_CALL 
mercury__stream__string_writer__do_write_univ_prio_6_p_2(
  MR_Word TypeClassInfo_for_writer_81,
  MR_Word TypeClassInfo_for_writer_82,
  MR_Box Stream_7,
  MR_Word NonCanon_8,
  MR_Word Univ_9,
  MR_Integer Priority_10,
  MR_Box STATE_VARIABLE_State_0_31,
  MR_Box * STATE_VARIABLE_State_32)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_String String_12;
    MR_Word TypeCtorInfo_83_83 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Box conv0_String_12;

    /* setup for tailcalls optimized into a loop */
    succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_83_83, Univ_9, &conv0_String_12);
    if (succeeded)
    {
      String_12 = ((MR_String) conv0_String_12);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      mercury__term_io__quote_string_4_p_0(TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, String_12, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
    else
    {
      MR_Char Char_13;
      MR_Word TypeCtorInfo_84_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
      MR_Box conv1_Char_13;

      succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_84_84, Univ_9, &conv1_Char_13);
      if (succeeded)
      {
        Char_13 = ((MR_Char) (MR_Word) conv1_Char_13);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_p_in__term_io_0(TypeClassInfo_for_writer_81, Stream_7, Char_13, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
      else
      {
        MR_Integer Int_14;
        MR_Word TypeCtorInfo_85_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Box conv2_Int_14;

        succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_85_85, Univ_9, &conv2_Int_14);
        if (succeeded)
        {
          Int_14 = ((MR_Integer) conv2_Int_14);
          succeeded = MR_TRUE;
        }
        if (succeeded)
          mercury__stream__string_writer__put_int_4_p_0(TypeClassInfo_for_writer_81, Stream_7, Int_14, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
        else
        {
          MR_Unsigned UInt_15;
          MR_Word TypeCtorInfo_86_86 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_uint_0;
          MR_Box conv3_UInt_15;

          succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_86_86, Univ_9, &conv3_UInt_15);
          if (succeeded)
          {
            UInt_15 = ((MR_Unsigned) conv3_UInt_15);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Box STATE_VARIABLE_State_36_36;

            mercury__stream__string_writer__put_uint_4_p_0(TypeClassInfo_for_writer_81, Stream_7, UInt_15, STATE_VARIABLE_State_0_31, &STATE_VARIABLE_State_36_36);
            mercury__stream__string_writer__put_char_4_p_0(TypeClassInfo_for_writer_81, Stream_7, (MR_Char) 117, STATE_VARIABLE_State_36_36, STATE_VARIABLE_State_32);
          }
          else
          {
            MR_Float Float_16;
            MR_Word TypeCtorInfo_87_87 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
            MR_Box conv4_Float_16;

            succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_87_87, Univ_9, &conv4_Float_16);
            if (succeeded)
            {
              Float_16 = MR_unbox_float(conv4_Float_16);
              succeeded = MR_TRUE;
            }
            if (succeeded)
              mercury__stream__string_writer__put_float_4_p_0(TypeClassInfo_for_writer_81, Stream_7, Float_16, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
            else
            {
              MR_Box Bitmap_17;
              MR_Word TypeCtorInfo_88_88 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
              MR_Box conv5_Bitmap_17;

              succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_88_88, Univ_9, &conv5_Bitmap_17);
              if (succeeded)
              {
                Bitmap_17 = ((MR_Box) conv5_Bitmap_17);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Box STATE_VARIABLE_State_41_41;
                MR_String Var_42;
                MR_Box STATE_VARIABLE_State_43_43;

                mercury__stream__string_writer__put_char_4_p_0(TypeClassInfo_for_writer_81, Stream_7, (MR_Char) 34, STATE_VARIABLE_State_0_31, &STATE_VARIABLE_State_41_41);
                Var_42 = mercury__bitmap__to_string_1_f_0(Bitmap_17);
                mercury__stream__put_4_p_0(TypeClassInfo_for_writer_81, Stream_7, ((MR_Box) (Var_42)), STATE_VARIABLE_State_41_41, &STATE_VARIABLE_State_43_43);
                mercury__stream__string_writer__put_char_4_p_0(TypeClassInfo_for_writer_81, Stream_7, (MR_Char) 34, STATE_VARIABLE_State_43_43, STATE_VARIABLE_State_32);
              }
              else
              {
                MR_Word TypeDesc_18;
                MR_Word TypeCtorInfo_89_89 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
                MR_Box conv6_TypeDesc_18;

                succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_89_89, Univ_9, &conv6_TypeDesc_18);
                if (succeeded)
                {
                  TypeDesc_18 = ((MR_Word) conv6_TypeDesc_18);
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                  mercury__stream__string_writer__write_type_desc_4_p_0(TypeClassInfo_for_writer_81, Stream_7, TypeDesc_18, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
                else
                {
                  MR_Word TypeCtorDesc_19;
                  MR_Word TypeCtorInfo_90_90 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0;
                  MR_Box conv7_TypeCtorDesc_19;

                  succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_90_90, Univ_9, &conv7_TypeCtorDesc_19);
                  if (succeeded)
                  {
                    TypeCtorDesc_19 = ((MR_Word) conv7_TypeCtorDesc_19);
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                    mercury__stream__string_writer__write_type_ctor_desc_4_p_0(TypeClassInfo_for_writer_81, Stream_7, TypeCtorDesc_19, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
                  else
                  {
                    MR_Word C_Pointer_20;
                    MR_Word TypeCtorInfo_91_91 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_c_pointer_0;
                    MR_Box conv8_C_Pointer_20;

                    succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_91_91, Univ_9, &conv8_C_Pointer_20);
                    if (succeeded)
                    {
                      C_Pointer_20 = ((MR_Word) conv8_C_Pointer_20);
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                      mercury__stream__string_writer__write_c_pointer_4_p_0(TypeClassInfo_for_writer_81, Stream_7, C_Pointer_20, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
                    else
                    {
                      MR_Word StreamInfo_22;
                      MR_Word TypeInfo_92_92;
                      MR_Word StreamDB_21;
                      MR_Box Var_49;

                      mercury__io__get_stream_db_with_locking_1_p_0(&StreamDB_21);
                      Var_49 = mercury__univ__univ_value_1_f_0(&TypeInfo_92_92, Univ_9);
                      succeeded = mercury__io__get_io_stream_info_2_f_0(TypeInfo_92_92, StreamDB_21, Var_49, &StreamInfo_22);
                      if (succeeded)
                      {
                        MR_Word TypeCtorInfo_93_93 = (MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0;
                        MR_Word StreamInfoUniv_23;

                        mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_93_93, ((MR_Box) (StreamInfo_22)), &StreamInfoUniv_23);
                        /* direct tailcall eliminated */
                        {
                          MR_Word next_value_of_Univ_9 = StreamInfoUniv_23;

                          Univ_9 = next_value_of_Univ_9;
                        }
                        continue;
                      }
                      else
                      {
                        MR_Word ElemType_26;
                        MR_Word TypeCtor_24;
                        MR_Word ArgTypes_25;
                        MR_Word Var_51;
                        MR_Word Var_52;
                        MR_String Var_53;
                        MR_String Var_54;

                        Var_51 = mercury__univ__univ_type_1_f_0(Univ_9);
                        mercury__type_desc__type_ctor_and_args_3_p_0(Var_51, &TypeCtor_24, &ArgTypes_25);
                        succeeded = ((MR_tag((MR_Word) ArgTypes_25)) == (MR_mktag((MR_Integer) 1)));
                        if (succeeded)
                        {
                          ElemType_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_25, (MR_Integer) 0)));
                          Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_25, (MR_Integer) 1)));
                          succeeded = (Var_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (succeeded)
                          {
                            Var_53 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_24);
                            succeeded = (strcmp(Var_53, (MR_String) "array") == 0);
                            if (succeeded)
                            {
                              Var_54 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_24);
                              succeeded = (strcmp(Var_54, (MR_String) "array") == 0);
                            }
                          }
                        }
                        if (succeeded)
                        {
                          MR_Word TypeInfo_94_94;
                          MR_Word TypeCtorInfo_95_95;
                          MR_Word TypeInfo_96_96;
                          MR_ArrayPtr Array_28;
                          MR_Box Elem_27;
                          MR_Box conv9_Array_28;

                          mercury__type_desc__has_type_2_p_0(&TypeInfo_94_94, ElemType_26);
                          TypeCtorInfo_95_95 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
                          {
                            TypeInfo_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), TypeInfo_96_96, 0) = ((MR_Box) (TypeCtorInfo_95_95));
                            MR_hl_field(MR_mktag(0), TypeInfo_96_96, 1) = ((MR_Box) (TypeInfo_94_94));
                          }
                          mercury__univ__det_univ_to_type_2_p_0(TypeInfo_96_96, Univ_9, &conv9_Array_28);
                          Array_28 = ((MR_ArrayPtr) conv9_Array_28);
                          mercury__stream__string_writer__write_array_4_p_0(TypeInfo_94_94, TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, (MR_ArrayPtr) Array_28, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
                        }
                        else
                        {
                          MR_Word ElemType_79;
                          MR_Word Var_56;
                          MR_Word Var_57;
                          MR_String Var_58;
                          MR_String Var_59;
                          MR_Word TypeCtor_67;
                          MR_Word ArgTypes_68;

                          Var_56 = mercury__univ__univ_type_1_f_0(Univ_9);
                          mercury__type_desc__type_ctor_and_args_3_p_0(Var_56, &TypeCtor_67, &ArgTypes_68);
                          succeeded = ((MR_tag((MR_Word) ArgTypes_68)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            ElemType_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_68, (MR_Integer) 0)));
                            Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_68, (MR_Integer) 1)));
                            succeeded = (Var_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_58 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_67);
                              succeeded = (strcmp(Var_58, (MR_String) "version_array") == 0);
                              if (succeeded)
                              {
                                Var_59 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_67);
                                succeeded = (strcmp(Var_59, (MR_String) "version_array") == 0);
                              }
                            }
                          }
                          if (succeeded)
                          {
                            MR_Word TypeInfo_97_97;
                            MR_Word TypeCtorInfo_98_98;
                            MR_Word TypeInfo_99_99;
                            MR_Box VersionArray_29;
                            MR_Box Elem_69;
                            MR_Box conv10_VersionArray_29;

                            mercury__type_desc__has_type_2_p_0(&TypeInfo_97_97, ElemType_79);
                            TypeCtorInfo_98_98 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
                            {
                              TypeInfo_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), TypeInfo_99_99, 0) = ((MR_Box) (TypeCtorInfo_98_98));
                              MR_hl_field(MR_mktag(0), TypeInfo_99_99, 1) = ((MR_Box) (TypeInfo_97_97));
                            }
                            mercury__univ__det_univ_to_type_2_p_0(TypeInfo_99_99, Univ_9, &conv10_VersionArray_29);
                            VersionArray_29 = ((MR_Box) conv10_VersionArray_29);
                            mercury__stream__string_writer__write_version_array_4_p_0(TypeInfo_97_97, TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, VersionArray_29, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
                          }
                          else
                          {
                            MR_Word Var_61;
                            MR_Word Var_62;
                            MR_String Var_63;
                            MR_String Var_64;
                            MR_Word TypeCtor_70;
                            MR_Word ArgTypes_71;
                            MR_Word ElemType_75;

                            Var_61 = mercury__univ__univ_type_1_f_0(Univ_9);
                            mercury__type_desc__type_ctor_and_args_3_p_0(Var_61, &TypeCtor_70, &ArgTypes_71);
                            succeeded = ((MR_tag((MR_Word) ArgTypes_71)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              ElemType_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_71, (MR_Integer) 0)));
                              Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_71, (MR_Integer) 1)));
                              succeeded = (Var_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                Var_63 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_70);
                                succeeded = (strcmp(Var_63, (MR_String) "type_info") == 0);
                                if (succeeded)
                                {
                                  Var_64 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_70);
                                  succeeded = (strcmp(Var_64, (MR_String) "private_builtin") == 0);
                                }
                              }
                            }
                            if (succeeded)
                            {
                              MR_Word PrivateBuiltinTypeInfo_30;
                              MR_Word TypeCtorInfo_101_101 = (MR_Word) &mercury__private_builtin__private_builtin__type_ctor_info_type_info_0;
                              MR_Box conv11_PrivateBuiltinTypeInfo_30;

                              mercury__univ__det_univ_to_type_2_p_0(TypeCtorInfo_101_101, Univ_9, &conv11_PrivateBuiltinTypeInfo_30);
                              PrivateBuiltinTypeInfo_30 = ((MR_Word) conv11_PrivateBuiltinTypeInfo_30);
                              mercury__stream__string_writer__write_private_builtin_type_info_4_p_0(TypeClassInfo_for_writer_81, Stream_7, PrivateBuiltinTypeInfo_30, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
                            }
                            else
                              mercury__stream__string_writer__write_ordinary_term_6_p_2(TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, NonCanon_8, Univ_9, Priority_10, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
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
    break;
  }
}

static void MR_CALL 
mercury__stream__string_writer__write_ordinary_term_6_p_2(
  MR_Word TypeClassInfo_for_writer_50,
  MR_Word TypeClassInfo_for_writer_51,
  MR_Box Stream_7,
  MR_Word NonCanon_8,
  MR_Word Univ_9,
  MR_Integer Priority_10,
  MR_Box STATE_VARIABLE_State_0_24,
  MR_Box * STATE_VARIABLE_State_25)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 0)));
    MR_Box Term_12 = (MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 1));
    MR_String Functor_13;
    MR_Word Args_15;
    MR_Integer _Arity_14;
    MR_Word ListHead_16;
    MR_Word ListTail_17;
    MR_Word Var_26;
    MR_Word Var_27;

    mercury__deconstruct__deconstruct_5_p_2(TypeInfo_52_52, Term_12, NonCanon_8, &Functor_13, &_Arity_14, &Args_15);
    succeeded = (strcmp(Functor_13, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ListHead_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
        Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          ListTail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0)));
          Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1)));
          succeeded = (Var_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_State_29_29;
      MR_Box STATE_VARIABLE_State_30_30;
      MR_Box STATE_VARIABLE_State_31_31;
      MR_Integer ArgPriority_61;
      MR_Box STATE_VARIABLE_State_13_62;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      func_0(((MR_Box) TypeClassInfo_for_writer_51), Stream_7, ((MR_Box) (MR_Word) ((MR_Char) 91)), STATE_VARIABLE_State_0_24, &STATE_VARIABLE_State_29_29);
      mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_3_p_0(&ArgPriority_61, STATE_VARIABLE_State_29_29, &STATE_VARIABLE_State_13_62);
      mercury__stream__string_writer__do_write_univ_prio_6_p_2(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, ListHead_16, ArgPriority_61, STATE_VARIABLE_State_13_62, &STATE_VARIABLE_State_30_30);
      mercury__stream__string_writer__write_list_tail_5_p_2(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, ListTail_17, STATE_VARIABLE_State_30_30, &STATE_VARIABLE_State_31_31);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
      func_1(((MR_Box) TypeClassInfo_for_writer_51), Stream_7, ((MR_Box) (MR_Word) ((MR_Char) 93)), STATE_VARIABLE_State_31_31, STATE_VARIABLE_State_25);
    }
    else
    {
      succeeded = (strcmp(Functor_13, (MR_String) "[]") == 0);
      if (succeeded)
        succeeded = (Args_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5)));

        func_2(((MR_Box) TypeClassInfo_for_writer_50), Stream_7, ((MR_Box) ((MR_String) "[]")), STATE_VARIABLE_State_0_24, STATE_VARIABLE_State_25);
      }
      else
      {
        MR_Word BracedHead_18;
        MR_Word BracedTail_19;

        succeeded = (strcmp(Functor_13, (MR_String) "{}") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            BracedHead_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
            BracedTail_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
          }
        }
        if (succeeded)
          if ((BracedTail_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Box STATE_VARIABLE_State_43_43;
            MR_Box STATE_VARIABLE_State_44_44;
            MR_Integer Var_72;
            void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5)));
            void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            func_3(((MR_Box) TypeClassInfo_for_writer_50), Stream_7, ((MR_Box) ((MR_String) "{ ")), STATE_VARIABLE_State_0_24, &STATE_VARIABLE_State_43_43);
            Var_72 = ((MR_Integer) 1200 + (MR_Integer) 1);
            mercury__stream__string_writer__do_write_univ_prio_6_p_2(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, BracedHead_18, Var_72, STATE_VARIABLE_State_43_43, &STATE_VARIABLE_State_44_44);
            func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5)));
            func_4(((MR_Box) TypeClassInfo_for_writer_50), Stream_7, ((MR_Box) ((MR_String) " }")), STATE_VARIABLE_State_44_44, STATE_VARIABLE_State_25);
          }
          else
          {
            MR_Box STATE_VARIABLE_State_37_37;
            MR_Box STATE_VARIABLE_State_38_38;
            MR_Box STATE_VARIABLE_State_39_39;
            MR_Integer ArgPriority_84;
            MR_Box STATE_VARIABLE_State_13_85;
            void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
            void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            func_5(((MR_Box) TypeClassInfo_for_writer_51), Stream_7, ((MR_Box) (MR_Word) ((MR_Char) 123)), STATE_VARIABLE_State_0_24, &STATE_VARIABLE_State_37_37);
            mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_3_p_0(&ArgPriority_84, STATE_VARIABLE_State_37_37, &STATE_VARIABLE_State_13_85);
            mercury__stream__string_writer__do_write_univ_prio_6_p_2(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, BracedHead_18, ArgPriority_84, STATE_VARIABLE_State_13_85, &STATE_VARIABLE_State_38_38);
            mercury__stream__string_writer__write_term_args_5_p_2(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, BracedTail_19, STATE_VARIABLE_State_38_38, &STATE_VARIABLE_State_39_39);
            func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
            func_6(((MR_Box) TypeClassInfo_for_writer_51), Stream_7, ((MR_Box) (MR_Word) ((MR_Char) 125)), STATE_VARIABLE_State_39_39, STATE_VARIABLE_State_25);
          }
        else
        {
          MR_Word FirstOpInfo_22;
          MR_Word OtherOpInfos_23;
          MR_Word TypeClassInfo_for_op_table_53;
          MR_bool MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
          MR_Box conv9_FirstOpInfo_22;
          MR_Box conv8_OtherOpInfos_23;

          TypeClassInfo_for_op_table_53 = (MR_Word) &mercury__stream__string_writer_scalar_common_1[0];
          func_7 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_53, (MR_Integer) 0)), (MR_Integer) 10)));
          succeeded = func_7(((MR_Box) TypeClassInfo_for_op_table_53), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Functor_13)), &conv9_FirstOpInfo_22, &conv8_OtherOpInfos_23);
          if (succeeded)
          {
            FirstOpInfo_22 = ((MR_Word) conv9_FirstOpInfo_22);
            OtherOpInfos_23 = ((MR_Word) conv8_OtherOpInfos_23);
            succeeded = MR_TRUE;
          }
          if (succeeded)
            mercury__stream__string_writer__select_op_info_and_print_9_p_2(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, FirstOpInfo_22, OtherOpInfos_23, Priority_10, Functor_13, Args_15, STATE_VARIABLE_State_0_24, STATE_VARIABLE_State_25);
          else
          {
            MR_Box STATE_VARIABLE_State_17_99;

            mercury__term_io__quote_atom_agt_5_p_0(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, Functor_13, (MR_Integer) 0, STATE_VARIABLE_State_0_24, &STATE_VARIABLE_State_17_99);
            if ((Args_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *STATE_VARIABLE_State_25 = STATE_VARIABLE_State_17_99;
            else
            {
              MR_Word X_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
              MR_Word Xs_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
              MR_Box STATE_VARIABLE_State_19_101;
              MR_Box STATE_VARIABLE_State_20_102;
              MR_Box STATE_VARIABLE_State_21_103;

              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_51, Stream_7, ((MR_Box) (MR_Word) ((MR_Char) 40)), STATE_VARIABLE_State_17_99, &STATE_VARIABLE_State_19_101);
              mercury__stream__string_writer__write_arg_5_p_2(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, X_96, STATE_VARIABLE_State_19_101, &STATE_VARIABLE_State_20_102);
              mercury__stream__string_writer__write_term_args_5_p_2(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, Xs_97, STATE_VARIABLE_State_20_102, &STATE_VARIABLE_State_21_103);
              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_51, Stream_7, ((MR_Box) (MR_Word) ((MR_Char) 41)), STATE_VARIABLE_State_21_103, STATE_VARIABLE_State_25);
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
mercury__stream__string_writer__write_term_args_5_p_2(
  MR_Word TypeClassInfo_for_writer_22,
  MR_Word TypeClassInfo_for_writer_23,
  MR_Box HeadVar__1_1,
  MR_Word NonCanon_2,
  MR_Word HeadVar__3_3,
  MR_Box STATE_VARIABLE_State_0_4,
  MR_Box * STATE_VARIABLE_State_5)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_State_5 = STATE_VARIABLE_State_0_4;
    else
    {
      MR_Word X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Xs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Box STATE_VARIABLE_State_19_19;
      MR_Box STATE_VARIABLE_State_20_20;
      MR_Integer ArgPriority_30;
      MR_Box STATE_VARIABLE_State_13_31;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_22, (MR_Integer) 0)), (MR_Integer) 5)));

      func_0(((MR_Box) TypeClassInfo_for_writer_22), HeadVar__1_1, ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_State_0_4, &STATE_VARIABLE_State_19_19);
      mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_3_p_0(&ArgPriority_30, STATE_VARIABLE_State_19_19, &STATE_VARIABLE_State_13_31);
      mercury__stream__string_writer__do_write_univ_prio_6_p_2(TypeClassInfo_for_writer_22, TypeClassInfo_for_writer_23, HeadVar__1_1, NonCanon_2, X_13, ArgPriority_30, STATE_VARIABLE_State_13_31, &STATE_VARIABLE_State_20_20);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__3_3 = Xs_14;
        MR_Box next_value_of_STATE_VARIABLE_State_0_4 = STATE_VARIABLE_State_20_20;

        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_State_0_4 = next_value_of_STATE_VARIABLE_State_0_4;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__stream__string_writer__select_op_info_and_print_9_p_2(
  MR_Word TypeClassInfo_for_writer_121,
  MR_Word TypeClassInfo_for_writer_122,
  MR_Box Stream_10,
  MR_Word NonCanon_11,
  MR_Word OpInfo_12,
  MR_Word OtherOpInfos_13,
  MR_Integer Priority_14,
  MR_String Functor_15,
  MR_Word Args_16,
  MR_Box STATE_VARIABLE_State_0_48,
  MR_Box * STATE_VARIABLE_State_49)
{
  {
    MR_bool succeeded;
    MR_Word OpClass_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
    MR_Integer Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) OpClass_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Arg1_30;
          MR_Word Arg2_31;
          MR_Word Var_64;
          MR_Word Var_65;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Arg1_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_64)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Arg2_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 0)));
              Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 1)));
              succeeded = (Var_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          if (succeeded)
          {
            MR_Word LeftAssoc_33;
            MR_Integer LeftPriority_35;
            MR_Word RightAssoc_37;
            MR_Integer RightPriority_38;
            MR_Box STATE_VARIABLE_State_67_67;
            MR_Box STATE_VARIABLE_State_68_68;
            MR_Box STATE_VARIABLE_State_70_70;
            MR_Box STATE_VARIABLE_State_76_76;
            MR_Integer OpPriority_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
            MR_Word Var_34;
            MR_Word Var_36;

            succeeded = (OpPriority_111 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_2(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 40)), STATE_VARIABLE_State_0_48, &STATE_VARIABLE_State_67_67);
            }
            else
              STATE_VARIABLE_State_67_67 = STATE_VARIABLE_State_0_48;
            LeftAssoc_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 0)));
            Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 1)));
            switch (LeftAssoc_33) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  LeftPriority_35 = (OpPriority_111 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                LeftPriority_35 = OpPriority_111;
                break;
            }
            mercury__stream__string_writer__do_write_univ_prio_6_p_2(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg1_30, LeftPriority_35, STATE_VARIABLE_State_67_67, &STATE_VARIABLE_State_68_68);
            succeeded = (strcmp(Functor_15, (MR_String) ",") == 0);
            if (succeeded)
            {
              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, Stream_10, ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_State_68_68, &STATE_VARIABLE_State_70_70);
            }
            else
            {
              MR_Box STATE_VARIABLE_State_72_72;
              MR_Box STATE_VARIABLE_State_73_73;

              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, Stream_10, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_68_68, &STATE_VARIABLE_State_72_72);
              mercury__term_io__quote_atom_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15, STATE_VARIABLE_State_72_72, &STATE_VARIABLE_State_73_73);
              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, Stream_10, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_73_73, &STATE_VARIABLE_State_70_70);
            }
            Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 0)));
            RightAssoc_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 1)));
            switch (RightAssoc_37) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  RightPriority_38 = (OpPriority_111 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                RightPriority_38 = OpPriority_111;
                break;
            }
            mercury__stream__string_writer__do_write_univ_prio_6_p_2(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg2_31, RightPriority_38, STATE_VARIABLE_State_70_70, &STATE_VARIABLE_State_76_76);
            succeeded = (OpPriority_111 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_3(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 41)), STATE_VARIABLE_State_76_76, STATE_VARIABLE_State_49);
            }
            else
              *STATE_VARIABLE_State_49 = STATE_VARIABLE_State_76_76;
          }
          else
            mercury__stream__string_writer__select_remaining_op_info_and_print_8_p_3(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16, STATE_VARIABLE_State_0_48, STATE_VARIABLE_State_49);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Arg_21;
          MR_Word Var_90;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Arg_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = (Var_90 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Integer OpPriority_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word OpAssoc_24;
            MR_Integer NewPriority_25;
            MR_Box STATE_VARIABLE_State_92_92;
            MR_Box STATE_VARIABLE_State_93_93;
            MR_Box STATE_VARIABLE_State_95_95;
            MR_Box STATE_VARIABLE_State_96_96;
            MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));

            succeeded = (OpPriority_23 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_6(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 40)), STATE_VARIABLE_State_0_48, &STATE_VARIABLE_State_92_92);
            }
            else
              STATE_VARIABLE_State_92_92 = STATE_VARIABLE_State_0_48;
            mercury__term_io__quote_atom_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15, STATE_VARIABLE_State_92_92, &STATE_VARIABLE_State_93_93);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, Stream_10, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_93_93, &STATE_VARIABLE_State_95_95);
            OpAssoc_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), OpClass_18, (MR_Integer) 0)));
            switch (OpAssoc_24) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  NewPriority_25 = (OpPriority_23 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                NewPriority_25 = OpPriority_23;
                break;
            }
            mercury__stream__string_writer__do_write_univ_prio_6_p_2(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg_21, NewPriority_25, STATE_VARIABLE_State_95_95, &STATE_VARIABLE_State_96_96);
            succeeded = (OpPriority_23 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_7(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 41)), STATE_VARIABLE_State_96_96, STATE_VARIABLE_State_49);
            }
            else
              *STATE_VARIABLE_State_49 = STATE_VARIABLE_State_96_96;
          }
          else
            mercury__stream__string_writer__select_remaining_op_info_and_print_8_p_3(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16, STATE_VARIABLE_State_0_48, STATE_VARIABLE_State_49);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Arg1_116;
          MR_Word Arg2_117;
          MR_Word Var_50;
          MR_Word Var_51;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Arg1_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_50)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Arg2_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 0)));
              Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 1)));
              succeeded = (Var_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          if (succeeded)
          {
            MR_Word FirstAssoc_42;
            MR_Integer FirstPriority_44;
            MR_Word SecondAssoc_46;
            MR_Integer SecondPriority_47;
            MR_Box STATE_VARIABLE_State_53_53;
            MR_Box STATE_VARIABLE_State_54_54;
            MR_Box STATE_VARIABLE_State_56_56;
            MR_Box STATE_VARIABLE_State_57_57;
            MR_Box STATE_VARIABLE_State_59_59;
            MR_Box STATE_VARIABLE_State_60_60;
            MR_Integer OpPriority_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
            MR_Word Var_43;
            MR_Word Var_45;

            succeeded = (OpPriority_114 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_0(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 40)), STATE_VARIABLE_State_0_48, &STATE_VARIABLE_State_53_53);
            }
            else
              STATE_VARIABLE_State_53_53 = STATE_VARIABLE_State_0_48;
            mercury__term_io__quote_atom_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15, STATE_VARIABLE_State_53_53, &STATE_VARIABLE_State_54_54);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, Stream_10, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_54_54, &STATE_VARIABLE_State_56_56);
            FirstAssoc_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 0)));
            Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 1)));
            switch (FirstAssoc_42) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  FirstPriority_44 = (OpPriority_114 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                FirstPriority_44 = OpPriority_114;
                break;
            }
            mercury__stream__string_writer__do_write_univ_prio_6_p_2(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg1_116, FirstPriority_44, STATE_VARIABLE_State_56_56, &STATE_VARIABLE_State_57_57);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, Stream_10, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_57_57, &STATE_VARIABLE_State_59_59);
            Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 0)));
            SecondAssoc_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 1)));
            switch (SecondAssoc_46) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  SecondPriority_47 = (OpPriority_114 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                SecondPriority_47 = OpPriority_114;
                break;
            }
            mercury__stream__string_writer__do_write_univ_prio_6_p_2(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg2_117, SecondPriority_47, STATE_VARIABLE_State_59_59, &STATE_VARIABLE_State_60_60);
            succeeded = (OpPriority_114 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_1(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 41)), STATE_VARIABLE_State_60_60, STATE_VARIABLE_State_49);
            }
            else
              *STATE_VARIABLE_State_49 = STATE_VARIABLE_State_60_60;
          }
          else
            mercury__stream__string_writer__select_remaining_op_info_and_print_8_p_3(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16, STATE_VARIABLE_State_0_48, STATE_VARIABLE_State_49);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word PostfixArg_26;
          MR_Word Var_80;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            PostfixArg_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = (Var_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Box STATE_VARIABLE_State_82_82;
            MR_Box STATE_VARIABLE_State_83_83;
            MR_Box STATE_VARIABLE_State_85_85;
            MR_Box STATE_VARIABLE_State_86_86;
            MR_Integer OpPriority_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word OpAssoc_102;
            MR_Integer NewPriority_103;
            MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));

            succeeded = (OpPriority_101 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_4(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 40)), STATE_VARIABLE_State_0_48, &STATE_VARIABLE_State_82_82);
            }
            else
              STATE_VARIABLE_State_82_82 = STATE_VARIABLE_State_0_48;
            OpAssoc_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), OpClass_18, (MR_Integer) 0)));
            switch (OpAssoc_102) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  NewPriority_103 = (OpPriority_101 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                NewPriority_103 = OpPriority_101;
                break;
            }
            mercury__stream__string_writer__do_write_univ_prio_6_p_2(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, PostfixArg_26, NewPriority_103, STATE_VARIABLE_State_82_82, &STATE_VARIABLE_State_83_83);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, Stream_10, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_83_83, &STATE_VARIABLE_State_85_85);
            mercury__term_io__quote_atom_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15, STATE_VARIABLE_State_85_85, &STATE_VARIABLE_State_86_86);
            succeeded = (OpPriority_101 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_5(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 41)), STATE_VARIABLE_State_86_86, STATE_VARIABLE_State_49);
            }
            else
              *STATE_VARIABLE_State_49 = STATE_VARIABLE_State_86_86;
          }
          else
            mercury__stream__string_writer__select_remaining_op_info_and_print_8_p_3(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16, STATE_VARIABLE_State_0_48, STATE_VARIABLE_State_49);
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__stream__string_writer__select_remaining_op_info_and_print_8_p_3(
  MR_Word TypeClassInfo_for_writer_36,
  MR_Word TypeClassInfo_for_writer_37,
  MR_Box Stream_1,
  MR_Word NonCanon_2,
  MR_Word HeadVar__3_3,
  MR_Integer Priority_4,
  MR_String Functor_5,
  MR_Word Args_6,
  MR_Box STATE_VARIABLE_State_0_7,
  MR_Box * STATE_VARIABLE_State_8)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer Var_28;

      succeeded = (Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        Var_28 = (MR_Integer) 1200;
        succeeded = (Priority_4 <= Var_28);
      }
      if (succeeded)
      {
        MR_Box STATE_VARIABLE_State_31_31;
        MR_Box STATE_VARIABLE_State_32_32;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_37, (MR_Integer) 0)), (MR_Integer) 5)));
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_0(((MR_Box) TypeClassInfo_for_writer_37), Stream_1, ((MR_Box) (MR_Word) ((MR_Char) 40)), STATE_VARIABLE_State_0_7, &STATE_VARIABLE_State_31_31);
        mercury__term_io__quote_atom_agt_5_p_0(TypeClassInfo_for_writer_36, TypeClassInfo_for_writer_37, Stream_1, Functor_5, (MR_Integer) 1, STATE_VARIABLE_State_31_31, &STATE_VARIABLE_State_32_32);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_37, (MR_Integer) 0)), (MR_Integer) 5)));
        func_1(((MR_Box) TypeClassInfo_for_writer_37), Stream_1, ((MR_Box) (MR_Word) ((MR_Char) 41)), STATE_VARIABLE_State_32_32, STATE_VARIABLE_State_8);
      }
      else
      {
        MR_Box STATE_VARIABLE_State_17_54;

        mercury__term_io__quote_atom_agt_5_p_0(TypeClassInfo_for_writer_36, TypeClassInfo_for_writer_37, Stream_1, Functor_5, (MR_Integer) 0, STATE_VARIABLE_State_0_7, &STATE_VARIABLE_State_17_54);
        if ((Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *STATE_VARIABLE_State_8 = STATE_VARIABLE_State_17_54;
        else
        {
          MR_Word X_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_6, (MR_Integer) 0)));
          MR_Word Xs_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_6, (MR_Integer) 1)));
          MR_Box STATE_VARIABLE_State_19_56;
          MR_Box STATE_VARIABLE_State_20_57;
          MR_Box STATE_VARIABLE_State_21_58;

          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_37, Stream_1, ((MR_Box) (MR_Word) ((MR_Char) 40)), STATE_VARIABLE_State_17_54, &STATE_VARIABLE_State_19_56);
          mercury__stream__string_writer__write_arg_5_p_3(TypeClassInfo_for_writer_36, TypeClassInfo_for_writer_37, Stream_1, NonCanon_2, X_51, STATE_VARIABLE_State_19_56, &STATE_VARIABLE_State_20_57);
          mercury__stream__string_writer__write_term_args_5_p_3(TypeClassInfo_for_writer_36, TypeClassInfo_for_writer_37, Stream_1, NonCanon_2, Xs_52, STATE_VARIABLE_State_20_57, &STATE_VARIABLE_State_21_58);
          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_37, Stream_1, ((MR_Box) (MR_Word) ((MR_Char) 41)), STATE_VARIABLE_State_21_58, STATE_VARIABLE_State_8);
        }
      }
    }
    else
    {
      MR_Word FirstOpInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word MoreOpInfos_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));

      mercury__stream__string_writer__select_op_info_and_print_9_p_3(TypeClassInfo_for_writer_36, TypeClassInfo_for_writer_37, Stream_1, NonCanon_2, FirstOpInfo_11, MoreOpInfos_12, Priority_4, Functor_5, Args_6, STATE_VARIABLE_State_0_7, STATE_VARIABLE_State_8);
    }
  }
}

static void MR_CALL 
mercury__stream__string_writer__select_op_info_and_print_9_p_3(
  MR_Word TypeClassInfo_for_writer_121,
  MR_Word TypeClassInfo_for_writer_122,
  MR_Box Stream_10,
  MR_Word NonCanon_11,
  MR_Word OpInfo_12,
  MR_Word OtherOpInfos_13,
  MR_Integer Priority_14,
  MR_String Functor_15,
  MR_Word Args_16,
  MR_Box STATE_VARIABLE_State_0_48,
  MR_Box * STATE_VARIABLE_State_49)
{
  {
    MR_bool succeeded;
    MR_Word OpClass_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
    MR_Integer Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) OpClass_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Arg1_30;
          MR_Word Arg2_31;
          MR_Word Var_64;
          MR_Word Var_65;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Arg1_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_64)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Arg2_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 0)));
              Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 1)));
              succeeded = (Var_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          if (succeeded)
          {
            MR_Word LeftAssoc_33;
            MR_Integer LeftPriority_35;
            MR_Word RightAssoc_37;
            MR_Integer RightPriority_38;
            MR_Box STATE_VARIABLE_State_67_67;
            MR_Box STATE_VARIABLE_State_68_68;
            MR_Box STATE_VARIABLE_State_70_70;
            MR_Box STATE_VARIABLE_State_76_76;
            MR_Integer OpPriority_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
            MR_Word Var_34;
            MR_Word Var_36;

            succeeded = (OpPriority_111 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_2(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 40)), STATE_VARIABLE_State_0_48, &STATE_VARIABLE_State_67_67);
            }
            else
              STATE_VARIABLE_State_67_67 = STATE_VARIABLE_State_0_48;
            LeftAssoc_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 0)));
            Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 1)));
            switch (LeftAssoc_33) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  LeftPriority_35 = (OpPriority_111 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                LeftPriority_35 = OpPriority_111;
                break;
            }
            mercury__stream__string_writer__do_write_univ_prio_6_p_3(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg1_30, LeftPriority_35, STATE_VARIABLE_State_67_67, &STATE_VARIABLE_State_68_68);
            succeeded = (strcmp(Functor_15, (MR_String) ",") == 0);
            if (succeeded)
            {
              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, Stream_10, ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_State_68_68, &STATE_VARIABLE_State_70_70);
            }
            else
            {
              MR_Box STATE_VARIABLE_State_72_72;
              MR_Box STATE_VARIABLE_State_73_73;

              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, Stream_10, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_68_68, &STATE_VARIABLE_State_72_72);
              mercury__term_io__quote_atom_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15, STATE_VARIABLE_State_72_72, &STATE_VARIABLE_State_73_73);
              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, Stream_10, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_73_73, &STATE_VARIABLE_State_70_70);
            }
            Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 0)));
            RightAssoc_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 1)));
            switch (RightAssoc_37) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  RightPriority_38 = (OpPriority_111 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                RightPriority_38 = OpPriority_111;
                break;
            }
            mercury__stream__string_writer__do_write_univ_prio_6_p_3(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg2_31, RightPriority_38, STATE_VARIABLE_State_70_70, &STATE_VARIABLE_State_76_76);
            succeeded = (OpPriority_111 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_3(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 41)), STATE_VARIABLE_State_76_76, STATE_VARIABLE_State_49);
            }
            else
              *STATE_VARIABLE_State_49 = STATE_VARIABLE_State_76_76;
          }
          else
            mercury__stream__string_writer__select_remaining_op_info_and_print_8_p_3(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16, STATE_VARIABLE_State_0_48, STATE_VARIABLE_State_49);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Arg_21;
          MR_Word Var_90;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Arg_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = (Var_90 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Integer OpPriority_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word OpAssoc_24;
            MR_Integer NewPriority_25;
            MR_Box STATE_VARIABLE_State_92_92;
            MR_Box STATE_VARIABLE_State_93_93;
            MR_Box STATE_VARIABLE_State_95_95;
            MR_Box STATE_VARIABLE_State_96_96;
            MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));

            succeeded = (OpPriority_23 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_6(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 40)), STATE_VARIABLE_State_0_48, &STATE_VARIABLE_State_92_92);
            }
            else
              STATE_VARIABLE_State_92_92 = STATE_VARIABLE_State_0_48;
            mercury__term_io__quote_atom_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15, STATE_VARIABLE_State_92_92, &STATE_VARIABLE_State_93_93);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, Stream_10, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_93_93, &STATE_VARIABLE_State_95_95);
            OpAssoc_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), OpClass_18, (MR_Integer) 0)));
            switch (OpAssoc_24) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  NewPriority_25 = (OpPriority_23 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                NewPriority_25 = OpPriority_23;
                break;
            }
            mercury__stream__string_writer__do_write_univ_prio_6_p_3(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg_21, NewPriority_25, STATE_VARIABLE_State_95_95, &STATE_VARIABLE_State_96_96);
            succeeded = (OpPriority_23 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_7(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 41)), STATE_VARIABLE_State_96_96, STATE_VARIABLE_State_49);
            }
            else
              *STATE_VARIABLE_State_49 = STATE_VARIABLE_State_96_96;
          }
          else
            mercury__stream__string_writer__select_remaining_op_info_and_print_8_p_3(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16, STATE_VARIABLE_State_0_48, STATE_VARIABLE_State_49);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Arg1_116;
          MR_Word Arg2_117;
          MR_Word Var_50;
          MR_Word Var_51;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Arg1_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_50)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Arg2_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 0)));
              Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 1)));
              succeeded = (Var_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          if (succeeded)
          {
            MR_Word FirstAssoc_42;
            MR_Integer FirstPriority_44;
            MR_Word SecondAssoc_46;
            MR_Integer SecondPriority_47;
            MR_Box STATE_VARIABLE_State_53_53;
            MR_Box STATE_VARIABLE_State_54_54;
            MR_Box STATE_VARIABLE_State_56_56;
            MR_Box STATE_VARIABLE_State_57_57;
            MR_Box STATE_VARIABLE_State_59_59;
            MR_Box STATE_VARIABLE_State_60_60;
            MR_Integer OpPriority_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
            MR_Word Var_43;
            MR_Word Var_45;

            succeeded = (OpPriority_114 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_0(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 40)), STATE_VARIABLE_State_0_48, &STATE_VARIABLE_State_53_53);
            }
            else
              STATE_VARIABLE_State_53_53 = STATE_VARIABLE_State_0_48;
            mercury__term_io__quote_atom_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15, STATE_VARIABLE_State_53_53, &STATE_VARIABLE_State_54_54);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, Stream_10, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_54_54, &STATE_VARIABLE_State_56_56);
            FirstAssoc_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 0)));
            Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 1)));
            switch (FirstAssoc_42) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  FirstPriority_44 = (OpPriority_114 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                FirstPriority_44 = OpPriority_114;
                break;
            }
            mercury__stream__string_writer__do_write_univ_prio_6_p_3(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg1_116, FirstPriority_44, STATE_VARIABLE_State_56_56, &STATE_VARIABLE_State_57_57);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, Stream_10, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_57_57, &STATE_VARIABLE_State_59_59);
            Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 0)));
            SecondAssoc_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 1)));
            switch (SecondAssoc_46) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  SecondPriority_47 = (OpPriority_114 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                SecondPriority_47 = OpPriority_114;
                break;
            }
            mercury__stream__string_writer__do_write_univ_prio_6_p_3(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg2_117, SecondPriority_47, STATE_VARIABLE_State_59_59, &STATE_VARIABLE_State_60_60);
            succeeded = (OpPriority_114 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_1(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 41)), STATE_VARIABLE_State_60_60, STATE_VARIABLE_State_49);
            }
            else
              *STATE_VARIABLE_State_49 = STATE_VARIABLE_State_60_60;
          }
          else
            mercury__stream__string_writer__select_remaining_op_info_and_print_8_p_3(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16, STATE_VARIABLE_State_0_48, STATE_VARIABLE_State_49);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word PostfixArg_26;
          MR_Word Var_80;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            PostfixArg_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = (Var_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Box STATE_VARIABLE_State_82_82;
            MR_Box STATE_VARIABLE_State_83_83;
            MR_Box STATE_VARIABLE_State_85_85;
            MR_Box STATE_VARIABLE_State_86_86;
            MR_Integer OpPriority_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word OpAssoc_102;
            MR_Integer NewPriority_103;
            MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));

            succeeded = (OpPriority_101 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_4(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 40)), STATE_VARIABLE_State_0_48, &STATE_VARIABLE_State_82_82);
            }
            else
              STATE_VARIABLE_State_82_82 = STATE_VARIABLE_State_0_48;
            OpAssoc_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), OpClass_18, (MR_Integer) 0)));
            switch (OpAssoc_102) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  NewPriority_103 = (OpPriority_101 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                NewPriority_103 = OpPriority_101;
                break;
            }
            mercury__stream__string_writer__do_write_univ_prio_6_p_3(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, PostfixArg_26, NewPriority_103, STATE_VARIABLE_State_82_82, &STATE_VARIABLE_State_83_83);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, Stream_10, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_83_83, &STATE_VARIABLE_State_85_85);
            mercury__term_io__quote_atom_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15, STATE_VARIABLE_State_85_85, &STATE_VARIABLE_State_86_86);
            succeeded = (OpPriority_101 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_5(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 41)), STATE_VARIABLE_State_86_86, STATE_VARIABLE_State_49);
            }
            else
              *STATE_VARIABLE_State_49 = STATE_VARIABLE_State_86_86;
          }
          else
            mercury__stream__string_writer__select_remaining_op_info_and_print_8_p_3(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16, STATE_VARIABLE_State_0_48, STATE_VARIABLE_State_49);
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__stream__string_writer__write_arg_5_p_3(
  MR_Word TypeClassInfo_for_writer_15,
  MR_Word TypeClassInfo_for_writer_16,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Word X_8,
  MR_Box STATE_VARIABLE_State_0_11,
  MR_Box * STATE_VARIABLE_State_12)
{
  {
    MR_Word TypeInfo_18_18;

{
#define MR_PROC_LABEL mercury__stream__string_writer__write_arg_5_p_3

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_15 ;
	Index =  (MR_Integer) 4 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_18_18  = TypeInfo;
}
    mercury__stream__string_writer__do_write_univ_prio_6_p_3(TypeClassInfo_for_writer_15, TypeClassInfo_for_writer_16, Stream_6, NonCanon_7, X_8, (MR_Integer) 1000, STATE_VARIABLE_State_0_11, STATE_VARIABLE_State_12);
  }
}

static void MR_CALL 
mercury__stream__string_writer__write_list_tail_5_p_3(
  MR_Word TypeClassInfo_for_writer_27,
  MR_Word TypeClassInfo_for_writer_28,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8,
  MR_Box STATE_VARIABLE_State_0_16,
  MR_Box * STATE_VARIABLE_State_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeInfo_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 0)));
    MR_Box Term_10 = (MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 1));
    MR_String Functor_11;
    MR_Word Args_13;
    MR_Integer _Arity_12;
    MR_Word ListHead_14;
    MR_Word ListTail_15;
    MR_Word Var_18;
    MR_Word Var_19;

    /* setup for tailcalls optimized into a loop */
    mercury__deconstruct__deconstruct_5_p_3(TypeInfo_29_29, Term_10, NonCanon_7, &Functor_11, &_Arity_12, &Args_13);
    succeeded = (strcmp(Functor_11, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Args_13)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ListHead_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0)));
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          ListTail_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0)));
          Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1)));
          succeeded = (Var_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_State_21_21;
      MR_Box STATE_VARIABLE_State_22_22;
      MR_Integer ArgPriority_37;
      MR_Box STATE_VARIABLE_State_13_38;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));

      func_0(((MR_Box) TypeClassInfo_for_writer_27), Stream_6, ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_State_0_16, &STATE_VARIABLE_State_21_21);
      mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_3_p_0(&ArgPriority_37, STATE_VARIABLE_State_21_21, &STATE_VARIABLE_State_13_38);
      mercury__stream__string_writer__do_write_univ_prio_6_p_3(TypeClassInfo_for_writer_27, TypeClassInfo_for_writer_28, Stream_6, NonCanon_7, ListHead_14, ArgPriority_37, STATE_VARIABLE_State_13_38, &STATE_VARIABLE_State_22_22);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_Univ_8 = ListTail_15;
        MR_Box next_value_of_STATE_VARIABLE_State_0_16 = STATE_VARIABLE_State_22_22;

        Univ_8 = next_value_of_Univ_8;
        STATE_VARIABLE_State_0_16 = next_value_of_STATE_VARIABLE_State_0_16;
      }
      continue;
    }
    else
    {
      succeeded = (strcmp(Functor_11, (MR_String) "[]") == 0);
      if (succeeded)
        succeeded = (Args_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        *STATE_VARIABLE_State_17 = STATE_VARIABLE_State_0_16;
      else
      {
        MR_Box STATE_VARIABLE_State_25_25;
        MR_Integer Var_48;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));

        func_1(((MR_Box) TypeClassInfo_for_writer_27), Stream_6, ((MR_Box) ((MR_String) " | ")), STATE_VARIABLE_State_0_16, &STATE_VARIABLE_State_25_25);
        Var_48 = ((MR_Integer) 1200 + (MR_Integer) 1);
        mercury__stream__string_writer__do_write_univ_prio_6_p_3(TypeClassInfo_for_writer_27, TypeClassInfo_for_writer_28, Stream_6, NonCanon_7, Univ_8, Var_48, STATE_VARIABLE_State_25_25, STATE_VARIABLE_State_17);
      }
    }
    break;
  }
}

void MR_CALL 
mercury__stream__string_writer__do_write_univ_prio_6_p_3(
  MR_Word TypeClassInfo_for_writer_81,
  MR_Word TypeClassInfo_for_writer_82,
  MR_Box Stream_7,
  MR_Word NonCanon_8,
  MR_Word Univ_9,
  MR_Integer Priority_10,
  MR_Box STATE_VARIABLE_State_0_31,
  MR_Box * STATE_VARIABLE_State_32)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_String String_12;
    MR_Word TypeCtorInfo_83_83 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Box conv0_String_12;

    /* setup for tailcalls optimized into a loop */
    succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_83_83, Univ_9, &conv0_String_12);
    if (succeeded)
    {
      String_12 = ((MR_String) conv0_String_12);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      mercury__term_io__quote_string_4_p_0(TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, String_12, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
    else
    {
      MR_Char Char_13;
      MR_Word TypeCtorInfo_84_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
      MR_Box conv1_Char_13;

      succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_84_84, Univ_9, &conv1_Char_13);
      if (succeeded)
      {
        Char_13 = ((MR_Char) (MR_Word) conv1_Char_13);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_p_in__term_io_0(TypeClassInfo_for_writer_81, Stream_7, Char_13, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
      else
      {
        MR_Integer Int_14;
        MR_Word TypeCtorInfo_85_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Box conv2_Int_14;

        succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_85_85, Univ_9, &conv2_Int_14);
        if (succeeded)
        {
          Int_14 = ((MR_Integer) conv2_Int_14);
          succeeded = MR_TRUE;
        }
        if (succeeded)
          mercury__stream__string_writer__put_int_4_p_0(TypeClassInfo_for_writer_81, Stream_7, Int_14, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
        else
        {
          MR_Unsigned UInt_15;
          MR_Word TypeCtorInfo_86_86 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_uint_0;
          MR_Box conv3_UInt_15;

          succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_86_86, Univ_9, &conv3_UInt_15);
          if (succeeded)
          {
            UInt_15 = ((MR_Unsigned) conv3_UInt_15);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Box STATE_VARIABLE_State_36_36;

            mercury__stream__string_writer__put_uint_4_p_0(TypeClassInfo_for_writer_81, Stream_7, UInt_15, STATE_VARIABLE_State_0_31, &STATE_VARIABLE_State_36_36);
            mercury__stream__string_writer__put_char_4_p_0(TypeClassInfo_for_writer_81, Stream_7, (MR_Char) 117, STATE_VARIABLE_State_36_36, STATE_VARIABLE_State_32);
          }
          else
          {
            MR_Float Float_16;
            MR_Word TypeCtorInfo_87_87 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
            MR_Box conv4_Float_16;

            succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_87_87, Univ_9, &conv4_Float_16);
            if (succeeded)
            {
              Float_16 = MR_unbox_float(conv4_Float_16);
              succeeded = MR_TRUE;
            }
            if (succeeded)
              mercury__stream__string_writer__put_float_4_p_0(TypeClassInfo_for_writer_81, Stream_7, Float_16, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
            else
            {
              MR_Box Bitmap_17;
              MR_Word TypeCtorInfo_88_88 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
              MR_Box conv5_Bitmap_17;

              succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_88_88, Univ_9, &conv5_Bitmap_17);
              if (succeeded)
              {
                Bitmap_17 = ((MR_Box) conv5_Bitmap_17);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Box STATE_VARIABLE_State_41_41;
                MR_String Var_42;
                MR_Box STATE_VARIABLE_State_43_43;

                mercury__stream__string_writer__put_char_4_p_0(TypeClassInfo_for_writer_81, Stream_7, (MR_Char) 34, STATE_VARIABLE_State_0_31, &STATE_VARIABLE_State_41_41);
                Var_42 = mercury__bitmap__to_string_1_f_0(Bitmap_17);
                mercury__stream__put_4_p_0(TypeClassInfo_for_writer_81, Stream_7, ((MR_Box) (Var_42)), STATE_VARIABLE_State_41_41, &STATE_VARIABLE_State_43_43);
                mercury__stream__string_writer__put_char_4_p_0(TypeClassInfo_for_writer_81, Stream_7, (MR_Char) 34, STATE_VARIABLE_State_43_43, STATE_VARIABLE_State_32);
              }
              else
              {
                MR_Word TypeDesc_18;
                MR_Word TypeCtorInfo_89_89 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
                MR_Box conv6_TypeDesc_18;

                succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_89_89, Univ_9, &conv6_TypeDesc_18);
                if (succeeded)
                {
                  TypeDesc_18 = ((MR_Word) conv6_TypeDesc_18);
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                  mercury__stream__string_writer__write_type_desc_4_p_0(TypeClassInfo_for_writer_81, Stream_7, TypeDesc_18, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
                else
                {
                  MR_Word TypeCtorDesc_19;
                  MR_Word TypeCtorInfo_90_90 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0;
                  MR_Box conv7_TypeCtorDesc_19;

                  succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_90_90, Univ_9, &conv7_TypeCtorDesc_19);
                  if (succeeded)
                  {
                    TypeCtorDesc_19 = ((MR_Word) conv7_TypeCtorDesc_19);
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                    mercury__stream__string_writer__write_type_ctor_desc_4_p_0(TypeClassInfo_for_writer_81, Stream_7, TypeCtorDesc_19, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
                  else
                  {
                    MR_Word C_Pointer_20;
                    MR_Word TypeCtorInfo_91_91 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_c_pointer_0;
                    MR_Box conv8_C_Pointer_20;

                    succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_91_91, Univ_9, &conv8_C_Pointer_20);
                    if (succeeded)
                    {
                      C_Pointer_20 = ((MR_Word) conv8_C_Pointer_20);
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                      mercury__stream__string_writer__write_c_pointer_4_p_0(TypeClassInfo_for_writer_81, Stream_7, C_Pointer_20, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
                    else
                    {
                      MR_Word StreamInfo_22;
                      MR_Word TypeInfo_92_92;
                      MR_Word StreamDB_21;
                      MR_Box Var_49;

                      mercury__io__get_stream_db_with_locking_1_p_0(&StreamDB_21);
                      Var_49 = mercury__univ__univ_value_1_f_0(&TypeInfo_92_92, Univ_9);
                      succeeded = mercury__io__get_io_stream_info_2_f_0(TypeInfo_92_92, StreamDB_21, Var_49, &StreamInfo_22);
                      if (succeeded)
                      {
                        MR_Word TypeCtorInfo_93_93 = (MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0;
                        MR_Word StreamInfoUniv_23;

                        mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_93_93, ((MR_Box) (StreamInfo_22)), &StreamInfoUniv_23);
                        /* direct tailcall eliminated */
                        {
                          MR_Word next_value_of_Univ_9 = StreamInfoUniv_23;

                          Univ_9 = next_value_of_Univ_9;
                        }
                        continue;
                      }
                      else
                      {
                        MR_Word ElemType_26;
                        MR_Word TypeCtor_24;
                        MR_Word ArgTypes_25;
                        MR_Word Var_51;
                        MR_Word Var_52;
                        MR_String Var_53;
                        MR_String Var_54;

                        Var_51 = mercury__univ__univ_type_1_f_0(Univ_9);
                        mercury__type_desc__type_ctor_and_args_3_p_0(Var_51, &TypeCtor_24, &ArgTypes_25);
                        succeeded = ((MR_tag((MR_Word) ArgTypes_25)) == (MR_mktag((MR_Integer) 1)));
                        if (succeeded)
                        {
                          ElemType_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_25, (MR_Integer) 0)));
                          Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_25, (MR_Integer) 1)));
                          succeeded = (Var_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (succeeded)
                          {
                            Var_53 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_24);
                            succeeded = (strcmp(Var_53, (MR_String) "array") == 0);
                            if (succeeded)
                            {
                              Var_54 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_24);
                              succeeded = (strcmp(Var_54, (MR_String) "array") == 0);
                            }
                          }
                        }
                        if (succeeded)
                        {
                          MR_Word TypeInfo_94_94;
                          MR_Word TypeCtorInfo_95_95;
                          MR_Word TypeInfo_96_96;
                          MR_ArrayPtr Array_28;
                          MR_Box Elem_27;
                          MR_Box conv9_Array_28;

                          mercury__type_desc__has_type_2_p_0(&TypeInfo_94_94, ElemType_26);
                          TypeCtorInfo_95_95 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
                          {
                            TypeInfo_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), TypeInfo_96_96, 0) = ((MR_Box) (TypeCtorInfo_95_95));
                            MR_hl_field(MR_mktag(0), TypeInfo_96_96, 1) = ((MR_Box) (TypeInfo_94_94));
                          }
                          mercury__univ__det_univ_to_type_2_p_0(TypeInfo_96_96, Univ_9, &conv9_Array_28);
                          Array_28 = ((MR_ArrayPtr) conv9_Array_28);
                          mercury__stream__string_writer__write_array_4_p_0(TypeInfo_94_94, TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, (MR_ArrayPtr) Array_28, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
                        }
                        else
                        {
                          MR_Word ElemType_79;
                          MR_Word Var_56;
                          MR_Word Var_57;
                          MR_String Var_58;
                          MR_String Var_59;
                          MR_Word TypeCtor_67;
                          MR_Word ArgTypes_68;

                          Var_56 = mercury__univ__univ_type_1_f_0(Univ_9);
                          mercury__type_desc__type_ctor_and_args_3_p_0(Var_56, &TypeCtor_67, &ArgTypes_68);
                          succeeded = ((MR_tag((MR_Word) ArgTypes_68)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            ElemType_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_68, (MR_Integer) 0)));
                            Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_68, (MR_Integer) 1)));
                            succeeded = (Var_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_58 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_67);
                              succeeded = (strcmp(Var_58, (MR_String) "version_array") == 0);
                              if (succeeded)
                              {
                                Var_59 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_67);
                                succeeded = (strcmp(Var_59, (MR_String) "version_array") == 0);
                              }
                            }
                          }
                          if (succeeded)
                          {
                            MR_Word TypeInfo_97_97;
                            MR_Word TypeCtorInfo_98_98;
                            MR_Word TypeInfo_99_99;
                            MR_Box VersionArray_29;
                            MR_Box Elem_69;
                            MR_Box conv10_VersionArray_29;

                            mercury__type_desc__has_type_2_p_0(&TypeInfo_97_97, ElemType_79);
                            TypeCtorInfo_98_98 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
                            {
                              TypeInfo_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), TypeInfo_99_99, 0) = ((MR_Box) (TypeCtorInfo_98_98));
                              MR_hl_field(MR_mktag(0), TypeInfo_99_99, 1) = ((MR_Box) (TypeInfo_97_97));
                            }
                            mercury__univ__det_univ_to_type_2_p_0(TypeInfo_99_99, Univ_9, &conv10_VersionArray_29);
                            VersionArray_29 = ((MR_Box) conv10_VersionArray_29);
                            mercury__stream__string_writer__write_version_array_4_p_0(TypeInfo_97_97, TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, VersionArray_29, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
                          }
                          else
                          {
                            MR_Word Var_61;
                            MR_Word Var_62;
                            MR_String Var_63;
                            MR_String Var_64;
                            MR_Word TypeCtor_70;
                            MR_Word ArgTypes_71;
                            MR_Word ElemType_75;

                            Var_61 = mercury__univ__univ_type_1_f_0(Univ_9);
                            mercury__type_desc__type_ctor_and_args_3_p_0(Var_61, &TypeCtor_70, &ArgTypes_71);
                            succeeded = ((MR_tag((MR_Word) ArgTypes_71)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              ElemType_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_71, (MR_Integer) 0)));
                              Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_71, (MR_Integer) 1)));
                              succeeded = (Var_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                Var_63 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_70);
                                succeeded = (strcmp(Var_63, (MR_String) "type_info") == 0);
                                if (succeeded)
                                {
                                  Var_64 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_70);
                                  succeeded = (strcmp(Var_64, (MR_String) "private_builtin") == 0);
                                }
                              }
                            }
                            if (succeeded)
                            {
                              MR_Word PrivateBuiltinTypeInfo_30;
                              MR_Word TypeCtorInfo_101_101 = (MR_Word) &mercury__private_builtin__private_builtin__type_ctor_info_type_info_0;
                              MR_Box conv11_PrivateBuiltinTypeInfo_30;

                              mercury__univ__det_univ_to_type_2_p_0(TypeCtorInfo_101_101, Univ_9, &conv11_PrivateBuiltinTypeInfo_30);
                              PrivateBuiltinTypeInfo_30 = ((MR_Word) conv11_PrivateBuiltinTypeInfo_30);
                              mercury__stream__string_writer__write_private_builtin_type_info_4_p_0(TypeClassInfo_for_writer_81, Stream_7, PrivateBuiltinTypeInfo_30, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
                            }
                            else
                              mercury__stream__string_writer__write_ordinary_term_6_p_3(TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, NonCanon_8, Univ_9, Priority_10, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
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
    break;
  }
}

static void MR_CALL 
mercury__stream__string_writer__write_ordinary_term_6_p_3(
  MR_Word TypeClassInfo_for_writer_50,
  MR_Word TypeClassInfo_for_writer_51,
  MR_Box Stream_7,
  MR_Word NonCanon_8,
  MR_Word Univ_9,
  MR_Integer Priority_10,
  MR_Box STATE_VARIABLE_State_0_24,
  MR_Box * STATE_VARIABLE_State_25)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 0)));
    MR_Box Term_12 = (MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 1));
    MR_String Functor_13;
    MR_Word Args_15;
    MR_Integer _Arity_14;
    MR_Word ListHead_16;
    MR_Word ListTail_17;
    MR_Word Var_26;
    MR_Word Var_27;

    mercury__deconstruct__deconstruct_5_p_3(TypeInfo_52_52, Term_12, NonCanon_8, &Functor_13, &_Arity_14, &Args_15);
    succeeded = (strcmp(Functor_13, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ListHead_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
        Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          ListTail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0)));
          Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1)));
          succeeded = (Var_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_State_29_29;
      MR_Box STATE_VARIABLE_State_30_30;
      MR_Box STATE_VARIABLE_State_31_31;
      MR_Integer ArgPriority_61;
      MR_Box STATE_VARIABLE_State_13_62;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      func_0(((MR_Box) TypeClassInfo_for_writer_51), Stream_7, ((MR_Box) (MR_Word) ((MR_Char) 91)), STATE_VARIABLE_State_0_24, &STATE_VARIABLE_State_29_29);
      mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_3_p_0(&ArgPriority_61, STATE_VARIABLE_State_29_29, &STATE_VARIABLE_State_13_62);
      mercury__stream__string_writer__do_write_univ_prio_6_p_3(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, ListHead_16, ArgPriority_61, STATE_VARIABLE_State_13_62, &STATE_VARIABLE_State_30_30);
      mercury__stream__string_writer__write_list_tail_5_p_3(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, ListTail_17, STATE_VARIABLE_State_30_30, &STATE_VARIABLE_State_31_31);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
      func_1(((MR_Box) TypeClassInfo_for_writer_51), Stream_7, ((MR_Box) (MR_Word) ((MR_Char) 93)), STATE_VARIABLE_State_31_31, STATE_VARIABLE_State_25);
    }
    else
    {
      succeeded = (strcmp(Functor_13, (MR_String) "[]") == 0);
      if (succeeded)
        succeeded = (Args_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5)));

        func_2(((MR_Box) TypeClassInfo_for_writer_50), Stream_7, ((MR_Box) ((MR_String) "[]")), STATE_VARIABLE_State_0_24, STATE_VARIABLE_State_25);
      }
      else
      {
        MR_Word BracedHead_18;
        MR_Word BracedTail_19;

        succeeded = (strcmp(Functor_13, (MR_String) "{}") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            BracedHead_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
            BracedTail_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
          }
        }
        if (succeeded)
          if ((BracedTail_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Box STATE_VARIABLE_State_43_43;
            MR_Box STATE_VARIABLE_State_44_44;
            MR_Integer Var_72;
            void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5)));
            void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            func_3(((MR_Box) TypeClassInfo_for_writer_50), Stream_7, ((MR_Box) ((MR_String) "{ ")), STATE_VARIABLE_State_0_24, &STATE_VARIABLE_State_43_43);
            Var_72 = ((MR_Integer) 1200 + (MR_Integer) 1);
            mercury__stream__string_writer__do_write_univ_prio_6_p_3(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, BracedHead_18, Var_72, STATE_VARIABLE_State_43_43, &STATE_VARIABLE_State_44_44);
            func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5)));
            func_4(((MR_Box) TypeClassInfo_for_writer_50), Stream_7, ((MR_Box) ((MR_String) " }")), STATE_VARIABLE_State_44_44, STATE_VARIABLE_State_25);
          }
          else
          {
            MR_Box STATE_VARIABLE_State_37_37;
            MR_Box STATE_VARIABLE_State_38_38;
            MR_Box STATE_VARIABLE_State_39_39;
            MR_Integer ArgPriority_84;
            MR_Box STATE_VARIABLE_State_13_85;
            void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
            void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            func_5(((MR_Box) TypeClassInfo_for_writer_51), Stream_7, ((MR_Box) (MR_Word) ((MR_Char) 123)), STATE_VARIABLE_State_0_24, &STATE_VARIABLE_State_37_37);
            mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_3_p_0(&ArgPriority_84, STATE_VARIABLE_State_37_37, &STATE_VARIABLE_State_13_85);
            mercury__stream__string_writer__do_write_univ_prio_6_p_3(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, BracedHead_18, ArgPriority_84, STATE_VARIABLE_State_13_85, &STATE_VARIABLE_State_38_38);
            mercury__stream__string_writer__write_term_args_5_p_3(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, BracedTail_19, STATE_VARIABLE_State_38_38, &STATE_VARIABLE_State_39_39);
            func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
            func_6(((MR_Box) TypeClassInfo_for_writer_51), Stream_7, ((MR_Box) (MR_Word) ((MR_Char) 125)), STATE_VARIABLE_State_39_39, STATE_VARIABLE_State_25);
          }
        else
        {
          MR_Word FirstOpInfo_22;
          MR_Word OtherOpInfos_23;
          MR_Word TypeClassInfo_for_op_table_53;
          MR_bool MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
          MR_Box conv9_FirstOpInfo_22;
          MR_Box conv8_OtherOpInfos_23;

          TypeClassInfo_for_op_table_53 = (MR_Word) &mercury__stream__string_writer_scalar_common_1[0];
          func_7 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_53, (MR_Integer) 0)), (MR_Integer) 10)));
          succeeded = func_7(((MR_Box) TypeClassInfo_for_op_table_53), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Functor_13)), &conv9_FirstOpInfo_22, &conv8_OtherOpInfos_23);
          if (succeeded)
          {
            FirstOpInfo_22 = ((MR_Word) conv9_FirstOpInfo_22);
            OtherOpInfos_23 = ((MR_Word) conv8_OtherOpInfos_23);
            succeeded = MR_TRUE;
          }
          if (succeeded)
            mercury__stream__string_writer__select_op_info_and_print_9_p_3(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, FirstOpInfo_22, OtherOpInfos_23, Priority_10, Functor_13, Args_15, STATE_VARIABLE_State_0_24, STATE_VARIABLE_State_25);
          else
          {
            MR_Box STATE_VARIABLE_State_17_99;

            mercury__term_io__quote_atom_agt_5_p_0(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, Functor_13, (MR_Integer) 0, STATE_VARIABLE_State_0_24, &STATE_VARIABLE_State_17_99);
            if ((Args_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *STATE_VARIABLE_State_25 = STATE_VARIABLE_State_17_99;
            else
            {
              MR_Word X_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
              MR_Word Xs_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
              MR_Box STATE_VARIABLE_State_19_101;
              MR_Box STATE_VARIABLE_State_20_102;
              MR_Box STATE_VARIABLE_State_21_103;

              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_51, Stream_7, ((MR_Box) (MR_Word) ((MR_Char) 40)), STATE_VARIABLE_State_17_99, &STATE_VARIABLE_State_19_101);
              mercury__stream__string_writer__write_arg_5_p_3(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, X_96, STATE_VARIABLE_State_19_101, &STATE_VARIABLE_State_20_102);
              mercury__stream__string_writer__write_term_args_5_p_3(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, Xs_97, STATE_VARIABLE_State_20_102, &STATE_VARIABLE_State_21_103);
              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_51, Stream_7, ((MR_Box) (MR_Word) ((MR_Char) 41)), STATE_VARIABLE_State_21_103, STATE_VARIABLE_State_25);
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
mercury__stream__string_writer__write_term_args_5_p_3(
  MR_Word TypeClassInfo_for_writer_22,
  MR_Word TypeClassInfo_for_writer_23,
  MR_Box HeadVar__1_1,
  MR_Word NonCanon_2,
  MR_Word HeadVar__3_3,
  MR_Box STATE_VARIABLE_State_0_4,
  MR_Box * STATE_VARIABLE_State_5)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_State_5 = STATE_VARIABLE_State_0_4;
    else
    {
      MR_Word X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Xs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Box STATE_VARIABLE_State_19_19;
      MR_Box STATE_VARIABLE_State_20_20;
      MR_Integer ArgPriority_30;
      MR_Box STATE_VARIABLE_State_13_31;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_22, (MR_Integer) 0)), (MR_Integer) 5)));

      func_0(((MR_Box) TypeClassInfo_for_writer_22), HeadVar__1_1, ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_State_0_4, &STATE_VARIABLE_State_19_19);
      mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_3_p_0(&ArgPriority_30, STATE_VARIABLE_State_19_19, &STATE_VARIABLE_State_13_31);
      mercury__stream__string_writer__do_write_univ_prio_6_p_3(TypeClassInfo_for_writer_22, TypeClassInfo_for_writer_23, HeadVar__1_1, NonCanon_2, X_13, ArgPriority_30, STATE_VARIABLE_State_13_31, &STATE_VARIABLE_State_20_20);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__3_3 = Xs_14;
        MR_Box next_value_of_STATE_VARIABLE_State_0_4 = STATE_VARIABLE_State_20_20;

        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_State_0_4 = next_value_of_STATE_VARIABLE_State_0_4;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__stream__string_writer__print_4_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word TypeClassInfo_for_writer_12,
  MR_Word TypeClassInfo_for_writer_13,
  MR_Box Stream_5,
  MR_Box Term_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  {
    mercury__stream__string_writer__print_5_p_1(TypeInfo_for_T_14, TypeClassInfo_for_writer_12, TypeClassInfo_for_writer_13, Stream_5, (MR_Integer) 1, Term_6, STATE_VARIABLE_State_0_8, STATE_VARIABLE_State_9);
  }
}

void MR_CALL 
mercury__stream__string_writer__print_5_p_1(
  MR_Word TypeInfo_for_T_36,
  MR_Word TypeClassInfo_for_writer_34,
  MR_Word TypeClassInfo_for_writer_35,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8,
  MR_Box STATE_VARIABLE_State_0_17,
  MR_Box * STATE_VARIABLE_State_18)
{
  {
    MR_bool succeeded;
    MR_String String_10;
    MR_Word TypeCtorInfo_37_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Box conv0_String_10;

    succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_36, TypeCtorInfo_37_37, Term_8, &conv0_String_10);
    if (succeeded)
    {
      String_10 = ((MR_String) conv0_String_10);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));

      func_1(((MR_Box) TypeClassInfo_for_writer_34), Stream_6, ((MR_Box) (String_10)), STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
    }
    else
    {
      MR_Char Char_11;
      MR_Word TypeCtorInfo_38_38 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
      MR_Box conv2_Char_11;

      succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_36, TypeCtorInfo_38_38, Term_8, &conv2_Char_11);
      if (succeeded)
      {
        Char_11 = ((MR_Char) (MR_Word) conv2_Char_11);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_35, (MR_Integer) 0)), (MR_Integer) 5)));

        func_3(((MR_Box) TypeClassInfo_for_writer_35), Stream_6, ((MR_Box) (MR_Word) (Char_11)), STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
      }
      else
      {
        MR_Unsigned UInt_12;
        MR_Word TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_uint_0;
        MR_Box conv4_UInt_12;

        succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_36, TypeCtorInfo_39_39, Term_8, &conv4_UInt_12);
        if (succeeded)
        {
          UInt_12 = ((MR_Unsigned) conv4_UInt_12);
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_String Var_24;
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__stream__string_writer__print_5_p_1

	MR_Unsigned U;
	MR_String Str;

	U =  UInt_12 ;
		{

    char buffer[21];
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "u", U);
    MR_allocate_aligned_string_msg(Str, strlen(buffer), MR_ALLOC_ID);
    strcpy(Str, buffer);


		;}
#undef MR_PROC_LABEL
	 Var_24  = Str;
}
          func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
          func_5(((MR_Box) TypeClassInfo_for_writer_34), Stream_6, ((MR_Box) (Var_24)), STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
        }
        else
        {
          MR_Word OrigUniv_13;
          MR_Word TypeCtorInfo_40_40 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
          MR_Box conv6_OrigUniv_13;

          succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_36, TypeCtorInfo_40_40, Term_8, &conv6_OrigUniv_13);
          if (succeeded)
          {
            OrigUniv_13 = ((MR_Word) conv6_OrigUniv_13);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Integer Var_65 = ((MR_Integer) 1200 + (MR_Integer) 1);

            mercury__stream__string_writer__do_write_univ_prio_6_p_1(TypeClassInfo_for_writer_34, TypeClassInfo_for_writer_35, Stream_6, (MR_Integer) 1, OrigUniv_13, Var_65, STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
          }
          else
          {
            MR_Word BigInt_14;
            MR_Word TypeCtorInfo_41_41 = (MR_Word) &mercury__integer__integer__type_ctor_info_integer_0;
            MR_Box conv7_BigInt_14;

            succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_36, TypeCtorInfo_41_41, Term_8, &conv7_BigInt_14);
            if (succeeded)
            {
              BigInt_14 = ((MR_Word) conv7_BigInt_14);
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_String Var_27;
              void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              Var_27 = mercury__integer__to_base_string_2_f_0(BigInt_14, (MR_Integer) 10);
              func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
              func_8(((MR_Box) TypeClassInfo_for_writer_34), Stream_6, ((MR_Box) (Var_27)), STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
            }
            else
            {
              MR_Word DateTime_15;
              MR_Word TypeCtorInfo_42_42 = (MR_Word) &mercury__calendar__calendar__type_ctor_info_date_0;
              MR_Box conv9_DateTime_15;

              succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_36, TypeCtorInfo_42_42, Term_8, &conv9_DateTime_15);
              if (succeeded)
              {
                DateTime_15 = ((MR_Word) conv9_DateTime_15);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_String Var_29;
                void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                Var_29 = mercury__calendar__date_to_string_1_f_0(DateTime_15);
                func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
                func_10(((MR_Box) TypeClassInfo_for_writer_34), Stream_6, ((MR_Box) (Var_29)), STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
              }
              else
              {
                MR_Word Duration_16;
                MR_Word TypeCtorInfo_43_43 = (MR_Word) &mercury__calendar__calendar__type_ctor_info_duration_0;
                MR_Box conv11_Duration_16;

                succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_36, TypeCtorInfo_43_43, Term_8, &conv11_Duration_16);
                if (succeeded)
                {
                  Duration_16 = ((MR_Word) conv11_Duration_16);
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_String Var_31;
                  void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                  Var_31 = mercury__calendar__duration_to_string_1_f_0(Duration_16);
                  func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
                  func_12(((MR_Box) TypeClassInfo_for_writer_34), Stream_6, ((MR_Box) (Var_31)), STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
                }
                else
                  mercury__stream__string_writer__print_quoted_5_p_1(TypeInfo_for_T_36, TypeClassInfo_for_writer_34, TypeClassInfo_for_writer_35, Stream_6, NonCanon_7, Term_8, STATE_VARIABLE_State_0_17, STATE_VARIABLE_State_18);
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
mercury__stream__string_writer__print_quoted_5_p_1(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeClassInfo_for_writer_13,
  MR_Word TypeClassInfo_for_writer_14,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Box Term_8,
  MR_Box STATE_VARIABLE_State_0_10,
  MR_Box * STATE_VARIABLE_State_11)
{
  {
    MR_Word Univ_22;
    MR_Integer Var_30;
    MR_Integer Var_32;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_15, Term_8, &Univ_22);
    Var_32 = mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_109_97_120_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_in__ops_0();
    Var_30 = (Var_32 + (MR_Integer) 1);
    mercury__stream__string_writer__do_write_univ_prio_6_p_1(TypeClassInfo_for_writer_13, TypeClassInfo_for_writer_14, Stream_6, NonCanon_7, Univ_22, Var_30, STATE_VARIABLE_State_0_10, STATE_VARIABLE_State_11);
  }
}

static MR_Integer MR_CALL 
mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_109_97_120_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

static void MR_CALL 
mercury__stream__string_writer__select_remaining_op_info_and_print_8_p_1(
  MR_Word TypeClassInfo_for_writer_36,
  MR_Word TypeClassInfo_for_writer_37,
  MR_Box Stream_1,
  MR_Word NonCanon_2,
  MR_Word HeadVar__3_3,
  MR_Integer Priority_4,
  MR_String Functor_5,
  MR_Word Args_6,
  MR_Box STATE_VARIABLE_State_0_7,
  MR_Box * STATE_VARIABLE_State_8)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer Var_28;

      succeeded = (Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        Var_28 = (MR_Integer) 1200;
        succeeded = (Priority_4 <= Var_28);
      }
      if (succeeded)
      {
        MR_Box STATE_VARIABLE_State_31_31;
        MR_Box STATE_VARIABLE_State_32_32;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_37, (MR_Integer) 0)), (MR_Integer) 5)));
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_0(((MR_Box) TypeClassInfo_for_writer_37), Stream_1, ((MR_Box) (MR_Word) ((MR_Char) 40)), STATE_VARIABLE_State_0_7, &STATE_VARIABLE_State_31_31);
        mercury__term_io__quote_atom_agt_5_p_0(TypeClassInfo_for_writer_36, TypeClassInfo_for_writer_37, Stream_1, Functor_5, (MR_Integer) 1, STATE_VARIABLE_State_31_31, &STATE_VARIABLE_State_32_32);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_37, (MR_Integer) 0)), (MR_Integer) 5)));
        func_1(((MR_Box) TypeClassInfo_for_writer_37), Stream_1, ((MR_Box) (MR_Word) ((MR_Char) 41)), STATE_VARIABLE_State_32_32, STATE_VARIABLE_State_8);
      }
      else
      {
        MR_Box STATE_VARIABLE_State_17_54;

        mercury__term_io__quote_atom_agt_5_p_0(TypeClassInfo_for_writer_36, TypeClassInfo_for_writer_37, Stream_1, Functor_5, (MR_Integer) 0, STATE_VARIABLE_State_0_7, &STATE_VARIABLE_State_17_54);
        if ((Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *STATE_VARIABLE_State_8 = STATE_VARIABLE_State_17_54;
        else
        {
          MR_Word X_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_6, (MR_Integer) 0)));
          MR_Word Xs_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_6, (MR_Integer) 1)));
          MR_Box STATE_VARIABLE_State_19_56;
          MR_Box STATE_VARIABLE_State_20_57;
          MR_Box STATE_VARIABLE_State_21_58;

          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_37, Stream_1, ((MR_Box) (MR_Word) ((MR_Char) 40)), STATE_VARIABLE_State_17_54, &STATE_VARIABLE_State_19_56);
          mercury__stream__string_writer__write_arg_5_p_1(TypeClassInfo_for_writer_36, TypeClassInfo_for_writer_37, Stream_1, NonCanon_2, X_51, STATE_VARIABLE_State_19_56, &STATE_VARIABLE_State_20_57);
          mercury__stream__string_writer__write_term_args_5_p_1(TypeClassInfo_for_writer_36, TypeClassInfo_for_writer_37, Stream_1, NonCanon_2, Xs_52, STATE_VARIABLE_State_20_57, &STATE_VARIABLE_State_21_58);
          mercury__stream__put_4_p_0(TypeClassInfo_for_writer_37, Stream_1, ((MR_Box) (MR_Word) ((MR_Char) 41)), STATE_VARIABLE_State_21_58, STATE_VARIABLE_State_8);
        }
      }
    }
    else
    {
      MR_Word FirstOpInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word MoreOpInfos_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));

      mercury__stream__string_writer__select_op_info_and_print_9_p_1(TypeClassInfo_for_writer_36, TypeClassInfo_for_writer_37, Stream_1, NonCanon_2, FirstOpInfo_11, MoreOpInfos_12, Priority_4, Functor_5, Args_6, STATE_VARIABLE_State_0_7, STATE_VARIABLE_State_8);
    }
  }
}

static void MR_CALL 
mercury__stream__string_writer__select_op_info_and_print_9_p_1(
  MR_Word TypeClassInfo_for_writer_121,
  MR_Word TypeClassInfo_for_writer_122,
  MR_Box Stream_10,
  MR_Word NonCanon_11,
  MR_Word OpInfo_12,
  MR_Word OtherOpInfos_13,
  MR_Integer Priority_14,
  MR_String Functor_15,
  MR_Word Args_16,
  MR_Box STATE_VARIABLE_State_0_48,
  MR_Box * STATE_VARIABLE_State_49)
{
  {
    MR_bool succeeded;
    MR_Word OpClass_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
    MR_Integer Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) OpClass_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Arg1_30;
          MR_Word Arg2_31;
          MR_Word Var_64;
          MR_Word Var_65;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Arg1_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_64)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Arg2_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 0)));
              Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 1)));
              succeeded = (Var_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          if (succeeded)
          {
            MR_Word LeftAssoc_33;
            MR_Integer LeftPriority_35;
            MR_Word RightAssoc_37;
            MR_Integer RightPriority_38;
            MR_Box STATE_VARIABLE_State_67_67;
            MR_Box STATE_VARIABLE_State_68_68;
            MR_Box STATE_VARIABLE_State_70_70;
            MR_Box STATE_VARIABLE_State_76_76;
            MR_Integer OpPriority_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
            MR_Word Var_34;
            MR_Word Var_36;

            succeeded = (OpPriority_111 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_2(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 40)), STATE_VARIABLE_State_0_48, &STATE_VARIABLE_State_67_67);
            }
            else
              STATE_VARIABLE_State_67_67 = STATE_VARIABLE_State_0_48;
            LeftAssoc_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 0)));
            Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 1)));
            switch (LeftAssoc_33) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  LeftPriority_35 = (OpPriority_111 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                LeftPriority_35 = OpPriority_111;
                break;
            }
            mercury__stream__string_writer__do_write_univ_prio_6_p_1(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg1_30, LeftPriority_35, STATE_VARIABLE_State_67_67, &STATE_VARIABLE_State_68_68);
            succeeded = (strcmp(Functor_15, (MR_String) ",") == 0);
            if (succeeded)
            {
              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, Stream_10, ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_State_68_68, &STATE_VARIABLE_State_70_70);
            }
            else
            {
              MR_Box STATE_VARIABLE_State_72_72;
              MR_Box STATE_VARIABLE_State_73_73;

              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, Stream_10, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_68_68, &STATE_VARIABLE_State_72_72);
              mercury__term_io__quote_atom_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15, STATE_VARIABLE_State_72_72, &STATE_VARIABLE_State_73_73);
              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, Stream_10, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_73_73, &STATE_VARIABLE_State_70_70);
            }
            Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 0)));
            RightAssoc_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpClass_18, (MR_Integer) 1)));
            switch (RightAssoc_37) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  RightPriority_38 = (OpPriority_111 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                RightPriority_38 = OpPriority_111;
                break;
            }
            mercury__stream__string_writer__do_write_univ_prio_6_p_1(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg2_31, RightPriority_38, STATE_VARIABLE_State_70_70, &STATE_VARIABLE_State_76_76);
            succeeded = (OpPriority_111 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_3(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 41)), STATE_VARIABLE_State_76_76, STATE_VARIABLE_State_49);
            }
            else
              *STATE_VARIABLE_State_49 = STATE_VARIABLE_State_76_76;
          }
          else
            mercury__stream__string_writer__select_remaining_op_info_and_print_8_p_1(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16, STATE_VARIABLE_State_0_48, STATE_VARIABLE_State_49);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Arg_21;
          MR_Word Var_90;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Arg_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = (Var_90 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Integer OpPriority_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word OpAssoc_24;
            MR_Integer NewPriority_25;
            MR_Box STATE_VARIABLE_State_92_92;
            MR_Box STATE_VARIABLE_State_93_93;
            MR_Box STATE_VARIABLE_State_95_95;
            MR_Box STATE_VARIABLE_State_96_96;
            MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));

            succeeded = (OpPriority_23 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_6(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 40)), STATE_VARIABLE_State_0_48, &STATE_VARIABLE_State_92_92);
            }
            else
              STATE_VARIABLE_State_92_92 = STATE_VARIABLE_State_0_48;
            mercury__term_io__quote_atom_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15, STATE_VARIABLE_State_92_92, &STATE_VARIABLE_State_93_93);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, Stream_10, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_93_93, &STATE_VARIABLE_State_95_95);
            OpAssoc_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), OpClass_18, (MR_Integer) 0)));
            switch (OpAssoc_24) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  NewPriority_25 = (OpPriority_23 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                NewPriority_25 = OpPriority_23;
                break;
            }
            mercury__stream__string_writer__do_write_univ_prio_6_p_1(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg_21, NewPriority_25, STATE_VARIABLE_State_95_95, &STATE_VARIABLE_State_96_96);
            succeeded = (OpPriority_23 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_7(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 41)), STATE_VARIABLE_State_96_96, STATE_VARIABLE_State_49);
            }
            else
              *STATE_VARIABLE_State_49 = STATE_VARIABLE_State_96_96;
          }
          else
            mercury__stream__string_writer__select_remaining_op_info_and_print_8_p_1(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16, STATE_VARIABLE_State_0_48, STATE_VARIABLE_State_49);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Arg1_116;
          MR_Word Arg2_117;
          MR_Word Var_50;
          MR_Word Var_51;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Arg1_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_50)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Arg2_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 0)));
              Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 1)));
              succeeded = (Var_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          if (succeeded)
          {
            MR_Word FirstAssoc_42;
            MR_Integer FirstPriority_44;
            MR_Word SecondAssoc_46;
            MR_Integer SecondPriority_47;
            MR_Box STATE_VARIABLE_State_53_53;
            MR_Box STATE_VARIABLE_State_54_54;
            MR_Box STATE_VARIABLE_State_56_56;
            MR_Box STATE_VARIABLE_State_57_57;
            MR_Box STATE_VARIABLE_State_59_59;
            MR_Box STATE_VARIABLE_State_60_60;
            MR_Integer OpPriority_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));
            MR_Word Var_43;
            MR_Word Var_45;

            succeeded = (OpPriority_114 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_0(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 40)), STATE_VARIABLE_State_0_48, &STATE_VARIABLE_State_53_53);
            }
            else
              STATE_VARIABLE_State_53_53 = STATE_VARIABLE_State_0_48;
            mercury__term_io__quote_atom_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15, STATE_VARIABLE_State_53_53, &STATE_VARIABLE_State_54_54);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, Stream_10, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_54_54, &STATE_VARIABLE_State_56_56);
            FirstAssoc_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 0)));
            Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 1)));
            switch (FirstAssoc_42) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  FirstPriority_44 = (OpPriority_114 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                FirstPriority_44 = OpPriority_114;
                break;
            }
            mercury__stream__string_writer__do_write_univ_prio_6_p_1(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg1_116, FirstPriority_44, STATE_VARIABLE_State_56_56, &STATE_VARIABLE_State_57_57);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, Stream_10, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_57_57, &STATE_VARIABLE_State_59_59);
            Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 0)));
            SecondAssoc_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), OpClass_18, (MR_Integer) 1)));
            switch (SecondAssoc_46) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  SecondPriority_47 = (OpPriority_114 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                SecondPriority_47 = OpPriority_114;
                break;
            }
            mercury__stream__string_writer__do_write_univ_prio_6_p_1(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, Arg2_117, SecondPriority_47, STATE_VARIABLE_State_59_59, &STATE_VARIABLE_State_60_60);
            succeeded = (OpPriority_114 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_1(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 41)), STATE_VARIABLE_State_60_60, STATE_VARIABLE_State_49);
            }
            else
              *STATE_VARIABLE_State_49 = STATE_VARIABLE_State_60_60;
          }
          else
            mercury__stream__string_writer__select_remaining_op_info_and_print_8_p_1(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16, STATE_VARIABLE_State_0_48, STATE_VARIABLE_State_49);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word PostfixArg_26;
          MR_Word Var_80;

          succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            PostfixArg_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
            Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
            succeeded = (Var_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Box STATE_VARIABLE_State_82_82;
            MR_Box STATE_VARIABLE_State_83_83;
            MR_Box STATE_VARIABLE_State_85_85;
            MR_Box STATE_VARIABLE_State_86_86;
            MR_Integer OpPriority_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 1)));
            MR_Word OpAssoc_102;
            MR_Integer NewPriority_103;
            MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpInfo_12, (MR_Integer) 0)));

            succeeded = (OpPriority_101 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_4(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 40)), STATE_VARIABLE_State_0_48, &STATE_VARIABLE_State_82_82);
            }
            else
              STATE_VARIABLE_State_82_82 = STATE_VARIABLE_State_0_48;
            OpAssoc_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), OpClass_18, (MR_Integer) 0)));
            switch (OpAssoc_102) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  NewPriority_103 = (OpPriority_101 - (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                NewPriority_103 = OpPriority_101;
                break;
            }
            mercury__stream__string_writer__do_write_univ_prio_6_p_1(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, PostfixArg_26, NewPriority_103, STATE_VARIABLE_State_82_82, &STATE_VARIABLE_State_83_83);
            mercury__stream__put_4_p_0(TypeClassInfo_for_writer_121, Stream_10, ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_State_83_83, &STATE_VARIABLE_State_85_85);
            mercury__term_io__quote_atom_4_p_0(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, Functor_15, STATE_VARIABLE_State_85_85, &STATE_VARIABLE_State_86_86);
            succeeded = (OpPriority_101 > Priority_14);
            if (succeeded)
            {
              void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_122, (MR_Integer) 0)), (MR_Integer) 5)));

              func_5(((MR_Box) TypeClassInfo_for_writer_122), Stream_10, ((MR_Box) (MR_Word) ((MR_Char) 41)), STATE_VARIABLE_State_86_86, STATE_VARIABLE_State_49);
            }
            else
              *STATE_VARIABLE_State_49 = STATE_VARIABLE_State_86_86;
          }
          else
            mercury__stream__string_writer__select_remaining_op_info_and_print_8_p_1(TypeClassInfo_for_writer_121, TypeClassInfo_for_writer_122, Stream_10, NonCanon_11, OtherOpInfos_13, Priority_14, Functor_15, Args_16, STATE_VARIABLE_State_0_48, STATE_VARIABLE_State_49);
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__stream__string_writer__write_arg_5_p_1(
  MR_Word TypeClassInfo_for_writer_15,
  MR_Word TypeClassInfo_for_writer_16,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Word X_8,
  MR_Box STATE_VARIABLE_State_0_11,
  MR_Box * STATE_VARIABLE_State_12)
{
  {
    MR_Word TypeInfo_18_18;

{
#define MR_PROC_LABEL mercury__stream__string_writer__write_arg_5_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_15 ;
	Index =  (MR_Integer) 4 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_18_18  = TypeInfo;
}
    mercury__stream__string_writer__do_write_univ_prio_6_p_1(TypeClassInfo_for_writer_15, TypeClassInfo_for_writer_16, Stream_6, NonCanon_7, X_8, (MR_Integer) 1000, STATE_VARIABLE_State_0_11, STATE_VARIABLE_State_12);
  }
}

static void MR_CALL 
mercury__stream__string_writer__write_list_tail_5_p_1(
  MR_Word TypeClassInfo_for_writer_27,
  MR_Word TypeClassInfo_for_writer_28,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8,
  MR_Box STATE_VARIABLE_State_0_16,
  MR_Box * STATE_VARIABLE_State_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeInfo_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 0)));
    MR_Box Term_10 = (MR_hl_field(MR_mktag(0), Univ_8, (MR_Integer) 1));
    MR_String Functor_11;
    MR_Word Args_13;
    MR_Integer _Arity_12;
    MR_Word ListHead_14;
    MR_Word ListTail_15;
    MR_Word Var_18;
    MR_Word Var_19;

    /* setup for tailcalls optimized into a loop */
    mercury__deconstruct__deconstruct_5_p_1(TypeInfo_29_29, Term_10, NonCanon_7, &Functor_11, &_Arity_12, &Args_13);
    succeeded = (strcmp(Functor_11, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Args_13)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ListHead_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0)));
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          ListTail_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0)));
          Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1)));
          succeeded = (Var_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_State_21_21;
      MR_Box STATE_VARIABLE_State_22_22;
      MR_Integer ArgPriority_37;
      MR_Box STATE_VARIABLE_State_13_38;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));

      func_0(((MR_Box) TypeClassInfo_for_writer_27), Stream_6, ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_State_0_16, &STATE_VARIABLE_State_21_21);
      mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_3_p_0(&ArgPriority_37, STATE_VARIABLE_State_21_21, &STATE_VARIABLE_State_13_38);
      mercury__stream__string_writer__do_write_univ_prio_6_p_1(TypeClassInfo_for_writer_27, TypeClassInfo_for_writer_28, Stream_6, NonCanon_7, ListHead_14, ArgPriority_37, STATE_VARIABLE_State_13_38, &STATE_VARIABLE_State_22_22);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_Univ_8 = ListTail_15;
        MR_Box next_value_of_STATE_VARIABLE_State_0_16 = STATE_VARIABLE_State_22_22;

        Univ_8 = next_value_of_Univ_8;
        STATE_VARIABLE_State_0_16 = next_value_of_STATE_VARIABLE_State_0_16;
      }
      continue;
    }
    else
    {
      succeeded = (strcmp(Functor_11, (MR_String) "[]") == 0);
      if (succeeded)
        succeeded = (Args_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        *STATE_VARIABLE_State_17 = STATE_VARIABLE_State_0_16;
      else
      {
        MR_Box STATE_VARIABLE_State_25_25;
        MR_Integer Var_48;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_27, (MR_Integer) 0)), (MR_Integer) 5)));

        func_1(((MR_Box) TypeClassInfo_for_writer_27), Stream_6, ((MR_Box) ((MR_String) " | ")), STATE_VARIABLE_State_0_16, &STATE_VARIABLE_State_25_25);
        Var_48 = ((MR_Integer) 1200 + (MR_Integer) 1);
        mercury__stream__string_writer__do_write_univ_prio_6_p_1(TypeClassInfo_for_writer_27, TypeClassInfo_for_writer_28, Stream_6, NonCanon_7, Univ_8, Var_48, STATE_VARIABLE_State_25_25, STATE_VARIABLE_State_17);
      }
    }
    break;
  }
}

void MR_CALL 
mercury__stream__string_writer__do_write_univ_5_p_1(
  MR_Word TypeClassInfo_for_writer_17,
  MR_Word TypeClassInfo_for_writer_18,
  MR_Box Stream_6,
  MR_Word NonCanon_7,
  MR_Word Univ_8,
  MR_Box STATE_VARIABLE_State_0_10,
  MR_Box * STATE_VARIABLE_State_11)
{
  {
    MR_Integer Var_12 = ((MR_Integer) 1200 + (MR_Integer) 1);

    mercury__stream__string_writer__do_write_univ_prio_6_p_1(TypeClassInfo_for_writer_17, TypeClassInfo_for_writer_18, Stream_6, NonCanon_7, Univ_8, Var_12, STATE_VARIABLE_State_0_10, STATE_VARIABLE_State_11);
  }
}

void MR_CALL 
mercury__stream__string_writer__do_write_univ_prio_6_p_1(
  MR_Word TypeClassInfo_for_writer_81,
  MR_Word TypeClassInfo_for_writer_82,
  MR_Box Stream_7,
  MR_Word NonCanon_8,
  MR_Word Univ_9,
  MR_Integer Priority_10,
  MR_Box STATE_VARIABLE_State_0_31,
  MR_Box * STATE_VARIABLE_State_32)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_String String_12;
    MR_Word TypeCtorInfo_83_83 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Box conv0_String_12;

    /* setup for tailcalls optimized into a loop */
    succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_83_83, Univ_9, &conv0_String_12);
    if (succeeded)
    {
      String_12 = ((MR_String) conv0_String_12);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      mercury__term_io__quote_string_4_p_0(TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, String_12, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
    else
    {
      MR_Char Char_13;
      MR_Word TypeCtorInfo_84_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
      MR_Box conv1_Char_13;

      succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_84_84, Univ_9, &conv1_Char_13);
      if (succeeded)
      {
        Char_13 = ((MR_Char) (MR_Word) conv1_Char_13);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_p_in__term_io_0(TypeClassInfo_for_writer_81, Stream_7, Char_13, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
      else
      {
        MR_Integer Int_14;
        MR_Word TypeCtorInfo_85_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Box conv2_Int_14;

        succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_85_85, Univ_9, &conv2_Int_14);
        if (succeeded)
        {
          Int_14 = ((MR_Integer) conv2_Int_14);
          succeeded = MR_TRUE;
        }
        if (succeeded)
          mercury__stream__string_writer__put_int_4_p_0(TypeClassInfo_for_writer_81, Stream_7, Int_14, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
        else
        {
          MR_Unsigned UInt_15;
          MR_Word TypeCtorInfo_86_86 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_uint_0;
          MR_Box conv3_UInt_15;

          succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_86_86, Univ_9, &conv3_UInt_15);
          if (succeeded)
          {
            UInt_15 = ((MR_Unsigned) conv3_UInt_15);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Box STATE_VARIABLE_State_36_36;

            mercury__stream__string_writer__put_uint_4_p_0(TypeClassInfo_for_writer_81, Stream_7, UInt_15, STATE_VARIABLE_State_0_31, &STATE_VARIABLE_State_36_36);
            mercury__stream__string_writer__put_char_4_p_0(TypeClassInfo_for_writer_81, Stream_7, (MR_Char) 117, STATE_VARIABLE_State_36_36, STATE_VARIABLE_State_32);
          }
          else
          {
            MR_Float Float_16;
            MR_Word TypeCtorInfo_87_87 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
            MR_Box conv4_Float_16;

            succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_87_87, Univ_9, &conv4_Float_16);
            if (succeeded)
            {
              Float_16 = MR_unbox_float(conv4_Float_16);
              succeeded = MR_TRUE;
            }
            if (succeeded)
              mercury__stream__string_writer__put_float_4_p_0(TypeClassInfo_for_writer_81, Stream_7, Float_16, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
            else
            {
              MR_Box Bitmap_17;
              MR_Word TypeCtorInfo_88_88 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
              MR_Box conv5_Bitmap_17;

              succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_88_88, Univ_9, &conv5_Bitmap_17);
              if (succeeded)
              {
                Bitmap_17 = ((MR_Box) conv5_Bitmap_17);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Box STATE_VARIABLE_State_41_41;
                MR_String Var_42;
                MR_Box STATE_VARIABLE_State_43_43;

                mercury__stream__string_writer__put_char_4_p_0(TypeClassInfo_for_writer_81, Stream_7, (MR_Char) 34, STATE_VARIABLE_State_0_31, &STATE_VARIABLE_State_41_41);
                Var_42 = mercury__bitmap__to_string_1_f_0(Bitmap_17);
                mercury__stream__put_4_p_0(TypeClassInfo_for_writer_81, Stream_7, ((MR_Box) (Var_42)), STATE_VARIABLE_State_41_41, &STATE_VARIABLE_State_43_43);
                mercury__stream__string_writer__put_char_4_p_0(TypeClassInfo_for_writer_81, Stream_7, (MR_Char) 34, STATE_VARIABLE_State_43_43, STATE_VARIABLE_State_32);
              }
              else
              {
                MR_Word TypeDesc_18;
                MR_Word TypeCtorInfo_89_89 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
                MR_Box conv6_TypeDesc_18;

                succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_89_89, Univ_9, &conv6_TypeDesc_18);
                if (succeeded)
                {
                  TypeDesc_18 = ((MR_Word) conv6_TypeDesc_18);
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                  mercury__stream__string_writer__write_type_desc_4_p_0(TypeClassInfo_for_writer_81, Stream_7, TypeDesc_18, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
                else
                {
                  MR_Word TypeCtorDesc_19;
                  MR_Word TypeCtorInfo_90_90 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0;
                  MR_Box conv7_TypeCtorDesc_19;

                  succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_90_90, Univ_9, &conv7_TypeCtorDesc_19);
                  if (succeeded)
                  {
                    TypeCtorDesc_19 = ((MR_Word) conv7_TypeCtorDesc_19);
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                    mercury__stream__string_writer__write_type_ctor_desc_4_p_0(TypeClassInfo_for_writer_81, Stream_7, TypeCtorDesc_19, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
                  else
                  {
                    MR_Word C_Pointer_20;
                    MR_Word TypeCtorInfo_91_91 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_c_pointer_0;
                    MR_Box conv8_C_Pointer_20;

                    succeeded = mercury__univ__univ_to_type_2_p_0(TypeCtorInfo_91_91, Univ_9, &conv8_C_Pointer_20);
                    if (succeeded)
                    {
                      C_Pointer_20 = ((MR_Word) conv8_C_Pointer_20);
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                      mercury__stream__string_writer__write_c_pointer_4_p_0(TypeClassInfo_for_writer_81, Stream_7, C_Pointer_20, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
                    else
                    {
                      MR_Word StreamInfo_22;
                      MR_Word TypeInfo_92_92;
                      MR_Word StreamDB_21;
                      MR_Box Var_49;

                      mercury__io__get_stream_db_with_locking_1_p_0(&StreamDB_21);
                      Var_49 = mercury__univ__univ_value_1_f_0(&TypeInfo_92_92, Univ_9);
                      succeeded = mercury__io__get_io_stream_info_2_f_0(TypeInfo_92_92, StreamDB_21, Var_49, &StreamInfo_22);
                      if (succeeded)
                      {
                        MR_Word TypeCtorInfo_93_93 = (MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0;
                        MR_Word StreamInfoUniv_23;

                        mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_93_93, ((MR_Box) (StreamInfo_22)), &StreamInfoUniv_23);
                        /* direct tailcall eliminated */
                        {
                          MR_Word next_value_of_Univ_9 = StreamInfoUniv_23;

                          Univ_9 = next_value_of_Univ_9;
                        }
                        continue;
                      }
                      else
                      {
                        MR_Word ElemType_26;
                        MR_Word TypeCtor_24;
                        MR_Word ArgTypes_25;
                        MR_Word Var_51;
                        MR_Word Var_52;
                        MR_String Var_53;
                        MR_String Var_54;

                        Var_51 = mercury__univ__univ_type_1_f_0(Univ_9);
                        mercury__type_desc__type_ctor_and_args_3_p_0(Var_51, &TypeCtor_24, &ArgTypes_25);
                        succeeded = ((MR_tag((MR_Word) ArgTypes_25)) == (MR_mktag((MR_Integer) 1)));
                        if (succeeded)
                        {
                          ElemType_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_25, (MR_Integer) 0)));
                          Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_25, (MR_Integer) 1)));
                          succeeded = (Var_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (succeeded)
                          {
                            Var_53 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_24);
                            succeeded = (strcmp(Var_53, (MR_String) "array") == 0);
                            if (succeeded)
                            {
                              Var_54 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_24);
                              succeeded = (strcmp(Var_54, (MR_String) "array") == 0);
                            }
                          }
                        }
                        if (succeeded)
                        {
                          MR_Word TypeInfo_94_94;
                          MR_Word TypeCtorInfo_95_95;
                          MR_Word TypeInfo_96_96;
                          MR_ArrayPtr Array_28;
                          MR_Box Elem_27;
                          MR_Box conv9_Array_28;

                          mercury__type_desc__has_type_2_p_0(&TypeInfo_94_94, ElemType_26);
                          TypeCtorInfo_95_95 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
                          {
                            TypeInfo_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), TypeInfo_96_96, 0) = ((MR_Box) (TypeCtorInfo_95_95));
                            MR_hl_field(MR_mktag(0), TypeInfo_96_96, 1) = ((MR_Box) (TypeInfo_94_94));
                          }
                          mercury__univ__det_univ_to_type_2_p_0(TypeInfo_96_96, Univ_9, &conv9_Array_28);
                          Array_28 = ((MR_ArrayPtr) conv9_Array_28);
                          mercury__stream__string_writer__write_array_4_p_0(TypeInfo_94_94, TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, (MR_ArrayPtr) Array_28, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
                        }
                        else
                        {
                          MR_Word ElemType_79;
                          MR_Word Var_56;
                          MR_Word Var_57;
                          MR_String Var_58;
                          MR_String Var_59;
                          MR_Word TypeCtor_67;
                          MR_Word ArgTypes_68;

                          Var_56 = mercury__univ__univ_type_1_f_0(Univ_9);
                          mercury__type_desc__type_ctor_and_args_3_p_0(Var_56, &TypeCtor_67, &ArgTypes_68);
                          succeeded = ((MR_tag((MR_Word) ArgTypes_68)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            ElemType_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_68, (MR_Integer) 0)));
                            Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_68, (MR_Integer) 1)));
                            succeeded = (Var_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_58 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_67);
                              succeeded = (strcmp(Var_58, (MR_String) "version_array") == 0);
                              if (succeeded)
                              {
                                Var_59 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_67);
                                succeeded = (strcmp(Var_59, (MR_String) "version_array") == 0);
                              }
                            }
                          }
                          if (succeeded)
                          {
                            MR_Word TypeInfo_97_97;
                            MR_Word TypeCtorInfo_98_98;
                            MR_Word TypeInfo_99_99;
                            MR_Box VersionArray_29;
                            MR_Box Elem_69;
                            MR_Box conv10_VersionArray_29;

                            mercury__type_desc__has_type_2_p_0(&TypeInfo_97_97, ElemType_79);
                            TypeCtorInfo_98_98 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
                            {
                              TypeInfo_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), TypeInfo_99_99, 0) = ((MR_Box) (TypeCtorInfo_98_98));
                              MR_hl_field(MR_mktag(0), TypeInfo_99_99, 1) = ((MR_Box) (TypeInfo_97_97));
                            }
                            mercury__univ__det_univ_to_type_2_p_0(TypeInfo_99_99, Univ_9, &conv10_VersionArray_29);
                            VersionArray_29 = ((MR_Box) conv10_VersionArray_29);
                            mercury__stream__string_writer__write_version_array_4_p_0(TypeInfo_97_97, TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, VersionArray_29, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
                          }
                          else
                          {
                            MR_Word Var_61;
                            MR_Word Var_62;
                            MR_String Var_63;
                            MR_String Var_64;
                            MR_Word TypeCtor_70;
                            MR_Word ArgTypes_71;
                            MR_Word ElemType_75;

                            Var_61 = mercury__univ__univ_type_1_f_0(Univ_9);
                            mercury__type_desc__type_ctor_and_args_3_p_0(Var_61, &TypeCtor_70, &ArgTypes_71);
                            succeeded = ((MR_tag((MR_Word) ArgTypes_71)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              ElemType_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_71, (MR_Integer) 0)));
                              Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_71, (MR_Integer) 1)));
                              succeeded = (Var_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                Var_63 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtor_70);
                                succeeded = (strcmp(Var_63, (MR_String) "type_info") == 0);
                                if (succeeded)
                                {
                                  Var_64 = mercury__type_desc__type_ctor_module_name_1_f_0(TypeCtor_70);
                                  succeeded = (strcmp(Var_64, (MR_String) "private_builtin") == 0);
                                }
                              }
                            }
                            if (succeeded)
                            {
                              MR_Word PrivateBuiltinTypeInfo_30;
                              MR_Word TypeCtorInfo_101_101 = (MR_Word) &mercury__private_builtin__private_builtin__type_ctor_info_type_info_0;
                              MR_Box conv11_PrivateBuiltinTypeInfo_30;

                              mercury__univ__det_univ_to_type_2_p_0(TypeCtorInfo_101_101, Univ_9, &conv11_PrivateBuiltinTypeInfo_30);
                              PrivateBuiltinTypeInfo_30 = ((MR_Word) conv11_PrivateBuiltinTypeInfo_30);
                              mercury__stream__string_writer__write_private_builtin_type_info_4_p_0(TypeClassInfo_for_writer_81, Stream_7, PrivateBuiltinTypeInfo_30, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
                            }
                            else
                              mercury__stream__string_writer__write_ordinary_term_6_p_1(TypeClassInfo_for_writer_81, TypeClassInfo_for_writer_82, Stream_7, NonCanon_8, Univ_9, Priority_10, STATE_VARIABLE_State_0_31, STATE_VARIABLE_State_32);
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
    break;
  }
}

static void MR_CALL 
mercury__stream__string_writer__write_ordinary_term_6_p_1(
  MR_Word TypeClassInfo_for_writer_50,
  MR_Word TypeClassInfo_for_writer_51,
  MR_Box Stream_7,
  MR_Word NonCanon_8,
  MR_Word Univ_9,
  MR_Integer Priority_10,
  MR_Box STATE_VARIABLE_State_0_24,
  MR_Box * STATE_VARIABLE_State_25)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 0)));
    MR_Box Term_12 = (MR_hl_field(MR_mktag(0), Univ_9, (MR_Integer) 1));
    MR_String Functor_13;
    MR_Word Args_15;
    MR_Integer _Arity_14;
    MR_Word ListHead_16;
    MR_Word ListTail_17;
    MR_Word Var_26;
    MR_Word Var_27;

    mercury__deconstruct__deconstruct_5_p_1(TypeInfo_52_52, Term_12, NonCanon_8, &Functor_13, &_Arity_14, &Args_15);
    succeeded = (strcmp(Functor_13, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ListHead_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
        Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          ListTail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0)));
          Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1)));
          succeeded = (Var_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_State_29_29;
      MR_Box STATE_VARIABLE_State_30_30;
      MR_Box STATE_VARIABLE_State_31_31;
      MR_Integer ArgPriority_61;
      MR_Box STATE_VARIABLE_State_13_62;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      func_0(((MR_Box) TypeClassInfo_for_writer_51), Stream_7, ((MR_Box) (MR_Word) ((MR_Char) 91)), STATE_VARIABLE_State_0_24, &STATE_VARIABLE_State_29_29);
      mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_3_p_0(&ArgPriority_61, STATE_VARIABLE_State_29_29, &STATE_VARIABLE_State_13_62);
      mercury__stream__string_writer__do_write_univ_prio_6_p_1(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, ListHead_16, ArgPriority_61, STATE_VARIABLE_State_13_62, &STATE_VARIABLE_State_30_30);
      mercury__stream__string_writer__write_list_tail_5_p_1(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, ListTail_17, STATE_VARIABLE_State_30_30, &STATE_VARIABLE_State_31_31);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
      func_1(((MR_Box) TypeClassInfo_for_writer_51), Stream_7, ((MR_Box) (MR_Word) ((MR_Char) 93)), STATE_VARIABLE_State_31_31, STATE_VARIABLE_State_25);
    }
    else
    {
      succeeded = (strcmp(Functor_13, (MR_String) "[]") == 0);
      if (succeeded)
        succeeded = (Args_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5)));

        func_2(((MR_Box) TypeClassInfo_for_writer_50), Stream_7, ((MR_Box) ((MR_String) "[]")), STATE_VARIABLE_State_0_24, STATE_VARIABLE_State_25);
      }
      else
      {
        MR_Word BracedHead_18;
        MR_Word BracedTail_19;

        succeeded = (strcmp(Functor_13, (MR_String) "{}") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            BracedHead_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
            BracedTail_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
          }
        }
        if (succeeded)
          if ((BracedTail_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Box STATE_VARIABLE_State_43_43;
            MR_Box STATE_VARIABLE_State_44_44;
            MR_Integer Var_72;
            void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5)));
            void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            func_3(((MR_Box) TypeClassInfo_for_writer_50), Stream_7, ((MR_Box) ((MR_String) "{ ")), STATE_VARIABLE_State_0_24, &STATE_VARIABLE_State_43_43);
            Var_72 = ((MR_Integer) 1200 + (MR_Integer) 1);
            mercury__stream__string_writer__do_write_univ_prio_6_p_1(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, BracedHead_18, Var_72, STATE_VARIABLE_State_43_43, &STATE_VARIABLE_State_44_44);
            func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_50, (MR_Integer) 0)), (MR_Integer) 5)));
            func_4(((MR_Box) TypeClassInfo_for_writer_50), Stream_7, ((MR_Box) ((MR_String) " }")), STATE_VARIABLE_State_44_44, STATE_VARIABLE_State_25);
          }
          else
          {
            MR_Box STATE_VARIABLE_State_37_37;
            MR_Box STATE_VARIABLE_State_38_38;
            MR_Box STATE_VARIABLE_State_39_39;
            MR_Integer ArgPriority_84;
            MR_Box STATE_VARIABLE_State_13_85;
            void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
            void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            func_5(((MR_Box) TypeClassInfo_for_writer_51), Stream_7, ((MR_Box) (MR_Word) ((MR_Char) 123)), STATE_VARIABLE_State_0_24, &STATE_VARIABLE_State_37_37);
            mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_3_p_0(&ArgPriority_84, STATE_VARIABLE_State_37_37, &STATE_VARIABLE_State_13_85);
            mercury__stream__string_writer__do_write_univ_prio_6_p_1(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, BracedHead_18, ArgPriority_84, STATE_VARIABLE_State_13_85, &STATE_VARIABLE_State_38_38);
            mercury__stream__string_writer__write_term_args_5_p_1(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, BracedTail_19, STATE_VARIABLE_State_38_38, &STATE_VARIABLE_State_39_39);
            func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
            func_6(((MR_Box) TypeClassInfo_for_writer_51), Stream_7, ((MR_Box) (MR_Word) ((MR_Char) 125)), STATE_VARIABLE_State_39_39, STATE_VARIABLE_State_25);
          }
        else
        {
          MR_Word FirstOpInfo_22;
          MR_Word OtherOpInfos_23;
          MR_Word TypeClassInfo_for_op_table_53;
          MR_bool MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
          MR_Box conv9_FirstOpInfo_22;
          MR_Box conv8_OtherOpInfos_23;

          TypeClassInfo_for_op_table_53 = (MR_Word) &mercury__stream__string_writer_scalar_common_1[0];
          func_7 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_53, (MR_Integer) 0)), (MR_Integer) 10)));
          succeeded = func_7(((MR_Box) TypeClassInfo_for_op_table_53), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Functor_13)), &conv9_FirstOpInfo_22, &conv8_OtherOpInfos_23);
          if (succeeded)
          {
            FirstOpInfo_22 = ((MR_Word) conv9_FirstOpInfo_22);
            OtherOpInfos_23 = ((MR_Word) conv8_OtherOpInfos_23);
            succeeded = MR_TRUE;
          }
          if (succeeded)
            mercury__stream__string_writer__select_op_info_and_print_9_p_1(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, FirstOpInfo_22, OtherOpInfos_23, Priority_10, Functor_13, Args_15, STATE_VARIABLE_State_0_24, STATE_VARIABLE_State_25);
          else
          {
            MR_Box STATE_VARIABLE_State_17_99;

            mercury__term_io__quote_atom_agt_5_p_0(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, Functor_13, (MR_Integer) 0, STATE_VARIABLE_State_0_24, &STATE_VARIABLE_State_17_99);
            if ((Args_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *STATE_VARIABLE_State_25 = STATE_VARIABLE_State_17_99;
            else
            {
              MR_Word X_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
              MR_Word Xs_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
              MR_Box STATE_VARIABLE_State_19_101;
              MR_Box STATE_VARIABLE_State_20_102;
              MR_Box STATE_VARIABLE_State_21_103;

              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_51, Stream_7, ((MR_Box) (MR_Word) ((MR_Char) 40)), STATE_VARIABLE_State_17_99, &STATE_VARIABLE_State_19_101);
              mercury__stream__string_writer__write_arg_5_p_1(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, X_96, STATE_VARIABLE_State_19_101, &STATE_VARIABLE_State_20_102);
              mercury__stream__string_writer__write_term_args_5_p_1(TypeClassInfo_for_writer_50, TypeClassInfo_for_writer_51, Stream_7, NonCanon_8, Xs_97, STATE_VARIABLE_State_20_102, &STATE_VARIABLE_State_21_103);
              mercury__stream__put_4_p_0(TypeClassInfo_for_writer_51, Stream_7, ((MR_Box) (MR_Word) ((MR_Char) 41)), STATE_VARIABLE_State_21_103, STATE_VARIABLE_State_25);
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
mercury__stream__string_writer__write_term_args_5_p_1(
  MR_Word TypeClassInfo_for_writer_22,
  MR_Word TypeClassInfo_for_writer_23,
  MR_Box HeadVar__1_1,
  MR_Word NonCanon_2,
  MR_Word HeadVar__3_3,
  MR_Box STATE_VARIABLE_State_0_4,
  MR_Box * STATE_VARIABLE_State_5)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_State_5 = STATE_VARIABLE_State_0_4;
    else
    {
      MR_Word X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Xs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Box STATE_VARIABLE_State_19_19;
      MR_Box STATE_VARIABLE_State_20_20;
      MR_Integer ArgPriority_30;
      MR_Box STATE_VARIABLE_State_13_31;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_22, (MR_Integer) 0)), (MR_Integer) 5)));

      func_0(((MR_Box) TypeClassInfo_for_writer_22), HeadVar__1_1, ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_State_0_4, &STATE_VARIABLE_State_19_19);
      mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_3_p_0(&ArgPriority_30, STATE_VARIABLE_State_19_19, &STATE_VARIABLE_State_13_31);
      mercury__stream__string_writer__do_write_univ_prio_6_p_1(TypeClassInfo_for_writer_22, TypeClassInfo_for_writer_23, HeadVar__1_1, NonCanon_2, X_13, ArgPriority_30, STATE_VARIABLE_State_13_31, &STATE_VARIABLE_State_20_20);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__3_3 = Xs_14;
        MR_Box next_value_of_STATE_VARIABLE_State_0_4 = STATE_VARIABLE_State_20_20;

        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_State_0_4 = next_value_of_STATE_VARIABLE_State_0_4;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__stream__string_writer__write_version_array_4_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeClassInfo_for_writer_16,
  MR_Word TypeClassInfo_for_writer_17,
  MR_Box Stream_5,
  MR_Box VersionArray_6,
  MR_Box STATE_VARIABLE_State_0_9,
  MR_Box * STATE_VARIABLE_State_10)
{
  {
    MR_Word TypeCtorInfo_19_19;
    MR_Word TypeInfo_20_20;
    MR_Word List_8;
    MR_Box STATE_VARIABLE_State_12_12;
    MR_Box STATE_VARIABLE_State_13_13;
    MR_Word V_5_26;
    MR_Integer V_8_37;
    MR_Integer V_4_41;
    MR_Word Univ_56;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Word TypeInfo_for_T_58;
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) TypeClassInfo_for_writer_16), Stream_5, ((MR_Box) ((MR_String) "version_array(")), STATE_VARIABLE_State_0_9, &STATE_VARIABLE_State_12_12);
    V_5_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
{
#define MR_PROC_LABEL mercury__stream__string_writer__write_version_array_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, VersionArray_6 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 V_4_41  = N;
}
    V_8_37 = (V_4_41 - (MR_Integer) 1);
    List_8 = mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_49_52_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(TypeInfo_for_T_18, VersionArray_6, V_5_26, V_8_37);
    TypeCtorInfo_19_19 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    {
      TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_20_20, 0) = ((MR_Box) (TypeCtorInfo_19_19));
      MR_hl_field(MR_mktag(0), TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_18));
    }
    mercury__univ__type_to_univ_2_p_1(TypeInfo_20_20, ((MR_Box) (List_8)), &Univ_56);
    mercury__stream__string_writer__do_write_univ_5_p_1(TypeClassInfo_for_writer_16, TypeClassInfo_for_writer_17, Stream_5, (MR_Integer) 1, Univ_56, STATE_VARIABLE_State_12_12, &STATE_VARIABLE_State_13_13);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5)));
    func_1(((MR_Box) TypeClassInfo_for_writer_16), Stream_5, ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_State_13_13, STATE_VARIABLE_State_10);
  }
}

static void MR_CALL 
mercury__stream__string_writer__write_array_4_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeClassInfo_for_writer_16,
  MR_Word TypeClassInfo_for_writer_17,
  MR_Box Stream_5,
  MR_ArrayPtr Array_6,
  MR_Box STATE_VARIABLE_State_0_9,
  MR_Box * STATE_VARIABLE_State_10)
{
  {
    MR_Word TypeCtorInfo_19_19;
    MR_Word TypeInfo_20_20;
    MR_Word List_8;
    MR_Box STATE_VARIABLE_State_12_12;
    MR_Box STATE_VARIABLE_State_13_13;
    MR_Integer V_5_23;
    MR_Integer V_6_24;
    MR_Word Univ_41;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Word TypeInfo_for_T_43;
    MR_Word TypeInfo_for_T_44;
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) TypeClassInfo_for_writer_16), Stream_5, ((MR_Box) ((MR_String) "array(")), STATE_VARIABLE_State_0_9, &STATE_VARIABLE_State_12_12);
{
#define MR_PROC_LABEL mercury__stream__string_writer__write_array_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Array_6 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 V_5_23  = Min;
}
{
#define MR_PROC_LABEL mercury__stream__string_writer__write_array_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) Array_6 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 V_6_24  = Max;
}
    mercury__array__fetch_items_4_p_0(TypeInfo_for_T_18, (MR_ArrayPtr) Array_6, V_5_23, V_6_24, &List_8);
    TypeCtorInfo_19_19 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    {
      TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_20_20, 0) = ((MR_Box) (TypeCtorInfo_19_19));
      MR_hl_field(MR_mktag(0), TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_18));
    }
    mercury__univ__type_to_univ_2_p_1(TypeInfo_20_20, ((MR_Box) (List_8)), &Univ_41);
    mercury__stream__string_writer__do_write_univ_5_p_1(TypeClassInfo_for_writer_16, TypeClassInfo_for_writer_17, Stream_5, (MR_Integer) 1, Univ_41, STATE_VARIABLE_State_12_12, &STATE_VARIABLE_State_13_13);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5)));
    func_1(((MR_Box) TypeClassInfo_for_writer_16), Stream_5, ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_State_13_13, STATE_VARIABLE_State_10);
  }
}

static void MR_CALL 
mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_p_in__term_io_0(
  MR_Word TypeClassInfo_for_writer_10,
  MR_Box V_5_5,
  MR_Char V_6_6,
  MR_Box V_8_7,
  MR_Box * V_9_8)
{
  {
    MR_String V_10_9;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    V_10_9 = mercury__term_io__quoted_char_1_f_0(V_6_6);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_10, (MR_Integer) 0)), (MR_Integer) 5)));
    func_0(((MR_Box) TypeClassInfo_for_writer_10), V_5_5, ((MR_Box) (V_10_9)), V_8_7, V_9_8);
  }
}

static void MR_CALL 
mercury__stream__string_writer__write_private_builtin_type_info_4_p_0(
  MR_Word TypeClassInfo_for_writer_13,
  MR_Box Stream_5,
  MR_Word PrivateBuiltinTypeInfo_6,
  MR_Box STATE_VARIABLE_State_0_10,
  MR_Box * STATE_VARIABLE_State_11)
{
  {
    MR_Word TypeInfo_8 = (MR_Word) PrivateBuiltinTypeInfo_6;
    MR_Word TypeDesc_9;
    MR_String Var_19;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    mercury__type_desc__type_info_to_type_desc_2_p_0(TypeInfo_8, &TypeDesc_9);
    Var_19 = mercury__type_desc__type_name_1_f_0(TypeDesc_9);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_13, (MR_Integer) 0)), (MR_Integer) 5)));
    func_0(((MR_Box) TypeClassInfo_for_writer_13), Stream_5, ((MR_Box) (Var_19)), STATE_VARIABLE_State_0_10, STATE_VARIABLE_State_11);
  }
}

static MR_Word MR_CALL 
mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_49_52_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(
  MR_Word TypeInfo_for_T1_1_16,
  MR_Box V_7_7,
  MR_Word V_8_8,
  MR_Integer V_9_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_Integer) 0 <= V_9_9);
    MR_Word V_5_10;

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      MR_Word V_11_12;
      MR_Integer V_13_13;
      MR_Box V_12_14;

      V_12_14 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_1_16, V_7_7, V_9_9);
      {
        V_11_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), V_11_12, 0) = V_12_14;
        MR_hl_field(MR_mktag(1), V_11_12, 1) = ((MR_Box) (V_8_8));
      }
      V_13_13 = (V_9_9 - (MR_Integer) 1);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_V_8_8 = V_11_12;
        MR_Integer next_value_of_V_9_9 = V_13_13;

        V_8_8 = next_value_of_V_8_8;
        V_9_9 = next_value_of_V_9_9;
      }
      continue;
    }
    else
      V_5_10 = V_8_8;
    return V_5_10;
    break;
  }
}

static void MR_CALL 
mercury__stream__string_writer__write_c_pointer_4_p_0(
  MR_Word TypeClassInfo_for_writer_12,
  MR_Box Stream_5,
  MR_Word C_Pointer_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  {
    MR_String Var_10;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    mercury__string__c_pointer_to_string_2_p_0(C_Pointer_6, &Var_10);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_12, (MR_Integer) 0)), (MR_Integer) 5)));
    func_0(((MR_Box) TypeClassInfo_for_writer_12), Stream_5, ((MR_Box) (Var_10)), STATE_VARIABLE_State_0_8, STATE_VARIABLE_State_9);
  }
}

static void MR_CALL 
mercury__stream__string_writer__write_type_ctor_desc_4_p_0(
  MR_Word TypeClassInfo_for_writer_31,
  MR_Box Stream_5,
  MR_Word TypeCtorDesc_6,
  MR_Box STATE_VARIABLE_State_0_12,
  MR_Box * STATE_VARIABLE_State_13)
{
  {
    MR_bool succeeded;
    MR_String ModuleName_8;
    MR_String Name_9;
    MR_Integer Arity0_10;
    MR_Integer Arity_11;

{
#define MR_PROC_LABEL mercury__stream__string_writer__write_type_ctor_desc_4_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  TypeCtorDesc_6 ;
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

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	 ModuleName_8  = TypeCtorModuleName;
	 Name_9  = TypeCtorName;
	 Arity0_10  = TypeCtorArity;
}
    succeeded = (strcmp(ModuleName_8, (MR_String) "builtin") == 0);
    if (succeeded)
      succeeded = (strcmp(Name_9, (MR_String) "func") == 0);
    if (succeeded)
    {
      Arity_11 = (Arity0_10 - (MR_Integer) 1);
    }
    else
      Arity_11 = Arity0_10;
    succeeded = (strcmp(ModuleName_8, (MR_String) "builtin") == 0);
    if (succeeded)
    {
      MR_String Var_32;
      MR_Word Var_38 = (MR_Word) &mercury__stream__string_writer_scalar_common_5[0];
      MR_String Var_40;
      MR_String Var_41;
      MR_Word V_7_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      MR_Word V_8_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      mercury__string__format__format_signed_int_component_5_p_0(Var_38, V_7_58, V_8_59, Arity_11, &Var_32);
      mercury__string__append_3_p_2((MR_String) "/", Var_32, &Var_40);
      mercury__string__append_3_p_2(Name_9, Var_40, &Var_41);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5)));
      func_0(((MR_Box) TypeClassInfo_for_writer_31), Stream_5, ((MR_Box) (Var_41)), STATE_VARIABLE_State_0_12, STATE_VARIABLE_State_13);
    }
    else
    {
      MR_String Var_42;
      MR_Word Var_48 = (MR_Word) &mercury__stream__string_writer_scalar_common_5[0];
      MR_String Var_50;
      MR_String Var_51;
      MR_String Var_53;
      MR_String Var_54;
      MR_Word V_7_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      MR_Word V_8_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      mercury__string__format__format_signed_int_component_5_p_0(Var_48, V_7_75, V_8_76, Arity_11, &Var_42);
      mercury__string__append_3_p_2((MR_String) "/", Var_42, &Var_50);
      mercury__string__append_3_p_2(Name_9, Var_50, &Var_51);
      mercury__string__append_3_p_2((MR_String) ".", Var_51, &Var_53);
      Var_54 = mercury__string__f_43_43_2_f_0(ModuleName_8, Var_53);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_31, (MR_Integer) 0)), (MR_Integer) 5)));
      func_1(((MR_Box) TypeClassInfo_for_writer_31), Stream_5, ((MR_Box) (Var_54)), STATE_VARIABLE_State_0_12, STATE_VARIABLE_State_13);
    }
  }
}

static void MR_CALL 
mercury__stream__string_writer__write_type_desc_4_p_0(
  MR_Word TypeClassInfo_for_writer_12,
  MR_Box Stream_5,
  MR_Word TypeDesc_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  {
    MR_String Var_10;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    Var_10 = mercury__type_desc__type_name_1_f_0(TypeDesc_6);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_12, (MR_Integer) 0)), (MR_Integer) 5)));
    func_0(((MR_Box) TypeClassInfo_for_writer_12), Stream_5, ((MR_Box) (Var_10)), STATE_VARIABLE_State_0_8, STATE_VARIABLE_State_9);
  }
}

static void MR_CALL 
mercury__stream__string_writer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_3_p_0(
  MR_Integer * HeadVar__1_1,
  MR_Box STATE_VARIABLE_State_0_5,
  MR_Box * STATE_VARIABLE_State_6)
{
  {
    *HeadVar__1_1 = (MR_Integer) 1000;
    *STATE_VARIABLE_State_6 = STATE_VARIABLE_State_0_5;
  }
}

void MR_CALL 
mercury__stream__string_writer__nl_3_p_0(
  MR_Word TypeClassInfo_for_writer_10,
  MR_Box Stream_4,
  MR_Box STATE_VARIABLE_State_0_6,
  MR_Box * STATE_VARIABLE_State_7)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_10, (MR_Integer) 0)), (MR_Integer) 5)));

    func_0(((MR_Box) TypeClassInfo_for_writer_10), Stream_4, ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_State_0_6, STATE_VARIABLE_State_7);
  }
}

void MR_CALL 
mercury__stream__string_writer__format_5_p_0(
  MR_Word TypeClassInfo_for_writer_14,
  MR_Box Stream_6,
  MR_String FormatString_7,
  MR_Word Arguments_8,
  MR_Box STATE_VARIABLE_State_0_11,
  MR_Box * STATE_VARIABLE_State_12)
{
  {
    MR_String String_10;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    mercury__string__format__format_impl_3_p_0(FormatString_7, Arguments_8, &String_10);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_14, (MR_Integer) 0)), (MR_Integer) 5)));
    func_0(((MR_Box) TypeClassInfo_for_writer_14), Stream_6, ((MR_Box) (String_10)), STATE_VARIABLE_State_0_11, STATE_VARIABLE_State_12);
  }
}

void MR_CALL 
mercury__stream__string_writer__put_char_4_p_0(
  MR_Word TypeClassInfo_for_writer_19,
  MR_Box Stream_5,
  MR_Char Char_6,
  MR_Box STATE_VARIABLE_State_0_11,
  MR_Box * STATE_VARIABLE_State_12)
{
  {
    MR_bool succeeded;
    MR_Word IOStream_9;
    MR_Word TypeInfo_21_21;
    MR_Word TypeCtorInfo_22_22;
    MR_Word TypeInfo_24_24;
    MR_Word TypeCtorInfo_25_25;
    MR_Integer PolyConst2_23;
    MR_Box conv0_IOState0_8;
    MR_Box conv1_IOStream_9;

{
#define MR_PROC_LABEL mercury__stream__string_writer__put_char_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_19 ;
	Index =  (MR_Integer) 4 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_21_21  = TypeInfo;
}
    TypeCtorInfo_22_22 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_21_21, TypeCtorInfo_22_22, STATE_VARIABLE_State_0_11, &conv0_IOState0_8);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
    {
      PolyConst2_23 = (MR_Integer) 2;
{
#define MR_PROC_LABEL mercury__stream__string_writer__put_char_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_19 ;
	Index =  PolyConst2_23 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_24_24  = TypeInfo;
}
      TypeCtorInfo_25_25 = (MR_Word) &mercury__io__io__type_ctor_info_output_stream_0;
      succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_24_24, TypeCtorInfo_25_25, Stream_5, &conv1_IOStream_9);
      if (succeeded)
      {
        IOStream_9 = ((MR_Word) conv1_IOStream_9);
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Box V_5_36;
      MR_Box V_8_37;
      MR_Word V_8_47;
      MR_String V_6_51;
      MR_Box STATE_VARIABLE_State_14_14;
      MR_Word TypeCtorInfo_26_26;
      MR_Word TypeInfo_28_28;

      V_5_36 = (MR_Box) IOStream_9;
{
#define MR_PROC_LABEL mercury__stream__string_writer__put_char_4_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr) V_5_36 ;
	Character =  Char_6 ;
		{

    Error = 0;
    if (Character <= 0x7f) {
        if (MR_PUTCH(*Stream, Character) < 0) {
            Error = errno;
        } else if (Character == '\n') {
            MR_line_number(*Stream)++;
        }
    } else {
        char    buf[5];
        size_t  len;
        size_t  i;
        len = MR_utf8_encode(buf, Character);
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                Error = errno;
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, V_8_37 );
}
{
#define MR_PROC_LABEL mercury__stream__string_writer__put_char_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, V_8_37 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = MR_FALSE;
      else
      {
{
#define MR_PROC_LABEL mercury__stream__string_writer__put_char_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, V_8_37 , Error);
	Msg0 =  (MR_String) "error writing to output file: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 V_6_51  = Msg;
}
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        V_8_47 = (MR_Word) V_6_51;
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word TypeCtorInfo_10_48 = (MR_Word) &mercury__io__io__type_ctor_info_error_0;

        {
          mercury__exception__throw_1_p_0(TypeCtorInfo_10_48, ((MR_Box) (V_8_47)));
          return;
        }
      }
      else
      {
      }
      TypeCtorInfo_26_26 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
{
#define MR_PROC_LABEL mercury__stream__string_writer__put_char_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_19 ;
	Index =  (MR_Integer) 4 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_28_28  = TypeInfo;
}
      succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeCtorInfo_26_26, TypeInfo_28_28, ((MR_Box) ((MR_Integer) 0)), &STATE_VARIABLE_State_14_14);
      if (succeeded)
        *STATE_VARIABLE_State_12 = STATE_VARIABLE_State_14_14;
      else
      {
        {
          mercury__require__error_1_p_0((MR_String) "stream.string_writer.put_char: unexpected type error");
          return;
        }
      }
    }
    else
    {
      MR_String Var_17;
      MR_Word V_5_58;
      MR_Word V_6_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      {
        V_5_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), V_5_58, 0) = ((MR_Box) (MR_Word) (Char_6));
        MR_hl_field(MR_mktag(1), V_5_58, 1) = ((MR_Box) (V_6_59));
      }
      mercury__string__to_char_list_2_p_1(&Var_17, V_5_58);
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
      func_2(((MR_Box) TypeClassInfo_for_writer_19), Stream_5, ((MR_Box) (Var_17)), STATE_VARIABLE_State_0_11, STATE_VARIABLE_State_12);
    }
  }
}

void MR_CALL 
mercury__stream__string_writer__put_float_4_p_0(
  MR_Word TypeClassInfo_for_writer_19,
  MR_Box Stream_5,
  MR_Float Float_6,
  MR_Box STATE_VARIABLE_State_0_11,
  MR_Box * STATE_VARIABLE_State_12)
{
  {
    MR_bool succeeded;
    MR_Word IOStream_9;
    MR_Word TypeInfo_21_21;
    MR_Word TypeCtorInfo_22_22;
    MR_Word TypeInfo_24_24;
    MR_Word TypeCtorInfo_25_25;
    MR_Integer PolyConst2_23;
    MR_Box conv0_IOState0_8;
    MR_Box conv1_IOStream_9;

{
#define MR_PROC_LABEL mercury__stream__string_writer__put_float_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_19 ;
	Index =  (MR_Integer) 4 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_21_21  = TypeInfo;
}
    TypeCtorInfo_22_22 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_21_21, TypeCtorInfo_22_22, STATE_VARIABLE_State_0_11, &conv0_IOState0_8);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
    {
      PolyConst2_23 = (MR_Integer) 2;
{
#define MR_PROC_LABEL mercury__stream__string_writer__put_float_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_19 ;
	Index =  PolyConst2_23 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_24_24  = TypeInfo;
}
      TypeCtorInfo_25_25 = (MR_Word) &mercury__io__io__type_ctor_info_output_stream_0;
      succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_24_24, TypeCtorInfo_25_25, Stream_5, &conv1_IOStream_9);
      if (succeeded)
      {
        IOStream_9 = ((MR_Word) conv1_IOStream_9);
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Box V_5_36;
      MR_Box V_8_37;
      MR_Word V_8_47;
      MR_String V_6_51;
      MR_Box STATE_VARIABLE_State_14_14;
      MR_Word TypeCtorInfo_26_26;
      MR_Word TypeInfo_28_28;

      V_5_36 = (MR_Box) IOStream_9;
{
#define MR_PROC_LABEL mercury__stream__string_writer__put_float_4_p_0

	MercuryFilePtr Stream;
	MR_Float Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) V_5_36 ;
	Val =  Float_6 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, V_8_37 );
}
{
#define MR_PROC_LABEL mercury__stream__string_writer__put_float_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, V_8_37 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = MR_FALSE;
      else
      {
{
#define MR_PROC_LABEL mercury__stream__string_writer__put_float_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, V_8_37 , Error);
	Msg0 =  (MR_String) "error writing to output file: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 V_6_51  = Msg;
}
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        V_8_47 = (MR_Word) V_6_51;
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word TypeCtorInfo_10_48 = (MR_Word) &mercury__io__io__type_ctor_info_error_0;

        {
          mercury__exception__throw_1_p_0(TypeCtorInfo_10_48, ((MR_Box) (V_8_47)));
          return;
        }
      }
      else
      {
      }
      TypeCtorInfo_26_26 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
{
#define MR_PROC_LABEL mercury__stream__string_writer__put_float_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_19 ;
	Index =  (MR_Integer) 4 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_28_28  = TypeInfo;
}
      succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeCtorInfo_26_26, TypeInfo_28_28, ((MR_Box) ((MR_Integer) 0)), &STATE_VARIABLE_State_14_14);
      if (succeeded)
        *STATE_VARIABLE_State_12 = STATE_VARIABLE_State_14_14;
      else
      {
        {
          mercury__require__error_1_p_0((MR_String) "stream.string_writer.put_float: unexpected type error");
          return;
        }
      }
    }
    else
    {
      MR_String Var_17;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__stream__string_writer__put_float_4_p_0

	MR_Float Flt;
	MR_String Str;

	Flt =  Float_6 ;
		{
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	 Var_17  = Str;
}
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
      func_2(((MR_Box) TypeClassInfo_for_writer_19), Stream_5, ((MR_Box) (Var_17)), STATE_VARIABLE_State_0_11, STATE_VARIABLE_State_12);
    }
  }
}

void MR_CALL 
mercury__stream__string_writer__put_uint_4_p_0(
  MR_Word TypeClassInfo_for_writer_19,
  MR_Box Stream_5,
  MR_Unsigned UInt_6,
  MR_Box STATE_VARIABLE_State_0_11,
  MR_Box * STATE_VARIABLE_State_12)
{
  {
    MR_bool succeeded;
    MR_Word IOStream_9;
    MR_Word TypeInfo_21_21;
    MR_Word TypeCtorInfo_22_22;
    MR_Word TypeInfo_24_24;
    MR_Word TypeCtorInfo_25_25;
    MR_Integer PolyConst2_23;
    MR_Box conv0_IOState0_8;
    MR_Box conv1_IOStream_9;

{
#define MR_PROC_LABEL mercury__stream__string_writer__put_uint_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_19 ;
	Index =  (MR_Integer) 4 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_21_21  = TypeInfo;
}
    TypeCtorInfo_22_22 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_21_21, TypeCtorInfo_22_22, STATE_VARIABLE_State_0_11, &conv0_IOState0_8);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
    {
      PolyConst2_23 = (MR_Integer) 2;
{
#define MR_PROC_LABEL mercury__stream__string_writer__put_uint_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_19 ;
	Index =  PolyConst2_23 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_24_24  = TypeInfo;
}
      TypeCtorInfo_25_25 = (MR_Word) &mercury__io__io__type_ctor_info_output_stream_0;
      succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_24_24, TypeCtorInfo_25_25, Stream_5, &conv1_IOStream_9);
      if (succeeded)
      {
        IOStream_9 = ((MR_Word) conv1_IOStream_9);
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Box V_5_36;
      MR_Box V_8_37;
      MR_Word V_8_47;
      MR_String V_6_51;
      MR_Box STATE_VARIABLE_State_14_14;
      MR_Word TypeCtorInfo_26_26;
      MR_Word TypeInfo_28_28;

      V_5_36 = (MR_Box) IOStream_9;
{
#define MR_PROC_LABEL mercury__stream__string_writer__put_uint_4_p_0

	MercuryFilePtr Stream;
	MR_Unsigned Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) V_5_36 ;
	Val =  UInt_6 ;
		{

    if (ML_fprintf(Stream, "%" MR_INTEGER_LENGTH_MODIFIER "u", Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, V_8_37 );
}
{
#define MR_PROC_LABEL mercury__stream__string_writer__put_uint_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, V_8_37 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = MR_FALSE;
      else
      {
{
#define MR_PROC_LABEL mercury__stream__string_writer__put_uint_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, V_8_37 , Error);
	Msg0 =  (MR_String) "error writing to output file: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 V_6_51  = Msg;
}
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        V_8_47 = (MR_Word) V_6_51;
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word TypeCtorInfo_10_48 = (MR_Word) &mercury__io__io__type_ctor_info_error_0;

        {
          mercury__exception__throw_1_p_0(TypeCtorInfo_10_48, ((MR_Box) (V_8_47)));
          return;
        }
      }
      else
      {
      }
      TypeCtorInfo_26_26 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
{
#define MR_PROC_LABEL mercury__stream__string_writer__put_uint_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_19 ;
	Index =  (MR_Integer) 4 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_28_28  = TypeInfo;
}
      succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeCtorInfo_26_26, TypeInfo_28_28, ((MR_Box) ((MR_Integer) 0)), &STATE_VARIABLE_State_14_14);
      if (succeeded)
        *STATE_VARIABLE_State_12 = STATE_VARIABLE_State_14_14;
      else
      {
        {
          mercury__require__error_1_p_0((MR_String) "stream.string_writer.put_uint: unexpected type error");
          return;
        }
      }
    }
    else
    {
      MR_String Var_17;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL mercury__stream__string_writer__put_uint_4_p_0

	MR_Unsigned U;
	MR_String Str;

	U =  UInt_6 ;
		{

    char buffer[21];
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "u", U);
    MR_allocate_aligned_string_msg(Str, strlen(buffer), MR_ALLOC_ID);
    strcpy(Str, buffer);


		;}
#undef MR_PROC_LABEL
	 Var_17  = Str;
}
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
      func_2(((MR_Box) TypeClassInfo_for_writer_19), Stream_5, ((MR_Box) (Var_17)), STATE_VARIABLE_State_0_11, STATE_VARIABLE_State_12);
    }
  }
}

void MR_CALL 
mercury__stream__string_writer__put_int_4_p_0(
  MR_Word TypeClassInfo_for_writer_19,
  MR_Box Stream_5,
  MR_Integer Int_6,
  MR_Box STATE_VARIABLE_State_0_11,
  MR_Box * STATE_VARIABLE_State_12)
{
  {
    MR_bool succeeded;
    MR_Word IOStream_9;
    MR_Word TypeInfo_21_21;
    MR_Word TypeCtorInfo_22_22;
    MR_Word TypeInfo_24_24;
    MR_Word TypeCtorInfo_25_25;
    MR_Integer PolyConst2_23;
    MR_Box conv0_IOState0_8;
    MR_Box conv1_IOStream_9;

{
#define MR_PROC_LABEL mercury__stream__string_writer__put_int_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_19 ;
	Index =  (MR_Integer) 4 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_21_21  = TypeInfo;
}
    TypeCtorInfo_22_22 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_21_21, TypeCtorInfo_22_22, STATE_VARIABLE_State_0_11, &conv0_IOState0_8);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
    {
      PolyConst2_23 = (MR_Integer) 2;
{
#define MR_PROC_LABEL mercury__stream__string_writer__put_int_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_19 ;
	Index =  PolyConst2_23 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_24_24  = TypeInfo;
}
      TypeCtorInfo_25_25 = (MR_Word) &mercury__io__io__type_ctor_info_output_stream_0;
      succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_24_24, TypeCtorInfo_25_25, Stream_5, &conv1_IOStream_9);
      if (succeeded)
      {
        IOStream_9 = ((MR_Word) conv1_IOStream_9);
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Box V_5_36;
      MR_Box V_8_37;
      MR_Word V_8_47;
      MR_String V_6_51;
      MR_Box STATE_VARIABLE_State_14_14;
      MR_Word TypeCtorInfo_26_26;
      MR_Word TypeInfo_28_28;

      V_5_36 = (MR_Box) IOStream_9;
{
#define MR_PROC_LABEL mercury__stream__string_writer__put_int_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) V_5_36 ;
	Val =  Int_6 ;
		{

    if (ML_fprintf(Stream, "%" MR_INTEGER_LENGTH_MODIFIER "d", Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, V_8_37 );
}
{
#define MR_PROC_LABEL mercury__stream__string_writer__put_int_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, V_8_37 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = MR_FALSE;
      else
      {
{
#define MR_PROC_LABEL mercury__stream__string_writer__put_int_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, V_8_37 , Error);
	Msg0 =  (MR_String) "error writing to output file: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 V_6_51  = Msg;
}
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        V_8_47 = (MR_Word) V_6_51;
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word TypeCtorInfo_10_48 = (MR_Word) &mercury__io__io__type_ctor_info_error_0;

        {
          mercury__exception__throw_1_p_0(TypeCtorInfo_10_48, ((MR_Box) (V_8_47)));
          return;
        }
      }
      else
      {
      }
      TypeCtorInfo_26_26 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
{
#define MR_PROC_LABEL mercury__stream__string_writer__put_int_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_writer_19 ;
	Index =  (MR_Integer) 4 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_28_28  = TypeInfo;
}
      succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeCtorInfo_26_26, TypeInfo_28_28, ((MR_Box) ((MR_Integer) 0)), &STATE_VARIABLE_State_14_14);
      if (succeeded)
        *STATE_VARIABLE_State_12 = STATE_VARIABLE_State_14_14;
      else
      {
        {
          mercury__require__error_1_p_0((MR_String) "stream.string_writer.put_int: unexpected type error");
          return;
        }
      }
    }
    else
    {
      MR_String Var_17;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      mercury__string__int_to_base_string_3_p_0(Int_6, (MR_Integer) 10, &Var_17);
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
      func_2(((MR_Box) TypeClassInfo_for_writer_19), Stream_5, ((MR_Box) (Var_17)), STATE_VARIABLE_State_0_11, STATE_VARIABLE_State_12);
    }
  }
}

void mercury__stream__string_writer__init(void)
{
}

void mercury__stream__string_writer__init_type_tables(void)
{
}

void mercury__stream__string_writer__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__stream__string_writer__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module stream.string_writer. */
