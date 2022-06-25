/*
** Automatically generated from `injection.m'
** by the Mercury compiler,
** version rotd-2022-06-25
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


// :- module injection.
// :- implementation.

/*
INIT mercury__injection__init
ENDINIT
*/

#include "injection.mih"


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




static const MR_FA_PseudoTypeInfo_Struct2 mercury__injection__tree234__pti_tree234_2__pseudo_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__injection__tree234__pti_tree234_2__pseudo_2__pseudo_1;

static const MR_PseudoTypeInfo mercury__injection__injection__field_types_injection_2_0[2];

static const MR_DuFunctorDesc mercury__injection__injection__du_functor_desc_injection_2_0;

static const MR_DuFunctorDescPtr mercury__injection__injection__du_stag_ordered_injection_2_0[1];

static const MR_DuPtagLayout mercury__injection__injection__du_ptag_ordered_injection_2[1];

static const MR_DuFunctorDescPtr mercury__injection__injection__du_name_ordered_injection_2[1];

static const MR_Integer mercury__injection__injection__functor_number_map_injection_2[1];

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_48_95_95_104_111_52_49_95_95_91_50_44_32_52_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_44_32_50_49_44_32_50_50_44_32_50_51_44_32_50_52_44_32_50_53_44_32_50_54_44_32_50_57_44_32_51_48_44_32_51_49_44_32_51_50_44_32_51_51_44_32_51_52_93_95_48_4_p_in__tree234_0(
  MR_Word Var_58,
  MR_Word Var_60,
  MR_Word Var_62,
  MR_Word Var_67,
  MR_Word Var_53,
  MR_Word Var_54,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_52_50_95_95_91_50_44_32_52_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_51_44_32_49_52_93_95_48_8_p_0(
  MR_Word Var_33,
  MR_Word Var_35,
  MR_Word Var_37,
  MR_Word Var_42,
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Box LambdaHeadVar__1_21,
  MR_Box LambdaHeadVar__2_22,
  MR_Word LambdaHeadVar__3_23,
  MR_Word * LambdaHeadVar__4_24);

static void MR_CALL 
mercury__injection__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_93_95_48_95_95_49_3_p_0(
  MR_Word Var_68,
  MR_Word Var_61,
  MR_Word Var_62,
  MR_Word Var_63,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_80);

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_93_95_48_3_p_in__tree234_0(
  MR_Word Var_68,
  MR_Word Var_61,
  MR_Word Var_62,
  MR_Word Var_63,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_52_49_57_95_95_49_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_51_44_32_56_93_95_48_7_p_0(
  MR_Word Var_29,
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_W_25,
  MR_Box LambdaHeadVar__1_17,
  MR_Box LambdaHeadVar__2_18,
  MR_Box * LambdaHeadVar__3_19);

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_93_95_48_4_p_in__tree234_0(
  MR_Word Var_56,
  MR_Word Var_57,
  MR_Word Var_61,
  MR_Word Var_63,
  MR_Word Var_64,
  MR_Word Var_65,
  MR_Word Var_66,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_51_57_95_95_91_50_44_32_57_44_32_49_48_93_95_48_8_p_0(
  MR_Word Var_33,
  MR_Word Var_35,
  MR_Word Var_36,
  MR_Word Var_37,
  MR_Word Var_38,
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Box LambdaHeadVar__1_21,
  MR_Box LambdaHeadVar__2_22,
  MR_Word LambdaHeadVar__3_23,
  MR_Word * LambdaHeadVar__4_24);

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_44_32_49_48_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_93_95_48_4_p_in__tree234_0(
  MR_Word Var_56,
  MR_Word Var_57,
  MR_Word Var_61,
  MR_Word Var_63,
  MR_Word Var_65,
  MR_Word Var_66,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_51_56_95_95_91_50_44_32_52_44_32_57_44_32_49_48_93_95_48_8_p_0(
  MR_Word Var_33,
  MR_Word Var_35,
  MR_Word Var_37,
  MR_Word Var_38,
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Box LambdaHeadVar__1_21,
  MR_Box LambdaHeadVar__2_22,
  MR_Word LambdaHeadVar__3_23,
  MR_Word * LambdaHeadVar__4_24);

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_3_p_in__list_0(
  MR_Word Var_22,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mercury__injection__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_95_95_49_3_p_0(
  MR_Word Var_22,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_28);

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(
  MR_Word Var_56,
  MR_Word Var_57,
  MR_Word Var_58,
  MR_Word Var_59,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_44_32_49_48_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_93_95_48_4_p_in__tree234_0(
  MR_Word Var_56,
  MR_Word Var_57,
  MR_Word Var_61,
  MR_Word Var_63,
  MR_Word Var_65,
  MR_Word Var_66,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_51_55_95_95_91_50_44_32_52_44_32_57_44_32_49_48_93_95_48_8_p_0(
  MR_Word Var_33,
  MR_Word Var_35,
  MR_Word Var_37,
  MR_Word Var_38,
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Box LambdaHeadVar__1_21,
  MR_Box LambdaHeadVar__2_22,
  MR_Word LambdaHeadVar__3_23,
  MR_Word * LambdaHeadVar__4_24);

static void MR_CALL 
mercury__injection__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_95_95_49_3_p_0(
  MR_Word Var_61,
  MR_Word Var_62,
  MR_Word Var_63,
  MR_Word Var_64,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_86);

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(
  MR_Word Var_61,
  MR_Word Var_62,
  MR_Word Var_63,
  MR_Word Var_64,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mercury__injection__IntroducedFrom__pred__map_values__419__1_7_p_0(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_W_25,
  MR_Word HeadVar__1_4,
  MR_Box LambdaHeadVar__1_17,
  MR_Box LambdaHeadVar__2_18,
  MR_Box * LambdaHeadVar__3_19);

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_4_p_in__list_0(
  MR_Word Var_19,
  MR_Word Var_20,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_4_p_in__list_0(
  MR_Word Var_19,
  MR_Word Var_20,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(
  MR_Word Var_56,
  MR_Word Var_57,
  MR_Box Var_58,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__injection__filter_values_with_key_5_p_0(
  MR_Word TypeInfo_for_K_12,
  MR_Word TypeInfo_for_V_13,
  MR_Box FilterKey_6,
  MR_Box V_7,
  MR_Box K_8,
  MR_Word STATE_VARIABLE_Map_0_10,
  MR_Word * STATE_VARIABLE_Map_11);

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_7_p_in__list_0(
  MR_Word Var_54,
  MR_Word Var_55,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static MR_bool MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_7_p_in__list_0(
  MR_Word Var_54,
  MR_Word Var_55,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_7_p_in__list_0(
  MR_Word Var_54,
  MR_Word Var_55,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static MR_bool MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_7_p_in__list_0(
  MR_Word Var_54,
  MR_Word Var_55,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_6_p_in__list_0(
  MR_Word Var_33,
  MR_Word Var_34,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static MR_bool MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_6_p_in__list_0(
  MR_Word Var_33,
  MR_Word Var_34,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_6_p_in__list_0(
  MR_Word Var_33,
  MR_Word Var_34,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static MR_bool MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_6_p_in__list_0(
  MR_Word Var_33,
  MR_Word Var_34,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static MR_bool MR_CALL 
mercury__injection____Unify____injection_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__injection____Compare____injection_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);


static /* final */ const MR_Box mercury__injection_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__injection_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__injection_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__injection_scalar_common_4[1][2];




static /* final */ const MR_Box mercury__injection_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__injection_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__injection_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__injection_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__injection_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__injection_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__injection_scalar_common_4[1][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
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



static const MR_FA_PseudoTypeInfo_Struct2 mercury__injection__tree234__pti_tree234_2__pseudo_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__injection__tree234__pti_tree234_2__pseudo_2__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_PseudoTypeInfo mercury__injection__injection__field_types_injection_2_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__injection__tree234__pti_tree234_2__pseudo_1__pseudo_2),
  (MR_PseudoTypeInfo) (&mercury__injection__tree234__pti_tree234_2__pseudo_2__pseudo_1)
};

static const MR_DuFunctorDesc mercury__injection__injection__du_functor_desc_injection_2_0 = {
  (MR_String) "injection",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__injection__injection__field_types_injection_2_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__injection__injection__du_stag_ordered_injection_2_0[1] = {
  &mercury__injection__injection__du_functor_desc_injection_2_0
};

static const MR_DuPtagLayout mercury__injection__injection__du_ptag_ordered_injection_2[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__injection__injection__du_stag_ordered_injection_2_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__injection__injection__du_name_ordered_injection_2[1] = {
  &mercury__injection__injection__du_functor_desc_injection_2_0
};

static const MR_Integer mercury__injection__injection__functor_number_map_injection_2[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__injection__injection__type_ctor_info_injection_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__injection____Unify____injection_2_0_10001)),
  ((MR_Box) (mercury__injection____Compare____injection_2_0_10001)),
  (MR_String) "injection",
  (MR_String) "injection",
  { mercury__injection__injection__du_name_ordered_injection_2 },
  { mercury__injection__injection__du_ptag_ordered_injection_2 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__injection__injection__functor_number_map_injection_2,

};

void MR_CALL 
mercury__injection____Compare____injection_2_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__tree234____Compare____tree234_2_0(TypeInfo_for_K_11, TypeInfo_for_V_12, &SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__tree234____Compare____tree234_2_0(TypeInfo_for_V_12, TypeInfo_for_K_11, HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
mercury__injection____Unify____injection_2_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_K_9, TypeInfo_for_V_10, ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_V_10, TypeInfo_for_K_9, ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__injection__maybe_transform_key_3_p_0(
  MR_Word TypeInfo_for_V_8,
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_L_10,
  MR_Word Pred_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Box V_5 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
  MR_Box K_6 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
  MR_Box L_7;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_4, (MR_Integer) 1))));

  succeeded = func_0(((MR_Box) (Pred_4)), V_5, K_6, &L_7);
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = V_5;
      MR_hl_field(MR_mktag(0), base, 1) = L_7;
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_Word MR_CALL 
mercury__injection__maybe_set_transformed_key_4_f_0(
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_K_14,
  MR_Word TypeInfo_for_L_15,
  MR_Word Pred_6,
  MR_Box K_7,
  MR_Box V_8,
  MR_Word STATE_VARIABLE_Map_0_11)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_Map_12;
  MR_Box L_10;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_6, (MR_Integer) 1))));

  succeeded = func_0(((MR_Box) (Pred_6)), V_8, K_7, &L_10);
  if (succeeded)
    mercury__tree234__set_4_p_0(TypeInfo_for_L_15, TypeInfo_for_V_13, L_10, V_8, STATE_VARIABLE_Map_0_11, &STATE_VARIABLE_Map_12);
  else
    STATE_VARIABLE_Map_12 = STATE_VARIABLE_Map_0_11;
  return STATE_VARIABLE_Map_12;
}

MR_Word MR_CALL 
mercury__injection__insert_transformed_key_f_4_f_0(
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_K_14,
  MR_Word TypeInfo_for_L_15,
  MR_Word Func_6,
  MR_Box K_7,
  MR_Box V_8,
  MR_Word STATE_VARIABLE_Map_0_10)
{
  MR_Word STATE_VARIABLE_Map_11;
  MR_Box Var_12;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Func_6, (MR_Integer) 1))));

  Var_12 = func_0(((MR_Box) (Func_6)), V_8, K_7);
  mercury__tree234__set_4_p_0(TypeInfo_for_L_15, TypeInfo_for_V_13, Var_12, V_8, STATE_VARIABLE_Map_0_10, &STATE_VARIABLE_Map_11);
  return STATE_VARIABLE_Map_11;
}

MR_bool MR_CALL 
mercury__injection__set_2_6_p_0(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Box K_7,
  MR_Box V_8,
  MR_Word STATE_VARIABLE_F_0_12,
  MR_Word * STATE_VARIABLE_F_13,
  MR_Word STATE_VARIABLE_R_0_14,
  MR_Word * STATE_VARIABLE_R_15)
{
  MR_bool succeeded;
  MR_Box OrigK_11;

  mercury__tree234__set_4_p_0(TypeInfo_for_K_16, TypeInfo_for_V_17, K_7, V_8, STATE_VARIABLE_F_0_12, STATE_VARIABLE_F_13);
  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_V_17, TypeInfo_for_K_16, STATE_VARIABLE_R_0_14, V_8, &OrigK_11);
  if (succeeded)
  {
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_16, K_7, OrigK_11);
    if (succeeded)
    {
      *STATE_VARIABLE_R_15 = STATE_VARIABLE_R_0_14;
      succeeded = MR_TRUE;
    }
  }
  else
  {
    mercury__map__det_insert_4_p_0(TypeInfo_for_V_17, TypeInfo_for_K_16, V_8, K_7, STATE_VARIABLE_R_0_14, STATE_VARIABLE_R_15);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mercury__injection__reverse_map_2_p_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word HeadVar__1_1,
  MR_Word * R_4)
{
  *R_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
}

MR_Word MR_CALL 
mercury__injection__reverse_map_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word HeadVar__1_1)
{
  MR_Word R_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

  return R_4;
}

void MR_CALL 
mercury__injection__forward_map_2_p_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word HeadVar__1_1,
  MR_Word * F_3)
{
  *F_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
}

MR_Word MR_CALL 
mercury__injection__forward_map_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word HeadVar__1_1)
{
  MR_Word F_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

  return F_3;
}

void MR_CALL 
mercury__injection__map_values_3_p_0(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_W_18,
  MR_Word Pred_4,
  MR_Word I0_5,
  MR_Word * I_6)
{
  MR_Word F0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), I0_5, (MR_Integer) 0))));
  MR_Word R0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), I0_5, (MR_Integer) 1))));
  MR_Word F_22;
  MR_Word R_23;

  mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_93_95_48_3_p_in__tree234_0(Pred_4, TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_W_18, F0_20, &F_22);
  mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_48_95_95_104_111_52_49_95_95_91_50_44_32_52_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_44_32_50_49_44_32_50_50_44_32_50_51_44_32_50_52_44_32_50_53_44_32_50_54_44_32_50_57_44_32_51_48_44_32_51_49_44_32_51_50_44_32_51_51_44_32_51_52_93_95_48_4_p_in__tree234_0(TypeInfo_for_W_18, TypeInfo_for_K_16, TypeInfo_for_W_18, Pred_4, TypeInfo_for_V_17, TypeInfo_for_K_16, R0_21, (MR_Word) ((MR_Unsigned) 0U), &R_23);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *I_6 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (F_22));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (R_23));
  }
}

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_48_95_95_104_111_52_49_95_95_91_50_44_32_52_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_44_32_50_49_44_32_50_50_44_32_50_51_44_32_50_52_44_32_50_53_44_32_50_54_44_32_50_57_44_32_51_48_44_32_51_49_44_32_51_50_44_32_51_51_44_32_51_52_93_95_48_4_p_in__tree234_0(
  MR_Word Var_58,
  MR_Word Var_60,
  MR_Word Var_62,
  MR_Word Var_67,
  MR_Word Var_53,
  MR_Word Var_54,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *HeadVar__4_4 = HeadVar__3_3;
        break;
      case (MR_Integer) 1:
        {
          MR_Box Var_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Var_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_15;
          MR_Word Var_16;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_48_95_95_104_111_52_49_95_95_91_50_44_32_52_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_44_32_50_49_44_32_50_50_44_32_50_51_44_32_50_52_44_32_50_53_44_32_50_54_44_32_50_57_44_32_51_48_44_32_51_49_44_32_51_50_44_32_51_51_44_32_51_52_93_95_48_4_p_in__tree234_0(Var_58, Var_60, Var_62, Var_67, Var_53, Var_54, Var_11, HeadVar__3_3, &Var_15);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_52_50_95_95_91_50_44_32_52_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_51_44_32_49_52_93_95_48_8_p_0(Var_58, Var_60, Var_62, Var_67, Var_53, Var_54, Var_9, Var_10, Var_15, &Var_16);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_12;
          next_value_of_HeadVar__3_3 = Var_16;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box Var_18 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Var_19 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Box Var_20 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2));
          MR_Box Var_21 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3));
          MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4))));
          MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
          MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 6))));
          MR_Word Var_27;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_48_95_95_104_111_52_49_95_95_91_50_44_32_52_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_44_32_50_49_44_32_50_50_44_32_50_51_44_32_50_52_44_32_50_53_44_32_50_54_44_32_50_57_44_32_51_48_44_32_51_49_44_32_51_50_44_32_51_51_44_32_51_52_93_95_48_4_p_in__tree234_0(Var_58, Var_60, Var_62, Var_67, Var_53, Var_54, Var_22, HeadVar__3_3, &Var_27);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_52_50_95_95_91_50_44_32_52_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_51_44_32_49_52_93_95_48_8_p_0(Var_58, Var_60, Var_62, Var_67, Var_53, Var_54, Var_18, Var_19, Var_27, &Var_28);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_48_95_95_104_111_52_49_95_95_91_50_44_32_52_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_44_32_50_49_44_32_50_50_44_32_50_51_44_32_50_52_44_32_50_53_44_32_50_54_44_32_50_57_44_32_51_48_44_32_51_49_44_32_51_50_44_32_51_51_44_32_51_52_93_95_48_4_p_in__tree234_0(Var_58, Var_60, Var_62, Var_67, Var_53, Var_54, Var_23, Var_28, &Var_29);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_52_50_95_95_91_50_44_32_52_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_51_44_32_49_52_93_95_48_8_p_0(Var_58, Var_60, Var_62, Var_67, Var_53, Var_54, Var_20, Var_21, Var_29, &Var_30);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_24;
          next_value_of_HeadVar__3_3 = Var_30;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box Var_32 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Var_33 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
          MR_Box Var_34 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
          MR_Box Var_35 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3));
          MR_Box Var_36 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4));
          MR_Box Var_37 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5));
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 8))));
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 9))));
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_48_95_95_104_111_52_49_95_95_91_50_44_32_52_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_44_32_50_49_44_32_50_50_44_32_50_51_44_32_50_52_44_32_50_53_44_32_50_54_44_32_50_57_44_32_51_48_44_32_51_49_44_32_51_50_44_32_51_51_44_32_51_52_93_95_48_4_p_in__tree234_0(Var_58, Var_60, Var_62, Var_67, Var_53, Var_54, Var_38, HeadVar__3_3, &Var_44);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_52_50_95_95_91_50_44_32_52_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_51_44_32_49_52_93_95_48_8_p_0(Var_58, Var_60, Var_62, Var_67, Var_53, Var_54, Var_32, Var_33, Var_44, &Var_45);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_48_95_95_104_111_52_49_95_95_91_50_44_32_52_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_44_32_50_49_44_32_50_50_44_32_50_51_44_32_50_52_44_32_50_53_44_32_50_54_44_32_50_57_44_32_51_48_44_32_51_49_44_32_51_50_44_32_51_51_44_32_51_52_93_95_48_4_p_in__tree234_0(Var_58, Var_60, Var_62, Var_67, Var_53, Var_54, Var_39, Var_45, &Var_46);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_52_50_95_95_91_50_44_32_52_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_51_44_32_49_52_93_95_48_8_p_0(Var_58, Var_60, Var_62, Var_67, Var_53, Var_54, Var_34, Var_35, Var_46, &Var_47);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_48_95_95_104_111_52_49_95_95_91_50_44_32_52_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_44_32_50_49_44_32_50_50_44_32_50_51_44_32_50_52_44_32_50_53_44_32_50_54_44_32_50_57_44_32_51_48_44_32_51_49_44_32_51_50_44_32_51_51_44_32_51_52_93_95_48_4_p_in__tree234_0(Var_58, Var_60, Var_62, Var_67, Var_53, Var_54, Var_40, Var_47, &Var_48);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_52_50_95_95_91_50_44_32_52_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_51_44_32_49_52_93_95_48_8_p_0(Var_58, Var_60, Var_62, Var_67, Var_53, Var_54, Var_36, Var_37, Var_48, &Var_49);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_41;
          next_value_of_HeadVar__3_3 = Var_49;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_52_50_95_95_91_50_44_32_52_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_51_44_32_49_52_93_95_48_8_p_0(
  MR_Word Var_33,
  MR_Word Var_35,
  MR_Word Var_37,
  MR_Word Var_42,
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Box LambdaHeadVar__1_21,
  MR_Box LambdaHeadVar__2_22,
  MR_Word LambdaHeadVar__3_23,
  MR_Word * LambdaHeadVar__4_24)
{
  MR_bool succeeded;
  MR_Box W_49;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_Map_13_50;

  func_0(((MR_Box) (Var_42)), LambdaHeadVar__2_22, LambdaHeadVar__1_21, &W_49);
  succeeded = mercury__tree234__insert_4_p_0(Var_37, Var_35, W_49, LambdaHeadVar__2_22, LambdaHeadVar__3_23, &STATE_VARIABLE_Map_13_50);
  if (succeeded)
    *LambdaHeadVar__4_24 = STATE_VARIABLE_Map_13_50;
  else
  {
    MR_Box Var_54;

    mercury__map__lookup_3_p_0(Var_37, Var_35, LambdaHeadVar__3_23, W_49, &Var_54);
    succeeded = mercury__builtin__unify_2_p_0(Var_35, LambdaHeadVar__2_22, Var_54);
    if (!(succeeded))
    {
      MR_String Var_51;

      mercury__string__append_3_p_2((MR_String) "injection.map_values: ", (MR_String) "merged two values with different keys", &Var_51);
      {
        mercury__require__error_1_p_0(Var_51);
        return;
      }
    }
    *LambdaHeadVar__4_24 = LambdaHeadVar__3_23;
  }
}

static void MR_CALL 
mercury__injection__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_93_95_48_95_95_49_3_p_0(
  MR_Word Var_68,
  MR_Word Var_61,
  MR_Word Var_62,
  MR_Word Var_63,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_80)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *AddrOfHeadVar__3_80 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Box Var_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Var_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box Var_14;
          MR_Word Var_15;
          MR_Word * AddrSCCcallarg_16_79;
          MR_Word HeadVar__3_87;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word * next_value_of_AddrOfHeadVar__3_80;

          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_52_49_57_95_95_49_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_51_44_32_56_93_95_48_7_p_0(Var_68, Var_61, Var_62, Var_63, Var_8, Var_9, &Var_14);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_93_95_48_3_p_in__tree234_0(Var_68, Var_61, Var_62, Var_63, Var_10, &Var_15);
          {
            HeadVar__3_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadVar__3_87, 0) = Var_8;
            MR_hl_field(MR_mktag(1), HeadVar__3_87, 1) = Var_14;
            MR_hl_field(MR_mktag(1), HeadVar__3_87, 2) = ((MR_Box) (Var_15));
            MR_hl_field(MR_mktag(1), HeadVar__3_87, 3) = NULL;
          }
          AddrSCCcallarg_16_79 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_87, (MR_Integer) 3)));
          *AddrOfHeadVar__3_80 = HeadVar__3_87;
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_11;
          next_value_of_AddrOfHeadVar__3_80 = AddrSCCcallarg_16_79;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          AddrOfHeadVar__3_80 = next_value_of_AddrOfHeadVar__3_80;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box Var_21 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Var_22 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Box Var_23 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2));
          MR_Box Var_24 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3));
          MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4))));
          MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
          MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 6))));
          MR_Box Var_30;
          MR_Box Var_31;
          MR_Word Var_32;
          MR_Word Var_33;
          MR_Word * AddrSCCcallarg_34_78;
          MR_Word HeadVar__3_84;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word * next_value_of_AddrOfHeadVar__3_80;

          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_52_49_57_95_95_49_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_51_44_32_56_93_95_48_7_p_0(Var_68, Var_61, Var_62, Var_63, Var_21, Var_22, &Var_30);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_52_49_57_95_95_49_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_51_44_32_56_93_95_48_7_p_0(Var_68, Var_61, Var_62, Var_63, Var_23, Var_24, &Var_31);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_93_95_48_3_p_in__tree234_0(Var_68, Var_61, Var_62, Var_63, Var_25, &Var_32);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_93_95_48_3_p_in__tree234_0(Var_68, Var_61, Var_62, Var_63, Var_26, &Var_33);
          {
            HeadVar__3_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), HeadVar__3_84, 0) = Var_21;
            MR_hl_field(MR_mktag(2), HeadVar__3_84, 1) = Var_30;
            MR_hl_field(MR_mktag(2), HeadVar__3_84, 2) = Var_23;
            MR_hl_field(MR_mktag(2), HeadVar__3_84, 3) = Var_31;
            MR_hl_field(MR_mktag(2), HeadVar__3_84, 4) = ((MR_Box) (Var_32));
            MR_hl_field(MR_mktag(2), HeadVar__3_84, 5) = ((MR_Box) (Var_33));
            MR_hl_field(MR_mktag(2), HeadVar__3_84, 6) = NULL;
          }
          AddrSCCcallarg_34_78 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), HeadVar__3_84, (MR_Integer) 6)));
          *AddrOfHeadVar__3_80 = HeadVar__3_84;
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_27;
          next_value_of_AddrOfHeadVar__3_80 = AddrSCCcallarg_34_78;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          AddrOfHeadVar__3_80 = next_value_of_AddrOfHeadVar__3_80;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box Var_39 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Var_40 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
          MR_Box Var_41 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
          MR_Box Var_42 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3));
          MR_Box Var_43 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4));
          MR_Box Var_44 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5));
          MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
          MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
          MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 8))));
          MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 9))));
          MR_Box Var_51;
          MR_Box Var_52;
          MR_Box Var_53;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Word * AddrSCCcallarg_57_77;
          MR_Word HeadVar__3_81;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word * next_value_of_AddrOfHeadVar__3_80;

          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_52_49_57_95_95_49_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_51_44_32_56_93_95_48_7_p_0(Var_68, Var_61, Var_62, Var_63, Var_39, Var_40, &Var_51);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_52_49_57_95_95_49_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_51_44_32_56_93_95_48_7_p_0(Var_68, Var_61, Var_62, Var_63, Var_41, Var_42, &Var_52);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_52_49_57_95_95_49_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_51_44_32_56_93_95_48_7_p_0(Var_68, Var_61, Var_62, Var_63, Var_43, Var_44, &Var_53);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_93_95_48_3_p_in__tree234_0(Var_68, Var_61, Var_62, Var_63, Var_45, &Var_54);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_93_95_48_3_p_in__tree234_0(Var_68, Var_61, Var_62, Var_63, Var_46, &Var_55);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_93_95_48_3_p_in__tree234_0(Var_68, Var_61, Var_62, Var_63, Var_47, &Var_56);
          {
            HeadVar__3_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), HeadVar__3_81, 0) = Var_39;
            MR_hl_field(MR_mktag(3), HeadVar__3_81, 1) = Var_51;
            MR_hl_field(MR_mktag(3), HeadVar__3_81, 2) = Var_41;
            MR_hl_field(MR_mktag(3), HeadVar__3_81, 3) = Var_52;
            MR_hl_field(MR_mktag(3), HeadVar__3_81, 4) = Var_43;
            MR_hl_field(MR_mktag(3), HeadVar__3_81, 5) = Var_53;
            MR_hl_field(MR_mktag(3), HeadVar__3_81, 6) = ((MR_Box) (Var_54));
            MR_hl_field(MR_mktag(3), HeadVar__3_81, 7) = ((MR_Box) (Var_55));
            MR_hl_field(MR_mktag(3), HeadVar__3_81, 8) = ((MR_Box) (Var_56));
            MR_hl_field(MR_mktag(3), HeadVar__3_81, 9) = NULL;
          }
          AddrSCCcallarg_57_77 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), HeadVar__3_81, (MR_Integer) 9)));
          *AddrOfHeadVar__3_80 = HeadVar__3_81;
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_48;
          next_value_of_AddrOfHeadVar__3_80 = AddrSCCcallarg_57_77;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          AddrOfHeadVar__3_80 = next_value_of_AddrOfHeadVar__3_80;
          continue;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_93_95_48_3_p_in__tree234_0(
  MR_Word Var_68,
  MR_Word Var_61,
  MR_Word Var_62,
  MR_Word Var_63,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Box Var_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        MR_Box Var_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
        MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
        MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
        MR_Box Var_14;
        MR_Word Var_15;
        MR_Word * AddrSCCcallarg_16_79;

        mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_52_49_57_95_95_49_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_51_44_32_56_93_95_48_7_p_0(Var_68, Var_61, Var_62, Var_63, Var_8, Var_9, &Var_14);
        mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_93_95_48_3_p_in__tree234_0(Var_68, Var_61, Var_62, Var_63, Var_10, &Var_15);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = Var_8;
          MR_hl_field(MR_mktag(1), base, 1) = Var_14;
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_15));
          MR_hl_field(MR_mktag(1), base, 3) = NULL;
        }
        AddrSCCcallarg_16_79 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__3_3, (MR_Integer) 3)));
        mercury__injection__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_93_95_48_95_95_49_3_p_0(Var_68, Var_61, Var_62, Var_63, Var_11, AddrSCCcallarg_16_79);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box Var_21 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
        MR_Box Var_22 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
        MR_Box Var_23 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2));
        MR_Box Var_24 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3));
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4))));
        MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
        MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 6))));
        MR_Box Var_30;
        MR_Box Var_31;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word * AddrSCCcallarg_34_78;

        mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_52_49_57_95_95_49_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_51_44_32_56_93_95_48_7_p_0(Var_68, Var_61, Var_62, Var_63, Var_21, Var_22, &Var_30);
        mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_52_49_57_95_95_49_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_51_44_32_56_93_95_48_7_p_0(Var_68, Var_61, Var_62, Var_63, Var_23, Var_24, &Var_31);
        mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_93_95_48_3_p_in__tree234_0(Var_68, Var_61, Var_62, Var_63, Var_25, &Var_32);
        mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_93_95_48_3_p_in__tree234_0(Var_68, Var_61, Var_62, Var_63, Var_26, &Var_33);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(2), base, 0) = Var_21;
          MR_hl_field(MR_mktag(2), base, 1) = Var_30;
          MR_hl_field(MR_mktag(2), base, 2) = Var_23;
          MR_hl_field(MR_mktag(2), base, 3) = Var_31;
          MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (Var_32));
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (Var_33));
          MR_hl_field(MR_mktag(2), base, 6) = NULL;
        }
        AddrSCCcallarg_34_78 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), *HeadVar__3_3, (MR_Integer) 6)));
        mercury__injection__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_93_95_48_95_95_49_3_p_0(Var_68, Var_61, Var_62, Var_63, Var_27, AddrSCCcallarg_34_78);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Box Var_39 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0));
        MR_Box Var_40 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
        MR_Box Var_41 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
        MR_Box Var_42 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3));
        MR_Box Var_43 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4));
        MR_Box Var_44 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5));
        MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
        MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
        MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 8))));
        MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 9))));
        MR_Box Var_51;
        MR_Box Var_52;
        MR_Box Var_53;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word * AddrSCCcallarg_57_77;

        mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_52_49_57_95_95_49_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_51_44_32_56_93_95_48_7_p_0(Var_68, Var_61, Var_62, Var_63, Var_39, Var_40, &Var_51);
        mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_52_49_57_95_95_49_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_51_44_32_56_93_95_48_7_p_0(Var_68, Var_61, Var_62, Var_63, Var_41, Var_42, &Var_52);
        mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_52_49_57_95_95_49_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_51_44_32_56_93_95_48_7_p_0(Var_68, Var_61, Var_62, Var_63, Var_43, Var_44, &Var_53);
        mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_93_95_48_3_p_in__tree234_0(Var_68, Var_61, Var_62, Var_63, Var_45, &Var_54);
        mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_93_95_48_3_p_in__tree234_0(Var_68, Var_61, Var_62, Var_63, Var_46, &Var_55);
        mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_93_95_48_3_p_in__tree234_0(Var_68, Var_61, Var_62, Var_63, Var_47, &Var_56);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(3), base, 0) = Var_39;
          MR_hl_field(MR_mktag(3), base, 1) = Var_51;
          MR_hl_field(MR_mktag(3), base, 2) = Var_41;
          MR_hl_field(MR_mktag(3), base, 3) = Var_52;
          MR_hl_field(MR_mktag(3), base, 4) = Var_43;
          MR_hl_field(MR_mktag(3), base, 5) = Var_53;
          MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (Var_54));
          MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (Var_55));
          MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (Var_56));
          MR_hl_field(MR_mktag(3), base, 9) = NULL;
        }
        AddrSCCcallarg_57_77 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *HeadVar__3_3, (MR_Integer) 9)));
        mercury__injection__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_54_44_32_49_55_44_32_49_56_44_32_49_57_44_32_50_48_93_95_48_95_95_49_3_p_0(Var_68, Var_61, Var_62, Var_63, Var_48, AddrSCCcallarg_57_77);
      }
      break;
  }
}

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_52_49_57_95_95_49_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_51_44_32_56_93_95_48_7_p_0(
  MR_Word Var_29,
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_W_25,
  MR_Box LambdaHeadVar__1_17,
  MR_Box LambdaHeadVar__2_18,
  MR_Box * LambdaHeadVar__3_19)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 1))));

  func_0(((MR_Box) (Var_29)), LambdaHeadVar__1_17, LambdaHeadVar__2_18, LambdaHeadVar__3_19);
}

MR_Word MR_CALL 
mercury__injection__map_values_2_f_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word TypeInfo_for_W_13,
  MR_Word Func_4,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;
  MR_Word F0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word R0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word F_7;
  MR_Word R_8;

  mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(TypeInfo_for_K_11, TypeInfo_for_V_12, TypeInfo_for_W_13, Func_4, F0_5, &F_7);
  mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_93_95_48_4_p_in__tree234_0(TypeInfo_for_V_12, TypeInfo_for_K_11, TypeInfo_for_W_13, TypeInfo_for_K_11, TypeInfo_for_V_12, TypeInfo_for_W_13, Func_4, R0_6, (MR_Word) ((MR_Unsigned) 0U), &R_8);
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (F_7));
    MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (R_8));
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_93_95_48_4_p_in__tree234_0(
  MR_Word Var_56,
  MR_Word Var_57,
  MR_Word Var_61,
  MR_Word Var_63,
  MR_Word Var_64,
  MR_Word Var_65,
  MR_Word Var_66,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *HeadVar__4_4 = HeadVar__3_3;
        break;
      case (MR_Integer) 1:
        {
          MR_Box Var_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Var_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_15;
          MR_Word Var_16;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_93_95_48_4_p_in__tree234_0(Var_56, Var_57, Var_61, Var_63, Var_64, Var_65, Var_66, Var_11, HeadVar__3_3, &Var_15);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_51_57_95_95_91_50_44_32_57_44_32_49_48_93_95_48_8_p_0(Var_61, Var_63, Var_64, Var_65, Var_66, Var_56, Var_57, Var_9, Var_10, Var_15, &Var_16);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_12;
          next_value_of_HeadVar__3_3 = Var_16;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box Var_18 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Var_19 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Box Var_20 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2));
          MR_Box Var_21 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3));
          MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4))));
          MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
          MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 6))));
          MR_Word Var_27;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_93_95_48_4_p_in__tree234_0(Var_56, Var_57, Var_61, Var_63, Var_64, Var_65, Var_66, Var_22, HeadVar__3_3, &Var_27);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_51_57_95_95_91_50_44_32_57_44_32_49_48_93_95_48_8_p_0(Var_61, Var_63, Var_64, Var_65, Var_66, Var_56, Var_57, Var_18, Var_19, Var_27, &Var_28);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_93_95_48_4_p_in__tree234_0(Var_56, Var_57, Var_61, Var_63, Var_64, Var_65, Var_66, Var_23, Var_28, &Var_29);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_51_57_95_95_91_50_44_32_57_44_32_49_48_93_95_48_8_p_0(Var_61, Var_63, Var_64, Var_65, Var_66, Var_56, Var_57, Var_20, Var_21, Var_29, &Var_30);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_24;
          next_value_of_HeadVar__3_3 = Var_30;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box Var_32 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Var_33 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
          MR_Box Var_34 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
          MR_Box Var_35 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3));
          MR_Box Var_36 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4));
          MR_Box Var_37 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5));
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 8))));
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 9))));
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_93_95_48_4_p_in__tree234_0(Var_56, Var_57, Var_61, Var_63, Var_64, Var_65, Var_66, Var_38, HeadVar__3_3, &Var_44);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_51_57_95_95_91_50_44_32_57_44_32_49_48_93_95_48_8_p_0(Var_61, Var_63, Var_64, Var_65, Var_66, Var_56, Var_57, Var_32, Var_33, Var_44, &Var_45);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_93_95_48_4_p_in__tree234_0(Var_56, Var_57, Var_61, Var_63, Var_64, Var_65, Var_66, Var_39, Var_45, &Var_46);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_51_57_95_95_91_50_44_32_57_44_32_49_48_93_95_48_8_p_0(Var_61, Var_63, Var_64, Var_65, Var_66, Var_56, Var_57, Var_34, Var_35, Var_46, &Var_47);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_93_95_48_4_p_in__tree234_0(Var_56, Var_57, Var_61, Var_63, Var_64, Var_65, Var_66, Var_40, Var_47, &Var_48);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_51_57_95_95_91_50_44_32_57_44_32_49_48_93_95_48_8_p_0(Var_61, Var_63, Var_64, Var_65, Var_66, Var_56, Var_57, Var_36, Var_37, Var_48, &Var_49);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_41;
          next_value_of_HeadVar__3_3 = Var_49;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_51_57_95_95_91_50_44_32_57_44_32_49_48_93_95_48_8_p_0(
  MR_Word Var_33,
  MR_Word Var_35,
  MR_Word Var_36,
  MR_Word Var_37,
  MR_Word Var_38,
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Box LambdaHeadVar__1_21,
  MR_Box LambdaHeadVar__2_22,
  MR_Word LambdaHeadVar__3_23,
  MR_Word * LambdaHeadVar__4_24)
{
  *LambdaHeadVar__4_24 = mercury__injection__insert_transformed_value_f_4_f_0(Var_35, Var_36, Var_37, Var_38, LambdaHeadVar__1_21, LambdaHeadVar__2_22, LambdaHeadVar__3_23);
}

MR_Word MR_CALL 
mercury__injection__insert_transformed_value_f_4_f_0(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_W_19,
  MR_Word Func_6,
  MR_Box V_7,
  MR_Box K_8,
  MR_Word STATE_VARIABLE_Map_0_11)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_Map_12;
  MR_Box W_10;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Func_6, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_Map_13_13;

  W_10 = func_0(((MR_Box) (Func_6)), K_8, V_7);
  succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_W_19, TypeInfo_for_K_17, W_10, K_8, STATE_VARIABLE_Map_0_11, &STATE_VARIABLE_Map_13_13);
  if (succeeded)
    STATE_VARIABLE_Map_12 = STATE_VARIABLE_Map_13_13;
  else
  {
    MR_Box Var_20;

    mercury__map__lookup_3_p_0(TypeInfo_for_W_19, TypeInfo_for_K_17, STATE_VARIABLE_Map_0_11, W_10, &Var_20);
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_17, K_8, Var_20);
    if (!(succeeded))
    {
      MR_String Var_14;

      mercury__string__append_3_p_2((MR_String) "injection.map_values: ", (MR_String) "merged two values with different keys", &Var_14);
      mercury__require__error_1_p_0(Var_14);
    }
    STATE_VARIABLE_Map_12 = STATE_VARIABLE_Map_0_11;
  }
  return STATE_VARIABLE_Map_12;
}

void MR_CALL 
mercury__injection__filter_map_keys_3_p_0(
  MR_Word TypeInfo_for_V_14,
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_L_16,
  MR_Word Pred_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_Word F0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word R0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word F_7;
  MR_Word R_8;
  MR_Word AL0_9;
  MR_Word AL_10;

  mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_44_32_49_48_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_93_95_48_4_p_in__tree234_0(TypeInfo_for_K_15, TypeInfo_for_V_14, TypeInfo_for_L_16, TypeInfo_for_V_14, TypeInfo_for_L_16, Pred_4, F0_5, (MR_Word) ((MR_Unsigned) 0U), &F_7);
  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_V_14, TypeInfo_for_K_15, R0_6, (MR_Word) ((MR_Unsigned) 0U), &AL0_9);
  mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_3_p_in__list_0(Pred_4, AL0_9, &AL_10);
  mercury__tree234__assoc_list_to_tree234_acc_3_p_0(TypeInfo_for_V_14, TypeInfo_for_L_16, AL_10, (MR_Word) ((MR_Unsigned) 0U), &R_8);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_3 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (F_7));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (R_8));
  }
}

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_44_32_49_48_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_93_95_48_4_p_in__tree234_0(
  MR_Word Var_56,
  MR_Word Var_57,
  MR_Word Var_61,
  MR_Word Var_63,
  MR_Word Var_65,
  MR_Word Var_66,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *HeadVar__4_4 = HeadVar__3_3;
        break;
      case (MR_Integer) 1:
        {
          MR_Box Var_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Var_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_15;
          MR_Word Var_16;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_44_32_49_48_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_93_95_48_4_p_in__tree234_0(Var_56, Var_57, Var_61, Var_63, Var_65, Var_66, Var_11, HeadVar__3_3, &Var_15);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_51_56_95_95_91_50_44_32_52_44_32_57_44_32_49_48_93_95_48_8_p_0(Var_61, Var_63, Var_65, Var_66, Var_56, Var_57, Var_9, Var_10, Var_15, &Var_16);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_12;
          next_value_of_HeadVar__3_3 = Var_16;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box Var_18 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Var_19 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Box Var_20 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2));
          MR_Box Var_21 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3));
          MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4))));
          MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
          MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 6))));
          MR_Word Var_27;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_44_32_49_48_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_93_95_48_4_p_in__tree234_0(Var_56, Var_57, Var_61, Var_63, Var_65, Var_66, Var_22, HeadVar__3_3, &Var_27);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_51_56_95_95_91_50_44_32_52_44_32_57_44_32_49_48_93_95_48_8_p_0(Var_61, Var_63, Var_65, Var_66, Var_56, Var_57, Var_18, Var_19, Var_27, &Var_28);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_44_32_49_48_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_93_95_48_4_p_in__tree234_0(Var_56, Var_57, Var_61, Var_63, Var_65, Var_66, Var_23, Var_28, &Var_29);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_51_56_95_95_91_50_44_32_52_44_32_57_44_32_49_48_93_95_48_8_p_0(Var_61, Var_63, Var_65, Var_66, Var_56, Var_57, Var_20, Var_21, Var_29, &Var_30);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_24;
          next_value_of_HeadVar__3_3 = Var_30;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box Var_32 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Var_33 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
          MR_Box Var_34 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
          MR_Box Var_35 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3));
          MR_Box Var_36 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4));
          MR_Box Var_37 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5));
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 8))));
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 9))));
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_44_32_49_48_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_93_95_48_4_p_in__tree234_0(Var_56, Var_57, Var_61, Var_63, Var_65, Var_66, Var_38, HeadVar__3_3, &Var_44);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_51_56_95_95_91_50_44_32_52_44_32_57_44_32_49_48_93_95_48_8_p_0(Var_61, Var_63, Var_65, Var_66, Var_56, Var_57, Var_32, Var_33, Var_44, &Var_45);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_44_32_49_48_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_93_95_48_4_p_in__tree234_0(Var_56, Var_57, Var_61, Var_63, Var_65, Var_66, Var_39, Var_45, &Var_46);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_51_56_95_95_91_50_44_32_52_44_32_57_44_32_49_48_93_95_48_8_p_0(Var_61, Var_63, Var_65, Var_66, Var_56, Var_57, Var_34, Var_35, Var_46, &Var_47);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_44_32_49_48_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_93_95_48_4_p_in__tree234_0(Var_56, Var_57, Var_61, Var_63, Var_65, Var_66, Var_40, Var_47, &Var_48);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_51_56_95_95_91_50_44_32_52_44_32_57_44_32_49_48_93_95_48_8_p_0(Var_61, Var_63, Var_65, Var_66, Var_56, Var_57, Var_36, Var_37, Var_48, &Var_49);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_41;
          next_value_of_HeadVar__3_3 = Var_49;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_51_56_95_95_91_50_44_32_52_44_32_57_44_32_49_48_93_95_48_8_p_0(
  MR_Word Var_33,
  MR_Word Var_35,
  MR_Word Var_37,
  MR_Word Var_38,
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Box LambdaHeadVar__1_21,
  MR_Box LambdaHeadVar__2_22,
  MR_Word LambdaHeadVar__3_23,
  MR_Word * LambdaHeadVar__4_24)
{
  MR_bool succeeded;
  MR_Box L_45;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Var_38, (MR_Integer) 1))));

  succeeded = func_0(((MR_Box) (Var_38)), LambdaHeadVar__2_22, LambdaHeadVar__1_21, &L_45);
  if (succeeded)
    mercury__tree234__set_4_p_0(Var_37, Var_35, L_45, LambdaHeadVar__2_22, LambdaHeadVar__3_23, LambdaHeadVar__4_24);
  else
    *LambdaHeadVar__4_24 = LambdaHeadVar__3_23;
}

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_3_p_in__list_0(
  MR_Word Var_22,
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
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_9;
      MR_Box V_24 = (MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 0));
      MR_Box K_25 = (MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 1));
      MR_Box L_26;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (Var_22)), V_24, K_25, &L_26);
      if (succeeded)
      {
        {
          Var_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_9, 0) = V_24;
          MR_hl_field(MR_mktag(0), Var_9, 1) = L_26;
        }
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word * AddrSCCcallarg_10_27;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_9));
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
        }
        AddrSCCcallarg_10_27 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__3_3, (MR_Integer) 1)));
        mercury__injection__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_95_95_49_3_p_0(Var_22, Var_7, AddrSCCcallarg_10_27);
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
mercury__injection__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_95_95_49_3_p_0(
  MR_Word Var_22,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_28)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_28 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_9;
      MR_Box V_24 = (MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 0));
      MR_Box K_25 = (MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 1));
      MR_Box L_26;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (Var_22)), V_24, K_25, &L_26);
      if (succeeded)
      {
        {
          Var_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_9, 0) = V_24;
          MR_hl_field(MR_mktag(0), Var_9, 1) = L_26;
        }
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word * AddrSCCcallarg_10_27;
        MR_Word HeadVar__3_29;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word * next_value_of_AddrOfHeadVar__3_28;

        {
          HeadVar__3_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__3_29, 0) = ((MR_Box) (Var_9));
          MR_hl_field(MR_mktag(1), HeadVar__3_29, 1) = NULL;
        }
        AddrSCCcallarg_10_27 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_29, (MR_Integer) 1)));
        *AddrOfHeadVar__3_28 = HeadVar__3_29;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Var_7;
        next_value_of_AddrOfHeadVar__3_28 = AddrSCCcallarg_10_27;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        AddrOfHeadVar__3_28 = next_value_of_AddrOfHeadVar__3_28;
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
mercury__injection__map_keys_3_p_0(
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_K_14,
  MR_Word TypeInfo_for_L_15,
  MR_Word Pred_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_Word STATE_VARIABLE_F_0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word STATE_VARIABLE_R_0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_F_9;
  MR_Word STATE_VARIABLE_R_10;

  mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(TypeInfo_for_V_13, TypeInfo_for_K_14, TypeInfo_for_L_15, Pred_4, STATE_VARIABLE_F_0_7, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_F_9);
  mercury__tree234__map_values_3_p_0(TypeInfo_for_V_13, TypeInfo_for_K_14, TypeInfo_for_L_15, Pred_4, STATE_VARIABLE_R_0_8, &STATE_VARIABLE_R_10);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_3 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_F_9));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_R_10));
  }
}

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(
  MR_Word Var_56,
  MR_Word Var_57,
  MR_Word Var_58,
  MR_Word Var_59,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *HeadVar__4_4 = HeadVar__3_3;
        break;
      case (MR_Integer) 1:
        {
          MR_Box Var_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Var_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_15;
          MR_Word Var_16;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(Var_56, Var_57, Var_58, Var_59, Var_11, HeadVar__3_3, &Var_15);
          mercury__injection__insert_transformed_key_p_5_p_0(Var_56, Var_57, Var_58, Var_59, Var_9, Var_10, Var_15, &Var_16);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_12;
          next_value_of_HeadVar__3_3 = Var_16;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box Var_18 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Var_19 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Box Var_20 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2));
          MR_Box Var_21 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3));
          MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4))));
          MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
          MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 6))));
          MR_Word Var_27;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(Var_56, Var_57, Var_58, Var_59, Var_22, HeadVar__3_3, &Var_27);
          mercury__injection__insert_transformed_key_p_5_p_0(Var_56, Var_57, Var_58, Var_59, Var_18, Var_19, Var_27, &Var_28);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(Var_56, Var_57, Var_58, Var_59, Var_23, Var_28, &Var_29);
          mercury__injection__insert_transformed_key_p_5_p_0(Var_56, Var_57, Var_58, Var_59, Var_20, Var_21, Var_29, &Var_30);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_24;
          next_value_of_HeadVar__3_3 = Var_30;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box Var_32 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Var_33 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
          MR_Box Var_34 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
          MR_Box Var_35 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3));
          MR_Box Var_36 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4));
          MR_Box Var_37 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5));
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 8))));
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 9))));
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Box L_66;
          MR_Box L_77;
          MR_Box L_88;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(Var_56, Var_57, Var_58, Var_59, Var_38, HeadVar__3_3, &Var_44);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Var_59, (MR_Integer) 1))));
          func_0(((MR_Box) (Var_59)), Var_33, Var_32, &L_66);
          mercury__tree234__set_4_p_0(Var_58, Var_56, L_66, Var_33, Var_44, &Var_45);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(Var_56, Var_57, Var_58, Var_59, Var_39, Var_45, &Var_46);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Var_59, (MR_Integer) 1))));
          func_1(((MR_Box) (Var_59)), Var_35, Var_34, &L_77);
          mercury__tree234__set_4_p_0(Var_58, Var_56, L_77, Var_35, Var_46, &Var_47);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(Var_56, Var_57, Var_58, Var_59, Var_40, Var_47, &Var_48);
          func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Var_59, (MR_Integer) 1))));
          func_2(((MR_Box) (Var_59)), Var_37, Var_36, &L_88);
          mercury__tree234__set_4_p_0(Var_58, Var_56, L_88, Var_37, Var_48, &Var_49);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_41;
          next_value_of_HeadVar__3_3 = Var_49;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__injection__insert_transformed_key_p_5_p_0(
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_K_14,
  MR_Word TypeInfo_for_L_15,
  MR_Word Pred_6,
  MR_Box K_7,
  MR_Box V_8,
  MR_Word STATE_VARIABLE_Map_0_11,
  MR_Word * STATE_VARIABLE_Map_12)
{
  MR_Box L_10;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_6, (MR_Integer) 1))));

  func_0(((MR_Box) (Pred_6)), V_8, K_7, &L_10);
  mercury__tree234__set_4_p_0(TypeInfo_for_L_15, TypeInfo_for_V_13, L_10, V_8, STATE_VARIABLE_Map_0_11, STATE_VARIABLE_Map_12);
}

MR_Word MR_CALL 
mercury__injection__map_keys_2_f_0(
  MR_Word TypeInfo_for_V_11,
  MR_Word TypeInfo_for_K_12,
  MR_Word TypeInfo_for_L_13,
  MR_Word Func_4,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;
  MR_Word F0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word R0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word F_7;
  MR_Word R_8;

  mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_44_32_49_48_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_93_95_48_4_p_in__tree234_0(TypeInfo_for_K_12, TypeInfo_for_V_11, TypeInfo_for_L_13, TypeInfo_for_V_11, TypeInfo_for_L_13, Func_4, F0_5, (MR_Word) ((MR_Unsigned) 0U), &F_7);
  mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(TypeInfo_for_V_11, TypeInfo_for_K_12, TypeInfo_for_L_13, Func_4, R0_6, &R_8);
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (F_7));
    MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (R_8));
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_44_32_49_48_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_93_95_48_4_p_in__tree234_0(
  MR_Word Var_56,
  MR_Word Var_57,
  MR_Word Var_61,
  MR_Word Var_63,
  MR_Word Var_65,
  MR_Word Var_66,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *HeadVar__4_4 = HeadVar__3_3;
        break;
      case (MR_Integer) 1:
        {
          MR_Box Var_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Var_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_15;
          MR_Word Var_16;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_44_32_49_48_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_93_95_48_4_p_in__tree234_0(Var_56, Var_57, Var_61, Var_63, Var_65, Var_66, Var_11, HeadVar__3_3, &Var_15);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_51_55_95_95_91_50_44_32_52_44_32_57_44_32_49_48_93_95_48_8_p_0(Var_61, Var_63, Var_65, Var_66, Var_56, Var_57, Var_9, Var_10, Var_15, &Var_16);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_12;
          next_value_of_HeadVar__3_3 = Var_16;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box Var_18 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Var_19 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Box Var_20 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2));
          MR_Box Var_21 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3));
          MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4))));
          MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
          MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 6))));
          MR_Word Var_27;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_44_32_49_48_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_93_95_48_4_p_in__tree234_0(Var_56, Var_57, Var_61, Var_63, Var_65, Var_66, Var_22, HeadVar__3_3, &Var_27);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_51_55_95_95_91_50_44_32_52_44_32_57_44_32_49_48_93_95_48_8_p_0(Var_61, Var_63, Var_65, Var_66, Var_56, Var_57, Var_18, Var_19, Var_27, &Var_28);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_44_32_49_48_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_93_95_48_4_p_in__tree234_0(Var_56, Var_57, Var_61, Var_63, Var_65, Var_66, Var_23, Var_28, &Var_29);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_51_55_95_95_91_50_44_32_52_44_32_57_44_32_49_48_93_95_48_8_p_0(Var_61, Var_63, Var_65, Var_66, Var_56, Var_57, Var_20, Var_21, Var_29, &Var_30);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_24;
          next_value_of_HeadVar__3_3 = Var_30;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box Var_32 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Var_33 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
          MR_Box Var_34 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
          MR_Box Var_35 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3));
          MR_Box Var_36 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4));
          MR_Box Var_37 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5));
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 8))));
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 9))));
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_44_32_49_48_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_93_95_48_4_p_in__tree234_0(Var_56, Var_57, Var_61, Var_63, Var_65, Var_66, Var_38, HeadVar__3_3, &Var_44);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_51_55_95_95_91_50_44_32_52_44_32_57_44_32_49_48_93_95_48_8_p_0(Var_61, Var_63, Var_65, Var_66, Var_56, Var_57, Var_32, Var_33, Var_44, &Var_45);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_44_32_49_48_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_93_95_48_4_p_in__tree234_0(Var_56, Var_57, Var_61, Var_63, Var_65, Var_66, Var_39, Var_45, &Var_46);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_51_55_95_95_91_50_44_32_52_44_32_57_44_32_49_48_93_95_48_8_p_0(Var_61, Var_63, Var_65, Var_66, Var_56, Var_57, Var_34, Var_35, Var_46, &Var_47);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_44_32_49_48_44_32_49_51_44_32_49_52_44_32_49_53_44_32_49_54_93_95_48_4_p_in__tree234_0(Var_56, Var_57, Var_61, Var_63, Var_65, Var_66, Var_40, Var_47, &Var_48);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_51_55_95_95_91_50_44_32_52_44_32_57_44_32_49_48_93_95_48_8_p_0(Var_61, Var_63, Var_65, Var_66, Var_56, Var_57, Var_36, Var_37, Var_48, &Var_49);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_41;
          next_value_of_HeadVar__3_3 = Var_49;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_55_54_95_95_49_95_95_104_111_51_55_95_95_91_50_44_32_52_44_32_57_44_32_49_48_93_95_48_8_p_0(
  MR_Word Var_33,
  MR_Word Var_35,
  MR_Word Var_37,
  MR_Word Var_38,
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Box LambdaHeadVar__1_21,
  MR_Box LambdaHeadVar__2_22,
  MR_Word LambdaHeadVar__3_23,
  MR_Word * LambdaHeadVar__4_24)
{
  MR_Box Var_45;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_38, (MR_Integer) 1))));

  Var_45 = func_0(((MR_Box) (Var_38)), LambdaHeadVar__2_22, LambdaHeadVar__1_21);
  mercury__tree234__set_4_p_0(Var_37, Var_35, Var_45, LambdaHeadVar__2_22, LambdaHeadVar__3_23, LambdaHeadVar__4_24);
}

static void MR_CALL 
mercury__injection__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_95_95_49_3_p_0(
  MR_Word Var_61,
  MR_Word Var_62,
  MR_Word Var_63,
  MR_Word Var_64,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_86)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *AddrOfHeadVar__3_86 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Box Var_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Var_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box Var_14;
          MR_Word Var_15;
          MR_Word * AddrSCCcallarg_16_85;
          MR_Word HeadVar__3_93;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word * next_value_of_AddrOfHeadVar__3_86;

          mercury__injection__IntroducedFrom__pred__map_values__419__1_7_p_0(Var_61, Var_62, Var_63, Var_64, Var_8, Var_9, &Var_14);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_61, Var_62, Var_63, Var_64, Var_10, &Var_15);
          {
            HeadVar__3_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadVar__3_93, 0) = Var_8;
            MR_hl_field(MR_mktag(1), HeadVar__3_93, 1) = Var_14;
            MR_hl_field(MR_mktag(1), HeadVar__3_93, 2) = ((MR_Box) (Var_15));
            MR_hl_field(MR_mktag(1), HeadVar__3_93, 3) = NULL;
          }
          AddrSCCcallarg_16_85 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_93, (MR_Integer) 3)));
          *AddrOfHeadVar__3_86 = HeadVar__3_93;
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_11;
          next_value_of_AddrOfHeadVar__3_86 = AddrSCCcallarg_16_85;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          AddrOfHeadVar__3_86 = next_value_of_AddrOfHeadVar__3_86;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box Var_21 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Var_22 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Box Var_23 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2));
          MR_Box Var_24 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3));
          MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4))));
          MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
          MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 6))));
          MR_Box Var_30;
          MR_Box Var_31;
          MR_Word Var_32;
          MR_Word Var_33;
          MR_Word * AddrSCCcallarg_34_84;
          MR_Word HeadVar__3_90;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word * next_value_of_AddrOfHeadVar__3_86;

          mercury__injection__IntroducedFrom__pred__map_values__419__1_7_p_0(Var_61, Var_62, Var_63, Var_64, Var_21, Var_22, &Var_30);
          mercury__injection__IntroducedFrom__pred__map_values__419__1_7_p_0(Var_61, Var_62, Var_63, Var_64, Var_23, Var_24, &Var_31);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_61, Var_62, Var_63, Var_64, Var_25, &Var_32);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_61, Var_62, Var_63, Var_64, Var_26, &Var_33);
          {
            HeadVar__3_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), HeadVar__3_90, 0) = Var_21;
            MR_hl_field(MR_mktag(2), HeadVar__3_90, 1) = Var_30;
            MR_hl_field(MR_mktag(2), HeadVar__3_90, 2) = Var_23;
            MR_hl_field(MR_mktag(2), HeadVar__3_90, 3) = Var_31;
            MR_hl_field(MR_mktag(2), HeadVar__3_90, 4) = ((MR_Box) (Var_32));
            MR_hl_field(MR_mktag(2), HeadVar__3_90, 5) = ((MR_Box) (Var_33));
            MR_hl_field(MR_mktag(2), HeadVar__3_90, 6) = NULL;
          }
          AddrSCCcallarg_34_84 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), HeadVar__3_90, (MR_Integer) 6)));
          *AddrOfHeadVar__3_86 = HeadVar__3_90;
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_27;
          next_value_of_AddrOfHeadVar__3_86 = AddrSCCcallarg_34_84;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          AddrOfHeadVar__3_86 = next_value_of_AddrOfHeadVar__3_86;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box Var_39 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Var_40 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
          MR_Box Var_41 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
          MR_Box Var_42 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3));
          MR_Box Var_43 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4));
          MR_Box Var_44 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5));
          MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
          MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
          MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 8))));
          MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 9))));
          MR_Box Var_51;
          MR_Box Var_52;
          MR_Box Var_53;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_64, (MR_Integer) 1))));
          MR_Word * AddrSCCcallarg_57_83;
          MR_Word HeadVar__3_87;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word * next_value_of_AddrOfHeadVar__3_86;

          Var_51 = func_0(((MR_Box) (Var_64)), Var_39, Var_40);
          mercury__injection__IntroducedFrom__pred__map_values__419__1_7_p_0(Var_61, Var_62, Var_63, Var_64, Var_41, Var_42, &Var_52);
          mercury__injection__IntroducedFrom__pred__map_values__419__1_7_p_0(Var_61, Var_62, Var_63, Var_64, Var_43, Var_44, &Var_53);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_61, Var_62, Var_63, Var_64, Var_45, &Var_54);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_61, Var_62, Var_63, Var_64, Var_46, &Var_55);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_61, Var_62, Var_63, Var_64, Var_47, &Var_56);
          {
            HeadVar__3_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), HeadVar__3_87, 0) = Var_39;
            MR_hl_field(MR_mktag(3), HeadVar__3_87, 1) = Var_51;
            MR_hl_field(MR_mktag(3), HeadVar__3_87, 2) = Var_41;
            MR_hl_field(MR_mktag(3), HeadVar__3_87, 3) = Var_52;
            MR_hl_field(MR_mktag(3), HeadVar__3_87, 4) = Var_43;
            MR_hl_field(MR_mktag(3), HeadVar__3_87, 5) = Var_53;
            MR_hl_field(MR_mktag(3), HeadVar__3_87, 6) = ((MR_Box) (Var_54));
            MR_hl_field(MR_mktag(3), HeadVar__3_87, 7) = ((MR_Box) (Var_55));
            MR_hl_field(MR_mktag(3), HeadVar__3_87, 8) = ((MR_Box) (Var_56));
            MR_hl_field(MR_mktag(3), HeadVar__3_87, 9) = NULL;
          }
          AddrSCCcallarg_57_83 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), HeadVar__3_87, (MR_Integer) 9)));
          *AddrOfHeadVar__3_86 = HeadVar__3_87;
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_48;
          next_value_of_AddrOfHeadVar__3_86 = AddrSCCcallarg_57_83;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          AddrOfHeadVar__3_86 = next_value_of_AddrOfHeadVar__3_86;
          continue;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(
  MR_Word Var_61,
  MR_Word Var_62,
  MR_Word Var_63,
  MR_Word Var_64,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Box Var_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        MR_Box Var_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
        MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
        MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
        MR_Box Var_14;
        MR_Word Var_15;
        MR_Word * AddrSCCcallarg_16_85;

        mercury__injection__IntroducedFrom__pred__map_values__419__1_7_p_0(Var_61, Var_62, Var_63, Var_64, Var_8, Var_9, &Var_14);
        mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_61, Var_62, Var_63, Var_64, Var_10, &Var_15);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = Var_8;
          MR_hl_field(MR_mktag(1), base, 1) = Var_14;
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_15));
          MR_hl_field(MR_mktag(1), base, 3) = NULL;
        }
        AddrSCCcallarg_16_85 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__3_3, (MR_Integer) 3)));
        mercury__injection__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_95_95_49_3_p_0(Var_61, Var_62, Var_63, Var_64, Var_11, AddrSCCcallarg_16_85);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box Var_21 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
        MR_Box Var_22 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
        MR_Box Var_23 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2));
        MR_Box Var_24 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3));
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4))));
        MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
        MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 6))));
        MR_Box Var_30;
        MR_Box Var_31;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word * AddrSCCcallarg_34_84;

        mercury__injection__IntroducedFrom__pred__map_values__419__1_7_p_0(Var_61, Var_62, Var_63, Var_64, Var_21, Var_22, &Var_30);
        mercury__injection__IntroducedFrom__pred__map_values__419__1_7_p_0(Var_61, Var_62, Var_63, Var_64, Var_23, Var_24, &Var_31);
        mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_61, Var_62, Var_63, Var_64, Var_25, &Var_32);
        mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_61, Var_62, Var_63, Var_64, Var_26, &Var_33);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(2), base, 0) = Var_21;
          MR_hl_field(MR_mktag(2), base, 1) = Var_30;
          MR_hl_field(MR_mktag(2), base, 2) = Var_23;
          MR_hl_field(MR_mktag(2), base, 3) = Var_31;
          MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (Var_32));
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (Var_33));
          MR_hl_field(MR_mktag(2), base, 6) = NULL;
        }
        AddrSCCcallarg_34_84 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), *HeadVar__3_3, (MR_Integer) 6)));
        mercury__injection__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_95_95_49_3_p_0(Var_61, Var_62, Var_63, Var_64, Var_27, AddrSCCcallarg_34_84);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Box Var_39 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0));
        MR_Box Var_40 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
        MR_Box Var_41 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
        MR_Box Var_42 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3));
        MR_Box Var_43 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4));
        MR_Box Var_44 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5));
        MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
        MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
        MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 8))));
        MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 9))));
        MR_Box Var_51;
        MR_Box Var_52;
        MR_Box Var_53;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_64, (MR_Integer) 1))));
        MR_Word * AddrSCCcallarg_57_83;

        Var_51 = func_0(((MR_Box) (Var_64)), Var_39, Var_40);
        mercury__injection__IntroducedFrom__pred__map_values__419__1_7_p_0(Var_61, Var_62, Var_63, Var_64, Var_41, Var_42, &Var_52);
        mercury__injection__IntroducedFrom__pred__map_values__419__1_7_p_0(Var_61, Var_62, Var_63, Var_64, Var_43, Var_44, &Var_53);
        mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_61, Var_62, Var_63, Var_64, Var_45, &Var_54);
        mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_61, Var_62, Var_63, Var_64, Var_46, &Var_55);
        mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_in__tree234_0(Var_61, Var_62, Var_63, Var_64, Var_47, &Var_56);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(3), base, 0) = Var_39;
          MR_hl_field(MR_mktag(3), base, 1) = Var_51;
          MR_hl_field(MR_mktag(3), base, 2) = Var_41;
          MR_hl_field(MR_mktag(3), base, 3) = Var_52;
          MR_hl_field(MR_mktag(3), base, 4) = Var_43;
          MR_hl_field(MR_mktag(3), base, 5) = Var_53;
          MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (Var_54));
          MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (Var_55));
          MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (Var_56));
          MR_hl_field(MR_mktag(3), base, 9) = NULL;
        }
        AddrSCCcallarg_57_83 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *HeadVar__3_3, (MR_Integer) 9)));
        mercury__injection__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_51_49_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_95_95_49_3_p_0(Var_61, Var_62, Var_63, Var_64, Var_48, AddrSCCcallarg_57_83);
      }
      break;
  }
}

static void MR_CALL 
mercury__injection__IntroducedFrom__pred__map_values__419__1_7_p_0(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_W_25,
  MR_Word HeadVar__1_4,
  MR_Box LambdaHeadVar__1_17,
  MR_Box LambdaHeadVar__2_18,
  MR_Box * LambdaHeadVar__3_19)
{
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), HeadVar__1_4, (MR_Integer) 1))));

  *LambdaHeadVar__3_19 = func_0(((MR_Box) (HeadVar__1_4)), LambdaHeadVar__1_17, LambdaHeadVar__2_18);
}

void MR_CALL 
mercury__injection__apply_reverse_map_to_list_3_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word I_4,
  MR_Word Vs_5,
  MR_Word * HeadVar__3_3)
{
  MR_Word R_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), I_4, (MR_Integer) 1))));

  mercury__map__apply_to_list_3_p_0(TypeInfo_for_V_7, TypeInfo_for_K_6, Vs_5, R_10, HeadVar__3_3);
}

MR_Word MR_CALL 
mercury__injection__apply_reverse_map_to_list_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word HeadVar__1_1,
  MR_Word Vs_6)
{
  MR_Word HeadVar__3_3;
  MR_Word R_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

  mercury__map__apply_to_list_3_p_0(TypeInfo_for_V_8, TypeInfo_for_K_7, Vs_6, R_5, &HeadVar__3_3);
  return HeadVar__3_3;
}

void MR_CALL 
mercury__injection__apply_forward_map_to_list_3_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word I_4,
  MR_Word Ks_5,
  MR_Word * HeadVar__3_3)
{
  MR_Word F_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), I_4, (MR_Integer) 0))));

  mercury__map__apply_to_list_3_p_0(TypeInfo_for_K_6, TypeInfo_for_V_7, Ks_5, F_9, HeadVar__3_3);
}

MR_Word MR_CALL 
mercury__injection__apply_forward_map_to_list_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word HeadVar__1_1,
  MR_Word Ks_6)
{
  MR_Word HeadVar__3_3;
  MR_Word F_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

  mercury__map__apply_to_list_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Ks_6, F_4, &HeadVar__3_3);
  return HeadVar__3_3;
}

void MR_CALL 
mercury__injection__overlay_3_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * HeadVar__3_3)
{
  *HeadVar__3_3 = mercury__injection__overlay_2_f_0(TypeInfo_for_K_6, TypeInfo_for_V_7, A_4, B_5);
}

MR_Word MR_CALL 
mercury__injection__overlay_2_f_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;
  MR_Word FA_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Word RA_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Word FB_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word RB_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word F_8;
  MR_Word R_9;
  MR_Word Var_15;
  MR_Word Var_24;

  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, FB_6, (MR_Word) ((MR_Unsigned) 0U), &Var_15);
  mercury__map__overlay_2_3_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, Var_15, FA_4, &F_8);
  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_V_11, TypeInfo_for_K_10, RB_7, (MR_Word) ((MR_Unsigned) 0U), &Var_24);
  mercury__map__det_insert_from_assoc_list_3_p_0(TypeInfo_for_V_11, TypeInfo_for_K_10, Var_24, RA_5, &R_9);
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (F_8));
    MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (R_9));
  }
  return HeadVar__3_3;
}

void MR_CALL 
mercury__injection__merge_3_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * HeadVar__3_3)
{
  *HeadVar__3_3 = mercury__injection__merge_2_f_0(TypeInfo_for_K_6, TypeInfo_for_V_7, A_4, B_5);
}

MR_Word MR_CALL 
mercury__injection__merge_2_f_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;
  MR_Word FA_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Word RA_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Word FB_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word RB_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word F_8;
  MR_Word R_9;
  MR_Word Var_15;
  MR_Word Var_24;

  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, FB_6, (MR_Word) ((MR_Unsigned) 0U), &Var_15);
  mercury__map__det_insert_from_assoc_list_3_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, Var_15, FA_4, &F_8);
  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_V_11, TypeInfo_for_K_10, RB_7, (MR_Word) ((MR_Unsigned) 0U), &Var_24);
  mercury__map__det_insert_from_assoc_list_3_p_0(TypeInfo_for_V_11, TypeInfo_for_K_10, Var_24, RA_5, &R_9);
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (F_8));
    MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (R_9));
  }
  return HeadVar__3_3;
}

void MR_CALL 
mercury__injection__delete_values_3_p_0(
  MR_Word TypeInfo_for_V_9,
  MR_Word TypeInfo_for_K_10,
  MR_Word Vs_4,
  MR_Word STATE_VARIABLE_I_0_6,
  MR_Word * STATE_VARIABLE_I_7)
{
  mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_4_p_in__list_0(TypeInfo_for_V_9, TypeInfo_for_K_10, Vs_4, STATE_VARIABLE_I_0_6, STATE_VARIABLE_I_7);
}

MR_Word MR_CALL 
mercury__injection__delete_values_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word I0_4,
  MR_Word Vs_5)
{
  MR_Word I_6;

  mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_4_p_in__list_0(TypeInfo_for_V_8, TypeInfo_for_K_7, Vs_5, I0_4, &I_6);
  return I_6;
}

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_4_p_in__list_0(
  MR_Word Var_19,
  MR_Word Var_20,
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
      MR_Box Var_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      Var_13 = mercury__injection__delete_value_2_f_0(Var_20, Var_19, HeadVar__3_3, Var_9);
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
mercury__injection__delete_keys_3_p_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word Ks_4,
  MR_Word STATE_VARIABLE_I_0_6,
  MR_Word * STATE_VARIABLE_I_7)
{
  mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_4_p_in__list_0(TypeInfo_for_K_9, TypeInfo_for_V_10, Ks_4, STATE_VARIABLE_I_0_6, STATE_VARIABLE_I_7);
}

MR_Word MR_CALL 
mercury__injection__delete_keys_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word I0_4,
  MR_Word Ks_5)
{
  MR_Word I_6;

  mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_4_p_in__list_0(TypeInfo_for_K_7, TypeInfo_for_V_8, Ks_5, I0_4, &I_6);
  return I_6;
}

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_4_p_in__list_0(
  MR_Word Var_19,
  MR_Word Var_20,
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
      MR_Box Var_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      Var_13 = mercury__injection__delete_key_2_f_0(Var_19, Var_20, HeadVar__3_3, Var_9);
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
mercury__injection__delete_value_3_p_0(
  MR_Word TypeInfo_for_V_6,
  MR_Word TypeInfo_for_K_7,
  MR_Box V_4,
  MR_Word I_5,
  MR_Word * HeadVar__3_3)
{
  *HeadVar__3_3 = mercury__injection__delete_value_2_f_0(TypeInfo_for_K_7, TypeInfo_for_V_6, I_5, V_4);
}

MR_Word MR_CALL 
mercury__injection__delete_value_2_f_0(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word HeadVar__1_1,
  MR_Box V_6)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  MR_Word STATE_VARIABLE_R_0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_F_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Word STATE_VARIABLE_R_11;
  MR_Box K_7;
  MR_Word STATE_VARIABLE_R_12_12;
  MR_Word Var_26;

  succeeded = mercury__tree234__remove_2_5_p_0(TypeInfo_for_V_16, TypeInfo_for_K_15, STATE_VARIABLE_R_0_9, V_6, &K_7, &STATE_VARIABLE_R_12_12, &Var_26);
  if (succeeded)
  {
    MR_Box Var_17;

    STATE_VARIABLE_R_11 = STATE_VARIABLE_R_12_12;
    mercury__map__lookup_3_p_0(TypeInfo_for_K_15, TypeInfo_for_V_16, STATE_VARIABLE_F_10, K_7, &Var_17);
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_V_16, V_6, Var_17);
    if (succeeded)
      mercury__require__error_2_p_0((MR_String) "function \140injection.delete_value\'/2", (MR_String) "value is associated with a key");
  }
  else
    STATE_VARIABLE_R_11 = STATE_VARIABLE_R_0_9;
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (STATE_VARIABLE_F_10));
    MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (STATE_VARIABLE_R_11));
  }
  return HeadVar__3_3;
}

void MR_CALL 
mercury__injection__delete_key_3_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Box K_4,
  MR_Word I_5,
  MR_Word * HeadVar__3_3)
{
  *HeadVar__3_3 = mercury__injection__delete_key_2_f_0(TypeInfo_for_K_6, TypeInfo_for_V_7, I_5, K_4);
}

MR_Word MR_CALL 
mercury__injection__delete_key_2_f_0(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word HeadVar__1_1,
  MR_Box K_6)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  MR_Word STATE_VARIABLE_F_0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Word STATE_VARIABLE_R_0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_F_10;
  MR_Word STATE_VARIABLE_R_11;
  MR_Word STATE_VARIABLE_F_12_12;
  MR_Box Var_7;
  MR_Word Var_31;

  succeeded = mercury__tree234__remove_2_5_p_0(TypeInfo_for_K_15, TypeInfo_for_V_16, STATE_VARIABLE_F_0_8, K_6, &Var_7, &STATE_VARIABLE_F_12_12, &Var_31);
  if (succeeded)
  {
    STATE_VARIABLE_F_10 = STATE_VARIABLE_F_12_12;
    mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(TypeInfo_for_K_15, TypeInfo_for_V_16, K_6, STATE_VARIABLE_R_0_9, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_R_11);
  }
  else
  {
    STATE_VARIABLE_R_11 = STATE_VARIABLE_R_0_9;
    STATE_VARIABLE_F_10 = STATE_VARIABLE_F_0_8;
  }
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (STATE_VARIABLE_F_10));
    MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (STATE_VARIABLE_R_11));
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(
  MR_Word Var_56,
  MR_Word Var_57,
  MR_Box Var_58,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *HeadVar__4_4 = HeadVar__3_3;
        break;
      case (MR_Integer) 1:
        {
          MR_Box Var_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Var_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_15;
          MR_Word Var_16;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(Var_56, Var_57, Var_58, Var_11, HeadVar__3_3, &Var_15);
          mercury__injection__filter_values_with_key_5_p_0(Var_56, Var_57, Var_58, Var_9, Var_10, Var_15, &Var_16);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_12;
          next_value_of_HeadVar__3_3 = Var_16;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box Var_18 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Var_19 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Box Var_20 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2));
          MR_Box Var_21 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3));
          MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4))));
          MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
          MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 6))));
          MR_Word Var_27;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(Var_56, Var_57, Var_58, Var_22, HeadVar__3_3, &Var_27);
          succeeded = mercury__builtin__unify_2_p_0(Var_56, Var_19, Var_58);
          if (succeeded)
            Var_28 = Var_27;
          else
            mercury__map__det_insert_4_p_0(Var_57, Var_56, Var_18, Var_19, Var_27, &Var_28);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(Var_56, Var_57, Var_58, Var_23, Var_28, &Var_29);
          succeeded = mercury__builtin__unify_2_p_0(Var_56, Var_21, Var_58);
          if (succeeded)
            Var_30 = Var_29;
          else
            mercury__map__det_insert_4_p_0(Var_57, Var_56, Var_20, Var_21, Var_29, &Var_30);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_24;
          next_value_of_HeadVar__3_3 = Var_30;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box Var_32 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Var_33 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
          MR_Box Var_34 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
          MR_Box Var_35 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3));
          MR_Box Var_36 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4));
          MR_Box Var_37 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5));
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 8))));
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 9))));
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(Var_56, Var_57, Var_58, Var_38, HeadVar__3_3, &Var_44);
          succeeded = mercury__builtin__unify_2_p_0(Var_56, Var_33, Var_58);
          if (succeeded)
            Var_45 = Var_44;
          else
            mercury__map__det_insert_4_p_0(Var_57, Var_56, Var_32, Var_33, Var_44, &Var_45);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(Var_56, Var_57, Var_58, Var_39, Var_45, &Var_46);
          succeeded = mercury__builtin__unify_2_p_0(Var_56, Var_35, Var_58);
          if (succeeded)
            Var_47 = Var_46;
          else
            mercury__map__det_insert_4_p_0(Var_57, Var_56, Var_34, Var_35, Var_46, &Var_47);
          mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(Var_56, Var_57, Var_58, Var_40, Var_47, &Var_48);
          succeeded = mercury__builtin__unify_2_p_0(Var_56, Var_37, Var_58);
          if (succeeded)
            Var_49 = Var_48;
          else
            mercury__map__det_insert_4_p_0(Var_57, Var_56, Var_36, Var_37, Var_48, &Var_49);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_41;
          next_value_of_HeadVar__3_3 = Var_49;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mercury__injection__filter_values_with_key_5_p_0(
  MR_Word TypeInfo_for_K_12,
  MR_Word TypeInfo_for_V_13,
  MR_Box FilterKey_6,
  MR_Box V_7,
  MR_Box K_8,
  MR_Word STATE_VARIABLE_Map_0_10,
  MR_Word * STATE_VARIABLE_Map_11)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_12, K_8, FilterKey_6);
  if (succeeded)
    *STATE_VARIABLE_Map_11 = STATE_VARIABLE_Map_0_10;
  else
    mercury__map__det_insert_4_p_0(TypeInfo_for_V_13, TypeInfo_for_K_12, V_7, K_8, STATE_VARIABLE_Map_0_10, STATE_VARIABLE_Map_11);
}

void MR_CALL 
mercury__injection__det_set_from_corresponding_lists_4_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word As_5,
  MR_Word Bs_6,
  MR_Word I_7,
  MR_Word * HeadVar__4_4)
{
  MR_Word STATE_VARIABLE_F_0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), I_7, (MR_Integer) 0))));
  MR_Word STATE_VARIABLE_R_0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), I_7, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_F_16;
  MR_Word STATE_VARIABLE_R_17;

  mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_7_p_in__list_0(TypeInfo_for_K_8, TypeInfo_for_V_9, As_5, Bs_6, STATE_VARIABLE_F_0_14, &STATE_VARIABLE_F_16, STATE_VARIABLE_R_0_15, &STATE_VARIABLE_R_17);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_4 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_F_16));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_R_17));
  }
}

MR_Word MR_CALL 
mercury__injection__det_set_from_corresponding_lists_3_f_0(
  MR_Word TypeInfo_for_K_14,
  MR_Word TypeInfo_for_V_15,
  MR_Word As_5,
  MR_Word Bs_6,
  MR_Word HeadVar__3_3)
{
  MR_Word HeadVar__4_4;
  MR_Word STATE_VARIABLE_F_0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
  MR_Word STATE_VARIABLE_R_0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_F_11;
  MR_Word STATE_VARIABLE_R_12;

  mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_7_p_in__list_0(TypeInfo_for_K_14, TypeInfo_for_V_15, As_5, Bs_6, STATE_VARIABLE_F_0_9, &STATE_VARIABLE_F_11, STATE_VARIABLE_R_0_10, &STATE_VARIABLE_R_12);
  {
    HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadVar__4_4, 0) = ((MR_Box) (STATE_VARIABLE_F_11));
    MR_hl_field(MR_mktag(0), HeadVar__4_4, 1) = ((MR_Box) (STATE_VARIABLE_R_12));
  }
  return HeadVar__4_4;
}

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_7_p_in__list_0(
  MR_Word Var_54,
  MR_Word Var_55,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__7_7 = HeadVar__6_6;
        *HeadVar__5_5 = HeadVar__4_4;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140list.foldl2_corresponding\'/7", (MR_String) "mismatched list lengths");
          return;
        }
    else
    {
      MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Var_47 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140list.foldl2_corresponding\'/7", (MR_String) "mismatched list lengths");
          return;
        }
      else
      {
        MR_Box Var_34 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
        MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_HeadVar__6_6;

        mercury__injection__det_set_2_6_p_0(Var_54, Var_55, Var_47, Var_34, HeadVar__4_4, &Var_40, HeadVar__6_6, &Var_41);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Var_46;
        next_value_of_HeadVar__3_3 = Var_35;
        next_value_of_HeadVar__4_4 = Var_40;
        next_value_of_HeadVar__6_6 = Var_41;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        HeadVar__6_6 = next_value_of_HeadVar__6_6;
        continue;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__injection__set_from_corresponding_lists_4_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word As_5,
  MR_Word Bs_6,
  MR_Word I_7,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_F_0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), I_7, (MR_Integer) 0))));
  MR_Word STATE_VARIABLE_R_0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), I_7, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_F_16;
  MR_Word STATE_VARIABLE_R_17;

  succeeded = mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_7_p_in__list_0(TypeInfo_for_K_8, TypeInfo_for_V_9, As_5, Bs_6, STATE_VARIABLE_F_0_14, &STATE_VARIABLE_F_16, STATE_VARIABLE_R_0_15, &STATE_VARIABLE_R_17);
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_F_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_R_17));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__injection__set_from_corresponding_lists_3_f_0(
  MR_Word TypeInfo_for_K_14,
  MR_Word TypeInfo_for_V_15,
  MR_Word As_5,
  MR_Word Bs_6,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_F_0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
  MR_Word STATE_VARIABLE_R_0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_F_11;
  MR_Word STATE_VARIABLE_R_12;

  succeeded = mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_7_p_in__list_0(TypeInfo_for_K_14, TypeInfo_for_V_15, As_5, Bs_6, STATE_VARIABLE_F_0_9, &STATE_VARIABLE_F_11, STATE_VARIABLE_R_0_10, &STATE_VARIABLE_R_12);
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_F_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_R_12));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_7_p_in__list_0(
  MR_Word Var_54,
  MR_Word Var_55,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__7_7 = HeadVar__6_6;
        *HeadVar__5_5 = HeadVar__4_4;
      }
      else
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140list.foldl2_corresponding\'/7", (MR_String) "mismatched list lengths");
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Var_47 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140list.foldl2_corresponding\'/7", (MR_String) "mismatched list lengths");
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Box Var_34 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
        MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Box OrigK_64;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_HeadVar__6_6;

        mercury__tree234__set_4_p_0(Var_54, Var_55, Var_47, Var_34, HeadVar__4_4, &Var_40);
        succeeded = mercury__tree234__search_3_p_0(Var_55, Var_54, HeadVar__6_6, Var_34, &OrigK_64);
        if (succeeded)
        {
          succeeded = mercury__builtin__unify_2_p_0(Var_54, Var_47, OrigK_64);
          if (succeeded)
          {
            Var_41 = HeadVar__6_6;
            succeeded = MR_TRUE;
          }
        }
        else
        {
          mercury__map__det_insert_4_p_0(Var_55, Var_54, Var_34, Var_47, HeadVar__6_6, &Var_41);
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_46;
          next_value_of_HeadVar__3_3 = Var_35;
          next_value_of_HeadVar__4_4 = Var_40;
          next_value_of_HeadVar__6_6 = Var_41;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          HeadVar__6_6 = next_value_of_HeadVar__6_6;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__injection__det_insert_from_corresponding_lists_4_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word As_5,
  MR_Word Bs_6,
  MR_Word I_7,
  MR_Word * HeadVar__4_4)
{
  MR_Word F0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), I_7, (MR_Integer) 0))));
  MR_Word R0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), I_7, (MR_Integer) 1))));
  MR_Word F_14;
  MR_Word R_15;

  mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_7_p_in__list_0(TypeInfo_for_K_8, TypeInfo_for_V_9, As_5, Bs_6, F0_12, &F_14, R0_13, &R_15);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_4 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (F_14));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (R_15));
  }
}

MR_Word MR_CALL 
mercury__injection__det_insert_from_corresponding_lists_3_f_0(
  MR_Word TypeInfo_for_K_32,
  MR_Word TypeInfo_for_V_33,
  MR_Word As_5,
  MR_Word Bs_6,
  MR_Word HeadVar__3_3)
{
  MR_Word HeadVar__4_4;
  MR_Word F0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
  MR_Word R0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
  MR_Word F_9;
  MR_Word R_10;

  mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_7_p_in__list_0(TypeInfo_for_K_32, TypeInfo_for_V_33, As_5, Bs_6, F0_7, &F_9, R0_8, &R_10);
  {
    HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadVar__4_4, 0) = ((MR_Box) (F_9));
    MR_hl_field(MR_mktag(0), HeadVar__4_4, 1) = ((MR_Box) (R_10));
  }
  return HeadVar__4_4;
}

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_7_p_in__list_0(
  MR_Word Var_54,
  MR_Word Var_55,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__7_7 = HeadVar__6_6;
        *HeadVar__5_5 = HeadVar__4_4;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140list.foldl2_corresponding\'/7", (MR_String) "mismatched list lengths");
          return;
        }
    else
    {
      MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Var_47 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140list.foldl2_corresponding\'/7", (MR_String) "mismatched list lengths");
          return;
        }
      else
      {
        MR_Box Var_34 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
        MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_HeadVar__6_6;

        mercury__map__det_insert_4_p_0(Var_54, Var_55, Var_47, Var_34, HeadVar__4_4, &Var_40);
        mercury__map__det_insert_4_p_0(Var_55, Var_54, Var_34, Var_47, HeadVar__6_6, &Var_41);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Var_46;
        next_value_of_HeadVar__3_3 = Var_35;
        next_value_of_HeadVar__4_4 = Var_40;
        next_value_of_HeadVar__6_6 = Var_41;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        HeadVar__6_6 = next_value_of_HeadVar__6_6;
        continue;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__injection__insert_from_corresponding_lists_4_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word As_5,
  MR_Word Bs_6,
  MR_Word I_7,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;
  MR_Word F0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), I_7, (MR_Integer) 0))));
  MR_Word R0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), I_7, (MR_Integer) 1))));
  MR_Word F_14;
  MR_Word R_15;

  succeeded = mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_7_p_in__list_0(TypeInfo_for_K_8, TypeInfo_for_V_9, As_5, Bs_6, F0_12, &F_14, R0_13, &R_15);
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (F_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (R_15));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__injection__insert_from_corresponding_lists_3_f_0(
  MR_Word TypeInfo_for_K_32,
  MR_Word TypeInfo_for_V_33,
  MR_Word As_5,
  MR_Word Bs_6,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;
  MR_Word F0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
  MR_Word R0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
  MR_Word F_9;
  MR_Word R_10;

  succeeded = mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_7_p_in__list_0(TypeInfo_for_K_32, TypeInfo_for_V_33, As_5, Bs_6, F0_7, &F_9, R0_8, &R_10);
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (F_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (R_10));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_7_p_in__list_0(
  MR_Word Var_54,
  MR_Word Var_55,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__7_7 = HeadVar__6_6;
        *HeadVar__5_5 = HeadVar__4_4;
      }
      else
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140list.foldl2_corresponding\'/7", (MR_String) "mismatched list lengths");
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Var_47 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140list.foldl2_corresponding\'/7", (MR_String) "mismatched list lengths");
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Box Var_34 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
        MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_HeadVar__6_6;

        succeeded = mercury__tree234__insert_4_p_0(Var_54, Var_55, Var_47, Var_34, HeadVar__4_4, &Var_40);
        if (succeeded)
        {
          succeeded = mercury__tree234__insert_4_p_0(Var_55, Var_54, Var_34, Var_47, HeadVar__6_6, &Var_41);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__2_2 = Var_46;
            next_value_of_HeadVar__3_3 = Var_35;
            next_value_of_HeadVar__4_4 = Var_40;
            next_value_of_HeadVar__6_6 = Var_41;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            HeadVar__4_4 = next_value_of_HeadVar__4_4;
            HeadVar__6_6 = next_value_of_HeadVar__6_6;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__injection__det_set_from_assoc_list_3_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word A_4,
  MR_Word I_5,
  MR_Word * HeadVar__3_3)
{
  *HeadVar__3_3 = mercury__injection__det_set_from_assoc_list_2_f_0(TypeInfo_for_K_6, TypeInfo_for_V_7, A_4, I_5);
}

MR_Word MR_CALL 
mercury__injection__det_set_from_assoc_list_2_f_0(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word A_4,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;
  MR_Word F0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word R0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word F_7;
  MR_Word R_8;

  mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_6_p_in__list_0(TypeInfo_for_K_29, TypeInfo_for_V_30, A_4, F0_5, &F_7, R0_6, &R_8);
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (F_7));
    MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (R_8));
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_6_p_in__list_0(
  MR_Word Var_33,
  MR_Word Var_34,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = HeadVar__5_5;
      *HeadVar__4_4 = HeadVar__3_3;
    }
    else
    {
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Box K_45 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0));
      MR_Box V_46 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__5_5;

      mercury__injection__det_set_2_6_p_0(Var_33, Var_34, K_45, V_46, HeadVar__3_3, &Var_19, HeadVar__5_5, &Var_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_14;
      next_value_of_HeadVar__3_3 = Var_19;
      next_value_of_HeadVar__5_5 = Var_20;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__injection__set_from_assoc_list_3_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word A_4,
  MR_Word I_5,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  succeeded = mercury__injection__set_from_assoc_list_2_f_0(TypeInfo_for_K_6, TypeInfo_for_V_7, A_4, I_5, HeadVar__3_3);
  return succeeded;
}

MR_bool MR_CALL 
mercury__injection__set_from_assoc_list_2_f_0(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word A_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word F0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word R0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word F_7;
  MR_Word R_8;

  succeeded = mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_6_p_in__list_0(TypeInfo_for_K_29, TypeInfo_for_V_30, A_4, F0_5, &F_7, R0_6, &R_8);
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (F_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (R_8));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_6_p_in__list_0(
  MR_Word Var_33,
  MR_Word Var_34,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = HeadVar__5_5;
      *HeadVar__4_4 = HeadVar__3_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Box K_45 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0));
      MR_Box V_46 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1));
      MR_Box OrigK_66;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__5_5;

      mercury__tree234__set_4_p_0(Var_33, Var_34, K_45, V_46, HeadVar__3_3, &Var_19);
      succeeded = mercury__tree234__search_3_p_0(Var_34, Var_33, HeadVar__5_5, V_46, &OrigK_66);
      if (succeeded)
      {
        succeeded = mercury__builtin__unify_2_p_0(Var_33, K_45, OrigK_66);
        if (succeeded)
        {
          Var_20 = HeadVar__5_5;
          succeeded = MR_TRUE;
        }
      }
      else
      {
        mercury__map__det_insert_4_p_0(Var_34, Var_33, V_46, K_45, HeadVar__5_5, &Var_20);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Var_14;
        next_value_of_HeadVar__3_3 = Var_19;
        next_value_of_HeadVar__5_5 = Var_20;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        HeadVar__5_5 = next_value_of_HeadVar__5_5;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__injection__det_insert_from_assoc_list_3_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word A_4,
  MR_Word I_5,
  MR_Word * HeadVar__3_3)
{
  *HeadVar__3_3 = mercury__injection__det_insert_from_assoc_list_2_f_0(TypeInfo_for_K_6, TypeInfo_for_V_7, A_4, I_5);
}

MR_Word MR_CALL 
mercury__injection__det_insert_from_assoc_list_2_f_0(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word A_4,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;
  MR_Word F0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word R0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word F_7;
  MR_Word R_8;

  mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_6_p_in__list_0(TypeInfo_for_K_29, TypeInfo_for_V_30, A_4, F0_5, &F_7, R0_6, &R_8);
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (F_7));
    MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (R_8));
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_6_p_in__list_0(
  MR_Word Var_33,
  MR_Word Var_34,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = HeadVar__5_5;
      *HeadVar__4_4 = HeadVar__3_3;
    }
    else
    {
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Box K_45 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0));
      MR_Box V_46 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__5_5;

      mercury__map__det_insert_4_p_0(Var_33, Var_34, K_45, V_46, HeadVar__3_3, &Var_19);
      mercury__map__det_insert_4_p_0(Var_34, Var_33, V_46, K_45, HeadVar__5_5, &Var_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_14;
      next_value_of_HeadVar__3_3 = Var_19;
      next_value_of_HeadVar__5_5 = Var_20;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__injection__insert_from_assoc_list_3_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word A_4,
  MR_Word I_5,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  succeeded = mercury__injection__insert_from_assoc_list_2_f_0(TypeInfo_for_K_6, TypeInfo_for_V_7, A_4, I_5, HeadVar__3_3);
  return succeeded;
}

MR_bool MR_CALL 
mercury__injection__insert_from_assoc_list_2_f_0(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word A_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word F0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word R0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word F_7;
  MR_Word R_8;

  succeeded = mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_6_p_in__list_0(TypeInfo_for_K_29, TypeInfo_for_V_30, A_4, F0_5, &F_7, R0_6, &R_8);
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (F_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (R_8));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__injection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_6_p_in__list_0(
  MR_Word Var_33,
  MR_Word Var_34,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = HeadVar__5_5;
      *HeadVar__4_4 = HeadVar__3_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Box K_45 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0));
      MR_Box V_46 = (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__5_5;

      succeeded = mercury__tree234__insert_4_p_0(Var_33, Var_34, K_45, V_46, HeadVar__3_3, &Var_19);
      if (succeeded)
      {
        succeeded = mercury__tree234__insert_4_p_0(Var_34, Var_33, V_46, K_45, HeadVar__5_5, &Var_20);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_14;
          next_value_of_HeadVar__3_3 = Var_19;
          next_value_of_HeadVar__5_5 = Var_20;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          HeadVar__5_5 = next_value_of_HeadVar__5_5;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__injection__det_set_4_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word I_5,
  MR_Box K_6,
  MR_Box V_7,
  MR_Word * HeadVar__4_4)
{
  MR_Word STATE_VARIABLE_F_0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), I_5, (MR_Integer) 0))));
  MR_Word STATE_VARIABLE_R_0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), I_5, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_F_16;
  MR_Word STATE_VARIABLE_R_17;

  mercury__injection__det_set_2_6_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, K_6, V_7, STATE_VARIABLE_F_0_14, &STATE_VARIABLE_F_16, STATE_VARIABLE_R_0_15, &STATE_VARIABLE_R_17);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_4 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_F_16));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_R_17));
  }
}

MR_Word MR_CALL 
mercury__injection__det_set_3_f_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word HeadVar__1_1,
  MR_Box K_7,
  MR_Box V_8)
{
  MR_Word HeadVar__4_4;
  MR_Word STATE_VARIABLE_F_0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Word STATE_VARIABLE_R_0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_F_11;
  MR_Word STATE_VARIABLE_R_12;

  mercury__injection__det_set_2_6_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, K_7, V_8, STATE_VARIABLE_F_0_9, &STATE_VARIABLE_F_11, STATE_VARIABLE_R_0_10, &STATE_VARIABLE_R_12);
  {
    HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadVar__4_4, 0) = ((MR_Box) (STATE_VARIABLE_F_11));
    MR_hl_field(MR_mktag(0), HeadVar__4_4, 1) = ((MR_Box) (STATE_VARIABLE_R_12));
  }
  return HeadVar__4_4;
}

void MR_CALL 
mercury__injection__det_set_2_6_p_0(
  MR_Word TypeInfo_for_K_20,
  MR_Word TypeInfo_for_V_21,
  MR_Box K_7,
  MR_Box V_8,
  MR_Word STATE_VARIABLE_F_0_12,
  MR_Word * STATE_VARIABLE_F_13,
  MR_Word STATE_VARIABLE_R_0_14,
  MR_Word * STATE_VARIABLE_R_15)
{
  MR_bool succeeded;
  MR_Box OrigK_11;

  mercury__tree234__set_4_p_0(TypeInfo_for_K_20, TypeInfo_for_V_21, K_7, V_8, STATE_VARIABLE_F_0_12, STATE_VARIABLE_F_13);
  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_V_21, TypeInfo_for_K_20, STATE_VARIABLE_R_0_14, V_8, &OrigK_11);
  if (succeeded)
  {
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_20, K_7, OrigK_11);
    if (!(succeeded))
    {
      MR_String Var_17;

      mercury__string__append_3_p_2((MR_String) "injection.det_set: ", (MR_String) "value is already associated with another key", &Var_17);
      {
        mercury__require__error_1_p_0(Var_17);
        return;
      }
    }
    *STATE_VARIABLE_R_15 = STATE_VARIABLE_R_0_14;
  }
  else
    mercury__map__det_insert_4_p_0(TypeInfo_for_V_21, TypeInfo_for_K_20, V_8, K_7, STATE_VARIABLE_R_0_14, STATE_VARIABLE_R_15);
}

MR_bool MR_CALL 
mercury__injection__set_4_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word I_5,
  MR_Box K_6,
  MR_Box V_7,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  succeeded = mercury__injection__set_3_f_0(TypeInfo_for_K_8, TypeInfo_for_V_9, I_5, K_6, V_7, HeadVar__4_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__injection__set_3_f_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word HeadVar__1_1,
  MR_Box K_7,
  MR_Box V_8,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_F_0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Word STATE_VARIABLE_R_0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_F_11;
  MR_Word STATE_VARIABLE_R_12;
  MR_Box OrigK_23;

  mercury__tree234__set_4_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, K_7, V_8, STATE_VARIABLE_F_0_9, &STATE_VARIABLE_F_11);
  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_V_14, TypeInfo_for_K_13, STATE_VARIABLE_R_0_10, V_8, &OrigK_23);
  if (succeeded)
  {
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_13, K_7, OrigK_23);
    if (succeeded)
    {
      STATE_VARIABLE_R_12 = STATE_VARIABLE_R_0_10;
      succeeded = MR_TRUE;
    }
  }
  else
  {
    mercury__map__det_insert_4_p_0(TypeInfo_for_V_14, TypeInfo_for_K_13, V_8, K_7, STATE_VARIABLE_R_0_10, &STATE_VARIABLE_R_12);
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_F_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_R_12));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mercury__injection__det_update_4_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word I_5,
  MR_Box K_6,
  MR_Box V_7,
  MR_Word * HeadVar__4_4)
{
  MR_Word STATE_VARIABLE_F_0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), I_5, (MR_Integer) 0))));
  MR_Word STATE_VARIABLE_R_0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), I_5, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_F_16;
  MR_Word STATE_VARIABLE_R_17;

  mercury__map__det_update_4_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, K_6, V_7, STATE_VARIABLE_F_0_14, &STATE_VARIABLE_F_16);
  mercury__map__det_insert_4_p_0(TypeInfo_for_V_9, TypeInfo_for_K_8, V_7, K_6, STATE_VARIABLE_R_0_15, &STATE_VARIABLE_R_17);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_4 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_F_16));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_R_17));
  }
}

MR_Word MR_CALL 
mercury__injection__det_update_3_f_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word HeadVar__1_1,
  MR_Box K_7,
  MR_Box V_8)
{
  MR_Word HeadVar__4_4;
  MR_Word STATE_VARIABLE_F_0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Word STATE_VARIABLE_R_0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_F_11;
  MR_Word STATE_VARIABLE_R_12;

  mercury__map__det_update_4_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, K_7, V_8, STATE_VARIABLE_F_0_9, &STATE_VARIABLE_F_11);
  mercury__map__det_insert_4_p_0(TypeInfo_for_V_14, TypeInfo_for_K_13, V_8, K_7, STATE_VARIABLE_R_0_10, &STATE_VARIABLE_R_12);
  {
    HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadVar__4_4, 0) = ((MR_Box) (STATE_VARIABLE_F_11));
    MR_hl_field(MR_mktag(0), HeadVar__4_4, 1) = ((MR_Box) (STATE_VARIABLE_R_12));
  }
  return HeadVar__4_4;
}

MR_bool MR_CALL 
mercury__injection__update_4_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word I_5,
  MR_Box K_6,
  MR_Box V_7,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_F_0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), I_5, (MR_Integer) 0))));
  MR_Word STATE_VARIABLE_R_0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), I_5, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_F_16;
  MR_Word STATE_VARIABLE_R_17;

  succeeded = mercury__tree234__update_4_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, K_6, V_7, STATE_VARIABLE_F_0_14, &STATE_VARIABLE_F_16);
  if (succeeded)
  {
    succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_V_9, TypeInfo_for_K_8, V_7, K_6, STATE_VARIABLE_R_0_15, &STATE_VARIABLE_R_17);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_F_16));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_R_17));
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__injection__update_3_f_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word HeadVar__1_1,
  MR_Box K_7,
  MR_Box V_8,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_F_0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Word STATE_VARIABLE_R_0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_F_11;
  MR_Word STATE_VARIABLE_R_12;

  succeeded = mercury__tree234__update_4_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, K_7, V_8, STATE_VARIABLE_F_0_9, &STATE_VARIABLE_F_11);
  if (succeeded)
  {
    succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_V_14, TypeInfo_for_K_13, V_8, K_7, STATE_VARIABLE_R_0_10, &STATE_VARIABLE_R_12);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_F_11));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_R_12));
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__injection__det_insert_4_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word I_5,
  MR_Box K_6,
  MR_Box V_7,
  MR_Word * HeadVar__4_4)
{
  MR_Word STATE_VARIABLE_F_0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), I_5, (MR_Integer) 0))));
  MR_Word STATE_VARIABLE_R_0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), I_5, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_F_16;
  MR_Word STATE_VARIABLE_R_17;

  mercury__map__det_insert_4_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, K_6, V_7, STATE_VARIABLE_F_0_14, &STATE_VARIABLE_F_16);
  mercury__map__det_insert_4_p_0(TypeInfo_for_V_9, TypeInfo_for_K_8, V_7, K_6, STATE_VARIABLE_R_0_15, &STATE_VARIABLE_R_17);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_4 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_F_16));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_R_17));
  }
}

MR_Word MR_CALL 
mercury__injection__det_insert_3_f_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word HeadVar__1_1,
  MR_Box K_7,
  MR_Box V_8)
{
  MR_Word HeadVar__4_4;
  MR_Word STATE_VARIABLE_F_0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Word STATE_VARIABLE_R_0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_F_11;
  MR_Word STATE_VARIABLE_R_12;

  mercury__map__det_insert_4_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, K_7, V_8, STATE_VARIABLE_F_0_9, &STATE_VARIABLE_F_11);
  mercury__map__det_insert_4_p_0(TypeInfo_for_V_14, TypeInfo_for_K_13, V_8, K_7, STATE_VARIABLE_R_0_10, &STATE_VARIABLE_R_12);
  {
    HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadVar__4_4, 0) = ((MR_Box) (STATE_VARIABLE_F_11));
    MR_hl_field(MR_mktag(0), HeadVar__4_4, 1) = ((MR_Box) (STATE_VARIABLE_R_12));
  }
  return HeadVar__4_4;
}

MR_bool MR_CALL 
mercury__injection__insert_4_p_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word I_5,
  MR_Box K_6,
  MR_Box V_7,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_F_0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), I_5, (MR_Integer) 0))));
  MR_Word STATE_VARIABLE_R_0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), I_5, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_F_16;
  MR_Word STATE_VARIABLE_R_17;

  succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, K_6, V_7, STATE_VARIABLE_F_0_14, &STATE_VARIABLE_F_16);
  if (succeeded)
  {
    succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_V_9, TypeInfo_for_K_8, V_7, K_6, STATE_VARIABLE_R_0_15, &STATE_VARIABLE_R_17);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_F_16));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_R_17));
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__injection__insert_3_f_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word HeadVar__1_1,
  MR_Box K_7,
  MR_Box V_8,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_F_0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Word STATE_VARIABLE_R_0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_F_11;
  MR_Word STATE_VARIABLE_R_12;

  succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, K_7, V_8, STATE_VARIABLE_F_0_9, &STATE_VARIABLE_F_11);
  if (succeeded)
  {
    succeeded = mercury__tree234__insert_4_p_0(TypeInfo_for_V_14, TypeInfo_for_K_13, V_8, K_7, STATE_VARIABLE_R_0_10, &STATE_VARIABLE_R_12);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_F_11));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_R_12));
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__injection__contains_value_2_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word HeadVar__1_1,
  MR_Box V_5)
{
  MR_bool succeeded;
  MR_Word R_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Box Var_10;

  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_V_7, TypeInfo_for_K_6, R_4, V_5, &Var_10);
  return succeeded;
}

MR_bool MR_CALL 
mercury__injection__contains_key_2_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word HeadVar__1_1,
  MR_Box K_5)
{
  MR_bool succeeded;
  MR_Word F_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Box Var_10;

  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_6, TypeInfo_for_V_7, F_3, K_5, &Var_10);
  return succeeded;
}

void MR_CALL 
mercury__injection__values_2_p_0(
  MR_Word TypeInfo_for_K_4,
  MR_Word TypeInfo_for_V_5,
  MR_Word I_3,
  MR_Word * HeadVar__2_2)
{
  MR_Word R_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), I_3, (MR_Integer) 1))));

  mercury__tree234__keys_acc_3_p_0(TypeInfo_for_V_5, TypeInfo_for_K_4, R_7, (MR_Word) ((MR_Unsigned) 0U), HeadVar__2_2);
}

MR_Word MR_CALL 
mercury__injection__values_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Word R_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

  mercury__tree234__keys_acc_3_p_0(TypeInfo_for_V_6, TypeInfo_for_K_5, R_4, (MR_Word) ((MR_Unsigned) 0U), &HeadVar__2_2);
  return HeadVar__2_2;
}

void MR_CALL 
mercury__injection__keys_2_p_0(
  MR_Word TypeInfo_for_K_4,
  MR_Word TypeInfo_for_V_5,
  MR_Word I_3,
  MR_Word * HeadVar__2_2)
{
  MR_Word F_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), I_3, (MR_Integer) 0))));

  mercury__tree234__keys_acc_3_p_0(TypeInfo_for_K_4, TypeInfo_for_V_5, F_6, (MR_Word) ((MR_Unsigned) 0U), HeadVar__2_2);
}

MR_Word MR_CALL 
mercury__injection__keys_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Word F_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

  mercury__tree234__keys_acc_3_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, F_3, (MR_Word) ((MR_Unsigned) 0U), &HeadVar__2_2);
  return HeadVar__2_2;
}

void MR_CALL 
mercury__injection__reverse_lookup_3_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word I_4,
  MR_Box * HeadVar__2_2,
  MR_Box V_5)
{
  MR_Word R_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), I_4, (MR_Integer) 1))));

  mercury__map__lookup_3_p_0(TypeInfo_for_V_7, TypeInfo_for_K_6, R_10, V_5, HeadVar__2_2);
}

MR_Box MR_CALL 
mercury__injection__reverse_lookup_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word HeadVar__1_1,
  MR_Box V_6)
{
  MR_Box HeadVar__3_3;
  MR_Word R_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

  mercury__map__lookup_3_p_0(TypeInfo_for_V_8, TypeInfo_for_K_7, R_5, V_6, &HeadVar__3_3);
  return HeadVar__3_3;
}

void MR_CALL 
mercury__injection__lookup_3_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word I_4,
  MR_Box K_5,
  MR_Box * HeadVar__3_3)
{
  MR_Word F_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), I_4, (MR_Integer) 0))));

  mercury__map__lookup_3_p_0(TypeInfo_for_K_6, TypeInfo_for_V_7, F_9, K_5, HeadVar__3_3);
}

MR_Box MR_CALL 
mercury__injection__lookup_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word HeadVar__1_1,
  MR_Box K_6)
{
  MR_Box HeadVar__3_3;
  MR_Word F_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

  mercury__map__lookup_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, F_4, K_6, &HeadVar__3_3);
  return HeadVar__3_3;
}

MR_bool MR_CALL 
mercury__injection__search_3_p_1(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word HeadVar__1_1,
  MR_Box * K_2,
  MR_Box V_3)
{
  MR_bool succeeded;
  MR_Word R_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_V_14, TypeInfo_for_K_13, R_10, V_3, K_2);
  return succeeded;
}

MR_bool MR_CALL 
mercury__injection__search_3_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word HeadVar__1_1,
  MR_Box K_2,
  MR_Box * V_3)
{
  MR_bool succeeded;
  MR_Word F_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Box V0_8;

  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, F_4, K_2, &V0_8);
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__injection__search_3_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) V0_8 ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	*V_3  = (MR_Box) Y;
}
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__injection__reverse_search_3_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word I_4,
  MR_Box * HeadVar__2_2,
  MR_Box V_5)
{
  MR_bool succeeded;
  MR_Word R_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), I_4, (MR_Integer) 1))));

  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_V_7, TypeInfo_for_K_6, R_10, V_5, HeadVar__2_2);
  return succeeded;
}

MR_bool MR_CALL 
mercury__injection__reverse_search_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word HeadVar__1_1,
  MR_Box V_6,
  MR_Box * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word R_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_V_8, TypeInfo_for_K_7, R_5, V_6, HeadVar__3_3);
  return succeeded;
}

MR_bool MR_CALL 
mercury__injection__forward_search_3_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word I_4,
  MR_Box K_5,
  MR_Box * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word F_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), I_4, (MR_Integer) 0))));

  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_6, TypeInfo_for_V_7, F_9, K_5, HeadVar__3_3);
  return succeeded;
}

MR_bool MR_CALL 
mercury__injection__forward_search_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word HeadVar__1_1,
  MR_Box K_6,
  MR_Box * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word F_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, F_4, K_6, HeadVar__3_3);
  return succeeded;
}

MR_bool MR_CALL 
mercury__injection__is_empty_1_p_0(
  MR_Word TypeInfo_for_K_4,
  MR_Word TypeInfo_for_V_5,
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word F_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

  succeeded = (F_2 == (MR_Word) ((MR_Unsigned) 0U));
  return succeeded;
}

MR_Word MR_CALL 
mercury__injection__singleton_2_f_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Box K_4,
  MR_Box V_5)
{
  MR_Word HeadVar__3_3;
  MR_Word F_6;
  MR_Word R_7;

  {
    F_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), F_6, 0) = K_4;
    MR_hl_field(MR_mktag(1), F_6, 1) = V_5;
    MR_hl_field(MR_mktag(1), F_6, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), F_6, 3) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    R_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), R_7, 0) = V_5;
    MR_hl_field(MR_mktag(1), R_7, 1) = K_4;
    MR_hl_field(MR_mktag(1), R_7, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), R_7, 3) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (F_6));
    MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (R_7));
  }
  return HeadVar__3_3;
}

void MR_CALL 
mercury__injection__init_1_p_0(
  MR_Word TypeInfo_for_K_2,
  MR_Word TypeInfo_for_V_3,
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) (&mercury__injection_scalar_common_4[0]);
}

MR_Word MR_CALL 
mercury__injection__init_0_f_0(
  MR_Word TypeInfo_for_K_4,
  MR_Word TypeInfo_for_V_5)
{
  return (MR_Word) (&mercury__injection_scalar_common_4[0]);
}

static MR_bool MR_CALL 
mercury__injection____Unify____injection_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = mercury__injection____Unify____injection_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
mercury__injection____Compare____injection_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__injection____Compare____injection_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__injection__init(void)
{
}

void mercury__injection__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__injection__injection__type_ctor_info_injection_2);
}

void mercury__injection__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__injection__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module injection.
