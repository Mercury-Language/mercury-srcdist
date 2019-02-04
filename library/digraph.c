/*
** Automatically generated from `digraph.m'
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


/* :- module digraph. */
/* :- implementation. */

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

static MR_bool MR_CALL 
mercury__digraph____Unify____clique_map_1_0_10001(
  MR_Box mercury__digraph__wrapper_arg_1,
  MR_Box mercury__digraph__wrapper_arg_2,
  MR_Box mercury__digraph__wrapper_arg_3);

static void MR_CALL 
mercury__digraph____Compare____clique_map_1_0_10001(
  MR_Box mercury__digraph__wrapper_arg_1,
  MR_Box * mercury__digraph__wrapper_arg_2,
  MR_Box mercury__digraph__wrapper_arg_3,
  MR_Box mercury__digraph__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_1_0_10001(
  MR_Box mercury__digraph__wrapper_arg_1,
  MR_Box mercury__digraph__wrapper_arg_2,
  MR_Box mercury__digraph__wrapper_arg_3);

static void MR_CALL 
mercury__digraph____Compare____digraph_1_0_10001(
  MR_Box mercury__digraph__wrapper_arg_1,
  MR_Box * mercury__digraph__wrapper_arg_2,
  MR_Box mercury__digraph__wrapper_arg_3,
  MR_Box mercury__digraph__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_key_1_0_10001(
  MR_Box mercury__digraph__wrapper_arg_1,
  MR_Box mercury__digraph__wrapper_arg_2,
  MR_Box mercury__digraph__wrapper_arg_3);

static void MR_CALL 
mercury__digraph____Compare____digraph_key_1_0_10001(
  MR_Box mercury__digraph__wrapper_arg_1,
  MR_Box * mercury__digraph__wrapper_arg_2,
  MR_Box mercury__digraph__wrapper_arg_3,
  MR_Box mercury__digraph__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_key_set_1_0_10001(
  MR_Box mercury__digraph__wrapper_arg_1,
  MR_Box mercury__digraph__wrapper_arg_2,
  MR_Box mercury__digraph__wrapper_arg_3);

static void MR_CALL 
mercury__digraph____Compare____digraph_key_set_1_0_10001(
  MR_Box mercury__digraph__wrapper_arg_1,
  MR_Box * mercury__digraph__wrapper_arg_2,
  MR_Box mercury__digraph__wrapper_arg_3,
  MR_Box mercury__digraph__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__digraph____Unify____key_map_1_0_10001(
  MR_Box mercury__digraph__wrapper_arg_1,
  MR_Box mercury__digraph__wrapper_arg_2,
  MR_Box mercury__digraph__wrapper_arg_3);

static void MR_CALL 
mercury__digraph____Compare____key_map_1_0_10001(
  MR_Box mercury__digraph__wrapper_arg_1,
  MR_Box * mercury__digraph__wrapper_arg_2,
  MR_Box mercury__digraph__wrapper_arg_3,
  MR_Box mercury__digraph__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__digraph____Unify____key_set_map_1_0_10001(
  MR_Box mercury__digraph__wrapper_arg_1,
  MR_Box mercury__digraph__wrapper_arg_2,
  MR_Box mercury__digraph__wrapper_arg_3);

static void MR_CALL 
mercury__digraph____Compare____key_set_map_1_0_10001(
  MR_Box mercury__digraph__wrapper_arg_1,
  MR_Box * mercury__digraph__wrapper_arg_2,
  MR_Box mercury__digraph__wrapper_arg_3,
  MR_Box mercury__digraph__wrapper_arg_4);

static MR_Box MR_CALL 
mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__to_int_1_1_f_0_10001(
  MR_Box mercury__digraph__closure_arg,
  MR_Box mercury__digraph__wrapper_arg_1);

static MR_bool MR_CALL 
mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__from_int_1_1_f_0_10001(
  MR_Box mercury__digraph__closure_arg,
  MR_Box mercury__digraph__wrapper_arg_1,
  MR_Box * mercury__digraph__wrapper_arg_2);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
  MR_Word mercury__digraph__Var_27,
  MR_Word mercury__digraph__Var_28,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_49_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_51_93_95_48_9_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_50,
  MR_Word mercury__digraph__Var_51,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_35,
  MR_Word mercury__digraph__V_10_10,
  MR_Integer mercury__digraph__V_12_12,
  MR_Integer mercury__digraph__V_13_13,
  MR_Integer mercury__digraph__V_14_14,
  MR_Word mercury__digraph__V_22_15,
  MR_Word * mercury__digraph__V_23_16,
  MR_Word mercury__digraph__V_24_17,
  MR_Word * mercury__digraph__V_25_18);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_51_93_95_48_7_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_41,
  MR_Word mercury__digraph__Var_42,
  MR_Box mercury__digraph__Var_43,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
  MR_Word mercury__digraph__V_8_8,
  MR_Integer mercury__digraph__V_10_10,
  MR_Integer mercury__digraph__V_11_11,
  MR_Integer mercury__digraph__V_12_12,
  MR_Word mercury__digraph__V_19_13,
  MR_Word * mercury__digraph__V_20_14);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_52_93_95_48_7_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_46,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
  MR_Word mercury__digraph__V_8_8,
  MR_Integer mercury__digraph__V_10_10,
  MR_Integer mercury__digraph__V_11_11,
  MR_Integer mercury__digraph__V_12_12,
  MR_Word mercury__digraph__V_19_13,
  MR_Word * mercury__digraph__V_20_14);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_49_48_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_52_93_95_48_9_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_51,
  MR_Word mercury__digraph__Var_52,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_35,
  MR_Word mercury__digraph__V_10_10,
  MR_Integer mercury__digraph__V_12_12,
  MR_Integer mercury__digraph__V_13_13,
  MR_Integer mercury__digraph__V_14_14,
  MR_Word mercury__digraph__V_22_15,
  MR_Word * mercury__digraph__V_23_16,
  MR_Word mercury__digraph__V_24_17,
  MR_Word * mercury__digraph__V_25_18);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_40,
  MR_Word mercury__digraph__Var_41,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
  MR_Word mercury__digraph__V_8_8,
  MR_Integer mercury__digraph__V_10_10,
  MR_Integer mercury__digraph__V_11_11,
  MR_Integer mercury__digraph__V_12_12,
  MR_Word mercury__digraph__V_19_13,
  MR_Word * mercury__digraph__V_20_14);

static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_50_93_95_48_7_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_40,
  MR_Word mercury__digraph__Var_41,
  MR_Word mercury__digraph__Var_42,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
  MR_Word mercury__digraph__V_8_8,
  MR_Integer mercury__digraph__V_10_10,
  MR_Integer mercury__digraph__V_11_11,
  MR_Integer mercury__digraph__V_12_12,
  MR_Word mercury__digraph__V_19_13,
  MR_Word * mercury__digraph__V_20_14);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_40,
  MR_Word mercury__digraph__Var_41,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
  MR_Word mercury__digraph__V_8_8,
  MR_Integer mercury__digraph__V_10_10,
  MR_Integer mercury__digraph__V_11_11,
  MR_Integer mercury__digraph__V_12_12,
  MR_Word mercury__digraph__V_19_13,
  MR_Word * mercury__digraph__V_20_14);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_38,
  MR_Word mercury__digraph__Var_39,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
  MR_Word mercury__digraph__V_8_8,
  MR_Integer mercury__digraph__V_10_10,
  MR_Integer mercury__digraph__V_11_11,
  MR_Integer mercury__digraph__V_12_12,
  MR_Word mercury__digraph__V_19_13,
  MR_Word * mercury__digraph__V_20_14);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
  MR_Word mercury__digraph__V_8_8,
  MR_Integer mercury__digraph__V_10_10,
  MR_Integer mercury__digraph__V_11_11,
  MR_Integer mercury__digraph__V_12_12,
  MR_Word mercury__digraph__V_19_13,
  MR_Word * mercury__digraph__V_20_14);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_38,
  MR_Word mercury__digraph__Var_39,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
  MR_Word mercury__digraph__V_8_8,
  MR_Integer mercury__digraph__V_10_10,
  MR_Integer mercury__digraph__V_11_11,
  MR_Integer mercury__digraph__V_12_12,
  MR_Word mercury__digraph__V_19_13,
  MR_Word * mercury__digraph__V_20_14);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_57_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_29,
  MR_Word mercury__digraph__Var_30,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_57_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_29,
  MR_Word mercury__digraph__Var_30,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_31,
  MR_Word mercury__digraph__Var_32,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4);

static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_31,
  MR_Word mercury__digraph__Var_32,
  MR_Word mercury__digraph__Var_33,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_31,
  MR_Word mercury__digraph__Var_32,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_56_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_43,
  MR_Word mercury__digraph__Var_44,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_27,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4,
  MR_Word mercury__digraph__HeadVar__5_5,
  MR_Word * mercury__digraph__HeadVar__6_6);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_37,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_32,
  MR_Word mercury__digraph__Var_33,
  MR_Box mercury__digraph__Var_34,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_56_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_42,
  MR_Word mercury__digraph__Var_43,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_27,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4,
  MR_Word mercury__digraph__HeadVar__5_5,
  MR_Word * mercury__digraph__HeadVar__6_6);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_48_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_93_95_48_4_p_in__list_0(
  MR_Word mercury__digraph__Var_21,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_55_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_6_p_in__list_0(
  MR_Word mercury__digraph__Var_34,
  MR_Word mercury__digraph__Var_35,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4,
  MR_Word mercury__digraph__HeadVar__5_5,
  MR_Word * mercury__digraph__HeadVar__6_6);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_4_p_in__list_0(
  MR_Word mercury__digraph__Var_29,
  MR_Word mercury__digraph__Var_30,
  MR_Word mercury__digraph__Var_31,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_55_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_53_93_95_48_6_p_in__list_0(
  MR_Word mercury__digraph__Var_43,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4,
  MR_Word mercury__digraph__HeadVar__5_5,
  MR_Word * mercury__digraph__HeadVar__6_6);

static MR_Word MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_2_f_in__list_0(
  MR_Word mercury__digraph__Var_23,
  MR_Word mercury__digraph__Var_24,
  MR_Word mercury__digraph__Var_25,
  MR_Word mercury__digraph__HeadVar__2_2);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_55_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_28,
  MR_Word mercury__digraph__Var_29,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_13,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__V_11_9,
  MR_Word * mercury__digraph__V_12_10,
  MR_Word mercury__digraph__V_13_11,
  MR_Word * mercury__digraph__V_14_12);

static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_52_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__list_0(
  MR_Word mercury__digraph__Var_22,
  MR_Word mercury__digraph__Var_23,
  MR_Word mercury__digraph__Var_24,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4);

static MR_Word MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_51_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_2_f_in__list_0(
  MR_Word mercury__digraph__Var_14,
  MR_Word mercury__digraph__Var_15,
  MR_Word mercury__digraph__HeadVar__2_2);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_95_104_111_54_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__set_0(
  MR_Word mercury__digraph__Var_22,
  MR_Word mercury__digraph__Var_23,
  MR_Word mercury__digraph__V_6_6,
  MR_Word mercury__digraph__V_8_7,
  MR_Word * mercury__digraph__V_9_8);

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_54_53_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
  MR_Word mercury__digraph__Var_14,
  MR_Word mercury__digraph__Var_15,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word * mercury__digraph__HeadVar__3_3);

static MR_Integer MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__digraph__IntroducedFrom__pred__add_cartesian_product__1128__1_5_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_23,
  MR_Word mercury__digraph__KeySet2_6,
  MR_Word mercury__digraph__LambdaHeadVar__1_13,
  MR_Word mercury__digraph__LambdaHeadVar__2_14,
  MR_Word * mercury__digraph__LambdaHeadVar__3_15);

static void MR_CALL 
mercury__digraph__add_cartesian_product_4_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_23,
  MR_Word mercury__digraph__KeySet1_5,
  MR_Word mercury__digraph__KeySet2_6,
  MR_Word mercury__digraph__STATE_VARIABLE_Rtc_0_9,
  MR_Word * mercury__digraph__STATE_VARIABLE_Rtc_10);

static void MR_CALL 
mercury__digraph__rtc_2_5_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_30,
  MR_Word mercury__digraph__HeadVar__1_1,
  MR_Word mercury__digraph__G_2,
  MR_Word mercury__digraph__STATE_VARIABLE_Vis_0_3,
  MR_Word mercury__digraph__STATE_VARIABLE_Rtc_0_4,
  MR_Word * mercury__digraph__STATE_VARIABLE_Rtc_5);

static void MR_CALL 
mercury__digraph__reachable_from_4_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_19,
  MR_Word mercury__digraph__G_5,
  MR_Word mercury__digraph__Keys0_6,
  MR_Word mercury__digraph__STATE_VARIABLE_Comp_0_15,
  MR_Word * mercury__digraph__STATE_VARIABLE_Comp_16);

static void MR_CALL 
mercury__digraph__components_2_4_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_19,
  MR_Word mercury__digraph__G_5,
  MR_Word mercury__digraph__Xs0_6,
  MR_Word mercury__digraph__STATE_VARIABLE_Components_0_14,
  MR_Word * mercury__digraph__STATE_VARIABLE_Components_15);

static void MR_CALL 
mercury__digraph__accumulate_digraph_key_set_4_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_13,
  MR_Word mercury__digraph__KMap_5,
  MR_Word mercury__digraph__X_6,
  MR_Word mercury__digraph__STATE_VARIABLE_Set_0_10,
  MR_Word * mercury__digraph__STATE_VARIABLE_Set_11);

static void MR_CALL 
mercury__digraph__add_composition_edges_5_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_16,
  MR_Word mercury__digraph__KMap1_6,
  MR_Word mercury__digraph__KMap2_7,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word mercury__digraph__STATE_VARIABLE_Comp_0_11,
  MR_Word * mercury__digraph__STATE_VARIABLE_Comp_12);

static void MR_CALL 
mercury__digraph__find_necessary_keys_5_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_16,
  MR_Word mercury__digraph__HeadVar__1_1,
  MR_Word mercury__digraph__STATE_VARIABLE_Needed1_0_10,
  MR_Word * mercury__digraph__STATE_VARIABLE_Needed1_11,
  MR_Word mercury__digraph__STATE_VARIABLE_Needed2_0_12,
  MR_Word * mercury__digraph__STATE_VARIABLE_Needed2_13);

static MR_Word MR_CALL 
mercury__digraph__key_set_map_delete_3_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_11,
  MR_Word mercury__digraph__Map0_5,
  MR_Integer mercury__digraph__XI_6,
  MR_Word mercury__digraph__Y_7);

static MR_Word MR_CALL 
mercury__digraph__key_set_map_add_3_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_13,
  MR_Word mercury__digraph__Map0_5,
  MR_Integer mercury__digraph__XI_6,
  MR_Word mercury__digraph__Y_7);

static void MR_CALL 
mercury__digraph__is_edge_rev_3_p_0_1(
  void * mercury__digraph__env_ptr_arg);

static void MR_CALL 
mercury__digraph__is_edge_3_p_0_1(
  void * mercury__digraph__env_ptr_arg);


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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (&mercury__digraph_scalar_common_4[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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



static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__digraph__pti_digraph_key_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) &mercury__digraph__set_ordlist__pti_set_ordlist_1__pseudo_1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__digraph__digraph__pti_digraph_key_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__digraph__digraph__pti_digraph_key_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
  }
};

const MR_TypeCtorInfo_Struct mercury__digraph__digraph__type_ctor_info_clique_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__digraph____Unify____clique_map_1_0_10001)),
  ((MR_Box) (mercury__digraph____Compare____clique_map_1_0_10001)),
  (MR_String) "digraph",
  (MR_String) "clique_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__digraph__tree234__pti_tree234_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__bimap__pti_bimap_2__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__digraph__digraph__pti_digraph_key_1__pseudo_1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &mercury__digraph__digraph__pti_digraph_key_1__pseudo_1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__digraph__sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1
  }
};

static const MR_PseudoTypeInfo mercury__digraph__digraph__field_types_digraph_1_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__digraph__bimap__pti_bimap_2__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1
};

static const MR_ConstString mercury__digraph__digraph__field_names_digraph_1_0[4] = {
  (MR_String) "next_key",
  (MR_String) "vertex_map",
  (MR_String) "fwd_map",
  (MR_String) "bwd_map"
};

static const MR_DuFunctorDesc mercury__digraph__digraph__du_functor_desc_digraph_1_0 = {
  (MR_String) "digraph",
  (MR_Integer) 4,
  (MR_Integer) 14,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__digraph__digraph__field_types_digraph_1_0,
  mercury__digraph__digraph__field_names_digraph_1_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_stag_ordered_digraph_1_0[1] = {
  &mercury__digraph__digraph__du_functor_desc_digraph_1_0
};

static const MR_DuPtagLayout mercury__digraph__digraph__du_ptag_ordered_digraph_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__digraph__digraph__du_stag_ordered_digraph_1_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__digraph____Unify____digraph_1_0_10001)),
  ((MR_Box) (mercury__digraph____Compare____digraph_1_0_10001)),
  (MR_String) "digraph",
  (MR_String) "digraph",
  {     mercury__digraph__digraph__du_name_ordered_digraph_1 },
  {     mercury__digraph__digraph__du_ptag_ordered_digraph_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__digraph__digraph__functor_number_map_digraph_1
};

static const MR_Integer mercury__digraph__digraph__functor_number_map_digraph_key_1[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__digraph__digraph__notag_functor_desc_digraph_key_1 = {
  (MR_String) "digraph_key",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__digraph__digraph__type_ctor_info_digraph_key_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__digraph____Unify____digraph_key_1_0_10001)),
  ((MR_Box) (mercury__digraph____Compare____digraph_key_1_0_10001)),
  (MR_String) "digraph",
  (MR_String) "digraph_key",
  {     &mercury__digraph__digraph__notag_functor_desc_digraph_key_1 },
  {     &mercury__digraph__digraph__notag_functor_desc_digraph_key_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__digraph__digraph__functor_number_map_digraph_key_1
};

const MR_TypeCtorInfo_Struct mercury__digraph__digraph__type_ctor_info_digraph_key_set_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__digraph____Unify____digraph_key_set_1_0_10001)),
  ((MR_Box) (mercury__digraph____Compare____digraph_key_set_1_0_10001)),
  (MR_String) "digraph",
  (MR_String) "digraph_key_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__digraph__sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__digraph__digraph__pti_digraph_key_1__pseudo_1
  }
};

const MR_TypeCtorInfo_Struct mercury__digraph__digraph__type_ctor_info_key_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__digraph____Unify____key_map_1_0_10001)),
  ((MR_Box) (mercury__digraph____Compare____key_map_1_0_10001)),
  (MR_String) "digraph",
  (MR_String) "key_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_digraph__pti_digraph_key_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mercury__digraph__digraph__type_ctor_info_key_set_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__digraph____Unify____key_set_map_1_0_10001)),
  ((MR_Box) (mercury__digraph____Compare____key_set_map_1_0_10001)),
  (MR_String) "digraph",
  (MR_String) "key_set_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_BaseTypeclassInfo base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__to_int_1_1_f_0_10001)),
  ((MR_Box) (mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__from_int_1_1_f_0_10001))
};

static MR_bool MR_CALL 
mercury__digraph____Unify____clique_map_1_0_10001(
  MR_Box mercury__digraph__wrapper_arg_1,
  MR_Box mercury__digraph__wrapper_arg_2,
  MR_Box mercury__digraph__wrapper_arg_3)
{
  {
    MR_bool mercury__digraph__succeeded;

    {
      mercury__digraph__succeeded = mercury__digraph____Unify____clique_map_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), ((MR_Word) mercury__digraph__wrapper_arg_2), ((MR_Word) mercury__digraph__wrapper_arg_3));
    }
    return mercury__digraph__succeeded;
  }
}

static void MR_CALL 
mercury__digraph____Compare____clique_map_1_0_10001(
  MR_Box mercury__digraph__wrapper_arg_1,
  MR_Box * mercury__digraph__wrapper_arg_2,
  MR_Box mercury__digraph__wrapper_arg_3,
  MR_Box mercury__digraph__wrapper_arg_4)
{
  {
    MR_Word mercury__digraph__conv0_HeadVar__1_1;

    {
      mercury__digraph____Compare____clique_map_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), &mercury__digraph__conv0_HeadVar__1_1, ((MR_Word) mercury__digraph__wrapper_arg_3), ((MR_Word) mercury__digraph__wrapper_arg_4));
    }
    *mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_1_0_10001(
  MR_Box mercury__digraph__wrapper_arg_1,
  MR_Box mercury__digraph__wrapper_arg_2,
  MR_Box mercury__digraph__wrapper_arg_3)
{
  {
    MR_bool mercury__digraph__succeeded;

    {
      mercury__digraph__succeeded = mercury__digraph____Unify____digraph_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), ((MR_Word) mercury__digraph__wrapper_arg_2), ((MR_Word) mercury__digraph__wrapper_arg_3));
    }
    return mercury__digraph__succeeded;
  }
}

static void MR_CALL 
mercury__digraph____Compare____digraph_1_0_10001(
  MR_Box mercury__digraph__wrapper_arg_1,
  MR_Box * mercury__digraph__wrapper_arg_2,
  MR_Box mercury__digraph__wrapper_arg_3,
  MR_Box mercury__digraph__wrapper_arg_4)
{
  {
    MR_Word mercury__digraph__conv0_HeadVar__1_1;

    {
      mercury__digraph____Compare____digraph_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), &mercury__digraph__conv0_HeadVar__1_1, ((MR_Word) mercury__digraph__wrapper_arg_3), ((MR_Word) mercury__digraph__wrapper_arg_4));
    }
    *mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_key_1_0_10001(
  MR_Box mercury__digraph__wrapper_arg_1,
  MR_Box mercury__digraph__wrapper_arg_2,
  MR_Box mercury__digraph__wrapper_arg_3)
{
  {
    MR_bool mercury__digraph__succeeded;

    {
      mercury__digraph__succeeded = mercury__digraph____Unify____digraph_key_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), ((MR_Word) mercury__digraph__wrapper_arg_2), ((MR_Word) mercury__digraph__wrapper_arg_3));
    }
    return mercury__digraph__succeeded;
  }
}

static void MR_CALL 
mercury__digraph____Compare____digraph_key_1_0_10001(
  MR_Box mercury__digraph__wrapper_arg_1,
  MR_Box * mercury__digraph__wrapper_arg_2,
  MR_Box mercury__digraph__wrapper_arg_3,
  MR_Box mercury__digraph__wrapper_arg_4)
{
  {
    MR_Word mercury__digraph__conv0_HeadVar__1_1;

    {
      mercury__digraph____Compare____digraph_key_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), &mercury__digraph__conv0_HeadVar__1_1, ((MR_Word) mercury__digraph__wrapper_arg_3), ((MR_Word) mercury__digraph__wrapper_arg_4));
    }
    *mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_key_set_1_0_10001(
  MR_Box mercury__digraph__wrapper_arg_1,
  MR_Box mercury__digraph__wrapper_arg_2,
  MR_Box mercury__digraph__wrapper_arg_3)
{
  {
    MR_bool mercury__digraph__succeeded;

    {
      mercury__digraph__succeeded = mercury__digraph____Unify____digraph_key_set_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), ((MR_Word) mercury__digraph__wrapper_arg_2), ((MR_Word) mercury__digraph__wrapper_arg_3));
    }
    return mercury__digraph__succeeded;
  }
}

static void MR_CALL 
mercury__digraph____Compare____digraph_key_set_1_0_10001(
  MR_Box mercury__digraph__wrapper_arg_1,
  MR_Box * mercury__digraph__wrapper_arg_2,
  MR_Box mercury__digraph__wrapper_arg_3,
  MR_Box mercury__digraph__wrapper_arg_4)
{
  {
    MR_Word mercury__digraph__conv0_HeadVar__1_1;

    {
      mercury__digraph____Compare____digraph_key_set_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), &mercury__digraph__conv0_HeadVar__1_1, ((MR_Word) mercury__digraph__wrapper_arg_3), ((MR_Word) mercury__digraph__wrapper_arg_4));
    }
    *mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__digraph____Unify____key_map_1_0_10001(
  MR_Box mercury__digraph__wrapper_arg_1,
  MR_Box mercury__digraph__wrapper_arg_2,
  MR_Box mercury__digraph__wrapper_arg_3)
{
  {
    MR_bool mercury__digraph__succeeded;

    {
      mercury__digraph__succeeded = mercury__digraph____Unify____key_map_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), ((MR_Word) mercury__digraph__wrapper_arg_2), ((MR_Word) mercury__digraph__wrapper_arg_3));
    }
    return mercury__digraph__succeeded;
  }
}

static void MR_CALL 
mercury__digraph____Compare____key_map_1_0_10001(
  MR_Box mercury__digraph__wrapper_arg_1,
  MR_Box * mercury__digraph__wrapper_arg_2,
  MR_Box mercury__digraph__wrapper_arg_3,
  MR_Box mercury__digraph__wrapper_arg_4)
{
  {
    MR_Word mercury__digraph__conv0_HeadVar__1_1;

    {
      mercury__digraph____Compare____key_map_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), &mercury__digraph__conv0_HeadVar__1_1, ((MR_Word) mercury__digraph__wrapper_arg_3), ((MR_Word) mercury__digraph__wrapper_arg_4));
    }
    *mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__digraph____Unify____key_set_map_1_0_10001(
  MR_Box mercury__digraph__wrapper_arg_1,
  MR_Box mercury__digraph__wrapper_arg_2,
  MR_Box mercury__digraph__wrapper_arg_3)
{
  {
    MR_bool mercury__digraph__succeeded;

    {
      mercury__digraph__succeeded = mercury__digraph____Unify____key_set_map_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), ((MR_Word) mercury__digraph__wrapper_arg_2), ((MR_Word) mercury__digraph__wrapper_arg_3));
    }
    return mercury__digraph__succeeded;
  }
}

static void MR_CALL 
mercury__digraph____Compare____key_set_map_1_0_10001(
  MR_Box mercury__digraph__wrapper_arg_1,
  MR_Box * mercury__digraph__wrapper_arg_2,
  MR_Box mercury__digraph__wrapper_arg_3,
  MR_Box mercury__digraph__wrapper_arg_4)
{
  {
    MR_Word mercury__digraph__conv0_HeadVar__1_1;

    {
      mercury__digraph____Compare____key_set_map_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), &mercury__digraph__conv0_HeadVar__1_1, ((MR_Word) mercury__digraph__wrapper_arg_3), ((MR_Word) mercury__digraph__wrapper_arg_4));
    }
    *mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_HeadVar__1_1));
  }
}

static MR_Box MR_CALL 
mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__to_int_1_1_f_0_10001(
  MR_Box mercury__digraph__closure_arg,
  MR_Box mercury__digraph__wrapper_arg_1)
{
  {
    MR_Box mercury__digraph__wrapper_arg_2;
    MR_Box mercury__digraph__closure;
    MR_Integer mercury__digraph__conv0_Int_4;

    mercury__digraph__closure = mercury__digraph__closure_arg;
    {
      mercury__digraph__conv0_Int_4 = mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__to_int_1_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__closure, (MR_Integer) 1))), ((MR_Word) mercury__digraph__wrapper_arg_1));
    }
    mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_Int_4));
    return mercury__digraph__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__from_int_1_1_f_0_10001(
  MR_Box mercury__digraph__closure_arg,
  MR_Box mercury__digraph__wrapper_arg_1,
  MR_Box * mercury__digraph__wrapper_arg_2)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Box mercury__digraph__closure;
    MR_Word mercury__digraph__conv0_HeadVar__2_2;

    mercury__digraph__closure = mercury__digraph__closure_arg;
    {
      mercury__digraph__succeeded = mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__from_int_1_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__closure, (MR_Integer) 1))), ((MR_Integer) mercury__digraph__wrapper_arg_1), &mercury__digraph__conv0_HeadVar__2_2);
    }
    if (mercury__digraph__succeeded)
      {
        *mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_HeadVar__2_2));
        mercury__digraph__succeeded = MR_TRUE;
      }
    return mercury__digraph__succeeded;
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
  MR_Word mercury__digraph__Var_27,
  MR_Word mercury__digraph__Var_28,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded;

        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
        else
          {
            MR_Word mercury__digraph__TypeCtorInfo_12_35 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
            MR_Word mercury__digraph__TypeInfo_13_36;
            MR_Word mercury__digraph__TypeCtorInfo_14_37;
            MR_Word mercury__digraph__TypeInfo_15_38;
            MR_Word mercury__digraph__TypeInfo_16_39;
            MR_Word mercury__digraph__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__digraph__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__digraph__V_15_13;
            MR_Word mercury__digraph__conv0_V_15_13;

            {
              mercury__digraph__TypeInfo_13_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_13_36, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_12_35));
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_13_36, 1) = ((MR_Box) (mercury__digraph__Var_27));
            }
            mercury__digraph__TypeCtorInfo_14_37 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
            {
              mercury__digraph__TypeInfo_15_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_38, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_37));
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_38, 1) = ((MR_Box) (mercury__digraph__Var_27));
            }
            {
              mercury__digraph__TypeInfo_16_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_39, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_12_35));
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_39, 1) = ((MR_Box) (mercury__digraph__TypeInfo_15_38));
            }
            {
              mercury__tree234__set_4_p_0(mercury__digraph__TypeInfo_13_36, mercury__digraph__TypeInfo_16_39, ((MR_Box) (mercury__digraph__V_10_9)), ((MR_Box) (mercury__digraph__Var_28)), (MR_Word) mercury__digraph__HeadVar__3_3, &mercury__digraph__conv0_V_15_13);
            }
            mercury__digraph__V_15_13 = (MR_Word) mercury__digraph__conv0_V_15_13;
            /* direct tailcall eliminated */
            {
              MR_Word mercury__digraph__next_value_of_HeadVar__2_2 = mercury__digraph__V_11_10;
              MR_Word mercury__digraph__next_value_of_HeadVar__3_3 = mercury__digraph__V_15_13;

              mercury__digraph__HeadVar__3_3 = mercury__digraph__next_value_of_HeadVar__3_3;
              mercury__digraph__HeadVar__2_2 = mercury__digraph__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_49_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_51_93_95_48_9_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_50,
  MR_Word mercury__digraph__Var_51,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_35,
  MR_Word mercury__digraph__V_10_10,
  MR_Integer mercury__digraph__V_12_12,
  MR_Integer mercury__digraph__V_13_13,
  MR_Integer mercury__digraph__V_14_14,
  MR_Word mercury__digraph__V_22_15,
  MR_Word * mercury__digraph__V_23_16,
  MR_Word mercury__digraph__V_24_17,
  MR_Word * mercury__digraph__V_25_18)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded = (mercury__digraph__V_13_13 == (MR_Integer) 0);

        if (mercury__digraph__succeeded)
          {
            *mercury__digraph__V_25_18 = mercury__digraph__V_24_17;
            *mercury__digraph__V_23_16 = mercury__digraph__V_22_15;
          }
        else
          {
            mercury__digraph__succeeded = (mercury__digraph__V_14_14 == (MR_Integer) 1);
            if (mercury__digraph__succeeded)
              {
                MR_Word mercury__digraph__V_17_19;
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_35, (MR_Integer) 0)), (MR_Integer) 6)));
                MR_Box mercury__digraph__conv1_V_17_19;

                {
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_35), ((MR_Box) (mercury__digraph__V_12_12)), &mercury__digraph__conv1_V_17_19);
                }
                if (mercury__digraph__succeeded)
                  {
                    mercury__digraph__V_17_19 = ((MR_Word) mercury__digraph__conv1_V_17_19);
                    mercury__digraph__succeeded = MR_TRUE;
                  }
                if (mercury__digraph__succeeded)
                  {
                    MR_Word mercury__digraph__TypeCtorInfo_22_66;
                    MR_Word mercury__digraph__TypeInfo_23_67;
                    MR_Box mercury__digraph__VX_60;
                    MR_Word mercury__digraph__CompX_61;
                    MR_Integer mercury__digraph__XI_62;
                    MR_Word mercury__digraph__conv2_V_25_18;

                    {
                      mercury__digraph__lookup_vertex_3_p_0(mercury__digraph__Var_50, mercury__digraph__Var_51, mercury__digraph__V_17_19, &mercury__digraph__VX_60);
                    }
                    {
                      mercury__digraph__add_vertex_4_p_0(mercury__digraph__Var_50, mercury__digraph__VX_60, &mercury__digraph__CompX_61, mercury__digraph__V_22_15, mercury__digraph__V_23_16);
                    }
                    mercury__digraph__XI_62 = (MR_Integer) mercury__digraph__V_17_19;
                    mercury__digraph__TypeCtorInfo_22_66 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
                    {
                      mercury__digraph__TypeInfo_23_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_67, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_22_66));
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_67, 1) = ((MR_Box) (mercury__digraph__Var_50));
                    }
                    {
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__digraph__TypeInfo_23_67, mercury__digraph__XI_62, ((MR_Box) (mercury__digraph__CompX_61)), (MR_Word) mercury__digraph__V_24_17, &mercury__digraph__conv2_V_25_18);
                    }
                    *mercury__digraph__V_25_18 = (MR_Word) mercury__digraph__conv2_V_25_18;
                  }
                else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold2_bits\'/9", (MR_String) "\140enum.from_int/1\' failed");
                      return;
                    }
                  }
              }
            else
              {
                MR_Integer mercury__digraph__V_18_23 = (mercury__digraph__V_14_14 >> (MR_Integer) 1);
                MR_Integer mercury__digraph__V_19_25;
                MR_Integer mercury__digraph__V_20_26;
                MR_Integer mercury__digraph__V_21_27;
                MR_Integer mercury__digraph__V_32_28;
                MR_Integer mercury__digraph__V_4_70 = ((MR_Integer) -1 << mercury__digraph__V_18_23);

                mercury__digraph__V_19_25 = ~(mercury__digraph__V_4_70);
                mercury__digraph__V_20_26 = (mercury__digraph__V_19_25 & mercury__digraph__V_13_13);
                mercury__digraph__V_32_28 = (mercury__digraph__V_13_13 >> mercury__digraph__V_18_23);
                mercury__digraph__V_21_27 = (mercury__digraph__V_19_25 & mercury__digraph__V_32_28);
                switch (mercury__digraph__V_10_10) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Integer mercury__digraph__V_33_32 = (mercury__digraph__V_12_12 + mercury__digraph__V_18_23);
                      MR_Word mercury__digraph__V_34_33;
                      MR_Word mercury__digraph__V_35_34;

                      {
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_49_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_51_93_95_48_9_p_in__sparse_bitset_0(mercury__digraph__Var_50, mercury__digraph__Var_51, mercury__digraph__TypeClassInfo_for_enum_35, mercury__digraph__V_10_10, mercury__digraph__V_33_32, mercury__digraph__V_21_27, mercury__digraph__V_18_23, mercury__digraph__V_22_15, &mercury__digraph__V_34_33, mercury__digraph__V_24_17, &mercury__digraph__V_35_34);
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Integer mercury__digraph__next_value_of_V_13_13 = mercury__digraph__V_20_26;
                        MR_Integer mercury__digraph__next_value_of_V_14_14 = mercury__digraph__V_18_23;
                        MR_Word mercury__digraph__next_value_of_V_22_15 = mercury__digraph__V_34_33;
                        MR_Word mercury__digraph__next_value_of_V_24_17 = mercury__digraph__V_35_34;

                        mercury__digraph__V_24_17 = mercury__digraph__next_value_of_V_24_17;
                        mercury__digraph__V_22_15 = mercury__digraph__next_value_of_V_22_15;
                        mercury__digraph__V_14_14 = mercury__digraph__next_value_of_V_14_14;
                        mercury__digraph__V_13_13 = mercury__digraph__next_value_of_V_13_13;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word mercury__digraph__V_38_29;
                      MR_Word mercury__digraph__V_39_30;
                      MR_Integer mercury__digraph__V_40_31;

                      {
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_49_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_51_93_95_48_9_p_in__sparse_bitset_0(mercury__digraph__Var_50, mercury__digraph__Var_51, mercury__digraph__TypeClassInfo_for_enum_35, mercury__digraph__V_10_10, mercury__digraph__V_12_12, mercury__digraph__V_20_26, mercury__digraph__V_18_23, mercury__digraph__V_22_15, &mercury__digraph__V_38_29, mercury__digraph__V_24_17, &mercury__digraph__V_39_30);
                      }
                      mercury__digraph__V_40_31 = (mercury__digraph__V_12_12 + mercury__digraph__V_18_23);
                      /* direct tailcall eliminated */
                      {
                        MR_Integer mercury__digraph__next_value_of_V_12_12 = mercury__digraph__V_40_31;
                        MR_Integer mercury__digraph__next_value_of_V_13_13 = mercury__digraph__V_21_27;
                        MR_Integer mercury__digraph__next_value_of_V_14_14 = mercury__digraph__V_18_23;
                        MR_Word mercury__digraph__next_value_of_V_22_15 = mercury__digraph__V_38_29;
                        MR_Word mercury__digraph__next_value_of_V_24_17 = mercury__digraph__V_39_30;

                        mercury__digraph__V_24_17 = mercury__digraph__next_value_of_V_24_17;
                        mercury__digraph__V_22_15 = mercury__digraph__next_value_of_V_22_15;
                        mercury__digraph__V_14_14 = mercury__digraph__next_value_of_V_14_14;
                        mercury__digraph__V_13_13 = mercury__digraph__next_value_of_V_13_13;
                        mercury__digraph__V_12_12 = mercury__digraph__next_value_of_V_12_12;
                      }
                      continue;
                    }
                    break;
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_51_93_95_48_7_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_41,
  MR_Word mercury__digraph__Var_42,
  MR_Box mercury__digraph__Var_43,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
  MR_Word mercury__digraph__V_8_8,
  MR_Integer mercury__digraph__V_10_10,
  MR_Integer mercury__digraph__V_11_11,
  MR_Integer mercury__digraph__V_12_12,
  MR_Word mercury__digraph__V_19_13,
  MR_Word * mercury__digraph__V_20_14)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded = (mercury__digraph__V_11_11 == (MR_Integer) 0);

        if (mercury__digraph__succeeded)
          *mercury__digraph__V_20_14 = mercury__digraph__V_19_13;
        else
          {
            mercury__digraph__succeeded = (mercury__digraph__V_12_12 == (MR_Integer) 1);
            if (mercury__digraph__succeeded)
              {
                MR_Word mercury__digraph__V_14_15;
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));
                MR_Box mercury__digraph__conv1_V_14_15;

                {
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__V_10_10)), &mercury__digraph__conv1_V_14_15);
                }
                if (mercury__digraph__succeeded)
                  {
                    mercury__digraph__V_14_15 = ((MR_Word) mercury__digraph__conv1_V_14_15);
                    mercury__digraph__succeeded = MR_TRUE;
                  }
                if (mercury__digraph__succeeded)
                  {
                    MR_Word mercury__digraph__TypeCtorInfo_16_53 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
                    MR_Word mercury__digraph__TypeInfo_17_54;
                    MR_Box mercury__digraph__VY_50;
                    MR_Word mercury__digraph__Var_52;
                    MR_Word mercury__digraph__V_5_58;
                    MR_Word mercury__digraph__V_4_57;

                    {
                      mercury__digraph__TypeInfo_17_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_54, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_53));
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_54, 1) = ((MR_Box) (mercury__digraph__Var_41));
                    }
                    mercury__digraph__V_4_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_42, (MR_Integer) 0)));
                    mercury__digraph__V_5_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_42, (MR_Integer) 1)));
                    {
                      mercury__map__lookup_3_p_0(mercury__digraph__TypeInfo_17_54, mercury__digraph__Var_41, (MR_Word) mercury__digraph__V_5_58, ((MR_Box) (mercury__digraph__V_14_15)), &mercury__digraph__VY_50);
                    }
                    {
                      mercury__digraph__Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__digraph__Var_52, 0) = mercury__digraph__Var_43;
                      MR_hl_field(MR_mktag(0), mercury__digraph__Var_52, 1) = mercury__digraph__VY_50;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__digraph__V_20_14 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__digraph__Var_52));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__digraph__V_19_13));
                    }
                  }
                else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold_bits\'/7", (MR_String) "\140enum.from_int/1\' failed");
                      return;
                    }
                  }
              }
            else
              {
                MR_Integer mercury__digraph__V_15_19 = (mercury__digraph__V_12_12 >> (MR_Integer) 1);
                MR_Integer mercury__digraph__V_16_21;
                MR_Integer mercury__digraph__V_17_22;
                MR_Integer mercury__digraph__V_18_23;
                MR_Integer mercury__digraph__V_26_24;
                MR_Integer mercury__digraph__V_4_61 = ((MR_Integer) -1 << mercury__digraph__V_15_19);

                mercury__digraph__V_16_21 = ~(mercury__digraph__V_4_61);
                mercury__digraph__V_17_22 = (mercury__digraph__V_16_21 & mercury__digraph__V_11_11);
                mercury__digraph__V_26_24 = (mercury__digraph__V_11_11 >> mercury__digraph__V_15_19);
                mercury__digraph__V_18_23 = (mercury__digraph__V_16_21 & mercury__digraph__V_26_24);
                switch (mercury__digraph__V_8_8) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Integer mercury__digraph__V_27_27 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
                      MR_Word mercury__digraph__V_28_28;

                      {
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_51_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__Var_41, mercury__digraph__Var_42, mercury__digraph__Var_43, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_27_27, mercury__digraph__V_18_23, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_28_28);
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Integer mercury__digraph__next_value_of_V_11_11 = mercury__digraph__V_17_22;
                        MR_Integer mercury__digraph__next_value_of_V_12_12 = mercury__digraph__V_15_19;
                        MR_Word mercury__digraph__next_value_of_V_19_13 = mercury__digraph__V_28_28;

                        mercury__digraph__V_19_13 = mercury__digraph__next_value_of_V_19_13;
                        mercury__digraph__V_12_12 = mercury__digraph__next_value_of_V_12_12;
                        mercury__digraph__V_11_11 = mercury__digraph__next_value_of_V_11_11;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word mercury__digraph__V_30_25;
                      MR_Integer mercury__digraph__V_31_26;

                      {
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_51_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__Var_41, mercury__digraph__Var_42, mercury__digraph__Var_43, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_10_10, mercury__digraph__V_17_22, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_30_25);
                      }
                      mercury__digraph__V_31_26 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
                      /* direct tailcall eliminated */
                      {
                        MR_Integer mercury__digraph__next_value_of_V_10_10 = mercury__digraph__V_31_26;
                        MR_Integer mercury__digraph__next_value_of_V_11_11 = mercury__digraph__V_18_23;
                        MR_Integer mercury__digraph__next_value_of_V_12_12 = mercury__digraph__V_15_19;
                        MR_Word mercury__digraph__next_value_of_V_19_13 = mercury__digraph__V_30_25;

                        mercury__digraph__V_19_13 = mercury__digraph__next_value_of_V_19_13;
                        mercury__digraph__V_12_12 = mercury__digraph__next_value_of_V_12_12;
                        mercury__digraph__V_11_11 = mercury__digraph__next_value_of_V_11_11;
                        mercury__digraph__V_10_10 = mercury__digraph__next_value_of_V_10_10;
                      }
                      continue;
                    }
                    break;
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_52_93_95_48_7_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_46,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
  MR_Word mercury__digraph__V_8_8,
  MR_Integer mercury__digraph__V_10_10,
  MR_Integer mercury__digraph__V_11_11,
  MR_Integer mercury__digraph__V_12_12,
  MR_Word mercury__digraph__V_19_13,
  MR_Word * mercury__digraph__V_20_14)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded = (mercury__digraph__V_11_11 == (MR_Integer) 0);

        if (mercury__digraph__succeeded)
          *mercury__digraph__V_20_14 = mercury__digraph__V_19_13;
        else
          {
            mercury__digraph__succeeded = (mercury__digraph__V_12_12 == (MR_Integer) 1);
            if (mercury__digraph__succeeded)
              {
                MR_Word mercury__digraph__V_14_15;
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));
                MR_Box mercury__digraph__conv1_V_14_15;

                {
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__V_10_10)), &mercury__digraph__conv1_V_14_15);
                }
                if (mercury__digraph__succeeded)
                  {
                    mercury__digraph__V_14_15 = ((MR_Word) mercury__digraph__conv1_V_14_15);
                    mercury__digraph__succeeded = MR_TRUE;
                  }
                if (mercury__digraph__succeeded)
                  {
                    MR_Word mercury__digraph__Var_53;

                    {
                      mercury__digraph__Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__digraph__Var_53, 0) = ((MR_Box) (mercury__digraph__Var_46));
                      MR_hl_field(MR_mktag(0), mercury__digraph__Var_53, 1) = ((MR_Box) (mercury__digraph__V_14_15));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__digraph__V_20_14 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__digraph__Var_53));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__digraph__V_19_13));
                    }
                  }
                else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold_bits\'/7", (MR_String) "\140enum.from_int/1\' failed");
                      return;
                    }
                  }
              }
            else
              {
                MR_Integer mercury__digraph__V_15_19 = (mercury__digraph__V_12_12 >> (MR_Integer) 1);
                MR_Integer mercury__digraph__V_16_21;
                MR_Integer mercury__digraph__V_17_22;
                MR_Integer mercury__digraph__V_18_23;
                MR_Integer mercury__digraph__V_26_24;
                MR_Integer mercury__digraph__V_4_56 = ((MR_Integer) -1 << mercury__digraph__V_15_19);

                mercury__digraph__V_16_21 = ~(mercury__digraph__V_4_56);
                mercury__digraph__V_17_22 = (mercury__digraph__V_16_21 & mercury__digraph__V_11_11);
                mercury__digraph__V_26_24 = (mercury__digraph__V_11_11 >> mercury__digraph__V_15_19);
                mercury__digraph__V_18_23 = (mercury__digraph__V_16_21 & mercury__digraph__V_26_24);
                switch (mercury__digraph__V_8_8) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Integer mercury__digraph__V_27_27 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
                      MR_Word mercury__digraph__V_28_28;

                      {
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_52_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__Var_46, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_27_27, mercury__digraph__V_18_23, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_28_28);
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Integer mercury__digraph__next_value_of_V_11_11 = mercury__digraph__V_17_22;
                        MR_Integer mercury__digraph__next_value_of_V_12_12 = mercury__digraph__V_15_19;
                        MR_Word mercury__digraph__next_value_of_V_19_13 = mercury__digraph__V_28_28;

                        mercury__digraph__V_19_13 = mercury__digraph__next_value_of_V_19_13;
                        mercury__digraph__V_12_12 = mercury__digraph__next_value_of_V_12_12;
                        mercury__digraph__V_11_11 = mercury__digraph__next_value_of_V_11_11;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word mercury__digraph__V_30_25;
                      MR_Integer mercury__digraph__V_31_26;

                      {
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_52_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__Var_46, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_10_10, mercury__digraph__V_17_22, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_30_25);
                      }
                      mercury__digraph__V_31_26 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
                      /* direct tailcall eliminated */
                      {
                        MR_Integer mercury__digraph__next_value_of_V_10_10 = mercury__digraph__V_31_26;
                        MR_Integer mercury__digraph__next_value_of_V_11_11 = mercury__digraph__V_18_23;
                        MR_Integer mercury__digraph__next_value_of_V_12_12 = mercury__digraph__V_15_19;
                        MR_Word mercury__digraph__next_value_of_V_19_13 = mercury__digraph__V_30_25;

                        mercury__digraph__V_19_13 = mercury__digraph__next_value_of_V_19_13;
                        mercury__digraph__V_12_12 = mercury__digraph__next_value_of_V_12_12;
                        mercury__digraph__V_11_11 = mercury__digraph__next_value_of_V_11_11;
                        mercury__digraph__V_10_10 = mercury__digraph__next_value_of_V_10_10;
                      }
                      continue;
                    }
                    break;
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_49_48_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_52_93_95_48_9_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_51,
  MR_Word mercury__digraph__Var_52,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_35,
  MR_Word mercury__digraph__V_10_10,
  MR_Integer mercury__digraph__V_12_12,
  MR_Integer mercury__digraph__V_13_13,
  MR_Integer mercury__digraph__V_14_14,
  MR_Word mercury__digraph__V_22_15,
  MR_Word * mercury__digraph__V_23_16,
  MR_Word mercury__digraph__V_24_17,
  MR_Word * mercury__digraph__V_25_18)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded = (mercury__digraph__V_13_13 == (MR_Integer) 0);

        if (mercury__digraph__succeeded)
          {
            *mercury__digraph__V_25_18 = mercury__digraph__V_24_17;
            *mercury__digraph__V_23_16 = mercury__digraph__V_22_15;
          }
        else
          {
            mercury__digraph__succeeded = (mercury__digraph__V_14_14 == (MR_Integer) 1);
            if (mercury__digraph__succeeded)
              {
                MR_Word mercury__digraph__V_17_19;
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_35, (MR_Integer) 0)), (MR_Integer) 6)));
                MR_Box mercury__digraph__conv1_V_17_19;

                {
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_35), ((MR_Box) (mercury__digraph__V_12_12)), &mercury__digraph__conv1_V_17_19);
                }
                if (mercury__digraph__succeeded)
                  {
                    mercury__digraph__V_17_19 = ((MR_Word) mercury__digraph__conv1_V_17_19);
                    mercury__digraph__succeeded = MR_TRUE;
                  }
                if (mercury__digraph__succeeded)
                  {
                    mercury__digraph__dfs_2_6_p_0(mercury__digraph__Var_51, mercury__digraph__Var_52, mercury__digraph__V_17_19, mercury__digraph__V_22_15, mercury__digraph__V_23_16, mercury__digraph__V_24_17, mercury__digraph__V_25_18);
                  }
                else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold2_bits\'/9", (MR_String) "\140enum.from_int/1\' failed");
                      return;
                    }
                  }
              }
            else
              {
                MR_Integer mercury__digraph__V_18_23 = (mercury__digraph__V_14_14 >> (MR_Integer) 1);
                MR_Integer mercury__digraph__V_19_25;
                MR_Integer mercury__digraph__V_20_26;
                MR_Integer mercury__digraph__V_21_27;
                MR_Integer mercury__digraph__V_32_28;
                MR_Integer mercury__digraph__V_4_55 = ((MR_Integer) -1 << mercury__digraph__V_18_23);

                mercury__digraph__V_19_25 = ~(mercury__digraph__V_4_55);
                mercury__digraph__V_20_26 = (mercury__digraph__V_19_25 & mercury__digraph__V_13_13);
                mercury__digraph__V_32_28 = (mercury__digraph__V_13_13 >> mercury__digraph__V_18_23);
                mercury__digraph__V_21_27 = (mercury__digraph__V_19_25 & mercury__digraph__V_32_28);
                switch (mercury__digraph__V_10_10) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Integer mercury__digraph__V_33_32 = (mercury__digraph__V_12_12 + mercury__digraph__V_18_23);
                      MR_Word mercury__digraph__V_34_33;
                      MR_Word mercury__digraph__V_35_34;

                      {
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_49_48_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_52_93_95_48_9_p_in__sparse_bitset_0(mercury__digraph__Var_51, mercury__digraph__Var_52, mercury__digraph__TypeClassInfo_for_enum_35, mercury__digraph__V_10_10, mercury__digraph__V_33_32, mercury__digraph__V_21_27, mercury__digraph__V_18_23, mercury__digraph__V_22_15, &mercury__digraph__V_34_33, mercury__digraph__V_24_17, &mercury__digraph__V_35_34);
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Integer mercury__digraph__next_value_of_V_13_13 = mercury__digraph__V_20_26;
                        MR_Integer mercury__digraph__next_value_of_V_14_14 = mercury__digraph__V_18_23;
                        MR_Word mercury__digraph__next_value_of_V_22_15 = mercury__digraph__V_34_33;
                        MR_Word mercury__digraph__next_value_of_V_24_17 = mercury__digraph__V_35_34;

                        mercury__digraph__V_24_17 = mercury__digraph__next_value_of_V_24_17;
                        mercury__digraph__V_22_15 = mercury__digraph__next_value_of_V_22_15;
                        mercury__digraph__V_14_14 = mercury__digraph__next_value_of_V_14_14;
                        mercury__digraph__V_13_13 = mercury__digraph__next_value_of_V_13_13;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word mercury__digraph__V_38_29;
                      MR_Word mercury__digraph__V_39_30;
                      MR_Integer mercury__digraph__V_40_31;

                      {
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_49_48_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_52_93_95_48_9_p_in__sparse_bitset_0(mercury__digraph__Var_51, mercury__digraph__Var_52, mercury__digraph__TypeClassInfo_for_enum_35, mercury__digraph__V_10_10, mercury__digraph__V_12_12, mercury__digraph__V_20_26, mercury__digraph__V_18_23, mercury__digraph__V_22_15, &mercury__digraph__V_38_29, mercury__digraph__V_24_17, &mercury__digraph__V_39_30);
                      }
                      mercury__digraph__V_40_31 = (mercury__digraph__V_12_12 + mercury__digraph__V_18_23);
                      /* direct tailcall eliminated */
                      {
                        MR_Integer mercury__digraph__next_value_of_V_12_12 = mercury__digraph__V_40_31;
                        MR_Integer mercury__digraph__next_value_of_V_13_13 = mercury__digraph__V_21_27;
                        MR_Integer mercury__digraph__next_value_of_V_14_14 = mercury__digraph__V_18_23;
                        MR_Word mercury__digraph__next_value_of_V_22_15 = mercury__digraph__V_38_29;
                        MR_Word mercury__digraph__next_value_of_V_24_17 = mercury__digraph__V_39_30;

                        mercury__digraph__V_24_17 = mercury__digraph__next_value_of_V_24_17;
                        mercury__digraph__V_22_15 = mercury__digraph__next_value_of_V_22_15;
                        mercury__digraph__V_14_14 = mercury__digraph__next_value_of_V_14_14;
                        mercury__digraph__V_13_13 = mercury__digraph__next_value_of_V_13_13;
                        mercury__digraph__V_12_12 = mercury__digraph__next_value_of_V_12_12;
                      }
                      continue;
                    }
                    break;
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_40,
  MR_Word mercury__digraph__Var_41,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
  MR_Word mercury__digraph__V_8_8,
  MR_Integer mercury__digraph__V_10_10,
  MR_Integer mercury__digraph__V_11_11,
  MR_Integer mercury__digraph__V_12_12,
  MR_Word mercury__digraph__V_19_13,
  MR_Word * mercury__digraph__V_20_14)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded = (mercury__digraph__V_11_11 == (MR_Integer) 0);

        if (mercury__digraph__succeeded)
          *mercury__digraph__V_20_14 = mercury__digraph__V_19_13;
        else
          {
            mercury__digraph__succeeded = (mercury__digraph__V_12_12 == (MR_Integer) 1);
            if (mercury__digraph__succeeded)
              {
                MR_Word mercury__digraph__V_14_15;
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));
                MR_Box mercury__digraph__conv1_V_14_15;

                {
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__V_10_10)), &mercury__digraph__conv1_V_14_15);
                }
                if (mercury__digraph__succeeded)
                  {
                    mercury__digraph__V_14_15 = ((MR_Word) mercury__digraph__conv1_V_14_15);
                    mercury__digraph__succeeded = MR_TRUE;
                  }
                if (mercury__digraph__succeeded)
                  {
                    mercury__digraph__accumulate_digraph_key_set_4_p_0(mercury__digraph__Var_40, mercury__digraph__Var_41, mercury__digraph__V_14_15, mercury__digraph__V_19_13, mercury__digraph__V_20_14);
                  }
                else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold_bits\'/7", (MR_String) "\140enum.from_int/1\' failed");
                      return;
                    }
                  }
              }
            else
              {
                MR_Integer mercury__digraph__V_15_19 = (mercury__digraph__V_12_12 >> (MR_Integer) 1);
                MR_Integer mercury__digraph__V_16_21;
                MR_Integer mercury__digraph__V_17_22;
                MR_Integer mercury__digraph__V_18_23;
                MR_Integer mercury__digraph__V_26_24;
                MR_Integer mercury__digraph__V_4_44 = ((MR_Integer) -1 << mercury__digraph__V_15_19);

                mercury__digraph__V_16_21 = ~(mercury__digraph__V_4_44);
                mercury__digraph__V_17_22 = (mercury__digraph__V_16_21 & mercury__digraph__V_11_11);
                mercury__digraph__V_26_24 = (mercury__digraph__V_11_11 >> mercury__digraph__V_15_19);
                mercury__digraph__V_18_23 = (mercury__digraph__V_16_21 & mercury__digraph__V_26_24);
                switch (mercury__digraph__V_8_8) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Integer mercury__digraph__V_27_27 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
                      MR_Word mercury__digraph__V_28_28;

                      {
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__Var_40, mercury__digraph__Var_41, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_27_27, mercury__digraph__V_18_23, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_28_28);
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Integer mercury__digraph__next_value_of_V_11_11 = mercury__digraph__V_17_22;
                        MR_Integer mercury__digraph__next_value_of_V_12_12 = mercury__digraph__V_15_19;
                        MR_Word mercury__digraph__next_value_of_V_19_13 = mercury__digraph__V_28_28;

                        mercury__digraph__V_19_13 = mercury__digraph__next_value_of_V_19_13;
                        mercury__digraph__V_12_12 = mercury__digraph__next_value_of_V_12_12;
                        mercury__digraph__V_11_11 = mercury__digraph__next_value_of_V_11_11;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word mercury__digraph__V_30_25;
                      MR_Integer mercury__digraph__V_31_26;

                      {
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__Var_40, mercury__digraph__Var_41, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_10_10, mercury__digraph__V_17_22, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_30_25);
                      }
                      mercury__digraph__V_31_26 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
                      /* direct tailcall eliminated */
                      {
                        MR_Integer mercury__digraph__next_value_of_V_10_10 = mercury__digraph__V_31_26;
                        MR_Integer mercury__digraph__next_value_of_V_11_11 = mercury__digraph__V_18_23;
                        MR_Integer mercury__digraph__next_value_of_V_12_12 = mercury__digraph__V_15_19;
                        MR_Word mercury__digraph__next_value_of_V_19_13 = mercury__digraph__V_30_25;

                        mercury__digraph__V_19_13 = mercury__digraph__next_value_of_V_19_13;
                        mercury__digraph__V_12_12 = mercury__digraph__next_value_of_V_12_12;
                        mercury__digraph__V_11_11 = mercury__digraph__next_value_of_V_11_11;
                        mercury__digraph__V_10_10 = mercury__digraph__next_value_of_V_10_10;
                      }
                      continue;
                    }
                    break;
                }
              }
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_50_93_95_48_7_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_40,
  MR_Word mercury__digraph__Var_41,
  MR_Word mercury__digraph__Var_42,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
  MR_Word mercury__digraph__V_8_8,
  MR_Integer mercury__digraph__V_10_10,
  MR_Integer mercury__digraph__V_11_11,
  MR_Integer mercury__digraph__V_12_12,
  MR_Word mercury__digraph__V_19_13,
  MR_Word * mercury__digraph__V_20_14)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded = (mercury__digraph__V_11_11 == (MR_Integer) 0);

        if (mercury__digraph__succeeded)
          {
            *mercury__digraph__V_20_14 = mercury__digraph__V_19_13;
            mercury__digraph__succeeded = MR_TRUE;
          }
        else
          {
            mercury__digraph__succeeded = (mercury__digraph__V_12_12 == (MR_Integer) 1);
            if (mercury__digraph__succeeded)
              {
                MR_Word mercury__digraph__V_14_15;
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));
                MR_Box mercury__digraph__conv1_V_14_15;

                {
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__V_10_10)), &mercury__digraph__conv1_V_14_15);
                }
                if (mercury__digraph__succeeded)
                  {
                    mercury__digraph__V_14_15 = ((MR_Word) mercury__digraph__conv1_V_14_15);
                    mercury__digraph__succeeded = MR_TRUE;
                  }
                if (mercury__digraph__succeeded)
                  {
                    mercury__digraph__succeeded = mercury__digraph__is_dag_2_5_p_0(mercury__digraph__Var_40, mercury__digraph__Var_41, mercury__digraph__Var_42, mercury__digraph__V_14_15, mercury__digraph__V_19_13, mercury__digraph__V_20_14);
                  }
                else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold_bits\'/7", (MR_String) "\140enum.from_int/1\' failed");
                    }
                    mercury__digraph__succeeded = MR_TRUE;
                  }
              }
            else
              {
                MR_Integer mercury__digraph__V_15_19 = (mercury__digraph__V_12_12 >> (MR_Integer) 1);
                MR_Integer mercury__digraph__V_16_21;
                MR_Integer mercury__digraph__V_17_22;
                MR_Integer mercury__digraph__V_18_23;
                MR_Integer mercury__digraph__V_26_24;
                MR_Integer mercury__digraph__V_4_45 = ((MR_Integer) -1 << mercury__digraph__V_15_19);

                mercury__digraph__V_16_21 = ~(mercury__digraph__V_4_45);
                mercury__digraph__V_17_22 = (mercury__digraph__V_16_21 & mercury__digraph__V_11_11);
                mercury__digraph__V_26_24 = (mercury__digraph__V_11_11 >> mercury__digraph__V_15_19);
                mercury__digraph__V_18_23 = (mercury__digraph__V_16_21 & mercury__digraph__V_26_24);
                switch (mercury__digraph__V_8_8) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Integer mercury__digraph__V_27_27 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
                      MR_Word mercury__digraph__V_28_28;

                      {
                        mercury__digraph__succeeded = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_50_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__Var_40, mercury__digraph__Var_41, mercury__digraph__Var_42, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_27_27, mercury__digraph__V_18_23, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_28_28);
                      }
                      if (mercury__digraph__succeeded)
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Integer mercury__digraph__next_value_of_V_11_11 = mercury__digraph__V_17_22;
                            MR_Integer mercury__digraph__next_value_of_V_12_12 = mercury__digraph__V_15_19;
                            MR_Word mercury__digraph__next_value_of_V_19_13 = mercury__digraph__V_28_28;

                            mercury__digraph__V_19_13 = mercury__digraph__next_value_of_V_19_13;
                            mercury__digraph__V_12_12 = mercury__digraph__next_value_of_V_12_12;
                            mercury__digraph__V_11_11 = mercury__digraph__next_value_of_V_11_11;
                          }
                          continue;
                        }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word mercury__digraph__V_30_25;
                      MR_Integer mercury__digraph__V_31_26;

                      {
                        mercury__digraph__succeeded = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_50_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__Var_40, mercury__digraph__Var_41, mercury__digraph__Var_42, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_10_10, mercury__digraph__V_17_22, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_30_25);
                      }
                      if (mercury__digraph__succeeded)
                        {
                          mercury__digraph__V_31_26 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
                          /* direct tailcall eliminated */
                          {
                            MR_Integer mercury__digraph__next_value_of_V_10_10 = mercury__digraph__V_31_26;
                            MR_Integer mercury__digraph__next_value_of_V_11_11 = mercury__digraph__V_18_23;
                            MR_Integer mercury__digraph__next_value_of_V_12_12 = mercury__digraph__V_15_19;
                            MR_Word mercury__digraph__next_value_of_V_19_13 = mercury__digraph__V_30_25;

                            mercury__digraph__V_19_13 = mercury__digraph__next_value_of_V_19_13;
                            mercury__digraph__V_12_12 = mercury__digraph__next_value_of_V_12_12;
                            mercury__digraph__V_11_11 = mercury__digraph__next_value_of_V_11_11;
                            mercury__digraph__V_10_10 = mercury__digraph__next_value_of_V_10_10;
                          }
                          continue;
                        }
                    }
                    break;
                }
              }
          }
        return mercury__digraph__succeeded;
      }
      break;
    }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_40,
  MR_Word mercury__digraph__Var_41,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
  MR_Word mercury__digraph__V_8_8,
  MR_Integer mercury__digraph__V_10_10,
  MR_Integer mercury__digraph__V_11_11,
  MR_Integer mercury__digraph__V_12_12,
  MR_Word mercury__digraph__V_19_13,
  MR_Word * mercury__digraph__V_20_14)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded = (mercury__digraph__V_11_11 == (MR_Integer) 0);

        if (mercury__digraph__succeeded)
          *mercury__digraph__V_20_14 = mercury__digraph__V_19_13;
        else
          {
            mercury__digraph__succeeded = (mercury__digraph__V_12_12 == (MR_Integer) 1);
            if (mercury__digraph__succeeded)
              {
                MR_Word mercury__digraph__V_14_15;
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));
                MR_Box mercury__digraph__conv1_V_14_15;

                {
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__V_10_10)), &mercury__digraph__conv1_V_14_15);
                }
                if (mercury__digraph__succeeded)
                  {
                    mercury__digraph__V_14_15 = ((MR_Word) mercury__digraph__conv1_V_14_15);
                    mercury__digraph__succeeded = MR_TRUE;
                  }
                if (mercury__digraph__succeeded)
                  {
                    MR_Word mercury__digraph__SuccXs_47;
                    MR_Word mercury__digraph__V_4_54;
                    MR_Word mercury__digraph__V_5_55;
                    MR_Word mercury__digraph__V_6_56;

                    {
                      mercury__digraph__lookup_key_set_from_3_p_0(mercury__digraph__Var_40, mercury__digraph__Var_41, mercury__digraph__V_14_15, &mercury__digraph__SuccXs_47);
                    }
                    mercury__digraph__V_4_54 = (MR_Word) mercury__digraph__SuccXs_47;
                    mercury__digraph__V_5_55 = (MR_Word) mercury__digraph__V_19_13;
                    {
                      mercury__digraph__V_6_56 = mercury__sparse_bitset__union_2_2_f_0(mercury__digraph__V_4_54, mercury__digraph__V_5_55);
                    }
                    *mercury__digraph__V_20_14 = (MR_Word) mercury__digraph__V_6_56;
                  }
                else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold_bits\'/7", (MR_String) "\140enum.from_int/1\' failed");
                      return;
                    }
                  }
              }
            else
              {
                MR_Integer mercury__digraph__V_15_19 = (mercury__digraph__V_12_12 >> (MR_Integer) 1);
                MR_Integer mercury__digraph__V_16_21;
                MR_Integer mercury__digraph__V_17_22;
                MR_Integer mercury__digraph__V_18_23;
                MR_Integer mercury__digraph__V_26_24;
                MR_Integer mercury__digraph__V_4_59 = ((MR_Integer) -1 << mercury__digraph__V_15_19);

                mercury__digraph__V_16_21 = ~(mercury__digraph__V_4_59);
                mercury__digraph__V_17_22 = (mercury__digraph__V_16_21 & mercury__digraph__V_11_11);
                mercury__digraph__V_26_24 = (mercury__digraph__V_11_11 >> mercury__digraph__V_15_19);
                mercury__digraph__V_18_23 = (mercury__digraph__V_16_21 & mercury__digraph__V_26_24);
                switch (mercury__digraph__V_8_8) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Integer mercury__digraph__V_27_27 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
                      MR_Word mercury__digraph__V_28_28;

                      {
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__Var_40, mercury__digraph__Var_41, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_27_27, mercury__digraph__V_18_23, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_28_28);
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Integer mercury__digraph__next_value_of_V_11_11 = mercury__digraph__V_17_22;
                        MR_Integer mercury__digraph__next_value_of_V_12_12 = mercury__digraph__V_15_19;
                        MR_Word mercury__digraph__next_value_of_V_19_13 = mercury__digraph__V_28_28;

                        mercury__digraph__V_19_13 = mercury__digraph__next_value_of_V_19_13;
                        mercury__digraph__V_12_12 = mercury__digraph__next_value_of_V_12_12;
                        mercury__digraph__V_11_11 = mercury__digraph__next_value_of_V_11_11;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word mercury__digraph__V_30_25;
                      MR_Integer mercury__digraph__V_31_26;

                      {
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__Var_40, mercury__digraph__Var_41, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_10_10, mercury__digraph__V_17_22, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_30_25);
                      }
                      mercury__digraph__V_31_26 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
                      /* direct tailcall eliminated */
                      {
                        MR_Integer mercury__digraph__next_value_of_V_10_10 = mercury__digraph__V_31_26;
                        MR_Integer mercury__digraph__next_value_of_V_11_11 = mercury__digraph__V_18_23;
                        MR_Integer mercury__digraph__next_value_of_V_12_12 = mercury__digraph__V_15_19;
                        MR_Word mercury__digraph__next_value_of_V_19_13 = mercury__digraph__V_30_25;

                        mercury__digraph__V_19_13 = mercury__digraph__next_value_of_V_19_13;
                        mercury__digraph__V_12_12 = mercury__digraph__next_value_of_V_12_12;
                        mercury__digraph__V_11_11 = mercury__digraph__next_value_of_V_11_11;
                        mercury__digraph__V_10_10 = mercury__digraph__next_value_of_V_10_10;
                      }
                      continue;
                    }
                    break;
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_38,
  MR_Word mercury__digraph__Var_39,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
  MR_Word mercury__digraph__V_8_8,
  MR_Integer mercury__digraph__V_10_10,
  MR_Integer mercury__digraph__V_11_11,
  MR_Integer mercury__digraph__V_12_12,
  MR_Word mercury__digraph__V_19_13,
  MR_Word * mercury__digraph__V_20_14)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded = (mercury__digraph__V_11_11 == (MR_Integer) 0);

        if (mercury__digraph__succeeded)
          *mercury__digraph__V_20_14 = mercury__digraph__V_19_13;
        else
          {
            mercury__digraph__succeeded = (mercury__digraph__V_12_12 == (MR_Integer) 1);
            if (mercury__digraph__succeeded)
              {
                MR_Word mercury__digraph__V_14_15;
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));
                MR_Box mercury__digraph__conv1_V_14_15;

                {
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__V_10_10)), &mercury__digraph__conv1_V_14_15);
                }
                if (mercury__digraph__succeeded)
                  {
                    mercury__digraph__V_14_15 = ((MR_Word) mercury__digraph__conv1_V_14_15);
                    mercury__digraph__succeeded = MR_TRUE;
                  }
                if (mercury__digraph__succeeded)
                  {
                    mercury__digraph__IntroducedFrom__pred__add_cartesian_product__1128__1_5_p_0(mercury__digraph__Var_38, mercury__digraph__Var_39, mercury__digraph__V_14_15, mercury__digraph__V_19_13, mercury__digraph__V_20_14);
                  }
                else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold_bits\'/7", (MR_String) "\140enum.from_int/1\' failed");
                      return;
                    }
                  }
              }
            else
              {
                MR_Integer mercury__digraph__V_15_19 = (mercury__digraph__V_12_12 >> (MR_Integer) 1);
                MR_Integer mercury__digraph__V_16_21;
                MR_Integer mercury__digraph__V_17_22;
                MR_Integer mercury__digraph__V_18_23;
                MR_Integer mercury__digraph__V_26_24;
                MR_Integer mercury__digraph__V_4_42 = ((MR_Integer) -1 << mercury__digraph__V_15_19);

                mercury__digraph__V_16_21 = ~(mercury__digraph__V_4_42);
                mercury__digraph__V_17_22 = (mercury__digraph__V_16_21 & mercury__digraph__V_11_11);
                mercury__digraph__V_26_24 = (mercury__digraph__V_11_11 >> mercury__digraph__V_15_19);
                mercury__digraph__V_18_23 = (mercury__digraph__V_16_21 & mercury__digraph__V_26_24);
                switch (mercury__digraph__V_8_8) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Integer mercury__digraph__V_27_27 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
                      MR_Word mercury__digraph__V_28_28;

                      {
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__Var_38, mercury__digraph__Var_39, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_27_27, mercury__digraph__V_18_23, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_28_28);
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Integer mercury__digraph__next_value_of_V_11_11 = mercury__digraph__V_17_22;
                        MR_Integer mercury__digraph__next_value_of_V_12_12 = mercury__digraph__V_15_19;
                        MR_Word mercury__digraph__next_value_of_V_19_13 = mercury__digraph__V_28_28;

                        mercury__digraph__V_19_13 = mercury__digraph__next_value_of_V_19_13;
                        mercury__digraph__V_12_12 = mercury__digraph__next_value_of_V_12_12;
                        mercury__digraph__V_11_11 = mercury__digraph__next_value_of_V_11_11;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word mercury__digraph__V_30_25;
                      MR_Integer mercury__digraph__V_31_26;

                      {
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__Var_38, mercury__digraph__Var_39, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_10_10, mercury__digraph__V_17_22, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_30_25);
                      }
                      mercury__digraph__V_31_26 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
                      /* direct tailcall eliminated */
                      {
                        MR_Integer mercury__digraph__next_value_of_V_10_10 = mercury__digraph__V_31_26;
                        MR_Integer mercury__digraph__next_value_of_V_11_11 = mercury__digraph__V_18_23;
                        MR_Integer mercury__digraph__next_value_of_V_12_12 = mercury__digraph__V_15_19;
                        MR_Word mercury__digraph__next_value_of_V_19_13 = mercury__digraph__V_30_25;

                        mercury__digraph__V_19_13 = mercury__digraph__next_value_of_V_19_13;
                        mercury__digraph__V_12_12 = mercury__digraph__next_value_of_V_12_12;
                        mercury__digraph__V_11_11 = mercury__digraph__next_value_of_V_11_11;
                        mercury__digraph__V_10_10 = mercury__digraph__next_value_of_V_10_10;
                      }
                      continue;
                    }
                    break;
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
  MR_Word mercury__digraph__V_8_8,
  MR_Integer mercury__digraph__V_10_10,
  MR_Integer mercury__digraph__V_11_11,
  MR_Integer mercury__digraph__V_12_12,
  MR_Word mercury__digraph__V_19_13,
  MR_Word * mercury__digraph__V_20_14)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded = (mercury__digraph__V_11_11 == (MR_Integer) 0);

        if (mercury__digraph__succeeded)
          *mercury__digraph__V_20_14 = mercury__digraph__V_19_13;
        else
          {
            mercury__digraph__succeeded = (mercury__digraph__V_12_12 == (MR_Integer) 1);
            if (mercury__digraph__succeeded)
              {
                MR_Box mercury__digraph__V_14_15;
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));

                {
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__V_10_10)), &mercury__digraph__V_14_15);
                }
                if (mercury__digraph__succeeded)
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__digraph__V_20_14 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__digraph__V_14_15;
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__digraph__V_19_13));
                  }
                else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold_bits\'/7", (MR_String) "\140enum.from_int/1\' failed");
                      return;
                    }
                  }
              }
            else
              {
                MR_Integer mercury__digraph__V_15_19 = (mercury__digraph__V_12_12 >> (MR_Integer) 1);
                MR_Integer mercury__digraph__V_16_21;
                MR_Integer mercury__digraph__V_17_22;
                MR_Integer mercury__digraph__V_18_23;
                MR_Integer mercury__digraph__V_26_24;
                MR_Integer mercury__digraph__V_4_79 = ((MR_Integer) -1 << mercury__digraph__V_15_19);

                mercury__digraph__V_16_21 = ~(mercury__digraph__V_4_79);
                mercury__digraph__V_17_22 = (mercury__digraph__V_16_21 & mercury__digraph__V_11_11);
                mercury__digraph__V_26_24 = (mercury__digraph__V_11_11 >> mercury__digraph__V_15_19);
                mercury__digraph__V_18_23 = (mercury__digraph__V_16_21 & mercury__digraph__V_26_24);
                switch (mercury__digraph__V_8_8) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Integer mercury__digraph__V_27_27 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
                      MR_Word mercury__digraph__V_28_28;

                      {
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_27_27, mercury__digraph__V_18_23, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_28_28);
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Integer mercury__digraph__next_value_of_V_11_11 = mercury__digraph__V_17_22;
                        MR_Integer mercury__digraph__next_value_of_V_12_12 = mercury__digraph__V_15_19;
                        MR_Word mercury__digraph__next_value_of_V_19_13 = mercury__digraph__V_28_28;

                        mercury__digraph__V_19_13 = mercury__digraph__next_value_of_V_19_13;
                        mercury__digraph__V_12_12 = mercury__digraph__next_value_of_V_12_12;
                        mercury__digraph__V_11_11 = mercury__digraph__next_value_of_V_11_11;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word mercury__digraph__V_30_25;
                      MR_Integer mercury__digraph__V_31_26;

                      {
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_10_10, mercury__digraph__V_17_22, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_30_25);
                      }
                      mercury__digraph__V_31_26 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
                      /* direct tailcall eliminated */
                      {
                        MR_Integer mercury__digraph__next_value_of_V_10_10 = mercury__digraph__V_31_26;
                        MR_Integer mercury__digraph__next_value_of_V_11_11 = mercury__digraph__V_18_23;
                        MR_Integer mercury__digraph__next_value_of_V_12_12 = mercury__digraph__V_15_19;
                        MR_Word mercury__digraph__next_value_of_V_19_13 = mercury__digraph__V_30_25;

                        mercury__digraph__V_19_13 = mercury__digraph__next_value_of_V_19_13;
                        mercury__digraph__V_12_12 = mercury__digraph__next_value_of_V_12_12;
                        mercury__digraph__V_11_11 = mercury__digraph__next_value_of_V_11_11;
                        mercury__digraph__V_10_10 = mercury__digraph__next_value_of_V_10_10;
                      }
                      continue;
                    }
                    break;
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_38,
  MR_Word mercury__digraph__Var_39,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
  MR_Word mercury__digraph__V_8_8,
  MR_Integer mercury__digraph__V_10_10,
  MR_Integer mercury__digraph__V_11_11,
  MR_Integer mercury__digraph__V_12_12,
  MR_Word mercury__digraph__V_19_13,
  MR_Word * mercury__digraph__V_20_14)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded = (mercury__digraph__V_11_11 == (MR_Integer) 0);

        if (mercury__digraph__succeeded)
          *mercury__digraph__V_20_14 = mercury__digraph__V_19_13;
        else
          {
            mercury__digraph__succeeded = (mercury__digraph__V_12_12 == (MR_Integer) 1);
            if (mercury__digraph__succeeded)
              {
                MR_Word mercury__digraph__V_14_15;
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));
                MR_Box mercury__digraph__conv1_V_14_15;

                {
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__V_10_10)), &mercury__digraph__conv1_V_14_15);
                }
                if (mercury__digraph__succeeded)
                  {
                    mercury__digraph__V_14_15 = ((MR_Word) mercury__digraph__conv1_V_14_15);
                    mercury__digraph__succeeded = MR_TRUE;
                  }
                if (mercury__digraph__succeeded)
                  {
                    mercury__digraph__add_edge_4_p_0(mercury__digraph__Var_38, mercury__digraph__Var_39, mercury__digraph__V_14_15, mercury__digraph__V_19_13, mercury__digraph__V_20_14);
                  }
                else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold_bits\'/7", (MR_String) "\140enum.from_int/1\' failed");
                      return;
                    }
                  }
              }
            else
              {
                MR_Integer mercury__digraph__V_15_19 = (mercury__digraph__V_12_12 >> (MR_Integer) 1);
                MR_Integer mercury__digraph__V_16_21;
                MR_Integer mercury__digraph__V_17_22;
                MR_Integer mercury__digraph__V_18_23;
                MR_Integer mercury__digraph__V_26_24;
                MR_Integer mercury__digraph__V_4_42 = ((MR_Integer) -1 << mercury__digraph__V_15_19);

                mercury__digraph__V_16_21 = ~(mercury__digraph__V_4_42);
                mercury__digraph__V_17_22 = (mercury__digraph__V_16_21 & mercury__digraph__V_11_11);
                mercury__digraph__V_26_24 = (mercury__digraph__V_11_11 >> mercury__digraph__V_15_19);
                mercury__digraph__V_18_23 = (mercury__digraph__V_16_21 & mercury__digraph__V_26_24);
                switch (mercury__digraph__V_8_8) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Integer mercury__digraph__V_27_27 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
                      MR_Word mercury__digraph__V_28_28;

                      {
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__Var_38, mercury__digraph__Var_39, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_27_27, mercury__digraph__V_18_23, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_28_28);
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Integer mercury__digraph__next_value_of_V_11_11 = mercury__digraph__V_17_22;
                        MR_Integer mercury__digraph__next_value_of_V_12_12 = mercury__digraph__V_15_19;
                        MR_Word mercury__digraph__next_value_of_V_19_13 = mercury__digraph__V_28_28;

                        mercury__digraph__V_19_13 = mercury__digraph__next_value_of_V_19_13;
                        mercury__digraph__V_12_12 = mercury__digraph__next_value_of_V_12_12;
                        mercury__digraph__V_11_11 = mercury__digraph__next_value_of_V_11_11;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word mercury__digraph__V_30_25;
                      MR_Integer mercury__digraph__V_31_26;

                      {
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__Var_38, mercury__digraph__Var_39, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_10_10, mercury__digraph__V_17_22, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_30_25);
                      }
                      mercury__digraph__V_31_26 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
                      /* direct tailcall eliminated */
                      {
                        MR_Integer mercury__digraph__next_value_of_V_10_10 = mercury__digraph__V_31_26;
                        MR_Integer mercury__digraph__next_value_of_V_11_11 = mercury__digraph__V_18_23;
                        MR_Integer mercury__digraph__next_value_of_V_12_12 = mercury__digraph__V_15_19;
                        MR_Word mercury__digraph__next_value_of_V_19_13 = mercury__digraph__V_30_25;

                        mercury__digraph__V_19_13 = mercury__digraph__next_value_of_V_19_13;
                        mercury__digraph__V_12_12 = mercury__digraph__next_value_of_V_12_12;
                        mercury__digraph__V_11_11 = mercury__digraph__next_value_of_V_11_11;
                        mercury__digraph__V_10_10 = mercury__digraph__next_value_of_V_10_10;
                      }
                      continue;
                    }
                    break;
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_57_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_29,
  MR_Word mercury__digraph__Var_30,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded;

        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
        else
          {
            MR_Word mercury__digraph__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__digraph__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mercury__digraph__V_22_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 0)));
            MR_Integer mercury__digraph__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 1)));
            MR_Integer mercury__digraph__V_18_18;
            MR_Word mercury__digraph__V_19_19;

{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_57_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_18_18  = Bits;
}
            {
              mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__Var_29, mercury__digraph__Var_30, mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 0, mercury__digraph__V_22_16, mercury__digraph__V_17_17, mercury__digraph__V_18_18, mercury__digraph__HeadVar__3_3, &mercury__digraph__V_19_19);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__digraph__next_value_of_HeadVar__2_2 = mercury__digraph__V_11_10;
              MR_Word mercury__digraph__next_value_of_HeadVar__3_3 = mercury__digraph__V_19_19;

              mercury__digraph__HeadVar__3_3 = mercury__digraph__next_value_of_HeadVar__3_3;
              mercury__digraph__HeadVar__2_2 = mercury__digraph__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_57_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4)
{
  {
    MR_bool mercury__digraph__succeeded;

    if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
    else
      {
        MR_Word mercury__digraph__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__digraph__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__digraph__V_15_13;
        MR_Integer mercury__digraph__V_22_17;
        MR_Integer mercury__digraph__V_18_18;
        MR_Integer mercury__digraph__V_19_19;

        {
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_57_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeClassInfo_for_enum_20, mercury__digraph__V_11_10, mercury__digraph__HeadVar__3_3, &mercury__digraph__V_15_13);
        }
        mercury__digraph__V_22_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 0)));
        mercury__digraph__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 1)));
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_57_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_19_19  = Bits;
}
        {
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 1, mercury__digraph__V_22_17, mercury__digraph__V_18_18, mercury__digraph__V_19_19, mercury__digraph__V_15_13, mercury__digraph__HeadVar__4_4);
        }
      }
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_29,
  MR_Word mercury__digraph__Var_30,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded;

        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
        else
          {
            MR_Word mercury__digraph__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__digraph__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mercury__digraph__V_22_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 0)));
            MR_Integer mercury__digraph__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 1)));
            MR_Integer mercury__digraph__V_18_18;
            MR_Word mercury__digraph__V_19_19;

{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_18_18  = Bits;
}
            {
              mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__Var_29, mercury__digraph__Var_30, mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 0, mercury__digraph__V_22_16, mercury__digraph__V_17_17, mercury__digraph__V_18_18, mercury__digraph__HeadVar__3_3, &mercury__digraph__V_19_19);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__digraph__next_value_of_HeadVar__2_2 = mercury__digraph__V_11_10;
              MR_Word mercury__digraph__next_value_of_HeadVar__3_3 = mercury__digraph__V_19_19;

              mercury__digraph__HeadVar__3_3 = mercury__digraph__next_value_of_HeadVar__3_3;
              mercury__digraph__HeadVar__2_2 = mercury__digraph__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_31,
  MR_Word mercury__digraph__Var_32,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded;

        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
        else
          {
            MR_Word mercury__digraph__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__digraph__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mercury__digraph__V_22_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 0)));
            MR_Integer mercury__digraph__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 1)));
            MR_Integer mercury__digraph__V_18_18;
            MR_Word mercury__digraph__V_19_19;

{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_18_18  = Bits;
}
            {
              mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__Var_31, mercury__digraph__Var_32, mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 0, mercury__digraph__V_22_16, mercury__digraph__V_17_17, mercury__digraph__V_18_18, mercury__digraph__HeadVar__3_3, &mercury__digraph__V_19_19);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__digraph__next_value_of_HeadVar__2_2 = mercury__digraph__V_11_10;
              MR_Word mercury__digraph__next_value_of_HeadVar__3_3 = mercury__digraph__V_19_19;

              mercury__digraph__HeadVar__3_3 = mercury__digraph__next_value_of_HeadVar__3_3;
              mercury__digraph__HeadVar__2_2 = mercury__digraph__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_31,
  MR_Word mercury__digraph__Var_32,
  MR_Word mercury__digraph__Var_33,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded;

        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
            mercury__digraph__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__digraph__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__digraph__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mercury__digraph__V_22_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 0)));
            MR_Integer mercury__digraph__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 1)));
            MR_Integer mercury__digraph__V_18_18;
            MR_Word mercury__digraph__V_19_19;

{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_18_18  = Bits;
}
            {
              mercury__digraph__succeeded = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_50_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__Var_31, mercury__digraph__Var_32, mercury__digraph__Var_33, mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 0, mercury__digraph__V_22_16, mercury__digraph__V_17_17, mercury__digraph__V_18_18, mercury__digraph__HeadVar__3_3, &mercury__digraph__V_19_19);
            }
            if (mercury__digraph__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__digraph__next_value_of_HeadVar__2_2 = mercury__digraph__V_11_10;
                  MR_Word mercury__digraph__next_value_of_HeadVar__3_3 = mercury__digraph__V_19_19;

                  mercury__digraph__HeadVar__3_3 = mercury__digraph__next_value_of_HeadVar__3_3;
                  mercury__digraph__HeadVar__2_2 = mercury__digraph__next_value_of_HeadVar__2_2;
                }
                continue;
              }
          }
        return mercury__digraph__succeeded;
      }
      break;
    }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_31,
  MR_Word mercury__digraph__Var_32,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded;

        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
        else
          {
            MR_Word mercury__digraph__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__digraph__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mercury__digraph__V_22_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 0)));
            MR_Integer mercury__digraph__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 1)));
            MR_Integer mercury__digraph__V_18_18;
            MR_Word mercury__digraph__V_19_19;

{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_18_18  = Bits;
}
            {
              mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__Var_31, mercury__digraph__Var_32, mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 0, mercury__digraph__V_22_16, mercury__digraph__V_17_17, mercury__digraph__V_18_18, mercury__digraph__HeadVar__3_3, &mercury__digraph__V_19_19);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__digraph__next_value_of_HeadVar__2_2 = mercury__digraph__V_11_10;
              MR_Word mercury__digraph__next_value_of_HeadVar__3_3 = mercury__digraph__V_19_19;

              mercury__digraph__HeadVar__3_3 = mercury__digraph__next_value_of_HeadVar__3_3;
              mercury__digraph__HeadVar__2_2 = mercury__digraph__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_56_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_43,
  MR_Word mercury__digraph__Var_44,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_27,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4,
  MR_Word mercury__digraph__HeadVar__5_5,
  MR_Word * mercury__digraph__HeadVar__6_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded;

        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__digraph__HeadVar__6_6 = mercury__digraph__HeadVar__5_5;
            *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
          }
        else
          {
            MR_Word mercury__digraph__V_15_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__digraph__V_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mercury__digraph__V_32_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_15_13, (MR_Integer) 0)));
            MR_Integer mercury__digraph__V_25_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_15_13, (MR_Integer) 1)));
            MR_Integer mercury__digraph__V_26_24;
            MR_Word mercury__digraph__V_27_25;
            MR_Word mercury__digraph__V_28_26;

{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_56_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_26_24  = Bits;
}
            {
              mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_49_48_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_52_93_95_48_9_p_in__sparse_bitset_0(mercury__digraph__Var_43, mercury__digraph__Var_44, mercury__digraph__TypeClassInfo_for_enum_27, (MR_Integer) 0, mercury__digraph__V_32_22, mercury__digraph__V_25_23, mercury__digraph__V_26_24, mercury__digraph__HeadVar__3_3, &mercury__digraph__V_27_25, mercury__digraph__HeadVar__5_5, &mercury__digraph__V_28_26);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__digraph__next_value_of_HeadVar__2_2 = mercury__digraph__V_16_14;
              MR_Word mercury__digraph__next_value_of_HeadVar__3_3 = mercury__digraph__V_27_25;
              MR_Word mercury__digraph__next_value_of_HeadVar__5_5 = mercury__digraph__V_28_26;

              mercury__digraph__HeadVar__5_5 = mercury__digraph__next_value_of_HeadVar__5_5;
              mercury__digraph__HeadVar__3_3 = mercury__digraph__next_value_of_HeadVar__3_3;
              mercury__digraph__HeadVar__2_2 = mercury__digraph__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_37,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4)
{
  {
    MR_bool mercury__digraph__succeeded;

    if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
    else
      {
        MR_Word mercury__digraph__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__digraph__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__digraph__V_15_13;
        MR_Integer mercury__digraph__V_22_17;
        MR_Integer mercury__digraph__V_18_18;
        MR_Integer mercury__digraph__V_19_19;

        {
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__Var_37, mercury__digraph__TypeClassInfo_for_enum_20, mercury__digraph__V_11_10, mercury__digraph__HeadVar__3_3, &mercury__digraph__V_15_13);
        }
        mercury__digraph__V_22_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 0)));
        mercury__digraph__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 1)));
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_19_19  = Bits;
}
        {
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_52_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__Var_37, mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 1, mercury__digraph__V_22_17, mercury__digraph__V_18_18, mercury__digraph__V_19_19, mercury__digraph__V_15_13, mercury__digraph__HeadVar__4_4);
        }
      }
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_32,
  MR_Word mercury__digraph__Var_33,
  MR_Box mercury__digraph__Var_34,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4)
{
  {
    MR_bool mercury__digraph__succeeded;

    if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
    else
      {
        MR_Word mercury__digraph__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__digraph__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__digraph__V_15_13;
        MR_Integer mercury__digraph__V_22_17;
        MR_Integer mercury__digraph__V_18_18;
        MR_Integer mercury__digraph__V_19_19;

        {
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__Var_32, mercury__digraph__Var_33, mercury__digraph__Var_34, mercury__digraph__TypeClassInfo_for_enum_20, mercury__digraph__V_11_10, mercury__digraph__HeadVar__3_3, &mercury__digraph__V_15_13);
        }
        mercury__digraph__V_22_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 0)));
        mercury__digraph__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 1)));
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_19_19  = Bits;
}
        {
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_51_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__Var_32, mercury__digraph__Var_33, mercury__digraph__Var_34, mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 1, mercury__digraph__V_22_17, mercury__digraph__V_18_18, mercury__digraph__V_19_19, mercury__digraph__V_15_13, mercury__digraph__HeadVar__4_4);
        }
      }
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_56_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_42,
  MR_Word mercury__digraph__Var_43,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_27,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4,
  MR_Word mercury__digraph__HeadVar__5_5,
  MR_Word * mercury__digraph__HeadVar__6_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded;

        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__digraph__HeadVar__6_6 = mercury__digraph__HeadVar__5_5;
            *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
          }
        else
          {
            MR_Word mercury__digraph__V_15_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__digraph__V_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mercury__digraph__V_32_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_15_13, (MR_Integer) 0)));
            MR_Integer mercury__digraph__V_25_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_15_13, (MR_Integer) 1)));
            MR_Integer mercury__digraph__V_26_24;
            MR_Word mercury__digraph__V_27_25;
            MR_Word mercury__digraph__V_28_26;

{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_56_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_26_24  = Bits;
}
            {
              mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_49_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_51_93_95_48_9_p_in__sparse_bitset_0(mercury__digraph__Var_42, mercury__digraph__Var_43, mercury__digraph__TypeClassInfo_for_enum_27, (MR_Integer) 0, mercury__digraph__V_32_22, mercury__digraph__V_25_23, mercury__digraph__V_26_24, mercury__digraph__HeadVar__3_3, &mercury__digraph__V_27_25, mercury__digraph__HeadVar__5_5, &mercury__digraph__V_28_26);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__digraph__next_value_of_HeadVar__2_2 = mercury__digraph__V_16_14;
              MR_Word mercury__digraph__next_value_of_HeadVar__3_3 = mercury__digraph__V_27_25;
              MR_Word mercury__digraph__next_value_of_HeadVar__5_5 = mercury__digraph__V_28_26;

              mercury__digraph__HeadVar__5_5 = mercury__digraph__next_value_of_HeadVar__5_5;
              mercury__digraph__HeadVar__3_3 = mercury__digraph__next_value_of_HeadVar__3_3;
              mercury__digraph__HeadVar__2_2 = mercury__digraph__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_48_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_93_95_48_4_p_in__list_0(
  MR_Word mercury__digraph__Var_21,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded;

        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
        else
          {
            MR_Word mercury__digraph__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__digraph__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__digraph__V_15_13;
            MR_Box mercury__digraph__VX_24 = (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 0));
            MR_Box mercury__digraph__VY_25 = (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 1));
            MR_Word mercury__digraph__X_33;
            MR_Word mercury__digraph__Y_34;
            MR_Word mercury__digraph__STATE_VARIABLE_G_12_35;
            MR_Word mercury__digraph__STATE_VARIABLE_G_13_36;

            {
              mercury__digraph__add_vertex_4_p_0(mercury__digraph__Var_21, mercury__digraph__VX_24, &mercury__digraph__X_33, mercury__digraph__HeadVar__3_3, &mercury__digraph__STATE_VARIABLE_G_12_35);
            }
            {
              mercury__digraph__add_vertex_4_p_0(mercury__digraph__Var_21, mercury__digraph__VY_25, &mercury__digraph__Y_34, mercury__digraph__STATE_VARIABLE_G_12_35, &mercury__digraph__STATE_VARIABLE_G_13_36);
            }
            {
              mercury__digraph__add_edge_4_p_0(mercury__digraph__Var_21, mercury__digraph__X_33, mercury__digraph__Y_34, mercury__digraph__STATE_VARIABLE_G_13_36, &mercury__digraph__V_15_13);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__digraph__next_value_of_HeadVar__2_2 = mercury__digraph__V_11_10;
              MR_Word mercury__digraph__next_value_of_HeadVar__3_3 = mercury__digraph__V_15_13;

              mercury__digraph__HeadVar__3_3 = mercury__digraph__next_value_of_HeadVar__3_3;
              mercury__digraph__HeadVar__2_2 = mercury__digraph__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_55_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_6_p_in__list_0(
  MR_Word mercury__digraph__Var_34,
  MR_Word mercury__digraph__Var_35,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4,
  MR_Word mercury__digraph__HeadVar__5_5,
  MR_Word * mercury__digraph__HeadVar__6_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded;

        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__digraph__HeadVar__6_6 = mercury__digraph__HeadVar__5_5;
            *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
          }
        else
          {
            MR_Word mercury__digraph__V_15_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__digraph__V_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__digraph__V_23_19;
            MR_Word mercury__digraph__V_24_20;

            {
              mercury__digraph__dfs_2_6_p_0(mercury__digraph__Var_34, mercury__digraph__Var_35, mercury__digraph__V_15_13, mercury__digraph__HeadVar__3_3, &mercury__digraph__V_23_19, mercury__digraph__HeadVar__5_5, &mercury__digraph__V_24_20);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__digraph__next_value_of_HeadVar__2_2 = mercury__digraph__V_16_14;
              MR_Word mercury__digraph__next_value_of_HeadVar__3_3 = mercury__digraph__V_23_19;
              MR_Word mercury__digraph__next_value_of_HeadVar__5_5 = mercury__digraph__V_24_20;

              mercury__digraph__HeadVar__5_5 = mercury__digraph__next_value_of_HeadVar__5_5;
              mercury__digraph__HeadVar__3_3 = mercury__digraph__next_value_of_HeadVar__3_3;
              mercury__digraph__HeadVar__2_2 = mercury__digraph__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_4_p_in__list_0(
  MR_Word mercury__digraph__Var_29,
  MR_Word mercury__digraph__Var_30,
  MR_Word mercury__digraph__Var_31,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded;

        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
        else
          {
            MR_Word mercury__digraph__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__digraph__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__digraph__V_15_13;

            {
              mercury__digraph__add_composition_edges_5_p_0(mercury__digraph__Var_29, mercury__digraph__Var_30, mercury__digraph__Var_31, mercury__digraph__V_10_9, mercury__digraph__HeadVar__3_3, &mercury__digraph__V_15_13);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__digraph__next_value_of_HeadVar__2_2 = mercury__digraph__V_11_10;
              MR_Word mercury__digraph__next_value_of_HeadVar__3_3 = mercury__digraph__V_15_13;

              mercury__digraph__HeadVar__3_3 = mercury__digraph__next_value_of_HeadVar__3_3;
              mercury__digraph__HeadVar__2_2 = mercury__digraph__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_55_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_53_93_95_48_6_p_in__list_0(
  MR_Word mercury__digraph__Var_43,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4,
  MR_Word mercury__digraph__HeadVar__5_5,
  MR_Word * mercury__digraph__HeadVar__6_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded;

        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__digraph__HeadVar__6_6 = mercury__digraph__HeadVar__5_5;
            *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
          }
        else
          {
            MR_Word mercury__digraph__V_15_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__digraph__V_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__digraph__V_23_19;
            MR_Word mercury__digraph__V_24_20;

            {
              mercury__digraph__find_necessary_keys_5_p_0(mercury__digraph__Var_43, mercury__digraph__V_15_13, mercury__digraph__HeadVar__3_3, &mercury__digraph__V_23_19, mercury__digraph__HeadVar__5_5, &mercury__digraph__V_24_20);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__digraph__next_value_of_HeadVar__2_2 = mercury__digraph__V_16_14;
              MR_Word mercury__digraph__next_value_of_HeadVar__3_3 = mercury__digraph__V_23_19;
              MR_Word mercury__digraph__next_value_of_HeadVar__5_5 = mercury__digraph__V_24_20;

              mercury__digraph__HeadVar__5_5 = mercury__digraph__next_value_of_HeadVar__5_5;
              mercury__digraph__HeadVar__3_3 = mercury__digraph__next_value_of_HeadVar__3_3;
              mercury__digraph__HeadVar__2_2 = mercury__digraph__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_2_f_in__list_0(
  MR_Word mercury__digraph__Var_23,
  MR_Word mercury__digraph__Var_24,
  MR_Word mercury__digraph__Var_25,
  MR_Word mercury__digraph__HeadVar__2_2)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__HeadVar__3_3;

    if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__digraph__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__digraph__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0));
        MR_Word mercury__digraph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__digraph__V_8_8;
        MR_Word mercury__digraph__V_9_9;
        MR_Word mercury__digraph__Xs_35;
        MR_Word mercury__digraph__Ys_36;
        MR_Word mercury__digraph__M1_37;
        MR_Word mercury__digraph__M2_38;

        {
          mercury__digraph__lookup_key_3_p_0(mercury__digraph__Var_23, mercury__digraph__Var_24, mercury__digraph__V_6_6, &mercury__digraph__M1_37);
        }
        {
          mercury__digraph__lookup_key_set_to_3_p_0(mercury__digraph__Var_23, mercury__digraph__Var_24, mercury__digraph__M1_37, &mercury__digraph__Xs_35);
        }
        {
          mercury__digraph__lookup_key_3_p_0(mercury__digraph__Var_23, mercury__digraph__Var_25, mercury__digraph__V_6_6, &mercury__digraph__M2_38);
        }
        {
          mercury__digraph__lookup_key_set_from_3_p_0(mercury__digraph__Var_23, mercury__digraph__Var_25, mercury__digraph__M2_38, &mercury__digraph__Ys_36);
        }
        {
          mercury__digraph__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__digraph__V_8_8, 0) = ((MR_Box) (mercury__digraph__Xs_35));
          MR_hl_field(MR_mktag(0), mercury__digraph__V_8_8, 1) = ((MR_Box) (mercury__digraph__Ys_36));
        }
        {
          mercury__digraph__V_9_9 = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_2_f_in__list_0(mercury__digraph__Var_23, mercury__digraph__Var_24, mercury__digraph__Var_25, mercury__digraph__V_7_7);
        }
        {
          mercury__digraph__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__3_3, 0) = ((MR_Box) (mercury__digraph__V_8_8));
          MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__3_3, 1) = ((MR_Box) (mercury__digraph__V_9_9));
        }
      }
    return mercury__digraph__HeadVar__3_3;
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_55_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word mercury__digraph__Var_28,
  MR_Word mercury__digraph__Var_29,
  MR_Word mercury__digraph__TypeClassInfo_for_enum_13,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__V_11_9,
  MR_Word * mercury__digraph__V_12_10,
  MR_Word mercury__digraph__V_13_11,
  MR_Word * mercury__digraph__V_14_12)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__V_8_8 = (MR_Word) mercury__digraph__HeadVar__2_2;

    {
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_56_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(mercury__digraph__Var_28, mercury__digraph__Var_29, mercury__digraph__TypeClassInfo_for_enum_13, mercury__digraph__V_8_8, mercury__digraph__V_11_9, mercury__digraph__V_12_10, mercury__digraph__V_13_11, mercury__digraph__V_14_12);
    }
  }
}

static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_52_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__list_0(
  MR_Word mercury__digraph__Var_22,
  MR_Word mercury__digraph__Var_23,
  MR_Word mercury__digraph__Var_24,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word * mercury__digraph__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded;

        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
            mercury__digraph__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__digraph__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__digraph__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__digraph__V_15_13;

            {
              mercury__digraph__succeeded = mercury__digraph__is_dag_2_5_p_0(mercury__digraph__Var_22, mercury__digraph__Var_23, mercury__digraph__Var_24, mercury__digraph__V_10_9, mercury__digraph__HeadVar__3_3, &mercury__digraph__V_15_13);
            }
            if (mercury__digraph__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__digraph__next_value_of_HeadVar__2_2 = mercury__digraph__V_11_10;
                  MR_Word mercury__digraph__next_value_of_HeadVar__3_3 = mercury__digraph__V_15_13;

                  mercury__digraph__HeadVar__3_3 = mercury__digraph__next_value_of_HeadVar__3_3;
                  mercury__digraph__HeadVar__2_2 = mercury__digraph__next_value_of_HeadVar__2_2;
                }
                continue;
              }
          }
        return mercury__digraph__succeeded;
      }
      break;
    }
}

static MR_Word MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_51_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_2_f_in__list_0(
  MR_Word mercury__digraph__Var_14,
  MR_Word mercury__digraph__Var_15,
  MR_Word mercury__digraph__HeadVar__2_2)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__HeadVar__3_3;

    if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__digraph__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__digraph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__digraph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
        MR_Box mercury__digraph__V_8_8;
        MR_Word mercury__digraph__V_9_9;

        {
          mercury__digraph__lookup_vertex_3_p_0(mercury__digraph__Var_14, mercury__digraph__Var_15, mercury__digraph__V_6_6, &mercury__digraph__V_8_8);
        }
        {
          mercury__digraph__V_9_9 = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_51_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_2_f_in__list_0(mercury__digraph__Var_14, mercury__digraph__Var_15, mercury__digraph__V_7_7);
        }
        {
          mercury__digraph__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__3_3, 0) = mercury__digraph__V_8_8;
          MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__3_3, 1) = ((MR_Box) (mercury__digraph__V_9_9));
        }
      }
    return mercury__digraph__HeadVar__3_3;
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_95_104_111_54_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__set_0(
  MR_Word mercury__digraph__Var_22,
  MR_Word mercury__digraph__Var_23,
  MR_Word mercury__digraph__V_6_6,
  MR_Word mercury__digraph__V_8_7,
  MR_Word * mercury__digraph__V_9_8)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__V_10_46 = (MR_Word) mercury__digraph__V_6_6;

    {
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(mercury__digraph__Var_22, mercury__digraph__Var_23, mercury__digraph__V_10_46, mercury__digraph__V_8_7, mercury__digraph__V_9_8);
    }
  }
}

static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_54_53_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
  MR_Word mercury__digraph__Var_14,
  MR_Word mercury__digraph__Var_15,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word * mercury__digraph__HeadVar__3_3)
{
  {
    MR_bool mercury__digraph__succeeded;

    if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__digraph__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__digraph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__digraph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
        MR_Box mercury__digraph__V_8_8;
        MR_Word mercury__digraph__V_9_9;

        {
          mercury__digraph__lookup_vertex_3_p_0(mercury__digraph__Var_14, mercury__digraph__Var_15, mercury__digraph__V_6_6, &mercury__digraph__V_8_8);
        }
        {
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_54_53_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(mercury__digraph__Var_14, mercury__digraph__Var_15, mercury__digraph__V_7_7, &mercury__digraph__V_9_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__digraph__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__digraph__V_8_8;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__digraph__V_9_9));
        }
      }
  }
}

static MR_Integer MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__digraph__succeeded;

    return (MR_Integer) 1200;
  }
}

static void MR_CALL 
mercury__digraph__IntroducedFrom__pred__add_cartesian_product__1128__1_5_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_23,
  MR_Word mercury__digraph__KeySet2_6,
  MR_Word mercury__digraph__LambdaHeadVar__1_13,
  MR_Word mercury__digraph__LambdaHeadVar__2_14,
  MR_Word * mercury__digraph__LambdaHeadVar__3_15)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_27_27 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeInfo_28_28;
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_29 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
    MR_Word mercury__digraph__TypeClassInfo_for_enum_30;
    MR_Word mercury__digraph__V_6_42;

    {
      mercury__digraph__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_28_28, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_27_27));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_28_28, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_23));
    }
    {
      mercury__digraph__TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_30, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_29));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_30, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_23));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_30, 2) = ((MR_Box) (mercury__digraph__TypeInfo_28_28));
    }
    mercury__digraph__V_6_42 = (MR_Word) mercury__digraph__KeySet2_6;
    {
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_57_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_23, mercury__digraph__LambdaHeadVar__1_13, mercury__digraph__TypeClassInfo_for_enum_30, mercury__digraph__V_6_42, mercury__digraph__LambdaHeadVar__2_14, mercury__digraph__LambdaHeadVar__3_15);
    }
  }
}

MR_bool MR_CALL 
mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__from_int_1_1_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_5,
  MR_Integer mercury__digraph__Int_4,
  MR_Word * mercury__digraph__HeadVar__2_2)
{
  {
    *mercury__digraph__HeadVar__2_2 = (MR_Word) mercury__digraph__Int_4;
    return MR_TRUE;
  }
}

MR_Integer MR_CALL 
mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__to_int_1_1_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_5,
  MR_Word mercury__digraph__HeadVar__1_1)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Integer mercury__digraph__Int_4 = (MR_Integer) mercury__digraph__HeadVar__1_1;

    return mercury__digraph__Int_4;
  }
}

void MR_CALL 
mercury__digraph____Compare____key_set_map_1_0(
  MR_Word mercury__digraph__TypeInfo_for_T_6,
  MR_Word * mercury__digraph__HeadVar__1_1,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_7_7 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__digraph__TypeCtorInfo_8_8 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeInfo_9_9;
    MR_Word mercury__digraph__TypeCtorInfo_10_10 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    MR_Word mercury__digraph__TypeInfo_11_11;
    MR_Word mercury__digraph__Cast_HeadVar1_4 = mercury__digraph__HeadVar__2_2;
    MR_Word mercury__digraph__Cast_HeadVar2_5 = mercury__digraph__HeadVar__3_3;

    {
      mercury__digraph__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_8_8));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_6));
    }
    {
      mercury__digraph__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_11, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_10));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_11, 1) = ((MR_Box) (mercury__digraph__TypeInfo_9_9));
    }
    {
      mercury__tree234____Compare____tree234_2_0(mercury__digraph__TypeCtorInfo_7_7, mercury__digraph__TypeInfo_11_11, mercury__digraph__HeadVar__1_1, mercury__digraph__Cast_HeadVar1_4, mercury__digraph__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__digraph____Unify____key_set_map_1_0(
  MR_Word mercury__digraph__TypeInfo_for_T_5,
  MR_Word mercury__digraph__HeadVar__1_1,
  MR_Word mercury__digraph__HeadVar__2_2)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__digraph__TypeCtorInfo_7_7 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeInfo_8_8;
    MR_Word mercury__digraph__TypeCtorInfo_9_9 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    MR_Word mercury__digraph__TypeInfo_10_10;
    MR_Word mercury__digraph__Cast_HeadVar1_3 = mercury__digraph__HeadVar__1_1;
    MR_Word mercury__digraph__Cast_HeadVar2_4 = mercury__digraph__HeadVar__2_2;

    {
      mercury__digraph__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_5));
    }
    {
      mercury__digraph__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_9_9));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 1) = ((MR_Box) (mercury__digraph__TypeInfo_8_8));
    }
    {
      mercury__digraph__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__digraph__TypeCtorInfo_6_6, mercury__digraph__TypeInfo_10_10, mercury__digraph__Cast_HeadVar1_3, mercury__digraph__Cast_HeadVar2_4);
    }
    return mercury__digraph__succeeded;
  }
}

void MR_CALL 
mercury__digraph____Compare____key_map_1_0(
  MR_Word mercury__digraph__TypeInfo_for_T_6,
  MR_Word * mercury__digraph__HeadVar__1_1,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_7_7 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__digraph__TypeCtorInfo_8_8 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeInfo_9_9;
    MR_Word mercury__digraph__Cast_HeadVar1_4 = mercury__digraph__HeadVar__2_2;
    MR_Word mercury__digraph__Cast_HeadVar2_5 = mercury__digraph__HeadVar__3_3;

    {
      mercury__digraph__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_8_8));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_6));
    }
    {
      mercury__tree234____Compare____tree234_2_0(mercury__digraph__TypeCtorInfo_7_7, mercury__digraph__TypeInfo_9_9, mercury__digraph__HeadVar__1_1, mercury__digraph__Cast_HeadVar1_4, mercury__digraph__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__digraph____Unify____key_map_1_0(
  MR_Word mercury__digraph__TypeInfo_for_T_5,
  MR_Word mercury__digraph__HeadVar__1_1,
  MR_Word mercury__digraph__HeadVar__2_2)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__digraph__TypeCtorInfo_7_7 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeInfo_8_8;
    MR_Word mercury__digraph__Cast_HeadVar1_3 = mercury__digraph__HeadVar__1_1;
    MR_Word mercury__digraph__Cast_HeadVar2_4 = mercury__digraph__HeadVar__2_2;

    {
      mercury__digraph__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_5));
    }
    {
      mercury__digraph__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__digraph__TypeCtorInfo_6_6, mercury__digraph__TypeInfo_8_8, mercury__digraph__Cast_HeadVar1_3, mercury__digraph__Cast_HeadVar2_4);
    }
    return mercury__digraph__succeeded;
  }
}

void MR_CALL 
mercury__digraph____Compare____digraph_key_set_1_0(
  MR_Word mercury__digraph__TypeInfo_for_T_6,
  MR_Word * mercury__digraph__HeadVar__1_1,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_7_7 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeInfo_8_8;
    MR_Word mercury__digraph__Cast_HeadVar1_4 = mercury__digraph__HeadVar__2_2;
    MR_Word mercury__digraph__Cast_HeadVar2_5 = mercury__digraph__HeadVar__3_3;

    {
      mercury__digraph__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_6));
    }
    {
      mercury__sparse_bitset____Compare____sparse_bitset_1_0(mercury__digraph__TypeInfo_8_8, mercury__digraph__HeadVar__1_1, (MR_Word) mercury__digraph__Cast_HeadVar1_4, (MR_Word) mercury__digraph__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__digraph____Unify____digraph_key_set_1_0(
  MR_Word mercury__digraph__TypeInfo_for_T_5,
  MR_Word mercury__digraph__HeadVar__1_1,
  MR_Word mercury__digraph__HeadVar__2_2)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_6_6 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeInfo_7_7;
    MR_Word mercury__digraph__Cast_HeadVar1_3 = mercury__digraph__HeadVar__1_1;
    MR_Word mercury__digraph__Cast_HeadVar2_4 = mercury__digraph__HeadVar__2_2;

    {
      mercury__digraph__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_7_7, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_6_6));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_7_7, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_5));
    }
    {
      mercury__digraph__succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(mercury__digraph__TypeInfo_7_7, (MR_Word) mercury__digraph__Cast_HeadVar1_3, (MR_Word) mercury__digraph__Cast_HeadVar2_4);
    }
    return mercury__digraph__succeeded;
  }
}

void MR_CALL 
mercury__digraph____Compare____digraph_key_1_0(
  MR_Word mercury__digraph__TypeInfo_for_T_8,
  MR_Word * mercury__digraph__HeadVar__1_1,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Integer mercury__digraph__CastX_6 = (MR_Integer) mercury__digraph__HeadVar__2_2;
    MR_Integer mercury__digraph__CastY_7 = (MR_Integer) mercury__digraph__HeadVar__3_3;

    mercury__digraph__succeeded = (mercury__digraph__CastX_6 == mercury__digraph__CastY_7);
    if (mercury__digraph__succeeded)
      *mercury__digraph__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer mercury__digraph__Var_4 = (MR_Integer) mercury__digraph__HeadVar__2_2;
        MR_Integer mercury__digraph__Var_5 = (MR_Integer) mercury__digraph__HeadVar__3_3;

        mercury__digraph__succeeded = (mercury__digraph__Var_4 < mercury__digraph__Var_5);
        if (mercury__digraph__succeeded)
          *mercury__digraph__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            mercury__digraph__succeeded = (mercury__digraph__Var_4 == mercury__digraph__Var_5);
            if (mercury__digraph__succeeded)
              *mercury__digraph__HeadVar__1_1 = (MR_Integer) 0;
            else
              *mercury__digraph__HeadVar__1_1 = (MR_Integer) 2;
          }
      }
  }
}

MR_bool MR_CALL 
mercury__digraph____Unify____digraph_key_1_0(
  MR_Word mercury__digraph__TypeInfo_for_T_7,
  MR_Word mercury__digraph__HeadVar__1_1,
  MR_Word mercury__digraph__HeadVar__2_2)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Integer mercury__digraph__CastX_5 = (MR_Integer) mercury__digraph__HeadVar__1_1;
    MR_Integer mercury__digraph__CastY_6 = (MR_Integer) mercury__digraph__HeadVar__2_2;

    mercury__digraph__succeeded = (mercury__digraph__CastX_5 == mercury__digraph__CastY_6);
    if (mercury__digraph__succeeded)
      mercury__digraph__succeeded = MR_TRUE;
    else
      {
        MR_Integer mercury__digraph__Var_3 = (MR_Integer) mercury__digraph__HeadVar__1_1;
        MR_Integer mercury__digraph__Var_4 = (MR_Integer) mercury__digraph__HeadVar__2_2;

        mercury__digraph__succeeded = (mercury__digraph__Var_3 == mercury__digraph__Var_4);
      }
    return mercury__digraph__succeeded;
  }
}

void MR_CALL 
mercury__digraph____Compare____digraph_1_0(
  MR_Word mercury__digraph__TypeInfo_for_T_17,
  MR_Word * mercury__digraph__HeadVar__1_1,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Integer mercury__digraph__CastX_15 = (MR_Integer) mercury__digraph__HeadVar__2_2;
    MR_Integer mercury__digraph__CastY_16 = (MR_Integer) mercury__digraph__HeadVar__3_3;

    mercury__digraph__succeeded = (mercury__digraph__CastX_15 == mercury__digraph__CastY_16);
    if (mercury__digraph__succeeded)
      *mercury__digraph__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer mercury__digraph__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__digraph__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__digraph__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mercury__digraph__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer mercury__digraph__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mercury__digraph__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mercury__digraph__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mercury__digraph__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word mercury__digraph__Var_12;

        mercury__digraph__succeeded = (mercury__digraph__Var_4 < mercury__digraph__Var_8);
        if (mercury__digraph__succeeded)
          mercury__digraph__Var_12 = (MR_Integer) 1;
        else
          {
            mercury__digraph__succeeded = (mercury__digraph__Var_4 == mercury__digraph__Var_8);
            if (mercury__digraph__succeeded)
              mercury__digraph__Var_12 = (MR_Integer) 0;
            else
              mercury__digraph__Var_12 = (MR_Integer) 2;
          }
        mercury__digraph__succeeded = (mercury__digraph__Var_12 == (MR_Integer) 0);
        mercury__digraph__succeeded = !(mercury__digraph__succeeded);
        if (mercury__digraph__succeeded)
          *mercury__digraph__HeadVar__1_1 = mercury__digraph__Var_12;
        else
          {
            MR_Word mercury__digraph__Var_13;
            MR_Word mercury__digraph__TypeCtorInfo_19_19 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
            MR_Word mercury__digraph__TypeInfo_20_20;

            {
              mercury__digraph__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_20_20, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_19_19));
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_20_20, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
            }
            {
              mercury__bimap____Compare____bimap_2_0(mercury__digraph__TypeInfo_for_T_17, mercury__digraph__TypeInfo_20_20, &mercury__digraph__Var_13, mercury__digraph__Var_5, mercury__digraph__Var_9);
            }
            mercury__digraph__succeeded = (mercury__digraph__Var_13 == (MR_Integer) 0);
            mercury__digraph__succeeded = !(mercury__digraph__succeeded);
            if (mercury__digraph__succeeded)
              *mercury__digraph__HeadVar__1_1 = mercury__digraph__Var_13;
            else
              {
                MR_Word mercury__digraph__Var_14;
                MR_Word mercury__digraph__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                MR_Word mercury__digraph__TypeCtorInfo_24_24 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
                MR_Word mercury__digraph__TypeInfo_25_25;
                MR_Word mercury__digraph__TypeCtorInfo_26_26 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
                MR_Word mercury__digraph__TypeInfo_27_27;

                {
                  mercury__digraph__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_24_24));
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
                }
                {
                  mercury__digraph__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_26_26));
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 1) = ((MR_Box) (mercury__digraph__TypeInfo_25_25));
                }
                {
                  mercury__tree234____Compare____tree234_2_0(mercury__digraph__TypeCtorInfo_23_23, mercury__digraph__TypeInfo_27_27, &mercury__digraph__Var_14, mercury__digraph__Var_6, mercury__digraph__Var_10);
                }
                mercury__digraph__succeeded = (mercury__digraph__Var_14 == (MR_Integer) 0);
                mercury__digraph__succeeded = !(mercury__digraph__succeeded);
                if (mercury__digraph__succeeded)
                  *mercury__digraph__HeadVar__1_1 = mercury__digraph__Var_14;
                else
                  {
                    MR_Word mercury__digraph__TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                    MR_Word mercury__digraph__TypeCtorInfo_31_31 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
                    MR_Word mercury__digraph__TypeInfo_32_32;
                    MR_Word mercury__digraph__TypeCtorInfo_33_33 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
                    MR_Word mercury__digraph__TypeInfo_34_34;

                    {
                      mercury__digraph__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_32_32, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_31_31));
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_32_32, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
                    }
                    {
                      mercury__digraph__TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_34_34, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_33_33));
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_34_34, 1) = ((MR_Box) (mercury__digraph__TypeInfo_32_32));
                    }
                    {
                      mercury__tree234____Compare____tree234_2_0(mercury__digraph__TypeCtorInfo_30_30, mercury__digraph__TypeInfo_34_34, mercury__digraph__HeadVar__1_1, mercury__digraph__Var_7, mercury__digraph__Var_11);
                    }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__digraph____Unify____digraph_1_0(
  MR_Word mercury__digraph__TypeInfo_for_T_13,
  MR_Word mercury__digraph__HeadVar__1_1,
  MR_Word mercury__digraph__HeadVar__2_2)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Integer mercury__digraph__CastX_11 = (MR_Integer) mercury__digraph__HeadVar__1_1;
    MR_Integer mercury__digraph__CastY_12 = (MR_Integer) mercury__digraph__HeadVar__2_2;

    mercury__digraph__succeeded = (mercury__digraph__CastX_11 == mercury__digraph__CastY_12);
    if (mercury__digraph__succeeded)
      mercury__digraph__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__digraph__TypeCtorInfo_14_14;
        MR_Word mercury__digraph__TypeCtorInfo_18_18;
        MR_Word mercury__digraph__TypeCtorInfo_21_21;
        MR_Word mercury__digraph__TypeInfo_27_27;
        MR_Word mercury__digraph__TypeInfo_29_29;
        MR_Integer mercury__digraph__Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__digraph__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__digraph__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mercury__digraph__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer mercury__digraph__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__digraph__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__digraph__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mercury__digraph__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__2_2, (MR_Integer) 3)));

        mercury__digraph__succeeded = (mercury__digraph__Var_3 == mercury__digraph__Var_7);
        if (mercury__digraph__succeeded)
          {
            mercury__digraph__TypeCtorInfo_14_14 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
            {
              mercury__digraph__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
            }
            {
              mercury__digraph__succeeded = mercury__bimap____Unify____bimap_2_0(mercury__digraph__TypeInfo_for_T_13, mercury__digraph__TypeInfo_27_27, mercury__digraph__Var_4, mercury__digraph__Var_8);
            }
            if (mercury__digraph__succeeded)
              {
                mercury__digraph__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                mercury__digraph__TypeCtorInfo_21_21 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
                {
                  mercury__digraph__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_21_21));
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 1) = ((MR_Box) (mercury__digraph__TypeInfo_27_27));
                }
                {
                  mercury__digraph__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__digraph__TypeCtorInfo_18_18, mercury__digraph__TypeInfo_29_29, mercury__digraph__Var_5, mercury__digraph__Var_9);
                }
                if (mercury__digraph__succeeded)
                  {
                    mercury__digraph__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__digraph__TypeCtorInfo_18_18, mercury__digraph__TypeInfo_29_29, mercury__digraph__Var_6, mercury__digraph__Var_10);
                  }
              }
          }
      }
    return mercury__digraph__succeeded;
  }
}

void MR_CALL 
mercury__digraph____Compare____clique_map_1_0(
  MR_Word mercury__digraph__TypeInfo_for_T_6,
  MR_Word * mercury__digraph__HeadVar__1_1,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__HeadVar__3_3)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_7_7 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeInfo_8_8;
    MR_Word mercury__digraph__TypeCtorInfo_9_9;
    MR_Word mercury__digraph__TypeInfo_10_10;
    MR_Word mercury__digraph__TypeInfo_11_11;
    MR_Word mercury__digraph__Cast_HeadVar1_4 = mercury__digraph__HeadVar__2_2;
    MR_Word mercury__digraph__Cast_HeadVar2_5 = mercury__digraph__HeadVar__3_3;

    {
      mercury__digraph__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_6));
    }
    mercury__digraph__TypeCtorInfo_9_9 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
    {
      mercury__digraph__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_9_9));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_6));
    }
    {
      mercury__digraph__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_11, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_11, 1) = ((MR_Box) (mercury__digraph__TypeInfo_10_10));
    }
    {
      mercury__tree234____Compare____tree234_2_0(mercury__digraph__TypeInfo_8_8, mercury__digraph__TypeInfo_11_11, mercury__digraph__HeadVar__1_1, (MR_Word) mercury__digraph__Cast_HeadVar1_4, (MR_Word) mercury__digraph__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__digraph____Unify____clique_map_1_0(
  MR_Word mercury__digraph__TypeInfo_for_T_5,
  MR_Word mercury__digraph__HeadVar__1_1,
  MR_Word mercury__digraph__HeadVar__2_2)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_6_6 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeInfo_7_7;
    MR_Word mercury__digraph__TypeCtorInfo_8_8 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
    MR_Word mercury__digraph__TypeInfo_9_9;
    MR_Word mercury__digraph__TypeInfo_10_10;
    MR_Word mercury__digraph__Cast_HeadVar1_3 = mercury__digraph__HeadVar__1_1;
    MR_Word mercury__digraph__Cast_HeadVar2_4 = mercury__digraph__HeadVar__2_2;

    {
      mercury__digraph__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_7_7, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_6_6));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_7_7, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_5));
    }
    {
      mercury__digraph__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_8_8));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_5));
    }
    {
      mercury__digraph__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_6_6));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 1) = ((MR_Box) (mercury__digraph__TypeInfo_9_9));
    }
    {
      mercury__digraph__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__digraph__TypeInfo_7_7, mercury__digraph__TypeInfo_10_10, (MR_Word) mercury__digraph__Cast_HeadVar1_3, (MR_Word) mercury__digraph__Cast_HeadVar2_4);
    }
    return mercury__digraph__succeeded;
  }
}

void MR_CALL 
mercury__digraph__traverse_children_6_p_1(
  MR_Word mercury__digraph__TypeInfo_for_T_24,
  MR_Word mercury__digraph__TypeInfo_for_A_25,
  MR_Word mercury__digraph__Graph_1,
  MR_Word mercury__digraph__ProcessEdge_2,
  MR_Box mercury__digraph__Parent_3,
  MR_Word mercury__digraph__HeadVar__4_4,
  MR_Box mercury__digraph__STATE_VARIABLE_Acc_0_5,
  MR_Box * mercury__digraph__STATE_VARIABLE_Acc_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded;

        if ((mercury__digraph__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__digraph__STATE_VARIABLE_Acc_6 = mercury__digraph__STATE_VARIABLE_Acc_0_5;
        else
          {
            MR_Word mercury__digraph__ChildKey_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word mercury__digraph__ChildKeys_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__4_4, (MR_Integer) 1)));
            MR_Box mercury__digraph__Child_19;
            MR_Box mercury__digraph__STATE_VARIABLE_Acc_22_22;
            void MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              mercury__digraph__lookup_vertex_3_p_0(mercury__digraph__TypeInfo_for_T_24, mercury__digraph__Graph_1, mercury__digraph__ChildKey_16, &mercury__digraph__Child_19);
            }
            mercury__digraph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__digraph__ProcessEdge_2, (MR_Integer) 1)));
            {
              mercury__digraph__func_0(((MR_Box) mercury__digraph__ProcessEdge_2), mercury__digraph__Parent_3, mercury__digraph__Child_19, mercury__digraph__STATE_VARIABLE_Acc_0_5, &mercury__digraph__STATE_VARIABLE_Acc_22_22);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__digraph__next_value_of_HeadVar__4_4 = mercury__digraph__ChildKeys_17;
              MR_Box mercury__digraph__next_value_of_STATE_VARIABLE_Acc_0_5 = mercury__digraph__STATE_VARIABLE_Acc_22_22;

              mercury__digraph__STATE_VARIABLE_Acc_0_5 = mercury__digraph__next_value_of_STATE_VARIABLE_Acc_0_5;
              mercury__digraph__HeadVar__4_4 = mercury__digraph__next_value_of_HeadVar__4_4;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__digraph__traverse_children_6_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_24,
  MR_Word mercury__digraph__TypeInfo_for_A_25,
  MR_Word mercury__digraph__Graph_1,
  MR_Word mercury__digraph__ProcessEdge_2,
  MR_Box mercury__digraph__Parent_3,
  MR_Word mercury__digraph__HeadVar__4_4,
  MR_Box mercury__digraph__STATE_VARIABLE_Acc_0_5,
  MR_Box * mercury__digraph__STATE_VARIABLE_Acc_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded;

        if ((mercury__digraph__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__digraph__STATE_VARIABLE_Acc_6 = mercury__digraph__STATE_VARIABLE_Acc_0_5;
        else
          {
            MR_Word mercury__digraph__ChildKey_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word mercury__digraph__ChildKeys_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__4_4, (MR_Integer) 1)));
            MR_Box mercury__digraph__Child_19;
            MR_Box mercury__digraph__STATE_VARIABLE_Acc_22_22;
            void MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              mercury__digraph__lookup_vertex_3_p_0(mercury__digraph__TypeInfo_for_T_24, mercury__digraph__Graph_1, mercury__digraph__ChildKey_16, &mercury__digraph__Child_19);
            }
            mercury__digraph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__digraph__ProcessEdge_2, (MR_Integer) 1)));
            {
              mercury__digraph__func_0(((MR_Box) mercury__digraph__ProcessEdge_2), mercury__digraph__Parent_3, mercury__digraph__Child_19, mercury__digraph__STATE_VARIABLE_Acc_0_5, &mercury__digraph__STATE_VARIABLE_Acc_22_22);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__digraph__next_value_of_HeadVar__4_4 = mercury__digraph__ChildKeys_17;
              MR_Box mercury__digraph__next_value_of_STATE_VARIABLE_Acc_0_5 = mercury__digraph__STATE_VARIABLE_Acc_22_22;

              mercury__digraph__STATE_VARIABLE_Acc_0_5 = mercury__digraph__next_value_of_STATE_VARIABLE_Acc_0_5;
              mercury__digraph__HeadVar__4_4 = mercury__digraph__next_value_of_HeadVar__4_4;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__digraph__traverse_2_6_p_1(
  MR_Word mercury__digraph__TypeInfo_for_T_27,
  MR_Word mercury__digraph__TypeInfo_for_A_28,
  MR_Word mercury__digraph__Graph_1,
  MR_Word mercury__digraph__ProcessVertex_2,
  MR_Word mercury__digraph__ProcessEdge_3,
  MR_Word mercury__digraph__HeadVar__4_4,
  MR_Box mercury__digraph__STATE_VARIABLE_Acc_0_5,
  MR_Box * mercury__digraph__STATE_VARIABLE_Acc_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded;

        if ((mercury__digraph__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__digraph__STATE_VARIABLE_Acc_6 = mercury__digraph__STATE_VARIABLE_Acc_0_5;
        else
          {
            MR_Word mercury__digraph__VertexKey_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word mercury__digraph__VertexKeys_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__4_4, (MR_Integer) 1)));
            MR_Box mercury__digraph__Vertex_19;
            MR_Word mercury__digraph__ChildrenKeys_20;
            MR_Box mercury__digraph__STATE_VARIABLE_Acc_23_23;
            MR_Word mercury__digraph__Var_24;
            MR_Box mercury__digraph__STATE_VARIABLE_Acc_25_25;
            void MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              mercury__digraph__lookup_vertex_3_p_0(mercury__digraph__TypeInfo_for_T_27, mercury__digraph__Graph_1, mercury__digraph__VertexKey_16, &mercury__digraph__Vertex_19);
            }
            mercury__digraph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__digraph__ProcessVertex_2, (MR_Integer) 1)));
            {
              mercury__digraph__func_0(((MR_Box) mercury__digraph__ProcessVertex_2), mercury__digraph__Vertex_19, mercury__digraph__STATE_VARIABLE_Acc_0_5, &mercury__digraph__STATE_VARIABLE_Acc_23_23);
            }
            {
              mercury__digraph__lookup_from_3_p_0(mercury__digraph__TypeInfo_for_T_27, mercury__digraph__Graph_1, mercury__digraph__VertexKey_16, &mercury__digraph__Var_24);
            }
            mercury__digraph__ChildrenKeys_20 = (MR_Word) mercury__digraph__Var_24;
            {
              mercury__digraph__traverse_children_6_p_1(mercury__digraph__TypeInfo_for_T_27, mercury__digraph__TypeInfo_for_A_28, mercury__digraph__Graph_1, mercury__digraph__ProcessEdge_3, mercury__digraph__Vertex_19, mercury__digraph__ChildrenKeys_20, mercury__digraph__STATE_VARIABLE_Acc_23_23, &mercury__digraph__STATE_VARIABLE_Acc_25_25);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__digraph__next_value_of_HeadVar__4_4 = mercury__digraph__VertexKeys_17;
              MR_Box mercury__digraph__next_value_of_STATE_VARIABLE_Acc_0_5 = mercury__digraph__STATE_VARIABLE_Acc_25_25;

              mercury__digraph__STATE_VARIABLE_Acc_0_5 = mercury__digraph__next_value_of_STATE_VARIABLE_Acc_0_5;
              mercury__digraph__HeadVar__4_4 = mercury__digraph__next_value_of_HeadVar__4_4;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__digraph__traverse_2_6_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_27,
  MR_Word mercury__digraph__TypeInfo_for_A_28,
  MR_Word mercury__digraph__Graph_1,
  MR_Word mercury__digraph__ProcessVertex_2,
  MR_Word mercury__digraph__ProcessEdge_3,
  MR_Word mercury__digraph__HeadVar__4_4,
  MR_Box mercury__digraph__STATE_VARIABLE_Acc_0_5,
  MR_Box * mercury__digraph__STATE_VARIABLE_Acc_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded;

        if ((mercury__digraph__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__digraph__STATE_VARIABLE_Acc_6 = mercury__digraph__STATE_VARIABLE_Acc_0_5;
        else
          {
            MR_Word mercury__digraph__VertexKey_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word mercury__digraph__VertexKeys_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__4_4, (MR_Integer) 1)));
            MR_Box mercury__digraph__Vertex_19;
            MR_Word mercury__digraph__ChildrenKeys_20;
            MR_Box mercury__digraph__STATE_VARIABLE_Acc_23_23;
            MR_Word mercury__digraph__Var_24;
            MR_Box mercury__digraph__STATE_VARIABLE_Acc_25_25;
            void MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              mercury__digraph__lookup_vertex_3_p_0(mercury__digraph__TypeInfo_for_T_27, mercury__digraph__Graph_1, mercury__digraph__VertexKey_16, &mercury__digraph__Vertex_19);
            }
            mercury__digraph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__digraph__ProcessVertex_2, (MR_Integer) 1)));
            {
              mercury__digraph__func_0(((MR_Box) mercury__digraph__ProcessVertex_2), mercury__digraph__Vertex_19, mercury__digraph__STATE_VARIABLE_Acc_0_5, &mercury__digraph__STATE_VARIABLE_Acc_23_23);
            }
            {
              mercury__digraph__lookup_from_3_p_0(mercury__digraph__TypeInfo_for_T_27, mercury__digraph__Graph_1, mercury__digraph__VertexKey_16, &mercury__digraph__Var_24);
            }
            mercury__digraph__ChildrenKeys_20 = (MR_Word) mercury__digraph__Var_24;
            {
              mercury__digraph__traverse_children_6_p_0(mercury__digraph__TypeInfo_for_T_27, mercury__digraph__TypeInfo_for_A_28, mercury__digraph__Graph_1, mercury__digraph__ProcessEdge_3, mercury__digraph__Vertex_19, mercury__digraph__ChildrenKeys_20, mercury__digraph__STATE_VARIABLE_Acc_23_23, &mercury__digraph__STATE_VARIABLE_Acc_25_25);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__digraph__next_value_of_HeadVar__4_4 = mercury__digraph__VertexKeys_17;
              MR_Box mercury__digraph__next_value_of_STATE_VARIABLE_Acc_0_5 = mercury__digraph__STATE_VARIABLE_Acc_25_25;

              mercury__digraph__STATE_VARIABLE_Acc_0_5 = mercury__digraph__next_value_of_STATE_VARIABLE_Acc_0_5;
              mercury__digraph__HeadVar__4_4 = mercury__digraph__next_value_of_HeadVar__4_4;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__digraph__add_cartesian_product_4_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_23,
  MR_Word mercury__digraph__KeySet1_5,
  MR_Word mercury__digraph__KeySet2_6,
  MR_Word mercury__digraph__STATE_VARIABLE_Rtc_0_9,
  MR_Word * mercury__digraph__STATE_VARIABLE_Rtc_10)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_33_33 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeInfo_34_34;
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_35 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
    MR_Word mercury__digraph__TypeClassInfo_for_enum_36;
    MR_Word mercury__digraph__V_6_42;

    {
      mercury__digraph__TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_34_34, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_33_33));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_34_34, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_23));
    }
    {
      mercury__digraph__TypeClassInfo_for_enum_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_36, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_35));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_36, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_23));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_36, 2) = ((MR_Box) (mercury__digraph__TypeInfo_34_34));
    }
    mercury__digraph__V_6_42 = (MR_Word) mercury__digraph__KeySet1_5;
    {
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_23, mercury__digraph__KeySet2_6, mercury__digraph__TypeClassInfo_for_enum_36, mercury__digraph__V_6_42, mercury__digraph__STATE_VARIABLE_Rtc_0_9, mercury__digraph__STATE_VARIABLE_Rtc_10);
    }
  }
}

static void MR_CALL 
mercury__digraph__rtc_2_5_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_30,
  MR_Word mercury__digraph__HeadVar__1_1,
  MR_Word mercury__digraph__G_2,
  MR_Word mercury__digraph__STATE_VARIABLE_Vis_0_3,
  MR_Word mercury__digraph__STATE_VARIABLE_Rtc_0_4,
  MR_Word * mercury__digraph__STATE_VARIABLE_Rtc_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded;

        if ((mercury__digraph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__digraph__STATE_VARIABLE_Rtc_5 = mercury__digraph__STATE_VARIABLE_Rtc_0_4;
        else
          {
            MR_Word mercury__digraph__X_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__digraph__Xs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__digraph__STATE_VARIABLE_Vis_23_23;
            MR_Word mercury__digraph__STATE_VARIABLE_Rtc_28_28;
            MR_Word mercury__digraph__TypeCtorInfo_31_31 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
            MR_Word mercury__digraph__TypeInfo_32_32;
            MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_33 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
            MR_Word mercury__digraph__TypeClassInfo_for_enum_34;
            MR_Word mercury__digraph__V_3_48;
            MR_Integer mercury__digraph__V_5_49;
            MR_Box MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box);
            MR_Box mercury__digraph__conv1_V_5_49;

            {
              mercury__digraph__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_32_32, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_31_31));
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_32_32, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_30));
            }
            {
              mercury__digraph__TypeClassInfo_for_enum_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_34, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_33));
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_34, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_30));
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_34, 2) = ((MR_Box) (mercury__digraph__TypeInfo_32_32));
            }
            mercury__digraph__V_3_48 = (MR_Word) mercury__digraph__STATE_VARIABLE_Vis_0_3;
            mercury__digraph__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_34, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              mercury__digraph__conv1_V_5_49 = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_34), ((MR_Box) (mercury__digraph__X_11)));
            }
            mercury__digraph__V_5_49 = ((MR_Integer) mercury__digraph__conv1_V_5_49);
            {
              mercury__digraph__succeeded = mercury__sparse_bitset__contains_search_nodes_2_p_0(mercury__digraph__V_3_48, mercury__digraph__V_5_49);
            }
            if (mercury__digraph__succeeded)
              {
                mercury__digraph__STATE_VARIABLE_Rtc_28_28 = mercury__digraph__STATE_VARIABLE_Rtc_0_4;
                mercury__digraph__STATE_VARIABLE_Vis_23_23 = mercury__digraph__STATE_VARIABLE_Vis_0_3;
              }
            else
              {
                MR_Word mercury__digraph__TypeCtorInfo_35_35;
                MR_Word mercury__digraph__TypeInfo_36_36;
                MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_37;
                MR_Word mercury__digraph__TypeClassInfo_for_enum_38;
                MR_Word mercury__digraph__CliqList_16;
                MR_Word mercury__digraph__Cliq_17;
                MR_Word mercury__digraph__Followers0_18;
                MR_Word mercury__digraph__Followers_19;
                MR_Word mercury__digraph__Var_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                MR_Word mercury__digraph__V_5_54;
                MR_Word mercury__digraph__V_6_58;
                MR_Word mercury__digraph__V_6_66;

                {
                  mercury__digraph__dfs_2_6_p_0(mercury__digraph__TypeInfo_for_T_30, mercury__digraph__G_2, mercury__digraph__X_11, mercury__digraph__STATE_VARIABLE_Vis_0_3, &mercury__digraph__STATE_VARIABLE_Vis_23_23, mercury__digraph__Var_24, &mercury__digraph__CliqList_16);
                }
                mercury__digraph__BaseTypeClassInfo_for_enum_37 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
                mercury__digraph__TypeCtorInfo_35_35 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
                {
                  mercury__digraph__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_36_36, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_35_35));
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_36_36, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_30));
                }
                {
                  mercury__digraph__TypeClassInfo_for_enum_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_38, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_37));
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_38, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_30));
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_38, 2) = ((MR_Box) (mercury__digraph__TypeInfo_36_36));
                }
                mercury__digraph__V_5_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  mercury__digraph__V_6_58 = mercury__sparse_bitset__list_to_set_2_2_f_0(mercury__digraph__TypeClassInfo_for_enum_38, (MR_Word) mercury__digraph__CliqList_16, mercury__digraph__V_5_54);
                }
                mercury__digraph__Cliq_17 = (MR_Word) mercury__digraph__V_6_58;
                {
                  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_30, mercury__digraph__G_2, mercury__digraph__TypeClassInfo_for_enum_38, mercury__digraph__V_6_58, mercury__digraph__Cliq_17, &mercury__digraph__Followers0_18);
                }
                mercury__digraph__V_6_66 = (MR_Word) mercury__digraph__Followers0_18;
                {
                  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_30, mercury__digraph__STATE_VARIABLE_Rtc_0_4, mercury__digraph__TypeClassInfo_for_enum_38, mercury__digraph__V_6_66, mercury__digraph__Cliq_17, &mercury__digraph__Followers_19);
                }
                {
                  mercury__digraph__add_cartesian_product_4_p_0(mercury__digraph__TypeInfo_for_T_30, mercury__digraph__Cliq_17, mercury__digraph__Followers_19, mercury__digraph__STATE_VARIABLE_Rtc_0_4, &mercury__digraph__STATE_VARIABLE_Rtc_28_28);
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__digraph__next_value_of_HeadVar__1_1 = mercury__digraph__Xs_12;
              MR_Word mercury__digraph__next_value_of_STATE_VARIABLE_Vis_0_3 = mercury__digraph__STATE_VARIABLE_Vis_23_23;
              MR_Word mercury__digraph__next_value_of_STATE_VARIABLE_Rtc_0_4 = mercury__digraph__STATE_VARIABLE_Rtc_28_28;

              mercury__digraph__STATE_VARIABLE_Rtc_0_4 = mercury__digraph__next_value_of_STATE_VARIABLE_Rtc_0_4;
              mercury__digraph__STATE_VARIABLE_Vis_0_3 = mercury__digraph__next_value_of_STATE_VARIABLE_Vis_0_3;
              mercury__digraph__HeadVar__1_1 = mercury__digraph__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__digraph__detect_fake_reflexives_5_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_25,
  MR_Word mercury__digraph__G_1,
  MR_Word mercury__digraph__Rtc_2,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word mercury__digraph__STATE_VARIABLE_Fakes_0_4,
  MR_Word * mercury__digraph__STATE_VARIABLE_Fakes_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded;

        if ((mercury__digraph__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__digraph__STATE_VARIABLE_Fakes_5 = mercury__digraph__STATE_VARIABLE_Fakes_0_4;
        else
          {
            MR_Word mercury__digraph__TypeCtorInfo_26_26;
            MR_Word mercury__digraph__TypeInfo_27_27;
            MR_Word mercury__digraph__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word mercury__digraph__Xs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word mercury__digraph__SuccXs_16;
            MR_Word mercury__digraph__PreXs_17;
            MR_Word mercury__digraph__Ys_18;
            MR_Word mercury__digraph__STATE_VARIABLE_Fakes_21_21;
            MR_Word mercury__digraph__V_4_31;
            MR_Word mercury__digraph__V_5_32;
            MR_Word mercury__digraph__V_6_33;
            MR_Word mercury__digraph__Var_35;
            MR_Word mercury__digraph__V_2_38;

            {
              mercury__digraph__lookup_key_set_from_3_p_0(mercury__digraph__TypeInfo_for_T_25, mercury__digraph__G_1, mercury__digraph__X_13, &mercury__digraph__SuccXs_16);
            }
            {
              mercury__digraph__lookup_key_set_to_3_p_0(mercury__digraph__TypeInfo_for_T_25, mercury__digraph__Rtc_2, mercury__digraph__X_13, &mercury__digraph__PreXs_17);
            }
            mercury__digraph__TypeCtorInfo_26_26 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
            {
              mercury__digraph__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_26_26));
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_25));
            }
            mercury__digraph__V_4_31 = (MR_Word) mercury__digraph__SuccXs_16;
            mercury__digraph__V_5_32 = (MR_Word) mercury__digraph__PreXs_17;
            {
              mercury__digraph__V_6_33 = mercury__sparse_bitset__intersect_2_2_f_0(mercury__digraph__V_4_31, mercury__digraph__V_5_32);
            }
            mercury__digraph__Ys_18 = (MR_Word) mercury__digraph__V_6_33;
            mercury__digraph__V_2_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__digraph__Var_35 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            {
              mercury__digraph__succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(mercury__digraph__TypeInfo_27_27, (MR_Word) mercury__digraph__Ys_18, (MR_Word) mercury__digraph__Var_35);
            }
            if (mercury__digraph__succeeded)
              {
                MR_Word mercury__digraph__Var_22;

                {
                  mercury__digraph__Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__digraph__Var_22, 0) = ((MR_Box) (mercury__digraph__X_13));
                  MR_hl_field(MR_mktag(0), mercury__digraph__Var_22, 1) = ((MR_Box) (mercury__digraph__X_13));
                }
                {
                  mercury__digraph__STATE_VARIABLE_Fakes_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__digraph__STATE_VARIABLE_Fakes_21_21, 0) = ((MR_Box) (mercury__digraph__Var_22));
                  MR_hl_field(MR_mktag(1), mercury__digraph__STATE_VARIABLE_Fakes_21_21, 1) = ((MR_Box) (mercury__digraph__STATE_VARIABLE_Fakes_0_4));
                }
              }
            else
              mercury__digraph__STATE_VARIABLE_Fakes_21_21 = mercury__digraph__STATE_VARIABLE_Fakes_0_4;
            /* direct tailcall eliminated */
            {
              MR_Word mercury__digraph__next_value_of_HeadVar__3_3 = mercury__digraph__Xs_14;
              MR_Word mercury__digraph__next_value_of_STATE_VARIABLE_Fakes_0_4 = mercury__digraph__STATE_VARIABLE_Fakes_21_21;

              mercury__digraph__STATE_VARIABLE_Fakes_0_4 = mercury__digraph__next_value_of_STATE_VARIABLE_Fakes_0_4;
              mercury__digraph__HeadVar__3_3 = mercury__digraph__next_value_of_HeadVar__3_3;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__digraph__atsort_2_5_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_27,
  MR_Word mercury__digraph__HeadVar__1_1,
  MR_Word mercury__digraph__GInv_2,
  MR_Word mercury__digraph__STATE_VARIABLE_Vis_0_3,
  MR_Word mercury__digraph__STATE_VARIABLE_ATsort_0_4,
  MR_Word * mercury__digraph__STATE_VARIABLE_ATsort_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded;

        if ((mercury__digraph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__digraph__STATE_VARIABLE_ATsort_5 = mercury__digraph__STATE_VARIABLE_ATsort_0_4;
        else
          {
            MR_Word mercury__digraph__X_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__digraph__Xs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__digraph__STATE_VARIABLE_Vis_22_22;
            MR_Word mercury__digraph__STATE_VARIABLE_ATsort_25_25;
            MR_Word mercury__digraph__TypeCtorInfo_28_28 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
            MR_Word mercury__digraph__TypeInfo_29_29;
            MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_30 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
            MR_Word mercury__digraph__TypeClassInfo_for_enum_31;
            MR_Word mercury__digraph__V_3_37;
            MR_Integer mercury__digraph__V_5_38;
            MR_Box MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box);
            MR_Box mercury__digraph__conv1_V_5_38;

            {
              mercury__digraph__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_28_28));
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_27));
            }
            {
              mercury__digraph__TypeClassInfo_for_enum_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_31, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_30));
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_31, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_27));
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_31, 2) = ((MR_Box) (mercury__digraph__TypeInfo_29_29));
            }
            mercury__digraph__V_3_37 = (MR_Word) mercury__digraph__STATE_VARIABLE_Vis_0_3;
            mercury__digraph__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_31, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              mercury__digraph__conv1_V_5_38 = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_31), ((MR_Box) (mercury__digraph__X_11)));
            }
            mercury__digraph__V_5_38 = ((MR_Integer) mercury__digraph__conv1_V_5_38);
            {
              mercury__digraph__succeeded = mercury__sparse_bitset__contains_search_nodes_2_p_0(mercury__digraph__V_3_37, mercury__digraph__V_5_38);
            }
            if (mercury__digraph__succeeded)
              {
                mercury__digraph__STATE_VARIABLE_ATsort_25_25 = mercury__digraph__STATE_VARIABLE_ATsort_0_4;
                mercury__digraph__STATE_VARIABLE_Vis_22_22 = mercury__digraph__STATE_VARIABLE_Vis_0_3;
              }
            else
              {
                MR_Word mercury__digraph__CliqKeys_16;
                MR_Word mercury__digraph__CliqList_17;
                MR_Word mercury__digraph__Cliq_18;
                MR_Word mercury__digraph__Var_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                MR_Word mercury__digraph__V_4_42;
                MR_Integer mercury__digraph__V_5_45;

                {
                  mercury__digraph__dfs_2_6_p_0(mercury__digraph__TypeInfo_for_T_27, mercury__digraph__GInv_2, mercury__digraph__X_11, mercury__digraph__STATE_VARIABLE_Vis_0_3, &mercury__digraph__STATE_VARIABLE_Vis_22_22, mercury__digraph__Var_23, &mercury__digraph__CliqKeys_16);
                }
                {
                  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_54_53_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(mercury__digraph__TypeInfo_for_T_27, mercury__digraph__GInv_2, mercury__digraph__CliqKeys_16, &mercury__digraph__CliqList_17);
                }
                {
                  mercury__list__length_acc_3_p_0(mercury__digraph__TypeInfo_for_T_27, mercury__digraph__CliqList_17, (MR_Integer) 0, &mercury__digraph__V_5_45);
                }
                {
                  mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__digraph__TypeInfo_for_T_27, mercury__digraph__V_5_45, mercury__digraph__CliqList_17, &mercury__digraph__V_4_42);
                }
                mercury__digraph__Cliq_18 = (MR_Word) mercury__digraph__V_4_42;
                {
                  mercury__digraph__STATE_VARIABLE_ATsort_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__digraph__STATE_VARIABLE_ATsort_25_25, 0) = ((MR_Box) (mercury__digraph__Cliq_18));
                  MR_hl_field(MR_mktag(1), mercury__digraph__STATE_VARIABLE_ATsort_25_25, 1) = ((MR_Box) (mercury__digraph__STATE_VARIABLE_ATsort_0_4));
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__digraph__next_value_of_HeadVar__1_1 = mercury__digraph__Xs_12;
              MR_Word mercury__digraph__next_value_of_STATE_VARIABLE_Vis_0_3 = mercury__digraph__STATE_VARIABLE_Vis_22_22;
              MR_Word mercury__digraph__next_value_of_STATE_VARIABLE_ATsort_0_4 = mercury__digraph__STATE_VARIABLE_ATsort_25_25;

              mercury__digraph__STATE_VARIABLE_ATsort_0_4 = mercury__digraph__next_value_of_STATE_VARIABLE_ATsort_0_4;
              mercury__digraph__STATE_VARIABLE_Vis_0_3 = mercury__digraph__next_value_of_STATE_VARIABLE_Vis_0_3;
              mercury__digraph__HeadVar__1_1 = mercury__digraph__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__digraph__check_tsort_3_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_13,
  MR_Word mercury__digraph__G_1,
  MR_Word mercury__digraph__Vis0_2,
  MR_Word mercury__digraph__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded;

        if ((mercury__digraph__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__digraph__succeeded = MR_TRUE;
        else
          {
            MR_Word mercury__digraph__TypeCtorInfo_14_14 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
            MR_Word mercury__digraph__TypeInfo_15_15;
            MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_16 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
            MR_Word mercury__digraph__TypeClassInfo_for_enum_17;
            MR_Word mercury__digraph__X_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word mercury__digraph__Xs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word mercury__digraph__Vis_10;
            MR_Word mercury__digraph__SuccXs_11;
            MR_Word mercury__digraph__BackPointers_12;
            MR_Word mercury__digraph__V_6_21;
            MR_Integer mercury__digraph__V_9_23;
            MR_Word mercury__digraph__V_5_24;
            MR_Word mercury__digraph__V_4_28;
            MR_Word mercury__digraph__V_5_29;
            MR_Word mercury__digraph__V_6_30;
            MR_Word mercury__digraph__Var_32;
            MR_Word mercury__digraph__V_2_35;
            MR_Box MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box);
            MR_Box mercury__digraph__conv1_V_9_23;

            {
              mercury__digraph__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
            }
            {
              mercury__digraph__TypeClassInfo_for_enum_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_17, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_16));
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_17, 2) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
            }
            mercury__digraph__V_6_21 = (MR_Word) mercury__digraph__Vis0_2;
            mercury__digraph__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_17, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              mercury__digraph__conv1_V_9_23 = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_17), ((MR_Box) (mercury__digraph__X_8)));
            }
            mercury__digraph__V_9_23 = ((MR_Integer) mercury__digraph__conv1_V_9_23);
            {
              mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__V_6_21, mercury__digraph__V_9_23, &mercury__digraph__V_5_24);
            }
            mercury__digraph__Vis_10 = (MR_Word) mercury__digraph__V_5_24;
            {
              mercury__digraph__lookup_key_set_from_3_p_0(mercury__digraph__TypeInfo_for_T_13, mercury__digraph__G_1, mercury__digraph__X_8, &mercury__digraph__SuccXs_11);
            }
            mercury__digraph__V_4_28 = (MR_Word) mercury__digraph__Vis_10;
            mercury__digraph__V_5_29 = (MR_Word) mercury__digraph__SuccXs_11;
            {
              mercury__digraph__V_6_30 = mercury__sparse_bitset__intersect_2_2_f_0(mercury__digraph__V_4_28, mercury__digraph__V_5_29);
            }
            mercury__digraph__V_2_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__digraph__BackPointers_12 = (MR_Word) mercury__digraph__V_6_30;
            mercury__digraph__Var_32 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            {
              mercury__digraph__succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(mercury__digraph__TypeInfo_15_15, (MR_Word) mercury__digraph__BackPointers_12, (MR_Word) mercury__digraph__Var_32);
            }
            if (mercury__digraph__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__digraph__next_value_of_Vis0_2 = mercury__digraph__Vis_10;
                  MR_Word mercury__digraph__next_value_of_HeadVar__3_3 = mercury__digraph__Xs_9;

                  mercury__digraph__HeadVar__3_3 = mercury__digraph__next_value_of_HeadVar__3_3;
                  mercury__digraph__Vis0_2 = mercury__digraph__next_value_of_Vis0_2;
                }
                continue;
              }
          }
        return mercury__digraph__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__digraph__make_reduced_graph_4_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_21,
  MR_Word mercury__digraph__CliqMap_1,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__STATE_VARIABLE_R_0_3,
  MR_Word * mercury__digraph__STATE_VARIABLE_R_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded;

        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__digraph__STATE_VARIABLE_R_4 = mercury__digraph__STATE_VARIABLE_R_0_3;
        else
          {
            MR_Word mercury__digraph__TypeCtorInfo_22_22;
            MR_Word mercury__digraph__TypeInfo_23_23;
            MR_Word mercury__digraph__TypeCtorInfo_24_24;
            MR_Word mercury__digraph__TypeInfo_25_25;
            MR_Word mercury__digraph__TypeInfo_26_26;
            MR_Word mercury__digraph__X_10;
            MR_Word mercury__digraph__Y_11;
            MR_Word mercury__digraph__Edges_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__digraph__CliqX_14;
            MR_Word mercury__digraph__CliqY_15;
            MR_Word mercury__digraph__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__digraph__STATE_VARIABLE_R_19_19;
            MR_Box mercury__digraph__conv0_CliqX_14;
            MR_Box mercury__digraph__conv1_CliqY_15;
            MR_Integer mercury__digraph__CastX_31;
            MR_Integer mercury__digraph__CastY_32;

            mercury__digraph__X_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_18, (MR_Integer) 0)));
            mercury__digraph__Y_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_18, (MR_Integer) 1)));
            mercury__digraph__TypeCtorInfo_22_22 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
            {
              mercury__digraph__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_23, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_22_22));
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_21));
            }
            mercury__digraph__TypeCtorInfo_24_24 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
            {
              mercury__digraph__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_24_24));
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_21));
            }
            {
              mercury__digraph__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_26_26, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_22_22));
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_26_26, 1) = ((MR_Box) (mercury__digraph__TypeInfo_25_25));
            }
            {
              mercury__map__lookup_3_p_0(mercury__digraph__TypeInfo_23_23, mercury__digraph__TypeInfo_26_26, (MR_Word) mercury__digraph__CliqMap_1, ((MR_Box) (mercury__digraph__X_10)), &mercury__digraph__conv0_CliqX_14);
            }
            mercury__digraph__CliqX_14 = ((MR_Word) mercury__digraph__conv0_CliqX_14);
            {
              mercury__map__lookup_3_p_0(mercury__digraph__TypeInfo_23_23, mercury__digraph__TypeInfo_26_26, (MR_Word) mercury__digraph__CliqMap_1, ((MR_Box) (mercury__digraph__Y_11)), &mercury__digraph__conv1_CliqY_15);
            }
            mercury__digraph__CliqY_15 = ((MR_Word) mercury__digraph__conv1_CliqY_15);
            mercury__digraph__CastX_31 = (MR_Integer) mercury__digraph__CliqX_14;
            mercury__digraph__CastY_32 = (MR_Integer) mercury__digraph__CliqY_15;
            mercury__digraph__succeeded = (mercury__digraph__CastX_31 == mercury__digraph__CastY_32);
            if (mercury__digraph__succeeded)
              mercury__digraph__succeeded = MR_TRUE;
            else
              {
                MR_Integer mercury__digraph__Var_29 = (MR_Integer) mercury__digraph__CliqX_14;
                MR_Integer mercury__digraph__Var_30 = (MR_Integer) mercury__digraph__CliqY_15;

                mercury__digraph__succeeded = (mercury__digraph__Var_29 == mercury__digraph__Var_30);
              }
            if (mercury__digraph__succeeded)
              mercury__digraph__STATE_VARIABLE_R_19_19 = mercury__digraph__STATE_VARIABLE_R_0_3;
            else
              {
                MR_Word mercury__digraph__conv2_STATE_VARIABLE_R_19_19;

                {
                  mercury__digraph__add_edge_4_p_0(mercury__digraph__TypeInfo_25_25, (MR_Word) mercury__digraph__CliqX_14, (MR_Word) mercury__digraph__CliqY_15, (MR_Word) mercury__digraph__STATE_VARIABLE_R_0_3, &mercury__digraph__conv2_STATE_VARIABLE_R_19_19);
                }
                mercury__digraph__STATE_VARIABLE_R_19_19 = (MR_Word) mercury__digraph__conv2_STATE_VARIABLE_R_19_19;
              }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__digraph__next_value_of_HeadVar__2_2 = mercury__digraph__Edges_12;
              MR_Word mercury__digraph__next_value_of_STATE_VARIABLE_R_0_3 = mercury__digraph__STATE_VARIABLE_R_19_19;

              mercury__digraph__STATE_VARIABLE_R_0_3 = mercury__digraph__next_value_of_STATE_VARIABLE_R_0_3;
              mercury__digraph__HeadVar__2_2 = mercury__digraph__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__digraph__make_clique_map_6_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_31,
  MR_Word mercury__digraph__G_1,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__STATE_VARIABLE_CliqMap_0_3,
  MR_Word * mercury__digraph__STATE_VARIABLE_CliqMap_4,
  MR_Word mercury__digraph__STATE_VARIABLE_R_0_5,
  MR_Word * mercury__digraph__STATE_VARIABLE_R_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded;

        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__digraph__STATE_VARIABLE_R_6 = mercury__digraph__STATE_VARIABLE_R_0_5;
            *mercury__digraph__STATE_VARIABLE_CliqMap_4 = mercury__digraph__STATE_VARIABLE_CliqMap_0_3;
          }
        else
          {
            MR_Word mercury__digraph__TypeCtorInfo_36_36;
            MR_Word mercury__digraph__TypeInfo_37_37;
            MR_Word mercury__digraph__Clique_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__digraph__Cliques_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__digraph__Vertices_19;
            MR_Word mercury__digraph__CliqKey_20;
            MR_Word mercury__digraph__STATE_VARIABLE_R_26_26;
            MR_Word mercury__digraph__STATE_VARIABLE_CliqMap_28_28;
            MR_Word mercury__digraph__V_7_47 = (MR_Word) mercury__digraph__Clique_15;
            MR_Word mercury__digraph__V_8_48;
            MR_Word mercury__digraph__V_4_60;
            MR_Integer mercury__digraph__V_5_63;
            MR_Word mercury__digraph__conv1_CliqKey_20;
            MR_Word mercury__digraph__conv0_STATE_VARIABLE_R_26_26;

            {
              mercury__digraph__V_8_48 = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_51_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_2_f_in__list_0(mercury__digraph__TypeInfo_for_T_31, mercury__digraph__G_1, mercury__digraph__V_7_47);
            }
            {
              mercury__list__length_acc_3_p_0(mercury__digraph__TypeInfo_for_T_31, mercury__digraph__V_8_48, (MR_Integer) 0, &mercury__digraph__V_5_63);
            }
            {
              mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__digraph__TypeInfo_for_T_31, mercury__digraph__V_5_63, mercury__digraph__V_8_48, &mercury__digraph__V_4_60);
            }
            mercury__digraph__Vertices_19 = (MR_Word) mercury__digraph__V_4_60;
            mercury__digraph__TypeCtorInfo_36_36 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
            {
              mercury__digraph__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_37_37, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_36_36));
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_37_37, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_31));
            }
            {
              mercury__digraph__add_vertex_4_p_0(mercury__digraph__TypeInfo_37_37, ((MR_Box) (mercury__digraph__Vertices_19)), &mercury__digraph__conv1_CliqKey_20, (MR_Word) mercury__digraph__STATE_VARIABLE_R_0_5, &mercury__digraph__conv0_STATE_VARIABLE_R_26_26);
            }
            mercury__digraph__CliqKey_20 = (MR_Word) mercury__digraph__conv1_CliqKey_20;
            mercury__digraph__STATE_VARIABLE_R_26_26 = (MR_Word) mercury__digraph__conv0_STATE_VARIABLE_R_26_26;
            {
              mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_95_104_111_54_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__set_0(mercury__digraph__TypeInfo_for_T_31, mercury__digraph__CliqKey_20, mercury__digraph__Clique_15, mercury__digraph__STATE_VARIABLE_CliqMap_0_3, &mercury__digraph__STATE_VARIABLE_CliqMap_28_28);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__digraph__next_value_of_HeadVar__2_2 = mercury__digraph__Cliques_16;
              MR_Word mercury__digraph__next_value_of_STATE_VARIABLE_CliqMap_0_3 = mercury__digraph__STATE_VARIABLE_CliqMap_28_28;
              MR_Word mercury__digraph__next_value_of_STATE_VARIABLE_R_0_5 = mercury__digraph__STATE_VARIABLE_R_26_26;

              mercury__digraph__STATE_VARIABLE_R_0_5 = mercury__digraph__next_value_of_STATE_VARIABLE_R_0_5;
              mercury__digraph__STATE_VARIABLE_CliqMap_0_3 = mercury__digraph__next_value_of_STATE_VARIABLE_CliqMap_0_3;
              mercury__digraph__HeadVar__2_2 = mercury__digraph__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__digraph__cliques_2_5_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_26,
  MR_Word mercury__digraph__HeadVar__1_1,
  MR_Word mercury__digraph__GInv_2,
  MR_Word mercury__digraph__STATE_VARIABLE_Visited_0_3,
  MR_Word mercury__digraph__STATE_VARIABLE_Cliques_0_4,
  MR_Word * mercury__digraph__STATE_VARIABLE_Cliques_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded;

        if ((mercury__digraph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__digraph__STATE_VARIABLE_Cliques_5 = mercury__digraph__STATE_VARIABLE_Cliques_0_4;
        else
          {
            MR_Word mercury__digraph__TypeCtorInfo_27_27;
            MR_Word mercury__digraph__TypeInfo_28_28;
            MR_Word mercury__digraph__TypeCtorInfo_29_29;
            MR_Word mercury__digraph__TypeInfo_30_30;
            MR_Word mercury__digraph__X_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__digraph__Xs0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__digraph__CliqueList_16;
            MR_Word mercury__digraph__Clique_17;
            MR_Word mercury__digraph__Xs_18;
            MR_Word mercury__digraph__STATE_VARIABLE_Visited_22_22;
            MR_Word mercury__digraph__Var_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            MR_Word mercury__digraph__STATE_VARIABLE_Cliques_24_24;
            MR_Word mercury__digraph__V_4_34;
            MR_Integer mercury__digraph__V_5_37;
            MR_Word mercury__digraph__V_5_47;
            MR_Word mercury__digraph__V_6_48;
            MR_Word mercury__digraph__conv0_V_4_34;
            MR_Word mercury__digraph__conv1_V_6_48;
            MR_Word mercury__digraph__conv2_Xs_18;

            {
              mercury__digraph__dfs_2_6_p_0(mercury__digraph__TypeInfo_for_T_26, mercury__digraph__GInv_2, mercury__digraph__X_11, mercury__digraph__STATE_VARIABLE_Visited_0_3, &mercury__digraph__STATE_VARIABLE_Visited_22_22, mercury__digraph__Var_23, &mercury__digraph__CliqueList_16);
            }
            mercury__digraph__TypeCtorInfo_27_27 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
            {
              mercury__digraph__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_28_28, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_27_27));
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_28_28, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_26));
            }
            {
              mercury__list__length_acc_3_p_0(mercury__digraph__TypeInfo_28_28, (MR_Word) mercury__digraph__CliqueList_16, (MR_Integer) 0, &mercury__digraph__V_5_37);
            }
            {
              mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__digraph__TypeInfo_28_28, mercury__digraph__V_5_37, (MR_Word) mercury__digraph__CliqueList_16, &mercury__digraph__conv0_V_4_34);
            }
            mercury__digraph__V_4_34 = (MR_Word) mercury__digraph__conv0_V_4_34;
            mercury__digraph__Clique_17 = (MR_Word) mercury__digraph__V_4_34;
            mercury__digraph__TypeCtorInfo_29_29 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
            {
              mercury__digraph__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_30_30, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_29_29));
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_30_30, 1) = ((MR_Box) (mercury__digraph__TypeInfo_28_28));
            }
            mercury__digraph__V_5_47 = (MR_Word) mercury__digraph__STATE_VARIABLE_Cliques_0_4;
            {
              mercury__set_ordlist__insert_loop_3_p_0(mercury__digraph__TypeInfo_30_30, (MR_Word) mercury__digraph__V_5_47, ((MR_Box) (mercury__digraph__Clique_17)), &mercury__digraph__conv1_V_6_48);
            }
            mercury__digraph__V_6_48 = (MR_Word) mercury__digraph__conv1_V_6_48;
            mercury__digraph__STATE_VARIABLE_Cliques_24_24 = (MR_Word) mercury__digraph__V_6_48;
            {
              mercury__list__delete_elems_3_p_0(mercury__digraph__TypeInfo_28_28, (MR_Word) mercury__digraph__Xs0_12, (MR_Word) mercury__digraph__CliqueList_16, &mercury__digraph__conv2_Xs_18);
            }
            mercury__digraph__Xs_18 = (MR_Word) mercury__digraph__conv2_Xs_18;
            /* direct tailcall eliminated */
            {
              MR_Word mercury__digraph__next_value_of_HeadVar__1_1 = mercury__digraph__Xs_18;
              MR_Word mercury__digraph__next_value_of_STATE_VARIABLE_Visited_0_3 = mercury__digraph__STATE_VARIABLE_Visited_22_22;
              MR_Word mercury__digraph__next_value_of_STATE_VARIABLE_Cliques_0_4 = mercury__digraph__STATE_VARIABLE_Cliques_24_24;

              mercury__digraph__STATE_VARIABLE_Cliques_0_4 = mercury__digraph__next_value_of_STATE_VARIABLE_Cliques_0_4;
              mercury__digraph__STATE_VARIABLE_Visited_0_3 = mercury__digraph__next_value_of_STATE_VARIABLE_Visited_0_3;
              mercury__digraph__HeadVar__1_1 = mercury__digraph__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__digraph__reachable_from_4_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_19,
  MR_Word mercury__digraph__G_5,
  MR_Word mercury__digraph__Keys0_6,
  MR_Word mercury__digraph__STATE_VARIABLE_Comp_0_15,
  MR_Word * mercury__digraph__STATE_VARIABLE_Comp_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded;
        MR_Word mercury__digraph__TypeClassInfo_for_enum_23;
        MR_Word mercury__digraph__X_8;
        MR_Word mercury__digraph__Keys1_9;
        MR_Word mercury__digraph__TypeCtorInfo_20_20 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
        MR_Word mercury__digraph__TypeInfo_21_21;
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_22 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
        MR_Box mercury__digraph__conv1_X_8;
        MR_Word mercury__digraph__conv0_Keys1_9;

        {
          mercury__digraph__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_21_21, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_20_20));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_21_21, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_19));
        }
        {
          mercury__digraph__TypeClassInfo_for_enum_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_22));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_19));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 2) = ((MR_Box) (mercury__digraph__TypeInfo_21_21));
        }
        {
          mercury__digraph__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mercury__digraph__TypeClassInfo_for_enum_23, &mercury__digraph__conv1_X_8, (MR_Word) mercury__digraph__Keys0_6, &mercury__digraph__conv0_Keys1_9);
        }
        if (mercury__digraph__succeeded)
          {
            mercury__digraph__X_8 = ((MR_Word) mercury__digraph__conv1_X_8);
            mercury__digraph__Keys1_9 = (MR_Word) mercury__digraph__conv0_Keys1_9;
            mercury__digraph__succeeded = MR_TRUE;
          }
        if (mercury__digraph__succeeded)
          {
            MR_Word mercury__digraph__FwdSet_10;
            MR_Word mercury__digraph__BwdSet_11;
            MR_Word mercury__digraph__Keys_14;
            MR_Word mercury__digraph__STATE_VARIABLE_Comp_17_17;
            MR_Word mercury__digraph__V_6_31 = (MR_Word) mercury__digraph__STATE_VARIABLE_Comp_0_15;
            MR_Integer mercury__digraph__V_9_33;
            MR_Word mercury__digraph__V_5_34;
            MR_Word mercury__digraph__V_4_38;
            MR_Word mercury__digraph__V_5_39;
            MR_Word mercury__digraph__V_4_44;
            MR_Word mercury__digraph__V_5_45;
            MR_Word mercury__digraph__V_4_50;
            MR_Word mercury__digraph__V_5_51;
            MR_Word mercury__digraph__V_6_52;
            MR_Box MR_CALL (* mercury__digraph__func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, (MR_Integer) 0)), (MR_Integer) 5)));
            MR_Box mercury__digraph__conv3_V_9_33;

            {
              mercury__digraph__conv3_V_9_33 = mercury__digraph__func_2(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_23), ((MR_Box) (mercury__digraph__X_8)));
            }
            mercury__digraph__V_9_33 = ((MR_Integer) mercury__digraph__conv3_V_9_33);
            {
              mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__V_6_31, mercury__digraph__V_9_33, &mercury__digraph__V_5_34);
            }
            mercury__digraph__STATE_VARIABLE_Comp_17_17 = (MR_Word) mercury__digraph__V_5_34;
            {
              mercury__digraph__lookup_key_set_from_3_p_0(mercury__digraph__TypeInfo_for_T_19, mercury__digraph__G_5, mercury__digraph__X_8, &mercury__digraph__FwdSet_10);
            }
            {
              mercury__digraph__lookup_key_set_to_3_p_0(mercury__digraph__TypeInfo_for_T_19, mercury__digraph__G_5, mercury__digraph__X_8, &mercury__digraph__BwdSet_11);
            }
            mercury__digraph__V_4_38 = (MR_Word) mercury__digraph__FwdSet_10;
            mercury__digraph__V_5_39 = (MR_Word) mercury__digraph__BwdSet_11;
            {
              mercury__digraph__V_4_44 = mercury__sparse_bitset__union_2_2_f_0(mercury__digraph__V_4_38, mercury__digraph__V_5_39);
            }
            mercury__digraph__V_5_45 = (MR_Word) mercury__digraph__STATE_VARIABLE_Comp_17_17;
            {
              mercury__digraph__V_5_51 = mercury__sparse_bitset__difference_2_2_f_0(mercury__digraph__V_4_44, mercury__digraph__V_5_45);
            }
            mercury__digraph__V_4_50 = (MR_Word) mercury__digraph__Keys1_9;
            {
              mercury__digraph__V_6_52 = mercury__sparse_bitset__union_2_2_f_0(mercury__digraph__V_4_50, mercury__digraph__V_5_51);
            }
            mercury__digraph__Keys_14 = (MR_Word) mercury__digraph__V_6_52;
            /* direct tailcall eliminated */
            {
              MR_Word mercury__digraph__next_value_of_Keys0_6 = mercury__digraph__Keys_14;
              MR_Word mercury__digraph__next_value_of_STATE_VARIABLE_Comp_0_15 = mercury__digraph__STATE_VARIABLE_Comp_17_17;

              mercury__digraph__STATE_VARIABLE_Comp_0_15 = mercury__digraph__next_value_of_STATE_VARIABLE_Comp_0_15;
              mercury__digraph__Keys0_6 = mercury__digraph__next_value_of_Keys0_6;
            }
            continue;
          }
        else
          *mercury__digraph__STATE_VARIABLE_Comp_16 = mercury__digraph__STATE_VARIABLE_Comp_0_15;
      }
      break;
    }
}

static void MR_CALL 
mercury__digraph__components_2_4_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_19,
  MR_Word mercury__digraph__G_5,
  MR_Word mercury__digraph__Xs0_6,
  MR_Word mercury__digraph__STATE_VARIABLE_Components_0_14,
  MR_Word * mercury__digraph__STATE_VARIABLE_Components_15)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded;
        MR_Word mercury__digraph__TypeInfo_21_21;
        MR_Word mercury__digraph__TypeClassInfo_for_enum_23;
        MR_Word mercury__digraph__X_8;
        MR_Word mercury__digraph__Xs1_9;
        MR_Word mercury__digraph__TypeCtorInfo_20_20 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_22 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
        MR_Box mercury__digraph__conv1_X_8;
        MR_Word mercury__digraph__conv0_Xs1_9;

        {
          mercury__digraph__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_21_21, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_20_20));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_21_21, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_19));
        }
        {
          mercury__digraph__TypeClassInfo_for_enum_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_22));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_19));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 2) = ((MR_Box) (mercury__digraph__TypeInfo_21_21));
        }
        {
          mercury__digraph__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mercury__digraph__TypeClassInfo_for_enum_23, &mercury__digraph__conv1_X_8, (MR_Word) mercury__digraph__Xs0_6, &mercury__digraph__conv0_Xs1_9);
        }
        if (mercury__digraph__succeeded)
          {
            mercury__digraph__X_8 = ((MR_Word) mercury__digraph__conv1_X_8);
            mercury__digraph__Xs1_9 = (MR_Word) mercury__digraph__conv0_Xs1_9;
            mercury__digraph__succeeded = MR_TRUE;
          }
        if (mercury__digraph__succeeded)
          {
            MR_Word mercury__digraph__TypeCtorInfo_28_28;
            MR_Word mercury__digraph__TypeInfo_29_29;
            MR_Word mercury__digraph__Keys0_11;
            MR_Word mercury__digraph__Comp_12;
            MR_Word mercury__digraph__Xs2_13;
            MR_Word mercury__digraph__Var_16;
            MR_Word mercury__digraph__STATE_VARIABLE_Components_17_17;
            MR_Word mercury__digraph__V_2_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            MR_Word mercury__digraph__V_4_34 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_Word mercury__digraph__V_6_44 = (MR_Word) mercury__digraph__V_4_34;
            MR_Integer mercury__digraph__V_9_46;
            MR_Word mercury__digraph__V_5_47;
            MR_Word mercury__digraph__V_5_52;
            MR_Word mercury__digraph__V_6_53;
            MR_Word mercury__digraph__V_4_57;
            MR_Word mercury__digraph__V_5_58;
            MR_Word mercury__digraph__V_6_59;
            MR_Box MR_CALL (* mercury__digraph__func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, (MR_Integer) 0)), (MR_Integer) 5)));
            MR_Box mercury__digraph__conv3_V_9_46;
            MR_Word mercury__digraph__conv4_Var_16;
            MR_Word mercury__digraph__conv5_V_6_53;

            {
              mercury__digraph__conv3_V_9_46 = mercury__digraph__func_2(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_23), ((MR_Box) (mercury__digraph__X_8)));
            }
            mercury__digraph__V_9_46 = ((MR_Integer) mercury__digraph__conv3_V_9_46);
            {
              mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__V_6_44, mercury__digraph__V_9_46, &mercury__digraph__V_5_47);
            }
            mercury__digraph__Keys0_11 = (MR_Word) mercury__digraph__V_5_47;
            {
              mercury__digraph__reachable_from_4_p_0(mercury__digraph__TypeInfo_for_T_19, mercury__digraph__G_5, mercury__digraph__Keys0_11, mercury__digraph__V_4_34, &mercury__digraph__Comp_12);
            }
            {
              mercury__digraph__conv4_Var_16 = mercury__sparse_bitset__to_set_1_f_0(mercury__digraph__TypeClassInfo_for_enum_23, (MR_Word) mercury__digraph__Comp_12);
            }
            mercury__digraph__Var_16 = (MR_Word) mercury__digraph__conv4_Var_16;
            mercury__digraph__TypeCtorInfo_28_28 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
            {
              mercury__digraph__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_28_28));
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 1) = ((MR_Box) (mercury__digraph__TypeInfo_21_21));
            }
            mercury__digraph__V_5_52 = (MR_Word) mercury__digraph__STATE_VARIABLE_Components_0_14;
            {
              mercury__set_ordlist__insert_loop_3_p_0(mercury__digraph__TypeInfo_29_29, (MR_Word) mercury__digraph__V_5_52, ((MR_Box) (mercury__digraph__Var_16)), &mercury__digraph__conv5_V_6_53);
            }
            mercury__digraph__V_6_53 = (MR_Word) mercury__digraph__conv5_V_6_53;
            mercury__digraph__STATE_VARIABLE_Components_17_17 = (MR_Word) mercury__digraph__V_6_53;
            mercury__digraph__V_4_57 = (MR_Word) mercury__digraph__Xs1_9;
            mercury__digraph__V_5_58 = (MR_Word) mercury__digraph__Comp_12;
            {
              mercury__digraph__V_6_59 = mercury__sparse_bitset__difference_2_2_f_0(mercury__digraph__V_4_57, mercury__digraph__V_5_58);
            }
            mercury__digraph__Xs2_13 = (MR_Word) mercury__digraph__V_6_59;
            /* direct tailcall eliminated */
            {
              MR_Word mercury__digraph__next_value_of_Xs0_6 = mercury__digraph__Xs2_13;
              MR_Word mercury__digraph__next_value_of_STATE_VARIABLE_Components_0_14 = mercury__digraph__STATE_VARIABLE_Components_17_17;

              mercury__digraph__STATE_VARIABLE_Components_0_14 = mercury__digraph__next_value_of_STATE_VARIABLE_Components_0_14;
              mercury__digraph__Xs0_6 = mercury__digraph__next_value_of_Xs0_6;
            }
            continue;
          }
        else
          *mercury__digraph__STATE_VARIABLE_Components_15 = mercury__digraph__STATE_VARIABLE_Components_0_14;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__digraph__is_dag_2_5_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_17,
  MR_Word mercury__digraph__G_6,
  MR_Word mercury__digraph__Ancestors_7,
  MR_Word mercury__digraph__X_8,
  MR_Word mercury__digraph__STATE_VARIABLE_Visited_0_11,
  MR_Word * mercury__digraph__STATE_VARIABLE_Visited_12)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_18_18 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeInfo_19_19;

    {
      mercury__digraph__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_19_19, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_18_18));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_19_19, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
    }
    {
      mercury__digraph__succeeded = mercury__list__member_2_p_0(mercury__digraph__TypeInfo_19_19, ((MR_Box) (mercury__digraph__X_8)), (MR_Word) mercury__digraph__Ancestors_7);
    }
    if (mercury__digraph__succeeded)
      mercury__digraph__succeeded = MR_FALSE;
    else
      {
        MR_Word mercury__digraph__TypeCtorInfo_20_20 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
        MR_Word mercury__digraph__TypeInfo_21_21;
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_22 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
        MR_Word mercury__digraph__TypeClassInfo_for_enum_23;
        MR_Word mercury__digraph__V_3_34;
        MR_Integer mercury__digraph__V_5_35;
        MR_Box MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box);
        MR_Box mercury__digraph__conv1_V_5_35;

        {
          mercury__digraph__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_21_21, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_20_20));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_21_21, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
        }
        {
          mercury__digraph__TypeClassInfo_for_enum_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_22));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 2) = ((MR_Box) (mercury__digraph__TypeInfo_21_21));
        }
        mercury__digraph__V_3_34 = (MR_Word) mercury__digraph__STATE_VARIABLE_Visited_0_11;
        mercury__digraph__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__digraph__conv1_V_5_35 = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_23), ((MR_Box) (mercury__digraph__X_8)));
        }
        mercury__digraph__V_5_35 = ((MR_Integer) mercury__digraph__conv1_V_5_35);
        {
          mercury__digraph__succeeded = mercury__sparse_bitset__contains_search_nodes_2_p_0(mercury__digraph__V_3_34, mercury__digraph__V_5_35);
        }
        if (mercury__digraph__succeeded)
          {
            *mercury__digraph__STATE_VARIABLE_Visited_12 = mercury__digraph__STATE_VARIABLE_Visited_0_11;
            mercury__digraph__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__digraph__TypeCtorInfo_24_24;
            MR_Word mercury__digraph__TypeInfo_25_25;
            MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_26;
            MR_Word mercury__digraph__TypeClassInfo_for_enum_27;
            MR_Word mercury__digraph__SuccXs_10;
            MR_Word mercury__digraph__STATE_VARIABLE_Visited_13_13;
            MR_Word mercury__digraph__Var_16;
            MR_Word mercury__digraph__V_6_42;
            MR_Integer mercury__digraph__V_9_44;
            MR_Word mercury__digraph__V_5_45;
            MR_Word mercury__digraph__V_6_49;
            MR_Box MR_CALL (* mercury__digraph__func_2)(MR_Box, MR_Box);
            MR_Box mercury__digraph__conv3_V_9_44;

            {
              mercury__digraph__lookup_key_set_from_3_p_0(mercury__digraph__TypeInfo_for_T_17, mercury__digraph__G_6, mercury__digraph__X_8, &mercury__digraph__SuccXs_10);
            }
            mercury__digraph__BaseTypeClassInfo_for_enum_26 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
            mercury__digraph__TypeCtorInfo_24_24 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
            {
              mercury__digraph__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_24_24));
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
            }
            {
              mercury__digraph__TypeClassInfo_for_enum_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_27, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_26));
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_27, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_27, 2) = ((MR_Box) (mercury__digraph__TypeInfo_25_25));
            }
            mercury__digraph__V_6_42 = (MR_Word) mercury__digraph__STATE_VARIABLE_Visited_0_11;
            mercury__digraph__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_27, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              mercury__digraph__conv3_V_9_44 = mercury__digraph__func_2(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_27), ((MR_Box) (mercury__digraph__X_8)));
            }
            mercury__digraph__V_9_44 = ((MR_Integer) mercury__digraph__conv3_V_9_44);
            {
              mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__V_6_42, mercury__digraph__V_9_44, &mercury__digraph__V_5_45);
            }
            mercury__digraph__V_6_49 = (MR_Word) mercury__digraph__SuccXs_10;
            mercury__digraph__STATE_VARIABLE_Visited_13_13 = (MR_Word) mercury__digraph__V_5_45;
            {
              mercury__digraph__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__digraph__Var_16, 0) = ((MR_Box) (mercury__digraph__X_8));
              MR_hl_field(MR_mktag(1), mercury__digraph__Var_16, 1) = ((MR_Box) (mercury__digraph__Ancestors_7));
            }
            {
              mercury__digraph__succeeded = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_17, mercury__digraph__G_6, mercury__digraph__Var_16, mercury__digraph__TypeClassInfo_for_enum_27, mercury__digraph__V_6_49, mercury__digraph__STATE_VARIABLE_Visited_13_13, mercury__digraph__STATE_VARIABLE_Visited_12);
            }
          }
      }
    return mercury__digraph__succeeded;
  }
}

static void MR_CALL 
mercury__digraph__accumulate_digraph_key_set_4_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_13,
  MR_Word mercury__digraph__KMap_5,
  MR_Word mercury__digraph__X_6,
  MR_Word mercury__digraph__STATE_VARIABLE_Set_0_10,
  MR_Word * mercury__digraph__STATE_VARIABLE_Set_11)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_15_15 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeInfo_16_16;
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_17;
    MR_Word mercury__digraph__TypeClassInfo_for_enum_18;
    MR_Integer mercury__digraph__XI_8 = (MR_Integer) mercury__digraph__X_6;
    MR_Word mercury__digraph__Y_9;
    MR_Word mercury__digraph__V_6_25;
    MR_Integer mercury__digraph__V_9_27;
    MR_Word mercury__digraph__V_5_28;
    MR_Box mercury__digraph__conv0_Y_9;
    MR_Box MR_CALL (* mercury__digraph__func_1)(MR_Box, MR_Box);
    MR_Box mercury__digraph__conv2_V_9_27;

    {
      mercury__digraph__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_15_15));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_16_16, (MR_Word) mercury__digraph__KMap_5, mercury__digraph__XI_8, &mercury__digraph__conv0_Y_9);
    }
    mercury__digraph__Y_9 = ((MR_Word) mercury__digraph__conv0_Y_9);
    mercury__digraph__BaseTypeClassInfo_for_enum_17 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
    {
      mercury__digraph__TypeClassInfo_for_enum_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_18, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_17));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_18, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_18, 2) = ((MR_Box) (mercury__digraph__TypeInfo_16_16));
    }
    mercury__digraph__V_6_25 = (MR_Word) mercury__digraph__STATE_VARIABLE_Set_0_10;
    mercury__digraph__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_18, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__digraph__conv2_V_9_27 = mercury__digraph__func_1(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_18), ((MR_Box) (mercury__digraph__Y_9)));
    }
    mercury__digraph__V_9_27 = ((MR_Integer) mercury__digraph__conv2_V_9_27);
    {
      mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__V_6_25, mercury__digraph__V_9_27, &mercury__digraph__V_5_28);
    }
    *mercury__digraph__STATE_VARIABLE_Set_11 = (MR_Word) mercury__digraph__V_5_28;
  }
}

static void MR_CALL 
mercury__digraph__add_composition_edges_5_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_16,
  MR_Word mercury__digraph__KMap1_6,
  MR_Word mercury__digraph__KMap2_7,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Word mercury__digraph__STATE_VARIABLE_Comp_0_11,
  MR_Word * mercury__digraph__STATE_VARIABLE_Comp_12)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_13_25 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_27;
    MR_Word mercury__digraph__TypeInfo_14_49;
    MR_Word mercury__digraph__TypeClassInfo_for_enum_51;
    MR_Word mercury__digraph__Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word mercury__digraph__Ys_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word mercury__digraph__Var_13;
    MR_Word mercury__digraph__Var_14;
    MR_Word mercury__digraph__Var_21;
    MR_Word mercury__digraph__V_2_31;
    MR_Word mercury__digraph__V_6_35;
    MR_Word mercury__digraph__V_6_58;

    {
      mercury__digraph__TypeInfo_14_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_49, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_13_25));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_49, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_16));
    }
    mercury__digraph__V_2_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__digraph__Var_21 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    mercury__digraph__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
    {
      mercury__digraph__TypeClassInfo_for_enum_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_51, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_27));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_51, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_16));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_51, 2) = ((MR_Box) (mercury__digraph__TypeInfo_14_49));
    }
    mercury__digraph__V_6_35 = (MR_Word) mercury__digraph__Xs_8;
    {
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_16, mercury__digraph__KMap1_6, mercury__digraph__TypeClassInfo_for_enum_51, mercury__digraph__V_6_35, mercury__digraph__Var_21, &mercury__digraph__Var_13);
    }
    mercury__digraph__V_6_58 = (MR_Word) mercury__digraph__Ys_9;
    {
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_16, mercury__digraph__KMap2_7, mercury__digraph__TypeClassInfo_for_enum_51, mercury__digraph__V_6_58, mercury__digraph__Var_21, &mercury__digraph__Var_14);
    }
    {
      mercury__digraph__add_cartesian_product_4_p_0(mercury__digraph__TypeInfo_for_T_16, mercury__digraph__Var_13, mercury__digraph__Var_14, mercury__digraph__STATE_VARIABLE_Comp_0_11, mercury__digraph__STATE_VARIABLE_Comp_12);
    }
  }
}

static void MR_CALL 
mercury__digraph__find_necessary_keys_5_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_16,
  MR_Word mercury__digraph__HeadVar__1_1,
  MR_Word mercury__digraph__STATE_VARIABLE_Needed1_0_10,
  MR_Word * mercury__digraph__STATE_VARIABLE_Needed1_11,
  MR_Word mercury__digraph__STATE_VARIABLE_Needed2_0_12,
  MR_Word * mercury__digraph__STATE_VARIABLE_Needed2_13)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__digraph__Ys_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__digraph__V_4_22 = (MR_Word) mercury__digraph__Xs_6;
    MR_Word mercury__digraph__V_5_23 = (MR_Word) mercury__digraph__STATE_VARIABLE_Needed1_0_10;
    MR_Word mercury__digraph__V_6_24;
    MR_Word mercury__digraph__V_4_28;
    MR_Word mercury__digraph__V_5_29;
    MR_Word mercury__digraph__V_6_30;

    {
      mercury__digraph__V_6_24 = mercury__sparse_bitset__union_2_2_f_0(mercury__digraph__V_4_22, mercury__digraph__V_5_23);
    }
    *mercury__digraph__STATE_VARIABLE_Needed1_11 = (MR_Word) mercury__digraph__V_6_24;
    mercury__digraph__V_4_28 = (MR_Word) mercury__digraph__Ys_7;
    mercury__digraph__V_5_29 = (MR_Word) mercury__digraph__STATE_VARIABLE_Needed2_0_12;
    {
      mercury__digraph__V_6_30 = mercury__sparse_bitset__union_2_2_f_0(mercury__digraph__V_4_28, mercury__digraph__V_5_29);
    }
    *mercury__digraph__STATE_VARIABLE_Needed2_13 = (MR_Word) mercury__digraph__V_6_30;
  }
}

void MR_CALL 
mercury__digraph__keys_2_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_9,
  MR_Word mercury__digraph__G_3,
  MR_Word * mercury__digraph__Keys_4)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_10_10 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeInfo_11_11;
    MR_Word mercury__digraph__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
    MR_Word mercury__digraph__V_4_14;
    MR_Word mercury__digraph__V_5_19;
    MR_Integer mercury__digraph__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
    MR_Word mercury__digraph__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
    MR_Word mercury__digraph__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
    MR_Word mercury__digraph__V_3_13;
    MR_Word mercury__digraph__conv0_Keys_4;

    {
      mercury__digraph__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_11, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_10));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_11, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_9));
    }
    mercury__digraph__V_3_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_5, (MR_Integer) 0)));
    mercury__digraph__V_4_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_5, (MR_Integer) 1)));
    mercury__digraph__V_5_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__keys_acc_3_p_0(mercury__digraph__TypeInfo_11_11, mercury__digraph__TypeInfo_for_T_9, (MR_Word) mercury__digraph__V_4_14, (MR_Word) mercury__digraph__V_5_19, &mercury__digraph__conv0_Keys_4);
    }
    *mercury__digraph__Keys_4 = (MR_Word) mercury__digraph__conv0_Keys_4;
  }
}

void MR_CALL 
mercury__digraph__dfs_2_6_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_21,
  MR_Word mercury__digraph__G_7,
  MR_Word mercury__digraph__X_8,
  MR_Word mercury__digraph__STATE_VARIABLE_Visited_0_12,
  MR_Word * mercury__digraph__STATE_VARIABLE_Visited_13,
  MR_Word mercury__digraph__STATE_VARIABLE_DfsRev_0_14,
  MR_Word * mercury__digraph__STATE_VARIABLE_DfsRev_15)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_22_22 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeInfo_23_23;
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_24 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
    MR_Word mercury__digraph__TypeClassInfo_for_enum_25;
    MR_Word mercury__digraph__V_3_40;
    MR_Integer mercury__digraph__V_5_41;
    MR_Box MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box);
    MR_Box mercury__digraph__conv1_V_5_41;

    {
      mercury__digraph__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_23, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_22_22));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_21));
    }
    {
      mercury__digraph__TypeClassInfo_for_enum_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_25, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_24));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_25, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_21));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_25, 2) = ((MR_Box) (mercury__digraph__TypeInfo_23_23));
    }
    mercury__digraph__V_3_40 = (MR_Word) mercury__digraph__STATE_VARIABLE_Visited_0_12;
    mercury__digraph__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_25, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__digraph__conv1_V_5_41 = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_25), ((MR_Box) (mercury__digraph__X_8)));
    }
    mercury__digraph__V_5_41 = ((MR_Integer) mercury__digraph__conv1_V_5_41);
    {
      mercury__digraph__succeeded = mercury__sparse_bitset__contains_search_nodes_2_p_0(mercury__digraph__V_3_40, mercury__digraph__V_5_41);
    }
    if (mercury__digraph__succeeded)
      {
        *mercury__digraph__STATE_VARIABLE_DfsRev_15 = mercury__digraph__STATE_VARIABLE_DfsRev_0_14;
        *mercury__digraph__STATE_VARIABLE_Visited_13 = mercury__digraph__STATE_VARIABLE_Visited_0_12;
      }
    else
      {
        MR_Word mercury__digraph__TypeCtorInfo_26_26;
        MR_Word mercury__digraph__TypeInfo_27_27;
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_28;
        MR_Word mercury__digraph__TypeClassInfo_for_enum_29;
        MR_Word mercury__digraph__SuccXs_11;
        MR_Word mercury__digraph__STATE_VARIABLE_Visited_16_16;
        MR_Word mercury__digraph__STATE_VARIABLE_DfsRev_19_19;
        MR_Word mercury__digraph__V_6_45;
        MR_Integer mercury__digraph__V_9_47;
        MR_Word mercury__digraph__V_5_48;
        MR_Word mercury__digraph__V_8_54;
        MR_Box MR_CALL (* mercury__digraph__func_2)(MR_Box, MR_Box);
        MR_Box mercury__digraph__conv3_V_9_47;

        {
          mercury__digraph__lookup_key_set_from_3_p_0(mercury__digraph__TypeInfo_for_T_21, mercury__digraph__G_7, mercury__digraph__X_8, &mercury__digraph__SuccXs_11);
        }
        mercury__digraph__BaseTypeClassInfo_for_enum_28 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
        mercury__digraph__TypeCtorInfo_26_26 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
        {
          mercury__digraph__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_26_26));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_21));
        }
        {
          mercury__digraph__TypeClassInfo_for_enum_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_28));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_21));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, 2) = ((MR_Box) (mercury__digraph__TypeInfo_27_27));
        }
        mercury__digraph__V_6_45 = (MR_Word) mercury__digraph__STATE_VARIABLE_Visited_0_12;
        mercury__digraph__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__digraph__conv3_V_9_47 = mercury__digraph__func_2(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__X_8)));
        }
        mercury__digraph__V_9_47 = ((MR_Integer) mercury__digraph__conv3_V_9_47);
        {
          mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__V_6_45, mercury__digraph__V_9_47, &mercury__digraph__V_5_48);
        }
        mercury__digraph__STATE_VARIABLE_Visited_16_16 = (MR_Word) mercury__digraph__V_5_48;
        mercury__digraph__V_8_54 = (MR_Word) mercury__digraph__SuccXs_11;
        {
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_56_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_21, mercury__digraph__G_7, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_54, mercury__digraph__STATE_VARIABLE_Visited_16_16, mercury__digraph__STATE_VARIABLE_Visited_13, mercury__digraph__STATE_VARIABLE_DfsRev_0_14, &mercury__digraph__STATE_VARIABLE_DfsRev_19_19);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__digraph__STATE_VARIABLE_DfsRev_15 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__digraph__X_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__digraph__STATE_VARIABLE_DfsRev_19_19));
        }
      }
  }
}

void MR_CALL 
mercury__digraph__to_key_assoc_list_2_4_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_20,
  MR_Word mercury__digraph__HeadVar__1_1,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__STATE_VARIABLE_AL_0_3,
  MR_Word * mercury__digraph__STATE_VARIABLE_AL_4)
{
  {
    MR_bool mercury__digraph__succeeded;

    if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__digraph__STATE_VARIABLE_AL_4 = mercury__digraph__STATE_VARIABLE_AL_0_3;
    else
      {
        MR_Word mercury__digraph__TypeCtorInfo_22_22;
        MR_Word mercury__digraph__TypeInfo_23_23;
        MR_Word mercury__digraph__TypeCtorInfo_24_24;
        MR_Word mercury__digraph__TypeInfo_25_25;
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_29;
        MR_Word mercury__digraph__TypeClassInfo_for_enum_30;
        MR_Integer mercury__digraph__XI_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__digraph__XIs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__digraph__SuccXs_13;
        MR_Word mercury__digraph__STATE_VARIABLE_AL_16_16;
        MR_Word mercury__digraph__Var_19;
        MR_Word mercury__digraph__V_6_38;
        MR_Box mercury__digraph__conv0_SuccXs_13;

        {
          mercury__digraph__to_key_assoc_list_2_4_p_0(mercury__digraph__TypeInfo_for_T_20, mercury__digraph__HeadVar__1_1, mercury__digraph__XIs_11, mercury__digraph__STATE_VARIABLE_AL_0_3, &mercury__digraph__STATE_VARIABLE_AL_16_16);
        }
        mercury__digraph__TypeCtorInfo_24_24 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
        mercury__digraph__TypeCtorInfo_22_22 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
        {
          mercury__digraph__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_23, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_22_22));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_20));
        }
        {
          mercury__digraph__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_24_24));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 1) = ((MR_Box) (mercury__digraph__TypeInfo_23_23));
        }
        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_25_25, (MR_Word) mercury__digraph__HeadVar__1_1, mercury__digraph__XI_10, &mercury__digraph__conv0_SuccXs_13);
        }
        mercury__digraph__SuccXs_13 = ((MR_Word) mercury__digraph__conv0_SuccXs_13);
        mercury__digraph__Var_19 = (MR_Word) mercury__digraph__XI_10;
        mercury__digraph__BaseTypeClassInfo_for_enum_29 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
        {
          mercury__digraph__TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_30, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_29));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_30, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_20));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_30, 2) = ((MR_Box) (mercury__digraph__TypeInfo_23_23));
        }
        mercury__digraph__V_6_38 = (MR_Word) mercury__digraph__SuccXs_13;
        {
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__Var_19, mercury__digraph__TypeClassInfo_for_enum_30, mercury__digraph__V_6_38, mercury__digraph__STATE_VARIABLE_AL_16_16, mercury__digraph__STATE_VARIABLE_AL_4);
        }
      }
  }
}

void MR_CALL 
mercury__digraph__to_assoc_list_2_5_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_24,
  MR_Word mercury__digraph__HeadVar__1_1,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__VMap_3,
  MR_Word mercury__digraph__STATE_VARIABLE_AL_0_4,
  MR_Word * mercury__digraph__STATE_VARIABLE_AL_5)
{
  {
    MR_bool mercury__digraph__succeeded;

    if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__digraph__STATE_VARIABLE_AL_5 = mercury__digraph__STATE_VARIABLE_AL_0_4;
    else
      {
        MR_Word mercury__digraph__TypeCtorInfo_25_25;
        MR_Word mercury__digraph__TypeInfo_26_26;
        MR_Word mercury__digraph__TypeCtorInfo_28_28;
        MR_Word mercury__digraph__TypeInfo_29_29;
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_33;
        MR_Word mercury__digraph__TypeClassInfo_for_enum_34;
        MR_Integer mercury__digraph__XI_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__digraph__XIs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
        MR_Box mercury__digraph__VX_16;
        MR_Word mercury__digraph__SuccXs_17;
        MR_Word mercury__digraph__STATE_VARIABLE_AL_20_20;
        MR_Word mercury__digraph__Var_21;
        MR_Word mercury__digraph__V_5_42;
        MR_Word mercury__digraph__V_6_46;
        MR_Word mercury__digraph__V_4_41;
        MR_Box mercury__digraph__conv0_SuccXs_17;

        {
          mercury__digraph__to_assoc_list_2_5_p_0(mercury__digraph__TypeInfo_for_T_24, mercury__digraph__HeadVar__1_1, mercury__digraph__XIs_13, mercury__digraph__VMap_3, mercury__digraph__STATE_VARIABLE_AL_0_4, &mercury__digraph__STATE_VARIABLE_AL_20_20);
        }
        mercury__digraph__Var_21 = (MR_Word) mercury__digraph__XI_12;
        mercury__digraph__TypeCtorInfo_25_25 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
        {
          mercury__digraph__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_26_26, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_25_25));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_26_26, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_24));
        }
        mercury__digraph__V_4_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__VMap_3, (MR_Integer) 0)));
        mercury__digraph__V_5_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__VMap_3, (MR_Integer) 1)));
        {
          mercury__map__lookup_3_p_0(mercury__digraph__TypeInfo_26_26, mercury__digraph__TypeInfo_for_T_24, (MR_Word) mercury__digraph__V_5_42, ((MR_Box) (mercury__digraph__Var_21)), &mercury__digraph__VX_16);
        }
        mercury__digraph__TypeCtorInfo_28_28 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
        {
          mercury__digraph__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_28_28));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 1) = ((MR_Box) (mercury__digraph__TypeInfo_26_26));
        }
        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_29_29, (MR_Word) mercury__digraph__HeadVar__1_1, mercury__digraph__XI_12, &mercury__digraph__conv0_SuccXs_17);
        }
        mercury__digraph__SuccXs_17 = ((MR_Word) mercury__digraph__conv0_SuccXs_17);
        mercury__digraph__BaseTypeClassInfo_for_enum_33 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
        {
          mercury__digraph__TypeClassInfo_for_enum_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_34, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_33));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_34, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_24));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_34, 2) = ((MR_Box) (mercury__digraph__TypeInfo_26_26));
        }
        mercury__digraph__V_6_46 = (MR_Word) mercury__digraph__SuccXs_17;
        {
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_24, mercury__digraph__VMap_3, mercury__digraph__VX_16, mercury__digraph__TypeClassInfo_for_enum_34, mercury__digraph__V_6_46, mercury__digraph__STATE_VARIABLE_AL_20_20, mercury__digraph__STATE_VARIABLE_AL_5);
        }
      }
  }
}

static MR_Word MR_CALL 
mercury__digraph__key_set_map_delete_3_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_11,
  MR_Word mercury__digraph__Map0_5,
  MR_Integer mercury__digraph__XI_6,
  MR_Word mercury__digraph__Y_7)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__Map_8;
    MR_Word mercury__digraph__TypeInfo_14_14;
    MR_Word mercury__digraph__TypeInfo_16_16;
    MR_Word mercury__digraph__SuccXs0_9;
    MR_Word mercury__digraph__TypeCtorInfo_13_13 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeCtorInfo_15_15 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    MR_Box mercury__digraph__conv0_SuccXs0_9;

    {
      mercury__digraph__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_14, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_13_13));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_14, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_11));
    }
    {
      mercury__digraph__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_15_15));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 1) = ((MR_Box) (mercury__digraph__TypeInfo_14_14));
    }
    {
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_16_16, (MR_Word) mercury__digraph__Map0_5, mercury__digraph__XI_6, &mercury__digraph__conv0_SuccXs0_9);
    }
    if (mercury__digraph__succeeded)
      {
        mercury__digraph__SuccXs0_9 = ((MR_Word) mercury__digraph__conv0_SuccXs0_9);
        mercury__digraph__succeeded = MR_TRUE;
      }
    if (mercury__digraph__succeeded)
      {
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
        MR_Word mercury__digraph__TypeClassInfo_for_enum_20;
        MR_Word mercury__digraph__TypeCtorInfo_21_21;
        MR_Word mercury__digraph__SuccXs_10;
        MR_Word mercury__digraph__V_6_46;
        MR_Integer mercury__digraph__V_9_48;
        MR_Word mercury__digraph__V_4_50;
        MR_Word mercury__digraph__V_5_51;
        MR_Word mercury__digraph__V_6_52;
        MR_Box MR_CALL (* mercury__digraph__func_1)(MR_Box, MR_Box);
        MR_Box mercury__digraph__conv2_V_9_48;

        {
          mercury__digraph__TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_20, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_19));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_20, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_11));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_20, 2) = ((MR_Box) (mercury__digraph__TypeInfo_14_14));
        }
        mercury__digraph__V_6_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__digraph__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__digraph__conv2_V_9_48 = mercury__digraph__func_1(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_20), ((MR_Box) (mercury__digraph__Y_7)));
        }
        mercury__digraph__V_9_48 = ((MR_Integer) mercury__digraph__conv2_V_9_48);
        {
          mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__V_6_46, mercury__digraph__V_9_48, &mercury__digraph__V_5_51);
        }
        mercury__digraph__V_4_50 = (MR_Word) mercury__digraph__SuccXs0_9;
        {
          mercury__digraph__V_6_52 = mercury__sparse_bitset__difference_2_2_f_0(mercury__digraph__V_4_50, mercury__digraph__V_5_51);
        }
        mercury__digraph__SuccXs_10 = (MR_Word) mercury__digraph__V_6_52;
        mercury__digraph__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        {
          mercury__map__det_update_4_p_0(mercury__digraph__TypeCtorInfo_21_21, mercury__digraph__TypeInfo_16_16, ((MR_Box) (mercury__digraph__XI_6)), ((MR_Box) (mercury__digraph__SuccXs_10)), mercury__digraph__Map0_5, &mercury__digraph__Map_8);
        }
      }
    else
      mercury__digraph__Map_8 = mercury__digraph__Map0_5;
    return mercury__digraph__Map_8;
  }
}

static MR_Word MR_CALL 
mercury__digraph__key_set_map_add_3_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_13,
  MR_Word mercury__digraph__Map0_5,
  MR_Integer mercury__digraph__XI_6,
  MR_Word mercury__digraph__Y_7)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__Map_8;
    MR_Word mercury__digraph__TypeInfo_16_16;
    MR_Word mercury__digraph__TypeInfo_18_18;
    MR_Word mercury__digraph__SuccXs0_9;
    MR_Word mercury__digraph__TypeCtorInfo_15_15 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeCtorInfo_17_17 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    MR_Box mercury__digraph__conv0_SuccXs0_9;

    {
      mercury__digraph__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_15_15));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
    }
    {
      mercury__digraph__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_18_18, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_17_17));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_18_18, 1) = ((MR_Box) (mercury__digraph__TypeInfo_16_16));
    }
    {
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_18_18, (MR_Word) mercury__digraph__Map0_5, mercury__digraph__XI_6, &mercury__digraph__conv0_SuccXs0_9);
    }
    if (mercury__digraph__succeeded)
      {
        mercury__digraph__SuccXs0_9 = ((MR_Word) mercury__digraph__conv0_SuccXs0_9);
        mercury__digraph__succeeded = MR_TRUE;
      }
    if (mercury__digraph__succeeded)
      {
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_21 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
        MR_Word mercury__digraph__TypeClassInfo_for_enum_22;
        MR_Word mercury__digraph__V_3_42;
        MR_Integer mercury__digraph__V_5_43;
        MR_Box MR_CALL (* mercury__digraph__func_1)(MR_Box, MR_Box);
        MR_Box mercury__digraph__conv2_V_5_43;

        {
          mercury__digraph__TypeClassInfo_for_enum_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_22, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_21));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_22, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_22, 2) = ((MR_Box) (mercury__digraph__TypeInfo_16_16));
        }
        mercury__digraph__V_3_42 = (MR_Word) mercury__digraph__SuccXs0_9;
        mercury__digraph__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_22, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__digraph__conv2_V_5_43 = mercury__digraph__func_1(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_22), ((MR_Box) (mercury__digraph__Y_7)));
        }
        mercury__digraph__V_5_43 = ((MR_Integer) mercury__digraph__conv2_V_5_43);
        {
          mercury__digraph__succeeded = mercury__sparse_bitset__contains_search_nodes_2_p_0(mercury__digraph__V_3_42, mercury__digraph__V_5_43);
        }
        if (mercury__digraph__succeeded)
          mercury__digraph__Map_8 = mercury__digraph__Map0_5;
        else
          {
            MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_25 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
            MR_Word mercury__digraph__TypeClassInfo_for_enum_26;
            MR_Word mercury__digraph__TypeCtorInfo_27_27;
            MR_Word mercury__digraph__SuccXs_10;
            MR_Word mercury__digraph__V_6_47;
            MR_Integer mercury__digraph__V_9_49;
            MR_Word mercury__digraph__V_5_50;
            MR_Box MR_CALL (* mercury__digraph__func_3)(MR_Box, MR_Box);
            MR_Box mercury__digraph__conv4_V_9_49;

            {
              mercury__digraph__TypeClassInfo_for_enum_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_26, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_25));
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_26, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_26, 2) = ((MR_Box) (mercury__digraph__TypeInfo_16_16));
            }
            mercury__digraph__V_6_47 = (MR_Word) mercury__digraph__SuccXs0_9;
            mercury__digraph__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_26, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              mercury__digraph__conv4_V_9_49 = mercury__digraph__func_3(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_26), ((MR_Box) (mercury__digraph__Y_7)));
            }
            mercury__digraph__V_9_49 = ((MR_Integer) mercury__digraph__conv4_V_9_49);
            {
              mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__V_6_47, mercury__digraph__V_9_49, &mercury__digraph__V_5_50);
            }
            mercury__digraph__SuccXs_10 = (MR_Word) mercury__digraph__V_5_50;
            mercury__digraph__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            {
              mercury__map__det_update_4_p_0(mercury__digraph__TypeCtorInfo_27_27, mercury__digraph__TypeInfo_18_18, ((MR_Box) (mercury__digraph__XI_6)), ((MR_Box) (mercury__digraph__SuccXs_10)), mercury__digraph__Map0_5, &mercury__digraph__Map_8);
            }
          }
      }
    else
      {
        MR_Word mercury__digraph__TypeCtorInfo_30_30 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
        MR_Word mercury__digraph__TypeInfo_31_31;
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_32;
        MR_Word mercury__digraph__TypeClassInfo_for_enum_33;
        MR_Word mercury__digraph__TypeCtorInfo_34_34;
        MR_Word mercury__digraph__TypeCtorInfo_35_35;
        MR_Word mercury__digraph__TypeInfo_36_36;
        MR_Word mercury__digraph__SuccXs_12;
        MR_Word mercury__digraph__V_6_60;
        MR_Integer mercury__digraph__V_9_62;
        MR_Word mercury__digraph__V_5_63;
        MR_Box MR_CALL (* mercury__digraph__func_5)(MR_Box, MR_Box);
        MR_Box mercury__digraph__conv6_V_9_62;

        {
          mercury__digraph__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_31_31, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_30_30));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_31_31, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
        }
        mercury__digraph__V_6_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__digraph__BaseTypeClassInfo_for_enum_32 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
        {
          mercury__digraph__TypeClassInfo_for_enum_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_33, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_32));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_33, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_33, 2) = ((MR_Box) (mercury__digraph__TypeInfo_31_31));
        }
        mercury__digraph__func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_33, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__digraph__conv6_V_9_62 = mercury__digraph__func_5(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_33), ((MR_Box) (mercury__digraph__Y_7)));
        }
        mercury__digraph__V_9_62 = ((MR_Integer) mercury__digraph__conv6_V_9_62);
        {
          mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__V_6_60, mercury__digraph__V_9_62, &mercury__digraph__V_5_63);
        }
        mercury__digraph__SuccXs_12 = (MR_Word) mercury__digraph__V_5_63;
        mercury__digraph__TypeCtorInfo_34_34 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        mercury__digraph__TypeCtorInfo_35_35 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
        {
          mercury__digraph__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_36_36, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_35_35));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_36_36, 1) = ((MR_Box) (mercury__digraph__TypeInfo_31_31));
        }
        {
          mercury__map__det_insert_4_p_0(mercury__digraph__TypeCtorInfo_34_34, mercury__digraph__TypeInfo_36_36, ((MR_Box) (mercury__digraph__XI_6)), ((MR_Box) (mercury__digraph__SuccXs_12)), mercury__digraph__Map0_5, &mercury__digraph__Map_8);
        }
      }
    return mercury__digraph__Map_8;
  }
}

void MR_CALL 
mercury__digraph__traverse_5_p_1(
  MR_Word mercury__digraph__TypeInfo_for_T_14,
  MR_Word mercury__digraph__TypeInfo_for_A_15,
  MR_Word mercury__digraph__Graph_6,
  MR_Word mercury__digraph__ProcessVertex_7,
  MR_Word mercury__digraph__ProcessEdge_8,
  MR_Box mercury__digraph__STATE_VARIABLE_Acc_0_11,
  MR_Box * mercury__digraph__STATE_VARIABLE_Acc_12)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_10_22 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeInfo_11_23;
    MR_Word mercury__digraph__VertexKeys_10;
    MR_Word mercury__digraph__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Graph_6, (MR_Integer) 1)));
    MR_Word mercury__digraph__V_4_26;
    MR_Word mercury__digraph__V_5_31;
    MR_Integer mercury__digraph__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__Graph_6, (MR_Integer) 0)));
    MR_Word mercury__digraph__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Graph_6, (MR_Integer) 2)));
    MR_Word mercury__digraph__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Graph_6, (MR_Integer) 3)));
    MR_Word mercury__digraph__V_3_25;
    MR_Word mercury__digraph__conv0_VertexKeys_10;

    {
      mercury__digraph__TypeInfo_11_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_23, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_22));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_14));
    }
    mercury__digraph__V_3_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_18, (MR_Integer) 0)));
    mercury__digraph__V_4_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_18, (MR_Integer) 1)));
    mercury__digraph__V_5_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__keys_acc_3_p_0(mercury__digraph__TypeInfo_11_23, mercury__digraph__TypeInfo_for_T_14, (MR_Word) mercury__digraph__V_4_26, (MR_Word) mercury__digraph__V_5_31, &mercury__digraph__conv0_VertexKeys_10);
    }
    mercury__digraph__VertexKeys_10 = (MR_Word) mercury__digraph__conv0_VertexKeys_10;
    {
      mercury__digraph__traverse_2_6_p_1(mercury__digraph__TypeInfo_for_T_14, mercury__digraph__TypeInfo_for_A_15, mercury__digraph__Graph_6, mercury__digraph__ProcessVertex_7, mercury__digraph__ProcessEdge_8, mercury__digraph__VertexKeys_10, mercury__digraph__STATE_VARIABLE_Acc_0_11, mercury__digraph__STATE_VARIABLE_Acc_12);
    }
  }
}

void MR_CALL 
mercury__digraph__traverse_5_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_14,
  MR_Word mercury__digraph__TypeInfo_for_A_15,
  MR_Word mercury__digraph__Graph_6,
  MR_Word mercury__digraph__ProcessVertex_7,
  MR_Word mercury__digraph__ProcessEdge_8,
  MR_Box mercury__digraph__STATE_VARIABLE_Acc_0_11,
  MR_Box * mercury__digraph__STATE_VARIABLE_Acc_12)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_10_22 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeInfo_11_23;
    MR_Word mercury__digraph__VertexKeys_10;
    MR_Word mercury__digraph__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Graph_6, (MR_Integer) 1)));
    MR_Word mercury__digraph__V_4_26;
    MR_Word mercury__digraph__V_5_31;
    MR_Integer mercury__digraph__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__Graph_6, (MR_Integer) 0)));
    MR_Word mercury__digraph__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Graph_6, (MR_Integer) 2)));
    MR_Word mercury__digraph__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Graph_6, (MR_Integer) 3)));
    MR_Word mercury__digraph__V_3_25;
    MR_Word mercury__digraph__conv0_VertexKeys_10;

    {
      mercury__digraph__TypeInfo_11_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_23, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_22));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_14));
    }
    mercury__digraph__V_3_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_18, (MR_Integer) 0)));
    mercury__digraph__V_4_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_18, (MR_Integer) 1)));
    mercury__digraph__V_5_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__keys_acc_3_p_0(mercury__digraph__TypeInfo_11_23, mercury__digraph__TypeInfo_for_T_14, (MR_Word) mercury__digraph__V_4_26, (MR_Word) mercury__digraph__V_5_31, &mercury__digraph__conv0_VertexKeys_10);
    }
    mercury__digraph__VertexKeys_10 = (MR_Word) mercury__digraph__conv0_VertexKeys_10;
    {
      mercury__digraph__traverse_2_6_p_0(mercury__digraph__TypeInfo_for_T_14, mercury__digraph__TypeInfo_for_A_15, mercury__digraph__Graph_6, mercury__digraph__ProcessVertex_7, mercury__digraph__ProcessEdge_8, mercury__digraph__VertexKeys_10, mercury__digraph__STATE_VARIABLE_Acc_0_11, mercury__digraph__STATE_VARIABLE_Acc_12);
    }
  }
}

void MR_CALL 
mercury__digraph__rtc_2_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_16,
  MR_Word mercury__digraph__G_3,
  MR_Word * mercury__digraph__STATE_VARIABLE_Rtc_13)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_7_25;
    MR_Word mercury__digraph__TypeInfo_8_26;
    MR_Word mercury__digraph__Dfs_5;
    MR_Word mercury__digraph__Vis_6;
    MR_Integer mercury__digraph__NextKey_7;
    MR_Word mercury__digraph__VMap_8;
    MR_Word mercury__digraph__FwdMap_11;
    MR_Word mercury__digraph__BwdMap_12;
    MR_Word mercury__digraph__STATE_VARIABLE_Rtc_14_14;
    MR_Word mercury__digraph__DfsRev_24;
    MR_Word mercury__digraph__V_2_28;
    MR_Word mercury__digraph__conv0_Dfs_5;
    MR_Word mercury__digraph__Var_9;
    MR_Word mercury__digraph__Var_10;

    {
      mercury__digraph__dfsrev_2_p_0(mercury__digraph__TypeInfo_for_T_16, mercury__digraph__G_3, &mercury__digraph__DfsRev_24);
    }
    mercury__digraph__TypeCtorInfo_7_25 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    {
      mercury__digraph__TypeInfo_8_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_26, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_25));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_26, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_16));
    }
    {
      mercury__list__reverse_2_p_0(mercury__digraph__TypeInfo_8_26, (MR_Word) mercury__digraph__DfsRev_24, &mercury__digraph__conv0_Dfs_5);
    }
    mercury__digraph__Dfs_5 = (MR_Word) mercury__digraph__conv0_Dfs_5;
    mercury__digraph__V_2_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__digraph__Vis_6 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    mercury__digraph__NextKey_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
    mercury__digraph__VMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
    mercury__digraph__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
    mercury__digraph__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
    mercury__digraph__FwdMap_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__digraph__BwdMap_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__digraph__STATE_VARIABLE_Rtc_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_Rtc_14_14, 0) = ((MR_Box) (mercury__digraph__NextKey_7));
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_Rtc_14_14, 1) = ((MR_Box) (mercury__digraph__VMap_8));
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_Rtc_14_14, 2) = ((MR_Box) (mercury__digraph__FwdMap_11));
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_Rtc_14_14, 3) = ((MR_Box) (mercury__digraph__BwdMap_12));
    }
    {
      mercury__digraph__rtc_2_5_p_0(mercury__digraph__TypeInfo_for_T_16, mercury__digraph__Dfs_5, mercury__digraph__G_3, mercury__digraph__Vis_6, mercury__digraph__STATE_VARIABLE_Rtc_14_14, mercury__digraph__STATE_VARIABLE_Rtc_13);
    }
  }
}

MR_Word MR_CALL 
mercury__digraph__rtc_1_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_5,
  MR_Word mercury__digraph__G_3)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__Rtc_4;

    {
      mercury__digraph__rtc_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__Rtc_4);
    }
    return mercury__digraph__Rtc_4;
  }
}

void MR_CALL 
mercury__digraph__tc_2_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_9,
  MR_Word mercury__digraph__G_3,
  MR_Word * mercury__digraph__Tc_4)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_10_16;
    MR_Word mercury__digraph__TypeInfo_11_17;
    MR_Word mercury__digraph__Rtc_5;
    MR_Word mercury__digraph__Keys_6;
    MR_Word mercury__digraph__Fakes_7;
    MR_Word mercury__digraph__Var_8;
    MR_Word mercury__digraph__Var_12;
    MR_Word mercury__digraph__V_4_20;
    MR_Word mercury__digraph__V_5_25;
    MR_Integer mercury__digraph__Var_13;
    MR_Word mercury__digraph__Var_14;
    MR_Word mercury__digraph__Var_15;
    MR_Word mercury__digraph__V_3_19;
    MR_Word mercury__digraph__conv0_Keys_6;

    {
      mercury__digraph__rtc_2_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__G_3, &mercury__digraph__Rtc_5);
    }
    mercury__digraph__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
    mercury__digraph__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
    mercury__digraph__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
    mercury__digraph__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
    mercury__digraph__TypeCtorInfo_10_16 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    {
      mercury__digraph__TypeInfo_11_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_16));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_9));
    }
    mercury__digraph__V_3_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_12, (MR_Integer) 0)));
    mercury__digraph__V_4_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_12, (MR_Integer) 1)));
    mercury__digraph__V_5_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__keys_acc_3_p_0(mercury__digraph__TypeInfo_11_17, mercury__digraph__TypeInfo_for_T_9, (MR_Word) mercury__digraph__V_4_20, (MR_Word) mercury__digraph__V_5_25, &mercury__digraph__conv0_Keys_6);
    }
    mercury__digraph__Keys_6 = (MR_Word) mercury__digraph__conv0_Keys_6;
    mercury__digraph__Var_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__digraph__detect_fake_reflexives_5_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__G_3, mercury__digraph__Rtc_5, mercury__digraph__Keys_6, mercury__digraph__Var_8, &mercury__digraph__Fakes_7);
    }
    {
      mercury__digraph__delete_assoc_list_3_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__Fakes_7, mercury__digraph__Rtc_5, mercury__digraph__Tc_4);
    }
  }
}

MR_Word MR_CALL 
mercury__digraph__tc_1_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_5,
  MR_Word mercury__digraph__G_3)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__Tc_4;

    {
      mercury__digraph__tc_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__Tc_4);
    }
    return mercury__digraph__Tc_4;
  }
}

void MR_CALL 
mercury__digraph__sc_2_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_7,
  MR_Word mercury__digraph__G_3,
  MR_Word * mercury__digraph__Sc_4)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__GInv_5;
    MR_Word mercury__digraph__GInvList_6;
    MR_Integer mercury__digraph__Next_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
    MR_Word mercury__digraph__VMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
    MR_Word mercury__digraph__Fwd_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
    MR_Word mercury__digraph__Bwd_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));

    {
      mercury__digraph__GInv_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_5, 0) = ((MR_Box) (mercury__digraph__Next_10));
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_5, 1) = ((MR_Box) (mercury__digraph__VMap_11));
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_5, 2) = ((MR_Box) (mercury__digraph__Bwd_13));
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_5, 3) = ((MR_Box) (mercury__digraph__Fwd_12));
    }
    {
      mercury__digraph__to_key_assoc_list_2_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__GInv_5, &mercury__digraph__GInvList_6);
    }
    {
      mercury__digraph__add_assoc_list_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__GInvList_6, mercury__digraph__G_3, mercury__digraph__Sc_4);
    }
  }
}

MR_Word MR_CALL 
mercury__digraph__sc_1_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_5,
  MR_Word mercury__digraph__G_3)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__Sc_4;
    MR_Word mercury__digraph__GInv_8;
    MR_Word mercury__digraph__GInvList_9;
    MR_Integer mercury__digraph__Next_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
    MR_Word mercury__digraph__VMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
    MR_Word mercury__digraph__Fwd_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
    MR_Word mercury__digraph__Bwd_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));

    {
      mercury__digraph__GInv_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_8, 0) = ((MR_Box) (mercury__digraph__Next_12));
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_8, 1) = ((MR_Box) (mercury__digraph__VMap_13));
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_8, 2) = ((MR_Box) (mercury__digraph__Bwd_15));
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_8, 3) = ((MR_Box) (mercury__digraph__Fwd_14));
    }
    {
      mercury__digraph__to_key_assoc_list_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__GInv_8, &mercury__digraph__GInvList_9);
    }
    {
      mercury__digraph__add_assoc_list_3_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__GInvList_9, mercury__digraph__G_3, &mercury__digraph__Sc_4);
    }
    return mercury__digraph__Sc_4;
  }
}

MR_Word MR_CALL 
mercury__digraph__return_sccs_in_to_from_order_1_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_9,
  MR_Word mercury__digraph__G_3)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__ATsort_4;
    MR_Word mercury__digraph__DfsRev_5;
    MR_Word mercury__digraph__GInv_6;
    MR_Word mercury__digraph__Vis_7;
    MR_Word mercury__digraph__Var_8;
    MR_Integer mercury__digraph__Next_14;
    MR_Word mercury__digraph__VMap_15;
    MR_Word mercury__digraph__Fwd_16;
    MR_Word mercury__digraph__Bwd_17;
    MR_Word mercury__digraph__V_2_19;

    {
      mercury__digraph__dfsrev_2_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__G_3, &mercury__digraph__DfsRev_5);
    }
    mercury__digraph__Next_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
    mercury__digraph__VMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
    mercury__digraph__Fwd_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
    mercury__digraph__Bwd_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
    {
      mercury__digraph__GInv_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_6, 0) = ((MR_Box) (mercury__digraph__Next_14));
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_6, 1) = ((MR_Box) (mercury__digraph__VMap_15));
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_6, 2) = ((MR_Box) (mercury__digraph__Bwd_17));
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_6, 3) = ((MR_Box) (mercury__digraph__Fwd_16));
    }
    mercury__digraph__V_2_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__digraph__Vis_7 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    mercury__digraph__Var_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__digraph__atsort_2_5_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__DfsRev_5, mercury__digraph__GInv_6, mercury__digraph__Vis_7, mercury__digraph__Var_8, &mercury__digraph__ATsort_4);
    }
    return mercury__digraph__ATsort_4;
  }
}

MR_Word MR_CALL 
mercury__digraph__return_sccs_in_from_to_order_1_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_6,
  MR_Word mercury__digraph__G_3)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__ATsort_4;
    MR_Word mercury__digraph__TypeCtorInfo_7_7;
    MR_Word mercury__digraph__TypeInfo_8_8;
    MR_Word mercury__digraph__ATsort0_5;
    MR_Word mercury__digraph__conv0_ATsort_4;

    {
      mercury__digraph__ATsort0_5 = mercury__digraph__return_sccs_in_to_from_order_1_f_0(mercury__digraph__TypeInfo_for_T_6, mercury__digraph__G_3);
    }
    mercury__digraph__TypeCtorInfo_7_7 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
    {
      mercury__digraph__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_6));
    }
    {
      mercury__list__reverse_2_p_0(mercury__digraph__TypeInfo_8_8, (MR_Word) mercury__digraph__ATsort0_5, &mercury__digraph__conv0_ATsort_4);
    }
    mercury__digraph__ATsort_4 = (MR_Word) mercury__digraph__conv0_ATsort_4;
    return mercury__digraph__ATsort_4;
  }
}

void MR_CALL 
mercury__digraph__atsort_2_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_5,
  MR_Word mercury__digraph__G_3,
  MR_Word * mercury__digraph__ATsort_4)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_7_9;
    MR_Word mercury__digraph__TypeInfo_8_10;
    MR_Word mercury__digraph__ATsort0_8;
    MR_Word mercury__digraph__conv0_ATsort_4;

    {
      mercury__digraph__ATsort0_8 = mercury__digraph__return_sccs_in_to_from_order_1_f_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3);
    }
    mercury__digraph__TypeCtorInfo_7_9 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
    {
      mercury__digraph__TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_10, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_9));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_10, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_5));
    }
    {
      mercury__list__reverse_2_p_0(mercury__digraph__TypeInfo_8_10, (MR_Word) mercury__digraph__ATsort0_8, &mercury__digraph__conv0_ATsort_4);
    }
    *mercury__digraph__ATsort_4 = (MR_Word) mercury__digraph__conv0_ATsort_4;
  }
}

MR_Word MR_CALL 
mercury__digraph__atsort_1_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_5,
  MR_Word mercury__digraph__G_3)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__ATsort_4;
    MR_Word mercury__digraph__TypeCtorInfo_7_9;
    MR_Word mercury__digraph__TypeInfo_8_10;
    MR_Word mercury__digraph__ATsort0_8;
    MR_Word mercury__digraph__conv0_ATsort_4;

    {
      mercury__digraph__ATsort0_8 = mercury__digraph__return_sccs_in_to_from_order_1_f_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3);
    }
    mercury__digraph__TypeCtorInfo_7_9 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
    {
      mercury__digraph__TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_10, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_9));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_10, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_5));
    }
    {
      mercury__list__reverse_2_p_0(mercury__digraph__TypeInfo_8_10, (MR_Word) mercury__digraph__ATsort0_8, &mercury__digraph__conv0_ATsort_4);
    }
    mercury__digraph__ATsort_4 = (MR_Word) mercury__digraph__conv0_ATsort_4;
    return mercury__digraph__ATsort_4;
  }
}

MR_bool MR_CALL 
mercury__digraph__return_vertices_in_to_from_order_2_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_6,
  MR_Word mercury__digraph__G_3,
  MR_Word * mercury__digraph__ToFromTsort_4)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__FromToTsort_5;

    {
      mercury__digraph__succeeded = mercury__digraph__return_vertices_in_from_to_order_2_p_0(mercury__digraph__TypeInfo_for_T_6, mercury__digraph__G_3, &mercury__digraph__FromToTsort_5);
    }
    if (mercury__digraph__succeeded)
      {
        {
          mercury__list__reverse_2_p_0(mercury__digraph__TypeInfo_for_T_6, mercury__digraph__FromToTsort_5, mercury__digraph__ToFromTsort_4);
        }
        mercury__digraph__succeeded = MR_TRUE;
      }
    return mercury__digraph__succeeded;
  }
}

MR_bool MR_CALL 
mercury__digraph__return_vertices_in_from_to_order_2_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_8,
  MR_Word mercury__digraph__G_3,
  MR_Word * mercury__digraph__FromToTsort_4)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__Tsort0_5;
    MR_Word mercury__digraph__Var_6;
    MR_Word mercury__digraph__V_2_13;

    {
      mercury__digraph__dfsrev_2_p_0(mercury__digraph__TypeInfo_for_T_8, mercury__digraph__G_3, &mercury__digraph__Tsort0_5);
    }
    mercury__digraph__V_2_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__digraph__Var_6 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    {
      mercury__digraph__succeeded = mercury__digraph__check_tsort_3_p_0(mercury__digraph__TypeInfo_for_T_8, mercury__digraph__G_3, mercury__digraph__Var_6, mercury__digraph__Tsort0_5);
    }
    if (mercury__digraph__succeeded)
      {
        {
          *mercury__digraph__FromToTsort_4 = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_51_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_2_f_in__list_0(mercury__digraph__TypeInfo_for_T_8, mercury__digraph__G_3, mercury__digraph__Tsort0_5);
        }
        mercury__digraph__succeeded = MR_TRUE;
      }
    return mercury__digraph__succeeded;
  }
}

MR_bool MR_CALL 
mercury__digraph__tsort_2_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_5,
  MR_Word mercury__digraph__G_3,
  MR_Word * mercury__digraph__FromToTsort_4)
{
  {
    MR_bool mercury__digraph__succeeded;

    {
      mercury__digraph__succeeded = mercury__digraph__return_vertices_in_from_to_order_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, mercury__digraph__FromToTsort_4);
    }
    return mercury__digraph__succeeded;
  }
}

void MR_CALL 
mercury__digraph__reduced_3_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_17,
  MR_Word mercury__digraph__G_4,
  MR_Word * mercury__digraph__STATE_VARIABLE_R_10,
  MR_Word * mercury__digraph__STATE_VARIABLE_CliqMap_11)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__Cliques_7;
    MR_Word mercury__digraph__CliqList_8;
    MR_Word mercury__digraph__AL_9;
    MR_Word mercury__digraph__STATE_VARIABLE_R_12_12;
    MR_Word mercury__digraph__STATE_VARIABLE_CliqMap_13_13;
    MR_Word mercury__digraph__STATE_VARIABLE_R_15_15;
    MR_Word mercury__digraph__VMap_27;
    MR_Word mercury__digraph__FwdMap_28;
    MR_Word mercury__digraph__BwdMap_29;
    MR_Word mercury__digraph__V_3_37;
    MR_Word mercury__digraph__V_4_38;

    {
      mercury__digraph__cliques_2_p_0(mercury__digraph__TypeInfo_for_T_17, mercury__digraph__G_4, &mercury__digraph__Cliques_7);
    }
    mercury__digraph__CliqList_8 = (MR_Word) mercury__digraph__Cliques_7;
    mercury__digraph__V_3_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__digraph__V_4_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__digraph__VMap_27 = (MR_Word) &mercury__digraph_scalar_common_4[1];
    mercury__digraph__FwdMap_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__digraph__BwdMap_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__digraph__STATE_VARIABLE_R_12_12 = (MR_Word) &mercury__digraph_scalar_common_2[2];
    mercury__digraph__STATE_VARIABLE_CliqMap_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__digraph__make_clique_map_6_p_0(mercury__digraph__TypeInfo_for_T_17, mercury__digraph__G_4, mercury__digraph__CliqList_8, mercury__digraph__STATE_VARIABLE_CliqMap_13_13, mercury__digraph__STATE_VARIABLE_CliqMap_11, mercury__digraph__STATE_VARIABLE_R_12_12, &mercury__digraph__STATE_VARIABLE_R_15_15);
    }
    {
      mercury__digraph__to_key_assoc_list_2_p_0(mercury__digraph__TypeInfo_for_T_17, mercury__digraph__G_4, &mercury__digraph__AL_9);
    }
    {
      mercury__digraph__make_reduced_graph_4_p_0(mercury__digraph__TypeInfo_for_T_17, *mercury__digraph__STATE_VARIABLE_CliqMap_11, mercury__digraph__AL_9, mercury__digraph__STATE_VARIABLE_R_15_15, mercury__digraph__STATE_VARIABLE_R_10);
    }
  }
}

void MR_CALL 
mercury__digraph__reduced_2_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_6,
  MR_Word mercury__digraph__G_3,
  MR_Word * mercury__digraph__R_4)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__Var_5;

    {
      mercury__digraph__reduced_3_p_0(mercury__digraph__TypeInfo_for_T_6, mercury__digraph__G_3, mercury__digraph__R_4, &mercury__digraph__Var_5);
    }
  }
}

MR_Word MR_CALL 
mercury__digraph__reduced_1_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_5,
  MR_Word mercury__digraph__G_3)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__R_4;
    MR_Word mercury__digraph__Var_8;

    {
      mercury__digraph__reduced_3_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__R_4, &mercury__digraph__Var_8);
    }
    return mercury__digraph__R_4;
  }
}

void MR_CALL 
mercury__digraph__cliques_2_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_9,
  MR_Word mercury__digraph__G_3,
  MR_Word * mercury__digraph__Cliques_4)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__DfsRev_5;
    MR_Word mercury__digraph__GInv_6;
    MR_Word mercury__digraph__Cliques0_7;
    MR_Word mercury__digraph__Visit_8;
    MR_Integer mercury__digraph__Next_16;
    MR_Word mercury__digraph__VMap_17;
    MR_Word mercury__digraph__Fwd_18;
    MR_Word mercury__digraph__Bwd_19;
    MR_Word mercury__digraph__V_2_21;
    MR_Word mercury__digraph__V_2_24;

    {
      mercury__digraph__dfsrev_2_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__G_3, &mercury__digraph__DfsRev_5);
    }
    mercury__digraph__Next_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
    mercury__digraph__VMap_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
    mercury__digraph__Fwd_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
    mercury__digraph__Bwd_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
    {
      mercury__digraph__GInv_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_6, 0) = ((MR_Box) (mercury__digraph__Next_16));
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_6, 1) = ((MR_Box) (mercury__digraph__VMap_17));
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_6, 2) = ((MR_Box) (mercury__digraph__Bwd_19));
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_6, 3) = ((MR_Box) (mercury__digraph__Fwd_18));
    }
    mercury__digraph__V_2_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__digraph__Cliques0_7 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    mercury__digraph__V_2_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__digraph__Visit_8 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    {
      mercury__digraph__cliques_2_5_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__DfsRev_5, mercury__digraph__GInv_6, mercury__digraph__Visit_8, mercury__digraph__Cliques0_7, mercury__digraph__Cliques_4);
    }
  }
}

MR_Word MR_CALL 
mercury__digraph__cliques_1_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_5,
  MR_Word mercury__digraph__G_3)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__Cliques_4;

    {
      mercury__digraph__cliques_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__Cliques_4);
    }
    return mercury__digraph__Cliques_4;
  }
}

void MR_CALL 
mercury__digraph__components_2_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_10,
  MR_Word mercury__digraph__G_3,
  MR_Word * mercury__digraph__Components_4)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeInfo_12_12;
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_13;
    MR_Word mercury__digraph__TypeClassInfo_for_enum_14;
    MR_Word mercury__digraph__TypeCtorInfo_10_23 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__Keys_5;
    MR_Word mercury__digraph__KeySet_6;
    MR_Word mercury__digraph__Var_9;
    MR_Word mercury__digraph__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
    MR_Word mercury__digraph__V_4_27;
    MR_Word mercury__digraph__V_5_32;
    MR_Word mercury__digraph__V_4_37;
    MR_Word mercury__digraph__V_5_38;
    MR_Word mercury__digraph__V_2_41;
    MR_Integer mercury__digraph__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
    MR_Word mercury__digraph__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
    MR_Word mercury__digraph__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
    MR_Word mercury__digraph__V_3_26;
    MR_Word mercury__digraph__conv0_Keys_5;

    {
      mercury__digraph__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_12_12, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_23));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_12_12, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_10));
    }
    mercury__digraph__V_3_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_19, (MR_Integer) 0)));
    mercury__digraph__V_4_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_19, (MR_Integer) 1)));
    mercury__digraph__V_5_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__keys_acc_3_p_0(mercury__digraph__TypeInfo_12_12, mercury__digraph__TypeInfo_for_T_10, (MR_Word) mercury__digraph__V_4_27, (MR_Word) mercury__digraph__V_5_32, &mercury__digraph__conv0_Keys_5);
    }
    mercury__digraph__Keys_5 = (MR_Word) mercury__digraph__conv0_Keys_5;
    mercury__digraph__BaseTypeClassInfo_for_enum_13 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
    {
      mercury__digraph__TypeClassInfo_for_enum_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_14, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_13));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_14, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_10));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_14, 2) = ((MR_Box) (mercury__digraph__TypeInfo_12_12));
    }
    mercury__digraph__V_5_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__digraph__V_4_37 = mercury__sparse_bitset__list_to_set_2_2_f_0(mercury__digraph__TypeClassInfo_for_enum_14, (MR_Word) mercury__digraph__Keys_5, mercury__digraph__V_5_38);
    }
    mercury__digraph__KeySet_6 = (MR_Word) mercury__digraph__V_4_37;
    mercury__digraph__V_2_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__digraph__Var_9 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    {
      mercury__digraph__components_2_4_p_0(mercury__digraph__TypeInfo_for_T_10, mercury__digraph__G_3, mercury__digraph__KeySet_6, mercury__digraph__Var_9, mercury__digraph__Components_4);
    }
  }
}

MR_Word MR_CALL 
mercury__digraph__components_1_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_5,
  MR_Word mercury__digraph__G_3)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__Components_4;

    {
      mercury__digraph__components_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__Components_4);
    }
    return mercury__digraph__Components_4;
  }
}

MR_bool MR_CALL 
mercury__digraph__is_dag_1_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_8,
  MR_Word mercury__digraph__G_2)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_10_22 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeInfo_11_23;
    MR_Word mercury__digraph__Keys_3;
    MR_Word mercury__digraph__Var_6;
    MR_Word mercury__digraph__Var_7;
    MR_Word mercury__digraph__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_2, (MR_Integer) 1)));
    MR_Word mercury__digraph__V_4_26;
    MR_Word mercury__digraph__V_5_31;
    MR_Word mercury__digraph__V_2_33;
    MR_Integer mercury__digraph__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_2, (MR_Integer) 0)));
    MR_Word mercury__digraph__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_2, (MR_Integer) 2)));
    MR_Word mercury__digraph__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_2, (MR_Integer) 3)));
    MR_Word mercury__digraph__V_3_25;
    MR_Word mercury__digraph__conv0_Keys_3;
    MR_Word mercury__digraph__Var_4;

    {
      mercury__digraph__TypeInfo_11_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_23, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_22));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_8));
    }
    mercury__digraph__V_3_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_18, (MR_Integer) 0)));
    mercury__digraph__V_4_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_18, (MR_Integer) 1)));
    mercury__digraph__V_5_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__keys_acc_3_p_0(mercury__digraph__TypeInfo_11_23, mercury__digraph__TypeInfo_for_T_8, (MR_Word) mercury__digraph__V_4_26, (MR_Word) mercury__digraph__V_5_31, &mercury__digraph__conv0_Keys_3);
    }
    mercury__digraph__Keys_3 = (MR_Word) mercury__digraph__conv0_Keys_3;
    mercury__digraph__Var_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__digraph__V_2_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__digraph__Var_6 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    {
      mercury__digraph__succeeded = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_52_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__list_0(mercury__digraph__TypeInfo_for_T_8, mercury__digraph__G_2, mercury__digraph__Var_7, mercury__digraph__Keys_3, mercury__digraph__Var_6, &mercury__digraph__Var_4);
    }
    return mercury__digraph__succeeded;
  }
}

void MR_CALL 
mercury__digraph__compose_3_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_38,
  MR_Word mercury__digraph__G1_4,
  MR_Word mercury__digraph__G2_5,
  MR_Word * mercury__digraph__STATE_VARIABLE_Comp_20)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_39_39;
    MR_Word mercury__digraph__TypeInfo_40_40;
    MR_Word mercury__digraph__TypeCtorInfo_55_55;
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_56;
    MR_Word mercury__digraph__TypeClassInfo_for_enum_57;
    MR_Word mercury__digraph__G1Vs_7;
    MR_Word mercury__digraph__G2Vs_8;
    MR_Word mercury__digraph__Matches_9;
    MR_Word mercury__digraph__AL_10;
    MR_Word mercury__digraph__Needed1_16;
    MR_Word mercury__digraph__Needed2_17;
    MR_Word mercury__digraph__KMap1_18;
    MR_Word mercury__digraph__KMap2_19;
    MR_Word mercury__digraph__STATE_VARIABLE_Comp_21_21 = (MR_Word) &mercury__digraph_scalar_common_2[1];
    MR_Word mercury__digraph__Var_25;
    MR_Word mercury__digraph__Var_27;
    MR_Word mercury__digraph__STATE_VARIABLE_Comp_30_30;
    MR_Word mercury__digraph__Var_31;
    MR_Word mercury__digraph__STATE_VARIABLE_Comp_33_33;
    MR_Word mercury__digraph__Var_34;
    MR_Word mercury__digraph__VMap_71 = (MR_Word) &mercury__digraph_scalar_common_4[0];
    MR_Word mercury__digraph__FwdMap_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__digraph__BwdMap_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__digraph__V_3_81 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__digraph__V_4_82 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__digraph__V_4_94;
    MR_Word mercury__digraph__V_5_95;
    MR_Word mercury__digraph__V_6_96;
    MR_Word mercury__digraph__V_2_97;

    {
      mercury__digraph__vertices_2_p_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__G1_4, &mercury__digraph__G1Vs_7);
    }
    {
      mercury__digraph__vertices_2_p_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__G2_5, &mercury__digraph__G2Vs_8);
    }
    mercury__digraph__V_4_94 = (MR_Word) mercury__digraph__G1Vs_7;
    mercury__digraph__V_5_95 = (MR_Word) mercury__digraph__G2Vs_8;
    {
      mercury__set_ordlist__intersect_loop_3_p_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__V_4_94, mercury__digraph__V_5_95, &mercury__digraph__V_6_96);
    }
    mercury__digraph__Matches_9 = (MR_Word) mercury__digraph__V_6_96;
    mercury__digraph__TypeCtorInfo_39_39 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    {
      mercury__digraph__TypeInfo_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_40_40, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_39_39));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_40_40, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_38));
    }
    {
      mercury__digraph__Var_25 = mercury__set__to_sorted_list_1_f_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__Matches_9);
    }
    {
      mercury__digraph__AL_10 = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_2_f_in__list_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__G1_4, mercury__digraph__G2_5, mercury__digraph__Var_25);
    }
    mercury__digraph__V_2_97 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__digraph__Var_27 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    {
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_55_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_53_93_95_48_6_p_in__list_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__AL_10, mercury__digraph__Var_27, &mercury__digraph__Needed1_16, mercury__digraph__Var_27, &mercury__digraph__Needed2_17);
    }
    mercury__digraph__TypeCtorInfo_55_55 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      mercury__digraph__Var_31 = mercury__map__init_0_f_0(mercury__digraph__TypeCtorInfo_55_55, mercury__digraph__TypeInfo_40_40);
    }
    mercury__digraph__BaseTypeClassInfo_for_enum_56 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
    {
      mercury__digraph__TypeClassInfo_for_enum_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_57, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_56));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_57, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_38));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_57, 2) = ((MR_Box) (mercury__digraph__TypeInfo_40_40));
    }
    {
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_55_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__G1_4, mercury__digraph__TypeClassInfo_for_enum_57, mercury__digraph__Needed1_16, mercury__digraph__STATE_VARIABLE_Comp_21_21, &mercury__digraph__STATE_VARIABLE_Comp_30_30, mercury__digraph__Var_31, &mercury__digraph__KMap1_18);
    }
    {
      mercury__digraph__Var_34 = mercury__map__init_0_f_0(mercury__digraph__TypeCtorInfo_55_55, mercury__digraph__TypeInfo_40_40);
    }
    {
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_55_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__G2_5, mercury__digraph__TypeClassInfo_for_enum_57, mercury__digraph__Needed2_17, mercury__digraph__STATE_VARIABLE_Comp_30_30, &mercury__digraph__STATE_VARIABLE_Comp_33_33, mercury__digraph__Var_34, &mercury__digraph__KMap2_19);
    }
    {
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_4_p_in__list_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__KMap1_18, mercury__digraph__KMap2_19, mercury__digraph__AL_10, mercury__digraph__STATE_VARIABLE_Comp_33_33, mercury__digraph__STATE_VARIABLE_Comp_20);
    }
  }
}

MR_Word MR_CALL 
mercury__digraph__compose_2_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_7,
  MR_Word mercury__digraph__G1_4,
  MR_Word mercury__digraph__G2_5)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__Comp_6;

    {
      mercury__digraph__compose_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G1_4, mercury__digraph__G2_5, &mercury__digraph__Comp_6);
    }
    return mercury__digraph__Comp_6;
  }
}

void MR_CALL 
mercury__digraph__inverse_2_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_9,
  MR_Word mercury__digraph__G_3,
  MR_Word * mercury__digraph__InvG_4)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Integer mercury__digraph__Next_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
    MR_Word mercury__digraph__VMap_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
    MR_Word mercury__digraph__Fwd_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
    MR_Word mercury__digraph__Bwd_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *mercury__digraph__InvG_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__digraph__Next_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__digraph__VMap_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__digraph__Bwd_8));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__digraph__Fwd_7));
    }
  }
}

MR_Word MR_CALL 
mercury__digraph__inverse_1_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_5,
  MR_Word mercury__digraph__G_3)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__InvG_4;
    MR_Integer mercury__digraph__Next_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
    MR_Word mercury__digraph__VMap_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
    MR_Word mercury__digraph__Fwd_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
    MR_Word mercury__digraph__Bwd_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));

    {
      mercury__digraph__InvG_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__InvG_4, 0) = ((MR_Box) (mercury__digraph__Next_8));
      MR_hl_field(MR_mktag(0), mercury__digraph__InvG_4, 1) = ((MR_Box) (mercury__digraph__VMap_9));
      MR_hl_field(MR_mktag(0), mercury__digraph__InvG_4, 2) = ((MR_Box) (mercury__digraph__Bwd_11));
      MR_hl_field(MR_mktag(0), mercury__digraph__InvG_4, 3) = ((MR_Box) (mercury__digraph__Fwd_10));
    }
    return mercury__digraph__InvG_4;
  }
}

void MR_CALL 
mercury__digraph__vertices_2_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_10,
  MR_Word mercury__digraph__G_3,
  MR_Word * mercury__digraph__Vs_4)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_11_11 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeInfo_12_12;
    MR_Word mercury__digraph__VsList_5;
    MR_Word mercury__digraph__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
    MR_Word mercury__digraph__V_3_14;
    MR_Word mercury__digraph__V_5_20;
    MR_Word mercury__digraph__V_4_25;
    MR_Integer mercury__digraph__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
    MR_Word mercury__digraph__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
    MR_Word mercury__digraph__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
    MR_Word mercury__digraph__V_4_15;

    {
      mercury__digraph__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_12_12, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_11_11));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_12_12, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_10));
    }
    mercury__digraph__V_3_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_6, (MR_Integer) 0)));
    mercury__digraph__V_4_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_6, (MR_Integer) 1)));
    mercury__digraph__V_5_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__keys_acc_3_p_0(mercury__digraph__TypeInfo_for_T_10, mercury__digraph__TypeInfo_12_12, mercury__digraph__V_3_14, mercury__digraph__V_5_20, &mercury__digraph__VsList_5);
    }
    if ((mercury__digraph__VsList_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__digraph__V_4_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__digraph__V_3_26 = (MR_hl_field(MR_mktag(1), mercury__digraph__VsList_5, (MR_Integer) 0));
        MR_Word mercury__digraph__V_4_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__VsList_5, (MR_Integer) 1)));

        {
          mercury__list__remove_adjacent_dups_2_3_p_0(mercury__digraph__TypeInfo_for_T_10, mercury__digraph__V_3_26, mercury__digraph__V_4_27, &mercury__digraph__V_4_25);
        }
      }
    *mercury__digraph__Vs_4 = (MR_Word) mercury__digraph__V_4_25;
  }
}

MR_Word MR_CALL 
mercury__digraph__vertices_1_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_5,
  MR_Word mercury__digraph__G_3)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__Vs_4;

    {
      mercury__digraph__vertices_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__Vs_4);
    }
    return mercury__digraph__Vs_4;
  }
}

void MR_CALL 
mercury__digraph__dfsrev_5_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_14,
  MR_Word mercury__digraph__G_6,
  MR_Word mercury__digraph__X_7,
  MR_Word mercury__digraph__STATE_VARIABLE_Visited_0_10,
  MR_Word * mercury__digraph__STATE_VARIABLE_Visited_11,
  MR_Word * mercury__digraph__DfsRev_9)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__Var_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__digraph__dfs_2_6_p_0(mercury__digraph__TypeInfo_for_T_14, mercury__digraph__G_6, mercury__digraph__X_7, mercury__digraph__STATE_VARIABLE_Visited_0_10, mercury__digraph__STATE_VARIABLE_Visited_11, mercury__digraph__Var_13, mercury__digraph__DfsRev_9);
    }
  }
}

void MR_CALL 
mercury__digraph__dfs_5_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_15,
  MR_Word mercury__digraph__G_6,
  MR_Word mercury__digraph__X_7,
  MR_Word mercury__digraph__STATE_VARIABLE_Visited_0_11,
  MR_Word * mercury__digraph__STATE_VARIABLE_Visited_12,
  MR_Word * mercury__digraph__Dfs_9)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_16_16;
    MR_Word mercury__digraph__TypeInfo_17_17;
    MR_Word mercury__digraph__DfsRev_10;
    MR_Word mercury__digraph__Var_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__digraph__conv0_Dfs_9;

    {
      mercury__digraph__dfs_2_6_p_0(mercury__digraph__TypeInfo_for_T_15, mercury__digraph__G_6, mercury__digraph__X_7, mercury__digraph__STATE_VARIABLE_Visited_0_11, mercury__digraph__STATE_VARIABLE_Visited_12, mercury__digraph__Var_14, &mercury__digraph__DfsRev_10);
    }
    mercury__digraph__TypeCtorInfo_16_16 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    {
      mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_15));
    }
    {
      mercury__list__reverse_2_p_0(mercury__digraph__TypeInfo_17_17, (MR_Word) mercury__digraph__DfsRev_10, &mercury__digraph__conv0_Dfs_9);
    }
    *mercury__digraph__Dfs_9 = (MR_Word) mercury__digraph__conv0_Dfs_9;
  }
}

void MR_CALL 
mercury__digraph__dfsrev_2_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_10,
  MR_Word mercury__digraph__G_3,
  MR_Word * mercury__digraph__DfsRev_4)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_10_28 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeInfo_11_29;
    MR_Word mercury__digraph__Keys_5;
    MR_Word mercury__digraph__Var_8;
    MR_Word mercury__digraph__Var_9;
    MR_Word mercury__digraph__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
    MR_Word mercury__digraph__V_4_32;
    MR_Word mercury__digraph__V_5_37;
    MR_Word mercury__digraph__V_2_39;
    MR_Integer mercury__digraph__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
    MR_Word mercury__digraph__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
    MR_Word mercury__digraph__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
    MR_Word mercury__digraph__V_3_31;
    MR_Word mercury__digraph__conv0_Keys_5;
    MR_Word mercury__digraph__Var_6;

    {
      mercury__digraph__TypeInfo_11_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_29, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_28));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_29, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_10));
    }
    mercury__digraph__V_3_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_24, (MR_Integer) 0)));
    mercury__digraph__V_4_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_24, (MR_Integer) 1)));
    mercury__digraph__V_5_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__keys_acc_3_p_0(mercury__digraph__TypeInfo_11_29, mercury__digraph__TypeInfo_for_T_10, (MR_Word) mercury__digraph__V_4_32, (MR_Word) mercury__digraph__V_5_37, &mercury__digraph__conv0_Keys_5);
    }
    mercury__digraph__Keys_5 = (MR_Word) mercury__digraph__conv0_Keys_5;
    mercury__digraph__V_2_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__digraph__Var_8 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    mercury__digraph__Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_55_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_6_p_in__list_0(mercury__digraph__TypeInfo_for_T_10, mercury__digraph__G_3, mercury__digraph__Keys_5, mercury__digraph__Var_8, &mercury__digraph__Var_6, mercury__digraph__Var_9, mercury__digraph__DfsRev_4);
    }
  }
}

MR_Word MR_CALL 
mercury__digraph__dfsrev_1_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_5,
  MR_Word mercury__digraph__G_3)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__DfsRev_4;

    {
      mercury__digraph__dfsrev_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__DfsRev_4);
    }
    return mercury__digraph__DfsRev_4;
  }
}

void MR_CALL 
mercury__digraph__dfs_2_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_6,
  MR_Word mercury__digraph__G_3,
  MR_Word * mercury__digraph__Dfs_4)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_7_7;
    MR_Word mercury__digraph__TypeInfo_8_8;
    MR_Word mercury__digraph__DfsRev_5;
    MR_Word mercury__digraph__conv0_Dfs_4;

    {
      mercury__digraph__dfsrev_2_p_0(mercury__digraph__TypeInfo_for_T_6, mercury__digraph__G_3, &mercury__digraph__DfsRev_5);
    }
    mercury__digraph__TypeCtorInfo_7_7 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    {
      mercury__digraph__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_6));
    }
    {
      mercury__list__reverse_2_p_0(mercury__digraph__TypeInfo_8_8, (MR_Word) mercury__digraph__DfsRev_5, &mercury__digraph__conv0_Dfs_4);
    }
    *mercury__digraph__Dfs_4 = (MR_Word) mercury__digraph__conv0_Dfs_4;
  }
}

MR_Word MR_CALL 
mercury__digraph__dfs_1_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_5,
  MR_Word mercury__digraph__G_3)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__Dfs_4;
    MR_Word mercury__digraph__TypeCtorInfo_7_9;
    MR_Word mercury__digraph__TypeInfo_8_10;
    MR_Word mercury__digraph__DfsRev_8;
    MR_Word mercury__digraph__conv0_Dfs_4;

    {
      mercury__digraph__dfsrev_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__DfsRev_8);
    }
    mercury__digraph__TypeCtorInfo_7_9 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    {
      mercury__digraph__TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_10, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_9));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_10, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_5));
    }
    {
      mercury__list__reverse_2_p_0(mercury__digraph__TypeInfo_8_10, (MR_Word) mercury__digraph__DfsRev_8, &mercury__digraph__conv0_Dfs_4);
    }
    mercury__digraph__Dfs_4 = (MR_Word) mercury__digraph__conv0_Dfs_4;
    return mercury__digraph__Dfs_4;
  }
}

void MR_CALL 
mercury__digraph__dfsrev_3_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_10,
  MR_Word mercury__digraph__G_4,
  MR_Word mercury__digraph__X_5,
  MR_Word * mercury__digraph__DfsRev_6)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__Vis0_7 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word mercury__digraph__Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__digraph__V_2_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__digraph__Var_8;

    {
      mercury__digraph__dfs_2_6_p_0(mercury__digraph__TypeInfo_for_T_10, mercury__digraph__G_4, mercury__digraph__X_5, mercury__digraph__Vis0_7, &mercury__digraph__Var_8, mercury__digraph__Var_9, mercury__digraph__DfsRev_6);
    }
  }
}

MR_Word MR_CALL 
mercury__digraph__dfsrev_2_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_7,
  MR_Word mercury__digraph__G_4,
  MR_Word mercury__digraph__X_5)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__DfsRev_6;
    MR_Word mercury__digraph__Vis0_11 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word mercury__digraph__Var_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__digraph__V_2_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__digraph__Var_12;

    {
      mercury__digraph__dfs_2_6_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__X_5, mercury__digraph__Vis0_11, &mercury__digraph__Var_12, mercury__digraph__Var_13, &mercury__digraph__DfsRev_6);
    }
    return mercury__digraph__DfsRev_6;
  }
}

void MR_CALL 
mercury__digraph__dfs_3_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_8,
  MR_Word mercury__digraph__G_4,
  MR_Word mercury__digraph__X_5,
  MR_Word * mercury__digraph__Dfs_6)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_9_9;
    MR_Word mercury__digraph__TypeInfo_10_10;
    MR_Word mercury__digraph__DfsRev_7;
    MR_Word mercury__digraph__Vis0_14 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word mercury__digraph__Var_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__digraph__V_2_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__digraph__Var_15;
    MR_Word mercury__digraph__conv0_Dfs_6;

    {
      mercury__digraph__dfs_2_6_p_0(mercury__digraph__TypeInfo_for_T_8, mercury__digraph__G_4, mercury__digraph__X_5, mercury__digraph__Vis0_14, &mercury__digraph__Var_15, mercury__digraph__Var_16, &mercury__digraph__DfsRev_7);
    }
    mercury__digraph__TypeCtorInfo_9_9 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    {
      mercury__digraph__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_9_9));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_8));
    }
    {
      mercury__list__reverse_2_p_0(mercury__digraph__TypeInfo_10_10, (MR_Word) mercury__digraph__DfsRev_7, &mercury__digraph__conv0_Dfs_6);
    }
    *mercury__digraph__Dfs_6 = (MR_Word) mercury__digraph__conv0_Dfs_6;
  }
}

MR_Word MR_CALL 
mercury__digraph__dfs_2_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_7,
  MR_Word mercury__digraph__G_4,
  MR_Word mercury__digraph__X_5)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__Dfs_6;

    {
      mercury__digraph__dfs_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__X_5, &mercury__digraph__Dfs_6);
    }
    return mercury__digraph__Dfs_6;
  }
}

void MR_CALL 
mercury__digraph__from_assoc_list_2_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_7,
  MR_Word mercury__digraph__AL_3,
  MR_Word * mercury__digraph__G_4)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__Var_6 = (MR_Word) &mercury__digraph_scalar_common_2[1];
    MR_Word mercury__digraph__VMap_16 = (MR_Word) &mercury__digraph_scalar_common_4[0];
    MR_Word mercury__digraph__FwdMap_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__digraph__BwdMap_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__digraph__V_3_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__digraph__V_4_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_48_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_93_95_48_4_p_in__list_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__AL_3, mercury__digraph__Var_6, mercury__digraph__G_4);
    }
  }
}

MR_Word MR_CALL 
mercury__digraph__from_assoc_list_1_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_5,
  MR_Word mercury__digraph__AL_3)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__G_4;

    {
      mercury__digraph__from_assoc_list_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__AL_3, &mercury__digraph__G_4);
    }
    return mercury__digraph__G_4;
  }
}

void MR_CALL 
mercury__digraph__to_key_assoc_list_2_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_11,
  MR_Word mercury__digraph__G_3,
  MR_Word * mercury__digraph__List_4)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__digraph__TypeCtorInfo_13_13 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeInfo_14_14;
    MR_Word mercury__digraph__TypeCtorInfo_15_15 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    MR_Word mercury__digraph__TypeInfo_16_16;
    MR_Word mercury__digraph__Fwd_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
    MR_Word mercury__digraph__FwdKeys_6;
    MR_Word mercury__digraph__Var_7;
    MR_Word mercury__digraph__V_5_21;
    MR_Integer mercury__digraph__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
    MR_Word mercury__digraph__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
    MR_Word mercury__digraph__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));

    {
      mercury__digraph__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_14, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_13_13));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_14, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_11));
    }
    {
      mercury__digraph__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_15_15));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 1) = ((MR_Box) (mercury__digraph__TypeInfo_14_14));
    }
    mercury__digraph__V_5_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__keys_acc_3_p_0(mercury__digraph__TypeCtorInfo_12_12, mercury__digraph__TypeInfo_16_16, mercury__digraph__Fwd_5, mercury__digraph__V_5_21, &mercury__digraph__FwdKeys_6);
    }
    mercury__digraph__Var_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__digraph__to_key_assoc_list_2_4_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__Fwd_5, mercury__digraph__FwdKeys_6, mercury__digraph__Var_7, mercury__digraph__List_4);
    }
  }
}

MR_Word MR_CALL 
mercury__digraph__to_key_assoc_list_1_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_5,
  MR_Word mercury__digraph__G_3)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__List_4;

    {
      mercury__digraph__to_key_assoc_list_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__List_4);
    }
    return mercury__digraph__List_4;
  }
}

void MR_CALL 
mercury__digraph__to_assoc_list_2_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_15,
  MR_Word mercury__digraph__G_3,
  MR_Word * mercury__digraph__List_4)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mercury__digraph__TypeCtorInfo_17_17 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeInfo_18_18;
    MR_Word mercury__digraph__TypeCtorInfo_19_19 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    MR_Word mercury__digraph__TypeInfo_20_20;
    MR_Word mercury__digraph__Fwd_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
    MR_Word mercury__digraph__FwdKeys_6;
    MR_Word mercury__digraph__Var_7;
    MR_Word mercury__digraph__Var_8;
    MR_Word mercury__digraph__V_5_25;
    MR_Integer mercury__digraph__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
    MR_Word mercury__digraph__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
    MR_Word mercury__digraph__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
    MR_Integer mercury__digraph__Var_12;
    MR_Word mercury__digraph__Var_13;
    MR_Word mercury__digraph__Var_14;

    {
      mercury__digraph__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_18_18, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_17_17));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_18_18, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_15));
    }
    {
      mercury__digraph__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_20_20, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_19_19));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_20_20, 1) = ((MR_Box) (mercury__digraph__TypeInfo_18_18));
    }
    mercury__digraph__V_5_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__keys_acc_3_p_0(mercury__digraph__TypeCtorInfo_16_16, mercury__digraph__TypeInfo_20_20, mercury__digraph__Fwd_5, mercury__digraph__V_5_25, &mercury__digraph__FwdKeys_6);
    }
    mercury__digraph__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
    mercury__digraph__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
    mercury__digraph__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
    mercury__digraph__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
    mercury__digraph__Var_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__digraph__to_assoc_list_2_5_p_0(mercury__digraph__TypeInfo_for_T_15, mercury__digraph__Fwd_5, mercury__digraph__FwdKeys_6, mercury__digraph__Var_7, mercury__digraph__Var_8, mercury__digraph__List_4);
    }
  }
}

MR_Word MR_CALL 
mercury__digraph__to_assoc_list_1_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_5,
  MR_Word mercury__digraph__G_3)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__List_4;

    {
      mercury__digraph__to_assoc_list_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__List_4);
    }
    return mercury__digraph__List_4;
  }
}

void MR_CALL 
mercury__digraph__lookup_key_set_to_3_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_12,
  MR_Word mercury__digraph__G_4,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word * mercury__digraph__Xs_6)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Integer mercury__digraph__YI_5 = (MR_Integer) mercury__digraph__HeadVar__2_2;
    MR_Word mercury__digraph__Xs0_7;
    MR_Word mercury__digraph__TypeCtorInfo_14_14 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeInfo_15_15;
    MR_Word mercury__digraph__TypeCtorInfo_16_16 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    MR_Word mercury__digraph__TypeInfo_17_17;
    MR_Word mercury__digraph__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 3)));
    MR_Integer mercury__digraph__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 0)));
    MR_Word mercury__digraph__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 1)));
    MR_Word mercury__digraph__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 2)));
    MR_Box mercury__digraph__conv0_Xs0_7;

    {
      mercury__digraph__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
    }
    {
      mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
    }
    {
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_17_17, (MR_Word) mercury__digraph__Var_8, mercury__digraph__YI_5, &mercury__digraph__conv0_Xs0_7);
    }
    if (mercury__digraph__succeeded)
      {
        mercury__digraph__Xs0_7 = ((MR_Word) mercury__digraph__conv0_Xs0_7);
        mercury__digraph__succeeded = MR_TRUE;
      }
    if (mercury__digraph__succeeded)
      *mercury__digraph__Xs_6 = mercury__digraph__Xs0_7;
    else
      {
        MR_Word mercury__digraph__V_2_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        *mercury__digraph__Xs_6 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
  }
}

MR_Word MR_CALL 
mercury__digraph__lookup_key_set_to_2_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_7,
  MR_Word mercury__digraph__G_4,
  MR_Word mercury__digraph__Y_5)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__Xs_6;

    {
      mercury__digraph__lookup_key_set_to_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__Y_5, &mercury__digraph__Xs_6);
    }
    return mercury__digraph__Xs_6;
  }
}

void MR_CALL 
mercury__digraph__lookup_to_3_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_7,
  MR_Word mercury__digraph__G_4,
  MR_Word mercury__digraph__Y_5,
  MR_Word * mercury__digraph__HeadVar__3_3)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_8_8 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeInfo_9_9;
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_10 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
    MR_Word mercury__digraph__TypeClassInfo_for_enum_11;
    MR_Word mercury__digraph__TypeInfo_8_16;
    MR_Word mercury__digraph__Xs_6;
    MR_Word mercury__digraph__V_4_14;
    MR_Word mercury__digraph__V_10_20;
    MR_Word mercury__digraph__V_6_39;
    MR_Word mercury__digraph__V_4_61;
    MR_Word mercury__digraph__conv0_V_4_14;

    {
      mercury__digraph__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_8_8));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_7));
    }
    {
      mercury__digraph__TypeClassInfo_for_enum_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_11, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_10));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_11, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_7));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_11, 2) = ((MR_Box) (mercury__digraph__TypeInfo_9_9));
    }
    {
      mercury__digraph__lookup_key_set_to_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__Y_5, &mercury__digraph__Xs_6);
    }
{
#define MR_PROC_LABEL mercury__digraph__lookup_to_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__digraph__TypeClassInfo_for_enum_11 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__digraph__TypeInfo_8_16  = TypeInfo;
}
    mercury__digraph__V_10_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__digraph__V_6_39 = (MR_Word) mercury__digraph__Xs_6;
    {
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_57_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeClassInfo_for_enum_11, mercury__digraph__V_6_39, (MR_Word) mercury__digraph__V_10_20, &mercury__digraph__conv0_V_4_14);
    }
    mercury__digraph__V_4_14 = (MR_Word) mercury__digraph__conv0_V_4_14;
    if ((mercury__digraph__V_4_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__digraph__V_4_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__digraph__V_3_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__V_4_14, (MR_Integer) 0)));
        MR_Word mercury__digraph__V_4_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__V_4_14, (MR_Integer) 1)));
        MR_Word mercury__digraph__conv1_V_4_61;

        {
          mercury__list__remove_adjacent_dups_2_3_p_0(mercury__digraph__TypeInfo_8_16, ((MR_Box) (mercury__digraph__V_3_62)), (MR_Word) mercury__digraph__V_4_63, &mercury__digraph__conv1_V_4_61);
        }
        mercury__digraph__V_4_61 = (MR_Word) mercury__digraph__conv1_V_4_61;
      }
    *mercury__digraph__HeadVar__3_3 = (MR_Word) mercury__digraph__V_4_61;
  }
}

MR_Word MR_CALL 
mercury__digraph__lookup_to_2_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_7,
  MR_Word mercury__digraph__G_4,
  MR_Word mercury__digraph__Y_5)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__Xs_6;

    {
      mercury__digraph__lookup_to_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__Y_5, &mercury__digraph__Xs_6);
    }
    return mercury__digraph__Xs_6;
  }
}

void MR_CALL 
mercury__digraph__lookup_key_set_from_3_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_12,
  MR_Word mercury__digraph__G_4,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word * mercury__digraph__Ys_6)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Integer mercury__digraph__XI_5 = (MR_Integer) mercury__digraph__HeadVar__2_2;
    MR_Word mercury__digraph__Ys0_7;
    MR_Word mercury__digraph__TypeCtorInfo_14_14 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeInfo_15_15;
    MR_Word mercury__digraph__TypeCtorInfo_16_16 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    MR_Word mercury__digraph__TypeInfo_17_17;
    MR_Word mercury__digraph__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 2)));
    MR_Integer mercury__digraph__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 0)));
    MR_Word mercury__digraph__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 1)));
    MR_Word mercury__digraph__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 3)));
    MR_Box mercury__digraph__conv0_Ys0_7;

    {
      mercury__digraph__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
    }
    {
      mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
    }
    {
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_17_17, (MR_Word) mercury__digraph__Var_8, mercury__digraph__XI_5, &mercury__digraph__conv0_Ys0_7);
    }
    if (mercury__digraph__succeeded)
      {
        mercury__digraph__Ys0_7 = ((MR_Word) mercury__digraph__conv0_Ys0_7);
        mercury__digraph__succeeded = MR_TRUE;
      }
    if (mercury__digraph__succeeded)
      *mercury__digraph__Ys_6 = mercury__digraph__Ys0_7;
    else
      {
        MR_Word mercury__digraph__V_2_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        *mercury__digraph__Ys_6 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
  }
}

MR_Word MR_CALL 
mercury__digraph__lookup_key_set_from_2_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_7,
  MR_Word mercury__digraph__G_4,
  MR_Word mercury__digraph__X_5)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__Ys_6;

    {
      mercury__digraph__lookup_key_set_from_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__X_5, &mercury__digraph__Ys_6);
    }
    return mercury__digraph__Ys_6;
  }
}

void MR_CALL 
mercury__digraph__lookup_from_3_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_7,
  MR_Word mercury__digraph__G_4,
  MR_Word mercury__digraph__X_5,
  MR_Word * mercury__digraph__HeadVar__3_3)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_8_8 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeInfo_9_9;
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_10 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
    MR_Word mercury__digraph__TypeClassInfo_for_enum_11;
    MR_Word mercury__digraph__TypeInfo_8_16;
    MR_Word mercury__digraph__Ys_6;
    MR_Word mercury__digraph__V_4_14;
    MR_Word mercury__digraph__V_10_20;
    MR_Word mercury__digraph__V_6_39;
    MR_Word mercury__digraph__V_4_61;
    MR_Word mercury__digraph__conv0_V_4_14;

    {
      mercury__digraph__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_8_8));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_7));
    }
    {
      mercury__digraph__TypeClassInfo_for_enum_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_11, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_10));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_11, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_7));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_11, 2) = ((MR_Box) (mercury__digraph__TypeInfo_9_9));
    }
    {
      mercury__digraph__lookup_key_set_from_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__X_5, &mercury__digraph__Ys_6);
    }
{
#define MR_PROC_LABEL mercury__digraph__lookup_from_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__digraph__TypeClassInfo_for_enum_11 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__digraph__TypeInfo_8_16  = TypeInfo;
}
    mercury__digraph__V_10_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__digraph__V_6_39 = (MR_Word) mercury__digraph__Ys_6;
    {
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_57_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeClassInfo_for_enum_11, mercury__digraph__V_6_39, (MR_Word) mercury__digraph__V_10_20, &mercury__digraph__conv0_V_4_14);
    }
    mercury__digraph__V_4_14 = (MR_Word) mercury__digraph__conv0_V_4_14;
    if ((mercury__digraph__V_4_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__digraph__V_4_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__digraph__V_3_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__V_4_14, (MR_Integer) 0)));
        MR_Word mercury__digraph__V_4_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__V_4_14, (MR_Integer) 1)));
        MR_Word mercury__digraph__conv1_V_4_61;

        {
          mercury__list__remove_adjacent_dups_2_3_p_0(mercury__digraph__TypeInfo_8_16, ((MR_Box) (mercury__digraph__V_3_62)), (MR_Word) mercury__digraph__V_4_63, &mercury__digraph__conv1_V_4_61);
        }
        mercury__digraph__V_4_61 = (MR_Word) mercury__digraph__conv1_V_4_61;
      }
    *mercury__digraph__HeadVar__3_3 = (MR_Word) mercury__digraph__V_4_61;
  }
}

MR_Word MR_CALL 
mercury__digraph__lookup_from_2_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_7,
  MR_Word mercury__digraph__G_4,
  MR_Word mercury__digraph__X_5)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__Ys_6;

    {
      mercury__digraph__lookup_from_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__X_5, &mercury__digraph__Ys_6);
    }
    return mercury__digraph__Ys_6;
  }
}

MR_bool MR_CALL 
mercury__digraph__is_edge_rev_3_p_1(
  MR_Word mercury__digraph__TypeInfo_for_T_12,
  MR_Word mercury__digraph__G_4,
  MR_Word mercury__digraph__X_5,
  MR_Word mercury__digraph__HeadVar__3_3)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_14_14 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeInfo_15_15;
    MR_Word mercury__digraph__TypeCtorInfo_16_16 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    MR_Word mercury__digraph__TypeInfo_17_17;
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_18;
    MR_Word mercury__digraph__TypeClassInfo_for_enum_19;
    MR_Integer mercury__digraph__YI_6 = (MR_Integer) mercury__digraph__HeadVar__3_3;
    MR_Word mercury__digraph__XSet_7;
    MR_Word mercury__digraph__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 3)));
    MR_Integer mercury__digraph__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 0)));
    MR_Word mercury__digraph__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 1)));
    MR_Word mercury__digraph__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 2)));
    MR_Box mercury__digraph__conv0_XSet_7;

    {
      mercury__digraph__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
    }
    {
      mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
    }
    {
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_17_17, (MR_Word) mercury__digraph__Var_8, mercury__digraph__YI_6, &mercury__digraph__conv0_XSet_7);
    }
    if (mercury__digraph__succeeded)
      {
        mercury__digraph__XSet_7 = ((MR_Word) mercury__digraph__conv0_XSet_7);
        mercury__digraph__succeeded = MR_TRUE;
      }
    if (mercury__digraph__succeeded)
      {
        mercury__digraph__BaseTypeClassInfo_for_enum_18 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
        {
          mercury__digraph__TypeClassInfo_for_enum_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_18));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 2) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
        }
        {
          mercury__digraph__succeeded = mercury__sparse_bitset__member_2_p_0(mercury__digraph__TypeClassInfo_for_enum_19, ((MR_Box) (mercury__digraph__X_5)), (MR_Word) mercury__digraph__XSet_7);
        }
      }
    return mercury__digraph__succeeded;
  }
}

static void MR_CALL 
mercury__digraph__is_edge_rev_3_p_0_1(
  void * mercury__digraph__env_ptr_arg)
{
  {
    struct mercury__digraph__is_edge_rev_3_p_0_env_0_s * mercury__digraph__env_ptr = (struct mercury__digraph__is_edge_rev_3_p_0_env_0_s *) mercury__digraph__env_ptr_arg;

    *((mercury__digraph__env_ptr)->mercury__digraph__is_edge_rev_3_p_0_env_0__X_5) = ((MR_Word) (mercury__digraph__env_ptr)->mercury__digraph__is_edge_rev_3_p_0_env_0__conv1_X_5);
    {
      ((mercury__digraph__env_ptr)->mercury__digraph__is_edge_rev_3_p_0_env_0__cont)((mercury__digraph__env_ptr)->mercury__digraph__is_edge_rev_3_p_0_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__digraph__is_edge_rev_3_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_12,
  MR_Word mercury__digraph__G_4,
  MR_Word * mercury__digraph__X_5,
  MR_Word mercury__digraph__HeadVar__3_3,
  MR_Cont mercury__digraph__cont,
  void * mercury__digraph__cont_env_ptr)
{
  {
    struct mercury__digraph__is_edge_rev_3_p_0_env_0_s mercury__digraph__env;

    (mercury__digraph__env).mercury__digraph__is_edge_rev_3_p_0_env_0__X_5 = mercury__digraph__X_5;
    (mercury__digraph__env).mercury__digraph__is_edge_rev_3_p_0_env_0__cont = mercury__digraph__cont;
    (mercury__digraph__env).mercury__digraph__is_edge_rev_3_p_0_env_0__cont_env_ptr = mercury__digraph__cont_env_ptr;
    {
      MR_bool mercury__digraph__succeeded;
      MR_Word mercury__digraph__TypeCtorInfo_14_14 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
      MR_Word mercury__digraph__TypeInfo_15_15;
      MR_Word mercury__digraph__TypeCtorInfo_16_16 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
      MR_Word mercury__digraph__TypeInfo_17_17;
      MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_18;
      MR_Word mercury__digraph__TypeClassInfo_for_enum_19;
      MR_Integer mercury__digraph__YI_6 = (MR_Integer) mercury__digraph__HeadVar__3_3;
      MR_Word mercury__digraph__XSet_7;
      MR_Word mercury__digraph__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 3)));
      MR_Integer mercury__digraph__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 0)));
      MR_Word mercury__digraph__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 1)));
      MR_Word mercury__digraph__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 2)));
      MR_Box mercury__digraph__conv0_XSet_7;

      {
        mercury__digraph__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
      }
      {
        mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
      }
      {
        mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_17_17, (MR_Word) mercury__digraph__Var_8, mercury__digraph__YI_6, &mercury__digraph__conv0_XSet_7);
      }
      if (mercury__digraph__succeeded)
        {
          mercury__digraph__XSet_7 = ((MR_Word) mercury__digraph__conv0_XSet_7);
          mercury__digraph__succeeded = MR_TRUE;
        }
      if (mercury__digraph__succeeded)
        {
          mercury__digraph__BaseTypeClassInfo_for_enum_18 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
          {
            mercury__digraph__TypeClassInfo_for_enum_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_18));
            MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
            MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 2) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
          }
          {
            mercury__sparse_bitset__member_2_p_1(mercury__digraph__TypeClassInfo_for_enum_19, &(mercury__digraph__env).mercury__digraph__is_edge_rev_3_p_0_env_0__conv1_X_5, (MR_Word) mercury__digraph__XSet_7, mercury__digraph__is_edge_rev_3_p_0_1, &mercury__digraph__env);
          }
        }
    }
  }
}

MR_bool MR_CALL 
mercury__digraph__is_edge_3_p_1(
  MR_Word mercury__digraph__TypeInfo_for_T_12,
  MR_Word mercury__digraph__G_4,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word mercury__digraph__Y_6)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_14_14 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeInfo_15_15;
    MR_Word mercury__digraph__TypeCtorInfo_16_16 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    MR_Word mercury__digraph__TypeInfo_17_17;
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_18;
    MR_Word mercury__digraph__TypeClassInfo_for_enum_19;
    MR_Integer mercury__digraph__XI_5 = (MR_Integer) mercury__digraph__HeadVar__2_2;
    MR_Word mercury__digraph__YSet_7;
    MR_Word mercury__digraph__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 2)));
    MR_Integer mercury__digraph__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 0)));
    MR_Word mercury__digraph__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 1)));
    MR_Word mercury__digraph__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 3)));
    MR_Box mercury__digraph__conv0_YSet_7;

    {
      mercury__digraph__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
    }
    {
      mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
    }
    {
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_17_17, (MR_Word) mercury__digraph__Var_8, mercury__digraph__XI_5, &mercury__digraph__conv0_YSet_7);
    }
    if (mercury__digraph__succeeded)
      {
        mercury__digraph__YSet_7 = ((MR_Word) mercury__digraph__conv0_YSet_7);
        mercury__digraph__succeeded = MR_TRUE;
      }
    if (mercury__digraph__succeeded)
      {
        mercury__digraph__BaseTypeClassInfo_for_enum_18 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
        {
          mercury__digraph__TypeClassInfo_for_enum_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_18));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 2) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
        }
        {
          mercury__digraph__succeeded = mercury__sparse_bitset__member_2_p_0(mercury__digraph__TypeClassInfo_for_enum_19, ((MR_Box) (mercury__digraph__Y_6)), (MR_Word) mercury__digraph__YSet_7);
        }
      }
    return mercury__digraph__succeeded;
  }
}

static void MR_CALL 
mercury__digraph__is_edge_3_p_0_1(
  void * mercury__digraph__env_ptr_arg)
{
  {
    struct mercury__digraph__is_edge_3_p_0_env_0_s * mercury__digraph__env_ptr = (struct mercury__digraph__is_edge_3_p_0_env_0_s *) mercury__digraph__env_ptr_arg;

    *((mercury__digraph__env_ptr)->mercury__digraph__is_edge_3_p_0_env_0__Y_6) = ((MR_Word) (mercury__digraph__env_ptr)->mercury__digraph__is_edge_3_p_0_env_0__conv1_Y_6);
    {
      ((mercury__digraph__env_ptr)->mercury__digraph__is_edge_3_p_0_env_0__cont)((mercury__digraph__env_ptr)->mercury__digraph__is_edge_3_p_0_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__digraph__is_edge_3_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_12,
  MR_Word mercury__digraph__G_4,
  MR_Word mercury__digraph__HeadVar__2_2,
  MR_Word * mercury__digraph__Y_6,
  MR_Cont mercury__digraph__cont,
  void * mercury__digraph__cont_env_ptr)
{
  {
    struct mercury__digraph__is_edge_3_p_0_env_0_s mercury__digraph__env;

    (mercury__digraph__env).mercury__digraph__is_edge_3_p_0_env_0__Y_6 = mercury__digraph__Y_6;
    (mercury__digraph__env).mercury__digraph__is_edge_3_p_0_env_0__cont = mercury__digraph__cont;
    (mercury__digraph__env).mercury__digraph__is_edge_3_p_0_env_0__cont_env_ptr = mercury__digraph__cont_env_ptr;
    {
      MR_bool mercury__digraph__succeeded;
      MR_Word mercury__digraph__TypeCtorInfo_14_14 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
      MR_Word mercury__digraph__TypeInfo_15_15;
      MR_Word mercury__digraph__TypeCtorInfo_16_16 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
      MR_Word mercury__digraph__TypeInfo_17_17;
      MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_18;
      MR_Word mercury__digraph__TypeClassInfo_for_enum_19;
      MR_Integer mercury__digraph__XI_5 = (MR_Integer) mercury__digraph__HeadVar__2_2;
      MR_Word mercury__digraph__YSet_7;
      MR_Word mercury__digraph__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 2)));
      MR_Integer mercury__digraph__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 0)));
      MR_Word mercury__digraph__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 1)));
      MR_Word mercury__digraph__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 3)));
      MR_Box mercury__digraph__conv0_YSet_7;

      {
        mercury__digraph__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
      }
      {
        mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
      }
      {
        mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_17_17, (MR_Word) mercury__digraph__Var_8, mercury__digraph__XI_5, &mercury__digraph__conv0_YSet_7);
      }
      if (mercury__digraph__succeeded)
        {
          mercury__digraph__YSet_7 = ((MR_Word) mercury__digraph__conv0_YSet_7);
          mercury__digraph__succeeded = MR_TRUE;
        }
      if (mercury__digraph__succeeded)
        {
          mercury__digraph__BaseTypeClassInfo_for_enum_18 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
          {
            mercury__digraph__TypeClassInfo_for_enum_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_18));
            MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
            MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 2) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
          }
          {
            mercury__sparse_bitset__member_2_p_1(mercury__digraph__TypeClassInfo_for_enum_19, &(mercury__digraph__env).mercury__digraph__is_edge_3_p_0_env_0__conv1_Y_6, (MR_Word) mercury__digraph__YSet_7, mercury__digraph__is_edge_3_p_0_1, &mercury__digraph__env);
          }
        }
    }
  }
}

void MR_CALL 
mercury__digraph__delete_assoc_list_3_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_16,
  MR_Word mercury__digraph__HeadVar__1_1,
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_2,
  MR_Word * mercury__digraph__STATE_VARIABLE_G_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded;

        if ((mercury__digraph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__digraph__STATE_VARIABLE_G_3 = mercury__digraph__STATE_VARIABLE_G_0_2;
        else
          {
            MR_Word mercury__digraph__X_7;
            MR_Word mercury__digraph__Y_8;
            MR_Word mercury__digraph__Edges_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__digraph__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__digraph__STATE_VARIABLE_G_14_14;

            mercury__digraph__X_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_13, (MR_Integer) 0)));
            mercury__digraph__Y_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_13, (MR_Integer) 1)));
            {
              mercury__digraph__delete_edge_4_p_0(mercury__digraph__TypeInfo_for_T_16, mercury__digraph__X_7, mercury__digraph__Y_8, mercury__digraph__STATE_VARIABLE_G_0_2, &mercury__digraph__STATE_VARIABLE_G_14_14);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__digraph__next_value_of_HeadVar__1_1 = mercury__digraph__Edges_9;
              MR_Word mercury__digraph__next_value_of_STATE_VARIABLE_G_0_2 = mercury__digraph__STATE_VARIABLE_G_14_14;

              mercury__digraph__STATE_VARIABLE_G_0_2 = mercury__digraph__next_value_of_STATE_VARIABLE_G_0_2;
              mercury__digraph__HeadVar__1_1 = mercury__digraph__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__digraph__delete_assoc_list_2_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_9,
  MR_Word mercury__digraph__Edges_4,
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_6)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__STATE_VARIABLE_G_7;

    {
      mercury__digraph__delete_assoc_list_3_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__Edges_4, mercury__digraph__STATE_VARIABLE_G_0_6, &mercury__digraph__STATE_VARIABLE_G_7);
    }
    return mercury__digraph__STATE_VARIABLE_G_7;
  }
}

void MR_CALL 
mercury__digraph__delete_edge_4_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_32,
  MR_Word mercury__digraph__X_5,
  MR_Word mercury__digraph__Y_6,
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_10,
  MR_Word * mercury__digraph__STATE_VARIABLE_G_11)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Integer mercury__digraph__XI_8 = (MR_Integer) mercury__digraph__X_5;
    MR_Integer mercury__digraph__YI_9 = (MR_Integer) mercury__digraph__Y_6;
    MR_Word mercury__digraph__STATE_VARIABLE_G_12_12;
    MR_Word mercury__digraph__Var_13;
    MR_Word mercury__digraph__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 2)));
    MR_Word mercury__digraph__Var_16;
    MR_Word mercury__digraph__Var_24;
    MR_Integer mercury__digraph__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 0)));
    MR_Word mercury__digraph__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 1)));
    MR_Word mercury__digraph__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 3)));
    MR_Word mercury__digraph__TypeInfo_14_41;
    MR_Word mercury__digraph__TypeInfo_16_43;
    MR_Word mercury__digraph__SuccXs0_37;
    MR_Word mercury__digraph__TypeCtorInfo_13_40 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeCtorInfo_15_42 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    MR_Box mercury__digraph__conv0_SuccXs0_37;
    MR_Integer mercury__digraph__Var_21;
    MR_Word mercury__digraph__Var_22;
    MR_Word mercury__digraph__Var_23;
    MR_Integer mercury__digraph__Var_28;
    MR_Word mercury__digraph__Var_29;
    MR_Word mercury__digraph__Var_30;
    MR_Word mercury__digraph__Var_31;

    {
      mercury__digraph__TypeInfo_14_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_41, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_13_40));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_41, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_32));
    }
    {
      mercury__digraph__TypeInfo_16_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_43, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_15_42));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_43, 1) = ((MR_Box) (mercury__digraph__TypeInfo_14_41));
    }
    {
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_16_43, (MR_Word) mercury__digraph__Var_14, mercury__digraph__XI_8, &mercury__digraph__conv0_SuccXs0_37);
    }
    if (mercury__digraph__succeeded)
      {
        mercury__digraph__SuccXs0_37 = ((MR_Word) mercury__digraph__conv0_SuccXs0_37);
        mercury__digraph__succeeded = MR_TRUE;
      }
    if (mercury__digraph__succeeded)
      {
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_46 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
        MR_Word mercury__digraph__TypeClassInfo_for_enum_47;
        MR_Word mercury__digraph__TypeCtorInfo_21_48;
        MR_Word mercury__digraph__SuccXs_38;
        MR_Word mercury__digraph__V_6_73;
        MR_Integer mercury__digraph__V_9_75;
        MR_Word mercury__digraph__V_4_77;
        MR_Word mercury__digraph__V_5_78;
        MR_Word mercury__digraph__V_6_79;
        MR_Box MR_CALL (* mercury__digraph__func_1)(MR_Box, MR_Box);
        MR_Box mercury__digraph__conv2_V_9_75;

        {
          mercury__digraph__TypeClassInfo_for_enum_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_47, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_46));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_47, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_32));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_47, 2) = ((MR_Box) (mercury__digraph__TypeInfo_14_41));
        }
        mercury__digraph__V_6_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__digraph__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_47, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__digraph__conv2_V_9_75 = mercury__digraph__func_1(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_47), ((MR_Box) (mercury__digraph__Y_6)));
        }
        mercury__digraph__V_9_75 = ((MR_Integer) mercury__digraph__conv2_V_9_75);
        {
          mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__V_6_73, mercury__digraph__V_9_75, &mercury__digraph__V_5_78);
        }
        mercury__digraph__V_4_77 = (MR_Word) mercury__digraph__SuccXs0_37;
        {
          mercury__digraph__V_6_79 = mercury__sparse_bitset__difference_2_2_f_0(mercury__digraph__V_4_77, mercury__digraph__V_5_78);
        }
        mercury__digraph__SuccXs_38 = (MR_Word) mercury__digraph__V_6_79;
        mercury__digraph__TypeCtorInfo_21_48 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        {
          mercury__map__det_update_4_p_0(mercury__digraph__TypeCtorInfo_21_48, mercury__digraph__TypeInfo_16_43, ((MR_Box) (mercury__digraph__XI_8)), ((MR_Box) (mercury__digraph__SuccXs_38)), mercury__digraph__Var_14, &mercury__digraph__Var_13);
        }
      }
    else
      mercury__digraph__Var_13 = mercury__digraph__Var_14;
    mercury__digraph__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 0)));
    mercury__digraph__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 1)));
    mercury__digraph__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 2)));
    mercury__digraph__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 3)));
    {
      mercury__digraph__STATE_VARIABLE_G_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 0) = ((MR_Box) (mercury__digraph__Var_21));
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 1) = ((MR_Box) (mercury__digraph__Var_22));
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 2) = ((MR_Box) (mercury__digraph__Var_13));
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 3) = ((MR_Box) (mercury__digraph__Var_24));
    }
    {
      mercury__digraph__Var_16 = mercury__digraph__key_set_map_delete_3_f_0(mercury__digraph__TypeInfo_for_T_32, mercury__digraph__Var_24, mercury__digraph__YI_9, mercury__digraph__X_5);
    }
    mercury__digraph__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 0)));
    mercury__digraph__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 1)));
    mercury__digraph__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 2)));
    mercury__digraph__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *mercury__digraph__STATE_VARIABLE_G_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__digraph__Var_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__digraph__Var_29));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__digraph__Var_30));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__digraph__Var_16));
    }
  }
}

MR_Word MR_CALL 
mercury__digraph__delete_edge_3_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_11,
  MR_Word mercury__digraph__X_5,
  MR_Word mercury__digraph__Y_6,
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_8)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__STATE_VARIABLE_G_9;

    {
      mercury__digraph__delete_edge_4_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__X_5, mercury__digraph__Y_6, mercury__digraph__STATE_VARIABLE_G_0_8, &mercury__digraph__STATE_VARIABLE_G_9);
    }
    return mercury__digraph__STATE_VARIABLE_G_9;
  }
}

void MR_CALL 
mercury__digraph__add_assoc_list_3_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_16,
  MR_Word mercury__digraph__HeadVar__1_1,
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_2,
  MR_Word * mercury__digraph__STATE_VARIABLE_G_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__digraph__succeeded;

        if ((mercury__digraph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__digraph__STATE_VARIABLE_G_3 = mercury__digraph__STATE_VARIABLE_G_0_2;
        else
          {
            MR_Word mercury__digraph__X_7;
            MR_Word mercury__digraph__Y_8;
            MR_Word mercury__digraph__Edges_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__digraph__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__digraph__STATE_VARIABLE_G_14_14;

            mercury__digraph__X_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_13, (MR_Integer) 0)));
            mercury__digraph__Y_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_13, (MR_Integer) 1)));
            {
              mercury__digraph__add_edge_4_p_0(mercury__digraph__TypeInfo_for_T_16, mercury__digraph__X_7, mercury__digraph__Y_8, mercury__digraph__STATE_VARIABLE_G_0_2, &mercury__digraph__STATE_VARIABLE_G_14_14);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__digraph__next_value_of_HeadVar__1_1 = mercury__digraph__Edges_9;
              MR_Word mercury__digraph__next_value_of_STATE_VARIABLE_G_0_2 = mercury__digraph__STATE_VARIABLE_G_14_14;

              mercury__digraph__STATE_VARIABLE_G_0_2 = mercury__digraph__next_value_of_STATE_VARIABLE_G_0_2;
              mercury__digraph__HeadVar__1_1 = mercury__digraph__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__digraph__add_assoc_list_2_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_9,
  MR_Word mercury__digraph__Edges_4,
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_6)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__STATE_VARIABLE_G_7;

    {
      mercury__digraph__add_assoc_list_3_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__Edges_4, mercury__digraph__STATE_VARIABLE_G_0_6, &mercury__digraph__STATE_VARIABLE_G_7);
    }
    return mercury__digraph__STATE_VARIABLE_G_7;
  }
}

void MR_CALL 
mercury__digraph__add_vertex_pair_3_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_10,
  MR_Word mercury__digraph__HeadVar__1_1,
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_7,
  MR_Word * mercury__digraph__STATE_VARIABLE_G_8)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Box mercury__digraph__VX_4 = (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__1_1, (MR_Integer) 0));
    MR_Box mercury__digraph__VY_5 = (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__1_1, (MR_Integer) 1));
    MR_Word mercury__digraph__X_16;
    MR_Word mercury__digraph__Y_17;
    MR_Word mercury__digraph__STATE_VARIABLE_G_12_18;
    MR_Word mercury__digraph__STATE_VARIABLE_G_13_19;

    {
      mercury__digraph__add_vertex_4_p_0(mercury__digraph__TypeInfo_for_T_10, mercury__digraph__VX_4, &mercury__digraph__X_16, mercury__digraph__STATE_VARIABLE_G_0_7, &mercury__digraph__STATE_VARIABLE_G_12_18);
    }
    {
      mercury__digraph__add_vertex_4_p_0(mercury__digraph__TypeInfo_for_T_10, mercury__digraph__VY_5, &mercury__digraph__Y_17, mercury__digraph__STATE_VARIABLE_G_12_18, &mercury__digraph__STATE_VARIABLE_G_13_19);
    }
    {
      mercury__digraph__add_edge_4_p_0(mercury__digraph__TypeInfo_for_T_10, mercury__digraph__X_16, mercury__digraph__Y_17, mercury__digraph__STATE_VARIABLE_G_13_19, mercury__digraph__STATE_VARIABLE_G_8);
    }
  }
}

MR_Word MR_CALL 
mercury__digraph__add_vertex_pair_2_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_9,
  MR_Word mercury__digraph__Edge_4,
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_6)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__STATE_VARIABLE_G_7;
    MR_Box mercury__digraph__VX_12 = (MR_hl_field(MR_mktag(0), mercury__digraph__Edge_4, (MR_Integer) 0));
    MR_Box mercury__digraph__VY_13 = (MR_hl_field(MR_mktag(0), mercury__digraph__Edge_4, (MR_Integer) 1));
    MR_Word mercury__digraph__X_21;
    MR_Word mercury__digraph__Y_22;
    MR_Word mercury__digraph__STATE_VARIABLE_G_12_23;
    MR_Word mercury__digraph__STATE_VARIABLE_G_13_24;

    {
      mercury__digraph__add_vertex_4_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__VX_12, &mercury__digraph__X_21, mercury__digraph__STATE_VARIABLE_G_0_6, &mercury__digraph__STATE_VARIABLE_G_12_23);
    }
    {
      mercury__digraph__add_vertex_4_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__VY_13, &mercury__digraph__Y_22, mercury__digraph__STATE_VARIABLE_G_12_23, &mercury__digraph__STATE_VARIABLE_G_13_24);
    }
    {
      mercury__digraph__add_edge_4_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__X_21, mercury__digraph__Y_22, mercury__digraph__STATE_VARIABLE_G_13_24, &mercury__digraph__STATE_VARIABLE_G_7);
    }
    return mercury__digraph__STATE_VARIABLE_G_7;
  }
}

void MR_CALL 
mercury__digraph__add_vertices_and_edge_4_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_15,
  MR_Box mercury__digraph__VX_5,
  MR_Box mercury__digraph__VY_6,
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_10,
  MR_Word * mercury__digraph__STATE_VARIABLE_G_11)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__X_8;
    MR_Word mercury__digraph__Y_9;
    MR_Word mercury__digraph__STATE_VARIABLE_G_12_12;
    MR_Word mercury__digraph__STATE_VARIABLE_G_13_13;

    {
      mercury__digraph__add_vertex_4_p_0(mercury__digraph__TypeInfo_for_T_15, mercury__digraph__VX_5, &mercury__digraph__X_8, mercury__digraph__STATE_VARIABLE_G_0_10, &mercury__digraph__STATE_VARIABLE_G_12_12);
    }
    {
      mercury__digraph__add_vertex_4_p_0(mercury__digraph__TypeInfo_for_T_15, mercury__digraph__VY_6, &mercury__digraph__Y_9, mercury__digraph__STATE_VARIABLE_G_12_12, &mercury__digraph__STATE_VARIABLE_G_13_13);
    }
    {
      mercury__digraph__add_edge_4_p_0(mercury__digraph__TypeInfo_for_T_15, mercury__digraph__X_8, mercury__digraph__Y_9, mercury__digraph__STATE_VARIABLE_G_13_13, mercury__digraph__STATE_VARIABLE_G_11);
    }
  }
}

MR_Word MR_CALL 
mercury__digraph__add_vertices_and_edge_3_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_11,
  MR_Box mercury__digraph__VX_5,
  MR_Box mercury__digraph__VY_6,
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_8)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__STATE_VARIABLE_G_9;
    MR_Word mercury__digraph__X_17;
    MR_Word mercury__digraph__Y_18;
    MR_Word mercury__digraph__STATE_VARIABLE_G_12_19;
    MR_Word mercury__digraph__STATE_VARIABLE_G_13_20;

    {
      mercury__digraph__add_vertex_4_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__VX_5, &mercury__digraph__X_17, mercury__digraph__STATE_VARIABLE_G_0_8, &mercury__digraph__STATE_VARIABLE_G_12_19);
    }
    {
      mercury__digraph__add_vertex_4_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__VY_6, &mercury__digraph__Y_18, mercury__digraph__STATE_VARIABLE_G_12_19, &mercury__digraph__STATE_VARIABLE_G_13_20);
    }
    {
      mercury__digraph__add_edge_4_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__X_17, mercury__digraph__Y_18, mercury__digraph__STATE_VARIABLE_G_13_20, &mercury__digraph__STATE_VARIABLE_G_9);
    }
    return mercury__digraph__STATE_VARIABLE_G_9;
  }
}

void MR_CALL 
mercury__digraph__add_edge_4_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_32,
  MR_Word mercury__digraph__X_5,
  MR_Word mercury__digraph__Y_6,
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_10,
  MR_Word * mercury__digraph__STATE_VARIABLE_G_11)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Integer mercury__digraph__XI_8 = (MR_Integer) mercury__digraph__X_5;
    MR_Integer mercury__digraph__YI_9 = (MR_Integer) mercury__digraph__Y_6;
    MR_Word mercury__digraph__STATE_VARIABLE_G_12_12;
    MR_Word mercury__digraph__Var_13;
    MR_Word mercury__digraph__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 2)));
    MR_Word mercury__digraph__Var_16;
    MR_Word mercury__digraph__Var_24;
    MR_Integer mercury__digraph__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 0)));
    MR_Word mercury__digraph__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 1)));
    MR_Word mercury__digraph__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 3)));
    MR_Word mercury__digraph__TypeInfo_16_43;
    MR_Word mercury__digraph__TypeInfo_18_45;
    MR_Word mercury__digraph__SuccXs0_37;
    MR_Word mercury__digraph__TypeCtorInfo_15_42 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeCtorInfo_17_44 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
    MR_Box mercury__digraph__conv0_SuccXs0_37;
    MR_Integer mercury__digraph__Var_21;
    MR_Word mercury__digraph__Var_22;
    MR_Word mercury__digraph__Var_23;
    MR_Integer mercury__digraph__Var_28;
    MR_Word mercury__digraph__Var_29;
    MR_Word mercury__digraph__Var_30;
    MR_Word mercury__digraph__Var_31;

    {
      mercury__digraph__TypeInfo_16_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_43, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_15_42));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_43, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_32));
    }
    {
      mercury__digraph__TypeInfo_18_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_18_45, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_17_44));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_18_45, 1) = ((MR_Box) (mercury__digraph__TypeInfo_16_43));
    }
    {
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_18_45, (MR_Word) mercury__digraph__Var_14, mercury__digraph__XI_8, &mercury__digraph__conv0_SuccXs0_37);
    }
    if (mercury__digraph__succeeded)
      {
        mercury__digraph__SuccXs0_37 = ((MR_Word) mercury__digraph__conv0_SuccXs0_37);
        mercury__digraph__succeeded = MR_TRUE;
      }
    if (mercury__digraph__succeeded)
      {
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_48 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
        MR_Word mercury__digraph__TypeClassInfo_for_enum_49;
        MR_Word mercury__digraph__V_3_69;
        MR_Integer mercury__digraph__V_5_70;
        MR_Box MR_CALL (* mercury__digraph__func_1)(MR_Box, MR_Box);
        MR_Box mercury__digraph__conv2_V_5_70;

        {
          mercury__digraph__TypeClassInfo_for_enum_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_49, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_48));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_49, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_32));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_49, 2) = ((MR_Box) (mercury__digraph__TypeInfo_16_43));
        }
        mercury__digraph__V_3_69 = (MR_Word) mercury__digraph__SuccXs0_37;
        mercury__digraph__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_49, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__digraph__conv2_V_5_70 = mercury__digraph__func_1(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_49), ((MR_Box) (mercury__digraph__Y_6)));
        }
        mercury__digraph__V_5_70 = ((MR_Integer) mercury__digraph__conv2_V_5_70);
        {
          mercury__digraph__succeeded = mercury__sparse_bitset__contains_search_nodes_2_p_0(mercury__digraph__V_3_69, mercury__digraph__V_5_70);
        }
        if (mercury__digraph__succeeded)
          mercury__digraph__Var_13 = mercury__digraph__Var_14;
        else
          {
            MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_52 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
            MR_Word mercury__digraph__TypeClassInfo_for_enum_53;
            MR_Word mercury__digraph__TypeCtorInfo_27_54;
            MR_Word mercury__digraph__SuccXs_38;
            MR_Word mercury__digraph__V_6_74;
            MR_Integer mercury__digraph__V_9_76;
            MR_Word mercury__digraph__V_5_77;
            MR_Box MR_CALL (* mercury__digraph__func_3)(MR_Box, MR_Box);
            MR_Box mercury__digraph__conv4_V_9_76;

            {
              mercury__digraph__TypeClassInfo_for_enum_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_53, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_52));
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_53, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_32));
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_53, 2) = ((MR_Box) (mercury__digraph__TypeInfo_16_43));
            }
            mercury__digraph__V_6_74 = (MR_Word) mercury__digraph__SuccXs0_37;
            mercury__digraph__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_53, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              mercury__digraph__conv4_V_9_76 = mercury__digraph__func_3(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_53), ((MR_Box) (mercury__digraph__Y_6)));
            }
            mercury__digraph__V_9_76 = ((MR_Integer) mercury__digraph__conv4_V_9_76);
            {
              mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__V_6_74, mercury__digraph__V_9_76, &mercury__digraph__V_5_77);
            }
            mercury__digraph__SuccXs_38 = (MR_Word) mercury__digraph__V_5_77;
            mercury__digraph__TypeCtorInfo_27_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            {
              mercury__map__det_update_4_p_0(mercury__digraph__TypeCtorInfo_27_54, mercury__digraph__TypeInfo_18_45, ((MR_Box) (mercury__digraph__XI_8)), ((MR_Box) (mercury__digraph__SuccXs_38)), mercury__digraph__Var_14, &mercury__digraph__Var_13);
            }
          }
      }
    else
      {
        MR_Word mercury__digraph__TypeCtorInfo_30_57 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
        MR_Word mercury__digraph__TypeInfo_31_58;
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_59;
        MR_Word mercury__digraph__TypeClassInfo_for_enum_60;
        MR_Word mercury__digraph__TypeCtorInfo_34_61;
        MR_Word mercury__digraph__TypeCtorInfo_35_62;
        MR_Word mercury__digraph__TypeInfo_36_63;
        MR_Word mercury__digraph__SuccXs_40;
        MR_Word mercury__digraph__V_6_87;
        MR_Integer mercury__digraph__V_9_89;
        MR_Word mercury__digraph__V_5_90;
        MR_Box MR_CALL (* mercury__digraph__func_5)(MR_Box, MR_Box);
        MR_Box mercury__digraph__conv6_V_9_89;

        {
          mercury__digraph__TypeInfo_31_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_31_58, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_30_57));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_31_58, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_32));
        }
        mercury__digraph__V_6_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__digraph__BaseTypeClassInfo_for_enum_59 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
        {
          mercury__digraph__TypeClassInfo_for_enum_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_60, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_59));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_60, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_32));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_60, 2) = ((MR_Box) (mercury__digraph__TypeInfo_31_58));
        }
        mercury__digraph__func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_60, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__digraph__conv6_V_9_89 = mercury__digraph__func_5(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_60), ((MR_Box) (mercury__digraph__Y_6)));
        }
        mercury__digraph__V_9_89 = ((MR_Integer) mercury__digraph__conv6_V_9_89);
        {
          mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__V_6_87, mercury__digraph__V_9_89, &mercury__digraph__V_5_90);
        }
        mercury__digraph__SuccXs_40 = (MR_Word) mercury__digraph__V_5_90;
        mercury__digraph__TypeCtorInfo_34_61 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        mercury__digraph__TypeCtorInfo_35_62 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
        {
          mercury__digraph__TypeInfo_36_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_36_63, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_35_62));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_36_63, 1) = ((MR_Box) (mercury__digraph__TypeInfo_31_58));
        }
        {
          mercury__map__det_insert_4_p_0(mercury__digraph__TypeCtorInfo_34_61, mercury__digraph__TypeInfo_36_63, ((MR_Box) (mercury__digraph__XI_8)), ((MR_Box) (mercury__digraph__SuccXs_40)), mercury__digraph__Var_14, &mercury__digraph__Var_13);
        }
      }
    mercury__digraph__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 0)));
    mercury__digraph__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 1)));
    mercury__digraph__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 2)));
    mercury__digraph__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 3)));
    {
      mercury__digraph__STATE_VARIABLE_G_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 0) = ((MR_Box) (mercury__digraph__Var_21));
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 1) = ((MR_Box) (mercury__digraph__Var_22));
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 2) = ((MR_Box) (mercury__digraph__Var_13));
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 3) = ((MR_Box) (mercury__digraph__Var_24));
    }
    {
      mercury__digraph__Var_16 = mercury__digraph__key_set_map_add_3_f_0(mercury__digraph__TypeInfo_for_T_32, mercury__digraph__Var_24, mercury__digraph__YI_9, mercury__digraph__X_5);
    }
    mercury__digraph__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 0)));
    mercury__digraph__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 1)));
    mercury__digraph__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 2)));
    mercury__digraph__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *mercury__digraph__STATE_VARIABLE_G_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__digraph__Var_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__digraph__Var_29));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__digraph__Var_30));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__digraph__Var_16));
    }
  }
}

MR_Word MR_CALL 
mercury__digraph__add_edge_3_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_11,
  MR_Word mercury__digraph__X_5,
  MR_Word mercury__digraph__Y_6,
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_8)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__STATE_VARIABLE_G_9;

    {
      mercury__digraph__add_edge_4_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__X_5, mercury__digraph__Y_6, mercury__digraph__STATE_VARIABLE_G_0_8, &mercury__digraph__STATE_VARIABLE_G_9);
    }
    return mercury__digraph__STATE_VARIABLE_G_9;
  }
}

void MR_CALL 
mercury__digraph__lookup_vertex_3_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_15,
  MR_Word mercury__digraph__G_4,
  MR_Word mercury__digraph__Key_5,
  MR_Box * mercury__digraph__Vertex_6)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Box mercury__digraph__Vertex0_7;
    MR_Word mercury__digraph__TypeCtorInfo_16_16 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeInfo_17_17;
    MR_Word mercury__digraph__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 1)));
    MR_Word mercury__digraph__V_4_20;
    MR_Word mercury__digraph__V_5_21;
    MR_Word mercury__digraph__Var_23;
    MR_Integer mercury__digraph__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 0)));
    MR_Word mercury__digraph__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 2)));
    MR_Word mercury__digraph__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 3)));
    MR_Box mercury__digraph__conv0_Var_23;

    {
      mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_15));
    }
    mercury__digraph__V_4_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_8, (MR_Integer) 0)));
    mercury__digraph__V_5_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_8, (MR_Integer) 1)));
    {
      mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_17_17, mercury__digraph__TypeInfo_for_T_15, (MR_Word) mercury__digraph__V_5_21, ((MR_Box) (mercury__digraph__Key_5)), &mercury__digraph__Vertex0_7);
    }
    if (mercury__digraph__succeeded)
      {
        {
          mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_for_T_15, mercury__digraph__TypeInfo_17_17, mercury__digraph__V_4_20, mercury__digraph__Vertex0_7, &mercury__digraph__conv0_Var_23);
        }
        if (mercury__digraph__succeeded)
          {
            mercury__digraph__Var_23 = ((MR_Word) mercury__digraph__conv0_Var_23);
            mercury__digraph__succeeded = MR_TRUE;
          }
        if (mercury__digraph__succeeded)
          {
            mercury__digraph__succeeded = mercury__builtin__unify_2_p_0(mercury__digraph__TypeInfo_17_17, ((MR_Box) (mercury__digraph__Key_5)), ((MR_Box) (mercury__digraph__Var_23)));
          }
      }
    if (mercury__digraph__succeeded)
      *mercury__digraph__Vertex_6 = mercury__digraph__Vertex0_7;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "digraph", (MR_String) "predicate \140digraph.lookup_vertex\'/3", (MR_String) "search for vertex failed");
          return;
        }
      }
  }
}

MR_Box MR_CALL 
mercury__digraph__lookup_vertex_2_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_7,
  MR_Word mercury__digraph__G_4,
  MR_Word mercury__digraph__Key_5)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Box mercury__digraph__Vertex_6;

    {
      mercury__digraph__lookup_vertex_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__Key_5, &mercury__digraph__Vertex_6);
    }
    return mercury__digraph__Vertex_6;
  }
}

void MR_CALL 
mercury__digraph__lookup_key_3_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_11,
  MR_Word mercury__digraph__G_4,
  MR_Box mercury__digraph__Vertex_5,
  MR_Word * mercury__digraph__Key_6)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__Key0_7;
    MR_Word mercury__digraph__TypeCtorInfo_12_19 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeInfo_13_20;
    MR_Word mercury__digraph__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 1)));
    MR_Word mercury__digraph__V_4_23;
    MR_Word mercury__digraph__V_5_24;
    MR_Box mercury__digraph__Var_25;
    MR_Integer mercury__digraph__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 0)));
    MR_Word mercury__digraph__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 2)));
    MR_Word mercury__digraph__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 3)));
    MR_Box mercury__digraph__conv0_Key0_7;

    {
      mercury__digraph__TypeInfo_13_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_13_20, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_12_19));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_13_20, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_11));
    }
    mercury__digraph__V_4_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_15, (MR_Integer) 0)));
    mercury__digraph__V_5_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_15, (MR_Integer) 1)));
    {
      mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__TypeInfo_13_20, mercury__digraph__V_4_23, mercury__digraph__Vertex_5, &mercury__digraph__conv0_Key0_7);
    }
    if (mercury__digraph__succeeded)
      {
        mercury__digraph__Key0_7 = ((MR_Word) mercury__digraph__conv0_Key0_7);
        mercury__digraph__succeeded = MR_TRUE;
      }
    if (mercury__digraph__succeeded)
      {
        {
          mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_13_20, mercury__digraph__TypeInfo_for_T_11, (MR_Word) mercury__digraph__V_5_24, ((MR_Box) (mercury__digraph__Key0_7)), &mercury__digraph__Var_25);
        }
        if (mercury__digraph__succeeded)
          {
            mercury__digraph__succeeded = mercury__builtin__unify_2_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__Vertex_5, mercury__digraph__Var_25);
          }
      }
    if (mercury__digraph__succeeded)
      *mercury__digraph__Key_6 = mercury__digraph__Key0_7;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "digraph", (MR_String) "predicate \140digraph.lookup_key\'/3", (MR_String) "search for key failed");
          return;
        }
      }
  }
}

MR_Word MR_CALL 
mercury__digraph__lookup_key_2_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_7,
  MR_Word mercury__digraph__G_4,
  MR_Box mercury__digraph__Vertex_5)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__Key_6;

    {
      mercury__digraph__lookup_key_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__Vertex_5, &mercury__digraph__Key_6);
    }
    return mercury__digraph__Key_6;
  }
}

MR_bool MR_CALL 
mercury__digraph__search_key_3_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_11,
  MR_Word mercury__digraph__G_4,
  MR_Box mercury__digraph__Vertex_5,
  MR_Word * mercury__digraph__Key_6)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__TypeCtorInfo_12_12 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeInfo_13_13;
    MR_Word mercury__digraph__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 1)));
    MR_Word mercury__digraph__V_4_16;
    MR_Word mercury__digraph__V_5_17;
    MR_Box mercury__digraph__Var_18;
    MR_Integer mercury__digraph__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 0)));
    MR_Word mercury__digraph__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 2)));
    MR_Word mercury__digraph__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 3)));
    MR_Box mercury__digraph__conv0_Key_6;

    {
      mercury__digraph__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_13_13, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_12_12));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_13_13, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_11));
    }
    mercury__digraph__V_4_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_7, (MR_Integer) 0)));
    mercury__digraph__V_5_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_7, (MR_Integer) 1)));
    {
      mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__TypeInfo_13_13, mercury__digraph__V_4_16, mercury__digraph__Vertex_5, &mercury__digraph__conv0_Key_6);
    }
    if (mercury__digraph__succeeded)
      {
        *mercury__digraph__Key_6 = ((MR_Word) mercury__digraph__conv0_Key_6);
        mercury__digraph__succeeded = MR_TRUE;
      }
    if (mercury__digraph__succeeded)
      {
        {
          mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_13_13, mercury__digraph__TypeInfo_for_T_11, (MR_Word) mercury__digraph__V_5_17, ((MR_Box) (*mercury__digraph__Key_6)), &mercury__digraph__Var_18);
        }
        if (mercury__digraph__succeeded)
          {
            mercury__digraph__succeeded = mercury__builtin__unify_2_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__Vertex_5, mercury__digraph__Var_18);
          }
      }
    return mercury__digraph__succeeded;
  }
}

void MR_CALL 
mercury__digraph__add_vertex_4_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_26,
  MR_Box mercury__digraph__Vertex_5,
  MR_Word * mercury__digraph__Key_6,
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_9,
  MR_Word * mercury__digraph__STATE_VARIABLE_G_10)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__Key0_8;
    MR_Word mercury__digraph__TypeCtorInfo_27_27 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
    MR_Word mercury__digraph__TypeInfo_28_28;
    MR_Word mercury__digraph__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_9, (MR_Integer) 1)));
    MR_Word mercury__digraph__V_4_33;
    MR_Word mercury__digraph__V_5_34;
    MR_Box mercury__digraph__Var_35;
    MR_Integer mercury__digraph__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_9, (MR_Integer) 0)));
    MR_Word mercury__digraph__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_9, (MR_Integer) 2)));
    MR_Word mercury__digraph__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_9, (MR_Integer) 3)));
    MR_Box mercury__digraph__conv0_Key0_8;

    {
      mercury__digraph__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_28_28, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_27_27));
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_28_28, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_26));
    }
    mercury__digraph__V_4_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_11, (MR_Integer) 0)));
    mercury__digraph__V_5_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__Var_11, (MR_Integer) 1)));
    {
      mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_for_T_26, mercury__digraph__TypeInfo_28_28, mercury__digraph__V_4_33, mercury__digraph__Vertex_5, &mercury__digraph__conv0_Key0_8);
    }
    if (mercury__digraph__succeeded)
      {
        mercury__digraph__Key0_8 = ((MR_Word) mercury__digraph__conv0_Key0_8);
        mercury__digraph__succeeded = MR_TRUE;
      }
    if (mercury__digraph__succeeded)
      {
        {
          mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_28_28, mercury__digraph__TypeInfo_for_T_26, (MR_Word) mercury__digraph__V_5_34, ((MR_Box) (mercury__digraph__Key0_8)), &mercury__digraph__Var_35);
        }
        if (mercury__digraph__succeeded)
          {
            mercury__digraph__succeeded = mercury__builtin__unify_2_p_0(mercury__digraph__TypeInfo_for_T_26, mercury__digraph__Vertex_5, mercury__digraph__Var_35);
          }
      }
    if (mercury__digraph__succeeded)
      {
        *mercury__digraph__Key_6 = mercury__digraph__Key0_8;
        *mercury__digraph__STATE_VARIABLE_G_10 = mercury__digraph__STATE_VARIABLE_G_0_9;
      }
    else
      {
        MR_Word mercury__digraph__TypeCtorInfo_29_29;
        MR_Word mercury__digraph__TypeInfo_30_30;
        MR_Word mercury__digraph__STATE_VARIABLE_G_12_12;
        MR_Word mercury__digraph__Var_14;
        MR_Integer mercury__digraph__I_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_9, (MR_Integer) 0)));
        MR_Integer mercury__digraph__Var_47;
        MR_Word mercury__digraph__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_9, (MR_Integer) 1)));
        MR_Word mercury__digraph__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_9, (MR_Integer) 2)));
        MR_Word mercury__digraph__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_9, (MR_Integer) 3)));
        MR_Integer mercury__digraph__Var_22;
        MR_Word mercury__digraph__Var_24;
        MR_Word mercury__digraph__Var_25;
        MR_Word mercury__digraph__Var_23;

        *mercury__digraph__Key_6 = (MR_Word) mercury__digraph__I_44;
        mercury__digraph__Var_47 = (mercury__digraph__I_44 + (MR_Integer) 1);
        {
          mercury__digraph__STATE_VARIABLE_G_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 0) = ((MR_Box) (mercury__digraph__Var_47));
          MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 1) = ((MR_Box) (mercury__digraph__Var_49));
          MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 2) = ((MR_Box) (mercury__digraph__Var_50));
          MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 3) = ((MR_Box) (mercury__digraph__Var_51));
        }
        mercury__digraph__TypeCtorInfo_29_29 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
        {
          mercury__digraph__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_30_30, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_29_29));
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_30_30, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_26));
        }
        {
          mercury__bimap__set_4_p_0(mercury__digraph__TypeInfo_for_T_26, mercury__digraph__TypeInfo_30_30, mercury__digraph__Vertex_5, ((MR_Box) (*mercury__digraph__Key_6)), mercury__digraph__Var_49, &mercury__digraph__Var_14);
        }
        mercury__digraph__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 0)));
        mercury__digraph__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 1)));
        mercury__digraph__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 2)));
        mercury__digraph__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 3)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *mercury__digraph__STATE_VARIABLE_G_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__digraph__Var_22));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__digraph__Var_14));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__digraph__Var_24));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__digraph__Var_25));
        }
      }
  }
}

void MR_CALL 
mercury__digraph__init_1_p_0(
  MR_Word mercury__digraph__TypeInfo_for_T_6,
  MR_Word * mercury__digraph__HeadVar__1_1)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__VMap_2 = (MR_Word) &mercury__digraph_scalar_common_4[0];
    MR_Word mercury__digraph__FwdMap_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__digraph__BwdMap_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__digraph__V_3_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__digraph__V_4_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    *mercury__digraph__HeadVar__1_1 = (MR_Word) &mercury__digraph_scalar_common_2[1];
  }
}

MR_Word MR_CALL 
mercury__digraph__init_0_f_0(
  MR_Word mercury__digraph__TypeInfo_for_T_3)
{
  {
    MR_bool mercury__digraph__succeeded;
    MR_Word mercury__digraph__G_2 = (MR_Word) &mercury__digraph_scalar_common_2[1];
    MR_Word mercury__digraph__VMap_4 = (MR_Word) &mercury__digraph_scalar_common_4[0];
    MR_Word mercury__digraph__FwdMap_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__digraph__BwdMap_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__digraph__V_3_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__digraph__V_4_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return mercury__digraph__G_2;
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

/* :- end_module digraph. */
