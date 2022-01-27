/*
** Automatically generated from `digraph.m'
** by the Mercury compiler,
** version rotd-2021-11-02
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


// :- module digraph.
// :- implementation.

/*
INIT mercury__digraph__init
ENDINIT
*/

#include "digraph.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
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
#include "prolog.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
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



struct mercury__digraph__is_edge_rev_3_p_0_env_0_s {
  MR_Word * mercury__digraph__is_edge_rev_3_p_0_env_0__X_5;
  MR_Cont mercury__digraph__is_edge_rev_3_p_0_env_0__cont;
  void * mercury__digraph__is_edge_rev_3_p_0_env_0__cont_env_ptr;
  MR_Box mercury__digraph__is_edge_rev_3_p_0_env_0__conv1_X_5;
};

struct mercury__digraph__is_edge_3_p_0_env_0_s {
  MR_Word * mercury__digraph__is_edge_3_p_0_env_0__Y_6;
  MR_Cont mercury__digraph__is_edge_3_p_0_env_0__cont;
  void * mercury__digraph__is_edge_3_p_0_env_0__cont_env_ptr;
  MR_Box mercury__digraph__is_edge_3_p_0_env_0__conv1_Y_6;
};


static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__digraph__pti_digraph_key_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__set_ordlist__pti_set_ordlist_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__digraph__pti_digraph_key_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__bimap__pti_bimap_2__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__digraph__digraph__field_types_digraph_1_0[4];

static const MR_ConstString mercury__digraph__digraph__field_names_digraph_1_0[4];

static const MR_DuFunctorDesc mercury__digraph__digraph__du_functor_desc_digraph_1_0;

static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_stag_ordered_digraph_1_0[1];

static const MR_DuPtagLayout mercury__digraph__digraph__du_ptag_ordered_digraph_1[1];

static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_name_ordered_digraph_1[1];

static const MR_Integer mercury__digraph__digraph__functor_number_map_digraph_1[1];

static const MR_Integer mercury__digraph__digraph__functor_number_map_digraph_key_1[1];

static const MR_NotagFunctorDesc mercury__digraph__digraph__notag_functor_desc_digraph_key_1;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_digraph__pti_digraph_key_1__pseudo_1;

static MR_Integer MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__digraph__rtc_2_5_p_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word HeadVar__1_1,
  MR_Word G_2,
  MR_Word STATE_VARIABLE_Vis_0_3,
  MR_Word STATE_VARIABLE_Rtc_0_4,
  MR_Word * STATE_VARIABLE_Rtc_5);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_52_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word TypeClassInfo_for_enum_19,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_54_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_33,
  MR_Word Var_34,
  MR_Word TypeClassInfo_for_enum_22,
  MR_Integer HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_50_53_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
  MR_Word Var_14,
  MR_Word Var_15,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mercury__digraph__f_76_67_77_67_112_114_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_50_53_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_95_49_3_p_in__list_0(
  MR_Word Var_14,
  MR_Word Var_15,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_17);

static MR_Word MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_51_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_2_f_in__list_0(
  MR_Word Var_14,
  MR_Word Var_15,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__digraph__f_76_67_77_67_102_110_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_51_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_95_49_3_p_in__list_0(
  MR_Word Var_14,
  MR_Word Var_15,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_20);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__set_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word HeadVar__2_6,
  MR_Word HeadVar__3_7,
  MR_Word * HeadVar__4_8);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
  MR_Word Var_27,
  MR_Word Var_28,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__digraph__components_2_4_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word G_5,
  MR_Word Xs0_6,
  MR_Word STATE_VARIABLE_Components_0_14,
  MR_Word * STATE_VARIABLE_Components_15);

static void MR_CALL 
mercury__digraph__reachable_from_4_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word G_5,
  MR_Word Keys0_6,
  MR_Word STATE_VARIABLE_Comp_0_15,
  MR_Word * STATE_VARIABLE_Comp_16);

static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__list_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_54_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_33,
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Word TypeClassInfo_for_enum_22,
  MR_Integer HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Word TypeClassInfo_for_enum_19,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_4_p_in__list_0(
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__digraph__add_composition_edges_5_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word KMap1_6,
  MR_Word KMap2_7,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Comp_0_11,
  MR_Word * STATE_VARIABLE_Comp_12);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word TypeClassInfo_for_enum_19,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_54_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_33,
  MR_Word Var_34,
  MR_Word TypeClassInfo_for_enum_22,
  MR_Integer HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static void MR_CALL 
mercury__digraph__accumulate_digraph_key_set_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word KMap_5,
  MR_Word X_6,
  MR_Word STATE_VARIABLE_Set_0_10,
  MR_Word * STATE_VARIABLE_Set_11);

static void MR_CALL 
mercury__digraph__add_cartesian_product_4_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word KeySet1_5,
  MR_Word KeySet2_6,
  MR_Word STATE_VARIABLE_Rtc_0_9,
  MR_Word * STATE_VARIABLE_Rtc_10);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_52_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word TypeClassInfo_for_enum_19,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_54_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Word TypeClassInfo_for_enum_22,
  MR_Integer HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static void MR_CALL 
mercury__digraph__IntroducedFrom__pred__add_cartesian_product__1128__1_5_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word KeySet2_6,
  MR_Word LambdaHeadVar__1_13,
  MR_Word LambdaHeadVar__2_14,
  MR_Word * LambdaHeadVar__3_15);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_53_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word TypeClassInfo_for_enum_19,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_53_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Word TypeClassInfo_for_enum_22,
  MR_Integer HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_53_93_95_48_6_p_in__list_0(
  MR_Word Var_43,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
mercury__digraph__find_necessary_keys_5_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Needed1_0_10,
  MR_Word * STATE_VARIABLE_Needed1_11,
  MR_Word STATE_VARIABLE_Needed2_0_12,
  MR_Word * STATE_VARIABLE_Needed2_13);

static MR_Word MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_2_f_in__list_0(
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__digraph__f_76_67_77_67_102_110_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_95_49_3_p_in__list_0(
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_91);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word TypeClassInfo_for_enum_13,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_9,
  MR_Word * HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_52_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_41,
  MR_Word Var_42,
  MR_Word TypeClassInfo_for_enum_26,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_55_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_8_p_in__sparse_bitset_0(
  MR_Word Var_42,
  MR_Word Var_43,
  MR_Word TypeClassInfo_for_enum_27,
  MR_Integer HeadVar__2_10,
  MR_Unsigned HeadVar__3_11,
  MR_Integer HeadVar__4_12,
  MR_Word HeadVar__5_13,
  MR_Word * HeadVar__6_14,
  MR_Word HeadVar__7_15,
  MR_Word * HeadVar__8_16);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_51_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_6_p_in__list_0(
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_54_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_8_p_in__sparse_bitset_0(
  MR_Word Var_43,
  MR_Word Var_44,
  MR_Word TypeClassInfo_for_enum_27,
  MR_Integer HeadVar__2_10,
  MR_Unsigned HeadVar__3_11,
  MR_Integer HeadVar__4_12,
  MR_Word HeadVar__5_13,
  MR_Word * HeadVar__6_14,
  MR_Word HeadVar__7_15,
  MR_Word * HeadVar__8_16);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_52_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_42,
  MR_Word Var_43,
  MR_Word TypeClassInfo_for_enum_26,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_93_95_48_4_p_in__list_0(
  MR_Word Var_21,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_36,
  MR_Word TypeClassInfo_for_enum_19,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_54_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_39,
  MR_Word TypeClassInfo_for_enum_22,
  MR_Integer HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Box Var_33,
  MR_Word TypeClassInfo_for_enum_19,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_55_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Box Var_36,
  MR_Word TypeClassInfo_for_enum_22,
  MR_Integer HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_53_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word TypeClassInfo_for_enum_19,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_53_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word TypeClassInfo_for_enum_22,
  MR_Integer HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static void MR_CALL 
mercury__digraph__is_edge_rev_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__digraph__is_edge_3_p_0_1(
  void * env_ptr_arg);

static MR_Word MR_CALL 
mercury__digraph__key_set_map_delete_3_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Map0_5,
  MR_Integer XI_6,
  MR_Word Y_7);

static MR_Word MR_CALL 
mercury__digraph__key_set_map_add_3_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Map0_5,
  MR_Integer XI_6,
  MR_Word Y_7);

static MR_bool MR_CALL 
mercury__digraph____Unify____clique_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__digraph____Compare____clique_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__digraph____Compare____digraph_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_key_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__digraph____Compare____digraph_key_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_key_set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__digraph____Compare____digraph_key_set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__digraph____Unify____key_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__digraph____Compare____key_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__digraph____Unify____key_set_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__digraph____Compare____key_set_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_Box MR_CALL 
mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__to_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__from_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);


static /* final */ const MR_Box mercury__digraph_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__digraph_scalar_common_2[3][4];

static /* final */ const MR_Box mercury__digraph_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__digraph_scalar_common_4[2][2];




static /* final */ const MR_Box mercury__digraph_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__digraph_scalar_common_2[3][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__digraph_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (&mercury__digraph_scalar_common_4[0])),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (&mercury__digraph_scalar_common_4[1])),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mercury__digraph_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__digraph_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__digraph_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__digraph_scalar_common_4[2][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
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



static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__digraph__pti_digraph_key_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) (&mercury__digraph__set_ordlist__pti_set_ordlist_1__pseudo_1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__digraph__digraph__pti_digraph_key_1__pseudo_1),
    (MR_PseudoTypeInfo) (&mercury__digraph__digraph__pti_digraph_key_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1)
  }
};

const MR_TypeCtorInfo_Struct mercury__digraph__digraph__type_ctor_info_clique_map_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__digraph____Unify____clique_map_1_0_10001)),
  ((MR_Box) (mercury__digraph____Compare____clique_map_1_0_10001)),
  (MR_String) "digraph",
  (MR_String) "clique_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__digraph__tree234__pti_tree234_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__bimap__pti_bimap_2__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__digraph__digraph__pti_digraph_key_1__pseudo_1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) (&mercury__digraph__digraph__pti_digraph_key_1__pseudo_1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__digraph__sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1)
  }
};

static const MR_PseudoTypeInfo mercury__digraph__digraph__field_types_digraph_1_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__digraph__bimap__pti_bimap_2__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1)
};

static const MR_ConstString mercury__digraph__digraph__field_names_digraph_1_0[4] = {
  (MR_String) "next_key",
  (MR_String) "vertex_map",
  (MR_String) "fwd_map",
  (MR_String) "bwd_map"
};

static const MR_DuFunctorDesc mercury__digraph__digraph__du_functor_desc_digraph_1_0 = {
  (MR_String) "digraph",
  INT16_C(4),
  UINT16_C(14),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__digraph__digraph__field_types_digraph_1_0,
  mercury__digraph__digraph__field_names_digraph_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_stag_ordered_digraph_1_0[1] = {
  &mercury__digraph__digraph__du_functor_desc_digraph_1_0
};

static const MR_DuPtagLayout mercury__digraph__digraph__du_ptag_ordered_digraph_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__digraph__digraph__du_stag_ordered_digraph_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_name_ordered_digraph_1[1] = {
  &mercury__digraph__digraph__du_functor_desc_digraph_1_0
};

static const MR_Integer mercury__digraph__digraph__functor_number_map_digraph_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__digraph__digraph__type_ctor_info_digraph_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__digraph____Unify____digraph_1_0_10001)),
  ((MR_Box) (mercury__digraph____Compare____digraph_1_0_10001)),
  (MR_String) "digraph",
  (MR_String) "digraph",
  {     mercury__digraph__digraph__du_name_ordered_digraph_1 },
  {     mercury__digraph__digraph__du_ptag_ordered_digraph_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__digraph__digraph__functor_number_map_digraph_1,

};

static const MR_Integer mercury__digraph__digraph__functor_number_map_digraph_key_1[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__digraph__digraph__notag_functor_desc_digraph_key_1 = {
  (MR_String) "digraph_key",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__digraph__digraph__type_ctor_info_digraph_key_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__digraph____Unify____digraph_key_1_0_10001)),
  ((MR_Box) (mercury__digraph____Compare____digraph_key_1_0_10001)),
  (MR_String) "digraph",
  (MR_String) "digraph_key",
  {     &mercury__digraph__digraph__notag_functor_desc_digraph_key_1 },
  {     &mercury__digraph__digraph__notag_functor_desc_digraph_key_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__digraph__digraph__functor_number_map_digraph_key_1,

};

const MR_TypeCtorInfo_Struct mercury__digraph__digraph__type_ctor_info_digraph_key_set_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__digraph____Unify____digraph_key_set_1_0_10001)),
  ((MR_Box) (mercury__digraph____Compare____digraph_key_set_1_0_10001)),
  (MR_String) "digraph",
  (MR_String) "digraph_key_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__digraph__sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__digraph__digraph__pti_digraph_key_1__pseudo_1)
  }
};

const MR_TypeCtorInfo_Struct mercury__digraph__digraph__type_ctor_info_key_map_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__digraph____Unify____key_map_1_0_10001)),
  ((MR_Box) (mercury__digraph____Compare____key_map_1_0_10001)),
  (MR_String) "digraph",
  (MR_String) "key_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_digraph__pti_digraph_key_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mercury__digraph__digraph__type_ctor_info_key_set_map_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__digraph____Unify____key_set_map_1_0_10001)),
  ((MR_Box) (mercury__digraph____Compare____key_set_map_1_0_10001)),
  (MR_String) "digraph",
  (MR_String) "key_set_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_BaseTypeclassInfo base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__[7] = {
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__to_int_1_1_f_0_10001)),
  ((MR_Box) (mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__from_int_1_1_f_0_10001))
};

static MR_Integer MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  return (MR_Integer) 1200;
}

MR_bool MR_CALL 
mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__from_int_1_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Integer Int_4,
  MR_Word * HeadVar__2_2)
{
  {
    *HeadVar__2_2 = (MR_Word) (Int_4);
    return MR_TRUE;
  }
}

MR_Integer MR_CALL 
mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__to_int_1_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer Int_4 = (MR_Integer) (HeadVar__1_1);

    return Int_4;
  }
}

void MR_CALL 
mercury__digraph____Compare____key_set_map_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeInfo_9_9;
    MR_Word TypeInfo_11_11;
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    {
      TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    {
      TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 1) = ((MR_Box) (TypeInfo_9_9));
    }
    mercury__tree234____Compare____tree234_2_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_11_11, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mercury__digraph____Unify____key_set_map_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_8_8;
    MR_Word TypeInfo_10_10;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_5));
    }
    {
      TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_8_8));
    }
    succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_10_10, Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__digraph____Compare____key_map_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeInfo_9_9;
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    {
      TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    mercury__tree234____Compare____tree234_2_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_9_9, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mercury__digraph____Unify____key_map_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_8_8;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_5));
    }
    succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_8_8, Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__digraph____Compare____digraph_key_set_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeInfo_8_8;
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    mercury__sparse_bitset____Compare____sparse_bitset_1_0(TypeInfo_8_8, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

MR_bool MR_CALL 
mercury__digraph____Unify____digraph_key_set_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_7_7;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    {
      TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
    }
    succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(TypeInfo_7_7, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
mercury__digraph____Compare____digraph_key_1_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = (MR_Integer) (HeadVar__2_2);
      MR_Integer ArgY1_5 = (MR_Integer) (HeadVar__3_3);

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX1_4 == ArgY1_5);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
          *HeadVar__1_1 = (MR_Integer) 2;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__digraph____Unify____digraph_key_1_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer ArgY1_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (ArgX1_3 == ArgY1_4);
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__digraph____Compare____digraph_1_0(
  MR_Word TypeInfo_for_T_17,
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
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
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
        MR_Word TypeInfo_20_20;

        {
          TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_20_20, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
          MR_hl_field(MR_mktag(0), TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_17));
        }
        mercury__bimap____Compare____bimap_2_0(TypeInfo_for_T_17, TypeInfo_20_20, &SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;
          MR_Word TypeInfo_25_25;
          MR_Word TypeInfo_27_27;

          {
            TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_25_25, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
            MR_hl_field(MR_mktag(0), TypeInfo_25_25, 1) = ((MR_Box) (TypeInfo_for_T_17));
          }
          {
            TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_27_27, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
            MR_hl_field(MR_mktag(0), TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_25_25));
          }
          mercury__tree234____Compare____tree234_2_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_27_27, &SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word TypeInfo_32_32;
            MR_Word TypeInfo_34_34;

            {
              TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_32_32, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
              MR_hl_field(MR_mktag(0), TypeInfo_32_32, 1) = ((MR_Box) (TypeInfo_for_T_17));
            }
            {
              TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_34_34, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
              MR_hl_field(MR_mktag(0), TypeInfo_34_34, 1) = ((MR_Box) (TypeInfo_32_32));
            }
            mercury__tree234____Compare____tree234_2_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_34_34, HeadVar__1_1, ArgX4_13, ArgY4_14);
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__digraph____Unify____digraph_1_0(
  MR_Word TypeInfo_for_T_13,
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
      MR_Word TypeCtorInfo_14_14;
      MR_Word TypeCtorInfo_18_18;
      MR_Word TypeCtorInfo_21_21;
      MR_Word TypeInfo_27_27;
      MR_Word TypeInfo_29_29;
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeCtorInfo_14_14 = (MR_Word) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1);
        {
          TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_27_27, 0) = ((MR_Box) (TypeCtorInfo_14_14));
          MR_hl_field(MR_mktag(0), TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_for_T_13));
        }
        succeeded = mercury__bimap____Unify____bimap_2_0(TypeInfo_for_T_13, TypeInfo_27_27, ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeCtorInfo_18_18 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
          TypeCtorInfo_21_21 = (MR_Word) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1);
          {
            TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_29_29, 0) = ((MR_Box) (TypeCtorInfo_21_21));
            MR_hl_field(MR_mktag(0), TypeInfo_29_29, 1) = ((MR_Box) (TypeInfo_27_27));
          }
          succeeded = mercury__tree234____Unify____tree234_2_0(TypeCtorInfo_18_18, TypeInfo_29_29, ArgX3_7, ArgY3_8);
          if (succeeded)
            succeeded = mercury__tree234____Unify____tree234_2_0(TypeCtorInfo_18_18, TypeInfo_29_29, ArgX4_9, ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__digraph____Compare____clique_map_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeInfo_8_8;
    MR_Word TypeInfo_10_10;
    MR_Word TypeInfo_11_11;
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    {
      TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    {
      TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 1) = ((MR_Box) (TypeInfo_10_10));
    }
    mercury__tree234____Compare____tree234_2_0(TypeInfo_8_8, TypeInfo_11_11, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

MR_bool MR_CALL 
mercury__digraph____Unify____clique_map_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_7_7;
    MR_Word TypeInfo_9_9;
    MR_Word TypeInfo_10_10;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    {
      TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
    }
    {
      TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_5));
    }
    {
      TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_9_9));
    }
    succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_7_7, TypeInfo_10_10, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
mercury__digraph__keys_2_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word G_3,
  MR_Word * Keys_4)
{
  {
    MR_Word TypeInfo_11_11;
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 1))));
    MR_Word Var_14;
    MR_Word conv0_Keys_4;

    {
      TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_11_11, 1) = ((MR_Box) (TypeInfo_for_T_9));
    }
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1))));
    mercury__tree234__keys_acc_3_p_0(TypeInfo_11_11, TypeInfo_for_T_9, (MR_Word) (Var_14), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_Keys_4);
    *Keys_4 = (MR_Word) (conv0_Keys_4);
  }
}

void MR_CALL 
mercury__digraph__traverse_5_p_1(
  MR_Word TypeInfo_for_T_14,
  MR_Word TypeInfo_for_A_15,
  MR_Word Graph_6,
  MR_Word ProcessVertex_7,
  MR_Word ProcessEdge_8,
  MR_Box STATE_VARIABLE_Acc_0_11,
  MR_Box * STATE_VARIABLE_Acc_12)
{
  {
    MR_Word TypeInfo_11_23;
    MR_Word VertexKeys_10;
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Graph_6, (MR_Integer) 1))));
    MR_Word Var_26;
    MR_Word conv0_VertexKeys_10;

    {
      TypeInfo_11_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_11_23, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_11_23, 1) = ((MR_Box) (TypeInfo_for_T_14));
    }
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1))));
    mercury__tree234__keys_acc_3_p_0(TypeInfo_11_23, TypeInfo_for_T_14, (MR_Word) (Var_26), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_VertexKeys_10);
    VertexKeys_10 = (MR_Word) (conv0_VertexKeys_10);
    mercury__digraph__traverse_2_6_p_1(TypeInfo_for_T_14, TypeInfo_for_A_15, Graph_6, ProcessVertex_7, ProcessEdge_8, VertexKeys_10, STATE_VARIABLE_Acc_0_11, STATE_VARIABLE_Acc_12);
  }
}

void MR_CALL 
mercury__digraph__traverse_2_6_p_1(
  MR_Word TypeInfo_for_T_27,
  MR_Word TypeInfo_for_A_28,
  MR_Word Graph_1,
  MR_Word ProcessVertex_2,
  MR_Word ProcessEdge_3,
  MR_Word HeadVar__4_4,
  MR_Box STATE_VARIABLE_Acc_0_5,
  MR_Box * STATE_VARIABLE_Acc_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_6 = STATE_VARIABLE_Acc_0_5;
    else
    {
      MR_Word VertexKey_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word VertexKeys_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Box Vertex_19;
      MR_Word ChildrenKeys_20;
      MR_Box STATE_VARIABLE_Acc_23_23;
      MR_Word Var_24;
      MR_Box STATE_VARIABLE_Acc_25_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__4_4;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_5;

      mercury__digraph__lookup_vertex_3_p_0(TypeInfo_for_T_27, Graph_1, VertexKey_16, &Vertex_19);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), ProcessVertex_2, (MR_Integer) 1))));
      func_0(((MR_Box) (ProcessVertex_2)), Vertex_19, STATE_VARIABLE_Acc_0_5, &STATE_VARIABLE_Acc_23_23);
      mercury__digraph__lookup_from_3_p_0(TypeInfo_for_T_27, Graph_1, VertexKey_16, &Var_24);
      ChildrenKeys_20 = (MR_Word) (Var_24);
      mercury__digraph__traverse_children_6_p_1(TypeInfo_for_T_27, TypeInfo_for_A_28, Graph_1, ProcessEdge_3, Vertex_19, ChildrenKeys_20, STATE_VARIABLE_Acc_23_23, &STATE_VARIABLE_Acc_25_25);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = VertexKeys_17;
      next_value_of_STATE_VARIABLE_Acc_0_5 = STATE_VARIABLE_Acc_25_25;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_Acc_0_5 = next_value_of_STATE_VARIABLE_Acc_0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__digraph__traverse_children_6_p_1(
  MR_Word TypeInfo_for_T_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word Graph_1,
  MR_Word ProcessEdge_2,
  MR_Box Parent_3,
  MR_Word HeadVar__4_4,
  MR_Box STATE_VARIABLE_Acc_0_5,
  MR_Box * STATE_VARIABLE_Acc_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_6 = STATE_VARIABLE_Acc_0_5;
    else
    {
      MR_Word ChildKey_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ChildKeys_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Box Child_19;
      MR_Box STATE_VARIABLE_Acc_22_22;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__4_4;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_5;

      mercury__digraph__lookup_vertex_3_p_0(TypeInfo_for_T_24, Graph_1, ChildKey_16, &Child_19);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), ProcessEdge_2, (MR_Integer) 1))));
      func_0(((MR_Box) (ProcessEdge_2)), Parent_3, Child_19, STATE_VARIABLE_Acc_0_5, &STATE_VARIABLE_Acc_22_22);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ChildKeys_17;
      next_value_of_STATE_VARIABLE_Acc_0_5 = STATE_VARIABLE_Acc_22_22;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_Acc_0_5 = next_value_of_STATE_VARIABLE_Acc_0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__digraph__traverse_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word TypeInfo_for_A_15,
  MR_Word Graph_6,
  MR_Word ProcessVertex_7,
  MR_Word ProcessEdge_8,
  MR_Box STATE_VARIABLE_Acc_0_11,
  MR_Box * STATE_VARIABLE_Acc_12)
{
  {
    MR_Word TypeInfo_11_23;
    MR_Word VertexKeys_10;
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Graph_6, (MR_Integer) 1))));
    MR_Word Var_26;
    MR_Word conv0_VertexKeys_10;

    {
      TypeInfo_11_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_11_23, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_11_23, 1) = ((MR_Box) (TypeInfo_for_T_14));
    }
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1))));
    mercury__tree234__keys_acc_3_p_0(TypeInfo_11_23, TypeInfo_for_T_14, (MR_Word) (Var_26), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_VertexKeys_10);
    VertexKeys_10 = (MR_Word) (conv0_VertexKeys_10);
    mercury__digraph__traverse_2_6_p_0(TypeInfo_for_T_14, TypeInfo_for_A_15, Graph_6, ProcessVertex_7, ProcessEdge_8, VertexKeys_10, STATE_VARIABLE_Acc_0_11, STATE_VARIABLE_Acc_12);
  }
}

void MR_CALL 
mercury__digraph__traverse_2_6_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word TypeInfo_for_A_28,
  MR_Word Graph_1,
  MR_Word ProcessVertex_2,
  MR_Word ProcessEdge_3,
  MR_Word HeadVar__4_4,
  MR_Box STATE_VARIABLE_Acc_0_5,
  MR_Box * STATE_VARIABLE_Acc_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_6 = STATE_VARIABLE_Acc_0_5;
    else
    {
      MR_Word VertexKey_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word VertexKeys_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Box Vertex_19;
      MR_Word ChildrenKeys_20;
      MR_Box STATE_VARIABLE_Acc_23_23;
      MR_Word Var_24;
      MR_Box STATE_VARIABLE_Acc_25_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__4_4;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_5;

      mercury__digraph__lookup_vertex_3_p_0(TypeInfo_for_T_27, Graph_1, VertexKey_16, &Vertex_19);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), ProcessVertex_2, (MR_Integer) 1))));
      func_0(((MR_Box) (ProcessVertex_2)), Vertex_19, STATE_VARIABLE_Acc_0_5, &STATE_VARIABLE_Acc_23_23);
      mercury__digraph__lookup_from_3_p_0(TypeInfo_for_T_27, Graph_1, VertexKey_16, &Var_24);
      ChildrenKeys_20 = (MR_Word) (Var_24);
      mercury__digraph__traverse_children_6_p_0(TypeInfo_for_T_27, TypeInfo_for_A_28, Graph_1, ProcessEdge_3, Vertex_19, ChildrenKeys_20, STATE_VARIABLE_Acc_23_23, &STATE_VARIABLE_Acc_25_25);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = VertexKeys_17;
      next_value_of_STATE_VARIABLE_Acc_0_5 = STATE_VARIABLE_Acc_25_25;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_Acc_0_5 = next_value_of_STATE_VARIABLE_Acc_0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__digraph__traverse_children_6_p_0(
  MR_Word TypeInfo_for_T_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word Graph_1,
  MR_Word ProcessEdge_2,
  MR_Box Parent_3,
  MR_Word HeadVar__4_4,
  MR_Box STATE_VARIABLE_Acc_0_5,
  MR_Box * STATE_VARIABLE_Acc_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_6 = STATE_VARIABLE_Acc_0_5;
    else
    {
      MR_Word ChildKey_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ChildKeys_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Box Child_19;
      MR_Box STATE_VARIABLE_Acc_22_22;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__4_4;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_5;

      mercury__digraph__lookup_vertex_3_p_0(TypeInfo_for_T_24, Graph_1, ChildKey_16, &Child_19);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), ProcessEdge_2, (MR_Integer) 1))));
      func_0(((MR_Box) (ProcessEdge_2)), Parent_3, Child_19, STATE_VARIABLE_Acc_0_5, &STATE_VARIABLE_Acc_22_22);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ChildKeys_17;
      next_value_of_STATE_VARIABLE_Acc_0_5 = STATE_VARIABLE_Acc_22_22;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_Acc_0_5 = next_value_of_STATE_VARIABLE_Acc_0_5;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__digraph__rtc_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word G_3)
{
  {
    MR_Word Rtc_4;

    mercury__digraph__rtc_2_p_0(TypeInfo_for_T_5, G_3, &Rtc_4);
    return Rtc_4;
  }
}

MR_Word MR_CALL 
mercury__digraph__tc_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word G_3)
{
  {
    MR_Word Tc_4;

    mercury__digraph__tc_2_p_0(TypeInfo_for_T_5, G_3, &Tc_4);
    return Tc_4;
  }
}

void MR_CALL 
mercury__digraph__tc_2_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word G_3,
  MR_Word * Tc_4)
{
  {
    MR_Word TypeInfo_11_17;
    MR_Word Rtc_5;
    MR_Word Keys_6;
    MR_Word Fakes_7;
    MR_Word Var_12;
    MR_Word Var_20;
    MR_Word conv0_Keys_6;

    mercury__digraph__rtc_2_p_0(TypeInfo_for_T_9, G_3, &Rtc_5);
    Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 1))));
    {
      TypeInfo_11_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_11_17, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_11_17, 1) = ((MR_Box) (TypeInfo_for_T_9));
    }
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 1))));
    mercury__tree234__keys_acc_3_p_0(TypeInfo_11_17, TypeInfo_for_T_9, (MR_Word) (Var_20), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_Keys_6);
    Keys_6 = (MR_Word) (conv0_Keys_6);
    mercury__digraph__detect_fake_reflexives_5_p_0(TypeInfo_for_T_9, G_3, Rtc_5, Keys_6, (MR_Word) ((MR_Unsigned) 0U), &Fakes_7);
    mercury__digraph__delete_assoc_list_3_p_0(TypeInfo_for_T_9, Fakes_7, Rtc_5, Tc_4);
  }
}

void MR_CALL 
mercury__digraph__detect_fake_reflexives_5_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word G_1,
  MR_Word Rtc_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Fakes_0_4,
  MR_Word * STATE_VARIABLE_Fakes_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Fakes_5 = STATE_VARIABLE_Fakes_0_4;
    else
    {
      MR_Word X_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Xs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SuccXs_16;
      MR_Word PreXs_17;
      MR_Word Ys_18;
      MR_Word STATE_VARIABLE_Fakes_21_21;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Fakes_0_4;

      mercury__digraph__lookup_key_set_from_3_p_0(TypeInfo_for_T_25, G_1, X_13, &SuccXs_16);
      mercury__digraph__lookup_key_set_to_3_p_0(TypeInfo_for_T_25, Rtc_2, X_13, &PreXs_17);
      Var_31 = (MR_Word) (SuccXs_16);
      Var_32 = (MR_Word) (PreXs_17);
      Var_33 = mercury__sparse_bitset__intersect_loop_2_f_0(Var_31, Var_32);
      Ys_18 = (MR_Word) (Var_33);
      Var_34 = (MR_Word) (Ys_18);
      succeeded = (Var_34 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MR_Word Var_22;

        {
          Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (X_13));
          MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (X_13));
        }
        {
          STATE_VARIABLE_Fakes_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Fakes_21_21, 0) = ((MR_Box) (Var_22));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Fakes_21_21, 1) = ((MR_Box) (STATE_VARIABLE_Fakes_0_4));
        }
      }
      else
        STATE_VARIABLE_Fakes_21_21 = STATE_VARIABLE_Fakes_0_4;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Xs_14;
      next_value_of_STATE_VARIABLE_Fakes_0_4 = STATE_VARIABLE_Fakes_21_21;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Fakes_0_4 = next_value_of_STATE_VARIABLE_Fakes_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__digraph__rtc_2_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word G_3,
  MR_Word * STATE_VARIABLE_Rtc_13)
{
  {
    MR_Word TypeInfo_8_26;
    MR_Word Dfs_5;
    MR_Integer NextKey_7;
    MR_Word VMap_8;
    MR_Word STATE_VARIABLE_Rtc_14_14;
    MR_Word DfsRev_24;
    MR_Word conv0_Dfs_5;

    mercury__digraph__dfsrev_2_p_0(TypeInfo_for_T_16, G_3, &DfsRev_24);
    {
      TypeInfo_8_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_26, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_26, 1) = ((MR_Box) (TypeInfo_for_T_16));
    }
    mercury__list__reverse_2_p_0(TypeInfo_8_26, (MR_Word) (DfsRev_24), &conv0_Dfs_5);
    Dfs_5 = (MR_Word) (conv0_Dfs_5);
    NextKey_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 0))));
    VMap_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 1))));
    {
      STATE_VARIABLE_Rtc_14_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Rtc_14_14, 0) = ((MR_Box) (NextKey_7));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Rtc_14_14, 1) = ((MR_Box) (VMap_8));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Rtc_14_14, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Rtc_14_14, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__digraph__rtc_2_5_p_0(TypeInfo_for_T_16, Dfs_5, G_3, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), STATE_VARIABLE_Rtc_14_14, STATE_VARIABLE_Rtc_13);
  }
}

static void MR_CALL 
mercury__digraph__rtc_2_5_p_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word HeadVar__1_1,
  MR_Word G_2,
  MR_Word STATE_VARIABLE_Vis_0_3,
  MR_Word STATE_VARIABLE_Rtc_0_4,
  MR_Word * STATE_VARIABLE_Rtc_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Rtc_5 = STATE_VARIABLE_Rtc_0_4;
    else
    {
      MR_Word X_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Xs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Vis_23_23;
      MR_Word STATE_VARIABLE_Rtc_28_28;
      MR_Word TypeInfo_32_32;
      MR_Word TypeClassInfo_for_enum_34;
      MR_Word Var_48 = (MR_Word) (STATE_VARIABLE_Vis_0_3);
      MR_Integer Var_49;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
      MR_Box conv1_Var_49;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Vis_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Rtc_0_4;

      {
        TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_32_32, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
        MR_hl_field(MR_mktag(0), TypeInfo_32_32, 1) = ((MR_Box) (TypeInfo_for_T_30));
      }
      {
        TypeClassInfo_for_enum_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_34, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_34, 1) = ((MR_Box) (TypeInfo_for_T_30));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_34, 2) = ((MR_Box) (TypeInfo_32_32));
      }
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_34, (MR_Integer) 0)), (MR_Integer) 5))));
      conv1_Var_49 = func_0(((MR_Box) (TypeClassInfo_for_enum_34)), ((MR_Box) (X_11)));
      Var_49 = ((MR_Integer) (conv1_Var_49));
      succeeded = mercury__sparse_bitset__contains_search_nodes_2_p_0(Var_48, Var_49);
      if (succeeded)
      {
        STATE_VARIABLE_Rtc_28_28 = STATE_VARIABLE_Rtc_0_4;
        STATE_VARIABLE_Vis_23_23 = STATE_VARIABLE_Vis_0_3;
      }
      else
      {
        MR_Word TypeInfo_36_36;
        MR_Word TypeClassInfo_for_enum_38;
        MR_Word CliqList_16;
        MR_Word Cliq_17;
        MR_Word Followers0_18;
        MR_Word Followers_19;
        MR_Word Var_53;
        MR_Word Var_66;

        mercury__digraph__dfs_2_6_p_0(TypeInfo_for_T_30, G_2, X_11, STATE_VARIABLE_Vis_0_3, &STATE_VARIABLE_Vis_23_23, (MR_Word) ((MR_Unsigned) 0U), &CliqList_16);
        {
          TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_36_36, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
          MR_hl_field(MR_mktag(0), TypeInfo_36_36, 1) = ((MR_Box) (TypeInfo_for_T_30));
        }
        {
          TypeClassInfo_for_enum_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_38, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_38, 1) = ((MR_Box) (TypeInfo_for_T_30));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_38, 2) = ((MR_Box) (TypeInfo_36_36));
        }
        Var_53 = mercury__sparse_bitset__list_to_set_passes_2_f_0(TypeClassInfo_for_enum_38, (MR_Word) (CliqList_16), (MR_Word) ((MR_Unsigned) 0U));
        Cliq_17 = (MR_Word) (Var_53);
        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_52_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(TypeInfo_for_T_30, G_2, TypeClassInfo_for_enum_38, Var_53, Cliq_17, &Followers0_18);
        Var_66 = (MR_Word) (Followers0_18);
        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_52_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(TypeInfo_for_T_30, STATE_VARIABLE_Rtc_0_4, TypeClassInfo_for_enum_38, Var_66, Cliq_17, &Followers_19);
        mercury__digraph__add_cartesian_product_4_p_0(TypeInfo_for_T_30, Cliq_17, Followers_19, STATE_VARIABLE_Rtc_0_4, &STATE_VARIABLE_Rtc_28_28);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Xs_12;
      next_value_of_STATE_VARIABLE_Vis_0_3 = STATE_VARIABLE_Vis_23_23;
      next_value_of_STATE_VARIABLE_Rtc_0_4 = STATE_VARIABLE_Rtc_28_28;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Vis_0_3 = next_value_of_STATE_VARIABLE_Vis_0_3;
      STATE_VARIABLE_Rtc_0_4 = next_value_of_STATE_VARIABLE_Rtc_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_52_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word TypeClassInfo_for_enum_19,
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
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
      MR_Unsigned Var_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
      MR_Integer Var_17;
      MR_Word Var_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_52_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Var_17  = Bits;
}
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_54_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_6_p_in__sparse_bitset_0(Var_30, Var_31, TypeClassInfo_for_enum_19, Var_13, Var_14, Var_17, HeadVar__3_3, &Var_18);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_54_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_33,
  MR_Word Var_34,
  MR_Word TypeClassInfo_for_enum_22,
  MR_Integer HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Integer HeadVar__4_10,
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
      succeeded = (HeadVar__4_10 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word Var_13;
        MR_Word SuccXs_40;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Box conv0_Var_13;

        conv0_Var_13 = mercury__enum__det_from_int_1_f_0(TypeClassInfo_for_enum_22, HeadVar__2_8);
        Var_13 = ((MR_Word) (conv0_Var_13));
        mercury__digraph__lookup_key_set_from_3_p_0(Var_33, Var_34, Var_13, &SuccXs_40);
        Var_47 = (MR_Word) (SuccXs_40);
        Var_48 = (MR_Word) (HeadVar__5_11);
        Var_49 = mercury__sparse_bitset__union_loop_2_f_0(Var_47, Var_48);
        *HeadVar__6_12 = (MR_Word) (Var_49);
      }
      else
      {
        MR_Integer Var_14 = (HeadVar__4_10 >> 1);
        MR_Unsigned Var_16;
        MR_Unsigned Var_17;
        MR_Unsigned Var_18;
        MR_Unsigned Var_19;
        MR_Word Var_20;
        MR_Integer Var_21;
        MR_Unsigned Var_52;
        MR_Unsigned Var_53 = ~((MR_Unsigned) 0U);
        MR_Integer next_value_of_HeadVar__2_8;
        MR_Unsigned next_value_of_HeadVar__3_9;
        MR_Integer next_value_of_HeadVar__4_10;
        MR_Word next_value_of_HeadVar__5_11;

        Var_52 = (Var_53 << Var_14);
        Var_16 = ~(Var_52);
        Var_17 = (Var_16 & HeadVar__3_9);
        Var_19 = (HeadVar__3_9 >> Var_14);
        Var_18 = (Var_16 & Var_19);
        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_54_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_6_p_in__sparse_bitset_0(Var_33, Var_34, TypeClassInfo_for_enum_22, HeadVar__2_8, Var_17, Var_14, HeadVar__5_11, &Var_20);
        Var_21 = (MR_Integer) ((MR_Unsigned) HeadVar__2_8 + (MR_Unsigned) Var_14);
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
mercury__digraph__sc_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word G_3,
  MR_Word * Sc_4)
{
  {
    MR_Word GInv_5;
    MR_Word GInvList_6;
    MR_Integer Next_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 0))));
    MR_Word VMap_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 1))));
    MR_Word Fwd_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 2))));
    MR_Word Bwd_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 3))));

    {
      GInv_5 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), GInv_5, 0) = ((MR_Box) (Next_10));
      MR_hl_field(MR_mktag(0), GInv_5, 1) = ((MR_Box) (VMap_11));
      MR_hl_field(MR_mktag(0), GInv_5, 2) = ((MR_Box) (Bwd_13));
      MR_hl_field(MR_mktag(0), GInv_5, 3) = ((MR_Box) (Fwd_12));
    }
    mercury__digraph__to_key_assoc_list_2_p_0(TypeInfo_for_T_7, GInv_5, &GInvList_6);
    mercury__digraph__add_assoc_list_3_p_0(TypeInfo_for_T_7, GInvList_6, G_3, Sc_4);
  }
}

MR_Word MR_CALL 
mercury__digraph__sc_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word G_3)
{
  {
    MR_Word Sc_4;
    MR_Word GInv_8;
    MR_Word GInvList_9;
    MR_Integer Next_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 0))));
    MR_Word VMap_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 1))));
    MR_Word Fwd_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 2))));
    MR_Word Bwd_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 3))));

    {
      GInv_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), GInv_8, 0) = ((MR_Box) (Next_12));
      MR_hl_field(MR_mktag(0), GInv_8, 1) = ((MR_Box) (VMap_13));
      MR_hl_field(MR_mktag(0), GInv_8, 2) = ((MR_Box) (Bwd_15));
      MR_hl_field(MR_mktag(0), GInv_8, 3) = ((MR_Box) (Fwd_14));
    }
    mercury__digraph__to_key_assoc_list_2_p_0(TypeInfo_for_T_5, GInv_8, &GInvList_9);
    mercury__digraph__add_assoc_list_3_p_0(TypeInfo_for_T_5, GInvList_9, G_3, &Sc_4);
    return Sc_4;
  }
}

MR_Word MR_CALL 
mercury__digraph__return_sccs_in_from_to_order_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word G_3)
{
  {
    MR_Word ATsort_4;
    MR_Word TypeInfo_8_8;
    MR_Word ATsort0_5;
    MR_Word conv0_ATsort_4;

    ATsort0_5 = mercury__digraph__return_sccs_in_to_from_order_1_f_0(TypeInfo_for_T_6, G_3);
    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    mercury__list__reverse_2_p_0(TypeInfo_8_8, (MR_Word) (ATsort0_5), &conv0_ATsort_4);
    ATsort_4 = (MR_Word) (conv0_ATsort_4);
    return ATsort_4;
  }
}

void MR_CALL 
mercury__digraph__atsort_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word G_3,
  MR_Word * ATsort_4)
{
  {
    MR_Word TypeInfo_8_10;
    MR_Word ATsort0_8;
    MR_Word conv0_ATsort_4;

    ATsort0_8 = mercury__digraph__return_sccs_in_to_from_order_1_f_0(TypeInfo_for_T_5, G_3);
    {
      TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_10, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_10, 1) = ((MR_Box) (TypeInfo_for_T_5));
    }
    mercury__list__reverse_2_p_0(TypeInfo_8_10, (MR_Word) (ATsort0_8), &conv0_ATsort_4);
    *ATsort_4 = (MR_Word) (conv0_ATsort_4);
  }
}

MR_Word MR_CALL 
mercury__digraph__atsort_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word G_3)
{
  {
    MR_Word ATsort_4;
    MR_Word TypeInfo_8_10;
    MR_Word ATsort0_8;
    MR_Word conv0_ATsort_4;

    ATsort0_8 = mercury__digraph__return_sccs_in_to_from_order_1_f_0(TypeInfo_for_T_5, G_3);
    {
      TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_10, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_10, 1) = ((MR_Box) (TypeInfo_for_T_5));
    }
    mercury__list__reverse_2_p_0(TypeInfo_8_10, (MR_Word) (ATsort0_8), &conv0_ATsort_4);
    ATsort_4 = (MR_Word) (conv0_ATsort_4);
    return ATsort_4;
  }
}

MR_Word MR_CALL 
mercury__digraph__return_sccs_in_to_from_order_1_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word G_3)
{
  {
    MR_Word ATsort_4;
    MR_Word DfsRev_5;
    MR_Word GInv_6;
    MR_Integer Next_14;
    MR_Word VMap_15;
    MR_Word Fwd_16;
    MR_Word Bwd_17;

    mercury__digraph__dfsrev_2_p_0(TypeInfo_for_T_9, G_3, &DfsRev_5);
    Next_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 0))));
    VMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 1))));
    Fwd_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 2))));
    Bwd_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 3))));
    {
      GInv_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), GInv_6, 0) = ((MR_Box) (Next_14));
      MR_hl_field(MR_mktag(0), GInv_6, 1) = ((MR_Box) (VMap_15));
      MR_hl_field(MR_mktag(0), GInv_6, 2) = ((MR_Box) (Bwd_17));
      MR_hl_field(MR_mktag(0), GInv_6, 3) = ((MR_Box) (Fwd_16));
    }
    mercury__digraph__atsort_2_5_p_0(TypeInfo_for_T_9, DfsRev_5, GInv_6, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), (MR_Word) ((MR_Unsigned) 0U), &ATsort_4);
    return ATsort_4;
  }
}

void MR_CALL 
mercury__digraph__atsort_2_5_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word HeadVar__1_1,
  MR_Word GInv_2,
  MR_Word STATE_VARIABLE_Vis_0_3,
  MR_Word STATE_VARIABLE_ATsort_0_4,
  MR_Word * STATE_VARIABLE_ATsort_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ATsort_5 = STATE_VARIABLE_ATsort_0_4;
    else
    {
      MR_Word X_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Xs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Vis_22_22;
      MR_Word STATE_VARIABLE_ATsort_25_25;
      MR_Word TypeInfo_29_29;
      MR_Word TypeClassInfo_for_enum_31;
      MR_Word Var_37 = (MR_Word) (STATE_VARIABLE_Vis_0_3);
      MR_Integer Var_38;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
      MR_Box conv1_Var_38;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Vis_0_3;
      MR_Word next_value_of_STATE_VARIABLE_ATsort_0_4;

      {
        TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_29_29, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
        MR_hl_field(MR_mktag(0), TypeInfo_29_29, 1) = ((MR_Box) (TypeInfo_for_T_27));
      }
      {
        TypeClassInfo_for_enum_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_31, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_31, 1) = ((MR_Box) (TypeInfo_for_T_27));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_31, 2) = ((MR_Box) (TypeInfo_29_29));
      }
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_31, (MR_Integer) 0)), (MR_Integer) 5))));
      conv1_Var_38 = func_0(((MR_Box) (TypeClassInfo_for_enum_31)), ((MR_Box) (X_11)));
      Var_38 = ((MR_Integer) (conv1_Var_38));
      succeeded = mercury__sparse_bitset__contains_search_nodes_2_p_0(Var_37, Var_38);
      if (succeeded)
      {
        STATE_VARIABLE_ATsort_25_25 = STATE_VARIABLE_ATsort_0_4;
        STATE_VARIABLE_Vis_22_22 = STATE_VARIABLE_Vis_0_3;
      }
      else
      {
        MR_Word CliqKeys_16;
        MR_Word CliqList_17;
        MR_Word Cliq_18;
        MR_Word Var_42;
        MR_Integer Var_45;

        mercury__digraph__dfs_2_6_p_0(TypeInfo_for_T_27, GInv_2, X_11, STATE_VARIABLE_Vis_0_3, &STATE_VARIABLE_Vis_22_22, (MR_Word) ((MR_Unsigned) 0U), &CliqKeys_16);
        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_50_53_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(TypeInfo_for_T_27, GInv_2, CliqKeys_16, &CliqList_17);
        mercury__list__length_acc_3_p_0(TypeInfo_for_T_27, CliqList_17, (MR_Integer) 0, &Var_45);
        mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_27, Var_45, CliqList_17, &Var_42);
        Cliq_18 = (MR_Word) (Var_42);
        {
          STATE_VARIABLE_ATsort_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_ATsort_25_25, 0) = ((MR_Box) (Cliq_18));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_ATsort_25_25, 1) = ((MR_Box) (STATE_VARIABLE_ATsort_0_4));
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Xs_12;
      next_value_of_STATE_VARIABLE_Vis_0_3 = STATE_VARIABLE_Vis_22_22;
      next_value_of_STATE_VARIABLE_ATsort_0_4 = STATE_VARIABLE_ATsort_25_25;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Vis_0_3 = next_value_of_STATE_VARIABLE_Vis_0_3;
      STATE_VARIABLE_ATsort_0_4 = next_value_of_STATE_VARIABLE_ATsort_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_50_53_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
  MR_Word Var_14,
  MR_Word Var_15,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Box Var_8;
    MR_Word * AddrSCCcallarg9_16;

    mercury__digraph__lookup_vertex_3_p_0(Var_14, Var_15, Var_6, &Var_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = Var_8;
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrSCCcallarg9_16 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__3_3, (MR_Integer) 1)));
    mercury__digraph__f_76_67_77_67_112_114_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_50_53_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_95_49_3_p_in__list_0(Var_14, Var_15, Var_7, AddrSCCcallarg9_16);
  }
}

static void MR_CALL 
mercury__digraph__f_76_67_77_67_112_114_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_50_53_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_95_49_3_p_in__list_0(
  MR_Word Var_14,
  MR_Word Var_15,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_17 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Var_8;
      MR_Word * AddrSCCcallarg9_16;
      MR_Word HeadVar__3_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_17;

      mercury__digraph__lookup_vertex_3_p_0(Var_14, Var_15, Var_6, &Var_8);
      {
        HeadVar__3_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_18, 0) = Var_8;
        MR_hl_field(MR_mktag(1), HeadVar__3_18, 1) = NULL;
      }
      AddrSCCcallarg9_16 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_18, (MR_Integer) 1)));
      *AddrOfHeadVar__3_17 = HeadVar__3_18;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_17 = AddrSCCcallarg9_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_17 = next_value_of_AddrOfHeadVar__3_17;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__digraph__return_vertices_in_to_from_order_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word G_3,
  MR_Word * ToFromTsort_4)
{
  {
    MR_bool succeeded;
    MR_Word FromToTsort_5;

    succeeded = mercury__digraph__return_vertices_in_from_to_order_2_p_0(TypeInfo_for_T_6, G_3, &FromToTsort_5);
    if (succeeded)
    {
      mercury__list__reverse_2_p_0(TypeInfo_for_T_6, FromToTsort_5, ToFromTsort_4);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__digraph__tsort_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word G_3,
  MR_Word * FromToTsort_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__digraph__return_vertices_in_from_to_order_2_p_0(TypeInfo_for_T_5, G_3, FromToTsort_4);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__digraph__return_vertices_in_from_to_order_2_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word G_3,
  MR_Word * FromToTsort_4)
{
  {
    MR_bool succeeded;
    MR_Word Tsort0_5;

    mercury__digraph__dfsrev_2_p_0(TypeInfo_for_T_8, G_3, &Tsort0_5);
    succeeded = mercury__digraph__check_tsort_3_p_0(TypeInfo_for_T_8, G_3, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), Tsort0_5);
    if (succeeded)
    {
      *FromToTsort_4 = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_51_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_2_f_in__list_0(TypeInfo_for_T_8, G_3, Tsort0_5);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__digraph__check_tsort_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word G_1,
  MR_Word Vis0_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_15_15;
      MR_Word TypeClassInfo_for_enum_17;
      MR_Word X_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Xs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Vis_10;
      MR_Word SuccXs_11;
      MR_Word Var_21 = (MR_Word) (Vis0_2);
      MR_Integer Var_23;
      MR_Word Var_24;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
      MR_Box conv1_Var_23;
      MR_Word next_value_of_Vis0_2;
      MR_Word next_value_of_HeadVar__3_3;

      {
        TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_15_15, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
        MR_hl_field(MR_mktag(0), TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_13));
      }
      {
        TypeClassInfo_for_enum_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_17, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_17, 1) = ((MR_Box) (TypeInfo_for_T_13));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_17, 2) = ((MR_Box) (TypeInfo_15_15));
      }
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_17, (MR_Integer) 0)), (MR_Integer) 5))));
      conv1_Var_23 = func_0(((MR_Box) (TypeClassInfo_for_enum_17)), ((MR_Box) (X_8)));
      Var_23 = ((MR_Integer) (conv1_Var_23));
      mercury__sparse_bitset__insert_loop_3_p_0(Var_23, Var_21, &Var_24);
      Vis_10 = (MR_Word) (Var_24);
      mercury__digraph__lookup_key_set_from_3_p_0(TypeInfo_for_T_13, G_1, X_8, &SuccXs_11);
      Var_28 = (MR_Word) (Vis_10);
      Var_29 = (MR_Word) (SuccXs_11);
      Var_30 = mercury__sparse_bitset__intersect_loop_2_f_0(Var_28, Var_29);
      succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_Vis0_2 = Vis_10;
        next_value_of_HeadVar__3_3 = Xs_9;
        Vis0_2 = next_value_of_Vis0_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__digraph__reduced_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word G_3,
  MR_Word * R_4)
{
  {
    MR_Word Var_5;

    mercury__digraph__reduced_3_p_0(TypeInfo_for_T_6, G_3, R_4, &Var_5);
  }
}

MR_Word MR_CALL 
mercury__digraph__reduced_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word G_3)
{
  {
    MR_Word R_4;
    MR_Word Var_8;

    mercury__digraph__reduced_3_p_0(TypeInfo_for_T_5, G_3, &R_4, &Var_8);
    return R_4;
  }
}

void MR_CALL 
mercury__digraph__reduced_3_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word G_4,
  MR_Word * STATE_VARIABLE_R_10,
  MR_Word * STATE_VARIABLE_CliqMap_11)
{
  {
    MR_Word Cliques_7;
    MR_Word CliqList_8;
    MR_Word AL_9;
    MR_Word STATE_VARIABLE_R_15_15;

    mercury__digraph__cliques_2_p_0(TypeInfo_for_T_17, G_4, &Cliques_7);
    CliqList_8 = (MR_Word) (Cliques_7);
    mercury__digraph__make_clique_map_6_p_0(TypeInfo_for_T_17, G_4, CliqList_8, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_CliqMap_11, (MR_Word) (&mercury__digraph_scalar_common_2[2]), &STATE_VARIABLE_R_15_15);
    mercury__digraph__to_key_assoc_list_2_p_0(TypeInfo_for_T_17, G_4, &AL_9);
    mercury__digraph__make_reduced_graph_4_p_0(TypeInfo_for_T_17, *STATE_VARIABLE_CliqMap_11, AL_9, STATE_VARIABLE_R_15_15, STATE_VARIABLE_R_10);
  }
}

void MR_CALL 
mercury__digraph__make_reduced_graph_4_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word CliqMap_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_R_0_3,
  MR_Word * STATE_VARIABLE_R_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_R_4 = STATE_VARIABLE_R_0_3;
    else
    {
      MR_Word TypeInfo_23_23;
      MR_Word TypeInfo_25_25;
      MR_Word TypeInfo_26_26;
      MR_Word X_10;
      MR_Word Y_11;
      MR_Word Edges_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word CliqX_14;
      MR_Word CliqY_15;
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_R_19_19;
      MR_Box conv0_CliqX_14;
      MR_Box conv1_CliqY_15;
      MR_Integer CastX_31;
      MR_Integer CastY_32;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_R_0_3;

      X_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0))));
      Y_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1))));
      {
        TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_23_23, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
        MR_hl_field(MR_mktag(0), TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_T_21));
      }
      {
        TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_25_25, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
        MR_hl_field(MR_mktag(0), TypeInfo_25_25, 1) = ((MR_Box) (TypeInfo_for_T_21));
      }
      {
        TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_26_26, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
        MR_hl_field(MR_mktag(0), TypeInfo_26_26, 1) = ((MR_Box) (TypeInfo_25_25));
      }
      mercury__map__lookup_3_p_0(TypeInfo_23_23, TypeInfo_26_26, (MR_Word) (CliqMap_1), ((MR_Box) (X_10)), &conv0_CliqX_14);
      CliqX_14 = ((MR_Word) (conv0_CliqX_14));
      mercury__map__lookup_3_p_0(TypeInfo_23_23, TypeInfo_26_26, (MR_Word) (CliqMap_1), ((MR_Box) (Y_11)), &conv1_CliqY_15);
      CliqY_15 = ((MR_Word) (conv1_CliqY_15));
      CastX_31 = (MR_Integer) (CliqX_14);
      CastY_32 = (MR_Integer) (CliqY_15);
      succeeded = (CastX_31 == CastY_32);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Integer ArgX1_29 = (MR_Integer) (CliqX_14);
        MR_Integer ArgY1_30 = (MR_Integer) (CliqY_15);

        succeeded = (ArgX1_29 == ArgY1_30);
      }
      if (succeeded)
        STATE_VARIABLE_R_19_19 = STATE_VARIABLE_R_0_3;
      else
      {
        MR_Word conv2_STATE_VARIABLE_R_19_19;

        mercury__digraph__add_edge_4_p_0(TypeInfo_25_25, (MR_Word) (CliqX_14), (MR_Word) (CliqY_15), (MR_Word) (STATE_VARIABLE_R_0_3), &conv2_STATE_VARIABLE_R_19_19);
        STATE_VARIABLE_R_19_19 = (MR_Word) (conv2_STATE_VARIABLE_R_19_19);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Edges_12;
      next_value_of_STATE_VARIABLE_R_0_3 = STATE_VARIABLE_R_19_19;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_R_0_3 = next_value_of_STATE_VARIABLE_R_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__digraph__make_clique_map_6_p_0(
  MR_Word TypeInfo_for_T_31,
  MR_Word G_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CliqMap_0_3,
  MR_Word * STATE_VARIABLE_CliqMap_4,
  MR_Word STATE_VARIABLE_R_0_5,
  MR_Word * STATE_VARIABLE_R_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_R_6 = STATE_VARIABLE_R_0_5;
      *STATE_VARIABLE_CliqMap_4 = STATE_VARIABLE_CliqMap_0_3;
    }
    else
    {
      MR_Word TypeInfo_37_37;
      MR_Word Clique_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Cliques_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Vertices_19;
      MR_Word CliqKey_20;
      MR_Word STATE_VARIABLE_R_26_26;
      MR_Word STATE_VARIABLE_CliqMap_28_28;
      MR_Word Var_47 = (MR_Word) (Clique_15);
      MR_Word Var_48;
      MR_Word Var_60;
      MR_Integer Var_63;
      MR_Word conv1_CliqKey_20;
      MR_Word conv0_STATE_VARIABLE_R_26_26;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_CliqMap_0_3;
      MR_Word next_value_of_STATE_VARIABLE_R_0_5;

      Var_48 = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_51_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_2_f_in__list_0(TypeInfo_for_T_31, G_1, Var_47);
      mercury__list__length_acc_3_p_0(TypeInfo_for_T_31, Var_48, (MR_Integer) 0, &Var_63);
      mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_31, Var_63, Var_48, &Var_60);
      Vertices_19 = (MR_Word) (Var_60);
      {
        TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_37_37, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
        MR_hl_field(MR_mktag(0), TypeInfo_37_37, 1) = ((MR_Box) (TypeInfo_for_T_31));
      }
      mercury__digraph__add_vertex_4_p_0(TypeInfo_37_37, ((MR_Box) (Vertices_19)), &conv1_CliqKey_20, (MR_Word) (STATE_VARIABLE_R_0_5), &conv0_STATE_VARIABLE_R_26_26);
      CliqKey_20 = (MR_Word) (conv1_CliqKey_20);
      STATE_VARIABLE_R_26_26 = (MR_Word) (conv0_STATE_VARIABLE_R_26_26);
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__set_0(TypeInfo_for_T_31, CliqKey_20, Clique_15, STATE_VARIABLE_CliqMap_0_3, &STATE_VARIABLE_CliqMap_28_28);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Cliques_16;
      next_value_of_STATE_VARIABLE_CliqMap_0_3 = STATE_VARIABLE_CliqMap_28_28;
      next_value_of_STATE_VARIABLE_R_0_5 = STATE_VARIABLE_R_26_26;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_CliqMap_0_3 = next_value_of_STATE_VARIABLE_CliqMap_0_3;
      STATE_VARIABLE_R_0_5 = next_value_of_STATE_VARIABLE_R_0_5;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_51_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_2_f_in__list_0(
  MR_Word Var_14,
  MR_Word Var_15,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Var_8;
      MR_Word * AddrSCCcallarg9_19;

      mercury__digraph__lookup_vertex_3_p_0(Var_14, Var_15, Var_6, &Var_8);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = Var_8;
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = NULL;
      }
      AddrSCCcallarg9_19 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      mercury__digraph__f_76_67_77_67_102_110_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_51_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_95_49_3_p_in__list_0(Var_14, Var_15, Var_7, AddrSCCcallarg9_19);
    }
    return HeadVar__3_3;
  }
}

static void MR_CALL 
mercury__digraph__f_76_67_77_67_102_110_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_51_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_95_49_3_p_in__list_0(
  MR_Word Var_14,
  MR_Word Var_15,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_20)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_20 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Var_8;
      MR_Word * AddrSCCcallarg9_19;
      MR_Word HeadVar__3_21;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_20;

      mercury__digraph__lookup_vertex_3_p_0(Var_14, Var_15, Var_6, &Var_8);
      {
        HeadVar__3_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_21, 0) = Var_8;
        MR_hl_field(MR_mktag(1), HeadVar__3_21, 1) = NULL;
      }
      AddrSCCcallarg9_19 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_21, (MR_Integer) 1)));
      *AddrOfHeadVar__3_20 = HeadVar__3_21;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_20 = AddrSCCcallarg9_19;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_20 = next_value_of_AddrOfHeadVar__3_20;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__set_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word HeadVar__2_6,
  MR_Word HeadVar__3_7,
  MR_Word * HeadVar__4_8)
{
  {
    MR_Word Var_46 = (MR_Word) (HeadVar__2_6);

    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(Var_22, Var_23, Var_46, HeadVar__3_7, HeadVar__4_8);
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
  MR_Word Var_27,
  MR_Word Var_28,
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
      MR_Word TypeInfo_13_36;
      MR_Word TypeInfo_15_38;
      MR_Word TypeInfo_16_39;
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_13;
      MR_Word conv0_Var_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      {
        TypeInfo_13_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_13_36, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
        MR_hl_field(MR_mktag(0), TypeInfo_13_36, 1) = ((MR_Box) (Var_27));
      }
      {
        TypeInfo_15_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_15_38, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
        MR_hl_field(MR_mktag(0), TypeInfo_15_38, 1) = ((MR_Box) (Var_27));
      }
      {
        TypeInfo_16_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_16_39, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
        MR_hl_field(MR_mktag(0), TypeInfo_16_39, 1) = ((MR_Box) (TypeInfo_15_38));
      }
      mercury__tree234__set_4_p_0(TypeInfo_13_36, TypeInfo_16_39, ((MR_Box) (Var_9)), ((MR_Box) (Var_28)), (MR_Word) (HeadVar__3_3), &conv0_Var_13);
      Var_13 = (MR_Word) (conv0_Var_13);
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

MR_Word MR_CALL 
mercury__digraph__cliques_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word G_3)
{
  {
    MR_Word Cliques_4;

    mercury__digraph__cliques_2_p_0(TypeInfo_for_T_5, G_3, &Cliques_4);
    return Cliques_4;
  }
}

void MR_CALL 
mercury__digraph__cliques_2_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word G_3,
  MR_Word * Cliques_4)
{
  {
    MR_Word DfsRev_5;
    MR_Word GInv_6;
    MR_Integer Next_16;
    MR_Word VMap_17;
    MR_Word Fwd_18;
    MR_Word Bwd_19;

    mercury__digraph__dfsrev_2_p_0(TypeInfo_for_T_9, G_3, &DfsRev_5);
    Next_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 0))));
    VMap_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 1))));
    Fwd_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 2))));
    Bwd_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 3))));
    {
      GInv_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), GInv_6, 0) = ((MR_Box) (Next_16));
      MR_hl_field(MR_mktag(0), GInv_6, 1) = ((MR_Box) (VMap_17));
      MR_hl_field(MR_mktag(0), GInv_6, 2) = ((MR_Box) (Bwd_19));
      MR_hl_field(MR_mktag(0), GInv_6, 3) = ((MR_Box) (Fwd_18));
    }
    mercury__digraph__cliques_2_5_p_0(TypeInfo_for_T_9, DfsRev_5, GInv_6, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), Cliques_4);
  }
}

void MR_CALL 
mercury__digraph__cliques_2_5_p_0(
  MR_Word TypeInfo_for_T_26,
  MR_Word HeadVar__1_1,
  MR_Word GInv_2,
  MR_Word STATE_VARIABLE_Visited_0_3,
  MR_Word STATE_VARIABLE_Cliques_0_4,
  MR_Word * STATE_VARIABLE_Cliques_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Cliques_5 = STATE_VARIABLE_Cliques_0_4;
    else
    {
      MR_Word TypeInfo_28_28;
      MR_Word TypeInfo_30_30;
      MR_Word X_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Xs0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word CliqueList_16;
      MR_Word Clique_17;
      MR_Word Xs_18;
      MR_Word STATE_VARIABLE_Visited_22_22;
      MR_Word STATE_VARIABLE_Cliques_24_24;
      MR_Word Var_34;
      MR_Integer Var_37;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word conv0_Var_34;
      MR_Word conv1_Var_48;
      MR_Word conv2_Xs_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Visited_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Cliques_0_4;

      mercury__digraph__dfs_2_6_p_0(TypeInfo_for_T_26, GInv_2, X_11, STATE_VARIABLE_Visited_0_3, &STATE_VARIABLE_Visited_22_22, (MR_Word) ((MR_Unsigned) 0U), &CliqueList_16);
      {
        TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_28_28, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
        MR_hl_field(MR_mktag(0), TypeInfo_28_28, 1) = ((MR_Box) (TypeInfo_for_T_26));
      }
      mercury__list__length_acc_3_p_0(TypeInfo_28_28, (MR_Word) (CliqueList_16), (MR_Integer) 0, &Var_37);
      mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_28_28, Var_37, (MR_Word) (CliqueList_16), &conv0_Var_34);
      Var_34 = (MR_Word) (conv0_Var_34);
      Clique_17 = (MR_Word) (Var_34);
      {
        TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_30_30, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
        MR_hl_field(MR_mktag(0), TypeInfo_30_30, 1) = ((MR_Box) (TypeInfo_28_28));
      }
      Var_47 = (MR_Word) (STATE_VARIABLE_Cliques_0_4);
      mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_30_30, (MR_Word) (Var_47), ((MR_Box) (Clique_17)), &conv1_Var_48);
      Var_48 = (MR_Word) (conv1_Var_48);
      STATE_VARIABLE_Cliques_24_24 = (MR_Word) (Var_48);
      mercury__list__delete_elems_3_p_0(TypeInfo_28_28, (MR_Word) (Xs0_12), (MR_Word) (CliqueList_16), &conv2_Xs_18);
      Xs_18 = (MR_Word) (conv2_Xs_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Xs_18;
      next_value_of_STATE_VARIABLE_Visited_0_3 = STATE_VARIABLE_Visited_22_22;
      next_value_of_STATE_VARIABLE_Cliques_0_4 = STATE_VARIABLE_Cliques_24_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Visited_0_3 = next_value_of_STATE_VARIABLE_Visited_0_3;
      STATE_VARIABLE_Cliques_0_4 = next_value_of_STATE_VARIABLE_Cliques_0_4;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__digraph__components_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word G_3)
{
  {
    MR_Word Components_4;

    mercury__digraph__components_2_p_0(TypeInfo_for_T_5, G_3, &Components_4);
    return Components_4;
  }
}

void MR_CALL 
mercury__digraph__components_2_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word G_3,
  MR_Word * Components_4)
{
  {
    MR_Word TypeInfo_12_12;
    MR_Word TypeClassInfo_for_enum_14;
    MR_Word Keys_5;
    MR_Word KeySet_6;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 1))));
    MR_Word Var_27;
    MR_Word Var_37;
    MR_Word conv0_Keys_5;

    {
      TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 1) = ((MR_Box) (TypeInfo_for_T_10));
    }
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 1))));
    mercury__tree234__keys_acc_3_p_0(TypeInfo_12_12, TypeInfo_for_T_10, (MR_Word) (Var_27), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_Keys_5);
    Keys_5 = (MR_Word) (conv0_Keys_5);
    {
      TypeClassInfo_for_enum_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_14, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_14, 1) = ((MR_Box) (TypeInfo_for_T_10));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_14, 2) = ((MR_Box) (TypeInfo_12_12));
    }
    Var_37 = mercury__sparse_bitset__list_to_set_passes_2_f_0(TypeClassInfo_for_enum_14, (MR_Word) (Keys_5), (MR_Word) ((MR_Unsigned) 0U));
    KeySet_6 = (MR_Word) (Var_37);
    mercury__digraph__components_2_4_p_0(TypeInfo_for_T_10, G_3, KeySet_6, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), Components_4);
  }
}

static void MR_CALL 
mercury__digraph__components_2_4_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word G_5,
  MR_Word Xs0_6,
  MR_Word STATE_VARIABLE_Components_0_14,
  MR_Word * STATE_VARIABLE_Components_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeInfo_21_21;
    MR_Word TypeClassInfo_for_enum_23;
    MR_Word X_8;
    MR_Word Xs1_9;
    MR_Box conv1_X_8;
    MR_Word conv0_Xs1_9;

    // setup for model_det tailcalls optimized into a loop
    ;
    {
      TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_19));
    }
    {
      TypeClassInfo_for_enum_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_23, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_23, 1) = ((MR_Box) (TypeInfo_for_T_19));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_23, 2) = ((MR_Box) (TypeInfo_21_21));
    }
    succeeded = mercury__sparse_bitset__remove_least_3_p_0(TypeClassInfo_for_enum_23, &conv1_X_8, (MR_Word) (Xs0_6), &conv0_Xs1_9);
    if (succeeded)
    {
      X_8 = ((MR_Word) (conv1_X_8));
      Xs1_9 = (MR_Word) (conv0_Xs1_9);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeInfo_29_29;
      MR_Word Keys0_11;
      MR_Word Comp_12;
      MR_Word Xs2_13;
      MR_Word Var_16;
      MR_Word STATE_VARIABLE_Components_17_17;
      MR_Integer Var_45;
      MR_Word Var_46;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_23, (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv3_Var_45;
      MR_Word conv4_Var_16;
      MR_Word conv5_Var_52;
      MR_Word next_value_of_Xs0_6;
      MR_Word next_value_of_STATE_VARIABLE_Components_0_14;

      conv3_Var_45 = func_2(((MR_Box) (TypeClassInfo_for_enum_23)), ((MR_Box) (X_8)));
      Var_45 = ((MR_Integer) (conv3_Var_45));
      mercury__sparse_bitset__insert_loop_3_p_0(Var_45, (MR_Word) ((MR_Word) (((MR_Box) ((MR_Unsigned) 0U)))), &Var_46);
      Keys0_11 = (MR_Word) (Var_46);
      mercury__digraph__reachable_from_4_p_0(TypeInfo_for_T_19, G_5, Keys0_11, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &Comp_12);
      conv4_Var_16 = mercury__sparse_bitset__to_set_1_f_0(TypeClassInfo_for_enum_23, (MR_Word) (Comp_12));
      Var_16 = (MR_Word) (conv4_Var_16);
      {
        TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_29_29, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
        MR_hl_field(MR_mktag(0), TypeInfo_29_29, 1) = ((MR_Box) (TypeInfo_21_21));
      }
      Var_51 = (MR_Word) (STATE_VARIABLE_Components_0_14);
      mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_29_29, (MR_Word) (Var_51), ((MR_Box) (Var_16)), &conv5_Var_52);
      Var_52 = (MR_Word) (conv5_Var_52);
      STATE_VARIABLE_Components_17_17 = (MR_Word) (Var_52);
      Var_56 = (MR_Word) (Xs1_9);
      Var_57 = (MR_Word) (Comp_12);
      Var_58 = mercury__sparse_bitset__difference_loop_2_f_0(Var_56, Var_57);
      Xs2_13 = (MR_Word) (Var_58);
      // direct tailcall eliminated
      ;
      next_value_of_Xs0_6 = Xs2_13;
      next_value_of_STATE_VARIABLE_Components_0_14 = STATE_VARIABLE_Components_17_17;
      Xs0_6 = next_value_of_Xs0_6;
      STATE_VARIABLE_Components_0_14 = next_value_of_STATE_VARIABLE_Components_0_14;
      continue;
    }
    else
      *STATE_VARIABLE_Components_15 = STATE_VARIABLE_Components_0_14;
    break;
  }
}

static void MR_CALL 
mercury__digraph__reachable_from_4_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word G_5,
  MR_Word Keys0_6,
  MR_Word STATE_VARIABLE_Comp_0_15,
  MR_Word * STATE_VARIABLE_Comp_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeClassInfo_for_enum_23;
    MR_Word X_8;
    MR_Word Keys1_9;
    MR_Word TypeInfo_21_21;
    MR_Box conv1_X_8;
    MR_Word conv0_Keys1_9;

    // setup for model_det tailcalls optimized into a loop
    ;
    {
      TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_19));
    }
    {
      TypeClassInfo_for_enum_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_23, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_23, 1) = ((MR_Box) (TypeInfo_for_T_19));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_23, 2) = ((MR_Box) (TypeInfo_21_21));
    }
    succeeded = mercury__sparse_bitset__remove_least_3_p_0(TypeClassInfo_for_enum_23, &conv1_X_8, (MR_Word) (Keys0_6), &conv0_Keys1_9);
    if (succeeded)
    {
      X_8 = ((MR_Word) (conv1_X_8));
      Keys1_9 = (MR_Word) (conv0_Keys1_9);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word FwdSet_10;
      MR_Word BwdSet_11;
      MR_Word Keys_14;
      MR_Word STATE_VARIABLE_Comp_17_17;
      MR_Word Var_31 = (MR_Word) (STATE_VARIABLE_Comp_0_15);
      MR_Integer Var_33;
      MR_Word Var_34;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_50;
      MR_Word Var_52;
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_23, (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv3_Var_33;
      MR_Word next_value_of_Keys0_6;
      MR_Word next_value_of_STATE_VARIABLE_Comp_0_15;

      conv3_Var_33 = func_2(((MR_Box) (TypeClassInfo_for_enum_23)), ((MR_Box) (X_8)));
      Var_33 = ((MR_Integer) (conv3_Var_33));
      mercury__sparse_bitset__insert_loop_3_p_0(Var_33, Var_31, &Var_34);
      STATE_VARIABLE_Comp_17_17 = (MR_Word) (Var_34);
      mercury__digraph__lookup_key_set_from_3_p_0(TypeInfo_for_T_19, G_5, X_8, &FwdSet_10);
      mercury__digraph__lookup_key_set_to_3_p_0(TypeInfo_for_T_19, G_5, X_8, &BwdSet_11);
      Var_38 = (MR_Word) (FwdSet_10);
      Var_39 = (MR_Word) (BwdSet_11);
      Var_40 = mercury__sparse_bitset__union_loop_2_f_0(Var_38, Var_39);
      Var_45 = (MR_Word) (STATE_VARIABLE_Comp_17_17);
      Var_46 = mercury__sparse_bitset__difference_loop_2_f_0(Var_40, Var_45);
      Var_50 = (MR_Word) (Keys1_9);
      Var_52 = mercury__sparse_bitset__union_loop_2_f_0(Var_50, Var_46);
      Keys_14 = (MR_Word) (Var_52);
      // direct tailcall eliminated
      ;
      next_value_of_Keys0_6 = Keys_14;
      next_value_of_STATE_VARIABLE_Comp_0_15 = STATE_VARIABLE_Comp_17_17;
      Keys0_6 = next_value_of_Keys0_6;
      STATE_VARIABLE_Comp_0_15 = next_value_of_STATE_VARIABLE_Comp_0_15;
      continue;
    }
    else
      *STATE_VARIABLE_Comp_16 = STATE_VARIABLE_Comp_0_15;
    break;
  }
}

MR_bool MR_CALL 
mercury__digraph__is_dag_1_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word G_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_11_23;
    MR_Word Keys_3;
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_2, (MR_Integer) 1))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1))));
    MR_Word conv0_Keys_3;
    MR_Word Var_4;

    {
      TypeInfo_11_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_11_23, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_11_23, 1) = ((MR_Box) (TypeInfo_for_T_8));
    }
    mercury__tree234__keys_acc_3_p_0(TypeInfo_11_23, TypeInfo_for_T_8, (MR_Word) (Var_26), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_Keys_3);
    Keys_3 = (MR_Word) (conv0_Keys_3);
    succeeded = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__list_0(TypeInfo_for_T_8, G_2, (MR_Word) ((MR_Unsigned) 0U), Keys_3, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &Var_4);
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__list_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = HeadVar__3_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      succeeded = mercury__digraph__is_dag_2_5_p_0(Var_22, Var_23, Var_24, Var_9, HeadVar__3_3, &Var_13);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Var_10;
        next_value_of_HeadVar__3_3 = Var_13;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_54_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_33,
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Word TypeClassInfo_for_enum_22,
  MR_Integer HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_9 == (MR_Unsigned) 0U);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *HeadVar__6_12 = HeadVar__5_11;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (HeadVar__4_10 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word Var_13;
        MR_Box conv0_Var_13;

        conv0_Var_13 = mercury__enum__det_from_int_1_f_0(TypeClassInfo_for_enum_22, HeadVar__2_8);
        Var_13 = ((MR_Word) (conv0_Var_13));
        succeeded = mercury__digraph__is_dag_2_5_p_0(Var_33, Var_34, Var_35, Var_13, HeadVar__5_11, HeadVar__6_12);
      }
      else
      {
        MR_Integer Var_14 = (HeadVar__4_10 >> 1);
        MR_Unsigned Var_16;
        MR_Unsigned Var_17;
        MR_Unsigned Var_18;
        MR_Unsigned Var_19;
        MR_Word Var_20;
        MR_Integer Var_21;
        MR_Unsigned Var_38;
        MR_Unsigned Var_39 = ~((MR_Unsigned) 0U);
        MR_Integer next_value_of_HeadVar__2_8;
        MR_Unsigned next_value_of_HeadVar__3_9;
        MR_Integer next_value_of_HeadVar__4_10;
        MR_Word next_value_of_HeadVar__5_11;

        Var_38 = (Var_39 << Var_14);
        Var_16 = ~(Var_38);
        Var_17 = (Var_16 & HeadVar__3_9);
        Var_19 = (HeadVar__3_9 >> Var_14);
        Var_18 = (Var_16 & Var_19);
        succeeded = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_54_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_6_p_in__sparse_bitset_0(Var_33, Var_34, Var_35, TypeClassInfo_for_enum_22, HeadVar__2_8, Var_17, Var_14, HeadVar__5_11, &Var_20);
        if (succeeded)
        {
          Var_21 = (MR_Integer) ((MR_Unsigned) HeadVar__2_8 + (MR_Unsigned) Var_14);
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
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__digraph__is_dag_2_5_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word G_6,
  MR_Word Ancestors_7,
  MR_Word X_8,
  MR_Word STATE_VARIABLE_Visited_0_11,
  MR_Word * STATE_VARIABLE_Visited_12)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_19_19;

    {
      TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_19_19, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_19_19, 1) = ((MR_Box) (TypeInfo_for_T_17));
    }
    succeeded = mercury__list__member_2_p_0(TypeInfo_19_19, ((MR_Box) (X_8)), (MR_Word) (Ancestors_7));
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
      MR_Word TypeInfo_21_21;
      MR_Word TypeClassInfo_for_enum_23;
      MR_Word Var_34 = (MR_Word) (STATE_VARIABLE_Visited_0_11);
      MR_Integer Var_35;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
      MR_Box conv1_Var_35;

      {
        TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_21_21, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
        MR_hl_field(MR_mktag(0), TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_17));
      }
      {
        TypeClassInfo_for_enum_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_23, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_23, 1) = ((MR_Box) (TypeInfo_for_T_17));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_23, 2) = ((MR_Box) (TypeInfo_21_21));
      }
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_23, (MR_Integer) 0)), (MR_Integer) 5))));
      conv1_Var_35 = func_0(((MR_Box) (TypeClassInfo_for_enum_23)), ((MR_Box) (X_8)));
      Var_35 = ((MR_Integer) (conv1_Var_35));
      succeeded = mercury__sparse_bitset__contains_search_nodes_2_p_0(Var_34, Var_35);
      if (succeeded)
      {
        *STATE_VARIABLE_Visited_12 = STATE_VARIABLE_Visited_0_11;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word TypeInfo_25_25;
        MR_Word TypeClassInfo_for_enum_27;
        MR_Word SuccXs_10;
        MR_Word STATE_VARIABLE_Visited_13_13;
        MR_Word Var_16;
        MR_Word Var_42;
        MR_Integer Var_44;
        MR_Word Var_45;
        MR_Word Var_49;
        MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
        MR_Box conv3_Var_44;

        mercury__digraph__lookup_key_set_from_3_p_0(TypeInfo_for_T_17, G_6, X_8, &SuccXs_10);
        Var_42 = (MR_Word) (STATE_VARIABLE_Visited_0_11);
        {
          TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_25_25, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
          MR_hl_field(MR_mktag(0), TypeInfo_25_25, 1) = ((MR_Box) (TypeInfo_for_T_17));
        }
        {
          TypeClassInfo_for_enum_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_27, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_27, 1) = ((MR_Box) (TypeInfo_for_T_17));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_27, 2) = ((MR_Box) (TypeInfo_25_25));
        }
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_27, (MR_Integer) 0)), (MR_Integer) 5))));
        conv3_Var_44 = func_2(((MR_Box) (TypeClassInfo_for_enum_27)), ((MR_Box) (X_8)));
        Var_44 = ((MR_Integer) (conv3_Var_44));
        mercury__sparse_bitset__insert_loop_3_p_0(Var_44, Var_42, &Var_45);
        Var_49 = (MR_Word) (SuccXs_10);
        STATE_VARIABLE_Visited_13_13 = (MR_Word) (Var_45);
        {
          Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (X_8));
          MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Ancestors_7));
        }
        succeeded = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(TypeInfo_for_T_17, G_6, Var_16, TypeClassInfo_for_enum_27, Var_49, STATE_VARIABLE_Visited_13_13, STATE_VARIABLE_Visited_12);
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Word TypeClassInfo_for_enum_19,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = HeadVar__3_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
      MR_Unsigned Var_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
      MR_Integer Var_17;
      MR_Word Var_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Var_17  = Bits;
}
      succeeded = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_54_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_6_p_in__sparse_bitset_0(Var_30, Var_31, Var_32, TypeClassInfo_for_enum_19, Var_13, Var_14, Var_17, HeadVar__3_3, &Var_18);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Var_10;
        next_value_of_HeadVar__3_3 = Var_18;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_Word MR_CALL 
mercury__digraph__compose_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word G1_4,
  MR_Word G2_5)
{
  {
    MR_Word Comp_6;

    mercury__digraph__compose_3_p_0(TypeInfo_for_T_7, G1_4, G2_5, &Comp_6);
    return Comp_6;
  }
}

void MR_CALL 
mercury__digraph__compose_3_p_0(
  MR_Word TypeInfo_for_T_38,
  MR_Word G1_4,
  MR_Word G2_5,
  MR_Word * STATE_VARIABLE_Comp_20)
{
  {
    MR_Word TypeInfo_40_40;
    MR_Word TypeClassInfo_for_enum_57;
    MR_Word G1Vs_7;
    MR_Word G2Vs_8;
    MR_Word Matches_9;
    MR_Word AL_10;
    MR_Word Needed1_16;
    MR_Word Needed2_17;
    MR_Word KMap1_18;
    MR_Word KMap2_19;
    MR_Word Var_25;
    MR_Word STATE_VARIABLE_Comp_30_30;
    MR_Word Var_31;
    MR_Word STATE_VARIABLE_Comp_33_33;
    MR_Word Var_34;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;

    mercury__digraph__vertices_2_p_0(TypeInfo_for_T_38, G1_4, &G1Vs_7);
    mercury__digraph__vertices_2_p_0(TypeInfo_for_T_38, G2_5, &G2Vs_8);
    Var_94 = (MR_Word) (G1Vs_7);
    Var_95 = (MR_Word) (G2Vs_8);
    mercury__set_ordlist__intersect_loop_3_p_0(TypeInfo_for_T_38, Var_94, Var_95, &Var_96);
    Matches_9 = (MR_Word) (Var_96);
    {
      TypeInfo_40_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_40_40, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_40_40, 1) = ((MR_Box) (TypeInfo_for_T_38));
    }
    Var_25 = mercury__set__to_sorted_list_1_f_0(TypeInfo_for_T_38, Matches_9);
    AL_10 = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_2_f_in__list_0(TypeInfo_for_T_38, G1_4, G2_5, Var_25);
    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_53_93_95_48_6_p_in__list_0(TypeInfo_for_T_38, AL_10, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &Needed1_16, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &Needed2_17);
    Var_31 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_40_40);
    {
      TypeClassInfo_for_enum_57 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_57, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_57, 1) = ((MR_Box) (TypeInfo_for_T_38));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_57, 2) = ((MR_Box) (TypeInfo_40_40));
    }
    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(TypeInfo_for_T_38, G1_4, TypeClassInfo_for_enum_57, Needed1_16, (MR_Word) (&mercury__digraph_scalar_common_2[1]), &STATE_VARIABLE_Comp_30_30, Var_31, &KMap1_18);
    Var_34 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_40_40);
    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(TypeInfo_for_T_38, G2_5, TypeClassInfo_for_enum_57, Needed2_17, STATE_VARIABLE_Comp_30_30, &STATE_VARIABLE_Comp_33_33, Var_34, &KMap2_19);
    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_4_p_in__list_0(TypeInfo_for_T_38, KMap1_18, KMap2_19, AL_10, STATE_VARIABLE_Comp_33_33, STATE_VARIABLE_Comp_20);
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_4_p_in__list_0(
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word Var_31,
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
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      mercury__digraph__add_composition_edges_5_p_0(Var_29, Var_30, Var_31, Var_9, HeadVar__3_3, &Var_13);
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

static void MR_CALL 
mercury__digraph__add_composition_edges_5_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word KMap1_6,
  MR_Word KMap2_7,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Comp_0_11,
  MR_Word * STATE_VARIABLE_Comp_12)
{
  {
    MR_Word TypeInfo_14_49;
    MR_Word TypeClassInfo_for_enum_51;
    MR_Word Xs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Ys_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_35;
    MR_Word Var_58;

    {
      TypeInfo_14_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_14_49, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_14_49, 1) = ((MR_Box) (TypeInfo_for_T_16));
    }
    {
      TypeClassInfo_for_enum_51 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_51, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_51, 1) = ((MR_Box) (TypeInfo_for_T_16));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_51, 2) = ((MR_Box) (TypeInfo_14_49));
    }
    Var_35 = (MR_Word) (Xs_8);
    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(TypeInfo_for_T_16, KMap1_6, TypeClassInfo_for_enum_51, Var_35, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &Var_13);
    Var_58 = (MR_Word) (Ys_9);
    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(TypeInfo_for_T_16, KMap2_7, TypeClassInfo_for_enum_51, Var_58, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &Var_14);
    mercury__digraph__add_cartesian_product_4_p_0(TypeInfo_for_T_16, Var_13, Var_14, STATE_VARIABLE_Comp_0_11, STATE_VARIABLE_Comp_12);
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word TypeClassInfo_for_enum_19,
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
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
      MR_Unsigned Var_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
      MR_Integer Var_17;
      MR_Word Var_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Var_17  = Bits;
}
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_54_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_6_p_in__sparse_bitset_0(Var_30, Var_31, TypeClassInfo_for_enum_19, Var_13, Var_14, Var_17, HeadVar__3_3, &Var_18);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_54_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_33,
  MR_Word Var_34,
  MR_Word TypeClassInfo_for_enum_22,
  MR_Integer HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Integer HeadVar__4_10,
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
      succeeded = (HeadVar__4_10 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word Var_13;
        MR_Box conv0_Var_13;

        conv0_Var_13 = mercury__enum__det_from_int_1_f_0(TypeClassInfo_for_enum_22, HeadVar__2_8);
        Var_13 = ((MR_Word) (conv0_Var_13));
        mercury__digraph__accumulate_digraph_key_set_4_p_0(Var_33, Var_34, Var_13, HeadVar__5_11, HeadVar__6_12);
      }
      else
      {
        MR_Integer Var_14 = (HeadVar__4_10 >> 1);
        MR_Unsigned Var_16;
        MR_Unsigned Var_17;
        MR_Unsigned Var_18;
        MR_Unsigned Var_19;
        MR_Word Var_20;
        MR_Integer Var_21;
        MR_Unsigned Var_37;
        MR_Unsigned Var_38 = ~((MR_Unsigned) 0U);
        MR_Integer next_value_of_HeadVar__2_8;
        MR_Unsigned next_value_of_HeadVar__3_9;
        MR_Integer next_value_of_HeadVar__4_10;
        MR_Word next_value_of_HeadVar__5_11;

        Var_37 = (Var_38 << Var_14);
        Var_16 = ~(Var_37);
        Var_17 = (Var_16 & HeadVar__3_9);
        Var_19 = (HeadVar__3_9 >> Var_14);
        Var_18 = (Var_16 & Var_19);
        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_54_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_6_p_in__sparse_bitset_0(Var_33, Var_34, TypeClassInfo_for_enum_22, HeadVar__2_8, Var_17, Var_14, HeadVar__5_11, &Var_20);
        Var_21 = (MR_Integer) ((MR_Unsigned) HeadVar__2_8 + (MR_Unsigned) Var_14);
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
mercury__digraph__accumulate_digraph_key_set_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word KMap_5,
  MR_Word X_6,
  MR_Word STATE_VARIABLE_Set_0_10,
  MR_Word * STATE_VARIABLE_Set_11)
{
  {
    MR_Word TypeInfo_16_16;
    MR_Word TypeClassInfo_for_enum_18;
    MR_Integer XI_8 = (MR_Integer) (X_6);
    MR_Word Y_9;
    MR_Word Var_25;
    MR_Integer Var_27;
    MR_Word Var_28;
    MR_Box conv0_Y_9;
    MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
    MR_Box conv2_Var_27;

    {
      TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_16_16, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_for_T_13));
    }
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_16_16, (MR_Word) (KMap_5), XI_8, &conv0_Y_9);
    Y_9 = ((MR_Word) (conv0_Y_9));
    {
      TypeClassInfo_for_enum_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_18, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_18, 1) = ((MR_Box) (TypeInfo_for_T_13));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_18, 2) = ((MR_Box) (TypeInfo_16_16));
    }
    Var_25 = (MR_Word) (STATE_VARIABLE_Set_0_10);
    func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_18, (MR_Integer) 0)), (MR_Integer) 5))));
    conv2_Var_27 = func_1(((MR_Box) (TypeClassInfo_for_enum_18)), ((MR_Box) (Y_9)));
    Var_27 = ((MR_Integer) (conv2_Var_27));
    mercury__sparse_bitset__insert_loop_3_p_0(Var_27, Var_25, &Var_28);
    *STATE_VARIABLE_Set_11 = (MR_Word) (Var_28);
  }
}

static void MR_CALL 
mercury__digraph__add_cartesian_product_4_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word KeySet1_5,
  MR_Word KeySet2_6,
  MR_Word STATE_VARIABLE_Rtc_0_9,
  MR_Word * STATE_VARIABLE_Rtc_10)
{
  {
    MR_Word TypeInfo_34_34;
    MR_Word TypeClassInfo_for_enum_36;
    MR_Word Var_42;

    {
      TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_34_34, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_34_34, 1) = ((MR_Box) (TypeInfo_for_T_23));
    }
    {
      TypeClassInfo_for_enum_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_36, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_36, 1) = ((MR_Box) (TypeInfo_for_T_23));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_36, 2) = ((MR_Box) (TypeInfo_34_34));
    }
    Var_42 = (MR_Word) (KeySet1_5);
    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_52_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(TypeInfo_for_T_23, KeySet2_6, TypeClassInfo_for_enum_36, Var_42, STATE_VARIABLE_Rtc_0_9, STATE_VARIABLE_Rtc_10);
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_52_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word TypeClassInfo_for_enum_19,
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
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
      MR_Unsigned Var_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
      MR_Integer Var_17;
      MR_Word Var_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_52_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Var_17  = Bits;
}
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_54_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(Var_28, Var_29, TypeClassInfo_for_enum_19, Var_13, Var_14, Var_17, HeadVar__3_3, &Var_18);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_54_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Word TypeClassInfo_for_enum_22,
  MR_Integer HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Integer HeadVar__4_10,
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
      succeeded = (HeadVar__4_10 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word Var_13;
        MR_Box conv0_Var_13;

        conv0_Var_13 = mercury__enum__det_from_int_1_f_0(TypeClassInfo_for_enum_22, HeadVar__2_8);
        Var_13 = ((MR_Word) (conv0_Var_13));
        mercury__digraph__IntroducedFrom__pred__add_cartesian_product__1128__1_5_p_0(Var_31, Var_32, Var_13, HeadVar__5_11, HeadVar__6_12);
      }
      else
      {
        MR_Integer Var_14 = (HeadVar__4_10 >> 1);
        MR_Unsigned Var_16;
        MR_Unsigned Var_17;
        MR_Unsigned Var_18;
        MR_Unsigned Var_19;
        MR_Word Var_20;
        MR_Integer Var_21;
        MR_Unsigned Var_35;
        MR_Unsigned Var_36 = ~((MR_Unsigned) 0U);
        MR_Integer next_value_of_HeadVar__2_8;
        MR_Unsigned next_value_of_HeadVar__3_9;
        MR_Integer next_value_of_HeadVar__4_10;
        MR_Word next_value_of_HeadVar__5_11;

        Var_35 = (Var_36 << Var_14);
        Var_16 = ~(Var_35);
        Var_17 = (Var_16 & HeadVar__3_9);
        Var_19 = (HeadVar__3_9 >> Var_14);
        Var_18 = (Var_16 & Var_19);
        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_54_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(Var_31, Var_32, TypeClassInfo_for_enum_22, HeadVar__2_8, Var_17, Var_14, HeadVar__5_11, &Var_20);
        Var_21 = (MR_Integer) ((MR_Unsigned) HeadVar__2_8 + (MR_Unsigned) Var_14);
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
mercury__digraph__IntroducedFrom__pred__add_cartesian_product__1128__1_5_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word KeySet2_6,
  MR_Word LambdaHeadVar__1_13,
  MR_Word LambdaHeadVar__2_14,
  MR_Word * LambdaHeadVar__3_15)
{
  {
    MR_Word TypeInfo_28_28;
    MR_Word TypeClassInfo_for_enum_30;
    MR_Word Var_42;

    {
      TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_28_28, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_28_28, 1) = ((MR_Box) (TypeInfo_for_T_23));
    }
    {
      TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_30, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_30, 1) = ((MR_Box) (TypeInfo_for_T_23));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_30, 2) = ((MR_Box) (TypeInfo_28_28));
    }
    Var_42 = (MR_Word) (KeySet2_6);
    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_53_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(TypeInfo_for_T_23, LambdaHeadVar__1_13, TypeClassInfo_for_enum_30, Var_42, LambdaHeadVar__2_14, LambdaHeadVar__3_15);
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_53_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word TypeClassInfo_for_enum_19,
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
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
      MR_Unsigned Var_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
      MR_Integer Var_17;
      MR_Word Var_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_53_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Var_17  = Bits;
}
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_53_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(Var_28, Var_29, TypeClassInfo_for_enum_19, Var_13, Var_14, Var_17, HeadVar__3_3, &Var_18);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_53_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Word TypeClassInfo_for_enum_22,
  MR_Integer HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Integer HeadVar__4_10,
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
      succeeded = (HeadVar__4_10 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word Var_13;
        MR_Box conv0_Var_13;

        conv0_Var_13 = mercury__enum__det_from_int_1_f_0(TypeClassInfo_for_enum_22, HeadVar__2_8);
        Var_13 = ((MR_Word) (conv0_Var_13));
        mercury__digraph__add_edge_4_p_0(Var_31, Var_32, Var_13, HeadVar__5_11, HeadVar__6_12);
      }
      else
      {
        MR_Integer Var_14 = (HeadVar__4_10 >> 1);
        MR_Unsigned Var_16;
        MR_Unsigned Var_17;
        MR_Unsigned Var_18;
        MR_Unsigned Var_19;
        MR_Word Var_20;
        MR_Integer Var_21;
        MR_Unsigned Var_35;
        MR_Unsigned Var_36 = ~((MR_Unsigned) 0U);
        MR_Integer next_value_of_HeadVar__2_8;
        MR_Unsigned next_value_of_HeadVar__3_9;
        MR_Integer next_value_of_HeadVar__4_10;
        MR_Word next_value_of_HeadVar__5_11;

        Var_35 = (Var_36 << Var_14);
        Var_16 = ~(Var_35);
        Var_17 = (Var_16 & HeadVar__3_9);
        Var_19 = (HeadVar__3_9 >> Var_14);
        Var_18 = (Var_16 & Var_19);
        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_53_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(Var_31, Var_32, TypeClassInfo_for_enum_22, HeadVar__2_8, Var_17, Var_14, HeadVar__5_11, &Var_20);
        Var_21 = (MR_Integer) ((MR_Unsigned) HeadVar__2_8 + (MR_Unsigned) Var_14);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_53_93_95_48_6_p_in__list_0(
  MR_Word Var_43,
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
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__5_5;

      mercury__digraph__find_necessary_keys_5_p_0(Var_43, Var_13, HeadVar__3_3, &Var_19, HeadVar__5_5, &Var_20);
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

static void MR_CALL 
mercury__digraph__find_necessary_keys_5_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Needed1_0_10,
  MR_Word * STATE_VARIABLE_Needed1_11,
  MR_Word STATE_VARIABLE_Needed2_0_12,
  MR_Word * STATE_VARIABLE_Needed2_13)
{
  {
    MR_Word Xs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Ys_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_22 = (MR_Word) (Xs_6);
    MR_Word Var_23 = (MR_Word) (STATE_VARIABLE_Needed1_0_10);
    MR_Word Var_24;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;

    Var_24 = mercury__sparse_bitset__union_loop_2_f_0(Var_22, Var_23);
    *STATE_VARIABLE_Needed1_11 = (MR_Word) (Var_24);
    Var_28 = (MR_Word) (Ys_7);
    Var_29 = (MR_Word) (STATE_VARIABLE_Needed2_0_12);
    Var_30 = mercury__sparse_bitset__union_loop_2_f_0(Var_28, Var_29);
    *STATE_VARIABLE_Needed2_13 = (MR_Word) (Var_30);
  }
}

static MR_Word MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_2_f_in__list_0(
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box Var_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_8;
      MR_Word Xs_35;
      MR_Word Ys_36;
      MR_Word M1_37;
      MR_Word M2_38;
      MR_Word * AddrSCCcallarg9_90;

      mercury__digraph__lookup_key_3_p_0(Var_23, Var_24, Var_6, &M1_37);
      mercury__digraph__lookup_key_set_to_3_p_0(Var_23, Var_24, M1_37, &Xs_35);
      mercury__digraph__lookup_key_3_p_0(Var_23, Var_25, Var_6, &M2_38);
      mercury__digraph__lookup_key_set_from_3_p_0(Var_23, Var_25, M2_38, &Ys_36);
      {
        Var_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (Xs_35));
        MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (Ys_36));
      }
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Var_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = NULL;
      }
      AddrSCCcallarg9_90 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      mercury__digraph__f_76_67_77_67_102_110_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_95_49_3_p_in__list_0(Var_23, Var_24, Var_25, Var_7, AddrSCCcallarg9_90);
    }
    return HeadVar__3_3;
  }
}

static void MR_CALL 
mercury__digraph__f_76_67_77_67_102_110_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_95_49_3_p_in__list_0(
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word Var_25,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_91)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_91 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box Var_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_8;
      MR_Word Xs_35;
      MR_Word Ys_36;
      MR_Word M1_37;
      MR_Word M2_38;
      MR_Word * AddrSCCcallarg9_90;
      MR_Word HeadVar__3_92;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_91;

      mercury__digraph__lookup_key_3_p_0(Var_23, Var_24, Var_6, &M1_37);
      mercury__digraph__lookup_key_set_to_3_p_0(Var_23, Var_24, M1_37, &Xs_35);
      mercury__digraph__lookup_key_3_p_0(Var_23, Var_25, Var_6, &M2_38);
      mercury__digraph__lookup_key_set_from_3_p_0(Var_23, Var_25, M2_38, &Ys_36);
      {
        Var_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (Xs_35));
        MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (Ys_36));
      }
      {
        HeadVar__3_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_92, 0) = ((MR_Box) (Var_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_92, 1) = NULL;
      }
      AddrSCCcallarg9_90 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_92, (MR_Integer) 1)));
      *AddrOfHeadVar__3_91 = HeadVar__3_92;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_91 = AddrSCCcallarg9_90;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_91 = next_value_of_AddrOfHeadVar__3_91;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word TypeClassInfo_for_enum_13,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_9,
  MR_Word * HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12)
{
  {
    MR_Word Var_8 = (MR_Word) (HeadVar__2_2);

    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_52_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(Var_28, Var_29, TypeClassInfo_for_enum_13, Var_8, HeadVar__3_9, HeadVar__4_10, HeadVar__5_11, HeadVar__6_12);
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_52_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_41,
  MR_Word Var_42,
  MR_Word TypeClassInfo_for_enum_26,
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
      MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
      MR_Unsigned Var_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1))));
      MR_Integer Var_23;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__5_5;

{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_52_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Var_23  = Bits;
}
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_55_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_8_p_in__sparse_bitset_0(Var_41, Var_42, TypeClassInfo_for_enum_26, Var_19, Var_20, Var_23, HeadVar__3_3, &Var_24, HeadVar__5_5, &Var_25);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_14;
      next_value_of_HeadVar__3_3 = Var_24;
      next_value_of_HeadVar__5_5 = Var_25;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_55_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_8_p_in__sparse_bitset_0(
  MR_Word Var_42,
  MR_Word Var_43,
  MR_Word TypeClassInfo_for_enum_27,
  MR_Integer HeadVar__2_10,
  MR_Unsigned HeadVar__3_11,
  MR_Integer HeadVar__4_12,
  MR_Word HeadVar__5_13,
  MR_Word * HeadVar__6_14,
  MR_Word HeadVar__7_15,
  MR_Word * HeadVar__8_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_11 == (MR_Unsigned) 0U);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *HeadVar__8_16 = HeadVar__7_15;
      *HeadVar__6_14 = HeadVar__5_13;
    }
    else
    {
      succeeded = (HeadVar__4_12 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word TypeInfo_23_59;
        MR_Word Var_17;
        MR_Box VX_52;
        MR_Word CompX_53;
        MR_Integer XI_54;
        MR_Box conv0_Var_17;
        MR_Word conv1_HeadVar__8_16;

        conv0_Var_17 = mercury__enum__det_from_int_1_f_0(TypeClassInfo_for_enum_27, HeadVar__2_10);
        Var_17 = ((MR_Word) (conv0_Var_17));
        mercury__digraph__lookup_vertex_3_p_0(Var_42, Var_43, Var_17, &VX_52);
        mercury__digraph__add_vertex_4_p_0(Var_42, VX_52, &CompX_53, HeadVar__5_13, HeadVar__6_14);
        XI_54 = (MR_Integer) (Var_17);
        {
          TypeInfo_23_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_23_59, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
          MR_hl_field(MR_mktag(0), TypeInfo_23_59, 1) = ((MR_Box) (Var_42));
        }
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeInfo_23_59, XI_54, ((MR_Box) (CompX_53)), (MR_Word) (HeadVar__7_15), &conv1_HeadVar__8_16);
        *HeadVar__8_16 = (MR_Word) (conv1_HeadVar__8_16);
      }
      else
      {
        MR_Integer Var_18 = (HeadVar__4_12 >> 1);
        MR_Unsigned Var_20;
        MR_Unsigned Var_21;
        MR_Unsigned Var_22;
        MR_Unsigned Var_23;
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Integer Var_26;
        MR_Unsigned Var_62;
        MR_Unsigned Var_63 = ~((MR_Unsigned) 0U);
        MR_Integer next_value_of_HeadVar__2_10;
        MR_Unsigned next_value_of_HeadVar__3_11;
        MR_Integer next_value_of_HeadVar__4_12;
        MR_Word next_value_of_HeadVar__5_13;
        MR_Word next_value_of_HeadVar__7_15;

        Var_62 = (Var_63 << Var_18);
        Var_20 = ~(Var_62);
        Var_21 = (Var_20 & HeadVar__3_11);
        Var_23 = (HeadVar__3_11 >> Var_18);
        Var_22 = (Var_20 & Var_23);
        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_55_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_8_p_in__sparse_bitset_0(Var_42, Var_43, TypeClassInfo_for_enum_27, HeadVar__2_10, Var_21, Var_18, HeadVar__5_13, &Var_24, HeadVar__7_15, &Var_25);
        Var_26 = (MR_Integer) ((MR_Unsigned) HeadVar__2_10 + (MR_Unsigned) Var_18);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_10 = Var_26;
        next_value_of_HeadVar__3_11 = Var_22;
        next_value_of_HeadVar__4_12 = Var_18;
        next_value_of_HeadVar__5_13 = Var_24;
        next_value_of_HeadVar__7_15 = Var_25;
        HeadVar__2_10 = next_value_of_HeadVar__2_10;
        HeadVar__3_11 = next_value_of_HeadVar__3_11;
        HeadVar__4_12 = next_value_of_HeadVar__4_12;
        HeadVar__5_13 = next_value_of_HeadVar__5_13;
        HeadVar__7_15 = next_value_of_HeadVar__7_15;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__digraph__inverse_2_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word G_3,
  MR_Word * InvG_4)
{
  {
    MR_Integer Next_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 0))));
    MR_Word VMap_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 1))));
    MR_Word Fwd_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 2))));
    MR_Word Bwd_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 3))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *InvG_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Next_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VMap_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Bwd_8));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Fwd_7));
    }
  }
}

MR_Word MR_CALL 
mercury__digraph__inverse_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word G_3)
{
  {
    MR_Word InvG_4;
    MR_Integer Next_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 0))));
    MR_Word VMap_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 1))));
    MR_Word Fwd_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 2))));
    MR_Word Bwd_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 3))));

    {
      InvG_4 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InvG_4, 0) = ((MR_Box) (Next_8));
      MR_hl_field(MR_mktag(0), InvG_4, 1) = ((MR_Box) (VMap_9));
      MR_hl_field(MR_mktag(0), InvG_4, 2) = ((MR_Box) (Bwd_11));
      MR_hl_field(MR_mktag(0), InvG_4, 3) = ((MR_Box) (Fwd_10));
    }
    return InvG_4;
  }
}

MR_Word MR_CALL 
mercury__digraph__vertices_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word G_3)
{
  {
    MR_Word Vs_4;

    mercury__digraph__vertices_2_p_0(TypeInfo_for_T_5, G_3, &Vs_4);
    return Vs_4;
  }
}

void MR_CALL 
mercury__digraph__vertices_2_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word G_3,
  MR_Word * Vs_4)
{
  {
    MR_Word TypeInfo_12_12;
    MR_Word VsList_5;
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 1))));
    MR_Word Var_14;
    MR_Word Var_25;

    {
      TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_12_12, 1) = ((MR_Box) (TypeInfo_for_T_10));
    }
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 0))));
    mercury__tree234__keys_acc_3_p_0(TypeInfo_for_T_10, TypeInfo_12_12, Var_14, (MR_Word) ((MR_Unsigned) 0U), &VsList_5);
    if ((VsList_5 == (MR_Word) ((MR_Unsigned) 0U)))
      Var_25 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box Var_26 = (MR_hl_field(MR_mktag(1), VsList_5, (MR_Integer) 0));
      MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VsList_5, (MR_Integer) 1))));

      mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_T_10, Var_26, Var_27, &Var_25);
    }
    *Vs_4 = (MR_Word) (Var_25);
  }
}

void MR_CALL 
mercury__digraph__dfsrev_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word G_6,
  MR_Word X_7,
  MR_Word STATE_VARIABLE_Visited_0_10,
  MR_Word * STATE_VARIABLE_Visited_11,
  MR_Word * DfsRev_9)
{
  mercury__digraph__dfs_2_6_p_0(TypeInfo_for_T_14, G_6, X_7, STATE_VARIABLE_Visited_0_10, STATE_VARIABLE_Visited_11, (MR_Word) ((MR_Unsigned) 0U), DfsRev_9);
}

void MR_CALL 
mercury__digraph__dfs_5_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word G_6,
  MR_Word X_7,
  MR_Word STATE_VARIABLE_Visited_0_11,
  MR_Word * STATE_VARIABLE_Visited_12,
  MR_Word * Dfs_9)
{
  {
    MR_Word TypeInfo_17_17;
    MR_Word DfsRev_10;
    MR_Word conv0_Dfs_9;

    mercury__digraph__dfs_2_6_p_0(TypeInfo_for_T_15, G_6, X_7, STATE_VARIABLE_Visited_0_11, STATE_VARIABLE_Visited_12, (MR_Word) ((MR_Unsigned) 0U), &DfsRev_10);
    {
      TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_T_15));
    }
    mercury__list__reverse_2_p_0(TypeInfo_17_17, (MR_Word) (DfsRev_10), &conv0_Dfs_9);
    *Dfs_9 = (MR_Word) (conv0_Dfs_9);
  }
}

MR_Word MR_CALL 
mercury__digraph__dfsrev_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word G_3)
{
  {
    MR_Word DfsRev_4;

    mercury__digraph__dfsrev_2_p_0(TypeInfo_for_T_5, G_3, &DfsRev_4);
    return DfsRev_4;
  }
}

void MR_CALL 
mercury__digraph__dfs_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word G_3,
  MR_Word * Dfs_4)
{
  {
    MR_Word TypeInfo_8_8;
    MR_Word DfsRev_5;
    MR_Word conv0_Dfs_4;

    mercury__digraph__dfsrev_2_p_0(TypeInfo_for_T_6, G_3, &DfsRev_5);
    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    mercury__list__reverse_2_p_0(TypeInfo_8_8, (MR_Word) (DfsRev_5), &conv0_Dfs_4);
    *Dfs_4 = (MR_Word) (conv0_Dfs_4);
  }
}

MR_Word MR_CALL 
mercury__digraph__dfs_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word G_3)
{
  {
    MR_Word Dfs_4;
    MR_Word TypeInfo_8_10;
    MR_Word DfsRev_8;
    MR_Word conv0_Dfs_4;

    mercury__digraph__dfsrev_2_p_0(TypeInfo_for_T_5, G_3, &DfsRev_8);
    {
      TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_10, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_10, 1) = ((MR_Box) (TypeInfo_for_T_5));
    }
    mercury__list__reverse_2_p_0(TypeInfo_8_10, (MR_Word) (DfsRev_8), &conv0_Dfs_4);
    Dfs_4 = (MR_Word) (conv0_Dfs_4);
    return Dfs_4;
  }
}

void MR_CALL 
mercury__digraph__dfsrev_2_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word G_3,
  MR_Word * DfsRev_4)
{
  {
    MR_Word TypeInfo_11_29;
    MR_Word Keys_5;
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 1))));
    MR_Word Var_32;
    MR_Word conv0_Keys_5;
    MR_Word Var_6;

    {
      TypeInfo_11_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_11_29, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_11_29, 1) = ((MR_Box) (TypeInfo_for_T_10));
    }
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1))));
    mercury__tree234__keys_acc_3_p_0(TypeInfo_11_29, TypeInfo_for_T_10, (MR_Word) (Var_32), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_Keys_5);
    Keys_5 = (MR_Word) (conv0_Keys_5);
    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_51_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_6_p_in__list_0(TypeInfo_for_T_10, G_3, Keys_5, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &Var_6, (MR_Word) ((MR_Unsigned) 0U), DfsRev_4);
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_51_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_6_p_in__list_0(
  MR_Word Var_34,
  MR_Word Var_35,
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
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__5_5;

      mercury__digraph__dfs_2_6_p_0(Var_34, Var_35, Var_13, HeadVar__3_3, &Var_19, HeadVar__5_5, &Var_20);
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

void MR_CALL 
mercury__digraph__dfsrev_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word G_4,
  MR_Word X_5,
  MR_Word * DfsRev_6)
{
  {
    MR_Word Var_8;

    mercury__digraph__dfs_2_6_p_0(TypeInfo_for_T_10, G_4, X_5, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &Var_8, (MR_Word) ((MR_Unsigned) 0U), DfsRev_6);
  }
}

MR_Word MR_CALL 
mercury__digraph__dfsrev_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word G_4,
  MR_Word X_5)
{
  {
    MR_Word DfsRev_6;
    MR_Word Var_12;

    mercury__digraph__dfs_2_6_p_0(TypeInfo_for_T_7, G_4, X_5, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &Var_12, (MR_Word) ((MR_Unsigned) 0U), &DfsRev_6);
    return DfsRev_6;
  }
}

MR_Word MR_CALL 
mercury__digraph__dfs_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word G_4,
  MR_Word X_5)
{
  {
    MR_Word Dfs_6;

    mercury__digraph__dfs_3_p_0(TypeInfo_for_T_7, G_4, X_5, &Dfs_6);
    return Dfs_6;
  }
}

void MR_CALL 
mercury__digraph__dfs_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word G_4,
  MR_Word X_5,
  MR_Word * Dfs_6)
{
  {
    MR_Word TypeInfo_10_10;
    MR_Word DfsRev_7;
    MR_Word Var_15;
    MR_Word conv0_Dfs_6;

    mercury__digraph__dfs_2_6_p_0(TypeInfo_for_T_8, G_4, X_5, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &Var_15, (MR_Word) ((MR_Unsigned) 0U), &DfsRev_7);
    {
      TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_T_8));
    }
    mercury__list__reverse_2_p_0(TypeInfo_10_10, (MR_Word) (DfsRev_7), &conv0_Dfs_6);
    *Dfs_6 = (MR_Word) (conv0_Dfs_6);
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_54_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_8_p_in__sparse_bitset_0(
  MR_Word Var_43,
  MR_Word Var_44,
  MR_Word TypeClassInfo_for_enum_27,
  MR_Integer HeadVar__2_10,
  MR_Unsigned HeadVar__3_11,
  MR_Integer HeadVar__4_12,
  MR_Word HeadVar__5_13,
  MR_Word * HeadVar__6_14,
  MR_Word HeadVar__7_15,
  MR_Word * HeadVar__8_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_11 == (MR_Unsigned) 0U);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *HeadVar__8_16 = HeadVar__7_15;
      *HeadVar__6_14 = HeadVar__5_13;
    }
    else
    {
      succeeded = (HeadVar__4_12 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word Var_17;
        MR_Box conv0_Var_17;

        conv0_Var_17 = mercury__enum__det_from_int_1_f_0(TypeClassInfo_for_enum_27, HeadVar__2_10);
        Var_17 = ((MR_Word) (conv0_Var_17));
        mercury__digraph__dfs_2_6_p_0(Var_43, Var_44, Var_17, HeadVar__5_13, HeadVar__6_14, HeadVar__7_15, HeadVar__8_16);
      }
      else
      {
        MR_Integer Var_18 = (HeadVar__4_12 >> 1);
        MR_Unsigned Var_20;
        MR_Unsigned Var_21;
        MR_Unsigned Var_22;
        MR_Unsigned Var_23;
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Integer Var_26;
        MR_Unsigned Var_47;
        MR_Unsigned Var_48 = ~((MR_Unsigned) 0U);
        MR_Integer next_value_of_HeadVar__2_10;
        MR_Unsigned next_value_of_HeadVar__3_11;
        MR_Integer next_value_of_HeadVar__4_12;
        MR_Word next_value_of_HeadVar__5_13;
        MR_Word next_value_of_HeadVar__7_15;

        Var_47 = (Var_48 << Var_18);
        Var_20 = ~(Var_47);
        Var_21 = (Var_20 & HeadVar__3_11);
        Var_23 = (HeadVar__3_11 >> Var_18);
        Var_22 = (Var_20 & Var_23);
        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_54_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_8_p_in__sparse_bitset_0(Var_43, Var_44, TypeClassInfo_for_enum_27, HeadVar__2_10, Var_21, Var_18, HeadVar__5_13, &Var_24, HeadVar__7_15, &Var_25);
        Var_26 = (MR_Integer) ((MR_Unsigned) HeadVar__2_10 + (MR_Unsigned) Var_18);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_10 = Var_26;
        next_value_of_HeadVar__3_11 = Var_22;
        next_value_of_HeadVar__4_12 = Var_18;
        next_value_of_HeadVar__5_13 = Var_24;
        next_value_of_HeadVar__7_15 = Var_25;
        HeadVar__2_10 = next_value_of_HeadVar__2_10;
        HeadVar__3_11 = next_value_of_HeadVar__3_11;
        HeadVar__4_12 = next_value_of_HeadVar__4_12;
        HeadVar__5_13 = next_value_of_HeadVar__5_13;
        HeadVar__7_15 = next_value_of_HeadVar__7_15;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_52_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_42,
  MR_Word Var_43,
  MR_Word TypeClassInfo_for_enum_26,
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
      MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
      MR_Unsigned Var_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1))));
      MR_Integer Var_23;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__5_5;

{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_52_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Var_23  = Bits;
}
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_54_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_8_p_in__sparse_bitset_0(Var_42, Var_43, TypeClassInfo_for_enum_26, Var_19, Var_20, Var_23, HeadVar__3_3, &Var_24, HeadVar__5_5, &Var_25);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_14;
      next_value_of_HeadVar__3_3 = Var_24;
      next_value_of_HeadVar__5_5 = Var_25;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__digraph__dfs_2_6_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word G_7,
  MR_Word X_8,
  MR_Word STATE_VARIABLE_Visited_0_12,
  MR_Word * STATE_VARIABLE_Visited_13,
  MR_Word STATE_VARIABLE_DfsRev_0_14,
  MR_Word * STATE_VARIABLE_DfsRev_15)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_23_23;
    MR_Word TypeClassInfo_for_enum_25;
    MR_Word Var_40 = (MR_Word) (STATE_VARIABLE_Visited_0_12);
    MR_Integer Var_41;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_Var_41;

    {
      TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_T_21));
    }
    {
      TypeClassInfo_for_enum_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_25, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_25, 1) = ((MR_Box) (TypeInfo_for_T_21));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_25, 2) = ((MR_Box) (TypeInfo_23_23));
    }
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_25, (MR_Integer) 0)), (MR_Integer) 5))));
    conv1_Var_41 = func_0(((MR_Box) (TypeClassInfo_for_enum_25)), ((MR_Box) (X_8)));
    Var_41 = ((MR_Integer) (conv1_Var_41));
    succeeded = mercury__sparse_bitset__contains_search_nodes_2_p_0(Var_40, Var_41);
    if (succeeded)
    {
      *STATE_VARIABLE_DfsRev_15 = STATE_VARIABLE_DfsRev_0_14;
      *STATE_VARIABLE_Visited_13 = STATE_VARIABLE_Visited_0_12;
    }
    else
    {
      MR_Word TypeInfo_27_27;
      MR_Word TypeClassInfo_for_enum_29;
      MR_Word SuccXs_11;
      MR_Word STATE_VARIABLE_Visited_16_16;
      MR_Word STATE_VARIABLE_DfsRev_19_19;
      MR_Word Var_45;
      MR_Integer Var_47;
      MR_Word Var_48;
      MR_Word Var_54;
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
      MR_Box conv3_Var_47;

      mercury__digraph__lookup_key_set_from_3_p_0(TypeInfo_for_T_21, G_7, X_8, &SuccXs_11);
      {
        TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_27_27, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
        MR_hl_field(MR_mktag(0), TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_for_T_21));
      }
      {
        TypeClassInfo_for_enum_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_29, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_29, 1) = ((MR_Box) (TypeInfo_for_T_21));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_29, 2) = ((MR_Box) (TypeInfo_27_27));
      }
      Var_45 = (MR_Word) (STATE_VARIABLE_Visited_0_12);
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 5))));
      conv3_Var_47 = func_2(((MR_Box) (TypeClassInfo_for_enum_29)), ((MR_Box) (X_8)));
      Var_47 = ((MR_Integer) (conv3_Var_47));
      mercury__sparse_bitset__insert_loop_3_p_0(Var_47, Var_45, &Var_48);
      STATE_VARIABLE_Visited_16_16 = (MR_Word) (Var_48);
      Var_54 = (MR_Word) (SuccXs_11);
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_52_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(TypeInfo_for_T_21, G_7, TypeClassInfo_for_enum_29, Var_54, STATE_VARIABLE_Visited_16_16, STATE_VARIABLE_Visited_13, STATE_VARIABLE_DfsRev_0_14, &STATE_VARIABLE_DfsRev_19_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_DfsRev_15 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (X_8));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_DfsRev_19_19));
      }
    }
  }
}

MR_Word MR_CALL 
mercury__digraph__from_assoc_list_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word AL_3)
{
  {
    MR_Word G_4;

    mercury__digraph__from_assoc_list_2_p_0(TypeInfo_for_T_5, AL_3, &G_4);
    return G_4;
  }
}

void MR_CALL 
mercury__digraph__from_assoc_list_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word AL_3,
  MR_Word * G_4)
{
  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_93_95_48_4_p_in__list_0(TypeInfo_for_T_7, AL_3, (MR_Word) (&mercury__digraph_scalar_common_2[1]), G_4);
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_48_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_93_95_48_4_p_in__list_0(
  MR_Word Var_21,
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
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_13;
      MR_Box VX_24 = (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0));
      MR_Box VY_25 = (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1));
      MR_Word X_33;
      MR_Word Y_34;
      MR_Word STATE_VARIABLE_G_12_35;
      MR_Word STATE_VARIABLE_G_13_36;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      mercury__digraph__add_vertex_4_p_0(Var_21, VX_24, &X_33, HeadVar__3_3, &STATE_VARIABLE_G_12_35);
      mercury__digraph__add_vertex_4_p_0(Var_21, VY_25, &Y_34, STATE_VARIABLE_G_12_35, &STATE_VARIABLE_G_13_36);
      mercury__digraph__add_edge_4_p_0(Var_21, X_33, Y_34, STATE_VARIABLE_G_13_36, &Var_13);
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

MR_Word MR_CALL 
mercury__digraph__to_key_assoc_list_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word G_3)
{
  {
    MR_Word List_4;

    mercury__digraph__to_key_assoc_list_2_p_0(TypeInfo_for_T_5, G_3, &List_4);
    return List_4;
  }
}

void MR_CALL 
mercury__digraph__to_key_assoc_list_2_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word G_3,
  MR_Word * List_4)
{
  {
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_16_16;
    MR_Word Fwd_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 2))));
    MR_Word FwdKeys_6;

    {
      TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_T_11));
    }
    {
      TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_16_16, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(MR_mktag(0), TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_14_14));
    }
    mercury__tree234__keys_acc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_16_16, Fwd_5, (MR_Word) ((MR_Unsigned) 0U), &FwdKeys_6);
    mercury__digraph__to_key_assoc_list_2_4_p_0(TypeInfo_for_T_11, Fwd_5, FwdKeys_6, (MR_Word) ((MR_Unsigned) 0U), List_4);
  }
}

void MR_CALL 
mercury__digraph__to_key_assoc_list_2_4_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_AL_0_3,
  MR_Word * STATE_VARIABLE_AL_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_AL_4 = STATE_VARIABLE_AL_0_3;
  else
  {
    MR_Word TypeInfo_23_23;
    MR_Word TypeInfo_25_25;
    MR_Word TypeClassInfo_for_enum_30;
    MR_Integer XI_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word XIs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word SuccXs_13;
    MR_Word STATE_VARIABLE_AL_16_16;
    MR_Word Var_19;
    MR_Word Var_38;
    MR_Box conv0_SuccXs_13;

    mercury__digraph__to_key_assoc_list_2_4_p_0(TypeInfo_for_T_20, HeadVar__1_1, XIs_11, STATE_VARIABLE_AL_0_3, &STATE_VARIABLE_AL_16_16);
    {
      TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_T_20));
    }
    {
      TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_25_25, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(MR_mktag(0), TypeInfo_25_25, 1) = ((MR_Box) (TypeInfo_23_23));
    }
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_25_25, (MR_Word) (HeadVar__1_1), XI_10, &conv0_SuccXs_13);
    SuccXs_13 = ((MR_Word) (conv0_SuccXs_13));
    Var_19 = (MR_Word) (XI_10);
    {
      TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_30, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_30, 1) = ((MR_Box) (TypeInfo_for_T_20));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_30, 2) = ((MR_Box) (TypeInfo_23_23));
    }
    Var_38 = (MR_Word) (SuccXs_13);
    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_4_p_in__sparse_bitset_0(Var_19, TypeClassInfo_for_enum_30, Var_38, STATE_VARIABLE_AL_16_16, STATE_VARIABLE_AL_4);
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_36,
  MR_Word TypeClassInfo_for_enum_19,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = HeadVar__3_3;
  else
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_13;
    MR_Integer Var_14;
    MR_Unsigned Var_15;
    MR_Integer Var_18;

    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_4_p_in__sparse_bitset_0(Var_36, TypeClassInfo_for_enum_19, Var_10, HeadVar__3_3, &Var_13);
    Var_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    Var_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Var_18  = Bits;
}
    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_54_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(Var_36, TypeClassInfo_for_enum_19, Var_14, Var_15, Var_18, Var_13, HeadVar__4_4);
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_54_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_39,
  MR_Word TypeClassInfo_for_enum_22,
  MR_Integer HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Integer HeadVar__4_10,
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
      succeeded = (HeadVar__4_10 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word Var_13;
        MR_Word Var_46;
        MR_Box conv0_Var_13;

        conv0_Var_13 = mercury__enum__det_from_int_1_f_0(TypeClassInfo_for_enum_22, HeadVar__2_8);
        Var_13 = ((MR_Word) (conv0_Var_13));
        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (Var_39));
          MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (Var_13));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__6_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_46));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (HeadVar__5_11));
        }
      }
      else
      {
        MR_Integer Var_14 = (HeadVar__4_10 >> 1);
        MR_Unsigned Var_16;
        MR_Unsigned Var_17;
        MR_Unsigned Var_18;
        MR_Unsigned Var_19;
        MR_Integer Var_20;
        MR_Word Var_21;
        MR_Unsigned Var_49;
        MR_Unsigned Var_50 = ~((MR_Unsigned) 0U);
        MR_Unsigned next_value_of_HeadVar__3_9;
        MR_Integer next_value_of_HeadVar__4_10;
        MR_Word next_value_of_HeadVar__5_11;

        Var_49 = (Var_50 << Var_14);
        Var_16 = ~(Var_49);
        Var_17 = (Var_16 & HeadVar__3_9);
        Var_19 = (HeadVar__3_9 >> Var_14);
        Var_18 = (Var_16 & Var_19);
        Var_20 = (MR_Integer) ((MR_Unsigned) HeadVar__2_8 + (MR_Unsigned) Var_14);
        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_54_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(Var_39, TypeClassInfo_for_enum_22, Var_20, Var_18, Var_14, HeadVar__5_11, &Var_21);
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

MR_Word MR_CALL 
mercury__digraph__to_assoc_list_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word G_3)
{
  {
    MR_Word List_4;

    mercury__digraph__to_assoc_list_2_p_0(TypeInfo_for_T_5, G_3, &List_4);
    return List_4;
  }
}

void MR_CALL 
mercury__digraph__to_assoc_list_2_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word G_3,
  MR_Word * List_4)
{
  {
    MR_Word TypeInfo_18_18;
    MR_Word TypeInfo_20_20;
    MR_Word Fwd_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 2))));
    MR_Word FwdKeys_6;
    MR_Word Var_7;

    {
      TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_18_18, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_15));
    }
    {
      TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_20_20, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(MR_mktag(0), TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_18_18));
    }
    mercury__tree234__keys_acc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_20_20, Fwd_5, (MR_Word) ((MR_Unsigned) 0U), &FwdKeys_6);
    Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_3, (MR_Integer) 1))));
    mercury__digraph__to_assoc_list_2_5_p_0(TypeInfo_for_T_15, Fwd_5, FwdKeys_6, Var_7, (MR_Word) ((MR_Unsigned) 0U), List_4);
  }
}

void MR_CALL 
mercury__digraph__to_assoc_list_2_5_p_0(
  MR_Word TypeInfo_for_T_24,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word VMap_3,
  MR_Word STATE_VARIABLE_AL_0_4,
  MR_Word * STATE_VARIABLE_AL_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_AL_5 = STATE_VARIABLE_AL_0_4;
  else
  {
    MR_Word TypeInfo_26_26;
    MR_Word TypeInfo_29_29;
    MR_Word TypeClassInfo_for_enum_34;
    MR_Integer XI_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word XIs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Box VX_16;
    MR_Word SuccXs_17;
    MR_Word STATE_VARIABLE_AL_20_20;
    MR_Word Var_21;
    MR_Word Var_42;
    MR_Word Var_46;
    MR_Box conv0_SuccXs_17;

    mercury__digraph__to_assoc_list_2_5_p_0(TypeInfo_for_T_24, HeadVar__1_1, XIs_13, VMap_3, STATE_VARIABLE_AL_0_4, &STATE_VARIABLE_AL_20_20);
    Var_21 = (MR_Word) (XI_12);
    {
      TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_26_26, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_26_26, 1) = ((MR_Box) (TypeInfo_for_T_24));
    }
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VMap_3, (MR_Integer) 1))));
    mercury__map__lookup_3_p_0(TypeInfo_26_26, TypeInfo_for_T_24, (MR_Word) (Var_42), ((MR_Box) (Var_21)), &VX_16);
    {
      TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_29_29, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(MR_mktag(0), TypeInfo_29_29, 1) = ((MR_Box) (TypeInfo_26_26));
    }
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_29_29, (MR_Word) (HeadVar__1_1), XI_12, &conv0_SuccXs_17);
    SuccXs_17 = ((MR_Word) (conv0_SuccXs_17));
    {
      TypeClassInfo_for_enum_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_34, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_34, 1) = ((MR_Box) (TypeInfo_for_T_24));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_34, 2) = ((MR_Box) (TypeInfo_26_26));
    }
    Var_46 = (MR_Word) (SuccXs_17);
    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_4_p_in__sparse_bitset_0(TypeInfo_for_T_24, VMap_3, VX_16, TypeClassInfo_for_enum_34, Var_46, STATE_VARIABLE_AL_20_20, STATE_VARIABLE_AL_5);
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Box Var_33,
  MR_Word TypeClassInfo_for_enum_19,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = HeadVar__3_3;
  else
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_13;
    MR_Integer Var_14;
    MR_Unsigned Var_15;
    MR_Integer Var_18;

    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_4_p_in__sparse_bitset_0(Var_31, Var_32, Var_33, TypeClassInfo_for_enum_19, Var_10, HeadVar__3_3, &Var_13);
    Var_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    Var_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Var_18  = Bits;
}
    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_55_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(Var_31, Var_32, Var_33, TypeClassInfo_for_enum_19, Var_14, Var_15, Var_18, Var_13, HeadVar__4_4);
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_55_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Box Var_36,
  MR_Word TypeClassInfo_for_enum_22,
  MR_Integer HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Integer HeadVar__4_10,
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
      succeeded = (HeadVar__4_10 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word TypeInfo_17_47;
        MR_Word Var_13;
        MR_Box VY_43;
        MR_Word Var_45;
        MR_Word Var_51;
        MR_Box conv0_Var_13;

        conv0_Var_13 = mercury__enum__det_from_int_1_f_0(TypeClassInfo_for_enum_22, HeadVar__2_8);
        Var_13 = ((MR_Word) (conv0_Var_13));
        {
          TypeInfo_17_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_17_47, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
          MR_hl_field(MR_mktag(0), TypeInfo_17_47, 1) = ((MR_Box) (Var_34));
        }
        Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 1))));
        mercury__map__lookup_3_p_0(TypeInfo_17_47, Var_34, (MR_Word) (Var_51), ((MR_Box) (Var_13)), &VY_43);
        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_45, 0) = Var_36;
          MR_hl_field(MR_mktag(0), Var_45, 1) = VY_43;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__6_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_45));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (HeadVar__5_11));
        }
      }
      else
      {
        MR_Integer Var_14 = (HeadVar__4_10 >> 1);
        MR_Unsigned Var_16;
        MR_Unsigned Var_17;
        MR_Unsigned Var_18;
        MR_Unsigned Var_19;
        MR_Integer Var_20;
        MR_Word Var_21;
        MR_Unsigned Var_54;
        MR_Unsigned Var_55 = ~((MR_Unsigned) 0U);
        MR_Unsigned next_value_of_HeadVar__3_9;
        MR_Integer next_value_of_HeadVar__4_10;
        MR_Word next_value_of_HeadVar__5_11;

        Var_54 = (Var_55 << Var_14);
        Var_16 = ~(Var_54);
        Var_17 = (Var_16 & HeadVar__3_9);
        Var_19 = (HeadVar__3_9 >> Var_14);
        Var_18 = (Var_16 & Var_19);
        Var_20 = (MR_Integer) ((MR_Unsigned) HeadVar__2_8 + (MR_Unsigned) Var_14);
        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_55_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(Var_34, Var_35, Var_36, TypeClassInfo_for_enum_22, Var_20, Var_18, Var_14, HeadVar__5_11, &Var_21);
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

MR_Word MR_CALL 
mercury__digraph__lookup_key_set_to_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word G_4,
  MR_Word Y_5)
{
  {
    MR_Word Xs_6;

    mercury__digraph__lookup_key_set_to_3_p_0(TypeInfo_for_T_7, G_4, Y_5, &Xs_6);
    return Xs_6;
  }
}

MR_Word MR_CALL 
mercury__digraph__lookup_to_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word G_4,
  MR_Word Y_5)
{
  {
    MR_Word Xs_6;

    mercury__digraph__lookup_to_3_p_0(TypeInfo_for_T_7, G_4, Y_5, &Xs_6);
    return Xs_6;
  }
}

void MR_CALL 
mercury__digraph__lookup_to_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word G_4,
  MR_Word Y_5,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word TypeInfo_9_9;
    MR_Word TypeClassInfo_for_enum_11;
    MR_Word TypeInfo_8_16;
    MR_Word Xs_6;
    MR_Word Var_14;
    MR_Word Var_39;
    MR_Word Var_61;
    MR_Word conv0_Var_14;

    {
      TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_7));
    }
    {
      TypeClassInfo_for_enum_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_11, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_11, 1) = ((MR_Box) (TypeInfo_for_T_7));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_11, 2) = ((MR_Box) (TypeInfo_9_9));
    }
    mercury__digraph__lookup_key_set_to_3_p_0(TypeInfo_for_T_7, G_4, Y_5, &Xs_6);
{
#define MR_PROC_LABEL mercury__digraph__lookup_to_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_11 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_8_16  = TypeInfo;
}
    Var_39 = (MR_Word) (Xs_6);
    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_53_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(TypeClassInfo_for_enum_11, Var_39, (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_Var_14);
    Var_14 = (MR_Word) (conv0_Var_14);
    if ((Var_14 == (MR_Word) ((MR_Unsigned) 0U)))
      Var_61 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 0))));
      MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 1))));
      MR_Word conv1_Var_61;

      mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_8_16, ((MR_Box) (Var_62)), (MR_Word) (Var_63), &conv1_Var_61);
      Var_61 = (MR_Word) (conv1_Var_61);
    }
    *HeadVar__3_3 = (MR_Word) (Var_61);
  }
}

void MR_CALL 
mercury__digraph__lookup_key_set_to_3_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word G_4,
  MR_Word HeadVar__2_2,
  MR_Word * Xs_6)
{
  {
    MR_bool succeeded;
    MR_Integer YI_5 = (MR_Integer) (HeadVar__2_2);
    MR_Word Xs0_7;
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_17_17;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_4, (MR_Integer) 3))));
    MR_Box conv0_Xs0_7;

    {
      TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_12));
    }
    {
      TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_15_15));
    }
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_17_17, (MR_Word) (Var_8), YI_5, &conv0_Xs0_7);
    if (succeeded)
    {
      Xs0_7 = ((MR_Word) (conv0_Xs0_7));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *Xs_6 = Xs0_7;
    else
      *Xs_6 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  }
}

MR_Word MR_CALL 
mercury__digraph__lookup_key_set_from_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word G_4,
  MR_Word X_5)
{
  {
    MR_Word Ys_6;

    mercury__digraph__lookup_key_set_from_3_p_0(TypeInfo_for_T_7, G_4, X_5, &Ys_6);
    return Ys_6;
  }
}

MR_Word MR_CALL 
mercury__digraph__lookup_from_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word G_4,
  MR_Word X_5)
{
  {
    MR_Word Ys_6;

    mercury__digraph__lookup_from_3_p_0(TypeInfo_for_T_7, G_4, X_5, &Ys_6);
    return Ys_6;
  }
}

void MR_CALL 
mercury__digraph__lookup_from_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word G_4,
  MR_Word X_5,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word TypeInfo_9_9;
    MR_Word TypeClassInfo_for_enum_11;
    MR_Word TypeInfo_8_16;
    MR_Word Ys_6;
    MR_Word Var_14;
    MR_Word Var_39;
    MR_Word Var_61;
    MR_Word conv0_Var_14;

    {
      TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_7));
    }
    {
      TypeClassInfo_for_enum_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_11, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_11, 1) = ((MR_Box) (TypeInfo_for_T_7));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_11, 2) = ((MR_Box) (TypeInfo_9_9));
    }
    mercury__digraph__lookup_key_set_from_3_p_0(TypeInfo_for_T_7, G_4, X_5, &Ys_6);
{
#define MR_PROC_LABEL mercury__digraph__lookup_from_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_11 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_8_16  = TypeInfo;
}
    Var_39 = (MR_Word) (Ys_6);
    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_53_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(TypeClassInfo_for_enum_11, Var_39, (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_Var_14);
    Var_14 = (MR_Word) (conv0_Var_14);
    if ((Var_14 == (MR_Word) ((MR_Unsigned) 0U)))
      Var_61 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 0))));
      MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 1))));
      MR_Word conv1_Var_61;

      mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_8_16, ((MR_Box) (Var_62)), (MR_Word) (Var_63), &conv1_Var_61);
      Var_61 = (MR_Word) (conv1_Var_61);
    }
    *HeadVar__3_3 = (MR_Word) (Var_61);
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_53_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word TypeClassInfo_for_enum_19,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = HeadVar__3_3;
  else
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_13;
    MR_Integer Var_14;
    MR_Unsigned Var_15;
    MR_Integer Var_18;

    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_53_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(TypeClassInfo_for_enum_19, Var_10, HeadVar__3_3, &Var_13);
    Var_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    Var_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_53_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Var_18  = Bits;
}
    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_53_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(TypeClassInfo_for_enum_19, Var_14, Var_15, Var_18, Var_13, HeadVar__4_4);
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_53_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word TypeClassInfo_for_enum_22,
  MR_Integer HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Integer HeadVar__4_10,
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
      succeeded = (HeadVar__4_10 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Box Var_13;

        Var_13 = mercury__enum__det_from_int_1_f_0(TypeClassInfo_for_enum_22, HeadVar__2_8);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__6_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = Var_13;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (HeadVar__5_11));
        }
      }
      else
      {
        MR_Integer Var_14 = (HeadVar__4_10 >> 1);
        MR_Unsigned Var_16;
        MR_Unsigned Var_17;
        MR_Unsigned Var_18;
        MR_Unsigned Var_19;
        MR_Integer Var_20;
        MR_Word Var_21;
        MR_Unsigned Var_72;
        MR_Unsigned Var_73 = ~((MR_Unsigned) 0U);
        MR_Unsigned next_value_of_HeadVar__3_9;
        MR_Integer next_value_of_HeadVar__4_10;
        MR_Word next_value_of_HeadVar__5_11;

        Var_72 = (Var_73 << Var_14);
        Var_16 = ~(Var_72);
        Var_17 = (Var_16 & HeadVar__3_9);
        Var_19 = (HeadVar__3_9 >> Var_14);
        Var_18 = (Var_16 & Var_19);
        Var_20 = (MR_Integer) ((MR_Unsigned) HeadVar__2_8 + (MR_Unsigned) Var_14);
        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_53_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(TypeClassInfo_for_enum_22, Var_20, Var_18, Var_14, HeadVar__5_11, &Var_21);
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

void MR_CALL 
mercury__digraph__lookup_key_set_from_3_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word G_4,
  MR_Word HeadVar__2_2,
  MR_Word * Ys_6)
{
  {
    MR_bool succeeded;
    MR_Integer XI_5 = (MR_Integer) (HeadVar__2_2);
    MR_Word Ys0_7;
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_17_17;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_4, (MR_Integer) 2))));
    MR_Box conv0_Ys0_7;

    {
      TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_12));
    }
    {
      TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_15_15));
    }
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_17_17, (MR_Word) (Var_8), XI_5, &conv0_Ys0_7);
    if (succeeded)
    {
      Ys0_7 = ((MR_Word) (conv0_Ys0_7));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *Ys_6 = Ys0_7;
    else
      *Ys_6 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  }
}

MR_bool MR_CALL 
mercury__digraph__is_edge_rev_3_p_1(
  MR_Word TypeInfo_for_T_12,
  MR_Word G_4,
  MR_Word X_5,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_17_17;
    MR_Word BaseTypeClassInfo_for_enum_18;
    MR_Word TypeClassInfo_for_enum_19;
    MR_Integer YI_6 = (MR_Integer) (HeadVar__3_3);
    MR_Word XSet_7;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_4, (MR_Integer) 3))));
    MR_Box conv0_XSet_7;

    {
      TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_12));
    }
    {
      TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_15_15));
    }
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_17_17, (MR_Word) (Var_8), YI_6, &conv0_XSet_7);
    if (succeeded)
    {
      XSet_7 = ((MR_Word) (conv0_XSet_7));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      BaseTypeClassInfo_for_enum_18 = (MR_Word) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__);
      {
        TypeClassInfo_for_enum_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_19, 0) = ((MR_Box) (BaseTypeClassInfo_for_enum_18));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_19, 1) = ((MR_Box) (TypeInfo_for_T_12));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_19, 2) = ((MR_Box) (TypeInfo_15_15));
      }
      succeeded = mercury__sparse_bitset__member_2_p_0(TypeClassInfo_for_enum_19, ((MR_Box) (X_5)), (MR_Word) (XSet_7));
    }
    return succeeded;
  }
}

static void MR_CALL 
mercury__digraph__is_edge_rev_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mercury__digraph__is_edge_rev_3_p_0_env_0_s * env_ptr = (struct mercury__digraph__is_edge_rev_3_p_0_env_0_s *) (env_ptr_arg);

    *((env_ptr)->mercury__digraph__is_edge_rev_3_p_0_env_0__X_5) = ((MR_Word) ((env_ptr)->mercury__digraph__is_edge_rev_3_p_0_env_0__conv1_X_5));
    ((env_ptr)->mercury__digraph__is_edge_rev_3_p_0_env_0__cont)((env_ptr)->mercury__digraph__is_edge_rev_3_p_0_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__digraph__is_edge_rev_3_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word G_4,
  MR_Word * X_5,
  MR_Word HeadVar__3_3,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__digraph__is_edge_rev_3_p_0_env_0_s env;

    (env).mercury__digraph__is_edge_rev_3_p_0_env_0__X_5 = X_5;
    (env).mercury__digraph__is_edge_rev_3_p_0_env_0__cont = cont;
    (env).mercury__digraph__is_edge_rev_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_bool succeeded;
      MR_Word TypeInfo_15_15;
      MR_Word TypeInfo_17_17;
      MR_Word BaseTypeClassInfo_for_enum_18;
      MR_Word TypeClassInfo_for_enum_19;
      MR_Integer YI_6 = (MR_Integer) (HeadVar__3_3);
      MR_Word XSet_7;
      MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_4, (MR_Integer) 3))));
      MR_Integer Var_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), G_4, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_4, (MR_Integer) 1))));
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_4, (MR_Integer) 2))));
      MR_Box conv0_XSet_7;

      {
        TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_15_15, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
        MR_hl_field(MR_mktag(0), TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_12));
      }
      {
        TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_17_17, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
        MR_hl_field(MR_mktag(0), TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_15_15));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_17_17, (MR_Word) (Var_8), YI_6, &conv0_XSet_7);
      if (succeeded)
      {
        XSet_7 = ((MR_Word) (conv0_XSet_7));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        BaseTypeClassInfo_for_enum_18 = (MR_Word) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__);
        {
          TypeClassInfo_for_enum_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_19, 0) = ((MR_Box) (BaseTypeClassInfo_for_enum_18));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_19, 1) = ((MR_Box) (TypeInfo_for_T_12));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_19, 2) = ((MR_Box) (TypeInfo_15_15));
        }
        mercury__sparse_bitset__member_2_p_1(TypeClassInfo_for_enum_19, &(env).mercury__digraph__is_edge_rev_3_p_0_env_0__conv1_X_5, (MR_Word) (XSet_7), mercury__digraph__is_edge_rev_3_p_0_1, &env);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__digraph__is_edge_3_p_1(
  MR_Word TypeInfo_for_T_12,
  MR_Word G_4,
  MR_Word HeadVar__2_2,
  MR_Word Y_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_17_17;
    MR_Word BaseTypeClassInfo_for_enum_18;
    MR_Word TypeClassInfo_for_enum_19;
    MR_Integer XI_5 = (MR_Integer) (HeadVar__2_2);
    MR_Word YSet_7;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_4, (MR_Integer) 2))));
    MR_Box conv0_YSet_7;

    {
      TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_12));
    }
    {
      TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_15_15));
    }
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_17_17, (MR_Word) (Var_8), XI_5, &conv0_YSet_7);
    if (succeeded)
    {
      YSet_7 = ((MR_Word) (conv0_YSet_7));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      BaseTypeClassInfo_for_enum_18 = (MR_Word) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__);
      {
        TypeClassInfo_for_enum_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_19, 0) = ((MR_Box) (BaseTypeClassInfo_for_enum_18));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_19, 1) = ((MR_Box) (TypeInfo_for_T_12));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_19, 2) = ((MR_Box) (TypeInfo_15_15));
      }
      succeeded = mercury__sparse_bitset__member_2_p_0(TypeClassInfo_for_enum_19, ((MR_Box) (Y_6)), (MR_Word) (YSet_7));
    }
    return succeeded;
  }
}

static void MR_CALL 
mercury__digraph__is_edge_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mercury__digraph__is_edge_3_p_0_env_0_s * env_ptr = (struct mercury__digraph__is_edge_3_p_0_env_0_s *) (env_ptr_arg);

    *((env_ptr)->mercury__digraph__is_edge_3_p_0_env_0__Y_6) = ((MR_Word) ((env_ptr)->mercury__digraph__is_edge_3_p_0_env_0__conv1_Y_6));
    ((env_ptr)->mercury__digraph__is_edge_3_p_0_env_0__cont)((env_ptr)->mercury__digraph__is_edge_3_p_0_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__digraph__is_edge_3_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word G_4,
  MR_Word HeadVar__2_2,
  MR_Word * Y_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__digraph__is_edge_3_p_0_env_0_s env;

    (env).mercury__digraph__is_edge_3_p_0_env_0__Y_6 = Y_6;
    (env).mercury__digraph__is_edge_3_p_0_env_0__cont = cont;
    (env).mercury__digraph__is_edge_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_bool succeeded;
      MR_Word TypeInfo_15_15;
      MR_Word TypeInfo_17_17;
      MR_Word BaseTypeClassInfo_for_enum_18;
      MR_Word TypeClassInfo_for_enum_19;
      MR_Integer XI_5 = (MR_Integer) (HeadVar__2_2);
      MR_Word YSet_7;
      MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_4, (MR_Integer) 2))));
      MR_Integer Var_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), G_4, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_4, (MR_Integer) 1))));
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_4, (MR_Integer) 3))));
      MR_Box conv0_YSet_7;

      {
        TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_15_15, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
        MR_hl_field(MR_mktag(0), TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_12));
      }
      {
        TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_17_17, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
        MR_hl_field(MR_mktag(0), TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_15_15));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_17_17, (MR_Word) (Var_8), XI_5, &conv0_YSet_7);
      if (succeeded)
      {
        YSet_7 = ((MR_Word) (conv0_YSet_7));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        BaseTypeClassInfo_for_enum_18 = (MR_Word) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__);
        {
          TypeClassInfo_for_enum_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_19, 0) = ((MR_Box) (BaseTypeClassInfo_for_enum_18));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_19, 1) = ((MR_Box) (TypeInfo_for_T_12));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_19, 2) = ((MR_Box) (TypeInfo_15_15));
        }
        mercury__sparse_bitset__member_2_p_1(TypeClassInfo_for_enum_19, &(env).mercury__digraph__is_edge_3_p_0_env_0__conv1_Y_6, (MR_Word) (YSet_7), mercury__digraph__is_edge_3_p_0_1, &env);
      }
    }
  }
}

MR_Word MR_CALL 
mercury__digraph__delete_assoc_list_2_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Edges_4,
  MR_Word STATE_VARIABLE_G_0_6)
{
  {
    MR_Word STATE_VARIABLE_G_7;

    mercury__digraph__delete_assoc_list_3_p_0(TypeInfo_for_T_9, Edges_4, STATE_VARIABLE_G_0_6, &STATE_VARIABLE_G_7);
    return STATE_VARIABLE_G_7;
  }
}

void MR_CALL 
mercury__digraph__delete_assoc_list_3_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_G_0_2,
  MR_Word * STATE_VARIABLE_G_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_G_3 = STATE_VARIABLE_G_0_2;
    else
    {
      MR_Word X_7;
      MR_Word Y_8;
      MR_Word Edges_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_G_14_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_G_0_2;

      X_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
      Y_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1))));
      mercury__digraph__delete_edge_4_p_0(TypeInfo_for_T_16, X_7, Y_8, STATE_VARIABLE_G_0_2, &STATE_VARIABLE_G_14_14);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Edges_9;
      next_value_of_STATE_VARIABLE_G_0_2 = STATE_VARIABLE_G_14_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_G_0_2 = next_value_of_STATE_VARIABLE_G_0_2;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__digraph__delete_edge_3_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word X_5,
  MR_Word Y_6,
  MR_Word STATE_VARIABLE_G_0_8)
{
  {
    MR_Word STATE_VARIABLE_G_9;

    mercury__digraph__delete_edge_4_p_0(TypeInfo_for_T_11, X_5, Y_6, STATE_VARIABLE_G_0_8, &STATE_VARIABLE_G_9);
    return STATE_VARIABLE_G_9;
  }
}

void MR_CALL 
mercury__digraph__delete_edge_4_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word X_5,
  MR_Word Y_6,
  MR_Word STATE_VARIABLE_G_0_10,
  MR_Word * STATE_VARIABLE_G_11)
{
  {
    MR_bool succeeded;
    MR_Integer XI_8 = (MR_Integer) (X_5);
    MR_Integer YI_9 = (MR_Integer) (Y_6);
    MR_Word STATE_VARIABLE_G_12_12;
    MR_Word Var_13;
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_0_10, (MR_Integer) 2))));
    MR_Word Var_16;
    MR_Word Var_24;
    MR_Word TypeInfo_14_41;
    MR_Word TypeInfo_16_43;
    MR_Word SuccXs0_37;
    MR_Box conv0_SuccXs0_37;
    MR_Integer Var_21;
    MR_Word Var_22;
    MR_Integer Var_28;
    MR_Word Var_29;
    MR_Word Var_30;

    {
      TypeInfo_14_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_14_41, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_14_41, 1) = ((MR_Box) (TypeInfo_for_T_32));
    }
    {
      TypeInfo_16_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_16_43, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(MR_mktag(0), TypeInfo_16_43, 1) = ((MR_Box) (TypeInfo_14_41));
    }
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_16_43, (MR_Word) (Var_14), XI_8, &conv0_SuccXs0_37);
    if (succeeded)
    {
      SuccXs0_37 = ((MR_Word) (conv0_SuccXs0_37));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeClassInfo_for_enum_47;
      MR_Word SuccXs_38;
      MR_Integer Var_75;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_79;
      MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
      MR_Box conv2_Var_75;

      {
        TypeClassInfo_for_enum_47 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_47, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_47, 1) = ((MR_Box) (TypeInfo_for_T_32));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_47, 2) = ((MR_Box) (TypeInfo_14_41));
      }
      func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_47, (MR_Integer) 0)), (MR_Integer) 5))));
      conv2_Var_75 = func_1(((MR_Box) (TypeClassInfo_for_enum_47)), ((MR_Box) (Y_6)));
      Var_75 = ((MR_Integer) (conv2_Var_75));
      mercury__sparse_bitset__insert_loop_3_p_0(Var_75, (MR_Word) ((MR_Word) (((MR_Box) ((MR_Unsigned) 0U)))), &Var_76);
      Var_77 = (MR_Word) (SuccXs0_37);
      Var_79 = mercury__sparse_bitset__difference_loop_2_f_0(Var_77, Var_76);
      SuccXs_38 = (MR_Word) (Var_79);
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_16_43, ((MR_Box) (XI_8)), ((MR_Box) (SuccXs_38)), Var_14, &Var_13);
    }
    else
      Var_13 = Var_14;
    Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_0_10, (MR_Integer) 0))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_0_10, (MR_Integer) 1))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_0_10, (MR_Integer) 3))));
    {
      STATE_VARIABLE_G_12_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_12_12, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_12_12, 1) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_12_12, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_12_12, 3) = ((MR_Box) (Var_24));
    }
    Var_16 = mercury__digraph__key_set_map_delete_3_f_0(TypeInfo_for_T_32, Var_24, YI_9, X_5);
    Var_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_12_12, (MR_Integer) 0))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_12_12, (MR_Integer) 1))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_12_12, (MR_Integer) 2))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_G_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_16));
    }
  }
}

static MR_Word MR_CALL 
mercury__digraph__key_set_map_delete_3_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Map0_5,
  MR_Integer XI_6,
  MR_Word Y_7)
{
  {
    MR_bool succeeded;
    MR_Word Map_8;
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_16_16;
    MR_Word SuccXs0_9;
    MR_Box conv0_SuccXs0_9;

    {
      TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_T_11));
    }
    {
      TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_16_16, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(MR_mktag(0), TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_14_14));
    }
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_16_16, (MR_Word) (Map0_5), XI_6, &conv0_SuccXs0_9);
    if (succeeded)
    {
      SuccXs0_9 = ((MR_Word) (conv0_SuccXs0_9));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeClassInfo_for_enum_20;
      MR_Word SuccXs_10;
      MR_Integer Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_52;
      MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
      MR_Box conv2_Var_48;

      {
        TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_20, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_20, 1) = ((MR_Box) (TypeInfo_for_T_11));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_20, 2) = ((MR_Box) (TypeInfo_14_14));
      }
      func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_20, (MR_Integer) 0)), (MR_Integer) 5))));
      conv2_Var_48 = func_1(((MR_Box) (TypeClassInfo_for_enum_20)), ((MR_Box) (Y_7)));
      Var_48 = ((MR_Integer) (conv2_Var_48));
      mercury__sparse_bitset__insert_loop_3_p_0(Var_48, (MR_Word) ((MR_Word) (((MR_Box) ((MR_Unsigned) 0U)))), &Var_49);
      Var_50 = (MR_Word) (SuccXs0_9);
      Var_52 = mercury__sparse_bitset__difference_loop_2_f_0(Var_50, Var_49);
      SuccXs_10 = (MR_Word) (Var_52);
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_16_16, ((MR_Box) (XI_6)), ((MR_Box) (SuccXs_10)), Map0_5, &Map_8);
    }
    else
      Map_8 = Map0_5;
    return Map_8;
  }
}

MR_Word MR_CALL 
mercury__digraph__add_assoc_list_2_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Edges_4,
  MR_Word STATE_VARIABLE_G_0_6)
{
  {
    MR_Word STATE_VARIABLE_G_7;

    mercury__digraph__add_assoc_list_3_p_0(TypeInfo_for_T_9, Edges_4, STATE_VARIABLE_G_0_6, &STATE_VARIABLE_G_7);
    return STATE_VARIABLE_G_7;
  }
}

void MR_CALL 
mercury__digraph__add_assoc_list_3_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_G_0_2,
  MR_Word * STATE_VARIABLE_G_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_G_3 = STATE_VARIABLE_G_0_2;
    else
    {
      MR_Word X_7;
      MR_Word Y_8;
      MR_Word Edges_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_G_14_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_G_0_2;

      X_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
      Y_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1))));
      mercury__digraph__add_edge_4_p_0(TypeInfo_for_T_16, X_7, Y_8, STATE_VARIABLE_G_0_2, &STATE_VARIABLE_G_14_14);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Edges_9;
      next_value_of_STATE_VARIABLE_G_0_2 = STATE_VARIABLE_G_14_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_G_0_2 = next_value_of_STATE_VARIABLE_G_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__digraph__add_vertex_pair_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_G_0_7,
  MR_Word * STATE_VARIABLE_G_8)
{
  {
    MR_Box VX_4 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
    MR_Box VY_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));
    MR_Word X_16;
    MR_Word Y_17;
    MR_Word STATE_VARIABLE_G_12_18;
    MR_Word STATE_VARIABLE_G_13_19;

    mercury__digraph__add_vertex_4_p_0(TypeInfo_for_T_10, VX_4, &X_16, STATE_VARIABLE_G_0_7, &STATE_VARIABLE_G_12_18);
    mercury__digraph__add_vertex_4_p_0(TypeInfo_for_T_10, VY_5, &Y_17, STATE_VARIABLE_G_12_18, &STATE_VARIABLE_G_13_19);
    mercury__digraph__add_edge_4_p_0(TypeInfo_for_T_10, X_16, Y_17, STATE_VARIABLE_G_13_19, STATE_VARIABLE_G_8);
  }
}

MR_Word MR_CALL 
mercury__digraph__add_vertex_pair_2_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Edge_4,
  MR_Word STATE_VARIABLE_G_0_6)
{
  {
    MR_Word STATE_VARIABLE_G_7;
    MR_Box VX_12 = (MR_hl_field(MR_mktag(0), Edge_4, (MR_Integer) 0));
    MR_Box VY_13 = (MR_hl_field(MR_mktag(0), Edge_4, (MR_Integer) 1));
    MR_Word X_21;
    MR_Word Y_22;
    MR_Word STATE_VARIABLE_G_12_23;
    MR_Word STATE_VARIABLE_G_13_24;

    mercury__digraph__add_vertex_4_p_0(TypeInfo_for_T_9, VX_12, &X_21, STATE_VARIABLE_G_0_6, &STATE_VARIABLE_G_12_23);
    mercury__digraph__add_vertex_4_p_0(TypeInfo_for_T_9, VY_13, &Y_22, STATE_VARIABLE_G_12_23, &STATE_VARIABLE_G_13_24);
    mercury__digraph__add_edge_4_p_0(TypeInfo_for_T_9, X_21, Y_22, STATE_VARIABLE_G_13_24, &STATE_VARIABLE_G_7);
    return STATE_VARIABLE_G_7;
  }
}

void MR_CALL 
mercury__digraph__add_vertices_and_edge_4_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Box VX_5,
  MR_Box VY_6,
  MR_Word STATE_VARIABLE_G_0_10,
  MR_Word * STATE_VARIABLE_G_11)
{
  {
    MR_Word X_8;
    MR_Word Y_9;
    MR_Word STATE_VARIABLE_G_12_12;
    MR_Word STATE_VARIABLE_G_13_13;

    mercury__digraph__add_vertex_4_p_0(TypeInfo_for_T_15, VX_5, &X_8, STATE_VARIABLE_G_0_10, &STATE_VARIABLE_G_12_12);
    mercury__digraph__add_vertex_4_p_0(TypeInfo_for_T_15, VY_6, &Y_9, STATE_VARIABLE_G_12_12, &STATE_VARIABLE_G_13_13);
    mercury__digraph__add_edge_4_p_0(TypeInfo_for_T_15, X_8, Y_9, STATE_VARIABLE_G_13_13, STATE_VARIABLE_G_11);
  }
}

MR_Word MR_CALL 
mercury__digraph__add_vertices_and_edge_3_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Box VX_5,
  MR_Box VY_6,
  MR_Word STATE_VARIABLE_G_0_8)
{
  {
    MR_Word STATE_VARIABLE_G_9;
    MR_Word X_17;
    MR_Word Y_18;
    MR_Word STATE_VARIABLE_G_12_19;
    MR_Word STATE_VARIABLE_G_13_20;

    mercury__digraph__add_vertex_4_p_0(TypeInfo_for_T_11, VX_5, &X_17, STATE_VARIABLE_G_0_8, &STATE_VARIABLE_G_12_19);
    mercury__digraph__add_vertex_4_p_0(TypeInfo_for_T_11, VY_6, &Y_18, STATE_VARIABLE_G_12_19, &STATE_VARIABLE_G_13_20);
    mercury__digraph__add_edge_4_p_0(TypeInfo_for_T_11, X_17, Y_18, STATE_VARIABLE_G_13_20, &STATE_VARIABLE_G_9);
    return STATE_VARIABLE_G_9;
  }
}

MR_Word MR_CALL 
mercury__digraph__add_edge_3_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word X_5,
  MR_Word Y_6,
  MR_Word STATE_VARIABLE_G_0_8)
{
  {
    MR_Word STATE_VARIABLE_G_9;

    mercury__digraph__add_edge_4_p_0(TypeInfo_for_T_11, X_5, Y_6, STATE_VARIABLE_G_0_8, &STATE_VARIABLE_G_9);
    return STATE_VARIABLE_G_9;
  }
}

void MR_CALL 
mercury__digraph__add_edge_4_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word X_5,
  MR_Word Y_6,
  MR_Word STATE_VARIABLE_G_0_10,
  MR_Word * STATE_VARIABLE_G_11)
{
  {
    MR_bool succeeded;
    MR_Integer XI_8 = (MR_Integer) (X_5);
    MR_Integer YI_9 = (MR_Integer) (Y_6);
    MR_Word STATE_VARIABLE_G_12_12;
    MR_Word Var_13;
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_0_10, (MR_Integer) 2))));
    MR_Word Var_16;
    MR_Word Var_24;
    MR_Word TypeInfo_16_43;
    MR_Word TypeInfo_18_45;
    MR_Word SuccXs0_37;
    MR_Box conv0_SuccXs0_37;
    MR_Integer Var_21;
    MR_Word Var_22;
    MR_Integer Var_28;
    MR_Word Var_29;
    MR_Word Var_30;

    {
      TypeInfo_16_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_16_43, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_16_43, 1) = ((MR_Box) (TypeInfo_for_T_32));
    }
    {
      TypeInfo_18_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_18_45, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(MR_mktag(0), TypeInfo_18_45, 1) = ((MR_Box) (TypeInfo_16_43));
    }
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_18_45, (MR_Word) (Var_14), XI_8, &conv0_SuccXs0_37);
    if (succeeded)
    {
      SuccXs0_37 = ((MR_Word) (conv0_SuccXs0_37));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeClassInfo_for_enum_49;
      MR_Word Var_69 = (MR_Word) (SuccXs0_37);
      MR_Integer Var_70;
      MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
      MR_Box conv2_Var_70;

      {
        TypeClassInfo_for_enum_49 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_49, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_49, 1) = ((MR_Box) (TypeInfo_for_T_32));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_49, 2) = ((MR_Box) (TypeInfo_16_43));
      }
      func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_49, (MR_Integer) 0)), (MR_Integer) 5))));
      conv2_Var_70 = func_1(((MR_Box) (TypeClassInfo_for_enum_49)), ((MR_Box) (Y_6)));
      Var_70 = ((MR_Integer) (conv2_Var_70));
      succeeded = mercury__sparse_bitset__contains_search_nodes_2_p_0(Var_69, Var_70);
      if (succeeded)
        Var_13 = Var_14;
      else
      {
        MR_Word TypeClassInfo_for_enum_53;
        MR_Word SuccXs_38;
        MR_Word Var_74;
        MR_Integer Var_76;
        MR_Word Var_77;
        MR_Box MR_CALL (* func_3)(MR_Box, MR_Box);
        MR_Box conv4_Var_76;

        {
          TypeClassInfo_for_enum_53 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_53, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_53, 1) = ((MR_Box) (TypeInfo_for_T_32));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_53, 2) = ((MR_Box) (TypeInfo_16_43));
        }
        Var_74 = (MR_Word) (SuccXs0_37);
        func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_53, (MR_Integer) 0)), (MR_Integer) 5))));
        conv4_Var_76 = func_3(((MR_Box) (TypeClassInfo_for_enum_53)), ((MR_Box) (Y_6)));
        Var_76 = ((MR_Integer) (conv4_Var_76));
        mercury__sparse_bitset__insert_loop_3_p_0(Var_76, Var_74, &Var_77);
        SuccXs_38 = (MR_Word) (Var_77);
        mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_18_45, ((MR_Box) (XI_8)), ((MR_Box) (SuccXs_38)), Var_14, &Var_13);
      }
    }
    else
    {
      MR_Word TypeInfo_31_58;
      MR_Word TypeClassInfo_for_enum_60;
      MR_Word TypeInfo_36_63;
      MR_Word SuccXs_40;
      MR_Integer Var_88;
      MR_Word Var_89;
      MR_Box MR_CALL (* func_5)(MR_Box, MR_Box);
      MR_Box conv6_Var_88;

      {
        TypeInfo_31_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_31_58, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
        MR_hl_field(MR_mktag(0), TypeInfo_31_58, 1) = ((MR_Box) (TypeInfo_for_T_32));
      }
      {
        TypeClassInfo_for_enum_60 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_60, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_60, 1) = ((MR_Box) (TypeInfo_for_T_32));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_60, 2) = ((MR_Box) (TypeInfo_31_58));
      }
      func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_60, (MR_Integer) 0)), (MR_Integer) 5))));
      conv6_Var_88 = func_5(((MR_Box) (TypeClassInfo_for_enum_60)), ((MR_Box) (Y_6)));
      Var_88 = ((MR_Integer) (conv6_Var_88));
      mercury__sparse_bitset__insert_loop_3_p_0(Var_88, (MR_Word) ((MR_Word) (((MR_Box) ((MR_Unsigned) 0U)))), &Var_89);
      SuccXs_40 = (MR_Word) (Var_89);
      {
        TypeInfo_36_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_36_63, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
        MR_hl_field(MR_mktag(0), TypeInfo_36_63, 1) = ((MR_Box) (TypeInfo_31_58));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_36_63, ((MR_Box) (XI_8)), ((MR_Box) (SuccXs_40)), Var_14, &Var_13);
    }
    Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_0_10, (MR_Integer) 0))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_0_10, (MR_Integer) 1))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_0_10, (MR_Integer) 3))));
    {
      STATE_VARIABLE_G_12_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_12_12, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_12_12, 1) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_12_12, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_12_12, 3) = ((MR_Box) (Var_24));
    }
    Var_16 = mercury__digraph__key_set_map_add_3_f_0(TypeInfo_for_T_32, Var_24, YI_9, X_5);
    Var_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_12_12, (MR_Integer) 0))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_12_12, (MR_Integer) 1))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_12_12, (MR_Integer) 2))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_G_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_16));
    }
  }
}

static MR_Word MR_CALL 
mercury__digraph__key_set_map_add_3_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Map0_5,
  MR_Integer XI_6,
  MR_Word Y_7)
{
  {
    MR_bool succeeded;
    MR_Word Map_8;
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_18_18;
    MR_Word SuccXs0_9;
    MR_Box conv0_SuccXs0_9;

    {
      TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_16_16, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_for_T_13));
    }
    {
      TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_18_18, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(MR_mktag(0), TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_16_16));
    }
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_18_18, (MR_Word) (Map0_5), XI_6, &conv0_SuccXs0_9);
    if (succeeded)
    {
      SuccXs0_9 = ((MR_Word) (conv0_SuccXs0_9));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeClassInfo_for_enum_22;
      MR_Word Var_42 = (MR_Word) (SuccXs0_9);
      MR_Integer Var_43;
      MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
      MR_Box conv2_Var_43;

      {
        TypeClassInfo_for_enum_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_22, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_22, 1) = ((MR_Box) (TypeInfo_for_T_13));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_22, 2) = ((MR_Box) (TypeInfo_16_16));
      }
      func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_22, (MR_Integer) 0)), (MR_Integer) 5))));
      conv2_Var_43 = func_1(((MR_Box) (TypeClassInfo_for_enum_22)), ((MR_Box) (Y_7)));
      Var_43 = ((MR_Integer) (conv2_Var_43));
      succeeded = mercury__sparse_bitset__contains_search_nodes_2_p_0(Var_42, Var_43);
      if (succeeded)
        Map_8 = Map0_5;
      else
      {
        MR_Word TypeClassInfo_for_enum_26;
        MR_Word SuccXs_10;
        MR_Word Var_47;
        MR_Integer Var_49;
        MR_Word Var_50;
        MR_Box MR_CALL (* func_3)(MR_Box, MR_Box);
        MR_Box conv4_Var_49;

        {
          TypeClassInfo_for_enum_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_26, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_26, 1) = ((MR_Box) (TypeInfo_for_T_13));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_26, 2) = ((MR_Box) (TypeInfo_16_16));
        }
        Var_47 = (MR_Word) (SuccXs0_9);
        func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_26, (MR_Integer) 0)), (MR_Integer) 5))));
        conv4_Var_49 = func_3(((MR_Box) (TypeClassInfo_for_enum_26)), ((MR_Box) (Y_7)));
        Var_49 = ((MR_Integer) (conv4_Var_49));
        mercury__sparse_bitset__insert_loop_3_p_0(Var_49, Var_47, &Var_50);
        SuccXs_10 = (MR_Word) (Var_50);
        mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_18_18, ((MR_Box) (XI_6)), ((MR_Box) (SuccXs_10)), Map0_5, &Map_8);
      }
    }
    else
    {
      MR_Word TypeInfo_31_31;
      MR_Word TypeClassInfo_for_enum_33;
      MR_Word TypeInfo_36_36;
      MR_Word SuccXs_12;
      MR_Integer Var_61;
      MR_Word Var_62;
      MR_Box MR_CALL (* func_5)(MR_Box, MR_Box);
      MR_Box conv6_Var_61;

      {
        TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_31_31, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
        MR_hl_field(MR_mktag(0), TypeInfo_31_31, 1) = ((MR_Box) (TypeInfo_for_T_13));
      }
      {
        TypeClassInfo_for_enum_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_33, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_33, 1) = ((MR_Box) (TypeInfo_for_T_13));
        MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_33, 2) = ((MR_Box) (TypeInfo_31_31));
      }
      func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_33, (MR_Integer) 0)), (MR_Integer) 5))));
      conv6_Var_61 = func_5(((MR_Box) (TypeClassInfo_for_enum_33)), ((MR_Box) (Y_7)));
      Var_61 = ((MR_Integer) (conv6_Var_61));
      mercury__sparse_bitset__insert_loop_3_p_0(Var_61, (MR_Word) ((MR_Word) (((MR_Box) ((MR_Unsigned) 0U)))), &Var_62);
      SuccXs_12 = (MR_Word) (Var_62);
      {
        TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_36_36, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
        MR_hl_field(MR_mktag(0), TypeInfo_36_36, 1) = ((MR_Box) (TypeInfo_31_31));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_36_36, ((MR_Box) (XI_6)), ((MR_Box) (SuccXs_12)), Map0_5, &Map_8);
    }
    return Map_8;
  }
}

MR_Box MR_CALL 
mercury__digraph__lookup_vertex_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word G_4,
  MR_Word Key_5)
{
  {
    MR_Box Vertex_6;

    mercury__digraph__lookup_vertex_3_p_0(TypeInfo_for_T_7, G_4, Key_5, &Vertex_6);
    return Vertex_6;
  }
}

void MR_CALL 
mercury__digraph__lookup_vertex_3_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word G_4,
  MR_Word Key_5,
  MR_Box * Vertex_6)
{
  {
    MR_bool succeeded;
    MR_Box Vertex0_7;
    MR_Word TypeInfo_17_17;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_4, (MR_Integer) 1))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1))));
    MR_Word Var_23;
    MR_Box conv0_Var_23;

    {
      TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_T_15));
    }
    succeeded = mercury__tree234__search_3_p_0(TypeInfo_17_17, TypeInfo_for_T_15, (MR_Word) (Var_21), ((MR_Box) (Key_5)), &Vertex0_7);
    if (succeeded)
    {
      succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_15, TypeInfo_17_17, Var_20, Vertex0_7, &conv0_Var_23);
      if (succeeded)
      {
        Var_23 = ((MR_Word) (conv0_Var_23));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (Key_5)), ((MR_Box) (Var_23)));
    }
    if (succeeded)
      *Vertex_6 = Vertex0_7;
    else
      {
        mercury__require__unexpected_3_p_0((MR_String) "digraph", (MR_String) "predicate \140digraph.lookup_vertex\'/3", (MR_String) "search for vertex failed");
        return;
      }
  }
}

MR_Word MR_CALL 
mercury__digraph__lookup_key_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word G_4,
  MR_Box Vertex_5)
{
  {
    MR_Word Key_6;

    mercury__digraph__lookup_key_3_p_0(TypeInfo_for_T_7, G_4, Vertex_5, &Key_6);
    return Key_6;
  }
}

void MR_CALL 
mercury__digraph__lookup_key_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word G_4,
  MR_Box Vertex_5,
  MR_Word * Key_6)
{
  {
    MR_bool succeeded;
    MR_Word Key0_7;
    MR_Word TypeInfo_13_20;
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_4, (MR_Integer) 1))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1))));
    MR_Box Var_25;
    MR_Box conv0_Key0_7;

    {
      TypeInfo_13_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_13_20, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_13_20, 1) = ((MR_Box) (TypeInfo_for_T_11));
    }
    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_11, TypeInfo_13_20, Var_23, Vertex_5, &conv0_Key0_7);
    if (succeeded)
    {
      Key0_7 = ((MR_Word) (conv0_Key0_7));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = mercury__tree234__search_3_p_0(TypeInfo_13_20, TypeInfo_for_T_11, (MR_Word) (Var_24), ((MR_Box) (Key0_7)), &Var_25);
      if (succeeded)
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, Vertex_5, Var_25);
    }
    if (succeeded)
      *Key_6 = Key0_7;
    else
      {
        mercury__require__unexpected_3_p_0((MR_String) "digraph", (MR_String) "predicate \140digraph.lookup_key\'/3", (MR_String) "search for key failed");
        return;
      }
  }
}

MR_bool MR_CALL 
mercury__digraph__search_key_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word G_4,
  MR_Box Vertex_5,
  MR_Word * Key_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_13_13;
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), G_4, (MR_Integer) 1))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 0))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 1))));
    MR_Box Var_18;
    MR_Box conv0_Key_6;

    {
      TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_T_11));
    }
    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_11, TypeInfo_13_13, Var_16, Vertex_5, &conv0_Key_6);
    if (succeeded)
    {
      *Key_6 = ((MR_Word) (conv0_Key_6));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = mercury__tree234__search_3_p_0(TypeInfo_13_13, TypeInfo_for_T_11, (MR_Word) (Var_17), ((MR_Box) (*Key_6)), &Var_18);
      if (succeeded)
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, Vertex_5, Var_18);
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__digraph__add_vertex_4_p_0(
  MR_Word TypeInfo_for_T_26,
  MR_Box Vertex_5,
  MR_Word * Key_6,
  MR_Word STATE_VARIABLE_G_0_9,
  MR_Word * STATE_VARIABLE_G_10)
{
  {
    MR_bool succeeded;
    MR_Word Key0_8;
    MR_Word TypeInfo_28_28;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_0_9, (MR_Integer) 1))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1))));
    MR_Box Var_35;
    MR_Box conv0_Key0_8;

    {
      TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_28_28, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(MR_mktag(0), TypeInfo_28_28, 1) = ((MR_Box) (TypeInfo_for_T_26));
    }
    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_26, TypeInfo_28_28, Var_33, Vertex_5, &conv0_Key0_8);
    if (succeeded)
    {
      Key0_8 = ((MR_Word) (conv0_Key0_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = mercury__tree234__search_3_p_0(TypeInfo_28_28, TypeInfo_for_T_26, (MR_Word) (Var_34), ((MR_Box) (Key0_8)), &Var_35);
      if (succeeded)
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_26, Vertex_5, Var_35);
    }
    if (succeeded)
    {
      *Key_6 = Key0_8;
      *STATE_VARIABLE_G_10 = STATE_VARIABLE_G_0_9;
    }
    else
    {
      MR_Word TypeInfo_30_30;
      MR_Word STATE_VARIABLE_G_12_12;
      MR_Word Var_14;
      MR_Integer I_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_0_9, (MR_Integer) 0))));
      MR_Integer Var_47;
      MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_0_9, (MR_Integer) 1))));
      MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_0_9, (MR_Integer) 2))));
      MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_0_9, (MR_Integer) 3))));
      MR_Integer Var_22;
      MR_Word Var_24;
      MR_Word Var_25;

      *Key_6 = (MR_Word) (I_44);
      Var_47 = (MR_Integer) ((MR_Unsigned) I_44 + (MR_Unsigned) 1);
      {
        STATE_VARIABLE_G_12_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_12_12, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_12_12, 1) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_12_12, 2) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_12_12, 3) = ((MR_Box) (Var_51));
      }
      {
        TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_30_30, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
        MR_hl_field(MR_mktag(0), TypeInfo_30_30, 1) = ((MR_Box) (TypeInfo_for_T_26));
      }
      mercury__bimap__set_4_p_0(TypeInfo_for_T_26, TypeInfo_30_30, Vertex_5, ((MR_Box) (*Key_6)), Var_49, &Var_14);
      Var_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_12_12, (MR_Integer) 0))));
      Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_12_12, (MR_Integer) 2))));
      Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_G_12_12, (MR_Integer) 3))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_G_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_14));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_25));
      }
    }
  }
}

void MR_CALL 
mercury__digraph__init_1_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) (&mercury__digraph_scalar_common_2[1]);
}

MR_Word MR_CALL 
mercury__digraph__init_0_f_0(
  MR_Word TypeInfo_for_T_3)
{
  return (MR_Word) (&mercury__digraph_scalar_common_2[1]);
}

static MR_bool MR_CALL 
mercury__digraph____Unify____clique_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__digraph____Unify____clique_map_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__digraph____Compare____clique_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__digraph____Compare____clique_map_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__digraph____Unify____digraph_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__digraph____Compare____digraph_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__digraph____Compare____digraph_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_key_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__digraph____Unify____digraph_key_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__digraph____Compare____digraph_key_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__digraph____Compare____digraph_key_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_key_set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__digraph____Unify____digraph_key_set_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__digraph____Compare____digraph_key_set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__digraph____Compare____digraph_key_set_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__digraph____Unify____key_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__digraph____Unify____key_map_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__digraph____Compare____key_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__digraph____Compare____key_map_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__digraph____Unify____key_set_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__digraph____Unify____key_set_map_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__digraph____Compare____key_set_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__digraph____Compare____key_set_map_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_Box MR_CALL 
mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__to_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_Int_4;

    conv0_Int_4 = mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__to_int_1_1_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Int_4));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__from_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    succeeded = mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__from_int_1_1_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Integer) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void mercury__digraph__init(void)
{
}

void mercury__digraph__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__digraph__digraph__type_ctor_info_clique_map_1);
	MR_register_type_ctor_info(&mercury__digraph__digraph__type_ctor_info_digraph_1);
	MR_register_type_ctor_info(&mercury__digraph__digraph__type_ctor_info_digraph_key_1);
	MR_register_type_ctor_info(&mercury__digraph__digraph__type_ctor_info_digraph_key_set_1);
	MR_register_type_ctor_info(&mercury__digraph__digraph__type_ctor_info_key_map_1);
	MR_register_type_ctor_info(&mercury__digraph__digraph__type_ctor_info_key_set_map_1);
}

void mercury__digraph__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__digraph__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module digraph.
