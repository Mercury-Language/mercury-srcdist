/*
** Automatically generated from `test_bitset.m'
** by the Mercury compiler,
** version rotd-2023-01-30
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
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "fat_sparse_bitset.mih"
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
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__list__pti_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__tree_bitset__pti_tree_bitset_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__sparse_bitset__pti_sparse_bitset_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__fat_sparse_bitset__pti_fat_sparse_bitset_1__pseudo_1;

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

static const MR_PseudoTypeInfo mercury__test_bitset__test_bitset__field_types_test_bitset_1_0[4];

static const MR_DuFunctorDesc mercury__test_bitset__test_bitset__du_functor_desc_test_bitset_1_0;

static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_stag_ordered_test_bitset_1_0[1];

static const MR_DuPtagLayout mercury__test_bitset__test_bitset__du_ptag_ordered_test_bitset_1[1];

static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_name_ordered_test_bitset_1[1];

static const MR_Integer mercury__test_bitset__test_bitset__functor_number_map_test_bitset_1[1];

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_54_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_19,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_55_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_54_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__fat_sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_16,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_56_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__fat_sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__333__1_3_p_0(
  MR_Word TypeClassInfo_for_uenum_41,
  MR_Word SetS_18,
  MR_Box * LambdaHeadVar__1_34,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__332__1_3_p_0(
  MR_Word TypeClassInfo_for_uenum_41,
  MR_Word SetC_17,
  MR_Box * LambdaHeadVar__1_33,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__331__1_3_p_0(
  MR_Word TypeClassInfo_for_uenum_41,
  MR_Word SetB_16,
  MR_Box * LambdaHeadVar__1_32,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__330__1_3_p_0(
  MR_Word TypeClassInfo_for_uenum_41,
  MR_Word SetA_15,
  MR_Box * LambdaHeadVar__1_31,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_57_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(
  MR_Word Var_24,
  MR_Word TypeClassInfo_for_uenum_20,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_56_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(
  MR_Word Var_24,
  MR_Word TypeClassInfo_for_uenum_20,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_55_54_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(
  MR_Word Var_30,
  MR_Word TypeClassInfo_for_uenum_26,
  MR_Word HeadVar__1_8,
  MR_Unsigned HeadVar__3_10,
  MR_Unsigned HeadVar__4_11,
  MR_Unsigned HeadVar__5_12,
  MR_Box HeadVar__6_13,
  MR_Box * HeadVar__7_14);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__fat_sparse_bitset_0(
  MR_Word Var_20,
  MR_Word TypeClassInfo_for_uenum_16,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_53_57_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_6_p_in__fat_sparse_bitset_0(
  MR_Word Var_26,
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_23,
  MR_Word TypeClassInfo_for_uenum_19,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_54_52_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_26,
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_56_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(
  MR_Word TypeClassInfo_for_uenum_20,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_55_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(
  MR_Word TypeClassInfo_for_uenum_20,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_50_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(
  MR_Word TypeClassInfo_for_uenum_26,
  MR_Word HeadVar__1_8,
  MR_Unsigned HeadVar__3_10,
  MR_Unsigned HeadVar__4_11,
  MR_Unsigned HeadVar__5_12,
  MR_Integer HeadVar__6_13,
  MR_Integer * HeadVar__7_14);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_51_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_19,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_48_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Integer HeadVar__5_11,
  MR_Integer * HeadVar__6_12);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_53_56_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__fat_sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_16,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_51_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_6_p_in__fat_sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Integer HeadVar__5_11,
  MR_Integer * HeadVar__6_12);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(
  MR_Word Var_29,
  MR_Word TypeClassInfo_for_uenum_20,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(
  MR_Word Var_29,
  MR_Word TypeClassInfo_for_uenum_20,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(
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
  MR_Word TypeClassInfo_for_uenum_16,
  MR_String Op_4,
  MR_Word TestIn_5,
  MR_Word * Result_6);

static void MR_CALL 
mercury__test_bitset__get_sets_6_p_0(
  MR_Word TypeClassInfo_for_uenum_28,
  MR_String Op_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
mercury__test_bitset__check2_5_p_0(
  MR_Word TypeClassInfo_for_uenum_36,
  MR_String Op_6,
  MR_Word TestInL_7,
  MR_Word TestInR_8,
  MR_Word TestOut_9,
  MR_Word * Result_10);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_56_55_95_95_91_51_44_32_52_93_95_48_3_p_in__list_0(
  MR_Word Var_11,
  MR_Box Var_12,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mercury__test_bitset__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_56_55_95_95_91_51_44_32_52_93_95_48_95_95_49_3_p_0(
  MR_Word Var_11,
  MR_Box Var_12,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_16);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_56_54_95_95_91_51_44_32_52_93_95_48_3_p_in__list_0(
  MR_Word Var_11,
  MR_Box Var_12,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mercury__test_bitset__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_56_54_95_95_91_51_44_32_52_93_95_48_95_95_49_3_p_0(
  MR_Word Var_11,
  MR_Box Var_12,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_16);

static void MR_CALL 
mercury__test_bitset__check1_4_p_0(
  MR_Word TypeClassInfo_for_uenum_26,
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
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_52_53_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_52_53_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_3,
  MR_Word * HeadVar__2_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_52_52_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_52_52_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0(
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

static /* final */ const MR_Box mercury__test_bitset_scalar_common_2[2][4];

static /* final */ const MR_Box mercury__test_bitset_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__test_bitset_scalar_common_4[1][1];

static /* final */ const MR_Integer mercury__test_bitset_scalar_common_5[2][2];

static /* final */ const MR_Box mercury__test_bitset_scalar_common_6[1][7];

static /* final */ const MR_Box mercury__test_bitset_scalar_common_7[4][6];




static /* final */ const MR_Box mercury__test_bitset_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__test_bitset_scalar_common_2[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__test_bitset_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (((MR_Box) (&mercury__test_bitset_scalar_common_4[0])))),
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 0U)))),
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 0U)))),
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 0U))))
  },
};

static /* final */ const MR_Box mercury__test_bitset_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__test_bitset_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__test_bitset_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__test_bitset_scalar_common_4[1][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
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

static /* final */ const MR_Box mercury__test_bitset_scalar_common_7[4][6] = {
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
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__tree_bitset__pti_tree_bitset_1__pseudo_1 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__sparse_bitset__pti_sparse_bitset_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__fat_sparse_bitset__pti_fat_sparse_bitset_1__pseudo_1 = {
  &mercury__fat_sparse_bitset__fat_sparse_bitset__type_ctor_info_fat_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__test_bitset__pti_test_bitset_1__pseudo_1 = {
  &mercury__test_bitset__test_bitset__type_ctor_info_test_bitset_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
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

static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_0[1] = {
  &mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_0
};

static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_1[1] = {
  &mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_1
};

static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_2[1] = {
  &mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_2
};

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

static const MR_PseudoTypeInfo mercury__test_bitset__test_bitset__field_types_test_bitset_1_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__test_bitset__tree_bitset__pti_tree_bitset_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__test_bitset__sparse_bitset__pti_sparse_bitset_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__test_bitset__fat_sparse_bitset__pti_fat_sparse_bitset_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__test_bitset__set_ordlist__pti_set_ordlist_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__test_bitset__test_bitset__du_functor_desc_test_bitset_1_0 = {
  (MR_String) "tb",
  INT16_C(4),
  UINT16_C(15),
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

static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_stag_ordered_test_bitset_1_0[1] = {
  &mercury__test_bitset__test_bitset__du_functor_desc_test_bitset_1_0
};

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

static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_name_ordered_test_bitset_1[1] = {
  &mercury__test_bitset__test_bitset__du_functor_desc_test_bitset_1_0
};

static const MR_Integer mercury__test_bitset__test_bitset__functor_number_map_test_bitset_1[1] = {
  (MR_Integer) 0
};

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
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_54_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
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

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_54_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(TypeClassInfo_for_uenum_19, Var_10, HeadVar__3_3, &Var_13);
    Var_14 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
    Var_15 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_54_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_18  = Bits;
}
    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_55_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(TypeClassInfo_for_uenum_19, Var_14, Var_15, Var_18, Var_13, HeadVar__4_4);
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_55_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(
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
        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_55_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(TypeClassInfo_for_uenum_22, Var_20, Var_18, Var_14, HeadVar__5_11, &Var_21);
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
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_54_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__fat_sparse_bitset_0(
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

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_54_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__fat_sparse_bitset_0(TypeClassInfo_for_uenum_16, Var_11, HeadVar__3_3, &Var_14);
{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_54_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__fat_sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_15  = Bits;
}
    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_56_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__fat_sparse_bitset_0(TypeClassInfo_for_uenum_16, Var_9, Var_10, Var_15, Var_14, HeadVar__4_4);
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_56_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__fat_sparse_bitset_0(
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
        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_56_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__fat_sparse_bitset_0(TypeClassInfo_for_uenum_22, Var_20, Var_18, Var_14, HeadVar__5_11, &Var_21);
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
mercury__test_bitset__IntroducedFrom__pred__member__333__1_3_p_0(
  MR_Word TypeClassInfo_for_uenum_41,
  MR_Word SetS_18,
  MR_Box * LambdaHeadVar__1_34,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Word TypeInfo_45_45;

{
#define MR_PROC_LABEL mercury__test_bitset__IntroducedFrom__pred__member__333__1_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_41 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_45_45  = TypeInfo;
}
  mercury__set_ordlist__member_2_p_1(TypeInfo_45_45, LambdaHeadVar__1_34, SetS_18, cont, cont_env_ptr);
}

static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__332__1_3_p_0(
  MR_Word TypeClassInfo_for_uenum_41,
  MR_Word SetC_17,
  MR_Box * LambdaHeadVar__1_33,
  MR_Cont cont,
  void * cont_env_ptr)
{
  mercury__fat_sparse_bitset__member_2_p_1(TypeClassInfo_for_uenum_41, LambdaHeadVar__1_33, SetC_17, cont, cont_env_ptr);
}

static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__331__1_3_p_0(
  MR_Word TypeClassInfo_for_uenum_41,
  MR_Word SetB_16,
  MR_Box * LambdaHeadVar__1_32,
  MR_Cont cont,
  void * cont_env_ptr)
{
  mercury__sparse_bitset__member_2_p_1(TypeClassInfo_for_uenum_41, LambdaHeadVar__1_32, SetB_16, cont, cont_env_ptr);
}

static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__330__1_3_p_0(
  MR_Word TypeClassInfo_for_uenum_41,
  MR_Word SetA_15,
  MR_Box * LambdaHeadVar__1_31,
  MR_Cont cont,
  void * cont_env_ptr)
{
  mercury__tree_bitset__member_2_p_1(TypeClassInfo_for_uenum_41, LambdaHeadVar__1_31, SetA_15, cont, cont_env_ptr);
}

void MR_CALL 
mercury__test_bitset____Compare____bitset_error_1_0(
  MR_Word TypeInfo_for_T_66,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_64 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_65 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_64 == CastY_65);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_89 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
          MR_String Var_90 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_6;
                MR_Integer Var_95;

{
#define MR_PROC_LABEL mercury__test_bitset____Compare____bitset_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_90 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_95  = Res;
}
                succeeded = (Var_95 < (MR_Integer) 0);
                if (succeeded)
                  SubResult1_6 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_95 == (MR_Integer) 0);
                  if (succeeded)
                    SubResult1_6 = (MR_Integer) 0;
                  else
                    SubResult1_6 = (MR_Integer) 2;
                }
                succeeded = (SubResult1_6 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_6;
                else
                  mercury__test_bitset____Compare____test_bitset_1_0(TypeInfo_for_T_66, HeadVar__1_1, Var_89, ArgY2_8);
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_82 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_83 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_String Var_84 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_String ArgY1_26 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_27;
                MR_Integer Var_91;

{
#define MR_PROC_LABEL mercury__test_bitset____Compare____bitset_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_84 ;
	S2 = ArgY1_26 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_91  = Res;
}
                succeeded = (Var_91 < (MR_Integer) 0);
                if (succeeded)
                  SubResult1_27 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_91 == (MR_Integer) 0);
                  if (succeeded)
                    SubResult1_27 = (MR_Integer) 0;
                  else
                    SubResult1_27 = (MR_Integer) 2;
                }
                succeeded = (SubResult1_27 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_27;
                else
                {
                  MR_Word SubResult2_30;

                  mercury__test_bitset____Compare____test_bitset_1_0(TypeInfo_for_T_66, &SubResult2_30, Var_83, ArgY2_29);
                  succeeded = (SubResult2_30 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_30;
                  else
                    mercury__test_bitset____Compare____test_bitset_1_0(TypeInfo_for_T_66, HeadVar__1_1, Var_82, ArgY3_32);
                }
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
          MR_Word Var_85 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_86 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_87 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
          MR_String Var_88 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_String ArgY1_54 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_57 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_60 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word ArgY4_63 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 3))));
                MR_Word SubResult1_55;
                MR_Integer Var_93;

{
#define MR_PROC_LABEL mercury__test_bitset____Compare____bitset_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_88 ;
	S2 = ArgY1_54 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_93  = Res;
}
                succeeded = (Var_93 < (MR_Integer) 0);
                if (succeeded)
                  SubResult1_55 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_93 == (MR_Integer) 0);
                  if (succeeded)
                    SubResult1_55 = (MR_Integer) 0;
                  else
                    SubResult1_55 = (MR_Integer) 2;
                }
                succeeded = (SubResult1_55 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_55;
                else
                {
                  MR_Word SubResult2_58;

                  mercury__test_bitset____Compare____test_bitset_1_0(TypeInfo_for_T_66, &SubResult2_58, Var_87, ArgY2_57);
                  succeeded = (SubResult2_58 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_58;
                  else
                  {
                    MR_Word SubResult3_61;

                    mercury__test_bitset____Compare____test_bitset_1_0(TypeInfo_for_T_66, &SubResult3_61, Var_86, ArgY3_60);
                    succeeded = (SubResult3_61 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult3_61;
                    else
                      mercury__test_bitset____Compare____test_bitset_1_0(TypeInfo_for_T_66, HeadVar__1_1, Var_85, ArgY4_63);
                  }
                }
              }
              break;
          }
        }
        break;
    }
}

void MR_CALL 
mercury__test_bitset____Compare____test_bitset_1_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
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
    MR_Word SubResult1_6;

    mercury__tree_bitset____Compare____tree_bitset_1_0(TypeInfo_for_T_17, &SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__sparse_bitset____Compare____sparse_bitset_1_0(TypeInfo_for_T_17, &SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__fat_sparse_bitset____Compare____fat_sparse_bitset_1_0(TypeInfo_for_T_17, &SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__set_ordlist____Compare____set_ordlist_1_0(TypeInfo_for_T_17, HeadVar__1_1, ArgX4_13, ArgY4_14);
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
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
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

    succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(TypeInfo_for_T_13, ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(TypeInfo_for_T_13, ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = mercury__fat_sparse_bitset____Unify____fat_sparse_bitset_1_0(TypeInfo_for_T_13, ArgX3_7, ArgY3_8);
        if (succeeded)
          succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(TypeInfo_for_T_13, ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__test_bitset__foldl_4_p_1(
  MR_Word TypeInfo_for_Acc_23,
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Box Acc0_10,
  MR_Box * Acc_11)
{
  MR_bool succeeded;
  MR_Word TypeInfo_26_26;
  MR_Word SetA_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetC_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word SetS_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word ListA_12;
  MR_Word ListB_13;
  MR_Word ListC_14;
  MR_Word ListS_15;
  MR_Box AccA_16;
  MR_Box AccB_17;
  MR_Box AccC_18;
  MR_Box AccS_19;
  MR_Word Var_39;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word TypeInfo_28_28;
  MR_Word TypeInfo_32_32;
  MR_Word TypeInfo_36_36;
  MR_Integer PolyConst1_27;
  MR_Integer PolyConst1_31;
  MR_Integer PolyConst1_35;

  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_22, SetA_6, &ListA_12);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_22, SetB_7, &ListB_13);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_22, SetC_8, &ListC_14);
  ListS_15 = (MR_Word) (SetS_9);
  Var_39 = (MR_Word) (SetA_6);
  if (((MR_tag((MR_Word) Var_39)) == (MR_Integer) 1))
  {
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(1, Var_39, (MR_Integer) 1))));

    succeeded = mercury__tree_bitset__do_foldl_pred_4_p_3(TypeInfo_for_Acc_23, TypeClassInfo_for_uenum_22, Pred_5, Var_42, Acc0_10, &AccA_16);
  }
  else
  {
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_39, (MR_Integer) 0))));

    succeeded = mercury__tree_bitset__leaf_foldl_pred_4_p_3(TypeInfo_for_Acc_23, TypeClassInfo_for_uenum_22, Pred_5, Var_40, Acc0_10, &AccA_16);
  }
  if (succeeded)
  {
    Var_43 = (MR_Word) (SetB_7);
    succeeded = mercury__sparse_bitset__do_foldl_pred_4_p_3(TypeInfo_for_Acc_23, TypeClassInfo_for_uenum_22, Pred_5, Var_43, Acc0_10, &AccB_17);
    if (succeeded)
    {
      Var_44 = (MR_Word) (SetC_8);
      succeeded = mercury__fat_sparse_bitset__do_foldl_pred_4_p_3(TypeInfo_for_Acc_23, TypeClassInfo_for_uenum_22, Pred_5, Var_44, Acc0_10, &AccC_18);
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_1

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
        Var_45 = (MR_Word) (SetS_9);
        succeeded = mercury__list__foldl_4_p_3(TypeInfo_26_26, TypeInfo_for_Acc_23, Pred_5, Var_45, Acc0_10, &AccS_19);
        if (succeeded)
        {
          PolyConst1_27 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_22 ;
	Index = PolyConst1_27 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_28_28  = TypeInfo;
}
          succeeded = mercury__list____Unify____list_1_0(TypeInfo_28_28, ListA_12, ListS_15);
          if (succeeded)
          {
            PolyConst1_31 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_22 ;
	Index = PolyConst1_31 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_32_32  = TypeInfo;
}
            succeeded = mercury__list____Unify____list_1_0(TypeInfo_32_32, ListB_13, ListS_15);
            if (succeeded)
            {
              PolyConst1_35 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_22 ;
	Index = PolyConst1_35 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_36_36  = TypeInfo;
}
              succeeded = mercury__list____Unify____list_1_0(TypeInfo_36_36, ListC_14, ListS_15);
              if (succeeded)
              {
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Acc_23, AccA_16, AccS_19);
                if (succeeded)
                {
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Acc_23, AccB_17, AccS_19);
                  if (succeeded)
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Acc_23, AccC_18, AccS_19);
                }
              }
            }
          }
          if (succeeded)
            *Acc_11 = AccS_19;
          else
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.foldl\'/4", (MR_String) "failed");
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__test_bitset__foldl_4_p_0(
  MR_Word TypeInfo_for_Acc_23,
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Box Acc0_10,
  MR_Box * Acc_11)
{
  MR_bool succeeded;
  MR_Word TypeInfo_26_26;
  MR_Word SetA_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetC_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word SetS_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word ListA_12;
  MR_Word ListB_13;
  MR_Word ListC_14;
  MR_Word ListS_15;
  MR_Box AccA_16;
  MR_Box AccB_17;
  MR_Box AccC_18;
  MR_Box AccS_19;
  MR_Word Var_39;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word TypeInfo_28_28;
  MR_Word TypeInfo_32_32;
  MR_Word TypeInfo_36_36;
  MR_Integer PolyConst1_31;
  MR_Integer PolyConst1_35;

  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_22, SetA_6, &ListA_12);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_22, SetB_7, &ListB_13);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_22, SetC_8, &ListC_14);
  ListS_15 = (MR_Word) (SetS_9);
  Var_39 = (MR_Word) (SetA_6);
  if (((MR_tag((MR_Word) Var_39)) == (MR_Integer) 1))
  {
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(1, Var_39, (MR_Integer) 1))));

    mercury__tree_bitset__do_foldl_pred_4_p_0(TypeInfo_for_Acc_23, TypeClassInfo_for_uenum_22, Pred_5, Var_42, Acc0_10, &AccA_16);
  }
  else
  {
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_39, (MR_Integer) 0))));

    mercury__tree_bitset__leaf_foldl_pred_4_p_0(TypeInfo_for_Acc_23, TypeClassInfo_for_uenum_22, Pred_5, Var_40, Acc0_10, &AccA_16);
  }
  Var_43 = (MR_Word) (SetB_7);
  mercury__sparse_bitset__do_foldl_pred_4_p_0(TypeInfo_for_Acc_23, TypeClassInfo_for_uenum_22, Pred_5, Var_43, Acc0_10, &AccB_17);
  Var_44 = (MR_Word) (SetC_8);
  mercury__fat_sparse_bitset__do_foldl_pred_4_p_0(TypeInfo_for_Acc_23, TypeClassInfo_for_uenum_22, Pred_5, Var_44, Acc0_10, &AccC_18);
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_0

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
  Var_45 = (MR_Word) (SetS_9);
  mercury__list__foldl_4_p_0(TypeInfo_26_26, TypeInfo_for_Acc_23, Pred_5, Var_45, Acc0_10, &AccS_19);
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_0

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
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_28_28, ListA_12, ListS_15);
  if (succeeded)
  {
    PolyConst1_31 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_22 ;
	Index = PolyConst1_31 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_32_32  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_32_32, ListB_13, ListS_15);
    if (succeeded)
    {
      PolyConst1_35 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_22 ;
	Index = PolyConst1_35 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_36_36  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_36_36, ListC_14, ListS_15);
      if (succeeded)
      {
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Acc_23, AccA_16, AccS_19);
        if (succeeded)
        {
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Acc_23, AccB_17, AccS_19);
          if (succeeded)
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Acc_23, AccC_18, AccS_19);
        }
      }
    }
  }
  if (succeeded)
    *Acc_11 = AccS_19;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.foldl\'/4", (MR_String) "failed");
      return;
    }
}

MR_Box MR_CALL 
mercury__test_bitset__foldl_3_f_0(
  MR_Word TypeInfo_for_Acc_23,
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Word Func_5,
  MR_Word HeadVar__2_2,
  MR_Box Acc0_10)
{
  MR_bool succeeded;
  MR_Box Acc_11;
  MR_Word TypeInfo_26_26;
  MR_Word SetA_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetC_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word SetS_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word ListA_12;
  MR_Word ListB_13;
  MR_Word ListC_14;
  MR_Word ListS_15;
  MR_Box AccA_16;
  MR_Box AccB_17;
  MR_Box AccC_18;
  MR_Box AccS_19;
  MR_Word Var_40;
  MR_Word Var_44;
  MR_Word Var_46;
  MR_Word Var_48;
  MR_Word TypeInfo_28_28;
  MR_Word TypeInfo_32_32;
  MR_Word TypeInfo_36_36;
  MR_Integer PolyConst1_31;
  MR_Integer PolyConst1_35;

  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_22, SetA_6, &ListA_12);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_22, SetB_7, &ListB_13);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_22, SetC_8, &ListC_14);
  ListS_15 = (MR_Word) (SetS_9);
  Var_40 = (MR_Word) (SetA_6);
  if (((MR_tag((MR_Word) Var_40)) == (MR_Integer) 1))
  {
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(1, Var_40, (MR_Integer) 1))));

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_57_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(Func_5, TypeClassInfo_for_uenum_22, Var_43, Acc0_10, &AccA_16);
  }
  else
  {
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_40, (MR_Integer) 0))));

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_56_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(Func_5, TypeClassInfo_for_uenum_22, Var_41, Acc0_10, &AccA_16);
  }
  Var_44 = (MR_Word) (SetB_7);
  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__sparse_bitset_0(Func_5, TypeClassInfo_for_uenum_22, Var_44, Acc0_10, &AccB_17);
  Var_46 = (MR_Word) (SetC_8);
  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__fat_sparse_bitset_0(Func_5, TypeClassInfo_for_uenum_22, Var_46, Acc0_10, &AccC_18);
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_3_f_0

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
  Var_48 = (MR_Word) (SetS_9);
  AccS_19 = mercury__list__foldl_3_f_0(TypeInfo_26_26, TypeInfo_for_Acc_23, Func_5, Var_48, Acc0_10);
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_3_f_0

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
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_28_28, ListA_12, ListS_15);
  if (succeeded)
  {
    PolyConst1_31 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_3_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_22 ;
	Index = PolyConst1_31 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_32_32  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_32_32, ListB_13, ListS_15);
    if (succeeded)
    {
      PolyConst1_35 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_3_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_22 ;
	Index = PolyConst1_35 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_36_36  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_36_36, ListC_14, ListS_15);
      if (succeeded)
      {
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Acc_23, AccA_16, AccS_19);
        if (succeeded)
        {
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Acc_23, AccB_17, AccS_19);
          if (succeeded)
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Acc_23, AccC_18, AccS_19);
        }
      }
    }
  }
  if (succeeded)
    Acc_11 = AccS_19;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140test_bitset.foldl\'/3", (MR_String) "failed");
  return Acc_11;
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_57_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(
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

        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_57_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(Var_24, TypeClassInfo_for_uenum_20, Var_19, HeadVar__3_3, &Var_17);
      }
      else
      {
        MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, Var_15, (MR_Integer) 0))));

        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_56_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(Var_24, TypeClassInfo_for_uenum_20, Var_16, HeadVar__3_3, &Var_17);
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
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_56_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(
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
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_56_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_18  = Bits;
}
      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_55_54_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(Var_24, TypeClassInfo_for_uenum_20, (MR_Integer) 0, Var_14, Var_15, Var_18, HeadVar__3_3, &Var_19);
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
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_55_54_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(
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

              mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_55_54_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(Var_30, TypeClassInfo_for_uenum_26, HeadVar__1_8, Var_24, Var_20, Var_16, HeadVar__6_13, &Var_25);
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

              mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_55_54_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(Var_30, TypeClassInfo_for_uenum_26, HeadVar__1_8, HeadVar__3_10, Var_19, Var_16, HeadVar__6_13, &Var_22);
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
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__fat_sparse_bitset_0(
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
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__fat_sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_14  = Bits;
}
      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_53_57_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_6_p_in__fat_sparse_bitset_0(Var_20, TypeClassInfo_for_uenum_16, Var_9, Var_10, Var_14, HeadVar__3_3, &Var_15);
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
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_53_57_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_6_p_in__fat_sparse_bitset_0(
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
        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_53_57_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_6_p_in__fat_sparse_bitset_0(Var_26, TypeClassInfo_for_uenum_22, HeadVar__2_8, Var_17, Var_14, HeadVar__5_11, &Var_20);
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
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__sparse_bitset_0(
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
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_17  = Bits;
}
      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_54_52_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_6_p_in__sparse_bitset_0(Var_23, TypeClassInfo_for_uenum_19, Var_13, Var_14, Var_17, HeadVar__3_3, &Var_18);
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
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_54_52_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_6_p_in__sparse_bitset_0(
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
        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_54_52_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_6_p_in__sparse_bitset_0(Var_26, TypeClassInfo_for_uenum_22, HeadVar__2_8, Var_17, Var_14, HeadVar__5_11, &Var_20);
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
  MR_Word TypeClassInfo_for_uenum_34,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Word * ResultIn_10,
  MR_Word * ResultOut_11)
{
  MR_bool succeeded;
  MR_Word TypeInfo_37_37;
  MR_Word TypeInfo_14_80;
  MR_Word SetA_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetC_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word SetS_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word ListA_12;
  MR_Word ListB_13;
  MR_Word ListC_14;
  MR_Word ListS_15;
  MR_Word InSetA_16;
  MR_Word OutSetA_17;
  MR_Word InSetB_18;
  MR_Word OutSetB_19;
  MR_Word InSetC_20;
  MR_Word OutSetC_21;
  MR_Word InSetS_22;
  MR_Word OutSetS_23;
  MR_Word InListA_24;
  MR_Word OutListA_25;
  MR_Word InListB_26;
  MR_Word OutListB_27;
  MR_Word InListC_28;
  MR_Word OutListC_29;
  MR_Word InListS_30;
  MR_Word OutListS_31;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_89;
  MR_Word TypeInfo_41_41;
  MR_Word TypeInfo_45_45;
  MR_Word TypeInfo_49_49;
  MR_Word TypeInfo_53_53;
  MR_Word TypeInfo_57_57;
  MR_Word TypeInfo_61_61;
  MR_Word TypeInfo_65_65;
  MR_Word TypeInfo_69_69;
  MR_Word TypeInfo_73_73;
  MR_Integer PolyConst1_44;
  MR_Integer PolyConst1_48;
  MR_Integer PolyConst1_52;
  MR_Integer PolyConst1_56;
  MR_Integer PolyConst1_60;
  MR_Integer PolyConst1_64;
  MR_Integer PolyConst1_68;
  MR_Integer PolyConst1_72;

  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_34, SetA_6, &ListA_12);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_34, SetB_7, &ListB_13);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_34, SetC_8, &ListC_14);
  ListS_15 = (MR_Word) (SetS_9);
  Var_89 = (MR_Word) (SetA_6);
  if (((MR_tag((MR_Word) Var_89)) == (MR_Integer) 1))
  {
    MR_Word Var_92 = ((MR_Word) ((MR_hl_field(1, Var_89, (MR_Integer) 1))));

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_uenum_34, TypeClassInfo_for_uenum_34, Var_92, (MR_Word) ((MR_Unsigned) 0U), &Var_76);
  }
  else
  {
    MR_Word Var_90 = ((MR_Word) ((MR_hl_field(0, Var_89, (MR_Integer) 0))));

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_uenum_34, TypeClassInfo_for_uenum_34, Var_90, (MR_Word) ((MR_Unsigned) 0U), &Var_76);
  }
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_34 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_14_80  = TypeInfo;
}
  mercury__list__filter_4_p_0(TypeInfo_14_80, Pred_5, Var_76, &Var_77, &Var_78);
  InSetA_16 = mercury__tree_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_uenum_34, Var_77);
  OutSetA_17 = mercury__tree_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_uenum_34, Var_78);
  mercury__sparse_bitset__filter_4_p_0(TypeClassInfo_for_uenum_34, Pred_5, SetB_7, &InSetB_18, &OutSetB_19);
  mercury__fat_sparse_bitset__filter_4_p_0(TypeClassInfo_for_uenum_34, Pred_5, SetC_8, &InSetC_20, &OutSetC_21);
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_34 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_37_37  = TypeInfo;
}
  mercury__set_ordlist__filter_4_p_0(TypeInfo_37_37, Pred_5, SetS_9, &InSetS_22, &OutSetS_23);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_34, InSetA_16, &InListA_24);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_34, OutSetA_17, &OutListA_25);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_34, InSetB_18, &InListB_26);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_34, OutSetB_19, &OutListB_27);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_34, InSetC_20, &InListC_28);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_34, OutSetC_21, &OutListC_29);
  InListS_30 = (MR_Word) (InSetS_22);
  OutListS_31 = (MR_Word) (OutSetS_23);
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_34 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_41_41  = TypeInfo;
}
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_41_41, ListA_12, ListS_15);
  if (succeeded)
  {
    PolyConst1_44 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_34 ;
	Index = PolyConst1_44 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_45_45  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_45_45, ListB_13, ListS_15);
    if (succeeded)
    {
      PolyConst1_48 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_34 ;
	Index = PolyConst1_48 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_49_49  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_49_49, ListC_14, ListS_15);
      if (succeeded)
      {
        PolyConst1_52 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_34 ;
	Index = PolyConst1_52 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_53_53  = TypeInfo;
}
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_53_53, InListA_24, InListS_30);
        if (succeeded)
        {
          PolyConst1_56 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_34 ;
	Index = PolyConst1_56 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_57_57  = TypeInfo;
}
          succeeded = mercury__list____Unify____list_1_0(TypeInfo_57_57, InListB_26, InListS_30);
          if (succeeded)
          {
            PolyConst1_60 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_34 ;
	Index = PolyConst1_60 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_61_61  = TypeInfo;
}
            succeeded = mercury__list____Unify____list_1_0(TypeInfo_61_61, InListC_28, InListS_30);
            if (succeeded)
            {
              PolyConst1_64 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_34 ;
	Index = PolyConst1_64 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_65_65  = TypeInfo;
}
              succeeded = mercury__list____Unify____list_1_0(TypeInfo_65_65, OutListA_25, OutListS_31);
              if (succeeded)
              {
                PolyConst1_68 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_34 ;
	Index = PolyConst1_68 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_69_69  = TypeInfo;
}
                succeeded = mercury__list____Unify____list_1_0(TypeInfo_69_69, OutListB_27, OutListS_31);
                if (succeeded)
                {
                  PolyConst1_72 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_34 ;
	Index = PolyConst1_72 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_73_73  = TypeInfo;
}
                  succeeded = mercury__list____Unify____list_1_0(TypeInfo_73_73, OutListC_29, OutListS_31);
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
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *ResultIn_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (InSetA_16));
      MR_hl_field(0, base, 1) = ((MR_Box) (InSetB_18));
      MR_hl_field(0, base, 2) = ((MR_Box) (InSetC_20));
      MR_hl_field(0, base, 3) = ((MR_Box) (InSetS_22));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *ResultOut_11 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (OutSetA_17));
      MR_hl_field(0, base, 1) = ((MR_Box) (OutSetB_19));
      MR_hl_field(0, base, 2) = ((MR_Box) (OutSetC_21));
      MR_hl_field(0, base, 3) = ((MR_Box) (OutSetS_23));
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
  MR_Word TypeClassInfo_for_uenum_24,
  MR_Word Pred_4,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Result_9;
  MR_Word TypeInfo_27_27;
  MR_Word TypeInfo_11_56;
  MR_Word TypeInfo_11_74;
  MR_Word TypeInfo_11_78;
  MR_Word SetA_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetC_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word SetS_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word ListA_10;
  MR_Word ListB_11;
  MR_Word ListC_12;
  MR_Word ListS_13;
  MR_Word InSetA_14;
  MR_Word InSetB_15;
  MR_Word InSetC_16;
  MR_Word InSetS_17;
  MR_Word InListA_18;
  MR_Word InListB_19;
  MR_Word InListC_20;
  MR_Word InListS_21;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_65;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word TypeInfo_30_30;
  MR_Word TypeInfo_34_34;
  MR_Word TypeInfo_38_38;
  MR_Word TypeInfo_42_42;
  MR_Word TypeInfo_46_46;
  MR_Word TypeInfo_50_50;
  MR_Integer PolyConst1_33;
  MR_Integer PolyConst1_37;
  MR_Integer PolyConst1_41;
  MR_Integer PolyConst1_45;
  MR_Integer PolyConst1_49;

  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_24, SetA_5, &ListA_10);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_24, SetB_6, &ListB_11);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_24, SetC_7, &ListC_12);
  ListS_13 = (MR_Word) (SetS_8);
  Var_65 = (MR_Word) (SetA_5);
  if (((MR_tag((MR_Word) Var_65)) == (MR_Integer) 1))
  {
    MR_Word Var_68 = ((MR_Word) ((MR_hl_field(1, Var_65, (MR_Integer) 1))));

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_uenum_24, TypeClassInfo_for_uenum_24, Var_68, (MR_Word) ((MR_Unsigned) 0U), &Var_53);
  }
  else
  {
    MR_Word Var_66 = ((MR_Word) ((MR_hl_field(0, Var_65, (MR_Integer) 0))));

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_uenum_24, TypeClassInfo_for_uenum_24, Var_66, (MR_Word) ((MR_Unsigned) 0U), &Var_53);
  }
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_24 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_11_56  = TypeInfo;
}
  mercury__list__filter_3_p_0(TypeInfo_11_56, Pred_4, Var_53, &Var_54);
  InSetA_14 = mercury__tree_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_uenum_24, Var_54);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_24, SetB_6, &Var_71);
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_24 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_11_74  = TypeInfo;
}
  mercury__list__filter_3_p_0(TypeInfo_11_74, Pred_4, Var_71, &Var_72);
  mercury__sparse_bitset__sorted_list_to_set_2_p_0(TypeClassInfo_for_uenum_24, Var_72, &InSetB_15);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_24, SetC_7, &Var_75);
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_24 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_11_78  = TypeInfo;
}
  mercury__list__filter_3_p_0(TypeInfo_11_78, Pred_4, Var_75, &Var_76);
  mercury__fat_sparse_bitset__sorted_list_to_set_2_p_0(TypeClassInfo_for_uenum_24, Var_76, &InSetC_16);
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_24 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_27_27  = TypeInfo;
}
  Var_79 = (MR_Word) (SetS_8);
  mercury__list__filter_3_p_0(TypeInfo_27_27, Pred_4, Var_79, &Var_80);
  if ((Var_80 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_81 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Var_82 = (MR_hl_field(1, Var_80, (MR_Integer) 0));
    MR_Word Var_83 = ((MR_Word) ((MR_hl_field(1, Var_80, (MR_Integer) 1))));

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_27_27, Var_82, Var_83, &Var_81);
  }
  InSetS_17 = (MR_Word) (Var_81);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_24, InSetA_14, &InListA_18);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_24, InSetB_15, &InListB_19);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_24, InSetC_16, &InListC_20);
  InListS_21 = (MR_Word) (InSetS_17);
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

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
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_30_30, ListA_10, ListS_13);
  if (succeeded)
  {
    PolyConst1_33 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_24 ;
	Index = PolyConst1_33 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_34_34  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_34_34, ListB_11, ListS_13);
    if (succeeded)
    {
      PolyConst1_37 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_24 ;
	Index = PolyConst1_37 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_38_38  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_38_38, ListC_12, ListS_13);
      if (succeeded)
      {
        PolyConst1_41 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_24 ;
	Index = PolyConst1_41 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_42_42  = TypeInfo;
}
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_42_42, InListA_18, InListS_21);
        if (succeeded)
        {
          PolyConst1_45 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_24 ;
	Index = PolyConst1_45 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_46_46  = TypeInfo;
}
          succeeded = mercury__list____Unify____list_1_0(TypeInfo_46_46, InListB_19, InListS_21);
          if (succeeded)
          {
            PolyConst1_49 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_24 ;
	Index = PolyConst1_49 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_50_50  = TypeInfo;
}
            succeeded = mercury__list____Unify____list_1_0(TypeInfo_50_50, InListC_20, InListS_21);
          }
        }
      }
    }
  }
  if (succeeded)
    {
      Result_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_9, 0) = ((MR_Box) (InSetA_14));
      MR_hl_field(0, Result_9, 1) = ((MR_Box) (InSetB_15));
      MR_hl_field(0, Result_9, 2) = ((MR_Box) (InSetC_16));
      MR_hl_field(0, Result_9, 3) = ((MR_Box) (InSetS_17));
    }
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140test_bitset.filter\'/2", (MR_String) "failed");
  return Result_9;
}

MR_bool MR_CALL 
mercury__test_bitset__all_true_2_p_0(
  MR_Word TypeClassInfo_for_uenum_14,
  MR_Word Pred_3,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word SetA_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetC_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word SetS_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word MaybeA_8;
  MR_Word MaybeB_9;
  MR_Word MaybeC_10;
  MR_Word MaybeS_11;
  MR_Word Var_17 = (MR_Word) (SetA_4);
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word TypeInfo_16_16;
  MR_Word Var_23;

  if (((MR_tag((MR_Word) Var_17)) == (MR_Integer) 1))
  {
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, Var_17, (MR_Integer) 1))));

    succeeded = mercury__tree_bitset__interior_all_true_2_p_0(TypeClassInfo_for_uenum_14, Pred_3, Var_20);
  }
  else
  {
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));

    succeeded = mercury__tree_bitset__leaf_all_true_2_p_0(TypeClassInfo_for_uenum_14, Pred_3, Var_18);
  }
  if (succeeded)
    MaybeA_8 = (MR_Integer) 1;
  else
    MaybeA_8 = (MR_Integer) 0;
  Var_21 = (MR_Word) (SetB_5);
  succeeded = mercury__sparse_bitset__all_true_node_2_p_0(TypeClassInfo_for_uenum_14, Pred_3, Var_21);
  if (succeeded)
    MaybeB_9 = (MR_Integer) 1;
  else
    MaybeB_9 = (MR_Integer) 0;
  Var_22 = (MR_Word) (SetC_6);
  succeeded = mercury__fat_sparse_bitset__all_true_node_2_p_0(TypeClassInfo_for_uenum_14, Pred_3, Var_22);
  if (succeeded)
    MaybeC_10 = (MR_Integer) 1;
  else
    MaybeC_10 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__test_bitset__all_true_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_14 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_16_16  = TypeInfo;
}
  Var_23 = (MR_Word) (SetS_7);
  succeeded = mercury__list__all_true_2_p_0(TypeInfo_16_16, Pred_3, Var_23);
  if (succeeded)
    MaybeS_11 = (MR_Integer) 1;
  else
    MaybeS_11 = (MR_Integer) 0;
  succeeded = (MaybeA_8 == MaybeS_11);
  if (succeeded)
  {
    succeeded = (MaybeB_9 == MaybeS_11);
    if (succeeded)
      succeeded = (MaybeC_10 == MaybeS_11);
  }
  if (succeeded)
    succeeded = (MaybeS_11 == (MR_Integer) 1);
  else
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.all_true\'/2", (MR_String) "failed");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_Integer MR_CALL 
mercury__test_bitset__count_1_f_0(
  MR_Word TypeClassInfo_for_uenum_14,
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Integer Count_7;
  MR_Word TypeInfo_16_16;
  MR_Word SetA_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word SetB_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word SetC_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
  MR_Word SetS_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
  MR_Integer CountA_8;
  MR_Integer CountB_9;
  MR_Integer CountC_10;
  MR_Integer CountS_11;
  MR_Word Var_22 = (MR_Word) (SetA_3);
  MR_Word Var_31;
  MR_Word Var_37;
  MR_Word Var_40;

  if (((MR_tag((MR_Word) Var_22)) == (MR_Integer) 1))
  {
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, Var_22, (MR_Integer) 1))));

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_56_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_uenum_14, Var_25, (MR_Integer) 0, &CountA_8);
  }
  else
  {
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_22, (MR_Integer) 0))));

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_55_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_uenum_14, Var_23, (MR_Integer) 0, &CountA_8);
  }
  Var_31 = (MR_Word) (SetB_4);
  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_51_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__sparse_bitset_0(TypeClassInfo_for_uenum_14, Var_31, (MR_Integer) 0, &CountB_9);
  Var_37 = (MR_Word) (SetC_5);
  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_53_56_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__fat_sparse_bitset_0(TypeClassInfo_for_uenum_14, Var_37, (MR_Integer) 0, &CountC_10);
{
#define MR_PROC_LABEL mercury__test_bitset__count_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_14 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_16_16  = TypeInfo;
}
  Var_40 = (MR_Word) (SetS_6);
  mercury__list__length_acc_3_p_0(TypeInfo_16_16, Var_40, (MR_Integer) 0, &CountS_11);
  succeeded = (CountA_8 == CountS_11);
  if (succeeded)
  {
    succeeded = (CountB_9 == CountS_11);
    if (succeeded)
      succeeded = (CountC_10 == CountS_11);
  }
  if (succeeded)
    Count_7 = CountS_11;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140test_bitset.count\'/1", (MR_String) "failed");
  return Count_7;
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_56_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(
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

        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_56_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_uenum_20, Var_19, HeadVar__3_3, &Var_17);
      }
      else
      {
        MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, Var_15, (MR_Integer) 0))));

        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_55_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_uenum_20, Var_16, HeadVar__3_3, &Var_17);
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
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_55_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(
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
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_55_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_18  = Bits;
}
      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_50_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(TypeClassInfo_for_uenum_20, (MR_Integer) 0, Var_14, Var_15, Var_18, HeadVar__3_3, &Var_19);
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
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_50_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(
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

              mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_50_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(TypeClassInfo_for_uenum_26, HeadVar__1_8, Var_24, Var_20, Var_16, HeadVar__6_13, &Var_25);
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

              mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_50_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(TypeClassInfo_for_uenum_26, HeadVar__1_8, HeadVar__3_10, Var_19, Var_16, HeadVar__6_13, &Var_22);
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
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_51_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__sparse_bitset_0(
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
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_51_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_17  = Bits;
}
      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_48_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_6_p_in__sparse_bitset_0(TypeClassInfo_for_uenum_19, Var_13, Var_14, Var_17, HeadVar__3_3, &Var_18);
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
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_48_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_6_p_in__sparse_bitset_0(
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
        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_48_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_6_p_in__sparse_bitset_0(TypeClassInfo_for_uenum_22, HeadVar__2_8, Var_17, Var_14, HeadVar__5_11, &Var_20);
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
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_53_56_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__fat_sparse_bitset_0(
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
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_53_56_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__fat_sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_14  = Bits;
}
      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_51_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_6_p_in__fat_sparse_bitset_0(TypeClassInfo_for_uenum_16, Var_9, Var_10, Var_14, HeadVar__3_3, &Var_15);
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
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_51_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_6_p_in__fat_sparse_bitset_0(
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
        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_51_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_6_p_in__fat_sparse_bitset_0(TypeClassInfo_for_uenum_22, HeadVar__2_8, Var_17, Var_14, HeadVar__5_11, &Var_20);
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
  MR_Word TypeClassInfo_for_uenum_14,
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word List_7;
  MR_Word A_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word B_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word C_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
  MR_Word S_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
  MR_Word ListA_8;
  MR_Word ListB_9;
  MR_Word ListC_10;
  MR_Word ListS_11;
  MR_Word Var_37 = (MR_Word) (A_3);
  MR_Word TypeInfo_18_18;
  MR_Word TypeInfo_22_22;
  MR_Word TypeInfo_26_26;
  MR_Integer PolyConst1_21;
  MR_Integer PolyConst1_25;

  if (((MR_tag((MR_Word) Var_37)) == (MR_Integer) 1))
  {
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(1, Var_37, (MR_Integer) 1))));

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_uenum_14, TypeClassInfo_for_uenum_14, Var_40, (MR_Word) ((MR_Unsigned) 0U), &ListA_8);
  }
  else
  {
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_37, (MR_Integer) 0))));

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_uenum_14, TypeClassInfo_for_uenum_14, Var_38, (MR_Word) ((MR_Unsigned) 0U), &ListA_8);
  }
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_14, B_4, &ListB_9);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_14, C_5, &ListC_10);
  ListS_11 = (MR_Word) (S_6);
{
#define MR_PROC_LABEL mercury__test_bitset__to_sorted_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_14 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_18_18  = TypeInfo;
}
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_18_18, ListA_8, ListS_11);
  if (succeeded)
  {
    PolyConst1_21 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__to_sorted_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_14 ;
	Index = PolyConst1_21 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_22_22  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_22_22, ListB_9, ListS_11);
    if (succeeded)
    {
      PolyConst1_25 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__to_sorted_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_14 ;
	Index = PolyConst1_25 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_26_26  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_26_26, ListC_10, ListS_11);
    }
  }
  if (succeeded)
    List_7 = ListS_11;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140test_bitset.to_sorted_list\'/1", (MR_String) "failed");
  return List_7;
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(
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

      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(Var_29, TypeClassInfo_for_uenum_20, Var_10, HeadVar__3_3, &Var_13);
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

        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(Var_29, TypeClassInfo_for_uenum_20, Var_17, Var_13, HeadVar__4_4);
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(
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

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(Var_29, TypeClassInfo_for_uenum_20, Var_10, HeadVar__3_3, &Var_13);
    Var_15 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
    Var_16 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_19  = Bits;
}
    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(Var_29, TypeClassInfo_for_uenum_20, (MR_Integer) 1, Var_15, Var_16, Var_19, Var_13, HeadVar__4_4);
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(
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

              mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(Var_35, TypeClassInfo_for_uenum_26, HeadVar__1_8, Var_24, Var_20, Var_16, HeadVar__6_13, &Var_25);
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

              mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(Var_35, TypeClassInfo_for_uenum_26, HeadVar__1_8, HeadVar__3_10, Var_19, Var_16, HeadVar__6_13, &Var_22);
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
  MR_Word TypeClassInfo_for_uenum_11,
  MR_Word List_3)
{
  MR_Word Result_4;
  MR_Word TypeInfo_13_13;
  MR_Word SetA_5;
  MR_Word SetB_6;
  MR_Word SetC_7;
  MR_Word SetS_8;
  MR_Word Var_10;
  MR_Word Var_14;

  SetA_5 = mercury__tree_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_uenum_11, List_3);
  mercury__sparse_bitset__sorted_list_to_set_2_p_0(TypeClassInfo_for_uenum_11, List_3, &SetB_6);
  mercury__fat_sparse_bitset__sorted_list_to_set_2_p_0(TypeClassInfo_for_uenum_11, List_3, &SetC_7);
{
#define MR_PROC_LABEL mercury__test_bitset__sorted_list_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_11 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_13_13  = TypeInfo;
}
  if ((List_3 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_14 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Var_15 = (MR_hl_field(1, List_3, (MR_Integer) 0));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(1, List_3, (MR_Integer) 1))));

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_13_13, Var_15, Var_16, &Var_14);
  }
  SetS_8 = (MR_Word) (Var_14);
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (SetA_5));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (SetB_6));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (SetC_7));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (SetS_8));
  }
  mercury__test_bitset__check0_3_p_0(TypeClassInfo_for_uenum_11, (MR_String) "sorted_list_to_set", Var_10, &Result_4);
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
  MR_Word TypeClassInfo_for_uenum_11,
  MR_Word List_3)
{
  MR_Word Result_4;
  MR_Word TypeInfo_13_13;
  MR_Word TypeInfo_8_16;
  MR_Word TypeInfo_10_22;
  MR_Word TypeInfo_10_31;
  MR_Word SetA_5;
  MR_Word SetB_6;
  MR_Word SetC_7;
  MR_Word SetS_8;
  MR_Word Var_10;
  MR_Word Var_14;
  MR_Integer Var_17;
  MR_Word Var_20;
  MR_Word Var_29;
  MR_Word Var_37;
  MR_Integer Var_38;

{
#define MR_PROC_LABEL mercury__test_bitset__list_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_11 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_8_16  = TypeInfo;
}
  mercury__list__length_acc_3_p_0(TypeInfo_8_16, List_3, (MR_Integer) 0, &Var_17);
  mercury__list__merge_sort_3_p_0(TypeInfo_8_16, Var_17, List_3, &Var_14);
  SetA_5 = mercury__tree_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_uenum_11, Var_14);
  mercury__sparse_bitset__list_to_set_get_runs_3_p_0(TypeClassInfo_for_uenum_11, List_3, (MR_Word) ((MR_Unsigned) 0U), &Var_20);
{
#define MR_PROC_LABEL mercury__test_bitset__list_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_11 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_22  = TypeInfo;
}
  if ((Var_20 == (MR_Word) ((MR_Unsigned) 0U)))
    SetB_6 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
  {
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 0))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 1))));

    mercury__sparse_bitset__union_list_passes_3_p_0(TypeInfo_10_22, Var_24, Var_25, &SetB_6);
  }
  mercury__fat_sparse_bitset__list_to_set_get_runs_3_p_0(TypeClassInfo_for_uenum_11, List_3, (MR_Word) ((MR_Unsigned) 0U), &Var_29);
{
#define MR_PROC_LABEL mercury__test_bitset__list_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_11 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_31  = TypeInfo;
}
  if ((Var_29 == (MR_Word) ((MR_Unsigned) 0U)))
    SetC_7 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
  {
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(1, Var_29, (MR_Integer) 0))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(1, Var_29, (MR_Integer) 1))));

    mercury__fat_sparse_bitset__union_list_passes_3_p_0(TypeInfo_10_31, Var_33, Var_34, &SetC_7);
  }
{
#define MR_PROC_LABEL mercury__test_bitset__list_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_11 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_13_13  = TypeInfo;
}
  mercury__list__length_acc_3_p_0(TypeInfo_13_13, List_3, (MR_Integer) 0, &Var_38);
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_13_13, Var_38, List_3, &Var_37);
  SetS_8 = (MR_Word) (Var_37);
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (SetA_5));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (SetB_6));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (SetC_7));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (SetS_8));
  }
  mercury__test_bitset__check0_3_p_0(TypeClassInfo_for_uenum_11, (MR_String) "list_to_set", Var_10, &Result_4);
  return Result_4;
}

void MR_CALL 
mercury__test_bitset__divide_by_set_4_p_0(
  MR_Word TypeClassInfo_for_uenum_43,
  MR_Word DivBy_5,
  MR_Word Set_6,
  MR_Word * ResultIn_7,
  MR_Word * ResultOut_8)
{
  MR_bool succeeded;
  MR_Word TypeInfo_45_45;
  MR_Word DivByA_9 = ((MR_Word) ((MR_hl_field(0, DivBy_5, (MR_Integer) 0))));
  MR_Word DivByB_10 = ((MR_Word) ((MR_hl_field(0, DivBy_5, (MR_Integer) 1))));
  MR_Word DivByC_11 = ((MR_Word) ((MR_hl_field(0, DivBy_5, (MR_Integer) 2))));
  MR_Word DivByS_12 = ((MR_Word) ((MR_hl_field(0, DivBy_5, (MR_Integer) 3))));
  MR_Word SetA_13 = ((MR_Word) ((MR_hl_field(0, Set_6, (MR_Integer) 0))));
  MR_Word SetB_14 = ((MR_Word) ((MR_hl_field(0, Set_6, (MR_Integer) 1))));
  MR_Word SetC_15 = ((MR_Word) ((MR_hl_field(0, Set_6, (MR_Integer) 2))));
  MR_Word SetS_16 = ((MR_Word) ((MR_hl_field(0, Set_6, (MR_Integer) 3))));
  MR_Word InSetA_17;
  MR_Word OutSetA_18;
  MR_Word InSetB_19;
  MR_Word OutSetB_20;
  MR_Word InSetC_21;
  MR_Word OutSetC_22;
  MR_Word InSetS_23;
  MR_Word OutSetS_24;
  MR_Word DivListA_25;
  MR_Word ListA_26;
  MR_Word InListA_27;
  MR_Word OutListA_28;
  MR_Word DivListB_29;
  MR_Word ListB_30;
  MR_Word InListB_31;
  MR_Word OutListB_32;
  MR_Word DivListC_33;
  MR_Word ListC_34;
  MR_Word InListC_35;
  MR_Word OutListC_36;
  MR_Word DivListS_37;
  MR_Word ListS_38;
  MR_Word InListS_39;
  MR_Word OutListS_40;
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

  mercury__tree_bitset__divide_by_set_4_p_0(TypeClassInfo_for_uenum_43, DivByA_9, SetA_13, &InSetA_17, &OutSetA_18);
  mercury__sparse_bitset__divide_by_set_4_p_0(TypeClassInfo_for_uenum_43, DivByB_10, SetB_14, &InSetB_19, &OutSetB_20);
  mercury__fat_sparse_bitset__divide_by_set_4_p_0(TypeClassInfo_for_uenum_43, DivByC_11, SetC_15, &InSetC_21, &OutSetC_22);
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_43 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_45_45  = TypeInfo;
}
  mercury__set_ordlist__divide_by_set_4_p_0(TypeInfo_45_45, DivByS_12, SetS_16, &InSetS_23, &OutSetS_24);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_43, DivByA_9, &DivListA_25);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_43, SetA_13, &ListA_26);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_43, InSetA_17, &InListA_27);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_43, OutSetA_18, &OutListA_28);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_43, DivByB_10, &DivListB_29);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_43, SetB_14, &ListB_30);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_43, InSetB_19, &InListB_31);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_43, OutSetB_20, &OutListB_32);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_43, DivByC_11, &DivListC_33);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_43, SetC_15, &ListC_34);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_43, InSetC_21, &InListC_35);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_43, OutSetC_22, &OutListC_36);
  DivListS_37 = (MR_Word) (DivByS_12);
  ListS_38 = (MR_Word) (SetS_16);
  InListS_39 = (MR_Word) (InSetS_23);
  OutListS_40 = (MR_Word) (OutSetS_24);
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_43 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_51_51  = TypeInfo;
}
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_51_51, DivListA_25, DivListS_37);
  if (succeeded)
  {
    PolyConst1_54 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_43 ;
	Index = PolyConst1_54 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_55_55  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_55_55, DivListB_29, DivListS_37);
    if (succeeded)
    {
      PolyConst1_58 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_43 ;
	Index = PolyConst1_58 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_59_59  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_59_59, DivListC_33, DivListS_37);
      if (succeeded)
      {
        PolyConst1_62 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_43 ;
	Index = PolyConst1_62 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_63_63  = TypeInfo;
}
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_63_63, ListA_26, ListS_38);
        if (succeeded)
        {
          PolyConst1_66 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_43 ;
	Index = PolyConst1_66 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_67_67  = TypeInfo;
}
          succeeded = mercury__list____Unify____list_1_0(TypeInfo_67_67, ListB_30, ListS_38);
          if (succeeded)
          {
            PolyConst1_70 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_43 ;
	Index = PolyConst1_70 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_71_71  = TypeInfo;
}
            succeeded = mercury__list____Unify____list_1_0(TypeInfo_71_71, ListC_34, ListS_38);
            if (succeeded)
            {
              PolyConst1_74 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_43 ;
	Index = PolyConst1_74 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_75_75  = TypeInfo;
}
              succeeded = mercury__list____Unify____list_1_0(TypeInfo_75_75, InListA_27, InListS_39);
              if (succeeded)
              {
                PolyConst1_78 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_43 ;
	Index = PolyConst1_78 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_79_79  = TypeInfo;
}
                succeeded = mercury__list____Unify____list_1_0(TypeInfo_79_79, InListB_31, InListS_39);
                if (succeeded)
                {
                  PolyConst1_82 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_43 ;
	Index = PolyConst1_82 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_83_83  = TypeInfo;
}
                  succeeded = mercury__list____Unify____list_1_0(TypeInfo_83_83, InListC_35, InListS_39);
                  if (succeeded)
                  {
                    PolyConst1_86 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_43 ;
	Index = PolyConst1_86 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_87_87  = TypeInfo;
}
                    succeeded = mercury__list____Unify____list_1_0(TypeInfo_87_87, OutListA_28, OutListS_40);
                    if (succeeded)
                    {
                      PolyConst1_90 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_43 ;
	Index = PolyConst1_90 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_91_91  = TypeInfo;
}
                      succeeded = mercury__list____Unify____list_1_0(TypeInfo_91_91, OutListB_32, OutListS_40);
                      if (succeeded)
                      {
                        PolyConst1_94 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_43 ;
	Index = PolyConst1_94 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_95_95  = TypeInfo;
}
                        succeeded = mercury__list____Unify____list_1_0(TypeInfo_95_95, OutListC_36, OutListS_40);
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
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *ResultIn_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (InSetA_17));
      MR_hl_field(0, base, 1) = ((MR_Box) (InSetB_19));
      MR_hl_field(0, base, 2) = ((MR_Box) (InSetC_21));
      MR_hl_field(0, base, 3) = ((MR_Box) (InSetS_23));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *ResultOut_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (OutSetA_18));
      MR_hl_field(0, base, 1) = ((MR_Box) (OutSetB_20));
      MR_hl_field(0, base, 2) = ((MR_Box) (OutSetC_22));
      MR_hl_field(0, base, 3) = ((MR_Box) (OutSetS_24));
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
  MR_Word TypeClassInfo_for_uenum_34,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Word * ResultIn_10,
  MR_Word * ResultOut_11)
{
  MR_bool succeeded;
  MR_Word TypeInfo_36_36;
  MR_Word SetA_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetC_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word SetS_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word InSetA_12;
  MR_Word OutSetA_13;
  MR_Word InSetB_14;
  MR_Word OutSetB_15;
  MR_Word InSetC_16;
  MR_Word OutSetC_17;
  MR_Word InSetS_18;
  MR_Word OutSetS_19;
  MR_Word ListA_20;
  MR_Word InListA_21;
  MR_Word OutListA_22;
  MR_Word ListB_23;
  MR_Word InListB_24;
  MR_Word OutListB_25;
  MR_Word ListC_26;
  MR_Word InListC_27;
  MR_Word OutListC_28;
  MR_Word ListS_29;
  MR_Word InListS_30;
  MR_Word OutListS_31;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word TypeInfo_41_41;
  MR_Word TypeInfo_45_45;
  MR_Word TypeInfo_49_49;
  MR_Word TypeInfo_53_53;
  MR_Word TypeInfo_57_57;
  MR_Word TypeInfo_61_61;
  MR_Word TypeInfo_65_65;
  MR_Word TypeInfo_69_69;
  MR_Word TypeInfo_73_73;
  MR_Integer PolyConst1_44;
  MR_Integer PolyConst1_48;
  MR_Integer PolyConst1_52;
  MR_Integer PolyConst1_56;
  MR_Integer PolyConst1_60;
  MR_Integer PolyConst1_64;
  MR_Integer PolyConst1_68;
  MR_Integer PolyConst1_72;

  mercury__tree_bitset__divide_4_p_0(TypeClassInfo_for_uenum_34, Pred_5, SetA_6, &InSetA_12, &OutSetA_13);
  Var_76 = (MR_Word) (SetB_7);
  mercury__sparse_bitset__divide_nodes_4_p_0(TypeClassInfo_for_uenum_34, Pred_5, Var_76, &Var_77, &Var_78);
  InSetB_14 = (MR_Word) (Var_77);
  OutSetB_15 = (MR_Word) (Var_78);
  Var_79 = (MR_Word) (SetC_8);
  mercury__fat_sparse_bitset__divide_nodes_4_p_0(TypeClassInfo_for_uenum_34, Pred_5, Var_79, &Var_80, &Var_81);
  InSetC_16 = (MR_Word) (Var_80);
  OutSetC_17 = (MR_Word) (Var_81);
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_34 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_36_36  = TypeInfo;
}
  Var_82 = (MR_Word) (SetS_9);
  mercury__set_ordlist__divide_loop_6_p_0(TypeInfo_36_36, Pred_5, Var_82, (MR_Word) ((MR_Unsigned) 0U), &Var_87, (MR_Word) ((MR_Unsigned) 0U), &Var_88);
  mercury__list__reverse_2_p_0(TypeInfo_36_36, Var_87, &Var_83);
  InSetS_18 = (MR_Word) (Var_83);
  mercury__list__reverse_2_p_0(TypeInfo_36_36, Var_88, &Var_84);
  OutSetS_19 = (MR_Word) (Var_84);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_34, SetA_6, &ListA_20);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_34, InSetA_12, &InListA_21);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_34, OutSetA_13, &OutListA_22);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_34, SetB_7, &ListB_23);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_34, InSetB_14, &InListB_24);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_34, OutSetB_15, &OutListB_25);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_34, SetC_8, &ListC_26);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_34, InSetC_16, &InListC_27);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_34, OutSetC_17, &OutListC_28);
  ListS_29 = (MR_Word) (SetS_9);
  InListS_30 = (MR_Word) (InSetS_18);
  OutListS_31 = (MR_Word) (OutSetS_19);
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_34 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_41_41  = TypeInfo;
}
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_41_41, ListA_20, ListS_29);
  if (succeeded)
  {
    PolyConst1_44 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_34 ;
	Index = PolyConst1_44 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_45_45  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_45_45, ListB_23, ListS_29);
    if (succeeded)
    {
      PolyConst1_48 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_34 ;
	Index = PolyConst1_48 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_49_49  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_49_49, ListC_26, ListS_29);
      if (succeeded)
      {
        PolyConst1_52 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_34 ;
	Index = PolyConst1_52 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_53_53  = TypeInfo;
}
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_53_53, InListA_21, InListS_30);
        if (succeeded)
        {
          PolyConst1_56 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_34 ;
	Index = PolyConst1_56 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_57_57  = TypeInfo;
}
          succeeded = mercury__list____Unify____list_1_0(TypeInfo_57_57, InListB_24, InListS_30);
          if (succeeded)
          {
            PolyConst1_60 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_34 ;
	Index = PolyConst1_60 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_61_61  = TypeInfo;
}
            succeeded = mercury__list____Unify____list_1_0(TypeInfo_61_61, InListC_27, InListS_30);
            if (succeeded)
            {
              PolyConst1_64 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_34 ;
	Index = PolyConst1_64 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_65_65  = TypeInfo;
}
              succeeded = mercury__list____Unify____list_1_0(TypeInfo_65_65, OutListA_22, OutListS_31);
              if (succeeded)
              {
                PolyConst1_68 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_34 ;
	Index = PolyConst1_68 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_69_69  = TypeInfo;
}
                succeeded = mercury__list____Unify____list_1_0(TypeInfo_69_69, OutListB_25, OutListS_31);
                if (succeeded)
                {
                  PolyConst1_72 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_34 ;
	Index = PolyConst1_72 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_73_73  = TypeInfo;
}
                  succeeded = mercury__list____Unify____list_1_0(TypeInfo_73_73, OutListC_28, OutListS_31);
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
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *ResultIn_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (InSetA_12));
      MR_hl_field(0, base, 1) = ((MR_Box) (InSetB_14));
      MR_hl_field(0, base, 2) = ((MR_Box) (InSetC_16));
      MR_hl_field(0, base, 3) = ((MR_Box) (InSetS_18));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *ResultOut_11 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (OutSetA_13));
      MR_hl_field(0, base, 1) = ((MR_Box) (OutSetB_15));
      MR_hl_field(0, base, 2) = ((MR_Box) (OutSetC_17));
      MR_hl_field(0, base, 3) = ((MR_Box) (OutSetS_19));
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
  MR_Word TypeClassInfo_for_uenum_21,
  MR_Word InL_4,
  MR_Word InR_5)
{
  MR_Word Result_6;
  MR_Word TypeInfo_23_23;
  MR_Word TypeInfo_26_26;
  MR_Word SetAL_7 = ((MR_Word) ((MR_hl_field(0, InL_4, (MR_Integer) 0))));
  MR_Word SetBL_8 = ((MR_Word) ((MR_hl_field(0, InL_4, (MR_Integer) 1))));
  MR_Word SetCL_9 = ((MR_Word) ((MR_hl_field(0, InL_4, (MR_Integer) 2))));
  MR_Word SetSL_10 = ((MR_Word) ((MR_hl_field(0, InL_4, (MR_Integer) 3))));
  MR_Word SetAR_11 = ((MR_Word) ((MR_hl_field(0, InR_5, (MR_Integer) 0))));
  MR_Word SetBR_12 = ((MR_Word) ((MR_hl_field(0, InR_5, (MR_Integer) 1))));
  MR_Word SetCR_13 = ((MR_Word) ((MR_hl_field(0, InR_5, (MR_Integer) 2))));
  MR_Word SetSR_14 = ((MR_Word) ((MR_hl_field(0, InR_5, (MR_Integer) 3))));
  MR_Word SetA_15;
  MR_Word SetB_16;
  MR_Word SetC_17;
  MR_Word SetS_18;
  MR_Word Var_20;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;

{
#define MR_PROC_LABEL mercury__test_bitset__difference_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_21 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_23_23  = TypeInfo;
}
  SetA_15 = mercury__tree_bitset__difference_2_f_0(TypeInfo_23_23, SetAL_7, SetAR_11);
  Var_27 = (MR_Word) (SetBL_8);
  Var_28 = (MR_Word) (SetBR_12);
  mercury__sparse_bitset__difference_loop_3_p_0(Var_27, Var_28, &Var_29);
  SetB_16 = (MR_Word) (Var_29);
  Var_30 = (MR_Word) (SetCL_9);
  Var_31 = (MR_Word) (SetCR_13);
  mercury__fat_sparse_bitset__difference_loop_3_p_0(Var_30, Var_31, &Var_32);
  SetC_17 = (MR_Word) (Var_32);
{
#define MR_PROC_LABEL mercury__test_bitset__difference_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_21 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_26_26  = TypeInfo;
}
  Var_33 = (MR_Word) (SetSL_10);
  Var_34 = (MR_Word) (SetSR_14);
  mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_26_26, Var_33, Var_34, &Var_35);
  SetS_18 = (MR_Word) (Var_35);
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (SetA_15));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (SetB_16));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) (SetC_17));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (SetS_18));
  }
  mercury__test_bitset__check2_5_p_0(TypeClassInfo_for_uenum_21, (MR_String) "difference", InL_4, InR_5, Var_20, &Result_6);
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
  MR_Word TypeClassInfo_for_uenum_16,
  MR_Word SetsABCS_3)
{
  MR_Word Result_4;
  MR_Word TypeInfo_18_18;
  MR_Word TypeInfo_19_19;
  MR_Word TypeInfo_20_20;
  MR_Word TypeInfo_21_21;
  MR_Word SetsA_5;
  MR_Word SetsB_6;
  MR_Word SetsC_7;
  MR_Word SetsS_8;
  MR_Word SetA_9;
  MR_Word SetB_10;
  MR_Word SetC_11;
  MR_Word SetS_12;
  MR_Word Var_15;

  mercury__test_bitset__get_sets_6_p_0(TypeClassInfo_for_uenum_16, (MR_String) "intersect_list", SetsABCS_3, &SetsA_5, &SetsB_6, &SetsC_7, &SetsS_8);
{
#define MR_PROC_LABEL mercury__test_bitset__intersect_list_1_f_0

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
  mercury__tree_bitset__intersect_list_2_p_0(TypeInfo_18_18, SetsA_5, &SetA_9);
{
#define MR_PROC_LABEL mercury__test_bitset__intersect_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_16 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_19_19  = TypeInfo;
}
  if ((SetsB_6 == (MR_Word) ((MR_Unsigned) 0U)))
    SetB_10 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
  {
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, SetsB_6, (MR_Integer) 0))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, SetsB_6, (MR_Integer) 1))));

    mercury__sparse_bitset__intersect_list_passes_3_p_0(TypeInfo_19_19, Var_23, Var_24, &SetB_10);
  }
{
#define MR_PROC_LABEL mercury__test_bitset__intersect_list_1_f_0

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
  if ((SetsC_7 == (MR_Word) ((MR_Unsigned) 0U)))
    SetC_11 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
  {
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(1, SetsC_7, (MR_Integer) 0))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(1, SetsC_7, (MR_Integer) 1))));

    mercury__fat_sparse_bitset__intersect_list_passes_3_p_0(TypeInfo_20_20, Var_28, Var_29, &SetC_11);
  }
{
#define MR_PROC_LABEL mercury__test_bitset__intersect_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_16 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_21_21  = TypeInfo;
}
  SetS_12 = mercury__set_ordlist__intersect_list_1_f_0(TypeInfo_21_21, SetsS_8);
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (SetA_9));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (SetB_10));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) (SetC_11));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (SetS_12));
  }
  mercury__test_bitset__check0_3_p_0(TypeClassInfo_for_uenum_16, (MR_String) "intersect_list", Var_15, &Result_4);
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
  MR_Word TypeClassInfo_for_uenum_21,
  MR_Word InL_4,
  MR_Word InR_5)
{
  MR_Word Result_6;
  MR_Word TypeInfo_23_23;
  MR_Word TypeInfo_26_26;
  MR_Word SetAL_7 = ((MR_Word) ((MR_hl_field(0, InL_4, (MR_Integer) 0))));
  MR_Word SetBL_8 = ((MR_Word) ((MR_hl_field(0, InL_4, (MR_Integer) 1))));
  MR_Word SetCL_9 = ((MR_Word) ((MR_hl_field(0, InL_4, (MR_Integer) 2))));
  MR_Word SetSL_10 = ((MR_Word) ((MR_hl_field(0, InL_4, (MR_Integer) 3))));
  MR_Word SetAR_11 = ((MR_Word) ((MR_hl_field(0, InR_5, (MR_Integer) 0))));
  MR_Word SetBR_12 = ((MR_Word) ((MR_hl_field(0, InR_5, (MR_Integer) 1))));
  MR_Word SetCR_13 = ((MR_Word) ((MR_hl_field(0, InR_5, (MR_Integer) 2))));
  MR_Word SetSR_14 = ((MR_Word) ((MR_hl_field(0, InR_5, (MR_Integer) 3))));
  MR_Word SetA_15;
  MR_Word SetB_16;
  MR_Word SetC_17;
  MR_Word SetS_18;
  MR_Word Var_20;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;

{
#define MR_PROC_LABEL mercury__test_bitset__intersect_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_21 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_23_23  = TypeInfo;
}
  SetA_15 = mercury__tree_bitset__intersect_2_f_0(TypeInfo_23_23, SetAL_7, SetAR_11);
  Var_27 = (MR_Word) (SetBL_8);
  Var_28 = (MR_Word) (SetBR_12);
  mercury__sparse_bitset__intersect_loop_3_p_0(Var_27, Var_28, &Var_29);
  SetB_16 = (MR_Word) (Var_29);
  Var_30 = (MR_Word) (SetCL_9);
  Var_31 = (MR_Word) (SetCR_13);
  mercury__fat_sparse_bitset__intersect_loop_3_p_0(Var_30, Var_31, &Var_32);
  SetC_17 = (MR_Word) (Var_32);
{
#define MR_PROC_LABEL mercury__test_bitset__intersect_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_21 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_26_26  = TypeInfo;
}
  Var_33 = (MR_Word) (SetSL_10);
  Var_34 = (MR_Word) (SetSR_14);
  mercury__set_ordlist__intersect_loop_3_p_0(TypeInfo_26_26, Var_33, Var_34, &Var_35);
  SetS_18 = (MR_Word) (Var_35);
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (SetA_15));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (SetB_16));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) (SetC_17));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (SetS_18));
  }
  mercury__test_bitset__check2_5_p_0(TypeClassInfo_for_uenum_21, (MR_String) "intersect", InL_4, InR_5, Var_20, &Result_6);
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
  MR_Word TypeClassInfo_for_uenum_16,
  MR_Word SetsABCS_3)
{
  MR_Word Result_4;
  MR_Word TypeInfo_18_18;
  MR_Word TypeInfo_19_19;
  MR_Word TypeInfo_20_20;
  MR_Word TypeInfo_21_21;
  MR_Word SetsA_5;
  MR_Word SetsB_6;
  MR_Word SetsC_7;
  MR_Word SetsS_8;
  MR_Word SetA_9;
  MR_Word SetB_10;
  MR_Word SetC_11;
  MR_Word SetS_12;
  MR_Word Var_15;

  mercury__test_bitset__get_sets_6_p_0(TypeClassInfo_for_uenum_16, (MR_String) "union_list", SetsABCS_3, &SetsA_5, &SetsB_6, &SetsC_7, &SetsS_8);
{
#define MR_PROC_LABEL mercury__test_bitset__union_list_1_f_0

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
  mercury__tree_bitset__union_list_2_p_0(TypeInfo_18_18, SetsA_5, &SetA_9);
{
#define MR_PROC_LABEL mercury__test_bitset__union_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_16 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_19_19  = TypeInfo;
}
  if ((SetsB_6 == (MR_Word) ((MR_Unsigned) 0U)))
    SetB_10 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
  {
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, SetsB_6, (MR_Integer) 0))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, SetsB_6, (MR_Integer) 1))));

    mercury__sparse_bitset__union_list_passes_3_p_0(TypeInfo_19_19, Var_23, Var_24, &SetB_10);
  }
{
#define MR_PROC_LABEL mercury__test_bitset__union_list_1_f_0

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
  if ((SetsC_7 == (MR_Word) ((MR_Unsigned) 0U)))
    SetC_11 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
  {
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(1, SetsC_7, (MR_Integer) 0))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(1, SetsC_7, (MR_Integer) 1))));

    mercury__fat_sparse_bitset__union_list_passes_3_p_0(TypeInfo_20_20, Var_28, Var_29, &SetC_11);
  }
{
#define MR_PROC_LABEL mercury__test_bitset__union_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_16 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_21_21  = TypeInfo;
}
  mercury__set_ordlist__union_list_loop_3_p_0(TypeInfo_21_21, SetsS_8, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &SetS_12);
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (SetA_9));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (SetB_10));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) (SetC_11));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (SetS_12));
  }
  mercury__test_bitset__check0_3_p_0(TypeClassInfo_for_uenum_16, (MR_String) "union_list", Var_15, &Result_4);
  return Result_4;
}

static void MR_CALL 
mercury__test_bitset__check0_3_p_0(
  MR_Word TypeClassInfo_for_uenum_16,
  MR_String Op_4,
  MR_Word TestIn_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Word InSetA_7 = ((MR_Word) ((MR_hl_field(0, TestIn_5, (MR_Integer) 0))));
  MR_Word InSetB_8 = ((MR_Word) ((MR_hl_field(0, TestIn_5, (MR_Integer) 1))));
  MR_Word InSetC_9 = ((MR_Word) ((MR_hl_field(0, TestIn_5, (MR_Integer) 2))));
  MR_Word InSetS_10 = ((MR_Word) ((MR_hl_field(0, TestIn_5, (MR_Integer) 3))));
  MR_Word ListA_11;
  MR_Word ListB_12;
  MR_Word ListC_13;
  MR_Word ListS_14;
  MR_Word TypeInfo_23_23;
  MR_Word TypeInfo_27_27;
  MR_Word TypeInfo_31_31;
  MR_Integer PolyConst1_26;
  MR_Integer PolyConst1_30;

  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_16, InSetA_7, &ListA_11);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_16, InSetB_8, &ListB_12);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_16, InSetC_9, &ListC_13);
  ListS_14 = (MR_Word) (InSetS_10);
{
#define MR_PROC_LABEL mercury__test_bitset__check0_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_16 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_23_23  = TypeInfo;
}
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_23_23, ListA_11, ListS_14);
  if (succeeded)
  {
    PolyConst1_26 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check0_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_16 ;
	Index = PolyConst1_26 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_27_27  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_27_27, ListB_12, ListS_14);
    if (succeeded)
    {
      PolyConst1_30 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check0_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_16 ;
	Index = PolyConst1_30 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_31_31  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_31_31, ListC_13, ListS_14);
    }
  }
  if (succeeded)
    *Result_6 = TestIn_5;
  else
  {
    MR_Word TypeInfo_19_19;
    MR_Word TypeInfo_21_21;
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_15, 0) = ((MR_Box) (Op_4));
      MR_hl_field(0, Var_15, 1) = ((MR_Box) (TestIn_5));
    }
{
#define MR_PROC_LABEL mercury__test_bitset__check0_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_16 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_19_19  = TypeInfo;
}
    {
      TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_21_21, 0) = ((MR_Box) (&mercury__test_bitset__test_bitset__type_ctor_info_bitset_error_1));
      MR_hl_field(0, TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_19_19));
    }
    {
      mercury__exception__throw_1_p_0(TypeInfo_21_21, ((MR_Box) (Var_15)));
      return;
    }
  }
}

static void MR_CALL 
mercury__test_bitset__get_sets_6_p_0(
  MR_Word TypeClassInfo_for_uenum_28,
  MR_String Op_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word SetA_9;
    MR_Word SetB_10;
    MR_Word SetC_11;
    MR_Word SetS_12;
    MR_Word SetsABCS_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word SetsA_14;
    MR_Word SetsB_15;
    MR_Word SetsC_16;
    MR_Word SetsS_17;
    MR_Word ListA_18;
    MR_Word ListB_19;
    MR_Word ListC_20;
    MR_Word ListS_21;
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TypeInfo_32_32;
    MR_Word TypeInfo_36_36;
    MR_Word TypeInfo_40_40;
    MR_Integer PolyConst1_35;
    MR_Integer PolyConst1_39;

    SetA_9 = ((MR_Word) ((MR_hl_field(0, Var_22, (MR_Integer) 0))));
    SetB_10 = ((MR_Word) ((MR_hl_field(0, Var_22, (MR_Integer) 1))));
    SetC_11 = ((MR_Word) ((MR_hl_field(0, Var_22, (MR_Integer) 2))));
    SetS_12 = ((MR_Word) ((MR_hl_field(0, Var_22, (MR_Integer) 3))));
    mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_28, SetA_9, &ListA_18);
    mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_28, SetB_10, &ListB_19);
    mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_28, SetC_11, &ListC_20);
    ListS_21 = (MR_Word) (SetS_12);
{
#define MR_PROC_LABEL mercury__test_bitset__get_sets_6_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_28 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_32_32  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_32_32, ListA_18, ListS_21);
    if (succeeded)
    {
      PolyConst1_35 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__get_sets_6_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_28 ;
	Index = PolyConst1_35 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_36_36  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_36_36, ListB_19, ListS_21);
      if (succeeded)
      {
        PolyConst1_39 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__get_sets_6_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_28 ;
	Index = PolyConst1_39 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_40_40  = TypeInfo;
}
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_40_40, ListC_20, ListS_21);
      }
    }
    if (succeeded)
      mercury__test_bitset__get_sets_6_p_0(TypeClassInfo_for_uenum_28, Op_1, SetsABCS_13, &SetsA_14, &SetsB_15, &SetsC_16, &SetsS_17);
    else
    {
      MR_String Var_24;
      MR_String Var_26;

      mercury__string__append_3_p_2(Op_1, (MR_String) " arg list", &Var_26);
      mercury__string__append_3_p_2((MR_String) "unequal sets in ", Var_26, &Var_24);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.get_sets\'/6", Var_24);
        return;
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (SetA_9));
      MR_hl_field(1, base, 1) = ((MR_Box) (SetsA_14));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (SetB_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (SetsB_15));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (SetC_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (SetsC_16));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (SetS_12));
      MR_hl_field(1, base, 1) = ((MR_Box) (SetsS_17));
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
  MR_Word TypeClassInfo_for_uenum_21,
  MR_Word InL_4,
  MR_Word InR_5)
{
  MR_Word Result_6;
  MR_Word TypeInfo_23_23;
  MR_Word TypeInfo_26_26;
  MR_Word SetAL_7 = ((MR_Word) ((MR_hl_field(0, InL_4, (MR_Integer) 0))));
  MR_Word SetBL_8 = ((MR_Word) ((MR_hl_field(0, InL_4, (MR_Integer) 1))));
  MR_Word SetCL_9 = ((MR_Word) ((MR_hl_field(0, InL_4, (MR_Integer) 2))));
  MR_Word SetSL_10 = ((MR_Word) ((MR_hl_field(0, InL_4, (MR_Integer) 3))));
  MR_Word SetAR_11 = ((MR_Word) ((MR_hl_field(0, InR_5, (MR_Integer) 0))));
  MR_Word SetBR_12 = ((MR_Word) ((MR_hl_field(0, InR_5, (MR_Integer) 1))));
  MR_Word SetCR_13 = ((MR_Word) ((MR_hl_field(0, InR_5, (MR_Integer) 2))));
  MR_Word SetSR_14 = ((MR_Word) ((MR_hl_field(0, InR_5, (MR_Integer) 3))));
  MR_Word SetA_15;
  MR_Word SetB_16;
  MR_Word SetC_17;
  MR_Word SetS_18;
  MR_Word Var_20;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;

{
#define MR_PROC_LABEL mercury__test_bitset__union_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_21 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_23_23  = TypeInfo;
}
  SetA_15 = mercury__tree_bitset__union_2_f_0(TypeInfo_23_23, SetAL_7, SetAR_11);
  Var_27 = (MR_Word) (SetBL_8);
  Var_28 = (MR_Word) (SetBR_12);
  mercury__sparse_bitset__union_loop_3_p_0(Var_27, Var_28, &Var_29);
  SetB_16 = (MR_Word) (Var_29);
  Var_30 = (MR_Word) (SetCL_9);
  Var_31 = (MR_Word) (SetCR_13);
  mercury__fat_sparse_bitset__union_loop_3_p_0(Var_30, Var_31, &Var_32);
  SetC_17 = (MR_Word) (Var_32);
{
#define MR_PROC_LABEL mercury__test_bitset__union_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_21 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_26_26  = TypeInfo;
}
  Var_33 = (MR_Word) (SetSL_10);
  Var_34 = (MR_Word) (SetSR_14);
  mercury__list__merge_and_remove_dups_3_p_0(TypeInfo_26_26, Var_33, Var_34, &Var_35);
  SetS_18 = (MR_Word) (Var_35);
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (SetA_15));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (SetB_16));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) (SetC_17));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (SetS_18));
  }
  mercury__test_bitset__check2_5_p_0(TypeClassInfo_for_uenum_21, (MR_String) "union", InL_4, InR_5, Var_20, &Result_6);
  return Result_6;
}

static void MR_CALL 
mercury__test_bitset__check2_5_p_0(
  MR_Word TypeClassInfo_for_uenum_36,
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
  MR_Word InSetLS_14 = ((MR_Word) ((MR_hl_field(0, TestInL_7, (MR_Integer) 3))));
  MR_Word InSetRA_15 = ((MR_Word) ((MR_hl_field(0, TestInR_8, (MR_Integer) 0))));
  MR_Word InSetRB_16 = ((MR_Word) ((MR_hl_field(0, TestInR_8, (MR_Integer) 1))));
  MR_Word InSetRC_17 = ((MR_Word) ((MR_hl_field(0, TestInR_8, (MR_Integer) 2))));
  MR_Word InSetRS_18 = ((MR_Word) ((MR_hl_field(0, TestInR_8, (MR_Integer) 3))));
  MR_Word OutSetA_19 = ((MR_Word) ((MR_hl_field(0, TestOut_9, (MR_Integer) 0))));
  MR_Word OutSetB_20 = ((MR_Word) ((MR_hl_field(0, TestOut_9, (MR_Integer) 1))));
  MR_Word OutSetC_21 = ((MR_Word) ((MR_hl_field(0, TestOut_9, (MR_Integer) 2))));
  MR_Word OutSetS_22 = ((MR_Word) ((MR_hl_field(0, TestOut_9, (MR_Integer) 3))));
  MR_Word InsLA_23;
  MR_Word InsRA_24;
  MR_Word OutsA_25;
  MR_Word InsLB_26;
  MR_Word InsRB_27;
  MR_Word OutsB_28;
  MR_Word InsLC_29;
  MR_Word InsRC_30;
  MR_Word OutsC_31;
  MR_Word InsLS_32;
  MR_Word InsRS_33;
  MR_Word OutsS_34;
  MR_Word TypeInfo_45_45;
  MR_Word TypeInfo_49_49;
  MR_Word TypeInfo_53_53;
  MR_Word TypeInfo_57_57;
  MR_Word TypeInfo_61_61;
  MR_Word TypeInfo_65_65;
  MR_Word TypeInfo_69_69;
  MR_Word TypeInfo_73_73;
  MR_Word TypeInfo_77_77;
  MR_Integer PolyConst1_48;
  MR_Integer PolyConst1_52;
  MR_Integer PolyConst1_56;
  MR_Integer PolyConst1_60;
  MR_Integer PolyConst1_64;
  MR_Integer PolyConst1_68;
  MR_Integer PolyConst1_72;
  MR_Integer PolyConst1_76;

  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_36, InSetLA_11, &InsLA_23);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_36, InSetRA_15, &InsRA_24);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_36, OutSetA_19, &OutsA_25);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_36, InSetLB_12, &InsLB_26);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_36, InSetRB_16, &InsRB_27);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_36, OutSetB_20, &OutsB_28);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_36, InSetLC_13, &InsLC_29);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_36, InSetRC_17, &InsRC_30);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_36, OutSetC_21, &OutsC_31);
  InsLS_32 = (MR_Word) (InSetLS_14);
  InsRS_33 = (MR_Word) (InSetRS_18);
  OutsS_34 = (MR_Word) (OutSetS_22);
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_36 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_45_45  = TypeInfo;
}
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_45_45, InsLA_23, InsLS_32);
  if (succeeded)
  {
    PolyConst1_48 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_36 ;
	Index = PolyConst1_48 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_49_49  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_49_49, InsLB_26, InsLS_32);
    if (succeeded)
    {
      PolyConst1_52 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_36 ;
	Index = PolyConst1_52 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_53_53  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_53_53, InsLC_29, InsLS_32);
      if (succeeded)
      {
        PolyConst1_56 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_36 ;
	Index = PolyConst1_56 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_57_57  = TypeInfo;
}
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_57_57, InsRA_24, InsRS_33);
        if (succeeded)
        {
          PolyConst1_60 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_36 ;
	Index = PolyConst1_60 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_61_61  = TypeInfo;
}
          succeeded = mercury__list____Unify____list_1_0(TypeInfo_61_61, InsRB_27, InsRS_33);
          if (succeeded)
          {
            PolyConst1_64 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_36 ;
	Index = PolyConst1_64 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_65_65  = TypeInfo;
}
            succeeded = mercury__list____Unify____list_1_0(TypeInfo_65_65, InsRC_30, InsRS_33);
            if (succeeded)
            {
              PolyConst1_68 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_36 ;
	Index = PolyConst1_68 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_69_69  = TypeInfo;
}
              succeeded = mercury__list____Unify____list_1_0(TypeInfo_69_69, OutsA_25, OutsS_34);
              if (succeeded)
              {
                PolyConst1_72 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_36 ;
	Index = PolyConst1_72 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_73_73  = TypeInfo;
}
                succeeded = mercury__list____Unify____list_1_0(TypeInfo_73_73, OutsB_28, OutsS_34);
                if (succeeded)
                {
                  PolyConst1_76 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_36 ;
	Index = PolyConst1_76 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_77_77  = TypeInfo;
}
                  succeeded = mercury__list____Unify____list_1_0(TypeInfo_77_77, OutsC_31, OutsS_34);
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
    MR_Word TypeInfo_41_41;
    MR_Word TypeInfo_43_43;
    MR_Word Var_35;

    {
      Var_35 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_35, 0) = ((MR_Box) (Op_6));
      MR_hl_field(2, Var_35, 1) = ((MR_Box) (TestInL_7));
      MR_hl_field(2, Var_35, 2) = ((MR_Box) (TestInR_8));
      MR_hl_field(2, Var_35, 3) = ((MR_Box) (TestOut_9));
    }
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_36 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_41_41  = TypeInfo;
}
    {
      TypeInfo_43_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_43_43, 0) = ((MR_Box) (&mercury__test_bitset__test_bitset__type_ctor_info_bitset_error_1));
      MR_hl_field(0, TypeInfo_43_43, 1) = ((MR_Box) (TypeInfo_41_41));
    }
    {
      mercury__exception__throw_1_p_0(TypeInfo_43_43, ((MR_Box) (Var_35)));
      return;
    }
  }
}

MR_bool MR_CALL 
mercury__test_bitset__superset_2_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word InL_3,
  MR_Word InR_4)
{
  MR_bool succeeded;
  MR_Word SetAL_5 = ((MR_Word) ((MR_hl_field(0, InL_3, (MR_Integer) 0))));
  MR_Word SetBL_6 = ((MR_Word) ((MR_hl_field(0, InL_3, (MR_Integer) 1))));
  MR_Word SetCL_7 = ((MR_Word) ((MR_hl_field(0, InL_3, (MR_Integer) 2))));
  MR_Word SetSL_8 = ((MR_Word) ((MR_hl_field(0, InL_3, (MR_Integer) 3))));
  MR_Word SetAR_9 = ((MR_Word) ((MR_hl_field(0, InR_4, (MR_Integer) 0))));
  MR_Word SetBR_10 = ((MR_Word) ((MR_hl_field(0, InR_4, (MR_Integer) 1))));
  MR_Word SetCR_11 = ((MR_Word) ((MR_hl_field(0, InR_4, (MR_Integer) 2))));
  MR_Word SetSR_12 = ((MR_Word) ((MR_hl_field(0, InR_4, (MR_Integer) 3))));
  MR_Word A_13;
  MR_Word B_14;
  MR_Word C_15;
  MR_Word S_16;
  MR_Word Var_21;
  MR_Word Var_25;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_32;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_39;
  MR_Word Var_40;

  Var_21 = mercury__tree_bitset__intersect_2_f_0(TypeInfo_for_T_19, SetAL_5, SetAR_9);
  succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(TypeInfo_for_T_19, SetAR_9, Var_21);
  if (succeeded)
    A_13 = (MR_Integer) 1;
  else
    A_13 = (MR_Integer) 0;
  Var_28 = (MR_Word) (SetBL_6);
  Var_29 = (MR_Word) (SetBR_10);
  mercury__sparse_bitset__intersect_loop_3_p_0(Var_28, Var_29, &Var_30);
  Var_25 = (MR_Word) (Var_30);
  succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(TypeInfo_for_T_19, SetBR_10, Var_25);
  if (succeeded)
    B_14 = (MR_Integer) 1;
  else
    B_14 = (MR_Integer) 0;
  Var_35 = (MR_Word) (SetCL_7);
  Var_36 = (MR_Word) (SetCR_11);
  mercury__fat_sparse_bitset__intersect_loop_3_p_0(Var_35, Var_36, &Var_37);
  Var_32 = (MR_Word) (Var_37);
  succeeded = mercury__fat_sparse_bitset____Unify____fat_sparse_bitset_1_0(TypeInfo_for_T_19, SetCR_11, Var_32);
  if (succeeded)
    C_15 = (MR_Integer) 1;
  else
    C_15 = (MR_Integer) 0;
  Var_39 = (MR_Word) (SetSL_8);
  Var_40 = (MR_Word) (SetSR_12);
  succeeded = mercury__set_ordlist__intersect_loop_3_p_1(TypeInfo_for_T_19, Var_39, Var_40, Var_40);
  if (succeeded)
    S_16 = (MR_Integer) 1;
  else
    S_16 = (MR_Integer) 0;
  succeeded = (A_13 == S_16);
  if (succeeded)
  {
    succeeded = (B_14 == S_16);
    if (succeeded)
      succeeded = (C_15 == S_16);
  }
  if (succeeded)
    succeeded = (S_16 == (MR_Integer) 1);
  else
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.superset\'/2", (MR_String) "failed");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__test_bitset__subset_2_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word InL_3,
  MR_Word InR_4)
{
  MR_bool succeeded;
  MR_Word SetAL_5 = ((MR_Word) ((MR_hl_field(0, InL_3, (MR_Integer) 0))));
  MR_Word SetBL_6 = ((MR_Word) ((MR_hl_field(0, InL_3, (MR_Integer) 1))));
  MR_Word SetCL_7 = ((MR_Word) ((MR_hl_field(0, InL_3, (MR_Integer) 2))));
  MR_Word SetSL_8 = ((MR_Word) ((MR_hl_field(0, InL_3, (MR_Integer) 3))));
  MR_Word SetAR_9 = ((MR_Word) ((MR_hl_field(0, InR_4, (MR_Integer) 0))));
  MR_Word SetBR_10 = ((MR_Word) ((MR_hl_field(0, InR_4, (MR_Integer) 1))));
  MR_Word SetCR_11 = ((MR_Word) ((MR_hl_field(0, InR_4, (MR_Integer) 2))));
  MR_Word SetSR_12 = ((MR_Word) ((MR_hl_field(0, InR_4, (MR_Integer) 3))));
  MR_Word A_13;
  MR_Word B_14;
  MR_Word C_15;
  MR_Word S_16;
  MR_Word Var_21;
  MR_Word Var_25;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_32;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_39;
  MR_Word Var_40;

  Var_21 = mercury__tree_bitset__intersect_2_f_0(TypeInfo_for_T_19, SetAR_9, SetAL_5);
  succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(TypeInfo_for_T_19, SetAL_5, Var_21);
  if (succeeded)
    A_13 = (MR_Integer) 1;
  else
    A_13 = (MR_Integer) 0;
  Var_28 = (MR_Word) (SetBR_10);
  Var_29 = (MR_Word) (SetBL_6);
  mercury__sparse_bitset__intersect_loop_3_p_0(Var_28, Var_29, &Var_30);
  Var_25 = (MR_Word) (Var_30);
  succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(TypeInfo_for_T_19, SetBL_6, Var_25);
  if (succeeded)
    B_14 = (MR_Integer) 1;
  else
    B_14 = (MR_Integer) 0;
  Var_35 = (MR_Word) (SetCR_11);
  Var_36 = (MR_Word) (SetCL_7);
  mercury__fat_sparse_bitset__intersect_loop_3_p_0(Var_35, Var_36, &Var_37);
  Var_32 = (MR_Word) (Var_37);
  succeeded = mercury__fat_sparse_bitset____Unify____fat_sparse_bitset_1_0(TypeInfo_for_T_19, SetCL_7, Var_32);
  if (succeeded)
    C_15 = (MR_Integer) 1;
  else
    C_15 = (MR_Integer) 0;
  Var_39 = (MR_Word) (SetSR_12);
  Var_40 = (MR_Word) (SetSL_8);
  succeeded = mercury__set_ordlist__intersect_loop_3_p_1(TypeInfo_for_T_19, Var_39, Var_40, Var_40);
  if (succeeded)
    S_16 = (MR_Integer) 1;
  else
    S_16 = (MR_Integer) 0;
  succeeded = (A_13 == S_16);
  if (succeeded)
  {
    succeeded = (B_14 == S_16);
    if (succeeded)
      succeeded = (C_15 == S_16);
  }
  if (succeeded)
    succeeded = (S_16 == (MR_Integer) 1);
  else
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.subset\'/2", (MR_String) "failed");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__test_bitset__equal_2_p_0(
  MR_Word TypeClassInfo_for_uenum_19,
  MR_Word InL_3,
  MR_Word InR_4)
{
  MR_bool succeeded;
  MR_Word SetAL_5 = ((MR_Word) ((MR_hl_field(0, InL_3, (MR_Integer) 0))));
  MR_Word SetBL_6 = ((MR_Word) ((MR_hl_field(0, InL_3, (MR_Integer) 1))));
  MR_Word SetCL_7 = ((MR_Word) ((MR_hl_field(0, InL_3, (MR_Integer) 2))));
  MR_Word SetSL_8 = ((MR_Word) ((MR_hl_field(0, InL_3, (MR_Integer) 3))));
  MR_Word SetAR_9 = ((MR_Word) ((MR_hl_field(0, InR_4, (MR_Integer) 0))));
  MR_Word SetBR_10 = ((MR_Word) ((MR_hl_field(0, InR_4, (MR_Integer) 1))));
  MR_Word SetCR_11 = ((MR_Word) ((MR_hl_field(0, InR_4, (MR_Integer) 2))));
  MR_Word SetSR_12 = ((MR_Word) ((MR_hl_field(0, InR_4, (MR_Integer) 3))));
  MR_Word A_13;
  MR_Word B_14;
  MR_Word C_15;
  MR_Word S_16;
  MR_Word TypeInfo_21_21;
  MR_Word TypeInfo_23_23;
  MR_Word TypeInfo_25_25;

  succeeded = mercury__tree_bitset__equal_2_p_0(TypeClassInfo_for_uenum_19, SetAL_5, SetAR_9);
  if (succeeded)
    A_13 = (MR_Integer) 1;
  else
    A_13 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__test_bitset__equal_2_p_0

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
  succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(TypeInfo_21_21, SetBR_10, SetBL_6);
  if (succeeded)
    B_14 = (MR_Integer) 1;
  else
    B_14 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__test_bitset__equal_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_19 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_23_23  = TypeInfo;
}
  succeeded = mercury__fat_sparse_bitset____Unify____fat_sparse_bitset_1_0(TypeInfo_23_23, SetCR_11, SetCL_7);
  if (succeeded)
    C_15 = (MR_Integer) 1;
  else
    C_15 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__test_bitset__equal_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_19 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_25_25  = TypeInfo;
}
  succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(TypeInfo_25_25, SetSR_12, SetSL_8);
  if (succeeded)
    S_16 = (MR_Integer) 1;
  else
    S_16 = (MR_Integer) 0;
  succeeded = (A_13 == S_16);
  if (succeeded)
  {
    succeeded = (B_14 == S_16);
    if (succeeded)
      succeeded = (C_15 == S_16);
  }
  if (succeeded)
    succeeded = (S_16 == (MR_Integer) 1);
  else
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.equal\'/2", (MR_String) "failed");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mercury__test_bitset__remove_gt_3_p_0(
  MR_Word TypeClassInfo_for_uenum_23,
  MR_Word In_1,
  MR_Box Hurdle_9,
  MR_Word * Result_10)
{
  MR_Word TypeInfo_25_25;
  MR_Word SetA0_5 = ((MR_Word) ((MR_hl_field(0, In_1, (MR_Integer) 0))));
  MR_Word SetB0_6 = ((MR_Word) ((MR_hl_field(0, In_1, (MR_Integer) 1))));
  MR_Word SetC0_7 = ((MR_Word) ((MR_hl_field(0, In_1, (MR_Integer) 2))));
  MR_Word SetS0_8 = ((MR_Word) ((MR_hl_field(0, In_1, (MR_Integer) 3))));
  MR_Word SetA_11;
  MR_Word SetB_12;
  MR_Word SetC_13;
  MR_Word SetS_18;
  MR_Word Var_21;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Unsigned Var_28;
  MR_Unsigned Var_29;
  MR_Unsigned Var_30;
  MR_Unsigned Var_31;
  MR_Unsigned Var_32;
  MR_Unsigned Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Unsigned Var_37;
  MR_Unsigned Var_38;
  MR_Unsigned Var_39;
  MR_Unsigned Var_40;
  MR_Unsigned Var_41;
  MR_Unsigned Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_28;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
  MR_Box conv3_Var_37;

  mercury__tree_bitset__remove_gt_3_p_0(TypeClassInfo_for_uenum_23, Hurdle_9, SetA0_5, &SetA_11);
  Var_26 = (MR_Word) (SetB0_6);
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_23, (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_28 = func_0(((MR_Box) (TypeClassInfo_for_uenum_23)), Hurdle_9);
  Var_28 = ((MR_Unsigned) (conv1_Var_28));
{
#define MR_PROC_LABEL mercury__test_bitset__remove_gt_3_p_0

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
  mercury__sparse_bitset__remove_gt_loop_4_p_0(Var_29, Var_30, Var_26, &Var_27);
  SetB_12 = (MR_Word) (Var_27);
  Var_35 = (MR_Word) (SetC0_7);
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_23, (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_37 = func_2(((MR_Box) (TypeClassInfo_for_uenum_23)), Hurdle_9);
  Var_37 = ((MR_Unsigned) (conv3_Var_37));
{
#define MR_PROC_LABEL mercury__test_bitset__remove_gt_3_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_41  = Bits;
}
  Var_40 = (Var_41 - (MR_Unsigned) 1U);
  Var_43 = ~(Var_40);
  Var_38 = (Var_37 & Var_43);
  Var_39 = (Var_37 & Var_40);
  mercury__fat_sparse_bitset__remove_gt_loop_4_p_0(Var_38, Var_39, Var_35, &Var_36);
  SetC_13 = (MR_Word) (Var_36);
{
#define MR_PROC_LABEL mercury__test_bitset__remove_gt_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_23 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_25_25  = TypeInfo;
}
  Var_44 = (MR_Word) (SetS0_8);
  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_56_55_95_95_91_51_44_32_52_93_95_48_3_p_in__list_0(TypeClassInfo_for_uenum_23, Hurdle_9, Var_44, &Var_45);
  if ((Var_45 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_46 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Var_47 = (MR_hl_field(1, Var_45, (MR_Integer) 0));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(1, Var_45, (MR_Integer) 1))));

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_25_25, Var_47, Var_48, &Var_46);
  }
  SetS_18 = (MR_Word) (Var_46);
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (SetA_11));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (SetB_12));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) (SetC_13));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (SetS_18));
  }
  mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_uenum_23, (MR_String) "remove_gt", In_1, Var_21, Result_10);
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_56_55_95_95_91_51_44_32_52_93_95_48_3_p_in__list_0(
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
        mercury__test_bitset__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_56_55_95_95_91_51_44_32_52_93_95_48_95_95_49_3_p_0(Var_11, Var_12, Var_7, AddrSCCcallarg_9_15);
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
mercury__test_bitset__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_56_55_95_95_91_51_44_32_52_93_95_48_95_95_49_3_p_0(
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
  MR_Word TypeClassInfo_for_uenum_23,
  MR_Word In_1,
  MR_Box Hurdle_9,
  MR_Word * Result_10)
{
  MR_Word TypeInfo_25_25;
  MR_Word SetA0_5 = ((MR_Word) ((MR_hl_field(0, In_1, (MR_Integer) 0))));
  MR_Word SetB0_6 = ((MR_Word) ((MR_hl_field(0, In_1, (MR_Integer) 1))));
  MR_Word SetC0_7 = ((MR_Word) ((MR_hl_field(0, In_1, (MR_Integer) 2))));
  MR_Word SetS0_8 = ((MR_Word) ((MR_hl_field(0, In_1, (MR_Integer) 3))));
  MR_Word SetA_11;
  MR_Word SetB_12;
  MR_Word SetC_13;
  MR_Word SetS_18;
  MR_Word Var_21;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Unsigned Var_28;
  MR_Unsigned Var_29;
  MR_Unsigned Var_30;
  MR_Unsigned Var_31;
  MR_Unsigned Var_32;
  MR_Unsigned Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Unsigned Var_37;
  MR_Unsigned Var_38;
  MR_Unsigned Var_39;
  MR_Unsigned Var_40;
  MR_Unsigned Var_41;
  MR_Unsigned Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_28;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
  MR_Box conv3_Var_37;

  mercury__tree_bitset__remove_leq_3_p_0(TypeClassInfo_for_uenum_23, Hurdle_9, SetA0_5, &SetA_11);
  Var_26 = (MR_Word) (SetB0_6);
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_23, (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_28 = func_0(((MR_Box) (TypeClassInfo_for_uenum_23)), Hurdle_9);
  Var_28 = ((MR_Unsigned) (conv1_Var_28));
{
#define MR_PROC_LABEL mercury__test_bitset__remove_leq_3_p_0

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
  mercury__sparse_bitset__remove_leq_loop_4_p_0(Var_29, Var_30, Var_26, &Var_27);
  SetB_12 = (MR_Word) (Var_27);
  Var_35 = (MR_Word) (SetC0_7);
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_23, (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_37 = func_2(((MR_Box) (TypeClassInfo_for_uenum_23)), Hurdle_9);
  Var_37 = ((MR_Unsigned) (conv3_Var_37));
{
#define MR_PROC_LABEL mercury__test_bitset__remove_leq_3_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_41  = Bits;
}
  Var_40 = (Var_41 - (MR_Unsigned) 1U);
  Var_43 = ~(Var_40);
  Var_38 = (Var_37 & Var_43);
  Var_39 = (Var_37 & Var_40);
  mercury__fat_sparse_bitset__remove_leq_loop_4_p_0(Var_38, Var_39, Var_35, &Var_36);
  SetC_13 = (MR_Word) (Var_36);
{
#define MR_PROC_LABEL mercury__test_bitset__remove_leq_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_23 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_25_25  = TypeInfo;
}
  Var_44 = (MR_Word) (SetS0_8);
  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_56_54_95_95_91_51_44_32_52_93_95_48_3_p_in__list_0(TypeClassInfo_for_uenum_23, Hurdle_9, Var_44, &Var_45);
  if ((Var_45 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_46 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Var_47 = (MR_hl_field(1, Var_45, (MR_Integer) 0));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(1, Var_45, (MR_Integer) 1))));

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_25_25, Var_47, Var_48, &Var_46);
  }
  SetS_18 = (MR_Word) (Var_46);
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (SetA_11));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (SetB_12));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) (SetC_13));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (SetS_18));
  }
  mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_uenum_23, (MR_String) "remove_leq", In_1, Var_21, Result_10);
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_56_54_95_95_91_51_44_32_52_93_95_48_3_p_in__list_0(
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
        mercury__test_bitset__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_56_54_95_95_91_51_44_32_52_93_95_48_95_95_49_3_p_0(Var_11, Var_12, Var_7, AddrSCCcallarg_9_15);
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
mercury__test_bitset__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_95_104_111_56_54_95_95_91_51_44_32_52_93_95_48_95_95_49_3_p_0(
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
  MR_Word TypeClassInfo_for_uenum_43,
  MR_Box * Least_4,
  MR_Word In_2,
  MR_Word * Result_10)
{
  MR_bool succeeded;
  MR_Word SetA0_6 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 0))));
  MR_Word SetB0_7 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 1))));
  MR_Word SetC0_8 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 2))));
  MR_Word SetS0_9 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 3))));
  MR_Word MaybeA_13;
  MR_Word MaybeB_16;
  MR_Word MaybeC_19;
  MR_Word MaybeS_22;
  MR_Box LeastA_11;
  MR_Word SetA_12;
  MR_Box LeastB_14;
  MR_Word SetB_15;
  MR_Box LeastC_17;
  MR_Word SetC_18;
  MR_Box LeastS_20;
  MR_Word SetS_21;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word SA_24;
  MR_Word SB_26;
  MR_Word SC_28;
  MR_Box LS_29;
  MR_Word SS_30;
  MR_Word TypeInfo_47_47;
  MR_Word TypeInfo_49_49;
  MR_Word TypeInfo_51_51;
  MR_Box LA_23;
  MR_Box LB_25;
  MR_Box LC_27;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Integer TypeInfoIndex_46;
  MR_Integer TypeInfoIndex_48;
  MR_Integer TypeInfoIndex_50;

  succeeded = mercury__tree_bitset__remove_least_3_p_0(TypeClassInfo_for_uenum_43, &LeastA_11, SetA0_6, &SetA_12);
  if (succeeded)
  {
    MR_Word Var_31;

    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_31, 0) = LeastA_11;
      MR_hl_field(0, Var_31, 1) = ((MR_Box) (SetA_12));
    }
    {
      MaybeA_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeA_13, 0) = ((MR_Box) (Var_31));
    }
  }
  else
    MaybeA_13 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = mercury__sparse_bitset__remove_least_3_p_0(TypeClassInfo_for_uenum_43, &LeastB_14, SetB0_7, &SetB_15);
  if (succeeded)
  {
    MR_Word Var_32;

    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_32, 0) = LeastB_14;
      MR_hl_field(0, Var_32, 1) = ((MR_Box) (SetB_15));
    }
    {
      MaybeB_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeB_16, 0) = ((MR_Box) (Var_32));
    }
  }
  else
    MaybeB_16 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = mercury__fat_sparse_bitset__remove_least_3_p_0(TypeClassInfo_for_uenum_43, &LeastC_17, SetC0_8, &SetC_18);
  if (succeeded)
  {
    MR_Word Var_33;

    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_33, 0) = LeastC_17;
      MR_hl_field(0, Var_33, 1) = ((MR_Box) (SetC_18));
    }
    {
      MaybeC_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeC_19, 0) = ((MR_Box) (Var_33));
    }
  }
  else
    MaybeC_19 = (MR_Word) ((MR_Unsigned) 0U);
  Var_52 = (MR_Word) (SetS0_9);
  succeeded = (Var_52 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    LeastS_20 = (MR_hl_field(1, Var_52, (MR_Integer) 0));
    Var_53 = ((MR_Word) ((MR_hl_field(1, Var_52, (MR_Integer) 1))));
    SetS_21 = (MR_Word) (Var_53);
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Var_34;

    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_34, 0) = LeastS_20;
      MR_hl_field(0, Var_34, 1) = ((MR_Box) (SetS_21));
    }
    {
      MaybeS_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeS_22, 0) = ((MR_Box) (Var_34));
    }
  }
  else
    MaybeS_22 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = (MaybeA_13 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_35 = ((MR_Word) ((MR_hl_field(1, MaybeA_13, (MR_Integer) 0))));
    LA_23 = (MR_hl_field(0, Var_35, (MR_Integer) 0));
    SA_24 = ((MR_Word) ((MR_hl_field(0, Var_35, (MR_Integer) 1))));
    succeeded = (MaybeB_16 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_36 = ((MR_Word) ((MR_hl_field(1, MaybeB_16, (MR_Integer) 0))));
      LB_25 = (MR_hl_field(0, Var_36, (MR_Integer) 0));
      SB_26 = ((MR_Word) ((MR_hl_field(0, Var_36, (MR_Integer) 1))));
      succeeded = (MaybeC_19 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_37 = ((MR_Word) ((MR_hl_field(1, MaybeC_19, (MR_Integer) 0))));
        LC_27 = (MR_hl_field(0, Var_37, (MR_Integer) 0));
        SC_28 = ((MR_Word) ((MR_hl_field(0, Var_37, (MR_Integer) 1))));
        succeeded = (MaybeS_22 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_38 = ((MR_Word) ((MR_hl_field(1, MaybeS_22, (MR_Integer) 0))));
          LS_29 = (MR_hl_field(0, Var_38, (MR_Integer) 0));
          SS_30 = ((MR_Word) ((MR_hl_field(0, Var_38, (MR_Integer) 1))));
          TypeInfoIndex_46 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__remove_least_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_43 ;
	Index = TypeInfoIndex_46 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_47_47  = TypeInfo;
}
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_47_47, LA_23, LS_29);
          if (succeeded)
          {
            TypeInfoIndex_48 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__remove_least_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_43 ;
	Index = TypeInfoIndex_48 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_49_49  = TypeInfo;
}
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_49_49, LB_25, LS_29);
            if (succeeded)
            {
              TypeInfoIndex_50 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__remove_least_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_43 ;
	Index = TypeInfoIndex_50 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_51_51  = TypeInfo;
}
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_51_51, LC_27, LS_29);
            }
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_40;

    *Least_4 = LS_29;
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_40, 0) = ((MR_Box) (SA_24));
      MR_hl_field(0, Var_40, 1) = ((MR_Box) (SB_26));
      MR_hl_field(0, Var_40, 2) = ((MR_Box) (SC_28));
      MR_hl_field(0, Var_40, 3) = ((MR_Box) (SS_30));
    }
    mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_uenum_43, (MR_String) "remove_least", In_2, Var_40, Result_10);
    succeeded = MR_TRUE;
  }
  else
  {
    succeeded = (MaybeA_13 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (MaybeB_16 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (MaybeC_19 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (MaybeS_22 == (MR_Word) ((MR_Unsigned) 0U));
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
  MR_Word TypeClassInfo_for_uenum_27,
  MR_Word Es_4,
  MR_Word In_2,
  MR_Word * Result_10)
{
  MR_bool succeeded;
  MR_Word SetA0_6 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 0))));
  MR_Word SetB0_7 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 1))));
  MR_Word SetC0_8 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 2))));
  MR_Word SetS0_9 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 3))));
  MR_Word MaybeA_12;
  MR_Word MaybeB_14;
  MR_Word MaybeC_16;
  MR_Word MaybeS_18;
  MR_Word SetA_11;
  MR_Word TypeInfo_10_32;
  MR_Word TypeInfo_11_33;
  MR_Word TypeInfo_8_36;
  MR_Word Var_30;
  MR_Word Var_34;
  MR_Integer Var_37;
  MR_Word Var_40;
  MR_Word SetB_13;
  MR_Word TypeInfo_10_45;
  MR_Word TypeInfo_10_50;
  MR_Word Var_43;
  MR_Word Var_48;
  MR_Word Var_57;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word SetC_15;
  MR_Word TypeInfo_10_68;
  MR_Word TypeInfo_10_73;
  MR_Word Var_66;
  MR_Word Var_71;
  MR_Word Var_80;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word SetS_17;
  MR_Word TypeInfo_29_29;
  MR_Word Var_89;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_94;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word A_19;
  MR_Word B_20;
  MR_Word C_21;
  MR_Word S_22;

{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_27 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_8_36  = TypeInfo;
}
  mercury__list__length_acc_3_p_0(TypeInfo_8_36, Es_4, (MR_Integer) 0, &Var_37);
  mercury__list__merge_sort_3_p_0(TypeInfo_8_36, Var_37, Es_4, &Var_34);
  Var_30 = mercury__tree_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_uenum_27, Var_34);
{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_27 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_32  = TypeInfo;
}
  Var_40 = mercury__tree_bitset__intersect_2_f_0(TypeInfo_10_32, SetA0_6, Var_30);
  succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(TypeInfo_10_32, Var_30, Var_40);
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_27 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_11_33  = TypeInfo;
}
    SetA_11 = mercury__tree_bitset__difference_2_f_0(TypeInfo_11_33, SetA0_6, Var_30);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      MaybeA_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeA_12, 0) = ((MR_Box) (SetA_11));
    }
  else
    MaybeA_12 = (MR_Word) ((MR_Unsigned) 0U);
  mercury__sparse_bitset__list_to_set_get_runs_3_p_0(TypeClassInfo_for_uenum_27, Es_4, (MR_Word) ((MR_Unsigned) 0U), &Var_48);
{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_27 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_50  = TypeInfo;
}
  if ((Var_48 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_43 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
  {
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(1, Var_48, (MR_Integer) 0))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(1, Var_48, (MR_Integer) 1))));

    mercury__sparse_bitset__union_list_passes_3_p_0(TypeInfo_10_50, Var_52, Var_53, &Var_43);
  }
{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_27 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_45  = TypeInfo;
}
  Var_60 = (MR_Word) (SetB0_7);
  Var_61 = (MR_Word) (Var_43);
  mercury__sparse_bitset__intersect_loop_3_p_0(Var_60, Var_61, &Var_62);
  Var_57 = (MR_Word) (Var_62);
  succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(TypeInfo_10_45, Var_43, Var_57);
  if (succeeded)
  {
    Var_63 = (MR_Word) (SetB0_7);
    Var_64 = (MR_Word) (Var_43);
    mercury__sparse_bitset__difference_loop_3_p_0(Var_63, Var_64, &Var_65);
    SetB_13 = (MR_Word) (Var_65);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      MaybeB_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeB_14, 0) = ((MR_Box) (SetB_13));
    }
  else
    MaybeB_14 = (MR_Word) ((MR_Unsigned) 0U);
  mercury__fat_sparse_bitset__list_to_set_get_runs_3_p_0(TypeClassInfo_for_uenum_27, Es_4, (MR_Word) ((MR_Unsigned) 0U), &Var_71);
{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_27 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_73  = TypeInfo;
}
  if ((Var_71 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_66 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
  {
    MR_Word Var_75 = ((MR_Word) ((MR_hl_field(1, Var_71, (MR_Integer) 0))));
    MR_Word Var_76 = ((MR_Word) ((MR_hl_field(1, Var_71, (MR_Integer) 1))));

    mercury__fat_sparse_bitset__union_list_passes_3_p_0(TypeInfo_10_73, Var_75, Var_76, &Var_66);
  }
{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_27 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_68  = TypeInfo;
}
  Var_83 = (MR_Word) (SetC0_8);
  Var_84 = (MR_Word) (Var_66);
  mercury__fat_sparse_bitset__intersect_loop_3_p_0(Var_83, Var_84, &Var_85);
  Var_80 = (MR_Word) (Var_85);
  succeeded = mercury__fat_sparse_bitset____Unify____fat_sparse_bitset_1_0(TypeInfo_10_68, Var_66, Var_80);
  if (succeeded)
  {
    Var_86 = (MR_Word) (SetC0_8);
    Var_87 = (MR_Word) (Var_66);
    mercury__fat_sparse_bitset__difference_loop_3_p_0(Var_86, Var_87, &Var_88);
    SetC_15 = (MR_Word) (Var_88);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      MaybeC_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeC_16, 0) = ((MR_Box) (SetC_15));
    }
  else
    MaybeC_16 = (MR_Word) ((MR_Unsigned) 0U);
{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_27 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_29_29  = TypeInfo;
}
  succeeded = mercury__set_ordlist__sort_no_dups_2_p_0(TypeInfo_29_29, Es_4, &Var_89);
  if (succeeded)
  {
    Var_91 = (MR_Word) (SetS0_9);
    Var_92 = (MR_Word) (Var_89);
    succeeded = mercury__set_ordlist__intersect_loop_3_p_1(TypeInfo_29_29, Var_91, Var_92, Var_92);
    if (succeeded)
    {
      Var_94 = (MR_Word) (SetS0_9);
      Var_95 = (MR_Word) (Var_89);
      mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_29_29, Var_94, Var_95, &Var_96);
      SetS_17 = (MR_Word) (Var_96);
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
    {
      MaybeS_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeS_18, 0) = ((MR_Box) (SetS_17));
    }
  else
    MaybeS_18 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = (MaybeA_12 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    A_19 = ((MR_Word) ((MR_hl_field(1, MaybeA_12, (MR_Integer) 0))));
    succeeded = (MaybeB_14 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      B_20 = ((MR_Word) ((MR_hl_field(1, MaybeB_14, (MR_Integer) 0))));
      succeeded = (MaybeC_16 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        C_21 = ((MR_Word) ((MR_hl_field(1, MaybeC_16, (MR_Integer) 0))));
        succeeded = (MaybeS_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          S_22 = ((MR_Word) ((MR_hl_field(1, MaybeS_18, (MR_Integer) 0))));
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_24;

    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_24, 0) = ((MR_Box) (A_19));
      MR_hl_field(0, Var_24, 1) = ((MR_Box) (B_20));
      MR_hl_field(0, Var_24, 2) = ((MR_Box) (C_21));
      MR_hl_field(0, Var_24, 3) = ((MR_Box) (S_22));
    }
    mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_uenum_27, (MR_String) "remove", In_2, Var_24, Result_10);
    succeeded = MR_TRUE;
  }
  else
  {
    succeeded = (MaybeA_12 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (MaybeB_14 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (MaybeC_16 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (MaybeS_18 == (MR_Word) ((MR_Unsigned) 0U));
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
  MR_Word TypeClassInfo_for_uenum_27,
  MR_Box E_4,
  MR_Word In_2,
  MR_Word * Result_10)
{
  MR_bool succeeded;
  MR_Word SetA0_6 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 0))));
  MR_Word SetB0_7 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 1))));
  MR_Word SetC0_8 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 2))));
  MR_Word SetS0_9 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 3))));
  MR_Word MaybeA_12;
  MR_Word MaybeB_14;
  MR_Word MaybeC_16;
  MR_Word MaybeS_18;
  MR_Word SetA_11;
  MR_Word SetB_13;
  MR_Word Var_33;
  MR_Unsigned Var_34;
  MR_Unsigned Var_35;
  MR_Unsigned Var_36;
  MR_Unsigned Var_37;
  MR_Unsigned Var_38;
  MR_Unsigned Var_40;
  MR_Word Var_41;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Unsigned Var_47;
  MR_Unsigned Var_48;
  MR_Unsigned Var_49;
  MR_Unsigned Var_50;
  MR_Unsigned Var_51;
  MR_Unsigned Var_52;
  MR_Unsigned Var_53;
  MR_Word Var_54;
  MR_Word Var_56;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_34;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
  MR_Box conv3_Var_47;
  MR_Word SetC_15;
  MR_Word Var_60;
  MR_Unsigned Var_61;
  MR_Unsigned Var_62;
  MR_Unsigned Var_63;
  MR_Unsigned Var_64;
  MR_Unsigned Var_65;
  MR_Unsigned Var_67;
  MR_Word Var_68;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Unsigned Var_74;
  MR_Unsigned Var_75;
  MR_Unsigned Var_76;
  MR_Unsigned Var_77;
  MR_Unsigned Var_78;
  MR_Unsigned Var_79;
  MR_Unsigned Var_80;
  MR_Word Var_81;
  MR_Word Var_83;
  MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);
  MR_Box conv5_Var_61;
  MR_Box MR_CALL (* func_6)(MR_Box, MR_Box);
  MR_Box conv7_Var_74;
  MR_Word SetS_17;
  MR_Word TypeInfo_29_29;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word A_19;
  MR_Word B_20;
  MR_Word C_21;
  MR_Word S_22;

  succeeded = mercury__tree_bitset__contains_2_p_0(TypeClassInfo_for_uenum_27, SetA0_6, E_4);
  if (succeeded)
  {
    SetA_11 = mercury__tree_bitset__delete_2_f_0(TypeClassInfo_for_uenum_27, SetA0_6, E_4);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      MaybeA_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeA_12, 0) = ((MR_Box) (SetA_11));
    }
  else
    MaybeA_12 = (MR_Word) ((MR_Unsigned) 0U);
  Var_33 = (MR_Word) (SetB0_7);
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_27, (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_34 = func_0(((MR_Box) (TypeClassInfo_for_uenum_27)), E_4);
  Var_34 = ((MR_Unsigned) (conv1_Var_34));
{
#define MR_PROC_LABEL mercury__test_bitset__remove_3_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_38  = Bits;
}
  Var_37 = (Var_38 - (MR_Unsigned) 1U);
  Var_40 = ~(Var_37);
  Var_35 = (Var_34 & Var_40);
  Var_36 = (Var_34 & Var_37);
  succeeded = mercury__sparse_bitset__contains_search_nodes_3_p_0(Var_33, Var_35, Var_36);
  if (succeeded)
  {
    Var_41 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
    Var_45 = (MR_Word) (Var_41);
    func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_27, (MR_Integer) 0)), (MR_Integer) 5))));
    conv3_Var_47 = func_2(((MR_Box) (TypeClassInfo_for_uenum_27)), E_4);
    Var_47 = ((MR_Unsigned) (conv3_Var_47));
{
#define MR_PROC_LABEL mercury__test_bitset__remove_3_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_51  = Bits;
}
    Var_52 = (MR_Unsigned) 1U;
    Var_50 = (Var_51 - Var_52);
    Var_53 = ~(Var_50);
    Var_48 = (Var_47 & Var_53);
    Var_49 = (Var_47 & Var_50);
    mercury__sparse_bitset__insert_loop_4_p_0(Var_48, Var_49, Var_45, &Var_46);
    Var_54 = (MR_Word) (SetB0_7);
    mercury__sparse_bitset__difference_loop_3_p_0(Var_54, Var_46, &Var_56);
    SetB_13 = (MR_Word) (Var_56);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      MaybeB_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeB_14, 0) = ((MR_Box) (SetB_13));
    }
  else
    MaybeB_14 = (MR_Word) ((MR_Unsigned) 0U);
  Var_60 = (MR_Word) (SetC0_8);
  func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_27, (MR_Integer) 0)), (MR_Integer) 5))));
  conv5_Var_61 = func_4(((MR_Box) (TypeClassInfo_for_uenum_27)), E_4);
  Var_61 = ((MR_Unsigned) (conv5_Var_61));
{
#define MR_PROC_LABEL mercury__test_bitset__remove_3_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_65  = Bits;
}
  Var_64 = (Var_65 - (MR_Unsigned) 1U);
  Var_67 = ~(Var_64);
  Var_62 = (Var_61 & Var_67);
  Var_63 = (Var_61 & Var_64);
  succeeded = mercury__fat_sparse_bitset__contains_search_nodes_3_p_0(Var_60, Var_62, Var_63);
  if (succeeded)
  {
    Var_68 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
    Var_72 = (MR_Word) (Var_68);
    func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_27, (MR_Integer) 0)), (MR_Integer) 5))));
    conv7_Var_74 = func_6(((MR_Box) (TypeClassInfo_for_uenum_27)), E_4);
    Var_74 = ((MR_Unsigned) (conv7_Var_74));
{
#define MR_PROC_LABEL mercury__test_bitset__remove_3_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_78  = Bits;
}
    Var_79 = (MR_Unsigned) 1U;
    Var_77 = (Var_78 - Var_79);
    Var_80 = ~(Var_77);
    Var_75 = (Var_74 & Var_80);
    Var_76 = (Var_74 & Var_77);
    mercury__fat_sparse_bitset__insert_loop_4_p_0(Var_75, Var_76, Var_72, &Var_73);
    Var_81 = (MR_Word) (SetC0_8);
    mercury__fat_sparse_bitset__difference_loop_3_p_0(Var_81, Var_73, &Var_83);
    SetC_15 = (MR_Word) (Var_83);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      MaybeC_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeC_16, 0) = ((MR_Box) (SetC_15));
    }
  else
    MaybeC_16 = (MR_Word) ((MR_Unsigned) 0U);
{
#define MR_PROC_LABEL mercury__test_bitset__remove_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_27 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_29_29  = TypeInfo;
}
  Var_84 = (MR_Word) (SetS0_9);
  succeeded = mercury__list__delete_first_3_p_0(TypeInfo_29_29, Var_84, E_4, &Var_85);
  if (succeeded)
  {
    SetS_17 = (MR_Word) (Var_85);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      MaybeS_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeS_18, 0) = ((MR_Box) (SetS_17));
    }
  else
    MaybeS_18 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = (MaybeA_12 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    A_19 = ((MR_Word) ((MR_hl_field(1, MaybeA_12, (MR_Integer) 0))));
    succeeded = (MaybeB_14 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      B_20 = ((MR_Word) ((MR_hl_field(1, MaybeB_14, (MR_Integer) 0))));
      succeeded = (MaybeC_16 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        C_21 = ((MR_Word) ((MR_hl_field(1, MaybeC_16, (MR_Integer) 0))));
        succeeded = (MaybeS_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          S_22 = ((MR_Word) ((MR_hl_field(1, MaybeS_18, (MR_Integer) 0))));
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_24;

    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_24, 0) = ((MR_Box) (A_19));
      MR_hl_field(0, Var_24, 1) = ((MR_Box) (B_20));
      MR_hl_field(0, Var_24, 2) = ((MR_Box) (C_21));
      MR_hl_field(0, Var_24, 3) = ((MR_Box) (S_22));
    }
    mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_uenum_27, (MR_String) "remove", In_2, Var_24, Result_10);
    succeeded = MR_TRUE;
  }
  else
  {
    succeeded = (MaybeA_12 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (MaybeB_14 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (MaybeC_16 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (MaybeS_18 == (MR_Word) ((MR_Unsigned) 0U));
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
  MR_Word TypeClassInfo_for_uenum_17,
  MR_Word Es_4,
  MR_Word In_2,
  MR_Word * Result_10)
{
  MR_Word TypeInfo_19_19;
  MR_Word TypeInfo_10_22;
  MR_Word TypeInfo_8_25;
  MR_Word TypeInfo_10_34;
  MR_Word TypeInfo_10_49;
  MR_Word SetA0_6 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 0))));
  MR_Word SetB0_7 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 1))));
  MR_Word SetC0_8 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 2))));
  MR_Word SetS0_9 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 3))));
  MR_Word SetA_11;
  MR_Word SetB_12;
  MR_Word SetC_13;
  MR_Word SetS_14;
  MR_Word Var_16;
  MR_Word Var_20;
  MR_Word Var_23;
  MR_Integer Var_26;
  MR_Word Var_28;
  MR_Word Var_32;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_47;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Integer Var_60;
  MR_Word Var_62;
  MR_Word Var_64;

{
#define MR_PROC_LABEL mercury__test_bitset__delete_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_17 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_22  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__test_bitset__delete_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_17 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_8_25  = TypeInfo;
}
  mercury__list__length_acc_3_p_0(TypeInfo_8_25, Es_4, (MR_Integer) 0, &Var_26);
  mercury__list__merge_sort_3_p_0(TypeInfo_8_25, Var_26, Es_4, &Var_23);
  Var_20 = mercury__tree_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_uenum_17, Var_23);
  SetA_11 = mercury__tree_bitset__difference_2_f_0(TypeInfo_10_22, SetA0_6, Var_20);
  mercury__sparse_bitset__list_to_set_get_runs_3_p_0(TypeClassInfo_for_uenum_17, Es_4, (MR_Word) ((MR_Unsigned) 0U), &Var_32);
{
#define MR_PROC_LABEL mercury__test_bitset__delete_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_17 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_34  = TypeInfo;
}
  if ((Var_32 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_28 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
  {
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, Var_32, (MR_Integer) 0))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(1, Var_32, (MR_Integer) 1))));

    mercury__sparse_bitset__union_list_passes_3_p_0(TypeInfo_10_34, Var_36, Var_37, &Var_28);
  }
  Var_40 = (MR_Word) (SetB0_7);
  Var_41 = (MR_Word) (Var_28);
  mercury__sparse_bitset__difference_loop_3_p_0(Var_40, Var_41, &Var_42);
  SetB_12 = (MR_Word) (Var_42);
  mercury__fat_sparse_bitset__list_to_set_get_runs_3_p_0(TypeClassInfo_for_uenum_17, Es_4, (MR_Word) ((MR_Unsigned) 0U), &Var_47);
{
#define MR_PROC_LABEL mercury__test_bitset__delete_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_17 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_49  = TypeInfo;
}
  if ((Var_47 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_43 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
  {
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(1, Var_47, (MR_Integer) 0))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(1, Var_47, (MR_Integer) 1))));

    mercury__fat_sparse_bitset__union_list_passes_3_p_0(TypeInfo_10_49, Var_51, Var_52, &Var_43);
  }
  Var_55 = (MR_Word) (SetC0_8);
  Var_56 = (MR_Word) (Var_43);
  mercury__fat_sparse_bitset__difference_loop_3_p_0(Var_55, Var_56, &Var_57);
  SetC_13 = (MR_Word) (Var_57);
{
#define MR_PROC_LABEL mercury__test_bitset__delete_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_17 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_19_19  = TypeInfo;
}
  mercury__list__length_acc_3_p_0(TypeInfo_19_19, Es_4, (MR_Integer) 0, &Var_60);
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_19_19, Var_60, Es_4, &Var_58);
  Var_62 = (MR_Word) (SetS0_9);
  mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_19_19, Var_62, Var_58, &Var_64);
  SetS_14 = (MR_Word) (Var_64);
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (SetA_11));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (SetB_12));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) (SetC_13));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (SetS_14));
  }
  mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_uenum_17, (MR_String) "delete_list", In_2, Var_16, Result_10);
}

void MR_CALL 
mercury__test_bitset__delete_3_p_0(
  MR_Word TypeClassInfo_for_uenum_17,
  MR_Box E_4,
  MR_Word In_2,
  MR_Word * Result_10)
{
  MR_Word TypeInfo_19_19;
  MR_Word SetA0_6 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 0))));
  MR_Word SetB0_7 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 1))));
  MR_Word SetC0_8 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 2))));
  MR_Word SetS0_9 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 3))));
  MR_Word SetA_11;
  MR_Word SetB_12;
  MR_Word SetC_13;
  MR_Word SetS_14;
  MR_Word Var_16;
  MR_Word Var_28;
  MR_Unsigned Var_29;
  MR_Unsigned Var_30;
  MR_Unsigned Var_31;
  MR_Unsigned Var_32;
  MR_Unsigned Var_33;
  MR_Unsigned Var_35;
  MR_Word Var_36;
  MR_Word Var_38;
  MR_Word Var_47;
  MR_Unsigned Var_48;
  MR_Unsigned Var_49;
  MR_Unsigned Var_50;
  MR_Unsigned Var_51;
  MR_Unsigned Var_52;
  MR_Unsigned Var_54;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Word Var_59;
  MR_Word Var_61;
  MR_Word Var_63;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_29;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
  MR_Box conv3_Var_48;

  SetA_11 = mercury__tree_bitset__delete_2_f_0(TypeClassInfo_for_uenum_17, SetA0_6, E_4);
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_17, (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_29 = func_0(((MR_Box) (TypeClassInfo_for_uenum_17)), E_4);
  Var_29 = ((MR_Unsigned) (conv1_Var_29));
{
#define MR_PROC_LABEL mercury__test_bitset__delete_3_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_33  = Bits;
}
  Var_32 = (Var_33 - (MR_Unsigned) 1U);
  Var_35 = ~(Var_32);
  Var_30 = (Var_29 & Var_35);
  Var_31 = (Var_29 & Var_32);
  mercury__sparse_bitset__insert_loop_4_p_0(Var_30, Var_31, (MR_Word) ((MR_Word) (((MR_Box) ((MR_Unsigned) 0U)))), &Var_28);
  Var_36 = (MR_Word) (SetB0_7);
  mercury__sparse_bitset__difference_loop_3_p_0(Var_36, Var_28, &Var_38);
  SetB_12 = (MR_Word) (Var_38);
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_17, (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_48 = func_2(((MR_Box) (TypeClassInfo_for_uenum_17)), E_4);
  Var_48 = ((MR_Unsigned) (conv3_Var_48));
{
#define MR_PROC_LABEL mercury__test_bitset__delete_3_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_52  = Bits;
}
  Var_51 = (Var_52 - (MR_Unsigned) 1U);
  Var_54 = ~(Var_51);
  Var_49 = (Var_48 & Var_54);
  Var_50 = (Var_48 & Var_51);
  mercury__fat_sparse_bitset__insert_loop_4_p_0(Var_49, Var_50, (MR_Word) ((MR_Word) (((MR_Box) ((MR_Unsigned) 0U)))), &Var_47);
  Var_55 = (MR_Word) (SetC0_8);
  mercury__fat_sparse_bitset__difference_loop_3_p_0(Var_55, Var_47, &Var_57);
  SetC_13 = (MR_Word) (Var_57);
{
#define MR_PROC_LABEL mercury__test_bitset__delete_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_17 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_19_19  = TypeInfo;
}
  {
    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_59, 0) = E_4;
    MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_61 = (MR_Word) (SetS0_9);
  mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_19_19, Var_61, Var_59, &Var_63);
  SetS_14 = (MR_Word) (Var_63);
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (SetA_11));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (SetB_12));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) (SetC_13));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (SetS_14));
  }
  mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_uenum_17, (MR_String) "delete", In_2, Var_16, Result_10);
}

void MR_CALL 
mercury__test_bitset__insert_list_3_p_0(
  MR_Word TypeClassInfo_for_uenum_17,
  MR_Word Es_4,
  MR_Word In_2,
  MR_Word * Result_10)
{
  MR_Word TypeInfo_19_19;
  MR_Word TypeInfo_10_22;
  MR_Word TypeInfo_8_25;
  MR_Word TypeInfo_10_34;
  MR_Word TypeInfo_10_49;
  MR_Word SetA0_6 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 0))));
  MR_Word SetB0_7 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 1))));
  MR_Word SetC0_8 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 2))));
  MR_Word SetS0_9 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 3))));
  MR_Word SetA_11;
  MR_Word SetB_12;
  MR_Word SetC_13;
  MR_Word SetS_14;
  MR_Word Var_16;
  MR_Word Var_20;
  MR_Word Var_23;
  MR_Integer Var_26;
  MR_Word Var_28;
  MR_Word Var_32;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_47;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Integer Var_60;
  MR_Word Var_63;
  MR_Word Var_64;

{
#define MR_PROC_LABEL mercury__test_bitset__insert_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_17 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_22  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__test_bitset__insert_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_17 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_8_25  = TypeInfo;
}
  mercury__list__length_acc_3_p_0(TypeInfo_8_25, Es_4, (MR_Integer) 0, &Var_26);
  mercury__list__merge_sort_3_p_0(TypeInfo_8_25, Var_26, Es_4, &Var_23);
  Var_20 = mercury__tree_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_uenum_17, Var_23);
  SetA_11 = mercury__tree_bitset__union_2_f_0(TypeInfo_10_22, Var_20, SetA0_6);
  mercury__sparse_bitset__list_to_set_get_runs_3_p_0(TypeClassInfo_for_uenum_17, Es_4, (MR_Word) ((MR_Unsigned) 0U), &Var_32);
{
#define MR_PROC_LABEL mercury__test_bitset__insert_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_17 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_34  = TypeInfo;
}
  if ((Var_32 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_28 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
  {
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, Var_32, (MR_Integer) 0))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(1, Var_32, (MR_Integer) 1))));

    mercury__sparse_bitset__union_list_passes_3_p_0(TypeInfo_10_34, Var_36, Var_37, &Var_28);
  }
  Var_40 = (MR_Word) (Var_28);
  Var_41 = (MR_Word) (SetB0_7);
  mercury__sparse_bitset__union_loop_3_p_0(Var_40, Var_41, &Var_42);
  SetB_12 = (MR_Word) (Var_42);
  mercury__fat_sparse_bitset__list_to_set_get_runs_3_p_0(TypeClassInfo_for_uenum_17, Es_4, (MR_Word) ((MR_Unsigned) 0U), &Var_47);
{
#define MR_PROC_LABEL mercury__test_bitset__insert_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_17 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_49  = TypeInfo;
}
  if ((Var_47 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_43 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
  {
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(1, Var_47, (MR_Integer) 0))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(1, Var_47, (MR_Integer) 1))));

    mercury__fat_sparse_bitset__union_list_passes_3_p_0(TypeInfo_10_49, Var_51, Var_52, &Var_43);
  }
  Var_55 = (MR_Word) (Var_43);
  Var_56 = (MR_Word) (SetC0_8);
  mercury__fat_sparse_bitset__union_loop_3_p_0(Var_55, Var_56, &Var_57);
  SetC_13 = (MR_Word) (Var_57);
{
#define MR_PROC_LABEL mercury__test_bitset__insert_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_17 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_19_19  = TypeInfo;
}
  mercury__list__length_acc_3_p_0(TypeInfo_19_19, Es_4, (MR_Integer) 0, &Var_60);
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_19_19, Var_60, Es_4, &Var_58);
  Var_63 = (MR_Word) (SetS0_9);
  mercury__list__merge_and_remove_dups_3_p_0(TypeInfo_19_19, Var_58, Var_63, &Var_64);
  SetS_14 = (MR_Word) (Var_64);
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (SetA_11));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (SetB_12));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) (SetC_13));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (SetS_14));
  }
  mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_uenum_17, (MR_String) "insert_list", In_2, Var_16, Result_10);
}

MR_bool MR_CALL 
mercury__test_bitset__insert_new_3_p_0(
  MR_Word TypeClassInfo_for_uenum_27,
  MR_Box E_4,
  MR_Word In_2,
  MR_Word * Result_10)
{
  MR_bool succeeded;
  MR_Word SetA0_6 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 0))));
  MR_Word SetB0_7 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 1))));
  MR_Word SetC0_8 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 2))));
  MR_Word SetS0_9 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 3))));
  MR_Word MaybeA_12;
  MR_Word MaybeB_14;
  MR_Word MaybeC_16;
  MR_Word MaybeS_18;
  MR_Word SetA_11;
  MR_Word SetB_13;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Unsigned Var_32;
  MR_Unsigned Var_33;
  MR_Unsigned Var_34;
  MR_Unsigned Var_35;
  MR_Unsigned Var_36;
  MR_Unsigned Var_38;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_32;
  MR_Word SetC_15;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Unsigned Var_41;
  MR_Unsigned Var_42;
  MR_Unsigned Var_43;
  MR_Unsigned Var_44;
  MR_Unsigned Var_45;
  MR_Unsigned Var_47;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
  MR_Box conv3_Var_41;
  MR_Word SetS_17;
  MR_Word TypeInfo_29_29;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word A_19;
  MR_Word B_20;
  MR_Word C_21;
  MR_Word S_22;

  succeeded = mercury__tree_bitset__insert_new_3_p_0(TypeClassInfo_for_uenum_27, E_4, SetA0_6, &SetA_11);
  if (succeeded)
    {
      MaybeA_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeA_12, 0) = ((MR_Box) (SetA_11));
    }
  else
    MaybeA_12 = (MR_Word) ((MR_Unsigned) 0U);
  Var_30 = (MR_Word) (SetB0_7);
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_27, (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_32 = func_0(((MR_Box) (TypeClassInfo_for_uenum_27)), E_4);
  Var_32 = ((MR_Unsigned) (conv1_Var_32));
{
#define MR_PROC_LABEL mercury__test_bitset__insert_new_3_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_36  = Bits;
}
  Var_35 = (Var_36 - (MR_Unsigned) 1U);
  Var_38 = ~(Var_35);
  Var_33 = (Var_32 & Var_38);
  Var_34 = (Var_32 & Var_35);
  succeeded = mercury__sparse_bitset__insert_new_loop_4_p_0(Var_33, Var_34, Var_30, &Var_31);
  if (succeeded)
  {
    SetB_13 = (MR_Word) (Var_31);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      MaybeB_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeB_14, 0) = ((MR_Box) (SetB_13));
    }
  else
    MaybeB_14 = (MR_Word) ((MR_Unsigned) 0U);
  Var_39 = (MR_Word) (SetC0_8);
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_27, (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_41 = func_2(((MR_Box) (TypeClassInfo_for_uenum_27)), E_4);
  Var_41 = ((MR_Unsigned) (conv3_Var_41));
{
#define MR_PROC_LABEL mercury__test_bitset__insert_new_3_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_45  = Bits;
}
  Var_44 = (Var_45 - (MR_Unsigned) 1U);
  Var_47 = ~(Var_44);
  Var_42 = (Var_41 & Var_47);
  Var_43 = (Var_41 & Var_44);
  succeeded = mercury__fat_sparse_bitset__insert_new_loop_4_p_0(Var_42, Var_43, Var_39, &Var_40);
  if (succeeded)
  {
    SetC_15 = (MR_Word) (Var_40);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      MaybeC_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeC_16, 0) = ((MR_Box) (SetC_15));
    }
  else
    MaybeC_16 = (MR_Word) ((MR_Unsigned) 0U);
{
#define MR_PROC_LABEL mercury__test_bitset__insert_new_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_27 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_29_29  = TypeInfo;
}
  Var_48 = (MR_Word) (SetS0_9);
  succeeded = mercury__set_ordlist__insert_new_loop_3_p_0(TypeInfo_29_29, Var_48, E_4, &Var_49);
  if (succeeded)
  {
    SetS_17 = (MR_Word) (Var_49);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      MaybeS_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeS_18, 0) = ((MR_Box) (SetS_17));
    }
  else
    MaybeS_18 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = (MaybeA_12 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    A_19 = ((MR_Word) ((MR_hl_field(1, MaybeA_12, (MR_Integer) 0))));
    succeeded = (MaybeB_14 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      B_20 = ((MR_Word) ((MR_hl_field(1, MaybeB_14, (MR_Integer) 0))));
      succeeded = (MaybeC_16 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        C_21 = ((MR_Word) ((MR_hl_field(1, MaybeC_16, (MR_Integer) 0))));
        succeeded = (MaybeS_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          S_22 = ((MR_Word) ((MR_hl_field(1, MaybeS_18, (MR_Integer) 0))));
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_24;

    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_24, 0) = ((MR_Box) (A_19));
      MR_hl_field(0, Var_24, 1) = ((MR_Box) (B_20));
      MR_hl_field(0, Var_24, 2) = ((MR_Box) (C_21));
      MR_hl_field(0, Var_24, 3) = ((MR_Box) (S_22));
    }
    mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_uenum_27, (MR_String) "insert_new", In_2, Var_24, Result_10);
    succeeded = MR_TRUE;
  }
  else
  {
    succeeded = (MaybeA_12 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (MaybeB_14 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (MaybeC_16 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (MaybeS_18 == (MR_Word) ((MR_Unsigned) 0U));
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
  MR_Word TypeClassInfo_for_uenum_17,
  MR_Box E_4,
  MR_Word In_2,
  MR_Word * Result_10)
{
  MR_Word TypeInfo_19_19;
  MR_Word SetA0_6 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 0))));
  MR_Word SetB0_7 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 1))));
  MR_Word SetC0_8 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 2))));
  MR_Word SetS0_9 = ((MR_Word) ((MR_hl_field(0, In_2, (MR_Integer) 3))));
  MR_Word SetA_11;
  MR_Word SetB_12;
  MR_Word SetC_13;
  MR_Word SetS_14;
  MR_Word Var_16;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Unsigned Var_22;
  MR_Unsigned Var_23;
  MR_Unsigned Var_24;
  MR_Unsigned Var_25;
  MR_Unsigned Var_26;
  MR_Unsigned Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Unsigned Var_31;
  MR_Unsigned Var_32;
  MR_Unsigned Var_33;
  MR_Unsigned Var_34;
  MR_Unsigned Var_35;
  MR_Unsigned Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_22;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
  MR_Box conv3_Var_31;

  SetA_11 = mercury__tree_bitset__insert_2_f_0(TypeClassInfo_for_uenum_17, SetA0_6, E_4);
  Var_20 = (MR_Word) (SetB0_7);
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_17, (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_22 = func_0(((MR_Box) (TypeClassInfo_for_uenum_17)), E_4);
  Var_22 = ((MR_Unsigned) (conv1_Var_22));
{
#define MR_PROC_LABEL mercury__test_bitset__insert_3_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_26  = Bits;
}
  Var_25 = (Var_26 - (MR_Unsigned) 1U);
  Var_28 = ~(Var_25);
  Var_23 = (Var_22 & Var_28);
  Var_24 = (Var_22 & Var_25);
  mercury__sparse_bitset__insert_loop_4_p_0(Var_23, Var_24, Var_20, &Var_21);
  SetB_12 = (MR_Word) (Var_21);
  Var_29 = (MR_Word) (SetC0_8);
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_17, (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_31 = func_2(((MR_Box) (TypeClassInfo_for_uenum_17)), E_4);
  Var_31 = ((MR_Unsigned) (conv3_Var_31));
{
#define MR_PROC_LABEL mercury__test_bitset__insert_3_p_0

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
  mercury__fat_sparse_bitset__insert_loop_4_p_0(Var_32, Var_33, Var_29, &Var_30);
  SetC_13 = (MR_Word) (Var_30);
{
#define MR_PROC_LABEL mercury__test_bitset__insert_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_17 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_19_19  = TypeInfo;
}
  Var_38 = (MR_Word) (SetS0_9);
  mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_19_19, Var_38, E_4, &Var_39);
  SetS_14 = (MR_Word) (Var_39);
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (SetA_11));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (SetB_12));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) (SetC_13));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (SetS_14));
  }
  mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_uenum_17, (MR_String) "insert", In_2, Var_16, Result_10);
}

static void MR_CALL 
mercury__test_bitset__check1_4_p_0(
  MR_Word TypeClassInfo_for_uenum_26,
  MR_String Op_5,
  MR_Word TestIn_6,
  MR_Word TestOut_7,
  MR_Word * Result_8)
{
  MR_bool succeeded;
  MR_Word InSetA_9 = ((MR_Word) ((MR_hl_field(0, TestIn_6, (MR_Integer) 0))));
  MR_Word InSetB_10 = ((MR_Word) ((MR_hl_field(0, TestIn_6, (MR_Integer) 1))));
  MR_Word InSetC_11 = ((MR_Word) ((MR_hl_field(0, TestIn_6, (MR_Integer) 2))));
  MR_Word InSetS_12 = ((MR_Word) ((MR_hl_field(0, TestIn_6, (MR_Integer) 3))));
  MR_Word OutSetA_13 = ((MR_Word) ((MR_hl_field(0, TestOut_7, (MR_Integer) 0))));
  MR_Word OutSetB_14 = ((MR_Word) ((MR_hl_field(0, TestOut_7, (MR_Integer) 1))));
  MR_Word OutSetC_15 = ((MR_Word) ((MR_hl_field(0, TestOut_7, (MR_Integer) 2))));
  MR_Word OutSetS_16 = ((MR_Word) ((MR_hl_field(0, TestOut_7, (MR_Integer) 3))));
  MR_Word InsA_17;
  MR_Word OutsA_18;
  MR_Word InsB_19;
  MR_Word OutsB_20;
  MR_Word InsC_21;
  MR_Word OutsC_22;
  MR_Word InsS_23;
  MR_Word OutsS_24;
  MR_Word TypeInfo_34_34;
  MR_Word TypeInfo_38_38;
  MR_Word TypeInfo_42_42;
  MR_Word TypeInfo_46_46;
  MR_Word TypeInfo_50_50;
  MR_Word TypeInfo_54_54;
  MR_Integer PolyConst1_37;
  MR_Integer PolyConst1_41;
  MR_Integer PolyConst1_45;
  MR_Integer PolyConst1_49;
  MR_Integer PolyConst1_53;

  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_26, InSetA_9, &InsA_17);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_26, OutSetA_13, &OutsA_18);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_26, InSetB_10, &InsB_19);
  mercury__sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_26, OutSetB_14, &OutsB_20);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_26, InSetC_11, &InsC_21);
  mercury__fat_sparse_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_uenum_26, OutSetC_15, &OutsC_22);
  InsS_23 = (MR_Word) (InSetS_12);
  OutsS_24 = (MR_Word) (OutSetS_16);
{
#define MR_PROC_LABEL mercury__test_bitset__check1_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_26 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_34_34  = TypeInfo;
}
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_34_34, InsA_17, InsS_23);
  if (succeeded)
  {
    PolyConst1_37 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check1_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_26 ;
	Index = PolyConst1_37 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_38_38  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_38_38, InsB_19, InsS_23);
    if (succeeded)
    {
      PolyConst1_41 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check1_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_26 ;
	Index = PolyConst1_41 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_42_42  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_42_42, InsC_21, InsS_23);
      if (succeeded)
      {
        PolyConst1_45 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check1_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_26 ;
	Index = PolyConst1_45 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_46_46  = TypeInfo;
}
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_46_46, OutsA_18, OutsS_24);
        if (succeeded)
        {
          PolyConst1_49 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check1_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_26 ;
	Index = PolyConst1_49 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_50_50  = TypeInfo;
}
          succeeded = mercury__list____Unify____list_1_0(TypeInfo_50_50, OutsB_20, OutsS_24);
          if (succeeded)
          {
            PolyConst1_53 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check1_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_26 ;
	Index = PolyConst1_53 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_54_54  = TypeInfo;
}
            succeeded = mercury__list____Unify____list_1_0(TypeInfo_54_54, OutsC_22, OutsS_24);
          }
        }
      }
    }
  }
  if (succeeded)
    *Result_8 = TestOut_7;
  else
  {
    MR_Word TypeInfo_30_30;
    MR_Word TypeInfo_32_32;
    MR_Word Var_25;

    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (Op_5));
      MR_hl_field(1, Var_25, 1) = ((MR_Box) (TestIn_6));
      MR_hl_field(1, Var_25, 2) = ((MR_Box) (TestOut_7));
    }
{
#define MR_PROC_LABEL mercury__test_bitset__check1_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_26 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_30_30  = TypeInfo;
}
    {
      TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_32_32, 0) = ((MR_Box) (&mercury__test_bitset__test_bitset__type_ctor_info_bitset_error_1));
      MR_hl_field(0, TypeInfo_32_32, 1) = ((MR_Box) (TypeInfo_30_30));
    }
    {
      mercury__exception__throw_1_p_0(TypeInfo_32_32, ((MR_Box) (Var_25)));
      return;
    }
  }
}

MR_bool MR_CALL 
mercury__test_bitset__contains_2_p_0(
  MR_Word TypeClassInfo_for_uenum_14,
  MR_Word HeadVar__1_1,
  MR_Box E_7)
{
  MR_bool succeeded;
  MR_Word SetA_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word SetB_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word SetC_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
  MR_Word SetS_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
  MR_Word InA_8;
  MR_Word InB_9;
  MR_Word InC_10;
  MR_Word InS_11;
  MR_Word Var_17;
  MR_Unsigned Var_18;
  MR_Unsigned Var_19;
  MR_Unsigned Var_20;
  MR_Unsigned Var_21;
  MR_Unsigned Var_22;
  MR_Unsigned Var_24;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_18;
  MR_Word Var_25;
  MR_Unsigned Var_26;
  MR_Unsigned Var_27;
  MR_Unsigned Var_28;
  MR_Unsigned Var_29;
  MR_Unsigned Var_30;
  MR_Unsigned Var_32;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
  MR_Box conv3_Var_26;
  MR_Word TypeInfo_16_16;

  succeeded = mercury__tree_bitset__contains_2_p_0(TypeClassInfo_for_uenum_14, SetA_3, E_7);
  if (succeeded)
    InA_8 = (MR_Integer) 1;
  else
    InA_8 = (MR_Integer) 0;
  Var_17 = (MR_Word) (SetB_4);
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_14, (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_18 = func_0(((MR_Box) (TypeClassInfo_for_uenum_14)), E_7);
  Var_18 = ((MR_Unsigned) (conv1_Var_18));
{
#define MR_PROC_LABEL mercury__test_bitset__contains_2_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_22  = Bits;
}
  Var_21 = (Var_22 - (MR_Unsigned) 1U);
  Var_24 = ~(Var_21);
  Var_19 = (Var_18 & Var_24);
  Var_20 = (Var_18 & Var_21);
  succeeded = mercury__sparse_bitset__contains_search_nodes_3_p_0(Var_17, Var_19, Var_20);
  if (succeeded)
    InB_9 = (MR_Integer) 1;
  else
    InB_9 = (MR_Integer) 0;
  Var_25 = (MR_Word) (SetC_5);
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_14, (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_26 = func_2(((MR_Box) (TypeClassInfo_for_uenum_14)), E_7);
  Var_26 = ((MR_Unsigned) (conv3_Var_26));
{
#define MR_PROC_LABEL mercury__test_bitset__contains_2_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_30  = Bits;
}
  Var_29 = (Var_30 - (MR_Unsigned) 1U);
  Var_32 = ~(Var_29);
  Var_27 = (Var_26 & Var_32);
  Var_28 = (Var_26 & Var_29);
  succeeded = mercury__fat_sparse_bitset__contains_search_nodes_3_p_0(Var_25, Var_27, Var_28);
  if (succeeded)
    InC_10 = (MR_Integer) 1;
  else
    InC_10 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__test_bitset__contains_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_14 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_16_16  = TypeInfo;
}
  succeeded = mercury__set_ordlist__member_2_p_0(TypeInfo_16_16, E_7, SetS_6);
  if (succeeded)
    InS_11 = (MR_Integer) 1;
  else
    InS_11 = (MR_Integer) 0;
  succeeded = (InA_8 == InS_11);
  if (succeeded)
  {
    succeeded = (InB_9 == InS_11);
    if (succeeded)
      succeeded = (InC_10 == InS_11);
  }
  if (succeeded)
    succeeded = (InS_11 == (MR_Integer) 1);
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
  MR_Word conv2_HeadVar__3_3;

  mercury__list__cons_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), wrapper_arg_1, ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
}

static void MR_CALL 
mercury__test_bitset__member_2_p_1_5(
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
mercury__test_bitset__member_2_p_1_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Box closure = closure_arg;

  mercury__test_bitset__IntroducedFrom__pred__member__333__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), wrapper_arg_1, cont, cont_env_ptr);
}

static void MR_CALL 
mercury__test_bitset__member_2_p_1_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Box closure = closure_arg;

  mercury__test_bitset__IntroducedFrom__pred__member__332__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), wrapper_arg_1, cont, cont_env_ptr);
}

static void MR_CALL 
mercury__test_bitset__member_2_p_1_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Box closure = closure_arg;

  mercury__test_bitset__IntroducedFrom__pred__member__331__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), wrapper_arg_1, cont, cont_env_ptr);
}

static void MR_CALL 
mercury__test_bitset__member_2_p_1_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Box closure = closure_arg;

  mercury__test_bitset__IntroducedFrom__pred__member__330__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), wrapper_arg_1, cont, cont_env_ptr);
}

void MR_CALL 
mercury__test_bitset__member_2_p_1(
  MR_Word TypeClassInfo_for_uenum_41,
  MR_Box * E_1,
  MR_Word HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_bool succeeded;
  MR_Word TypeInfo_47_47;
  MR_Word TypeInfo_48_48;
  MR_Word TypeInfo_49_49;
  MR_Word TypeInfo_50_50;
  MR_Word SetA_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetC_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word SetS_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word PredA_19;
  MR_Word PredB_21;
  MR_Word PredC_23;
  MR_Word PredS_25;
  MR_Word SolnsA_27;
  MR_Word SolnsB_28;
  MR_Word SolnsC_29;
  MR_Word SolnsS_30;
  MR_Word TypeInfo_14_70;
  MR_Word Var_66;
  MR_Word Var_68;
  MR_Integer Var_80;
  MR_Box conv1_Var_68;
  MR_Word TypeInfo_14_97;
  MR_Word Var_93;
  MR_Word Var_95;
  MR_Integer Var_107;
  MR_Box conv3_Var_95;
  MR_Word TypeInfo_53_53;
  MR_Word TypeInfo_57_57;
  MR_Word TypeInfo_61_61;
  MR_Integer PolyConst1_56;
  MR_Integer PolyConst1_60;

  {
    PredA_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredA_19, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_7[0]));
    MR_hl_field(0, PredA_19, 1) = ((MR_Box) (mercury__test_bitset__member_2_p_1_1));
    MR_hl_field(0, PredA_19, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, PredA_19, 3) = ((MR_Box) (TypeClassInfo_for_uenum_41));
    MR_hl_field(0, PredA_19, 4) = ((MR_Box) (SetA_15));
  }
  {
    PredB_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredB_21, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_7[1]));
    MR_hl_field(0, PredB_21, 1) = ((MR_Box) (mercury__test_bitset__member_2_p_1_2));
    MR_hl_field(0, PredB_21, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, PredB_21, 3) = ((MR_Box) (TypeClassInfo_for_uenum_41));
    MR_hl_field(0, PredB_21, 4) = ((MR_Box) (SetB_16));
  }
  {
    PredC_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredC_23, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_7[2]));
    MR_hl_field(0, PredC_23, 1) = ((MR_Box) (mercury__test_bitset__member_2_p_1_3));
    MR_hl_field(0, PredC_23, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, PredC_23, 3) = ((MR_Box) (TypeClassInfo_for_uenum_41));
    MR_hl_field(0, PredC_23, 4) = ((MR_Box) (SetC_17));
  }
  {
    PredS_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredS_25, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_7[3]));
    MR_hl_field(0, PredS_25, 1) = ((MR_Box) (mercury__test_bitset__member_2_p_1_4));
    MR_hl_field(0, PredS_25, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, PredS_25, 3) = ((MR_Box) (TypeClassInfo_for_uenum_41));
    MR_hl_field(0, PredS_25, 4) = ((MR_Box) (SetS_18));
  }
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_41 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_47_47  = TypeInfo;
}
  {
    Var_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_66, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_6[0]));
    MR_hl_field(0, Var_66, 1) = ((MR_Box) (mercury__test_bitset__member_2_p_1_5));
    MR_hl_field(0, Var_66, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_66, 3) = ((MR_Box) (TypeInfo_47_47));
  }
  {
    TypeInfo_14_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_14_70, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_14_70, 1) = ((MR_Box) (TypeInfo_47_47));
  }
  mercury__solutions__builtin_aggregate_4_p_7(TypeInfo_47_47, TypeInfo_14_70, PredA_19, Var_66, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_Var_68);
  Var_68 = ((MR_Word) (conv1_Var_68));
  mercury__list__length_acc_3_p_0(TypeInfo_47_47, Var_68, (MR_Integer) 0, &Var_80);
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_47_47, Var_80, Var_68, &SolnsA_27);
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_41 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_48_48  = TypeInfo;
}
  {
    Var_93 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_93, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_6[0]));
    MR_hl_field(0, Var_93, 1) = ((MR_Box) (mercury__test_bitset__member_2_p_1_6));
    MR_hl_field(0, Var_93, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_93, 3) = ((MR_Box) (TypeInfo_48_48));
  }
  {
    TypeInfo_14_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_14_97, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_14_97, 1) = ((MR_Box) (TypeInfo_48_48));
  }
  mercury__solutions__builtin_aggregate_4_p_7(TypeInfo_48_48, TypeInfo_14_97, PredB_21, Var_93, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_Var_95);
  Var_95 = ((MR_Word) (conv3_Var_95));
  mercury__list__length_acc_3_p_0(TypeInfo_48_48, Var_95, (MR_Integer) 0, &Var_107);
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_48_48, Var_107, Var_95, &SolnsB_28);
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_41 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_49_49  = TypeInfo;
}
  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_52_53_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0(TypeInfo_49_49, PredC_23, &SolnsC_29);
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_41 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_50_50  = TypeInfo;
}
  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_52_52_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0(TypeInfo_50_50, PredS_25, &SolnsS_30);
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_41 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_53_53  = TypeInfo;
}
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_53_53, SolnsA_27, SolnsS_30);
  if (succeeded)
  {
    PolyConst1_56 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_41 ;
	Index = PolyConst1_56 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_57_57  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_57_57, SolnsB_28, SolnsS_30);
    if (succeeded)
    {
      PolyConst1_60 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_41 ;
	Index = PolyConst1_60 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_61_61  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_61_61, SolnsC_29, SolnsS_30);
    }
  }
  if (succeeded)
  {
    MR_Word TypeInfo_51_51;

{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_41 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_51_51  = TypeInfo;
}
    mercury__set_ordlist__member_2_p_1(TypeInfo_51_51, E_1, SetS_18, cont, cont_env_ptr);
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
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_52_53_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0_1(
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
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_52_53_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0(
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
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_52_53_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0_1));
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
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_52_52_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0_1(
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
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_52_52_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0(
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
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_52_52_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0_1));
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
  MR_Word TypeClassInfo_for_uenum_41,
  MR_Box E_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word SetA_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetC_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word SetS_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_Word InA_8;
  MR_Word InB_9;
  MR_Word InC_10;
  MR_Word InS_11;
  MR_Word TypeInfo_43_43;

  succeeded = mercury__tree_bitset__member_2_p_0(TypeClassInfo_for_uenum_41, E_1, SetA_4);
  if (succeeded)
    InA_8 = (MR_Integer) 1;
  else
    InA_8 = (MR_Integer) 0;
  succeeded = mercury__sparse_bitset__member_2_p_0(TypeClassInfo_for_uenum_41, E_1, SetB_5);
  if (succeeded)
    InB_9 = (MR_Integer) 1;
  else
    InB_9 = (MR_Integer) 0;
  succeeded = mercury__fat_sparse_bitset__member_2_p_0(TypeClassInfo_for_uenum_41, E_1, SetC_6);
  if (succeeded)
    InC_10 = (MR_Integer) 1;
  else
    InC_10 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_41 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_43_43  = TypeInfo;
}
  succeeded = mercury__set_ordlist__member_2_p_0(TypeInfo_43_43, E_1, SetS_7);
  if (succeeded)
    InS_11 = (MR_Integer) 1;
  else
    InS_11 = (MR_Integer) 0;
  succeeded = (InA_8 == InS_11);
  if (succeeded)
  {
    succeeded = (InB_9 == InS_11);
    if (succeeded)
      succeeded = (InC_10 == InS_11);
  }
  if (succeeded)
    succeeded = (InS_11 == (MR_Integer) 1);
  else
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.member\'/2", (MR_String) "failed (in, in)");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__test_bitset__is_singleton_2_p_0(
  MR_Word TypeClassInfo_for_uenum_18,
  MR_Word HeadVar__1_1,
  MR_Box * R_7)
{
  MR_bool succeeded;
  MR_Word A_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word B_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word C_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
  MR_Word S_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
  MR_Word ResultA_9;
  MR_Word ResultB_11;
  MR_Word ResultC_13;
  MR_Word ResultS_15;
  MR_Box AR_8;
  MR_Box BR_10;
  MR_Box CR_12;
  MR_Box SR_14;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word TypeInfo_22_22;
  MR_Word TypeInfo_26_26;
  MR_Word TypeInfo_30_30;
  MR_Integer PolyConst1_25;
  MR_Integer PolyConst1_29;

  succeeded = mercury__tree_bitset__is_singleton_2_p_0(TypeClassInfo_for_uenum_18, A_3, &AR_8);
  if (succeeded)
    {
      ResultA_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ResultA_9, 0) = AR_8;
    }
  else
    ResultA_9 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = mercury__sparse_bitset__is_singleton_2_p_0(TypeClassInfo_for_uenum_18, B_4, &BR_10);
  if (succeeded)
    {
      ResultB_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ResultB_11, 0) = BR_10;
    }
  else
    ResultB_11 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = mercury__fat_sparse_bitset__is_singleton_2_p_0(TypeClassInfo_for_uenum_18, C_5, &CR_12);
  if (succeeded)
    {
      ResultC_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ResultC_13, 0) = CR_12;
    }
  else
    ResultC_13 = (MR_Word) ((MR_Unsigned) 0U);
  Var_33 = (MR_Word) (S_6);
  succeeded = (Var_33 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    SR_14 = (MR_hl_field(1, Var_33, (MR_Integer) 0));
    Var_34 = ((MR_Word) ((MR_hl_field(1, Var_33, (MR_Integer) 1))));
    succeeded = (Var_34 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
    {
      ResultS_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ResultS_15, 0) = SR_14;
    }
  else
    ResultS_15 = (MR_Word) ((MR_Unsigned) 0U);
{
#define MR_PROC_LABEL mercury__test_bitset__is_singleton_2_p_0

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
  succeeded = mercury__maybe____Unify____maybe_1_0(TypeInfo_22_22, ResultA_9, ResultS_15);
  if (succeeded)
  {
    PolyConst1_25 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__is_singleton_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_18 ;
	Index = PolyConst1_25 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_26_26  = TypeInfo;
}
    succeeded = mercury__maybe____Unify____maybe_1_0(TypeInfo_26_26, ResultB_11, ResultS_15);
    if (succeeded)
    {
      PolyConst1_29 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__is_singleton_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_18 ;
	Index = PolyConst1_29 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_30_30  = TypeInfo;
}
      succeeded = mercury__maybe____Unify____maybe_1_0(TypeInfo_30_30, ResultC_13, ResultS_15);
    }
  }
  if (succeeded)
  {
    succeeded = (ResultS_15 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      *R_7 = (MR_hl_field(1, ResultS_15, (MR_Integer) 0));
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
  MR_Word TypeInfo_for_T_12,
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word A_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word B_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word C_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
  MR_Word S_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
  MR_Word NonEmA_6;
  MR_Word NonEmB_7;
  MR_Word NonEmC_8;
  MR_Word NonEmS_9;
  MR_Word Var_22;
  MR_Word Var_25;
  MR_Word Var_29;

  succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(TypeInfo_for_T_12, A_2, (MR_Word) (((MR_Box) (&mercury__test_bitset_scalar_common_4[0]))));
  succeeded = !(succeeded);
  if (succeeded)
    NonEmA_6 = (MR_Integer) 1;
  else
    NonEmA_6 = (MR_Integer) 0;
  Var_22 = (MR_Word) (B_3);
  succeeded = (Var_22 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    NonEmB_7 = (MR_Integer) 1;
  else
    NonEmB_7 = (MR_Integer) 0;
  Var_25 = (MR_Word) (C_4);
  succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    NonEmC_8 = (MR_Integer) 1;
  else
    NonEmC_8 = (MR_Integer) 0;
  Var_29 = (MR_Word) (S_5);
  succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    NonEmS_9 = (MR_Integer) 1;
  else
    NonEmS_9 = (MR_Integer) 0;
  succeeded = (NonEmA_6 == NonEmS_9);
  if (succeeded)
  {
    succeeded = (NonEmB_7 == NonEmS_9);
    if (succeeded)
      succeeded = (NonEmC_8 == NonEmS_9);
  }
  if (succeeded)
    succeeded = (NonEmS_9 == (MR_Integer) 1);
  else
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.is_non_empty\'/1", (MR_String) "failed");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__test_bitset__is_empty_1_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word A_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word B_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word C_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
  MR_Word S_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
  MR_Word EmptyA_6;
  MR_Word EmptyB_7;
  MR_Word EmptyC_8;
  MR_Word EmptyS_9;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;

  succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(TypeInfo_for_T_12, A_2, (MR_Word) (((MR_Box) (&mercury__test_bitset_scalar_common_4[0]))));
  if (succeeded)
    EmptyA_6 = (MR_Integer) 1;
  else
    EmptyA_6 = (MR_Integer) 0;
  Var_22 = (MR_Word) (B_3);
  succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    EmptyB_7 = (MR_Integer) 1;
  else
    EmptyB_7 = (MR_Integer) 0;
  Var_23 = (MR_Word) (C_4);
  succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    EmptyC_8 = (MR_Integer) 1;
  else
    EmptyC_8 = (MR_Integer) 0;
  Var_24 = (MR_Word) (S_5);
  succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    EmptyS_9 = (MR_Integer) 1;
  else
    EmptyS_9 = (MR_Integer) 0;
  succeeded = (EmptyA_6 == EmptyS_9);
  if (succeeded)
  {
    succeeded = (EmptyB_7 == EmptyS_9);
    if (succeeded)
      succeeded = (EmptyC_8 == EmptyS_9);
  }
  if (succeeded)
    succeeded = (EmptyS_9 == (MR_Integer) 1);
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
  MR_Word TypeClassInfo_for_uenum_8,
  MR_Box A_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_5;
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Word Var_25;
  MR_Unsigned Var_26;
  MR_Unsigned Var_27;
  MR_Unsigned Var_28;
  MR_Unsigned Var_29;
  MR_Unsigned Var_30;
  MR_Unsigned Var_32;
  MR_Word Var_38;
  MR_Unsigned Var_39;
  MR_Unsigned Var_40;
  MR_Unsigned Var_41;
  MR_Unsigned Var_42;
  MR_Unsigned Var_43;
  MR_Unsigned Var_45;
  MR_Word Var_46;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_26;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
  MR_Box conv3_Var_39;

  Var_4 = mercury__tree_bitset__insert_2_f_0(TypeClassInfo_for_uenum_8, (MR_Word) (((MR_Box) (&mercury__test_bitset_scalar_common_4[0]))), A_3);
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_8, (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_26 = func_0(((MR_Box) (TypeClassInfo_for_uenum_8)), A_3);
  Var_26 = ((MR_Unsigned) (conv1_Var_26));
{
#define MR_PROC_LABEL mercury__test_bitset__make_singleton_set_1_f_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_30  = Bits;
}
  Var_29 = (Var_30 - (MR_Unsigned) 1U);
  Var_32 = ~(Var_29);
  Var_27 = (Var_26 & Var_32);
  Var_28 = (Var_26 & Var_29);
  mercury__sparse_bitset__insert_loop_4_p_0(Var_27, Var_28, (MR_Word) ((MR_Word) (((MR_Box) ((MR_Unsigned) 0U)))), &Var_25);
  Var_5 = (MR_Word) (Var_25);
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_8, (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_39 = func_2(((MR_Box) (TypeClassInfo_for_uenum_8)), A_3);
  Var_39 = ((MR_Unsigned) (conv3_Var_39));
{
#define MR_PROC_LABEL mercury__test_bitset__make_singleton_set_1_f_0

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
  mercury__fat_sparse_bitset__insert_loop_4_p_0(Var_40, Var_41, (MR_Word) ((MR_Word) (((MR_Box) ((MR_Unsigned) 0U)))), &Var_38);
  Var_6 = (MR_Word) (Var_38);
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = A_3;
    MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_7 = (MR_Word) (Var_46);
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (Var_5));
    MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (Var_6));
    MR_hl_field(0, HeadVar__2_2, 3) = ((MR_Box) (Var_7));
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
  MR_Word TypeClassInfo_for_uenum_8,
  MR_Box A_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_5;
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Word Var_25;
  MR_Unsigned Var_26;
  MR_Unsigned Var_27;
  MR_Unsigned Var_28;
  MR_Unsigned Var_29;
  MR_Unsigned Var_30;
  MR_Unsigned Var_32;
  MR_Word Var_38;
  MR_Unsigned Var_39;
  MR_Unsigned Var_40;
  MR_Unsigned Var_41;
  MR_Unsigned Var_42;
  MR_Unsigned Var_43;
  MR_Unsigned Var_45;
  MR_Word Var_46;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_26;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
  MR_Box conv3_Var_39;

  Var_4 = mercury__tree_bitset__insert_2_f_0(TypeClassInfo_for_uenum_8, (MR_Word) (((MR_Box) (&mercury__test_bitset_scalar_common_4[0]))), A_3);
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_8, (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_26 = func_0(((MR_Box) (TypeClassInfo_for_uenum_8)), A_3);
  Var_26 = ((MR_Unsigned) (conv1_Var_26));
{
#define MR_PROC_LABEL mercury__test_bitset__singleton_set_1_f_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_30  = Bits;
}
  Var_29 = (Var_30 - (MR_Unsigned) 1U);
  Var_32 = ~(Var_29);
  Var_27 = (Var_26 & Var_32);
  Var_28 = (Var_26 & Var_29);
  mercury__sparse_bitset__insert_loop_4_p_0(Var_27, Var_28, (MR_Word) ((MR_Word) (((MR_Box) ((MR_Unsigned) 0U)))), &Var_25);
  Var_5 = (MR_Word) (Var_25);
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_8, (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_39 = func_2(((MR_Box) (TypeClassInfo_for_uenum_8)), A_3);
  Var_39 = ((MR_Unsigned) (conv3_Var_39));
{
#define MR_PROC_LABEL mercury__test_bitset__singleton_set_1_f_0

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
  mercury__fat_sparse_bitset__insert_loop_4_p_0(Var_40, Var_41, (MR_Word) ((MR_Word) (((MR_Box) ((MR_Unsigned) 0U)))), &Var_38);
  Var_6 = (MR_Word) (Var_38);
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = A_3;
    MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_7 = (MR_Word) (Var_46);
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (Var_5));
    MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (Var_6));
    MR_hl_field(0, HeadVar__2_2, 3) = ((MR_Box) (Var_7));
  }
  return HeadVar__2_2;
}

void MR_CALL 
mercury__test_bitset__init_1_p_0(
  MR_Word TypeInfo_for_T_2,
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) (&mercury__test_bitset_scalar_common_2[1]);
}

MR_Word MR_CALL 
mercury__test_bitset__init_0_f_0(
  MR_Word TypeInfo_for_T_6)
{
  return (MR_Word) (&mercury__test_bitset_scalar_common_2[1]);
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
