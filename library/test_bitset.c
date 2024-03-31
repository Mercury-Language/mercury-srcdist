/*
** Automatically generated from `test_bitset.m'
** by the Mercury compiler,
** version rotd-2024-03-31
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


// :- module test_bitset.
// :- implementation.

/*
INIT mercury__test_bitset__init
ENDINIT
*/

#include "test_bitset.mih"


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
#include "fat_sparse_bitset.mih"
#include "fatter_sparse_bitset.mih"
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
#include "sparse_bitset.mih"
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
#include "tree_bitset.mih"
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
#include "string.to_string.mih"




static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__list__pti_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__tree_bitset__pti_tree_bitset_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__sparse_bitset__pti_sparse_bitset_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__fat_sparse_bitset__pti_fat_sparse_bitset_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__fatter_sparse_bitset__pti_fatter_sparse_bitset_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__set_ordlist__pti_set_ordlist_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__test_bitset__pti_test_bitset_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__test_bitset__test_bitset__field_types_bitset_error_1_0[2];

static const MR_DuFunctorDesc mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_0;

static const MR_PseudoTypeInfo mercury__test_bitset__test_bitset__field_types_bitset_error_1_1[3];

static const MR_DuFunctorDesc mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_1;

static const MR_PseudoTypeInfo mercury__test_bitset__test_bitset__field_types_bitset_error_1_2[4];

static const MR_DuFunctorDesc mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_2;

static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_0[1];

static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_1[1];

static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_2[1];

static const MR_DuPtagLayout mercury__test_bitset__test_bitset__du_ptag_ordered_bitset_error_1[3];

static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_name_ordered_bitset_error_1[3];

static const MR_Integer mercury__test_bitset__test_bitset__functor_number_map_bitset_error_1[3];

static const MR_PseudoTypeInfo mercury__test_bitset__test_bitset__field_types_test_bitset_1_0[5];

static const MR_DuFunctorDesc mercury__test_bitset__test_bitset__du_functor_desc_test_bitset_1_0;

static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_stag_ordered_test_bitset_1_0[1];

static const MR_DuPtagLayout mercury__test_bitset__test_bitset__du_ptag_ordered_test_bitset_1[1];

static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_name_ordered_test_bitset_1[1];

static const MR_Integer mercury__test_bitset__test_bitset__functor_number_map_test_bitset_1[1];

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_19,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_49_48_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__fatter_sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_21,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_49_48_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__fatter_sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__fat_sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_16,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_49_48_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__fat_sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__347__1_3_p_0(
  MR_Word TypeClassInfo_for_uenum_49,
  MR_Word SetS_21,
  MR_Box * LambdaHeadVar__1_41,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__346__1_3_p_0(
  MR_Word TypeClassInfo_for_uenum_49,
  MR_Word SetD_20,
  MR_Box * LambdaHeadVar__1_40,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__345__1_3_p_0(
  MR_Word TypeClassInfo_for_uenum_49,
  MR_Word SetC_19,
  MR_Box * LambdaHeadVar__1_39,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__344__1_3_p_0(
  MR_Word TypeClassInfo_for_uenum_49,
  MR_Word SetB_18,
  MR_Box * LambdaHeadVar__1_38,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__343__1_3_p_0(
  MR_Word TypeClassInfo_for_uenum_49,
  MR_Word SetA_17,
  MR_Box * LambdaHeadVar__1_37,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_57_48_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(
  MR_Word Var_24,
  MR_Word TypeClassInfo_for_uenum_20,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_57_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(
  MR_Word Var_24,
  MR_Word TypeClassInfo_for_uenum_20,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_55_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(
  MR_Word Var_30,
  MR_Word TypeClassInfo_for_uenum_26,
  MR_Word HeadVar__1_8,
  MR_Unsigned HeadVar__3_10,
  MR_Unsigned HeadVar__4_11,
  MR_Unsigned HeadVar__5_12,
  MR_Box HeadVar__6_13,
  MR_Box * HeadVar__7_14);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_53_52_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__fat_sparse_bitset_0(
  MR_Word Var_20,
  MR_Word TypeClassInfo_for_uenum_16,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_55_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_6_p_in__fat_sparse_bitset_0(
  MR_Word Var_26,
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_53_48_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__fatter_sparse_bitset_0(
  MR_Word Var_25,
  MR_Word TypeClassInfo_for_uenum_21,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_48_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_6_p_in__fatter_sparse_bitset_0(
  MR_Word Var_26,
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_23,
  MR_Word TypeClassInfo_for_uenum_19,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_26,
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_57_57_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(
  MR_Word TypeClassInfo_for_uenum_20,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_57_56_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(
  MR_Word TypeClassInfo_for_uenum_20,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_49_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(
  MR_Word TypeClassInfo_for_uenum_26,
  MR_Word HeadVar__1_8,
  MR_Unsigned HeadVar__3_10,
  MR_Unsigned HeadVar__4_11,
  MR_Unsigned HeadVar__5_12,
  MR_Integer HeadVar__6_13,
  MR_Integer * HeadVar__7_14);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_52_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_19,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_49_48_49_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Integer HeadVar__5_11,
  MR_Integer * HeadVar__6_12);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_57_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__fatter_sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_21,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_49_48_52_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_6_p_in__fatter_sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Integer HeadVar__5_11,
  MR_Integer * HeadVar__6_12);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_53_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__fat_sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_16,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_49_48_54_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_6_p_in__fat_sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Integer HeadVar__5_11,
  MR_Integer * HeadVar__6_12);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_57_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(
  MR_Word Var_29,
  MR_Word TypeClassInfo_for_uenum_20,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_57_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(
  MR_Word Var_29,
  MR_Word TypeClassInfo_for_uenum_20,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_49_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(
  MR_Word Var_35,
  MR_Word TypeClassInfo_for_uenum_26,
  MR_Word HeadVar__1_8,
  MR_Unsigned HeadVar__3_10,
  MR_Unsigned HeadVar__4_11,
  MR_Unsigned HeadVar__5_12,
  MR_Word HeadVar__6_13,
  MR_Word * HeadVar__7_14);

static void MR_CALL 
mercury__test_bitset__check0_3_p_0(
  MR_Word TypeClassInfo_for_uenum_18,
  MR_String Op_4,
  MR_Word TestIn_5,
  MR_Word * Result_6);

static void MR_CALL 
mercury__test_bitset__get_sets_7_p_0(
  MR_Word TypeClassInfo_for_uenum_32,
  MR_String Op_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
mercury__test_bitset__check2_5_p_0(
  MR_Word TypeClassInfo_for_uenum_42,
  MR_String Op_6,
  MR_Word TestInL_7,
  MR_Word TestInR_8,
  MR_Word TestOut_9,
  MR_Word * Result_10);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_49_48_95_95_91_51_44_32_52_93_95_48_3_p_in__list_0(
  MR_Word Var_11,
  MR_Box Var_12,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mercury__test_bitset__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_49_48_95_95_91_51_44_32_52_93_95_48_95_95_49_3_p_0(
  MR_Word Var_11,
  MR_Box Var_12,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_16);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_48_57_95_95_91_51_44_32_52_93_95_48_3_p_in__list_0(
  MR_Word Var_11,
  MR_Box Var_12,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mercury__test_bitset__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_48_57_95_95_91_51_44_32_52_93_95_48_95_95_49_3_p_0(
  MR_Word Var_11,
  MR_Box Var_12,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_16);

static void MR_CALL 
mercury__test_bitset__check1_4_p_0(
  MR_Word TypeClassInfo_for_uenum_30,
  MR_String Op_5,
  MR_Word TestIn_6,
  MR_Word TestOut_7,
  MR_Word * Result_8);

static void MR_CALL 
mercury__test_bitset__member_2_p_1_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__test_bitset__member_2_p_1_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__test_bitset__member_2_p_1_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__test_bitset__member_2_p_1_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__test_bitset__member_2_p_1_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__test_bitset__member_2_p_1_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_54_49_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_54_49_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_3,
  MR_Word * HeadVar__2_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_54_48_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_54_48_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_3,
  MR_Word * HeadVar__2_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_53_57_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_53_57_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_3,
  MR_Word * HeadVar__2_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_53_56_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_53_56_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_3,
  MR_Word * HeadVar__2_4);

static MR_bool MR_CALL 
mercury__test_bitset____Unify____bitset_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__test_bitset____Compare____bitset_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__test_bitset____Unify____test_bitset_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__test_bitset____Compare____test_bitset_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box mercury__test_bitset_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__test_bitset_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__test_bitset_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__test_bitset_scalar_common_4[1][1];

static /* final */ const MR_Integer mercury__test_bitset_scalar_common_5[2][2];

static /* final */ const MR_Box mercury__test_bitset_scalar_common_6[1][7];

static /* final */ const MR_Box mercury__test_bitset_scalar_common_7[5][6];




static /* final */ const MR_Box mercury__test_bitset_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__test_bitset_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__test_bitset_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__test_bitset_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__test_bitset_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (((MR_Box) (&mercury__test_bitset_scalar_common_4[0])))),
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 0U)))),
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 0U)))),
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 0U)))),
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 0U))))
  },
};

static /* final */ const MR_Box mercury__test_bitset_scalar_common_4[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
};

static /* final */ const MR_Integer mercury__test_bitset_scalar_common_5[2][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
  /* row   1 */
  {
    (MR_Integer) 1,
    (MR_Integer) 67631
  },
};

static /* final */ const MR_Box mercury__test_bitset_scalar_common_6[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mercury__test_bitset_scalar_common_5[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__test_bitset__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&mercury__test_bitset__list__pti_list_1__pseudo_1))
  },
};

static /* final */ const MR_Box mercury__test_bitset_scalar_common_7[5][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mercury__test_bitset_scalar_common_5[1])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mercury__test_bitset__tree_bitset__pti_tree_bitset_1__pseudo_1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&mercury__test_bitset_scalar_common_5[1])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mercury__test_bitset__sparse_bitset__pti_sparse_bitset_1__pseudo_1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (&mercury__test_bitset_scalar_common_5[1])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mercury__test_bitset__fat_sparse_bitset__pti_fat_sparse_bitset_1__pseudo_1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (&mercury__test_bitset_scalar_common_5[1])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mercury__test_bitset__fatter_sparse_bitset__pti_fatter_sparse_bitset_1__pseudo_1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (&mercury__test_bitset_scalar_common_5[1])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mercury__test_bitset__set_ordlist__pti_set_ordlist_1__pseudo_1)),
    ((MR_Box) ((MR_Integer) 1))
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
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"


static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__tree_bitset__pti_tree_bitset_1__pseudo_1 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__sparse_bitset__pti_sparse_bitset_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__fat_sparse_bitset__pti_fat_sparse_bitset_1__pseudo_1 = {
  &mercury__fat_sparse_bitset__fat_sparse_bitset__type_ctor_info_fat_sparse_bitset_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__fatter_sparse_bitset__pti_fatter_sparse_bitset_1__pseudo_1 = {
  &mercury__fatter_sparse_bitset__fatter_sparse_bitset__type_ctor_info_fatter_sparse_bitset_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__test_bitset__pti_test_bitset_1__pseudo_1 = {
  &mercury__test_bitset__test_bitset__type_ctor_info_test_bitset_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo mercury__test_bitset__test_bitset__field_types_bitset_error_1_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__test_bitset__test_bitset__pti_test_bitset_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_0 = {
  (MR_String) "zero_argument",
  INT16_C(2),
  UINT16_C(2),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__test_bitset__test_bitset__field_types_bitset_error_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__test_bitset__test_bitset__field_types_bitset_error_1_1[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__test_bitset__test_bitset__pti_test_bitset_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__test_bitset__test_bitset__pti_test_bitset_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_1 = {
  (MR_String) "one_argument",
  INT16_C(3),
  UINT16_C(6),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__test_bitset__test_bitset__field_types_bitset_error_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__test_bitset__test_bitset__field_types_bitset_error_1_2[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__test_bitset__test_bitset__pti_test_bitset_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__test_bitset__test_bitset__pti_test_bitset_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__test_bitset__test_bitset__pti_test_bitset_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_2 = {
  (MR_String) "two_arguments",
  INT16_C(4),
  UINT16_C(14),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__test_bitset__test_bitset__field_types_bitset_error_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_0[1] = { &mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_0 };

static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_1[1] = { &mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_1 };

static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_2[1] = { &mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_2 };

static const MR_DuPtagLayout mercury__test_bitset__test_bitset__du_ptag_ordered_bitset_error_1[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_name_ordered_bitset_error_1[3] = {
  &mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_1,
  &mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_2,
  &mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_0
};

static const MR_Integer mercury__test_bitset__test_bitset__functor_number_map_bitset_error_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__test_bitset__test_bitset__type_ctor_info_bitset_error_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__test_bitset____Unify____bitset_error_1_0_10001)),
  ((MR_Box) (mercury__test_bitset____Compare____bitset_error_1_0_10001)),
  (MR_String) "test_bitset",
  (MR_String) "bitset_error",
  { mercury__test_bitset__test_bitset__du_name_ordered_bitset_error_1 },
  { mercury__test_bitset__test_bitset__du_ptag_ordered_bitset_error_1 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__test_bitset__test_bitset__functor_number_map_bitset_error_1,

};

static const MR_PseudoTypeInfo mercury__test_bitset__test_bitset__field_types_test_bitset_1_0[5] = {
  (MR_PseudoTypeInfo) (&mercury__test_bitset__tree_bitset__pti_tree_bitset_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__test_bitset__sparse_bitset__pti_sparse_bitset_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__test_bitset__fat_sparse_bitset__pti_fat_sparse_bitset_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__test_bitset__fatter_sparse_bitset__pti_fatter_sparse_bitset_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__test_bitset__set_ordlist__pti_set_ordlist_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__test_bitset__test_bitset__du_functor_desc_test_bitset_1_0 = {
  (MR_String) "tb",
  INT16_C(5),
  UINT16_C(31),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__test_bitset__test_bitset__field_types_test_bitset_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_stag_ordered_test_bitset_1_0[1] = { &mercury__test_bitset__test_bitset__du_functor_desc_test_bitset_1_0 };

static const MR_DuPtagLayout mercury__test_bitset__test_bitset__du_ptag_ordered_test_bitset_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__test_bitset__test_bitset__du_stag_ordered_test_bitset_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_name_ordered_test_bitset_1[1] = { &mercury__test_bitset__test_bitset__du_functor_desc_test_bitset_1_0 };

static const MR_Integer mercury__test_bitset__test_bitset__functor_number_map_test_bitset_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__test_bitset__test_bitset__type_ctor_info_test_bitset_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__test_bitset____Unify____test_bitset_1_0_10001)),
  ((MR_Box) (mercury__test_bitset____Compare____test_bitset_1_0_10001)),
  (MR_String) "test_bitset",
  (MR_String) "test_bitset",
  { mercury__test_bitset__test_bitset__du_name_ordered_test_bitset_1 },
  { mercury__test_bitset__test_bitset__du_ptag_ordered_test_bitset_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__test_bitset__test_bitset__functor_number_map_test_bitset_1,

};

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_19,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = HeadVar__3_3;
  else
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_13;
    MR_Unsigned Var_14;
    MR_Unsigned Var_15;
    MR_Unsigned Var_18;

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(TypeClassInfo_for_uenum_19, Var_10, HeadVar__3_3, &Var_13);
    Var_14 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
    Var_15 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_18  = Bits;
}
    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_49_48_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(TypeClassInfo_for_uenum_19, Var_14, Var_15, Var_18, Var_13, HeadVar__4_4);
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_49_48_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_9 == (MR_Unsigned) 0U);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *HeadVar__6_12 = HeadVar__5_11;
    else
    {
      succeeded = (HeadVar__4_10 == (MR_Unsigned) 1U);
      if (succeeded)
      {
        MR_Box Var_13;

        Var_13 = mercury__enum__det_from_uint_1_f_0(TypeClassInfo_for_uenum_22, HeadVar__2_8);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__6_12 = base;
          MR_hl_field(1, base, 0) = Var_13;
          MR_hl_field(1, base, 1) = ((MR_Box) (HeadVar__5_11));
        }
      }
      else
      {
        MR_Unsigned Var_14 = (HeadVar__4_10 >> 1);
        MR_Unsigned Var_16;
        MR_Unsigned Var_17;
        MR_Unsigned Var_18;
        MR_Unsigned Var_19;
        MR_Unsigned Var_20;
        MR_Word Var_21;
        MR_Unsigned Var_33;
        MR_Unsigned Var_34 = ~((MR_Unsigned) 0U);
        MR_Unsigned next_value_of_HeadVar__3_9;
        MR_Unsigned next_value_of_HeadVar__4_10;
        MR_Word next_value_of_HeadVar__5_11;

        Var_33 = (Var_34 << (int) Var_14);
        Var_16 = ~(Var_33);
        Var_17 = (Var_16 & HeadVar__3_9);
        Var_19 = (HeadVar__3_9 >> (int) Var_14);
        Var_18 = (Var_16 & Var_19);
        Var_20 = (HeadVar__2_8 + Var_14);
        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_49_48_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(TypeClassInfo_for_uenum_22, Var_20, Var_18, Var_14, HeadVar__5_11, &Var_21);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_9 = Var_17;
        next_value_of_HeadVar__4_10 = Var_14;
        next_value_of_HeadVar__5_11 = Var_21;
        HeadVar__3_9 = next_value_of_HeadVar__3_9;
        HeadVar__4_10 = next_value_of_HeadVar__4_10;
        HeadVar__5_11 = next_value_of_HeadVar__5_11;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__fatter_sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_21,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = HeadVar__3_3;
  else
  {
    MR_Unsigned Var_9 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Unsigned Var_10 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Unsigned Var_11 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word Var_15;
    MR_Unsigned Var_16;
    MR_Unsigned Var_17;
    MR_Unsigned Var_18;
    MR_Word Var_19;
    MR_Unsigned Var_20;

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__fatter_sparse_bitset_0(TypeClassInfo_for_uenum_21, Var_12, HeadVar__3_3, &Var_15);
{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__fatter_sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_17  = Bits;
}
    Var_16 = (Var_9 + Var_17);
{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__fatter_sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_18  = Bits;
}
    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_49_48_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__fatter_sparse_bitset_0(TypeClassInfo_for_uenum_21, Var_16, Var_11, Var_18, Var_15, &Var_19);
{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__fatter_sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_20  = Bits;
}
    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_49_48_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__fatter_sparse_bitset_0(TypeClassInfo_for_uenum_21, Var_9, Var_10, Var_20, Var_19, HeadVar__4_4);
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_49_48_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__fatter_sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_9 == (MR_Unsigned) 0U);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *HeadVar__6_12 = HeadVar__5_11;
    else
    {
      succeeded = (HeadVar__4_10 == (MR_Unsigned) 1U);
      if (succeeded)
      {
        MR_Box Var_13;

        Var_13 = mercury__enum__det_from_uint_1_f_0(TypeClassInfo_for_uenum_22, HeadVar__2_8);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__6_12 = base;
          MR_hl_field(1, base, 0) = Var_13;
          MR_hl_field(1, base, 1) = ((MR_Box) (HeadVar__5_11));
        }
      }
      else
      {
        MR_Unsigned Var_14 = (HeadVar__4_10 >> 1);
        MR_Unsigned Var_16;
        MR_Unsigned Var_17;
        MR_Unsigned Var_18;
        MR_Unsigned Var_19;
        MR_Unsigned Var_20;
        MR_Word Var_21;
        MR_Unsigned Var_33;
        MR_Unsigned Var_34 = ~((MR_Unsigned) 0U);
        MR_Unsigned next_value_of_HeadVar__3_9;
        MR_Unsigned next_value_of_HeadVar__4_10;
        MR_Word next_value_of_HeadVar__5_11;

        Var_33 = (Var_34 << (int) Var_14);
        Var_16 = ~(Var_33);
        Var_17 = (Var_16 & HeadVar__3_9);
        Var_19 = (HeadVar__3_9 >> (int) Var_14);
        Var_18 = (Var_16 & Var_19);
        Var_20 = (HeadVar__2_8 + Var_14);
        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_49_48_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__fatter_sparse_bitset_0(TypeClassInfo_for_uenum_22, Var_20, Var_18, Var_14, HeadVar__5_11, &Var_21);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_9 = Var_17;
        next_value_of_HeadVar__4_10 = Var_14;
        next_value_of_HeadVar__5_11 = Var_21;
        HeadVar__3_9 = next_value_of_HeadVar__3_9;
        HeadVar__4_10 = next_value_of_HeadVar__4_10;
        HeadVar__5_11 = next_value_of_HeadVar__5_11;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__fat_sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_16,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = HeadVar__3_3;
  else
  {
    MR_Unsigned Var_9 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Unsigned Var_10 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word Var_14;
    MR_Unsigned Var_15;

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__fat_sparse_bitset_0(TypeClassInfo_for_uenum_16, Var_11, HeadVar__3_3, &Var_14);
{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__fat_sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_15  = Bits;
}
    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_49_48_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__fat_sparse_bitset_0(TypeClassInfo_for_uenum_16, Var_9, Var_10, Var_15, Var_14, HeadVar__4_4);
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_49_48_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__fat_sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_9 == (MR_Unsigned) 0U);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *HeadVar__6_12 = HeadVar__5_11;
    else
    {
      succeeded = (HeadVar__4_10 == (MR_Unsigned) 1U);
      if (succeeded)
      {
        MR_Box Var_13;

        Var_13 = mercury__enum__det_from_uint_1_f_0(TypeClassInfo_for_uenum_22, HeadVar__2_8);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__6_12 = base;
          MR_hl_field(1, base, 0) = Var_13;
          MR_hl_field(1, base, 1) = ((MR_Box) (HeadVar__5_11));
        }
      }
      else
      {
        MR_Unsigned Var_14 = (HeadVar__4_10 >> 1);
        MR_Unsigned Var_16;
        MR_Unsigned Var_17;
        MR_Unsigned Var_18;
        MR_Unsigned Var_19;
        MR_Unsigned Var_20;
        MR_Word Var_21;
        MR_Unsigned Var_33;
        MR_Unsigned Var_34 = ~((MR_Unsigned) 0U);
        MR_Unsigned next_value_of_HeadVar__3_9;
        MR_Unsigned next_value_of_HeadVar__4_10;
        MR_Word next_value_of_HeadVar__5_11;

        Var_33 = (Var_34 << (int) Var_14);
        Var_16 = ~(Var_33);
        Var_17 = (Var_16 & HeadVar__3_9);
        Var_19 = (HeadVar__3_9 >> (int) Var_14);
        Var_18 = (Var_16 & Var_19);
        Var_20 = (HeadVar__2_8 + Var_14);
        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_49_48_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__fat_sparse_bitset_0(TypeClassInfo_for_uenum_22, Var_20, Var_18, Var_14, HeadVar__5_11, &Var_21);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_9 = Var_17;
        next_value_of_HeadVar__4_10 = Var_14;
        next_value_of_HeadVar__5_11 = Var_21;
        HeadVar__3_9 = next_value_of_HeadVar__3_9;
        HeadVar__4_10 = next_value_of_HeadVar__4_10;
        HeadVar__5_11 = next_value_of_HeadVar__5_11;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__347__1_3_p_0(
  MR_Word TypeClassInfo_for_uenum_49,
  MR_Word SetS_21,
  MR_Box * LambdaHeadVar__1_41,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Word TypeInfo_53_53;

{
#define MR_PROC_LABEL mercury__test_bitset__IntroducedFrom__pred__member__347__1_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_49 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_53_53  = TypeInfo;
}
  mercury__set_ordlist__member_2_p_1(TypeInfo_53_53, LambdaHeadVar__1_41, SetS_21, cont, cont_env_ptr);
}

static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__346__1_3_p_0(
  MR_Word TypeClassInfo_for_uenum_49,
  MR_Word SetD_20,
  MR_Box * LambdaHeadVar__1_40,
  MR_Cont cont,
  void * cont_env_ptr)
{
  mercury__fatter_sparse_bitset__member_2_p_1(TypeClassInfo_for_uenum_49, LambdaHeadVar__1_40, SetD_20, cont, cont_env_ptr);
}

static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__345__1_3_p_0(
  MR_Word TypeClassInfo_for_uenum_49,
  MR_Word SetC_19,
  MR_Box * LambdaHeadVar__1_39,
  MR_Cont cont,
  void * cont_env_ptr)
{
  mercury__fat_sparse_bitset__member_2_p_1(TypeClassInfo_for_uenum_49, LambdaHeadVar__1_39, SetC_19, cont, cont_env_ptr);
}

static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__344__1_3_p_0(
  MR_Word TypeClassInfo_for_uenum_49,
  MR_Word SetB_18,
  MR_Box * LambdaHeadVar__1_38,
  MR_Cont cont,
  void * cont_env_ptr)
{
  mercury__sparse_bitset__member_2_p_1(TypeClassInfo_for_uenum_49, LambdaHeadVar__1_38, SetB_18, cont, cont_env_ptr);
}

static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__343__1_3_p_0(
  MR_Word TypeClassInfo_for_uenum_49,
  MR_Word SetA_17,
  MR_Box * LambdaHeadVar__1_37,
  MR_Cont cont,
  void * cont_env_ptr)
{
  mercury__tree_bitset__member_2_p_1(TypeClassInfo_for_uenum_49, LambdaHeadVar__1_37, SetA_17, cont, cont_env_ptr);
}

void MR_CALL 
mercury__test_bitset____Compare____bitset_error_1_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_28 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_29 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_28 == CastY_29);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
              MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
              MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word SubResult1_6;
              MR_Integer Var_50;

{
#define MR_PROC_LABEL mercury__test_bitset____Compare____bitset_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_4 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_50  = Res;
}
              succeeded = (Var_50 < (MR_Integer) 0);
              if (succeeded)
                SubResult1_6 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_50 == (MR_Integer) 0);
                if (succeeded)
                  SubResult1_6 = (MR_Integer) 0;
                else
                  SubResult1_6 = (MR_Integer) 2;
              }
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
                mercury__test_bitset____Compare____test_bitset_1_0(TypeInfo_for_T_30, HeadVar__1_1, ArgX2_7, ArgY2_8);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_String ArgX1_9 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_String ArgY1_10 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
              MR_Word ArgX2_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word ArgX3_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
              MR_Word ArgY3_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
              MR_Word SubResult1_11;
              MR_Integer Var_48;

{
#define MR_PROC_LABEL mercury__test_bitset____Compare____bitset_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_9 ;
	S2 = ArgY1_10 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_48  = Res;
}
              succeeded = (Var_48 < (MR_Integer) 0);
              if (succeeded)
                SubResult1_11 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_48 == (MR_Integer) 0);
                if (succeeded)
                  SubResult1_11 = (MR_Integer) 0;
                else
                  SubResult1_11 = (MR_Integer) 2;
              }
              succeeded = (SubResult1_11 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_11;
              else
              {
                MR_Word SubResult2_14;

                mercury__test_bitset____Compare____test_bitset_1_0(TypeInfo_for_T_30, &SubResult2_14, ArgX2_12, ArgY2_13);
                succeeded = (SubResult2_14 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_14;
                else
                  mercury__test_bitset____Compare____test_bitset_1_0(TypeInfo_for_T_30, HeadVar__1_1, ArgX3_15, ArgY3_16);
              }
            }
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_String ArgX1_17 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_String ArgY1_18 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
              MR_Word ArgX2_20 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_21 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word ArgX3_23 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
              MR_Word ArgY3_24 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 2))));
              MR_Word ArgX4_26 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 3))));
              MR_Word ArgY4_27 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 3))));
              MR_Word SubResult1_19;
              MR_Integer Var_46;

{
#define MR_PROC_LABEL mercury__test_bitset____Compare____bitset_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_17 ;
	S2 = ArgY1_18 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_46  = Res;
}
              succeeded = (Var_46 < (MR_Integer) 0);
              if (succeeded)
                SubResult1_19 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_46 == (MR_Integer) 0);
                if (succeeded)
                  SubResult1_19 = (MR_Integer) 0;
                else
                  SubResult1_19 = (MR_Integer) 2;
              }
              succeeded = (SubResult1_19 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_19;
              else
              {
                MR_Word SubResult2_22;

                mercury__test_bitset____Compare____test_bitset_1_0(TypeInfo_for_T_30, &SubResult2_22, ArgX2_20, ArgY2_21);
                succeeded = (SubResult2_22 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_22;
                else
                {
                  MR_Word SubResult3_25;

                  mercury__test_bitset____Compare____test_bitset_1_0(TypeInfo_for_T_30, &SubResult3_25, ArgX3_23, ArgY3_24);
                  succeeded = (SubResult3_25 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult3_25;
                  else
                    mercury__test_bitset____Compare____test_bitset_1_0(TypeInfo_for_T_30, HeadVar__1_1, ArgX4_26, ArgY4_27);
                }
              }
            }
            break;
        }
        break;
    }
}

void MR_CALL 
mercury__test_bitset____Compare____test_bitset_1_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word SubResult1_6;

    mercury__tree_bitset____Compare____tree_bitset_1_0(TypeInfo_for_T_20, &SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__sparse_bitset____Compare____sparse_bitset_1_0(TypeInfo_for_T_20, &SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__fat_sparse_bitset____Compare____fat_sparse_bitset_1_0(TypeInfo_for_T_20, &SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__fatter_sparse_bitset____Compare____fatter_sparse_bitset_1_0(TypeInfo_for_T_20, &SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__set_ordlist____Compare____set_ordlist_1_0(TypeInfo_for_T_20, HeadVar__1_1, ArgX5_16, ArgY5_17);
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__test_bitset____Unify____bitset_error_1_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
            if (succeeded)
              succeeded = mercury__test_bitset____Unify____test_bitset_1_0(TypeInfo_for_T_23, ArgX2_5, ArgY2_6);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_8;
          MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_10;
          MR_Word ArgX3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
            succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
            if (succeeded)
            {
              succeeded = mercury__test_bitset____Unify____test_bitset_1_0(TypeInfo_for_T_23, ArgX2_9, ArgY2_10);
              if (succeeded)
                succeeded = mercury__test_bitset____Unify____test_bitset_1_0(TypeInfo_for_T_23, ArgX3_11, ArgY3_12);
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ArgX1_13 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_14;
          MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_16;
          MR_Word ArgX3_17 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_18;
          MR_Word ArgX4_19 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 3))));
          MR_Word ArgY4_20;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_14 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_16 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_20 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 3))));
            succeeded = (strcmp(ArgX1_13, ArgY1_14) == 0);
            if (succeeded)
            {
              succeeded = mercury__test_bitset____Unify____test_bitset_1_0(TypeInfo_for_T_23, ArgX2_15, ArgY2_16);
              if (succeeded)
              {
                succeeded = mercury__test_bitset____Unify____test_bitset_1_0(TypeInfo_for_T_23, ArgX3_17, ArgY3_18);
                if (succeeded)
                  succeeded = mercury__test_bitset____Unify____test_bitset_1_0(TypeInfo_for_T_23, ArgX4_19, ArgY4_20);
              }
            }
          }
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
mercury__test_bitset____Unify____test_bitset_1_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));

    succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(TypeInfo_for_T_15, ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(TypeInfo_for_T_15, ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = mercury__fat_sparse_bitset____Unify____fat_sparse_bitset_1_0(TypeInfo_for_T_15, ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = mercury__fatter_sparse_bitset____Unify____fatter_sparse_bitset_1_0(TypeInfo_for_T_15, ArgX4_9, ArgY4_10);
          if (succeeded)
            succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(TypeInfo_for_T_15, ArgX5_11, ArgY5_12);
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__test_bitset__foldl_4_p_1(
  MR_Word TypeInfo_for_Acc_26,
  MR_Word TypeClassInfo_for_uenum_25,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Box Acc0_11,
  MR_Box * Acc_12)
{
  MR_bool succeeded;
  MR_Word TypeInfo_29_29;
  MR_Word SetA_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetC_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word SetD_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word SetS_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
  MR_Word ListA_13;
  MR_Word ListB_14;
  MR_Word ListC_15;
  MR_Word ListD_16;
  MR_Word ListS_17;
  MR_Box AccA_18;
  MR_Box AccB_19;
  MR_Box AccC_20;
  MR_Box AccD_21;
  MR_Box AccS_22;
  MR_Word Var_46;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word TypeInfo_31_31;
  MR_Word TypeInfo_35_35;
  MR_Word TypeInfo_39_39;
  MR_Word TypeInfo_43_43;
  MR_Integer PolyConst1_30;
  MR_Integer PolyConst1_34;
  MR_Integer PolyConst1_38;
  MR_Integer PolyConst1_42;

  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_25, SetA_6, &ListA_13);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_25, SetB_7, &ListB_14);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_25, SetC_8, &ListC_15);
  mercury__fatter_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_25, SetD_9, &ListD_16);
  ListS_17 = (MR_Word) (SetS_10);
  Var_46 = (MR_Word) (SetA_6);
  if (((MR_tag((MR_Word) Var_46)) == (MR_Integer) 1))
  {
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(1, Var_46, (MR_Integer) 1))));

    succeeded = mercury__tree_bitset__do_foldl_pred_4_p_3(TypeInfo_for_Acc_26, TypeClassInfo_for_uenum_25, Pred_5, Var_49, Acc0_11, &AccA_18);
  }
  else
  {
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_46, (MR_Integer) 0))));

    succeeded = mercury__tree_bitset__leaf_foldl_pred_4_p_3(TypeInfo_for_Acc_26, TypeClassInfo_for_uenum_25, Pred_5, Var_47, Acc0_11, &AccA_18);
  }
  if (succeeded)
  {
    Var_50 = (MR_Word) (SetB_7);
    succeeded = mercury__sparse_bitset__do_foldl_pred_4_p_3(TypeInfo_for_Acc_26, TypeClassInfo_for_uenum_25, Pred_5, Var_50, Acc0_11, &AccB_19);
    if (succeeded)
    {
      Var_51 = (MR_Word) (SetC_8);
      succeeded = mercury__fat_sparse_bitset__do_foldl_pred_4_p_3(TypeInfo_for_Acc_26, TypeClassInfo_for_uenum_25, Pred_5, Var_51, Acc0_11, &AccC_20);
      if (succeeded)
      {
        Var_52 = (MR_Word) (SetD_9);
        succeeded = mercury__fatter_sparse_bitset__do_foldl_pred_4_p_3(TypeInfo_for_Acc_26, TypeClassInfo_for_uenum_25, Pred_5, Var_52, Acc0_11, &AccD_21);
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_25 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_29_29  = TypeInfo;
}
          Var_53 = (MR_Word) (SetS_10);
          succeeded = mercury__list__foldl_4_p_3(TypeInfo_29_29, TypeInfo_for_Acc_26, Pred_5, Var_53, Acc0_11, &AccS_22);
          if (succeeded)
          {
            PolyConst1_30 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_25 ;
	Index = PolyConst1_30 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_31_31  = TypeInfo;
}
            succeeded = mercury__list____Unify____list_1_0(TypeInfo_31_31, ListA_13, ListS_17);
            if (succeeded)
            {
              PolyConst1_34 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_25 ;
	Index = PolyConst1_34 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_35_35  = TypeInfo;
}
              succeeded = mercury__list____Unify____list_1_0(TypeInfo_35_35, ListB_14, ListS_17);
              if (succeeded)
              {
                PolyConst1_38 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_25 ;
	Index = PolyConst1_38 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_39_39  = TypeInfo;
}
                succeeded = mercury__list____Unify____list_1_0(TypeInfo_39_39, ListC_15, ListS_17);
                if (succeeded)
                {
                  PolyConst1_42 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_25 ;
	Index = PolyConst1_42 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_43_43  = TypeInfo;
}
                  succeeded = mercury__list____Unify____list_1_0(TypeInfo_43_43, ListD_16, ListS_17);
                  if (succeeded)
                  {
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Acc_26, AccA_18, AccS_22);
                    if (succeeded)
                    {
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Acc_26, AccB_19, AccS_22);
                      if (succeeded)
                      {
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Acc_26, AccC_20, AccS_22);
                        if (succeeded)
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Acc_26, AccD_21, AccS_22);
                      }
                    }
                  }
                }
              }
            }
            if (succeeded)
              *Acc_12 = AccS_22;
            else
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.foldl\'/4", (MR_String) "failed");
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__test_bitset__foldl_4_p_0(
  MR_Word TypeInfo_for_Acc_26,
  MR_Word TypeClassInfo_for_uenum_25,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Box Acc0_11,
  MR_Box * Acc_12)
{
  MR_bool succeeded;
  MR_Word TypeInfo_29_29;
  MR_Word SetA_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetC_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word SetD_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word SetS_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
  MR_Word ListA_13;
  MR_Word ListB_14;
  MR_Word ListC_15;
  MR_Word ListD_16;
  MR_Word ListS_17;
  MR_Box AccA_18;
  MR_Box AccB_19;
  MR_Box AccC_20;
  MR_Box AccD_21;
  MR_Box AccS_22;
  MR_Word Var_46;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word TypeInfo_31_31;
  MR_Word TypeInfo_35_35;
  MR_Word TypeInfo_39_39;
  MR_Word TypeInfo_43_43;
  MR_Integer PolyConst1_34;
  MR_Integer PolyConst1_38;
  MR_Integer PolyConst1_42;

  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_25, SetA_6, &ListA_13);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_25, SetB_7, &ListB_14);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_25, SetC_8, &ListC_15);
  mercury__fatter_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_25, SetD_9, &ListD_16);
  ListS_17 = (MR_Word) (SetS_10);
  Var_46 = (MR_Word) (SetA_6);
  if (((MR_tag((MR_Word) Var_46)) == (MR_Integer) 1))
  {
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(1, Var_46, (MR_Integer) 1))));

    mercury__tree_bitset__do_foldl_pred_4_p_0(TypeInfo_for_Acc_26, TypeClassInfo_for_uenum_25, Pred_5, Var_49, Acc0_11, &AccA_18);
  }
  else
  {
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_46, (MR_Integer) 0))));

    mercury__tree_bitset__leaf_foldl_pred_4_p_0(TypeInfo_for_Acc_26, TypeClassInfo_for_uenum_25, Pred_5, Var_47, Acc0_11, &AccA_18);
  }
  Var_50 = (MR_Word) (SetB_7);
  mercury__sparse_bitset__do_foldl_pred_4_p_0(TypeInfo_for_Acc_26, TypeClassInfo_for_uenum_25, Pred_5, Var_50, Acc0_11, &AccB_19);
  Var_51 = (MR_Word) (SetC_8);
  mercury__fat_sparse_bitset__do_foldl_pred_4_p_0(TypeInfo_for_Acc_26, TypeClassInfo_for_uenum_25, Pred_5, Var_51, Acc0_11, &AccC_20);
  Var_52 = (MR_Word) (SetD_9);
  mercury__fatter_sparse_bitset__do_foldl_pred_4_p_0(TypeInfo_for_Acc_26, TypeClassInfo_for_uenum_25, Pred_5, Var_52, Acc0_11, &AccD_21);
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_25 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_29_29  = TypeInfo;
}
  Var_53 = (MR_Word) (SetS_10);
  mercury__list__foldl_4_p_0(TypeInfo_29_29, TypeInfo_for_Acc_26, Pred_5, Var_53, Acc0_11, &AccS_22);
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_25 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_31_31  = TypeInfo;
}
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_31_31, ListA_13, ListS_17);
  if (succeeded)
  {
    PolyConst1_34 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_25 ;
	Index = PolyConst1_34 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_35_35  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_35_35, ListB_14, ListS_17);
    if (succeeded)
    {
      PolyConst1_38 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_25 ;
	Index = PolyConst1_38 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_39_39  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_39_39, ListC_15, ListS_17);
      if (succeeded)
      {
        PolyConst1_42 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_25 ;
	Index = PolyConst1_42 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_43_43  = TypeInfo;
}
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_43_43, ListD_16, ListS_17);
        if (succeeded)
        {
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Acc_26, AccA_18, AccS_22);
          if (succeeded)
          {
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Acc_26, AccB_19, AccS_22);
            if (succeeded)
            {
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Acc_26, AccC_20, AccS_22);
              if (succeeded)
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Acc_26, AccD_21, AccS_22);
            }
          }
        }
      }
    }
  }
  if (succeeded)
    *Acc_12 = AccS_22;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.foldl\'/4", (MR_String) "failed");
      return;
    }
}

MR_Box MR_CALL 
mercury__test_bitset__foldl_3_f_0(
  MR_Word TypeInfo_for_Acc_26,
  MR_Word TypeClassInfo_for_uenum_25,
  MR_Word Func_5,
  MR_Word HeadVar__2_2,
  MR_Box Acc0_11)
{
  MR_bool succeeded;
  MR_Box Acc_12;
  MR_Word TypeInfo_29_29;
  MR_Word SetA_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetC_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word SetD_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word SetS_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
  MR_Word ListA_13;
  MR_Word ListB_14;
  MR_Word ListC_15;
  MR_Word ListD_16;
  MR_Word ListS_17;
  MR_Box AccA_18;
  MR_Box AccB_19;
  MR_Box AccC_20;
  MR_Box AccD_21;
  MR_Box AccS_22;
  MR_Word Var_47;
  MR_Word Var_51;
  MR_Word Var_53;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Word TypeInfo_31_31;
  MR_Word TypeInfo_35_35;
  MR_Word TypeInfo_39_39;
  MR_Word TypeInfo_43_43;
  MR_Integer PolyConst1_34;
  MR_Integer PolyConst1_38;
  MR_Integer PolyConst1_42;

  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_25, SetA_6, &ListA_13);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_25, SetB_7, &ListB_14);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_25, SetC_8, &ListC_15);
  mercury__fatter_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_25, SetD_9, &ListD_16);
  ListS_17 = (MR_Word) (SetS_10);
  Var_47 = (MR_Word) (SetA_6);
  if (((MR_tag((MR_Word) Var_47)) == (MR_Integer) 1))
  {
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(1, Var_47, (MR_Integer) 1))));

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_57_48_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(Func_5, TypeClassInfo_for_uenum_25, Var_50, Acc0_11, &AccA_18);
  }
  else
  {
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_47, (MR_Integer) 0))));

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_57_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(Func_5, TypeClassInfo_for_uenum_25, Var_48, Acc0_11, &AccA_18);
  }
  Var_51 = (MR_Word) (SetB_7);
  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__sparse_bitset_0(Func_5, TypeClassInfo_for_uenum_25, Var_51, Acc0_11, &AccB_19);
  Var_53 = (MR_Word) (SetC_8);
  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_53_52_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__fat_sparse_bitset_0(Func_5, TypeClassInfo_for_uenum_25, Var_53, Acc0_11, &AccC_20);
  Var_55 = (MR_Word) (SetD_9);
  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_53_48_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__fatter_sparse_bitset_0(Func_5, TypeClassInfo_for_uenum_25, Var_55, Acc0_11, &AccD_21);
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_3_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_25 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_29_29  = TypeInfo;
}
  Var_57 = (MR_Word) (SetS_10);
  AccS_22 = mercury__list__foldl_3_f_0(TypeInfo_29_29, TypeInfo_for_Acc_26, Func_5, Var_57, Acc0_11);
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_3_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_25 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_31_31  = TypeInfo;
}
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_31_31, ListA_13, ListS_17);
  if (succeeded)
  {
    PolyConst1_34 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_3_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_25 ;
	Index = PolyConst1_34 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_35_35  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_35_35, ListB_14, ListS_17);
    if (succeeded)
    {
      PolyConst1_38 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_3_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_25 ;
	Index = PolyConst1_38 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_39_39  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_39_39, ListC_15, ListS_17);
      if (succeeded)
      {
        PolyConst1_42 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_3_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_25 ;
	Index = PolyConst1_42 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_43_43  = TypeInfo;
}
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_43_43, ListD_16, ListS_17);
        if (succeeded)
        {
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Acc_26, AccA_18, AccS_22);
          if (succeeded)
          {
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Acc_26, AccB_19, AccS_22);
            if (succeeded)
            {
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Acc_26, AccC_20, AccS_22);
              if (succeeded)
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Acc_26, AccD_21, AccS_22);
            }
          }
        }
      }
    }
  }
  if (succeeded)
    Acc_12 = AccS_22;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140test_bitset.foldl\'/3", (MR_String) "failed");
  return Acc_12;
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_57_48_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(
  MR_Word Var_24,
  MR_Word TypeClassInfo_for_uenum_20,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
      MR_Box Var_17;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_HeadVar__3_3;

      if (((MR_tag((MR_Word) Var_15)) == (MR_Integer) 1))
      {
        MR_Word Var_19 = ((MR_Word) ((MR_hl_field(1, Var_15, (MR_Integer) 1))));

        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_57_48_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(Var_24, TypeClassInfo_for_uenum_20, Var_19, HeadVar__3_3, &Var_17);
      }
      else
      {
        MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, Var_15, (MR_Integer) 0))));

        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_57_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(Var_24, TypeClassInfo_for_uenum_20, Var_16, HeadVar__3_3, &Var_17);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_10;
      next_value_of_HeadVar__3_3 = Var_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_57_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(
  MR_Word Var_24,
  MR_Word TypeClassInfo_for_uenum_20,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Unsigned Var_14 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
      MR_Unsigned Var_15 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
      MR_Unsigned Var_18;
      MR_Box Var_19;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_57_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_18  = Bits;
}
      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_55_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(Var_24, TypeClassInfo_for_uenum_20, (MR_Integer) 0, Var_14, Var_15, Var_18, HeadVar__3_3, &Var_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_10;
      next_value_of_HeadVar__3_3 = Var_19;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_55_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(
  MR_Word Var_30,
  MR_Word TypeClassInfo_for_uenum_26,
  MR_Word HeadVar__1_8,
  MR_Unsigned HeadVar__3_10,
  MR_Unsigned HeadVar__4_11,
  MR_Unsigned HeadVar__5_12,
  MR_Box HeadVar__6_13,
  MR_Box * HeadVar__7_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__4_11 == (MR_Unsigned) 0U);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *HeadVar__7_14 = HeadVar__6_13;
    else
    {
      succeeded = (HeadVar__5_12 == (MR_Unsigned) 1U);
      if (succeeded)
      {
        MR_Box Var_15;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

        Var_15 = mercury__tree_bitset__index_to_enum_1_f_0(TypeClassInfo_for_uenum_26, HeadVar__3_10);
        func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_30, (MR_Integer) 1))));
        *HeadVar__7_14 = func_0(((MR_Box) (Var_30)), Var_15, HeadVar__6_13);
      }
      else
      {
        MR_Unsigned Var_16 = (HeadVar__5_12 >> 1);
        MR_Unsigned Var_18;
        MR_Unsigned Var_19;
        MR_Unsigned Var_20;
        MR_Unsigned Var_21;
        MR_Unsigned Var_31;
        MR_Unsigned Var_32 = ~((MR_Unsigned) 0U);

        Var_31 = (Var_32 << (int) Var_16);
        Var_18 = ~(Var_31);
        Var_19 = (Var_18 & HeadVar__4_11);
        Var_21 = (HeadVar__4_11 >> (int) Var_16);
        Var_20 = (Var_18 & Var_21);
        switch (HeadVar__1_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Unsigned Var_24 = (HeadVar__3_10 + Var_16);
              MR_Box Var_25;
              MR_Unsigned next_value_of_HeadVar__4_11;
              MR_Unsigned next_value_of_HeadVar__5_12;
              MR_Box next_value_of_HeadVar__6_13;

              mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_55_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(Var_30, TypeClassInfo_for_uenum_26, HeadVar__1_8, Var_24, Var_20, Var_16, HeadVar__6_13, &Var_25);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__4_11 = Var_19;
              next_value_of_HeadVar__5_12 = Var_16;
              next_value_of_HeadVar__6_13 = Var_25;
              HeadVar__4_11 = next_value_of_HeadVar__4_11;
              HeadVar__5_12 = next_value_of_HeadVar__5_12;
              HeadVar__6_13 = next_value_of_HeadVar__6_13;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Box Var_22;
              MR_Unsigned Var_23;
              MR_Unsigned next_value_of_HeadVar__3_10;
              MR_Unsigned next_value_of_HeadVar__4_11;
              MR_Unsigned next_value_of_HeadVar__5_12;
              MR_Box next_value_of_HeadVar__6_13;

              mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_55_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(Var_30, TypeClassInfo_for_uenum_26, HeadVar__1_8, HeadVar__3_10, Var_19, Var_16, HeadVar__6_13, &Var_22);
              Var_23 = (HeadVar__3_10 + Var_16);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__3_10 = Var_23;
              next_value_of_HeadVar__4_11 = Var_20;
              next_value_of_HeadVar__5_12 = Var_16;
              next_value_of_HeadVar__6_13 = Var_22;
              HeadVar__3_10 = next_value_of_HeadVar__3_10;
              HeadVar__4_11 = next_value_of_HeadVar__4_11;
              HeadVar__5_12 = next_value_of_HeadVar__5_12;
              HeadVar__6_13 = next_value_of_HeadVar__6_13;
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
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_53_52_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__fat_sparse_bitset_0(
  MR_Word Var_20,
  MR_Word TypeClassInfo_for_uenum_16,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Unsigned Var_9 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Unsigned Var_10 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      MR_Unsigned Var_14;
      MR_Box Var_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_53_52_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__fat_sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_14  = Bits;
}
      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_55_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_6_p_in__fat_sparse_bitset_0(Var_20, TypeClassInfo_for_uenum_16, Var_9, Var_10, Var_14, HeadVar__3_3, &Var_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_11;
      next_value_of_HeadVar__3_3 = Var_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_55_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_6_p_in__fat_sparse_bitset_0(
  MR_Word Var_26,
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_9 == (MR_Unsigned) 0U);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *HeadVar__6_12 = HeadVar__5_11;
    else
    {
      succeeded = (HeadVar__4_10 == (MR_Unsigned) 1U);
      if (succeeded)
      {
        MR_Box Var_13;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

        Var_13 = mercury__enum__det_from_uint_1_f_0(TypeClassInfo_for_uenum_22, HeadVar__2_8);
        func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_26, (MR_Integer) 1))));
        *HeadVar__6_12 = func_0(((MR_Box) (Var_26)), Var_13, HeadVar__5_11);
      }
      else
      {
        MR_Unsigned Var_14 = (HeadVar__4_10 >> 1);
        MR_Unsigned Var_16;
        MR_Unsigned Var_17;
        MR_Unsigned Var_18;
        MR_Unsigned Var_19;
        MR_Box Var_20;
        MR_Unsigned Var_21;
        MR_Unsigned Var_27;
        MR_Unsigned Var_28 = ~((MR_Unsigned) 0U);
        MR_Unsigned next_value_of_HeadVar__2_8;
        MR_Unsigned next_value_of_HeadVar__3_9;
        MR_Unsigned next_value_of_HeadVar__4_10;
        MR_Box next_value_of_HeadVar__5_11;

        Var_27 = (Var_28 << (int) Var_14);
        Var_16 = ~(Var_27);
        Var_17 = (Var_16 & HeadVar__3_9);
        Var_19 = (HeadVar__3_9 >> (int) Var_14);
        Var_18 = (Var_16 & Var_19);
        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_55_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_6_p_in__fat_sparse_bitset_0(Var_26, TypeClassInfo_for_uenum_22, HeadVar__2_8, Var_17, Var_14, HeadVar__5_11, &Var_20);
        Var_21 = (HeadVar__2_8 + Var_14);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_8 = Var_21;
        next_value_of_HeadVar__3_9 = Var_18;
        next_value_of_HeadVar__4_10 = Var_14;
        next_value_of_HeadVar__5_11 = Var_20;
        HeadVar__2_8 = next_value_of_HeadVar__2_8;
        HeadVar__3_9 = next_value_of_HeadVar__3_9;
        HeadVar__4_10 = next_value_of_HeadVar__4_10;
        HeadVar__5_11 = next_value_of_HeadVar__5_11;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_53_48_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__fatter_sparse_bitset_0(
  MR_Word Var_25,
  MR_Word TypeClassInfo_for_uenum_21,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Unsigned Var_9 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Unsigned Var_10 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Unsigned Var_11 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
      MR_Unsigned Var_15;
      MR_Box Var_16;
      MR_Unsigned Var_17;
      MR_Unsigned Var_18;
      MR_Unsigned Var_19;
      MR_Box Var_20;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_53_48_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__fatter_sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_15  = Bits;
}
      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_48_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_6_p_in__fatter_sparse_bitset_0(Var_25, TypeClassInfo_for_uenum_21, Var_9, Var_10, Var_15, HeadVar__3_3, &Var_16);
{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_53_48_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__fatter_sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_18  = Bits;
}
      Var_17 = (Var_9 + Var_18);
{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_53_48_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__fatter_sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_19  = Bits;
}
      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_48_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_6_p_in__fatter_sparse_bitset_0(Var_25, TypeClassInfo_for_uenum_21, Var_17, Var_11, Var_19, Var_16, &Var_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_12;
      next_value_of_HeadVar__3_3 = Var_20;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_48_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_6_p_in__fatter_sparse_bitset_0(
  MR_Word Var_26,
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_9 == (MR_Unsigned) 0U);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *HeadVar__6_12 = HeadVar__5_11;
    else
    {
      succeeded = (HeadVar__4_10 == (MR_Unsigned) 1U);
      if (succeeded)
      {
        MR_Box Var_13;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

        Var_13 = mercury__enum__det_from_uint_1_f_0(TypeClassInfo_for_uenum_22, HeadVar__2_8);
        func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_26, (MR_Integer) 1))));
        *HeadVar__6_12 = func_0(((MR_Box) (Var_26)), Var_13, HeadVar__5_11);
      }
      else
      {
        MR_Unsigned Var_14 = (HeadVar__4_10 >> 1);
        MR_Unsigned Var_16;
        MR_Unsigned Var_17;
        MR_Unsigned Var_18;
        MR_Unsigned Var_19;
        MR_Box Var_20;
        MR_Unsigned Var_21;
        MR_Unsigned Var_27;
        MR_Unsigned Var_28 = ~((MR_Unsigned) 0U);
        MR_Unsigned next_value_of_HeadVar__2_8;
        MR_Unsigned next_value_of_HeadVar__3_9;
        MR_Unsigned next_value_of_HeadVar__4_10;
        MR_Box next_value_of_HeadVar__5_11;

        Var_27 = (Var_28 << (int) Var_14);
        Var_16 = ~(Var_27);
        Var_17 = (Var_16 & HeadVar__3_9);
        Var_19 = (HeadVar__3_9 >> (int) Var_14);
        Var_18 = (Var_16 & Var_19);
        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_48_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_6_p_in__fatter_sparse_bitset_0(Var_26, TypeClassInfo_for_uenum_22, HeadVar__2_8, Var_17, Var_14, HeadVar__5_11, &Var_20);
        Var_21 = (HeadVar__2_8 + Var_14);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_8 = Var_21;
        next_value_of_HeadVar__3_9 = Var_18;
        next_value_of_HeadVar__4_10 = Var_14;
        next_value_of_HeadVar__5_11 = Var_20;
        HeadVar__2_8 = next_value_of_HeadVar__2_8;
        HeadVar__3_9 = next_value_of_HeadVar__3_9;
        HeadVar__4_10 = next_value_of_HeadVar__4_10;
        HeadVar__5_11 = next_value_of_HeadVar__5_11;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_23,
  MR_Word TypeClassInfo_for_uenum_19,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Unsigned Var_13 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
      MR_Unsigned Var_14 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
      MR_Unsigned Var_17;
      MR_Box Var_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_17  = Bits;
}
      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_6_p_in__sparse_bitset_0(Var_23, TypeClassInfo_for_uenum_19, Var_13, Var_14, Var_17, HeadVar__3_3, &Var_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_10;
      next_value_of_HeadVar__3_3 = Var_18;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_26,
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_9 == (MR_Unsigned) 0U);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *HeadVar__6_12 = HeadVar__5_11;
    else
    {
      succeeded = (HeadVar__4_10 == (MR_Unsigned) 1U);
      if (succeeded)
      {
        MR_Box Var_13;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

        Var_13 = mercury__enum__det_from_uint_1_f_0(TypeClassInfo_for_uenum_22, HeadVar__2_8);
        func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_26, (MR_Integer) 1))));
        *HeadVar__6_12 = func_0(((MR_Box) (Var_26)), Var_13, HeadVar__5_11);
      }
      else
      {
        MR_Unsigned Var_14 = (HeadVar__4_10 >> 1);
        MR_Unsigned Var_16;
        MR_Unsigned Var_17;
        MR_Unsigned Var_18;
        MR_Unsigned Var_19;
        MR_Box Var_20;
        MR_Unsigned Var_21;
        MR_Unsigned Var_27;
        MR_Unsigned Var_28 = ~((MR_Unsigned) 0U);
        MR_Unsigned next_value_of_HeadVar__2_8;
        MR_Unsigned next_value_of_HeadVar__3_9;
        MR_Unsigned next_value_of_HeadVar__4_10;
        MR_Box next_value_of_HeadVar__5_11;

        Var_27 = (Var_28 << (int) Var_14);
        Var_16 = ~(Var_27);
        Var_17 = (Var_16 & HeadVar__3_9);
        Var_19 = (HeadVar__3_9 >> (int) Var_14);
        Var_18 = (Var_16 & Var_19);
        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_6_p_in__sparse_bitset_0(Var_26, TypeClassInfo_for_uenum_22, HeadVar__2_8, Var_17, Var_14, HeadVar__5_11, &Var_20);
        Var_21 = (HeadVar__2_8 + Var_14);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_8 = Var_21;
        next_value_of_HeadVar__3_9 = Var_18;
        next_value_of_HeadVar__4_10 = Var_14;
        next_value_of_HeadVar__5_11 = Var_20;
        HeadVar__2_8 = next_value_of_HeadVar__2_8;
        HeadVar__3_9 = next_value_of_HeadVar__3_9;
        HeadVar__4_10 = next_value_of_HeadVar__4_10;
        HeadVar__5_11 = next_value_of_HeadVar__5_11;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__test_bitset__filter_4_p_0(
  MR_Word TypeClassInfo_for_uenum_40,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Word * ResultIn_11,
  MR_Word * ResultOut_12)
{
  MR_bool succeeded;
  MR_Word TypeInfo_43_43;
  MR_Word TypeInfo_14_98;
  MR_Word SetA_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetC_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word SetD_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word SetS_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
  MR_Word ListA_13;
  MR_Word ListB_14;
  MR_Word ListC_15;
  MR_Word ListD_16;
  MR_Word ListS_17;
  MR_Word InSetA_18;
  MR_Word OutSetA_19;
  MR_Word InSetB_20;
  MR_Word OutSetB_21;
  MR_Word InSetC_22;
  MR_Word OutSetC_23;
  MR_Word InSetD_24;
  MR_Word OutSetD_25;
  MR_Word InSetS_26;
  MR_Word OutSetS_27;
  MR_Word InListA_28;
  MR_Word OutListA_29;
  MR_Word InListB_30;
  MR_Word OutListB_31;
  MR_Word InListC_32;
  MR_Word OutListC_33;
  MR_Word InListD_34;
  MR_Word OutListD_35;
  MR_Word InListS_36;
  MR_Word OutListS_37;
  MR_Word Var_94;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word TypeInfo_47_47;
  MR_Word TypeInfo_51_51;
  MR_Word TypeInfo_55_55;
  MR_Word TypeInfo_59_59;
  MR_Word TypeInfo_63_63;
  MR_Word TypeInfo_67_67;
  MR_Word TypeInfo_71_71;
  MR_Word TypeInfo_75_75;
  MR_Word TypeInfo_79_79;
  MR_Word TypeInfo_83_83;
  MR_Word TypeInfo_87_87;
  MR_Word TypeInfo_91_91;
  MR_Integer PolyConst1_50;
  MR_Integer PolyConst1_54;
  MR_Integer PolyConst1_58;
  MR_Integer PolyConst1_62;
  MR_Integer PolyConst1_66;
  MR_Integer PolyConst1_70;
  MR_Integer PolyConst1_74;
  MR_Integer PolyConst1_78;
  MR_Integer PolyConst1_82;
  MR_Integer PolyConst1_86;
  MR_Integer PolyConst1_90;

  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_40, SetA_6, &ListA_13);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_40, SetB_7, &ListB_14);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_40, SetC_8, &ListC_15);
  mercury__fatter_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_40, SetD_9, &ListD_16);
  ListS_17 = (MR_Word) (SetS_10);
  mercury__tree_bitset__filter_4_p_0(TypeClassInfo_for_uenum_40, Pred_5, SetA_6, &InSetA_18, &OutSetA_19);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_40, SetB_7, &Var_94);
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_40 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_14_98  = TypeInfo;
}
  mercury__list__filter_4_p_0(TypeInfo_14_98, Pred_5, Var_94, &Var_95, &Var_96);
  mercury__sparse_bitset__sorted_list_to_set_2_p_0(TypeClassInfo_for_uenum_40, Var_95, &InSetB_20);
  mercury__sparse_bitset__sorted_list_to_set_2_p_0(TypeClassInfo_for_uenum_40, Var_96, &OutSetB_21);
  mercury__fat_sparse_bitset__filter_4_p_0(TypeClassInfo_for_uenum_40, Pred_5, SetC_8, &InSetC_22, &OutSetC_23);
  mercury__fatter_sparse_bitset__filter_4_p_0(TypeClassInfo_for_uenum_40, Pred_5, SetD_9, &InSetD_24, &OutSetD_25);
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_40 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_43_43  = TypeInfo;
}
  mercury__set_ordlist__filter_4_p_0(TypeInfo_43_43, Pred_5, SetS_10, &InSetS_26, &OutSetS_27);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_40, InSetA_18, &InListA_28);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_40, OutSetA_19, &OutListA_29);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_40, InSetB_20, &InListB_30);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_40, OutSetB_21, &OutListB_31);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_40, InSetC_22, &InListC_32);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_40, OutSetC_23, &OutListC_33);
  mercury__fatter_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_40, InSetD_24, &InListD_34);
  mercury__fatter_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_40, OutSetD_25, &OutListD_35);
  InListS_36 = (MR_Word) (InSetS_26);
  OutListS_37 = (MR_Word) (OutSetS_27);
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_40 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_47_47  = TypeInfo;
}
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_47_47, ListA_13, ListS_17);
  if (succeeded)
  {
    PolyConst1_50 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_40 ;
	Index = PolyConst1_50 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_51_51  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_51_51, ListB_14, ListS_17);
    if (succeeded)
    {
      PolyConst1_54 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_40 ;
	Index = PolyConst1_54 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_55_55  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_55_55, ListC_15, ListS_17);
      if (succeeded)
      {
        PolyConst1_58 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_40 ;
	Index = PolyConst1_58 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_59_59  = TypeInfo;
}
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_59_59, ListD_16, ListS_17);
        if (succeeded)
        {
          PolyConst1_62 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_40 ;
	Index = PolyConst1_62 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_63_63  = TypeInfo;
}
          succeeded = mercury__list____Unify____list_1_0(TypeInfo_63_63, InListA_28, InListS_36);
          if (succeeded)
          {
            PolyConst1_66 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_40 ;
	Index = PolyConst1_66 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_67_67  = TypeInfo;
}
            succeeded = mercury__list____Unify____list_1_0(TypeInfo_67_67, InListB_30, InListS_36);
            if (succeeded)
            {
              PolyConst1_70 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_40 ;
	Index = PolyConst1_70 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_71_71  = TypeInfo;
}
              succeeded = mercury__list____Unify____list_1_0(TypeInfo_71_71, InListC_32, InListS_36);
              if (succeeded)
              {
                PolyConst1_74 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_40 ;
	Index = PolyConst1_74 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_75_75  = TypeInfo;
}
                succeeded = mercury__list____Unify____list_1_0(TypeInfo_75_75, InListD_34, InListS_36);
                if (succeeded)
                {
                  PolyConst1_78 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_40 ;
	Index = PolyConst1_78 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_79_79  = TypeInfo;
}
                  succeeded = mercury__list____Unify____list_1_0(TypeInfo_79_79, OutListA_29, OutListS_37);
                  if (succeeded)
                  {
                    PolyConst1_82 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_40 ;
	Index = PolyConst1_82 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_83_83  = TypeInfo;
}
                    succeeded = mercury__list____Unify____list_1_0(TypeInfo_83_83, OutListB_31, OutListS_37);
                    if (succeeded)
                    {
                      PolyConst1_86 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_40 ;
	Index = PolyConst1_86 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_87_87  = TypeInfo;
}
                      succeeded = mercury__list____Unify____list_1_0(TypeInfo_87_87, OutListC_33, OutListS_37);
                      if (succeeded)
                      {
                        PolyConst1_90 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_40 ;
	Index = PolyConst1_90 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_91_91  = TypeInfo;
}
                        succeeded = mercury__list____Unify____list_1_0(TypeInfo_91_91, OutListD_35, OutListS_37);
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
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *ResultIn_11 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (InSetA_18));
      MR_hl_field(0, base, 1) = ((MR_Box) (InSetB_20));
      MR_hl_field(0, base, 2) = ((MR_Box) (InSetC_22));
      MR_hl_field(0, base, 3) = ((MR_Box) (InSetD_24));
      MR_hl_field(0, base, 4) = ((MR_Box) (InSetS_26));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *ResultOut_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (OutSetA_19));
      MR_hl_field(0, base, 1) = ((MR_Box) (OutSetB_21));
      MR_hl_field(0, base, 2) = ((MR_Box) (OutSetC_23));
      MR_hl_field(0, base, 3) = ((MR_Box) (OutSetD_25));
      MR_hl_field(0, base, 4) = ((MR_Box) (OutSetS_27));
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.filter\'/4", (MR_String) "failed");
      return;
    }
}

MR_Word MR_CALL 
mercury__test_bitset__filter_2_f_0(
  MR_Word TypeClassInfo_for_uenum_28,
  MR_Word Pred_4,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Result_10;
  MR_Word TypeInfo_31_31;
  MR_Word TypeInfo_11_68;
  MR_Word TypeInfo_11_86;
  MR_Word TypeInfo_11_90;
  MR_Word TypeInfo_11_94;
  MR_Word SetA_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetC_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word SetD_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word SetS_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
  MR_Word ListA_11;
  MR_Word ListB_12;
  MR_Word ListC_13;
  MR_Word ListD_14;
  MR_Word ListS_15;
  MR_Word InSetA_16;
  MR_Word InSetB_17;
  MR_Word InSetC_18;
  MR_Word InSetD_19;
  MR_Word InSetS_20;
  MR_Word InListA_21;
  MR_Word InListB_22;
  MR_Word InListC_23;
  MR_Word InListD_24;
  MR_Word InListS_25;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_77;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word TypeInfo_34_34;
  MR_Word TypeInfo_38_38;
  MR_Word TypeInfo_42_42;
  MR_Word TypeInfo_46_46;
  MR_Word TypeInfo_50_50;
  MR_Word TypeInfo_54_54;
  MR_Word TypeInfo_58_58;
  MR_Word TypeInfo_62_62;
  MR_Integer PolyConst1_37;
  MR_Integer PolyConst1_41;
  MR_Integer PolyConst1_45;
  MR_Integer PolyConst1_49;
  MR_Integer PolyConst1_53;
  MR_Integer PolyConst1_57;
  MR_Integer PolyConst1_61;

  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_28, SetA_5, &ListA_11);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_28, SetB_6, &ListB_12);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_28, SetC_7, &ListC_13);
  mercury__fatter_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_28, SetD_8, &ListD_14);
  ListS_15 = (MR_Word) (SetS_9);
  Var_77 = (MR_Word) (SetA_5);
  if (((MR_tag((MR_Word) Var_77)) == (MR_Integer) 1))
  {
    MR_Word Var_80 = ((MR_Word) ((MR_hl_field(1, Var_77, (MR_Integer) 1))));

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_57_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_uenum_28, TypeClassInfo_for_uenum_28, Var_80, (MR_Word) ((MR_Unsigned) 0U), &Var_65);
  }
  else
  {
    MR_Word Var_78 = ((MR_Word) ((MR_hl_field(0, Var_77, (MR_Integer) 0))));

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_57_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_uenum_28, TypeClassInfo_for_uenum_28, Var_78, (MR_Word) ((MR_Unsigned) 0U), &Var_65);
  }
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_28 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_11_68  = TypeInfo;
}
  mercury__list__filter_3_p_0(TypeInfo_11_68, Pred_4, Var_65, &Var_66);
  InSetA_16 = mercury__tree_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_uenum_28, Var_66);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_28, SetB_6, &Var_83);
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_28 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_11_86  = TypeInfo;
}
  mercury__list__filter_3_p_0(TypeInfo_11_86, Pred_4, Var_83, &Var_84);
  mercury__sparse_bitset__sorted_list_to_set_2_p_0(TypeClassInfo_for_uenum_28, Var_84, &InSetB_17);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_28, SetC_7, &Var_87);
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_28 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_11_90  = TypeInfo;
}
  mercury__list__filter_3_p_0(TypeInfo_11_90, Pred_4, Var_87, &Var_88);
  mercury__fat_sparse_bitset__sorted_list_to_set_2_p_0(TypeClassInfo_for_uenum_28, Var_88, &InSetC_18);
  mercury__fatter_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_28, SetD_8, &Var_91);
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_28 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_11_94  = TypeInfo;
}
  mercury__list__filter_3_p_0(TypeInfo_11_94, Pred_4, Var_91, &Var_92);
  mercury__fatter_sparse_bitset__sorted_list_to_set_2_p_0(TypeClassInfo_for_uenum_28, Var_92, &InSetD_19);
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_28 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_31_31  = TypeInfo;
}
  InSetS_20 = mercury__set_ordlist__filter_2_f_0(TypeInfo_31_31, Pred_4, SetS_9);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_28, InSetA_16, &InListA_21);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_28, InSetB_17, &InListB_22);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_28, InSetC_18, &InListC_23);
  mercury__fatter_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_28, InSetD_19, &InListD_24);
  InListS_25 = (MR_Word) (InSetS_20);
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_28 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_34_34  = TypeInfo;
}
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_34_34, ListA_11, ListS_15);
  if (succeeded)
  {
    PolyConst1_37 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_28 ;
	Index = PolyConst1_37 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_38_38  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_38_38, ListB_12, ListS_15);
    if (succeeded)
    {
      PolyConst1_41 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_28 ;
	Index = PolyConst1_41 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_42_42  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_42_42, ListC_13, ListS_15);
      if (succeeded)
      {
        PolyConst1_45 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_28 ;
	Index = PolyConst1_45 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_46_46  = TypeInfo;
}
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_46_46, ListD_14, ListS_15);
        if (succeeded)
        {
          PolyConst1_49 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_28 ;
	Index = PolyConst1_49 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_50_50  = TypeInfo;
}
          succeeded = mercury__list____Unify____list_1_0(TypeInfo_50_50, InListA_21, InListS_25);
          if (succeeded)
          {
            PolyConst1_53 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_28 ;
	Index = PolyConst1_53 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_54_54  = TypeInfo;
}
            succeeded = mercury__list____Unify____list_1_0(TypeInfo_54_54, InListB_22, InListS_25);
            if (succeeded)
            {
              PolyConst1_57 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_28 ;
	Index = PolyConst1_57 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_58_58  = TypeInfo;
}
              succeeded = mercury__list____Unify____list_1_0(TypeInfo_58_58, InListC_23, InListS_25);
              if (succeeded)
              {
                PolyConst1_61 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_28 ;
	Index = PolyConst1_61 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_62_62  = TypeInfo;
}
                succeeded = mercury__list____Unify____list_1_0(TypeInfo_62_62, InListD_24, InListS_25);
              }
            }
          }
        }
      }
    }
  }
  if (succeeded)
    {
      Result_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_10, 0) = ((MR_Box) (InSetA_16));
      MR_hl_field(0, Result_10, 1) = ((MR_Box) (InSetB_17));
      MR_hl_field(0, Result_10, 2) = ((MR_Box) (InSetC_18));
      MR_hl_field(0, Result_10, 3) = ((MR_Box) (InSetD_19));
      MR_hl_field(0, Result_10, 4) = ((MR_Box) (InSetS_20));
    }
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140test_bitset.filter\'/2", (MR_String) "failed");
  return Result_10;
}

MR_bool MR_CALL 
mercury__test_bitset__all_true_2_p_0(
  MR_Word TypeClassInfo_for_uenum_16,
  MR_Word Pred_3,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word SetA_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetC_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word SetD_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word SetS_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
  MR_Word MaybeA_9;
  MR_Word MaybeB_10;
  MR_Word MaybeC_11;
  MR_Word MaybeD_12;
  MR_Word MaybeS_13;
  MR_Word Var_19 = (MR_Word) (SetA_4);
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word TypeInfo_18_18;
  MR_Word Var_26;

  if (((MR_tag((MR_Word) Var_19)) == (MR_Integer) 1))
  {
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 1))));

    succeeded = mercury__tree_bitset__interior_all_true_2_p_0(TypeClassInfo_for_uenum_16, Pred_3, Var_22);
  }
  else
  {
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_19, (MR_Integer) 0))));

    succeeded = mercury__tree_bitset__leaf_all_true_2_p_0(TypeClassInfo_for_uenum_16, Pred_3, Var_20);
  }
  if (succeeded)
    MaybeA_9 = (MR_Integer) 1;
  else
    MaybeA_9 = (MR_Integer) 0;
  Var_23 = (MR_Word) (SetB_5);
  succeeded = mercury__sparse_bitset__all_true_node_2_p_0(TypeClassInfo_for_uenum_16, Pred_3, Var_23);
  if (succeeded)
    MaybeB_10 = (MR_Integer) 1;
  else
    MaybeB_10 = (MR_Integer) 0;
  Var_24 = (MR_Word) (SetC_6);
  succeeded = mercury__fat_sparse_bitset__all_true_node_2_p_0(TypeClassInfo_for_uenum_16, Pred_3, Var_24);
  if (succeeded)
    MaybeC_11 = (MR_Integer) 1;
  else
    MaybeC_11 = (MR_Integer) 0;
  Var_25 = (MR_Word) (SetD_7);
  succeeded = mercury__fatter_sparse_bitset__all_true_node_2_p_0(TypeClassInfo_for_uenum_16, Pred_3, Var_25);
  if (succeeded)
    MaybeD_12 = (MR_Integer) 1;
  else
    MaybeD_12 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__test_bitset__all_true_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_16 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_18_18  = TypeInfo;
}
  Var_26 = (MR_Word) (SetS_8);
  succeeded = mercury__list__all_true_2_p_0(TypeInfo_18_18, Pred_3, Var_26);
  if (succeeded)
    MaybeS_13 = (MR_Integer) 1;
  else
    MaybeS_13 = (MR_Integer) 0;
  succeeded = (MaybeA_9 == MaybeS_13);
  if (succeeded)
  {
    succeeded = (MaybeB_10 == MaybeS_13);
    if (succeeded)
    {
      succeeded = (MaybeC_11 == MaybeS_13);
      if (succeeded)
        succeeded = (MaybeD_12 == MaybeS_13);
    }
  }
  if (succeeded)
    succeeded = (MaybeS_13 == (MR_Integer) 1);
  else
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.all_true\'/2", (MR_String) "failed");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_Integer MR_CALL 
mercury__test_bitset__count_1_f_0(
  MR_Word TypeClassInfo_for_uenum_16,
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Integer Cnt_8;
  MR_Word TypeInfo_18_18;
  MR_Word SetA_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word SetB_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word SetC_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
  MR_Word SetD_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
  MR_Word SetS_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
  MR_Integer CntA_9;
  MR_Integer CntB_10;
  MR_Integer CntC_11;
  MR_Integer CntD_12;
  MR_Integer CntS_13;
  MR_Word Var_24 = (MR_Word) (SetA_3);
  MR_Word Var_33;
  MR_Word Var_39;
  MR_Word Var_45;
  MR_Word Var_48;

  if (((MR_tag((MR_Word) Var_24)) == (MR_Integer) 1))
  {
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(1, Var_24, (MR_Integer) 1))));

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_57_57_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_uenum_16, Var_27, (MR_Integer) 0, &CntA_9);
  }
  else
  {
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_24, (MR_Integer) 0))));

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_57_56_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_uenum_16, Var_25, (MR_Integer) 0, &CntA_9);
  }
  Var_33 = (MR_Word) (SetB_4);
  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_52_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__sparse_bitset_0(TypeClassInfo_for_uenum_16, Var_33, (MR_Integer) 0, &CntB_10);
  Var_39 = (MR_Word) (SetC_5);
  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_53_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__fat_sparse_bitset_0(TypeClassInfo_for_uenum_16, Var_39, (MR_Integer) 0, &CntC_11);
  Var_45 = (MR_Word) (SetD_6);
  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_57_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__fatter_sparse_bitset_0(TypeClassInfo_for_uenum_16, Var_45, (MR_Integer) 0, &CntD_12);
{
#define MR_PROC_LABEL mercury__test_bitset__count_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_16 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_18_18  = TypeInfo;
}
  Var_48 = (MR_Word) (SetS_7);
  mercury__list__length_acc_3_p_0(TypeInfo_18_18, Var_48, (MR_Integer) 0, &CntS_13);
  succeeded = (CntA_9 == CntS_13);
  if (succeeded)
  {
    succeeded = (CntB_10 == CntS_13);
    if (succeeded)
    {
      succeeded = (CntC_11 == CntS_13);
      if (succeeded)
        succeeded = (CntD_12 == CntS_13);
    }
  }
  if (succeeded)
    Cnt_8 = CntS_13;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140test_bitset.count\'/1", (MR_String) "failed");
  return Cnt_8;
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_57_57_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(
  MR_Word TypeClassInfo_for_uenum_20,
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
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
      MR_Integer Var_17;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_HeadVar__3_3;

      if (((MR_tag((MR_Word) Var_15)) == (MR_Integer) 1))
      {
        MR_Word Var_19 = ((MR_Word) ((MR_hl_field(1, Var_15, (MR_Integer) 1))));

        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_57_57_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_uenum_20, Var_19, HeadVar__3_3, &Var_17);
      }
      else
      {
        MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, Var_15, (MR_Integer) 0))));

        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_57_56_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_uenum_20, Var_16, HeadVar__3_3, &Var_17);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_10;
      next_value_of_HeadVar__3_3 = Var_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_57_56_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(
  MR_Word TypeClassInfo_for_uenum_20,
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
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Unsigned Var_14 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
      MR_Unsigned Var_15 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
      MR_Unsigned Var_18;
      MR_Integer Var_19;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_57_56_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_18  = Bits;
}
      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_49_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(TypeClassInfo_for_uenum_20, (MR_Integer) 0, Var_14, Var_15, Var_18, HeadVar__3_3, &Var_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_10;
      next_value_of_HeadVar__3_3 = Var_19;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_49_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(
  MR_Word TypeClassInfo_for_uenum_26,
  MR_Word HeadVar__1_8,
  MR_Unsigned HeadVar__3_10,
  MR_Unsigned HeadVar__4_11,
  MR_Unsigned HeadVar__5_12,
  MR_Integer HeadVar__6_13,
  MR_Integer * HeadVar__7_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__4_11 == (MR_Unsigned) 0U);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *HeadVar__7_14 = HeadVar__6_13;
    else
    {
      succeeded = (HeadVar__5_12 == (MR_Unsigned) 1U);
      if (succeeded)
      {
        MR_Box Var_15;

        Var_15 = mercury__tree_bitset__index_to_enum_1_f_0(TypeClassInfo_for_uenum_26, HeadVar__3_10);
        *HeadVar__7_14 = (MR_Integer) ((MR_Unsigned) HeadVar__6_13 + (MR_Unsigned) 1);
      }
      else
      {
        MR_Unsigned Var_16 = (HeadVar__5_12 >> 1);
        MR_Unsigned Var_18;
        MR_Unsigned Var_19;
        MR_Unsigned Var_20;
        MR_Unsigned Var_21;
        MR_Unsigned Var_36;
        MR_Unsigned Var_37 = ~((MR_Unsigned) 0U);

        Var_36 = (Var_37 << (int) Var_16);
        Var_18 = ~(Var_36);
        Var_19 = (Var_18 & HeadVar__4_11);
        Var_21 = (HeadVar__4_11 >> (int) Var_16);
        Var_20 = (Var_18 & Var_21);
        switch (HeadVar__1_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Unsigned Var_24 = (HeadVar__3_10 + Var_16);
              MR_Integer Var_25;
              MR_Unsigned next_value_of_HeadVar__4_11;
              MR_Unsigned next_value_of_HeadVar__5_12;
              MR_Integer next_value_of_HeadVar__6_13;

              mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_49_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(TypeClassInfo_for_uenum_26, HeadVar__1_8, Var_24, Var_20, Var_16, HeadVar__6_13, &Var_25);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__4_11 = Var_19;
              next_value_of_HeadVar__5_12 = Var_16;
              next_value_of_HeadVar__6_13 = Var_25;
              HeadVar__4_11 = next_value_of_HeadVar__4_11;
              HeadVar__5_12 = next_value_of_HeadVar__5_12;
              HeadVar__6_13 = next_value_of_HeadVar__6_13;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Integer Var_22;
              MR_Unsigned Var_23;
              MR_Unsigned next_value_of_HeadVar__3_10;
              MR_Unsigned next_value_of_HeadVar__4_11;
              MR_Unsigned next_value_of_HeadVar__5_12;
              MR_Integer next_value_of_HeadVar__6_13;

              mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_49_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(TypeClassInfo_for_uenum_26, HeadVar__1_8, HeadVar__3_10, Var_19, Var_16, HeadVar__6_13, &Var_22);
              Var_23 = (HeadVar__3_10 + Var_16);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__3_10 = Var_23;
              next_value_of_HeadVar__4_11 = Var_20;
              next_value_of_HeadVar__5_12 = Var_16;
              next_value_of_HeadVar__6_13 = Var_22;
              HeadVar__3_10 = next_value_of_HeadVar__3_10;
              HeadVar__4_11 = next_value_of_HeadVar__4_11;
              HeadVar__5_12 = next_value_of_HeadVar__5_12;
              HeadVar__6_13 = next_value_of_HeadVar__6_13;
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
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_52_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_19,
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
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Unsigned Var_13 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
      MR_Unsigned Var_14 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
      MR_Unsigned Var_17;
      MR_Integer Var_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_52_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_17  = Bits;
}
      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_49_48_49_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_6_p_in__sparse_bitset_0(TypeClassInfo_for_uenum_19, Var_13, Var_14, Var_17, HeadVar__3_3, &Var_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_10;
      next_value_of_HeadVar__3_3 = Var_18;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_49_48_49_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Integer HeadVar__5_11,
  MR_Integer * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_9 == (MR_Unsigned) 0U);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *HeadVar__6_12 = HeadVar__5_11;
    else
    {
      succeeded = (HeadVar__4_10 == (MR_Unsigned) 1U);
      if (succeeded)
      {
        MR_Box Var_13;

        Var_13 = mercury__enum__det_from_uint_1_f_0(TypeClassInfo_for_uenum_22, HeadVar__2_8);
        *HeadVar__6_12 = (MR_Integer) ((MR_Unsigned) HeadVar__5_11 + (MR_Unsigned) 1);
      }
      else
      {
        MR_Unsigned Var_14 = (HeadVar__4_10 >> 1);
        MR_Unsigned Var_16;
        MR_Unsigned Var_17;
        MR_Unsigned Var_18;
        MR_Unsigned Var_19;
        MR_Integer Var_20;
        MR_Unsigned Var_21;
        MR_Unsigned Var_32;
        MR_Unsigned Var_33 = ~((MR_Unsigned) 0U);
        MR_Unsigned next_value_of_HeadVar__2_8;
        MR_Unsigned next_value_of_HeadVar__3_9;
        MR_Unsigned next_value_of_HeadVar__4_10;
        MR_Integer next_value_of_HeadVar__5_11;

        Var_32 = (Var_33 << (int) Var_14);
        Var_16 = ~(Var_32);
        Var_17 = (Var_16 & HeadVar__3_9);
        Var_19 = (HeadVar__3_9 >> (int) Var_14);
        Var_18 = (Var_16 & Var_19);
        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_49_48_49_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_6_p_in__sparse_bitset_0(TypeClassInfo_for_uenum_22, HeadVar__2_8, Var_17, Var_14, HeadVar__5_11, &Var_20);
        Var_21 = (HeadVar__2_8 + Var_14);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_8 = Var_21;
        next_value_of_HeadVar__3_9 = Var_18;
        next_value_of_HeadVar__4_10 = Var_14;
        next_value_of_HeadVar__5_11 = Var_20;
        HeadVar__2_8 = next_value_of_HeadVar__2_8;
        HeadVar__3_9 = next_value_of_HeadVar__3_9;
        HeadVar__4_10 = next_value_of_HeadVar__4_10;
        HeadVar__5_11 = next_value_of_HeadVar__5_11;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_57_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__fatter_sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_21,
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
      MR_Unsigned Var_9 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Unsigned Var_10 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Unsigned Var_11 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
      MR_Unsigned Var_15;
      MR_Integer Var_16;
      MR_Unsigned Var_17;
      MR_Unsigned Var_18;
      MR_Unsigned Var_19;
      MR_Integer Var_20;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_57_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__fatter_sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_15  = Bits;
}
      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_49_48_52_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_6_p_in__fatter_sparse_bitset_0(TypeClassInfo_for_uenum_21, Var_9, Var_10, Var_15, HeadVar__3_3, &Var_16);
{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_57_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__fatter_sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_18  = Bits;
}
      Var_17 = (Var_9 + Var_18);
{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_57_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__fatter_sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_19  = Bits;
}
      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_49_48_52_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_6_p_in__fatter_sparse_bitset_0(TypeClassInfo_for_uenum_21, Var_17, Var_11, Var_19, Var_16, &Var_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_12;
      next_value_of_HeadVar__3_3 = Var_20;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_49_48_52_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_6_p_in__fatter_sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Integer HeadVar__5_11,
  MR_Integer * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_9 == (MR_Unsigned) 0U);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *HeadVar__6_12 = HeadVar__5_11;
    else
    {
      succeeded = (HeadVar__4_10 == (MR_Unsigned) 1U);
      if (succeeded)
      {
        MR_Box Var_13;

        Var_13 = mercury__enum__det_from_uint_1_f_0(TypeClassInfo_for_uenum_22, HeadVar__2_8);
        *HeadVar__6_12 = (MR_Integer) ((MR_Unsigned) HeadVar__5_11 + (MR_Unsigned) 1);
      }
      else
      {
        MR_Unsigned Var_14 = (HeadVar__4_10 >> 1);
        MR_Unsigned Var_16;
        MR_Unsigned Var_17;
        MR_Unsigned Var_18;
        MR_Unsigned Var_19;
        MR_Integer Var_20;
        MR_Unsigned Var_21;
        MR_Unsigned Var_32;
        MR_Unsigned Var_33 = ~((MR_Unsigned) 0U);
        MR_Unsigned next_value_of_HeadVar__2_8;
        MR_Unsigned next_value_of_HeadVar__3_9;
        MR_Unsigned next_value_of_HeadVar__4_10;
        MR_Integer next_value_of_HeadVar__5_11;

        Var_32 = (Var_33 << (int) Var_14);
        Var_16 = ~(Var_32);
        Var_17 = (Var_16 & HeadVar__3_9);
        Var_19 = (HeadVar__3_9 >> (int) Var_14);
        Var_18 = (Var_16 & Var_19);
        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_49_48_52_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_6_p_in__fatter_sparse_bitset_0(TypeClassInfo_for_uenum_22, HeadVar__2_8, Var_17, Var_14, HeadVar__5_11, &Var_20);
        Var_21 = (HeadVar__2_8 + Var_14);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_8 = Var_21;
        next_value_of_HeadVar__3_9 = Var_18;
        next_value_of_HeadVar__4_10 = Var_14;
        next_value_of_HeadVar__5_11 = Var_20;
        HeadVar__2_8 = next_value_of_HeadVar__2_8;
        HeadVar__3_9 = next_value_of_HeadVar__3_9;
        HeadVar__4_10 = next_value_of_HeadVar__4_10;
        HeadVar__5_11 = next_value_of_HeadVar__5_11;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_53_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__fat_sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_16,
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
      MR_Unsigned Var_9 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Unsigned Var_10 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      MR_Unsigned Var_14;
      MR_Integer Var_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_53_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__fat_sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_14  = Bits;
}
      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_49_48_54_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_6_p_in__fat_sparse_bitset_0(TypeClassInfo_for_uenum_16, Var_9, Var_10, Var_14, HeadVar__3_3, &Var_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_11;
      next_value_of_HeadVar__3_3 = Var_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_49_48_54_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_6_p_in__fat_sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Integer HeadVar__5_11,
  MR_Integer * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_9 == (MR_Unsigned) 0U);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *HeadVar__6_12 = HeadVar__5_11;
    else
    {
      succeeded = (HeadVar__4_10 == (MR_Unsigned) 1U);
      if (succeeded)
      {
        MR_Box Var_13;

        Var_13 = mercury__enum__det_from_uint_1_f_0(TypeClassInfo_for_uenum_22, HeadVar__2_8);
        *HeadVar__6_12 = (MR_Integer) ((MR_Unsigned) HeadVar__5_11 + (MR_Unsigned) 1);
      }
      else
      {
        MR_Unsigned Var_14 = (HeadVar__4_10 >> 1);
        MR_Unsigned Var_16;
        MR_Unsigned Var_17;
        MR_Unsigned Var_18;
        MR_Unsigned Var_19;
        MR_Integer Var_20;
        MR_Unsigned Var_21;
        MR_Unsigned Var_32;
        MR_Unsigned Var_33 = ~((MR_Unsigned) 0U);
        MR_Unsigned next_value_of_HeadVar__2_8;
        MR_Unsigned next_value_of_HeadVar__3_9;
        MR_Unsigned next_value_of_HeadVar__4_10;
        MR_Integer next_value_of_HeadVar__5_11;

        Var_32 = (Var_33 << (int) Var_14);
        Var_16 = ~(Var_32);
        Var_17 = (Var_16 & HeadVar__3_9);
        Var_19 = (HeadVar__3_9 >> (int) Var_14);
        Var_18 = (Var_16 & Var_19);
        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_49_48_54_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_6_p_in__fat_sparse_bitset_0(TypeClassInfo_for_uenum_22, HeadVar__2_8, Var_17, Var_14, HeadVar__5_11, &Var_20);
        Var_21 = (HeadVar__2_8 + Var_14);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_8 = Var_21;
        next_value_of_HeadVar__3_9 = Var_18;
        next_value_of_HeadVar__4_10 = Var_14;
        next_value_of_HeadVar__5_11 = Var_20;
        HeadVar__2_8 = next_value_of_HeadVar__2_8;
        HeadVar__3_9 = next_value_of_HeadVar__3_9;
        HeadVar__4_10 = next_value_of_HeadVar__4_10;
        HeadVar__5_11 = next_value_of_HeadVar__5_11;
        continue;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__test_bitset__to_set_1_f_0(
  MR_Word TypeClassInfo_for_uenum_4,
  MR_Word Set_3)
{
  MR_Word HeadVar__2_2;

  HeadVar__2_2 = mercury__test_bitset__bitset_to_set_1_f_0(TypeClassInfo_for_uenum_4, Set_3);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__test_bitset__bitset_to_set_1_f_0(
  MR_Word TypeClassInfo_for_uenum_6,
  MR_Word TestBitset_3)
{
  MR_Word Set_4;
  MR_Word TypeInfo_8_8;
  MR_Word SortedList_5;
  MR_Word Var_9;

  SortedList_5 = mercury__test_bitset__to_sorted_list_1_f_0(TypeClassInfo_for_uenum_6, TestBitset_3);
{
#define MR_PROC_LABEL mercury__test_bitset__bitset_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_6 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_8_8  = TypeInfo;
}
  if ((SortedList_5 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_9 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Var_10 = (MR_hl_field(1, SortedList_5, (MR_Integer) 0));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, SortedList_5, (MR_Integer) 1))));

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_8_8, Var_10, Var_11, &Var_9);
  }
  Set_4 = (MR_Word) (Var_9);
  return Set_4;
}

MR_Word MR_CALL 
mercury__test_bitset__from_set_1_f_0(
  MR_Word TypeClassInfo_for_uenum_4,
  MR_Word Set_3)
{
  MR_Word HeadVar__2_2;
  MR_Word SortedList_5 = (MR_Word) (Set_3);

  HeadVar__2_2 = mercury__test_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_uenum_4, SortedList_5);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__test_bitset__set_to_bitset_1_f_0(
  MR_Word TypeClassInfo_for_uenum_6,
  MR_Word Set_3)
{
  MR_Word Result_4;
  MR_Word SortedList_5 = (MR_Word) (Set_3);

  Result_4 = mercury__test_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_uenum_6, SortedList_5);
  return Result_4;
}

void MR_CALL 
mercury__test_bitset__to_sorted_list_2_p_0(
  MR_Word TypeClassInfo_for_uenum_4,
  MR_Word A_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = mercury__test_bitset__to_sorted_list_1_f_0(TypeClassInfo_for_uenum_4, A_3);
}

MR_Word MR_CALL 
mercury__test_bitset__to_sorted_list_1_f_0(
  MR_Word TypeClassInfo_for_uenum_16,
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word List_8;
  MR_Word A_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word B_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word C_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
  MR_Word D_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
  MR_Word S_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
  MR_Word ListA_9;
  MR_Word ListB_10;
  MR_Word ListC_11;
  MR_Word ListD_12;
  MR_Word ListS_13;
  MR_Word Var_43 = (MR_Word) (A_3);
  MR_Word TypeInfo_20_20;
  MR_Word TypeInfo_24_24;
  MR_Word TypeInfo_28_28;
  MR_Word TypeInfo_32_32;
  MR_Integer PolyConst1_23;
  MR_Integer PolyConst1_27;
  MR_Integer PolyConst1_31;

  if (((MR_tag((MR_Word) Var_43)) == (MR_Integer) 1))
  {
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(1, Var_43, (MR_Integer) 1))));

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_57_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_uenum_16, TypeClassInfo_for_uenum_16, Var_46, (MR_Word) ((MR_Unsigned) 0U), &ListA_9);
  }
  else
  {
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_43, (MR_Integer) 0))));

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_57_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_uenum_16, TypeClassInfo_for_uenum_16, Var_44, (MR_Word) ((MR_Unsigned) 0U), &ListA_9);
  }
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_16, B_4, &ListB_10);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_16, C_5, &ListC_11);
  mercury__fatter_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_16, D_6, &ListD_12);
  ListS_13 = (MR_Word) (S_7);
{
#define MR_PROC_LABEL mercury__test_bitset__to_sorted_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_16 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_20_20  = TypeInfo;
}
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_20_20, ListA_9, ListS_13);
  if (succeeded)
  {
    PolyConst1_23 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__to_sorted_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_16 ;
	Index = PolyConst1_23 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_24_24  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_24_24, ListB_10, ListS_13);
    if (succeeded)
    {
      PolyConst1_27 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__to_sorted_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_16 ;
	Index = PolyConst1_27 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_28_28  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_28_28, ListC_11, ListS_13);
      if (succeeded)
      {
        PolyConst1_31 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__to_sorted_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_16 ;
	Index = PolyConst1_31 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_32_32  = TypeInfo;
}
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_32_32, ListD_12, ListS_13);
      }
    }
  }
  if (succeeded)
    List_8 = ListS_13;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140test_bitset.to_sorted_list\'/1", (MR_String) "failed");
  return List_8;
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_57_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(
  MR_Word Var_29,
  MR_Word TypeClassInfo_for_uenum_20,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_13;
      MR_Word Var_16;

      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_57_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(Var_29, TypeClassInfo_for_uenum_20, Var_10, HeadVar__3_3, &Var_13);
      Var_16 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
      if (((MR_tag((MR_Word) Var_16)) == (MR_Integer) 1))
      {
        MR_Word Var_19 = ((MR_Word) ((MR_hl_field(1, Var_16, (MR_Integer) 1))));
        MR_Word next_value_of_HeadVar__2_2 = Var_19;
        MR_Word next_value_of_HeadVar__3_3 = Var_13;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
      else
      {
        MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, Var_16, (MR_Integer) 0))));

        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_57_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(Var_29, TypeClassInfo_for_uenum_20, Var_17, Var_13, HeadVar__4_4);
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_57_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(
  MR_Word Var_29,
  MR_Word TypeClassInfo_for_uenum_20,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = HeadVar__3_3;
  else
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_13;
    MR_Unsigned Var_15;
    MR_Unsigned Var_16;
    MR_Unsigned Var_19;

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_57_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(Var_29, TypeClassInfo_for_uenum_20, Var_10, HeadVar__3_3, &Var_13);
    Var_15 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
    Var_16 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_57_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_19  = Bits;
}
    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_49_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(Var_29, TypeClassInfo_for_uenum_20, (MR_Integer) 1, Var_15, Var_16, Var_19, Var_13, HeadVar__4_4);
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_49_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(
  MR_Word Var_35,
  MR_Word TypeClassInfo_for_uenum_26,
  MR_Word HeadVar__1_8,
  MR_Unsigned HeadVar__3_10,
  MR_Unsigned HeadVar__4_11,
  MR_Unsigned HeadVar__5_12,
  MR_Word HeadVar__6_13,
  MR_Word * HeadVar__7_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__4_11 == (MR_Unsigned) 0U);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *HeadVar__7_14 = HeadVar__6_13;
    else
    {
      succeeded = (HeadVar__5_12 == (MR_Unsigned) 1U);
      if (succeeded)
      {
        MR_Box Var_15;

        Var_15 = mercury__tree_bitset__index_to_enum_1_f_0(TypeClassInfo_for_uenum_26, HeadVar__3_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__7_14 = base;
          MR_hl_field(1, base, 0) = Var_15;
          MR_hl_field(1, base, 1) = ((MR_Box) (HeadVar__6_13));
        }
      }
      else
      {
        MR_Unsigned Var_16 = (HeadVar__5_12 >> 1);
        MR_Unsigned Var_18;
        MR_Unsigned Var_19;
        MR_Unsigned Var_20;
        MR_Unsigned Var_21;
        MR_Unsigned Var_40;
        MR_Unsigned Var_41 = ~((MR_Unsigned) 0U);

        Var_40 = (Var_41 << (int) Var_16);
        Var_18 = ~(Var_40);
        Var_19 = (Var_18 & HeadVar__4_11);
        Var_21 = (HeadVar__4_11 >> (int) Var_16);
        Var_20 = (Var_18 & Var_21);
        switch (HeadVar__1_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Unsigned Var_24 = (HeadVar__3_10 + Var_16);
              MR_Word Var_25;
              MR_Unsigned next_value_of_HeadVar__4_11;
              MR_Unsigned next_value_of_HeadVar__5_12;
              MR_Word next_value_of_HeadVar__6_13;

              mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_49_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(Var_35, TypeClassInfo_for_uenum_26, HeadVar__1_8, Var_24, Var_20, Var_16, HeadVar__6_13, &Var_25);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__4_11 = Var_19;
              next_value_of_HeadVar__5_12 = Var_16;
              next_value_of_HeadVar__6_13 = Var_25;
              HeadVar__4_11 = next_value_of_HeadVar__4_11;
              HeadVar__5_12 = next_value_of_HeadVar__5_12;
              HeadVar__6_13 = next_value_of_HeadVar__6_13;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word Var_22;
              MR_Unsigned Var_23;
              MR_Unsigned next_value_of_HeadVar__3_10;
              MR_Unsigned next_value_of_HeadVar__4_11;
              MR_Unsigned next_value_of_HeadVar__5_12;
              MR_Word next_value_of_HeadVar__6_13;

              mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_49_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(Var_35, TypeClassInfo_for_uenum_26, HeadVar__1_8, HeadVar__3_10, Var_19, Var_16, HeadVar__6_13, &Var_22);
              Var_23 = (HeadVar__3_10 + Var_16);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__3_10 = Var_23;
              next_value_of_HeadVar__4_11 = Var_20;
              next_value_of_HeadVar__5_12 = Var_16;
              next_value_of_HeadVar__6_13 = Var_22;
              HeadVar__3_10 = next_value_of_HeadVar__3_10;
              HeadVar__4_11 = next_value_of_HeadVar__4_11;
              HeadVar__5_12 = next_value_of_HeadVar__5_12;
              HeadVar__6_13 = next_value_of_HeadVar__6_13;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__test_bitset__sorted_list_to_set_2_p_0(
  MR_Word TypeClassInfo_for_uenum_4,
  MR_Word A_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = mercury__test_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_uenum_4, A_3);
}

MR_Word MR_CALL 
mercury__test_bitset__sorted_list_to_set_1_f_0(
  MR_Word TypeClassInfo_for_uenum_12,
  MR_Word List_3)
{
  MR_Word Result_4;
  MR_Word TypeInfo_14_14;
  MR_Word SetA_5;
  MR_Word SetB_6;
  MR_Word SetC_7;
  MR_Word SetD_8;
  MR_Word SetS_9;
  MR_Word Var_11;
  MR_Word Var_15;

  SetA_5 = mercury__tree_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_uenum_12, List_3);
  mercury__sparse_bitset__sorted_list_to_set_2_p_0(TypeClassInfo_for_uenum_12, List_3, &SetB_6);
  mercury__fat_sparse_bitset__sorted_list_to_set_2_p_0(TypeClassInfo_for_uenum_12, List_3, &SetC_7);
  mercury__fatter_sparse_bitset__sorted_list_to_set_2_p_0(TypeClassInfo_for_uenum_12, List_3, &SetD_8);
{
#define MR_PROC_LABEL mercury__test_bitset__sorted_list_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_12 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_14_14  = TypeInfo;
}
  if ((List_3 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_15 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Var_16 = (MR_hl_field(1, List_3, (MR_Integer) 0));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, List_3, (MR_Integer) 1))));

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_14_14, Var_16, Var_17, &Var_15);
  }
  SetS_9 = (MR_Word) (Var_15);
  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (SetA_5));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (SetB_6));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) (SetC_7));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (SetD_8));
    MR_hl_field(0, Var_11, 4) = ((MR_Box) (SetS_9));
  }
  mercury__test_bitset__check0_3_p_0(TypeClassInfo_for_uenum_12, (MR_String) "sorted_list_to_set", Var_11, &Result_4);
  return Result_4;
}

void MR_CALL 
mercury__test_bitset__list_to_set_2_p_0(
  MR_Word TypeClassInfo_for_uenum_4,
  MR_Word A_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = mercury__test_bitset__list_to_set_1_f_0(TypeClassInfo_for_uenum_4, A_3);
}

MR_Word MR_CALL 
mercury__test_bitset__list_to_set_1_f_0(
  MR_Word TypeClassInfo_for_uenum_12,
  MR_Word List_3)
{
  MR_Word Result_4;
  MR_Word TypeInfo_14_14;
  MR_Word TypeInfo_8_17;
  MR_Word TypeInfo_10_23;
  MR_Word TypeInfo_10_32;
  MR_Word TypeInfo_10_41;
  MR_Word SetA_5;
  MR_Word SetB_6;
  MR_Word SetC_7;
  MR_Word SetD_8;
  MR_Word SetS_9;
  MR_Word Var_11;
  MR_Word Var_15;
  MR_Integer Var_18;
  MR_Word Var_21;
  MR_Word Var_30;
  MR_Word Var_39;
  MR_Word Var_47;
  MR_Integer Var_48;

{
#define MR_PROC_LABEL mercury__test_bitset__list_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_12 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_8_17  = TypeInfo;
}
  mercury__list__length_acc_3_p_0(TypeInfo_8_17, List_3, (MR_Integer) 0, &Var_18);
  mercury__list__merge_sort_3_p_0(TypeInfo_8_17, Var_18, List_3, &Var_15);
  SetA_5 = mercury__tree_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_uenum_12, Var_15);
  mercury__sparse_bitset__list_to_set_get_runs_3_p_0(TypeClassInfo_for_uenum_12, List_3, (MR_Word) ((MR_Unsigned) 0U), &Var_21);
{
#define MR_PROC_LABEL mercury__test_bitset__list_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_12 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_23  = TypeInfo;
}
  if ((Var_21 == (MR_Word) ((MR_Unsigned) 0U)))
    SetB_6 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
  {
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, Var_21, (MR_Integer) 0))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, Var_21, (MR_Integer) 1))));

    mercury__sparse_bitset__union_list_passes_3_p_0(TypeInfo_10_23, Var_25, Var_26, &SetB_6);
  }
  mercury__fat_sparse_bitset__list_to_set_get_runs_3_p_0(TypeClassInfo_for_uenum_12, List_3, (MR_Word) ((MR_Unsigned) 0U), &Var_30);
{
#define MR_PROC_LABEL mercury__test_bitset__list_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_12 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_32  = TypeInfo;
}
  if ((Var_30 == (MR_Word) ((MR_Unsigned) 0U)))
    SetC_7 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
  {
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(1, Var_30, (MR_Integer) 0))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(1, Var_30, (MR_Integer) 1))));

    mercury__fat_sparse_bitset__union_list_passes_3_p_0(TypeInfo_10_32, Var_34, Var_35, &SetC_7);
  }
  mercury__fatter_sparse_bitset__list_to_set_get_runs_3_p_0(TypeClassInfo_for_uenum_12, List_3, (MR_Word) ((MR_Unsigned) 0U), &Var_39);
{
#define MR_PROC_LABEL mercury__test_bitset__list_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_12 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_41  = TypeInfo;
}
  if ((Var_39 == (MR_Word) ((MR_Unsigned) 0U)))
    SetD_8 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
  {
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(1, Var_39, (MR_Integer) 0))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(1, Var_39, (MR_Integer) 1))));

    mercury__fatter_sparse_bitset__union_list_passes_3_p_0(TypeInfo_10_41, Var_43, Var_44, &SetD_8);
  }
{
#define MR_PROC_LABEL mercury__test_bitset__list_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_12 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_14_14  = TypeInfo;
}
  mercury__list__length_acc_3_p_0(TypeInfo_14_14, List_3, (MR_Integer) 0, &Var_48);
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_14_14, Var_48, List_3, &Var_47);
  SetS_9 = (MR_Word) (Var_47);
  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (SetA_5));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (SetB_6));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) (SetC_7));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (SetD_8));
    MR_hl_field(0, Var_11, 4) = ((MR_Box) (SetS_9));
  }
  mercury__test_bitset__check0_3_p_0(TypeClassInfo_for_uenum_12, (MR_String) "list_to_set", Var_11, &Result_4);
  return Result_4;
}

void MR_CALL 
mercury__test_bitset__divide_by_set_4_p_0(
  MR_Word TypeClassInfo_for_uenum_51,
  MR_Word DivBy_5,
  MR_Word Set_6,
  MR_Word * ResultIn_7,
  MR_Word * ResultOut_8)
{
  MR_bool succeeded;
  MR_Word TypeInfo_53_53;
  MR_Word TypeInfo_54_54;
  MR_Word TypeInfo_55_55;
  MR_Word TypeInfo_56_56;
  MR_Word TypeInfo_57_57;
  MR_Word DivByA_9 = ((MR_Word) ((MR_hl_field(0, DivBy_5, (MR_Integer) 0))));
  MR_Word DivByB_10 = ((MR_Word) ((MR_hl_field(0, DivBy_5, (MR_Integer) 1))));
  MR_Word DivByC_11 = ((MR_Word) ((MR_hl_field(0, DivBy_5, (MR_Integer) 2))));
  MR_Word DivByD_12 = ((MR_Word) ((MR_hl_field(0, DivBy_5, (MR_Integer) 3))));
  MR_Word DivByS_13 = ((MR_Word) ((MR_hl_field(0, DivBy_5, (MR_Integer) 4))));
  MR_Word SetA_14 = ((MR_Word) ((MR_hl_field(0, Set_6, (MR_Integer) 0))));
  MR_Word SetB_15 = ((MR_Word) ((MR_hl_field(0, Set_6, (MR_Integer) 1))));
  MR_Word SetC_16 = ((MR_Word) ((MR_hl_field(0, Set_6, (MR_Integer) 2))));
  MR_Word SetD_17 = ((MR_Word) ((MR_hl_field(0, Set_6, (MR_Integer) 3))));
  MR_Word SetS_18 = ((MR_Word) ((MR_hl_field(0, Set_6, (MR_Integer) 4))));
  MR_Word InSetA_19;
  MR_Word OutSetA_20;
  MR_Word InSetB_21;
  MR_Word OutSetB_22;
  MR_Word InSetC_23;
  MR_Word OutSetC_24;
  MR_Word InSetD_25;
  MR_Word OutSetD_26;
  MR_Word InSetS_27;
  MR_Word OutSetS_28;
  MR_Word DivListA_29;
  MR_Word ListA_30;
  MR_Word InListA_31;
  MR_Word OutListA_32;
  MR_Word DivListB_33;
  MR_Word ListB_34;
  MR_Word InListB_35;
  MR_Word OutListB_36;
  MR_Word DivListC_37;
  MR_Word ListC_38;
  MR_Word InListC_39;
  MR_Word OutListC_40;
  MR_Word DivListD_41;
  MR_Word ListD_42;
  MR_Word InListD_43;
  MR_Word OutListD_44;
  MR_Word DivListS_45;
  MR_Word ListS_46;
  MR_Word InListS_47;
  MR_Word OutListS_48;
  MR_Word TypeInfo_59_59;
  MR_Word TypeInfo_63_63;
  MR_Word TypeInfo_67_67;
  MR_Word TypeInfo_71_71;
  MR_Word TypeInfo_75_75;
  MR_Word TypeInfo_79_79;
  MR_Word TypeInfo_83_83;
  MR_Word TypeInfo_87_87;
  MR_Word TypeInfo_91_91;
  MR_Word TypeInfo_95_95;
  MR_Word TypeInfo_99_99;
  MR_Word TypeInfo_103_103;
  MR_Word TypeInfo_107_107;
  MR_Word TypeInfo_111_111;
  MR_Word TypeInfo_115_115;
  MR_Word TypeInfo_119_119;
  MR_Integer PolyConst1_62;
  MR_Integer PolyConst1_66;
  MR_Integer PolyConst1_70;
  MR_Integer PolyConst1_74;
  MR_Integer PolyConst1_78;
  MR_Integer PolyConst1_82;
  MR_Integer PolyConst1_86;
  MR_Integer PolyConst1_90;
  MR_Integer PolyConst1_94;
  MR_Integer PolyConst1_98;
  MR_Integer PolyConst1_102;
  MR_Integer PolyConst1_106;
  MR_Integer PolyConst1_110;
  MR_Integer PolyConst1_114;
  MR_Integer PolyConst1_118;

  mercury__tree_bitset__divide_by_set_4_p_0(TypeClassInfo_for_uenum_51, DivByA_9, SetA_14, &InSetA_19, &OutSetA_20);
  mercury__sparse_bitset__divide_by_set_4_p_0(TypeClassInfo_for_uenum_51, DivByB_10, SetB_15, &InSetB_21, &OutSetB_22);
  mercury__fat_sparse_bitset__divide_by_set_4_p_0(TypeClassInfo_for_uenum_51, DivByC_11, SetC_16, &InSetC_23, &OutSetC_24);
  mercury__fatter_sparse_bitset__divide_by_set_4_p_0(TypeClassInfo_for_uenum_51, DivByD_12, SetD_17, &InSetD_25, &OutSetD_26);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_uenum_51, (MR_Integer) 1, &TypeInfo_53_53);
  mercury__set_ordlist__divide_by_set_4_p_0(TypeInfo_53_53, DivByS_13, SetS_18, &InSetS_27, &OutSetS_28);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_51, DivByA_9, &DivListA_29);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_51, SetA_14, &ListA_30);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_51, InSetA_19, &InListA_31);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_51, OutSetA_20, &OutListA_32);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_51, DivByB_10, &DivListB_33);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_51, SetB_15, &ListB_34);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_51, InSetB_21, &InListB_35);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_51, OutSetB_22, &OutListB_36);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_51, DivByC_11, &DivListC_37);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_51, SetC_16, &ListC_38);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_51, InSetC_23, &InListC_39);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_51, OutSetC_24, &OutListC_40);
  mercury__fatter_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_51, DivByD_12, &DivListD_41);
  mercury__fatter_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_51, SetD_17, &ListD_42);
  mercury__fatter_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_51, InSetD_25, &InListD_43);
  mercury__fatter_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_51, OutSetD_26, &OutListD_44);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_uenum_51, (MR_Integer) 1, &TypeInfo_54_54);
  mercury__set_ordlist__to_sorted_list_2_p_0(TypeInfo_54_54, DivByS_13, &DivListS_45);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_uenum_51, (MR_Integer) 1, &TypeInfo_55_55);
  mercury__set_ordlist__to_sorted_list_2_p_0(TypeInfo_55_55, SetS_18, &ListS_46);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_uenum_51, (MR_Integer) 1, &TypeInfo_56_56);
  mercury__set_ordlist__to_sorted_list_2_p_0(TypeInfo_56_56, InSetS_27, &InListS_47);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_uenum_51, (MR_Integer) 1, &TypeInfo_57_57);
  mercury__set_ordlist__to_sorted_list_2_p_0(TypeInfo_57_57, OutSetS_28, &OutListS_48);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_uenum_51, (MR_Integer) 1, &TypeInfo_59_59);
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_59_59, DivListA_29, DivListS_45);
  if (succeeded)
  {
    PolyConst1_62 = (MR_Integer) 1;
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_uenum_51, PolyConst1_62, &TypeInfo_63_63);
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_63_63, DivListB_33, DivListS_45);
    if (succeeded)
    {
      PolyConst1_66 = (MR_Integer) 1;
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_uenum_51, PolyConst1_66, &TypeInfo_67_67);
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_67_67, DivListC_37, DivListS_45);
      if (succeeded)
      {
        PolyConst1_70 = (MR_Integer) 1;
        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_uenum_51, PolyConst1_70, &TypeInfo_71_71);
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_71_71, DivListD_41, DivListS_45);
        if (succeeded)
        {
          PolyConst1_74 = (MR_Integer) 1;
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_uenum_51, PolyConst1_74, &TypeInfo_75_75);
          succeeded = mercury__list____Unify____list_1_0(TypeInfo_75_75, ListA_30, ListS_46);
          if (succeeded)
          {
            PolyConst1_78 = (MR_Integer) 1;
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_uenum_51, PolyConst1_78, &TypeInfo_79_79);
            succeeded = mercury__list____Unify____list_1_0(TypeInfo_79_79, ListB_34, ListS_46);
            if (succeeded)
            {
              PolyConst1_82 = (MR_Integer) 1;
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_uenum_51, PolyConst1_82, &TypeInfo_83_83);
              succeeded = mercury__list____Unify____list_1_0(TypeInfo_83_83, ListC_38, ListS_46);
              if (succeeded)
              {
                PolyConst1_86 = (MR_Integer) 1;
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_uenum_51, PolyConst1_86, &TypeInfo_87_87);
                succeeded = mercury__list____Unify____list_1_0(TypeInfo_87_87, ListD_42, ListS_46);
                if (succeeded)
                {
                  PolyConst1_90 = (MR_Integer) 1;
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_uenum_51, PolyConst1_90, &TypeInfo_91_91);
                  succeeded = mercury__list____Unify____list_1_0(TypeInfo_91_91, InListA_31, InListS_47);
                  if (succeeded)
                  {
                    PolyConst1_94 = (MR_Integer) 1;
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_uenum_51, PolyConst1_94, &TypeInfo_95_95);
                    succeeded = mercury__list____Unify____list_1_0(TypeInfo_95_95, InListB_35, InListS_47);
                    if (succeeded)
                    {
                      PolyConst1_98 = (MR_Integer) 1;
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_uenum_51, PolyConst1_98, &TypeInfo_99_99);
                      succeeded = mercury__list____Unify____list_1_0(TypeInfo_99_99, InListC_39, InListS_47);
                      if (succeeded)
                      {
                        PolyConst1_102 = (MR_Integer) 1;
                        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_uenum_51, PolyConst1_102, &TypeInfo_103_103);
                        succeeded = mercury__list____Unify____list_1_0(TypeInfo_103_103, InListD_43, InListS_47);
                        if (succeeded)
                        {
                          PolyConst1_106 = (MR_Integer) 1;
                          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_uenum_51, PolyConst1_106, &TypeInfo_107_107);
                          succeeded = mercury__list____Unify____list_1_0(TypeInfo_107_107, OutListA_32, OutListS_48);
                          if (succeeded)
                          {
                            PolyConst1_110 = (MR_Integer) 1;
                            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_uenum_51, PolyConst1_110, &TypeInfo_111_111);
                            succeeded = mercury__list____Unify____list_1_0(TypeInfo_111_111, OutListB_36, OutListS_48);
                            if (succeeded)
                            {
                              PolyConst1_114 = (MR_Integer) 1;
                              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_uenum_51, PolyConst1_114, &TypeInfo_115_115);
                              succeeded = mercury__list____Unify____list_1_0(TypeInfo_115_115, OutListC_40, OutListS_48);
                              if (succeeded)
                              {
                                PolyConst1_118 = (MR_Integer) 1;
                                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_uenum_51, PolyConst1_118, &TypeInfo_119_119);
                                succeeded = mercury__list____Unify____list_1_0(TypeInfo_119_119, OutListD_44, OutListS_48);
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
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *ResultIn_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (InSetA_19));
      MR_hl_field(0, base, 1) = ((MR_Box) (InSetB_21));
      MR_hl_field(0, base, 2) = ((MR_Box) (InSetC_23));
      MR_hl_field(0, base, 3) = ((MR_Box) (InSetD_25));
      MR_hl_field(0, base, 4) = ((MR_Box) (InSetS_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *ResultOut_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (OutSetA_20));
      MR_hl_field(0, base, 1) = ((MR_Box) (OutSetB_22));
      MR_hl_field(0, base, 2) = ((MR_Box) (OutSetC_24));
      MR_hl_field(0, base, 3) = ((MR_Box) (OutSetD_26));
      MR_hl_field(0, base, 4) = ((MR_Box) (OutSetS_28));
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.divide_by_set\'/4", (MR_String) "failed");
      return;
    }
}

void MR_CALL 
mercury__test_bitset__divide_4_p_0(
  MR_Word TypeClassInfo_for_uenum_40,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Word * ResultIn_11,
  MR_Word * ResultOut_12)
{
  MR_bool succeeded;
  MR_Word TypeInfo_42_42;
  MR_Word SetA_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetC_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word SetD_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word SetS_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
  MR_Word InSetA_13;
  MR_Word OutSetA_14;
  MR_Word InSetB_15;
  MR_Word OutSetB_16;
  MR_Word InSetC_17;
  MR_Word OutSetC_18;
  MR_Word InSetD_19;
  MR_Word OutSetD_20;
  MR_Word InSetS_21;
  MR_Word OutSetS_22;
  MR_Word ListA_23;
  MR_Word InListA_24;
  MR_Word OutListA_25;
  MR_Word ListB_26;
  MR_Word InListB_27;
  MR_Word OutListB_28;
  MR_Word ListC_29;
  MR_Word InListC_30;
  MR_Word OutListC_31;
  MR_Word ListD_32;
  MR_Word InListD_33;
  MR_Word OutListD_34;
  MR_Word ListS_35;
  MR_Word InListS_36;
  MR_Word OutListS_37;
  MR_Word Var_94;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word TypeInfo_47_47;
  MR_Word TypeInfo_51_51;
  MR_Word TypeInfo_55_55;
  MR_Word TypeInfo_59_59;
  MR_Word TypeInfo_63_63;
  MR_Word TypeInfo_67_67;
  MR_Word TypeInfo_71_71;
  MR_Word TypeInfo_75_75;
  MR_Word TypeInfo_79_79;
  MR_Word TypeInfo_83_83;
  MR_Word TypeInfo_87_87;
  MR_Word TypeInfo_91_91;
  MR_Integer PolyConst1_50;
  MR_Integer PolyConst1_54;
  MR_Integer PolyConst1_58;
  MR_Integer PolyConst1_62;
  MR_Integer PolyConst1_66;
  MR_Integer PolyConst1_70;
  MR_Integer PolyConst1_74;
  MR_Integer PolyConst1_78;
  MR_Integer PolyConst1_82;
  MR_Integer PolyConst1_86;
  MR_Integer PolyConst1_90;

  mercury__tree_bitset__divide_4_p_0(TypeClassInfo_for_uenum_40, Pred_5, SetA_6, &InSetA_13, &OutSetA_14);
  Var_94 = (MR_Word) (SetB_7);
  mercury__sparse_bitset__divide_nodes_4_p_0(TypeClassInfo_for_uenum_40, Pred_5, Var_94, &Var_95, &Var_96);
  InSetB_15 = (MR_Word) (Var_95);
  OutSetB_16 = (MR_Word) (Var_96);
  mercury__fat_sparse_bitset__divide_4_p_0(TypeClassInfo_for_uenum_40, Pred_5, SetC_8, &InSetC_17, &OutSetC_18);
  mercury__fatter_sparse_bitset__divide_4_p_0(TypeClassInfo_for_uenum_40, Pred_5, SetD_9, &InSetD_19, &OutSetD_20);
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_40 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_42_42  = TypeInfo;
}
  mercury__set_ordlist__divide_4_p_0(TypeInfo_42_42, Pred_5, SetS_10, &InSetS_21, &OutSetS_22);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_40, SetA_6, &ListA_23);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_40, InSetA_13, &InListA_24);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_40, OutSetA_14, &OutListA_25);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_40, SetB_7, &ListB_26);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_40, InSetB_15, &InListB_27);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_40, OutSetB_16, &OutListB_28);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_40, SetC_8, &ListC_29);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_40, InSetC_17, &InListC_30);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_40, OutSetC_18, &OutListC_31);
  mercury__fatter_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_40, SetD_9, &ListD_32);
  mercury__fatter_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_40, InSetD_19, &InListD_33);
  mercury__fatter_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_40, OutSetD_20, &OutListD_34);
  ListS_35 = (MR_Word) (SetS_10);
  InListS_36 = (MR_Word) (InSetS_21);
  OutListS_37 = (MR_Word) (OutSetS_22);
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_40 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_47_47  = TypeInfo;
}
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_47_47, ListA_23, ListS_35);
  if (succeeded)
  {
    PolyConst1_50 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_40 ;
	Index = PolyConst1_50 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_51_51  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_51_51, ListB_26, ListS_35);
    if (succeeded)
    {
      PolyConst1_54 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_40 ;
	Index = PolyConst1_54 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_55_55  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_55_55, ListC_29, ListS_35);
      if (succeeded)
      {
        PolyConst1_58 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_40 ;
	Index = PolyConst1_58 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_59_59  = TypeInfo;
}
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_59_59, ListD_32, ListS_35);
        if (succeeded)
        {
          PolyConst1_62 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_40 ;
	Index = PolyConst1_62 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_63_63  = TypeInfo;
}
          succeeded = mercury__list____Unify____list_1_0(TypeInfo_63_63, InListA_24, InListS_36);
          if (succeeded)
          {
            PolyConst1_66 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_40 ;
	Index = PolyConst1_66 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_67_67  = TypeInfo;
}
            succeeded = mercury__list____Unify____list_1_0(TypeInfo_67_67, InListB_27, InListS_36);
            if (succeeded)
            {
              PolyConst1_70 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_40 ;
	Index = PolyConst1_70 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_71_71  = TypeInfo;
}
              succeeded = mercury__list____Unify____list_1_0(TypeInfo_71_71, InListC_30, InListS_36);
              if (succeeded)
              {
                PolyConst1_74 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_40 ;
	Index = PolyConst1_74 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_75_75  = TypeInfo;
}
                succeeded = mercury__list____Unify____list_1_0(TypeInfo_75_75, InListD_33, InListS_36);
                if (succeeded)
                {
                  PolyConst1_78 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_40 ;
	Index = PolyConst1_78 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_79_79  = TypeInfo;
}
                  succeeded = mercury__list____Unify____list_1_0(TypeInfo_79_79, OutListA_25, OutListS_37);
                  if (succeeded)
                  {
                    PolyConst1_82 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_40 ;
	Index = PolyConst1_82 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_83_83  = TypeInfo;
}
                    succeeded = mercury__list____Unify____list_1_0(TypeInfo_83_83, OutListB_28, OutListS_37);
                    if (succeeded)
                    {
                      PolyConst1_86 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_40 ;
	Index = PolyConst1_86 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_87_87  = TypeInfo;
}
                      succeeded = mercury__list____Unify____list_1_0(TypeInfo_87_87, OutListC_31, OutListS_37);
                      if (succeeded)
                      {
                        PolyConst1_90 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_40 ;
	Index = PolyConst1_90 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_91_91  = TypeInfo;
}
                        succeeded = mercury__list____Unify____list_1_0(TypeInfo_91_91, OutListD_34, OutListS_37);
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
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *ResultIn_11 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (InSetA_13));
      MR_hl_field(0, base, 1) = ((MR_Box) (InSetB_15));
      MR_hl_field(0, base, 2) = ((MR_Box) (InSetC_17));
      MR_hl_field(0, base, 3) = ((MR_Box) (InSetD_19));
      MR_hl_field(0, base, 4) = ((MR_Box) (InSetS_21));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *ResultOut_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (OutSetA_14));
      MR_hl_field(0, base, 1) = ((MR_Box) (OutSetB_16));
      MR_hl_field(0, base, 2) = ((MR_Box) (OutSetC_18));
      MR_hl_field(0, base, 3) = ((MR_Box) (OutSetD_20));
      MR_hl_field(0, base, 4) = ((MR_Box) (OutSetS_22));
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.divide\'/4", (MR_String) "failed");
      return;
    }
}

void MR_CALL 
mercury__test_bitset__difference_3_p_0(
  MR_Word TypeClassInfo_for_uenum_6,
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * HeadVar__3_3)
{
  *HeadVar__3_3 = mercury__test_bitset__difference_2_f_0(TypeClassInfo_for_uenum_6, A_4, B_5);
}

MR_Word MR_CALL 
mercury__test_bitset__difference_2_f_0(
  MR_Word TypeClassInfo_for_uenum_24,
  MR_Word InL_4,
  MR_Word InR_5)
{
  MR_Word Result_6;
  MR_Word TypeInfo_26_26;
  MR_Word TypeInfo_30_30;
  MR_Word SetAL_7 = ((MR_Word) ((MR_hl_field(0, InL_4, (MR_Integer) 0))));
  MR_Word SetBL_8 = ((MR_Word) ((MR_hl_field(0, InL_4, (MR_Integer) 1))));
  MR_Word SetCL_9 = ((MR_Word) ((MR_hl_field(0, InL_4, (MR_Integer) 2))));
  MR_Word SetDL_10 = ((MR_Word) ((MR_hl_field(0, InL_4, (MR_Integer) 3))));
  MR_Word SetSL_11 = ((MR_Word) ((MR_hl_field(0, InL_4, (MR_Integer) 4))));
  MR_Word SetAR_12 = ((MR_Word) ((MR_hl_field(0, InR_5, (MR_Integer) 0))));
  MR_Word SetBR_13 = ((MR_Word) ((MR_hl_field(0, InR_5, (MR_Integer) 1))));
  MR_Word SetCR_14 = ((MR_Word) ((MR_hl_field(0, InR_5, (MR_Integer) 2))));
  MR_Word SetDR_15 = ((MR_Word) ((MR_hl_field(0, InR_5, (MR_Integer) 3))));
  MR_Word SetSR_16 = ((MR_Word) ((MR_hl_field(0, InR_5, (MR_Integer) 4))));
  MR_Word SetA_17;
  MR_Word SetB_18;
  MR_Word SetC_19;
  MR_Word SetD_20;
  MR_Word SetS_21;
  MR_Word Var_23;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;

{
#define MR_PROC_LABEL mercury__test_bitset__difference_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_24 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_26_26  = TypeInfo;
}
  SetA_17 = mercury__tree_bitset__difference_2_f_0(TypeInfo_26_26, SetAL_7, SetAR_12);
  Var_31 = (MR_Word) (SetBL_8);
  Var_32 = (MR_Word) (SetBR_13);
  mercury__sparse_bitset__difference_loop_3_p_0(Var_31, Var_32, &Var_33);
  SetB_18 = (MR_Word) (Var_33);
  Var_34 = (MR_Word) (SetCL_9);
  Var_35 = (MR_Word) (SetCR_14);
  mercury__fat_sparse_bitset__difference_loop_3_p_0(Var_34, Var_35, &Var_36);
  SetC_19 = (MR_Word) (Var_36);
  Var_37 = (MR_Word) (SetDL_10);
  Var_38 = (MR_Word) (SetDR_15);
  mercury__fatter_sparse_bitset__difference_loop_3_p_0(Var_37, Var_38, &Var_39);
  SetD_20 = (MR_Word) (Var_39);
{
#define MR_PROC_LABEL mercury__test_bitset__difference_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_24 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_30_30  = TypeInfo;
}
  Var_40 = (MR_Word) (SetSL_11);
  Var_41 = (MR_Word) (SetSR_16);
  mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_30_30, Var_40, Var_41, &Var_42);
  SetS_21 = (MR_Word) (Var_42);
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (SetA_17));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (SetB_18));
    MR_hl_field(0, Var_23, 2) = ((MR_Box) (SetC_19));
    MR_hl_field(0, Var_23, 3) = ((MR_Box) (SetD_20));
    MR_hl_field(0, Var_23, 4) = ((MR_Box) (SetS_21));
  }
  mercury__test_bitset__check2_5_p_0(TypeClassInfo_for_uenum_24, (MR_String) "difference", InL_4, InR_5, Var_23, &Result_6);
  return Result_6;
}

void MR_CALL 
mercury__test_bitset__intersect_list_2_p_0(
  MR_Word TypeClassInfo_for_uenum_4,
  MR_Word Sets_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = mercury__test_bitset__intersect_list_1_f_0(TypeClassInfo_for_uenum_4, Sets_3);
}

MR_Word MR_CALL 
mercury__test_bitset__intersect_list_1_f_0(
  MR_Word TypeClassInfo_for_uenum_18,
  MR_Word SetsABCS_3)
{
  MR_Word Result_4;
  MR_Word TypeInfo_20_20;
  MR_Word TypeInfo_21_21;
  MR_Word TypeInfo_22_22;
  MR_Word TypeInfo_23_23;
  MR_Word TypeInfo_24_24;
  MR_Word SetsA_5;
  MR_Word SetsB_6;
  MR_Word SetsC_7;
  MR_Word SetsD_8;
  MR_Word SetsS_9;
  MR_Word SetA_10;
  MR_Word SetB_11;
  MR_Word SetC_12;
  MR_Word SetD_13;
  MR_Word SetS_14;
  MR_Word Var_17;

  mercury__test_bitset__get_sets_7_p_0(TypeClassInfo_for_uenum_18, (MR_String) "intersect_list", SetsABCS_3, &SetsA_5, &SetsB_6, &SetsC_7, &SetsD_8, &SetsS_9);
{
#define MR_PROC_LABEL mercury__test_bitset__intersect_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_18 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_20_20  = TypeInfo;
}
  mercury__tree_bitset__intersect_list_2_p_0(TypeInfo_20_20, SetsA_5, &SetA_10);
{
#define MR_PROC_LABEL mercury__test_bitset__intersect_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_18 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_21_21  = TypeInfo;
}
  if ((SetsB_6 == (MR_Word) ((MR_Unsigned) 0U)))
    SetB_11 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
  {
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, SetsB_6, (MR_Integer) 0))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(1, SetsB_6, (MR_Integer) 1))));

    mercury__sparse_bitset__intersect_list_passes_3_p_0(TypeInfo_21_21, Var_26, Var_27, &SetB_11);
  }
{
#define MR_PROC_LABEL mercury__test_bitset__intersect_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_18 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_22_22  = TypeInfo;
}
  if ((SetsC_7 == (MR_Word) ((MR_Unsigned) 0U)))
    SetC_12 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
  {
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(1, SetsC_7, (MR_Integer) 0))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(1, SetsC_7, (MR_Integer) 1))));

    mercury__fat_sparse_bitset__intersect_list_passes_3_p_0(TypeInfo_22_22, Var_31, Var_32, &SetC_12);
  }
{
#define MR_PROC_LABEL mercury__test_bitset__intersect_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_18 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_23_23  = TypeInfo;
}
  if ((SetsD_8 == (MR_Word) ((MR_Unsigned) 0U)))
    SetD_13 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
  {
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, SetsD_8, (MR_Integer) 0))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(1, SetsD_8, (MR_Integer) 1))));

    mercury__fatter_sparse_bitset__intersect_list_passes_3_p_0(TypeInfo_23_23, Var_36, Var_37, &SetD_13);
  }
{
#define MR_PROC_LABEL mercury__test_bitset__intersect_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_18 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_24_24  = TypeInfo;
}
  SetS_14 = mercury__set_ordlist__intersect_list_1_f_0(TypeInfo_24_24, SetsS_9);
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (SetA_10));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (SetB_11));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) (SetC_12));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (SetD_13));
    MR_hl_field(0, Var_17, 4) = ((MR_Box) (SetS_14));
  }
  mercury__test_bitset__check0_3_p_0(TypeClassInfo_for_uenum_18, (MR_String) "intersect_list", Var_17, &Result_4);
  return Result_4;
}

void MR_CALL 
mercury__test_bitset__intersect_3_p_0(
  MR_Word TypeClassInfo_for_uenum_6,
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * HeadVar__3_3)
{
  *HeadVar__3_3 = mercury__test_bitset__intersect_2_f_0(TypeClassInfo_for_uenum_6, A_4, B_5);
}

MR_Word MR_CALL 
mercury__test_bitset__intersect_2_f_0(
  MR_Word TypeClassInfo_for_uenum_24,
  MR_Word InL_4,
  MR_Word InR_5)
{
  MR_Word Result_6;
  MR_Word TypeInfo_26_26;
  MR_Word TypeInfo_30_30;
  MR_Word SetAL_7 = ((MR_Word) ((MR_hl_field(0, InL_4, (MR_Integer) 0))));
  MR_Word SetBL_8 = ((MR_Word) ((MR_hl_field(0, InL_4, (MR_Integer) 1))));
  MR_Word SetCL_9 = ((MR_Word) ((MR_hl_field(0, InL_4, (MR_Integer) 2))));
  MR_Word SetDL_10 = ((MR_Word) ((MR_hl_field(0, InL_4, (MR_Integer) 3))));
  MR_Word SetSL_11 = ((MR_Word) ((MR_hl_field(0, InL_4, (MR_Integer) 4))));
  MR_Word SetAR_12 = ((MR_Word) ((MR_hl_field(0, InR_5, (MR_Integer) 0))));
  MR_Word SetBR_13 = ((MR_Word) ((MR_hl_field(0, InR_5, (MR_Integer) 1))));
  MR_Word SetCR_14 = ((MR_Word) ((MR_hl_field(0, InR_5, (MR_Integer) 2))));
  MR_Word SetDR_15 = ((MR_Word) ((MR_hl_field(0, InR_5, (MR_Integer) 3))));
  MR_Word SetSR_16 = ((MR_Word) ((MR_hl_field(0, InR_5, (MR_Integer) 4))));
  MR_Word SetA_17;
  MR_Word SetB_18;
  MR_Word SetC_19;
  MR_Word SetD_20;
  MR_Word SetS_21;
  MR_Word Var_23;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;

{
#define MR_PROC_LABEL mercury__test_bitset__intersect_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_24 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_26_26  = TypeInfo;
}
  SetA_17 = mercury__tree_bitset__intersect_2_f_0(TypeInfo_26_26, SetAL_7, SetAR_12);
  Var_31 = (MR_Word) (SetBL_8);
  Var_32 = (MR_Word) (SetBR_13);
  mercury__sparse_bitset__intersect_loop_3_p_0(Var_31, Var_32, &Var_33);
  SetB_18 = (MR_Word) (Var_33);
  Var_34 = (MR_Word) (SetCL_9);
  Var_35 = (MR_Word) (SetCR_14);
  mercury__fat_sparse_bitset__intersect_loop_3_p_0(Var_34, Var_35, &Var_36);
  SetC_19 = (MR_Word) (Var_36);
  Var_37 = (MR_Word) (SetDL_10);
  Var_38 = (MR_Word) (SetDR_15);
  mercury__fatter_sparse_bitset__intersect_loop_3_p_0(Var_37, Var_38, &Var_39);
  SetD_20 = (MR_Word) (Var_39);
{
#define MR_PROC_LABEL mercury__test_bitset__intersect_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_24 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_30_30  = TypeInfo;
}
  Var_40 = (MR_Word) (SetSL_11);
  Var_41 = (MR_Word) (SetSR_16);
  mercury__set_ordlist__intersect_loop_3_p_0(TypeInfo_30_30, Var_40, Var_41, &Var_42);
  SetS_21 = (MR_Word) (Var_42);
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (SetA_17));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (SetB_18));
    MR_hl_field(0, Var_23, 2) = ((MR_Box) (SetC_19));
    MR_hl_field(0, Var_23, 3) = ((MR_Box) (SetD_20));
    MR_hl_field(0, Var_23, 4) = ((MR_Box) (SetS_21));
  }
  mercury__test_bitset__check2_5_p_0(TypeClassInfo_for_uenum_24, (MR_String) "intersect", InL_4, InR_5, Var_23, &Result_6);
  return Result_6;
}

void MR_CALL 
mercury__test_bitset__union_list_2_p_0(
  MR_Word TypeClassInfo_for_uenum_4,
  MR_Word Sets_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = mercury__test_bitset__union_list_1_f_0(TypeClassInfo_for_uenum_4, Sets_3);
}

MR_Word MR_CALL 
mercury__test_bitset__union_list_1_f_0(
  MR_Word TypeClassInfo_for_uenum_18,
  MR_Word SetsABCS_3)
{
  MR_Word Result_4;
  MR_Word TypeInfo_20_20;
  MR_Word TypeInfo_21_21;
  MR_Word TypeInfo_22_22;
  MR_Word TypeInfo_23_23;
  MR_Word TypeInfo_24_24;
  MR_Word SetsA_5;
  MR_Word SetsB_6;
  MR_Word SetsC_7;
  MR_Word SetsD_8;
  MR_Word SetsS_9;
  MR_Word SetA_10;
  MR_Word SetB_11;
  MR_Word SetC_12;
  MR_Word SetD_13;
  MR_Word SetS_14;
  MR_Word Var_17;

  mercury__test_bitset__get_sets_7_p_0(TypeClassInfo_for_uenum_18, (MR_String) "union_list", SetsABCS_3, &SetsA_5, &SetsB_6, &SetsC_7, &SetsD_8, &SetsS_9);
{
#define MR_PROC_LABEL mercury__test_bitset__union_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_18 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_20_20  = TypeInfo;
}
  mercury__tree_bitset__union_list_2_p_0(TypeInfo_20_20, SetsA_5, &SetA_10);
{
#define MR_PROC_LABEL mercury__test_bitset__union_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_18 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_21_21  = TypeInfo;
}
  if ((SetsB_6 == (MR_Word) ((MR_Unsigned) 0U)))
    SetB_11 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
  {
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, SetsB_6, (MR_Integer) 0))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(1, SetsB_6, (MR_Integer) 1))));

    mercury__sparse_bitset__union_list_passes_3_p_0(TypeInfo_21_21, Var_26, Var_27, &SetB_11);
  }
{
#define MR_PROC_LABEL mercury__test_bitset__union_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_18 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_22_22  = TypeInfo;
}
  if ((SetsC_7 == (MR_Word) ((MR_Unsigned) 0U)))
    SetC_12 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
  {
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(1, SetsC_7, (MR_Integer) 0))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(1, SetsC_7, (MR_Integer) 1))));

    mercury__fat_sparse_bitset__union_list_passes_3_p_0(TypeInfo_22_22, Var_31, Var_32, &SetC_12);
  }
{
#define MR_PROC_LABEL mercury__test_bitset__union_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_18 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_23_23  = TypeInfo;
}
  if ((SetsD_8 == (MR_Word) ((MR_Unsigned) 0U)))
    SetD_13 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
  {
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, SetsD_8, (MR_Integer) 0))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(1, SetsD_8, (MR_Integer) 1))));

    mercury__fatter_sparse_bitset__union_list_passes_3_p_0(TypeInfo_23_23, Var_36, Var_37, &SetD_13);
  }
{
#define MR_PROC_LABEL mercury__test_bitset__union_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_18 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_24_24  = TypeInfo;
}
  mercury__set_ordlist__union_list_loop_3_p_0(TypeInfo_24_24, SetsS_9, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &SetS_14);
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (SetA_10));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (SetB_11));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) (SetC_12));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (SetD_13));
    MR_hl_field(0, Var_17, 4) = ((MR_Box) (SetS_14));
  }
  mercury__test_bitset__check0_3_p_0(TypeClassInfo_for_uenum_18, (MR_String) "union_list", Var_17, &Result_4);
  return Result_4;
}

static void MR_CALL 
mercury__test_bitset__check0_3_p_0(
  MR_Word TypeClassInfo_for_uenum_18,
  MR_String Op_4,
  MR_Word TestIn_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Word InSetA_7 = ((MR_Word) ((MR_hl_field(0, TestIn_5, (MR_Integer) 0))));
  MR_Word InSetB_8 = ((MR_Word) ((MR_hl_field(0, TestIn_5, (MR_Integer) 1))));
  MR_Word InSetC_9 = ((MR_Word) ((MR_hl_field(0, TestIn_5, (MR_Integer) 2))));
  MR_Word InSetD_10 = ((MR_Word) ((MR_hl_field(0, TestIn_5, (MR_Integer) 3))));
  MR_Word InSetS_11 = ((MR_Word) ((MR_hl_field(0, TestIn_5, (MR_Integer) 4))));
  MR_Word ListA_12;
  MR_Word ListB_13;
  MR_Word ListC_14;
  MR_Word ListD_15;
  MR_Word ListS_16;
  MR_Word TypeInfo_25_25;
  MR_Word TypeInfo_29_29;
  MR_Word TypeInfo_33_33;
  MR_Word TypeInfo_37_37;
  MR_Integer PolyConst1_28;
  MR_Integer PolyConst1_32;
  MR_Integer PolyConst1_36;

  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_18, InSetA_7, &ListA_12);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_18, InSetB_8, &ListB_13);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_18, InSetC_9, &ListC_14);
  mercury__fatter_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_18, InSetD_10, &ListD_15);
  ListS_16 = (MR_Word) (InSetS_11);
{
#define MR_PROC_LABEL mercury__test_bitset__check0_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_18 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_25_25  = TypeInfo;
}
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_25_25, ListA_12, ListS_16);
  if (succeeded)
  {
    PolyConst1_28 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check0_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_18 ;
	Index = PolyConst1_28 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_29_29  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_29_29, ListB_13, ListS_16);
    if (succeeded)
    {
      PolyConst1_32 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check0_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_18 ;
	Index = PolyConst1_32 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_33_33  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_33_33, ListC_14, ListS_16);
      if (succeeded)
      {
        PolyConst1_36 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check0_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_18 ;
	Index = PolyConst1_36 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_37_37  = TypeInfo;
}
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_37_37, ListD_15, ListS_16);
      }
    }
  }
  if (succeeded)
    *Result_6 = TestIn_5;
  else
  {
    MR_Word TypeInfo_21_21;
    MR_Word TypeInfo_23_23;
    MR_Word Var_17;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_17, 0) = ((MR_Box) (Op_4));
      MR_hl_field(0, Var_17, 1) = ((MR_Box) (TestIn_5));
    }
{
#define MR_PROC_LABEL mercury__test_bitset__check0_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_18 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_21_21  = TypeInfo;
}
    {
      TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_23_23, 0) = ((MR_Box) (&mercury__test_bitset__test_bitset__type_ctor_info_bitset_error_1));
      MR_hl_field(0, TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_21_21));
    }
    {
      mercury__exception__throw_1_p_0(TypeInfo_23_23, ((MR_Box) (Var_17)));
      return;
    }
  }
}

static void MR_CALL 
mercury__test_bitset__get_sets_7_p_0(
  MR_Word TypeClassInfo_for_uenum_32,
  MR_String Op_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word SetA_10;
    MR_Word SetB_11;
    MR_Word SetC_12;
    MR_Word SetD_13;
    MR_Word SetS_14;
    MR_Word SetsABCDS_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word SetsA_16;
    MR_Word SetsB_17;
    MR_Word SetsC_18;
    MR_Word SetsD_19;
    MR_Word SetsS_20;
    MR_Word ListA_21;
    MR_Word ListB_22;
    MR_Word ListC_23;
    MR_Word ListD_24;
    MR_Word ListS_25;
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TypeInfo_36_36;
    MR_Word TypeInfo_40_40;
    MR_Word TypeInfo_44_44;
    MR_Word TypeInfo_48_48;
    MR_Integer PolyConst1_39;
    MR_Integer PolyConst1_43;
    MR_Integer PolyConst1_47;

    SetA_10 = ((MR_Word) ((MR_hl_field(0, Var_26, (MR_Integer) 0))));
    SetB_11 = ((MR_Word) ((MR_hl_field(0, Var_26, (MR_Integer) 1))));
    SetC_12 = ((MR_Word) ((MR_hl_field(0, Var_26, (MR_Integer) 2))));
    SetD_13 = ((MR_Word) ((MR_hl_field(0, Var_26, (MR_Integer) 3))));
    SetS_14 = ((MR_Word) ((MR_hl_field(0, Var_26, (MR_Integer) 4))));
    mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_32, SetA_10, &ListA_21);
    mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_32, SetB_11, &ListB_22);
    mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_32, SetC_12, &ListC_23);
    mercury__fatter_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_32, SetD_13, &ListD_24);
    ListS_25 = (MR_Word) (SetS_14);
{
#define MR_PROC_LABEL mercury__test_bitset__get_sets_7_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_32 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_36_36  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_36_36, ListA_21, ListS_25);
    if (succeeded)
    {
      PolyConst1_39 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__get_sets_7_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_32 ;
	Index = PolyConst1_39 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_40_40  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_40_40, ListB_22, ListS_25);
      if (succeeded)
      {
        PolyConst1_43 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__get_sets_7_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_32 ;
	Index = PolyConst1_43 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_44_44  = TypeInfo;
}
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_44_44, ListC_23, ListS_25);
        if (succeeded)
        {
          PolyConst1_47 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__get_sets_7_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_32 ;
	Index = PolyConst1_47 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_48_48  = TypeInfo;
}
          succeeded = mercury__list____Unify____list_1_0(TypeInfo_48_48, ListD_24, ListS_25);
        }
      }
    }
    if (succeeded)
      mercury__test_bitset__get_sets_7_p_0(TypeClassInfo_for_uenum_32, Op_1, SetsABCDS_15, &SetsA_16, &SetsB_17, &SetsC_18, &SetsD_19, &SetsS_20);
    else
    {
      MR_String Var_28;
      MR_String Var_30;

      mercury__string__append_3_p_2(Op_1, (MR_String) " arg list", &Var_30);
      mercury__string__append_3_p_2((MR_String) "unequal sets in ", Var_30, &Var_28);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.get_sets\'/7", Var_28);
        return;
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (SetA_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (SetsA_16));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (SetB_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (SetsB_17));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (SetC_12));
      MR_hl_field(1, base, 1) = ((MR_Box) (SetsC_18));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (SetD_13));
      MR_hl_field(1, base, 1) = ((MR_Box) (SetsD_19));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (SetS_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (SetsS_20));
    }
  }
}

void MR_CALL 
mercury__test_bitset__union_3_p_0(
  MR_Word TypeClassInfo_for_uenum_6,
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * HeadVar__3_3)
{
  *HeadVar__3_3 = mercury__test_bitset__union_2_f_0(TypeClassInfo_for_uenum_6, A_4, B_5);
}

MR_Word MR_CALL 
mercury__test_bitset__union_2_f_0(
  MR_Word TypeClassInfo_for_uenum_24,
  MR_Word InL_4,
  MR_Word InR_5)
{
  MR_Word Result_6;
  MR_Word TypeInfo_26_26;
  MR_Word TypeInfo_30_30;
  MR_Word SetAL_7 = ((MR_Word) ((MR_hl_field(0, InL_4, (MR_Integer) 0))));
  MR_Word SetBL_8 = ((MR_Word) ((MR_hl_field(0, InL_4, (MR_Integer) 1))));
  MR_Word SetCL_9 = ((MR_Word) ((MR_hl_field(0, InL_4, (MR_Integer) 2))));
  MR_Word SetDL_10 = ((MR_Word) ((MR_hl_field(0, InL_4, (MR_Integer) 3))));
  MR_Word SetSL_11 = ((MR_Word) ((MR_hl_field(0, InL_4, (MR_Integer) 4))));
  MR_Word SetAR_12 = ((MR_Word) ((MR_hl_field(0, InR_5, (MR_Integer) 0))));
  MR_Word SetBR_13 = ((MR_Word) ((MR_hl_field(0, InR_5, (MR_Integer) 1))));
  MR_Word SetCR_14 = ((MR_Word) ((MR_hl_field(0, InR_5, (MR_Integer) 2))));
  MR_Word SetDR_15 = ((MR_Word) ((MR_hl_field(0, InR_5, (MR_Integer) 3))));
  MR_Word SetSR_16 = ((MR_Word) ((MR_hl_field(0, InR_5, (MR_Integer) 4))));
  MR_Word SetA_17;
  MR_Word SetB_18;
  MR_Word SetC_19;
  MR_Word SetD_20;
  MR_Word SetS_21;
  MR_Word Var_23;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;

{
#define MR_PROC_LABEL mercury__test_bitset__union_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_24 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_26_26  = TypeInfo;
}
  SetA_17 = mercury__tree_bitset__union_2_f_0(TypeInfo_26_26, SetAL_7, SetAR_12);
  Var_31 = (MR_Word) (SetBL_8);
  Var_32 = (MR_Word) (SetBR_13);
  mercury__sparse_bitset__union_loop_3_p_0(Var_31, Var_32, &Var_33);
  SetB_18 = (MR_Word) (Var_33);
  Var_34 = (MR_Word) (SetCL_9);
  Var_35 = (MR_Word) (SetCR_14);
  mercury__fat_sparse_bitset__union_loop_3_p_0(Var_34, Var_35, &Var_36);
  SetC_19 = (MR_Word) (Var_36);
  Var_37 = (MR_Word) (SetDL_10);
  Var_38 = (MR_Word) (SetDR_15);
  mercury__fatter_sparse_bitset__union_loop_3_p_0(Var_37, Var_38, &Var_39);
  SetD_20 = (MR_Word) (Var_39);
{
#define MR_PROC_LABEL mercury__test_bitset__union_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_24 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_30_30  = TypeInfo;
}
  Var_40 = (MR_Word) (SetSL_11);
  Var_41 = (MR_Word) (SetSR_16);
  mercury__list__merge_and_remove_dups_3_p_0(TypeInfo_30_30, Var_40, Var_41, &Var_42);
  SetS_21 = (MR_Word) (Var_42);
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (SetA_17));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (SetB_18));
    MR_hl_field(0, Var_23, 2) = ((MR_Box) (SetC_19));
    MR_hl_field(0, Var_23, 3) = ((MR_Box) (SetD_20));
    MR_hl_field(0, Var_23, 4) = ((MR_Box) (SetS_21));
  }
  mercury__test_bitset__check2_5_p_0(TypeClassInfo_for_uenum_24, (MR_String) "union", InL_4, InR_5, Var_23, &Result_6);
  return Result_6;
}

static void MR_CALL 
mercury__test_bitset__check2_5_p_0(
  MR_Word TypeClassInfo_for_uenum_42,
  MR_String Op_6,
  MR_Word TestInL_7,
  MR_Word TestInR_8,
  MR_Word TestOut_9,
  MR_Word * Result_10)
{
  MR_bool succeeded;
  MR_Word InSetLA_11 = ((MR_Word) ((MR_hl_field(0, TestInL_7, (MR_Integer) 0))));
  MR_Word InSetLB_12 = ((MR_Word) ((MR_hl_field(0, TestInL_7, (MR_Integer) 1))));
  MR_Word InSetLC_13 = ((MR_Word) ((MR_hl_field(0, TestInL_7, (MR_Integer) 2))));
  MR_Word InSetLD_14 = ((MR_Word) ((MR_hl_field(0, TestInL_7, (MR_Integer) 3))));
  MR_Word InSetLS_15 = ((MR_Word) ((MR_hl_field(0, TestInL_7, (MR_Integer) 4))));
  MR_Word InSetRA_16 = ((MR_Word) ((MR_hl_field(0, TestInR_8, (MR_Integer) 0))));
  MR_Word InSetRB_17 = ((MR_Word) ((MR_hl_field(0, TestInR_8, (MR_Integer) 1))));
  MR_Word InSetRC_18 = ((MR_Word) ((MR_hl_field(0, TestInR_8, (MR_Integer) 2))));
  MR_Word InSetRD_19 = ((MR_Word) ((MR_hl_field(0, TestInR_8, (MR_Integer) 3))));
  MR_Word InSetRS_20 = ((MR_Word) ((MR_hl_field(0, TestInR_8, (MR_Integer) 4))));
  MR_Word OutSetA_21 = ((MR_Word) ((MR_hl_field(0, TestOut_9, (MR_Integer) 0))));
  MR_Word OutSetB_22 = ((MR_Word) ((MR_hl_field(0, TestOut_9, (MR_Integer) 1))));
  MR_Word OutSetC_23 = ((MR_Word) ((MR_hl_field(0, TestOut_9, (MR_Integer) 2))));
  MR_Word OutSetD_24 = ((MR_Word) ((MR_hl_field(0, TestOut_9, (MR_Integer) 3))));
  MR_Word OutSetS_25 = ((MR_Word) ((MR_hl_field(0, TestOut_9, (MR_Integer) 4))));
  MR_Word InsLA_26;
  MR_Word InsRA_27;
  MR_Word OutsA_28;
  MR_Word InsLB_29;
  MR_Word InsRB_30;
  MR_Word OutsB_31;
  MR_Word InsLC_32;
  MR_Word InsRC_33;
  MR_Word OutsC_34;
  MR_Word InsLD_35;
  MR_Word InsRD_36;
  MR_Word OutsD_37;
  MR_Word InsLS_38;
  MR_Word InsRS_39;
  MR_Word OutsS_40;
  MR_Word TypeInfo_51_51;
  MR_Word TypeInfo_55_55;
  MR_Word TypeInfo_59_59;
  MR_Word TypeInfo_63_63;
  MR_Word TypeInfo_67_67;
  MR_Word TypeInfo_71_71;
  MR_Word TypeInfo_75_75;
  MR_Word TypeInfo_79_79;
  MR_Word TypeInfo_83_83;
  MR_Word TypeInfo_87_87;
  MR_Word TypeInfo_91_91;
  MR_Word TypeInfo_95_95;
  MR_Integer PolyConst1_54;
  MR_Integer PolyConst1_58;
  MR_Integer PolyConst1_62;
  MR_Integer PolyConst1_66;
  MR_Integer PolyConst1_70;
  MR_Integer PolyConst1_74;
  MR_Integer PolyConst1_78;
  MR_Integer PolyConst1_82;
  MR_Integer PolyConst1_86;
  MR_Integer PolyConst1_90;
  MR_Integer PolyConst1_94;

  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_42, InSetLA_11, &InsLA_26);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_42, InSetRA_16, &InsRA_27);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_42, OutSetA_21, &OutsA_28);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_42, InSetLB_12, &InsLB_29);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_42, InSetRB_17, &InsRB_30);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_42, OutSetB_22, &OutsB_31);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_42, InSetLC_13, &InsLC_32);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_42, InSetRC_18, &InsRC_33);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_42, OutSetC_23, &OutsC_34);
  mercury__fatter_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_42, InSetLD_14, &InsLD_35);
  mercury__fatter_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_42, InSetRD_19, &InsRD_36);
  mercury__fatter_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_42, OutSetD_24, &OutsD_37);
  InsLS_38 = (MR_Word) (InSetLS_15);
  InsRS_39 = (MR_Word) (InSetRS_20);
  OutsS_40 = (MR_Word) (OutSetS_25);
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_42 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_51_51  = TypeInfo;
}
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_51_51, InsLA_26, InsLS_38);
  if (succeeded)
  {
    PolyConst1_54 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_42 ;
	Index = PolyConst1_54 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_55_55  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_55_55, InsLB_29, InsLS_38);
    if (succeeded)
    {
      PolyConst1_58 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_42 ;
	Index = PolyConst1_58 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_59_59  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_59_59, InsLC_32, InsLS_38);
      if (succeeded)
      {
        PolyConst1_62 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_42 ;
	Index = PolyConst1_62 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_63_63  = TypeInfo;
}
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_63_63, InsLD_35, InsLS_38);
        if (succeeded)
        {
          PolyConst1_66 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_42 ;
	Index = PolyConst1_66 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_67_67  = TypeInfo;
}
          succeeded = mercury__list____Unify____list_1_0(TypeInfo_67_67, InsRA_27, InsRS_39);
          if (succeeded)
          {
            PolyConst1_70 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_42 ;
	Index = PolyConst1_70 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_71_71  = TypeInfo;
}
            succeeded = mercury__list____Unify____list_1_0(TypeInfo_71_71, InsRB_30, InsRS_39);
            if (succeeded)
            {
              PolyConst1_74 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_42 ;
	Index = PolyConst1_74 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_75_75  = TypeInfo;
}
              succeeded = mercury__list____Unify____list_1_0(TypeInfo_75_75, InsRC_33, InsRS_39);
              if (succeeded)
              {
                PolyConst1_78 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_42 ;
	Index = PolyConst1_78 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_79_79  = TypeInfo;
}
                succeeded = mercury__list____Unify____list_1_0(TypeInfo_79_79, InsRD_36, InsRS_39);
                if (succeeded)
                {
                  PolyConst1_82 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_42 ;
	Index = PolyConst1_82 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_83_83  = TypeInfo;
}
                  succeeded = mercury__list____Unify____list_1_0(TypeInfo_83_83, OutsA_28, OutsS_40);
                  if (succeeded)
                  {
                    PolyConst1_86 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_42 ;
	Index = PolyConst1_86 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_87_87  = TypeInfo;
}
                    succeeded = mercury__list____Unify____list_1_0(TypeInfo_87_87, OutsB_31, OutsS_40);
                    if (succeeded)
                    {
                      PolyConst1_90 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_42 ;
	Index = PolyConst1_90 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_91_91  = TypeInfo;
}
                      succeeded = mercury__list____Unify____list_1_0(TypeInfo_91_91, OutsC_34, OutsS_40);
                      if (succeeded)
                      {
                        PolyConst1_94 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_42 ;
	Index = PolyConst1_94 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_95_95  = TypeInfo;
}
                        succeeded = mercury__list____Unify____list_1_0(TypeInfo_95_95, OutsD_37, OutsS_40);
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
  if (succeeded)
    *Result_10 = TestOut_9;
  else
  {
    MR_Word TypeInfo_47_47;
    MR_Word TypeInfo_49_49;
    MR_Word Var_41;

    {
      Var_41 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_41, 0) = ((MR_Box) (Op_6));
      MR_hl_field(2, Var_41, 1) = ((MR_Box) (TestInL_7));
      MR_hl_field(2, Var_41, 2) = ((MR_Box) (TestInR_8));
      MR_hl_field(2, Var_41, 3) = ((MR_Box) (TestOut_9));
    }
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_42 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_47_47  = TypeInfo;
}
    {
      TypeInfo_49_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_49_49, 0) = ((MR_Box) (&mercury__test_bitset__test_bitset__type_ctor_info_bitset_error_1));
      MR_hl_field(0, TypeInfo_49_49, 1) = ((MR_Box) (TypeInfo_47_47));
    }
    {
      mercury__exception__throw_1_p_0(TypeInfo_49_49, ((MR_Box) (Var_41)));
      return;
    }
  }
}

MR_bool MR_CALL 
mercury__test_bitset__superset_2_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word InL_3,
  MR_Word InR_4)
{
  MR_bool succeeded;
  MR_Word SetAL_5 = ((MR_Word) ((MR_hl_field(0, InL_3, (MR_Integer) 0))));
  MR_Word SetBL_6 = ((MR_Word) ((MR_hl_field(0, InL_3, (MR_Integer) 1))));
  MR_Word SetCL_7 = ((MR_Word) ((MR_hl_field(0, InL_3, (MR_Integer) 2))));
  MR_Word SetDL_8 = ((MR_Word) ((MR_hl_field(0, InL_3, (MR_Integer) 3))));
  MR_Word SetSL_9 = ((MR_Word) ((MR_hl_field(0, InL_3, (MR_Integer) 4))));
  MR_Word SetAR_10 = ((MR_Word) ((MR_hl_field(0, InR_4, (MR_Integer) 0))));
  MR_Word SetBR_11 = ((MR_Word) ((MR_hl_field(0, InR_4, (MR_Integer) 1))));
  MR_Word SetCR_12 = ((MR_Word) ((MR_hl_field(0, InR_4, (MR_Integer) 2))));
  MR_Word SetDR_13 = ((MR_Word) ((MR_hl_field(0, InR_4, (MR_Integer) 3))));
  MR_Word SetSR_14 = ((MR_Word) ((MR_hl_field(0, InR_4, (MR_Integer) 4))));
  MR_Word A_15;
  MR_Word B_16;
  MR_Word C_17;
  MR_Word D_18;
  MR_Word S_19;
  MR_Word Var_24;
  MR_Word Var_28;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_35;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_42;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_49;
  MR_Word Var_50;

  Var_24 = mercury__tree_bitset__intersect_2_f_0(TypeInfo_for_T_22, SetAL_5, SetAR_10);
  succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(TypeInfo_for_T_22, SetAR_10, Var_24);
  if (succeeded)
    A_15 = (MR_Integer) 1;
  else
    A_15 = (MR_Integer) 0;
  Var_31 = (MR_Word) (SetBL_6);
  Var_32 = (MR_Word) (SetBR_11);
  mercury__sparse_bitset__intersect_loop_3_p_0(Var_31, Var_32, &Var_33);
  Var_28 = (MR_Word) (Var_33);
  succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(TypeInfo_for_T_22, SetBR_11, Var_28);
  if (succeeded)
    B_16 = (MR_Integer) 1;
  else
    B_16 = (MR_Integer) 0;
  Var_38 = (MR_Word) (SetCL_7);
  Var_39 = (MR_Word) (SetCR_12);
  mercury__fat_sparse_bitset__intersect_loop_3_p_0(Var_38, Var_39, &Var_40);
  Var_35 = (MR_Word) (Var_40);
  succeeded = mercury__fat_sparse_bitset____Unify____fat_sparse_bitset_1_0(TypeInfo_for_T_22, SetCR_12, Var_35);
  if (succeeded)
    C_17 = (MR_Integer) 1;
  else
    C_17 = (MR_Integer) 0;
  Var_45 = (MR_Word) (SetDL_8);
  Var_46 = (MR_Word) (SetDR_13);
  mercury__fatter_sparse_bitset__intersect_loop_3_p_0(Var_45, Var_46, &Var_47);
  Var_42 = (MR_Word) (Var_47);
  succeeded = mercury__fatter_sparse_bitset____Unify____fatter_sparse_bitset_1_0(TypeInfo_for_T_22, SetDR_13, Var_42);
  if (succeeded)
    D_18 = (MR_Integer) 1;
  else
    D_18 = (MR_Integer) 0;
  Var_49 = (MR_Word) (SetSL_9);
  Var_50 = (MR_Word) (SetSR_14);
  succeeded = mercury__set_ordlist__intersect_loop_3_p_1(TypeInfo_for_T_22, Var_49, Var_50, Var_50);
  if (succeeded)
    S_19 = (MR_Integer) 1;
  else
    S_19 = (MR_Integer) 0;
  succeeded = (A_15 == S_19);
  if (succeeded)
  {
    succeeded = (B_16 == S_19);
    if (succeeded)
    {
      succeeded = (C_17 == S_19);
      if (succeeded)
        succeeded = (D_18 == S_19);
    }
  }
  if (succeeded)
    succeeded = (S_19 == (MR_Integer) 1);
  else
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.superset\'/2", (MR_String) "failed");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__test_bitset__subset_2_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word InL_3,
  MR_Word InR_4)
{
  MR_bool succeeded;
  MR_Word SetAL_5 = ((MR_Word) ((MR_hl_field(0, InL_3, (MR_Integer) 0))));
  MR_Word SetBL_6 = ((MR_Word) ((MR_hl_field(0, InL_3, (MR_Integer) 1))));
  MR_Word SetCL_7 = ((MR_Word) ((MR_hl_field(0, InL_3, (MR_Integer) 2))));
  MR_Word SetDL_8 = ((MR_Word) ((MR_hl_field(0, InL_3, (MR_Integer) 3))));
  MR_Word SetSL_9 = ((MR_Word) ((MR_hl_field(0, InL_3, (MR_Integer) 4))));
  MR_Word SetAR_10 = ((MR_Word) ((MR_hl_field(0, InR_4, (MR_Integer) 0))));
  MR_Word SetBR_11 = ((MR_Word) ((MR_hl_field(0, InR_4, (MR_Integer) 1))));
  MR_Word SetCR_12 = ((MR_Word) ((MR_hl_field(0, InR_4, (MR_Integer) 2))));
  MR_Word SetDR_13 = ((MR_Word) ((MR_hl_field(0, InR_4, (MR_Integer) 3))));
  MR_Word SetSR_14 = ((MR_Word) ((MR_hl_field(0, InR_4, (MR_Integer) 4))));
  MR_Word A_15;
  MR_Word B_16;
  MR_Word C_17;
  MR_Word D_18;
  MR_Word S_19;
  MR_Word Var_24;
  MR_Word Var_28;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_35;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_42;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_49;
  MR_Word Var_50;

  Var_24 = mercury__tree_bitset__intersect_2_f_0(TypeInfo_for_T_22, SetAR_10, SetAL_5);
  succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(TypeInfo_for_T_22, SetAL_5, Var_24);
  if (succeeded)
    A_15 = (MR_Integer) 1;
  else
    A_15 = (MR_Integer) 0;
  Var_31 = (MR_Word) (SetBR_11);
  Var_32 = (MR_Word) (SetBL_6);
  mercury__sparse_bitset__intersect_loop_3_p_0(Var_31, Var_32, &Var_33);
  Var_28 = (MR_Word) (Var_33);
  succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(TypeInfo_for_T_22, SetBL_6, Var_28);
  if (succeeded)
    B_16 = (MR_Integer) 1;
  else
    B_16 = (MR_Integer) 0;
  Var_38 = (MR_Word) (SetCR_12);
  Var_39 = (MR_Word) (SetCL_7);
  mercury__fat_sparse_bitset__intersect_loop_3_p_0(Var_38, Var_39, &Var_40);
  Var_35 = (MR_Word) (Var_40);
  succeeded = mercury__fat_sparse_bitset____Unify____fat_sparse_bitset_1_0(TypeInfo_for_T_22, SetCL_7, Var_35);
  if (succeeded)
    C_17 = (MR_Integer) 1;
  else
    C_17 = (MR_Integer) 0;
  Var_45 = (MR_Word) (SetDR_13);
  Var_46 = (MR_Word) (SetDL_8);
  mercury__fatter_sparse_bitset__intersect_loop_3_p_0(Var_45, Var_46, &Var_47);
  Var_42 = (MR_Word) (Var_47);
  succeeded = mercury__fatter_sparse_bitset____Unify____fatter_sparse_bitset_1_0(TypeInfo_for_T_22, SetDL_8, Var_42);
  if (succeeded)
    D_18 = (MR_Integer) 1;
  else
    D_18 = (MR_Integer) 0;
  Var_49 = (MR_Word) (SetSR_14);
  Var_50 = (MR_Word) (SetSL_9);
  succeeded = mercury__set_ordlist__intersect_loop_3_p_1(TypeInfo_for_T_22, Var_49, Var_50, Var_50);
  if (succeeded)
    S_19 = (MR_Integer) 1;
  else
    S_19 = (MR_Integer) 0;
  succeeded = (A_15 == S_19);
  if (succeeded)
  {
    succeeded = (B_16 == S_19);
    if (succeeded)
    {
      succeeded = (C_17 == S_19);
      if (succeeded)
        succeeded = (D_18 == S_19);
    }
  }
  if (succeeded)
    succeeded = (S_19 == (MR_Integer) 1);
  else
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.subset\'/2", (MR_String) "failed");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__test_bitset__equal_2_p_0(
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Word InL_3,
  MR_Word InR_4)
{
  MR_bool succeeded;
  MR_Word SetAL_5 = ((MR_Word) ((MR_hl_field(0, InL_3, (MR_Integer) 0))));
  MR_Word SetBL_6 = ((MR_Word) ((MR_hl_field(0, InL_3, (MR_Integer) 1))));
  MR_Word SetCL_7 = ((MR_Word) ((MR_hl_field(0, InL_3, (MR_Integer) 2))));
  MR_Word SetDL_8 = ((MR_Word) ((MR_hl_field(0, InL_3, (MR_Integer) 3))));
  MR_Word SetSL_9 = ((MR_Word) ((MR_hl_field(0, InL_3, (MR_Integer) 4))));
  MR_Word SetAR_10 = ((MR_Word) ((MR_hl_field(0, InR_4, (MR_Integer) 0))));
  MR_Word SetBR_11 = ((MR_Word) ((MR_hl_field(0, InR_4, (MR_Integer) 1))));
  MR_Word SetCR_12 = ((MR_Word) ((MR_hl_field(0, InR_4, (MR_Integer) 2))));
  MR_Word SetDR_13 = ((MR_Word) ((MR_hl_field(0, InR_4, (MR_Integer) 3))));
  MR_Word SetSR_14 = ((MR_Word) ((MR_hl_field(0, InR_4, (MR_Integer) 4))));
  MR_Word A_15;
  MR_Word B_16;
  MR_Word C_17;
  MR_Word D_18;
  MR_Word S_19;
  MR_Word TypeInfo_24_24;
  MR_Word TypeInfo_26_26;
  MR_Word TypeInfo_28_28;
  MR_Word TypeInfo_30_30;

  succeeded = mercury__tree_bitset__equal_2_p_0(TypeClassInfo_for_uenum_22, SetAL_5, SetAR_10);
  if (succeeded)
    A_15 = (MR_Integer) 1;
  else
    A_15 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__test_bitset__equal_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_22 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_24_24  = TypeInfo;
}
  succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(TypeInfo_24_24, SetBR_11, SetBL_6);
  if (succeeded)
    B_16 = (MR_Integer) 1;
  else
    B_16 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__test_bitset__equal_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_22 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_26_26  = TypeInfo;
}
  succeeded = mercury__fat_sparse_bitset____Unify____fat_sparse_bitset_1_0(TypeInfo_26_26, SetCR_12, SetCL_7);
  if (succeeded)
    C_17 = (MR_Integer) 1;
  else
    C_17 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__test_bitset__equal_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_22 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_28_28  = TypeInfo;
}
  succeeded = mercury__fatter_sparse_bitset____Unify____fatter_sparse_bitset_1_0(TypeInfo_28_28, SetDR_13, SetDL_8);
  if (succeeded)
    D_18 = (MR_Integer) 1;
  else
    D_18 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__test_bitset__equal_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_22 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_30_30  = TypeInfo;
}
  succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(TypeInfo_30_30, SetSR_14, SetSL_9);
  if (succeeded)
    S_19 = (MR_Integer) 1;
  else
    S_19 = (MR_Integer) 0;
  succeeded = (A_15 == S_19);
  if (succeeded)
  {
    succeeded = (B_16 == S_19);
    if (succeeded)
    {
      succeeded = (C_17 == S_19);
      if (succeeded)
        succeeded = (D_18 == S_19);
    }
  }
  if (succeeded)
    succeeded = (S_19 == (MR_Integer) 1);
  else
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.equal\'/2", (MR_String) "failed");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mercury__test_bitset__remove_gt_3_p_0(
  MR_Word TypeClassInfo_for_uenum_25,
  MR_Word In_1,
  MR_Box Hurdle_10,
  MR_Word * Result_11)
{
  MR_Word TypeInfo_27_27;
  MR_Word SetA0_5 = ((MR_Word) ((MR_hl_field(0, In_1, (MR_Integer) 0))));
  MR_Word SetB0_6 = ((MR_Word) ((MR_hl_field(0, In_1, (MR_Integer) 1))));
  MR_Word SetC0_7 = ((MR_Word) ((MR_hl_field(0, In_1, (MR_Integer) 2))));
  MR_Word SetD0_8 = ((MR_Word) ((MR_hl_field(0, In_1, (MR_Integer) 3))));
  MR_Word SetS0_9 = ((MR_Word) ((MR_hl_field(0, In_1, (MR_Integer) 4))));
  MR_Word SetA_12;
  MR_Word SetB_13;
  MR_Word SetC_14;
  MR_Word SetD_15;
  MR_Word SetS_20;
  MR_Word Var_23;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Unsigned Var_30;
  MR_Unsigned Var_31;
  MR_Unsigned Var_32;
  MR_Unsigned Var_33;
  MR_Unsigned Var_34;
  MR_Unsigned Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Unsigned Var_39;
  MR_Unsigned Var_40;
  MR_Unsigned Var_41;
  MR_Unsigned Var_42;
  MR_Unsigned Var_43;
  MR_Unsigned Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Unsigned Var_48;
  MR_Unsigned Var_49;
  MR_Unsigned Var_50;
  MR_Unsigned Var_51;
  MR_Unsigned Var_52;
  MR_Unsigned Var_54;
  MR_Unsigned Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_30;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
  MR_Box conv3_Var_39;
  MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);
  MR_Box conv5_Var_48;

  mercury__tree_bitset__remove_gt_3_p_0(TypeClassInfo_for_uenum_25, Hurdle_10, SetA0_5, &SetA_12);
  Var_28 = (MR_Word) (SetB0_6);
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_25, (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_30 = func_0(((MR_Box) (TypeClassInfo_for_uenum_25)), Hurdle_10);
  Var_30 = ((MR_Unsigned) (conv1_Var_30));
{
#define MR_PROC_LABEL mercury__test_bitset__remove_gt_3_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_34  = Bits;
}
  Var_33 = (Var_34 - (MR_Unsigned) 1U);
  Var_36 = ~(Var_33);
  Var_31 = (Var_30 & Var_36);
  Var_32 = (Var_30 & Var_33);
  mercury__sparse_bitset__remove_gt_loop_4_p_0(Var_31, Var_32, Var_28, &Var_29);
  SetB_13 = (MR_Word) (Var_29);
  Var_37 = (MR_Word) (SetC0_7);
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_25, (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_39 = func_2(((MR_Box) (TypeClassInfo_for_uenum_25)), Hurdle_10);
  Var_39 = ((MR_Unsigned) (conv3_Var_39));
{
#define MR_PROC_LABEL mercury__test_bitset__remove_gt_3_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_43  = Bits;
}
  Var_42 = (Var_43 - (MR_Unsigned) 1U);
  Var_45 = ~(Var_42);
  Var_40 = (Var_39 & Var_45);
  Var_41 = (Var_39 & Var_42);
  mercury__fat_sparse_bitset__remove_gt_loop_4_p_0(Var_40, Var_41, Var_37, &Var_38);
  SetC_14 = (MR_Word) (Var_38);
  Var_46 = (MR_Word) (SetD0_8);
  func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_25, (MR_Integer) 0)), (MR_Integer) 5))));
  conv5_Var_48 = func_4(((MR_Box) (TypeClassInfo_for_uenum_25)), Hurdle_10);
  Var_48 = ((MR_Unsigned) (conv5_Var_48));
{
#define MR_PROC_LABEL mercury__test_bitset__remove_gt_3_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_54  = Bits;
}
  Var_52 = (Var_54 << 1);
  Var_51 = (Var_52 - (MR_Unsigned) 1U);
  Var_56 = ~(Var_51);
  Var_49 = (Var_48 & Var_56);
  Var_50 = (Var_48 & Var_51);
  mercury__fatter_sparse_bitset__remove_gt_loop_4_p_0(Var_49, Var_50, Var_46, &Var_47);
  SetD_15 = (MR_Word) (Var_47);
{
#define MR_PROC_LABEL mercury__test_bitset__remove_gt_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_25 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_27_27  = TypeInfo;
}
  Var_57 = (MR_Word) (SetS0_9);
  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_49_48_95_95_91_51_44_32_52_93_95_48_3_p_in__list_0(TypeClassInfo_for_uenum_25, Hurdle_10, Var_57, &Var_58);
  if ((Var_58 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_59 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Var_60 = (MR_hl_field(1, Var_58, (MR_Integer) 0));
    MR_Word Var_61 = ((MR_Word) ((MR_hl_field(1, Var_58, (MR_Integer) 1))));

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_27_27, Var_60, Var_61, &Var_59);
  }
  SetS_20 = (MR_Word) (Var_59);
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (SetA_12));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (SetB_13));
    MR_hl_field(0, Var_23, 2) = ((MR_Box) (SetC_14));
    MR_hl_field(0, Var_23, 3) = ((MR_Box) (SetD_15));
    MR_hl_field(0, Var_23, 4) = ((MR_Box) (SetS_20));
  }
  mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_uenum_25, (MR_String) "remove_gt", In_1, Var_23, Result_11);
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_49_48_95_95_91_51_44_32_52_93_95_48_3_p_in__list_0(
  MR_Word Var_11,
  MR_Box Var_12,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box Var_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Unsigned Index_13;
      MR_Unsigned HurdleIndex_14;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, Var_11, (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv1_Index_13;
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box conv3_HurdleIndex_14;

      conv1_Index_13 = func_0(((MR_Box) (Var_11)), Var_6);
      Index_13 = ((MR_Unsigned) (conv1_Index_13));
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, Var_11, (MR_Integer) 0)), (MR_Integer) 5))));
      conv3_HurdleIndex_14 = func_2(((MR_Box) (Var_11)), Var_12);
      HurdleIndex_14 = ((MR_Unsigned) (conv3_HurdleIndex_14));
      succeeded = (Index_13 <= HurdleIndex_14);
      if (succeeded)
      {
        MR_Word * AddrSCCcallarg_9_15;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(1, base, 0) = Var_6;
          MR_hl_field(1, base, 1) = NULL;
        }
        AddrSCCcallarg_9_15 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, (MR_Integer) 1)));
        mercury__test_bitset__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_49_48_95_95_91_51_44_32_52_93_95_48_95_95_49_3_p_0(Var_11, Var_12, Var_7, AddrSCCcallarg_9_15);
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Var_7;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_49_48_95_95_91_51_44_32_52_93_95_48_95_95_49_3_p_0(
  MR_Word Var_11,
  MR_Box Var_12,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_16 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box Var_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Unsigned Index_13;
      MR_Unsigned HurdleIndex_14;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, Var_11, (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv1_Index_13;
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box conv3_HurdleIndex_14;

      conv1_Index_13 = func_0(((MR_Box) (Var_11)), Var_6);
      Index_13 = ((MR_Unsigned) (conv1_Index_13));
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, Var_11, (MR_Integer) 0)), (MR_Integer) 5))));
      conv3_HurdleIndex_14 = func_2(((MR_Box) (Var_11)), Var_12);
      HurdleIndex_14 = ((MR_Unsigned) (conv3_HurdleIndex_14));
      succeeded = (Index_13 <= HurdleIndex_14);
      if (succeeded)
      {
        MR_Word * AddrSCCcallarg_9_15;
        MR_Word HeadVar__3_17;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word * next_value_of_AddrOfHeadVar__3_16;

        {
          HeadVar__3_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__3_17, 0) = Var_6;
          MR_hl_field(1, HeadVar__3_17, 1) = NULL;
        }
        AddrSCCcallarg_9_15 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_17, (MR_Integer) 1)));
        *AddrOfHeadVar__3_16 = HeadVar__3_17;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Var_7;
        next_value_of_AddrOfHeadVar__3_16 = AddrSCCcallarg_9_15;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        AddrOfHeadVar__3_16 = next_value_of_AddrOfHeadVar__3_16;
        continue;
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Var_7;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__test_bitset__remove_leq_3_p_0(
  MR_Word TypeClassInfo_for_uenum_25,
  MR_Word In_1,
  MR_Box Hurdle_10,
  MR_Word * Result_11)
{
  MR_Word TypeInfo_27_27;
  MR_Word SetA0_5 = ((MR_Word) ((MR_hl_field(0, In_1, (MR_Integer) 0))));
  MR_Word SetB0_6 = ((MR_Word) ((MR_hl_field(0, In_1, (MR_Integer) 1))));
  MR_Word SetC0_7 = ((MR_Word) ((MR_hl_field(0, In_1, (MR_Integer) 2))));
  MR_Word SetD0_8 = ((MR_Word) ((MR_hl_field(0, In_1, (MR_Integer) 3))));
  MR_Word SetS0_9 = ((MR_Word) ((MR_hl_field(0, In_1, (MR_Integer) 4))));
  MR_Word SetA_12;
  MR_Word SetB_13;
  MR_Word SetC_14;
  MR_Word SetD_15;
  MR_Word SetS_20;
  MR_Word Var_23;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Unsigned Var_30;
  MR_Unsigned Var_31;
  MR_Unsigned Var_32;
  MR_Unsigned Var_33;
  MR_Unsigned Var_34;
  MR_Unsigned Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Unsigned Var_39;
  MR_Unsigned Var_40;
  MR_Unsigned Var_41;
  MR_Unsigned Var_42;
  MR_Unsigned Var_43;
  MR_Unsigned Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Unsigned Var_48;
  MR_Unsigned Var_49;
  MR_Unsigned Var_50;
  MR_Unsigned Var_51;
  MR_Unsigned Var_52;
  MR_Unsigned Var_54;
  MR_Unsigned Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_30;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
  MR_Box conv3_Var_39;
  MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);
  MR_Box conv5_Var_48;

  mercury__tree_bitset__remove_leq_3_p_0(TypeClassInfo_for_uenum_25, Hurdle_10, SetA0_5, &SetA_12);
  Var_28 = (MR_Word) (SetB0_6);
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_25, (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_30 = func_0(((MR_Box) (TypeClassInfo_for_uenum_25)), Hurdle_10);
  Var_30 = ((MR_Unsigned) (conv1_Var_30));
{
#define MR_PROC_LABEL mercury__test_bitset__remove_leq_3_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_34  = Bits;
}
  Var_33 = (Var_34 - (MR_Unsigned) 1U);
  Var_36 = ~(Var_33);
  Var_31 = (Var_30 & Var_36);
  Var_32 = (Var_30 & Var_33);
  mercury__sparse_bitset__remove_leq_loop_4_p_0(Var_31, Var_32, Var_28, &Var_29);
  SetB_13 = (MR_Word) (Var_29);
  Var_37 = (MR_Word) (SetC0_7);
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_25, (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_39 = func_2(((MR_Box) (TypeClassInfo_for_uenum_25)), Hurdle_10);
  Var_39 = ((MR_Unsigned) (conv3_Var_39));
{
#define MR_PROC_LABEL mercury__test_bitset__remove_leq_3_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_43  = Bits;
}
  Var_42 = (Var_43 - (MR_Unsigned) 1U);
  Var_45 = ~(Var_42);
  Var_40 = (Var_39 & Var_45);
  Var_41 = (Var_39 & Var_42);
  mercury__fat_sparse_bitset__remove_leq_loop_4_p_0(Var_40, Var_41, Var_37, &Var_38);
  SetC_14 = (MR_Word) (Var_38);
  Var_46 = (MR_Word) (SetD0_8);
  func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_25, (MR_Integer) 0)), (MR_Integer) 5))));
  conv5_Var_48 = func_4(((MR_Box) (TypeClassInfo_for_uenum_25)), Hurdle_10);
  Var_48 = ((MR_Unsigned) (conv5_Var_48));
{
#define MR_PROC_LABEL mercury__test_bitset__remove_leq_3_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_54  = Bits;
}
  Var_52 = (Var_54 << 1);
  Var_51 = (Var_52 - (MR_Unsigned) 1U);
  Var_56 = ~(Var_51);
  Var_49 = (Var_48 & Var_56);
  Var_50 = (Var_48 & Var_51);
  mercury__fatter_sparse_bitset__remove_leq_loop_4_p_0(Var_49, Var_50, Var_46, &Var_47);
  SetD_15 = (MR_Word) (Var_47);
{
#define MR_PROC_LABEL mercury__test_bitset__remove_leq_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_25 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_27_27  = TypeInfo;
}
  Var_57 = (MR_Word) (SetS0_9);
  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_48_57_95_95_91_51_44_32_52_93_95_48_3_p_in__list_0(TypeClassInfo_for_uenum_25, Hurdle_10, Var_57, &Var_58);
  if ((Var_58 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_59 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Var_60 = (MR_hl_field(1, Var_58, (MR_Integer) 0));
    MR_Word Var_61 = ((MR_Word) ((MR_hl_field(1, Var_58, (MR_Integer) 1))));

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_27_27, Var_60, Var_61, &Var_59);
  }
  SetS_20 = (MR_Word) (Var_59);
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (SetA_12));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (SetB_13));
    MR_hl_field(0, Var_23, 2) = ((MR_Box) (SetC_14));
    MR_hl_field(0, Var_23, 3) = ((MR_Box) (SetD_15));
    MR_hl_field(0, Var_23, 4) = ((MR_Box) (SetS_20));
  }
  mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_uenum_25, (MR_String) "remove_leq", In_1, Var_23, Result_11);
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_48_57_95_95_91_51_44_32_52_93_95_48_3_p_in__list_0(
  MR_Word Var_11,
  MR_Box Var_12,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box Var_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Unsigned Index_13;
      MR_Unsigned HurdleIndex_14;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, Var_11, (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv1_Index_13;
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box conv3_HurdleIndex_14;

      conv1_Index_13 = func_0(((MR_Box) (Var_11)), Var_6);
      Index_13 = ((MR_Unsigned) (conv1_Index_13));
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, Var_11, (MR_Integer) 0)), (MR_Integer) 5))));
      conv3_HurdleIndex_14 = func_2(((MR_Box) (Var_11)), Var_12);
      HurdleIndex_14 = ((MR_Unsigned) (conv3_HurdleIndex_14));
      succeeded = (Index_13 > HurdleIndex_14);
      if (succeeded)
      {
        MR_Word * AddrSCCcallarg_9_15;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(1, base, 0) = Var_6;
          MR_hl_field(1, base, 1) = NULL;
        }
        AddrSCCcallarg_9_15 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, (MR_Integer) 1)));
        mercury__test_bitset__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_48_57_95_95_91_51_44_32_52_93_95_48_95_95_49_3_p_0(Var_11, Var_12, Var_7, AddrSCCcallarg_9_15);
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Var_7;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_49_48_57_95_95_91_51_44_32_52_93_95_48_95_95_49_3_p_0(
  MR_Word Var_11,
  MR_Box Var_12,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_16 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box Var_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Unsigned Index_13;
      MR_Unsigned HurdleIndex_14;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, Var_11, (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv1_Index_13;
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box conv3_HurdleIndex_14;

      conv1_Index_13 = func_0(((MR_Box) (Var_11)), Var_6);
      Index_13 = ((MR_Unsigned) (conv1_Index_13));
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, Var_11, (MR_Integer) 0)), (MR_Integer) 5))));
      conv3_HurdleIndex_14 = func_2(((MR_Box) (Var_11)), Var_12);
      HurdleIndex_14 = ((MR_Unsigned) (conv3_HurdleIndex_14));
      succeeded = (Index_13 > HurdleIndex_14);
      if (succeeded)
      {
        MR_Word * AddrSCCcallarg_9_15;
        MR_Word HeadVar__3_17;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word * next_value_of_AddrOfHeadVar__3_16;

        {
          HeadVar__3_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__3_17, 0) = Var_6;
          MR_hl_field(1, HeadVar__3_17, 1) = NULL;
        }
        AddrSCCcallarg_9_15 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_17, (MR_Integer) 1)));
        *AddrOfHeadVar__3_16 = HeadVar__3_17;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Var_7;
        next_value_of_AddrOfHeadVar__3_16 = AddrSCCcallarg_9_15;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        AddrOfHeadVar__3_16 = next_value_of_AddrOfHeadVar__3_16;
        continue;
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Var_7;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__test_bitset__remove_least_3_p_0(
  MR_Word TypeClassInfo_for_uenum_51,
  MR_Box * Least_4,
  MR_Word In_2,
  MR_Word * Result_11)
{
  MR_bool succeeded;
  MR_Word SetA0_6 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 0))));
  MR_Word SetB0_7 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 1))));
  MR_Word SetC0_8 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 2))));
  MR_Word SetD0_9 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 3))));
  MR_Word SetS0_10 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 4))));
  MR_Word MaybeA_14;
  MR_Word MaybeB_17;
  MR_Word MaybeC_20;
  MR_Word MaybeD_23;
  MR_Word MaybeS_26;
  MR_Box LeastA_12;
  MR_Word SetA_13;
  MR_Box LeastB_15;
  MR_Word SetB_16;
  MR_Box LeastC_18;
  MR_Word SetC_19;
  MR_Box LeastD_21;
  MR_Word SetD_22;
  MR_Box LeastS_24;
  MR_Word SetS_25;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word SA_28;
  MR_Word SB_30;
  MR_Word SC_32;
  MR_Word SD_34;
  MR_Box LS_35;
  MR_Word SS_36;
  MR_Word TypeInfo_55_55;
  MR_Word TypeInfo_57_57;
  MR_Word TypeInfo_59_59;
  MR_Word TypeInfo_61_61;
  MR_Box LA_27;
  MR_Box LB_29;
  MR_Box LC_31;
  MR_Box LD_33;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Integer TypeInfoIndex_54;
  MR_Integer TypeInfoIndex_56;
  MR_Integer TypeInfoIndex_58;
  MR_Integer TypeInfoIndex_60;

  succeeded = mercury__tree_bitset__remove_least_3_p_0(TypeClassInfo_for_uenum_51, &LeastA_12, SetA0_6, &SetA_13);
  if (succeeded)
  {
    MR_Word Var_37;

    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_37, 0) = LeastA_12;
      MR_hl_field(0, Var_37, 1) = ((MR_Box) (SetA_13));
    }
    {
      MaybeA_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeA_14, 0) = ((MR_Box) (Var_37));
    }
  }
  else
    MaybeA_14 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = mercury__sparse_bitset__remove_least_3_p_0(TypeClassInfo_for_uenum_51, &LeastB_15, SetB0_7, &SetB_16);
  if (succeeded)
  {
    MR_Word Var_38;

    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_38, 0) = LeastB_15;
      MR_hl_field(0, Var_38, 1) = ((MR_Box) (SetB_16));
    }
    {
      MaybeB_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeB_17, 0) = ((MR_Box) (Var_38));
    }
  }
  else
    MaybeB_17 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = mercury__fat_sparse_bitset__remove_least_3_p_0(TypeClassInfo_for_uenum_51, &LeastC_18, SetC0_8, &SetC_19);
  if (succeeded)
  {
    MR_Word Var_39;

    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_39, 0) = LeastC_18;
      MR_hl_field(0, Var_39, 1) = ((MR_Box) (SetC_19));
    }
    {
      MaybeC_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeC_20, 0) = ((MR_Box) (Var_39));
    }
  }
  else
    MaybeC_20 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = mercury__fatter_sparse_bitset__remove_least_3_p_0(TypeClassInfo_for_uenum_51, &LeastD_21, SetD0_9, &SetD_22);
  if (succeeded)
  {
    MR_Word Var_40;

    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_40, 0) = LeastD_21;
      MR_hl_field(0, Var_40, 1) = ((MR_Box) (SetD_22));
    }
    {
      MaybeD_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeD_23, 0) = ((MR_Box) (Var_40));
    }
  }
  else
    MaybeD_23 = (MR_Word) ((MR_Unsigned) 0U);
  Var_62 = (MR_Word) (SetS0_10);
  succeeded = (Var_62 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    LeastS_24 = (MR_hl_field(1, Var_62, (MR_Integer) 0));
    Var_63 = ((MR_Word) ((MR_hl_field(1, Var_62, (MR_Integer) 1))));
    SetS_25 = (MR_Word) (Var_63);
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Var_41;

    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_41, 0) = LeastS_24;
      MR_hl_field(0, Var_41, 1) = ((MR_Box) (SetS_25));
    }
    {
      MaybeS_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeS_26, 0) = ((MR_Box) (Var_41));
    }
  }
  else
    MaybeS_26 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = (MaybeA_14 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_42 = ((MR_Word) ((MR_hl_field(1, MaybeA_14, (MR_Integer) 0))));
    LA_27 = (MR_hl_field(0, Var_42, (MR_Integer) 0));
    SA_28 = ((MR_Word) ((MR_hl_field(0, Var_42, (MR_Integer) 1))));
    succeeded = (MaybeB_17 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_43 = ((MR_Word) ((MR_hl_field(1, MaybeB_17, (MR_Integer) 0))));
      LB_29 = (MR_hl_field(0, Var_43, (MR_Integer) 0));
      SB_30 = ((MR_Word) ((MR_hl_field(0, Var_43, (MR_Integer) 1))));
      succeeded = (MaybeC_20 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_44 = ((MR_Word) ((MR_hl_field(1, MaybeC_20, (MR_Integer) 0))));
        LC_31 = (MR_hl_field(0, Var_44, (MR_Integer) 0));
        SC_32 = ((MR_Word) ((MR_hl_field(0, Var_44, (MR_Integer) 1))));
        succeeded = (MaybeD_23 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_45 = ((MR_Word) ((MR_hl_field(1, MaybeD_23, (MR_Integer) 0))));
          LD_33 = (MR_hl_field(0, Var_45, (MR_Integer) 0));
          SD_34 = ((MR_Word) ((MR_hl_field(0, Var_45, (MR_Integer) 1))));
          succeeded = (MaybeS_26 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_46 = ((MR_Word) ((MR_hl_field(1, MaybeS_26, (MR_Integer) 0))));
            LS_35 = (MR_hl_field(0, Var_46, (MR_Integer) 0));
            SS_36 = ((MR_Word) ((MR_hl_field(0, Var_46, (MR_Integer) 1))));
            TypeInfoIndex_54 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__remove_least_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_51 ;
	Index = TypeInfoIndex_54 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_55_55  = TypeInfo;
}
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_55_55, LA_27, LS_35);
            if (succeeded)
            {
              TypeInfoIndex_56 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__remove_least_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_51 ;
	Index = TypeInfoIndex_56 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_57_57  = TypeInfo;
}
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_57_57, LB_29, LS_35);
              if (succeeded)
              {
                TypeInfoIndex_58 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__remove_least_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_51 ;
	Index = TypeInfoIndex_58 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_59_59  = TypeInfo;
}
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_59_59, LC_31, LS_35);
                if (succeeded)
                {
                  TypeInfoIndex_60 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__remove_least_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_51 ;
	Index = TypeInfoIndex_60 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_61_61  = TypeInfo;
}
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_61_61, LD_33, LS_35);
                }
              }
            }
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_48;

    *Least_4 = LS_35;
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_48, 0) = ((MR_Box) (SA_28));
      MR_hl_field(0, Var_48, 1) = ((MR_Box) (SB_30));
      MR_hl_field(0, Var_48, 2) = ((MR_Box) (SC_32));
      MR_hl_field(0, Var_48, 3) = ((MR_Box) (SD_34));
      MR_hl_field(0, Var_48, 4) = ((MR_Box) (SS_36));
    }
    mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_uenum_51, (MR_String) "remove_least", In_2, Var_48, Result_11);
    succeeded = MR_TRUE;
  }
  else
  {
    succeeded = (MaybeA_14 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (MaybeB_17 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (MaybeC_20 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (MaybeD_23 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = (MaybeS_26 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.remove_least\'/3", (MR_String) "failed");
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__test_bitset__remove_list_3_p_0(
  MR_Word TypeClassInfo_for_uenum_31,
  MR_Word Es_4,
  MR_Word In_2,
  MR_Word * Result_11)
{
  MR_bool succeeded;
  MR_Word SetA0_6 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 0))));
  MR_Word SetB0_7 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 1))));
  MR_Word SetC0_8 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 2))));
  MR_Word SetD0_9 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 3))));
  MR_Word SetS0_10 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 4))));
  MR_Word MaybeA_13;
  MR_Word MaybeB_15;
  MR_Word MaybeC_17;
  MR_Word MaybeD_19;
  MR_Word MaybeS_21;
  MR_Word SetA_12;
  MR_Word TypeInfo_10_36;
  MR_Word TypeInfo_11_37;
  MR_Word TypeInfo_8_40;
  MR_Word Var_34;
  MR_Word Var_38;
  MR_Integer Var_41;
  MR_Word Var_44;
  MR_Word SetB_14;
  MR_Word TypeInfo_10_49;
  MR_Word TypeInfo_10_54;
  MR_Word Var_47;
  MR_Word Var_52;
  MR_Word Var_61;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word SetC_16;
  MR_Word TypeInfo_10_72;
  MR_Word TypeInfo_10_77;
  MR_Word Var_70;
  MR_Word Var_75;
  MR_Word Var_84;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word SetD_18;
  MR_Word SetS_20;
  MR_Word TypeInfo_33_33;
  MR_Word A_22;
  MR_Word B_23;
  MR_Word C_24;
  MR_Word D_25;
  MR_Word S_26;

{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_31 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_8_40  = TypeInfo;
}
  mercury__list__length_acc_3_p_0(TypeInfo_8_40, Es_4, (MR_Integer) 0, &Var_41);
  mercury__list__merge_sort_3_p_0(TypeInfo_8_40, Var_41, Es_4, &Var_38);
  Var_34 = mercury__tree_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_uenum_31, Var_38);
{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_31 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_36  = TypeInfo;
}
  Var_44 = mercury__tree_bitset__intersect_2_f_0(TypeInfo_10_36, SetA0_6, Var_34);
  succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(TypeInfo_10_36, Var_34, Var_44);
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_31 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_11_37  = TypeInfo;
}
    SetA_12 = mercury__tree_bitset__difference_2_f_0(TypeInfo_11_37, SetA0_6, Var_34);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      MaybeA_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeA_13, 0) = ((MR_Box) (SetA_12));
    }
  else
    MaybeA_13 = (MR_Word) ((MR_Unsigned) 0U);
  mercury__sparse_bitset__list_to_set_get_runs_3_p_0(TypeClassInfo_for_uenum_31, Es_4, (MR_Word) ((MR_Unsigned) 0U), &Var_52);
{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_31 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_54  = TypeInfo;
}
  if ((Var_52 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_47 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
  {
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(1, Var_52, (MR_Integer) 0))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(1, Var_52, (MR_Integer) 1))));

    mercury__sparse_bitset__union_list_passes_3_p_0(TypeInfo_10_54, Var_56, Var_57, &Var_47);
  }
{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_31 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_49  = TypeInfo;
}
  Var_64 = (MR_Word) (SetB0_7);
  Var_65 = (MR_Word) (Var_47);
  mercury__sparse_bitset__intersect_loop_3_p_0(Var_64, Var_65, &Var_66);
  Var_61 = (MR_Word) (Var_66);
  succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(TypeInfo_10_49, Var_47, Var_61);
  if (succeeded)
  {
    Var_67 = (MR_Word) (SetB0_7);
    Var_68 = (MR_Word) (Var_47);
    mercury__sparse_bitset__difference_loop_3_p_0(Var_67, Var_68, &Var_69);
    SetB_14 = (MR_Word) (Var_69);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      MaybeB_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeB_15, 0) = ((MR_Box) (SetB_14));
    }
  else
    MaybeB_15 = (MR_Word) ((MR_Unsigned) 0U);
  mercury__fat_sparse_bitset__list_to_set_get_runs_3_p_0(TypeClassInfo_for_uenum_31, Es_4, (MR_Word) ((MR_Unsigned) 0U), &Var_75);
{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_31 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_77  = TypeInfo;
}
  if ((Var_75 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_70 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
  {
    MR_Word Var_79 = ((MR_Word) ((MR_hl_field(1, Var_75, (MR_Integer) 0))));
    MR_Word Var_80 = ((MR_Word) ((MR_hl_field(1, Var_75, (MR_Integer) 1))));

    mercury__fat_sparse_bitset__union_list_passes_3_p_0(TypeInfo_10_77, Var_79, Var_80, &Var_70);
  }
{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_31 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_72  = TypeInfo;
}
  Var_87 = (MR_Word) (SetC0_8);
  Var_88 = (MR_Word) (Var_70);
  mercury__fat_sparse_bitset__intersect_loop_3_p_0(Var_87, Var_88, &Var_89);
  Var_84 = (MR_Word) (Var_89);
  succeeded = mercury__fat_sparse_bitset____Unify____fat_sparse_bitset_1_0(TypeInfo_10_72, Var_70, Var_84);
  if (succeeded)
  {
    Var_90 = (MR_Word) (SetC0_8);
    Var_91 = (MR_Word) (Var_70);
    mercury__fat_sparse_bitset__difference_loop_3_p_0(Var_90, Var_91, &Var_92);
    SetC_16 = (MR_Word) (Var_92);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      MaybeC_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeC_17, 0) = ((MR_Box) (SetC_16));
    }
  else
    MaybeC_17 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = mercury__fatter_sparse_bitset__remove_list_3_p_0(TypeClassInfo_for_uenum_31, Es_4, SetD0_9, &SetD_18);
  if (succeeded)
    {
      MaybeD_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeD_19, 0) = ((MR_Box) (SetD_18));
    }
  else
    MaybeD_19 = (MR_Word) ((MR_Unsigned) 0U);
{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_31 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_33_33  = TypeInfo;
}
  succeeded = mercury__set_ordlist__remove_list_3_p_0(TypeInfo_33_33, Es_4, SetS0_10, &SetS_20);
  if (succeeded)
    {
      MaybeS_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeS_21, 0) = ((MR_Box) (SetS_20));
    }
  else
    MaybeS_21 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = (MaybeA_13 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    A_22 = ((MR_Word) ((MR_hl_field(1, MaybeA_13, (MR_Integer) 0))));
    succeeded = (MaybeB_15 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      B_23 = ((MR_Word) ((MR_hl_field(1, MaybeB_15, (MR_Integer) 0))));
      succeeded = (MaybeC_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        C_24 = ((MR_Word) ((MR_hl_field(1, MaybeC_17, (MR_Integer) 0))));
        succeeded = (MaybeD_19 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          D_25 = ((MR_Word) ((MR_hl_field(1, MaybeD_19, (MR_Integer) 0))));
          succeeded = (MaybeS_21 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            S_26 = ((MR_Word) ((MR_hl_field(1, MaybeS_21, (MR_Integer) 0))));
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_28;

    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (A_22));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) (B_23));
      MR_hl_field(0, Var_28, 2) = ((MR_Box) (C_24));
      MR_hl_field(0, Var_28, 3) = ((MR_Box) (D_25));
      MR_hl_field(0, Var_28, 4) = ((MR_Box) (S_26));
    }
    mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_uenum_31, (MR_String) "remove", In_2, Var_28, Result_11);
    succeeded = MR_TRUE;
  }
  else
  {
    succeeded = (MaybeA_13 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (MaybeB_15 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (MaybeC_17 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (MaybeD_19 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = (MaybeS_21 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.remove_list\'/3", (MR_String) "failed");
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__test_bitset__remove_3_p_0(
  MR_Word TypeClassInfo_for_uenum_31,
  MR_Box E_4,
  MR_Word In_2,
  MR_Word * Result_11)
{
  MR_bool succeeded;
  MR_Word SetA0_6 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 0))));
  MR_Word SetB0_7 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 1))));
  MR_Word SetC0_8 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 2))));
  MR_Word SetD0_9 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 3))));
  MR_Word SetS0_10 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 4))));
  MR_Word MaybeA_13;
  MR_Word MaybeB_15;
  MR_Word MaybeC_17;
  MR_Word MaybeD_19;
  MR_Word MaybeS_21;
  MR_Word SetA_12;
  MR_Word SetB_14;
  MR_Word Var_37;
  MR_Unsigned Var_38;
  MR_Unsigned Var_39;
  MR_Unsigned Var_40;
  MR_Unsigned Var_41;
  MR_Unsigned Var_42;
  MR_Unsigned Var_44;
  MR_Word Var_45;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Unsigned Var_51;
  MR_Unsigned Var_52;
  MR_Unsigned Var_53;
  MR_Unsigned Var_54;
  MR_Unsigned Var_55;
  MR_Unsigned Var_56;
  MR_Unsigned Var_57;
  MR_Word Var_58;
  MR_Word Var_60;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_38;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
  MR_Box conv3_Var_51;
  MR_Word SetC_16;
  MR_Word Var_64;
  MR_Unsigned Var_65;
  MR_Unsigned Var_66;
  MR_Unsigned Var_67;
  MR_Unsigned Var_68;
  MR_Unsigned Var_69;
  MR_Unsigned Var_71;
  MR_Word Var_72;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Unsigned Var_78;
  MR_Unsigned Var_79;
  MR_Unsigned Var_80;
  MR_Unsigned Var_81;
  MR_Unsigned Var_82;
  MR_Unsigned Var_83;
  MR_Unsigned Var_84;
  MR_Word Var_85;
  MR_Word Var_87;
  MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);
  MR_Box conv5_Var_65;
  MR_Box MR_CALL (* func_6)(MR_Box, MR_Box);
  MR_Box conv7_Var_78;
  MR_Word SetD_18;
  MR_Word SetS_20;
  MR_Word TypeInfo_33_33;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word A_22;
  MR_Word B_23;
  MR_Word C_24;
  MR_Word D_25;
  MR_Word S_26;

  succeeded = mercury__tree_bitset__contains_2_p_0(TypeClassInfo_for_uenum_31, SetA0_6, E_4);
  if (succeeded)
  {
    SetA_12 = mercury__tree_bitset__delete_2_f_0(TypeClassInfo_for_uenum_31, SetA0_6, E_4);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      MaybeA_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeA_13, 0) = ((MR_Box) (SetA_12));
    }
  else
    MaybeA_13 = (MR_Word) ((MR_Unsigned) 0U);
  Var_37 = (MR_Word) (SetB0_7);
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_31, (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_38 = func_0(((MR_Box) (TypeClassInfo_for_uenum_31)), E_4);
  Var_38 = ((MR_Unsigned) (conv1_Var_38));
{
#define MR_PROC_LABEL mercury__test_bitset__remove_3_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_42  = Bits;
}
  Var_41 = (Var_42 - (MR_Unsigned) 1U);
  Var_44 = ~(Var_41);
  Var_39 = (Var_38 & Var_44);
  Var_40 = (Var_38 & Var_41);
  succeeded = mercury__sparse_bitset__contains_search_nodes_3_p_0(Var_37, Var_39, Var_40);
  if (succeeded)
  {
    Var_45 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
    Var_49 = (MR_Word) (Var_45);
    func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_31, (MR_Integer) 0)), (MR_Integer) 5))));
    conv3_Var_51 = func_2(((MR_Box) (TypeClassInfo_for_uenum_31)), E_4);
    Var_51 = ((MR_Unsigned) (conv3_Var_51));
{
#define MR_PROC_LABEL mercury__test_bitset__remove_3_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_55  = Bits;
}
    Var_56 = (MR_Unsigned) 1U;
    Var_54 = (Var_55 - Var_56);
    Var_57 = ~(Var_54);
    Var_52 = (Var_51 & Var_57);
    Var_53 = (Var_51 & Var_54);
    mercury__sparse_bitset__insert_loop_4_p_0(Var_52, Var_53, Var_49, &Var_50);
    Var_58 = (MR_Word) (SetB0_7);
    mercury__sparse_bitset__difference_loop_3_p_0(Var_58, Var_50, &Var_60);
    SetB_14 = (MR_Word) (Var_60);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      MaybeB_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeB_15, 0) = ((MR_Box) (SetB_14));
    }
  else
    MaybeB_15 = (MR_Word) ((MR_Unsigned) 0U);
  Var_64 = (MR_Word) (SetC0_8);
  func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_31, (MR_Integer) 0)), (MR_Integer) 5))));
  conv5_Var_65 = func_4(((MR_Box) (TypeClassInfo_for_uenum_31)), E_4);
  Var_65 = ((MR_Unsigned) (conv5_Var_65));
{
#define MR_PROC_LABEL mercury__test_bitset__remove_3_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_69  = Bits;
}
  Var_68 = (Var_69 - (MR_Unsigned) 1U);
  Var_71 = ~(Var_68);
  Var_66 = (Var_65 & Var_71);
  Var_67 = (Var_65 & Var_68);
  succeeded = mercury__fat_sparse_bitset__contains_search_nodes_3_p_0(Var_64, Var_66, Var_67);
  if (succeeded)
  {
    Var_72 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
    Var_76 = (MR_Word) (Var_72);
    func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_31, (MR_Integer) 0)), (MR_Integer) 5))));
    conv7_Var_78 = func_6(((MR_Box) (TypeClassInfo_for_uenum_31)), E_4);
    Var_78 = ((MR_Unsigned) (conv7_Var_78));
{
#define MR_PROC_LABEL mercury__test_bitset__remove_3_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_82  = Bits;
}
    Var_83 = (MR_Unsigned) 1U;
    Var_81 = (Var_82 - Var_83);
    Var_84 = ~(Var_81);
    Var_79 = (Var_78 & Var_84);
    Var_80 = (Var_78 & Var_81);
    mercury__fat_sparse_bitset__insert_loop_4_p_0(Var_79, Var_80, Var_76, &Var_77);
    Var_85 = (MR_Word) (SetC0_8);
    mercury__fat_sparse_bitset__difference_loop_3_p_0(Var_85, Var_77, &Var_87);
    SetC_16 = (MR_Word) (Var_87);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      MaybeC_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeC_17, 0) = ((MR_Box) (SetC_16));
    }
  else
    MaybeC_17 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = mercury__fatter_sparse_bitset__remove_3_p_0(TypeClassInfo_for_uenum_31, E_4, SetD0_9, &SetD_18);
  if (succeeded)
    {
      MaybeD_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeD_19, 0) = ((MR_Box) (SetD_18));
    }
  else
    MaybeD_19 = (MR_Word) ((MR_Unsigned) 0U);
{
#define MR_PROC_LABEL mercury__test_bitset__remove_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_31 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_33_33  = TypeInfo;
}
  Var_88 = (MR_Word) (SetS0_10);
  succeeded = mercury__list__delete_first_3_p_0(TypeInfo_33_33, Var_88, E_4, &Var_89);
  if (succeeded)
  {
    SetS_20 = (MR_Word) (Var_89);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      MaybeS_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeS_21, 0) = ((MR_Box) (SetS_20));
    }
  else
    MaybeS_21 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = (MaybeA_13 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    A_22 = ((MR_Word) ((MR_hl_field(1, MaybeA_13, (MR_Integer) 0))));
    succeeded = (MaybeB_15 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      B_23 = ((MR_Word) ((MR_hl_field(1, MaybeB_15, (MR_Integer) 0))));
      succeeded = (MaybeC_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        C_24 = ((MR_Word) ((MR_hl_field(1, MaybeC_17, (MR_Integer) 0))));
        succeeded = (MaybeD_19 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          D_25 = ((MR_Word) ((MR_hl_field(1, MaybeD_19, (MR_Integer) 0))));
          succeeded = (MaybeS_21 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            S_26 = ((MR_Word) ((MR_hl_field(1, MaybeS_21, (MR_Integer) 0))));
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_28;

    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (A_22));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) (B_23));
      MR_hl_field(0, Var_28, 2) = ((MR_Box) (C_24));
      MR_hl_field(0, Var_28, 3) = ((MR_Box) (D_25));
      MR_hl_field(0, Var_28, 4) = ((MR_Box) (S_26));
    }
    mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_uenum_31, (MR_String) "remove", In_2, Var_28, Result_11);
    succeeded = MR_TRUE;
  }
  else
  {
    succeeded = (MaybeA_13 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (MaybeB_15 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (MaybeC_17 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (MaybeD_19 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = (MaybeS_21 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.remove\'/3", (MR_String) "failed");
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__test_bitset__delete_list_3_p_0(
  MR_Word TypeClassInfo_for_uenum_19,
  MR_Word Es_4,
  MR_Word In_2,
  MR_Word * Result_11)
{
  MR_Word TypeInfo_21_21;
  MR_Word TypeInfo_10_24;
  MR_Word TypeInfo_8_27;
  MR_Word TypeInfo_10_36;
  MR_Word TypeInfo_10_51;
  MR_Word TypeInfo_10_66;
  MR_Word SetA0_6 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 0))));
  MR_Word SetB0_7 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 1))));
  MR_Word SetC0_8 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 2))));
  MR_Word SetD0_9 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 3))));
  MR_Word SetS0_10 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 4))));
  MR_Word SetA_12;
  MR_Word SetB_13;
  MR_Word SetC_14;
  MR_Word SetD_15;
  MR_Word SetS_16;
  MR_Word Var_18;
  MR_Word Var_22;
  MR_Word Var_25;
  MR_Integer Var_28;
  MR_Word Var_30;
  MR_Word Var_34;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_49;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_64;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Integer Var_77;
  MR_Word Var_79;
  MR_Word Var_81;

{
#define MR_PROC_LABEL mercury__test_bitset__delete_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_19 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_24  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__test_bitset__delete_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_19 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_8_27  = TypeInfo;
}
  mercury__list__length_acc_3_p_0(TypeInfo_8_27, Es_4, (MR_Integer) 0, &Var_28);
  mercury__list__merge_sort_3_p_0(TypeInfo_8_27, Var_28, Es_4, &Var_25);
  Var_22 = mercury__tree_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_uenum_19, Var_25);
  SetA_12 = mercury__tree_bitset__difference_2_f_0(TypeInfo_10_24, SetA0_6, Var_22);
  mercury__sparse_bitset__list_to_set_get_runs_3_p_0(TypeClassInfo_for_uenum_19, Es_4, (MR_Word) ((MR_Unsigned) 0U), &Var_34);
{
#define MR_PROC_LABEL mercury__test_bitset__delete_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_19 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_36  = TypeInfo;
}
  if ((Var_34 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_30 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
  {
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(1, Var_34, (MR_Integer) 0))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(1, Var_34, (MR_Integer) 1))));

    mercury__sparse_bitset__union_list_passes_3_p_0(TypeInfo_10_36, Var_38, Var_39, &Var_30);
  }
  Var_42 = (MR_Word) (SetB0_7);
  Var_43 = (MR_Word) (Var_30);
  mercury__sparse_bitset__difference_loop_3_p_0(Var_42, Var_43, &Var_44);
  SetB_13 = (MR_Word) (Var_44);
  mercury__fat_sparse_bitset__list_to_set_get_runs_3_p_0(TypeClassInfo_for_uenum_19, Es_4, (MR_Word) ((MR_Unsigned) 0U), &Var_49);
{
#define MR_PROC_LABEL mercury__test_bitset__delete_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_19 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_51  = TypeInfo;
}
  if ((Var_49 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_45 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
  {
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(1, Var_49, (MR_Integer) 0))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(1, Var_49, (MR_Integer) 1))));

    mercury__fat_sparse_bitset__union_list_passes_3_p_0(TypeInfo_10_51, Var_53, Var_54, &Var_45);
  }
  Var_57 = (MR_Word) (SetC0_8);
  Var_58 = (MR_Word) (Var_45);
  mercury__fat_sparse_bitset__difference_loop_3_p_0(Var_57, Var_58, &Var_59);
  SetC_14 = (MR_Word) (Var_59);
  mercury__fatter_sparse_bitset__list_to_set_get_runs_3_p_0(TypeClassInfo_for_uenum_19, Es_4, (MR_Word) ((MR_Unsigned) 0U), &Var_64);
{
#define MR_PROC_LABEL mercury__test_bitset__delete_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_19 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_66  = TypeInfo;
}
  if ((Var_64 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_60 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
  {
    MR_Word Var_68 = ((MR_Word) ((MR_hl_field(1, Var_64, (MR_Integer) 0))));
    MR_Word Var_69 = ((MR_Word) ((MR_hl_field(1, Var_64, (MR_Integer) 1))));

    mercury__fatter_sparse_bitset__union_list_passes_3_p_0(TypeInfo_10_66, Var_68, Var_69, &Var_60);
  }
  Var_72 = (MR_Word) (SetD0_9);
  Var_73 = (MR_Word) (Var_60);
  mercury__fatter_sparse_bitset__difference_loop_3_p_0(Var_72, Var_73, &Var_74);
  SetD_15 = (MR_Word) (Var_74);
{
#define MR_PROC_LABEL mercury__test_bitset__delete_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_19 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_21_21  = TypeInfo;
}
  mercury__list__length_acc_3_p_0(TypeInfo_21_21, Es_4, (MR_Integer) 0, &Var_77);
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_21_21, Var_77, Es_4, &Var_75);
  Var_79 = (MR_Word) (SetS0_10);
  mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_21_21, Var_79, Var_75, &Var_81);
  SetS_16 = (MR_Word) (Var_81);
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (SetA_12));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (SetB_13));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) (SetC_14));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (SetD_15));
    MR_hl_field(0, Var_18, 4) = ((MR_Box) (SetS_16));
  }
  mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_uenum_19, (MR_String) "delete_list", In_2, Var_18, Result_11);
}

void MR_CALL 
mercury__test_bitset__delete_3_p_0(
  MR_Word TypeClassInfo_for_uenum_19,
  MR_Box E_4,
  MR_Word In_2,
  MR_Word * Result_11)
{
  MR_Word TypeInfo_21_21;
  MR_Word SetA0_6 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 0))));
  MR_Word SetB0_7 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 1))));
  MR_Word SetC0_8 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 2))));
  MR_Word SetD0_9 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 3))));
  MR_Word SetS0_10 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 4))));
  MR_Word SetA_12;
  MR_Word SetB_13;
  MR_Word SetC_14;
  MR_Word SetD_15;
  MR_Word SetS_16;
  MR_Word Var_18;
  MR_Word Var_30;
  MR_Unsigned Var_31;
  MR_Unsigned Var_32;
  MR_Unsigned Var_33;
  MR_Unsigned Var_34;
  MR_Unsigned Var_35;
  MR_Unsigned Var_37;
  MR_Word Var_38;
  MR_Word Var_40;
  MR_Word Var_49;
  MR_Unsigned Var_50;
  MR_Unsigned Var_51;
  MR_Unsigned Var_52;
  MR_Unsigned Var_53;
  MR_Unsigned Var_54;
  MR_Unsigned Var_56;
  MR_Word Var_57;
  MR_Word Var_59;
  MR_Word Var_68;
  MR_Unsigned Var_69;
  MR_Unsigned Var_70;
  MR_Unsigned Var_71;
  MR_Unsigned Var_72;
  MR_Unsigned Var_73;
  MR_Unsigned Var_75;
  MR_Unsigned Var_77;
  MR_Word Var_78;
  MR_Word Var_80;
  MR_Word Var_82;
  MR_Word Var_84;
  MR_Word Var_86;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_31;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
  MR_Box conv3_Var_50;
  MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);
  MR_Box conv5_Var_69;

  SetA_12 = mercury__tree_bitset__delete_2_f_0(TypeClassInfo_for_uenum_19, SetA0_6, E_4);
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_19, (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_31 = func_0(((MR_Box) (TypeClassInfo_for_uenum_19)), E_4);
  Var_31 = ((MR_Unsigned) (conv1_Var_31));
{
#define MR_PROC_LABEL mercury__test_bitset__delete_3_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_35  = Bits;
}
  Var_34 = (Var_35 - (MR_Unsigned) 1U);
  Var_37 = ~(Var_34);
  Var_32 = (Var_31 & Var_37);
  Var_33 = (Var_31 & Var_34);
  mercury__sparse_bitset__insert_loop_4_p_0(Var_32, Var_33, (MR_Word) ((MR_Word) (((MR_Box) ((MR_Unsigned) 0U)))), &Var_30);
  Var_38 = (MR_Word) (SetB0_7);
  mercury__sparse_bitset__difference_loop_3_p_0(Var_38, Var_30, &Var_40);
  SetB_13 = (MR_Word) (Var_40);
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_19, (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_50 = func_2(((MR_Box) (TypeClassInfo_for_uenum_19)), E_4);
  Var_50 = ((MR_Unsigned) (conv3_Var_50));
{
#define MR_PROC_LABEL mercury__test_bitset__delete_3_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_54  = Bits;
}
  Var_53 = (Var_54 - (MR_Unsigned) 1U);
  Var_56 = ~(Var_53);
  Var_51 = (Var_50 & Var_56);
  Var_52 = (Var_50 & Var_53);
  mercury__fat_sparse_bitset__insert_loop_4_p_0(Var_51, Var_52, (MR_Word) ((MR_Word) (((MR_Box) ((MR_Unsigned) 0U)))), &Var_49);
  Var_57 = (MR_Word) (SetC0_8);
  mercury__fat_sparse_bitset__difference_loop_3_p_0(Var_57, Var_49, &Var_59);
  SetC_14 = (MR_Word) (Var_59);
  func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_19, (MR_Integer) 0)), (MR_Integer) 5))));
  conv5_Var_69 = func_4(((MR_Box) (TypeClassInfo_for_uenum_19)), E_4);
  Var_69 = ((MR_Unsigned) (conv5_Var_69));
{
#define MR_PROC_LABEL mercury__test_bitset__delete_3_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_75  = Bits;
}
  Var_73 = (Var_75 << 1);
  Var_72 = (Var_73 - (MR_Unsigned) 1U);
  Var_77 = ~(Var_72);
  Var_70 = (Var_69 & Var_77);
  Var_71 = (Var_69 & Var_72);
  mercury__fatter_sparse_bitset__insert_loop_4_p_0(Var_70, Var_71, (MR_Word) ((MR_Word) (((MR_Box) ((MR_Unsigned) 0U)))), &Var_68);
  Var_78 = (MR_Word) (SetD0_9);
  mercury__fatter_sparse_bitset__difference_loop_3_p_0(Var_78, Var_68, &Var_80);
  SetD_15 = (MR_Word) (Var_80);
{
#define MR_PROC_LABEL mercury__test_bitset__delete_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_19 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_21_21  = TypeInfo;
}
  {
    Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_82, 0) = E_4;
    MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_84 = (MR_Word) (SetS0_10);
  mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_21_21, Var_84, Var_82, &Var_86);
  SetS_16 = (MR_Word) (Var_86);
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (SetA_12));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (SetB_13));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) (SetC_14));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (SetD_15));
    MR_hl_field(0, Var_18, 4) = ((MR_Box) (SetS_16));
  }
  mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_uenum_19, (MR_String) "delete", In_2, Var_18, Result_11);
}

void MR_CALL 
mercury__test_bitset__insert_list_3_p_0(
  MR_Word TypeClassInfo_for_uenum_19,
  MR_Word Es_4,
  MR_Word In_2,
  MR_Word * Result_11)
{
  MR_Word TypeInfo_21_21;
  MR_Word TypeInfo_10_24;
  MR_Word TypeInfo_8_27;
  MR_Word TypeInfo_10_36;
  MR_Word TypeInfo_10_51;
  MR_Word TypeInfo_10_66;
  MR_Word SetA0_6 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 0))));
  MR_Word SetB0_7 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 1))));
  MR_Word SetC0_8 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 2))));
  MR_Word SetD0_9 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 3))));
  MR_Word SetS0_10 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 4))));
  MR_Word SetA_12;
  MR_Word SetB_13;
  MR_Word SetC_14;
  MR_Word SetD_15;
  MR_Word SetS_16;
  MR_Word Var_18;
  MR_Word Var_22;
  MR_Word Var_25;
  MR_Integer Var_28;
  MR_Word Var_30;
  MR_Word Var_34;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_49;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_64;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Integer Var_77;
  MR_Word Var_80;
  MR_Word Var_81;

{
#define MR_PROC_LABEL mercury__test_bitset__insert_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_19 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_24  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__test_bitset__insert_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_19 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_8_27  = TypeInfo;
}
  mercury__list__length_acc_3_p_0(TypeInfo_8_27, Es_4, (MR_Integer) 0, &Var_28);
  mercury__list__merge_sort_3_p_0(TypeInfo_8_27, Var_28, Es_4, &Var_25);
  Var_22 = mercury__tree_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_uenum_19, Var_25);
  SetA_12 = mercury__tree_bitset__union_2_f_0(TypeInfo_10_24, Var_22, SetA0_6);
  mercury__sparse_bitset__list_to_set_get_runs_3_p_0(TypeClassInfo_for_uenum_19, Es_4, (MR_Word) ((MR_Unsigned) 0U), &Var_34);
{
#define MR_PROC_LABEL mercury__test_bitset__insert_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_19 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_36  = TypeInfo;
}
  if ((Var_34 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_30 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
  {
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(1, Var_34, (MR_Integer) 0))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(1, Var_34, (MR_Integer) 1))));

    mercury__sparse_bitset__union_list_passes_3_p_0(TypeInfo_10_36, Var_38, Var_39, &Var_30);
  }
  Var_42 = (MR_Word) (Var_30);
  Var_43 = (MR_Word) (SetB0_7);
  mercury__sparse_bitset__union_loop_3_p_0(Var_42, Var_43, &Var_44);
  SetB_13 = (MR_Word) (Var_44);
  mercury__fat_sparse_bitset__list_to_set_get_runs_3_p_0(TypeClassInfo_for_uenum_19, Es_4, (MR_Word) ((MR_Unsigned) 0U), &Var_49);
{
#define MR_PROC_LABEL mercury__test_bitset__insert_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_19 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_51  = TypeInfo;
}
  if ((Var_49 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_45 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
  {
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(1, Var_49, (MR_Integer) 0))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(1, Var_49, (MR_Integer) 1))));

    mercury__fat_sparse_bitset__union_list_passes_3_p_0(TypeInfo_10_51, Var_53, Var_54, &Var_45);
  }
  Var_57 = (MR_Word) (Var_45);
  Var_58 = (MR_Word) (SetC0_8);
  mercury__fat_sparse_bitset__union_loop_3_p_0(Var_57, Var_58, &Var_59);
  SetC_14 = (MR_Word) (Var_59);
  mercury__fatter_sparse_bitset__list_to_set_get_runs_3_p_0(TypeClassInfo_for_uenum_19, Es_4, (MR_Word) ((MR_Unsigned) 0U), &Var_64);
{
#define MR_PROC_LABEL mercury__test_bitset__insert_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_19 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_66  = TypeInfo;
}
  if ((Var_64 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_60 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
  {
    MR_Word Var_68 = ((MR_Word) ((MR_hl_field(1, Var_64, (MR_Integer) 0))));
    MR_Word Var_69 = ((MR_Word) ((MR_hl_field(1, Var_64, (MR_Integer) 1))));

    mercury__fatter_sparse_bitset__union_list_passes_3_p_0(TypeInfo_10_66, Var_68, Var_69, &Var_60);
  }
  Var_72 = (MR_Word) (Var_60);
  Var_73 = (MR_Word) (SetD0_9);
  mercury__fatter_sparse_bitset__union_loop_3_p_0(Var_72, Var_73, &Var_74);
  SetD_15 = (MR_Word) (Var_74);
{
#define MR_PROC_LABEL mercury__test_bitset__insert_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_19 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_21_21  = TypeInfo;
}
  mercury__list__length_acc_3_p_0(TypeInfo_21_21, Es_4, (MR_Integer) 0, &Var_77);
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_21_21, Var_77, Es_4, &Var_75);
  Var_80 = (MR_Word) (SetS0_10);
  mercury__list__merge_and_remove_dups_3_p_0(TypeInfo_21_21, Var_75, Var_80, &Var_81);
  SetS_16 = (MR_Word) (Var_81);
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (SetA_12));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (SetB_13));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) (SetC_14));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (SetD_15));
    MR_hl_field(0, Var_18, 4) = ((MR_Box) (SetS_16));
  }
  mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_uenum_19, (MR_String) "insert_list", In_2, Var_18, Result_11);
}

MR_bool MR_CALL 
mercury__test_bitset__insert_new_3_p_0(
  MR_Word TypeClassInfo_for_uenum_31,
  MR_Box E_4,
  MR_Word In_2,
  MR_Word * Result_11)
{
  MR_bool succeeded;
  MR_Word SetA0_6 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 0))));
  MR_Word SetB0_7 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 1))));
  MR_Word SetC0_8 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 2))));
  MR_Word SetD0_9 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 3))));
  MR_Word SetS0_10 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 4))));
  MR_Word MaybeA_13;
  MR_Word MaybeB_15;
  MR_Word MaybeC_17;
  MR_Word MaybeD_19;
  MR_Word MaybeS_21;
  MR_Word SetA_12;
  MR_Word SetB_14;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Unsigned Var_36;
  MR_Unsigned Var_37;
  MR_Unsigned Var_38;
  MR_Unsigned Var_39;
  MR_Unsigned Var_40;
  MR_Unsigned Var_42;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_36;
  MR_Word SetC_16;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Unsigned Var_45;
  MR_Unsigned Var_46;
  MR_Unsigned Var_47;
  MR_Unsigned Var_48;
  MR_Unsigned Var_49;
  MR_Unsigned Var_51;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
  MR_Box conv3_Var_45;
  MR_Word SetD_18;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Unsigned Var_54;
  MR_Unsigned Var_55;
  MR_Unsigned Var_56;
  MR_Unsigned Var_57;
  MR_Unsigned Var_58;
  MR_Unsigned Var_60;
  MR_Unsigned Var_62;
  MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);
  MR_Box conv5_Var_54;
  MR_Word SetS_20;
  MR_Word TypeInfo_33_33;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word A_22;
  MR_Word B_23;
  MR_Word C_24;
  MR_Word D_25;
  MR_Word S_26;

  succeeded = mercury__tree_bitset__insert_new_3_p_0(TypeClassInfo_for_uenum_31, E_4, SetA0_6, &SetA_12);
  if (succeeded)
    {
      MaybeA_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeA_13, 0) = ((MR_Box) (SetA_12));
    }
  else
    MaybeA_13 = (MR_Word) ((MR_Unsigned) 0U);
  Var_34 = (MR_Word) (SetB0_7);
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_31, (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_36 = func_0(((MR_Box) (TypeClassInfo_for_uenum_31)), E_4);
  Var_36 = ((MR_Unsigned) (conv1_Var_36));
{
#define MR_PROC_LABEL mercury__test_bitset__insert_new_3_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_40  = Bits;
}
  Var_39 = (Var_40 - (MR_Unsigned) 1U);
  Var_42 = ~(Var_39);
  Var_37 = (Var_36 & Var_42);
  Var_38 = (Var_36 & Var_39);
  succeeded = mercury__sparse_bitset__insert_new_loop_4_p_0(Var_37, Var_38, Var_34, &Var_35);
  if (succeeded)
  {
    SetB_14 = (MR_Word) (Var_35);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      MaybeB_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeB_15, 0) = ((MR_Box) (SetB_14));
    }
  else
    MaybeB_15 = (MR_Word) ((MR_Unsigned) 0U);
  Var_43 = (MR_Word) (SetC0_8);
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_31, (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_45 = func_2(((MR_Box) (TypeClassInfo_for_uenum_31)), E_4);
  Var_45 = ((MR_Unsigned) (conv3_Var_45));
{
#define MR_PROC_LABEL mercury__test_bitset__insert_new_3_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_49  = Bits;
}
  Var_48 = (Var_49 - (MR_Unsigned) 1U);
  Var_51 = ~(Var_48);
  Var_46 = (Var_45 & Var_51);
  Var_47 = (Var_45 & Var_48);
  succeeded = mercury__fat_sparse_bitset__insert_new_loop_4_p_0(Var_46, Var_47, Var_43, &Var_44);
  if (succeeded)
  {
    SetC_16 = (MR_Word) (Var_44);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      MaybeC_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeC_17, 0) = ((MR_Box) (SetC_16));
    }
  else
    MaybeC_17 = (MR_Word) ((MR_Unsigned) 0U);
  Var_52 = (MR_Word) (SetD0_9);
  func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_31, (MR_Integer) 0)), (MR_Integer) 5))));
  conv5_Var_54 = func_4(((MR_Box) (TypeClassInfo_for_uenum_31)), E_4);
  Var_54 = ((MR_Unsigned) (conv5_Var_54));
{
#define MR_PROC_LABEL mercury__test_bitset__insert_new_3_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_60  = Bits;
}
  Var_58 = (Var_60 << 1);
  Var_57 = (Var_58 - (MR_Unsigned) 1U);
  Var_62 = ~(Var_57);
  Var_55 = (Var_54 & Var_62);
  Var_56 = (Var_54 & Var_57);
  succeeded = mercury__fatter_sparse_bitset__insert_new_loop_4_p_0(Var_55, Var_56, Var_52, &Var_53);
  if (succeeded)
  {
    SetD_18 = (MR_Word) (Var_53);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      MaybeD_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeD_19, 0) = ((MR_Box) (SetD_18));
    }
  else
    MaybeD_19 = (MR_Word) ((MR_Unsigned) 0U);
{
#define MR_PROC_LABEL mercury__test_bitset__insert_new_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_31 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_33_33  = TypeInfo;
}
  Var_63 = (MR_Word) (SetS0_10);
  succeeded = mercury__set_ordlist__insert_new_loop_3_p_0(TypeInfo_33_33, Var_63, E_4, &Var_64);
  if (succeeded)
  {
    SetS_20 = (MR_Word) (Var_64);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      MaybeS_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeS_21, 0) = ((MR_Box) (SetS_20));
    }
  else
    MaybeS_21 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = (MaybeA_13 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    A_22 = ((MR_Word) ((MR_hl_field(1, MaybeA_13, (MR_Integer) 0))));
    succeeded = (MaybeB_15 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      B_23 = ((MR_Word) ((MR_hl_field(1, MaybeB_15, (MR_Integer) 0))));
      succeeded = (MaybeC_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        C_24 = ((MR_Word) ((MR_hl_field(1, MaybeC_17, (MR_Integer) 0))));
        succeeded = (MaybeD_19 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          D_25 = ((MR_Word) ((MR_hl_field(1, MaybeD_19, (MR_Integer) 0))));
          succeeded = (MaybeS_21 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            S_26 = ((MR_Word) ((MR_hl_field(1, MaybeS_21, (MR_Integer) 0))));
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_28;

    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (A_22));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) (B_23));
      MR_hl_field(0, Var_28, 2) = ((MR_Box) (C_24));
      MR_hl_field(0, Var_28, 3) = ((MR_Box) (D_25));
      MR_hl_field(0, Var_28, 4) = ((MR_Box) (S_26));
    }
    mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_uenum_31, (MR_String) "insert_new", In_2, Var_28, Result_11);
    succeeded = MR_TRUE;
  }
  else
  {
    succeeded = (MaybeA_13 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (MaybeB_15 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (MaybeC_17 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (MaybeD_19 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = (MaybeS_21 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.insert_new\'/3", (MR_String) "failed");
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__test_bitset__insert_3_p_0(
  MR_Word TypeClassInfo_for_uenum_19,
  MR_Box E_4,
  MR_Word In_2,
  MR_Word * Result_11)
{
  MR_Word TypeInfo_21_21;
  MR_Word SetA0_6 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 0))));
  MR_Word SetB0_7 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 1))));
  MR_Word SetC0_8 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 2))));
  MR_Word SetD0_9 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 3))));
  MR_Word SetS0_10 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 4))));
  MR_Word SetA_12;
  MR_Word SetB_13;
  MR_Word SetC_14;
  MR_Word SetD_15;
  MR_Word SetS_16;
  MR_Word Var_18;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Unsigned Var_24;
  MR_Unsigned Var_25;
  MR_Unsigned Var_26;
  MR_Unsigned Var_27;
  MR_Unsigned Var_28;
  MR_Unsigned Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Unsigned Var_33;
  MR_Unsigned Var_34;
  MR_Unsigned Var_35;
  MR_Unsigned Var_36;
  MR_Unsigned Var_37;
  MR_Unsigned Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Unsigned Var_42;
  MR_Unsigned Var_43;
  MR_Unsigned Var_44;
  MR_Unsigned Var_45;
  MR_Unsigned Var_46;
  MR_Unsigned Var_48;
  MR_Unsigned Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_24;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
  MR_Box conv3_Var_33;
  MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);
  MR_Box conv5_Var_42;

  SetA_12 = mercury__tree_bitset__insert_2_f_0(TypeClassInfo_for_uenum_19, SetA0_6, E_4);
  Var_22 = (MR_Word) (SetB0_7);
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_19, (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_24 = func_0(((MR_Box) (TypeClassInfo_for_uenum_19)), E_4);
  Var_24 = ((MR_Unsigned) (conv1_Var_24));
{
#define MR_PROC_LABEL mercury__test_bitset__insert_3_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_28  = Bits;
}
  Var_27 = (Var_28 - (MR_Unsigned) 1U);
  Var_30 = ~(Var_27);
  Var_25 = (Var_24 & Var_30);
  Var_26 = (Var_24 & Var_27);
  mercury__sparse_bitset__insert_loop_4_p_0(Var_25, Var_26, Var_22, &Var_23);
  SetB_13 = (MR_Word) (Var_23);
  Var_31 = (MR_Word) (SetC0_8);
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_19, (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_33 = func_2(((MR_Box) (TypeClassInfo_for_uenum_19)), E_4);
  Var_33 = ((MR_Unsigned) (conv3_Var_33));
{
#define MR_PROC_LABEL mercury__test_bitset__insert_3_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_37  = Bits;
}
  Var_36 = (Var_37 - (MR_Unsigned) 1U);
  Var_39 = ~(Var_36);
  Var_34 = (Var_33 & Var_39);
  Var_35 = (Var_33 & Var_36);
  mercury__fat_sparse_bitset__insert_loop_4_p_0(Var_34, Var_35, Var_31, &Var_32);
  SetC_14 = (MR_Word) (Var_32);
  Var_40 = (MR_Word) (SetD0_9);
  func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_19, (MR_Integer) 0)), (MR_Integer) 5))));
  conv5_Var_42 = func_4(((MR_Box) (TypeClassInfo_for_uenum_19)), E_4);
  Var_42 = ((MR_Unsigned) (conv5_Var_42));
{
#define MR_PROC_LABEL mercury__test_bitset__insert_3_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_48  = Bits;
}
  Var_46 = (Var_48 << 1);
  Var_45 = (Var_46 - (MR_Unsigned) 1U);
  Var_50 = ~(Var_45);
  Var_43 = (Var_42 & Var_50);
  Var_44 = (Var_42 & Var_45);
  mercury__fatter_sparse_bitset__insert_loop_4_p_0(Var_43, Var_44, Var_40, &Var_41);
  SetD_15 = (MR_Word) (Var_41);
{
#define MR_PROC_LABEL mercury__test_bitset__insert_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_19 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_21_21  = TypeInfo;
}
  Var_51 = (MR_Word) (SetS0_10);
  mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_21_21, Var_51, E_4, &Var_52);
  SetS_16 = (MR_Word) (Var_52);
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (SetA_12));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (SetB_13));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) (SetC_14));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (SetD_15));
    MR_hl_field(0, Var_18, 4) = ((MR_Box) (SetS_16));
  }
  mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_uenum_19, (MR_String) "insert", In_2, Var_18, Result_11);
}

static void MR_CALL 
mercury__test_bitset__check1_4_p_0(
  MR_Word TypeClassInfo_for_uenum_30,
  MR_String Op_5,
  MR_Word TestIn_6,
  MR_Word TestOut_7,
  MR_Word * Result_8)
{
  MR_bool succeeded;
  MR_Word InSetA_9 = ((MR_Word) ((MR_hl_field(0, TestIn_6, (MR_Integer) 0))));
  MR_Word InSetB_10 = ((MR_Word) ((MR_hl_field(0, TestIn_6, (MR_Integer) 1))));
  MR_Word InSetC_11 = ((MR_Word) ((MR_hl_field(0, TestIn_6, (MR_Integer) 2))));
  MR_Word InSetD_12 = ((MR_Word) ((MR_hl_field(0, TestIn_6, (MR_Integer) 3))));
  MR_Word InSetS_13 = ((MR_Word) ((MR_hl_field(0, TestIn_6, (MR_Integer) 4))));
  MR_Word OutSetA_14 = ((MR_Word) ((MR_hl_field(0, TestOut_7, (MR_Integer) 0))));
  MR_Word OutSetB_15 = ((MR_Word) ((MR_hl_field(0, TestOut_7, (MR_Integer) 1))));
  MR_Word OutSetC_16 = ((MR_Word) ((MR_hl_field(0, TestOut_7, (MR_Integer) 2))));
  MR_Word OutSetD_17 = ((MR_Word) ((MR_hl_field(0, TestOut_7, (MR_Integer) 3))));
  MR_Word OutSetS_18 = ((MR_Word) ((MR_hl_field(0, TestOut_7, (MR_Integer) 4))));
  MR_Word InsA_19;
  MR_Word OutsA_20;
  MR_Word InsB_21;
  MR_Word OutsB_22;
  MR_Word InsC_23;
  MR_Word OutsC_24;
  MR_Word InsD_25;
  MR_Word OutsD_26;
  MR_Word InsS_27;
  MR_Word OutsS_28;
  MR_Word TypeInfo_38_38;
  MR_Word TypeInfo_42_42;
  MR_Word TypeInfo_46_46;
  MR_Word TypeInfo_50_50;
  MR_Word TypeInfo_54_54;
  MR_Word TypeInfo_58_58;
  MR_Word TypeInfo_62_62;
  MR_Word TypeInfo_66_66;
  MR_Integer PolyConst1_41;
  MR_Integer PolyConst1_45;
  MR_Integer PolyConst1_49;
  MR_Integer PolyConst1_53;
  MR_Integer PolyConst1_57;
  MR_Integer PolyConst1_61;
  MR_Integer PolyConst1_65;

  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_30, InSetA_9, &InsA_19);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_30, OutSetA_14, &OutsA_20);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_30, InSetB_10, &InsB_21);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_30, OutSetB_15, &OutsB_22);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_30, InSetC_11, &InsC_23);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_30, OutSetC_16, &OutsC_24);
  mercury__fatter_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_30, InSetD_12, &InsD_25);
  mercury__fatter_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_30, OutSetD_17, &OutsD_26);
  InsS_27 = (MR_Word) (InSetS_13);
  OutsS_28 = (MR_Word) (OutSetS_18);
{
#define MR_PROC_LABEL mercury__test_bitset__check1_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_30 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_38_38  = TypeInfo;
}
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_38_38, InsA_19, InsS_27);
  if (succeeded)
  {
    PolyConst1_41 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check1_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_30 ;
	Index = PolyConst1_41 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_42_42  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_42_42, InsB_21, InsS_27);
    if (succeeded)
    {
      PolyConst1_45 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check1_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_30 ;
	Index = PolyConst1_45 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_46_46  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_46_46, InsC_23, InsS_27);
      if (succeeded)
      {
        PolyConst1_49 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check1_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_30 ;
	Index = PolyConst1_49 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_50_50  = TypeInfo;
}
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_50_50, InsD_25, InsS_27);
        if (succeeded)
        {
          PolyConst1_53 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check1_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_30 ;
	Index = PolyConst1_53 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_54_54  = TypeInfo;
}
          succeeded = mercury__list____Unify____list_1_0(TypeInfo_54_54, OutsA_20, OutsS_28);
          if (succeeded)
          {
            PolyConst1_57 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check1_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_30 ;
	Index = PolyConst1_57 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_58_58  = TypeInfo;
}
            succeeded = mercury__list____Unify____list_1_0(TypeInfo_58_58, OutsB_22, OutsS_28);
            if (succeeded)
            {
              PolyConst1_61 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check1_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_30 ;
	Index = PolyConst1_61 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_62_62  = TypeInfo;
}
              succeeded = mercury__list____Unify____list_1_0(TypeInfo_62_62, OutsC_24, OutsS_28);
              if (succeeded)
              {
                PolyConst1_65 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check1_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_30 ;
	Index = PolyConst1_65 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_66_66  = TypeInfo;
}
                succeeded = mercury__list____Unify____list_1_0(TypeInfo_66_66, OutsD_26, OutsS_28);
              }
            }
          }
        }
      }
    }
  }
  if (succeeded)
    *Result_8 = TestOut_7;
  else
  {
    MR_Word TypeInfo_34_34;
    MR_Word TypeInfo_36_36;
    MR_Word Var_29;

    {
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) (Op_5));
      MR_hl_field(1, Var_29, 1) = ((MR_Box) (TestIn_6));
      MR_hl_field(1, Var_29, 2) = ((MR_Box) (TestOut_7));
    }
{
#define MR_PROC_LABEL mercury__test_bitset__check1_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_30 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_34_34  = TypeInfo;
}
    {
      TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_36_36, 0) = ((MR_Box) (&mercury__test_bitset__test_bitset__type_ctor_info_bitset_error_1));
      MR_hl_field(0, TypeInfo_36_36, 1) = ((MR_Box) (TypeInfo_34_34));
    }
    {
      mercury__exception__throw_1_p_0(TypeInfo_36_36, ((MR_Box) (Var_29)));
      return;
    }
  }
}

MR_bool MR_CALL 
mercury__test_bitset__contains_2_p_0(
  MR_Word TypeClassInfo_for_uenum_16,
  MR_Word HeadVar__1_1,
  MR_Box E_8)
{
  MR_bool succeeded;
  MR_Word SetA_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word SetB_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word SetC_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
  MR_Word SetD_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
  MR_Word SetS_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
  MR_Word InA_9;
  MR_Word InB_10;
  MR_Word InC_11;
  MR_Word InD_12;
  MR_Word InS_13;
  MR_Word Var_19;
  MR_Unsigned Var_20;
  MR_Unsigned Var_21;
  MR_Unsigned Var_22;
  MR_Unsigned Var_23;
  MR_Unsigned Var_24;
  MR_Unsigned Var_26;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_20;
  MR_Word Var_27;
  MR_Unsigned Var_28;
  MR_Unsigned Var_29;
  MR_Unsigned Var_30;
  MR_Unsigned Var_31;
  MR_Unsigned Var_32;
  MR_Unsigned Var_34;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
  MR_Box conv3_Var_28;
  MR_Word Var_35;
  MR_Unsigned Var_36;
  MR_Unsigned Var_37;
  MR_Unsigned Var_38;
  MR_Unsigned Var_39;
  MR_Unsigned Var_40;
  MR_Unsigned Var_42;
  MR_Unsigned Var_44;
  MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);
  MR_Box conv5_Var_36;
  MR_Word TypeInfo_18_18;

  succeeded = mercury__tree_bitset__contains_2_p_0(TypeClassInfo_for_uenum_16, SetA_3, E_8);
  if (succeeded)
    InA_9 = (MR_Integer) 1;
  else
    InA_9 = (MR_Integer) 0;
  Var_19 = (MR_Word) (SetB_4);
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_16, (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_20 = func_0(((MR_Box) (TypeClassInfo_for_uenum_16)), E_8);
  Var_20 = ((MR_Unsigned) (conv1_Var_20));
{
#define MR_PROC_LABEL mercury__test_bitset__contains_2_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_24  = Bits;
}
  Var_23 = (Var_24 - (MR_Unsigned) 1U);
  Var_26 = ~(Var_23);
  Var_21 = (Var_20 & Var_26);
  Var_22 = (Var_20 & Var_23);
  succeeded = mercury__sparse_bitset__contains_search_nodes_3_p_0(Var_19, Var_21, Var_22);
  if (succeeded)
    InB_10 = (MR_Integer) 1;
  else
    InB_10 = (MR_Integer) 0;
  Var_27 = (MR_Word) (SetC_5);
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_16, (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_28 = func_2(((MR_Box) (TypeClassInfo_for_uenum_16)), E_8);
  Var_28 = ((MR_Unsigned) (conv3_Var_28));
{
#define MR_PROC_LABEL mercury__test_bitset__contains_2_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_32  = Bits;
}
  Var_31 = (Var_32 - (MR_Unsigned) 1U);
  Var_34 = ~(Var_31);
  Var_29 = (Var_28 & Var_34);
  Var_30 = (Var_28 & Var_31);
  succeeded = mercury__fat_sparse_bitset__contains_search_nodes_3_p_0(Var_27, Var_29, Var_30);
  if (succeeded)
    InC_11 = (MR_Integer) 1;
  else
    InC_11 = (MR_Integer) 0;
  Var_35 = (MR_Word) (SetD_6);
  func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_16, (MR_Integer) 0)), (MR_Integer) 5))));
  conv5_Var_36 = func_4(((MR_Box) (TypeClassInfo_for_uenum_16)), E_8);
  Var_36 = ((MR_Unsigned) (conv5_Var_36));
{
#define MR_PROC_LABEL mercury__test_bitset__contains_2_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_42  = Bits;
}
  Var_40 = (Var_42 << 1);
  Var_39 = (Var_40 - (MR_Unsigned) 1U);
  Var_44 = ~(Var_39);
  Var_37 = (Var_36 & Var_44);
  Var_38 = (Var_36 & Var_39);
  succeeded = mercury__fatter_sparse_bitset__contains_search_nodes_3_p_0(Var_35, Var_37, Var_38);
  if (succeeded)
    InD_12 = (MR_Integer) 1;
  else
    InD_12 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__test_bitset__contains_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_16 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_18_18  = TypeInfo;
}
  succeeded = mercury__set_ordlist__member_2_p_0(TypeInfo_18_18, E_8, SetS_7);
  if (succeeded)
    InS_13 = (MR_Integer) 1;
  else
    InS_13 = (MR_Integer) 0;
  succeeded = (InA_9 == InS_13);
  if (succeeded)
  {
    succeeded = (InB_10 == InS_13);
    if (succeeded)
    {
      succeeded = (InC_11 == InS_13);
      if (succeeded)
        succeeded = (InD_12 == InS_13);
    }
  }
  if (succeeded)
    succeeded = (InS_13 == (MR_Integer) 1);
  else
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.contains\'/2", (MR_String) "failed");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
mercury__test_bitset__member_2_p_1_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  mercury__list__cons_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), wrapper_arg_1, ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
mercury__test_bitset__member_2_p_1_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Box closure = closure_arg;

  mercury__test_bitset__IntroducedFrom__pred__member__347__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), wrapper_arg_1, cont, cont_env_ptr);
}

static void MR_CALL 
mercury__test_bitset__member_2_p_1_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Box closure = closure_arg;

  mercury__test_bitset__IntroducedFrom__pred__member__346__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), wrapper_arg_1, cont, cont_env_ptr);
}

static void MR_CALL 
mercury__test_bitset__member_2_p_1_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Box closure = closure_arg;

  mercury__test_bitset__IntroducedFrom__pred__member__345__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), wrapper_arg_1, cont, cont_env_ptr);
}

static void MR_CALL 
mercury__test_bitset__member_2_p_1_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Box closure = closure_arg;

  mercury__test_bitset__IntroducedFrom__pred__member__344__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), wrapper_arg_1, cont, cont_env_ptr);
}

static void MR_CALL 
mercury__test_bitset__member_2_p_1_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Box closure = closure_arg;

  mercury__test_bitset__IntroducedFrom__pred__member__343__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), wrapper_arg_1, cont, cont_env_ptr);
}

void MR_CALL 
mercury__test_bitset__member_2_p_1(
  MR_Word TypeClassInfo_for_uenum_49,
  MR_Box * E_1,
  MR_Word HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_bool succeeded;
  MR_Word TypeInfo_55_55;
  MR_Word TypeInfo_56_56;
  MR_Word TypeInfo_57_57;
  MR_Word TypeInfo_58_58;
  MR_Word TypeInfo_59_59;
  MR_Word SetA_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetC_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word SetD_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word SetS_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
  MR_Word PredA_22;
  MR_Word PredB_24;
  MR_Word PredC_26;
  MR_Word PredD_28;
  MR_Word PredS_30;
  MR_Word SolA_32;
  MR_Word SolB_33;
  MR_Word SolC_34;
  MR_Word SolD_35;
  MR_Word SolS_36;
  MR_Word TypeInfo_14_83;
  MR_Word Var_79;
  MR_Word Var_81;
  MR_Integer Var_93;
  MR_Box conv1_Var_81;
  MR_Word TypeInfo_62_62;
  MR_Word TypeInfo_66_66;
  MR_Word TypeInfo_70_70;
  MR_Word TypeInfo_74_74;
  MR_Integer PolyConst1_65;
  MR_Integer PolyConst1_69;
  MR_Integer PolyConst1_73;

  {
    PredA_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredA_22, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_7[0]));
    MR_hl_field(0, PredA_22, 1) = ((MR_Box) (mercury__test_bitset__member_2_p_1_1));
    MR_hl_field(0, PredA_22, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, PredA_22, 3) = ((MR_Box) (TypeClassInfo_for_uenum_49));
    MR_hl_field(0, PredA_22, 4) = ((MR_Box) (SetA_17));
  }
  {
    PredB_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredB_24, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_7[1]));
    MR_hl_field(0, PredB_24, 1) = ((MR_Box) (mercury__test_bitset__member_2_p_1_2));
    MR_hl_field(0, PredB_24, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, PredB_24, 3) = ((MR_Box) (TypeClassInfo_for_uenum_49));
    MR_hl_field(0, PredB_24, 4) = ((MR_Box) (SetB_18));
  }
  {
    PredC_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredC_26, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_7[2]));
    MR_hl_field(0, PredC_26, 1) = ((MR_Box) (mercury__test_bitset__member_2_p_1_3));
    MR_hl_field(0, PredC_26, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, PredC_26, 3) = ((MR_Box) (TypeClassInfo_for_uenum_49));
    MR_hl_field(0, PredC_26, 4) = ((MR_Box) (SetC_19));
  }
  {
    PredD_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredD_28, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_7[3]));
    MR_hl_field(0, PredD_28, 1) = ((MR_Box) (mercury__test_bitset__member_2_p_1_4));
    MR_hl_field(0, PredD_28, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, PredD_28, 3) = ((MR_Box) (TypeClassInfo_for_uenum_49));
    MR_hl_field(0, PredD_28, 4) = ((MR_Box) (SetD_20));
  }
  {
    PredS_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredS_30, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_7[4]));
    MR_hl_field(0, PredS_30, 1) = ((MR_Box) (mercury__test_bitset__member_2_p_1_5));
    MR_hl_field(0, PredS_30, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, PredS_30, 3) = ((MR_Box) (TypeClassInfo_for_uenum_49));
    MR_hl_field(0, PredS_30, 4) = ((MR_Box) (SetS_21));
  }
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_49 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_55_55  = TypeInfo;
}
  {
    Var_79 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_79, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_6[0]));
    MR_hl_field(0, Var_79, 1) = ((MR_Box) (mercury__test_bitset__member_2_p_1_6));
    MR_hl_field(0, Var_79, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_79, 3) = ((MR_Box) (TypeInfo_55_55));
  }
  {
    TypeInfo_14_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_14_83, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_14_83, 1) = ((MR_Box) (TypeInfo_55_55));
  }
  mercury__solutions__builtin_aggregate_4_p_7(TypeInfo_55_55, TypeInfo_14_83, PredA_22, Var_79, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_Var_81);
  Var_81 = ((MR_Word) (conv1_Var_81));
  mercury__list__length_acc_3_p_0(TypeInfo_55_55, Var_81, (MR_Integer) 0, &Var_93);
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_55_55, Var_93, Var_81, &SolA_32);
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_49 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_56_56  = TypeInfo;
}
  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_54_49_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0(TypeInfo_56_56, PredB_24, &SolB_33);
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_49 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_57_57  = TypeInfo;
}
  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_54_48_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0(TypeInfo_57_57, PredC_26, &SolC_34);
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_49 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_58_58  = TypeInfo;
}
  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_53_57_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0(TypeInfo_58_58, PredD_28, &SolD_35);
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_49 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_59_59  = TypeInfo;
}
  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_53_56_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0(TypeInfo_59_59, PredS_30, &SolS_36);
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_49 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_62_62  = TypeInfo;
}
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_62_62, SolA_32, SolS_36);
  if (succeeded)
  {
    PolyConst1_65 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_49 ;
	Index = PolyConst1_65 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_66_66  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_66_66, SolB_33, SolS_36);
    if (succeeded)
    {
      PolyConst1_69 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_49 ;
	Index = PolyConst1_69 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_70_70  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_70_70, SolC_34, SolS_36);
      if (succeeded)
      {
        PolyConst1_73 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_49 ;
	Index = PolyConst1_73 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_74_74  = TypeInfo;
}
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_74_74, SolD_35, SolS_36);
      }
    }
  }
  if (succeeded)
  {
    MR_Word TypeInfo_60_60;

{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_49 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_60_60  = TypeInfo;
}
    mercury__set_ordlist__member_2_p_1(TypeInfo_60_60, E_1, SetS_21, cont, cont_env_ptr);
  }
  else
  {
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.member\'/2", (MR_String) "failed (out, in)");
      return;
    }
    cont(cont_env_ptr);
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_54_49_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  mercury__list__cons_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), wrapper_arg_1, ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_54_49_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_3,
  MR_Word * HeadVar__2_4)
{
  MR_Word TypeInfo_14_14;
  MR_Word Var_10;
  MR_Word Var_12;
  MR_Integer Var_24;
  MR_Box conv1_Var_12;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_6[0]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_54_49_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (TypeInfo_for_T_7));
  }
  {
    TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_14_14, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_T_7));
  }
  mercury__solutions__builtin_aggregate_4_p_7(TypeInfo_for_T_7, TypeInfo_14_14, HeadVar__1_3, Var_10, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_Var_12);
  Var_12 = ((MR_Word) (conv1_Var_12));
  mercury__list__length_acc_3_p_0(TypeInfo_for_T_7, Var_12, (MR_Integer) 0, &Var_24);
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_7, Var_24, Var_12, HeadVar__2_4);
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_54_48_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  mercury__list__cons_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), wrapper_arg_1, ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_54_48_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_3,
  MR_Word * HeadVar__2_4)
{
  MR_Word TypeInfo_14_14;
  MR_Word Var_10;
  MR_Word Var_12;
  MR_Integer Var_24;
  MR_Box conv1_Var_12;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_6[0]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_54_48_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (TypeInfo_for_T_7));
  }
  {
    TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_14_14, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_T_7));
  }
  mercury__solutions__builtin_aggregate_4_p_7(TypeInfo_for_T_7, TypeInfo_14_14, HeadVar__1_3, Var_10, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_Var_12);
  Var_12 = ((MR_Word) (conv1_Var_12));
  mercury__list__length_acc_3_p_0(TypeInfo_for_T_7, Var_12, (MR_Integer) 0, &Var_24);
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_7, Var_24, Var_12, HeadVar__2_4);
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_53_57_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  mercury__list__cons_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), wrapper_arg_1, ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_53_57_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_3,
  MR_Word * HeadVar__2_4)
{
  MR_Word TypeInfo_14_14;
  MR_Word Var_10;
  MR_Word Var_12;
  MR_Integer Var_24;
  MR_Box conv1_Var_12;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_6[0]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_53_57_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (TypeInfo_for_T_7));
  }
  {
    TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_14_14, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_T_7));
  }
  mercury__solutions__builtin_aggregate_4_p_7(TypeInfo_for_T_7, TypeInfo_14_14, HeadVar__1_3, Var_10, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_Var_12);
  Var_12 = ((MR_Word) (conv1_Var_12));
  mercury__list__length_acc_3_p_0(TypeInfo_for_T_7, Var_12, (MR_Integer) 0, &Var_24);
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_7, Var_24, Var_12, HeadVar__2_4);
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_53_56_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  mercury__list__cons_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), wrapper_arg_1, ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_53_56_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_3,
  MR_Word * HeadVar__2_4)
{
  MR_Word TypeInfo_14_14;
  MR_Word Var_10;
  MR_Word Var_12;
  MR_Integer Var_24;
  MR_Box conv1_Var_12;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_6[0]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_53_56_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (TypeInfo_for_T_7));
  }
  {
    TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_14_14, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_T_7));
  }
  mercury__solutions__builtin_aggregate_4_p_7(TypeInfo_for_T_7, TypeInfo_14_14, HeadVar__1_3, Var_10, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_Var_12);
  Var_12 = ((MR_Word) (conv1_Var_12));
  mercury__list__length_acc_3_p_0(TypeInfo_for_T_7, Var_12, (MR_Integer) 0, &Var_24);
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_7, Var_24, Var_12, HeadVar__2_4);
}

MR_bool MR_CALL 
mercury__test_bitset__member_2_p_0(
  MR_Word TypeClassInfo_for_uenum_49,
  MR_Box E_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word SetA_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetC_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word SetD_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word SetS_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
  MR_Word InA_9;
  MR_Word InB_10;
  MR_Word InC_11;
  MR_Word InD_12;
  MR_Word InS_13;
  MR_Word TypeInfo_51_51;

  succeeded = mercury__tree_bitset__member_2_p_0(TypeClassInfo_for_uenum_49, E_1, SetA_4);
  if (succeeded)
    InA_9 = (MR_Integer) 1;
  else
    InA_9 = (MR_Integer) 0;
  succeeded = mercury__sparse_bitset__member_2_p_0(TypeClassInfo_for_uenum_49, E_1, SetB_5);
  if (succeeded)
    InB_10 = (MR_Integer) 1;
  else
    InB_10 = (MR_Integer) 0;
  succeeded = mercury__fat_sparse_bitset__member_2_p_0(TypeClassInfo_for_uenum_49, E_1, SetC_6);
  if (succeeded)
    InC_11 = (MR_Integer) 1;
  else
    InC_11 = (MR_Integer) 0;
  succeeded = mercury__fatter_sparse_bitset__member_2_p_0(TypeClassInfo_for_uenum_49, E_1, SetD_7);
  if (succeeded)
    InD_12 = (MR_Integer) 1;
  else
    InD_12 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_49 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_51_51  = TypeInfo;
}
  succeeded = mercury__set_ordlist__member_2_p_0(TypeInfo_51_51, E_1, SetS_8);
  if (succeeded)
    InS_13 = (MR_Integer) 1;
  else
    InS_13 = (MR_Integer) 0;
  succeeded = (InA_9 == InS_13);
  if (succeeded)
  {
    succeeded = (InB_10 == InS_13);
    if (succeeded)
    {
      succeeded = (InC_11 == InS_13);
      if (succeeded)
        succeeded = (InD_12 == InS_13);
    }
  }
  if (succeeded)
    succeeded = (InS_13 == (MR_Integer) 1);
  else
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.member\'/2", (MR_String) "failed (in, in)");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__test_bitset__is_singleton_2_p_0(
  MR_Word TypeClassInfo_for_uenum_21,
  MR_Word HeadVar__1_1,
  MR_Box * R_8)
{
  MR_bool succeeded;
  MR_Word A_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word B_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word C_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
  MR_Word D_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
  MR_Word S_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
  MR_Word ResA_10;
  MR_Word ResB_12;
  MR_Word ResC_14;
  MR_Word ResD_16;
  MR_Word ResS_18;
  MR_Box AR_9;
  MR_Box BR_11;
  MR_Box CR_13;
  MR_Box DR_15;
  MR_Box SR_17;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word TypeInfo_25_25;
  MR_Word TypeInfo_29_29;
  MR_Word TypeInfo_33_33;
  MR_Word TypeInfo_37_37;
  MR_Integer PolyConst1_28;
  MR_Integer PolyConst1_32;
  MR_Integer PolyConst1_36;

  succeeded = mercury__tree_bitset__is_singleton_2_p_0(TypeClassInfo_for_uenum_21, A_3, &AR_9);
  if (succeeded)
    {
      ResA_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ResA_10, 0) = AR_9;
    }
  else
    ResA_10 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = mercury__sparse_bitset__is_singleton_2_p_0(TypeClassInfo_for_uenum_21, B_4, &BR_11);
  if (succeeded)
    {
      ResB_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ResB_12, 0) = BR_11;
    }
  else
    ResB_12 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = mercury__fat_sparse_bitset__is_singleton_2_p_0(TypeClassInfo_for_uenum_21, C_5, &CR_13);
  if (succeeded)
    {
      ResC_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ResC_14, 0) = CR_13;
    }
  else
    ResC_14 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = mercury__fatter_sparse_bitset__is_singleton_2_p_0(TypeClassInfo_for_uenum_21, D_6, &DR_15);
  if (succeeded)
    {
      ResD_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ResD_16, 0) = DR_15;
    }
  else
    ResD_16 = (MR_Word) ((MR_Unsigned) 0U);
  Var_40 = (MR_Word) (S_7);
  succeeded = (Var_40 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    SR_17 = (MR_hl_field(1, Var_40, (MR_Integer) 0));
    Var_41 = ((MR_Word) ((MR_hl_field(1, Var_40, (MR_Integer) 1))));
    succeeded = (Var_41 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
    {
      ResS_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ResS_18, 0) = SR_17;
    }
  else
    ResS_18 = (MR_Word) ((MR_Unsigned) 0U);
{
#define MR_PROC_LABEL mercury__test_bitset__is_singleton_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_21 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_25_25  = TypeInfo;
}
  succeeded = mercury__maybe____Unify____maybe_1_0(TypeInfo_25_25, ResA_10, ResS_18);
  if (succeeded)
  {
    PolyConst1_28 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__is_singleton_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_21 ;
	Index = PolyConst1_28 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_29_29  = TypeInfo;
}
    succeeded = mercury__maybe____Unify____maybe_1_0(TypeInfo_29_29, ResB_12, ResS_18);
    if (succeeded)
    {
      PolyConst1_32 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__is_singleton_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_21 ;
	Index = PolyConst1_32 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_33_33  = TypeInfo;
}
      succeeded = mercury__maybe____Unify____maybe_1_0(TypeInfo_33_33, ResC_14, ResS_18);
      if (succeeded)
      {
        PolyConst1_36 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__is_singleton_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_21 ;
	Index = PolyConst1_36 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_37_37  = TypeInfo;
}
        succeeded = mercury__maybe____Unify____maybe_1_0(TypeInfo_37_37, ResD_16, ResS_18);
      }
    }
  }
  if (succeeded)
  {
    succeeded = (ResS_18 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      *R_8 = (MR_hl_field(1, ResS_18, (MR_Integer) 0));
  }
  else
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.is_singleton\'/2", (MR_String) "failed");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__test_bitset__is_non_empty_1_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word A_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word B_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word C_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
  MR_Word D_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
  MR_Word S_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
  MR_Word NEA_7;
  MR_Word NEB_8;
  MR_Word NEC_9;
  MR_Word NED_10;
  MR_Word NES_11;
  MR_Word Var_24;
  MR_Word Var_27;
  MR_Word Var_31;
  MR_Word Var_36;

  succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(TypeInfo_for_T_14, A_2, (MR_Word) (((MR_Box) (&mercury__test_bitset_scalar_common_4[0]))));
  succeeded = !(succeeded);
  if (succeeded)
    NEA_7 = (MR_Integer) 1;
  else
    NEA_7 = (MR_Integer) 0;
  Var_24 = (MR_Word) (B_3);
  succeeded = (Var_24 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    NEB_8 = (MR_Integer) 1;
  else
    NEB_8 = (MR_Integer) 0;
  Var_27 = (MR_Word) (C_4);
  succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    NEC_9 = (MR_Integer) 1;
  else
    NEC_9 = (MR_Integer) 0;
  Var_31 = (MR_Word) (D_5);
  succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    NED_10 = (MR_Integer) 1;
  else
    NED_10 = (MR_Integer) 0;
  Var_36 = (MR_Word) (S_6);
  succeeded = (Var_36 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    NES_11 = (MR_Integer) 1;
  else
    NES_11 = (MR_Integer) 0;
  succeeded = (NEA_7 == NES_11);
  if (succeeded)
  {
    succeeded = (NEB_8 == NES_11);
    if (succeeded)
    {
      succeeded = (NEC_9 == NES_11);
      if (succeeded)
        succeeded = (NED_10 == NES_11);
    }
  }
  if (succeeded)
    succeeded = (NES_11 == (MR_Integer) 1);
  else
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.is_non_empty\'/1", (MR_String) "failed");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__test_bitset__is_empty_1_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word A_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word B_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word C_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
  MR_Word D_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
  MR_Word S_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
  MR_Word EA_7;
  MR_Word EB_8;
  MR_Word EC_9;
  MR_Word ED_10;
  MR_Word ES_11;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;

  succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(TypeInfo_for_T_14, A_2, (MR_Word) (((MR_Box) (&mercury__test_bitset_scalar_common_4[0]))));
  if (succeeded)
    EA_7 = (MR_Integer) 1;
  else
    EA_7 = (MR_Integer) 0;
  Var_24 = (MR_Word) (B_3);
  succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    EB_8 = (MR_Integer) 1;
  else
    EB_8 = (MR_Integer) 0;
  Var_25 = (MR_Word) (C_4);
  succeeded = (Var_25 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    EC_9 = (MR_Integer) 1;
  else
    EC_9 = (MR_Integer) 0;
  Var_26 = (MR_Word) (D_5);
  succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    ED_10 = (MR_Integer) 1;
  else
    ED_10 = (MR_Integer) 0;
  Var_27 = (MR_Word) (S_6);
  succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    ES_11 = (MR_Integer) 1;
  else
    ES_11 = (MR_Integer) 0;
  succeeded = (EA_7 == ES_11);
  if (succeeded)
  {
    succeeded = (EB_8 == ES_11);
    if (succeeded)
    {
      succeeded = (EC_9 == ES_11);
      if (succeeded)
        succeeded = (ED_10 == ES_11);
    }
  }
  if (succeeded)
    succeeded = (ES_11 == (MR_Integer) 1);
  else
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.is_empty\'/1", (MR_String) "failed");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mercury__test_bitset__make_singleton_set_2_p_0(
  MR_Word TypeClassInfo_for_uenum_4,
  MR_Word * HeadVar__1_1,
  MR_Box A_3)
{
  *HeadVar__1_1 = mercury__test_bitset__make_singleton_set_1_f_0(TypeClassInfo_for_uenum_4, A_3);
}

MR_Word MR_CALL 
mercury__test_bitset__make_singleton_set_1_f_0(
  MR_Word TypeClassInfo_for_uenum_9,
  MR_Box A_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_5;
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Word Var_26;
  MR_Unsigned Var_27;
  MR_Unsigned Var_28;
  MR_Unsigned Var_29;
  MR_Unsigned Var_30;
  MR_Unsigned Var_31;
  MR_Unsigned Var_33;
  MR_Word Var_39;
  MR_Unsigned Var_40;
  MR_Unsigned Var_41;
  MR_Unsigned Var_42;
  MR_Unsigned Var_43;
  MR_Unsigned Var_44;
  MR_Unsigned Var_46;
  MR_Word Var_52;
  MR_Unsigned Var_53;
  MR_Unsigned Var_54;
  MR_Unsigned Var_55;
  MR_Unsigned Var_56;
  MR_Unsigned Var_57;
  MR_Unsigned Var_59;
  MR_Unsigned Var_61;
  MR_Word Var_62;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_27;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
  MR_Box conv3_Var_40;
  MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);
  MR_Box conv5_Var_53;

  Var_4 = mercury__tree_bitset__insert_2_f_0(TypeClassInfo_for_uenum_9, (MR_Word) (((MR_Box) (&mercury__test_bitset_scalar_common_4[0]))), A_3);
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_9, (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_27 = func_0(((MR_Box) (TypeClassInfo_for_uenum_9)), A_3);
  Var_27 = ((MR_Unsigned) (conv1_Var_27));
{
#define MR_PROC_LABEL mercury__test_bitset__make_singleton_set_1_f_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_31  = Bits;
}
  Var_30 = (Var_31 - (MR_Unsigned) 1U);
  Var_33 = ~(Var_30);
  Var_28 = (Var_27 & Var_33);
  Var_29 = (Var_27 & Var_30);
  mercury__sparse_bitset__insert_loop_4_p_0(Var_28, Var_29, (MR_Word) ((MR_Word) (((MR_Box) ((MR_Unsigned) 0U)))), &Var_26);
  Var_5 = (MR_Word) (Var_26);
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_9, (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_40 = func_2(((MR_Box) (TypeClassInfo_for_uenum_9)), A_3);
  Var_40 = ((MR_Unsigned) (conv3_Var_40));
{
#define MR_PROC_LABEL mercury__test_bitset__make_singleton_set_1_f_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_44  = Bits;
}
  Var_43 = (Var_44 - (MR_Unsigned) 1U);
  Var_46 = ~(Var_43);
  Var_41 = (Var_40 & Var_46);
  Var_42 = (Var_40 & Var_43);
  mercury__fat_sparse_bitset__insert_loop_4_p_0(Var_41, Var_42, (MR_Word) ((MR_Word) (((MR_Box) ((MR_Unsigned) 0U)))), &Var_39);
  Var_6 = (MR_Word) (Var_39);
  func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_9, (MR_Integer) 0)), (MR_Integer) 5))));
  conv5_Var_53 = func_4(((MR_Box) (TypeClassInfo_for_uenum_9)), A_3);
  Var_53 = ((MR_Unsigned) (conv5_Var_53));
{
#define MR_PROC_LABEL mercury__test_bitset__make_singleton_set_1_f_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_59  = Bits;
}
  Var_57 = (Var_59 << 1);
  Var_56 = (Var_57 - (MR_Unsigned) 1U);
  Var_61 = ~(Var_56);
  Var_54 = (Var_53 & Var_61);
  Var_55 = (Var_53 & Var_56);
  mercury__fatter_sparse_bitset__insert_loop_4_p_0(Var_54, Var_55, (MR_Word) ((MR_Word) (((MR_Box) ((MR_Unsigned) 0U)))), &Var_52);
  Var_7 = (MR_Word) (Var_52);
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = A_3;
    MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_8 = (MR_Word) (Var_62);
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (Var_5));
    MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (Var_6));
    MR_hl_field(0, HeadVar__2_2, 3) = ((MR_Box) (Var_7));
    MR_hl_field(0, HeadVar__2_2, 4) = ((MR_Box) (Var_8));
  }
  return HeadVar__2_2;
}

void MR_CALL 
mercury__test_bitset__singleton_set_2_p_0(
  MR_Word TypeClassInfo_for_uenum_4,
  MR_Word * HeadVar__1_1,
  MR_Box A_3)
{
  *HeadVar__1_1 = mercury__test_bitset__singleton_set_1_f_0(TypeClassInfo_for_uenum_4, A_3);
}

MR_Word MR_CALL 
mercury__test_bitset__singleton_set_1_f_0(
  MR_Word TypeClassInfo_for_uenum_9,
  MR_Box A_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_5;
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Word Var_26;
  MR_Unsigned Var_27;
  MR_Unsigned Var_28;
  MR_Unsigned Var_29;
  MR_Unsigned Var_30;
  MR_Unsigned Var_31;
  MR_Unsigned Var_33;
  MR_Word Var_39;
  MR_Unsigned Var_40;
  MR_Unsigned Var_41;
  MR_Unsigned Var_42;
  MR_Unsigned Var_43;
  MR_Unsigned Var_44;
  MR_Unsigned Var_46;
  MR_Word Var_52;
  MR_Unsigned Var_53;
  MR_Unsigned Var_54;
  MR_Unsigned Var_55;
  MR_Unsigned Var_56;
  MR_Unsigned Var_57;
  MR_Unsigned Var_59;
  MR_Unsigned Var_61;
  MR_Word Var_62;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_27;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
  MR_Box conv3_Var_40;
  MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);
  MR_Box conv5_Var_53;

  Var_4 = mercury__tree_bitset__insert_2_f_0(TypeClassInfo_for_uenum_9, (MR_Word) (((MR_Box) (&mercury__test_bitset_scalar_common_4[0]))), A_3);
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_9, (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_27 = func_0(((MR_Box) (TypeClassInfo_for_uenum_9)), A_3);
  Var_27 = ((MR_Unsigned) (conv1_Var_27));
{
#define MR_PROC_LABEL mercury__test_bitset__singleton_set_1_f_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_31  = Bits;
}
  Var_30 = (Var_31 - (MR_Unsigned) 1U);
  Var_33 = ~(Var_30);
  Var_28 = (Var_27 & Var_33);
  Var_29 = (Var_27 & Var_30);
  mercury__sparse_bitset__insert_loop_4_p_0(Var_28, Var_29, (MR_Word) ((MR_Word) (((MR_Box) ((MR_Unsigned) 0U)))), &Var_26);
  Var_5 = (MR_Word) (Var_26);
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_9, (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_40 = func_2(((MR_Box) (TypeClassInfo_for_uenum_9)), A_3);
  Var_40 = ((MR_Unsigned) (conv3_Var_40));
{
#define MR_PROC_LABEL mercury__test_bitset__singleton_set_1_f_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_44  = Bits;
}
  Var_43 = (Var_44 - (MR_Unsigned) 1U);
  Var_46 = ~(Var_43);
  Var_41 = (Var_40 & Var_46);
  Var_42 = (Var_40 & Var_43);
  mercury__fat_sparse_bitset__insert_loop_4_p_0(Var_41, Var_42, (MR_Word) ((MR_Word) (((MR_Box) ((MR_Unsigned) 0U)))), &Var_39);
  Var_6 = (MR_Word) (Var_39);
  func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_9, (MR_Integer) 0)), (MR_Integer) 5))));
  conv5_Var_53 = func_4(((MR_Box) (TypeClassInfo_for_uenum_9)), A_3);
  Var_53 = ((MR_Unsigned) (conv5_Var_53));
{
#define MR_PROC_LABEL mercury__test_bitset__singleton_set_1_f_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_59  = Bits;
}
  Var_57 = (Var_59 << 1);
  Var_56 = (Var_57 - (MR_Unsigned) 1U);
  Var_61 = ~(Var_56);
  Var_54 = (Var_53 & Var_61);
  Var_55 = (Var_53 & Var_56);
  mercury__fatter_sparse_bitset__insert_loop_4_p_0(Var_54, Var_55, (MR_Word) ((MR_Word) (((MR_Box) ((MR_Unsigned) 0U)))), &Var_52);
  Var_7 = (MR_Word) (Var_52);
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = A_3;
    MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_8 = (MR_Word) (Var_62);
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (Var_5));
    MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (Var_6));
    MR_hl_field(0, HeadVar__2_2, 3) = ((MR_Box) (Var_7));
    MR_hl_field(0, HeadVar__2_2, 4) = ((MR_Box) (Var_8));
  }
  return HeadVar__2_2;
}

void MR_CALL 
mercury__test_bitset__init_1_p_0(
  MR_Word TypeInfo_for_T_2,
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) (&mercury__test_bitset_scalar_common_3[1]);
}

MR_Word MR_CALL 
mercury__test_bitset__init_0_f_0(
  MR_Word TypeInfo_for_T_7)
{
  return (MR_Word) (&mercury__test_bitset_scalar_common_3[1]);
}

static MR_bool MR_CALL 
mercury__test_bitset____Unify____bitset_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__test_bitset____Unify____bitset_error_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__test_bitset____Compare____bitset_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__test_bitset____Compare____bitset_error_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__test_bitset____Unify____test_bitset_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__test_bitset____Unify____test_bitset_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__test_bitset____Compare____test_bitset_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__test_bitset____Compare____test_bitset_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__test_bitset__init(void)
{
}

void mercury__test_bitset__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__test_bitset__test_bitset__type_ctor_info_bitset_error_1);
	MR_register_type_ctor_info(&mercury__test_bitset__test_bitset__type_ctor_info_test_bitset_1);
}

void mercury__test_bitset__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__test_bitset__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module test_bitset.
