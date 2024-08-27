/*
** Automatically generated from `digraph.m'
** by the Mercury compiler,
** version rotd-2024-08-27
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
#include "benchmarking.mih"
#include "bimap.mih"
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

static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__set_ordlist__pti_set_ordlist_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__digraph__pti_digraph_key_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__list__pti_list_1__pseudo_digraph__pti_digraph_key_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__digraph__digraph__field_types_component_1_0[2];

static const MR_ConstString mercury__digraph__digraph__field_names_component_1_0[2];

static const MR_DuFunctorDesc mercury__digraph__digraph__du_functor_desc_component_1_0;

static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_stag_ordered_component_1_0[1];

static const MR_DuPtagLayout mercury__digraph__digraph__du_ptag_ordered_component_1[1];

static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_name_ordered_component_1[1];

static const MR_Integer mercury__digraph__digraph__functor_number_map_component_1[1];

static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__bimap__pti_bimap_2__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__digraph__digraph__field_types_digraph_1_0[4];

static const MR_ConstString mercury__digraph__digraph__field_names_digraph_1_0[4];

static const MR_DuFunctorDesc mercury__digraph__digraph__du_functor_desc_digraph_1_0;

static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_stag_ordered_digraph_1_0[1];

static const MR_DuPtagLayout mercury__digraph__digraph__du_ptag_ordered_digraph_1[1];

static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_name_ordered_digraph_1[1];

static const MR_Integer mercury__digraph__digraph__functor_number_map_digraph_1[1];

static const MR_Integer mercury__digraph__digraph__functor_number_map_digraph_key_1[1];

static const MR_NotagFunctorDesc mercury__digraph__digraph__notag_functor_desc_digraph_key_1;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__pseudo_digraph__pti_digraph_key_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__digraph__pti_component_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__list__pti_list_1__pseudo_digraph__pti_component_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__digraph__digraph__field_types_modified_tarjan_state_1_0[4];

static const MR_ConstString mercury__digraph__digraph__field_names_modified_tarjan_state_1_0[4];

static const MR_DuFunctorDesc mercury__digraph__digraph__du_functor_desc_modified_tarjan_state_1_0;

static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_stag_ordered_modified_tarjan_state_1_0[1];

static const MR_DuPtagLayout mercury__digraph__digraph__du_ptag_ordered_modified_tarjan_state_1[1];

static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_name_ordered_modified_tarjan_state_1[1];

static const MR_Integer mercury__digraph__digraph__functor_number_map_modified_tarjan_state_1[1];

static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__plain_builtin__type_ctor_info_uint_0;

static const MR_PseudoTypeInfo mercury__digraph__digraph__field_types_modified_tarjan_visit_1_0[2];

static const MR_ConstString mercury__digraph__digraph__field_names_modified_tarjan_visit_1_0[2];

static const MR_DuFunctorDesc mercury__digraph__digraph__du_functor_desc_modified_tarjan_visit_1_0;

static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_stag_ordered_modified_tarjan_visit_1_0[1];

static const MR_DuPtagLayout mercury__digraph__digraph__du_ptag_ordered_modified_tarjan_visit_1[1];

static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_name_ordered_modified_tarjan_visit_1[1];

static const MR_Integer mercury__digraph__digraph__functor_number_map_modified_tarjan_visit_1[1];

static void MR_CALL 
mercury__digraph__IntroducedFrom__pred__key_set_map_union__461__1_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Ys_6,
  MR_Word HeadVar__3_12,
  MR_Word * HeadVar__4_13);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_49_95_95_91_49_44_32_52_44_32_53_93_95_48_4_p_in__list_0(
  MR_Word Var_18,
  MR_Word Var_19,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__digraph__add_edges_to_reachable_4_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word G_5,
  MR_Unsigned XI_6,
  MR_Word STATE_VARIABLE_TC_0_11,
  MR_Word * STATE_VARIABLE_TC_12);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word TypeClassInfo_for_uenum_19,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_55_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_55_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_8_p_in__sparse_bitset_0(
  MR_Word Var_43,
  MR_Word Var_44,
  MR_Word TypeClassInfo_for_uenum_27,
  MR_Unsigned HeadVar__2_10,
  MR_Unsigned HeadVar__3_11,
  MR_Unsigned HeadVar__4_12,
  MR_Word HeadVar__5_13,
  MR_Word * HeadVar__6_14,
  MR_Word HeadVar__7_15,
  MR_Word * HeadVar__8_16);

static void MR_CALL 
mercury__digraph__find_descendants_6_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word G_7,
  MR_Word X_8,
  MR_Word STATE_VARIABLE_Visited_0_12,
  MR_Word * STATE_VARIABLE_Visited_13,
  MR_Word STATE_VARIABLE_Reachable_0_14,
  MR_Word * STATE_VARIABLE_Reachable_15);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_54_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_42,
  MR_Word Var_43,
  MR_Word TypeClassInfo_for_uenum_26,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_49_95_95_91_49_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(
  MR_Word Var_55,
  MR_Word Var_56,
  MR_Word Var_57,
  MR_Word Var_58,
  MR_Word Var_59,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_26,
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Box Var_30,
  MR_Word TypeClassInfo_for_uenum_19,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_55_55_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_57_44_32_49_49_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_29,
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Box Var_33,
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_50_95_95_91_49_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(
  MR_Word Var_55,
  MR_Word Var_56,
  MR_Word Var_57,
  MR_Word Var_58,
  MR_Word Var_59,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_52_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_26,
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Box Var_30,
  MR_Word TypeClassInfo_for_uenum_19,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_55_56_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_57_44_32_49_49_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_29,
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Box Var_33,
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word Var_20,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_56_51_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__tree234_0(
  MR_Word Var_82,
  MR_Word Var_83,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_105_102_105_101_100_95_116_97_114_106_97_110_95_109_97_105_110_95_108_111_111_112_95_95_91_51_93_95_48_7_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word OrigEdges_8,
  MR_Word KeyV_10,
  MR_Word STATE_VARIABLE_Visit_0_13,
  MR_Word * STATE_VARIABLE_Visit_14,
  MR_Word STATE_VARIABLE_State_0_15,
  MR_Word * STATE_VARIABLE_State_16);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_44_32_49_50_93_95_48_8_p_in__sparse_bitset_0(
  MR_Word Var_39,
  MR_Word Var_40,
  MR_Word Var_41,
  MR_Word TypeClassInfo_for_uenum_27,
  MR_Unsigned HeadVar__2_10,
  MR_Unsigned HeadVar__3_11,
  MR_Unsigned HeadVar__4_12,
  MR_Word HeadVar__5_13,
  MR_Word * HeadVar__6_14,
  MR_Word HeadVar__7_15,
  MR_Word * HeadVar__8_16);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_54_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_38,
  MR_Word Var_39,
  MR_Word Var_40,
  MR_Word TypeClassInfo_for_uenum_26,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
mercury__digraph__modified_tarjan_visit_v_w_7_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_Word OrigEdges_8,
  MR_Word V_9,
  MR_Word W_10,
  MR_Word STATE_VARIABLE_Visit_0_18,
  MR_Word * STATE_VARIABLE_Visit_19,
  MR_Word STATE_VARIABLE_State_0_20,
  MR_Word * STATE_VARIABLE_State_21);

static void MR_CALL 
mercury__digraph__modified_tarjan_visit_6_p_0(
  MR_Word TypeInfo_for_T_80,
  MR_Word OrigEdges_7,
  MR_Word V_8,
  MR_Word STATE_VARIABLE_Visit_0_17,
  MR_Word * STATE_VARIABLE_Visit_18,
  MR_Word STATE_VARIABLE_State_0_19,
  MR_Word * STATE_VARIABLE_State_20);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_99_111_109_112_111_110_101_110_116_95_95_91_49_93_95_48_4_p_0(
  MR_Word Root_5,
  MR_Word * NonRoots_6,
  MR_Word STATE_VARIABLE_Stack_0_10,
  MR_Word * STATE_VARIABLE_Stack_11);

static void MR_CALL 
mercury__digraph__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_99_111_109_112_111_110_101_110_116_95_95_91_49_93_95_48_95_95_49_4_p_0(
  MR_Word Root_5,
  MR_Word * AddrOfNonRoots_22,
  MR_Word STATE_VARIABLE_Stack_0_10,
  MR_Word * STATE_VARIABLE_Stack_11);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_6_p_in__list_0(
  MR_Word Var_40,
  MR_Word Var_41,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
mercury__digraph__btc_process_component_6_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word OrigEdges_7,
  MR_Word Comp_8,
  MR_Word STATE_VARIABLE_SuccMap_0_19,
  MR_Word * STATE_VARIABLE_SuccMap_20,
  MR_Word STATE_VARIABLE_PredMap_0_21,
  MR_Word * STATE_VARIABLE_PredMap_22);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_33,
  MR_Word Var_34,
  MR_Word TypeClassInfo_for_uenum_19,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_49_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_36,
  MR_Word Var_37,
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static void MR_CALL 
mercury__digraph__add_predecessors_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mercury__digraph__add_predecessors_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Ys_5,
  MR_Word X_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_33,
  MR_Word Var_34,
  MR_Word TypeClassInfo_for_uenum_19,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_49_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_36,
  MR_Word Var_37,
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__list_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__digraph__build_successor_set_5_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word OrigEdges_6,
  MR_Word SuccMap0_7,
  MR_Word W_8,
  MR_Word STATE_VARIABLE_SuccV_0_12,
  MR_Word * STATE_VARIABLE_SuccV_13);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word TypeClassInfo_for_uenum_19,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_55_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_33,
  MR_Word Var_34,
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static void MR_CALL 
mercury__digraph__build_successor_set_2_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word SuccMap0_5,
  MR_Word W_6,
  MR_Word STATE_VARIABLE_SuccV_0_9,
  MR_Word * STATE_VARIABLE_SuccV_10);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__list_0(
  MR_Word Var_25,
  MR_Word Var_26,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__digraph__add_successors_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mercury__digraph__add_successors_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Ys_5,
  MR_Word X_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_49_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
  MR_Word Var_14,
  MR_Word Var_15,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mercury__digraph__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_49_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_95_95_49_3_p_0(
  MR_Word Var_14,
  MR_Word Var_15,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_17);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
  MR_Word Var_27,
  MR_Word Var_28,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_Word MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_52_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_2_f_in__list_0(
  MR_Word Var_14,
  MR_Word Var_15,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__digraph__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_52_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_95_95_49_3_p_0(
  MR_Word Var_14,
  MR_Word Var_15,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_17);

static void MR_CALL 
mercury__digraph__components_loop_4_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word G_5,
  MR_Word Xs0_6,
  MR_Word STATE_VARIABLE_Components_0_14,
  MR_Word * STATE_VARIABLE_Components_15);

static void MR_CALL 
mercury__digraph__reachable_from_4_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word G_5,
  MR_Word Keys0_6,
  MR_Word STATE_VARIABLE_Comp_0_15,
  MR_Word * STATE_VARIABLE_Comp_16);

static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__list_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_33,
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_53_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Word TypeClassInfo_for_uenum_19,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_57_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(
  MR_Word Var_59,
  MR_Word Var_60,
  MR_Word Var_61,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_53_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_40,
  MR_Word Var_41,
  MR_Word TypeClassInfo_for_uenum_26,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_8_p_in__sparse_bitset_0(
  MR_Word Var_41,
  MR_Word Var_42,
  MR_Word TypeClassInfo_for_uenum_27,
  MR_Unsigned HeadVar__2_10,
  MR_Unsigned HeadVar__3_11,
  MR_Unsigned HeadVar__4_12,
  MR_Word HeadVar__5_13,
  MR_Word * HeadVar__6_14,
  MR_Word HeadVar__7_15,
  MR_Word * HeadVar__8_16);

static void MR_CALL 
mercury__digraph__copy_vertex_6_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word G_7,
  MR_Word X_8,
  MR_Word STATE_VARIABLE_CompXs_0_13,
  MR_Word * STATE_VARIABLE_CompXs_14,
  MR_Word STATE_VARIABLE_Comp_0_15,
  MR_Word * STATE_VARIABLE_Comp_16);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word TypeClassInfo_for_uenum_9,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_7,
  MR_Word * HeadVar__4_8);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_53_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_33,
  MR_Word Var_34,
  MR_Word TypeClassInfo_for_uenum_19,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_49_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_36,
  MR_Word Var_37,
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static void MR_CALL 
mercury__digraph__add_to_key_set_map_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mercury__digraph__add_to_key_set_map_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Ys_5,
  MR_Word X_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_52_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_6_p_in__list_0(
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_8_p_in__sparse_bitset_0(
  MR_Word Var_43,
  MR_Word Var_44,
  MR_Word TypeClassInfo_for_uenum_27,
  MR_Unsigned HeadVar__2_10,
  MR_Unsigned HeadVar__3_11,
  MR_Unsigned HeadVar__4_12,
  MR_Word HeadVar__5_13,
  MR_Word * HeadVar__6_14,
  MR_Word HeadVar__7_15,
  MR_Word * HeadVar__8_16);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_53_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_42,
  MR_Word Var_43,
  MR_Word TypeClassInfo_for_uenum_26,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_56_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_93_95_48_4_p_in__list_0(
  MR_Word Var_21,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_53_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_36,
  MR_Word TypeClassInfo_for_uenum_19,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_56_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_39,
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_53_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Box Var_33,
  MR_Word TypeClassInfo_for_uenum_19,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_57_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Box Var_36,
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_19,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_55_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static void MR_CALL 
mercury__digraph__is_edge_rev_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__digraph__is_edge_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__digraph__key_set_map_add_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Unsigned XI_5,
  MR_Word Y_6,
  MR_Word Map0_7,
  MR_Word * Map_8);

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
mercury__digraph____Unify____component_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__digraph____Compare____component_1_0_10001(
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

static MR_bool MR_CALL 
mercury__digraph____Unify____modified_tarjan_state_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__digraph____Compare____modified_tarjan_state_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__digraph____Unify____modified_tarjan_visit_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__digraph____Compare____modified_tarjan_visit_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_Box MR_CALL 
mercury__digraph__ClassMethod_for_enum__uenum____digraph__digraph_key__arity1______enum__to_uint_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mercury__digraph__ClassMethod_for_enum__uenum____digraph__digraph_key__arity1______enum__from_uint_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);


static /* final */ const MR_Box mercury__digraph_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__digraph_scalar_common_2[4][4];

static /* final */ const MR_Box mercury__digraph_scalar_common_3[1][5];

static /* final */ const MR_Box mercury__digraph_scalar_common_4[3][2];

static /* final */ const MR_Integer mercury__digraph_scalar_common_5[1][2];

static /* final */ const MR_Box mercury__digraph_scalar_common_6[1][7];




static /* final */ const MR_Box mercury__digraph_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__digraph_scalar_common_2[4][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__digraph_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (&mercury__digraph_scalar_common_4[0])),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (&mercury__digraph_scalar_common_4[1])),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Word) (((MR_Box) ((MR_Unsigned) 0U))))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mercury__digraph_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__digraph_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__digraph_scalar_common_4[3][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Integer mercury__digraph_scalar_common_5[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mercury__digraph_scalar_common_6[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mercury__digraph_scalar_common_5[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__digraph__sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1)),
    ((MR_Box) (&mercury__digraph__sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1)),
    ((MR_Box) (&mercury__digraph__sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1))
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


static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&mercury__digraph__digraph__pti_digraph_key_1__pseudo_1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__digraph__pti_digraph_key_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  { (MR_PseudoTypeInfo) (&mercury__digraph__set_ordlist__pti_set_ordlist_1__pseudo_1) }
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
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__digraph__tree234__pti_tree234_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__list__pti_list_1__pseudo_digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__digraph__digraph__pti_digraph_key_1__pseudo_1) }
};

static const MR_PseudoTypeInfo mercury__digraph__digraph__field_types_component_1_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__digraph__digraph__pti_digraph_key_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__digraph__list__pti_list_1__pseudo_digraph__pti_digraph_key_1__pseudo_1)
};

static const MR_ConstString mercury__digraph__digraph__field_names_component_1_0[2] = {
  (MR_String) "component_root",
  (MR_String) "component_nonroots"
};

static const MR_DuFunctorDesc mercury__digraph__digraph__du_functor_desc_component_1_0 = {
  (MR_String) "component",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__digraph__digraph__field_types_component_1_0,
  mercury__digraph__digraph__field_names_component_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_stag_ordered_component_1_0[1] = { &mercury__digraph__digraph__du_functor_desc_component_1_0 };

static const MR_DuPtagLayout mercury__digraph__digraph__du_ptag_ordered_component_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__digraph__digraph__du_stag_ordered_component_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_name_ordered_component_1[1] = { &mercury__digraph__digraph__du_functor_desc_component_1_0 };

static const MR_Integer mercury__digraph__digraph__functor_number_map_component_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__digraph__digraph__type_ctor_info_component_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__digraph____Unify____component_1_0_10001)),
  ((MR_Box) (mercury__digraph____Compare____component_1_0_10001)),
  (MR_String) "digraph",
  (MR_String) "component",
  { mercury__digraph__digraph__du_name_ordered_component_1 },
  { mercury__digraph__digraph__du_ptag_ordered_component_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__digraph__digraph__functor_number_map_component_1,

};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__bimap__pti_bimap_2__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__digraph__digraph__pti_digraph_key_1__pseudo_1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
    (MR_PseudoTypeInfo) (&mercury__digraph__sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1)
  }
};

static const MR_PseudoTypeInfo mercury__digraph__digraph__field_types_digraph_1_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&mercury__digraph__bimap__pti_bimap_2__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1)
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

static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_stag_ordered_digraph_1_0[1] = { &mercury__digraph__digraph__du_functor_desc_digraph_1_0 };

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

static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_name_ordered_digraph_1[1] = { &mercury__digraph__digraph__du_functor_desc_digraph_1_0 };

static const MR_Integer mercury__digraph__digraph__functor_number_map_digraph_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__digraph__digraph__type_ctor_info_digraph_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__digraph____Unify____digraph_1_0_10001)),
  ((MR_Box) (mercury__digraph____Compare____digraph_1_0_10001)),
  (MR_String) "digraph",
  (MR_String) "digraph",
  { mercury__digraph__digraph__du_name_ordered_digraph_1 },
  { mercury__digraph__digraph__du_ptag_ordered_digraph_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__digraph__digraph__functor_number_map_digraph_1,

};

static const MR_Integer mercury__digraph__digraph__functor_number_map_digraph_key_1[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc mercury__digraph__digraph__notag_functor_desc_digraph_key_1 = {
  (MR_String) "digraph_key",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
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
  { &mercury__digraph__digraph__notag_functor_desc_digraph_key_1 },
  { &mercury__digraph__digraph__notag_functor_desc_digraph_key_1 },
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
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__digraph__sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__pseudo_digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
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
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__pseudo_digraph__pti_digraph_key_1__pseudo_1) },
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
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__digraph__digraph__pti_digraph_key_1__pseudo_1),
    (MR_PseudoTypeInfo) (&mercury__digraph__digraph__pti_digraph_key_1__pseudo_1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__digraph__pti_component_1__pseudo_1 = {
  &mercury__digraph__digraph__type_ctor_info_component_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__list__pti_list_1__pseudo_digraph__pti_component_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__digraph__digraph__pti_component_1__pseudo_1) }
};

static const MR_PseudoTypeInfo mercury__digraph__digraph__field_types_modified_tarjan_state_1_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__digraph__tree234__pti_tree234_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__digraph__list__pti_list_1__pseudo_digraph__pti_digraph_key_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__digraph__sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__digraph__list__pti_list_1__pseudo_digraph__pti_component_1__pseudo_1)
};

static const MR_ConstString mercury__digraph__digraph__field_names_modified_tarjan_state_1_0[4] = {
  (MR_String) "root_map",
  (MR_String) "stack",
  (MR_String) "popped",
  (MR_String) "comps"
};

static const MR_DuFunctorDesc mercury__digraph__digraph__du_functor_desc_modified_tarjan_state_1_0 = {
  (MR_String) "modified_tarjan_state",
  INT16_C(4),
  UINT16_C(15),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__digraph__digraph__field_types_modified_tarjan_state_1_0,
  mercury__digraph__digraph__field_names_modified_tarjan_state_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_stag_ordered_modified_tarjan_state_1_0[1] = { &mercury__digraph__digraph__du_functor_desc_modified_tarjan_state_1_0 };

static const MR_DuPtagLayout mercury__digraph__digraph__du_ptag_ordered_modified_tarjan_state_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__digraph__digraph__du_stag_ordered_modified_tarjan_state_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_name_ordered_modified_tarjan_state_1[1] = { &mercury__digraph__digraph__du_functor_desc_modified_tarjan_state_1_0 };

static const MR_Integer mercury__digraph__digraph__functor_number_map_modified_tarjan_state_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__digraph__digraph__type_ctor_info_modified_tarjan_state_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__digraph____Unify____modified_tarjan_state_1_0_10001)),
  ((MR_Box) (mercury__digraph____Compare____modified_tarjan_state_1_0_10001)),
  (MR_String) "digraph",
  (MR_String) "modified_tarjan_state",
  { mercury__digraph__digraph__du_name_ordered_modified_tarjan_state_1 },
  { mercury__digraph__digraph__du_ptag_ordered_modified_tarjan_state_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__digraph__digraph__functor_number_map_modified_tarjan_state_1,

};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__plain_builtin__type_ctor_info_uint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__digraph__digraph__pti_digraph_key_1__pseudo_1),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
  }
};

static const MR_PseudoTypeInfo mercury__digraph__digraph__field_types_modified_tarjan_visit_1_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&mercury__digraph__tree234__pti_tree234_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__plain_builtin__type_ctor_info_uint_0)
};

static const MR_ConstString mercury__digraph__digraph__field_names_modified_tarjan_visit_1_0[2] = {
  (MR_String) "visit_counter",
  (MR_String) "visit_map"
};

static const MR_DuFunctorDesc mercury__digraph__digraph__du_functor_desc_modified_tarjan_visit_1_0 = {
  (MR_String) "modified_tarjan_visit",
  INT16_C(2),
  UINT16_C(2),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__digraph__digraph__field_types_modified_tarjan_visit_1_0,
  mercury__digraph__digraph__field_names_modified_tarjan_visit_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_stag_ordered_modified_tarjan_visit_1_0[1] = { &mercury__digraph__digraph__du_functor_desc_modified_tarjan_visit_1_0 };

static const MR_DuPtagLayout mercury__digraph__digraph__du_ptag_ordered_modified_tarjan_visit_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__digraph__digraph__du_stag_ordered_modified_tarjan_visit_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_name_ordered_modified_tarjan_visit_1[1] = { &mercury__digraph__digraph__du_functor_desc_modified_tarjan_visit_1_0 };

static const MR_Integer mercury__digraph__digraph__functor_number_map_modified_tarjan_visit_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__digraph__digraph__type_ctor_info_modified_tarjan_visit_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__digraph____Unify____modified_tarjan_visit_1_0_10001)),
  ((MR_Box) (mercury__digraph____Compare____modified_tarjan_visit_1_0_10001)),
  (MR_String) "digraph",
  (MR_String) "modified_tarjan_visit",
  { mercury__digraph__digraph__du_name_ordered_modified_tarjan_visit_1 },
  { mercury__digraph__digraph__du_ptag_ordered_modified_tarjan_visit_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__digraph__digraph__functor_number_map_modified_tarjan_visit_1,

};

const MR_BaseTypeclassInfo base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__[7] = {
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (mercury__digraph__ClassMethod_for_enum__uenum____digraph__digraph_key__arity1______enum__to_uint_1_1_f_0_10001)),
  ((MR_Box) (mercury__digraph__ClassMethod_for_enum__uenum____digraph__digraph_key__arity1______enum__from_uint_2_2_p_0_10001))
};

static void MR_CALL 
mercury__digraph__IntroducedFrom__pred__key_set_map_union__461__1_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Ys_6,
  MR_Word HeadVar__3_12,
  MR_Word * HeadVar__4_13)
{
  MR_Word Var_16 = (MR_Word) (Ys_6);
  MR_Word Var_17 = (MR_Word) (HeadVar__3_12);
  MR_Word Var_18;

  mercury__sparse_bitset__union_loop_3_p_0(Var_16, Var_17, &Var_18);
  *HeadVar__4_13 = (MR_Word) (Var_18);
}

MR_bool MR_CALL 
mercury__digraph__ClassMethod_for_enum__uenum____digraph__digraph_key__arity1______enum__from_uint_2_2_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Unsigned HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = (MR_Word) (HeadVar__1_1);
  return MR_TRUE;
}

MR_Unsigned MR_CALL 
mercury__digraph__ClassMethod_for_enum__uenum____digraph__digraph_key__arity1______enum__to_uint_1_1_f_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word HeadVar__1_1)
{
  MR_Unsigned HeadVar__2_2 = (MR_Unsigned) (HeadVar__1_1);

  return HeadVar__2_2;
}

void MR_CALL 
mercury__digraph____Compare____modified_tarjan_visit_1_0(
  MR_Word TypeInfo_for_T_11,
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
    MR_Unsigned ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Unsigned ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
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
      MR_Word TypeInfo_14_14;

      {
        TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_14_14, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
        MR_hl_field(0, TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_T_11));
      }
      mercury__tree234____Compare____tree234_2_0(TypeInfo_14_14, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), HeadVar__1_1, (MR_Word) (ArgX2_7), (MR_Word) (ArgY2_8));
    }
  }
}

MR_bool MR_CALL 
mercury__digraph____Unify____modified_tarjan_visit_1_0(
  MR_Word TypeInfo_for_T_9,
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
    MR_Word TypeCtorInfo_10_10;
    MR_Word TypeInfo_11_11;
    MR_Word TypeCtorInfo_12_12;
    MR_Unsigned ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Unsigned ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeCtorInfo_10_10 = (MR_Word) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1);
      TypeCtorInfo_12_12 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0);
      {
        TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_11_11, 0) = ((MR_Box) (TypeCtorInfo_10_10));
        MR_hl_field(0, TypeInfo_11_11, 1) = ((MR_Box) (TypeInfo_for_T_9));
      }
      succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_11_11, TypeCtorInfo_12_12, (MR_Word) (ArgX2_5), (MR_Word) (ArgY2_6));
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__digraph____Compare____modified_tarjan_state_1_0(
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
    MR_Word TypeInfo_19_19;

    {
      TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_19_19, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(0, TypeInfo_19_19, 1) = ((MR_Box) (TypeInfo_for_T_17));
    }
    mercury__tree234____Compare____tree234_2_0(TypeInfo_19_19, TypeInfo_19_19, &SubResult1_6, (MR_Word) (ArgX1_4), (MR_Word) (ArgY1_5));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Word TypeInfo_23_23;

      {
        TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_23_23, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
        MR_hl_field(0, TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_T_17));
      }
      mercury__list____Compare____list_1_0(TypeInfo_23_23, &SubResult2_9, (MR_Word) (ArgX2_7), (MR_Word) (ArgY2_8));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Word TypeInfo_27_27;

        {
          TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_27_27, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
          MR_hl_field(0, TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_for_T_17));
        }
        mercury__sparse_bitset____Compare____sparse_bitset_1_0(TypeInfo_27_27, &SubResult3_12, (MR_Word) (ArgX3_10), (MR_Word) (ArgY3_11));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word TypeInfo_31_31;

          {
            TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_31_31, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_component_1));
            MR_hl_field(0, TypeInfo_31_31, 1) = ((MR_Box) (TypeInfo_for_T_17));
          }
          mercury__list____Compare____list_1_0(TypeInfo_31_31, HeadVar__1_1, (MR_Word) (ArgX4_13), (MR_Word) (ArgY4_14));
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__digraph____Unify____modified_tarjan_state_1_0(
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
    MR_Word TypeInfo_23_23;
    MR_Word TypeCtorInfo_26_26;
    MR_Word TypeInfo_27_27;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    {
      TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_23_23, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(0, TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_T_13));
    }
    succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_23_23, TypeInfo_23_23, (MR_Word) (ArgX1_3), (MR_Word) (ArgY1_4));
    if (succeeded)
    {
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_23_23, (MR_Word) (ArgX2_5), (MR_Word) (ArgY2_6));
      if (succeeded)
      {
        succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(TypeInfo_23_23, (MR_Word) (ArgX3_7), (MR_Word) (ArgY3_8));
        if (succeeded)
        {
          TypeCtorInfo_26_26 = (MR_Word) (&mercury__digraph__digraph__type_ctor_info_component_1);
          {
            TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_27_27, 0) = ((MR_Box) (TypeCtorInfo_26_26));
            MR_hl_field(0, TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_for_T_13));
          }
          succeeded = mercury__list____Unify____list_1_0(TypeInfo_27_27, (MR_Word) (ArgX4_9), (MR_Word) (ArgY4_10));
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__digraph____Compare____key_set_map_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_9_9;
  MR_Word TypeInfo_11_11;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_9_9, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  {
    TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_11_11, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_11_11, 1) = ((MR_Box) (TypeInfo_9_9));
  }
  mercury__tree234____Compare____tree234_2_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_11_11, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mercury__digraph____Unify____key_set_map_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_8_8;
  MR_Word TypeInfo_10_10;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  {
    TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_10_10, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_8_8));
  }
  succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_10_10, Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__digraph____Compare____key_map_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_9_9;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_9_9, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  mercury__tree234____Compare____tree234_2_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_9_9, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mercury__digraph____Unify____key_map_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_8_8;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_8_8, Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__digraph____Compare____digraph_key_set_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_8_8;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  mercury__sparse_bitset____Compare____sparse_bitset_1_0(TypeInfo_8_8, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
mercury__digraph____Unify____digraph_key_set_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_7_7;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_7_7, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(TypeInfo_7_7, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
mercury__digraph____Compare____digraph_key_1_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Unsigned ArgX1_4 = (MR_Unsigned) (HeadVar__2_2);
    MR_Unsigned ArgY1_5 = (MR_Unsigned) (HeadVar__3_3);

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

MR_bool MR_CALL 
mercury__digraph____Unify____digraph_key_1_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Unsigned ArgX1_3 = (MR_Unsigned) (HeadVar__1_1);
    MR_Unsigned ArgY1_4 = (MR_Unsigned) (HeadVar__2_2);

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mercury__digraph____Compare____digraph_1_0(
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
    MR_Unsigned ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Unsigned ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
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
        MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
        MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_17));
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
          MR_hl_field(0, TypeInfo_25_25, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
          MR_hl_field(0, TypeInfo_25_25, 1) = ((MR_Box) (TypeInfo_for_T_17));
        }
        {
          TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_27_27, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
          MR_hl_field(0, TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_25_25));
        }
        mercury__tree234____Compare____tree234_2_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_27_27, &SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word TypeInfo_32_32;
          MR_Word TypeInfo_34_34;

          {
            TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_32_32, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
            MR_hl_field(0, TypeInfo_32_32, 1) = ((MR_Box) (TypeInfo_for_T_17));
          }
          {
            TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_34_34, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
            MR_hl_field(0, TypeInfo_34_34, 1) = ((MR_Box) (TypeInfo_32_32));
          }
          mercury__tree234____Compare____tree234_2_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_34_34, HeadVar__1_1, ArgX4_13, ArgY4_14);
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
    MR_Unsigned ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Unsigned ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeCtorInfo_14_14 = (MR_Word) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1);
      {
        TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_27_27, 0) = ((MR_Box) (TypeCtorInfo_14_14));
        MR_hl_field(0, TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_for_T_13));
      }
      succeeded = mercury__bimap____Unify____bimap_2_0(TypeInfo_for_T_13, TypeInfo_27_27, ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeCtorInfo_18_18 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0);
        TypeCtorInfo_21_21 = (MR_Word) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1);
        {
          TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_29_29, 0) = ((MR_Box) (TypeCtorInfo_21_21));
          MR_hl_field(0, TypeInfo_29_29, 1) = ((MR_Box) (TypeInfo_27_27));
        }
        succeeded = mercury__tree234____Unify____tree234_2_0(TypeCtorInfo_18_18, TypeInfo_29_29, ArgX3_7, ArgY3_8);
        if (succeeded)
          succeeded = mercury__tree234____Unify____tree234_2_0(TypeCtorInfo_18_18, TypeInfo_29_29, ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__digraph____Compare____component_1_0(
  MR_Word TypeInfo_for_T_11,
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;
    MR_Unsigned Var_18 = (MR_Unsigned) (ArgX1_4);
    MR_Unsigned Var_19 = (MR_Unsigned) (ArgY1_5);

    succeeded = (Var_18 < Var_19);
    if (succeeded)
      SubResult1_6 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_18 == Var_19);
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
      MR_Word TypeInfo_15_15;

      {
        TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_15_15, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
        MR_hl_field(0, TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_11));
      }
      mercury__list____Compare____list_1_0(TypeInfo_15_15, HeadVar__1_1, (MR_Word) (ArgX2_7), (MR_Word) (ArgY2_8));
    }
  }
}

MR_bool MR_CALL 
mercury__digraph____Unify____component_1_0(
  MR_Word TypeInfo_for_T_9,
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
    MR_Word TypeCtorInfo_10_10;
    MR_Word TypeInfo_11_11;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer CastX_16 = (MR_Integer) (ArgX1_3);
    MR_Integer CastY_17 = (MR_Integer) (ArgY1_4);

    succeeded = (CastX_16 == CastY_17);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Unsigned ArgX1_14 = (MR_Unsigned) (ArgX1_3);
      MR_Unsigned ArgY1_15 = (MR_Unsigned) (ArgY1_4);

      succeeded = (ArgX1_14 == ArgY1_15);
    }
    if (succeeded)
    {
      TypeCtorInfo_10_10 = (MR_Word) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1);
      {
        TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_11_11, 0) = ((MR_Box) (TypeCtorInfo_10_10));
        MR_hl_field(0, TypeInfo_11_11, 1) = ((MR_Box) (TypeInfo_for_T_9));
      }
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_11_11, (MR_Word) (ArgX2_5), (MR_Word) (ArgY2_6));
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__digraph____Compare____clique_map_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_8_8;
  MR_Word TypeInfo_10_10;
  MR_Word TypeInfo_11_11;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  {
    TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_10_10, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
    MR_hl_field(0, TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  {
    TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_11_11, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_11_11, 1) = ((MR_Box) (TypeInfo_10_10));
  }
  mercury__tree234____Compare____tree234_2_0(TypeInfo_8_8, TypeInfo_11_11, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
mercury__digraph____Unify____clique_map_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_7_7;
  MR_Word TypeInfo_9_9;
  MR_Word TypeInfo_10_10;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_7_7, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_9_9, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
    MR_hl_field(0, TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  {
    TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_10_10, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_9_9));
  }
  succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_7_7, TypeInfo_10_10, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
mercury__digraph__traverse_child_6_p_1(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word Graph_7,
  MR_Word ProcessEdge_8,
  MR_Box Parent_9,
  MR_Word ChildKey_10,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  MR_Box Child_12;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  mercury__digraph__lookup_vertex_3_p_0(TypeInfo_for_T_15, Graph_7, ChildKey_10, &Child_12);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, ProcessEdge_8, (MR_Integer) 1))));
  func_0(((MR_Box) (ProcessEdge_8)), Parent_9, Child_12, STATE_VARIABLE_Acc_0_13, STATE_VARIABLE_Acc_14);
}

void MR_CALL 
mercury__digraph__traverse_child_6_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word Graph_7,
  MR_Word ProcessEdge_8,
  MR_Box Parent_9,
  MR_Word ChildKey_10,
  MR_Box STATE_VARIABLE_Acc_0_13,
  MR_Box * STATE_VARIABLE_Acc_14)
{
  MR_Box Child_12;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  mercury__digraph__lookup_vertex_3_p_0(TypeInfo_for_T_15, Graph_7, ChildKey_10, &Child_12);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, ProcessEdge_8, (MR_Integer) 1))));
  func_0(((MR_Box) (ProcessEdge_8)), Parent_9, Child_12, STATE_VARIABLE_Acc_0_13, STATE_VARIABLE_Acc_14);
}

void MR_CALL 
mercury__digraph__add_reflexive_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word X_4,
  MR_Word STATE_VARIABLE_G_0_6,
  MR_Word * STATE_VARIABLE_G_7)
{
  mercury__digraph__add_edge_4_p_0(TypeInfo_for_T_9, X_4, X_4, STATE_VARIABLE_G_0_6, STATE_VARIABLE_G_7);
}

void MR_CALL 
mercury__digraph__keys_2_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word G_3,
  MR_Word * Keys_4)
{
  MR_Word TypeInfo_11_11;
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 1))));
  MR_Word Var_13;
  MR_Word conv0_Keys_4;

  {
    TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_11_11, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_11_11, 1) = ((MR_Box) (TypeInfo_for_T_9));
  }
  Var_13 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 1))));
  mercury__tree234__keys_acc_3_p_0(TypeInfo_11_11, TypeInfo_for_T_9, (MR_Word) (Var_13), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_Keys_4);
  *Keys_4 = (MR_Word) (conv0_Keys_4);
}

MR_bool MR_CALL 
mercury__digraph__digraph_key_from_uint_2_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Unsigned UInt_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = (MR_Word) (UInt_3);
  return MR_TRUE;
}

MR_Unsigned MR_CALL 
mercury__digraph__digraph_key_to_uint_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word HeadVar__1_1)
{
  MR_Unsigned UInt_3 = (MR_Unsigned) (HeadVar__1_1);

  return UInt_3;
}

void MR_CALL 
mercury__digraph__slow_tc_2_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word G_3,
  MR_Word * TC_4)
{
  MR_Word TypeInfo_17_17;
  MR_Word TypeInfo_19_19;
  MR_Unsigned NextKey_5 = ((MR_Unsigned) ((MR_hl_field(0, G_3, (MR_Integer) 0))));
  MR_Word VMap_6 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 1))));
  MR_Word FwdMap_7 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 2))));
  MR_Word TC0_9;
  MR_Word FwdKeys_10;

  {
    TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_17_17, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_T_14));
  }
  {
    TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_19_19, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_19_19, 1) = ((MR_Box) (TypeInfo_17_17));
  }
  {
    TC0_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TC0_9, 0) = ((MR_Box) (NextKey_5));
    MR_hl_field(0, TC0_9, 1) = ((MR_Box) (VMap_6));
    MR_hl_field(0, TC0_9, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, TC0_9, 3) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__tree234__keys_acc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_19_19, FwdMap_7, (MR_Word) ((MR_Unsigned) 0U), &FwdKeys_10);
  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_49_95_95_91_49_44_32_52_44_32_53_93_95_48_4_p_in__list_0(TypeInfo_for_T_14, G_3, FwdKeys_10, TC0_9, TC_4);
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_49_95_95_91_49_44_32_52_44_32_53_93_95_48_4_p_in__list_0(
  MR_Word Var_18,
  MR_Word Var_19,
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
      MR_Unsigned Var_9 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      mercury__digraph__add_edges_to_reachable_4_p_0(Var_18, Var_19, Var_9, HeadVar__3_3, &Var_13);
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
mercury__digraph__add_edges_to_reachable_4_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word G_5,
  MR_Unsigned XI_6,
  MR_Word STATE_VARIABLE_TC_0_11,
  MR_Word * STATE_VARIABLE_TC_12)
{
  MR_Word TypeInfo_18_18;
  MR_Word TypeClassInfo_for_uenum_23;
  MR_Word X_8 = (MR_Word) (XI_6);
  MR_Word Reachable_10;
  MR_Word Var_28;
  MR_Word _Visited_9;

  {
    TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_16));
  }
  mercury__digraph__find_descendants_6_p_0(TypeInfo_for_T_16, G_5, X_8, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &_Visited_9, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &Reachable_10);
  {
    TypeClassInfo_for_uenum_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_23, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_23, 1) = ((MR_Box) (TypeInfo_for_T_16));
    MR_hl_field(0, TypeClassInfo_for_uenum_23, 2) = ((MR_Box) (TypeInfo_18_18));
  }
  Var_28 = (MR_Word) (Reachable_10);
  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(TypeInfo_for_T_16, X_8, TypeClassInfo_for_uenum_23, Var_28, STATE_VARIABLE_TC_0_11, STATE_VARIABLE_TC_12);
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word TypeClassInfo_for_uenum_19,
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
      MR_Unsigned Var_13 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
      MR_Unsigned Var_14 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
      MR_Unsigned Var_17;
      MR_Word Var_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_17  = Bits;
}
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_55_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(Var_28, Var_29, TypeClassInfo_for_uenum_19, Var_13, Var_14, Var_17, HeadVar__3_3, &Var_18);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_55_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_31,
  MR_Word Var_32,
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
        MR_Word Var_13;
        MR_Box conv0_Var_13;

        conv0_Var_13 = mercury__enum__det_from_uint_1_f_0(TypeClassInfo_for_uenum_22, HeadVar__2_8);
        Var_13 = ((MR_Word) (conv0_Var_13));
        mercury__digraph__add_edge_4_p_0(Var_31, Var_32, Var_13, HeadVar__5_11, HeadVar__6_12);
      }
      else
      {
        MR_Unsigned Var_14 = (HeadVar__4_10 >> 1);
        MR_Unsigned Var_16;
        MR_Unsigned Var_17;
        MR_Unsigned Var_18;
        MR_Unsigned Var_19;
        MR_Word Var_20;
        MR_Unsigned Var_21;
        MR_Unsigned Var_33;
        MR_Unsigned Var_34 = ~((MR_Unsigned) 0U);
        MR_Unsigned next_value_of_HeadVar__2_8;
        MR_Unsigned next_value_of_HeadVar__3_9;
        MR_Unsigned next_value_of_HeadVar__4_10;
        MR_Word next_value_of_HeadVar__5_11;

        Var_33 = (Var_34 << (int) Var_14);
        Var_16 = ~(Var_33);
        Var_17 = (Var_16 & HeadVar__3_9);
        Var_19 = (HeadVar__3_9 >> (int) Var_14);
        Var_18 = (Var_16 & Var_19);
        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_55_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(Var_31, Var_32, TypeClassInfo_for_uenum_22, HeadVar__2_8, Var_17, Var_14, HeadVar__5_11, &Var_20);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_55_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_8_p_in__sparse_bitset_0(
  MR_Word Var_43,
  MR_Word Var_44,
  MR_Word TypeClassInfo_for_uenum_27,
  MR_Unsigned HeadVar__2_10,
  MR_Unsigned HeadVar__3_11,
  MR_Unsigned HeadVar__4_12,
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
      succeeded = (HeadVar__4_12 == (MR_Unsigned) 1U);
      if (succeeded)
      {
        MR_Word Var_17;
        MR_Box conv0_Var_17;

        conv0_Var_17 = mercury__enum__det_from_uint_1_f_0(TypeClassInfo_for_uenum_27, HeadVar__2_10);
        Var_17 = ((MR_Word) (conv0_Var_17));
        mercury__digraph__find_descendants_6_p_0(Var_43, Var_44, Var_17, HeadVar__5_13, HeadVar__6_14, HeadVar__7_15, HeadVar__8_16);
      }
      else
      {
        MR_Unsigned Var_18 = (HeadVar__4_12 >> 1);
        MR_Unsigned Var_20;
        MR_Unsigned Var_21;
        MR_Unsigned Var_22;
        MR_Unsigned Var_23;
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Unsigned Var_26;
        MR_Unsigned Var_45;
        MR_Unsigned Var_46 = ~((MR_Unsigned) 0U);
        MR_Unsigned next_value_of_HeadVar__2_10;
        MR_Unsigned next_value_of_HeadVar__3_11;
        MR_Unsigned next_value_of_HeadVar__4_12;
        MR_Word next_value_of_HeadVar__5_13;
        MR_Word next_value_of_HeadVar__7_15;

        Var_45 = (Var_46 << (int) Var_18);
        Var_20 = ~(Var_45);
        Var_21 = (Var_20 & HeadVar__3_11);
        Var_23 = (HeadVar__3_11 >> (int) Var_18);
        Var_22 = (Var_20 & Var_23);
        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_55_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_8_p_in__sparse_bitset_0(Var_43, Var_44, TypeClassInfo_for_uenum_27, HeadVar__2_10, Var_21, Var_18, HeadVar__5_13, &Var_24, HeadVar__7_15, &Var_25);
        Var_26 = (HeadVar__2_10 + Var_18);
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
mercury__digraph__find_descendants_6_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word G_7,
  MR_Word X_8,
  MR_Word STATE_VARIABLE_Visited_0_12,
  MR_Word * STATE_VARIABLE_Visited_13,
  MR_Word STATE_VARIABLE_Reachable_0_14,
  MR_Word * STATE_VARIABLE_Reachable_15)
{
  MR_bool succeeded;
  MR_Word TypeInfo_21_21;
  MR_Word TypeClassInfo_for_uenum_23;
  MR_Word Var_35 = (MR_Word) (STATE_VARIABLE_Visited_0_12);
  MR_Unsigned Var_36;
  MR_Unsigned Var_37;
  MR_Unsigned Var_38;
  MR_Unsigned Var_39;
  MR_Unsigned Var_40;
  MR_Unsigned Var_42;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_36;

  {
    TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_21_21, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_19));
  }
  {
    TypeClassInfo_for_uenum_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_23, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_23, 1) = ((MR_Box) (TypeInfo_for_T_19));
    MR_hl_field(0, TypeClassInfo_for_uenum_23, 2) = ((MR_Box) (TypeInfo_21_21));
  }
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_23, (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_36 = func_0(((MR_Box) (TypeClassInfo_for_uenum_23)), ((MR_Box) (X_8)));
  Var_36 = ((MR_Unsigned) (conv1_Var_36));
{
#define MR_PROC_LABEL mercury__digraph__find_descendants_6_p_0

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
  succeeded = mercury__sparse_bitset__contains_search_nodes_3_p_0(Var_35, Var_37, Var_38);
  if (succeeded)
  {
    *STATE_VARIABLE_Reachable_15 = STATE_VARIABLE_Reachable_0_14;
    *STATE_VARIABLE_Visited_13 = STATE_VARIABLE_Visited_0_12;
  }
  else
  {
    MR_Word TypeInfo_25_25;
    MR_Word TypeClassInfo_for_uenum_27;
    MR_Word SuccXs_11;
    MR_Word STATE_VARIABLE_Visited_16_16;
    MR_Word STATE_VARIABLE_Reachable_17_17;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Unsigned Var_45;
    MR_Unsigned Var_46;
    MR_Unsigned Var_47;
    MR_Unsigned Var_48;
    MR_Unsigned Var_49;
    MR_Unsigned Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
    MR_Box conv3_Var_45;

    mercury__digraph__lookup_key_set_from_3_p_0(TypeInfo_for_T_19, G_7, X_8, &SuccXs_11);
    {
      TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_25_25, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(0, TypeInfo_25_25, 1) = ((MR_Box) (TypeInfo_for_T_19));
    }
    {
      TypeClassInfo_for_uenum_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_27, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_27, 1) = ((MR_Box) (TypeInfo_for_T_19));
      MR_hl_field(0, TypeClassInfo_for_uenum_27, 2) = ((MR_Box) (TypeInfo_25_25));
    }
    Var_43 = (MR_Word) (STATE_VARIABLE_Visited_0_12);
    func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_27, (MR_Integer) 0)), (MR_Integer) 5))));
    conv3_Var_45 = func_2(((MR_Box) (TypeClassInfo_for_uenum_27)), ((MR_Box) (X_8)));
    Var_45 = ((MR_Unsigned) (conv3_Var_45));
{
#define MR_PROC_LABEL mercury__digraph__find_descendants_6_p_0

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
    mercury__sparse_bitset__insert_loop_4_p_0(Var_46, Var_47, Var_43, &Var_44);
    STATE_VARIABLE_Visited_16_16 = (MR_Word) (Var_44);
    Var_52 = (MR_Word) (SuccXs_11);
    Var_53 = (MR_Word) (STATE_VARIABLE_Reachable_0_14);
    mercury__sparse_bitset__union_loop_3_p_0(Var_52, Var_53, &Var_54);
    STATE_VARIABLE_Reachable_17_17 = (MR_Word) (Var_54);
    Var_55 = (MR_Word) (SuccXs_11);
    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_54_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(TypeInfo_for_T_19, G_7, TypeClassInfo_for_uenum_27, Var_55, STATE_VARIABLE_Visited_16_16, STATE_VARIABLE_Visited_13, STATE_VARIABLE_Reachable_17_17, STATE_VARIABLE_Reachable_15);
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_54_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_42,
  MR_Word Var_43,
  MR_Word TypeClassInfo_for_uenum_26,
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
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Unsigned Var_19 = ((MR_Unsigned) ((MR_hl_field(0, Var_13, (MR_Integer) 0))));
      MR_Unsigned Var_20 = ((MR_Unsigned) ((MR_hl_field(0, Var_13, (MR_Integer) 1))));
      MR_Unsigned Var_23;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__5_5;

{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_54_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_23  = Bits;
}
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_55_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_8_p_in__sparse_bitset_0(Var_42, Var_43, TypeClassInfo_for_uenum_26, Var_19, Var_20, Var_23, HeadVar__3_3, &Var_24, HeadVar__5_5, &Var_25);
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
mercury__digraph__traverse_5_p_1(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word Graph_6,
  MR_Word ProcessVertex_7,
  MR_Word ProcessEdge_8,
  MR_Box STATE_VARIABLE_Acc_0_11,
  MR_Box * STATE_VARIABLE_Acc_12)
{
  MR_Word VertexMap_10 = ((MR_Word) ((MR_hl_field(0, Graph_6, (MR_Integer) 1))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, VertexMap_10, (MR_Integer) 0))));

  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_49_95_95_91_49_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(TypeInfo_for_T_17, TypeInfo_for_A_18, Graph_6, ProcessVertex_7, ProcessEdge_8, Var_25, STATE_VARIABLE_Acc_0_11, STATE_VARIABLE_Acc_12);
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_49_95_95_91_49_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(
  MR_Word Var_55,
  MR_Word Var_56,
  MR_Word Var_57,
  MR_Word Var_58,
  MR_Word Var_59,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
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
          MR_Box Var_9 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
          MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
          MR_Box Var_15;
          MR_Box Var_16;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_HeadVar__3_3;

          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_49_95_95_91_49_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(Var_55, Var_56, Var_57, Var_58, Var_59, Var_11, HeadVar__3_3, &Var_15);
          mercury__digraph__traverse_vertex_7_p_1(Var_55, Var_56, Var_57, Var_58, Var_59, Var_9, Var_10, Var_15, &Var_16);
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
          MR_Box Var_18 = (MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0));
          MR_Word Var_19 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
          MR_Box Var_20 = (MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2));
          MR_Word Var_21 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_22 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 4))));
          MR_Word Var_23 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 5))));
          MR_Word Var_24 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 6))));
          MR_Box Var_27;
          MR_Box Var_28;
          MR_Box Var_29;
          MR_Box Var_30;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_HeadVar__3_3;

          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_49_95_95_91_49_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(Var_55, Var_56, Var_57, Var_58, Var_59, Var_22, HeadVar__3_3, &Var_27);
          mercury__digraph__traverse_vertex_7_p_1(Var_55, Var_56, Var_57, Var_58, Var_59, Var_18, Var_19, Var_27, &Var_28);
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_49_95_95_91_49_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(Var_55, Var_56, Var_57, Var_58, Var_59, Var_23, Var_28, &Var_29);
          mercury__digraph__traverse_vertex_7_p_1(Var_55, Var_56, Var_57, Var_58, Var_59, Var_20, Var_21, Var_29, &Var_30);
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
          MR_Box Var_32 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0));
          MR_Word Var_33 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
          MR_Box Var_34 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2));
          MR_Word Var_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
          MR_Box Var_36 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 4));
          MR_Word Var_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 5))));
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 6))));
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 7))));
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 8))));
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 9))));
          MR_Box Var_44;
          MR_Box Var_45;
          MR_Box Var_46;
          MR_Box Var_47;
          MR_Box Var_48;
          MR_Box Var_49;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_HeadVar__3_3;

          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_49_95_95_91_49_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(Var_55, Var_56, Var_57, Var_58, Var_59, Var_38, HeadVar__3_3, &Var_44);
          mercury__digraph__traverse_vertex_7_p_1(Var_55, Var_56, Var_57, Var_58, Var_59, Var_32, Var_33, Var_44, &Var_45);
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_49_95_95_91_49_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(Var_55, Var_56, Var_57, Var_58, Var_59, Var_39, Var_45, &Var_46);
          mercury__digraph__traverse_vertex_7_p_1(Var_55, Var_56, Var_57, Var_58, Var_59, Var_34, Var_35, Var_46, &Var_47);
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_49_95_95_91_49_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(Var_55, Var_56, Var_57, Var_58, Var_59, Var_40, Var_47, &Var_48);
          mercury__digraph__traverse_vertex_7_p_1(Var_55, Var_56, Var_57, Var_58, Var_59, Var_36, Var_37, Var_48, &Var_49);
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
mercury__digraph__traverse_vertex_7_p_1(
  MR_Word TypeInfo_for_T_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word Graph_8,
  MR_Word ProcessVertex_9,
  MR_Word ProcessEdge_10,
  MR_Box Vertex_11,
  MR_Word VertexKey_12,
  MR_Box STATE_VARIABLE_Acc_0_15,
  MR_Box * STATE_VARIABLE_Acc_16)
{
  MR_Word TypeInfo_25_25;
  MR_Word TypeClassInfo_for_uenum_27;
  MR_Word ChildrenKeys_14;
  MR_Box STATE_VARIABLE_Acc_17_17;
  MR_Word Var_28;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, ProcessVertex_9, (MR_Integer) 1))));

  func_0(((MR_Box) (ProcessVertex_9)), Vertex_11, STATE_VARIABLE_Acc_0_15, &STATE_VARIABLE_Acc_17_17);
  mercury__digraph__lookup_key_set_from_3_p_0(TypeInfo_for_T_19, Graph_8, VertexKey_12, &ChildrenKeys_14);
  {
    TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_25_25, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_25_25, 1) = ((MR_Box) (TypeInfo_for_T_19));
  }
  {
    TypeClassInfo_for_uenum_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_27, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_27, 1) = ((MR_Box) (TypeInfo_for_T_19));
    MR_hl_field(0, TypeClassInfo_for_uenum_27, 2) = ((MR_Box) (TypeInfo_25_25));
  }
  Var_28 = (MR_Word) (ChildrenKeys_14);
  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(TypeInfo_for_T_19, Graph_8, ProcessEdge_10, Vertex_11, TypeClassInfo_for_uenum_27, Var_28, STATE_VARIABLE_Acc_17_17, STATE_VARIABLE_Acc_16);
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_26,
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Box Var_30,
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
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_17  = Bits;
}
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_55_55_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_57_44_32_49_49_93_95_48_6_p_in__sparse_bitset_0(Var_26, Var_28, Var_29, Var_30, TypeClassInfo_for_uenum_19, Var_13, Var_14, Var_17, HeadVar__3_3, &Var_18);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_55_55_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_57_44_32_49_49_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_29,
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Box Var_33,
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
        MR_Word Var_13;
        MR_Box Child_34;
        MR_Box conv0_Var_13;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        conv0_Var_13 = mercury__enum__det_from_uint_1_f_0(TypeClassInfo_for_uenum_22, HeadVar__2_8);
        Var_13 = ((MR_Word) (conv0_Var_13));
        mercury__digraph__lookup_vertex_3_p_0(Var_29, Var_31, Var_13, &Child_34);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Var_32, (MR_Integer) 1))));
        func_1(((MR_Box) (Var_32)), Var_33, Child_34, HeadVar__5_11, HeadVar__6_12);
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
        MR_Unsigned Var_35;
        MR_Unsigned Var_36 = ~((MR_Unsigned) 0U);
        MR_Unsigned next_value_of_HeadVar__2_8;
        MR_Unsigned next_value_of_HeadVar__3_9;
        MR_Unsigned next_value_of_HeadVar__4_10;
        MR_Box next_value_of_HeadVar__5_11;

        Var_35 = (Var_36 << (int) Var_14);
        Var_16 = ~(Var_35);
        Var_17 = (Var_16 & HeadVar__3_9);
        Var_19 = (HeadVar__3_9 >> (int) Var_14);
        Var_18 = (Var_16 & Var_19);
        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_55_55_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_57_44_32_49_49_93_95_48_6_p_in__sparse_bitset_0(Var_29, Var_31, Var_32, Var_33, TypeClassInfo_for_uenum_22, HeadVar__2_8, Var_17, Var_14, HeadVar__5_11, &Var_20);
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
mercury__digraph__traverse_5_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word Graph_6,
  MR_Word ProcessVertex_7,
  MR_Word ProcessEdge_8,
  MR_Box STATE_VARIABLE_Acc_0_11,
  MR_Box * STATE_VARIABLE_Acc_12)
{
  MR_Word VertexMap_10 = ((MR_Word) ((MR_hl_field(0, Graph_6, (MR_Integer) 1))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, VertexMap_10, (MR_Integer) 0))));

  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_50_95_95_91_49_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(TypeInfo_for_T_17, TypeInfo_for_A_18, Graph_6, ProcessVertex_7, ProcessEdge_8, Var_25, STATE_VARIABLE_Acc_0_11, STATE_VARIABLE_Acc_12);
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_50_95_95_91_49_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(
  MR_Word Var_55,
  MR_Word Var_56,
  MR_Word Var_57,
  MR_Word Var_58,
  MR_Word Var_59,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
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
          MR_Box Var_9 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
          MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
          MR_Box Var_15;
          MR_Box Var_16;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_HeadVar__3_3;

          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_50_95_95_91_49_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(Var_55, Var_56, Var_57, Var_58, Var_59, Var_11, HeadVar__3_3, &Var_15);
          mercury__digraph__traverse_vertex_7_p_0(Var_55, Var_56, Var_57, Var_58, Var_59, Var_9, Var_10, Var_15, &Var_16);
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
          MR_Box Var_18 = (MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0));
          MR_Word Var_19 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
          MR_Box Var_20 = (MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2));
          MR_Word Var_21 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_22 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 4))));
          MR_Word Var_23 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 5))));
          MR_Word Var_24 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 6))));
          MR_Box Var_27;
          MR_Box Var_28;
          MR_Box Var_29;
          MR_Box Var_30;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_HeadVar__3_3;

          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_50_95_95_91_49_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(Var_55, Var_56, Var_57, Var_58, Var_59, Var_22, HeadVar__3_3, &Var_27);
          mercury__digraph__traverse_vertex_7_p_0(Var_55, Var_56, Var_57, Var_58, Var_59, Var_18, Var_19, Var_27, &Var_28);
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_50_95_95_91_49_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(Var_55, Var_56, Var_57, Var_58, Var_59, Var_23, Var_28, &Var_29);
          mercury__digraph__traverse_vertex_7_p_0(Var_55, Var_56, Var_57, Var_58, Var_59, Var_20, Var_21, Var_29, &Var_30);
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
          MR_Box Var_32 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0));
          MR_Word Var_33 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
          MR_Box Var_34 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2));
          MR_Word Var_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
          MR_Box Var_36 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 4));
          MR_Word Var_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 5))));
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 6))));
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 7))));
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 8))));
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 9))));
          MR_Box Var_44;
          MR_Box Var_45;
          MR_Box Var_46;
          MR_Box Var_47;
          MR_Box Var_48;
          MR_Box Var_49;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_HeadVar__3_3;

          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_50_95_95_91_49_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(Var_55, Var_56, Var_57, Var_58, Var_59, Var_38, HeadVar__3_3, &Var_44);
          mercury__digraph__traverse_vertex_7_p_0(Var_55, Var_56, Var_57, Var_58, Var_59, Var_32, Var_33, Var_44, &Var_45);
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_50_95_95_91_49_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(Var_55, Var_56, Var_57, Var_58, Var_59, Var_39, Var_45, &Var_46);
          mercury__digraph__traverse_vertex_7_p_0(Var_55, Var_56, Var_57, Var_58, Var_59, Var_34, Var_35, Var_46, &Var_47);
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_50_95_95_91_49_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(Var_55, Var_56, Var_57, Var_58, Var_59, Var_40, Var_47, &Var_48);
          mercury__digraph__traverse_vertex_7_p_0(Var_55, Var_56, Var_57, Var_58, Var_59, Var_36, Var_37, Var_48, &Var_49);
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
mercury__digraph__traverse_vertex_7_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word TypeInfo_for_A_20,
  MR_Word Graph_8,
  MR_Word ProcessVertex_9,
  MR_Word ProcessEdge_10,
  MR_Box Vertex_11,
  MR_Word VertexKey_12,
  MR_Box STATE_VARIABLE_Acc_0_15,
  MR_Box * STATE_VARIABLE_Acc_16)
{
  MR_Word TypeInfo_25_25;
  MR_Word TypeClassInfo_for_uenum_27;
  MR_Word ChildrenKeys_14;
  MR_Box STATE_VARIABLE_Acc_17_17;
  MR_Word Var_28;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, ProcessVertex_9, (MR_Integer) 1))));

  func_0(((MR_Box) (ProcessVertex_9)), Vertex_11, STATE_VARIABLE_Acc_0_15, &STATE_VARIABLE_Acc_17_17);
  mercury__digraph__lookup_key_set_from_3_p_0(TypeInfo_for_T_19, Graph_8, VertexKey_12, &ChildrenKeys_14);
  {
    TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_25_25, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_25_25, 1) = ((MR_Box) (TypeInfo_for_T_19));
  }
  {
    TypeClassInfo_for_uenum_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_27, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_27, 1) = ((MR_Box) (TypeInfo_for_T_19));
    MR_hl_field(0, TypeClassInfo_for_uenum_27, 2) = ((MR_Box) (TypeInfo_25_25));
  }
  Var_28 = (MR_Word) (ChildrenKeys_14);
  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_52_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(TypeInfo_for_T_19, Graph_8, ProcessEdge_10, Vertex_11, TypeClassInfo_for_uenum_27, Var_28, STATE_VARIABLE_Acc_17_17, STATE_VARIABLE_Acc_16);
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_52_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_26,
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Box Var_30,
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
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_52_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_17  = Bits;
}
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_55_56_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_57_44_32_49_49_93_95_48_6_p_in__sparse_bitset_0(Var_26, Var_28, Var_29, Var_30, TypeClassInfo_for_uenum_19, Var_13, Var_14, Var_17, HeadVar__3_3, &Var_18);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_55_56_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_57_44_32_49_49_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_29,
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Box Var_33,
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
        MR_Word Var_13;
        MR_Box Child_34;
        MR_Box conv0_Var_13;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        conv0_Var_13 = mercury__enum__det_from_uint_1_f_0(TypeClassInfo_for_uenum_22, HeadVar__2_8);
        Var_13 = ((MR_Word) (conv0_Var_13));
        mercury__digraph__lookup_vertex_3_p_0(Var_29, Var_31, Var_13, &Child_34);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Var_32, (MR_Integer) 1))));
        func_1(((MR_Box) (Var_32)), Var_33, Child_34, HeadVar__5_11, HeadVar__6_12);
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
        MR_Unsigned Var_35;
        MR_Unsigned Var_36 = ~((MR_Unsigned) 0U);
        MR_Unsigned next_value_of_HeadVar__2_8;
        MR_Unsigned next_value_of_HeadVar__3_9;
        MR_Unsigned next_value_of_HeadVar__4_10;
        MR_Box next_value_of_HeadVar__5_11;

        Var_35 = (Var_36 << (int) Var_14);
        Var_16 = ~(Var_35);
        Var_17 = (Var_16 & HeadVar__3_9);
        Var_19 = (HeadVar__3_9 >> (int) Var_14);
        Var_18 = (Var_16 & Var_19);
        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_55_56_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_57_44_32_49_49_93_95_48_6_p_in__sparse_bitset_0(Var_29, Var_31, Var_32, Var_33, TypeClassInfo_for_uenum_22, HeadVar__2_8, Var_17, Var_14, HeadVar__5_11, &Var_20);
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
mercury__digraph__reflexive_transitive_closure_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word G_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;

  mercury__digraph__basic_tc_2_p_0(TypeInfo_for_T_5, G_3, &Var_4);
  HeadVar__2_2 = mercury__digraph__reflexive_closure_1_f_0(TypeInfo_for_T_5, Var_4);
  return HeadVar__2_2;
}

void MR_CALL 
mercury__digraph__rtc_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word G_3,
  MR_Word * Rtc_4)
{
  MR_Word Var_6;

  mercury__digraph__basic_tc_2_p_0(TypeInfo_for_T_5, G_3, &Var_6);
  *Rtc_4 = mercury__digraph__reflexive_closure_1_f_0(TypeInfo_for_T_5, Var_6);
}

MR_Word MR_CALL 
mercury__digraph__rtc_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word G_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5;

  mercury__digraph__basic_tc_2_p_0(TypeInfo_for_T_4, G_3, &Var_5);
  HeadVar__2_2 = mercury__digraph__reflexive_closure_1_f_0(TypeInfo_for_T_4, Var_5);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__digraph__reflexive_closure_1_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word G_3)
{
  MR_Word Rc_4;
  MR_Word TypeInfo_11_20;
  MR_Word Keys_5;
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 1))));
  MR_Word Var_22;
  MR_Word conv0_Keys_5;

  {
    TypeInfo_11_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_11_20, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_11_20, 1) = ((MR_Box) (TypeInfo_for_T_7));
  }
  Var_22 = ((MR_Word) ((MR_hl_field(0, Var_15, (MR_Integer) 1))));
  mercury__tree234__keys_acc_3_p_0(TypeInfo_11_20, TypeInfo_for_T_7, (MR_Word) (Var_22), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_Keys_5);
  Keys_5 = (MR_Word) (conv0_Keys_5);
  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(TypeInfo_for_T_7, Keys_5, G_3, &Rc_4);
  return Rc_4;
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
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
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      mercury__digraph__add_edge_4_p_0(Var_20, Var_9, Var_9, HeadVar__3_3, &Var_13);
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
mercury__digraph__transitive_closure_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word G_3)
{
  MR_Word Tc_4;

  mercury__digraph__basic_tc_2_p_0(TypeInfo_for_T_5, G_3, &Tc_4);
  return Tc_4;
}

void MR_CALL 
mercury__digraph__tc_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word G_3,
  MR_Word * Tc_4)
{
  mercury__digraph__basic_tc_2_p_0(TypeInfo_for_T_5, G_3, Tc_4);
}

MR_Word MR_CALL 
mercury__digraph__tc_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word G_3)
{
  MR_Word HeadVar__2_2;

  mercury__digraph__basic_tc_2_p_0(TypeInfo_for_T_4, G_3, &HeadVar__2_2);
  return HeadVar__2_2;
}

void MR_CALL 
mercury__digraph__basic_tc_2_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word G_3,
  MR_Word * Tc_4)
{
  MR_Word TypeInfo_18_18;
  MR_Word Comps_5;
  MR_Word RevComps_6;
  MR_Unsigned NextKey_7;
  MR_Word VMap_8;
  MR_Word FwdMap0_9;
  MR_Word SuccMap_11;
  MR_Word PredMap_12;
  MR_Word VMap_32 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 1))));
  MR_Word FwdMap_33 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 2))));
  MR_Word State_38;
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, VMap_32, (MR_Integer) 0))));
  MR_Word _Visit_37;
  MR_Word conv0_RevComps_6;

  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_56_51_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__tree234_0(TypeInfo_for_T_16, FwdMap_33, Var_56, (MR_Word) (&mercury__digraph_scalar_common_4[2]), &_Visit_37, (MR_Word) (&mercury__digraph_scalar_common_2[3]), &State_38);
  Comps_5 = ((MR_Word) ((MR_hl_field(0, State_38, (MR_Integer) 3))));
  {
    TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_component_1));
    MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_16));
  }
  mercury__list__reverse_2_p_0(TypeInfo_18_18, (MR_Word) (Comps_5), &conv0_RevComps_6);
  RevComps_6 = (MR_Word) (conv0_RevComps_6);
  NextKey_7 = ((MR_Unsigned) ((MR_hl_field(0, G_3, (MR_Integer) 0))));
  VMap_8 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 1))));
  FwdMap0_9 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 2))));
  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_6_p_in__list_0(TypeInfo_for_T_16, FwdMap0_9, RevComps_6, (MR_Word) ((MR_Unsigned) 0U), &SuccMap_11, (MR_Word) ((MR_Unsigned) 0U), &PredMap_12);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *Tc_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (NextKey_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (VMap_8));
    MR_hl_field(0, base, 2) = ((MR_Box) (SuccMap_11));
    MR_hl_field(0, base, 3) = ((MR_Box) (PredMap_12));
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_56_51_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__tree234_0(
  MR_Word Var_82,
  MR_Word Var_83,
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
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *HeadVar__6_6 = HeadVar__5_5;
          *HeadVar__4_4 = HeadVar__3_3;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_21;
          MR_Word Var_22;
          MR_Word Var_23;
          MR_Word Var_24;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;
          MR_Word next_value_of_HeadVar__5_5;

          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_56_51_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__tree234_0(Var_82, Var_83, Var_15, HeadVar__3_3, &Var_21, HeadVar__5_5, &Var_22);
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_105_102_105_101_100_95_116_97_114_106_97_110_95_109_97_105_110_95_108_111_111_112_95_95_91_51_93_95_48_7_p_0(Var_82, Var_83, Var_14, Var_21, &Var_23, Var_22, &Var_24);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_16;
          next_value_of_HeadVar__3_3 = Var_23;
          next_value_of_HeadVar__5_5 = Var_24;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          HeadVar__5_5 = next_value_of_HeadVar__5_5;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_27 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_29 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_30 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 4))));
          MR_Word Var_31 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 5))));
          MR_Word Var_32 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 6))));
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;
          MR_Word next_value_of_HeadVar__5_5;

          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_56_51_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__tree234_0(Var_82, Var_83, Var_30, HeadVar__3_3, &Var_37, HeadVar__5_5, &Var_38);
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_105_102_105_101_100_95_116_97_114_106_97_110_95_109_97_105_110_95_108_111_111_112_95_95_91_51_93_95_48_7_p_0(Var_82, Var_83, Var_27, Var_37, &Var_39, Var_38, &Var_40);
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_56_51_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__tree234_0(Var_82, Var_83, Var_31, Var_39, &Var_41, Var_40, &Var_42);
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_105_102_105_101_100_95_116_97_114_106_97_110_95_109_97_105_110_95_108_111_111_112_95_95_91_51_93_95_48_7_p_0(Var_82, Var_83, Var_29, Var_41, &Var_43, Var_42, &Var_44);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_32;
          next_value_of_HeadVar__3_3 = Var_43;
          next_value_of_HeadVar__5_5 = Var_44;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          HeadVar__5_5 = next_value_of_HeadVar__5_5;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Var_47 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_49 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_51 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 5))));
          MR_Word Var_52 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 6))));
          MR_Word Var_53 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 7))));
          MR_Word Var_54 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 8))));
          MR_Word Var_55 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 9))));
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Word Var_71;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;
          MR_Word next_value_of_HeadVar__5_5;

          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_56_51_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__tree234_0(Var_82, Var_83, Var_52, HeadVar__3_3, &Var_60, HeadVar__5_5, &Var_61);
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_105_102_105_101_100_95_116_97_114_106_97_110_95_109_97_105_110_95_108_111_111_112_95_95_91_51_93_95_48_7_p_0(Var_82, Var_83, Var_47, Var_60, &Var_62, Var_61, &Var_63);
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_56_51_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__tree234_0(Var_82, Var_83, Var_53, Var_62, &Var_64, Var_63, &Var_65);
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_105_102_105_101_100_95_116_97_114_106_97_110_95_109_97_105_110_95_108_111_111_112_95_95_91_51_93_95_48_7_p_0(Var_82, Var_83, Var_49, Var_64, &Var_66, Var_65, &Var_67);
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_56_51_95_95_91_49_44_32_50_44_32_51_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__tree234_0(Var_82, Var_83, Var_54, Var_66, &Var_68, Var_67, &Var_69);
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_105_102_105_101_100_95_116_97_114_106_97_110_95_109_97_105_110_95_108_111_111_112_95_95_91_51_93_95_48_7_p_0(Var_82, Var_83, Var_51, Var_68, &Var_70, Var_69, &Var_71);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_55;
          next_value_of_HeadVar__3_3 = Var_70;
          next_value_of_HeadVar__5_5 = Var_71;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          HeadVar__5_5 = next_value_of_HeadVar__5_5;
          continue;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_105_102_105_101_100_95_116_97_114_106_97_110_95_109_97_105_110_95_108_111_111_112_95_95_91_51_93_95_48_7_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word OrigEdges_8,
  MR_Word KeyV_10,
  MR_Word STATE_VARIABLE_Visit_0_13,
  MR_Word * STATE_VARIABLE_Visit_14,
  MR_Word STATE_VARIABLE_State_0_15,
  MR_Word * STATE_VARIABLE_State_16)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_Visit_17_17;
  MR_Word TypeInfo_22_32;
  MR_Unsigned Counter0_19 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Visit_0_13, (MR_Integer) 0))));
  MR_Word Map0_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Visit_0_13, (MR_Integer) 1))));
  MR_Word Map_21;
  MR_Unsigned Counter_22;
  MR_Unsigned Var_23;
  MR_Word conv0_Map_21;

  {
    TypeInfo_22_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_22_32, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_22_32, 1) = ((MR_Box) (TypeInfo_for_T_18));
  }
  succeeded = mercury__tree234__insert_4_p_0(TypeInfo_22_32, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), ((MR_Box) (KeyV_10)), ((MR_Box) (Counter0_19)), (MR_Word) (Map0_20), &conv0_Map_21);
  if (succeeded)
  {
    Map_21 = (MR_Word) (conv0_Map_21);
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    Var_23 = (MR_Unsigned) 1U;
    Counter_22 = (Counter0_19 + Var_23);
    {
      STATE_VARIABLE_Visit_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Visit_17_17, 0) = ((MR_Box) (Counter_22));
      MR_hl_field(0, STATE_VARIABLE_Visit_17_17, 1) = ((MR_Box) (Map_21));
    }
    succeeded = MR_TRUE;
  }
  if (succeeded)
    mercury__digraph__modified_tarjan_visit_6_p_0(TypeInfo_for_T_18, OrigEdges_8, KeyV_10, STATE_VARIABLE_Visit_17_17, STATE_VARIABLE_Visit_14, STATE_VARIABLE_State_0_15, STATE_VARIABLE_State_16);
  else
  {
    *STATE_VARIABLE_State_16 = STATE_VARIABLE_State_0_15;
    *STATE_VARIABLE_Visit_14 = STATE_VARIABLE_Visit_0_13;
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_44_32_49_50_93_95_48_8_p_in__sparse_bitset_0(
  MR_Word Var_39,
  MR_Word Var_40,
  MR_Word Var_41,
  MR_Word TypeClassInfo_for_uenum_27,
  MR_Unsigned HeadVar__2_10,
  MR_Unsigned HeadVar__3_11,
  MR_Unsigned HeadVar__4_12,
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
      succeeded = (HeadVar__4_12 == (MR_Unsigned) 1U);
      if (succeeded)
      {
        MR_Word Var_17;
        MR_Box conv0_Var_17;

        conv0_Var_17 = mercury__enum__det_from_uint_1_f_0(TypeClassInfo_for_uenum_27, HeadVar__2_10);
        Var_17 = ((MR_Word) (conv0_Var_17));
        mercury__digraph__modified_tarjan_visit_v_w_7_p_0(Var_39, Var_40, Var_41, Var_17, HeadVar__5_13, HeadVar__6_14, HeadVar__7_15, HeadVar__8_16);
      }
      else
      {
        MR_Unsigned Var_18 = (HeadVar__4_12 >> 1);
        MR_Unsigned Var_20;
        MR_Unsigned Var_21;
        MR_Unsigned Var_22;
        MR_Unsigned Var_23;
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Unsigned Var_26;
        MR_Unsigned Var_42;
        MR_Unsigned Var_43 = ~((MR_Unsigned) 0U);
        MR_Unsigned next_value_of_HeadVar__2_10;
        MR_Unsigned next_value_of_HeadVar__3_11;
        MR_Unsigned next_value_of_HeadVar__4_12;
        MR_Word next_value_of_HeadVar__5_13;
        MR_Word next_value_of_HeadVar__7_15;

        Var_42 = (Var_43 << (int) Var_18);
        Var_20 = ~(Var_42);
        Var_21 = (Var_20 & HeadVar__3_11);
        Var_23 = (HeadVar__3_11 >> (int) Var_18);
        Var_22 = (Var_20 & Var_23);
        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_44_32_49_50_93_95_48_8_p_in__sparse_bitset_0(Var_39, Var_40, Var_41, TypeClassInfo_for_uenum_27, HeadVar__2_10, Var_21, Var_18, HeadVar__5_13, &Var_24, HeadVar__7_15, &Var_25);
        Var_26 = (HeadVar__2_10 + Var_18);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_54_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_38,
  MR_Word Var_39,
  MR_Word Var_40,
  MR_Word TypeClassInfo_for_uenum_26,
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
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Unsigned Var_19 = ((MR_Unsigned) ((MR_hl_field(0, Var_13, (MR_Integer) 0))));
      MR_Unsigned Var_20 = ((MR_Unsigned) ((MR_hl_field(0, Var_13, (MR_Integer) 1))));
      MR_Unsigned Var_23;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__5_5;

{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_54_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_23  = Bits;
}
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_44_32_49_50_93_95_48_8_p_in__sparse_bitset_0(Var_38, Var_39, Var_40, TypeClassInfo_for_uenum_26, Var_19, Var_20, Var_23, HeadVar__3_3, &Var_24, HeadVar__5_5, &Var_25);
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
mercury__digraph__modified_tarjan_visit_v_w_7_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_Word OrigEdges_8,
  MR_Word V_9,
  MR_Word W_10,
  MR_Word STATE_VARIABLE_Visit_0_18,
  MR_Word * STATE_VARIABLE_Visit_19,
  MR_Word STATE_VARIABLE_State_0_20,
  MR_Word * STATE_VARIABLE_State_21)
{
  MR_bool succeeded;
  MR_Word Popped_13;
  MR_Word STATE_VARIABLE_State_24_24;
  MR_Word STATE_VARIABLE_Visit_22_22;
  MR_Word TypeInfo_22_55;
  MR_Unsigned Counter0_42 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Visit_0_18, (MR_Integer) 0))));
  MR_Word Map0_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Visit_0_18, (MR_Integer) 1))));
  MR_Word Map_44;
  MR_Unsigned Counter_45;
  MR_Unsigned Var_46;
  MR_Word conv0_Map_44;
  MR_Word TypeInfo_37_37;
  MR_Word TypeClassInfo_for_uenum_39;
  MR_Word Var_57;
  MR_Unsigned Var_58;
  MR_Unsigned Var_59;
  MR_Unsigned Var_60;
  MR_Unsigned Var_61;
  MR_Unsigned Var_62;
  MR_Unsigned Var_64;
  MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
  MR_Box conv2_Var_58;

  {
    TypeInfo_22_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_22_55, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_22_55, 1) = ((MR_Box) (TypeInfo_for_T_35));
  }
  succeeded = mercury__tree234__insert_4_p_0(TypeInfo_22_55, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), ((MR_Box) (W_10)), ((MR_Box) (Counter0_42)), (MR_Word) (Map0_43), &conv0_Map_44);
  if (succeeded)
  {
    Map_44 = (MR_Word) (conv0_Map_44);
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    Var_46 = (MR_Unsigned) 1U;
    Counter_45 = (Counter0_42 + Var_46);
    {
      STATE_VARIABLE_Visit_22_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Visit_22_22, 0) = ((MR_Box) (Counter_45));
      MR_hl_field(0, STATE_VARIABLE_Visit_22_22, 1) = ((MR_Box) (Map_44));
    }
    succeeded = MR_TRUE;
  }
  if (succeeded)
    mercury__digraph__modified_tarjan_visit_6_p_0(TypeInfo_for_T_35, OrigEdges_8, W_10, STATE_VARIABLE_Visit_22_22, STATE_VARIABLE_Visit_19, STATE_VARIABLE_State_0_20, &STATE_VARIABLE_State_24_24);
  else
  {
    STATE_VARIABLE_State_24_24 = STATE_VARIABLE_State_0_20;
    *STATE_VARIABLE_Visit_19 = STATE_VARIABLE_Visit_0_18;
  }
  Popped_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_State_24_24, (MR_Integer) 2))));
  Var_57 = (MR_Word) (Popped_13);
  {
    TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_37_37, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_37_37, 1) = ((MR_Box) (TypeInfo_for_T_35));
  }
  {
    TypeClassInfo_for_uenum_39 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_39, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_39, 1) = ((MR_Box) (TypeInfo_for_T_35));
    MR_hl_field(0, TypeClassInfo_for_uenum_39, 2) = ((MR_Box) (TypeInfo_37_37));
  }
  func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_39, (MR_Integer) 0)), (MR_Integer) 5))));
  conv2_Var_58 = func_1(((MR_Box) (TypeClassInfo_for_uenum_39)), ((MR_Box) (W_10)));
  Var_58 = ((MR_Unsigned) (conv2_Var_58));
{
#define MR_PROC_LABEL mercury__digraph__modified_tarjan_visit_v_w_7_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_62  = Bits;
}
  Var_61 = (Var_62 - (MR_Unsigned) 1U);
  Var_64 = ~(Var_61);
  Var_59 = (Var_58 & Var_64);
  Var_60 = (Var_58 & Var_61);
  succeeded = mercury__sparse_bitset__contains_search_nodes_3_p_0(Var_57, Var_59, Var_60);
  if (succeeded)
    *STATE_VARIABLE_State_21 = STATE_VARIABLE_State_24_24;
  else
  {
    MR_Word TypeInfo_41_41;
    MR_Word RootMap0_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_State_24_24, (MR_Integer) 0))));
    MR_Word RootV_15;
    MR_Word RootW_16;
    MR_Box conv3_RootV_15;
    MR_Box conv4_RootW_16;
    MR_Word VisitMap_65;
    MR_Unsigned OrderX_66;
    MR_Unsigned OrderY_67;
    MR_Box conv5_OrderX_66;
    MR_Box conv6_OrderY_67;

    {
      TypeInfo_41_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_41_41, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(0, TypeInfo_41_41, 1) = ((MR_Box) (TypeInfo_for_T_35));
    }
    mercury__map__lookup_3_p_0(TypeInfo_41_41, TypeInfo_41_41, (MR_Word) (RootMap0_14), ((MR_Box) (V_9)), &conv3_RootV_15);
    RootV_15 = ((MR_Word) (conv3_RootV_15));
    mercury__map__lookup_3_p_0(TypeInfo_41_41, TypeInfo_41_41, (MR_Word) (RootMap0_14), ((MR_Box) (W_10)), &conv4_RootW_16);
    RootW_16 = ((MR_Word) (conv4_RootW_16));
    VisitMap_65 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_Visit_19, (MR_Integer) 1))));
    mercury__map__lookup_3_p_0(TypeInfo_41_41, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (VisitMap_65), ((MR_Box) (RootV_15)), &conv5_OrderX_66);
    OrderX_66 = ((MR_Unsigned) (conv5_OrderX_66));
    mercury__map__lookup_3_p_0(TypeInfo_41_41, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (VisitMap_65), ((MR_Box) (RootW_16)), &conv6_OrderY_67);
    OrderY_67 = ((MR_Unsigned) (conv6_OrderY_67));
    succeeded = (OrderY_67 < OrderX_66);
    if (succeeded)
    {
      MR_Word RootMap_17;
      MR_Word conv7_RootMap_17;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;

      mercury__map__det_update_4_p_0(TypeInfo_41_41, TypeInfo_41_41, ((MR_Box) (V_9)), ((MR_Box) (RootW_16)), (MR_Word) (RootMap0_14), &conv7_RootMap_17);
      RootMap_17 = (MR_Word) (conv7_RootMap_17);
      Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_State_24_24, (MR_Integer) 1))));
      Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_State_24_24, (MR_Integer) 2))));
      Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_State_24_24, (MR_Integer) 3))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_State_21 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (RootMap_17));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_32));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_33));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_34));
      }
    }
    else
      *STATE_VARIABLE_State_21 = STATE_VARIABLE_State_24_24;
  }
}

static void MR_CALL 
mercury__digraph__modified_tarjan_visit_6_p_0(
  MR_Word TypeInfo_for_T_80,
  MR_Word OrigEdges_7,
  MR_Word V_8,
  MR_Word STATE_VARIABLE_Visit_0_17,
  MR_Word * STATE_VARIABLE_Visit_18,
  MR_Word STATE_VARIABLE_State_0_19,
  MR_Word * STATE_VARIABLE_State_20)
{
  MR_bool succeeded;
  MR_Word TypeInfo_89_89;
  MR_Word TypeClassInfo_for_uenum_91;
  MR_Word RootMap_11;
  MR_Word SuccVs_13;
  MR_Word STATE_VARIABLE_RootMap_21_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_State_0_19, (MR_Integer) 0))));
  MR_Word STATE_VARIABLE_Stack_22_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_State_0_19, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_RootMap_24_24;
  MR_Word STATE_VARIABLE_Stack_25_25;
  MR_Word STATE_VARIABLE_State_27_27;
  MR_Word STATE_VARIABLE_State_30_30;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Unsigned VI_97;
  MR_Word Var_107;
  MR_Word conv0_STATE_VARIABLE_RootMap_24_24;
  MR_Word SuccV0_98;
  MR_Word TypeInfo_14_103;
  MR_Box conv1_SuccV0_98;
  MR_Word Var_96;
  MR_Box conv2_Var_96;
  MR_Integer CastX_114;
  MR_Integer CastY_115;

  {
    TypeInfo_89_89 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_89_89, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_89_89, 1) = ((MR_Box) (TypeInfo_for_T_80));
  }
  mercury__map__det_insert_4_p_0(TypeInfo_89_89, TypeInfo_89_89, ((MR_Box) (V_8)), ((MR_Box) (V_8)), (MR_Word) (STATE_VARIABLE_RootMap_21_21), &conv0_STATE_VARIABLE_RootMap_24_24);
  STATE_VARIABLE_RootMap_24_24 = (MR_Word) (conv0_STATE_VARIABLE_RootMap_24_24);
  {
    STATE_VARIABLE_Stack_25_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, STATE_VARIABLE_Stack_25_25, 0) = ((MR_Box) (V_8));
    MR_hl_field(1, STATE_VARIABLE_Stack_25_25, 1) = ((MR_Box) (STATE_VARIABLE_Stack_22_22));
  }
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_State_0_19, (MR_Integer) 2))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_State_0_19, (MR_Integer) 3))));
  {
    STATE_VARIABLE_State_27_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_State_27_27, 0) = ((MR_Box) (STATE_VARIABLE_RootMap_24_24));
    MR_hl_field(0, STATE_VARIABLE_State_27_27, 1) = ((MR_Box) (STATE_VARIABLE_Stack_25_25));
    MR_hl_field(0, STATE_VARIABLE_State_27_27, 2) = ((MR_Box) (Var_50));
    MR_hl_field(0, STATE_VARIABLE_State_27_27, 3) = ((MR_Box) (Var_51));
  }
  VI_97 = (MR_Unsigned) (V_8);
  {
    TypeInfo_14_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_14_103, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_14_103, 1) = ((MR_Box) (TypeInfo_89_89));
  }
  succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_14_103, OrigEdges_7, ((MR_Box) (VI_97)), &conv1_SuccV0_98);
  if (succeeded)
  {
    SuccV0_98 = ((MR_Word) (conv1_SuccV0_98));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    SuccVs_13 = SuccV0_98;
  else
    SuccVs_13 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  {
    TypeClassInfo_for_uenum_91 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_91, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_91, 1) = ((MR_Box) (TypeInfo_for_T_80));
    MR_hl_field(0, TypeClassInfo_for_uenum_91, 2) = ((MR_Box) (TypeInfo_89_89));
  }
  Var_107 = (MR_Word) (SuccVs_13);
  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_54_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(TypeInfo_for_T_80, OrigEdges_7, V_8, TypeClassInfo_for_uenum_91, Var_107, STATE_VARIABLE_Visit_0_17, STATE_VARIABLE_Visit_18, STATE_VARIABLE_State_27_27, &STATE_VARIABLE_State_30_30);
  RootMap_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_State_30_30, (MR_Integer) 0))));
  succeeded = mercury__tree234__search_3_p_0(TypeInfo_89_89, TypeInfo_89_89, (MR_Word) (RootMap_11), ((MR_Box) (V_8)), &conv2_Var_96);
  if (succeeded)
  {
    Var_96 = ((MR_Word) (conv2_Var_96));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    CastX_114 = (MR_Integer) (V_8);
    CastY_115 = (MR_Integer) (Var_96);
    succeeded = (CastX_114 == CastY_115);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Unsigned ArgX1_112 = (MR_Unsigned) (V_8);
      MR_Unsigned ArgY1_113 = (MR_Unsigned) (Var_96);

      succeeded = (ArgX1_112 == ArgY1_113);
    }
  }
  if (succeeded)
  {
    MR_Word TypeInfo_10_131;
    MR_Word Ws_16;
    MR_Word STATE_VARIABLE_Stack_32_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_State_30_30, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_Popped_33_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_State_30_30, (MR_Integer) 2))));
    MR_Word STATE_VARIABLE_Comps_34_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_State_30_30, (MR_Integer) 3))));
    MR_Word STATE_VARIABLE_Stack_35_35;
    MR_Word STATE_VARIABLE_Popped_36_36;
    MR_Word STATE_VARIABLE_Popped_37_37;
    MR_Word STATE_VARIABLE_Comps_38_38;
    MR_Word Var_39;
    MR_Word Var_68;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Unsigned Var_118;
    MR_Unsigned Var_119;
    MR_Unsigned Var_120;
    MR_Unsigned Var_121;
    MR_Unsigned Var_122;
    MR_Unsigned Var_124;
    MR_Word Var_125;
    MR_Word Var_129;
    MR_Word Var_137;
    MR_Word Var_138;
    MR_Word Var_139;
    MR_Box MR_CALL (* func_3)(MR_Box, MR_Box);
    MR_Box conv4_Var_118;
    MR_Word conv5_Var_129;

    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_99_111_109_112_111_110_101_110_116_95_95_91_49_93_95_48_4_p_0(V_8, &Ws_16, STATE_VARIABLE_Stack_32_32, &STATE_VARIABLE_Stack_35_35);
    Var_116 = (MR_Word) (STATE_VARIABLE_Popped_33_33);
    func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_91, (MR_Integer) 0)), (MR_Integer) 5))));
    conv4_Var_118 = func_3(((MR_Box) (TypeClassInfo_for_uenum_91)), ((MR_Box) (V_8)));
    Var_118 = ((MR_Unsigned) (conv4_Var_118));
{
#define MR_PROC_LABEL mercury__digraph__modified_tarjan_visit_6_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_122  = Bits;
}
    Var_121 = (Var_122 - (MR_Unsigned) 1U);
    Var_124 = ~(Var_121);
    Var_119 = (Var_118 & Var_124);
    Var_120 = (Var_118 & Var_121);
    mercury__sparse_bitset__insert_loop_4_p_0(Var_119, Var_120, Var_116, &Var_117);
    STATE_VARIABLE_Popped_36_36 = (MR_Word) (Var_117);
    mercury__sparse_bitset__list_to_set_get_runs_3_p_0(TypeClassInfo_for_uenum_91, (MR_Word) (Ws_16), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv5_Var_129);
    Var_129 = (MR_Word) (conv5_Var_129);
{
#define MR_PROC_LABEL mercury__digraph__modified_tarjan_visit_6_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_91 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_131  = TypeInfo;
}
    if ((Var_129 == (MR_Word) ((MR_Unsigned) 0U)))
      Var_125 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
    else
    {
      MR_Word Var_133 = ((MR_Word) ((MR_hl_field(1, Var_129, (MR_Integer) 0))));
      MR_Word Var_134 = ((MR_Word) ((MR_hl_field(1, Var_129, (MR_Integer) 1))));
      MR_Word conv6_Var_125;

      mercury__sparse_bitset__union_list_passes_3_p_0(TypeInfo_10_131, (MR_Word) (Var_133), (MR_Word) (Var_134), &conv6_Var_125);
      Var_125 = (MR_Word) (conv6_Var_125);
    }
    Var_137 = (MR_Word) (Var_125);
    Var_138 = (MR_Word) (STATE_VARIABLE_Popped_36_36);
    mercury__sparse_bitset__union_loop_3_p_0(Var_137, Var_138, &Var_139);
    STATE_VARIABLE_Popped_37_37 = (MR_Word) (Var_139);
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_39, 0) = ((MR_Box) (V_8));
      MR_hl_field(0, Var_39, 1) = ((MR_Box) (Ws_16));
    }
    {
      STATE_VARIABLE_Comps_38_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Comps_38_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(1, STATE_VARIABLE_Comps_38_38, 1) = ((MR_Box) (STATE_VARIABLE_Comps_34_34));
    }
    Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_State_30_30, (MR_Integer) 0))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_State_20 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_68));
      MR_hl_field(0, base, 1) = ((MR_Box) (STATE_VARIABLE_Stack_35_35));
      MR_hl_field(0, base, 2) = ((MR_Box) (STATE_VARIABLE_Popped_37_37));
      MR_hl_field(0, base, 3) = ((MR_Box) (STATE_VARIABLE_Comps_38_38));
    }
  }
  else
    *STATE_VARIABLE_State_20 = STATE_VARIABLE_State_30_30;
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_99_111_109_112_111_110_101_110_116_95_95_91_49_93_95_48_4_p_0(
  MR_Word Root_5,
  MR_Word * NonRoots_6,
  MR_Word STATE_VARIABLE_Stack_0_10,
  MR_Word * STATE_VARIABLE_Stack_11)
{
  MR_bool succeeded;

  if ((STATE_VARIABLE_Stack_0_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140digraph.pop_component\'/4", (MR_String) "empty stack");
      return;
    }
  else
  {
    MR_Word V_8 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Stack_0_10, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_Stack_12_12 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Stack_0_10, (MR_Integer) 1))));
    MR_Integer CastX_19 = (MR_Integer) (V_8);
    MR_Integer CastY_20 = (MR_Integer) (Root_5);

    succeeded = (CastX_19 == CastY_20);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Unsigned ArgX1_17 = (MR_Unsigned) (V_8);
      MR_Unsigned ArgY1_18 = (MR_Unsigned) (Root_5);

      succeeded = (ArgX1_17 == ArgY1_18);
    }
    if (succeeded)
    {
      *NonRoots_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Stack_11 = STATE_VARIABLE_Stack_12_12;
    }
    else
    {
      MR_Word * AddrTailNonRoots_21;

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *NonRoots_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (V_8));
        MR_hl_field(1, base, 1) = NULL;
      }
      AddrTailNonRoots_21 = (MR_Word *) (&(MR_hl_field(1, *NonRoots_6, (MR_Integer) 1)));
      mercury__digraph__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_99_111_109_112_111_110_101_110_116_95_95_91_49_93_95_48_95_95_49_4_p_0(Root_5, AddrTailNonRoots_21, STATE_VARIABLE_Stack_12_12, STATE_VARIABLE_Stack_11);
    }
  }
}

static void MR_CALL 
mercury__digraph__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_99_111_109_112_111_110_101_110_116_95_95_91_49_93_95_48_95_95_49_4_p_0(
  MR_Word Root_5,
  MR_Word * AddrOfNonRoots_22,
  MR_Word STATE_VARIABLE_Stack_0_10,
  MR_Word * STATE_VARIABLE_Stack_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((STATE_VARIABLE_Stack_0_10 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140digraph.pop_component\'/4", (MR_String) "empty stack");
        return;
      }
    else
    {
      MR_Word V_8 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Stack_0_10, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Stack_12_12 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Stack_0_10, (MR_Integer) 1))));
      MR_Integer CastX_19 = (MR_Integer) (V_8);
      MR_Integer CastY_20 = (MR_Integer) (Root_5);

      succeeded = (CastX_19 == CastY_20);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Unsigned ArgX1_17 = (MR_Unsigned) (V_8);
        MR_Unsigned ArgY1_18 = (MR_Unsigned) (Root_5);

        succeeded = (ArgX1_17 == ArgY1_18);
      }
      if (succeeded)
      {
        *AddrOfNonRoots_22 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Stack_11 = STATE_VARIABLE_Stack_12_12;
      }
      else
      {
        MR_Word * AddrTailNonRoots_21;
        MR_Word NonRoots_23;
        MR_Word * next_value_of_AddrOfNonRoots_22;
        MR_Word next_value_of_STATE_VARIABLE_Stack_0_10;

        {
          NonRoots_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, NonRoots_23, 0) = ((MR_Box) (V_8));
          MR_hl_field(1, NonRoots_23, 1) = NULL;
        }
        AddrTailNonRoots_21 = (MR_Word *) (&(MR_hl_field(1, NonRoots_23, (MR_Integer) 1)));
        *AddrOfNonRoots_22 = NonRoots_23;
        // direct tailcall eliminated
        ;
        next_value_of_AddrOfNonRoots_22 = AddrTailNonRoots_21;
        next_value_of_STATE_VARIABLE_Stack_0_10 = STATE_VARIABLE_Stack_12_12;
        AddrOfNonRoots_22 = next_value_of_AddrOfNonRoots_22;
        STATE_VARIABLE_Stack_0_10 = next_value_of_STATE_VARIABLE_Stack_0_10;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_6_p_in__list_0(
  MR_Word Var_40,
  MR_Word Var_41,
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
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__5_5;

      mercury__digraph__btc_process_component_6_p_0(Var_40, Var_41, Var_13, HeadVar__3_3, &Var_19, HeadVar__5_5, &Var_20);
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
mercury__digraph__btc_process_component_6_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word OrigEdges_7,
  MR_Word Comp_8,
  MR_Word STATE_VARIABLE_SuccMap_0_19,
  MR_Word * STATE_VARIABLE_SuccMap_20,
  MR_Word STATE_VARIABLE_PredMap_0_21,
  MR_Word * STATE_VARIABLE_PredMap_22)
{
  MR_bool succeeded;
  MR_Word TypeInfo_37_37;
  MR_Word TypeInfo_39_39;
  MR_Word V_11 = ((MR_Word) ((MR_hl_field(0, Comp_8, (MR_Integer) 0))));
  MR_Word Ws_12 = ((MR_Word) ((MR_hl_field(0, Comp_8, (MR_Integer) 1))));
  MR_Word SuccV0_13;
  MR_Word SuccV_14;
  MR_Unsigned VI_15;
  MR_Word Var_24;
  MR_Word STATE_VARIABLE_SuccMap_25_25;
  MR_Unsigned VI_53 = (MR_Unsigned) (V_11);
  MR_Word SuccV0_54;
  MR_Word TypeInfo_12_57;
  MR_Word TypeInfo_14_59;
  MR_Box conv0_SuccV0_54;

  {
    TypeInfo_12_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_12_57, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_12_57, 1) = ((MR_Box) (TypeInfo_for_T_32));
  }
  {
    TypeInfo_14_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_14_59, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_14_59, 1) = ((MR_Box) (TypeInfo_12_57));
  }
  succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_14_59, STATE_VARIABLE_SuccMap_0_19, ((MR_Box) (VI_53)), &conv0_SuccV0_54);
  if (succeeded)
  {
    SuccV0_54 = ((MR_Word) (conv0_SuccV0_54));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    SuccV0_13 = SuccV0_54;
  else
    SuccV0_13 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (V_11));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) (Ws_12));
  }
  {
    TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_37_37, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_37_37, 1) = ((MR_Box) (TypeInfo_for_T_32));
  }
  {
    TypeInfo_39_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_39_39, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_39_39, 1) = ((MR_Box) (TypeInfo_37_37));
  }
  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__list_0(TypeInfo_for_T_32, OrigEdges_7, STATE_VARIABLE_SuccMap_0_19, Var_24, SuccV0_13, &SuccV_14);
  VI_15 = (MR_Unsigned) (V_11);
  mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_39_39, ((MR_Box) (VI_15)), ((MR_Box) (SuccV_14)), STATE_VARIABLE_SuccMap_0_19, &STATE_VARIABLE_SuccMap_25_25);
  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__list_0(TypeInfo_for_T_32, SuccV_14, Ws_12, STATE_VARIABLE_SuccMap_25_25, STATE_VARIABLE_SuccMap_20);
  if ((Ws_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word TypeClassInfo_for_uenum_50;
    MR_Word Var_63;

    {
      TypeClassInfo_for_uenum_50 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_50, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_50, 1) = ((MR_Box) (TypeInfo_for_T_32));
      MR_hl_field(0, TypeClassInfo_for_uenum_50, 2) = ((MR_Box) (TypeInfo_37_37));
    }
    Var_63 = (MR_Word) (SuccV_14);
    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(TypeInfo_for_T_32, V_11, TypeClassInfo_for_uenum_50, Var_63, STATE_VARIABLE_PredMap_0_21, STATE_VARIABLE_PredMap_22);
  }
  else
  {
    MR_Word TypeClassInfo_for_uenum_52;
    MR_Word TypeInfo_10_73;
    MR_Word VWs_18;
    MR_Word Var_71;
    MR_Word Var_79;
    MR_Word conv1_Var_71;

    {
      TypeClassInfo_for_uenum_52 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_52, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_52, 1) = ((MR_Box) (TypeInfo_for_T_32));
      MR_hl_field(0, TypeClassInfo_for_uenum_52, 2) = ((MR_Box) (TypeInfo_37_37));
    }
    mercury__sparse_bitset__list_to_set_get_runs_3_p_0(TypeClassInfo_for_uenum_52, (MR_Word) (Var_24), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv1_Var_71);
    Var_71 = (MR_Word) (conv1_Var_71);
{
#define MR_PROC_LABEL mercury__digraph__btc_process_component_6_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_52 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_73  = TypeInfo;
}
    if ((Var_71 == (MR_Word) ((MR_Unsigned) 0U)))
      VWs_18 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
    else
    {
      MR_Word Var_75 = ((MR_Word) ((MR_hl_field(1, Var_71, (MR_Integer) 0))));
      MR_Word Var_76 = ((MR_Word) ((MR_hl_field(1, Var_71, (MR_Integer) 1))));
      MR_Word conv2_VWs_18;

      mercury__sparse_bitset__union_list_passes_3_p_0(TypeInfo_10_73, (MR_Word) (Var_75), (MR_Word) (Var_76), &conv2_VWs_18);
      VWs_18 = (MR_Word) (conv2_VWs_18);
    }
    Var_79 = (MR_Word) (SuccV_14);
    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(TypeInfo_for_T_32, VWs_18, TypeClassInfo_for_uenum_52, Var_79, STATE_VARIABLE_PredMap_0_21, STATE_VARIABLE_PredMap_22);
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_33,
  MR_Word Var_34,
  MR_Word TypeClassInfo_for_uenum_19,
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
      MR_Unsigned Var_13 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
      MR_Unsigned Var_14 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
      MR_Unsigned Var_17;
      MR_Word Var_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_17  = Bits;
}
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_49_93_95_48_6_p_in__sparse_bitset_0(Var_33, Var_34, TypeClassInfo_for_uenum_19, Var_13, Var_14, Var_17, HeadVar__3_3, &Var_18);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_49_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_36,
  MR_Word Var_37,
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
        MR_Word Var_13;
        MR_Box conv0_Var_13;

        conv0_Var_13 = mercury__enum__det_from_uint_1_f_0(TypeClassInfo_for_uenum_22, HeadVar__2_8);
        Var_13 = ((MR_Word) (conv0_Var_13));
        mercury__digraph__add_predecessors_4_p_0(Var_36, Var_37, Var_13, HeadVar__5_11, HeadVar__6_12);
      }
      else
      {
        MR_Unsigned Var_14 = (HeadVar__4_10 >> 1);
        MR_Unsigned Var_16;
        MR_Unsigned Var_17;
        MR_Unsigned Var_18;
        MR_Unsigned Var_19;
        MR_Word Var_20;
        MR_Unsigned Var_21;
        MR_Unsigned Var_38;
        MR_Unsigned Var_39 = ~((MR_Unsigned) 0U);
        MR_Unsigned next_value_of_HeadVar__2_8;
        MR_Unsigned next_value_of_HeadVar__3_9;
        MR_Unsigned next_value_of_HeadVar__4_10;
        MR_Word next_value_of_HeadVar__5_11;

        Var_38 = (Var_39 << (int) Var_14);
        Var_16 = ~(Var_38);
        Var_17 = (Var_16 & HeadVar__3_9);
        Var_19 = (HeadVar__3_9 >> (int) Var_14);
        Var_18 = (Var_16 & Var_19);
        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_49_93_95_48_6_p_in__sparse_bitset_0(Var_36, Var_37, TypeClassInfo_for_uenum_22, HeadVar__2_8, Var_17, Var_14, HeadVar__5_11, &Var_20);
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
mercury__digraph__add_predecessors_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_13;

  mercury__digraph__IntroducedFrom__pred__key_set_map_union__461__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__4_13);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_13));
}

static void MR_CALL 
mercury__digraph__add_predecessors_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Ys_5,
  MR_Word X_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10)
{
  MR_bool succeeded;
  MR_Unsigned XI_8 = (MR_Unsigned) (X_6);
  MR_Word Map1_12;
  MR_Word TypeInfo_17_15;
  MR_Word TypeInfo_19_17;
  MR_Word Var_13;
  MR_Word conv1_Map1_12;

  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&mercury__digraph_scalar_common_6[0]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (mercury__digraph__add_predecessors_4_p_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (TypeInfo_for_T_11));
    MR_hl_field(0, Var_13, 4) = ((MR_Box) (Ys_5));
  }
  {
    TypeInfo_17_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_17_15, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_17_15, 1) = ((MR_Box) (TypeInfo_for_T_11));
  }
  {
    TypeInfo_19_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_19_17, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_19_17, 1) = ((MR_Box) (TypeInfo_17_15));
  }
  succeeded = mercury__tree234__transform_value_4_p_0(TypeInfo_19_17, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (Var_13), ((MR_Box) (XI_8)), (MR_Word) (STATE_VARIABLE_Map_0_9), &conv1_Map1_12);
  if (succeeded)
  {
    Map1_12 = (MR_Word) (conv1_Map1_12);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    *STATE_VARIABLE_Map_10 = Map1_12;
  else
  {
    MR_Word TypeInfo_23_21;
    MR_Word TypeInfo_25_23;

    {
      TypeInfo_23_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_23_21, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(0, TypeInfo_23_21, 1) = ((MR_Box) (TypeInfo_for_T_11));
    }
    {
      TypeInfo_25_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_25_23, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(0, TypeInfo_25_23, 1) = ((MR_Box) (TypeInfo_23_21));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_25_23, ((MR_Box) (XI_8)), ((MR_Box) (Ys_5)), STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10);
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_33,
  MR_Word Var_34,
  MR_Word TypeClassInfo_for_uenum_19,
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
      MR_Unsigned Var_13 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
      MR_Unsigned Var_14 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
      MR_Unsigned Var_17;
      MR_Word Var_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_17  = Bits;
}
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_49_93_95_48_6_p_in__sparse_bitset_0(Var_33, Var_34, TypeClassInfo_for_uenum_19, Var_13, Var_14, Var_17, HeadVar__3_3, &Var_18);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_49_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_36,
  MR_Word Var_37,
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
        MR_Word Var_13;
        MR_Unsigned XI_38;
        MR_Box conv0_Var_13;

        conv0_Var_13 = mercury__enum__det_from_uint_1_f_0(TypeClassInfo_for_uenum_22, HeadVar__2_8);
        Var_13 = ((MR_Word) (conv0_Var_13));
        XI_38 = (MR_Unsigned) (Var_13);
        mercury__digraph__key_set_map_add_4_p_0(Var_36, XI_38, Var_37, HeadVar__5_11, HeadVar__6_12);
      }
      else
      {
        MR_Unsigned Var_14 = (HeadVar__4_10 >> 1);
        MR_Unsigned Var_16;
        MR_Unsigned Var_17;
        MR_Unsigned Var_18;
        MR_Unsigned Var_19;
        MR_Word Var_20;
        MR_Unsigned Var_21;
        MR_Unsigned Var_39;
        MR_Unsigned Var_40 = ~((MR_Unsigned) 0U);
        MR_Unsigned next_value_of_HeadVar__2_8;
        MR_Unsigned next_value_of_HeadVar__3_9;
        MR_Unsigned next_value_of_HeadVar__4_10;
        MR_Word next_value_of_HeadVar__5_11;

        Var_39 = (Var_40 << (int) Var_14);
        Var_16 = ~(Var_39);
        Var_17 = (Var_16 & HeadVar__3_9);
        Var_19 = (HeadVar__3_9 >> (int) Var_14);
        Var_18 = (Var_16 & Var_19);
        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_49_93_95_48_6_p_in__sparse_bitset_0(Var_36, Var_37, TypeClassInfo_for_uenum_22, HeadVar__2_8, Var_17, Var_14, HeadVar__5_11, &Var_20);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__list_0(
  MR_Word Var_22,
  MR_Word Var_23,
  MR_Word Var_24,
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
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      mercury__digraph__build_successor_set_5_p_0(Var_22, Var_23, Var_24, Var_9, HeadVar__3_3, &Var_13);
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
mercury__digraph__build_successor_set_5_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word OrigEdges_6,
  MR_Word SuccMap0_7,
  MR_Word W_8,
  MR_Word STATE_VARIABLE_SuccV_0_12,
  MR_Word * STATE_VARIABLE_SuccV_13)
{
  MR_bool succeeded;
  MR_Word TypeInfo_17_17;
  MR_Word TypeClassInfo_for_uenum_22;
  MR_Word SuccW_10;
  MR_Unsigned VI_25 = (MR_Unsigned) (W_8);
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word SuccV0_26;
  MR_Word TypeInfo_12_29;
  MR_Word TypeInfo_14_31;
  MR_Box conv0_SuccV0_26;

  {
    TypeInfo_12_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_12_29, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_12_29, 1) = ((MR_Box) (TypeInfo_for_T_15));
  }
  {
    TypeInfo_14_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_14_31, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_14_31, 1) = ((MR_Box) (TypeInfo_12_29));
  }
  succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_14_31, OrigEdges_6, ((MR_Box) (VI_25)), &conv0_SuccV0_26);
  if (succeeded)
  {
    SuccV0_26 = ((MR_Word) (conv0_SuccV0_26));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    SuccW_10 = SuccV0_26;
  else
    SuccW_10 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  {
    TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_17_17, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_T_15));
  }
  Var_35 = (MR_Word) (SuccW_10);
  Var_36 = (MR_Word) (STATE_VARIABLE_SuccV_0_12);
  mercury__sparse_bitset__difference_loop_3_p_0(Var_35, Var_36, &Var_37);
  {
    TypeClassInfo_for_uenum_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_22, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_22, 1) = ((MR_Box) (TypeInfo_for_T_15));
    MR_hl_field(0, TypeClassInfo_for_uenum_22, 2) = ((MR_Box) (TypeInfo_17_17));
  }
  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(TypeInfo_for_T_15, SuccMap0_7, TypeClassInfo_for_uenum_22, Var_37, STATE_VARIABLE_SuccV_0_12, STATE_VARIABLE_SuccV_13);
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word TypeClassInfo_for_uenum_19,
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
      MR_Unsigned Var_13 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
      MR_Unsigned Var_14 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
      MR_Unsigned Var_17;
      MR_Word Var_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_54_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_17  = Bits;
}
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_55_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_6_p_in__sparse_bitset_0(Var_30, Var_31, TypeClassInfo_for_uenum_19, Var_13, Var_14, Var_17, HeadVar__3_3, &Var_18);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_55_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_33,
  MR_Word Var_34,
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
        MR_Word Var_13;
        MR_Box conv0_Var_13;

        conv0_Var_13 = mercury__enum__det_from_uint_1_f_0(TypeClassInfo_for_uenum_22, HeadVar__2_8);
        Var_13 = ((MR_Word) (conv0_Var_13));
        mercury__digraph__build_successor_set_2_4_p_0(Var_33, Var_34, Var_13, HeadVar__5_11, HeadVar__6_12);
      }
      else
      {
        MR_Unsigned Var_14 = (HeadVar__4_10 >> 1);
        MR_Unsigned Var_16;
        MR_Unsigned Var_17;
        MR_Unsigned Var_18;
        MR_Unsigned Var_19;
        MR_Word Var_20;
        MR_Unsigned Var_21;
        MR_Unsigned Var_35;
        MR_Unsigned Var_36 = ~((MR_Unsigned) 0U);
        MR_Unsigned next_value_of_HeadVar__2_8;
        MR_Unsigned next_value_of_HeadVar__3_9;
        MR_Unsigned next_value_of_HeadVar__4_10;
        MR_Word next_value_of_HeadVar__5_11;

        Var_35 = (Var_36 << (int) Var_14);
        Var_16 = ~(Var_35);
        Var_17 = (Var_16 & HeadVar__3_9);
        Var_19 = (HeadVar__3_9 >> (int) Var_14);
        Var_18 = (Var_16 & Var_19);
        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_55_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_6_p_in__sparse_bitset_0(Var_33, Var_34, TypeClassInfo_for_uenum_22, HeadVar__2_8, Var_17, Var_14, HeadVar__5_11, &Var_20);
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
mercury__digraph__build_successor_set_2_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word SuccMap0_5,
  MR_Word W_6,
  MR_Word STATE_VARIABLE_SuccV_0_9,
  MR_Word * STATE_VARIABLE_SuccV_10)
{
  MR_bool succeeded;
  MR_Word TypeInfo_14_14;
  MR_Word TypeClassInfo_for_uenum_16;
  MR_Word SuccW_8;
  MR_Unsigned VI_17 = (MR_Unsigned) (W_6);
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Unsigned Var_29;
  MR_Unsigned Var_30;
  MR_Unsigned Var_31;
  MR_Unsigned Var_32;
  MR_Unsigned Var_33;
  MR_Unsigned Var_35;
  MR_Word Var_36;
  MR_Word Var_38;
  MR_Word SuccV0_18;
  MR_Word TypeInfo_12_21;
  MR_Word TypeInfo_14_23;
  MR_Box conv0_SuccV0_18;
  MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
  MR_Box conv2_Var_29;

  {
    TypeInfo_12_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_12_21, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_12_21, 1) = ((MR_Box) (TypeInfo_for_T_12));
  }
  {
    TypeInfo_14_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_14_23, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_14_23, 1) = ((MR_Box) (TypeInfo_12_21));
  }
  succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_14_23, SuccMap0_5, ((MR_Box) (VI_17)), &conv0_SuccV0_18);
  if (succeeded)
  {
    SuccV0_18 = ((MR_Word) (conv0_SuccV0_18));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    SuccW_8 = SuccV0_18;
  else
    SuccW_8 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  {
    TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_14_14, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_T_12));
  }
  {
    TypeClassInfo_for_uenum_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_16, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_16, 1) = ((MR_Box) (TypeInfo_for_T_12));
    MR_hl_field(0, TypeClassInfo_for_uenum_16, 2) = ((MR_Box) (TypeInfo_14_14));
  }
  Var_27 = (MR_Word) (STATE_VARIABLE_SuccV_0_9);
  func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_16, (MR_Integer) 0)), (MR_Integer) 5))));
  conv2_Var_29 = func_1(((MR_Box) (TypeClassInfo_for_uenum_16)), ((MR_Box) (W_6)));
  Var_29 = ((MR_Unsigned) (conv2_Var_29));
{
#define MR_PROC_LABEL mercury__digraph__build_successor_set_2_4_p_0

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
  mercury__sparse_bitset__insert_loop_4_p_0(Var_30, Var_31, Var_27, &Var_28);
  Var_36 = (MR_Word) (SuccW_8);
  mercury__sparse_bitset__union_loop_3_p_0(Var_36, Var_28, &Var_38);
  *STATE_VARIABLE_SuccV_10 = (MR_Word) (Var_38);
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__list_0(
  MR_Word Var_25,
  MR_Word Var_26,
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
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      mercury__digraph__add_successors_4_p_0(Var_25, Var_26, Var_9, HeadVar__3_3, &Var_13);
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
mercury__digraph__add_successors_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_13;

  mercury__digraph__IntroducedFrom__pred__key_set_map_union__461__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__4_13);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_13));
}

static void MR_CALL 
mercury__digraph__add_successors_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Ys_5,
  MR_Word X_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10)
{
  MR_bool succeeded;
  MR_Unsigned XI_8 = (MR_Unsigned) (X_6);
  MR_Word Map1_12;
  MR_Word TypeInfo_17_15;
  MR_Word TypeInfo_19_17;
  MR_Word Var_13;
  MR_Word conv1_Map1_12;

  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&mercury__digraph_scalar_common_6[0]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (mercury__digraph__add_successors_4_p_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (TypeInfo_for_T_11));
    MR_hl_field(0, Var_13, 4) = ((MR_Box) (Ys_5));
  }
  {
    TypeInfo_17_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_17_15, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_17_15, 1) = ((MR_Box) (TypeInfo_for_T_11));
  }
  {
    TypeInfo_19_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_19_17, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_19_17, 1) = ((MR_Box) (TypeInfo_17_15));
  }
  succeeded = mercury__tree234__transform_value_4_p_0(TypeInfo_19_17, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (Var_13), ((MR_Box) (XI_8)), (MR_Word) (STATE_VARIABLE_Map_0_9), &conv1_Map1_12);
  if (succeeded)
  {
    Map1_12 = (MR_Word) (conv1_Map1_12);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    *STATE_VARIABLE_Map_10 = Map1_12;
  else
  {
    MR_Word TypeInfo_23_21;
    MR_Word TypeInfo_25_23;

    {
      TypeInfo_23_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_23_21, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(0, TypeInfo_23_21, 1) = ((MR_Box) (TypeInfo_for_T_11));
    }
    {
      TypeInfo_25_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_25_23, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(0, TypeInfo_25_23, 1) = ((MR_Box) (TypeInfo_23_21));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_25_23, ((MR_Box) (XI_8)), ((MR_Box) (Ys_5)), STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10);
  }
}

MR_Word MR_CALL 
mercury__digraph__symmetric_closure_1_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word G_3)
{
  MR_Word Sc_4;
  MR_Word GInv_5;
  MR_Word GInvList_6;
  MR_Unsigned Next_8 = ((MR_Unsigned) ((MR_hl_field(0, G_3, (MR_Integer) 0))));
  MR_Word VMap_9 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 1))));
  MR_Word Fwd_10 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 2))));
  MR_Word Bwd_11 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 3))));

  {
    GInv_5 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, GInv_5, 0) = ((MR_Box) (Next_8));
    MR_hl_field(0, GInv_5, 1) = ((MR_Box) (VMap_9));
    MR_hl_field(0, GInv_5, 2) = ((MR_Box) (Bwd_11));
    MR_hl_field(0, GInv_5, 3) = ((MR_Box) (Fwd_10));
  }
  mercury__digraph__to_key_assoc_list_2_p_0(TypeInfo_for_T_7, GInv_5, &GInvList_6);
  mercury__digraph__add_assoc_list_3_p_0(TypeInfo_for_T_7, GInvList_6, G_3, &Sc_4);
  return Sc_4;
}

void MR_CALL 
mercury__digraph__sc_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word G_3,
  MR_Word * Sc_4)
{
  MR_Word GInv_6;
  MR_Word GInvList_7;
  MR_Unsigned Next_8 = ((MR_Unsigned) ((MR_hl_field(0, G_3, (MR_Integer) 0))));
  MR_Word VMap_9 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 1))));
  MR_Word Fwd_10 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 2))));
  MR_Word Bwd_11 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 3))));

  {
    GInv_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, GInv_6, 0) = ((MR_Box) (Next_8));
    MR_hl_field(0, GInv_6, 1) = ((MR_Box) (VMap_9));
    MR_hl_field(0, GInv_6, 2) = ((MR_Box) (Bwd_11));
    MR_hl_field(0, GInv_6, 3) = ((MR_Box) (Fwd_10));
  }
  mercury__digraph__to_key_assoc_list_2_p_0(TypeInfo_for_T_5, GInv_6, &GInvList_7);
  mercury__digraph__add_assoc_list_3_p_0(TypeInfo_for_T_5, GInvList_7, G_3, Sc_4);
}

MR_Word MR_CALL 
mercury__digraph__sc_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word G_3)
{
  MR_Word HeadVar__2_2;
  MR_Word GInv_5;
  MR_Word GInvList_6;
  MR_Unsigned Next_7 = ((MR_Unsigned) ((MR_hl_field(0, G_3, (MR_Integer) 0))));
  MR_Word VMap_8 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 1))));
  MR_Word Fwd_9 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 2))));
  MR_Word Bwd_10 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 3))));

  {
    GInv_5 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, GInv_5, 0) = ((MR_Box) (Next_7));
    MR_hl_field(0, GInv_5, 1) = ((MR_Box) (VMap_8));
    MR_hl_field(0, GInv_5, 2) = ((MR_Box) (Bwd_10));
    MR_hl_field(0, GInv_5, 3) = ((MR_Box) (Fwd_9));
  }
  mercury__digraph__to_key_assoc_list_2_p_0(TypeInfo_for_T_4, GInv_5, &GInvList_6);
  mercury__digraph__add_assoc_list_3_p_0(TypeInfo_for_T_4, GInvList_6, G_3, &HeadVar__2_2);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__digraph__return_sccs_in_from_to_order_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word G_3)
{
  MR_Word ATsort_4;
  MR_Word TypeInfo_8_8;
  MR_Word ATsort0_5;
  MR_Word conv0_ATsort_4;

  ATsort0_5 = mercury__digraph__return_sccs_in_to_from_order_1_f_0(TypeInfo_for_T_6, G_3);
  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  mercury__list__reverse_2_p_0(TypeInfo_8_8, (MR_Word) (ATsort0_5), &conv0_ATsort_4);
  ATsort_4 = (MR_Word) (conv0_ATsort_4);
  return ATsort_4;
}

void MR_CALL 
mercury__digraph__atsort_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word G_3,
  MR_Word * ATsort_4)
{
  MR_Word TypeInfo_8_8;
  MR_Word ATsort0_6;
  MR_Word conv0_ATsort_4;

  ATsort0_6 = mercury__digraph__return_sccs_in_to_from_order_1_f_0(TypeInfo_for_T_5, G_3);
  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  mercury__list__reverse_2_p_0(TypeInfo_8_8, (MR_Word) (ATsort0_6), &conv0_ATsort_4);
  *ATsort_4 = (MR_Word) (conv0_ATsort_4);
}

MR_Word MR_CALL 
mercury__digraph__atsort_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word G_3)
{
  MR_Word ATsort_4;
  MR_Word TypeInfo_8_8;
  MR_Word ATsort0_6;
  MR_Word conv0_ATsort_4;

  ATsort0_6 = mercury__digraph__return_sccs_in_to_from_order_1_f_0(TypeInfo_for_T_5, G_3);
  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  mercury__list__reverse_2_p_0(TypeInfo_8_8, (MR_Word) (ATsort0_6), &conv0_ATsort_4);
  ATsort_4 = (MR_Word) (conv0_ATsort_4);
  return ATsort_4;
}

MR_Word MR_CALL 
mercury__digraph__return_sccs_in_to_from_order_1_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word G_3)
{
  MR_Word ATsort_4;
  MR_Word DfsRev_5;
  MR_Word GInv_6;
  MR_Unsigned Next_12;
  MR_Word VMap_13;
  MR_Word Fwd_14;
  MR_Word Bwd_15;

  mercury__digraph__dfsrev_2_p_0(TypeInfo_for_T_9, G_3, &DfsRev_5);
  Next_12 = ((MR_Unsigned) ((MR_hl_field(0, G_3, (MR_Integer) 0))));
  VMap_13 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 1))));
  Fwd_14 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 2))));
  Bwd_15 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 3))));
  {
    GInv_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, GInv_6, 0) = ((MR_Box) (Next_12));
    MR_hl_field(0, GInv_6, 1) = ((MR_Box) (VMap_13));
    MR_hl_field(0, GInv_6, 2) = ((MR_Box) (Bwd_15));
    MR_hl_field(0, GInv_6, 3) = ((MR_Box) (Fwd_14));
  }
  mercury__digraph__atsort_loop_5_p_0(TypeInfo_for_T_9, DfsRev_5, GInv_6, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), (MR_Word) ((MR_Unsigned) 0U), &ATsort_4);
  return ATsort_4;
}

void MR_CALL 
mercury__digraph__atsort_loop_5_p_0(
  MR_Word TypeInfo_for_T_26,
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
      MR_Word X_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Xs_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Vis_22_22;
      MR_Word STATE_VARIABLE_ATsort_25_25;
      MR_Word TypeInfo_28_28;
      MR_Word TypeClassInfo_for_uenum_30;
      MR_Word Var_35 = (MR_Word) (STATE_VARIABLE_Vis_0_3);
      MR_Unsigned Var_36;
      MR_Unsigned Var_37;
      MR_Unsigned Var_38;
      MR_Unsigned Var_39;
      MR_Unsigned Var_40;
      MR_Unsigned Var_42;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
      MR_Box conv1_Var_36;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Vis_0_3;
      MR_Word next_value_of_STATE_VARIABLE_ATsort_0_4;

      {
        TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_28_28, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
        MR_hl_field(0, TypeInfo_28_28, 1) = ((MR_Box) (TypeInfo_for_T_26));
      }
      {
        TypeClassInfo_for_uenum_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeClassInfo_for_uenum_30, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__));
        MR_hl_field(0, TypeClassInfo_for_uenum_30, 1) = ((MR_Box) (TypeInfo_for_T_26));
        MR_hl_field(0, TypeClassInfo_for_uenum_30, 2) = ((MR_Box) (TypeInfo_28_28));
      }
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_30, (MR_Integer) 0)), (MR_Integer) 5))));
      conv1_Var_36 = func_0(((MR_Box) (TypeClassInfo_for_uenum_30)), ((MR_Box) (X_11)));
      Var_36 = ((MR_Unsigned) (conv1_Var_36));
{
#define MR_PROC_LABEL mercury__digraph__atsort_loop_5_p_0

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
      succeeded = mercury__sparse_bitset__contains_search_nodes_3_p_0(Var_35, Var_37, Var_38);
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
        MR_Word Var_43;
        MR_Integer Var_44;

        mercury__digraph__dfs_2_6_p_0(TypeInfo_for_T_26, GInv_2, X_11, STATE_VARIABLE_Vis_0_3, &STATE_VARIABLE_Vis_22_22, (MR_Word) ((MR_Unsigned) 0U), &CliqKeys_16);
        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_49_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(TypeInfo_for_T_26, GInv_2, CliqKeys_16, &CliqList_17);
        mercury__list__length_acc_3_p_0(TypeInfo_for_T_26, CliqList_17, (MR_Integer) 0, &Var_44);
        mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_26, Var_44, CliqList_17, &Var_43);
        Cliq_18 = (MR_Word) (Var_43);
        {
          STATE_VARIABLE_ATsort_25_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_ATsort_25_25, 0) = ((MR_Box) (Cliq_18));
          MR_hl_field(1, STATE_VARIABLE_ATsort_25_25, 1) = ((MR_Box) (STATE_VARIABLE_ATsort_0_4));
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_49_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
  MR_Word Var_14,
  MR_Word Var_15,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Box Var_8;
    MR_Word * AddrSCCcallarg_9_16;

    mercury__digraph__lookup_vertex_3_p_0(Var_14, Var_15, Var_6, &Var_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = Var_8;
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrSCCcallarg_9_16 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, (MR_Integer) 1)));
    mercury__digraph__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_49_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_95_95_49_3_p_0(Var_14, Var_15, Var_7, AddrSCCcallarg_9_16);
  }
}

static void MR_CALL 
mercury__digraph__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_51_49_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_95_95_49_3_p_0(
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
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Var_8;
      MR_Word * AddrSCCcallarg_9_16;
      MR_Word HeadVar__3_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_17;

      mercury__digraph__lookup_vertex_3_p_0(Var_14, Var_15, Var_6, &Var_8);
      {
        HeadVar__3_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_18, 0) = Var_8;
        MR_hl_field(1, HeadVar__3_18, 1) = NULL;
      }
      AddrSCCcallarg_9_16 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_18, (MR_Integer) 1)));
      *AddrOfHeadVar__3_17 = HeadVar__3_18;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_17 = AddrSCCcallarg_9_16;
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
  MR_bool succeeded;
  MR_Word FromToTsort_5;
  MR_Word Tsort0_7;

  mercury__digraph__dfsrev_2_p_0(TypeInfo_for_T_6, G_3, &Tsort0_7);
  succeeded = mercury__digraph__check_tsort_3_p_0(TypeInfo_for_T_6, G_3, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), Tsort0_7);
  if (succeeded)
  {
    FromToTsort_5 = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_52_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_2_f_in__list_0(TypeInfo_for_T_6, G_3, Tsort0_7);
    mercury__list__reverse_2_p_0(TypeInfo_for_T_6, FromToTsort_5, ToFromTsort_4);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__digraph__return_vertices_in_from_to_order_2_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word G_3,
  MR_Word * FromToTsort_4)
{
  MR_bool succeeded;
  MR_Word Tsort0_5;

  mercury__digraph__dfsrev_2_p_0(TypeInfo_for_T_8, G_3, &Tsort0_5);
  succeeded = mercury__digraph__check_tsort_3_p_0(TypeInfo_for_T_8, G_3, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), Tsort0_5);
  if (succeeded)
  {
    *FromToTsort_4 = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_52_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_2_f_in__list_0(TypeInfo_for_T_8, G_3, Tsort0_5);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__digraph__tsort_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word G_3,
  MR_Word * FromToTsort_4)
{
  MR_bool succeeded;
  MR_Word Tsort0_6;

  mercury__digraph__dfsrev_2_p_0(TypeInfo_for_T_5, G_3, &Tsort0_6);
  succeeded = mercury__digraph__check_tsort_3_p_0(TypeInfo_for_T_5, G_3, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), Tsort0_6);
  if (succeeded)
  {
    *FromToTsort_4 = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_52_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_2_f_in__list_0(TypeInfo_for_T_5, G_3, Tsort0_6);
    succeeded = MR_TRUE;
  }
  return succeeded;
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
      MR_Word TypeClassInfo_for_uenum_17;
      MR_Word X_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Xs_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Vis_10;
      MR_Word SuccXs_11;
      MR_Word Var_18 = (MR_Word) (Vis0_2);
      MR_Word Var_19;
      MR_Unsigned Var_20;
      MR_Unsigned Var_21;
      MR_Unsigned Var_22;
      MR_Unsigned Var_23;
      MR_Unsigned Var_24;
      MR_Unsigned Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
      MR_Box conv1_Var_20;
      MR_Word next_value_of_Vis0_2;
      MR_Word next_value_of_HeadVar__3_3;

      {
        TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_15_15, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
        MR_hl_field(0, TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_13));
      }
      {
        TypeClassInfo_for_uenum_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeClassInfo_for_uenum_17, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__));
        MR_hl_field(0, TypeClassInfo_for_uenum_17, 1) = ((MR_Box) (TypeInfo_for_T_13));
        MR_hl_field(0, TypeClassInfo_for_uenum_17, 2) = ((MR_Box) (TypeInfo_15_15));
      }
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_17, (MR_Integer) 0)), (MR_Integer) 5))));
      conv1_Var_20 = func_0(((MR_Box) (TypeClassInfo_for_uenum_17)), ((MR_Box) (X_8)));
      Var_20 = ((MR_Unsigned) (conv1_Var_20));
{
#define MR_PROC_LABEL mercury__digraph__check_tsort_3_p_0

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
      mercury__sparse_bitset__insert_loop_4_p_0(Var_21, Var_22, Var_18, &Var_19);
      Vis_10 = (MR_Word) (Var_19);
      mercury__digraph__lookup_key_set_from_3_p_0(TypeInfo_for_T_13, G_1, X_8, &SuccXs_11);
      Var_27 = (MR_Word) (Vis_10);
      Var_28 = (MR_Word) (SuccXs_11);
      mercury__sparse_bitset__intersect_loop_3_p_0(Var_27, Var_28, &Var_29);
      succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
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
  MR_Word Var_5;

  mercury__digraph__reduced_3_p_0(TypeInfo_for_T_6, G_3, R_4, &Var_5);
}

MR_Word MR_CALL 
mercury__digraph__reduced_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word G_3)
{
  MR_Word R_4;
  MR_Word Var_6;

  mercury__digraph__reduced_3_p_0(TypeInfo_for_T_5, G_3, &R_4, &Var_6);
  return R_4;
}

void MR_CALL 
mercury__digraph__reduced_3_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word G_4,
  MR_Word * STATE_VARIABLE_R_10,
  MR_Word * STATE_VARIABLE_CliqMap_11)
{
  MR_Word Cliques_7;
  MR_Word CliqList_8;
  MR_Word AL_9;
  MR_Word STATE_VARIABLE_R_15_15;

  mercury__digraph__cliques_2_p_0(TypeInfo_for_T_16, G_4, &Cliques_7);
  CliqList_8 = (MR_Word) (Cliques_7);
  mercury__digraph__make_clique_map_6_p_0(TypeInfo_for_T_16, G_4, CliqList_8, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_CliqMap_11, (MR_Word) (&mercury__digraph_scalar_common_2[2]), &STATE_VARIABLE_R_15_15);
  mercury__digraph__to_key_assoc_list_2_p_0(TypeInfo_for_T_16, G_4, &AL_9);
  mercury__digraph__make_reduced_graph_4_p_0(TypeInfo_for_T_16, *STATE_VARIABLE_CliqMap_11, AL_9, STATE_VARIABLE_R_15_15, STATE_VARIABLE_R_10);
}

void MR_CALL 
mercury__digraph__make_reduced_graph_4_p_0(
  MR_Word TypeInfo_for_T_20,
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
      MR_Word TypeInfo_22_22;
      MR_Word TypeInfo_24_24;
      MR_Word TypeInfo_25_25;
      MR_Word X_10;
      MR_Word Y_11;
      MR_Word Edges_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word CliqX_14;
      MR_Word CliqY_15;
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_R_19_19;
      MR_Box conv0_CliqX_14;
      MR_Box conv1_CliqY_15;
      MR_Integer CastX_30;
      MR_Integer CastY_31;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_R_0_3;

      X_10 = ((MR_Word) ((MR_hl_field(0, Var_18, (MR_Integer) 0))));
      Y_11 = ((MR_Word) ((MR_hl_field(0, Var_18, (MR_Integer) 1))));
      {
        TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_22_22, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
        MR_hl_field(0, TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_T_20));
      }
      {
        TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_24_24, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
        MR_hl_field(0, TypeInfo_24_24, 1) = ((MR_Box) (TypeInfo_for_T_20));
      }
      {
        TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_25_25, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
        MR_hl_field(0, TypeInfo_25_25, 1) = ((MR_Box) (TypeInfo_24_24));
      }
      mercury__map__lookup_3_p_0(TypeInfo_22_22, TypeInfo_25_25, (MR_Word) (CliqMap_1), ((MR_Box) (X_10)), &conv0_CliqX_14);
      CliqX_14 = ((MR_Word) (conv0_CliqX_14));
      mercury__map__lookup_3_p_0(TypeInfo_22_22, TypeInfo_25_25, (MR_Word) (CliqMap_1), ((MR_Box) (Y_11)), &conv1_CliqY_15);
      CliqY_15 = ((MR_Word) (conv1_CliqY_15));
      CastX_30 = (MR_Integer) (CliqX_14);
      CastY_31 = (MR_Integer) (CliqY_15);
      succeeded = (CastX_30 == CastY_31);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Unsigned ArgX1_28 = (MR_Unsigned) (CliqX_14);
        MR_Unsigned ArgY1_29 = (MR_Unsigned) (CliqY_15);

        succeeded = (ArgX1_28 == ArgY1_29);
      }
      if (succeeded)
        STATE_VARIABLE_R_19_19 = STATE_VARIABLE_R_0_3;
      else
      {
        MR_Word conv2_STATE_VARIABLE_R_19_19;

        mercury__digraph__add_edge_4_p_0(TypeInfo_24_24, (MR_Word) (CliqX_14), (MR_Word) (CliqY_15), (MR_Word) (STATE_VARIABLE_R_0_3), &conv2_STATE_VARIABLE_R_19_19);
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
  MR_Word TypeInfo_for_T_29,
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
      MR_Word TypeInfo_35_35;
      MR_Word Clique_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Cliques_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Vertices_19;
      MR_Word CliqKey_20;
      MR_Word STATE_VARIABLE_R_26_26;
      MR_Word STATE_VARIABLE_CliqMap_28_28;
      MR_Word Var_42 = (MR_Word) (Clique_15);
      MR_Word Var_43;
      MR_Word Var_45;
      MR_Integer Var_46;
      MR_Word Var_63;
      MR_Word conv1_CliqKey_20;
      MR_Word conv0_STATE_VARIABLE_R_26_26;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_CliqMap_0_3;
      MR_Word next_value_of_STATE_VARIABLE_R_0_5;

      Var_43 = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_52_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_2_f_in__list_0(TypeInfo_for_T_29, G_1, Var_42);
      mercury__list__length_acc_3_p_0(TypeInfo_for_T_29, Var_43, (MR_Integer) 0, &Var_46);
      mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_29, Var_46, Var_43, &Var_45);
      Vertices_19 = (MR_Word) (Var_45);
      {
        TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_35_35, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
        MR_hl_field(0, TypeInfo_35_35, 1) = ((MR_Box) (TypeInfo_for_T_29));
      }
      mercury__digraph__add_vertex_4_p_0(TypeInfo_35_35, ((MR_Box) (Vertices_19)), &conv1_CliqKey_20, (MR_Word) (STATE_VARIABLE_R_0_5), &conv0_STATE_VARIABLE_R_26_26);
      CliqKey_20 = (MR_Word) (conv1_CliqKey_20);
      STATE_VARIABLE_R_26_26 = (MR_Word) (conv0_STATE_VARIABLE_R_26_26);
      Var_63 = (MR_Word) (Clique_15);
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(TypeInfo_for_T_29, CliqKey_20, Var_63, STATE_VARIABLE_CliqMap_0_3, &STATE_VARIABLE_CliqMap_28_28);
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

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
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
      MR_Word TypeInfo_12_30;
      MR_Word TypeInfo_14_32;
      MR_Word TypeInfo_15_33;
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_13;
      MR_Word conv0_Var_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      {
        TypeInfo_12_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_12_30, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
        MR_hl_field(0, TypeInfo_12_30, 1) = ((MR_Box) (Var_27));
      }
      {
        TypeInfo_14_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_14_32, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
        MR_hl_field(0, TypeInfo_14_32, 1) = ((MR_Box) (Var_27));
      }
      {
        TypeInfo_15_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_15_33, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
        MR_hl_field(0, TypeInfo_15_33, 1) = ((MR_Box) (TypeInfo_14_32));
      }
      mercury__tree234__set_4_p_0(TypeInfo_12_30, TypeInfo_15_33, ((MR_Box) (Var_9)), ((MR_Box) (Var_28)), (MR_Word) (HeadVar__3_3), &conv0_Var_13);
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

static MR_Word MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_52_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_2_f_in__list_0(
  MR_Word Var_14,
  MR_Word Var_15,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Box Var_8;
    MR_Word * AddrSCCcallarg_9_16;

    mercury__digraph__lookup_vertex_3_p_0(Var_14, Var_15, Var_6, &Var_8);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = Var_8;
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_16 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1)));
    mercury__digraph__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_52_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_95_95_49_3_p_0(Var_14, Var_15, Var_7, AddrSCCcallarg_9_16);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__digraph__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_52_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_95_95_49_3_p_0(
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
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Var_8;
      MR_Word * AddrSCCcallarg_9_16;
      MR_Word HeadVar__3_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_17;

      mercury__digraph__lookup_vertex_3_p_0(Var_14, Var_15, Var_6, &Var_8);
      {
        HeadVar__3_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_18, 0) = Var_8;
        MR_hl_field(1, HeadVar__3_18, 1) = NULL;
      }
      AddrSCCcallarg_9_16 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_18, (MR_Integer) 1)));
      *AddrOfHeadVar__3_17 = HeadVar__3_18;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_17 = AddrSCCcallarg_9_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_17 = next_value_of_AddrOfHeadVar__3_17;
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
  MR_Word Cliques_4;

  mercury__digraph__cliques_2_p_0(TypeInfo_for_T_5, G_3, &Cliques_4);
  return Cliques_4;
}

void MR_CALL 
mercury__digraph__cliques_2_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word G_3,
  MR_Word * Cliques_4)
{
  MR_Word DfsRev_5;
  MR_Word GInv_6;
  MR_Unsigned Next_14;
  MR_Word VMap_15;
  MR_Word Fwd_16;
  MR_Word Bwd_17;

  mercury__digraph__dfsrev_2_p_0(TypeInfo_for_T_9, G_3, &DfsRev_5);
  Next_14 = ((MR_Unsigned) ((MR_hl_field(0, G_3, (MR_Integer) 0))));
  VMap_15 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 1))));
  Fwd_16 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 2))));
  Bwd_17 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 3))));
  {
    GInv_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, GInv_6, 0) = ((MR_Box) (Next_14));
    MR_hl_field(0, GInv_6, 1) = ((MR_Box) (VMap_15));
    MR_hl_field(0, GInv_6, 2) = ((MR_Box) (Bwd_17));
    MR_hl_field(0, GInv_6, 3) = ((MR_Box) (Fwd_16));
  }
  mercury__digraph__cliques_2_5_p_0(TypeInfo_for_T_9, DfsRev_5, GInv_6, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), Cliques_4);
}

void MR_CALL 
mercury__digraph__cliques_2_5_p_0(
  MR_Word TypeInfo_for_T_25,
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
      MR_Word TypeInfo_27_27;
      MR_Word TypeInfo_29_29;
      MR_Word X_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Xs0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word CliqueList_16;
      MR_Word Clique_17;
      MR_Word Xs_18;
      MR_Word STATE_VARIABLE_Visited_22_22;
      MR_Word STATE_VARIABLE_Cliques_24_24;
      MR_Word Var_30;
      MR_Integer Var_31;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word conv0_Var_30;
      MR_Word conv1_Var_34;
      MR_Word conv2_Xs_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Visited_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Cliques_0_4;

      mercury__digraph__dfs_2_6_p_0(TypeInfo_for_T_25, GInv_2, X_11, STATE_VARIABLE_Visited_0_3, &STATE_VARIABLE_Visited_22_22, (MR_Word) ((MR_Unsigned) 0U), &CliqueList_16);
      {
        TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_27_27, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
        MR_hl_field(0, TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_for_T_25));
      }
      mercury__list__length_acc_3_p_0(TypeInfo_27_27, (MR_Word) (CliqueList_16), (MR_Integer) 0, &Var_31);
      mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_27_27, Var_31, (MR_Word) (CliqueList_16), &conv0_Var_30);
      Var_30 = (MR_Word) (conv0_Var_30);
      Clique_17 = (MR_Word) (Var_30);
      {
        TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_29_29, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
        MR_hl_field(0, TypeInfo_29_29, 1) = ((MR_Box) (TypeInfo_27_27));
      }
      Var_33 = (MR_Word) (STATE_VARIABLE_Cliques_0_4);
      mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_29_29, (MR_Word) (Var_33), ((MR_Box) (Clique_17)), &conv1_Var_34);
      Var_34 = (MR_Word) (conv1_Var_34);
      STATE_VARIABLE_Cliques_24_24 = (MR_Word) (Var_34);
      mercury__list__delete_elems_3_p_0(TypeInfo_27_27, (MR_Word) (Xs0_12), (MR_Word) (CliqueList_16), &conv2_Xs_18);
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
  MR_Word Components_4;

  mercury__digraph__components_2_p_0(TypeInfo_for_T_5, G_3, &Components_4);
  return Components_4;
}

void MR_CALL 
mercury__digraph__components_2_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word G_3,
  MR_Word * Components_4)
{
  MR_Word TypeInfo_12_12;
  MR_Word TypeClassInfo_for_uenum_14;
  MR_Word TypeInfo_10_29;
  MR_Word Keys_5;
  MR_Word KeySet_6;
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 1))));
  MR_Word Var_24;
  MR_Word Var_27;
  MR_Word conv0_Keys_5;
  MR_Word conv1_Var_27;

  {
    TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_12_12, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_12_12, 1) = ((MR_Box) (TypeInfo_for_T_10));
  }
  Var_24 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 1))));
  mercury__tree234__keys_acc_3_p_0(TypeInfo_12_12, TypeInfo_for_T_10, (MR_Word) (Var_24), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_Keys_5);
  Keys_5 = (MR_Word) (conv0_Keys_5);
  {
    TypeClassInfo_for_uenum_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_14, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_14, 1) = ((MR_Box) (TypeInfo_for_T_10));
    MR_hl_field(0, TypeClassInfo_for_uenum_14, 2) = ((MR_Box) (TypeInfo_12_12));
  }
  mercury__sparse_bitset__list_to_set_get_runs_3_p_0(TypeClassInfo_for_uenum_14, (MR_Word) (Keys_5), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv1_Var_27);
  Var_27 = (MR_Word) (conv1_Var_27);
{
#define MR_PROC_LABEL mercury__digraph__components_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_14 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_29  = TypeInfo;
}
  if ((Var_27 == (MR_Word) ((MR_Unsigned) 0U)))
    KeySet_6 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
  {
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(1, Var_27, (MR_Integer) 0))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(1, Var_27, (MR_Integer) 1))));
    MR_Word conv2_KeySet_6;

    mercury__sparse_bitset__union_list_passes_3_p_0(TypeInfo_10_29, (MR_Word) (Var_31), (MR_Word) (Var_32), &conv2_KeySet_6);
    KeySet_6 = (MR_Word) (conv2_KeySet_6);
  }
  mercury__digraph__components_loop_4_p_0(TypeInfo_for_T_10, G_3, KeySet_6, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), Components_4);
}

static void MR_CALL 
mercury__digraph__components_loop_4_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word G_5,
  MR_Word Xs0_6,
  MR_Word STATE_VARIABLE_Components_0_14,
  MR_Word * STATE_VARIABLE_Components_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeInfo_20_20;
    MR_Word TypeClassInfo_for_uenum_22;
    MR_Word X_8;
    MR_Word Xs1_9;
    MR_Box conv1_X_8;
    MR_Word conv0_Xs1_9;

    // setup for model_det tailcalls optimized into a loop
    ;
    {
      TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_18));
    }
    {
      TypeClassInfo_for_uenum_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_22, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_22, 1) = ((MR_Box) (TypeInfo_for_T_18));
      MR_hl_field(0, TypeClassInfo_for_uenum_22, 2) = ((MR_Box) (TypeInfo_20_20));
    }
    succeeded = mercury__sparse_bitset__remove_least_3_p_0(TypeClassInfo_for_uenum_22, &conv1_X_8, (MR_Word) (Xs0_6), &conv0_Xs1_9);
    if (succeeded)
    {
      X_8 = ((MR_Word) (conv1_X_8));
      Xs1_9 = (MR_Word) (conv0_Xs1_9);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeInfo_28_28;
      MR_Word TypeInfo_8_45;
      MR_Word Keys0_11;
      MR_Word Comp_12;
      MR_Word Xs2_13;
      MR_Word Var_16;
      MR_Word STATE_VARIABLE_Components_17_17;
      MR_Word Var_35;
      MR_Unsigned Var_36;
      MR_Unsigned Var_37;
      MR_Unsigned Var_38;
      MR_Unsigned Var_39;
      MR_Unsigned Var_40;
      MR_Unsigned Var_42;
      MR_Word Var_43;
      MR_Word Var_52;
      MR_Word Var_55;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_22, (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv3_Var_36;
      MR_Word conv4_Var_43;
      MR_Word conv6_Var_60;
      MR_Word next_value_of_Xs0_6;
      MR_Word next_value_of_STATE_VARIABLE_Components_0_14;

      conv3_Var_36 = func_2(((MR_Box) (TypeClassInfo_for_uenum_22)), ((MR_Box) (X_8)));
      Var_36 = ((MR_Unsigned) (conv3_Var_36));
{
#define MR_PROC_LABEL mercury__digraph__components_loop_4_p_0

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
      mercury__sparse_bitset__insert_loop_4_p_0(Var_37, Var_38, (MR_Word) ((MR_Word) (((MR_Box) ((MR_Unsigned) 0U)))), &Var_35);
      Keys0_11 = (MR_Word) (Var_35);
      mercury__digraph__reachable_from_4_p_0(TypeInfo_for_T_18, G_5, Keys0_11, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &Comp_12);
{
#define MR_PROC_LABEL mercury__digraph__components_loop_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_22 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_8_45  = TypeInfo;
}
      Var_52 = (MR_Word) (Comp_12);
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(TypeClassInfo_for_uenum_22, Var_52, (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv4_Var_43);
      Var_43 = (MR_Word) (conv4_Var_43);
      if ((Var_43 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_55 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Var_56 = ((MR_Word) ((MR_hl_field(1, Var_43, (MR_Integer) 0))));
        MR_Word Var_57 = ((MR_Word) ((MR_hl_field(1, Var_43, (MR_Integer) 1))));
        MR_Word conv5_Var_55;

        mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_8_45, ((MR_Box) (Var_56)), (MR_Word) (Var_57), &conv5_Var_55);
        Var_55 = (MR_Word) (conv5_Var_55);
      }
      Var_16 = (MR_Word) (Var_55);
      {
        TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_28_28, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
        MR_hl_field(0, TypeInfo_28_28, 1) = ((MR_Box) (TypeInfo_20_20));
      }
      Var_59 = (MR_Word) (STATE_VARIABLE_Components_0_14);
      mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_28_28, (MR_Word) (Var_59), ((MR_Box) (Var_16)), &conv6_Var_60);
      Var_60 = (MR_Word) (conv6_Var_60);
      STATE_VARIABLE_Components_17_17 = (MR_Word) (Var_60);
      Var_61 = (MR_Word) (Xs1_9);
      Var_62 = (MR_Word) (Comp_12);
      mercury__sparse_bitset__difference_loop_3_p_0(Var_61, Var_62, &Var_63);
      Xs2_13 = (MR_Word) (Var_63);
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
  MR_Word TypeInfo_for_T_18,
  MR_Word G_5,
  MR_Word Keys0_6,
  MR_Word STATE_VARIABLE_Comp_0_15,
  MR_Word * STATE_VARIABLE_Comp_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeClassInfo_for_uenum_22;
    MR_Word X_8;
    MR_Word Keys1_9;
    MR_Word TypeInfo_20_20;
    MR_Box conv1_X_8;
    MR_Word conv0_Keys1_9;

    // setup for model_det tailcalls optimized into a loop
    ;
    {
      TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_18));
    }
    {
      TypeClassInfo_for_uenum_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_22, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_22, 1) = ((MR_Box) (TypeInfo_for_T_18));
      MR_hl_field(0, TypeClassInfo_for_uenum_22, 2) = ((MR_Box) (TypeInfo_20_20));
    }
    succeeded = mercury__sparse_bitset__remove_least_3_p_0(TypeClassInfo_for_uenum_22, &conv1_X_8, (MR_Word) (Keys0_6), &conv0_Keys1_9);
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
      MR_Word Var_27 = (MR_Word) (STATE_VARIABLE_Comp_0_15);
      MR_Word Var_28;
      MR_Unsigned Var_29;
      MR_Unsigned Var_30;
      MR_Unsigned Var_31;
      MR_Unsigned Var_32;
      MR_Unsigned Var_33;
      MR_Unsigned Var_35;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_44;
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_22, (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv3_Var_29;
      MR_Word next_value_of_Keys0_6;
      MR_Word next_value_of_STATE_VARIABLE_Comp_0_15;

      conv3_Var_29 = func_2(((MR_Box) (TypeClassInfo_for_uenum_22)), ((MR_Box) (X_8)));
      Var_29 = ((MR_Unsigned) (conv3_Var_29));
{
#define MR_PROC_LABEL mercury__digraph__reachable_from_4_p_0

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
      mercury__sparse_bitset__insert_loop_4_p_0(Var_30, Var_31, Var_27, &Var_28);
      STATE_VARIABLE_Comp_17_17 = (MR_Word) (Var_28);
      mercury__digraph__lookup_key_set_from_3_p_0(TypeInfo_for_T_18, G_5, X_8, &FwdSet_10);
      mercury__digraph__lookup_key_set_to_3_p_0(TypeInfo_for_T_18, G_5, X_8, &BwdSet_11);
      Var_36 = (MR_Word) (FwdSet_10);
      Var_37 = (MR_Word) (BwdSet_11);
      mercury__sparse_bitset__union_loop_3_p_0(Var_36, Var_37, &Var_38);
      Var_40 = (MR_Word) (STATE_VARIABLE_Comp_17_17);
      mercury__sparse_bitset__difference_loop_3_p_0(Var_38, Var_40, &Var_41);
      Var_42 = (MR_Word) (Keys1_9);
      mercury__sparse_bitset__union_loop_3_p_0(Var_42, Var_41, &Var_44);
      Keys_14 = (MR_Word) (Var_44);
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
  MR_bool succeeded;
  MR_Word TypeInfo_11_21;
  MR_Word Keys_3;
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, G_2, (MR_Integer) 1))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_16, (MR_Integer) 1))));
  MR_Word conv0_Keys_3;
  MR_Word Var_4;

  {
    TypeInfo_11_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_11_21, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_11_21, 1) = ((MR_Box) (TypeInfo_for_T_8));
  }
  mercury__tree234__keys_acc_3_p_0(TypeInfo_11_21, TypeInfo_for_T_8, (MR_Word) (Var_23), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_Keys_3);
  Keys_3 = (MR_Word) (conv0_Keys_3);
  succeeded = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__list_0(TypeInfo_for_T_8, G_2, (MR_Word) ((MR_Unsigned) 0U), Keys_3, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &Var_4);
  return succeeded;
}

static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__list_0(
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
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_33,
  MR_Word Var_34,
  MR_Word Var_35,
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

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *HeadVar__6_12 = HeadVar__5_11;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (HeadVar__4_10 == (MR_Unsigned) 1U);
      if (succeeded)
      {
        MR_Word Var_13;
        MR_Box conv0_Var_13;

        conv0_Var_13 = mercury__enum__det_from_uint_1_f_0(TypeClassInfo_for_uenum_22, HeadVar__2_8);
        Var_13 = ((MR_Word) (conv0_Var_13));
        succeeded = mercury__digraph__is_dag_2_5_p_0(Var_33, Var_34, Var_35, Var_13, HeadVar__5_11, HeadVar__6_12);
      }
      else
      {
        MR_Unsigned Var_14 = (HeadVar__4_10 >> 1);
        MR_Unsigned Var_16;
        MR_Unsigned Var_17;
        MR_Unsigned Var_18;
        MR_Unsigned Var_19;
        MR_Word Var_20;
        MR_Unsigned Var_21;
        MR_Unsigned Var_36;
        MR_Unsigned Var_37 = ~((MR_Unsigned) 0U);
        MR_Unsigned next_value_of_HeadVar__2_8;
        MR_Unsigned next_value_of_HeadVar__3_9;
        MR_Unsigned next_value_of_HeadVar__4_10;
        MR_Word next_value_of_HeadVar__5_11;

        Var_36 = (Var_37 << (int) Var_14);
        Var_16 = ~(Var_36);
        Var_17 = (Var_16 & HeadVar__3_9);
        Var_19 = (HeadVar__3_9 >> (int) Var_14);
        Var_18 = (Var_16 & Var_19);
        succeeded = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_6_p_in__sparse_bitset_0(Var_33, Var_34, Var_35, TypeClassInfo_for_uenum_22, HeadVar__2_8, Var_17, Var_14, HeadVar__5_11, &Var_20);
        if (succeeded)
        {
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
  MR_bool succeeded;
  MR_Word TypeInfo_19_19;

  {
    TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_19_19, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_19_19, 1) = ((MR_Box) (TypeInfo_for_T_17));
  }
  succeeded = mercury__list__member_2_p_0(TypeInfo_19_19, ((MR_Box) (X_8)), (MR_Word) (Ancestors_7));
  if (succeeded)
    succeeded = MR_FALSE;
  else
  {
    MR_Word TypeClassInfo_for_uenum_23;
    MR_Word STATE_VARIABLE_Visited_13_13;
    MR_Word TypeInfo_21_21;
    MR_Word Var_33 = (MR_Word) (STATE_VARIABLE_Visited_0_11);
    MR_Word Var_34;
    MR_Unsigned Var_35;
    MR_Unsigned Var_36;
    MR_Unsigned Var_37;
    MR_Unsigned Var_38;
    MR_Unsigned Var_39;
    MR_Unsigned Var_41;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_Var_35;

    {
      TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_21_21, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(0, TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_17));
    }
    {
      TypeClassInfo_for_uenum_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_23, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_23, 1) = ((MR_Box) (TypeInfo_for_T_17));
      MR_hl_field(0, TypeClassInfo_for_uenum_23, 2) = ((MR_Box) (TypeInfo_21_21));
    }
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_23, (MR_Integer) 0)), (MR_Integer) 5))));
    conv1_Var_35 = func_0(((MR_Box) (TypeClassInfo_for_uenum_23)), ((MR_Box) (X_8)));
    Var_35 = ((MR_Unsigned) (conv1_Var_35));
{
#define MR_PROC_LABEL mercury__digraph__is_dag_2_5_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_39  = Bits;
}
    Var_38 = (Var_39 - (MR_Unsigned) 1U);
    Var_41 = ~(Var_38);
    Var_36 = (Var_35 & Var_41);
    Var_37 = (Var_35 & Var_38);
    succeeded = mercury__sparse_bitset__insert_new_loop_4_p_0(Var_36, Var_37, Var_33, &Var_34);
    if (succeeded)
    {
      STATE_VARIABLE_Visited_13_13 = (MR_Word) (Var_34);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word SuccXs_10;
      MR_Word Var_16;
      MR_Word Var_42;

      mercury__digraph__lookup_key_set_from_3_p_0(TypeInfo_for_T_17, G_6, X_8, &SuccXs_10);
      Var_42 = (MR_Word) (SuccXs_10);
      {
        Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_16, 0) = ((MR_Box) (X_8));
        MR_hl_field(1, Var_16, 1) = ((MR_Box) (Ancestors_7));
      }
      succeeded = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_53_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(TypeInfo_for_T_17, G_6, Var_16, TypeClassInfo_for_uenum_23, Var_42, STATE_VARIABLE_Visited_13_13, STATE_VARIABLE_Visited_12);
    }
    else
    {
      *STATE_VARIABLE_Visited_12 = STATE_VARIABLE_Visited_0_11;
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_53_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Word TypeClassInfo_for_uenum_19,
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
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Unsigned Var_13 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
      MR_Unsigned Var_14 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
      MR_Unsigned Var_17;
      MR_Word Var_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_53_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_17  = Bits;
}
      succeeded = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_6_p_in__sparse_bitset_0(Var_30, Var_31, Var_32, TypeClassInfo_for_uenum_19, Var_13, Var_14, Var_17, HeadVar__3_3, &Var_18);
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
  MR_Word Comp_6;

  mercury__digraph__compose_3_p_0(TypeInfo_for_T_7, G1_4, G2_5, &Comp_6);
  return Comp_6;
}

void MR_CALL 
mercury__digraph__compose_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word G1_4,
  MR_Word G2_5,
  MR_Word * Comp_6)
{
  MR_Word FwdMap2_7 = ((MR_Word) ((MR_hl_field(0, G2_5, (MR_Integer) 2))));

  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_57_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(TypeInfo_for_T_13, G1_4, G2_5, FwdMap2_7, (MR_Word) (&mercury__digraph_scalar_common_2[1]), Comp_6);
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_57_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(
  MR_Word Var_59,
  MR_Word Var_60,
  MR_Word Var_61,
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
          MR_Unsigned Var_9 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
          MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_15;
          MR_Word Var_16;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_57_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(Var_59, Var_60, Var_61, Var_11, HeadVar__3_3, &Var_15);
          mercury__digraph__compose_loop_6_p_0(Var_59, Var_60, Var_61, Var_9, Var_10, Var_15, &Var_16);
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
          MR_Unsigned Var_18 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
          MR_Word Var_19 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
          MR_Unsigned Var_20 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_21 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_22 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 4))));
          MR_Word Var_23 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 5))));
          MR_Word Var_24 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 6))));
          MR_Word Var_27;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_57_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(Var_59, Var_60, Var_61, Var_22, HeadVar__3_3, &Var_27);
          mercury__digraph__compose_loop_6_p_0(Var_59, Var_60, Var_61, Var_18, Var_19, Var_27, &Var_28);
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_57_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(Var_59, Var_60, Var_61, Var_23, Var_28, &Var_29);
          mercury__digraph__compose_loop_6_p_0(Var_59, Var_60, Var_61, Var_20, Var_21, Var_29, &Var_30);
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
          MR_Unsigned Var_32 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
          MR_Word Var_33 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
          MR_Unsigned Var_34 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
          MR_Unsigned Var_36 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 4))));
          MR_Word Var_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 5))));
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 6))));
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 7))));
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 8))));
          MR_Word Var_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 9))));
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_57_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(Var_59, Var_60, Var_61, Var_38, HeadVar__3_3, &Var_44);
          mercury__digraph__compose_loop_6_p_0(Var_59, Var_60, Var_61, Var_32, Var_33, Var_44, &Var_45);
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_57_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(Var_59, Var_60, Var_61, Var_39, Var_45, &Var_46);
          mercury__digraph__compose_loop_6_p_0(Var_59, Var_60, Var_61, Var_34, Var_35, Var_46, &Var_47);
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_57_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__tree234_0(Var_59, Var_60, Var_61, Var_40, Var_47, &Var_48);
          mercury__digraph__compose_loop_6_p_0(Var_59, Var_60, Var_61, Var_36, Var_37, Var_48, &Var_49);
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
mercury__digraph__compose_loop_6_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_Word G1_7,
  MR_Word G2_8,
  MR_Unsigned MI2_9,
  MR_Word Ys2_10,
  MR_Word STATE_VARIABLE_Comp_0_25,
  MR_Word * STATE_VARIABLE_Comp_26)
{
  MR_bool succeeded;
  MR_Word M2_12 = (MR_Word) (MI2_9);
  MR_Box VM_13;
  MR_Word TypeInfo_13_58;
  MR_Word Xs1_16;
  MR_Word TypeCtorInfo_36_36;
  MR_Word TypeCtorInfo_39_39;
  MR_Word TypeInfo_40_40;
  MR_Word M1_14;
  MR_Unsigned MI1_15;
  MR_Word Var_27;
  MR_Word Var_53;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Box Var_61;
  MR_Box conv0_M1_14;
  MR_Box conv1_Xs1_16;

  mercury__digraph__lookup_vertex_3_p_0(TypeInfo_for_T_35, G2_8, M2_12, &VM_13);
  Var_53 = ((MR_Word) ((MR_hl_field(0, G1_7, (MR_Integer) 1))));
  Var_59 = ((MR_Word) ((MR_hl_field(0, Var_53, (MR_Integer) 0))));
  Var_60 = ((MR_Word) ((MR_hl_field(0, Var_53, (MR_Integer) 1))));
  {
    TypeInfo_13_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_13_58, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_13_58, 1) = ((MR_Box) (TypeInfo_for_T_35));
  }
  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_35, TypeInfo_13_58, Var_59, VM_13, &conv0_M1_14);
  if (succeeded)
  {
    M1_14 = ((MR_Word) (conv0_M1_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = mercury__tree234__search_3_p_0(TypeInfo_13_58, TypeInfo_for_T_35, (MR_Word) (Var_60), ((MR_Box) (M1_14)), &Var_61);
    if (succeeded)
    {
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_35, VM_13, Var_61);
      if (succeeded)
      {
        MI1_15 = (MR_Unsigned) (M1_14);
        Var_27 = ((MR_Word) ((MR_hl_field(0, G1_7, (MR_Integer) 3))));
        TypeCtorInfo_36_36 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0);
        TypeCtorInfo_39_39 = (MR_Word) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1);
        {
          TypeInfo_40_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_40_40, 0) = ((MR_Box) (TypeCtorInfo_39_39));
          MR_hl_field(0, TypeInfo_40_40, 1) = ((MR_Box) (TypeInfo_13_58));
        }
        succeeded = mercury__tree234__search_3_p_0(TypeCtorInfo_36_36, TypeInfo_40_40, Var_27, ((MR_Box) (MI1_15)), &conv1_Xs1_16);
        if (succeeded)
        {
          Xs1_16 = ((MR_Word) (conv1_Xs1_16));
          succeeded = MR_TRUE;
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word TypeClassInfo_for_uenum_47;
    MR_Word Xs_17;
    MR_Word Ys_18;
    MR_Unsigned NextKey_19;
    MR_Word VMap_20;
    MR_Word FwdMap0_21;
    MR_Word BwdMap0_22;
    MR_Word FwdMap_23;
    MR_Word BwdMap_24;
    MR_Word STATE_VARIABLE_Comp_28_28;
    MR_Word STATE_VARIABLE_Comp_29_29;
    MR_Word Var_73;
    MR_Word Var_90;

    {
      TypeClassInfo_for_uenum_47 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_47, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_47, 1) = ((MR_Box) (TypeInfo_for_T_35));
      MR_hl_field(0, TypeClassInfo_for_uenum_47, 2) = ((MR_Box) (TypeInfo_13_58));
    }
    Var_73 = (MR_Word) (Xs1_16);
    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_53_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(TypeInfo_for_T_35, G1_7, TypeClassInfo_for_uenum_47, Var_73, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &Xs_17, STATE_VARIABLE_Comp_0_25, &STATE_VARIABLE_Comp_28_28);
    Var_90 = (MR_Word) (Ys2_10);
    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_53_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(TypeInfo_for_T_35, G2_8, TypeClassInfo_for_uenum_47, Var_90, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &Ys_18, STATE_VARIABLE_Comp_28_28, &STATE_VARIABLE_Comp_29_29);
    NextKey_19 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Comp_29_29, (MR_Integer) 0))));
    VMap_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Comp_29_29, (MR_Integer) 1))));
    FwdMap0_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Comp_29_29, (MR_Integer) 2))));
    BwdMap0_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Comp_29_29, (MR_Integer) 3))));
    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(TypeInfo_for_T_35, Ys_18, TypeClassInfo_for_uenum_47, Xs_17, FwdMap0_21, &FwdMap_23);
    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(TypeInfo_for_T_35, Xs_17, TypeClassInfo_for_uenum_47, Ys_18, BwdMap0_22, &BwdMap_24);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Comp_26 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (NextKey_19));
      MR_hl_field(0, base, 1) = ((MR_Box) (VMap_20));
      MR_hl_field(0, base, 2) = ((MR_Box) (FwdMap_23));
      MR_hl_field(0, base, 3) = ((MR_Box) (BwdMap_24));
    }
  }
  else
    *STATE_VARIABLE_Comp_26 = STATE_VARIABLE_Comp_0_25;
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_53_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_40,
  MR_Word Var_41,
  MR_Word TypeClassInfo_for_uenum_26,
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
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Unsigned Var_19 = ((MR_Unsigned) ((MR_hl_field(0, Var_13, (MR_Integer) 0))));
      MR_Unsigned Var_20 = ((MR_Unsigned) ((MR_hl_field(0, Var_13, (MR_Integer) 1))));
      MR_Unsigned Var_23;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__5_5;

{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_53_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_23  = Bits;
}
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_8_p_in__sparse_bitset_0(Var_40, Var_41, TypeClassInfo_for_uenum_26, Var_19, Var_20, Var_23, HeadVar__3_3, &Var_24, HeadVar__5_5, &Var_25);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_8_p_in__sparse_bitset_0(
  MR_Word Var_41,
  MR_Word Var_42,
  MR_Word TypeClassInfo_for_uenum_27,
  MR_Unsigned HeadVar__2_10,
  MR_Unsigned HeadVar__3_11,
  MR_Unsigned HeadVar__4_12,
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
      succeeded = (HeadVar__4_12 == (MR_Unsigned) 1U);
      if (succeeded)
      {
        MR_Word Var_17;
        MR_Box conv0_Var_17;

        conv0_Var_17 = mercury__enum__det_from_uint_1_f_0(TypeClassInfo_for_uenum_27, HeadVar__2_10);
        Var_17 = ((MR_Word) (conv0_Var_17));
        mercury__digraph__copy_vertex_6_p_0(Var_41, Var_42, Var_17, HeadVar__5_13, HeadVar__6_14, HeadVar__7_15, HeadVar__8_16);
      }
      else
      {
        MR_Unsigned Var_18 = (HeadVar__4_12 >> 1);
        MR_Unsigned Var_20;
        MR_Unsigned Var_21;
        MR_Unsigned Var_22;
        MR_Unsigned Var_23;
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Unsigned Var_26;
        MR_Unsigned Var_43;
        MR_Unsigned Var_44 = ~((MR_Unsigned) 0U);
        MR_Unsigned next_value_of_HeadVar__2_10;
        MR_Unsigned next_value_of_HeadVar__3_11;
        MR_Unsigned next_value_of_HeadVar__4_12;
        MR_Word next_value_of_HeadVar__5_13;
        MR_Word next_value_of_HeadVar__7_15;

        Var_43 = (Var_44 << (int) Var_18);
        Var_20 = ~(Var_43);
        Var_21 = (Var_20 & HeadVar__3_11);
        Var_23 = (HeadVar__3_11 >> (int) Var_18);
        Var_22 = (Var_20 & Var_23);
        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_8_p_in__sparse_bitset_0(Var_41, Var_42, TypeClassInfo_for_uenum_27, HeadVar__2_10, Var_21, Var_18, HeadVar__5_13, &Var_24, HeadVar__7_15, &Var_25);
        Var_26 = (HeadVar__2_10 + Var_18);
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
mercury__digraph__copy_vertex_6_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word G_7,
  MR_Word X_8,
  MR_Word STATE_VARIABLE_CompXs_0_13,
  MR_Word * STATE_VARIABLE_CompXs_14,
  MR_Word STATE_VARIABLE_Comp_0_15,
  MR_Word * STATE_VARIABLE_Comp_16)
{
  MR_Word TypeInfo_19_19;
  MR_Word TypeClassInfo_for_uenum_21;
  MR_Box VX_11;
  MR_Word CompX_12;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Unsigned Var_24;
  MR_Unsigned Var_25;
  MR_Unsigned Var_26;
  MR_Unsigned Var_27;
  MR_Unsigned Var_28;
  MR_Unsigned Var_30;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_24;

  mercury__digraph__lookup_vertex_3_p_0(TypeInfo_for_T_17, G_7, X_8, &VX_11);
  mercury__digraph__add_vertex_4_p_0(TypeInfo_for_T_17, VX_11, &CompX_12, STATE_VARIABLE_Comp_0_15, STATE_VARIABLE_Comp_16);
  {
    TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_19_19, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_19_19, 1) = ((MR_Box) (TypeInfo_for_T_17));
  }
  {
    TypeClassInfo_for_uenum_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_21, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_21, 1) = ((MR_Box) (TypeInfo_for_T_17));
    MR_hl_field(0, TypeClassInfo_for_uenum_21, 2) = ((MR_Box) (TypeInfo_19_19));
  }
  Var_22 = (MR_Word) (STATE_VARIABLE_CompXs_0_13);
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_21, (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_24 = func_0(((MR_Box) (TypeClassInfo_for_uenum_21)), ((MR_Box) (CompX_12)));
  Var_24 = ((MR_Unsigned) (conv1_Var_24));
{
#define MR_PROC_LABEL mercury__digraph__copy_vertex_6_p_0

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
  *STATE_VARIABLE_CompXs_14 = (MR_Word) (Var_23);
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_23,
  MR_Word Var_24,
  MR_Word TypeClassInfo_for_uenum_9,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_7,
  MR_Word * HeadVar__4_8)
{
  MR_Word Var_6 = (MR_Word) (HeadVar__2_2);

  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_53_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(Var_23, Var_24, TypeClassInfo_for_uenum_9, Var_6, HeadVar__3_7, HeadVar__4_8);
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_53_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_33,
  MR_Word Var_34,
  MR_Word TypeClassInfo_for_uenum_19,
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
      MR_Unsigned Var_13 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
      MR_Unsigned Var_14 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
      MR_Unsigned Var_17;
      MR_Word Var_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_53_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_17  = Bits;
}
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_49_93_95_48_6_p_in__sparse_bitset_0(Var_33, Var_34, TypeClassInfo_for_uenum_19, Var_13, Var_14, Var_17, HeadVar__3_3, &Var_18);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_49_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_36,
  MR_Word Var_37,
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
        MR_Word Var_13;
        MR_Box conv0_Var_13;

        conv0_Var_13 = mercury__enum__det_from_uint_1_f_0(TypeClassInfo_for_uenum_22, HeadVar__2_8);
        Var_13 = ((MR_Word) (conv0_Var_13));
        mercury__digraph__add_to_key_set_map_4_p_0(Var_36, Var_37, Var_13, HeadVar__5_11, HeadVar__6_12);
      }
      else
      {
        MR_Unsigned Var_14 = (HeadVar__4_10 >> 1);
        MR_Unsigned Var_16;
        MR_Unsigned Var_17;
        MR_Unsigned Var_18;
        MR_Unsigned Var_19;
        MR_Word Var_20;
        MR_Unsigned Var_21;
        MR_Unsigned Var_38;
        MR_Unsigned Var_39 = ~((MR_Unsigned) 0U);
        MR_Unsigned next_value_of_HeadVar__2_8;
        MR_Unsigned next_value_of_HeadVar__3_9;
        MR_Unsigned next_value_of_HeadVar__4_10;
        MR_Word next_value_of_HeadVar__5_11;

        Var_38 = (Var_39 << (int) Var_14);
        Var_16 = ~(Var_38);
        Var_17 = (Var_16 & HeadVar__3_9);
        Var_19 = (HeadVar__3_9 >> (int) Var_14);
        Var_18 = (Var_16 & Var_19);
        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_49_93_95_48_6_p_in__sparse_bitset_0(Var_36, Var_37, TypeClassInfo_for_uenum_22, HeadVar__2_8, Var_17, Var_14, HeadVar__5_11, &Var_20);
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
mercury__digraph__add_to_key_set_map_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_13;

  mercury__digraph__IntroducedFrom__pred__key_set_map_union__461__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__4_13);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_13));
}

static void MR_CALL 
mercury__digraph__add_to_key_set_map_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Ys_5,
  MR_Word X_6,
  MR_Word STATE_VARIABLE_Map_0_9,
  MR_Word * STATE_VARIABLE_Map_10)
{
  MR_bool succeeded;
  MR_Unsigned XI_8 = (MR_Unsigned) (X_6);
  MR_Word Map1_12;
  MR_Word TypeInfo_17_15;
  MR_Word TypeInfo_19_17;
  MR_Word Var_13;
  MR_Word conv1_Map1_12;

  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&mercury__digraph_scalar_common_6[0]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (mercury__digraph__add_to_key_set_map_4_p_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (TypeInfo_for_T_11));
    MR_hl_field(0, Var_13, 4) = ((MR_Box) (Ys_5));
  }
  {
    TypeInfo_17_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_17_15, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_17_15, 1) = ((MR_Box) (TypeInfo_for_T_11));
  }
  {
    TypeInfo_19_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_19_17, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_19_17, 1) = ((MR_Box) (TypeInfo_17_15));
  }
  succeeded = mercury__tree234__transform_value_4_p_0(TypeInfo_19_17, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (Var_13), ((MR_Box) (XI_8)), (MR_Word) (STATE_VARIABLE_Map_0_9), &conv1_Map1_12);
  if (succeeded)
  {
    Map1_12 = (MR_Word) (conv1_Map1_12);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    *STATE_VARIABLE_Map_10 = Map1_12;
  else
  {
    MR_Word TypeInfo_23_21;
    MR_Word TypeInfo_25_23;

    {
      TypeInfo_23_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_23_21, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(0, TypeInfo_23_21, 1) = ((MR_Box) (TypeInfo_for_T_11));
    }
    {
      TypeInfo_25_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_25_23, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(0, TypeInfo_25_23, 1) = ((MR_Box) (TypeInfo_23_21));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_25_23, ((MR_Box) (XI_8)), ((MR_Box) (Ys_5)), STATE_VARIABLE_Map_0_9, STATE_VARIABLE_Map_10);
  }
}

void MR_CALL 
mercury__digraph__inverse_2_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word G_3,
  MR_Word * InvG_4)
{
  MR_Unsigned Next_5 = ((MR_Unsigned) ((MR_hl_field(0, G_3, (MR_Integer) 0))));
  MR_Word VMap_6 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 1))));
  MR_Word Fwd_7 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 2))));
  MR_Word Bwd_8 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 3))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *InvG_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Next_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (VMap_6));
    MR_hl_field(0, base, 2) = ((MR_Box) (Bwd_8));
    MR_hl_field(0, base, 3) = ((MR_Box) (Fwd_7));
  }
}

MR_Word MR_CALL 
mercury__digraph__inverse_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word G_3)
{
  MR_Word InvG_4;
  MR_Unsigned Next_6 = ((MR_Unsigned) ((MR_hl_field(0, G_3, (MR_Integer) 0))));
  MR_Word VMap_7 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 1))));
  MR_Word Fwd_8 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 2))));
  MR_Word Bwd_9 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 3))));

  {
    InvG_4 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InvG_4, 0) = ((MR_Box) (Next_6));
    MR_hl_field(0, InvG_4, 1) = ((MR_Box) (VMap_7));
    MR_hl_field(0, InvG_4, 2) = ((MR_Box) (Bwd_9));
    MR_hl_field(0, InvG_4, 3) = ((MR_Box) (Fwd_8));
  }
  return InvG_4;
}

MR_Word MR_CALL 
mercury__digraph__vertices_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word G_3)
{
  MR_Word Vs_4;

  mercury__digraph__vertices_2_p_0(TypeInfo_for_T_5, G_3, &Vs_4);
  return Vs_4;
}

void MR_CALL 
mercury__digraph__vertices_2_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word G_3,
  MR_Word * Vs_4)
{
  MR_Word TypeInfo_12_12;
  MR_Word VsList_5;
  MR_Word Var_6 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 1))));
  MR_Word Var_13;
  MR_Word Var_16;

  {
    TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_12_12, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_12_12, 1) = ((MR_Box) (TypeInfo_for_T_10));
  }
  Var_13 = ((MR_Word) ((MR_hl_field(0, Var_6, (MR_Integer) 0))));
  mercury__tree234__keys_acc_3_p_0(TypeInfo_for_T_10, TypeInfo_12_12, Var_13, (MR_Word) ((MR_Unsigned) 0U), &VsList_5);
  if ((VsList_5 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_16 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Var_17 = (MR_hl_field(1, VsList_5, (MR_Integer) 0));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, VsList_5, (MR_Integer) 1))));

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_for_T_10, Var_17, Var_18, &Var_16);
  }
  *Vs_4 = (MR_Word) (Var_16);
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
  MR_Word TypeInfo_17_17;
  MR_Word DfsRev_10;
  MR_Word conv0_Dfs_9;

  mercury__digraph__dfs_2_6_p_0(TypeInfo_for_T_15, G_6, X_7, STATE_VARIABLE_Visited_0_11, STATE_VARIABLE_Visited_12, (MR_Word) ((MR_Unsigned) 0U), &DfsRev_10);
  {
    TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_17_17, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_T_15));
  }
  mercury__list__reverse_2_p_0(TypeInfo_17_17, (MR_Word) (DfsRev_10), &conv0_Dfs_9);
  *Dfs_9 = (MR_Word) (conv0_Dfs_9);
}

MR_Word MR_CALL 
mercury__digraph__dfsrev_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word G_3)
{
  MR_Word DfsRev_4;

  mercury__digraph__dfsrev_2_p_0(TypeInfo_for_T_5, G_3, &DfsRev_4);
  return DfsRev_4;
}

void MR_CALL 
mercury__digraph__dfs_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word G_3,
  MR_Word * Dfs_4)
{
  MR_Word TypeInfo_8_8;
  MR_Word DfsRev_5;
  MR_Word conv0_Dfs_4;

  mercury__digraph__dfsrev_2_p_0(TypeInfo_for_T_6, G_3, &DfsRev_5);
  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  mercury__list__reverse_2_p_0(TypeInfo_8_8, (MR_Word) (DfsRev_5), &conv0_Dfs_4);
  *Dfs_4 = (MR_Word) (conv0_Dfs_4);
}

MR_Word MR_CALL 
mercury__digraph__dfs_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word G_3)
{
  MR_Word Dfs_4;
  MR_Word TypeInfo_8_8;
  MR_Word DfsRev_6;
  MR_Word conv0_Dfs_4;

  mercury__digraph__dfsrev_2_p_0(TypeInfo_for_T_5, G_3, &DfsRev_6);
  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  mercury__list__reverse_2_p_0(TypeInfo_8_8, (MR_Word) (DfsRev_6), &conv0_Dfs_4);
  Dfs_4 = (MR_Word) (conv0_Dfs_4);
  return Dfs_4;
}

void MR_CALL 
mercury__digraph__dfsrev_2_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word G_3,
  MR_Word * DfsRev_4)
{
  MR_Word TypeInfo_11_27;
  MR_Word Keys_5;
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 1))));
  MR_Word Var_29;
  MR_Word conv0_Keys_5;
  MR_Word Var_6;

  {
    TypeInfo_11_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_11_27, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_11_27, 1) = ((MR_Box) (TypeInfo_for_T_10));
  }
  Var_29 = ((MR_Word) ((MR_hl_field(0, Var_22, (MR_Integer) 1))));
  mercury__tree234__keys_acc_3_p_0(TypeInfo_11_27, TypeInfo_for_T_10, (MR_Word) (Var_29), (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_Keys_5);
  Keys_5 = (MR_Word) (conv0_Keys_5);
  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_52_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_6_p_in__list_0(TypeInfo_for_T_10, G_3, Keys_5, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &Var_6, (MR_Word) ((MR_Unsigned) 0U), DfsRev_4);
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_52_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_6_p_in__list_0(
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
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
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
  MR_Word Var_8;

  mercury__digraph__dfs_2_6_p_0(TypeInfo_for_T_10, G_4, X_5, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &Var_8, (MR_Word) ((MR_Unsigned) 0U), DfsRev_6);
}

MR_Word MR_CALL 
mercury__digraph__dfsrev_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word G_4,
  MR_Word X_5)
{
  MR_Word DfsRev_6;
  MR_Word Var_9;

  mercury__digraph__dfs_2_6_p_0(TypeInfo_for_T_7, G_4, X_5, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &Var_9, (MR_Word) ((MR_Unsigned) 0U), &DfsRev_6);
  return DfsRev_6;
}

MR_Word MR_CALL 
mercury__digraph__dfs_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word G_4,
  MR_Word X_5)
{
  MR_Word Dfs_6;

  mercury__digraph__dfs_3_p_0(TypeInfo_for_T_7, G_4, X_5, &Dfs_6);
  return Dfs_6;
}

void MR_CALL 
mercury__digraph__dfs_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word G_4,
  MR_Word X_5,
  MR_Word * Dfs_6)
{
  MR_Word TypeInfo_10_10;
  MR_Word DfsRev_7;
  MR_Word Var_12;
  MR_Word conv0_Dfs_6;

  mercury__digraph__dfs_2_6_p_0(TypeInfo_for_T_8, G_4, X_5, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &Var_12, (MR_Word) ((MR_Unsigned) 0U), &DfsRev_7);
  {
    TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_10_10, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_T_8));
  }
  mercury__list__reverse_2_p_0(TypeInfo_10_10, (MR_Word) (DfsRev_7), &conv0_Dfs_6);
  *Dfs_6 = (MR_Word) (conv0_Dfs_6);
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_8_p_in__sparse_bitset_0(
  MR_Word Var_43,
  MR_Word Var_44,
  MR_Word TypeClassInfo_for_uenum_27,
  MR_Unsigned HeadVar__2_10,
  MR_Unsigned HeadVar__3_11,
  MR_Unsigned HeadVar__4_12,
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
      succeeded = (HeadVar__4_12 == (MR_Unsigned) 1U);
      if (succeeded)
      {
        MR_Word Var_17;
        MR_Box conv0_Var_17;

        conv0_Var_17 = mercury__enum__det_from_uint_1_f_0(TypeClassInfo_for_uenum_27, HeadVar__2_10);
        Var_17 = ((MR_Word) (conv0_Var_17));
        mercury__digraph__dfs_2_6_p_0(Var_43, Var_44, Var_17, HeadVar__5_13, HeadVar__6_14, HeadVar__7_15, HeadVar__8_16);
      }
      else
      {
        MR_Unsigned Var_18 = (HeadVar__4_12 >> 1);
        MR_Unsigned Var_20;
        MR_Unsigned Var_21;
        MR_Unsigned Var_22;
        MR_Unsigned Var_23;
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Unsigned Var_26;
        MR_Unsigned Var_45;
        MR_Unsigned Var_46 = ~((MR_Unsigned) 0U);
        MR_Unsigned next_value_of_HeadVar__2_10;
        MR_Unsigned next_value_of_HeadVar__3_11;
        MR_Unsigned next_value_of_HeadVar__4_12;
        MR_Word next_value_of_HeadVar__5_13;
        MR_Word next_value_of_HeadVar__7_15;

        Var_45 = (Var_46 << (int) Var_18);
        Var_20 = ~(Var_45);
        Var_21 = (Var_20 & HeadVar__3_11);
        Var_23 = (HeadVar__3_11 >> (int) Var_18);
        Var_22 = (Var_20 & Var_23);
        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_8_p_in__sparse_bitset_0(Var_43, Var_44, TypeClassInfo_for_uenum_27, HeadVar__2_10, Var_21, Var_18, HeadVar__5_13, &Var_24, HeadVar__7_15, &Var_25);
        Var_26 = (HeadVar__2_10 + Var_18);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_53_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_42,
  MR_Word Var_43,
  MR_Word TypeClassInfo_for_uenum_26,
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
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Unsigned Var_19 = ((MR_Unsigned) ((MR_hl_field(0, Var_13, (MR_Integer) 0))));
      MR_Unsigned Var_20 = ((MR_Unsigned) ((MR_hl_field(0, Var_13, (MR_Integer) 1))));
      MR_Unsigned Var_23;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__5_5;

{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_53_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_23  = Bits;
}
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_108_111_119_95_116_111_95_104_105_103_104_95_95_104_111_56_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_8_p_in__sparse_bitset_0(Var_42, Var_43, TypeClassInfo_for_uenum_26, Var_19, Var_20, Var_23, HeadVar__3_3, &Var_24, HeadVar__5_5, &Var_25);
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
  MR_Word TypeInfo_for_T_20,
  MR_Word G_7,
  MR_Word X_8,
  MR_Word STATE_VARIABLE_Visited_0_12,
  MR_Word * STATE_VARIABLE_Visited_13,
  MR_Word STATE_VARIABLE_DfsRev_0_14,
  MR_Word * STATE_VARIABLE_DfsRev_15)
{
  MR_bool succeeded;
  MR_Word TypeClassInfo_for_uenum_24;
  MR_Word STATE_VARIABLE_Visited_16_16;
  MR_Word TypeInfo_22_22;
  MR_Word Var_38 = (MR_Word) (STATE_VARIABLE_Visited_0_12);
  MR_Word Var_39;
  MR_Unsigned Var_40;
  MR_Unsigned Var_41;
  MR_Unsigned Var_42;
  MR_Unsigned Var_43;
  MR_Unsigned Var_44;
  MR_Unsigned Var_46;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_40;

  {
    TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_22_22, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_T_20));
  }
  {
    TypeClassInfo_for_uenum_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_24, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_24, 1) = ((MR_Box) (TypeInfo_for_T_20));
    MR_hl_field(0, TypeClassInfo_for_uenum_24, 2) = ((MR_Box) (TypeInfo_22_22));
  }
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_24, (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_40 = func_0(((MR_Box) (TypeClassInfo_for_uenum_24)), ((MR_Box) (X_8)));
  Var_40 = ((MR_Unsigned) (conv1_Var_40));
{
#define MR_PROC_LABEL mercury__digraph__dfs_2_6_p_0

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
  succeeded = mercury__sparse_bitset__insert_new_loop_4_p_0(Var_41, Var_42, Var_38, &Var_39);
  if (succeeded)
  {
    STATE_VARIABLE_Visited_16_16 = (MR_Word) (Var_39);
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word SuccXs_11;
    MR_Word STATE_VARIABLE_DfsRev_19_19;
    MR_Word Var_47;

    mercury__digraph__lookup_key_set_from_3_p_0(TypeInfo_for_T_20, G_7, X_8, &SuccXs_11);
    Var_47 = (MR_Word) (SuccXs_11);
    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_53_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(TypeInfo_for_T_20, G_7, TypeClassInfo_for_uenum_24, Var_47, STATE_VARIABLE_Visited_16_16, STATE_VARIABLE_Visited_13, STATE_VARIABLE_DfsRev_0_14, &STATE_VARIABLE_DfsRev_19_19);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_DfsRev_15 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (X_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_DfsRev_19_19));
    }
  }
  else
  {
    *STATE_VARIABLE_DfsRev_15 = STATE_VARIABLE_DfsRev_0_14;
    *STATE_VARIABLE_Visited_13 = STATE_VARIABLE_Visited_0_12;
  }
}

MR_Word MR_CALL 
mercury__digraph__from_assoc_list_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word AL_3)
{
  MR_Word G_4;

  mercury__digraph__from_assoc_list_2_p_0(TypeInfo_for_T_5, AL_3, &G_4);
  return G_4;
}

void MR_CALL 
mercury__digraph__from_assoc_list_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word AL_3,
  MR_Word * G_4)
{
  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_56_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_93_95_48_4_p_in__list_0(TypeInfo_for_T_7, AL_3, (MR_Word) (&mercury__digraph_scalar_common_2[1]), G_4);
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_56_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_93_95_48_4_p_in__list_0(
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
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_13;
      MR_Box VX_22 = (MR_hl_field(0, Var_9, (MR_Integer) 0));
      MR_Box VY_23 = (MR_hl_field(0, Var_9, (MR_Integer) 1));
      MR_Word X_24;
      MR_Word Y_25;
      MR_Word STATE_VARIABLE_G_12_26;
      MR_Word STATE_VARIABLE_G_13_27;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      mercury__digraph__add_vertex_4_p_0(Var_21, VX_22, &X_24, HeadVar__3_3, &STATE_VARIABLE_G_12_26);
      mercury__digraph__add_vertex_4_p_0(Var_21, VY_23, &Y_25, STATE_VARIABLE_G_12_26, &STATE_VARIABLE_G_13_27);
      mercury__digraph__add_edge_4_p_0(Var_21, X_24, Y_25, STATE_VARIABLE_G_13_27, &Var_13);
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
  MR_Word List_4;

  mercury__digraph__to_key_assoc_list_2_p_0(TypeInfo_for_T_5, G_3, &List_4);
  return List_4;
}

void MR_CALL 
mercury__digraph__to_key_assoc_list_2_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word G_3,
  MR_Word * List_4)
{
  MR_Word TypeInfo_14_14;
  MR_Word TypeInfo_16_16;
  MR_Word Fwd_5 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 2))));
  MR_Word FwdKeys_6;

  {
    TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_14_14, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_T_11));
  }
  {
    TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_16_16, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_14_14));
  }
  mercury__tree234__keys_acc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_16_16, Fwd_5, (MR_Word) ((MR_Unsigned) 0U), &FwdKeys_6);
  mercury__digraph__to_key_assoc_list_2_4_p_0(TypeInfo_for_T_11, Fwd_5, FwdKeys_6, (MR_Word) ((MR_Unsigned) 0U), List_4);
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
    MR_Word TypeClassInfo_for_uenum_30;
    MR_Unsigned XI_10 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word XIs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word SuccXs_13;
    MR_Word STATE_VARIABLE_AL_16_16;
    MR_Word Var_19;
    MR_Word Var_35;
    MR_Box conv0_SuccXs_13;

    mercury__digraph__to_key_assoc_list_2_4_p_0(TypeInfo_for_T_20, HeadVar__1_1, XIs_11, STATE_VARIABLE_AL_0_3, &STATE_VARIABLE_AL_16_16);
    {
      TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_23_23, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(0, TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_T_20));
    }
    {
      TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_25_25, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(0, TypeInfo_25_25, 1) = ((MR_Box) (TypeInfo_23_23));
    }
    mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_25_25, HeadVar__1_1, ((MR_Box) (XI_10)), &conv0_SuccXs_13);
    SuccXs_13 = ((MR_Word) (conv0_SuccXs_13));
    Var_19 = (MR_Word) (XI_10);
    {
      TypeClassInfo_for_uenum_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_30, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_30, 1) = ((MR_Box) (TypeInfo_for_T_20));
      MR_hl_field(0, TypeClassInfo_for_uenum_30, 2) = ((MR_Box) (TypeInfo_23_23));
    }
    Var_35 = (MR_Word) (SuccXs_13);
    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_53_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_4_p_in__sparse_bitset_0(Var_19, TypeClassInfo_for_uenum_30, Var_35, STATE_VARIABLE_AL_16_16, STATE_VARIABLE_AL_4);
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_53_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_36,
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

    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_53_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_4_p_in__sparse_bitset_0(Var_36, TypeClassInfo_for_uenum_19, Var_10, HeadVar__3_3, &Var_13);
    Var_14 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
    Var_15 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_53_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_4_p_in__sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_18  = Bits;
}
    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_56_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(Var_36, TypeClassInfo_for_uenum_19, Var_14, Var_15, Var_18, Var_13, HeadVar__4_4);
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_56_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_39,
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
        MR_Word Var_13;
        MR_Word Var_40;
        MR_Box conv0_Var_13;

        conv0_Var_13 = mercury__enum__det_from_uint_1_f_0(TypeClassInfo_for_uenum_22, HeadVar__2_8);
        Var_13 = ((MR_Word) (conv0_Var_13));
        {
          Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_40, 0) = ((MR_Box) (Var_39));
          MR_hl_field(0, Var_40, 1) = ((MR_Box) (Var_13));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__6_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_40));
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
        MR_Unsigned Var_41;
        MR_Unsigned Var_42 = ~((MR_Unsigned) 0U);
        MR_Unsigned next_value_of_HeadVar__3_9;
        MR_Unsigned next_value_of_HeadVar__4_10;
        MR_Word next_value_of_HeadVar__5_11;

        Var_41 = (Var_42 << (int) Var_14);
        Var_16 = ~(Var_41);
        Var_17 = (Var_16 & HeadVar__3_9);
        Var_19 = (HeadVar__3_9 >> (int) Var_14);
        Var_18 = (Var_16 & Var_19);
        Var_20 = (HeadVar__2_8 + Var_14);
        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_56_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(Var_39, TypeClassInfo_for_uenum_22, Var_20, Var_18, Var_14, HeadVar__5_11, &Var_21);
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
  MR_Word List_4;

  mercury__digraph__to_assoc_list_2_p_0(TypeInfo_for_T_5, G_3, &List_4);
  return List_4;
}

void MR_CALL 
mercury__digraph__to_assoc_list_2_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word G_3,
  MR_Word * List_4)
{
  MR_Word TypeInfo_18_18;
  MR_Word TypeInfo_20_20;
  MR_Word Fwd_5 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 2))));
  MR_Word FwdKeys_6;
  MR_Word Var_7;

  {
    TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_15));
  }
  {
    TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_18_18));
  }
  mercury__tree234__keys_acc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_20_20, Fwd_5, (MR_Word) ((MR_Unsigned) 0U), &FwdKeys_6);
  Var_7 = ((MR_Word) ((MR_hl_field(0, G_3, (MR_Integer) 1))));
  mercury__digraph__to_assoc_list_2_5_p_0(TypeInfo_for_T_15, Fwd_5, FwdKeys_6, Var_7, (MR_Word) ((MR_Unsigned) 0U), List_4);
}

void MR_CALL 
mercury__digraph__to_assoc_list_2_5_p_0(
  MR_Word TypeInfo_for_T_23,
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
    MR_Word TypeInfo_25_25;
    MR_Word TypeInfo_28_28;
    MR_Word TypeClassInfo_for_uenum_33;
    MR_Unsigned XI_12 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word XIs_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Box VX_16;
    MR_Word SuccXs_17;
    MR_Word STATE_VARIABLE_AL_20_20;
    MR_Word Var_21;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Box conv0_SuccXs_17;

    mercury__digraph__to_assoc_list_2_5_p_0(TypeInfo_for_T_23, HeadVar__1_1, XIs_13, VMap_3, STATE_VARIABLE_AL_0_4, &STATE_VARIABLE_AL_20_20);
    Var_21 = (MR_Word) (XI_12);
    {
      TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_25_25, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(0, TypeInfo_25_25, 1) = ((MR_Box) (TypeInfo_for_T_23));
    }
    Var_39 = ((MR_Word) ((MR_hl_field(0, VMap_3, (MR_Integer) 1))));
    mercury__map__lookup_3_p_0(TypeInfo_25_25, TypeInfo_for_T_23, (MR_Word) (Var_39), ((MR_Box) (Var_21)), &VX_16);
    {
      TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_28_28, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(0, TypeInfo_28_28, 1) = ((MR_Box) (TypeInfo_25_25));
    }
    mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_28_28, HeadVar__1_1, ((MR_Box) (XI_12)), &conv0_SuccXs_17);
    SuccXs_17 = ((MR_Word) (conv0_SuccXs_17));
    {
      TypeClassInfo_for_uenum_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_33, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_33, 1) = ((MR_Box) (TypeInfo_for_T_23));
      MR_hl_field(0, TypeClassInfo_for_uenum_33, 2) = ((MR_Box) (TypeInfo_25_25));
    }
    Var_40 = (MR_Word) (SuccXs_17);
    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_53_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_4_p_in__sparse_bitset_0(TypeInfo_for_T_23, VMap_3, VX_16, TypeClassInfo_for_uenum_33, Var_40, STATE_VARIABLE_AL_20_20, STATE_VARIABLE_AL_5);
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_53_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word Var_31,
  MR_Word Var_32,
  MR_Box Var_33,
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

    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_53_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_4_p_in__sparse_bitset_0(Var_31, Var_32, Var_33, TypeClassInfo_for_uenum_19, Var_10, HeadVar__3_3, &Var_13);
    Var_14 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
    Var_15 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_53_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_4_p_in__sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_18  = Bits;
}
    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_57_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(Var_31, Var_32, Var_33, TypeClassInfo_for_uenum_19, Var_14, Var_15, Var_18, Var_13, HeadVar__4_4);
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_57_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Box Var_36,
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
        MR_Word TypeInfo_17_40;
        MR_Word Var_13;
        MR_Box VY_37;
        MR_Word Var_38;
        MR_Word Var_42;
        MR_Box conv0_Var_13;

        conv0_Var_13 = mercury__enum__det_from_uint_1_f_0(TypeClassInfo_for_uenum_22, HeadVar__2_8);
        Var_13 = ((MR_Word) (conv0_Var_13));
        {
          TypeInfo_17_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_17_40, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
          MR_hl_field(0, TypeInfo_17_40, 1) = ((MR_Box) (Var_34));
        }
        Var_42 = ((MR_Word) ((MR_hl_field(0, Var_35, (MR_Integer) 1))));
        mercury__map__lookup_3_p_0(TypeInfo_17_40, Var_34, (MR_Word) (Var_42), ((MR_Box) (Var_13)), &VY_37);
        {
          Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_38, 0) = Var_36;
          MR_hl_field(0, Var_38, 1) = VY_37;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__6_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_38));
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
        MR_Unsigned Var_43;
        MR_Unsigned Var_44 = ~((MR_Unsigned) 0U);
        MR_Unsigned next_value_of_HeadVar__3_9;
        MR_Unsigned next_value_of_HeadVar__4_10;
        MR_Word next_value_of_HeadVar__5_11;

        Var_43 = (Var_44 << (int) Var_14);
        Var_16 = ~(Var_43);
        Var_17 = (Var_16 & HeadVar__3_9);
        Var_19 = (HeadVar__3_9 >> (int) Var_14);
        Var_18 = (Var_16 & Var_19);
        Var_20 = (HeadVar__2_8 + Var_14);
        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_57_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(Var_34, Var_35, Var_36, TypeClassInfo_for_uenum_22, Var_20, Var_18, Var_14, HeadVar__5_11, &Var_21);
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
  MR_Word Xs_6;

  mercury__digraph__lookup_key_set_to_3_p_0(TypeInfo_for_T_7, G_4, Y_5, &Xs_6);
  return Xs_6;
}

MR_Word MR_CALL 
mercury__digraph__lookup_to_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word G_4,
  MR_Word Y_5)
{
  MR_Word Xs_6;

  mercury__digraph__lookup_to_3_p_0(TypeInfo_for_T_7, G_4, Y_5, &Xs_6);
  return Xs_6;
}

void MR_CALL 
mercury__digraph__lookup_to_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word G_4,
  MR_Word Y_5,
  MR_Word * HeadVar__3_3)
{
  MR_Word TypeInfo_9_9;
  MR_Word TypeClassInfo_for_uenum_11;
  MR_Word TypeInfo_8_14;
  MR_Word Xs_6;
  MR_Word Var_12;
  MR_Word Var_21;
  MR_Word Var_24;
  MR_Word conv0_Var_12;

  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_9_9, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_7));
  }
  {
    TypeClassInfo_for_uenum_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_11, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_11, 1) = ((MR_Box) (TypeInfo_for_T_7));
    MR_hl_field(0, TypeClassInfo_for_uenum_11, 2) = ((MR_Box) (TypeInfo_9_9));
  }
  mercury__digraph__lookup_key_set_to_3_p_0(TypeInfo_for_T_7, G_4, Y_5, &Xs_6);
{
#define MR_PROC_LABEL mercury__digraph__lookup_to_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_11 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_8_14  = TypeInfo;
}
  Var_21 = (MR_Word) (Xs_6);
  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(TypeClassInfo_for_uenum_11, Var_21, (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_Var_12);
  Var_12 = (MR_Word) (conv0_Var_12);
  if ((Var_12 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_24 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, Var_12, (MR_Integer) 0))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, Var_12, (MR_Integer) 1))));
    MR_Word conv1_Var_24;

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_8_14, ((MR_Box) (Var_25)), (MR_Word) (Var_26), &conv1_Var_24);
    Var_24 = (MR_Word) (conv1_Var_24);
  }
  *HeadVar__3_3 = (MR_Word) (Var_24);
}

void MR_CALL 
mercury__digraph__lookup_key_set_to_3_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word G_4,
  MR_Word HeadVar__2_2,
  MR_Word * Xs_6)
{
  MR_bool succeeded;
  MR_Unsigned YI_5 = (MR_Unsigned) (HeadVar__2_2);
  MR_Word Xs0_7;
  MR_Word TypeInfo_15_15;
  MR_Word TypeInfo_17_17;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, G_4, (MR_Integer) 3))));
  MR_Box conv0_Xs0_7;

  {
    TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_15_15, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_12));
  }
  {
    TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_17_17, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_15_15));
  }
  succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_17_17, Var_8, ((MR_Box) (YI_5)), &conv0_Xs0_7);
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

MR_Word MR_CALL 
mercury__digraph__lookup_key_set_from_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word G_4,
  MR_Word X_5)
{
  MR_Word Ys_6;

  mercury__digraph__lookup_key_set_from_3_p_0(TypeInfo_for_T_7, G_4, X_5, &Ys_6);
  return Ys_6;
}

MR_Word MR_CALL 
mercury__digraph__lookup_from_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word G_4,
  MR_Word X_5)
{
  MR_Word Ys_6;

  mercury__digraph__lookup_from_3_p_0(TypeInfo_for_T_7, G_4, X_5, &Ys_6);
  return Ys_6;
}

void MR_CALL 
mercury__digraph__lookup_from_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word G_4,
  MR_Word X_5,
  MR_Word * HeadVar__3_3)
{
  MR_Word TypeInfo_9_9;
  MR_Word TypeClassInfo_for_uenum_11;
  MR_Word TypeInfo_8_14;
  MR_Word Ys_6;
  MR_Word Var_12;
  MR_Word Var_21;
  MR_Word Var_24;
  MR_Word conv0_Var_12;

  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_9_9, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_7));
  }
  {
    TypeClassInfo_for_uenum_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClassInfo_for_uenum_11, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__));
    MR_hl_field(0, TypeClassInfo_for_uenum_11, 1) = ((MR_Box) (TypeInfo_for_T_7));
    MR_hl_field(0, TypeClassInfo_for_uenum_11, 2) = ((MR_Box) (TypeInfo_9_9));
  }
  mercury__digraph__lookup_key_set_from_3_p_0(TypeInfo_for_T_7, G_4, X_5, &Ys_6);
{
#define MR_PROC_LABEL mercury__digraph__lookup_from_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_uenum_11 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_8_14  = TypeInfo;
}
  Var_21 = (MR_Word) (Ys_6);
  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(TypeClassInfo_for_uenum_11, Var_21, (MR_Word) ((MR_Word) ((MR_Unsigned) 0U)), &conv0_Var_12);
  Var_12 = (MR_Word) (conv0_Var_12);
  if ((Var_12 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_24 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, Var_12, (MR_Integer) 0))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, Var_12, (MR_Integer) 1))));
    MR_Word conv1_Var_24;

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_8_14, ((MR_Box) (Var_25)), (MR_Word) (Var_26), &conv1_Var_24);
    Var_24 = (MR_Word) (conv1_Var_24);
  }
  *HeadVar__3_3 = (MR_Word) (Var_24);
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
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

    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(TypeClassInfo_for_uenum_19, Var_10, HeadVar__3_3, &Var_13);
    Var_14 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
    Var_15 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_18  = Bits;
}
    mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_55_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(TypeClassInfo_for_uenum_19, Var_14, Var_15, Var_18, Var_13, HeadVar__4_4);
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_55_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(
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
        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_55_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(TypeClassInfo_for_uenum_22, Var_20, Var_18, Var_14, HeadVar__5_11, &Var_21);
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
  MR_bool succeeded;
  MR_Unsigned XI_5 = (MR_Unsigned) (HeadVar__2_2);
  MR_Word Ys0_7;
  MR_Word TypeInfo_15_15;
  MR_Word TypeInfo_17_17;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, G_4, (MR_Integer) 2))));
  MR_Box conv0_Ys0_7;

  {
    TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_15_15, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_12));
  }
  {
    TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_17_17, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_15_15));
  }
  succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_17_17, Var_8, ((MR_Box) (XI_5)), &conv0_Ys0_7);
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

MR_bool MR_CALL 
mercury__digraph__is_edge_rev_3_p_1(
  MR_Word TypeInfo_for_T_12,
  MR_Word G_4,
  MR_Word X_5,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word TypeInfo_15_15;
  MR_Word TypeInfo_17_17;
  MR_Word BaseTypeClassInfo_for_uenum_18;
  MR_Word TypeClassInfo_for_uenum_19;
  MR_Unsigned YI_6 = (MR_Unsigned) (HeadVar__3_3);
  MR_Word XSet_7;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, G_4, (MR_Integer) 3))));
  MR_Box conv0_XSet_7;

  {
    TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_15_15, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_12));
  }
  {
    TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_17_17, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_15_15));
  }
  succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_17_17, Var_8, ((MR_Box) (YI_6)), &conv0_XSet_7);
  if (succeeded)
  {
    XSet_7 = ((MR_Word) (conv0_XSet_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    BaseTypeClassInfo_for_uenum_18 = (MR_Word) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__);
    {
      TypeClassInfo_for_uenum_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_19, 0) = ((MR_Box) (BaseTypeClassInfo_for_uenum_18));
      MR_hl_field(0, TypeClassInfo_for_uenum_19, 1) = ((MR_Box) (TypeInfo_for_T_12));
      MR_hl_field(0, TypeClassInfo_for_uenum_19, 2) = ((MR_Box) (TypeInfo_15_15));
    }
    succeeded = mercury__sparse_bitset__member_2_p_0(TypeClassInfo_for_uenum_19, ((MR_Box) (X_5)), (MR_Word) (XSet_7));
  }
  return succeeded;
}

static void MR_CALL 
mercury__digraph__is_edge_rev_3_p_0_1(
  void * env_ptr_arg)
{
  struct mercury__digraph__is_edge_rev_3_p_0_env_0_s * env_ptr = (struct mercury__digraph__is_edge_rev_3_p_0_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mercury__digraph__is_edge_rev_3_p_0_env_0__X_5) = ((MR_Word) ((env_ptr)->mercury__digraph__is_edge_rev_3_p_0_env_0__conv1_X_5));
  ((env_ptr)->mercury__digraph__is_edge_rev_3_p_0_env_0__cont)((env_ptr)->mercury__digraph__is_edge_rev_3_p_0_env_0__cont_env_ptr);
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
  struct mercury__digraph__is_edge_rev_3_p_0_env_0_s env;

  (env).mercury__digraph__is_edge_rev_3_p_0_env_0__X_5 = X_5;
  (env).mercury__digraph__is_edge_rev_3_p_0_env_0__cont = cont;
  (env).mercury__digraph__is_edge_rev_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_bool succeeded;
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_17_17;
    MR_Word BaseTypeClassInfo_for_uenum_18;
    MR_Word TypeClassInfo_for_uenum_19;
    MR_Unsigned YI_6 = (MR_Unsigned) (HeadVar__3_3);
    MR_Word XSet_7;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, G_4, (MR_Integer) 3))));
    MR_Unsigned Var_9 = ((MR_Unsigned) ((MR_hl_field(0, G_4, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, G_4, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, G_4, (MR_Integer) 2))));
    MR_Box conv0_XSet_7;

    {
      TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_15_15, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(0, TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_12));
    }
    {
      TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_17_17, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(0, TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_15_15));
    }
    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_17_17, Var_8, ((MR_Box) (YI_6)), &conv0_XSet_7);
    if (succeeded)
    {
      XSet_7 = ((MR_Word) (conv0_XSet_7));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      BaseTypeClassInfo_for_uenum_18 = (MR_Word) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__);
      {
        TypeClassInfo_for_uenum_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeClassInfo_for_uenum_19, 0) = ((MR_Box) (BaseTypeClassInfo_for_uenum_18));
        MR_hl_field(0, TypeClassInfo_for_uenum_19, 1) = ((MR_Box) (TypeInfo_for_T_12));
        MR_hl_field(0, TypeClassInfo_for_uenum_19, 2) = ((MR_Box) (TypeInfo_15_15));
      }
      mercury__sparse_bitset__member_2_p_1(TypeClassInfo_for_uenum_19, &(env).mercury__digraph__is_edge_rev_3_p_0_env_0__conv1_X_5, (MR_Word) (XSet_7), mercury__digraph__is_edge_rev_3_p_0_1, &env);
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
  MR_bool succeeded;
  MR_Word TypeInfo_15_15;
  MR_Word TypeInfo_17_17;
  MR_Word BaseTypeClassInfo_for_uenum_18;
  MR_Word TypeClassInfo_for_uenum_19;
  MR_Unsigned XI_5 = (MR_Unsigned) (HeadVar__2_2);
  MR_Word YSet_7;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, G_4, (MR_Integer) 2))));
  MR_Box conv0_YSet_7;

  {
    TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_15_15, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_12));
  }
  {
    TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_17_17, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_15_15));
  }
  succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_17_17, Var_8, ((MR_Box) (XI_5)), &conv0_YSet_7);
  if (succeeded)
  {
    YSet_7 = ((MR_Word) (conv0_YSet_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    BaseTypeClassInfo_for_uenum_18 = (MR_Word) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__);
    {
      TypeClassInfo_for_uenum_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_19, 0) = ((MR_Box) (BaseTypeClassInfo_for_uenum_18));
      MR_hl_field(0, TypeClassInfo_for_uenum_19, 1) = ((MR_Box) (TypeInfo_for_T_12));
      MR_hl_field(0, TypeClassInfo_for_uenum_19, 2) = ((MR_Box) (TypeInfo_15_15));
    }
    succeeded = mercury__sparse_bitset__member_2_p_0(TypeClassInfo_for_uenum_19, ((MR_Box) (Y_6)), (MR_Word) (YSet_7));
  }
  return succeeded;
}

static void MR_CALL 
mercury__digraph__is_edge_3_p_0_1(
  void * env_ptr_arg)
{
  struct mercury__digraph__is_edge_3_p_0_env_0_s * env_ptr = (struct mercury__digraph__is_edge_3_p_0_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mercury__digraph__is_edge_3_p_0_env_0__Y_6) = ((MR_Word) ((env_ptr)->mercury__digraph__is_edge_3_p_0_env_0__conv1_Y_6));
  ((env_ptr)->mercury__digraph__is_edge_3_p_0_env_0__cont)((env_ptr)->mercury__digraph__is_edge_3_p_0_env_0__cont_env_ptr);
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
  struct mercury__digraph__is_edge_3_p_0_env_0_s env;

  (env).mercury__digraph__is_edge_3_p_0_env_0__Y_6 = Y_6;
  (env).mercury__digraph__is_edge_3_p_0_env_0__cont = cont;
  (env).mercury__digraph__is_edge_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_bool succeeded;
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_17_17;
    MR_Word BaseTypeClassInfo_for_uenum_18;
    MR_Word TypeClassInfo_for_uenum_19;
    MR_Unsigned XI_5 = (MR_Unsigned) (HeadVar__2_2);
    MR_Word YSet_7;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, G_4, (MR_Integer) 2))));
    MR_Unsigned Var_9 = ((MR_Unsigned) ((MR_hl_field(0, G_4, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, G_4, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, G_4, (MR_Integer) 3))));
    MR_Box conv0_YSet_7;

    {
      TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_15_15, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(0, TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_12));
    }
    {
      TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_17_17, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(0, TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_15_15));
    }
    succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_17_17, Var_8, ((MR_Box) (XI_5)), &conv0_YSet_7);
    if (succeeded)
    {
      YSet_7 = ((MR_Word) (conv0_YSet_7));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      BaseTypeClassInfo_for_uenum_18 = (MR_Word) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__);
      {
        TypeClassInfo_for_uenum_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeClassInfo_for_uenum_19, 0) = ((MR_Box) (BaseTypeClassInfo_for_uenum_18));
        MR_hl_field(0, TypeClassInfo_for_uenum_19, 1) = ((MR_Box) (TypeInfo_for_T_12));
        MR_hl_field(0, TypeClassInfo_for_uenum_19, 2) = ((MR_Box) (TypeInfo_15_15));
      }
      mercury__sparse_bitset__member_2_p_1(TypeClassInfo_for_uenum_19, &(env).mercury__digraph__is_edge_3_p_0_env_0__conv1_Y_6, (MR_Word) (YSet_7), mercury__digraph__is_edge_3_p_0_1, &env);
    }
  }
}

MR_Word MR_CALL 
mercury__digraph__delete_assoc_list_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word Edges_4,
  MR_Word STATE_VARIABLE_G_0_6)
{
  MR_Word STATE_VARIABLE_G_7;

  mercury__digraph__delete_assoc_list_3_p_0(TypeInfo_for_T_8, Edges_4, STATE_VARIABLE_G_0_6, &STATE_VARIABLE_G_7);
  return STATE_VARIABLE_G_7;
}

void MR_CALL 
mercury__digraph__delete_assoc_list_3_p_0(
  MR_Word TypeInfo_for_T_15,
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
      MR_Word Edges_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_G_14_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_G_0_2;

      X_7 = ((MR_Word) ((MR_hl_field(0, Var_13, (MR_Integer) 0))));
      Y_8 = ((MR_Word) ((MR_hl_field(0, Var_13, (MR_Integer) 1))));
      mercury__digraph__delete_edge_4_p_0(TypeInfo_for_T_15, X_7, Y_8, STATE_VARIABLE_G_0_2, &STATE_VARIABLE_G_14_14);
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
  MR_Word TypeInfo_for_T_10,
  MR_Word X_5,
  MR_Word Y_6,
  MR_Word STATE_VARIABLE_G_0_8)
{
  MR_Word STATE_VARIABLE_G_9;

  mercury__digraph__delete_edge_4_p_0(TypeInfo_for_T_10, X_5, Y_6, STATE_VARIABLE_G_0_8, &STATE_VARIABLE_G_9);
  return STATE_VARIABLE_G_9;
}

void MR_CALL 
mercury__digraph__delete_edge_4_p_0(
  MR_Word TypeInfo_for_T_31,
  MR_Word X_5,
  MR_Word Y_6,
  MR_Word STATE_VARIABLE_G_0_14,
  MR_Word * STATE_VARIABLE_G_15)
{
  MR_bool succeeded;
  MR_Unsigned XI_8 = (MR_Unsigned) (X_5);
  MR_Unsigned YI_9 = (MR_Unsigned) (Y_6);
  MR_Word FwdMap0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_0_14, (MR_Integer) 2))));
  MR_Word BwdMap0_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_0_14, (MR_Integer) 3))));
  MR_Word FwdMap_12;
  MR_Word BwdMap_13;
  MR_Unsigned Var_23;
  MR_Word Var_24;
  MR_Word TypeInfo_14_36;
  MR_Word TypeInfo_16_38;
  MR_Word SuccXs0_32;
  MR_Box conv0_SuccXs0_32;
  MR_Word TypeInfo_14_69;
  MR_Word TypeInfo_16_71;
  MR_Word SuccXs0_65;
  MR_Box conv3_SuccXs0_65;

  {
    TypeInfo_14_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_14_36, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_14_36, 1) = ((MR_Box) (TypeInfo_for_T_31));
  }
  {
    TypeInfo_16_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_16_38, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_16_38, 1) = ((MR_Box) (TypeInfo_14_36));
  }
  succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_16_38, FwdMap0_10, ((MR_Box) (XI_8)), &conv0_SuccXs0_32);
  if (succeeded)
  {
    SuccXs0_32 = ((MR_Word) (conv0_SuccXs0_32));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word TypeClassInfo_for_uenum_42;
    MR_Word SuccXs_33;
    MR_Word Var_54;
    MR_Unsigned Var_55;
    MR_Unsigned Var_56;
    MR_Unsigned Var_57;
    MR_Unsigned Var_58;
    MR_Unsigned Var_59;
    MR_Unsigned Var_61;
    MR_Word Var_62;
    MR_Word Var_64;
    MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
    MR_Box conv2_Var_55;

    {
      TypeClassInfo_for_uenum_42 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_42, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_42, 1) = ((MR_Box) (TypeInfo_for_T_31));
      MR_hl_field(0, TypeClassInfo_for_uenum_42, 2) = ((MR_Box) (TypeInfo_14_36));
    }
    func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_42, (MR_Integer) 0)), (MR_Integer) 5))));
    conv2_Var_55 = func_1(((MR_Box) (TypeClassInfo_for_uenum_42)), ((MR_Box) (Y_6)));
    Var_55 = ((MR_Unsigned) (conv2_Var_55));
{
#define MR_PROC_LABEL mercury__digraph__delete_edge_4_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_59  = Bits;
}
    Var_58 = (Var_59 - (MR_Unsigned) 1U);
    Var_61 = ~(Var_58);
    Var_56 = (Var_55 & Var_61);
    Var_57 = (Var_55 & Var_58);
    mercury__sparse_bitset__insert_loop_4_p_0(Var_56, Var_57, (MR_Word) ((MR_Word) (((MR_Box) ((MR_Unsigned) 0U)))), &Var_54);
    Var_62 = (MR_Word) (SuccXs0_32);
    mercury__sparse_bitset__difference_loop_3_p_0(Var_62, Var_54, &Var_64);
    SuccXs_33 = (MR_Word) (Var_64);
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_16_38, ((MR_Box) (XI_8)), ((MR_Box) (SuccXs_33)), FwdMap0_10, &FwdMap_12);
  }
  else
    FwdMap_12 = FwdMap0_10;
  {
    TypeInfo_14_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_14_69, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_14_69, 1) = ((MR_Box) (TypeInfo_for_T_31));
  }
  {
    TypeInfo_16_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_16_71, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_16_71, 1) = ((MR_Box) (TypeInfo_14_69));
  }
  succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_16_71, BwdMap0_11, ((MR_Box) (YI_9)), &conv3_SuccXs0_65);
  if (succeeded)
  {
    SuccXs0_65 = ((MR_Word) (conv3_SuccXs0_65));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word TypeClassInfo_for_uenum_75;
    MR_Word SuccXs_66;
    MR_Word Var_87;
    MR_Unsigned Var_88;
    MR_Unsigned Var_89;
    MR_Unsigned Var_90;
    MR_Unsigned Var_91;
    MR_Unsigned Var_92;
    MR_Unsigned Var_94;
    MR_Word Var_95;
    MR_Word Var_97;
    MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);
    MR_Box conv5_Var_88;

    {
      TypeClassInfo_for_uenum_75 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_75, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_75, 1) = ((MR_Box) (TypeInfo_for_T_31));
      MR_hl_field(0, TypeClassInfo_for_uenum_75, 2) = ((MR_Box) (TypeInfo_14_69));
    }
    func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_75, (MR_Integer) 0)), (MR_Integer) 5))));
    conv5_Var_88 = func_4(((MR_Box) (TypeClassInfo_for_uenum_75)), ((MR_Box) (X_5)));
    Var_88 = ((MR_Unsigned) (conv5_Var_88));
{
#define MR_PROC_LABEL mercury__digraph__delete_edge_4_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_92  = Bits;
}
    Var_91 = (Var_92 - (MR_Unsigned) 1U);
    Var_94 = ~(Var_91);
    Var_89 = (Var_88 & Var_94);
    Var_90 = (Var_88 & Var_91);
    mercury__sparse_bitset__insert_loop_4_p_0(Var_89, Var_90, (MR_Word) ((MR_Word) (((MR_Box) ((MR_Unsigned) 0U)))), &Var_87);
    Var_95 = (MR_Word) (SuccXs0_65);
    mercury__sparse_bitset__difference_loop_3_p_0(Var_95, Var_87, &Var_97);
    SuccXs_66 = (MR_Word) (Var_97);
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_16_71, ((MR_Box) (YI_9)), ((MR_Box) (SuccXs_66)), BwdMap0_11, &BwdMap_13);
  }
  else
    BwdMap_13 = BwdMap0_11;
  Var_23 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_G_0_14, (MR_Integer) 0))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_0_14, (MR_Integer) 1))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_G_15 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 2) = ((MR_Box) (FwdMap_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (BwdMap_13));
  }
}

MR_Word MR_CALL 
mercury__digraph__add_assoc_list_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word Edges_4,
  MR_Word STATE_VARIABLE_G_0_6)
{
  MR_Word STATE_VARIABLE_G_7;

  mercury__digraph__add_assoc_list_3_p_0(TypeInfo_for_T_8, Edges_4, STATE_VARIABLE_G_0_6, &STATE_VARIABLE_G_7);
  return STATE_VARIABLE_G_7;
}

void MR_CALL 
mercury__digraph__add_assoc_list_3_p_0(
  MR_Word TypeInfo_for_T_15,
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
      MR_Word Edges_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_G_14_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_G_0_2;

      X_7 = ((MR_Word) ((MR_hl_field(0, Var_13, (MR_Integer) 0))));
      Y_8 = ((MR_Word) ((MR_hl_field(0, Var_13, (MR_Integer) 1))));
      mercury__digraph__add_edge_4_p_0(TypeInfo_for_T_15, X_7, Y_8, STATE_VARIABLE_G_0_2, &STATE_VARIABLE_G_14_14);
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
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_G_0_7,
  MR_Word * STATE_VARIABLE_G_8)
{
  MR_Box VX_4 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0));
  MR_Box VY_5 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1));
  MR_Word X_10;
  MR_Word Y_11;
  MR_Word STATE_VARIABLE_G_12_12;
  MR_Word STATE_VARIABLE_G_13_13;

  mercury__digraph__add_vertex_4_p_0(TypeInfo_for_T_9, VX_4, &X_10, STATE_VARIABLE_G_0_7, &STATE_VARIABLE_G_12_12);
  mercury__digraph__add_vertex_4_p_0(TypeInfo_for_T_9, VY_5, &Y_11, STATE_VARIABLE_G_12_12, &STATE_VARIABLE_G_13_13);
  mercury__digraph__add_edge_4_p_0(TypeInfo_for_T_9, X_10, Y_11, STATE_VARIABLE_G_13_13, STATE_VARIABLE_G_8);
}

MR_Word MR_CALL 
mercury__digraph__add_vertex_pair_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word Edge_4,
  MR_Word STATE_VARIABLE_G_0_6)
{
  MR_Word STATE_VARIABLE_G_7;
  MR_Box VX_9 = (MR_hl_field(0, Edge_4, (MR_Integer) 0));
  MR_Box VY_10 = (MR_hl_field(0, Edge_4, (MR_Integer) 1));
  MR_Word X_11;
  MR_Word Y_12;
  MR_Word STATE_VARIABLE_G_12_13;
  MR_Word STATE_VARIABLE_G_13_14;

  mercury__digraph__add_vertex_4_p_0(TypeInfo_for_T_8, VX_9, &X_11, STATE_VARIABLE_G_0_6, &STATE_VARIABLE_G_12_13);
  mercury__digraph__add_vertex_4_p_0(TypeInfo_for_T_8, VY_10, &Y_12, STATE_VARIABLE_G_12_13, &STATE_VARIABLE_G_13_14);
  mercury__digraph__add_edge_4_p_0(TypeInfo_for_T_8, X_11, Y_12, STATE_VARIABLE_G_13_14, &STATE_VARIABLE_G_7);
  return STATE_VARIABLE_G_7;
}

void MR_CALL 
mercury__digraph__add_vertices_and_edge_4_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Box VX_5,
  MR_Box VY_6,
  MR_Word STATE_VARIABLE_G_0_10,
  MR_Word * STATE_VARIABLE_G_11)
{
  MR_Word X_8;
  MR_Word Y_9;
  MR_Word STATE_VARIABLE_G_12_12;
  MR_Word STATE_VARIABLE_G_13_13;

  mercury__digraph__add_vertex_4_p_0(TypeInfo_for_T_14, VX_5, &X_8, STATE_VARIABLE_G_0_10, &STATE_VARIABLE_G_12_12);
  mercury__digraph__add_vertex_4_p_0(TypeInfo_for_T_14, VY_6, &Y_9, STATE_VARIABLE_G_12_12, &STATE_VARIABLE_G_13_13);
  mercury__digraph__add_edge_4_p_0(TypeInfo_for_T_14, X_8, Y_9, STATE_VARIABLE_G_13_13, STATE_VARIABLE_G_11);
}

MR_Word MR_CALL 
mercury__digraph__add_vertices_and_edge_3_f_0(
  MR_Word TypeInfo_for_T_10,
  MR_Box VX_5,
  MR_Box VY_6,
  MR_Word STATE_VARIABLE_G_0_8)
{
  MR_Word STATE_VARIABLE_G_9;
  MR_Word X_11;
  MR_Word Y_12;
  MR_Word STATE_VARIABLE_G_12_13;
  MR_Word STATE_VARIABLE_G_13_14;

  mercury__digraph__add_vertex_4_p_0(TypeInfo_for_T_10, VX_5, &X_11, STATE_VARIABLE_G_0_8, &STATE_VARIABLE_G_12_13);
  mercury__digraph__add_vertex_4_p_0(TypeInfo_for_T_10, VY_6, &Y_12, STATE_VARIABLE_G_12_13, &STATE_VARIABLE_G_13_14);
  mercury__digraph__add_edge_4_p_0(TypeInfo_for_T_10, X_11, Y_12, STATE_VARIABLE_G_13_14, &STATE_VARIABLE_G_9);
  return STATE_VARIABLE_G_9;
}

MR_Word MR_CALL 
mercury__digraph__add_edge_3_f_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word X_5,
  MR_Word Y_6,
  MR_Word STATE_VARIABLE_G_0_8)
{
  MR_Word STATE_VARIABLE_G_9;

  mercury__digraph__add_edge_4_p_0(TypeInfo_for_T_10, X_5, Y_6, STATE_VARIABLE_G_0_8, &STATE_VARIABLE_G_9);
  return STATE_VARIABLE_G_9;
}

void MR_CALL 
mercury__digraph__add_edge_4_p_0(
  MR_Word TypeInfo_for_T_31,
  MR_Word X_5,
  MR_Word Y_6,
  MR_Word STATE_VARIABLE_G_0_14,
  MR_Word * STATE_VARIABLE_G_15)
{
  MR_Unsigned XI_8 = (MR_Unsigned) (X_5);
  MR_Unsigned YI_9 = (MR_Unsigned) (Y_6);
  MR_Word FwdMap0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_0_14, (MR_Integer) 2))));
  MR_Word BwdMap0_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_0_14, (MR_Integer) 3))));
  MR_Word FwdMap_12;
  MR_Word BwdMap_13;
  MR_Unsigned Var_23;
  MR_Word Var_24;

  mercury__digraph__key_set_map_add_4_p_0(TypeInfo_for_T_31, XI_8, Y_6, FwdMap0_10, &FwdMap_12);
  mercury__digraph__key_set_map_add_4_p_0(TypeInfo_for_T_31, YI_9, X_5, BwdMap0_11, &BwdMap_13);
  Var_23 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_G_0_14, (MR_Integer) 0))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_0_14, (MR_Integer) 1))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_G_15 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 2) = ((MR_Box) (FwdMap_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (BwdMap_13));
  }
}

static void MR_CALL 
mercury__digraph__key_set_map_add_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Unsigned XI_5,
  MR_Word Y_6,
  MR_Word Map0_7,
  MR_Word * Map_8)
{
  MR_bool succeeded;
  MR_Word TypeInfo_15_15;
  MR_Word TypeInfo_17_17;
  MR_Word SuccXs0_9;
  MR_Box conv0_SuccXs0_9;

  {
    TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_15_15, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_12));
  }
  {
    TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_17_17, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
    MR_hl_field(0, TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_15_15));
  }
  succeeded = mercury__tree234__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_17_17, Map0_7, ((MR_Box) (XI_5)), &conv0_SuccXs0_9);
  if (succeeded)
  {
    SuccXs0_9 = ((MR_Word) (conv0_SuccXs0_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word SuccXs_10;
    MR_Word TypeClassInfo_for_uenum_21;
    MR_Word Var_34 = (MR_Word) (SuccXs0_9);
    MR_Word Var_35;
    MR_Unsigned Var_36;
    MR_Unsigned Var_37;
    MR_Unsigned Var_38;
    MR_Unsigned Var_39;
    MR_Unsigned Var_40;
    MR_Unsigned Var_42;
    MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
    MR_Box conv2_Var_36;

    {
      TypeClassInfo_for_uenum_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_21, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_21, 1) = ((MR_Box) (TypeInfo_for_T_12));
      MR_hl_field(0, TypeClassInfo_for_uenum_21, 2) = ((MR_Box) (TypeInfo_15_15));
    }
    func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_21, (MR_Integer) 0)), (MR_Integer) 5))));
    conv2_Var_36 = func_1(((MR_Box) (TypeClassInfo_for_uenum_21)), ((MR_Box) (Y_6)));
    Var_36 = ((MR_Unsigned) (conv2_Var_36));
{
#define MR_PROC_LABEL mercury__digraph__key_set_map_add_4_p_0

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
      SuccXs_10 = (MR_Word) (Var_35);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_17_17, ((MR_Box) (XI_5)), ((MR_Box) (SuccXs_10)), Map0_7, Map_8);
    else
      *Map_8 = Map0_7;
  }
  else
  {
    MR_Word TypeInfo_28_28;
    MR_Word TypeClassInfo_for_uenum_30;
    MR_Word TypeInfo_33_33;
    MR_Word SuccXs_11;
    MR_Word Var_48;
    MR_Unsigned Var_49;
    MR_Unsigned Var_50;
    MR_Unsigned Var_51;
    MR_Unsigned Var_52;
    MR_Unsigned Var_53;
    MR_Unsigned Var_55;
    MR_Box MR_CALL (* func_3)(MR_Box, MR_Box);
    MR_Box conv4_Var_49;

    {
      TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_28_28, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(0, TypeInfo_28_28, 1) = ((MR_Box) (TypeInfo_for_T_12));
    }
    {
      TypeClassInfo_for_uenum_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeClassInfo_for_uenum_30, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__));
      MR_hl_field(0, TypeClassInfo_for_uenum_30, 1) = ((MR_Box) (TypeInfo_for_T_12));
      MR_hl_field(0, TypeClassInfo_for_uenum_30, 2) = ((MR_Box) (TypeInfo_28_28));
    }
    func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_uenum_30, (MR_Integer) 0)), (MR_Integer) 5))));
    conv4_Var_49 = func_3(((MR_Box) (TypeClassInfo_for_uenum_30)), ((MR_Box) (Y_6)));
    Var_49 = ((MR_Unsigned) (conv4_Var_49));
{
#define MR_PROC_LABEL mercury__digraph__key_set_map_add_4_p_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_53  = Bits;
}
    Var_52 = (Var_53 - (MR_Unsigned) 1U);
    Var_55 = ~(Var_52);
    Var_50 = (Var_49 & Var_55);
    Var_51 = (Var_49 & Var_52);
    mercury__sparse_bitset__insert_loop_4_p_0(Var_50, Var_51, (MR_Word) ((MR_Word) (((MR_Box) ((MR_Unsigned) 0U)))), &Var_48);
    SuccXs_11 = (MR_Word) (Var_48);
    {
      TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_33_33, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
      MR_hl_field(0, TypeInfo_33_33, 1) = ((MR_Box) (TypeInfo_28_28));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_33_33, ((MR_Box) (XI_5)), ((MR_Box) (SuccXs_11)), Map0_7, Map_8);
  }
}

MR_Box MR_CALL 
mercury__digraph__lookup_vertex_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word G_4,
  MR_Word Key_5)
{
  MR_Box Vertex_6;

  mercury__digraph__lookup_vertex_3_p_0(TypeInfo_for_T_7, G_4, Key_5, &Vertex_6);
  return Vertex_6;
}

void MR_CALL 
mercury__digraph__lookup_vertex_3_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word G_4,
  MR_Word Key_5,
  MR_Box * Vertex_6)
{
  MR_bool succeeded;
  MR_Box Vertex0_7;
  MR_Word TypeInfo_17_17;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, G_4, (MR_Integer) 1))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 0))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 1))));
  MR_Word Var_21;
  MR_Box conv0_Var_21;

  {
    TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_17_17, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_T_15));
  }
  succeeded = mercury__tree234__search_3_p_0(TypeInfo_17_17, TypeInfo_for_T_15, (MR_Word) (Var_19), ((MR_Box) (Key_5)), &Vertex0_7);
  if (succeeded)
  {
    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_15, TypeInfo_17_17, Var_18, Vertex0_7, &conv0_Var_21);
    if (succeeded)
    {
      Var_21 = ((MR_Word) (conv0_Var_21));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (Key_5)), ((MR_Box) (Var_21)));
  }
  if (succeeded)
    *Vertex_6 = Vertex0_7;
  else
    {
      mercury__require__unexpected_3_p_0((MR_String) "digraph", (MR_String) "predicate \140digraph.lookup_vertex\'/3", (MR_String) "search for vertex failed");
      return;
    }
}

MR_Word MR_CALL 
mercury__digraph__lookup_key_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word G_4,
  MR_Box Vertex_5)
{
  MR_Word Key_6;

  mercury__digraph__lookup_key_3_p_0(TypeInfo_for_T_7, G_4, Vertex_5, &Key_6);
  return Key_6;
}

void MR_CALL 
mercury__digraph__lookup_key_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word G_4,
  MR_Box Vertex_5,
  MR_Word * Key_6)
{
  MR_bool succeeded;
  MR_Word Key0_7;
  MR_Word TypeInfo_13_17;
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, G_4, (MR_Integer) 1))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 0))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 1))));
  MR_Box Var_20;
  MR_Box conv0_Key0_7;

  {
    TypeInfo_13_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_13_17, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_13_17, 1) = ((MR_Box) (TypeInfo_for_T_11));
  }
  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_11, TypeInfo_13_17, Var_18, Vertex_5, &conv0_Key0_7);
  if (succeeded)
  {
    Key0_7 = ((MR_Word) (conv0_Key0_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = mercury__tree234__search_3_p_0(TypeInfo_13_17, TypeInfo_for_T_11, (MR_Word) (Var_19), ((MR_Box) (Key0_7)), &Var_20);
    if (succeeded)
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, Vertex_5, Var_20);
  }
  if (succeeded)
    *Key_6 = Key0_7;
  else
    {
      mercury__require__unexpected_3_p_0((MR_String) "digraph", (MR_String) "predicate \140digraph.lookup_key\'/3", (MR_String) "search for key failed");
      return;
    }
}

MR_bool MR_CALL 
mercury__digraph__search_key_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word G_4,
  MR_Box Vertex_5,
  MR_Word * Key_6)
{
  MR_bool succeeded;
  MR_Word TypeInfo_13_13;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, G_4, (MR_Integer) 1))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 0))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 1))));
  MR_Box Var_16;
  MR_Box conv0_Key_6;

  {
    TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_13_13, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_T_11));
  }
  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_11, TypeInfo_13_13, Var_14, Vertex_5, &conv0_Key_6);
  if (succeeded)
  {
    *Key_6 = ((MR_Word) (conv0_Key_6));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = mercury__tree234__search_3_p_0(TypeInfo_13_13, TypeInfo_for_T_11, (MR_Word) (Var_15), ((MR_Box) (*Key_6)), &Var_16);
    if (succeeded)
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, Vertex_5, Var_16);
  }
  return succeeded;
}

void MR_CALL 
mercury__digraph__add_vertex_4_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Box Vertex_5,
  MR_Word * Key_6,
  MR_Word STATE_VARIABLE_G_0_11,
  MR_Word * STATE_VARIABLE_G_12)
{
  MR_bool succeeded;
  MR_Word VertexMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_0_11, (MR_Integer) 1))));
  MR_Word Key0_9;
  MR_Word TypeInfo_23_23;
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, VertexMap0_8, (MR_Integer) 0))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, VertexMap0_8, (MR_Integer) 1))));
  MR_Box Var_28;
  MR_Box conv0_Key0_9;

  {
    TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_23_23, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
    MR_hl_field(0, TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_T_21));
  }
  succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_T_21, TypeInfo_23_23, Var_26, Vertex_5, &conv0_Key0_9);
  if (succeeded)
  {
    Key0_9 = ((MR_Word) (conv0_Key0_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = mercury__tree234__search_3_p_0(TypeInfo_23_23, TypeInfo_for_T_21, (MR_Word) (Var_27), ((MR_Box) (Key0_9)), &Var_28);
    if (succeeded)
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_21, Vertex_5, Var_28);
  }
  if (succeeded)
  {
    *Key_6 = Key0_9;
    *STATE_VARIABLE_G_12 = STATE_VARIABLE_G_0_11;
  }
  else
  {
    MR_Word TypeInfo_25_25;
    MR_Word VertexMap_10;
    MR_Word STATE_VARIABLE_G_13_13;
    MR_Unsigned I_29 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_G_0_11, (MR_Integer) 0))));
    MR_Unsigned Var_30;
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_0_11, (MR_Integer) 1))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_0_11, (MR_Integer) 2))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_0_11, (MR_Integer) 3))));
    MR_Unsigned Var_17;
    MR_Word Var_19;
    MR_Word Var_20;

    *Key_6 = (MR_Word) (I_29);
    Var_30 = (I_29 + (MR_Unsigned) 1U);
    {
      STATE_VARIABLE_G_13_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_G_13_13, 0) = ((MR_Box) (Var_30));
      MR_hl_field(0, STATE_VARIABLE_G_13_13, 1) = ((MR_Box) (Var_32));
      MR_hl_field(0, STATE_VARIABLE_G_13_13, 2) = ((MR_Box) (Var_33));
      MR_hl_field(0, STATE_VARIABLE_G_13_13, 3) = ((MR_Box) (Var_34));
    }
    {
      TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_25_25, 0) = ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1));
      MR_hl_field(0, TypeInfo_25_25, 1) = ((MR_Box) (TypeInfo_for_T_21));
    }
    mercury__bimap__set_4_p_0(TypeInfo_for_T_21, TypeInfo_25_25, Vertex_5, ((MR_Box) (*Key_6)), VertexMap0_8, &VertexMap_10);
    Var_17 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_G_13_13, (MR_Integer) 0))));
    Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_13_13, (MR_Integer) 2))));
    Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_G_13_13, (MR_Integer) 3))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_G_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_17));
      MR_hl_field(0, base, 1) = ((MR_Box) (VertexMap_10));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_19));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_20));
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
  MR_bool succeeded;

  succeeded = mercury__digraph____Unify____clique_map_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__digraph____Compare____clique_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__digraph____Compare____clique_map_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__digraph____Unify____component_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__digraph____Unify____component_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__digraph____Compare____component_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__digraph____Compare____component_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__digraph____Unify____digraph_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__digraph____Compare____digraph_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__digraph____Compare____digraph_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_key_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__digraph____Unify____digraph_key_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__digraph____Compare____digraph_key_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__digraph____Compare____digraph_key_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_key_set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__digraph____Unify____digraph_key_set_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__digraph____Compare____digraph_key_set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__digraph____Compare____digraph_key_set_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__digraph____Unify____key_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__digraph____Unify____key_map_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__digraph____Compare____key_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__digraph____Compare____key_map_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__digraph____Unify____key_set_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__digraph____Unify____key_set_map_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__digraph____Compare____key_set_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__digraph____Compare____key_set_map_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__digraph____Unify____modified_tarjan_state_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__digraph____Unify____modified_tarjan_state_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__digraph____Compare____modified_tarjan_state_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__digraph____Compare____modified_tarjan_state_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__digraph____Unify____modified_tarjan_visit_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__digraph____Unify____modified_tarjan_visit_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__digraph____Compare____modified_tarjan_visit_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__digraph____Compare____modified_tarjan_visit_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_Box MR_CALL 
mercury__digraph__ClassMethod_for_enum__uenum____digraph__digraph_key__arity1______enum__to_uint_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Unsigned conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__digraph__ClassMethod_for_enum__uenum____digraph__digraph_key__arity1______enum__to_uint_1_1_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 1)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
mercury__digraph__ClassMethod_for_enum__uenum____digraph__digraph_key__arity1______enum__from_uint_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  succeeded = mercury__digraph__ClassMethod_for_enum__uenum____digraph__digraph_key__arity1______enum__from_uint_2_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 1)))), ((MR_Unsigned) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
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
	MR_register_type_ctor_info(&mercury__digraph__digraph__type_ctor_info_component_1);
	MR_register_type_ctor_info(&mercury__digraph__digraph__type_ctor_info_digraph_1);
	MR_register_type_ctor_info(&mercury__digraph__digraph__type_ctor_info_digraph_key_1);
	MR_register_type_ctor_info(&mercury__digraph__digraph__type_ctor_info_digraph_key_set_1);
	MR_register_type_ctor_info(&mercury__digraph__digraph__type_ctor_info_key_map_1);
	MR_register_type_ctor_info(&mercury__digraph__digraph__type_ctor_info_key_set_map_1);
	MR_register_type_ctor_info(&mercury__digraph__digraph__type_ctor_info_modified_tarjan_state_1);
	MR_register_type_ctor_info(&mercury__digraph__digraph__type_ctor_info_modified_tarjan_visit_1);
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
