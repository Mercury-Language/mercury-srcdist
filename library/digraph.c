/*
** Automatically generated from `digraph.m'
** by the Mercury compiler,
** version rotd-2015-09-28
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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"



#line 132 "digraph.m"
struct mercury__digraph__is_edge_rev_3_p_0_env_0_s {
#line 132 "digraph.m"
  MR_Word * mercury__digraph__is_edge_rev_3_p_0_env_0__X_5;
#line 132 "digraph.m"
  MR_Cont mercury__digraph__is_edge_rev_3_p_0_env_0__cont;
#line 132 "digraph.m"
  void * mercury__digraph__is_edge_rev_3_p_0_env_0__cont_env_ptr;
#line 505 "digraph.m"
  MR_Box mercury__digraph__is_edge_rev_3_p_0_env_0__conv1_X_5;
#line 132 "digraph.m"
};

#line 125 "digraph.m"
struct mercury__digraph__is_edge_3_p_0_env_0_s {
#line 125 "digraph.m"
  MR_Word * mercury__digraph__is_edge_3_p_0_env_0__Y_6;
#line 125 "digraph.m"
  MR_Cont mercury__digraph__is_edge_3_p_0_env_0__cont;
#line 125 "digraph.m"
  void * mercury__digraph__is_edge_3_p_0_env_0__cont_env_ptr;
#line 501 "digraph.m"
  MR_Box mercury__digraph__is_edge_3_p_0_env_0__conv1_Y_6;
#line 125 "digraph.m"
};


#line 122 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__digraph__pti_digraph_key_1__pseudo_1;

#line 125 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__set_ordlist__pti_set_ordlist_1__pseudo_1;

#line 128 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__digraph__pti_digraph_key_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1;

#line 131 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1;

#line 134 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__bimap__pti_bimap_2__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1;

#line 137 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1;

#line 140 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1;

#line 143 "digraph.c"
static const MR_PseudoTypeInfo mercury__digraph__digraph__field_types_digraph_1_0[4];

#line 146 "digraph.c"
static const MR_ConstString mercury__digraph__digraph__field_names_digraph_1_0[4];

#line 149 "digraph.c"
static const MR_DuFunctorDesc mercury__digraph__digraph__du_functor_desc_digraph_1_0;

#line 152 "digraph.c"
static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_stag_ordered_digraph_1_0[1];

#line 155 "digraph.c"
static const MR_DuPtagLayout mercury__digraph__digraph__du_ptag_ordered_digraph_1[1];

#line 158 "digraph.c"
static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_name_ordered_digraph_1[1];

#line 161 "digraph.c"
static const MR_Integer mercury__digraph__digraph__functor_number_map_digraph_1[1];

#line 164 "digraph.c"
static const MR_Integer mercury__digraph__digraph__functor_number_map_digraph_key_1[1];

#line 167 "digraph.c"
static const MR_NotagFunctorDesc mercury__digraph__digraph__notag_functor_desc_digraph_key_1;

#line 170 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_digraph__pti_digraph_key_1__pseudo_1;

#line 173 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____clique_map_1_0_10001(
#line 176 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 178 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 180 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3);

#line 183 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____clique_map_1_0_10001(
#line 186 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 188 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 190 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 192 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4);

#line 195 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_1_0_10001(
#line 198 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 200 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 202 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3);

#line 205 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____digraph_1_0_10001(
#line 208 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 210 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 212 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 214 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4);

#line 217 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_key_1_0_10001(
#line 220 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 222 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 224 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3);

#line 227 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____digraph_key_1_0_10001(
#line 230 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 232 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 234 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 236 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4);

#line 239 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_key_set_1_0_10001(
#line 242 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 244 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 246 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3);

#line 249 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____digraph_key_set_1_0_10001(
#line 252 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 254 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 256 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 258 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4);

#line 261 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____key_map_1_0_10001(
#line 264 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 266 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 268 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3);

#line 271 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____key_map_1_0_10001(
#line 274 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 276 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 278 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 280 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4);

#line 283 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____key_set_map_1_0_10001(
#line 286 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 288 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 290 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3);

#line 293 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____key_set_map_1_0_10001(
#line 296 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 298 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 300 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 302 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4);

#line 305 "digraph.c"
static MR_Box MR_CALL 
mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__to_int_1_1_f_0_10001(
#line 308 "digraph.c"
  MR_Box mercury__digraph__closure_arg,
#line 310 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1);

#line 313 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__from_int_1_1_f_0_10001(
#line 316 "digraph.c"
  MR_Box mercury__digraph__closure_arg,
#line 318 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 320 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2);

#line 127 "list.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__digraph__V_27_27,
#line 127 "list.int"
  MR_Word mercury__digraph__V_28_28,
#line 127 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 127 "list.int"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 127 "list.int"
  MR_Word * mercury__digraph__HeadVar__4_4);

#line 89 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_49_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_51_93_95_48_9_p_in__sparse_bitset_0(
#line 89 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_50_50,
#line 89 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_51_51,
#line 89 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_35,
#line 89 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_10_10,
#line 89 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_12_12,
#line 89 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_13_13,
#line 89 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_14_14,
#line 89 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_22_15,
#line 89 "sparse_bitset.opt"
  MR_Word * mercury__digraph__V_23_16,
#line 89 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_24_17,
#line 89 "sparse_bitset.opt"
  MR_Word * mercury__digraph__V_25_18);

#line 103 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_51_93_95_48_7_p_in__sparse_bitset_0(
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_41_41,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_42_42,
#line 103 "sparse_bitset.opt"
  MR_Box mercury__digraph__V_43_43,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_8_8,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_10_10,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_11_11,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_12_12,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_19_13,
#line 103 "sparse_bitset.opt"
  MR_Word * mercury__digraph__V_20_14);

#line 103 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_52_93_95_48_7_p_in__sparse_bitset_0(
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_46_46,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_8_8,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_10_10,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_11_11,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_12_12,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_19_13,
#line 103 "sparse_bitset.opt"
  MR_Word * mercury__digraph__V_20_14);

#line 89 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_49_48_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_52_93_95_48_9_p_in__sparse_bitset_0(
#line 89 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_51_51,
#line 89 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_52_52,
#line 89 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_35,
#line 89 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_10_10,
#line 89 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_12_12,
#line 89 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_13_13,
#line 89 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_14_14,
#line 89 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_22_15,
#line 89 "sparse_bitset.opt"
  MR_Word * mercury__digraph__V_23_16,
#line 89 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_24_17,
#line 89 "sparse_bitset.opt"
  MR_Word * mercury__digraph__V_25_18);

#line 103 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_40_40,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_41_41,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_8_8,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_10_10,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_11_11,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_12_12,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_19_13,
#line 103 "sparse_bitset.opt"
  MR_Word * mercury__digraph__V_20_14);

#line 106 "sparse_bitset.opt"
static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_50_93_95_48_7_p_in__sparse_bitset_0(
#line 106 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_40_40,
#line 106 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_41_41,
#line 106 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_42_42,
#line 106 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 106 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_8_8,
#line 106 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_10_10,
#line 106 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_11_11,
#line 106 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_12_12,
#line 106 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_19_13,
#line 106 "sparse_bitset.opt"
  MR_Word * mercury__digraph__V_20_14);

#line 103 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_40_40,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_41_41,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_8_8,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_10_10,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_11_11,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_12_12,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_19_13,
#line 103 "sparse_bitset.opt"
  MR_Word * mercury__digraph__V_20_14);

#line 103 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_38_38,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_39_39,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_8_8,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_10_10,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_11_11,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_12_12,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_19_13,
#line 103 "sparse_bitset.opt"
  MR_Word * mercury__digraph__V_20_14);

#line 103 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_8_8,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_10_10,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_11_11,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_12_12,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_19_13,
#line 103 "sparse_bitset.opt"
  MR_Word * mercury__digraph__V_20_14);

#line 103 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_38_38,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_39_39,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_8_8,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_10_10,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_11_11,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_12_12,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_19_13,
#line 103 "sparse_bitset.opt"
  MR_Word * mercury__digraph__V_20_14);

#line 51 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_57_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_29_29,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_30_30,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 51 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4);

#line 77 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_57_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
#line 77 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 77 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 77 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 77 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4);

#line 51 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_29_29,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_30_30,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 51 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4);

#line 51 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_31_31,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_32_32,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 51 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4);

#line 54 "sparse_bitset.opt"
static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(
#line 54 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_31_31,
#line 54 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_32_32,
#line 54 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_33_33,
#line 54 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 54 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 54 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 54 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4);

#line 51 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_31_31,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_32_32,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 51 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4);

#line 37 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_56_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(
#line 37 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_43_43,
#line 37 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_44_44,
#line 37 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_27,
#line 37 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 37 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 37 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4,
#line 37 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__5_5,
#line 37 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__6_6);

#line 77 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_4_p_in__sparse_bitset_0(
#line 77 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_37_37,
#line 77 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 77 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 77 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 77 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4);

#line 77 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_4_p_in__sparse_bitset_0(
#line 77 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_32_32,
#line 77 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_33_33,
#line 77 "sparse_bitset.opt"
  MR_Box mercury__digraph__V_34_34,
#line 77 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 77 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 77 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 77 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4);

#line 37 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_56_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(
#line 37 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_42_42,
#line 37 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_43_43,
#line 37 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_27,
#line 37 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 37 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 37 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4,
#line 37 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__5_5,
#line 37 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__6_6);

#line 127 "list.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_48_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_93_95_48_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__digraph__V_21_21,
#line 127 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 127 "list.int"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 127 "list.int"
  MR_Word * mercury__digraph__HeadVar__4_4);

#line 139 "list.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_55_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_6_p_in__list_0(
#line 139 "list.int"
  MR_Word mercury__digraph__V_34_34,
#line 139 "list.int"
  MR_Word mercury__digraph__V_35_35,
#line 139 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 139 "list.int"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 139 "list.int"
  MR_Word * mercury__digraph__HeadVar__4_4,
#line 139 "list.int"
  MR_Word mercury__digraph__HeadVar__5_5,
#line 139 "list.int"
  MR_Word * mercury__digraph__HeadVar__6_6);

#line 127 "list.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__digraph__V_29_29,
#line 127 "list.int"
  MR_Word mercury__digraph__V_30_30,
#line 127 "list.int"
  MR_Word mercury__digraph__V_31_31,
#line 127 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 127 "list.int"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 127 "list.int"
  MR_Word * mercury__digraph__HeadVar__4_4);

#line 139 "list.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_55_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_53_93_95_48_6_p_in__list_0(
#line 139 "list.int"
  MR_Word mercury__digraph__V_43_43,
#line 139 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 139 "list.int"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 139 "list.int"
  MR_Word * mercury__digraph__HeadVar__4_4,
#line 139 "list.int"
  MR_Word mercury__digraph__HeadVar__5_5,
#line 139 "list.int"
  MR_Word * mercury__digraph__HeadVar__6_6);

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_2_f_in__list_0(
#line 311 "list.int"
  MR_Word mercury__digraph__V_23_23,
#line 311 "list.int"
  MR_Word mercury__digraph__V_24_24,
#line 311 "list.int"
  MR_Word mercury__digraph__V_25_25,
#line 311 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2);

#line 47 "sparse_bitset.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_55_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(
#line 47 "sparse_bitset.int"
  MR_Word mercury__digraph__V_28_28,
#line 47 "sparse_bitset.int"
  MR_Word mercury__digraph__V_29_29,
#line 47 "sparse_bitset.int"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_13,
#line 47 "sparse_bitset.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 47 "sparse_bitset.int"
  MR_Word mercury__digraph__V_11_9,
#line 47 "sparse_bitset.int"
  MR_Word * mercury__digraph__V_12_10,
#line 47 "sparse_bitset.int"
  MR_Word mercury__digraph__V_13_11,
#line 47 "sparse_bitset.int"
  MR_Word * mercury__digraph__V_14_12);

#line 130 "list.int"
static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_52_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__list_0(
#line 130 "list.int"
  MR_Word mercury__digraph__V_22_22,
#line 130 "list.int"
  MR_Word mercury__digraph__V_23_23,
#line 130 "list.int"
  MR_Word mercury__digraph__V_24_24,
#line 130 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 130 "list.int"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 130 "list.int"
  MR_Word * mercury__digraph__HeadVar__4_4);

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_51_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_2_f_in__list_0(
#line 311 "list.int"
  MR_Word mercury__digraph__V_14_14,
#line 311 "list.int"
  MR_Word mercury__digraph__V_15_15,
#line 311 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2);

#line 47 "sparse_bitset.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_55_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(
#line 47 "sparse_bitset.int"
  MR_Word mercury__digraph__V_29_29,
#line 47 "sparse_bitset.int"
  MR_Word mercury__digraph__V_30_30,
#line 47 "sparse_bitset.int"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_13,
#line 47 "sparse_bitset.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 47 "sparse_bitset.int"
  MR_Word mercury__digraph__V_11_9,
#line 47 "sparse_bitset.int"
  MR_Word * mercury__digraph__V_12_10,
#line 47 "sparse_bitset.int"
  MR_Word mercury__digraph__V_13_11,
#line 47 "sparse_bitset.int"
  MR_Word * mercury__digraph__V_14_12);

#line 40 "sparse_bitset.int"
static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(
#line 40 "sparse_bitset.int"
  MR_Word mercury__digraph__V_20_20,
#line 40 "sparse_bitset.int"
  MR_Word mercury__digraph__V_21_21,
#line 40 "sparse_bitset.int"
  MR_Word mercury__digraph__V_22_22,
#line 40 "sparse_bitset.int"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_9,
#line 40 "sparse_bitset.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 40 "sparse_bitset.int"
  MR_Word mercury__digraph__V_8_7,
#line 40 "sparse_bitset.int"
  MR_Word * mercury__digraph__V_9_8);

#line 45 "set.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_95_104_111_54_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__set_0(
#line 45 "set.int"
  MR_Word mercury__digraph__V_22_22,
#line 45 "set.int"
  MR_Word mercury__digraph__V_23_23,
#line 45 "set.int"
  MR_Word mercury__digraph__V_6_6,
#line 45 "set.int"
  MR_Word mercury__digraph__V_8_7,
#line 45 "set.int"
  MR_Word * mercury__digraph__V_9_8);

#line 312 "list.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_54_53_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
#line 312 "list.int"
  MR_Word mercury__digraph__V_14_14,
#line 312 "list.int"
  MR_Word mercury__digraph__V_15_15,
#line 312 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 312 "list.int"
  MR_Word * mercury__digraph__HeadVar__3_3);

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 1084 "digraph.m"
static void MR_CALL 
mercury__digraph__IntroducedFrom__pred__add_cartesian_product__1084__1_5_p_0(
#line 1084 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_23,
#line 1084 "digraph.m"
  MR_Word mercury__digraph__KeySet2_6,
#line 1084 "digraph.m"
  MR_Word mercury__digraph__HeadVar__3_15,
#line 1084 "digraph.m"
  MR_Word mercury__digraph__HeadVar__4_16,
#line 1084 "digraph.m"
  MR_Word * mercury__digraph__HeadVar__5_17);

#line 1080 "digraph.m"
static void MR_CALL 
mercury__digraph__add_cartesian_product_4_p_0(
#line 1080 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_23,
#line 1080 "digraph.m"
  MR_Word mercury__digraph__KeySet1_5,
#line 1080 "digraph.m"
  MR_Word mercury__digraph__KeySet2_6,
#line 1080 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Rtc_0_9,
#line 1080 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Rtc_10);

#line 1057 "digraph.m"
static void MR_CALL 
mercury__digraph__rtc_2_5_p_0(
#line 1057 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_30,
#line 1057 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 1057 "digraph.m"
  MR_Word mercury__digraph__G_2,
#line 1057 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Vis_0_3,
#line 1057 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Rtc_0_4,
#line 1057 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Rtc_5);

#line 814 "digraph.m"
static void MR_CALL 
mercury__digraph__reachable_from_4_p_0(
#line 814 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_19,
#line 814 "digraph.m"
  MR_Word mercury__digraph__G_5,
#line 814 "digraph.m"
  MR_Word mercury__digraph__Keys0_6,
#line 814 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Comp_0_15,
#line 814 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Comp_16);

#line 799 "digraph.m"
static void MR_CALL 
mercury__digraph__components_2_4_p_0(
#line 799 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_19,
#line 799 "digraph.m"
  MR_Word mercury__digraph__G_5,
#line 799 "digraph.m"
  MR_Word mercury__digraph__Xs0_6,
#line 799 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Components_0_14,
#line 799 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Components_15);

#line 744 "digraph.m"
static void MR_CALL 
mercury__digraph__accumulate_digraph_key_set_4_p_0(
#line 744 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_13,
#line 744 "digraph.m"
  MR_Word mercury__digraph__KMap_5,
#line 744 "digraph.m"
  MR_Word mercury__digraph__X_6,
#line 744 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Set_0_10,
#line 744 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Set_11);

#line 731 "digraph.m"
static void MR_CALL 
mercury__digraph__add_composition_edges_5_p_0(
#line 731 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_16,
#line 731 "digraph.m"
  MR_Word mercury__digraph__KMap1_6,
#line 731 "digraph.m"
  MR_Word mercury__digraph__KMap2_7,
#line 731 "digraph.m"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 731 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Comp_0_11,
#line 731 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Comp_12);

#line 713 "digraph.m"
static void MR_CALL 
mercury__digraph__find_necessary_keys_5_p_0(
#line 713 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_16,
#line 713 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 713 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Needed1_0_10,
#line 713 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Needed1_11,
#line 713 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Needed2_0_12,
#line 713 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Needed2_13);

#line 382 "digraph.m"
static MR_Word MR_CALL 
mercury__digraph__key_set_map_delete_3_f_0(
#line 382 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_11,
#line 382 "digraph.m"
  MR_Word mercury__digraph__Map0_5,
#line 382 "digraph.m"
  MR_Integer mercury__digraph__XI_6,
#line 382 "digraph.m"
  MR_Word mercury__digraph__Y_7);

#line 366 "digraph.m"
static MR_Word MR_CALL 
mercury__digraph__key_set_map_add_3_f_0(
#line 366 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_13,
#line 366 "digraph.m"
  MR_Word mercury__digraph__Map0_5,
#line 366 "digraph.m"
  MR_Integer mercury__digraph__XI_6,
#line 366 "digraph.m"
  MR_Word mercury__digraph__Y_7);

#line 505 "digraph.m"
static void MR_CALL 
mercury__digraph__is_edge_rev_3_p_0_1(
#line 505 "digraph.m"
  void * mercury__digraph__env_ptr_arg);

#line 501 "digraph.m"
static void MR_CALL 
mercury__digraph__is_edge_3_p_0_1(
#line 501 "digraph.m"
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
#include "version_array.mh"



#line 1175 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1183 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1191 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__digraph__pti_digraph_key_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) &mercury__digraph__set_ordlist__pti_set_ordlist_1__pseudo_1
  }
};

#line 1199 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__digraph__digraph__pti_digraph_key_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__digraph__digraph__pti_digraph_key_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
  }
};

#line 1208 "digraph.c"
const MR_TypeCtorInfo_Struct mercury__digraph__digraph__type_ctor_info_clique_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
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

#line 1225 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__bimap__pti_bimap_2__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__digraph__digraph__pti_digraph_key_1__pseudo_1
  }
};

#line 1234 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &mercury__digraph__digraph__pti_digraph_key_1__pseudo_1
  }
};

#line 1242 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__digraph__sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1
  }
};

#line 1251 "digraph.c"
static const MR_PseudoTypeInfo mercury__digraph__digraph__field_types_digraph_1_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__digraph__bimap__pti_bimap_2__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1
};

#line 1259 "digraph.c"
static const MR_ConstString mercury__digraph__digraph__field_names_digraph_1_0[4] = {
  (MR_String) "next_key",
  (MR_String) "vertex_map",
  (MR_String) "fwd_map",
  (MR_String) "bwd_map"
};

#line 1267 "digraph.c"
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
  NULL
};

#line 1282 "digraph.c"
static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_stag_ordered_digraph_1_0[1] = {
  &mercury__digraph__digraph__du_functor_desc_digraph_1_0
};

#line 1287 "digraph.c"
static const MR_DuPtagLayout mercury__digraph__digraph__du_ptag_ordered_digraph_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__digraph__digraph__du_stag_ordered_digraph_1_0
  }
};

#line 1296 "digraph.c"
static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_name_ordered_digraph_1[1] = {
  &mercury__digraph__digraph__du_functor_desc_digraph_1_0
};

#line 1301 "digraph.c"
static const MR_Integer mercury__digraph__digraph__functor_number_map_digraph_1[1] = {
  (MR_Integer) 0
};

#line 1306 "digraph.c"
const MR_TypeCtorInfo_Struct mercury__digraph__digraph__type_ctor_info_digraph_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
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

#line 1323 "digraph.c"
static const MR_Integer mercury__digraph__digraph__functor_number_map_digraph_key_1[1] = {
  (MR_Integer) 0
};

#line 1328 "digraph.c"
static const MR_NotagFunctorDesc mercury__digraph__digraph__notag_functor_desc_digraph_key_1 = {
  (MR_String) "digraph_key",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1335 "digraph.c"
const MR_TypeCtorInfo_Struct mercury__digraph__digraph__type_ctor_info_digraph_key_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
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

#line 1352 "digraph.c"
const MR_TypeCtorInfo_Struct mercury__digraph__digraph__type_ctor_info_digraph_key_set_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
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

#line 1369 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__digraph__digraph__pti_digraph_key_1__pseudo_1
  }
};

#line 1378 "digraph.c"
const MR_TypeCtorInfo_Struct mercury__digraph__digraph__type_ctor_info_key_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
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

#line 1395 "digraph.c"
const MR_TypeCtorInfo_Struct mercury__digraph__digraph__type_ctor_info_key_set_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
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

#line 1412 "digraph.c"
const MR_BaseTypeclassInfo base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__to_int_1_1_f_0_10001)),
  ((MR_Box) (mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__from_int_1_1_f_0_10001))
};

#line 1423 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____clique_map_1_0_10001(
#line 1426 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1428 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 1430 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3)
#line 1432 "digraph.c"
{
#line 1434 "digraph.c"
  {
#line 1436 "digraph.c"
    MR_bool mercury__digraph__succeeded;

#line 1439 "digraph.c"
    {
#line 1441 "digraph.c"
      mercury__digraph__succeeded = mercury__digraph____Unify____clique_map_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), ((MR_Word) mercury__digraph__wrapper_arg_2), ((MR_Word) mercury__digraph__wrapper_arg_3));
    }
#line 1444 "digraph.c"
    return mercury__digraph__succeeded;
#line 1446 "digraph.c"
  }
#line 1448 "digraph.c"
}

#line 1451 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____clique_map_1_0_10001(
#line 1454 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1456 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 1458 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 1460 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4)
#line 1462 "digraph.c"
{
#line 1464 "digraph.c"
  {
#line 1466 "digraph.c"
    MR_Word mercury__digraph__conv0_HeadVar__1_1;

#line 1469 "digraph.c"
    {
#line 1471 "digraph.c"
      mercury__digraph____Compare____clique_map_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), &mercury__digraph__conv0_HeadVar__1_1, ((MR_Word) mercury__digraph__wrapper_arg_3), ((MR_Word) mercury__digraph__wrapper_arg_4));
    }
#line 1474 "digraph.c"
    *mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_HeadVar__1_1));
#line 1476 "digraph.c"
  }
#line 1478 "digraph.c"
}

#line 1481 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_1_0_10001(
#line 1484 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1486 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 1488 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3)
#line 1490 "digraph.c"
{
#line 1492 "digraph.c"
  {
#line 1494 "digraph.c"
    MR_bool mercury__digraph__succeeded;

#line 1497 "digraph.c"
    {
#line 1499 "digraph.c"
      mercury__digraph__succeeded = mercury__digraph____Unify____digraph_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), ((MR_Word) mercury__digraph__wrapper_arg_2), ((MR_Word) mercury__digraph__wrapper_arg_3));
    }
#line 1502 "digraph.c"
    return mercury__digraph__succeeded;
#line 1504 "digraph.c"
  }
#line 1506 "digraph.c"
}

#line 1509 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____digraph_1_0_10001(
#line 1512 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1514 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 1516 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 1518 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4)
#line 1520 "digraph.c"
{
#line 1522 "digraph.c"
  {
#line 1524 "digraph.c"
    MR_Word mercury__digraph__conv0_HeadVar__1_1;

#line 1527 "digraph.c"
    {
#line 1529 "digraph.c"
      mercury__digraph____Compare____digraph_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), &mercury__digraph__conv0_HeadVar__1_1, ((MR_Word) mercury__digraph__wrapper_arg_3), ((MR_Word) mercury__digraph__wrapper_arg_4));
    }
#line 1532 "digraph.c"
    *mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_HeadVar__1_1));
#line 1534 "digraph.c"
  }
#line 1536 "digraph.c"
}

#line 1539 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_key_1_0_10001(
#line 1542 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1544 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 1546 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3)
#line 1548 "digraph.c"
{
#line 1550 "digraph.c"
  {
#line 1552 "digraph.c"
    MR_bool mercury__digraph__succeeded;

#line 1555 "digraph.c"
    {
#line 1557 "digraph.c"
      mercury__digraph__succeeded = mercury__digraph____Unify____digraph_key_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), ((MR_Word) mercury__digraph__wrapper_arg_2), ((MR_Word) mercury__digraph__wrapper_arg_3));
    }
#line 1560 "digraph.c"
    return mercury__digraph__succeeded;
#line 1562 "digraph.c"
  }
#line 1564 "digraph.c"
}

#line 1567 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____digraph_key_1_0_10001(
#line 1570 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1572 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 1574 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 1576 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4)
#line 1578 "digraph.c"
{
#line 1580 "digraph.c"
  {
#line 1582 "digraph.c"
    MR_Word mercury__digraph__conv0_HeadVar__1_1;

#line 1585 "digraph.c"
    {
#line 1587 "digraph.c"
      mercury__digraph____Compare____digraph_key_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), &mercury__digraph__conv0_HeadVar__1_1, ((MR_Word) mercury__digraph__wrapper_arg_3), ((MR_Word) mercury__digraph__wrapper_arg_4));
    }
#line 1590 "digraph.c"
    *mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_HeadVar__1_1));
#line 1592 "digraph.c"
  }
#line 1594 "digraph.c"
}

#line 1597 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_key_set_1_0_10001(
#line 1600 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1602 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 1604 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3)
#line 1606 "digraph.c"
{
#line 1608 "digraph.c"
  {
#line 1610 "digraph.c"
    MR_bool mercury__digraph__succeeded;

#line 1613 "digraph.c"
    {
#line 1615 "digraph.c"
      mercury__digraph__succeeded = mercury__digraph____Unify____digraph_key_set_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), ((MR_Word) mercury__digraph__wrapper_arg_2), ((MR_Word) mercury__digraph__wrapper_arg_3));
    }
#line 1618 "digraph.c"
    return mercury__digraph__succeeded;
#line 1620 "digraph.c"
  }
#line 1622 "digraph.c"
}

#line 1625 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____digraph_key_set_1_0_10001(
#line 1628 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1630 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 1632 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 1634 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4)
#line 1636 "digraph.c"
{
#line 1638 "digraph.c"
  {
#line 1640 "digraph.c"
    MR_Word mercury__digraph__conv0_HeadVar__1_1;

#line 1643 "digraph.c"
    {
#line 1645 "digraph.c"
      mercury__digraph____Compare____digraph_key_set_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), &mercury__digraph__conv0_HeadVar__1_1, ((MR_Word) mercury__digraph__wrapper_arg_3), ((MR_Word) mercury__digraph__wrapper_arg_4));
    }
#line 1648 "digraph.c"
    *mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_HeadVar__1_1));
#line 1650 "digraph.c"
  }
#line 1652 "digraph.c"
}

#line 1655 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____key_map_1_0_10001(
#line 1658 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1660 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 1662 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3)
#line 1664 "digraph.c"
{
#line 1666 "digraph.c"
  {
#line 1668 "digraph.c"
    MR_bool mercury__digraph__succeeded;

#line 1671 "digraph.c"
    {
#line 1673 "digraph.c"
      mercury__digraph__succeeded = mercury__digraph____Unify____key_map_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), ((MR_Word) mercury__digraph__wrapper_arg_2), ((MR_Word) mercury__digraph__wrapper_arg_3));
    }
#line 1676 "digraph.c"
    return mercury__digraph__succeeded;
#line 1678 "digraph.c"
  }
#line 1680 "digraph.c"
}

#line 1683 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____key_map_1_0_10001(
#line 1686 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1688 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 1690 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 1692 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4)
#line 1694 "digraph.c"
{
#line 1696 "digraph.c"
  {
#line 1698 "digraph.c"
    MR_Word mercury__digraph__conv0_HeadVar__1_1;

#line 1701 "digraph.c"
    {
#line 1703 "digraph.c"
      mercury__digraph____Compare____key_map_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), &mercury__digraph__conv0_HeadVar__1_1, ((MR_Word) mercury__digraph__wrapper_arg_3), ((MR_Word) mercury__digraph__wrapper_arg_4));
    }
#line 1706 "digraph.c"
    *mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_HeadVar__1_1));
#line 1708 "digraph.c"
  }
#line 1710 "digraph.c"
}

#line 1713 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____key_set_map_1_0_10001(
#line 1716 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1718 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 1720 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3)
#line 1722 "digraph.c"
{
#line 1724 "digraph.c"
  {
#line 1726 "digraph.c"
    MR_bool mercury__digraph__succeeded;

#line 1729 "digraph.c"
    {
#line 1731 "digraph.c"
      mercury__digraph__succeeded = mercury__digraph____Unify____key_set_map_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), ((MR_Word) mercury__digraph__wrapper_arg_2), ((MR_Word) mercury__digraph__wrapper_arg_3));
    }
#line 1734 "digraph.c"
    return mercury__digraph__succeeded;
#line 1736 "digraph.c"
  }
#line 1738 "digraph.c"
}

#line 1741 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____key_set_map_1_0_10001(
#line 1744 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1746 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 1748 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 1750 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4)
#line 1752 "digraph.c"
{
#line 1754 "digraph.c"
  {
#line 1756 "digraph.c"
    MR_Word mercury__digraph__conv0_HeadVar__1_1;

#line 1759 "digraph.c"
    {
#line 1761 "digraph.c"
      mercury__digraph____Compare____key_set_map_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), &mercury__digraph__conv0_HeadVar__1_1, ((MR_Word) mercury__digraph__wrapper_arg_3), ((MR_Word) mercury__digraph__wrapper_arg_4));
    }
#line 1764 "digraph.c"
    *mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_HeadVar__1_1));
#line 1766 "digraph.c"
  }
#line 1768 "digraph.c"
}

#line 1771 "digraph.c"
static MR_Box MR_CALL 
mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__to_int_1_1_f_0_10001(
#line 1774 "digraph.c"
  MR_Box mercury__digraph__closure_arg,
#line 1776 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1)
#line 1778 "digraph.c"
{
#line 1780 "digraph.c"
  {
#line 1782 "digraph.c"
    MR_Box mercury__digraph__wrapper_arg_2;
#line 1784 "digraph.c"
    MR_Box mercury__digraph__closure;
#line 1786 "digraph.c"
    MR_Integer mercury__digraph__conv0_Int_4;

#line 1789 "digraph.c"
    mercury__digraph__closure = mercury__digraph__closure_arg;
#line 1791 "digraph.c"
    {
#line 1793 "digraph.c"
      mercury__digraph__conv0_Int_4 = mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__to_int_1_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__closure, (MR_Integer) 1))), ((MR_Word) mercury__digraph__wrapper_arg_1));
    }
#line 1796 "digraph.c"
    mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_Int_4));
#line 1798 "digraph.c"
    return mercury__digraph__wrapper_arg_2;
#line 1800 "digraph.c"
  }
#line 1802 "digraph.c"
}

#line 1805 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__from_int_1_1_f_0_10001(
#line 1808 "digraph.c"
  MR_Box mercury__digraph__closure_arg,
#line 1810 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1812 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2)
#line 1814 "digraph.c"
{
#line 1816 "digraph.c"
  {
#line 1818 "digraph.c"
    MR_bool mercury__digraph__succeeded;
#line 1820 "digraph.c"
    MR_Box mercury__digraph__closure;
#line 1822 "digraph.c"
    MR_Word mercury__digraph__conv0_HeadVar__2_2;

#line 1825 "digraph.c"
    mercury__digraph__closure = mercury__digraph__closure_arg;
#line 1827 "digraph.c"
    {
#line 1829 "digraph.c"
      mercury__digraph__succeeded = mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__from_int_1_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__closure, (MR_Integer) 1))), ((MR_Integer) mercury__digraph__wrapper_arg_1), &mercury__digraph__conv0_HeadVar__2_2);
    }
#line 1832 "digraph.c"
    if (mercury__digraph__succeeded)
#line 1834 "digraph.c"
      {
#line 1836 "digraph.c"
        *mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_HeadVar__2_2));
#line 1838 "digraph.c"
        mercury__digraph__succeeded = MR_TRUE;
#line 1840 "digraph.c"
      }
#line 1842 "digraph.c"
    return mercury__digraph__succeeded;
#line 1844 "digraph.c"
  }
#line 1846 "digraph.c"
}

#line 127 "list.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__digraph__V_27_27,
#line 127 "list.int"
  MR_Word mercury__digraph__V_28_28,
#line 127 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 127 "list.int"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 127 "list.int"
  MR_Word * mercury__digraph__HeadVar__4_4)
#line 127 "list.int"
{
#line 391 "list.opt"
  while (MR_TRUE)
#line 391 "list.opt"
    {
#line 391 "list.opt"
      /* tailcall optimized into a loop */
#line 391 "list.opt"
      {
#line 391 "list.opt"
        MR_bool mercury__digraph__succeeded;

#line 391 "list.opt"
        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "list.opt"
          *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 391 "list.opt"
        else
#line 393 "list.opt"
          {
#line 393 "list.opt"
            MR_Word mercury__digraph__TypeCtorInfo_12_35 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 393 "list.opt"
            MR_Word mercury__digraph__TypeInfo_13_36;
#line 393 "list.opt"
            MR_Word mercury__digraph__TypeCtorInfo_14_37;
#line 393 "list.opt"
            MR_Word mercury__digraph__TypeInfo_15_38;
#line 393 "list.opt"
            MR_Word mercury__digraph__TypeInfo_16_39;
#line 393 "list.opt"
            MR_Word mercury__digraph__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 393 "list.opt"
            MR_Word mercury__digraph__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 393 "list.opt"
            MR_Word mercury__digraph__V_15_13;
#line 476 "map.opt"
            MR_Word mercury__digraph__conv0_V_15_13;

#line 1902 "digraph.c"
            {
#line 1904 "digraph.c"
              mercury__digraph__TypeInfo_13_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1906 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_13_36, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_12_35));
#line 1908 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_13_36, 1) = ((MR_Box) (mercury__digraph__V_27_27));
#line 1910 "digraph.c"
            }
#line 1912 "digraph.c"
            mercury__digraph__TypeCtorInfo_14_37 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 1914 "digraph.c"
            {
#line 1916 "digraph.c"
              mercury__digraph__TypeInfo_15_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1918 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_38, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_37));
#line 1920 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_38, 1) = ((MR_Box) (mercury__digraph__V_27_27));
#line 1922 "digraph.c"
            }
#line 1924 "digraph.c"
            {
#line 1926 "digraph.c"
              mercury__digraph__TypeInfo_16_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1928 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_39, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_12_35));
#line 1930 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_39, 1) = ((MR_Box) (mercury__digraph__TypeInfo_15_38));
#line 1932 "digraph.c"
            }
#line 476 "map.opt"
            {
#line 476 "map.opt"
              mercury__tree234__set_4_p_0(mercury__digraph__TypeInfo_13_36, mercury__digraph__TypeInfo_16_39, ((MR_Box) (mercury__digraph__V_10_9)), ((MR_Box) (mercury__digraph__V_28_28)), (MR_Word) mercury__digraph__HeadVar__3_3, &mercury__digraph__conv0_V_15_13);
            }
#line 476 "map.opt"
            mercury__digraph__V_15_13 = (MR_Word) mercury__digraph__conv0_V_15_13;
#line 395 "list.opt"
            /* direct tailcall eliminated */
#line 395 "list.opt"
            {
#line 395 "list.opt"
              MR_Word mercury__digraph__HeadVar__2__tmp_copy_2 = mercury__digraph__V_11_10;
#line 395 "list.opt"
              MR_Word mercury__digraph__HeadVar__3__tmp_copy_3 = mercury__digraph__V_15_13;

#line 395 "list.opt"
              mercury__digraph__HeadVar__3_3 = mercury__digraph__HeadVar__3__tmp_copy_3;
#line 395 "list.opt"
              mercury__digraph__HeadVar__2_2 = mercury__digraph__HeadVar__2__tmp_copy_2;
#line 395 "list.opt"
            }
#line 395 "list.opt"
            continue;
#line 393 "list.opt"
          }
#line 391 "list.opt"
      }
#line 391 "list.opt"
      break;
#line 391 "list.opt"
    }
#line 127 "list.int"
}

#line 89 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_49_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_51_93_95_48_9_p_in__sparse_bitset_0(
#line 89 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_50_50,
#line 89 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_51_51,
#line 89 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_35,
#line 89 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_10_10,
#line 89 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_12_12,
#line 89 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_13_13,
#line 89 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_14_14,
#line 89 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_22_15,
#line 89 "sparse_bitset.opt"
  MR_Word * mercury__digraph__V_23_16,
#line 89 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_24_17,
#line 89 "sparse_bitset.opt"
  MR_Word * mercury__digraph__V_25_18)
#line 89 "sparse_bitset.opt"
{
#line 363 "sparse_bitset.opt"
  while (MR_TRUE)
#line 363 "sparse_bitset.opt"
    {
#line 363 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 363 "sparse_bitset.opt"
      {
#line 363 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded = (mercury__digraph__V_13_13 == (MR_Integer) 0);

#line 363 "sparse_bitset.opt"
        if (mercury__digraph__succeeded)
#line 361 "sparse_bitset.opt"
          {
#line 361 "sparse_bitset.opt"
            *mercury__digraph__V_25_18 = mercury__digraph__V_24_17;
#line 362 "sparse_bitset.opt"
            *mercury__digraph__V_23_16 = mercury__digraph__V_22_15;
#line 361 "sparse_bitset.opt"
          }
#line 363 "sparse_bitset.opt"
        else
#line 379 "sparse_bitset.opt"
          {
#line 365 "sparse_bitset.opt"
            mercury__digraph__succeeded = (mercury__digraph__V_14_14 == (MR_Integer) 1);
#line 379 "sparse_bitset.opt"
            if (mercury__digraph__succeeded)
#line 371 "sparse_bitset.opt"
              {
#line 371 "sparse_bitset.opt"
                MR_Word mercury__digraph__V_17_19;
#line 2029 "digraph.c"
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_35, (MR_Integer) 0)), (MR_Integer) 6)));
#line 2031 "digraph.c"
                MR_Box mercury__digraph__conv1_V_17_19;

#line 2034 "digraph.c"
                {
#line 2036 "digraph.c"
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_35), ((MR_Box) (mercury__digraph__V_12_12)), &mercury__digraph__conv1_V_17_19);
                }
#line 2039 "digraph.c"
                if (mercury__digraph__succeeded)
#line 2041 "digraph.c"
                  {
#line 2043 "digraph.c"
                    mercury__digraph__V_17_19 = ((MR_Word) mercury__digraph__conv1_V_17_19);
#line 2045 "digraph.c"
                    mercury__digraph__succeeded = MR_TRUE;
#line 2047 "digraph.c"
                  }
#line 371 "sparse_bitset.opt"
                if (mercury__digraph__succeeded)
#line 725 "digraph.m"
                  {
#line 725 "digraph.m"
                    MR_Word mercury__digraph__TypeCtorInfo_22_66;
#line 725 "digraph.m"
                    MR_Word mercury__digraph__TypeInfo_23_67;
#line 725 "digraph.m"
                    MR_Box mercury__digraph__VX_60;
#line 725 "digraph.m"
                    MR_Word mercury__digraph__CompX_61;
#line 725 "digraph.m"
                    MR_Integer mercury__digraph__XI_62;
#line 729 "digraph.m"
                    MR_Word mercury__digraph__conv2_V_25_18;

#line 726 "digraph.m"
                    {
#line 726 "digraph.m"
                      mercury__digraph__lookup_vertex_3_p_0(mercury__digraph__V_50_50, mercury__digraph__V_51_51, mercury__digraph__V_17_19, &mercury__digraph__VX_60);
                    }
#line 727 "digraph.m"
                    {
#line 727 "digraph.m"
                      mercury__digraph__add_vertex_4_p_0(mercury__digraph__V_50_50, mercury__digraph__VX_60, &mercury__digraph__CompX_61, mercury__digraph__V_22_15, mercury__digraph__V_23_16);
                    }
#line 728 "digraph.m"
                    mercury__digraph__XI_62 = (MR_Integer) mercury__digraph__V_17_19;
#line 2078 "digraph.c"
                    mercury__digraph__TypeCtorInfo_22_66 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 2080 "digraph.c"
                    {
#line 2082 "digraph.c"
                      mercury__digraph__TypeInfo_23_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2084 "digraph.c"
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_67, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_22_66));
#line 2086 "digraph.c"
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_67, 1) = ((MR_Box) (mercury__digraph__V_50_50));
#line 2088 "digraph.c"
                    }
#line 729 "digraph.m"
                    {
#line 729 "digraph.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__digraph__TypeInfo_23_67, mercury__digraph__XI_62, ((MR_Box) (mercury__digraph__CompX_61)), (MR_Word) mercury__digraph__V_24_17, &mercury__digraph__conv2_V_25_18);
                    }
#line 729 "digraph.m"
                    *mercury__digraph__V_25_18 = (MR_Word) mercury__digraph__conv2_V_25_18;
#line 725 "digraph.m"
                  }
#line 371 "sparse_bitset.opt"
                else
#line 372 "sparse_bitset.opt"
                  {
#line 375 "sparse_bitset.opt"
                    {
#line 375 "sparse_bitset.opt"
                      mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold2_bits\'/9", (MR_String) "\140enum.from_int/1\' failed");
#line 375 "sparse_bitset.opt"
                      return;
                    }
#line 372 "sparse_bitset.opt"
                  }
#line 371 "sparse_bitset.opt"
              }
#line 379 "sparse_bitset.opt"
            else
#line 380 "sparse_bitset.opt"
              {
#line 380 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_18_23 = (mercury__digraph__V_14_14 >> (MR_Integer) 1);
#line 380 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_19_25;
#line 380 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_20_26;
#line 380 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_21_27;
#line 380 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_32_28;
#line 380 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_4_70 = ((MR_Integer) -1 << mercury__digraph__V_18_23);

#line 540 "sparse_bitset.opt"
                mercury__digraph__V_19_25 = ~(mercury__digraph__V_4_70);
#line 383 "sparse_bitset.opt"
                mercury__digraph__V_20_26 = (mercury__digraph__V_19_25 & mercury__digraph__V_13_13);
#line 385 "sparse_bitset.opt"
                mercury__digraph__V_32_28 = (mercury__digraph__V_13_13 >> mercury__digraph__V_18_23);
#line 384 "sparse_bitset.opt"
                mercury__digraph__V_21_27 = (mercury__digraph__V_19_25 & mercury__digraph__V_32_28);
#line 391 "sparse_bitset.opt"
#line 391 "sparse_bitset.opt"
                switch (mercury__digraph__V_10_10) {
#line 391 "sparse_bitset.opt"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 391 "sparse_bitset.opt"
                  case (MR_Integer) 1:
#line 392 "sparse_bitset.opt"
                    {
#line 392 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__V_33_32 = (mercury__digraph__V_12_12 + mercury__digraph__V_18_23);
#line 392 "sparse_bitset.opt"
                      MR_Word mercury__digraph__V_34_33;
#line 392 "sparse_bitset.opt"
                      MR_Word mercury__digraph__V_35_34;

#line 394 "sparse_bitset.opt"
                      {
#line 394 "sparse_bitset.opt"
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_49_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_51_93_95_48_9_p_in__sparse_bitset_0(mercury__digraph__V_50_50, mercury__digraph__V_51_51, mercury__digraph__TypeClassInfo_for_enum_35, mercury__digraph__V_10_10, mercury__digraph__V_33_32, mercury__digraph__V_21_27, mercury__digraph__V_18_23, mercury__digraph__V_22_15, &mercury__digraph__V_34_33, mercury__digraph__V_24_17, &mercury__digraph__V_35_34);
                      }
#line 395 "sparse_bitset.opt"
                      /* direct tailcall eliminated */
#line 395 "sparse_bitset.opt"
                      {
#line 395 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_13__tmp_copy_13 = mercury__digraph__V_20_26;
#line 395 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_14__tmp_copy_14 = mercury__digraph__V_18_23;
#line 395 "sparse_bitset.opt"
                        MR_Word mercury__digraph__V_22__tmp_copy_15 = mercury__digraph__V_34_33;
#line 395 "sparse_bitset.opt"
                        MR_Word mercury__digraph__V_24__tmp_copy_17 = mercury__digraph__V_35_34;

#line 395 "sparse_bitset.opt"
                        mercury__digraph__V_24_17 = mercury__digraph__V_24__tmp_copy_17;
#line 395 "sparse_bitset.opt"
                        mercury__digraph__V_22_15 = mercury__digraph__V_22__tmp_copy_15;
#line 395 "sparse_bitset.opt"
                        mercury__digraph__V_14_14 = mercury__digraph__V_14__tmp_copy_14;
#line 395 "sparse_bitset.opt"
                        mercury__digraph__V_13_13 = mercury__digraph__V_13__tmp_copy_13;
#line 395 "sparse_bitset.opt"
                      }
#line 395 "sparse_bitset.opt"
                      continue;
#line 392 "sparse_bitset.opt"
                    }
#line 391 "sparse_bitset.opt"
                    break;
#line 391 "sparse_bitset.opt"
                  case (MR_Integer) 0:
#line 387 "sparse_bitset.opt"
                    {
#line 387 "sparse_bitset.opt"
                      MR_Word mercury__digraph__V_38_29;
#line 387 "sparse_bitset.opt"
                      MR_Word mercury__digraph__V_39_30;
#line 387 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__V_40_31;

#line 388 "sparse_bitset.opt"
                      {
#line 388 "sparse_bitset.opt"
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_49_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_51_93_95_48_9_p_in__sparse_bitset_0(mercury__digraph__V_50_50, mercury__digraph__V_51_51, mercury__digraph__TypeClassInfo_for_enum_35, mercury__digraph__V_10_10, mercury__digraph__V_12_12, mercury__digraph__V_20_26, mercury__digraph__V_18_23, mercury__digraph__V_22_15, &mercury__digraph__V_38_29, mercury__digraph__V_24_17, &mercury__digraph__V_39_30);
                      }
#line 389 "sparse_bitset.opt"
                      mercury__digraph__V_40_31 = (mercury__digraph__V_12_12 + mercury__digraph__V_18_23);
#line 390 "sparse_bitset.opt"
                      /* direct tailcall eliminated */
#line 390 "sparse_bitset.opt"
                      {
#line 390 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_12__tmp_copy_12 = mercury__digraph__V_40_31;
#line 390 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_13__tmp_copy_13 = mercury__digraph__V_21_27;
#line 390 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_14__tmp_copy_14 = mercury__digraph__V_18_23;
#line 390 "sparse_bitset.opt"
                        MR_Word mercury__digraph__V_22__tmp_copy_15 = mercury__digraph__V_38_29;
#line 390 "sparse_bitset.opt"
                        MR_Word mercury__digraph__V_24__tmp_copy_17 = mercury__digraph__V_39_30;

#line 390 "sparse_bitset.opt"
                        mercury__digraph__V_24_17 = mercury__digraph__V_24__tmp_copy_17;
#line 390 "sparse_bitset.opt"
                        mercury__digraph__V_22_15 = mercury__digraph__V_22__tmp_copy_15;
#line 390 "sparse_bitset.opt"
                        mercury__digraph__V_14_14 = mercury__digraph__V_14__tmp_copy_14;
#line 390 "sparse_bitset.opt"
                        mercury__digraph__V_13_13 = mercury__digraph__V_13__tmp_copy_13;
#line 390 "sparse_bitset.opt"
                        mercury__digraph__V_12_12 = mercury__digraph__V_12__tmp_copy_12;
#line 390 "sparse_bitset.opt"
                      }
#line 390 "sparse_bitset.opt"
                      continue;
#line 387 "sparse_bitset.opt"
                    }
#line 391 "sparse_bitset.opt"
                    break;
#line 391 "sparse_bitset.opt"
                }
#line 380 "sparse_bitset.opt"
              }
#line 379 "sparse_bitset.opt"
          }
#line 363 "sparse_bitset.opt"
      }
#line 363 "sparse_bitset.opt"
      break;
#line 363 "sparse_bitset.opt"
    }
#line 89 "sparse_bitset.opt"
}

#line 103 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_51_93_95_48_7_p_in__sparse_bitset_0(
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_41_41,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_42_42,
#line 103 "sparse_bitset.opt"
  MR_Box mercury__digraph__V_43_43,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_8_8,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_10_10,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_11_11,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_12_12,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_19_13,
#line 103 "sparse_bitset.opt"
  MR_Word * mercury__digraph__V_20_14)
#line 103 "sparse_bitset.opt"
{
#line 405 "sparse_bitset.opt"
  while (MR_TRUE)
#line 405 "sparse_bitset.opt"
    {
#line 405 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 405 "sparse_bitset.opt"
      {
#line 405 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded = (mercury__digraph__V_11_11 == (MR_Integer) 0);

#line 405 "sparse_bitset.opt"
        if (mercury__digraph__succeeded)
#line 404 "sparse_bitset.opt"
          *mercury__digraph__V_20_14 = mercury__digraph__V_19_13;
#line 405 "sparse_bitset.opt"
        else
#line 420 "sparse_bitset.opt"
          {
#line 407 "sparse_bitset.opt"
            mercury__digraph__succeeded = (mercury__digraph__V_12_12 == (MR_Integer) 1);
#line 420 "sparse_bitset.opt"
            if (mercury__digraph__succeeded)
#line 413 "sparse_bitset.opt"
              {
#line 413 "sparse_bitset.opt"
                MR_Word mercury__digraph__V_14_15;
#line 2307 "digraph.c"
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 2309 "digraph.c"
                MR_Box mercury__digraph__conv1_V_14_15;

#line 2312 "digraph.c"
                {
#line 2314 "digraph.c"
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__V_10_10)), &mercury__digraph__conv1_V_14_15);
                }
#line 2317 "digraph.c"
                if (mercury__digraph__succeeded)
#line 2319 "digraph.c"
                  {
#line 2321 "digraph.c"
                    mercury__digraph__V_14_15 = ((MR_Word) mercury__digraph__conv1_V_14_15);
#line 2323 "digraph.c"
                    mercury__digraph__succeeded = MR_TRUE;
#line 2325 "digraph.c"
                  }
#line 413 "sparse_bitset.opt"
                if (mercury__digraph__succeeded)
#line 566 "digraph.m"
                  {
#line 566 "digraph.m"
                    MR_Word mercury__digraph__TypeCtorInfo_16_53 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 566 "digraph.m"
                    MR_Word mercury__digraph__TypeInfo_17_54;
#line 566 "digraph.m"
                    MR_Box mercury__digraph__VY_50;
#line 566 "digraph.m"
                    MR_Word mercury__digraph__V_52_52;
#line 566 "digraph.m"
                    MR_Word mercury__digraph__V_5_58;
#line 233 "bimap.opt"
                    MR_Word mercury__digraph__V_4_57;

#line 2344 "digraph.c"
                    {
#line 2346 "digraph.c"
                      mercury__digraph__TypeInfo_17_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2348 "digraph.c"
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_54, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_53));
#line 2350 "digraph.c"
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_54, 1) = ((MR_Box) (mercury__digraph__V_41_41));
#line 2352 "digraph.c"
                    }
#line 233 "bimap.opt"
                    mercury__digraph__V_4_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_42_42, (MR_Integer) 0)));
#line 233 "bimap.opt"
                    mercury__digraph__V_5_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_42_42, (MR_Integer) 1)));
#line 234 "bimap.opt"
                    {
#line 234 "bimap.opt"
                      mercury__map__lookup_3_p_0(mercury__digraph__TypeInfo_17_54, mercury__digraph__V_41_41, (MR_Word) mercury__digraph__V_5_58, ((MR_Box) (mercury__digraph__V_14_15)), &mercury__digraph__VY_50);
                    }
#line 568 "digraph.m"
                    {
#line 568 "digraph.m"
                      mercury__digraph__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 568 "digraph.m"
                      MR_hl_field(MR_mktag(0), mercury__digraph__V_52_52, 0) = mercury__digraph__V_43_43;
#line 568 "digraph.m"
                      MR_hl_field(MR_mktag(0), mercury__digraph__V_52_52, 1) = mercury__digraph__VY_50;
#line 568 "digraph.m"
                    }
#line 568 "digraph.m"
                    {
#line 568 "digraph.m"
                      MR_Word base;
#line 568 "digraph.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 568 "digraph.m"
                      *mercury__digraph__V_20_14 = base;
#line 568 "digraph.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__digraph__V_52_52));
#line 568 "digraph.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__digraph__V_19_13));
#line 568 "digraph.m"
                    }
#line 566 "digraph.m"
                  }
#line 413 "sparse_bitset.opt"
                else
#line 414 "sparse_bitset.opt"
                  {
#line 417 "sparse_bitset.opt"
                    {
#line 417 "sparse_bitset.opt"
                      mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold_bits\'/7", (MR_String) "\140enum.from_int/1\' failed");
#line 417 "sparse_bitset.opt"
                      return;
                    }
#line 414 "sparse_bitset.opt"
                  }
#line 413 "sparse_bitset.opt"
              }
#line 420 "sparse_bitset.opt"
            else
#line 421 "sparse_bitset.opt"
              {
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_15_19 = (mercury__digraph__V_12_12 >> (MR_Integer) 1);
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_16_21;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_17_22;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_18_23;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_26_24;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_4_61 = ((MR_Integer) -1 << mercury__digraph__V_15_19);

#line 540 "sparse_bitset.opt"
                mercury__digraph__V_16_21 = ~(mercury__digraph__V_4_61);
#line 424 "sparse_bitset.opt"
                mercury__digraph__V_17_22 = (mercury__digraph__V_16_21 & mercury__digraph__V_11_11);
#line 426 "sparse_bitset.opt"
                mercury__digraph__V_26_24 = (mercury__digraph__V_11_11 >> mercury__digraph__V_15_19);
#line 425 "sparse_bitset.opt"
                mercury__digraph__V_18_23 = (mercury__digraph__V_16_21 & mercury__digraph__V_26_24);
#line 432 "sparse_bitset.opt"
#line 432 "sparse_bitset.opt"
                switch (mercury__digraph__V_8_8) {
#line 432 "sparse_bitset.opt"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 432 "sparse_bitset.opt"
                  case (MR_Integer) 1:
#line 433 "sparse_bitset.opt"
                    {
#line 433 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__V_27_27 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
#line 433 "sparse_bitset.opt"
                      MR_Word mercury__digraph__V_28_28;

#line 435 "sparse_bitset.opt"
                      {
#line 435 "sparse_bitset.opt"
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_51_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_41_41, mercury__digraph__V_42_42, mercury__digraph__V_43_43, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_27_27, mercury__digraph__V_18_23, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_28_28);
                      }
#line 436 "sparse_bitset.opt"
                      /* direct tailcall eliminated */
#line 436 "sparse_bitset.opt"
                      {
#line 436 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_11__tmp_copy_11 = mercury__digraph__V_17_22;
#line 436 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_12__tmp_copy_12 = mercury__digraph__V_15_19;
#line 436 "sparse_bitset.opt"
                        MR_Word mercury__digraph__V_19__tmp_copy_13 = mercury__digraph__V_28_28;

#line 436 "sparse_bitset.opt"
                        mercury__digraph__V_19_13 = mercury__digraph__V_19__tmp_copy_13;
#line 436 "sparse_bitset.opt"
                        mercury__digraph__V_12_12 = mercury__digraph__V_12__tmp_copy_12;
#line 436 "sparse_bitset.opt"
                        mercury__digraph__V_11_11 = mercury__digraph__V_11__tmp_copy_11;
#line 436 "sparse_bitset.opt"
                      }
#line 436 "sparse_bitset.opt"
                      continue;
#line 433 "sparse_bitset.opt"
                    }
#line 432 "sparse_bitset.opt"
                    break;
#line 432 "sparse_bitset.opt"
                  case (MR_Integer) 0:
#line 428 "sparse_bitset.opt"
                    {
#line 428 "sparse_bitset.opt"
                      MR_Word mercury__digraph__V_30_25;
#line 428 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__V_31_26;

#line 429 "sparse_bitset.opt"
                      {
#line 429 "sparse_bitset.opt"
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_51_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_41_41, mercury__digraph__V_42_42, mercury__digraph__V_43_43, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_10_10, mercury__digraph__V_17_22, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_30_25);
                      }
#line 430 "sparse_bitset.opt"
                      mercury__digraph__V_31_26 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
#line 431 "sparse_bitset.opt"
                      /* direct tailcall eliminated */
#line 431 "sparse_bitset.opt"
                      {
#line 431 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_10__tmp_copy_10 = mercury__digraph__V_31_26;
#line 431 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_11__tmp_copy_11 = mercury__digraph__V_18_23;
#line 431 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_12__tmp_copy_12 = mercury__digraph__V_15_19;
#line 431 "sparse_bitset.opt"
                        MR_Word mercury__digraph__V_19__tmp_copy_13 = mercury__digraph__V_30_25;

#line 431 "sparse_bitset.opt"
                        mercury__digraph__V_19_13 = mercury__digraph__V_19__tmp_copy_13;
#line 431 "sparse_bitset.opt"
                        mercury__digraph__V_12_12 = mercury__digraph__V_12__tmp_copy_12;
#line 431 "sparse_bitset.opt"
                        mercury__digraph__V_11_11 = mercury__digraph__V_11__tmp_copy_11;
#line 431 "sparse_bitset.opt"
                        mercury__digraph__V_10_10 = mercury__digraph__V_10__tmp_copy_10;
#line 431 "sparse_bitset.opt"
                      }
#line 431 "sparse_bitset.opt"
                      continue;
#line 428 "sparse_bitset.opt"
                    }
#line 432 "sparse_bitset.opt"
                    break;
#line 432 "sparse_bitset.opt"
                }
#line 421 "sparse_bitset.opt"
              }
#line 420 "sparse_bitset.opt"
          }
#line 405 "sparse_bitset.opt"
      }
#line 405 "sparse_bitset.opt"
      break;
#line 405 "sparse_bitset.opt"
    }
#line 103 "sparse_bitset.opt"
}

#line 103 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_52_93_95_48_7_p_in__sparse_bitset_0(
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_46_46,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_8_8,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_10_10,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_11_11,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_12_12,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_19_13,
#line 103 "sparse_bitset.opt"
  MR_Word * mercury__digraph__V_20_14)
#line 103 "sparse_bitset.opt"
{
#line 405 "sparse_bitset.opt"
  while (MR_TRUE)
#line 405 "sparse_bitset.opt"
    {
#line 405 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 405 "sparse_bitset.opt"
      {
#line 405 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded = (mercury__digraph__V_11_11 == (MR_Integer) 0);

#line 405 "sparse_bitset.opt"
        if (mercury__digraph__succeeded)
#line 404 "sparse_bitset.opt"
          *mercury__digraph__V_20_14 = mercury__digraph__V_19_13;
#line 405 "sparse_bitset.opt"
        else
#line 420 "sparse_bitset.opt"
          {
#line 407 "sparse_bitset.opt"
            mercury__digraph__succeeded = (mercury__digraph__V_12_12 == (MR_Integer) 1);
#line 420 "sparse_bitset.opt"
            if (mercury__digraph__succeeded)
#line 413 "sparse_bitset.opt"
              {
#line 413 "sparse_bitset.opt"
                MR_Word mercury__digraph__V_14_15;
#line 2581 "digraph.c"
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 2583 "digraph.c"
                MR_Box mercury__digraph__conv1_V_14_15;

#line 2586 "digraph.c"
                {
#line 2588 "digraph.c"
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__V_10_10)), &mercury__digraph__conv1_V_14_15);
                }
#line 2591 "digraph.c"
                if (mercury__digraph__succeeded)
#line 2593 "digraph.c"
                  {
#line 2595 "digraph.c"
                    mercury__digraph__V_14_15 = ((MR_Word) mercury__digraph__conv1_V_14_15);
#line 2597 "digraph.c"
                    mercury__digraph__succeeded = MR_TRUE;
#line 2599 "digraph.c"
                  }
#line 413 "sparse_bitset.opt"
                if (mercury__digraph__succeeded)
#line 592 "digraph.m"
                  {
#line 592 "digraph.m"
                    MR_Word mercury__digraph__V_53_53;

#line 593 "digraph.m"
                    {
#line 593 "digraph.m"
                      mercury__digraph__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 593 "digraph.m"
                      MR_hl_field(MR_mktag(0), mercury__digraph__V_53_53, 0) = ((MR_Box) (mercury__digraph__V_46_46));
#line 593 "digraph.m"
                      MR_hl_field(MR_mktag(0), mercury__digraph__V_53_53, 1) = ((MR_Box) (mercury__digraph__V_14_15));
#line 593 "digraph.m"
                    }
#line 593 "digraph.m"
                    {
#line 593 "digraph.m"
                      MR_Word base;
#line 593 "digraph.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 593 "digraph.m"
                      *mercury__digraph__V_20_14 = base;
#line 593 "digraph.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__digraph__V_53_53));
#line 593 "digraph.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__digraph__V_19_13));
#line 593 "digraph.m"
                    }
#line 592 "digraph.m"
                  }
#line 413 "sparse_bitset.opt"
                else
#line 414 "sparse_bitset.opt"
                  {
#line 417 "sparse_bitset.opt"
                    {
#line 417 "sparse_bitset.opt"
                      mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold_bits\'/7", (MR_String) "\140enum.from_int/1\' failed");
#line 417 "sparse_bitset.opt"
                      return;
                    }
#line 414 "sparse_bitset.opt"
                  }
#line 413 "sparse_bitset.opt"
              }
#line 420 "sparse_bitset.opt"
            else
#line 421 "sparse_bitset.opt"
              {
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_15_19 = (mercury__digraph__V_12_12 >> (MR_Integer) 1);
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_16_21;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_17_22;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_18_23;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_26_24;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_4_56 = ((MR_Integer) -1 << mercury__digraph__V_15_19);

#line 540 "sparse_bitset.opt"
                mercury__digraph__V_16_21 = ~(mercury__digraph__V_4_56);
#line 424 "sparse_bitset.opt"
                mercury__digraph__V_17_22 = (mercury__digraph__V_16_21 & mercury__digraph__V_11_11);
#line 426 "sparse_bitset.opt"
                mercury__digraph__V_26_24 = (mercury__digraph__V_11_11 >> mercury__digraph__V_15_19);
#line 425 "sparse_bitset.opt"
                mercury__digraph__V_18_23 = (mercury__digraph__V_16_21 & mercury__digraph__V_26_24);
#line 432 "sparse_bitset.opt"
#line 432 "sparse_bitset.opt"
                switch (mercury__digraph__V_8_8) {
#line 432 "sparse_bitset.opt"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 432 "sparse_bitset.opt"
                  case (MR_Integer) 1:
#line 433 "sparse_bitset.opt"
                    {
#line 433 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__V_27_27 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
#line 433 "sparse_bitset.opt"
                      MR_Word mercury__digraph__V_28_28;

#line 435 "sparse_bitset.opt"
                      {
#line 435 "sparse_bitset.opt"
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_52_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_46_46, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_27_27, mercury__digraph__V_18_23, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_28_28);
                      }
#line 436 "sparse_bitset.opt"
                      /* direct tailcall eliminated */
#line 436 "sparse_bitset.opt"
                      {
#line 436 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_11__tmp_copy_11 = mercury__digraph__V_17_22;
#line 436 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_12__tmp_copy_12 = mercury__digraph__V_15_19;
#line 436 "sparse_bitset.opt"
                        MR_Word mercury__digraph__V_19__tmp_copy_13 = mercury__digraph__V_28_28;

#line 436 "sparse_bitset.opt"
                        mercury__digraph__V_19_13 = mercury__digraph__V_19__tmp_copy_13;
#line 436 "sparse_bitset.opt"
                        mercury__digraph__V_12_12 = mercury__digraph__V_12__tmp_copy_12;
#line 436 "sparse_bitset.opt"
                        mercury__digraph__V_11_11 = mercury__digraph__V_11__tmp_copy_11;
#line 436 "sparse_bitset.opt"
                      }
#line 436 "sparse_bitset.opt"
                      continue;
#line 433 "sparse_bitset.opt"
                    }
#line 432 "sparse_bitset.opt"
                    break;
#line 432 "sparse_bitset.opt"
                  case (MR_Integer) 0:
#line 428 "sparse_bitset.opt"
                    {
#line 428 "sparse_bitset.opt"
                      MR_Word mercury__digraph__V_30_25;
#line 428 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__V_31_26;

#line 429 "sparse_bitset.opt"
                      {
#line 429 "sparse_bitset.opt"
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_52_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_46_46, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_10_10, mercury__digraph__V_17_22, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_30_25);
                      }
#line 430 "sparse_bitset.opt"
                      mercury__digraph__V_31_26 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
#line 431 "sparse_bitset.opt"
                      /* direct tailcall eliminated */
#line 431 "sparse_bitset.opt"
                      {
#line 431 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_10__tmp_copy_10 = mercury__digraph__V_31_26;
#line 431 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_11__tmp_copy_11 = mercury__digraph__V_18_23;
#line 431 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_12__tmp_copy_12 = mercury__digraph__V_15_19;
#line 431 "sparse_bitset.opt"
                        MR_Word mercury__digraph__V_19__tmp_copy_13 = mercury__digraph__V_30_25;

#line 431 "sparse_bitset.opt"
                        mercury__digraph__V_19_13 = mercury__digraph__V_19__tmp_copy_13;
#line 431 "sparse_bitset.opt"
                        mercury__digraph__V_12_12 = mercury__digraph__V_12__tmp_copy_12;
#line 431 "sparse_bitset.opt"
                        mercury__digraph__V_11_11 = mercury__digraph__V_11__tmp_copy_11;
#line 431 "sparse_bitset.opt"
                        mercury__digraph__V_10_10 = mercury__digraph__V_10__tmp_copy_10;
#line 431 "sparse_bitset.opt"
                      }
#line 431 "sparse_bitset.opt"
                      continue;
#line 428 "sparse_bitset.opt"
                    }
#line 432 "sparse_bitset.opt"
                    break;
#line 432 "sparse_bitset.opt"
                }
#line 421 "sparse_bitset.opt"
              }
#line 420 "sparse_bitset.opt"
          }
#line 405 "sparse_bitset.opt"
      }
#line 405 "sparse_bitset.opt"
      break;
#line 405 "sparse_bitset.opt"
    }
#line 103 "sparse_bitset.opt"
}

#line 89 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_49_48_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_52_93_95_48_9_p_in__sparse_bitset_0(
#line 89 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_51_51,
#line 89 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_52_52,
#line 89 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_35,
#line 89 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_10_10,
#line 89 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_12_12,
#line 89 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_13_13,
#line 89 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_14_14,
#line 89 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_22_15,
#line 89 "sparse_bitset.opt"
  MR_Word * mercury__digraph__V_23_16,
#line 89 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_24_17,
#line 89 "sparse_bitset.opt"
  MR_Word * mercury__digraph__V_25_18)
#line 89 "sparse_bitset.opt"
{
#line 363 "sparse_bitset.opt"
  while (MR_TRUE)
#line 363 "sparse_bitset.opt"
    {
#line 363 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 363 "sparse_bitset.opt"
      {
#line 363 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded = (mercury__digraph__V_13_13 == (MR_Integer) 0);

#line 363 "sparse_bitset.opt"
        if (mercury__digraph__succeeded)
#line 361 "sparse_bitset.opt"
          {
#line 361 "sparse_bitset.opt"
            *mercury__digraph__V_25_18 = mercury__digraph__V_24_17;
#line 362 "sparse_bitset.opt"
            *mercury__digraph__V_23_16 = mercury__digraph__V_22_15;
#line 361 "sparse_bitset.opt"
          }
#line 363 "sparse_bitset.opt"
        else
#line 379 "sparse_bitset.opt"
          {
#line 365 "sparse_bitset.opt"
            mercury__digraph__succeeded = (mercury__digraph__V_14_14 == (MR_Integer) 1);
#line 379 "sparse_bitset.opt"
            if (mercury__digraph__succeeded)
#line 371 "sparse_bitset.opt"
              {
#line 371 "sparse_bitset.opt"
                MR_Word mercury__digraph__V_17_19;
#line 2838 "digraph.c"
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_35, (MR_Integer) 0)), (MR_Integer) 6)));
#line 2840 "digraph.c"
                MR_Box mercury__digraph__conv1_V_17_19;

#line 2843 "digraph.c"
                {
#line 2845 "digraph.c"
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_35), ((MR_Box) (mercury__digraph__V_12_12)), &mercury__digraph__conv1_V_17_19);
                }
#line 2848 "digraph.c"
                if (mercury__digraph__succeeded)
#line 2850 "digraph.c"
                  {
#line 2852 "digraph.c"
                    mercury__digraph__V_17_19 = ((MR_Word) mercury__digraph__conv1_V_17_19);
#line 2854 "digraph.c"
                    mercury__digraph__succeeded = MR_TRUE;
#line 2856 "digraph.c"
                  }
#line 371 "sparse_bitset.opt"
                if (mercury__digraph__succeeded)
#line 370 "sparse_bitset.opt"
                  {
#line 370 "sparse_bitset.opt"
                    mercury__digraph__dfs_2_6_p_0(mercury__digraph__V_51_51, mercury__digraph__V_52_52, mercury__digraph__V_17_19, mercury__digraph__V_22_15, mercury__digraph__V_23_16, mercury__digraph__V_24_17, mercury__digraph__V_25_18);
#line 370 "sparse_bitset.opt"
                    return;
                  }
#line 371 "sparse_bitset.opt"
                else
#line 372 "sparse_bitset.opt"
                  {
#line 375 "sparse_bitset.opt"
                    {
#line 375 "sparse_bitset.opt"
                      mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold2_bits\'/9", (MR_String) "\140enum.from_int/1\' failed");
#line 375 "sparse_bitset.opt"
                      return;
                    }
#line 372 "sparse_bitset.opt"
                  }
#line 371 "sparse_bitset.opt"
              }
#line 379 "sparse_bitset.opt"
            else
#line 380 "sparse_bitset.opt"
              {
#line 380 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_18_23 = (mercury__digraph__V_14_14 >> (MR_Integer) 1);
#line 380 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_19_25;
#line 380 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_20_26;
#line 380 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_21_27;
#line 380 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_32_28;
#line 380 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_4_55 = ((MR_Integer) -1 << mercury__digraph__V_18_23);

#line 540 "sparse_bitset.opt"
                mercury__digraph__V_19_25 = ~(mercury__digraph__V_4_55);
#line 383 "sparse_bitset.opt"
                mercury__digraph__V_20_26 = (mercury__digraph__V_19_25 & mercury__digraph__V_13_13);
#line 385 "sparse_bitset.opt"
                mercury__digraph__V_32_28 = (mercury__digraph__V_13_13 >> mercury__digraph__V_18_23);
#line 384 "sparse_bitset.opt"
                mercury__digraph__V_21_27 = (mercury__digraph__V_19_25 & mercury__digraph__V_32_28);
#line 391 "sparse_bitset.opt"
#line 391 "sparse_bitset.opt"
                switch (mercury__digraph__V_10_10) {
#line 391 "sparse_bitset.opt"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 391 "sparse_bitset.opt"
                  case (MR_Integer) 1:
#line 392 "sparse_bitset.opt"
                    {
#line 392 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__V_33_32 = (mercury__digraph__V_12_12 + mercury__digraph__V_18_23);
#line 392 "sparse_bitset.opt"
                      MR_Word mercury__digraph__V_34_33;
#line 392 "sparse_bitset.opt"
                      MR_Word mercury__digraph__V_35_34;

#line 394 "sparse_bitset.opt"
                      {
#line 394 "sparse_bitset.opt"
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_49_48_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_52_93_95_48_9_p_in__sparse_bitset_0(mercury__digraph__V_51_51, mercury__digraph__V_52_52, mercury__digraph__TypeClassInfo_for_enum_35, mercury__digraph__V_10_10, mercury__digraph__V_33_32, mercury__digraph__V_21_27, mercury__digraph__V_18_23, mercury__digraph__V_22_15, &mercury__digraph__V_34_33, mercury__digraph__V_24_17, &mercury__digraph__V_35_34);
                      }
#line 395 "sparse_bitset.opt"
                      /* direct tailcall eliminated */
#line 395 "sparse_bitset.opt"
                      {
#line 395 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_13__tmp_copy_13 = mercury__digraph__V_20_26;
#line 395 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_14__tmp_copy_14 = mercury__digraph__V_18_23;
#line 395 "sparse_bitset.opt"
                        MR_Word mercury__digraph__V_22__tmp_copy_15 = mercury__digraph__V_34_33;
#line 395 "sparse_bitset.opt"
                        MR_Word mercury__digraph__V_24__tmp_copy_17 = mercury__digraph__V_35_34;

#line 395 "sparse_bitset.opt"
                        mercury__digraph__V_24_17 = mercury__digraph__V_24__tmp_copy_17;
#line 395 "sparse_bitset.opt"
                        mercury__digraph__V_22_15 = mercury__digraph__V_22__tmp_copy_15;
#line 395 "sparse_bitset.opt"
                        mercury__digraph__V_14_14 = mercury__digraph__V_14__tmp_copy_14;
#line 395 "sparse_bitset.opt"
                        mercury__digraph__V_13_13 = mercury__digraph__V_13__tmp_copy_13;
#line 395 "sparse_bitset.opt"
                      }
#line 395 "sparse_bitset.opt"
                      continue;
#line 392 "sparse_bitset.opt"
                    }
#line 391 "sparse_bitset.opt"
                    break;
#line 391 "sparse_bitset.opt"
                  case (MR_Integer) 0:
#line 387 "sparse_bitset.opt"
                    {
#line 387 "sparse_bitset.opt"
                      MR_Word mercury__digraph__V_38_29;
#line 387 "sparse_bitset.opt"
                      MR_Word mercury__digraph__V_39_30;
#line 387 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__V_40_31;

#line 388 "sparse_bitset.opt"
                      {
#line 388 "sparse_bitset.opt"
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_49_48_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_52_93_95_48_9_p_in__sparse_bitset_0(mercury__digraph__V_51_51, mercury__digraph__V_52_52, mercury__digraph__TypeClassInfo_for_enum_35, mercury__digraph__V_10_10, mercury__digraph__V_12_12, mercury__digraph__V_20_26, mercury__digraph__V_18_23, mercury__digraph__V_22_15, &mercury__digraph__V_38_29, mercury__digraph__V_24_17, &mercury__digraph__V_39_30);
                      }
#line 389 "sparse_bitset.opt"
                      mercury__digraph__V_40_31 = (mercury__digraph__V_12_12 + mercury__digraph__V_18_23);
#line 390 "sparse_bitset.opt"
                      /* direct tailcall eliminated */
#line 390 "sparse_bitset.opt"
                      {
#line 390 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_12__tmp_copy_12 = mercury__digraph__V_40_31;
#line 390 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_13__tmp_copy_13 = mercury__digraph__V_21_27;
#line 390 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_14__tmp_copy_14 = mercury__digraph__V_18_23;
#line 390 "sparse_bitset.opt"
                        MR_Word mercury__digraph__V_22__tmp_copy_15 = mercury__digraph__V_38_29;
#line 390 "sparse_bitset.opt"
                        MR_Word mercury__digraph__V_24__tmp_copy_17 = mercury__digraph__V_39_30;

#line 390 "sparse_bitset.opt"
                        mercury__digraph__V_24_17 = mercury__digraph__V_24__tmp_copy_17;
#line 390 "sparse_bitset.opt"
                        mercury__digraph__V_22_15 = mercury__digraph__V_22__tmp_copy_15;
#line 390 "sparse_bitset.opt"
                        mercury__digraph__V_14_14 = mercury__digraph__V_14__tmp_copy_14;
#line 390 "sparse_bitset.opt"
                        mercury__digraph__V_13_13 = mercury__digraph__V_13__tmp_copy_13;
#line 390 "sparse_bitset.opt"
                        mercury__digraph__V_12_12 = mercury__digraph__V_12__tmp_copy_12;
#line 390 "sparse_bitset.opt"
                      }
#line 390 "sparse_bitset.opt"
                      continue;
#line 387 "sparse_bitset.opt"
                    }
#line 391 "sparse_bitset.opt"
                    break;
#line 391 "sparse_bitset.opt"
                }
#line 380 "sparse_bitset.opt"
              }
#line 379 "sparse_bitset.opt"
          }
#line 363 "sparse_bitset.opt"
      }
#line 363 "sparse_bitset.opt"
      break;
#line 363 "sparse_bitset.opt"
    }
#line 89 "sparse_bitset.opt"
}

#line 103 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_40_40,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_41_41,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_8_8,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_10_10,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_11_11,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_12_12,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_19_13,
#line 103 "sparse_bitset.opt"
  MR_Word * mercury__digraph__V_20_14)
#line 103 "sparse_bitset.opt"
{
#line 405 "sparse_bitset.opt"
  while (MR_TRUE)
#line 405 "sparse_bitset.opt"
    {
#line 405 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 405 "sparse_bitset.opt"
      {
#line 405 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded = (mercury__digraph__V_11_11 == (MR_Integer) 0);

#line 405 "sparse_bitset.opt"
        if (mercury__digraph__succeeded)
#line 404 "sparse_bitset.opt"
          *mercury__digraph__V_20_14 = mercury__digraph__V_19_13;
#line 405 "sparse_bitset.opt"
        else
#line 420 "sparse_bitset.opt"
          {
#line 407 "sparse_bitset.opt"
            mercury__digraph__succeeded = (mercury__digraph__V_12_12 == (MR_Integer) 1);
#line 420 "sparse_bitset.opt"
            if (mercury__digraph__succeeded)
#line 413 "sparse_bitset.opt"
              {
#line 413 "sparse_bitset.opt"
                MR_Word mercury__digraph__V_14_15;
#line 3073 "digraph.c"
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 3075 "digraph.c"
                MR_Box mercury__digraph__conv1_V_14_15;

#line 3078 "digraph.c"
                {
#line 3080 "digraph.c"
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__V_10_10)), &mercury__digraph__conv1_V_14_15);
                }
#line 3083 "digraph.c"
                if (mercury__digraph__succeeded)
#line 3085 "digraph.c"
                  {
#line 3087 "digraph.c"
                    mercury__digraph__V_14_15 = ((MR_Word) mercury__digraph__conv1_V_14_15);
#line 3089 "digraph.c"
                    mercury__digraph__succeeded = MR_TRUE;
#line 3091 "digraph.c"
                  }
#line 413 "sparse_bitset.opt"
                if (mercury__digraph__succeeded)
#line 412 "sparse_bitset.opt"
                  {
#line 412 "sparse_bitset.opt"
                    mercury__digraph__accumulate_digraph_key_set_4_p_0(mercury__digraph__V_40_40, mercury__digraph__V_41_41, mercury__digraph__V_14_15, mercury__digraph__V_19_13, mercury__digraph__V_20_14);
#line 412 "sparse_bitset.opt"
                    return;
                  }
#line 413 "sparse_bitset.opt"
                else
#line 414 "sparse_bitset.opt"
                  {
#line 417 "sparse_bitset.opt"
                    {
#line 417 "sparse_bitset.opt"
                      mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold_bits\'/7", (MR_String) "\140enum.from_int/1\' failed");
#line 417 "sparse_bitset.opt"
                      return;
                    }
#line 414 "sparse_bitset.opt"
                  }
#line 413 "sparse_bitset.opt"
              }
#line 420 "sparse_bitset.opt"
            else
#line 421 "sparse_bitset.opt"
              {
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_15_19 = (mercury__digraph__V_12_12 >> (MR_Integer) 1);
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_16_21;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_17_22;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_18_23;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_26_24;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_4_44 = ((MR_Integer) -1 << mercury__digraph__V_15_19);

#line 540 "sparse_bitset.opt"
                mercury__digraph__V_16_21 = ~(mercury__digraph__V_4_44);
#line 424 "sparse_bitset.opt"
                mercury__digraph__V_17_22 = (mercury__digraph__V_16_21 & mercury__digraph__V_11_11);
#line 426 "sparse_bitset.opt"
                mercury__digraph__V_26_24 = (mercury__digraph__V_11_11 >> mercury__digraph__V_15_19);
#line 425 "sparse_bitset.opt"
                mercury__digraph__V_18_23 = (mercury__digraph__V_16_21 & mercury__digraph__V_26_24);
#line 432 "sparse_bitset.opt"
#line 432 "sparse_bitset.opt"
                switch (mercury__digraph__V_8_8) {
#line 432 "sparse_bitset.opt"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 432 "sparse_bitset.opt"
                  case (MR_Integer) 1:
#line 433 "sparse_bitset.opt"
                    {
#line 433 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__V_27_27 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
#line 433 "sparse_bitset.opt"
                      MR_Word mercury__digraph__V_28_28;

#line 435 "sparse_bitset.opt"
                      {
#line 435 "sparse_bitset.opt"
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_40_40, mercury__digraph__V_41_41, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_27_27, mercury__digraph__V_18_23, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_28_28);
                      }
#line 436 "sparse_bitset.opt"
                      /* direct tailcall eliminated */
#line 436 "sparse_bitset.opt"
                      {
#line 436 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_11__tmp_copy_11 = mercury__digraph__V_17_22;
#line 436 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_12__tmp_copy_12 = mercury__digraph__V_15_19;
#line 436 "sparse_bitset.opt"
                        MR_Word mercury__digraph__V_19__tmp_copy_13 = mercury__digraph__V_28_28;

#line 436 "sparse_bitset.opt"
                        mercury__digraph__V_19_13 = mercury__digraph__V_19__tmp_copy_13;
#line 436 "sparse_bitset.opt"
                        mercury__digraph__V_12_12 = mercury__digraph__V_12__tmp_copy_12;
#line 436 "sparse_bitset.opt"
                        mercury__digraph__V_11_11 = mercury__digraph__V_11__tmp_copy_11;
#line 436 "sparse_bitset.opt"
                      }
#line 436 "sparse_bitset.opt"
                      continue;
#line 433 "sparse_bitset.opt"
                    }
#line 432 "sparse_bitset.opt"
                    break;
#line 432 "sparse_bitset.opt"
                  case (MR_Integer) 0:
#line 428 "sparse_bitset.opt"
                    {
#line 428 "sparse_bitset.opt"
                      MR_Word mercury__digraph__V_30_25;
#line 428 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__V_31_26;

#line 429 "sparse_bitset.opt"
                      {
#line 429 "sparse_bitset.opt"
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_40_40, mercury__digraph__V_41_41, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_10_10, mercury__digraph__V_17_22, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_30_25);
                      }
#line 430 "sparse_bitset.opt"
                      mercury__digraph__V_31_26 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
#line 431 "sparse_bitset.opt"
                      /* direct tailcall eliminated */
#line 431 "sparse_bitset.opt"
                      {
#line 431 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_10__tmp_copy_10 = mercury__digraph__V_31_26;
#line 431 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_11__tmp_copy_11 = mercury__digraph__V_18_23;
#line 431 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_12__tmp_copy_12 = mercury__digraph__V_15_19;
#line 431 "sparse_bitset.opt"
                        MR_Word mercury__digraph__V_19__tmp_copy_13 = mercury__digraph__V_30_25;

#line 431 "sparse_bitset.opt"
                        mercury__digraph__V_19_13 = mercury__digraph__V_19__tmp_copy_13;
#line 431 "sparse_bitset.opt"
                        mercury__digraph__V_12_12 = mercury__digraph__V_12__tmp_copy_12;
#line 431 "sparse_bitset.opt"
                        mercury__digraph__V_11_11 = mercury__digraph__V_11__tmp_copy_11;
#line 431 "sparse_bitset.opt"
                        mercury__digraph__V_10_10 = mercury__digraph__V_10__tmp_copy_10;
#line 431 "sparse_bitset.opt"
                      }
#line 431 "sparse_bitset.opt"
                      continue;
#line 428 "sparse_bitset.opt"
                    }
#line 432 "sparse_bitset.opt"
                    break;
#line 432 "sparse_bitset.opt"
                }
#line 421 "sparse_bitset.opt"
              }
#line 420 "sparse_bitset.opt"
          }
#line 405 "sparse_bitset.opt"
      }
#line 405 "sparse_bitset.opt"
      break;
#line 405 "sparse_bitset.opt"
    }
#line 103 "sparse_bitset.opt"
}

#line 106 "sparse_bitset.opt"
static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_50_93_95_48_7_p_in__sparse_bitset_0(
#line 106 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_40_40,
#line 106 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_41_41,
#line 106 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_42_42,
#line 106 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 106 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_8_8,
#line 106 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_10_10,
#line 106 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_11_11,
#line 106 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_12_12,
#line 106 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_19_13,
#line 106 "sparse_bitset.opt"
  MR_Word * mercury__digraph__V_20_14)
#line 106 "sparse_bitset.opt"
{
#line 405 "sparse_bitset.opt"
  while (MR_TRUE)
#line 405 "sparse_bitset.opt"
    {
#line 405 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 405 "sparse_bitset.opt"
      {
#line 405 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded = (mercury__digraph__V_11_11 == (MR_Integer) 0);

#line 405 "sparse_bitset.opt"
        if (mercury__digraph__succeeded)
#line 404 "sparse_bitset.opt"
          {
#line 404 "sparse_bitset.opt"
            *mercury__digraph__V_20_14 = mercury__digraph__V_19_13;
#line 404 "sparse_bitset.opt"
            mercury__digraph__succeeded = MR_TRUE;
#line 404 "sparse_bitset.opt"
          }
#line 405 "sparse_bitset.opt"
        else
#line 420 "sparse_bitset.opt"
          {
#line 407 "sparse_bitset.opt"
            mercury__digraph__succeeded = (mercury__digraph__V_12_12 == (MR_Integer) 1);
#line 420 "sparse_bitset.opt"
            if (mercury__digraph__succeeded)
#line 413 "sparse_bitset.opt"
              {
#line 413 "sparse_bitset.opt"
                MR_Word mercury__digraph__V_14_15;
#line 3304 "digraph.c"
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 3306 "digraph.c"
                MR_Box mercury__digraph__conv1_V_14_15;

#line 3309 "digraph.c"
                {
#line 3311 "digraph.c"
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__V_10_10)), &mercury__digraph__conv1_V_14_15);
                }
#line 3314 "digraph.c"
                if (mercury__digraph__succeeded)
#line 3316 "digraph.c"
                  {
#line 3318 "digraph.c"
                    mercury__digraph__V_14_15 = ((MR_Word) mercury__digraph__conv1_V_14_15);
#line 3320 "digraph.c"
                    mercury__digraph__succeeded = MR_TRUE;
#line 3322 "digraph.c"
                  }
#line 413 "sparse_bitset.opt"
                if (mercury__digraph__succeeded)
#line 412 "sparse_bitset.opt"
                  {
#line 412 "sparse_bitset.opt"
                    return mercury__digraph__succeeded = mercury__digraph__is_dag_2_5_p_0(mercury__digraph__V_40_40, mercury__digraph__V_41_41, mercury__digraph__V_42_42, mercury__digraph__V_14_15, mercury__digraph__V_19_13, mercury__digraph__V_20_14);
                  }
#line 413 "sparse_bitset.opt"
                else
#line 414 "sparse_bitset.opt"
                  {
#line 417 "sparse_bitset.opt"
                    {
#line 417 "sparse_bitset.opt"
                      mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold_bits\'/7", (MR_String) "\140enum.from_int/1\' failed");
                    }
#line 414 "sparse_bitset.opt"
                    mercury__digraph__succeeded = MR_TRUE;
#line 414 "sparse_bitset.opt"
                  }
#line 413 "sparse_bitset.opt"
              }
#line 420 "sparse_bitset.opt"
            else
#line 421 "sparse_bitset.opt"
              {
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_15_19 = (mercury__digraph__V_12_12 >> (MR_Integer) 1);
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_16_21;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_17_22;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_18_23;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_26_24;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_4_45 = ((MR_Integer) -1 << mercury__digraph__V_15_19);

#line 540 "sparse_bitset.opt"
                mercury__digraph__V_16_21 = ~(mercury__digraph__V_4_45);
#line 424 "sparse_bitset.opt"
                mercury__digraph__V_17_22 = (mercury__digraph__V_16_21 & mercury__digraph__V_11_11);
#line 426 "sparse_bitset.opt"
                mercury__digraph__V_26_24 = (mercury__digraph__V_11_11 >> mercury__digraph__V_15_19);
#line 425 "sparse_bitset.opt"
                mercury__digraph__V_18_23 = (mercury__digraph__V_16_21 & mercury__digraph__V_26_24);
#line 432 "sparse_bitset.opt"
#line 432 "sparse_bitset.opt"
                switch (mercury__digraph__V_8_8) {
#line 432 "sparse_bitset.opt"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 432 "sparse_bitset.opt"
                  case (MR_Integer) 1:
#line 433 "sparse_bitset.opt"
                    {
#line 433 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__V_27_27 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
#line 433 "sparse_bitset.opt"
                      MR_Word mercury__digraph__V_28_28;

#line 435 "sparse_bitset.opt"
                      {
#line 435 "sparse_bitset.opt"
                        mercury__digraph__succeeded = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_50_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_40_40, mercury__digraph__V_41_41, mercury__digraph__V_42_42, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_27_27, mercury__digraph__V_18_23, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_28_28);
                      }
#line 433 "sparse_bitset.opt"
                      if (mercury__digraph__succeeded)
#line 436 "sparse_bitset.opt"
                        {
#line 436 "sparse_bitset.opt"
                          /* direct tailcall eliminated */
#line 436 "sparse_bitset.opt"
                          {
#line 436 "sparse_bitset.opt"
                            MR_Integer mercury__digraph__V_11__tmp_copy_11 = mercury__digraph__V_17_22;
#line 436 "sparse_bitset.opt"
                            MR_Integer mercury__digraph__V_12__tmp_copy_12 = mercury__digraph__V_15_19;
#line 436 "sparse_bitset.opt"
                            MR_Word mercury__digraph__V_19__tmp_copy_13 = mercury__digraph__V_28_28;

#line 436 "sparse_bitset.opt"
                            mercury__digraph__V_19_13 = mercury__digraph__V_19__tmp_copy_13;
#line 436 "sparse_bitset.opt"
                            mercury__digraph__V_12_12 = mercury__digraph__V_12__tmp_copy_12;
#line 436 "sparse_bitset.opt"
                            mercury__digraph__V_11_11 = mercury__digraph__V_11__tmp_copy_11;
#line 436 "sparse_bitset.opt"
                          }
#line 436 "sparse_bitset.opt"
                          continue;
#line 436 "sparse_bitset.opt"
                        }
#line 433 "sparse_bitset.opt"
                    }
#line 432 "sparse_bitset.opt"
                    break;
#line 432 "sparse_bitset.opt"
                  case (MR_Integer) 0:
#line 428 "sparse_bitset.opt"
                    {
#line 428 "sparse_bitset.opt"
                      MR_Word mercury__digraph__V_30_25;
#line 428 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__V_31_26;

#line 429 "sparse_bitset.opt"
                      {
#line 429 "sparse_bitset.opt"
                        mercury__digraph__succeeded = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_50_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_40_40, mercury__digraph__V_41_41, mercury__digraph__V_42_42, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_10_10, mercury__digraph__V_17_22, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_30_25);
                      }
#line 428 "sparse_bitset.opt"
                      if (mercury__digraph__succeeded)
#line 428 "sparse_bitset.opt"
                        {
#line 430 "sparse_bitset.opt"
                          mercury__digraph__V_31_26 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
#line 431 "sparse_bitset.opt"
                          /* direct tailcall eliminated */
#line 431 "sparse_bitset.opt"
                          {
#line 431 "sparse_bitset.opt"
                            MR_Integer mercury__digraph__V_10__tmp_copy_10 = mercury__digraph__V_31_26;
#line 431 "sparse_bitset.opt"
                            MR_Integer mercury__digraph__V_11__tmp_copy_11 = mercury__digraph__V_18_23;
#line 431 "sparse_bitset.opt"
                            MR_Integer mercury__digraph__V_12__tmp_copy_12 = mercury__digraph__V_15_19;
#line 431 "sparse_bitset.opt"
                            MR_Word mercury__digraph__V_19__tmp_copy_13 = mercury__digraph__V_30_25;

#line 431 "sparse_bitset.opt"
                            mercury__digraph__V_19_13 = mercury__digraph__V_19__tmp_copy_13;
#line 431 "sparse_bitset.opt"
                            mercury__digraph__V_12_12 = mercury__digraph__V_12__tmp_copy_12;
#line 431 "sparse_bitset.opt"
                            mercury__digraph__V_11_11 = mercury__digraph__V_11__tmp_copy_11;
#line 431 "sparse_bitset.opt"
                            mercury__digraph__V_10_10 = mercury__digraph__V_10__tmp_copy_10;
#line 431 "sparse_bitset.opt"
                          }
#line 431 "sparse_bitset.opt"
                          continue;
#line 428 "sparse_bitset.opt"
                        }
#line 428 "sparse_bitset.opt"
                    }
#line 432 "sparse_bitset.opt"
                    break;
#line 432 "sparse_bitset.opt"
                }
#line 421 "sparse_bitset.opt"
              }
#line 420 "sparse_bitset.opt"
          }
#line 405 "sparse_bitset.opt"
        return mercury__digraph__succeeded;
#line 405 "sparse_bitset.opt"
      }
#line 405 "sparse_bitset.opt"
      break;
#line 405 "sparse_bitset.opt"
    }
#line 106 "sparse_bitset.opt"
}

#line 103 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_40_40,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_41_41,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_8_8,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_10_10,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_11_11,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_12_12,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_19_13,
#line 103 "sparse_bitset.opt"
  MR_Word * mercury__digraph__V_20_14)
#line 103 "sparse_bitset.opt"
{
#line 405 "sparse_bitset.opt"
  while (MR_TRUE)
#line 405 "sparse_bitset.opt"
    {
#line 405 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 405 "sparse_bitset.opt"
      {
#line 405 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded = (mercury__digraph__V_11_11 == (MR_Integer) 0);

#line 405 "sparse_bitset.opt"
        if (mercury__digraph__succeeded)
#line 404 "sparse_bitset.opt"
          *mercury__digraph__V_20_14 = mercury__digraph__V_19_13;
#line 405 "sparse_bitset.opt"
        else
#line 420 "sparse_bitset.opt"
          {
#line 407 "sparse_bitset.opt"
            mercury__digraph__succeeded = (mercury__digraph__V_12_12 == (MR_Integer) 1);
#line 420 "sparse_bitset.opt"
            if (mercury__digraph__succeeded)
#line 413 "sparse_bitset.opt"
              {
#line 413 "sparse_bitset.opt"
                MR_Word mercury__digraph__V_14_15;
#line 3539 "digraph.c"
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 3541 "digraph.c"
                MR_Box mercury__digraph__conv1_V_14_15;

#line 3544 "digraph.c"
                {
#line 3546 "digraph.c"
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__V_10_10)), &mercury__digraph__conv1_V_14_15);
                }
#line 3549 "digraph.c"
                if (mercury__digraph__succeeded)
#line 3551 "digraph.c"
                  {
#line 3553 "digraph.c"
                    mercury__digraph__V_14_15 = ((MR_Word) mercury__digraph__conv1_V_14_15);
#line 3555 "digraph.c"
                    mercury__digraph__succeeded = MR_TRUE;
#line 3557 "digraph.c"
                  }
#line 413 "sparse_bitset.opt"
                if (mercury__digraph__succeeded)
#line 1076 "digraph.m"
                  {
#line 1076 "digraph.m"
                    MR_Word mercury__digraph__SuccXs_47;
#line 1076 "digraph.m"
                    MR_Word mercury__digraph__V_4_54;
#line 1076 "digraph.m"
                    MR_Word mercury__digraph__V_5_55;
#line 1076 "digraph.m"
                    MR_Word mercury__digraph__V_6_56;

#line 1077 "digraph.m"
                    {
#line 1077 "digraph.m"
                      mercury__digraph__lookup_key_set_from_3_p_0(mercury__digraph__V_40_40, mercury__digraph__V_41_41, mercury__digraph__V_14_15, &mercury__digraph__SuccXs_47);
                    }
#line 606 "sparse_bitset.opt"
                    mercury__digraph__V_4_54 = (MR_Word) mercury__digraph__SuccXs_47;
#line 606 "sparse_bitset.opt"
                    mercury__digraph__V_5_55 = (MR_Word) mercury__digraph__V_19_13;
#line 607 "sparse_bitset.opt"
                    {
#line 607 "sparse_bitset.opt"
                      mercury__digraph__V_6_56 = mercury__sparse_bitset__union_2_2_f_0(mercury__digraph__V_4_54, mercury__digraph__V_5_55);
                    }
#line 606 "sparse_bitset.opt"
                    *mercury__digraph__V_20_14 = (MR_Word) mercury__digraph__V_6_56;
#line 1076 "digraph.m"
                  }
#line 413 "sparse_bitset.opt"
                else
#line 414 "sparse_bitset.opt"
                  {
#line 417 "sparse_bitset.opt"
                    {
#line 417 "sparse_bitset.opt"
                      mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold_bits\'/7", (MR_String) "\140enum.from_int/1\' failed");
#line 417 "sparse_bitset.opt"
                      return;
                    }
#line 414 "sparse_bitset.opt"
                  }
#line 413 "sparse_bitset.opt"
              }
#line 420 "sparse_bitset.opt"
            else
#line 421 "sparse_bitset.opt"
              {
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_15_19 = (mercury__digraph__V_12_12 >> (MR_Integer) 1);
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_16_21;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_17_22;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_18_23;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_26_24;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_4_59 = ((MR_Integer) -1 << mercury__digraph__V_15_19);

#line 540 "sparse_bitset.opt"
                mercury__digraph__V_16_21 = ~(mercury__digraph__V_4_59);
#line 424 "sparse_bitset.opt"
                mercury__digraph__V_17_22 = (mercury__digraph__V_16_21 & mercury__digraph__V_11_11);
#line 426 "sparse_bitset.opt"
                mercury__digraph__V_26_24 = (mercury__digraph__V_11_11 >> mercury__digraph__V_15_19);
#line 425 "sparse_bitset.opt"
                mercury__digraph__V_18_23 = (mercury__digraph__V_16_21 & mercury__digraph__V_26_24);
#line 432 "sparse_bitset.opt"
#line 432 "sparse_bitset.opt"
                switch (mercury__digraph__V_8_8) {
#line 432 "sparse_bitset.opt"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 432 "sparse_bitset.opt"
                  case (MR_Integer) 1:
#line 433 "sparse_bitset.opt"
                    {
#line 433 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__V_27_27 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
#line 433 "sparse_bitset.opt"
                      MR_Word mercury__digraph__V_28_28;

#line 435 "sparse_bitset.opt"
                      {
#line 435 "sparse_bitset.opt"
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_40_40, mercury__digraph__V_41_41, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_27_27, mercury__digraph__V_18_23, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_28_28);
                      }
#line 436 "sparse_bitset.opt"
                      /* direct tailcall eliminated */
#line 436 "sparse_bitset.opt"
                      {
#line 436 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_11__tmp_copy_11 = mercury__digraph__V_17_22;
#line 436 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_12__tmp_copy_12 = mercury__digraph__V_15_19;
#line 436 "sparse_bitset.opt"
                        MR_Word mercury__digraph__V_19__tmp_copy_13 = mercury__digraph__V_28_28;

#line 436 "sparse_bitset.opt"
                        mercury__digraph__V_19_13 = mercury__digraph__V_19__tmp_copy_13;
#line 436 "sparse_bitset.opt"
                        mercury__digraph__V_12_12 = mercury__digraph__V_12__tmp_copy_12;
#line 436 "sparse_bitset.opt"
                        mercury__digraph__V_11_11 = mercury__digraph__V_11__tmp_copy_11;
#line 436 "sparse_bitset.opt"
                      }
#line 436 "sparse_bitset.opt"
                      continue;
#line 433 "sparse_bitset.opt"
                    }
#line 432 "sparse_bitset.opt"
                    break;
#line 432 "sparse_bitset.opt"
                  case (MR_Integer) 0:
#line 428 "sparse_bitset.opt"
                    {
#line 428 "sparse_bitset.opt"
                      MR_Word mercury__digraph__V_30_25;
#line 428 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__V_31_26;

#line 429 "sparse_bitset.opt"
                      {
#line 429 "sparse_bitset.opt"
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_40_40, mercury__digraph__V_41_41, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_10_10, mercury__digraph__V_17_22, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_30_25);
                      }
#line 430 "sparse_bitset.opt"
                      mercury__digraph__V_31_26 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
#line 431 "sparse_bitset.opt"
                      /* direct tailcall eliminated */
#line 431 "sparse_bitset.opt"
                      {
#line 431 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_10__tmp_copy_10 = mercury__digraph__V_31_26;
#line 431 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_11__tmp_copy_11 = mercury__digraph__V_18_23;
#line 431 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_12__tmp_copy_12 = mercury__digraph__V_15_19;
#line 431 "sparse_bitset.opt"
                        MR_Word mercury__digraph__V_19__tmp_copy_13 = mercury__digraph__V_30_25;

#line 431 "sparse_bitset.opt"
                        mercury__digraph__V_19_13 = mercury__digraph__V_19__tmp_copy_13;
#line 431 "sparse_bitset.opt"
                        mercury__digraph__V_12_12 = mercury__digraph__V_12__tmp_copy_12;
#line 431 "sparse_bitset.opt"
                        mercury__digraph__V_11_11 = mercury__digraph__V_11__tmp_copy_11;
#line 431 "sparse_bitset.opt"
                        mercury__digraph__V_10_10 = mercury__digraph__V_10__tmp_copy_10;
#line 431 "sparse_bitset.opt"
                      }
#line 431 "sparse_bitset.opt"
                      continue;
#line 428 "sparse_bitset.opt"
                    }
#line 432 "sparse_bitset.opt"
                    break;
#line 432 "sparse_bitset.opt"
                }
#line 421 "sparse_bitset.opt"
              }
#line 420 "sparse_bitset.opt"
          }
#line 405 "sparse_bitset.opt"
      }
#line 405 "sparse_bitset.opt"
      break;
#line 405 "sparse_bitset.opt"
    }
#line 103 "sparse_bitset.opt"
}

#line 103 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_38_38,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_39_39,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_8_8,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_10_10,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_11_11,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_12_12,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_19_13,
#line 103 "sparse_bitset.opt"
  MR_Word * mercury__digraph__V_20_14)
#line 103 "sparse_bitset.opt"
{
#line 405 "sparse_bitset.opt"
  while (MR_TRUE)
#line 405 "sparse_bitset.opt"
    {
#line 405 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 405 "sparse_bitset.opt"
      {
#line 405 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded = (mercury__digraph__V_11_11 == (MR_Integer) 0);

#line 405 "sparse_bitset.opt"
        if (mercury__digraph__succeeded)
#line 404 "sparse_bitset.opt"
          *mercury__digraph__V_20_14 = mercury__digraph__V_19_13;
#line 405 "sparse_bitset.opt"
        else
#line 420 "sparse_bitset.opt"
          {
#line 407 "sparse_bitset.opt"
            mercury__digraph__succeeded = (mercury__digraph__V_12_12 == (MR_Integer) 1);
#line 420 "sparse_bitset.opt"
            if (mercury__digraph__succeeded)
#line 413 "sparse_bitset.opt"
              {
#line 413 "sparse_bitset.opt"
                MR_Word mercury__digraph__V_14_15;
#line 3784 "digraph.c"
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 3786 "digraph.c"
                MR_Box mercury__digraph__conv1_V_14_15;

#line 3789 "digraph.c"
                {
#line 3791 "digraph.c"
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__V_10_10)), &mercury__digraph__conv1_V_14_15);
                }
#line 3794 "digraph.c"
                if (mercury__digraph__succeeded)
#line 3796 "digraph.c"
                  {
#line 3798 "digraph.c"
                    mercury__digraph__V_14_15 = ((MR_Word) mercury__digraph__conv1_V_14_15);
#line 3800 "digraph.c"
                    mercury__digraph__succeeded = MR_TRUE;
#line 3802 "digraph.c"
                  }
#line 413 "sparse_bitset.opt"
                if (mercury__digraph__succeeded)
#line 412 "sparse_bitset.opt"
                  {
#line 412 "sparse_bitset.opt"
                    mercury__digraph__IntroducedFrom__pred__add_cartesian_product__1084__1_5_p_0(mercury__digraph__V_38_38, mercury__digraph__V_39_39, mercury__digraph__V_14_15, mercury__digraph__V_19_13, mercury__digraph__V_20_14);
#line 412 "sparse_bitset.opt"
                    return;
                  }
#line 413 "sparse_bitset.opt"
                else
#line 414 "sparse_bitset.opt"
                  {
#line 417 "sparse_bitset.opt"
                    {
#line 417 "sparse_bitset.opt"
                      mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold_bits\'/7", (MR_String) "\140enum.from_int/1\' failed");
#line 417 "sparse_bitset.opt"
                      return;
                    }
#line 414 "sparse_bitset.opt"
                  }
#line 413 "sparse_bitset.opt"
              }
#line 420 "sparse_bitset.opt"
            else
#line 421 "sparse_bitset.opt"
              {
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_15_19 = (mercury__digraph__V_12_12 >> (MR_Integer) 1);
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_16_21;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_17_22;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_18_23;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_26_24;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_4_42 = ((MR_Integer) -1 << mercury__digraph__V_15_19);

#line 540 "sparse_bitset.opt"
                mercury__digraph__V_16_21 = ~(mercury__digraph__V_4_42);
#line 424 "sparse_bitset.opt"
                mercury__digraph__V_17_22 = (mercury__digraph__V_16_21 & mercury__digraph__V_11_11);
#line 426 "sparse_bitset.opt"
                mercury__digraph__V_26_24 = (mercury__digraph__V_11_11 >> mercury__digraph__V_15_19);
#line 425 "sparse_bitset.opt"
                mercury__digraph__V_18_23 = (mercury__digraph__V_16_21 & mercury__digraph__V_26_24);
#line 432 "sparse_bitset.opt"
#line 432 "sparse_bitset.opt"
                switch (mercury__digraph__V_8_8) {
#line 432 "sparse_bitset.opt"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 432 "sparse_bitset.opt"
                  case (MR_Integer) 1:
#line 433 "sparse_bitset.opt"
                    {
#line 433 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__V_27_27 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
#line 433 "sparse_bitset.opt"
                      MR_Word mercury__digraph__V_28_28;

#line 435 "sparse_bitset.opt"
                      {
#line 435 "sparse_bitset.opt"
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_38_38, mercury__digraph__V_39_39, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_27_27, mercury__digraph__V_18_23, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_28_28);
                      }
#line 436 "sparse_bitset.opt"
                      /* direct tailcall eliminated */
#line 436 "sparse_bitset.opt"
                      {
#line 436 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_11__tmp_copy_11 = mercury__digraph__V_17_22;
#line 436 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_12__tmp_copy_12 = mercury__digraph__V_15_19;
#line 436 "sparse_bitset.opt"
                        MR_Word mercury__digraph__V_19__tmp_copy_13 = mercury__digraph__V_28_28;

#line 436 "sparse_bitset.opt"
                        mercury__digraph__V_19_13 = mercury__digraph__V_19__tmp_copy_13;
#line 436 "sparse_bitset.opt"
                        mercury__digraph__V_12_12 = mercury__digraph__V_12__tmp_copy_12;
#line 436 "sparse_bitset.opt"
                        mercury__digraph__V_11_11 = mercury__digraph__V_11__tmp_copy_11;
#line 436 "sparse_bitset.opt"
                      }
#line 436 "sparse_bitset.opt"
                      continue;
#line 433 "sparse_bitset.opt"
                    }
#line 432 "sparse_bitset.opt"
                    break;
#line 432 "sparse_bitset.opt"
                  case (MR_Integer) 0:
#line 428 "sparse_bitset.opt"
                    {
#line 428 "sparse_bitset.opt"
                      MR_Word mercury__digraph__V_30_25;
#line 428 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__V_31_26;

#line 429 "sparse_bitset.opt"
                      {
#line 429 "sparse_bitset.opt"
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_38_38, mercury__digraph__V_39_39, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_10_10, mercury__digraph__V_17_22, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_30_25);
                      }
#line 430 "sparse_bitset.opt"
                      mercury__digraph__V_31_26 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
#line 431 "sparse_bitset.opt"
                      /* direct tailcall eliminated */
#line 431 "sparse_bitset.opt"
                      {
#line 431 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_10__tmp_copy_10 = mercury__digraph__V_31_26;
#line 431 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_11__tmp_copy_11 = mercury__digraph__V_18_23;
#line 431 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_12__tmp_copy_12 = mercury__digraph__V_15_19;
#line 431 "sparse_bitset.opt"
                        MR_Word mercury__digraph__V_19__tmp_copy_13 = mercury__digraph__V_30_25;

#line 431 "sparse_bitset.opt"
                        mercury__digraph__V_19_13 = mercury__digraph__V_19__tmp_copy_13;
#line 431 "sparse_bitset.opt"
                        mercury__digraph__V_12_12 = mercury__digraph__V_12__tmp_copy_12;
#line 431 "sparse_bitset.opt"
                        mercury__digraph__V_11_11 = mercury__digraph__V_11__tmp_copy_11;
#line 431 "sparse_bitset.opt"
                        mercury__digraph__V_10_10 = mercury__digraph__V_10__tmp_copy_10;
#line 431 "sparse_bitset.opt"
                      }
#line 431 "sparse_bitset.opt"
                      continue;
#line 428 "sparse_bitset.opt"
                    }
#line 432 "sparse_bitset.opt"
                    break;
#line 432 "sparse_bitset.opt"
                }
#line 421 "sparse_bitset.opt"
              }
#line 420 "sparse_bitset.opt"
          }
#line 405 "sparse_bitset.opt"
      }
#line 405 "sparse_bitset.opt"
      break;
#line 405 "sparse_bitset.opt"
    }
#line 103 "sparse_bitset.opt"
}

#line 103 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_8_8,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_10_10,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_11_11,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_12_12,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_19_13,
#line 103 "sparse_bitset.opt"
  MR_Word * mercury__digraph__V_20_14)
#line 103 "sparse_bitset.opt"
{
#line 405 "sparse_bitset.opt"
  while (MR_TRUE)
#line 405 "sparse_bitset.opt"
    {
#line 405 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 405 "sparse_bitset.opt"
      {
#line 405 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded = (mercury__digraph__V_11_11 == (MR_Integer) 0);

#line 405 "sparse_bitset.opt"
        if (mercury__digraph__succeeded)
#line 404 "sparse_bitset.opt"
          *mercury__digraph__V_20_14 = mercury__digraph__V_19_13;
#line 405 "sparse_bitset.opt"
        else
#line 420 "sparse_bitset.opt"
          {
#line 407 "sparse_bitset.opt"
            mercury__digraph__succeeded = (mercury__digraph__V_12_12 == (MR_Integer) 1);
#line 420 "sparse_bitset.opt"
            if (mercury__digraph__succeeded)
#line 413 "sparse_bitset.opt"
              {
#line 413 "sparse_bitset.opt"
                MR_Box mercury__digraph__V_14_15;
#line 4003 "digraph.c"
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));

#line 4006 "digraph.c"
                {
#line 4008 "digraph.c"
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__V_10_10)), &mercury__digraph__V_14_15);
                }
#line 413 "sparse_bitset.opt"
                if (mercury__digraph__succeeded)
#line 597 "sparse_bitset.opt"
                  {
#line 597 "sparse_bitset.opt"
                    MR_Word base;
#line 597 "sparse_bitset.opt"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 597 "sparse_bitset.opt"
                    *mercury__digraph__V_20_14 = base;
#line 597 "sparse_bitset.opt"
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__digraph__V_14_15;
#line 597 "sparse_bitset.opt"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__digraph__V_19_13));
#line 597 "sparse_bitset.opt"
                  }
#line 413 "sparse_bitset.opt"
                else
#line 414 "sparse_bitset.opt"
                  {
#line 417 "sparse_bitset.opt"
                    {
#line 417 "sparse_bitset.opt"
                      mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold_bits\'/7", (MR_String) "\140enum.from_int/1\' failed");
#line 417 "sparse_bitset.opt"
                      return;
                    }
#line 414 "sparse_bitset.opt"
                  }
#line 413 "sparse_bitset.opt"
              }
#line 420 "sparse_bitset.opt"
            else
#line 421 "sparse_bitset.opt"
              {
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_15_19 = (mercury__digraph__V_12_12 >> (MR_Integer) 1);
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_16_21;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_17_22;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_18_23;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_26_24;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_4_79 = ((MR_Integer) -1 << mercury__digraph__V_15_19);

#line 540 "sparse_bitset.opt"
                mercury__digraph__V_16_21 = ~(mercury__digraph__V_4_79);
#line 424 "sparse_bitset.opt"
                mercury__digraph__V_17_22 = (mercury__digraph__V_16_21 & mercury__digraph__V_11_11);
#line 426 "sparse_bitset.opt"
                mercury__digraph__V_26_24 = (mercury__digraph__V_11_11 >> mercury__digraph__V_15_19);
#line 425 "sparse_bitset.opt"
                mercury__digraph__V_18_23 = (mercury__digraph__V_16_21 & mercury__digraph__V_26_24);
#line 432 "sparse_bitset.opt"
#line 432 "sparse_bitset.opt"
                switch (mercury__digraph__V_8_8) {
#line 432 "sparse_bitset.opt"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 432 "sparse_bitset.opt"
                  case (MR_Integer) 1:
#line 433 "sparse_bitset.opt"
                    {
#line 433 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__V_27_27 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
#line 433 "sparse_bitset.opt"
                      MR_Word mercury__digraph__V_28_28;

#line 435 "sparse_bitset.opt"
                      {
#line 435 "sparse_bitset.opt"
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_27_27, mercury__digraph__V_18_23, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_28_28);
                      }
#line 436 "sparse_bitset.opt"
                      /* direct tailcall eliminated */
#line 436 "sparse_bitset.opt"
                      {
#line 436 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_11__tmp_copy_11 = mercury__digraph__V_17_22;
#line 436 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_12__tmp_copy_12 = mercury__digraph__V_15_19;
#line 436 "sparse_bitset.opt"
                        MR_Word mercury__digraph__V_19__tmp_copy_13 = mercury__digraph__V_28_28;

#line 436 "sparse_bitset.opt"
                        mercury__digraph__V_19_13 = mercury__digraph__V_19__tmp_copy_13;
#line 436 "sparse_bitset.opt"
                        mercury__digraph__V_12_12 = mercury__digraph__V_12__tmp_copy_12;
#line 436 "sparse_bitset.opt"
                        mercury__digraph__V_11_11 = mercury__digraph__V_11__tmp_copy_11;
#line 436 "sparse_bitset.opt"
                      }
#line 436 "sparse_bitset.opt"
                      continue;
#line 433 "sparse_bitset.opt"
                    }
#line 432 "sparse_bitset.opt"
                    break;
#line 432 "sparse_bitset.opt"
                  case (MR_Integer) 0:
#line 428 "sparse_bitset.opt"
                    {
#line 428 "sparse_bitset.opt"
                      MR_Word mercury__digraph__V_30_25;
#line 428 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__V_31_26;

#line 429 "sparse_bitset.opt"
                      {
#line 429 "sparse_bitset.opt"
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_10_10, mercury__digraph__V_17_22, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_30_25);
                      }
#line 430 "sparse_bitset.opt"
                      mercury__digraph__V_31_26 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
#line 431 "sparse_bitset.opt"
                      /* direct tailcall eliminated */
#line 431 "sparse_bitset.opt"
                      {
#line 431 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_10__tmp_copy_10 = mercury__digraph__V_31_26;
#line 431 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_11__tmp_copy_11 = mercury__digraph__V_18_23;
#line 431 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_12__tmp_copy_12 = mercury__digraph__V_15_19;
#line 431 "sparse_bitset.opt"
                        MR_Word mercury__digraph__V_19__tmp_copy_13 = mercury__digraph__V_30_25;

#line 431 "sparse_bitset.opt"
                        mercury__digraph__V_19_13 = mercury__digraph__V_19__tmp_copy_13;
#line 431 "sparse_bitset.opt"
                        mercury__digraph__V_12_12 = mercury__digraph__V_12__tmp_copy_12;
#line 431 "sparse_bitset.opt"
                        mercury__digraph__V_11_11 = mercury__digraph__V_11__tmp_copy_11;
#line 431 "sparse_bitset.opt"
                        mercury__digraph__V_10_10 = mercury__digraph__V_10__tmp_copy_10;
#line 431 "sparse_bitset.opt"
                      }
#line 431 "sparse_bitset.opt"
                      continue;
#line 428 "sparse_bitset.opt"
                    }
#line 432 "sparse_bitset.opt"
                    break;
#line 432 "sparse_bitset.opt"
                }
#line 421 "sparse_bitset.opt"
              }
#line 420 "sparse_bitset.opt"
          }
#line 405 "sparse_bitset.opt"
      }
#line 405 "sparse_bitset.opt"
      break;
#line 405 "sparse_bitset.opt"
    }
#line 103 "sparse_bitset.opt"
}

#line 103 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_38_38,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_39_39,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_8_8,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_10_10,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_11_11,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__digraph__V_12_12,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_19_13,
#line 103 "sparse_bitset.opt"
  MR_Word * mercury__digraph__V_20_14)
#line 103 "sparse_bitset.opt"
{
#line 405 "sparse_bitset.opt"
  while (MR_TRUE)
#line 405 "sparse_bitset.opt"
    {
#line 405 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 405 "sparse_bitset.opt"
      {
#line 405 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded = (mercury__digraph__V_11_11 == (MR_Integer) 0);

#line 405 "sparse_bitset.opt"
        if (mercury__digraph__succeeded)
#line 404 "sparse_bitset.opt"
          *mercury__digraph__V_20_14 = mercury__digraph__V_19_13;
#line 405 "sparse_bitset.opt"
        else
#line 420 "sparse_bitset.opt"
          {
#line 407 "sparse_bitset.opt"
            mercury__digraph__succeeded = (mercury__digraph__V_12_12 == (MR_Integer) 1);
#line 420 "sparse_bitset.opt"
            if (mercury__digraph__succeeded)
#line 413 "sparse_bitset.opt"
              {
#line 413 "sparse_bitset.opt"
                MR_Word mercury__digraph__V_14_15;
#line 4221 "digraph.c"
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 4223 "digraph.c"
                MR_Box mercury__digraph__conv1_V_14_15;

#line 4226 "digraph.c"
                {
#line 4228 "digraph.c"
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__V_10_10)), &mercury__digraph__conv1_V_14_15);
                }
#line 4231 "digraph.c"
                if (mercury__digraph__succeeded)
#line 4233 "digraph.c"
                  {
#line 4235 "digraph.c"
                    mercury__digraph__V_14_15 = ((MR_Word) mercury__digraph__conv1_V_14_15);
#line 4237 "digraph.c"
                    mercury__digraph__succeeded = MR_TRUE;
#line 4239 "digraph.c"
                  }
#line 413 "sparse_bitset.opt"
                if (mercury__digraph__succeeded)
#line 412 "sparse_bitset.opt"
                  {
#line 412 "sparse_bitset.opt"
                    mercury__digraph__add_edge_4_p_0(mercury__digraph__V_38_38, mercury__digraph__V_39_39, mercury__digraph__V_14_15, mercury__digraph__V_19_13, mercury__digraph__V_20_14);
#line 412 "sparse_bitset.opt"
                    return;
                  }
#line 413 "sparse_bitset.opt"
                else
#line 414 "sparse_bitset.opt"
                  {
#line 417 "sparse_bitset.opt"
                    {
#line 417 "sparse_bitset.opt"
                      mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold_bits\'/7", (MR_String) "\140enum.from_int/1\' failed");
#line 417 "sparse_bitset.opt"
                      return;
                    }
#line 414 "sparse_bitset.opt"
                  }
#line 413 "sparse_bitset.opt"
              }
#line 420 "sparse_bitset.opt"
            else
#line 421 "sparse_bitset.opt"
              {
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_15_19 = (mercury__digraph__V_12_12 >> (MR_Integer) 1);
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_16_21;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_17_22;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_18_23;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_26_24;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_4_42 = ((MR_Integer) -1 << mercury__digraph__V_15_19);

#line 540 "sparse_bitset.opt"
                mercury__digraph__V_16_21 = ~(mercury__digraph__V_4_42);
#line 424 "sparse_bitset.opt"
                mercury__digraph__V_17_22 = (mercury__digraph__V_16_21 & mercury__digraph__V_11_11);
#line 426 "sparse_bitset.opt"
                mercury__digraph__V_26_24 = (mercury__digraph__V_11_11 >> mercury__digraph__V_15_19);
#line 425 "sparse_bitset.opt"
                mercury__digraph__V_18_23 = (mercury__digraph__V_16_21 & mercury__digraph__V_26_24);
#line 432 "sparse_bitset.opt"
#line 432 "sparse_bitset.opt"
                switch (mercury__digraph__V_8_8) {
#line 432 "sparse_bitset.opt"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 432 "sparse_bitset.opt"
                  case (MR_Integer) 1:
#line 433 "sparse_bitset.opt"
                    {
#line 433 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__V_27_27 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
#line 433 "sparse_bitset.opt"
                      MR_Word mercury__digraph__V_28_28;

#line 435 "sparse_bitset.opt"
                      {
#line 435 "sparse_bitset.opt"
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_38_38, mercury__digraph__V_39_39, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_27_27, mercury__digraph__V_18_23, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_28_28);
                      }
#line 436 "sparse_bitset.opt"
                      /* direct tailcall eliminated */
#line 436 "sparse_bitset.opt"
                      {
#line 436 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_11__tmp_copy_11 = mercury__digraph__V_17_22;
#line 436 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_12__tmp_copy_12 = mercury__digraph__V_15_19;
#line 436 "sparse_bitset.opt"
                        MR_Word mercury__digraph__V_19__tmp_copy_13 = mercury__digraph__V_28_28;

#line 436 "sparse_bitset.opt"
                        mercury__digraph__V_19_13 = mercury__digraph__V_19__tmp_copy_13;
#line 436 "sparse_bitset.opt"
                        mercury__digraph__V_12_12 = mercury__digraph__V_12__tmp_copy_12;
#line 436 "sparse_bitset.opt"
                        mercury__digraph__V_11_11 = mercury__digraph__V_11__tmp_copy_11;
#line 436 "sparse_bitset.opt"
                      }
#line 436 "sparse_bitset.opt"
                      continue;
#line 433 "sparse_bitset.opt"
                    }
#line 432 "sparse_bitset.opt"
                    break;
#line 432 "sparse_bitset.opt"
                  case (MR_Integer) 0:
#line 428 "sparse_bitset.opt"
                    {
#line 428 "sparse_bitset.opt"
                      MR_Word mercury__digraph__V_30_25;
#line 428 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__V_31_26;

#line 429 "sparse_bitset.opt"
                      {
#line 429 "sparse_bitset.opt"
                        mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_38_38, mercury__digraph__V_39_39, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__V_8_8, mercury__digraph__V_10_10, mercury__digraph__V_17_22, mercury__digraph__V_15_19, mercury__digraph__V_19_13, &mercury__digraph__V_30_25);
                      }
#line 430 "sparse_bitset.opt"
                      mercury__digraph__V_31_26 = (mercury__digraph__V_10_10 + mercury__digraph__V_15_19);
#line 431 "sparse_bitset.opt"
                      /* direct tailcall eliminated */
#line 431 "sparse_bitset.opt"
                      {
#line 431 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_10__tmp_copy_10 = mercury__digraph__V_31_26;
#line 431 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_11__tmp_copy_11 = mercury__digraph__V_18_23;
#line 431 "sparse_bitset.opt"
                        MR_Integer mercury__digraph__V_12__tmp_copy_12 = mercury__digraph__V_15_19;
#line 431 "sparse_bitset.opt"
                        MR_Word mercury__digraph__V_19__tmp_copy_13 = mercury__digraph__V_30_25;

#line 431 "sparse_bitset.opt"
                        mercury__digraph__V_19_13 = mercury__digraph__V_19__tmp_copy_13;
#line 431 "sparse_bitset.opt"
                        mercury__digraph__V_12_12 = mercury__digraph__V_12__tmp_copy_12;
#line 431 "sparse_bitset.opt"
                        mercury__digraph__V_11_11 = mercury__digraph__V_11__tmp_copy_11;
#line 431 "sparse_bitset.opt"
                        mercury__digraph__V_10_10 = mercury__digraph__V_10__tmp_copy_10;
#line 431 "sparse_bitset.opt"
                      }
#line 431 "sparse_bitset.opt"
                      continue;
#line 428 "sparse_bitset.opt"
                    }
#line 432 "sparse_bitset.opt"
                    break;
#line 432 "sparse_bitset.opt"
                }
#line 421 "sparse_bitset.opt"
              }
#line 420 "sparse_bitset.opt"
          }
#line 405 "sparse_bitset.opt"
      }
#line 405 "sparse_bitset.opt"
      break;
#line 405 "sparse_bitset.opt"
    }
#line 103 "sparse_bitset.opt"
}

#line 51 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_57_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_29_29,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_30_30,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 51 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4)
#line 51 "sparse_bitset.opt"
{
#line 310 "sparse_bitset.opt"
  while (MR_TRUE)
#line 310 "sparse_bitset.opt"
    {
#line 310 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 310 "sparse_bitset.opt"
      {
#line 310 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded;

#line 310 "sparse_bitset.opt"
        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 310 "sparse_bitset.opt"
          *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 310 "sparse_bitset.opt"
        else
#line 312 "sparse_bitset.opt"
          {
#line 312 "sparse_bitset.opt"
            MR_Word mercury__digraph__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 312 "sparse_bitset.opt"
            MR_Word mercury__digraph__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 312 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_22_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 0)));
#line 312 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 1)));
#line 312 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_18_18;
#line 312 "sparse_bitset.opt"
            MR_Word mercury__digraph__V_19_19;

#line 64 "int.opt"
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_57_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{
#line 64 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 4454 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_18_18  = Bits;
#line 64 "int.opt"
}
#line 317 "sparse_bitset.opt"
            {
#line 317 "sparse_bitset.opt"
              mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_29_29, mercury__digraph__V_30_30, mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 0, mercury__digraph__V_22_16, mercury__digraph__V_17_17, mercury__digraph__V_18_18, mercury__digraph__HeadVar__3_3, &mercury__digraph__V_19_19);
            }
#line 318 "sparse_bitset.opt"
            /* direct tailcall eliminated */
#line 318 "sparse_bitset.opt"
            {
#line 318 "sparse_bitset.opt"
              MR_Word mercury__digraph__HeadVar__2__tmp_copy_2 = mercury__digraph__V_11_10;
#line 318 "sparse_bitset.opt"
              MR_Word mercury__digraph__HeadVar__3__tmp_copy_3 = mercury__digraph__V_19_19;

#line 318 "sparse_bitset.opt"
              mercury__digraph__HeadVar__3_3 = mercury__digraph__HeadVar__3__tmp_copy_3;
#line 318 "sparse_bitset.opt"
              mercury__digraph__HeadVar__2_2 = mercury__digraph__HeadVar__2__tmp_copy_2;
#line 318 "sparse_bitset.opt"
            }
#line 318 "sparse_bitset.opt"
            continue;
#line 312 "sparse_bitset.opt"
          }
#line 310 "sparse_bitset.opt"
      }
#line 310 "sparse_bitset.opt"
      break;
#line 310 "sparse_bitset.opt"
    }
#line 51 "sparse_bitset.opt"
}

#line 77 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_57_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
#line 77 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 77 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 77 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 77 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4)
#line 77 "sparse_bitset.opt"
{
#line 331 "sparse_bitset.opt"
  {
#line 331 "sparse_bitset.opt"
    MR_bool mercury__digraph__succeeded;

#line 331 "sparse_bitset.opt"
    if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 331 "sparse_bitset.opt"
      *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 331 "sparse_bitset.opt"
    else
#line 333 "sparse_bitset.opt"
      {
#line 333 "sparse_bitset.opt"
        MR_Word mercury__digraph__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 333 "sparse_bitset.opt"
        MR_Word mercury__digraph__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 333 "sparse_bitset.opt"
        MR_Word mercury__digraph__V_15_13;
#line 333 "sparse_bitset.opt"
        MR_Integer mercury__digraph__V_22_17;
#line 333 "sparse_bitset.opt"
        MR_Integer mercury__digraph__V_18_18;
#line 333 "sparse_bitset.opt"
        MR_Integer mercury__digraph__V_19_19;

#line 334 "sparse_bitset.opt"
        {
#line 334 "sparse_bitset.opt"
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_57_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeClassInfo_for_enum_20, mercury__digraph__V_11_10, mercury__digraph__HeadVar__3_3, &mercury__digraph__V_15_13);
        }
#line 336 "sparse_bitset.opt"
        mercury__digraph__V_22_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 0)));
#line 336 "sparse_bitset.opt"
        mercury__digraph__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 1)));
#line 64 "int.opt"
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_57_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{
#line 64 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 4553 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_19_19  = Bits;
#line 64 "int.opt"
}
#line 339 "sparse_bitset.opt"
        {
#line 339 "sparse_bitset.opt"
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 1, mercury__digraph__V_22_17, mercury__digraph__V_18_18, mercury__digraph__V_19_19, mercury__digraph__V_15_13, mercury__digraph__HeadVar__4_4);
#line 339 "sparse_bitset.opt"
          return;
        }
#line 333 "sparse_bitset.opt"
      }
#line 331 "sparse_bitset.opt"
  }
#line 77 "sparse_bitset.opt"
}

#line 51 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_29_29,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_30_30,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 51 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4)
#line 51 "sparse_bitset.opt"
{
#line 310 "sparse_bitset.opt"
  while (MR_TRUE)
#line 310 "sparse_bitset.opt"
    {
#line 310 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 310 "sparse_bitset.opt"
      {
#line 310 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded;

#line 310 "sparse_bitset.opt"
        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 310 "sparse_bitset.opt"
          *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 310 "sparse_bitset.opt"
        else
#line 312 "sparse_bitset.opt"
          {
#line 312 "sparse_bitset.opt"
            MR_Word mercury__digraph__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 312 "sparse_bitset.opt"
            MR_Word mercury__digraph__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 312 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_22_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 0)));
#line 312 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 1)));
#line 312 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_18_18;
#line 312 "sparse_bitset.opt"
            MR_Word mercury__digraph__V_19_19;

#line 64 "int.opt"
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{
#line 64 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 4634 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_18_18  = Bits;
#line 64 "int.opt"
}
#line 317 "sparse_bitset.opt"
            {
#line 317 "sparse_bitset.opt"
              mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_29_29, mercury__digraph__V_30_30, mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 0, mercury__digraph__V_22_16, mercury__digraph__V_17_17, mercury__digraph__V_18_18, mercury__digraph__HeadVar__3_3, &mercury__digraph__V_19_19);
            }
#line 318 "sparse_bitset.opt"
            /* direct tailcall eliminated */
#line 318 "sparse_bitset.opt"
            {
#line 318 "sparse_bitset.opt"
              MR_Word mercury__digraph__HeadVar__2__tmp_copy_2 = mercury__digraph__V_11_10;
#line 318 "sparse_bitset.opt"
              MR_Word mercury__digraph__HeadVar__3__tmp_copy_3 = mercury__digraph__V_19_19;

#line 318 "sparse_bitset.opt"
              mercury__digraph__HeadVar__3_3 = mercury__digraph__HeadVar__3__tmp_copy_3;
#line 318 "sparse_bitset.opt"
              mercury__digraph__HeadVar__2_2 = mercury__digraph__HeadVar__2__tmp_copy_2;
#line 318 "sparse_bitset.opt"
            }
#line 318 "sparse_bitset.opt"
            continue;
#line 312 "sparse_bitset.opt"
          }
#line 310 "sparse_bitset.opt"
      }
#line 310 "sparse_bitset.opt"
      break;
#line 310 "sparse_bitset.opt"
    }
#line 51 "sparse_bitset.opt"
}

#line 51 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_31_31,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_32_32,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 51 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4)
#line 51 "sparse_bitset.opt"
{
#line 310 "sparse_bitset.opt"
  while (MR_TRUE)
#line 310 "sparse_bitset.opt"
    {
#line 310 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 310 "sparse_bitset.opt"
      {
#line 310 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded;

#line 310 "sparse_bitset.opt"
        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 310 "sparse_bitset.opt"
          *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 310 "sparse_bitset.opt"
        else
#line 312 "sparse_bitset.opt"
          {
#line 312 "sparse_bitset.opt"
            MR_Word mercury__digraph__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 312 "sparse_bitset.opt"
            MR_Word mercury__digraph__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 312 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_22_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 0)));
#line 312 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 1)));
#line 312 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_18_18;
#line 312 "sparse_bitset.opt"
            MR_Word mercury__digraph__V_19_19;

#line 64 "int.opt"
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{
#line 64 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 4734 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_18_18  = Bits;
#line 64 "int.opt"
}
#line 317 "sparse_bitset.opt"
            {
#line 317 "sparse_bitset.opt"
              mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_31_31, mercury__digraph__V_32_32, mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 0, mercury__digraph__V_22_16, mercury__digraph__V_17_17, mercury__digraph__V_18_18, mercury__digraph__HeadVar__3_3, &mercury__digraph__V_19_19);
            }
#line 318 "sparse_bitset.opt"
            /* direct tailcall eliminated */
#line 318 "sparse_bitset.opt"
            {
#line 318 "sparse_bitset.opt"
              MR_Word mercury__digraph__HeadVar__2__tmp_copy_2 = mercury__digraph__V_11_10;
#line 318 "sparse_bitset.opt"
              MR_Word mercury__digraph__HeadVar__3__tmp_copy_3 = mercury__digraph__V_19_19;

#line 318 "sparse_bitset.opt"
              mercury__digraph__HeadVar__3_3 = mercury__digraph__HeadVar__3__tmp_copy_3;
#line 318 "sparse_bitset.opt"
              mercury__digraph__HeadVar__2_2 = mercury__digraph__HeadVar__2__tmp_copy_2;
#line 318 "sparse_bitset.opt"
            }
#line 318 "sparse_bitset.opt"
            continue;
#line 312 "sparse_bitset.opt"
          }
#line 310 "sparse_bitset.opt"
      }
#line 310 "sparse_bitset.opt"
      break;
#line 310 "sparse_bitset.opt"
    }
#line 51 "sparse_bitset.opt"
}

#line 54 "sparse_bitset.opt"
static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(
#line 54 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_31_31,
#line 54 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_32_32,
#line 54 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_33_33,
#line 54 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 54 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 54 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 54 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4)
#line 54 "sparse_bitset.opt"
{
#line 310 "sparse_bitset.opt"
  while (MR_TRUE)
#line 310 "sparse_bitset.opt"
    {
#line 310 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 310 "sparse_bitset.opt"
      {
#line 310 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded;

#line 310 "sparse_bitset.opt"
        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 310 "sparse_bitset.opt"
          {
#line 310 "sparse_bitset.opt"
            *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 310 "sparse_bitset.opt"
            mercury__digraph__succeeded = MR_TRUE;
#line 310 "sparse_bitset.opt"
          }
#line 310 "sparse_bitset.opt"
        else
#line 312 "sparse_bitset.opt"
          {
#line 312 "sparse_bitset.opt"
            MR_Word mercury__digraph__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 312 "sparse_bitset.opt"
            MR_Word mercury__digraph__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 312 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_22_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 0)));
#line 312 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 1)));
#line 312 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_18_18;
#line 312 "sparse_bitset.opt"
            MR_Word mercury__digraph__V_19_19;

#line 64 "int.opt"
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{
#line 64 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 4842 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_18_18  = Bits;
#line 64 "int.opt"
}
#line 317 "sparse_bitset.opt"
            {
#line 317 "sparse_bitset.opt"
              mercury__digraph__succeeded = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_50_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_31_31, mercury__digraph__V_32_32, mercury__digraph__V_33_33, mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 0, mercury__digraph__V_22_16, mercury__digraph__V_17_17, mercury__digraph__V_18_18, mercury__digraph__HeadVar__3_3, &mercury__digraph__V_19_19);
            }
#line 312 "sparse_bitset.opt"
            if (mercury__digraph__succeeded)
#line 318 "sparse_bitset.opt"
              {
#line 318 "sparse_bitset.opt"
                /* direct tailcall eliminated */
#line 318 "sparse_bitset.opt"
                {
#line 318 "sparse_bitset.opt"
                  MR_Word mercury__digraph__HeadVar__2__tmp_copy_2 = mercury__digraph__V_11_10;
#line 318 "sparse_bitset.opt"
                  MR_Word mercury__digraph__HeadVar__3__tmp_copy_3 = mercury__digraph__V_19_19;

#line 318 "sparse_bitset.opt"
                  mercury__digraph__HeadVar__3_3 = mercury__digraph__HeadVar__3__tmp_copy_3;
#line 318 "sparse_bitset.opt"
                  mercury__digraph__HeadVar__2_2 = mercury__digraph__HeadVar__2__tmp_copy_2;
#line 318 "sparse_bitset.opt"
                }
#line 318 "sparse_bitset.opt"
                continue;
#line 318 "sparse_bitset.opt"
              }
#line 312 "sparse_bitset.opt"
          }
#line 310 "sparse_bitset.opt"
        return mercury__digraph__succeeded;
#line 310 "sparse_bitset.opt"
      }
#line 310 "sparse_bitset.opt"
      break;
#line 310 "sparse_bitset.opt"
    }
#line 54 "sparse_bitset.opt"
}

#line 51 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_31_31,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_32_32,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 51 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 51 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4)
#line 51 "sparse_bitset.opt"
{
#line 310 "sparse_bitset.opt"
  while (MR_TRUE)
#line 310 "sparse_bitset.opt"
    {
#line 310 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 310 "sparse_bitset.opt"
      {
#line 310 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded;

#line 310 "sparse_bitset.opt"
        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 310 "sparse_bitset.opt"
          *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 310 "sparse_bitset.opt"
        else
#line 312 "sparse_bitset.opt"
          {
#line 312 "sparse_bitset.opt"
            MR_Word mercury__digraph__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 312 "sparse_bitset.opt"
            MR_Word mercury__digraph__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 312 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_22_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 0)));
#line 312 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 1)));
#line 312 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_18_18;
#line 312 "sparse_bitset.opt"
            MR_Word mercury__digraph__V_19_19;

#line 64 "int.opt"
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{
#line 64 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 4950 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_18_18  = Bits;
#line 64 "int.opt"
}
#line 317 "sparse_bitset.opt"
            {
#line 317 "sparse_bitset.opt"
              mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_31_31, mercury__digraph__V_32_32, mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 0, mercury__digraph__V_22_16, mercury__digraph__V_17_17, mercury__digraph__V_18_18, mercury__digraph__HeadVar__3_3, &mercury__digraph__V_19_19);
            }
#line 318 "sparse_bitset.opt"
            /* direct tailcall eliminated */
#line 318 "sparse_bitset.opt"
            {
#line 318 "sparse_bitset.opt"
              MR_Word mercury__digraph__HeadVar__2__tmp_copy_2 = mercury__digraph__V_11_10;
#line 318 "sparse_bitset.opt"
              MR_Word mercury__digraph__HeadVar__3__tmp_copy_3 = mercury__digraph__V_19_19;

#line 318 "sparse_bitset.opt"
              mercury__digraph__HeadVar__3_3 = mercury__digraph__HeadVar__3__tmp_copy_3;
#line 318 "sparse_bitset.opt"
              mercury__digraph__HeadVar__2_2 = mercury__digraph__HeadVar__2__tmp_copy_2;
#line 318 "sparse_bitset.opt"
            }
#line 318 "sparse_bitset.opt"
            continue;
#line 312 "sparse_bitset.opt"
          }
#line 310 "sparse_bitset.opt"
      }
#line 310 "sparse_bitset.opt"
      break;
#line 310 "sparse_bitset.opt"
    }
#line 51 "sparse_bitset.opt"
}

#line 37 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_56_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(
#line 37 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_43_43,
#line 37 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_44_44,
#line 37 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_27,
#line 37 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 37 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 37 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4,
#line 37 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__5_5,
#line 37 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__6_6)
#line 37 "sparse_bitset.opt"
{
#line 299 "sparse_bitset.opt"
  while (MR_TRUE)
#line 299 "sparse_bitset.opt"
    {
#line 299 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 299 "sparse_bitset.opt"
      {
#line 299 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded;

#line 299 "sparse_bitset.opt"
        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 299 "sparse_bitset.opt"
          {
#line 299 "sparse_bitset.opt"
            *mercury__digraph__HeadVar__6_6 = mercury__digraph__HeadVar__5_5;
#line 299 "sparse_bitset.opt"
            *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 299 "sparse_bitset.opt"
          }
#line 299 "sparse_bitset.opt"
        else
#line 302 "sparse_bitset.opt"
          {
#line 302 "sparse_bitset.opt"
            MR_Word mercury__digraph__V_15_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 302 "sparse_bitset.opt"
            MR_Word mercury__digraph__V_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 302 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_32_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_15_13, (MR_Integer) 0)));
#line 302 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_25_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_15_13, (MR_Integer) 1)));
#line 302 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_26_24;
#line 302 "sparse_bitset.opt"
            MR_Word mercury__digraph__V_27_25;
#line 302 "sparse_bitset.opt"
            MR_Word mercury__digraph__V_28_26;

#line 64 "int.opt"
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_56_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0

	MR_Integer Bits;

		{
#line 64 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 5062 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_26_24  = Bits;
#line 64 "int.opt"
}
#line 307 "sparse_bitset.opt"
            {
#line 307 "sparse_bitset.opt"
              mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_49_48_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_52_93_95_48_9_p_in__sparse_bitset_0(mercury__digraph__V_43_43, mercury__digraph__V_44_44, mercury__digraph__TypeClassInfo_for_enum_27, (MR_Integer) 0, mercury__digraph__V_32_22, mercury__digraph__V_25_23, mercury__digraph__V_26_24, mercury__digraph__HeadVar__3_3, &mercury__digraph__V_27_25, mercury__digraph__HeadVar__5_5, &mercury__digraph__V_28_26);
            }
#line 308 "sparse_bitset.opt"
            /* direct tailcall eliminated */
#line 308 "sparse_bitset.opt"
            {
#line 308 "sparse_bitset.opt"
              MR_Word mercury__digraph__HeadVar__2__tmp_copy_2 = mercury__digraph__V_16_14;
#line 308 "sparse_bitset.opt"
              MR_Word mercury__digraph__HeadVar__3__tmp_copy_3 = mercury__digraph__V_27_25;
#line 308 "sparse_bitset.opt"
              MR_Word mercury__digraph__HeadVar__5__tmp_copy_5 = mercury__digraph__V_28_26;

#line 308 "sparse_bitset.opt"
              mercury__digraph__HeadVar__5_5 = mercury__digraph__HeadVar__5__tmp_copy_5;
#line 308 "sparse_bitset.opt"
              mercury__digraph__HeadVar__3_3 = mercury__digraph__HeadVar__3__tmp_copy_3;
#line 308 "sparse_bitset.opt"
              mercury__digraph__HeadVar__2_2 = mercury__digraph__HeadVar__2__tmp_copy_2;
#line 308 "sparse_bitset.opt"
            }
#line 308 "sparse_bitset.opt"
            continue;
#line 302 "sparse_bitset.opt"
          }
#line 299 "sparse_bitset.opt"
      }
#line 299 "sparse_bitset.opt"
      break;
#line 299 "sparse_bitset.opt"
    }
#line 37 "sparse_bitset.opt"
}

#line 77 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_4_p_in__sparse_bitset_0(
#line 77 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_37_37,
#line 77 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 77 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 77 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 77 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4)
#line 77 "sparse_bitset.opt"
{
#line 331 "sparse_bitset.opt"
  {
#line 331 "sparse_bitset.opt"
    MR_bool mercury__digraph__succeeded;

#line 331 "sparse_bitset.opt"
    if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 331 "sparse_bitset.opt"
      *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 331 "sparse_bitset.opt"
    else
#line 333 "sparse_bitset.opt"
      {
#line 333 "sparse_bitset.opt"
        MR_Word mercury__digraph__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 333 "sparse_bitset.opt"
        MR_Word mercury__digraph__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 333 "sparse_bitset.opt"
        MR_Word mercury__digraph__V_15_13;
#line 333 "sparse_bitset.opt"
        MR_Integer mercury__digraph__V_22_17;
#line 333 "sparse_bitset.opt"
        MR_Integer mercury__digraph__V_18_18;
#line 333 "sparse_bitset.opt"
        MR_Integer mercury__digraph__V_19_19;

#line 334 "sparse_bitset.opt"
        {
#line 334 "sparse_bitset.opt"
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__V_37_37, mercury__digraph__TypeClassInfo_for_enum_20, mercury__digraph__V_11_10, mercury__digraph__HeadVar__3_3, &mercury__digraph__V_15_13);
        }
#line 336 "sparse_bitset.opt"
        mercury__digraph__V_22_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 0)));
#line 336 "sparse_bitset.opt"
        mercury__digraph__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 1)));
#line 64 "int.opt"
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{
#line 64 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 5167 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_19_19  = Bits;
#line 64 "int.opt"
}
#line 339 "sparse_bitset.opt"
        {
#line 339 "sparse_bitset.opt"
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_52_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_37_37, mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 1, mercury__digraph__V_22_17, mercury__digraph__V_18_18, mercury__digraph__V_19_19, mercury__digraph__V_15_13, mercury__digraph__HeadVar__4_4);
#line 339 "sparse_bitset.opt"
          return;
        }
#line 333 "sparse_bitset.opt"
      }
#line 331 "sparse_bitset.opt"
  }
#line 77 "sparse_bitset.opt"
}

#line 77 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_4_p_in__sparse_bitset_0(
#line 77 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_32_32,
#line 77 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_33_33,
#line 77 "sparse_bitset.opt"
  MR_Box mercury__digraph__V_34_34,
#line 77 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 77 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 77 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 77 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4)
#line 77 "sparse_bitset.opt"
{
#line 331 "sparse_bitset.opt"
  {
#line 331 "sparse_bitset.opt"
    MR_bool mercury__digraph__succeeded;

#line 331 "sparse_bitset.opt"
    if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 331 "sparse_bitset.opt"
      *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 331 "sparse_bitset.opt"
    else
#line 333 "sparse_bitset.opt"
      {
#line 333 "sparse_bitset.opt"
        MR_Word mercury__digraph__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 333 "sparse_bitset.opt"
        MR_Word mercury__digraph__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 333 "sparse_bitset.opt"
        MR_Word mercury__digraph__V_15_13;
#line 333 "sparse_bitset.opt"
        MR_Integer mercury__digraph__V_22_17;
#line 333 "sparse_bitset.opt"
        MR_Integer mercury__digraph__V_18_18;
#line 333 "sparse_bitset.opt"
        MR_Integer mercury__digraph__V_19_19;

#line 334 "sparse_bitset.opt"
        {
#line 334 "sparse_bitset.opt"
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__V_32_32, mercury__digraph__V_33_33, mercury__digraph__V_34_34, mercury__digraph__TypeClassInfo_for_enum_20, mercury__digraph__V_11_10, mercury__digraph__HeadVar__3_3, &mercury__digraph__V_15_13);
        }
#line 336 "sparse_bitset.opt"
        mercury__digraph__V_22_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 0)));
#line 336 "sparse_bitset.opt"
        mercury__digraph__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 1)));
#line 64 "int.opt"
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{
#line 64 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 5253 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_19_19  = Bits;
#line 64 "int.opt"
}
#line 339 "sparse_bitset.opt"
        {
#line 339 "sparse_bitset.opt"
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_51_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_32_32, mercury__digraph__V_33_33, mercury__digraph__V_34_34, mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 1, mercury__digraph__V_22_17, mercury__digraph__V_18_18, mercury__digraph__V_19_19, mercury__digraph__V_15_13, mercury__digraph__HeadVar__4_4);
#line 339 "sparse_bitset.opt"
          return;
        }
#line 333 "sparse_bitset.opt"
      }
#line 331 "sparse_bitset.opt"
  }
#line 77 "sparse_bitset.opt"
}

#line 37 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_56_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(
#line 37 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_42_42,
#line 37 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_43_43,
#line 37 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_27,
#line 37 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 37 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 37 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4,
#line 37 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__5_5,
#line 37 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__6_6)
#line 37 "sparse_bitset.opt"
{
#line 299 "sparse_bitset.opt"
  while (MR_TRUE)
#line 299 "sparse_bitset.opt"
    {
#line 299 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 299 "sparse_bitset.opt"
      {
#line 299 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded;

#line 299 "sparse_bitset.opt"
        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 299 "sparse_bitset.opt"
          {
#line 299 "sparse_bitset.opt"
            *mercury__digraph__HeadVar__6_6 = mercury__digraph__HeadVar__5_5;
#line 299 "sparse_bitset.opt"
            *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 299 "sparse_bitset.opt"
          }
#line 299 "sparse_bitset.opt"
        else
#line 302 "sparse_bitset.opt"
          {
#line 302 "sparse_bitset.opt"
            MR_Word mercury__digraph__V_15_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 302 "sparse_bitset.opt"
            MR_Word mercury__digraph__V_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 302 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_32_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_15_13, (MR_Integer) 0)));
#line 302 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_25_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__V_15_13, (MR_Integer) 1)));
#line 302 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_26_24;
#line 302 "sparse_bitset.opt"
            MR_Word mercury__digraph__V_27_25;
#line 302 "sparse_bitset.opt"
            MR_Word mercury__digraph__V_28_26;

#line 64 "int.opt"
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_56_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0

	MR_Integer Bits;

		{
#line 64 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 5346 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_26_24  = Bits;
#line 64 "int.opt"
}
#line 307 "sparse_bitset.opt"
            {
#line 307 "sparse_bitset.opt"
              mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_49_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_51_93_95_48_9_p_in__sparse_bitset_0(mercury__digraph__V_42_42, mercury__digraph__V_43_43, mercury__digraph__TypeClassInfo_for_enum_27, (MR_Integer) 0, mercury__digraph__V_32_22, mercury__digraph__V_25_23, mercury__digraph__V_26_24, mercury__digraph__HeadVar__3_3, &mercury__digraph__V_27_25, mercury__digraph__HeadVar__5_5, &mercury__digraph__V_28_26);
            }
#line 308 "sparse_bitset.opt"
            /* direct tailcall eliminated */
#line 308 "sparse_bitset.opt"
            {
#line 308 "sparse_bitset.opt"
              MR_Word mercury__digraph__HeadVar__2__tmp_copy_2 = mercury__digraph__V_16_14;
#line 308 "sparse_bitset.opt"
              MR_Word mercury__digraph__HeadVar__3__tmp_copy_3 = mercury__digraph__V_27_25;
#line 308 "sparse_bitset.opt"
              MR_Word mercury__digraph__HeadVar__5__tmp_copy_5 = mercury__digraph__V_28_26;

#line 308 "sparse_bitset.opt"
              mercury__digraph__HeadVar__5_5 = mercury__digraph__HeadVar__5__tmp_copy_5;
#line 308 "sparse_bitset.opt"
              mercury__digraph__HeadVar__3_3 = mercury__digraph__HeadVar__3__tmp_copy_3;
#line 308 "sparse_bitset.opt"
              mercury__digraph__HeadVar__2_2 = mercury__digraph__HeadVar__2__tmp_copy_2;
#line 308 "sparse_bitset.opt"
            }
#line 308 "sparse_bitset.opt"
            continue;
#line 302 "sparse_bitset.opt"
          }
#line 299 "sparse_bitset.opt"
      }
#line 299 "sparse_bitset.opt"
      break;
#line 299 "sparse_bitset.opt"
    }
#line 37 "sparse_bitset.opt"
}

#line 127 "list.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_48_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_93_95_48_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__digraph__V_21_21,
#line 127 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 127 "list.int"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 127 "list.int"
  MR_Word * mercury__digraph__HeadVar__4_4)
#line 127 "list.int"
{
#line 391 "list.opt"
  while (MR_TRUE)
#line 391 "list.opt"
    {
#line 391 "list.opt"
      /* tailcall optimized into a loop */
#line 391 "list.opt"
      {
#line 391 "list.opt"
        MR_bool mercury__digraph__succeeded;

#line 391 "list.opt"
        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "list.opt"
          *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 391 "list.opt"
        else
#line 393 "list.opt"
          {
#line 393 "list.opt"
            MR_Word mercury__digraph__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 393 "list.opt"
            MR_Word mercury__digraph__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 393 "list.opt"
            MR_Word mercury__digraph__V_15_13;
#line 393 "list.opt"
            MR_Box mercury__digraph__VX_24 = (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 0));
#line 393 "list.opt"
            MR_Box mercury__digraph__VY_25 = (MR_hl_field(MR_mktag(0), mercury__digraph__V_10_9, (MR_Integer) 1));
#line 393 "list.opt"
            MR_Word mercury__digraph__X_33;
#line 393 "list.opt"
            MR_Word mercury__digraph__Y_34;
#line 393 "list.opt"
            MR_Word mercury__digraph__STATE_VARIABLE_G_12_35;
#line 393 "list.opt"
            MR_Word mercury__digraph__STATE_VARIABLE_G_13_36;

#line 460 "digraph.m"
            {
#line 460 "digraph.m"
              mercury__digraph__add_vertex_4_p_0(mercury__digraph__V_21_21, mercury__digraph__VX_24, &mercury__digraph__X_33, mercury__digraph__HeadVar__3_3, &mercury__digraph__STATE_VARIABLE_G_12_35);
            }
#line 461 "digraph.m"
            {
#line 461 "digraph.m"
              mercury__digraph__add_vertex_4_p_0(mercury__digraph__V_21_21, mercury__digraph__VY_25, &mercury__digraph__Y_34, mercury__digraph__STATE_VARIABLE_G_12_35, &mercury__digraph__STATE_VARIABLE_G_13_36);
            }
#line 462 "digraph.m"
            {
#line 462 "digraph.m"
              mercury__digraph__add_edge_4_p_0(mercury__digraph__V_21_21, mercury__digraph__X_33, mercury__digraph__Y_34, mercury__digraph__STATE_VARIABLE_G_13_36, &mercury__digraph__V_15_13);
            }
#line 395 "list.opt"
            /* direct tailcall eliminated */
#line 395 "list.opt"
            {
#line 395 "list.opt"
              MR_Word mercury__digraph__HeadVar__2__tmp_copy_2 = mercury__digraph__V_11_10;
#line 395 "list.opt"
              MR_Word mercury__digraph__HeadVar__3__tmp_copy_3 = mercury__digraph__V_15_13;

#line 395 "list.opt"
              mercury__digraph__HeadVar__3_3 = mercury__digraph__HeadVar__3__tmp_copy_3;
#line 395 "list.opt"
              mercury__digraph__HeadVar__2_2 = mercury__digraph__HeadVar__2__tmp_copy_2;
#line 395 "list.opt"
            }
#line 395 "list.opt"
            continue;
#line 393 "list.opt"
          }
#line 391 "list.opt"
      }
#line 391 "list.opt"
      break;
#line 391 "list.opt"
    }
#line 127 "list.int"
}

#line 139 "list.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_55_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_6_p_in__list_0(
#line 139 "list.int"
  MR_Word mercury__digraph__V_34_34,
#line 139 "list.int"
  MR_Word mercury__digraph__V_35_35,
#line 139 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 139 "list.int"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 139 "list.int"
  MR_Word * mercury__digraph__HeadVar__4_4,
#line 139 "list.int"
  MR_Word mercury__digraph__HeadVar__5_5,
#line 139 "list.int"
  MR_Word * mercury__digraph__HeadVar__6_6)
#line 139 "list.int"
{
#line 409 "list.opt"
  while (MR_TRUE)
#line 409 "list.opt"
    {
#line 409 "list.opt"
      /* tailcall optimized into a loop */
#line 409 "list.opt"
      {
#line 409 "list.opt"
        MR_bool mercury__digraph__succeeded;

#line 409 "list.opt"
        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 409 "list.opt"
          {
#line 409 "list.opt"
            *mercury__digraph__HeadVar__6_6 = mercury__digraph__HeadVar__5_5;
#line 409 "list.opt"
            *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 409 "list.opt"
          }
#line 409 "list.opt"
        else
#line 412 "list.opt"
          {
#line 412 "list.opt"
            MR_Word mercury__digraph__V_15_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 412 "list.opt"
            MR_Word mercury__digraph__V_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 412 "list.opt"
            MR_Word mercury__digraph__V_23_19;
#line 412 "list.opt"
            MR_Word mercury__digraph__V_24_20;

#line 413 "list.opt"
            {
#line 413 "list.opt"
              mercury__digraph__dfs_2_6_p_0(mercury__digraph__V_34_34, mercury__digraph__V_35_35, mercury__digraph__V_15_13, mercury__digraph__HeadVar__3_3, &mercury__digraph__V_23_19, mercury__digraph__HeadVar__5_5, &mercury__digraph__V_24_20);
            }
#line 414 "list.opt"
            /* direct tailcall eliminated */
#line 414 "list.opt"
            {
#line 414 "list.opt"
              MR_Word mercury__digraph__HeadVar__2__tmp_copy_2 = mercury__digraph__V_16_14;
#line 414 "list.opt"
              MR_Word mercury__digraph__HeadVar__3__tmp_copy_3 = mercury__digraph__V_23_19;
#line 414 "list.opt"
              MR_Word mercury__digraph__HeadVar__5__tmp_copy_5 = mercury__digraph__V_24_20;

#line 414 "list.opt"
              mercury__digraph__HeadVar__5_5 = mercury__digraph__HeadVar__5__tmp_copy_5;
#line 414 "list.opt"
              mercury__digraph__HeadVar__3_3 = mercury__digraph__HeadVar__3__tmp_copy_3;
#line 414 "list.opt"
              mercury__digraph__HeadVar__2_2 = mercury__digraph__HeadVar__2__tmp_copy_2;
#line 414 "list.opt"
            }
#line 414 "list.opt"
            continue;
#line 412 "list.opt"
          }
#line 409 "list.opt"
      }
#line 409 "list.opt"
      break;
#line 409 "list.opt"
    }
#line 139 "list.int"
}

#line 127 "list.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__digraph__V_29_29,
#line 127 "list.int"
  MR_Word mercury__digraph__V_30_30,
#line 127 "list.int"
  MR_Word mercury__digraph__V_31_31,
#line 127 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 127 "list.int"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 127 "list.int"
  MR_Word * mercury__digraph__HeadVar__4_4)
#line 127 "list.int"
{
#line 391 "list.opt"
  while (MR_TRUE)
#line 391 "list.opt"
    {
#line 391 "list.opt"
      /* tailcall optimized into a loop */
#line 391 "list.opt"
      {
#line 391 "list.opt"
        MR_bool mercury__digraph__succeeded;

#line 391 "list.opt"
        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "list.opt"
          *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 391 "list.opt"
        else
#line 393 "list.opt"
          {
#line 393 "list.opt"
            MR_Word mercury__digraph__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 393 "list.opt"
            MR_Word mercury__digraph__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 393 "list.opt"
            MR_Word mercury__digraph__V_15_13;

#line 394 "list.opt"
            {
#line 394 "list.opt"
              mercury__digraph__add_composition_edges_5_p_0(mercury__digraph__V_29_29, mercury__digraph__V_30_30, mercury__digraph__V_31_31, mercury__digraph__V_10_9, mercury__digraph__HeadVar__3_3, &mercury__digraph__V_15_13);
            }
#line 395 "list.opt"
            /* direct tailcall eliminated */
#line 395 "list.opt"
            {
#line 395 "list.opt"
              MR_Word mercury__digraph__HeadVar__2__tmp_copy_2 = mercury__digraph__V_11_10;
#line 395 "list.opt"
              MR_Word mercury__digraph__HeadVar__3__tmp_copy_3 = mercury__digraph__V_15_13;

#line 395 "list.opt"
              mercury__digraph__HeadVar__3_3 = mercury__digraph__HeadVar__3__tmp_copy_3;
#line 395 "list.opt"
              mercury__digraph__HeadVar__2_2 = mercury__digraph__HeadVar__2__tmp_copy_2;
#line 395 "list.opt"
            }
#line 395 "list.opt"
            continue;
#line 393 "list.opt"
          }
#line 391 "list.opt"
      }
#line 391 "list.opt"
      break;
#line 391 "list.opt"
    }
#line 127 "list.int"
}

#line 139 "list.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_55_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_53_93_95_48_6_p_in__list_0(
#line 139 "list.int"
  MR_Word mercury__digraph__V_43_43,
#line 139 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 139 "list.int"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 139 "list.int"
  MR_Word * mercury__digraph__HeadVar__4_4,
#line 139 "list.int"
  MR_Word mercury__digraph__HeadVar__5_5,
#line 139 "list.int"
  MR_Word * mercury__digraph__HeadVar__6_6)
#line 139 "list.int"
{
#line 409 "list.opt"
  while (MR_TRUE)
#line 409 "list.opt"
    {
#line 409 "list.opt"
      /* tailcall optimized into a loop */
#line 409 "list.opt"
      {
#line 409 "list.opt"
        MR_bool mercury__digraph__succeeded;

#line 409 "list.opt"
        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 409 "list.opt"
          {
#line 409 "list.opt"
            *mercury__digraph__HeadVar__6_6 = mercury__digraph__HeadVar__5_5;
#line 409 "list.opt"
            *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 409 "list.opt"
          }
#line 409 "list.opt"
        else
#line 412 "list.opt"
          {
#line 412 "list.opt"
            MR_Word mercury__digraph__V_15_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 412 "list.opt"
            MR_Word mercury__digraph__V_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 412 "list.opt"
            MR_Word mercury__digraph__V_23_19;
#line 412 "list.opt"
            MR_Word mercury__digraph__V_24_20;

#line 413 "list.opt"
            {
#line 413 "list.opt"
              mercury__digraph__find_necessary_keys_5_p_0(mercury__digraph__V_43_43, mercury__digraph__V_15_13, mercury__digraph__HeadVar__3_3, &mercury__digraph__V_23_19, mercury__digraph__HeadVar__5_5, &mercury__digraph__V_24_20);
            }
#line 414 "list.opt"
            /* direct tailcall eliminated */
#line 414 "list.opt"
            {
#line 414 "list.opt"
              MR_Word mercury__digraph__HeadVar__2__tmp_copy_2 = mercury__digraph__V_16_14;
#line 414 "list.opt"
              MR_Word mercury__digraph__HeadVar__3__tmp_copy_3 = mercury__digraph__V_23_19;
#line 414 "list.opt"
              MR_Word mercury__digraph__HeadVar__5__tmp_copy_5 = mercury__digraph__V_24_20;

#line 414 "list.opt"
              mercury__digraph__HeadVar__5_5 = mercury__digraph__HeadVar__5__tmp_copy_5;
#line 414 "list.opt"
              mercury__digraph__HeadVar__3_3 = mercury__digraph__HeadVar__3__tmp_copy_3;
#line 414 "list.opt"
              mercury__digraph__HeadVar__2_2 = mercury__digraph__HeadVar__2__tmp_copy_2;
#line 414 "list.opt"
            }
#line 414 "list.opt"
            continue;
#line 412 "list.opt"
          }
#line 409 "list.opt"
      }
#line 409 "list.opt"
      break;
#line 409 "list.opt"
    }
#line 139 "list.int"
}

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_2_f_in__list_0(
#line 311 "list.int"
  MR_Word mercury__digraph__V_23_23,
#line 311 "list.int"
  MR_Word mercury__digraph__V_24_24,
#line 311 "list.int"
  MR_Word mercury__digraph__V_25_25,
#line 311 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2)
#line 311 "list.int"
{
#line 610 "list.opt"
  {
#line 610 "list.opt"
    MR_bool mercury__digraph__succeeded;
#line 610 "list.opt"
    MR_Word mercury__digraph__HeadVar__3_3;

#line 610 "list.opt"
    if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "list.opt"
      mercury__digraph__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "list.opt"
    else
#line 611 "list.opt"
      {
#line 611 "list.opt"
        MR_Box mercury__digraph__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0));
#line 611 "list.opt"
        MR_Word mercury__digraph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 611 "list.opt"
        MR_Word mercury__digraph__V_8_8;
#line 611 "list.opt"
        MR_Word mercury__digraph__V_9_9;
#line 611 "list.opt"
        MR_Word mercury__digraph__Xs_35;
#line 611 "list.opt"
        MR_Word mercury__digraph__Ys_36;
#line 611 "list.opt"
        MR_Word mercury__digraph__M1_37;
#line 611 "list.opt"
        MR_Word mercury__digraph__M2_38;

#line 694 "digraph.m"
        {
#line 694 "digraph.m"
          mercury__digraph__lookup_key_3_p_0(mercury__digraph__V_23_23, mercury__digraph__V_24_24, mercury__digraph__V_6_6, &mercury__digraph__M1_37);
        }
#line 695 "digraph.m"
        {
#line 695 "digraph.m"
          mercury__digraph__lookup_key_set_to_3_p_0(mercury__digraph__V_23_23, mercury__digraph__V_24_24, mercury__digraph__M1_37, &mercury__digraph__Xs_35);
        }
#line 696 "digraph.m"
        {
#line 696 "digraph.m"
          mercury__digraph__lookup_key_3_p_0(mercury__digraph__V_23_23, mercury__digraph__V_25_25, mercury__digraph__V_6_6, &mercury__digraph__M2_38);
        }
#line 697 "digraph.m"
        {
#line 697 "digraph.m"
          mercury__digraph__lookup_key_set_from_3_p_0(mercury__digraph__V_23_23, mercury__digraph__V_25_25, mercury__digraph__M2_38, &mercury__digraph__Ys_36);
        }
#line 693 "digraph.m"
        {
#line 693 "digraph.m"
          mercury__digraph__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 693 "digraph.m"
          MR_hl_field(MR_mktag(0), mercury__digraph__V_8_8, 0) = ((MR_Box) (mercury__digraph__Xs_35));
#line 693 "digraph.m"
          MR_hl_field(MR_mktag(0), mercury__digraph__V_8_8, 1) = ((MR_Box) (mercury__digraph__Ys_36));
#line 693 "digraph.m"
        }
#line 613 "list.opt"
        {
#line 613 "list.opt"
          mercury__digraph__V_9_9 = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_2_f_in__list_0(mercury__digraph__V_23_23, mercury__digraph__V_24_24, mercury__digraph__V_25_25, mercury__digraph__V_7_7);
        }
#line 611 "list.opt"
        {
#line 611 "list.opt"
          mercury__digraph__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__3_3, 0) = ((MR_Box) (mercury__digraph__V_8_8));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__3_3, 1) = ((MR_Box) (mercury__digraph__V_9_9));
#line 611 "list.opt"
        }
#line 611 "list.opt"
      }
#line 610 "list.opt"
    return mercury__digraph__HeadVar__3_3;
#line 610 "list.opt"
  }
#line 311 "list.int"
}

#line 47 "sparse_bitset.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_55_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(
#line 47 "sparse_bitset.int"
  MR_Word mercury__digraph__V_28_28,
#line 47 "sparse_bitset.int"
  MR_Word mercury__digraph__V_29_29,
#line 47 "sparse_bitset.int"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_13,
#line 47 "sparse_bitset.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 47 "sparse_bitset.int"
  MR_Word mercury__digraph__V_11_9,
#line 47 "sparse_bitset.int"
  MR_Word * mercury__digraph__V_12_10,
#line 47 "sparse_bitset.int"
  MR_Word mercury__digraph__V_13_11,
#line 47 "sparse_bitset.int"
  MR_Word * mercury__digraph__V_14_12)
#line 47 "sparse_bitset.int"
{
#line 456 "sparse_bitset.opt"
  {
#line 456 "sparse_bitset.opt"
    MR_bool mercury__digraph__succeeded;
#line 456 "sparse_bitset.opt"
    MR_Word mercury__digraph__V_8_8 = (MR_Word) mercury__digraph__HeadVar__2_2;

#line 457 "sparse_bitset.opt"
    {
#line 457 "sparse_bitset.opt"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_56_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(mercury__digraph__V_28_28, mercury__digraph__V_29_29, mercury__digraph__TypeClassInfo_for_enum_13, mercury__digraph__V_8_8, mercury__digraph__V_11_9, mercury__digraph__V_12_10, mercury__digraph__V_13_11, mercury__digraph__V_14_12);
#line 457 "sparse_bitset.opt"
      return;
    }
#line 456 "sparse_bitset.opt"
  }
#line 47 "sparse_bitset.int"
}

#line 130 "list.int"
static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_52_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__list_0(
#line 130 "list.int"
  MR_Word mercury__digraph__V_22_22,
#line 130 "list.int"
  MR_Word mercury__digraph__V_23_23,
#line 130 "list.int"
  MR_Word mercury__digraph__V_24_24,
#line 130 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 130 "list.int"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 130 "list.int"
  MR_Word * mercury__digraph__HeadVar__4_4)
#line 130 "list.int"
{
#line 391 "list.opt"
  while (MR_TRUE)
#line 391 "list.opt"
    {
#line 391 "list.opt"
      /* tailcall optimized into a loop */
#line 391 "list.opt"
      {
#line 391 "list.opt"
        MR_bool mercury__digraph__succeeded;

#line 391 "list.opt"
        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "list.opt"
          {
#line 391 "list.opt"
            *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 391 "list.opt"
            mercury__digraph__succeeded = MR_TRUE;
#line 391 "list.opt"
          }
#line 391 "list.opt"
        else
#line 393 "list.opt"
          {
#line 393 "list.opt"
            MR_Word mercury__digraph__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 393 "list.opt"
            MR_Word mercury__digraph__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 393 "list.opt"
            MR_Word mercury__digraph__V_15_13;

#line 394 "list.opt"
            {
#line 394 "list.opt"
              mercury__digraph__succeeded = mercury__digraph__is_dag_2_5_p_0(mercury__digraph__V_22_22, mercury__digraph__V_23_23, mercury__digraph__V_24_24, mercury__digraph__V_10_9, mercury__digraph__HeadVar__3_3, &mercury__digraph__V_15_13);
            }
#line 393 "list.opt"
            if (mercury__digraph__succeeded)
#line 395 "list.opt"
              {
#line 395 "list.opt"
                /* direct tailcall eliminated */
#line 395 "list.opt"
                {
#line 395 "list.opt"
                  MR_Word mercury__digraph__HeadVar__2__tmp_copy_2 = mercury__digraph__V_11_10;
#line 395 "list.opt"
                  MR_Word mercury__digraph__HeadVar__3__tmp_copy_3 = mercury__digraph__V_15_13;

#line 395 "list.opt"
                  mercury__digraph__HeadVar__3_3 = mercury__digraph__HeadVar__3__tmp_copy_3;
#line 395 "list.opt"
                  mercury__digraph__HeadVar__2_2 = mercury__digraph__HeadVar__2__tmp_copy_2;
#line 395 "list.opt"
                }
#line 395 "list.opt"
                continue;
#line 395 "list.opt"
              }
#line 393 "list.opt"
          }
#line 391 "list.opt"
        return mercury__digraph__succeeded;
#line 391 "list.opt"
      }
#line 391 "list.opt"
      break;
#line 391 "list.opt"
    }
#line 130 "list.int"
}

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_51_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_2_f_in__list_0(
#line 311 "list.int"
  MR_Word mercury__digraph__V_14_14,
#line 311 "list.int"
  MR_Word mercury__digraph__V_15_15,
#line 311 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2)
#line 311 "list.int"
{
#line 610 "list.opt"
  {
#line 610 "list.opt"
    MR_bool mercury__digraph__succeeded;
#line 610 "list.opt"
    MR_Word mercury__digraph__HeadVar__3_3;

#line 610 "list.opt"
    if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "list.opt"
      mercury__digraph__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "list.opt"
    else
#line 611 "list.opt"
      {
#line 611 "list.opt"
        MR_Word mercury__digraph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 611 "list.opt"
        MR_Word mercury__digraph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 611 "list.opt"
        MR_Box mercury__digraph__V_8_8;
#line 611 "list.opt"
        MR_Word mercury__digraph__V_9_9;

#line 436 "digraph.m"
        {
#line 436 "digraph.m"
          mercury__digraph__lookup_vertex_3_p_0(mercury__digraph__V_14_14, mercury__digraph__V_15_15, mercury__digraph__V_6_6, &mercury__digraph__V_8_8);
        }
#line 613 "list.opt"
        {
#line 613 "list.opt"
          mercury__digraph__V_9_9 = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_51_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_2_f_in__list_0(mercury__digraph__V_14_14, mercury__digraph__V_15_15, mercury__digraph__V_7_7);
        }
#line 611 "list.opt"
        {
#line 611 "list.opt"
          mercury__digraph__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__3_3, 0) = mercury__digraph__V_8_8;
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__3_3, 1) = ((MR_Box) (mercury__digraph__V_9_9));
#line 611 "list.opt"
        }
#line 611 "list.opt"
      }
#line 610 "list.opt"
    return mercury__digraph__HeadVar__3_3;
#line 610 "list.opt"
  }
#line 311 "list.int"
}

#line 47 "sparse_bitset.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_55_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(
#line 47 "sparse_bitset.int"
  MR_Word mercury__digraph__V_29_29,
#line 47 "sparse_bitset.int"
  MR_Word mercury__digraph__V_30_30,
#line 47 "sparse_bitset.int"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_13,
#line 47 "sparse_bitset.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 47 "sparse_bitset.int"
  MR_Word mercury__digraph__V_11_9,
#line 47 "sparse_bitset.int"
  MR_Word * mercury__digraph__V_12_10,
#line 47 "sparse_bitset.int"
  MR_Word mercury__digraph__V_13_11,
#line 47 "sparse_bitset.int"
  MR_Word * mercury__digraph__V_14_12)
#line 47 "sparse_bitset.int"
{
#line 456 "sparse_bitset.opt"
  {
#line 456 "sparse_bitset.opt"
    MR_bool mercury__digraph__succeeded;
#line 456 "sparse_bitset.opt"
    MR_Word mercury__digraph__V_8_8 = (MR_Word) mercury__digraph__HeadVar__2_2;

#line 457 "sparse_bitset.opt"
    {
#line 457 "sparse_bitset.opt"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_56_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(mercury__digraph__V_29_29, mercury__digraph__V_30_30, mercury__digraph__TypeClassInfo_for_enum_13, mercury__digraph__V_8_8, mercury__digraph__V_11_9, mercury__digraph__V_12_10, mercury__digraph__V_13_11, mercury__digraph__V_14_12);
#line 457 "sparse_bitset.opt"
      return;
    }
#line 456 "sparse_bitset.opt"
  }
#line 47 "sparse_bitset.int"
}

#line 40 "sparse_bitset.int"
static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(
#line 40 "sparse_bitset.int"
  MR_Word mercury__digraph__V_20_20,
#line 40 "sparse_bitset.int"
  MR_Word mercury__digraph__V_21_21,
#line 40 "sparse_bitset.int"
  MR_Word mercury__digraph__V_22_22,
#line 40 "sparse_bitset.int"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_9,
#line 40 "sparse_bitset.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 40 "sparse_bitset.int"
  MR_Word mercury__digraph__V_8_7,
#line 40 "sparse_bitset.int"
  MR_Word * mercury__digraph__V_9_8)
#line 40 "sparse_bitset.int"
{
#line 441 "sparse_bitset.opt"
  {
#line 441 "sparse_bitset.opt"
    MR_bool mercury__digraph__succeeded;
#line 441 "sparse_bitset.opt"
    MR_Word mercury__digraph__V_6_6 = (MR_Word) mercury__digraph__HeadVar__2_2;

#line 442 "sparse_bitset.opt"
    {
#line 442 "sparse_bitset.opt"
      return mercury__digraph__succeeded = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__V_20_20, mercury__digraph__V_21_21, mercury__digraph__V_22_22, mercury__digraph__TypeClassInfo_for_enum_9, mercury__digraph__V_6_6, mercury__digraph__V_8_7, mercury__digraph__V_9_8);
    }
#line 441 "sparse_bitset.opt"
    return mercury__digraph__succeeded;
#line 441 "sparse_bitset.opt"
  }
#line 40 "sparse_bitset.int"
}

#line 45 "set.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_95_104_111_54_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__set_0(
#line 45 "set.int"
  MR_Word mercury__digraph__V_22_22,
#line 45 "set.int"
  MR_Word mercury__digraph__V_23_23,
#line 45 "set.int"
  MR_Word mercury__digraph__V_6_6,
#line 45 "set.int"
  MR_Word mercury__digraph__V_8_7,
#line 45 "set.int"
  MR_Word * mercury__digraph__V_9_8)
#line 45 "set.int"
{
#line 67 "set.opt"
  {
#line 67 "set.opt"
    MR_bool mercury__digraph__succeeded;
#line 67 "set.opt"
    MR_Word mercury__digraph__V_10_46 = (MR_Word) mercury__digraph__V_6_6;

#line 137 "set_ordlist.opt"
    {
#line 137 "set_ordlist.opt"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(mercury__digraph__V_22_22, mercury__digraph__V_23_23, mercury__digraph__V_10_46, mercury__digraph__V_8_7, mercury__digraph__V_9_8);
#line 137 "set_ordlist.opt"
      return;
    }
#line 67 "set.opt"
  }
#line 45 "set.int"
}

#line 312 "list.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_54_53_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
#line 312 "list.int"
  MR_Word mercury__digraph__V_14_14,
#line 312 "list.int"
  MR_Word mercury__digraph__V_15_15,
#line 312 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 312 "list.int"
  MR_Word * mercury__digraph__HeadVar__3_3)
#line 312 "list.int"
{
#line 605 "list.opt"
  {
#line 605 "list.opt"
    MR_bool mercury__digraph__succeeded;

#line 605 "list.opt"
    if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 605 "list.opt"
      *mercury__digraph__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 605 "list.opt"
    else
#line 606 "list.opt"
      {
#line 606 "list.opt"
        MR_Word mercury__digraph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 606 "list.opt"
        MR_Word mercury__digraph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 606 "list.opt"
        MR_Box mercury__digraph__V_8_8;
#line 606 "list.opt"
        MR_Word mercury__digraph__V_9_9;

#line 607 "list.opt"
        {
#line 607 "list.opt"
          mercury__digraph__lookup_vertex_3_p_0(mercury__digraph__V_14_14, mercury__digraph__V_15_15, mercury__digraph__V_6_6, &mercury__digraph__V_8_8);
        }
#line 608 "list.opt"
        {
#line 608 "list.opt"
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_54_53_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(mercury__digraph__V_14_14, mercury__digraph__V_15_15, mercury__digraph__V_7_7, &mercury__digraph__V_9_9);
        }
#line 606 "list.opt"
        {
#line 606 "list.opt"
          MR_Word base;
#line 606 "list.opt"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "list.opt"
          *mercury__digraph__HeadVar__3_3 = base;
#line 606 "list.opt"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__digraph__V_8_8;
#line 606 "list.opt"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__digraph__V_9_9));
#line 606 "list.opt"
        }
#line 606 "list.opt"
      }
#line 605 "list.opt"
  }
#line 312 "list.int"
}

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__digraph__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
}

#line 1084 "digraph.m"
static void MR_CALL 
mercury__digraph__IntroducedFrom__pred__add_cartesian_product__1084__1_5_p_0(
#line 1084 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_23,
#line 1084 "digraph.m"
  MR_Word mercury__digraph__KeySet2_6,
#line 1084 "digraph.m"
  MR_Word mercury__digraph__HeadVar__3_15,
#line 1084 "digraph.m"
  MR_Word mercury__digraph__HeadVar__4_16,
#line 1084 "digraph.m"
  MR_Word * mercury__digraph__HeadVar__5_17)
#line 1084 "digraph.m"
{
#line 1084 "digraph.m"
  {
#line 1084 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 1084 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_27_27 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 1084 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_28_28;
#line 1084 "digraph.m"
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_29 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 1084 "digraph.m"
    MR_Word mercury__digraph__TypeClassInfo_for_enum_30;
#line 1084 "digraph.m"
    MR_Word mercury__digraph__V_6_42;

#line 6256 "digraph.c"
    {
#line 6258 "digraph.c"
      mercury__digraph__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6260 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_28_28, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_27_27));
#line 6262 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_28_28, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_23));
#line 6264 "digraph.c"
    }
#line 6266 "digraph.c"
    {
#line 6268 "digraph.c"
      mercury__digraph__TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6270 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_30, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_29));
#line 6272 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_30, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_23));
#line 6274 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_30, 2) = ((MR_Box) (mercury__digraph__TypeInfo_28_28));
#line 6276 "digraph.c"
    }
#line 441 "sparse_bitset.opt"
    mercury__digraph__V_6_42 = (MR_Word) mercury__digraph__KeySet2_6;
#line 442 "sparse_bitset.opt"
    {
#line 442 "sparse_bitset.opt"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_57_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_23, mercury__digraph__HeadVar__3_15, mercury__digraph__TypeClassInfo_for_enum_30, mercury__digraph__V_6_42, mercury__digraph__HeadVar__4_16, mercury__digraph__HeadVar__5_17);
#line 442 "sparse_bitset.opt"
      return;
    }
#line 1084 "digraph.m"
  }
#line 1084 "digraph.m"
}

#line 340 "digraph.m"
MR_bool MR_CALL 
mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__from_int_1_1_f_0(
#line 340 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 340 "digraph.m"
  MR_Integer mercury__digraph__Int_4,
#line 340 "digraph.m"
  MR_Word * mercury__digraph__HeadVar__2_2)
#line 340 "digraph.m"
{
#line 340 "digraph.m"
  {
#line 340 "digraph.m"
    *mercury__digraph__HeadVar__2_2 = (MR_Word) mercury__digraph__Int_4;
#line 340 "digraph.m"
    return MR_TRUE;
#line 340 "digraph.m"
  }
#line 340 "digraph.m"
}

#line 339 "digraph.m"
MR_Integer MR_CALL 
mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__to_int_1_1_f_0(
#line 339 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 339 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1)
#line 339 "digraph.m"
{
#line 339 "digraph.m"
  {
#line 339 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 339 "digraph.m"
    MR_Integer mercury__digraph__Int_4 = (MR_Integer) mercury__digraph__HeadVar__1_1;

#line 339 "digraph.m"
    return mercury__digraph__Int_4;
#line 339 "digraph.m"
  }
#line 339 "digraph.m"
}

#line 364 "digraph.m"
void MR_CALL 
mercury__digraph____Compare____key_set_map_1_0(
#line 364 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_6,
#line 364 "digraph.m"
  MR_Word * mercury__digraph__HeadVar__1_1,
#line 364 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 364 "digraph.m"
  MR_Word mercury__digraph__HeadVar__3_3)
#line 364 "digraph.m"
{
#line 364 "digraph.m"
  {
#line 364 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 364 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_7_7 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 364 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_8_8 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 364 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_9_9;
#line 364 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_10_10 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 364 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_11_11;
#line 364 "digraph.m"
    MR_Word mercury__digraph__Cast_HeadVar1_4 = mercury__digraph__HeadVar__2_2;
#line 364 "digraph.m"
    MR_Word mercury__digraph__Cast_HeadVar2_5 = mercury__digraph__HeadVar__3_3;

#line 6369 "digraph.c"
    {
#line 6371 "digraph.c"
      mercury__digraph__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6373 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_8_8));
#line 6375 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_6));
#line 6377 "digraph.c"
    }
#line 6379 "digraph.c"
    {
#line 6381 "digraph.c"
      mercury__digraph__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6383 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_11, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_10));
#line 6385 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_11, 1) = ((MR_Box) (mercury__digraph__TypeInfo_9_9));
#line 6387 "digraph.c"
    }
#line 364 "digraph.m"
    {
#line 364 "digraph.m"
      mercury__tree234____Compare____tree234_2_0(mercury__digraph__TypeCtorInfo_7_7, mercury__digraph__TypeInfo_11_11, mercury__digraph__HeadVar__1_1, mercury__digraph__Cast_HeadVar1_4, mercury__digraph__Cast_HeadVar2_5);
#line 364 "digraph.m"
      return;
    }
#line 364 "digraph.m"
  }
#line 364 "digraph.m"
}

#line 364 "digraph.m"
MR_bool MR_CALL 
mercury__digraph____Unify____key_set_map_1_0(
#line 364 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 364 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 364 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2)
#line 364 "digraph.m"
{
#line 364 "digraph.m"
  {
#line 364 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 364 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 364 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_7_7 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 364 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_8_8;
#line 364 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_9_9 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 364 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_10_10;
#line 364 "digraph.m"
    MR_Word mercury__digraph__Cast_HeadVar1_3 = mercury__digraph__HeadVar__1_1;
#line 364 "digraph.m"
    MR_Word mercury__digraph__Cast_HeadVar2_4 = mercury__digraph__HeadVar__2_2;

#line 6431 "digraph.c"
    {
#line 6433 "digraph.c"
      mercury__digraph__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6435 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_7));
#line 6437 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_5));
#line 6439 "digraph.c"
    }
#line 6441 "digraph.c"
    {
#line 6443 "digraph.c"
      mercury__digraph__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6445 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_9_9));
#line 6447 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 1) = ((MR_Box) (mercury__digraph__TypeInfo_8_8));
#line 6449 "digraph.c"
    }
#line 364 "digraph.m"
    {
#line 364 "digraph.m"
      return mercury__digraph__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__digraph__TypeCtorInfo_6_6, mercury__digraph__TypeInfo_10_10, mercury__digraph__Cast_HeadVar1_3, mercury__digraph__Cast_HeadVar2_4);
    }
#line 364 "digraph.m"
    return mercury__digraph__succeeded;
#line 364 "digraph.m"
  }
#line 364 "digraph.m"
}

#line 363 "digraph.m"
void MR_CALL 
mercury__digraph____Compare____key_map_1_0(
#line 363 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_6,
#line 363 "digraph.m"
  MR_Word * mercury__digraph__HeadVar__1_1,
#line 363 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 363 "digraph.m"
  MR_Word mercury__digraph__HeadVar__3_3)
#line 363 "digraph.m"
{
#line 363 "digraph.m"
  {
#line 363 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 363 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_7_7 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 363 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_8_8 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 363 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_9_9;
#line 363 "digraph.m"
    MR_Word mercury__digraph__Cast_HeadVar1_4 = mercury__digraph__HeadVar__2_2;
#line 363 "digraph.m"
    MR_Word mercury__digraph__Cast_HeadVar2_5 = mercury__digraph__HeadVar__3_3;

#line 6491 "digraph.c"
    {
#line 6493 "digraph.c"
      mercury__digraph__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6495 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_8_8));
#line 6497 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_6));
#line 6499 "digraph.c"
    }
#line 363 "digraph.m"
    {
#line 363 "digraph.m"
      mercury__tree234____Compare____tree234_2_0(mercury__digraph__TypeCtorInfo_7_7, mercury__digraph__TypeInfo_9_9, mercury__digraph__HeadVar__1_1, mercury__digraph__Cast_HeadVar1_4, mercury__digraph__Cast_HeadVar2_5);
#line 363 "digraph.m"
      return;
    }
#line 363 "digraph.m"
  }
#line 363 "digraph.m"
}

#line 363 "digraph.m"
MR_bool MR_CALL 
mercury__digraph____Unify____key_map_1_0(
#line 363 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 363 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 363 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2)
#line 363 "digraph.m"
{
#line 363 "digraph.m"
  {
#line 363 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 363 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 363 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_7_7 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 363 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_8_8;
#line 363 "digraph.m"
    MR_Word mercury__digraph__Cast_HeadVar1_3 = mercury__digraph__HeadVar__1_1;
#line 363 "digraph.m"
    MR_Word mercury__digraph__Cast_HeadVar2_4 = mercury__digraph__HeadVar__2_2;

#line 6539 "digraph.c"
    {
#line 6541 "digraph.c"
      mercury__digraph__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6543 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_7));
#line 6545 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_5));
#line 6547 "digraph.c"
    }
#line 363 "digraph.m"
    {
#line 363 "digraph.m"
      return mercury__digraph__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__digraph__TypeCtorInfo_6_6, mercury__digraph__TypeInfo_8_8, mercury__digraph__Cast_HeadVar1_3, mercury__digraph__Cast_HeadVar2_4);
    }
#line 363 "digraph.m"
    return mercury__digraph__succeeded;
#line 363 "digraph.m"
  }
#line 363 "digraph.m"
}

#line 46 "digraph.m"
void MR_CALL 
mercury__digraph____Compare____digraph_key_set_1_0(
#line 46 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_6,
#line 46 "digraph.m"
  MR_Word * mercury__digraph__HeadVar__1_1,
#line 46 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 46 "digraph.m"
  MR_Word mercury__digraph__HeadVar__3_3)
#line 46 "digraph.m"
{
#line 46 "digraph.m"
  {
#line 46 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 46 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_7_7 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 46 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_8_8;
#line 46 "digraph.m"
    MR_Word mercury__digraph__Cast_HeadVar1_4 = mercury__digraph__HeadVar__2_2;
#line 46 "digraph.m"
    MR_Word mercury__digraph__Cast_HeadVar2_5 = mercury__digraph__HeadVar__3_3;

#line 6587 "digraph.c"
    {
#line 6589 "digraph.c"
      mercury__digraph__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6591 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_7));
#line 6593 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_6));
#line 6595 "digraph.c"
    }
#line 46 "digraph.m"
    {
#line 46 "digraph.m"
      mercury__sparse_bitset____Compare____sparse_bitset_1_0(mercury__digraph__TypeInfo_8_8, mercury__digraph__HeadVar__1_1, (MR_Word) mercury__digraph__Cast_HeadVar1_4, (MR_Word) mercury__digraph__Cast_HeadVar2_5);
#line 46 "digraph.m"
      return;
    }
#line 46 "digraph.m"
  }
#line 46 "digraph.m"
}

#line 46 "digraph.m"
MR_bool MR_CALL 
mercury__digraph____Unify____digraph_key_set_1_0(
#line 46 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 46 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 46 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2)
#line 46 "digraph.m"
{
#line 46 "digraph.m"
  {
#line 46 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 46 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_6_6 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 46 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_7_7;
#line 46 "digraph.m"
    MR_Word mercury__digraph__Cast_HeadVar1_3 = mercury__digraph__HeadVar__1_1;
#line 46 "digraph.m"
    MR_Word mercury__digraph__Cast_HeadVar2_4 = mercury__digraph__HeadVar__2_2;

#line 6633 "digraph.c"
    {
#line 6635 "digraph.c"
      mercury__digraph__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6637 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_7_7, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_6_6));
#line 6639 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_7_7, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_5));
#line 6641 "digraph.c"
    }
#line 46 "digraph.m"
    {
#line 46 "digraph.m"
      return mercury__digraph__succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(mercury__digraph__TypeInfo_7_7, (MR_Word) mercury__digraph__Cast_HeadVar1_3, (MR_Word) mercury__digraph__Cast_HeadVar2_4);
    }
#line 46 "digraph.m"
    return mercury__digraph__succeeded;
#line 46 "digraph.m"
  }
#line 46 "digraph.m"
}

#line 335 "digraph.m"
void MR_CALL 
mercury__digraph____Compare____digraph_key_1_0(
#line 335 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_8,
#line 335 "digraph.m"
  MR_Word * mercury__digraph__HeadVar__1_1,
#line 335 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 335 "digraph.m"
  MR_Word mercury__digraph__HeadVar__3_3)
#line 335 "digraph.m"
{
#line 335 "digraph.m"
  {
#line 335 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 335 "digraph.m"
    MR_Integer mercury__digraph__CastX_6 = (MR_Integer) mercury__digraph__HeadVar__2_2;
#line 335 "digraph.m"
    MR_Integer mercury__digraph__CastY_7 = (MR_Integer) mercury__digraph__HeadVar__3_3;

#line 335 "digraph.m"
    mercury__digraph__succeeded = (mercury__digraph__CastX_6 == mercury__digraph__CastY_7);
#line 335 "digraph.m"
    if (mercury__digraph__succeeded)
#line 6681 "digraph.c"
      *mercury__digraph__HeadVar__1_1 = (MR_Integer) 0;
#line 335 "digraph.m"
    else
#line 335 "digraph.m"
      {
#line 335 "digraph.m"
        MR_Integer mercury__digraph__V_4_4 = (MR_Integer) mercury__digraph__HeadVar__2_2;
#line 335 "digraph.m"
        MR_Integer mercury__digraph__V_5_5 = (MR_Integer) mercury__digraph__HeadVar__3_3;

#line 69 "private_builtin.opt"
        mercury__digraph__succeeded = (mercury__digraph__V_4_4 < mercury__digraph__V_5_5);
#line 72 "private_builtin.opt"
        if (mercury__digraph__succeeded)
#line 71 "private_builtin.opt"
          *mercury__digraph__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
        else
#line 77 "private_builtin.opt"
          {
#line 74 "private_builtin.opt"
            mercury__digraph__succeeded = (mercury__digraph__V_4_4 == mercury__digraph__V_5_5);
#line 77 "private_builtin.opt"
            if (mercury__digraph__succeeded)
#line 76 "private_builtin.opt"
              *mercury__digraph__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
            else
#line 78 "private_builtin.opt"
              *mercury__digraph__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
          }
#line 335 "digraph.m"
      }
#line 335 "digraph.m"
  }
#line 335 "digraph.m"
}

#line 335 "digraph.m"
MR_bool MR_CALL 
mercury__digraph____Unify____digraph_key_1_0(
#line 335 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_7,
#line 335 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 335 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2)
#line 335 "digraph.m"
{
#line 335 "digraph.m"
  {
#line 335 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 335 "digraph.m"
    MR_Integer mercury__digraph__CastX_5 = (MR_Integer) mercury__digraph__HeadVar__1_1;
#line 335 "digraph.m"
    MR_Integer mercury__digraph__CastY_6 = (MR_Integer) mercury__digraph__HeadVar__2_2;

#line 335 "digraph.m"
    mercury__digraph__succeeded = (mercury__digraph__CastX_5 == mercury__digraph__CastY_6);
#line 335 "digraph.m"
    if (mercury__digraph__succeeded)
#line 335 "digraph.m"
      mercury__digraph__succeeded = MR_TRUE;
#line 335 "digraph.m"
    else
#line 335 "digraph.m"
      {
#line 335 "digraph.m"
        MR_Integer mercury__digraph__V_3_3 = (MR_Integer) mercury__digraph__HeadVar__1_1;
#line 335 "digraph.m"
        MR_Integer mercury__digraph__V_4_4 = (MR_Integer) mercury__digraph__HeadVar__2_2;

#line 6756 "digraph.c"
        mercury__digraph__succeeded = (mercury__digraph__V_3_3 == mercury__digraph__V_4_4);
#line 335 "digraph.m"
      }
#line 335 "digraph.m"
    return mercury__digraph__succeeded;
#line 335 "digraph.m"
  }
#line 335 "digraph.m"
}

#line 343 "digraph.m"
void MR_CALL 
mercury__digraph____Compare____digraph_1_0(
#line 343 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_17,
#line 343 "digraph.m"
  MR_Word * mercury__digraph__HeadVar__1_1,
#line 343 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 343 "digraph.m"
  MR_Word mercury__digraph__HeadVar__3_3)
#line 343 "digraph.m"
{
#line 343 "digraph.m"
  {
#line 343 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 343 "digraph.m"
    MR_Integer mercury__digraph__CastX_15 = (MR_Integer) mercury__digraph__HeadVar__2_2;
#line 343 "digraph.m"
    MR_Integer mercury__digraph__CastY_16 = (MR_Integer) mercury__digraph__HeadVar__3_3;

#line 343 "digraph.m"
    mercury__digraph__succeeded = (mercury__digraph__CastX_15 == mercury__digraph__CastY_16);
#line 343 "digraph.m"
    if (mercury__digraph__succeeded)
#line 6793 "digraph.c"
      *mercury__digraph__HeadVar__1_1 = (MR_Integer) 0;
#line 343 "digraph.m"
    else
#line 343 "digraph.m"
      {
#line 343 "digraph.m"
        MR_Integer mercury__digraph__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 343 "digraph.m"
        MR_Word mercury__digraph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 343 "digraph.m"
        MR_Word mercury__digraph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__2_2, (MR_Integer) 2)));
#line 343 "digraph.m"
        MR_Word mercury__digraph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__2_2, (MR_Integer) 3)));
#line 343 "digraph.m"
        MR_Integer mercury__digraph__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__3_3, (MR_Integer) 0)));
#line 343 "digraph.m"
        MR_Word mercury__digraph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__3_3, (MR_Integer) 1)));
#line 343 "digraph.m"
        MR_Word mercury__digraph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__3_3, (MR_Integer) 2)));
#line 343 "digraph.m"
        MR_Word mercury__digraph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__3_3, (MR_Integer) 3)));
#line 343 "digraph.m"
        MR_Word mercury__digraph__V_12_12;

#line 69 "private_builtin.opt"
        mercury__digraph__succeeded = (mercury__digraph__V_4_4 < mercury__digraph__V_8_8);
#line 72 "private_builtin.opt"
        if (mercury__digraph__succeeded)
#line 71 "private_builtin.opt"
          mercury__digraph__V_12_12 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
        else
#line 77 "private_builtin.opt"
          {
#line 74 "private_builtin.opt"
            mercury__digraph__succeeded = (mercury__digraph__V_4_4 == mercury__digraph__V_8_8);
#line 77 "private_builtin.opt"
            if (mercury__digraph__succeeded)
#line 76 "private_builtin.opt"
              mercury__digraph__V_12_12 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
            else
#line 78 "private_builtin.opt"
              mercury__digraph__V_12_12 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
          }
#line 6840 "digraph.c"
        mercury__digraph__succeeded = (mercury__digraph__V_12_12 == (MR_Integer) 0);
#line 343 "digraph.m"
        mercury__digraph__succeeded = !(mercury__digraph__succeeded);
#line 343 "digraph.m"
        if (mercury__digraph__succeeded)
#line 343 "digraph.m"
          *mercury__digraph__HeadVar__1_1 = mercury__digraph__V_12_12;
#line 343 "digraph.m"
        else
#line 343 "digraph.m"
          {
#line 343 "digraph.m"
            MR_Word mercury__digraph__V_13_13;
#line 343 "digraph.m"
            MR_Word mercury__digraph__TypeCtorInfo_19_19 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 343 "digraph.m"
            MR_Word mercury__digraph__TypeInfo_20_20;

#line 6859 "digraph.c"
            {
#line 6861 "digraph.c"
              mercury__digraph__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6863 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_20_20, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_19_19));
#line 6865 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_20_20, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
#line 6867 "digraph.c"
            }
#line 343 "digraph.m"
            {
#line 343 "digraph.m"
              mercury__bimap____Compare____bimap_2_0(mercury__digraph__TypeInfo_for_T_17, mercury__digraph__TypeInfo_20_20, &mercury__digraph__V_13_13, mercury__digraph__V_5_5, mercury__digraph__V_9_9);
            }
#line 6874 "digraph.c"
            mercury__digraph__succeeded = (mercury__digraph__V_13_13 == (MR_Integer) 0);
#line 343 "digraph.m"
            mercury__digraph__succeeded = !(mercury__digraph__succeeded);
#line 343 "digraph.m"
            if (mercury__digraph__succeeded)
#line 343 "digraph.m"
              *mercury__digraph__HeadVar__1_1 = mercury__digraph__V_13_13;
#line 343 "digraph.m"
            else
#line 343 "digraph.m"
              {
#line 343 "digraph.m"
                MR_Word mercury__digraph__V_14_14;
#line 343 "digraph.m"
                MR_Word mercury__digraph__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 343 "digraph.m"
                MR_Word mercury__digraph__TypeCtorInfo_24_24 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 343 "digraph.m"
                MR_Word mercury__digraph__TypeInfo_25_25;
#line 343 "digraph.m"
                MR_Word mercury__digraph__TypeCtorInfo_26_26 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 343 "digraph.m"
                MR_Word mercury__digraph__TypeInfo_27_27;

#line 6899 "digraph.c"
                {
#line 6901 "digraph.c"
                  mercury__digraph__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6903 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_24_24));
#line 6905 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
#line 6907 "digraph.c"
                }
#line 6909 "digraph.c"
                {
#line 6911 "digraph.c"
                  mercury__digraph__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6913 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_26_26));
#line 6915 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 1) = ((MR_Box) (mercury__digraph__TypeInfo_25_25));
#line 6917 "digraph.c"
                }
#line 343 "digraph.m"
                {
#line 343 "digraph.m"
                  mercury__tree234____Compare____tree234_2_0(mercury__digraph__TypeCtorInfo_23_23, mercury__digraph__TypeInfo_27_27, &mercury__digraph__V_14_14, mercury__digraph__V_6_6, mercury__digraph__V_10_10);
                }
#line 6924 "digraph.c"
                mercury__digraph__succeeded = (mercury__digraph__V_14_14 == (MR_Integer) 0);
#line 343 "digraph.m"
                mercury__digraph__succeeded = !(mercury__digraph__succeeded);
#line 343 "digraph.m"
                if (mercury__digraph__succeeded)
#line 343 "digraph.m"
                  *mercury__digraph__HeadVar__1_1 = mercury__digraph__V_14_14;
#line 343 "digraph.m"
                else
#line 343 "digraph.m"
                  {
#line 343 "digraph.m"
                    MR_Word mercury__digraph__TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 343 "digraph.m"
                    MR_Word mercury__digraph__TypeCtorInfo_31_31 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 343 "digraph.m"
                    MR_Word mercury__digraph__TypeInfo_32_32;
#line 343 "digraph.m"
                    MR_Word mercury__digraph__TypeCtorInfo_33_33 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 343 "digraph.m"
                    MR_Word mercury__digraph__TypeInfo_34_34;

#line 6947 "digraph.c"
                    {
#line 6949 "digraph.c"
                      mercury__digraph__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6951 "digraph.c"
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_32_32, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_31_31));
#line 6953 "digraph.c"
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_32_32, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
#line 6955 "digraph.c"
                    }
#line 6957 "digraph.c"
                    {
#line 6959 "digraph.c"
                      mercury__digraph__TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6961 "digraph.c"
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_34_34, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_33_33));
#line 6963 "digraph.c"
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_34_34, 1) = ((MR_Box) (mercury__digraph__TypeInfo_32_32));
#line 6965 "digraph.c"
                    }
#line 343 "digraph.m"
                    {
#line 343 "digraph.m"
                      mercury__tree234____Compare____tree234_2_0(mercury__digraph__TypeCtorInfo_30_30, mercury__digraph__TypeInfo_34_34, mercury__digraph__HeadVar__1_1, mercury__digraph__V_7_7, mercury__digraph__V_11_11);
#line 343 "digraph.m"
                      return;
                    }
#line 343 "digraph.m"
                  }
#line 343 "digraph.m"
              }
#line 343 "digraph.m"
          }
#line 343 "digraph.m"
      }
#line 343 "digraph.m"
  }
#line 343 "digraph.m"
}

#line 343 "digraph.m"
MR_bool MR_CALL 
mercury__digraph____Unify____digraph_1_0(
#line 343 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_13,
#line 343 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 343 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2)
#line 343 "digraph.m"
{
#line 343 "digraph.m"
  {
#line 343 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 343 "digraph.m"
    MR_Integer mercury__digraph__CastX_11 = (MR_Integer) mercury__digraph__HeadVar__1_1;
#line 343 "digraph.m"
    MR_Integer mercury__digraph__CastY_12 = (MR_Integer) mercury__digraph__HeadVar__2_2;

#line 343 "digraph.m"
    mercury__digraph__succeeded = (mercury__digraph__CastX_11 == mercury__digraph__CastY_12);
#line 343 "digraph.m"
    if (mercury__digraph__succeeded)
#line 343 "digraph.m"
      mercury__digraph__succeeded = MR_TRUE;
#line 343 "digraph.m"
    else
#line 343 "digraph.m"
      {
#line 343 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_14_14;
#line 343 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_18_18;
#line 343 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_21_21;
#line 343 "digraph.m"
        MR_Word mercury__digraph__TypeInfo_27_27;
#line 343 "digraph.m"
        MR_Word mercury__digraph__TypeInfo_29_29;
#line 343 "digraph.m"
        MR_Integer mercury__digraph__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__1_1, (MR_Integer) 0)));
#line 343 "digraph.m"
        MR_Word mercury__digraph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__1_1, (MR_Integer) 1)));
#line 343 "digraph.m"
        MR_Word mercury__digraph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__1_1, (MR_Integer) 2)));
#line 343 "digraph.m"
        MR_Word mercury__digraph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__1_1, (MR_Integer) 3)));
#line 343 "digraph.m"
        MR_Integer mercury__digraph__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 343 "digraph.m"
        MR_Word mercury__digraph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 343 "digraph.m"
        MR_Word mercury__digraph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__2_2, (MR_Integer) 2)));
#line 343 "digraph.m"
        MR_Word mercury__digraph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__2_2, (MR_Integer) 3)));

#line 7044 "digraph.c"
        mercury__digraph__succeeded = (mercury__digraph__V_3_3 == mercury__digraph__V_7_7);
#line 343 "digraph.m"
        if (mercury__digraph__succeeded)
#line 343 "digraph.m"
          {
#line 7050 "digraph.c"
            mercury__digraph__TypeCtorInfo_14_14 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 7052 "digraph.c"
            {
#line 7054 "digraph.c"
              mercury__digraph__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7056 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
#line 7058 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
#line 7060 "digraph.c"
            }
#line 7062 "digraph.c"
            {
#line 7064 "digraph.c"
              mercury__digraph__succeeded = mercury__bimap____Unify____bimap_2_0(mercury__digraph__TypeInfo_for_T_13, mercury__digraph__TypeInfo_27_27, mercury__digraph__V_4_4, mercury__digraph__V_8_8);
            }
#line 343 "digraph.m"
            if (mercury__digraph__succeeded)
#line 343 "digraph.m"
              {
#line 7071 "digraph.c"
                mercury__digraph__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 7073 "digraph.c"
                mercury__digraph__TypeCtorInfo_21_21 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 7075 "digraph.c"
                {
#line 7077 "digraph.c"
                  mercury__digraph__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7079 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_21_21));
#line 7081 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 1) = ((MR_Box) (mercury__digraph__TypeInfo_27_27));
#line 7083 "digraph.c"
                }
#line 7085 "digraph.c"
                {
#line 7087 "digraph.c"
                  mercury__digraph__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__digraph__TypeCtorInfo_18_18, mercury__digraph__TypeInfo_29_29, mercury__digraph__V_5_5, mercury__digraph__V_9_9);
                }
#line 343 "digraph.m"
                if (mercury__digraph__succeeded)
#line 7092 "digraph.c"
                  {
#line 7094 "digraph.c"
                    return mercury__digraph__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__digraph__TypeCtorInfo_18_18, mercury__digraph__TypeInfo_29_29, mercury__digraph__V_6_6, mercury__digraph__V_10_10);
                  }
#line 343 "digraph.m"
              }
#line 343 "digraph.m"
          }
#line 343 "digraph.m"
      }
#line 343 "digraph.m"
    return mercury__digraph__succeeded;
#line 343 "digraph.m"
  }
#line 343 "digraph.m"
}

#line 889 "digraph.m"
void MR_CALL 
mercury__digraph____Compare____clique_map_1_0(
#line 889 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_6,
#line 889 "digraph.m"
  MR_Word * mercury__digraph__HeadVar__1_1,
#line 889 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 889 "digraph.m"
  MR_Word mercury__digraph__HeadVar__3_3)
#line 889 "digraph.m"
{
#line 889 "digraph.m"
  {
#line 889 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 889 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_7_7 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 889 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_8_8;
#line 889 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_9_9;
#line 889 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_10_10;
#line 889 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_11_11;
#line 889 "digraph.m"
    MR_Word mercury__digraph__Cast_HeadVar1_4 = mercury__digraph__HeadVar__2_2;
#line 889 "digraph.m"
    MR_Word mercury__digraph__Cast_HeadVar2_5 = mercury__digraph__HeadVar__3_3;

#line 7142 "digraph.c"
    {
#line 7144 "digraph.c"
      mercury__digraph__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7146 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_7));
#line 7148 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_6));
#line 7150 "digraph.c"
    }
#line 7152 "digraph.c"
    mercury__digraph__TypeCtorInfo_9_9 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 7154 "digraph.c"
    {
#line 7156 "digraph.c"
      mercury__digraph__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7158 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_9_9));
#line 7160 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_6));
#line 7162 "digraph.c"
    }
#line 7164 "digraph.c"
    {
#line 7166 "digraph.c"
      mercury__digraph__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7168 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_11, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_7));
#line 7170 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_11, 1) = ((MR_Box) (mercury__digraph__TypeInfo_10_10));
#line 7172 "digraph.c"
    }
#line 889 "digraph.m"
    {
#line 889 "digraph.m"
      mercury__tree234____Compare____tree234_2_0(mercury__digraph__TypeInfo_8_8, mercury__digraph__TypeInfo_11_11, mercury__digraph__HeadVar__1_1, (MR_Word) mercury__digraph__Cast_HeadVar1_4, (MR_Word) mercury__digraph__Cast_HeadVar2_5);
#line 889 "digraph.m"
      return;
    }
#line 889 "digraph.m"
  }
#line 889 "digraph.m"
}

#line 889 "digraph.m"
MR_bool MR_CALL 
mercury__digraph____Unify____clique_map_1_0(
#line 889 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 889 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 889 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2)
#line 889 "digraph.m"
{
#line 889 "digraph.m"
  {
#line 889 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 889 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_6_6 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 889 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_7_7;
#line 889 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_8_8 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 889 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_9_9;
#line 889 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_10_10;
#line 889 "digraph.m"
    MR_Word mercury__digraph__Cast_HeadVar1_3 = mercury__digraph__HeadVar__1_1;
#line 889 "digraph.m"
    MR_Word mercury__digraph__Cast_HeadVar2_4 = mercury__digraph__HeadVar__2_2;

#line 7216 "digraph.c"
    {
#line 7218 "digraph.c"
      mercury__digraph__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7220 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_7_7, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_6_6));
#line 7222 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_7_7, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_5));
#line 7224 "digraph.c"
    }
#line 7226 "digraph.c"
    {
#line 7228 "digraph.c"
      mercury__digraph__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7230 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_8_8));
#line 7232 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_5));
#line 7234 "digraph.c"
    }
#line 7236 "digraph.c"
    {
#line 7238 "digraph.c"
      mercury__digraph__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7240 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_6_6));
#line 7242 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 1) = ((MR_Box) (mercury__digraph__TypeInfo_9_9));
#line 7244 "digraph.c"
    }
#line 889 "digraph.m"
    {
#line 889 "digraph.m"
      return mercury__digraph__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__digraph__TypeInfo_7_7, mercury__digraph__TypeInfo_10_10, (MR_Word) mercury__digraph__Cast_HeadVar1_3, (MR_Word) mercury__digraph__Cast_HeadVar2_4);
    }
#line 889 "digraph.m"
    return mercury__digraph__succeeded;
#line 889 "digraph.m"
  }
#line 889 "digraph.m"
}

#line 1116 "digraph.m"
void MR_CALL 
mercury__digraph__traverse_children_6_p_1(
#line 1116 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_24,
#line 1116 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_A_25,
#line 1116 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 1116 "digraph.m"
  MR_Box mercury__digraph__Parent_2,
#line 1116 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 1116 "digraph.m"
  MR_Word mercury__digraph__ProcessEdge_4,
#line 1116 "digraph.m"
  MR_Box mercury__digraph__STATE_VARIABLE_Acc_0_5,
#line 1116 "digraph.m"
  MR_Box * mercury__digraph__STATE_VARIABLE_Acc_6)
#line 1116 "digraph.m"
{
#line 1119 "digraph.m"
  while (MR_TRUE)
#line 1119 "digraph.m"
    {
#line 1119 "digraph.m"
      /* tailcall optimized into a loop */
#line 1119 "digraph.m"
      {
#line 1119 "digraph.m"
        MR_bool mercury__digraph__succeeded;

#line 1119 "digraph.m"
        if ((mercury__digraph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1119 "digraph.m"
          *mercury__digraph__STATE_VARIABLE_Acc_6 = mercury__digraph__STATE_VARIABLE_Acc_0_5;
#line 1119 "digraph.m"
        else
#line 1120 "digraph.m"
          {
#line 1120 "digraph.m"
            MR_Word mercury__digraph__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 0)));
#line 1120 "digraph.m"
            MR_Word mercury__digraph__Xs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 1)));
#line 1120 "digraph.m"
            MR_Box mercury__digraph__Child_19;
#line 1120 "digraph.m"
            MR_Box mercury__digraph__STATE_VARIABLE_Acc_22_22;
#line 1122 "digraph.m"
            void MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 436 "digraph.m"
            {
#line 436 "digraph.m"
              mercury__digraph__lookup_vertex_3_p_0(mercury__digraph__TypeInfo_for_T_24, mercury__digraph__G_3, mercury__digraph__X_13, &mercury__digraph__Child_19);
            }
#line 1122 "digraph.m"
            mercury__digraph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__digraph__ProcessEdge_4, (MR_Integer) 1)));
#line 1122 "digraph.m"
            {
#line 1122 "digraph.m"
              mercury__digraph__func_0(((MR_Box) mercury__digraph__ProcessEdge_4), mercury__digraph__Parent_2, mercury__digraph__Child_19, mercury__digraph__STATE_VARIABLE_Acc_0_5, &mercury__digraph__STATE_VARIABLE_Acc_22_22);
            }
#line 1123 "digraph.m"
            /* direct tailcall eliminated */
#line 1123 "digraph.m"
            {
#line 1123 "digraph.m"
              MR_Word mercury__digraph__HeadVar__1__tmp_copy_1 = mercury__digraph__Xs_14;
#line 1123 "digraph.m"
              MR_Box mercury__digraph__STATE_VARIABLE_Acc_0__tmp_copy_5 = mercury__digraph__STATE_VARIABLE_Acc_22_22;

#line 1123 "digraph.m"
              mercury__digraph__STATE_VARIABLE_Acc_0_5 = mercury__digraph__STATE_VARIABLE_Acc_0__tmp_copy_5;
#line 1123 "digraph.m"
              mercury__digraph__HeadVar__1_1 = mercury__digraph__HeadVar__1__tmp_copy_1;
#line 1123 "digraph.m"
            }
#line 1123 "digraph.m"
            continue;
#line 1120 "digraph.m"
          }
#line 1119 "digraph.m"
      }
#line 1119 "digraph.m"
      break;
#line 1119 "digraph.m"
    }
#line 1116 "digraph.m"
}

#line 1114 "digraph.m"
void MR_CALL 
mercury__digraph__traverse_children_6_p_0(
#line 1114 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_24,
#line 1114 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_A_25,
#line 1114 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 1114 "digraph.m"
  MR_Box mercury__digraph__Parent_2,
#line 1114 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 1114 "digraph.m"
  MR_Word mercury__digraph__ProcessEdge_4,
#line 1114 "digraph.m"
  MR_Box mercury__digraph__STATE_VARIABLE_Acc_0_5,
#line 1114 "digraph.m"
  MR_Box * mercury__digraph__STATE_VARIABLE_Acc_6)
#line 1114 "digraph.m"
{
#line 1119 "digraph.m"
  while (MR_TRUE)
#line 1119 "digraph.m"
    {
#line 1119 "digraph.m"
      /* tailcall optimized into a loop */
#line 1119 "digraph.m"
      {
#line 1119 "digraph.m"
        MR_bool mercury__digraph__succeeded;

#line 1119 "digraph.m"
        if ((mercury__digraph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1119 "digraph.m"
          *mercury__digraph__STATE_VARIABLE_Acc_6 = mercury__digraph__STATE_VARIABLE_Acc_0_5;
#line 1119 "digraph.m"
        else
#line 1120 "digraph.m"
          {
#line 1120 "digraph.m"
            MR_Word mercury__digraph__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 0)));
#line 1120 "digraph.m"
            MR_Word mercury__digraph__Xs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 1)));
#line 1120 "digraph.m"
            MR_Box mercury__digraph__Child_19;
#line 1120 "digraph.m"
            MR_Box mercury__digraph__STATE_VARIABLE_Acc_22_22;
#line 1122 "digraph.m"
            void MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 436 "digraph.m"
            {
#line 436 "digraph.m"
              mercury__digraph__lookup_vertex_3_p_0(mercury__digraph__TypeInfo_for_T_24, mercury__digraph__G_3, mercury__digraph__X_13, &mercury__digraph__Child_19);
            }
#line 1122 "digraph.m"
            mercury__digraph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__digraph__ProcessEdge_4, (MR_Integer) 1)));
#line 1122 "digraph.m"
            {
#line 1122 "digraph.m"
              mercury__digraph__func_0(((MR_Box) mercury__digraph__ProcessEdge_4), mercury__digraph__Parent_2, mercury__digraph__Child_19, mercury__digraph__STATE_VARIABLE_Acc_0_5, &mercury__digraph__STATE_VARIABLE_Acc_22_22);
            }
#line 1123 "digraph.m"
            /* direct tailcall eliminated */
#line 1123 "digraph.m"
            {
#line 1123 "digraph.m"
              MR_Word mercury__digraph__HeadVar__1__tmp_copy_1 = mercury__digraph__Xs_14;
#line 1123 "digraph.m"
              MR_Box mercury__digraph__STATE_VARIABLE_Acc_0__tmp_copy_5 = mercury__digraph__STATE_VARIABLE_Acc_22_22;

#line 1123 "digraph.m"
              mercury__digraph__STATE_VARIABLE_Acc_0_5 = mercury__digraph__STATE_VARIABLE_Acc_0__tmp_copy_5;
#line 1123 "digraph.m"
              mercury__digraph__HeadVar__1_1 = mercury__digraph__HeadVar__1__tmp_copy_1;
#line 1123 "digraph.m"
            }
#line 1123 "digraph.m"
            continue;
#line 1120 "digraph.m"
          }
#line 1119 "digraph.m"
      }
#line 1119 "digraph.m"
      break;
#line 1119 "digraph.m"
    }
#line 1114 "digraph.m"
}

#line 1098 "digraph.m"
void MR_CALL 
mercury__digraph__traverse_2_6_p_1(
#line 1098 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_27,
#line 1098 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_A_28,
#line 1098 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 1098 "digraph.m"
  MR_Word mercury__digraph__G_2,
#line 1098 "digraph.m"
  MR_Word mercury__digraph__ProcessVertex_3,
#line 1098 "digraph.m"
  MR_Word mercury__digraph__ProcessEdge_4,
#line 1098 "digraph.m"
  MR_Box mercury__digraph__STATE_VARIABLE_Acc_0_5,
#line 1098 "digraph.m"
  MR_Box * mercury__digraph__STATE_VARIABLE_Acc_6)
#line 1098 "digraph.m"
{
#line 1101 "digraph.m"
  while (MR_TRUE)
#line 1101 "digraph.m"
    {
#line 1101 "digraph.m"
      /* tailcall optimized into a loop */
#line 1101 "digraph.m"
      {
#line 1101 "digraph.m"
        MR_bool mercury__digraph__succeeded;

#line 1101 "digraph.m"
        if ((mercury__digraph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1101 "digraph.m"
          *mercury__digraph__STATE_VARIABLE_Acc_6 = mercury__digraph__STATE_VARIABLE_Acc_0_5;
#line 1101 "digraph.m"
        else
#line 1102 "digraph.m"
          {
#line 1102 "digraph.m"
            MR_Word mercury__digraph__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 0)));
#line 1102 "digraph.m"
            MR_Word mercury__digraph__Xs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 1)));
#line 1102 "digraph.m"
            MR_Box mercury__digraph__VX_19;
#line 1102 "digraph.m"
            MR_Word mercury__digraph__Children_20;
#line 1102 "digraph.m"
            MR_Word mercury__digraph__V_23_23;
#line 1102 "digraph.m"
            MR_Box mercury__digraph__STATE_VARIABLE_Acc_24_24;
#line 1102 "digraph.m"
            MR_Box mercury__digraph__STATE_VARIABLE_Acc_25_25;
#line 1108 "digraph.m"
            void MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 436 "digraph.m"
            {
#line 436 "digraph.m"
              mercury__digraph__lookup_vertex_3_p_0(mercury__digraph__TypeInfo_for_T_27, mercury__digraph__G_2, mercury__digraph__X_13, &mercury__digraph__VX_19);
            }
#line 510 "digraph.m"
            {
#line 510 "digraph.m"
              mercury__digraph__lookup_from_3_p_0(mercury__digraph__TypeInfo_for_T_27, mercury__digraph__G_2, mercury__digraph__X_13, &mercury__digraph__V_23_23);
            }
#line 271 "set_ordlist.opt"
            mercury__digraph__Children_20 = (MR_Word) mercury__digraph__V_23_23;
#line 1108 "digraph.m"
            mercury__digraph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__digraph__ProcessVertex_3, (MR_Integer) 1)));
#line 1108 "digraph.m"
            {
#line 1108 "digraph.m"
              mercury__digraph__func_0(((MR_Box) mercury__digraph__ProcessVertex_3), mercury__digraph__VX_19, mercury__digraph__STATE_VARIABLE_Acc_0_5, &mercury__digraph__STATE_VARIABLE_Acc_24_24);
            }
#line 1109 "digraph.m"
            {
#line 1109 "digraph.m"
              mercury__digraph__traverse_children_6_p_1(mercury__digraph__TypeInfo_for_T_27, mercury__digraph__TypeInfo_for_A_28, mercury__digraph__Children_20, mercury__digraph__VX_19, mercury__digraph__G_2, mercury__digraph__ProcessEdge_4, mercury__digraph__STATE_VARIABLE_Acc_24_24, &mercury__digraph__STATE_VARIABLE_Acc_25_25);
            }
#line 1110 "digraph.m"
            /* direct tailcall eliminated */
#line 1110 "digraph.m"
            {
#line 1110 "digraph.m"
              MR_Word mercury__digraph__HeadVar__1__tmp_copy_1 = mercury__digraph__Xs_14;
#line 1110 "digraph.m"
              MR_Box mercury__digraph__STATE_VARIABLE_Acc_0__tmp_copy_5 = mercury__digraph__STATE_VARIABLE_Acc_25_25;

#line 1110 "digraph.m"
              mercury__digraph__STATE_VARIABLE_Acc_0_5 = mercury__digraph__STATE_VARIABLE_Acc_0__tmp_copy_5;
#line 1110 "digraph.m"
              mercury__digraph__HeadVar__1_1 = mercury__digraph__HeadVar__1__tmp_copy_1;
#line 1110 "digraph.m"
            }
#line 1110 "digraph.m"
            continue;
#line 1102 "digraph.m"
          }
#line 1101 "digraph.m"
      }
#line 1101 "digraph.m"
      break;
#line 1101 "digraph.m"
    }
#line 1098 "digraph.m"
}

#line 1096 "digraph.m"
void MR_CALL 
mercury__digraph__traverse_2_6_p_0(
#line 1096 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_27,
#line 1096 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_A_28,
#line 1096 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 1096 "digraph.m"
  MR_Word mercury__digraph__G_2,
#line 1096 "digraph.m"
  MR_Word mercury__digraph__ProcessVertex_3,
#line 1096 "digraph.m"
  MR_Word mercury__digraph__ProcessEdge_4,
#line 1096 "digraph.m"
  MR_Box mercury__digraph__STATE_VARIABLE_Acc_0_5,
#line 1096 "digraph.m"
  MR_Box * mercury__digraph__STATE_VARIABLE_Acc_6)
#line 1096 "digraph.m"
{
#line 1101 "digraph.m"
  while (MR_TRUE)
#line 1101 "digraph.m"
    {
#line 1101 "digraph.m"
      /* tailcall optimized into a loop */
#line 1101 "digraph.m"
      {
#line 1101 "digraph.m"
        MR_bool mercury__digraph__succeeded;

#line 1101 "digraph.m"
        if ((mercury__digraph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1101 "digraph.m"
          *mercury__digraph__STATE_VARIABLE_Acc_6 = mercury__digraph__STATE_VARIABLE_Acc_0_5;
#line 1101 "digraph.m"
        else
#line 1102 "digraph.m"
          {
#line 1102 "digraph.m"
            MR_Word mercury__digraph__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 0)));
#line 1102 "digraph.m"
            MR_Word mercury__digraph__Xs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 1)));
#line 1102 "digraph.m"
            MR_Box mercury__digraph__VX_19;
#line 1102 "digraph.m"
            MR_Word mercury__digraph__Children_20;
#line 1102 "digraph.m"
            MR_Word mercury__digraph__V_23_23;
#line 1102 "digraph.m"
            MR_Box mercury__digraph__STATE_VARIABLE_Acc_24_24;
#line 1102 "digraph.m"
            MR_Box mercury__digraph__STATE_VARIABLE_Acc_25_25;
#line 1108 "digraph.m"
            void MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 436 "digraph.m"
            {
#line 436 "digraph.m"
              mercury__digraph__lookup_vertex_3_p_0(mercury__digraph__TypeInfo_for_T_27, mercury__digraph__G_2, mercury__digraph__X_13, &mercury__digraph__VX_19);
            }
#line 510 "digraph.m"
            {
#line 510 "digraph.m"
              mercury__digraph__lookup_from_3_p_0(mercury__digraph__TypeInfo_for_T_27, mercury__digraph__G_2, mercury__digraph__X_13, &mercury__digraph__V_23_23);
            }
#line 271 "set_ordlist.opt"
            mercury__digraph__Children_20 = (MR_Word) mercury__digraph__V_23_23;
#line 1108 "digraph.m"
            mercury__digraph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__digraph__ProcessVertex_3, (MR_Integer) 1)));
#line 1108 "digraph.m"
            {
#line 1108 "digraph.m"
              mercury__digraph__func_0(((MR_Box) mercury__digraph__ProcessVertex_3), mercury__digraph__VX_19, mercury__digraph__STATE_VARIABLE_Acc_0_5, &mercury__digraph__STATE_VARIABLE_Acc_24_24);
            }
#line 1109 "digraph.m"
            {
#line 1109 "digraph.m"
              mercury__digraph__traverse_children_6_p_0(mercury__digraph__TypeInfo_for_T_27, mercury__digraph__TypeInfo_for_A_28, mercury__digraph__Children_20, mercury__digraph__VX_19, mercury__digraph__G_2, mercury__digraph__ProcessEdge_4, mercury__digraph__STATE_VARIABLE_Acc_24_24, &mercury__digraph__STATE_VARIABLE_Acc_25_25);
            }
#line 1110 "digraph.m"
            /* direct tailcall eliminated */
#line 1110 "digraph.m"
            {
#line 1110 "digraph.m"
              MR_Word mercury__digraph__HeadVar__1__tmp_copy_1 = mercury__digraph__Xs_14;
#line 1110 "digraph.m"
              MR_Box mercury__digraph__STATE_VARIABLE_Acc_0__tmp_copy_5 = mercury__digraph__STATE_VARIABLE_Acc_25_25;

#line 1110 "digraph.m"
              mercury__digraph__STATE_VARIABLE_Acc_0_5 = mercury__digraph__STATE_VARIABLE_Acc_0__tmp_copy_5;
#line 1110 "digraph.m"
              mercury__digraph__HeadVar__1_1 = mercury__digraph__HeadVar__1__tmp_copy_1;
#line 1110 "digraph.m"
            }
#line 1110 "digraph.m"
            continue;
#line 1102 "digraph.m"
          }
#line 1101 "digraph.m"
      }
#line 1101 "digraph.m"
      break;
#line 1101 "digraph.m"
    }
#line 1096 "digraph.m"
}

#line 1080 "digraph.m"
static void MR_CALL 
mercury__digraph__add_cartesian_product_4_p_0(
#line 1080 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_23,
#line 1080 "digraph.m"
  MR_Word mercury__digraph__KeySet1_5,
#line 1080 "digraph.m"
  MR_Word mercury__digraph__KeySet2_6,
#line 1080 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Rtc_0_9,
#line 1080 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Rtc_10)
#line 1080 "digraph.m"
{
#line 1083 "digraph.m"
  {
#line 1083 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 1083 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_33_33 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 1083 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_34_34;
#line 1083 "digraph.m"
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_35 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 1083 "digraph.m"
    MR_Word mercury__digraph__TypeClassInfo_for_enum_36;
#line 1083 "digraph.m"
    MR_Word mercury__digraph__V_6_42;

#line 7688 "digraph.c"
    {
#line 7690 "digraph.c"
      mercury__digraph__TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7692 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_34_34, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_33_33));
#line 7694 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_34_34, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_23));
#line 7696 "digraph.c"
    }
#line 7698 "digraph.c"
    {
#line 7700 "digraph.c"
      mercury__digraph__TypeClassInfo_for_enum_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7702 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_36, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_35));
#line 7704 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_36, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_23));
#line 7706 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_36, 2) = ((MR_Box) (mercury__digraph__TypeInfo_34_34));
#line 7708 "digraph.c"
    }
#line 441 "sparse_bitset.opt"
    mercury__digraph__V_6_42 = (MR_Word) mercury__digraph__KeySet1_5;
#line 442 "sparse_bitset.opt"
    {
#line 442 "sparse_bitset.opt"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_23, mercury__digraph__KeySet2_6, mercury__digraph__TypeClassInfo_for_enum_36, mercury__digraph__V_6_42, mercury__digraph__STATE_VARIABLE_Rtc_0_9, mercury__digraph__STATE_VARIABLE_Rtc_10);
#line 442 "sparse_bitset.opt"
      return;
    }
#line 1083 "digraph.m"
  }
#line 1080 "digraph.m"
}

#line 1057 "digraph.m"
static void MR_CALL 
mercury__digraph__rtc_2_5_p_0(
#line 1057 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_30,
#line 1057 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 1057 "digraph.m"
  MR_Word mercury__digraph__G_2,
#line 1057 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Vis_0_3,
#line 1057 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Rtc_0_4,
#line 1057 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Rtc_5)
#line 1057 "digraph.m"
{
#line 1060 "digraph.m"
  while (MR_TRUE)
#line 1060 "digraph.m"
    {
#line 1060 "digraph.m"
      /* tailcall optimized into a loop */
#line 1060 "digraph.m"
      {
#line 1060 "digraph.m"
        MR_bool mercury__digraph__succeeded;

#line 1060 "digraph.m"
        if ((mercury__digraph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1060 "digraph.m"
          *mercury__digraph__STATE_VARIABLE_Rtc_5 = mercury__digraph__STATE_VARIABLE_Rtc_0_4;
#line 1060 "digraph.m"
        else
#line 1061 "digraph.m"
          {
#line 1061 "digraph.m"
            MR_Word mercury__digraph__X_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 0)));
#line 1061 "digraph.m"
            MR_Word mercury__digraph__Xs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 1)));
#line 1061 "digraph.m"
            MR_Word mercury__digraph__STATE_VARIABLE_Vis_23_23;
#line 1061 "digraph.m"
            MR_Word mercury__digraph__STATE_VARIABLE_Rtc_28_28;
#line 1062 "digraph.m"
            MR_Word mercury__digraph__TypeCtorInfo_31_31 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 1062 "digraph.m"
            MR_Word mercury__digraph__TypeInfo_32_32;
#line 1062 "digraph.m"
            MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_33 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 1062 "digraph.m"
            MR_Word mercury__digraph__TypeClassInfo_for_enum_34;
#line 1062 "digraph.m"
            MR_Word mercury__digraph__V_3_48;
#line 1062 "digraph.m"
            MR_Integer mercury__digraph__V_5_49;
#line 7780 "digraph.c"
            MR_Box MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box);
#line 7782 "digraph.c"
            MR_Box mercury__digraph__conv1_V_5_49;

#line 7785 "digraph.c"
            {
#line 7787 "digraph.c"
              mercury__digraph__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7789 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_32_32, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_31_31));
#line 7791 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_32_32, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_30));
#line 7793 "digraph.c"
            }
#line 7795 "digraph.c"
            {
#line 7797 "digraph.c"
              mercury__digraph__TypeClassInfo_for_enum_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7799 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_34, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_33));
#line 7801 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_34, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_30));
#line 7803 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_34, 2) = ((MR_Box) (mercury__digraph__TypeInfo_32_32));
#line 7805 "digraph.c"
            }
#line 183 "sparse_bitset.opt"
            mercury__digraph__V_3_48 = (MR_Word) mercury__digraph__STATE_VARIABLE_Vis_0_3;
#line 7809 "digraph.c"
            mercury__digraph__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 7811 "digraph.c"
            {
#line 7813 "digraph.c"
              mercury__digraph__conv1_V_5_49 = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_34), ((MR_Box) (mercury__digraph__X_11)));
            }
#line 7816 "digraph.c"
            mercury__digraph__V_5_49 = ((MR_Integer) mercury__digraph__conv1_V_5_49);
#line 185 "sparse_bitset.opt"
            {
#line 185 "sparse_bitset.opt"
              mercury__digraph__succeeded = mercury__sparse_bitset__contains_search_nodes_2_p_0(mercury__digraph__V_3_48, mercury__digraph__V_5_49);
            }
#line 1064 "digraph.m"
            if (mercury__digraph__succeeded)
#line 1063 "digraph.m"
              {
#line 1063 "digraph.m"
                mercury__digraph__STATE_VARIABLE_Rtc_28_28 = mercury__digraph__STATE_VARIABLE_Rtc_0_4;
#line 1063 "digraph.m"
                mercury__digraph__STATE_VARIABLE_Vis_23_23 = mercury__digraph__STATE_VARIABLE_Vis_0_3;
#line 1063 "digraph.m"
              }
#line 1064 "digraph.m"
            else
#line 1065 "digraph.m"
              {
#line 1065 "digraph.m"
                MR_Word mercury__digraph__TypeCtorInfo_35_35;
#line 1065 "digraph.m"
                MR_Word mercury__digraph__TypeInfo_36_36;
#line 1065 "digraph.m"
                MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_37;
#line 1065 "digraph.m"
                MR_Word mercury__digraph__TypeClassInfo_for_enum_38;
#line 1065 "digraph.m"
                MR_Word mercury__digraph__CliqList_16;
#line 1065 "digraph.m"
                MR_Word mercury__digraph__Cliq_17;
#line 1065 "digraph.m"
                MR_Word mercury__digraph__Followers0_18;
#line 1065 "digraph.m"
                MR_Word mercury__digraph__Followers_19;
#line 1065 "digraph.m"
                MR_Word mercury__digraph__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1065 "digraph.m"
                MR_Word mercury__digraph__V_5_54;
#line 1065 "digraph.m"
                MR_Word mercury__digraph__V_6_58;
#line 1065 "digraph.m"
                MR_Word mercury__digraph__V_6_66;

#line 1065 "digraph.m"
                {
#line 1065 "digraph.m"
                  mercury__digraph__dfs_2_6_p_0(mercury__digraph__TypeInfo_for_T_30, mercury__digraph__G_2, mercury__digraph__X_11, mercury__digraph__STATE_VARIABLE_Vis_0_3, &mercury__digraph__STATE_VARIABLE_Vis_23_23, mercury__digraph__V_24_24, &mercury__digraph__CliqList_16);
                }
#line 7867 "digraph.c"
                mercury__digraph__BaseTypeClassInfo_for_enum_37 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 7869 "digraph.c"
                mercury__digraph__TypeCtorInfo_35_35 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 7871 "digraph.c"
                {
#line 7873 "digraph.c"
                  mercury__digraph__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7875 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_36_36, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_35_35));
#line 7877 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_36_36, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_30));
#line 7879 "digraph.c"
                }
#line 7881 "digraph.c"
                {
#line 7883 "digraph.c"
                  mercury__digraph__TypeClassInfo_for_enum_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7885 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_38, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_37));
#line 7887 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_38, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_30));
#line 7889 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_38, 2) = ((MR_Box) (mercury__digraph__TypeInfo_36_36));
#line 7891 "digraph.c"
                }
#line 529 "sparse_bitset.opt"
                mercury__digraph__V_5_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "sparse_bitset.opt"
                {
#line 528 "sparse_bitset.opt"
                  mercury__digraph__V_6_58 = mercury__sparse_bitset__list_to_set_2_2_f_0(mercury__digraph__TypeClassInfo_for_enum_38, (MR_Word) mercury__digraph__CliqList_16, mercury__digraph__V_5_54);
                }
#line 527 "sparse_bitset.opt"
                mercury__digraph__Cliq_17 = (MR_Word) mercury__digraph__V_6_58;
#line 442 "sparse_bitset.opt"
                {
#line 442 "sparse_bitset.opt"
                  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_30, mercury__digraph__G_2, mercury__digraph__TypeClassInfo_for_enum_38, mercury__digraph__V_6_58, mercury__digraph__Cliq_17, &mercury__digraph__Followers0_18);
                }
#line 441 "sparse_bitset.opt"
                mercury__digraph__V_6_66 = (MR_Word) mercury__digraph__Followers0_18;
#line 442 "sparse_bitset.opt"
                {
#line 442 "sparse_bitset.opt"
                  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_30, mercury__digraph__STATE_VARIABLE_Rtc_0_4, mercury__digraph__TypeClassInfo_for_enum_38, mercury__digraph__V_6_66, mercury__digraph__Cliq_17, &mercury__digraph__Followers_19);
                }
#line 1069 "digraph.m"
                {
#line 1069 "digraph.m"
                  mercury__digraph__add_cartesian_product_4_p_0(mercury__digraph__TypeInfo_for_T_30, mercury__digraph__Cliq_17, mercury__digraph__Followers_19, mercury__digraph__STATE_VARIABLE_Rtc_0_4, &mercury__digraph__STATE_VARIABLE_Rtc_28_28);
                }
#line 1065 "digraph.m"
              }
#line 1071 "digraph.m"
            /* direct tailcall eliminated */
#line 1071 "digraph.m"
            {
#line 1071 "digraph.m"
              MR_Word mercury__digraph__HeadVar__1__tmp_copy_1 = mercury__digraph__Xs_12;
#line 1071 "digraph.m"
              MR_Word mercury__digraph__STATE_VARIABLE_Vis_0__tmp_copy_3 = mercury__digraph__STATE_VARIABLE_Vis_23_23;
#line 1071 "digraph.m"
              MR_Word mercury__digraph__STATE_VARIABLE_Rtc_0__tmp_copy_4 = mercury__digraph__STATE_VARIABLE_Rtc_28_28;

#line 1071 "digraph.m"
              mercury__digraph__STATE_VARIABLE_Rtc_0_4 = mercury__digraph__STATE_VARIABLE_Rtc_0__tmp_copy_4;
#line 1071 "digraph.m"
              mercury__digraph__STATE_VARIABLE_Vis_0_3 = mercury__digraph__STATE_VARIABLE_Vis_0__tmp_copy_3;
#line 1071 "digraph.m"
              mercury__digraph__HeadVar__1_1 = mercury__digraph__HeadVar__1__tmp_copy_1;
#line 1071 "digraph.m"
            }
#line 1071 "digraph.m"
            continue;
#line 1061 "digraph.m"
          }
#line 1060 "digraph.m"
      }
#line 1060 "digraph.m"
      break;
#line 1060 "digraph.m"
    }
#line 1057 "digraph.m"
}

#line 1012 "digraph.m"
void MR_CALL 
mercury__digraph__detect_fake_reflexives_5_p_0(
#line 1012 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_25,
#line 1012 "digraph.m"
  MR_Word mercury__digraph__G_1,
#line 1012 "digraph.m"
  MR_Word mercury__digraph__Rtc_2,
#line 1012 "digraph.m"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 1012 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Fakes_0_4,
#line 1012 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Fakes_5)
#line 1012 "digraph.m"
{
#line 1016 "digraph.m"
  while (MR_TRUE)
#line 1016 "digraph.m"
    {
#line 1016 "digraph.m"
      /* tailcall optimized into a loop */
#line 1016 "digraph.m"
      {
#line 1016 "digraph.m"
        MR_bool mercury__digraph__succeeded;

#line 1016 "digraph.m"
        if ((mercury__digraph__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1016 "digraph.m"
          *mercury__digraph__STATE_VARIABLE_Fakes_5 = mercury__digraph__STATE_VARIABLE_Fakes_0_4;
#line 1016 "digraph.m"
        else
#line 1017 "digraph.m"
          {
#line 1017 "digraph.m"
            MR_Word mercury__digraph__TypeCtorInfo_26_26;
#line 1017 "digraph.m"
            MR_Word mercury__digraph__TypeInfo_27_27;
#line 1017 "digraph.m"
            MR_Word mercury__digraph__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__3_3, (MR_Integer) 0)));
#line 1017 "digraph.m"
            MR_Word mercury__digraph__Xs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__3_3, (MR_Integer) 1)));
#line 1017 "digraph.m"
            MR_Word mercury__digraph__SuccXs_16;
#line 1017 "digraph.m"
            MR_Word mercury__digraph__PreXs_17;
#line 1017 "digraph.m"
            MR_Word mercury__digraph__Ys_18;
#line 1017 "digraph.m"
            MR_Word mercury__digraph__STATE_VARIABLE_Fakes_21_21;
#line 1017 "digraph.m"
            MR_Word mercury__digraph__V_4_31;
#line 1017 "digraph.m"
            MR_Word mercury__digraph__V_5_32;
#line 1017 "digraph.m"
            MR_Word mercury__digraph__V_6_33;
#line 342 "sparse_bitset.opt"
            MR_Word mercury__digraph__V_35_35;
#line 342 "sparse_bitset.opt"
            MR_Word mercury__digraph__V_2_38;

#line 1018 "digraph.m"
            {
#line 1018 "digraph.m"
              mercury__digraph__lookup_key_set_from_3_p_0(mercury__digraph__TypeInfo_for_T_25, mercury__digraph__G_1, mercury__digraph__X_13, &mercury__digraph__SuccXs_16);
            }
#line 1019 "digraph.m"
            {
#line 1019 "digraph.m"
              mercury__digraph__lookup_key_set_to_3_p_0(mercury__digraph__TypeInfo_for_T_25, mercury__digraph__Rtc_2, mercury__digraph__X_13, &mercury__digraph__PreXs_17);
            }
#line 8026 "digraph.c"
            mercury__digraph__TypeCtorInfo_26_26 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 8028 "digraph.c"
            {
#line 8030 "digraph.c"
              mercury__digraph__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8032 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_26_26));
#line 8034 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_25));
#line 8036 "digraph.c"
            }
#line 512 "sparse_bitset.opt"
            mercury__digraph__V_4_31 = (MR_Word) mercury__digraph__SuccXs_16;
#line 512 "sparse_bitset.opt"
            mercury__digraph__V_5_32 = (MR_Word) mercury__digraph__PreXs_17;
#line 513 "sparse_bitset.opt"
            {
#line 513 "sparse_bitset.opt"
              mercury__digraph__V_6_33 = mercury__sparse_bitset__intersect_2_2_f_0(mercury__digraph__V_4_31, mercury__digraph__V_5_32);
            }
#line 512 "sparse_bitset.opt"
            mercury__digraph__Ys_18 = (MR_Word) mercury__digraph__V_6_33;
#line 485 "sparse_bitset.opt"
            mercury__digraph__V_2_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 484 "sparse_bitset.opt"
            mercury__digraph__V_35_35 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 342 "sparse_bitset.opt"
            {
#line 342 "sparse_bitset.opt"
              mercury__digraph__succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(mercury__digraph__TypeInfo_27_27, (MR_Word) mercury__digraph__Ys_18, (MR_Word) mercury__digraph__V_35_35);
            }
#line 1023 "digraph.m"
            if (mercury__digraph__succeeded)
#line 1022 "digraph.m"
              {
#line 1022 "digraph.m"
                MR_Word mercury__digraph__V_22_22;

#line 1022 "digraph.m"
                {
#line 1022 "digraph.m"
                  mercury__digraph__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1022 "digraph.m"
                  MR_hl_field(MR_mktag(0), mercury__digraph__V_22_22, 0) = ((MR_Box) (mercury__digraph__X_13));
#line 1022 "digraph.m"
                  MR_hl_field(MR_mktag(0), mercury__digraph__V_22_22, 1) = ((MR_Box) (mercury__digraph__X_13));
#line 1022 "digraph.m"
                }
#line 1022 "digraph.m"
                {
#line 1022 "digraph.m"
                  mercury__digraph__STATE_VARIABLE_Fakes_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1022 "digraph.m"
                  MR_hl_field(MR_mktag(1), mercury__digraph__STATE_VARIABLE_Fakes_21_21, 0) = ((MR_Box) (mercury__digraph__V_22_22));
#line 1022 "digraph.m"
                  MR_hl_field(MR_mktag(1), mercury__digraph__STATE_VARIABLE_Fakes_21_21, 1) = ((MR_Box) (mercury__digraph__STATE_VARIABLE_Fakes_0_4));
#line 1022 "digraph.m"
                }
#line 1022 "digraph.m"
              }
#line 1023 "digraph.m"
            else
#line 1023 "digraph.m"
              mercury__digraph__STATE_VARIABLE_Fakes_21_21 = mercury__digraph__STATE_VARIABLE_Fakes_0_4;
#line 1026 "digraph.m"
            /* direct tailcall eliminated */
#line 1026 "digraph.m"
            {
#line 1026 "digraph.m"
              MR_Word mercury__digraph__HeadVar__3__tmp_copy_3 = mercury__digraph__Xs_14;
#line 1026 "digraph.m"
              MR_Word mercury__digraph__STATE_VARIABLE_Fakes_0__tmp_copy_4 = mercury__digraph__STATE_VARIABLE_Fakes_21_21;

#line 1026 "digraph.m"
              mercury__digraph__STATE_VARIABLE_Fakes_0_4 = mercury__digraph__STATE_VARIABLE_Fakes_0__tmp_copy_4;
#line 1026 "digraph.m"
              mercury__digraph__HeadVar__3_3 = mercury__digraph__HeadVar__3__tmp_copy_3;
#line 1026 "digraph.m"
            }
#line 1026 "digraph.m"
            continue;
#line 1017 "digraph.m"
          }
#line 1016 "digraph.m"
      }
#line 1016 "digraph.m"
      break;
#line 1016 "digraph.m"
    }
#line 1012 "digraph.m"
}

#line 961 "digraph.m"
void MR_CALL 
mercury__digraph__atsort_2_5_p_0(
#line 961 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_27,
#line 961 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 961 "digraph.m"
  MR_Word mercury__digraph__GInv_2,
#line 961 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Vis_0_3,
#line 961 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_ATsort_0_4,
#line 961 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_ATsort_5)
#line 961 "digraph.m"
{
#line 964 "digraph.m"
  while (MR_TRUE)
#line 964 "digraph.m"
    {
#line 964 "digraph.m"
      /* tailcall optimized into a loop */
#line 964 "digraph.m"
      {
#line 964 "digraph.m"
        MR_bool mercury__digraph__succeeded;

#line 964 "digraph.m"
        if ((mercury__digraph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 964 "digraph.m"
          *mercury__digraph__STATE_VARIABLE_ATsort_5 = mercury__digraph__STATE_VARIABLE_ATsort_0_4;
#line 964 "digraph.m"
        else
#line 965 "digraph.m"
          {
#line 965 "digraph.m"
            MR_Word mercury__digraph__X_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 0)));
#line 965 "digraph.m"
            MR_Word mercury__digraph__Xs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 1)));
#line 965 "digraph.m"
            MR_Word mercury__digraph__STATE_VARIABLE_Vis_22_22;
#line 965 "digraph.m"
            MR_Word mercury__digraph__STATE_VARIABLE_ATsort_25_25;
#line 966 "digraph.m"
            MR_Word mercury__digraph__TypeCtorInfo_28_28 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 966 "digraph.m"
            MR_Word mercury__digraph__TypeInfo_29_29;
#line 966 "digraph.m"
            MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_30 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 966 "digraph.m"
            MR_Word mercury__digraph__TypeClassInfo_for_enum_31;
#line 966 "digraph.m"
            MR_Word mercury__digraph__V_3_37;
#line 966 "digraph.m"
            MR_Integer mercury__digraph__V_5_38;
#line 8175 "digraph.c"
            MR_Box MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box);
#line 8177 "digraph.c"
            MR_Box mercury__digraph__conv1_V_5_38;

#line 8180 "digraph.c"
            {
#line 8182 "digraph.c"
              mercury__digraph__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8184 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_28_28));
#line 8186 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_27));
#line 8188 "digraph.c"
            }
#line 8190 "digraph.c"
            {
#line 8192 "digraph.c"
              mercury__digraph__TypeClassInfo_for_enum_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8194 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_31, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_30));
#line 8196 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_31, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_27));
#line 8198 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_31, 2) = ((MR_Box) (mercury__digraph__TypeInfo_29_29));
#line 8200 "digraph.c"
            }
#line 183 "sparse_bitset.opt"
            mercury__digraph__V_3_37 = (MR_Word) mercury__digraph__STATE_VARIABLE_Vis_0_3;
#line 8204 "digraph.c"
            mercury__digraph__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_31, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8206 "digraph.c"
            {
#line 8208 "digraph.c"
              mercury__digraph__conv1_V_5_38 = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_31), ((MR_Box) (mercury__digraph__X_11)));
            }
#line 8211 "digraph.c"
            mercury__digraph__V_5_38 = ((MR_Integer) mercury__digraph__conv1_V_5_38);
#line 185 "sparse_bitset.opt"
            {
#line 185 "sparse_bitset.opt"
              mercury__digraph__succeeded = mercury__sparse_bitset__contains_search_nodes_2_p_0(mercury__digraph__V_3_37, mercury__digraph__V_5_38);
            }
#line 968 "digraph.m"
            if (mercury__digraph__succeeded)
#line 967 "digraph.m"
              {
#line 967 "digraph.m"
                mercury__digraph__STATE_VARIABLE_ATsort_25_25 = mercury__digraph__STATE_VARIABLE_ATsort_0_4;
#line 967 "digraph.m"
                mercury__digraph__STATE_VARIABLE_Vis_22_22 = mercury__digraph__STATE_VARIABLE_Vis_0_3;
#line 967 "digraph.m"
              }
#line 968 "digraph.m"
            else
#line 969 "digraph.m"
              {
#line 969 "digraph.m"
                MR_Word mercury__digraph__CliqKeys_16;
#line 969 "digraph.m"
                MR_Word mercury__digraph__CliqList_17;
#line 969 "digraph.m"
                MR_Word mercury__digraph__Cliq_18;
#line 969 "digraph.m"
                MR_Word mercury__digraph__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 969 "digraph.m"
                MR_Word mercury__digraph__V_4_42;
#line 969 "digraph.m"
                MR_Integer mercury__digraph__V_5_45;

#line 969 "digraph.m"
                {
#line 969 "digraph.m"
                  mercury__digraph__dfs_2_6_p_0(mercury__digraph__TypeInfo_for_T_27, mercury__digraph__GInv_2, mercury__digraph__X_11, mercury__digraph__STATE_VARIABLE_Vis_0_3, &mercury__digraph__STATE_VARIABLE_Vis_22_22, mercury__digraph__V_23_23, &mercury__digraph__CliqKeys_16);
                }
#line 970 "digraph.m"
                {
#line 970 "digraph.m"
                  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_54_53_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(mercury__digraph__TypeInfo_for_T_27, mercury__digraph__GInv_2, mercury__digraph__CliqKeys_16, &mercury__digraph__CliqList_17);
                }
#line 600 "list.opt"
                {
#line 600 "list.opt"
                  mercury__list__length_acc_3_p_0(mercury__digraph__TypeInfo_for_T_27, mercury__digraph__CliqList_17, (MR_Integer) 0, &mercury__digraph__V_5_45);
                }
#line 1102 "list.opt"
                {
#line 1102 "list.opt"
                  mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__digraph__TypeInfo_for_T_27, mercury__digraph__V_5_45, mercury__digraph__CliqList_17, &mercury__digraph__V_4_42);
                }
#line 214 "set_ordlist.opt"
                mercury__digraph__Cliq_18 = (MR_Word) mercury__digraph__V_4_42;
#line 972 "digraph.m"
                {
#line 972 "digraph.m"
                  mercury__digraph__STATE_VARIABLE_ATsort_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 972 "digraph.m"
                  MR_hl_field(MR_mktag(1), mercury__digraph__STATE_VARIABLE_ATsort_25_25, 0) = ((MR_Box) (mercury__digraph__Cliq_18));
#line 972 "digraph.m"
                  MR_hl_field(MR_mktag(1), mercury__digraph__STATE_VARIABLE_ATsort_25_25, 1) = ((MR_Box) (mercury__digraph__STATE_VARIABLE_ATsort_0_4));
#line 972 "digraph.m"
                }
#line 969 "digraph.m"
              }
#line 974 "digraph.m"
            /* direct tailcall eliminated */
#line 974 "digraph.m"
            {
#line 974 "digraph.m"
              MR_Word mercury__digraph__HeadVar__1__tmp_copy_1 = mercury__digraph__Xs_12;
#line 974 "digraph.m"
              MR_Word mercury__digraph__STATE_VARIABLE_Vis_0__tmp_copy_3 = mercury__digraph__STATE_VARIABLE_Vis_22_22;
#line 974 "digraph.m"
              MR_Word mercury__digraph__STATE_VARIABLE_ATsort_0__tmp_copy_4 = mercury__digraph__STATE_VARIABLE_ATsort_25_25;

#line 974 "digraph.m"
              mercury__digraph__STATE_VARIABLE_ATsort_0_4 = mercury__digraph__STATE_VARIABLE_ATsort_0__tmp_copy_4;
#line 974 "digraph.m"
              mercury__digraph__STATE_VARIABLE_Vis_0_3 = mercury__digraph__STATE_VARIABLE_Vis_0__tmp_copy_3;
#line 974 "digraph.m"
              mercury__digraph__HeadVar__1_1 = mercury__digraph__HeadVar__1__tmp_copy_1;
#line 974 "digraph.m"
            }
#line 974 "digraph.m"
            continue;
#line 965 "digraph.m"
          }
#line 964 "digraph.m"
      }
#line 964 "digraph.m"
      break;
#line 964 "digraph.m"
    }
#line 961 "digraph.m"
}

#line 933 "digraph.m"
MR_bool MR_CALL 
mercury__digraph__check_tsort_3_p_0(
#line 933 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_13,
#line 933 "digraph.m"
  MR_Word mercury__digraph__G_1,
#line 933 "digraph.m"
  MR_Word mercury__digraph__Vis0_2,
#line 933 "digraph.m"
  MR_Word mercury__digraph__HeadVar__3_3)
#line 933 "digraph.m"
{
#line 936 "digraph.m"
  while (MR_TRUE)
#line 936 "digraph.m"
    {
#line 936 "digraph.m"
      /* tailcall optimized into a loop */
#line 936 "digraph.m"
      {
#line 936 "digraph.m"
        MR_bool mercury__digraph__succeeded;

#line 936 "digraph.m"
        if ((mercury__digraph__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 936 "digraph.m"
          mercury__digraph__succeeded = MR_TRUE;
#line 936 "digraph.m"
        else
#line 937 "digraph.m"
          {
#line 937 "digraph.m"
            MR_Word mercury__digraph__TypeCtorInfo_14_14 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 937 "digraph.m"
            MR_Word mercury__digraph__TypeInfo_15_15;
#line 937 "digraph.m"
            MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_16 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 937 "digraph.m"
            MR_Word mercury__digraph__TypeClassInfo_for_enum_17;
#line 937 "digraph.m"
            MR_Word mercury__digraph__X_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__3_3, (MR_Integer) 0)));
#line 937 "digraph.m"
            MR_Word mercury__digraph__Xs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__3_3, (MR_Integer) 1)));
#line 937 "digraph.m"
            MR_Word mercury__digraph__Vis_10;
#line 937 "digraph.m"
            MR_Word mercury__digraph__SuccXs_11;
#line 937 "digraph.m"
            MR_Word mercury__digraph__BackPointers_12;
#line 937 "digraph.m"
            MR_Word mercury__digraph__V_6_21;
#line 937 "digraph.m"
            MR_Integer mercury__digraph__V_9_23;
#line 937 "digraph.m"
            MR_Word mercury__digraph__V_5_24;
#line 937 "digraph.m"
            MR_Word mercury__digraph__V_4_28;
#line 937 "digraph.m"
            MR_Word mercury__digraph__V_5_29;
#line 937 "digraph.m"
            MR_Word mercury__digraph__V_6_30;
#line 937 "digraph.m"
            MR_Word mercury__digraph__V_32_32;
#line 937 "digraph.m"
            MR_Word mercury__digraph__V_2_35;
#line 8377 "digraph.c"
            MR_Box MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box);
#line 8379 "digraph.c"
            MR_Box mercury__digraph__conv1_V_9_23;

#line 8382 "digraph.c"
            {
#line 8384 "digraph.c"
              mercury__digraph__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8386 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
#line 8388 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
#line 8390 "digraph.c"
            }
#line 8392 "digraph.c"
            {
#line 8394 "digraph.c"
              mercury__digraph__TypeClassInfo_for_enum_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8396 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_17, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_16));
#line 8398 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
#line 8400 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_17, 2) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 8402 "digraph.c"
            }
#line 488 "sparse_bitset.opt"
            mercury__digraph__V_6_21 = (MR_Word) mercury__digraph__Vis0_2;
#line 8406 "digraph.c"
            mercury__digraph__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8408 "digraph.c"
            {
#line 8410 "digraph.c"
              mercury__digraph__conv1_V_9_23 = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_17), ((MR_Box) (mercury__digraph__X_8)));
            }
#line 8413 "digraph.c"
            mercury__digraph__V_9_23 = ((MR_Integer) mercury__digraph__conv1_V_9_23);
#line 490 "sparse_bitset.opt"
            {
#line 490 "sparse_bitset.opt"
              mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__V_6_21, mercury__digraph__V_9_23, &mercury__digraph__V_5_24);
            }
#line 491 "sparse_bitset.opt"
            mercury__digraph__Vis_10 = (MR_Word) mercury__digraph__V_5_24;
#line 939 "digraph.m"
            {
#line 939 "digraph.m"
              mercury__digraph__lookup_key_set_from_3_p_0(mercury__digraph__TypeInfo_for_T_13, mercury__digraph__G_1, mercury__digraph__X_8, &mercury__digraph__SuccXs_11);
            }
#line 512 "sparse_bitset.opt"
            mercury__digraph__V_4_28 = (MR_Word) mercury__digraph__Vis_10;
#line 512 "sparse_bitset.opt"
            mercury__digraph__V_5_29 = (MR_Word) mercury__digraph__SuccXs_11;
#line 513 "sparse_bitset.opt"
            {
#line 513 "sparse_bitset.opt"
              mercury__digraph__V_6_30 = mercury__sparse_bitset__intersect_2_2_f_0(mercury__digraph__V_4_28, mercury__digraph__V_5_29);
            }
#line 485 "sparse_bitset.opt"
            mercury__digraph__V_2_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 512 "sparse_bitset.opt"
            mercury__digraph__BackPointers_12 = (MR_Word) mercury__digraph__V_6_30;
#line 484 "sparse_bitset.opt"
            mercury__digraph__V_32_32 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 342 "sparse_bitset.opt"
            {
#line 342 "sparse_bitset.opt"
              mercury__digraph__succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(mercury__digraph__TypeInfo_15_15, (MR_Word) mercury__digraph__BackPointers_12, (MR_Word) mercury__digraph__V_32_32);
            }
#line 937 "digraph.m"
            if (mercury__digraph__succeeded)
#line 942 "digraph.m"
              {
#line 942 "digraph.m"
                /* direct tailcall eliminated */
#line 942 "digraph.m"
                {
#line 942 "digraph.m"
                  MR_Word mercury__digraph__Vis0__tmp_copy_2 = mercury__digraph__Vis_10;
#line 942 "digraph.m"
                  MR_Word mercury__digraph__HeadVar__3__tmp_copy_3 = mercury__digraph__Xs_9;

#line 942 "digraph.m"
                  mercury__digraph__HeadVar__3_3 = mercury__digraph__HeadVar__3__tmp_copy_3;
#line 942 "digraph.m"
                  mercury__digraph__Vis0_2 = mercury__digraph__Vis0__tmp_copy_2;
#line 942 "digraph.m"
                }
#line 942 "digraph.m"
                continue;
#line 942 "digraph.m"
              }
#line 937 "digraph.m"
          }
#line 936 "digraph.m"
        return mercury__digraph__succeeded;
#line 936 "digraph.m"
      }
#line 936 "digraph.m"
      break;
#line 936 "digraph.m"
    }
#line 933 "digraph.m"
}

#line 911 "digraph.m"
void MR_CALL 
mercury__digraph__make_reduced_graph_4_p_0(
#line 911 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_21,
#line 911 "digraph.m"
  MR_Word mercury__digraph__CliqMap_1,
#line 911 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 911 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_R_0_3,
#line 911 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_R_4)
#line 911 "digraph.m"
{
#line 915 "digraph.m"
  while (MR_TRUE)
#line 915 "digraph.m"
    {
#line 915 "digraph.m"
      /* tailcall optimized into a loop */
#line 915 "digraph.m"
      {
#line 915 "digraph.m"
        MR_bool mercury__digraph__succeeded;

#line 915 "digraph.m"
        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 915 "digraph.m"
          *mercury__digraph__STATE_VARIABLE_R_4 = mercury__digraph__STATE_VARIABLE_R_0_3;
#line 915 "digraph.m"
        else
#line 916 "digraph.m"
          {
#line 916 "digraph.m"
            MR_Word mercury__digraph__TypeCtorInfo_22_22;
#line 916 "digraph.m"
            MR_Word mercury__digraph__TypeInfo_23_23;
#line 916 "digraph.m"
            MR_Word mercury__digraph__TypeCtorInfo_24_24;
#line 916 "digraph.m"
            MR_Word mercury__digraph__TypeInfo_25_25;
#line 916 "digraph.m"
            MR_Word mercury__digraph__TypeInfo_26_26;
#line 916 "digraph.m"
            MR_Word mercury__digraph__X_10;
#line 916 "digraph.m"
            MR_Word mercury__digraph__Y_11;
#line 916 "digraph.m"
            MR_Word mercury__digraph__Edges_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 916 "digraph.m"
            MR_Word mercury__digraph__CliqX_14;
#line 916 "digraph.m"
            MR_Word mercury__digraph__CliqY_15;
#line 916 "digraph.m"
            MR_Word mercury__digraph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 916 "digraph.m"
            MR_Word mercury__digraph__STATE_VARIABLE_R_19_19;
#line 917 "digraph.m"
            MR_Box mercury__digraph__conv0_CliqX_14;
#line 918 "digraph.m"
            MR_Box mercury__digraph__conv1_CliqY_15;
#line 335 "digraph.m"
            MR_Integer mercury__digraph__CastX_31;
#line 335 "digraph.m"
            MR_Integer mercury__digraph__CastY_32;

#line 916 "digraph.m"
            mercury__digraph__X_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_18_18, (MR_Integer) 0)));
#line 916 "digraph.m"
            mercury__digraph__Y_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_18_18, (MR_Integer) 1)));
#line 8554 "digraph.c"
            mercury__digraph__TypeCtorInfo_22_22 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 8556 "digraph.c"
            {
#line 8558 "digraph.c"
              mercury__digraph__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8560 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_23, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_22_22));
#line 8562 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_21));
#line 8564 "digraph.c"
            }
#line 8566 "digraph.c"
            mercury__digraph__TypeCtorInfo_24_24 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 8568 "digraph.c"
            {
#line 8570 "digraph.c"
              mercury__digraph__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8572 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_24_24));
#line 8574 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_21));
#line 8576 "digraph.c"
            }
#line 8578 "digraph.c"
            {
#line 8580 "digraph.c"
              mercury__digraph__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8582 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_26_26, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_22_22));
#line 8584 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_26_26, 1) = ((MR_Box) (mercury__digraph__TypeInfo_25_25));
#line 8586 "digraph.c"
            }
#line 917 "digraph.m"
            {
#line 917 "digraph.m"
              mercury__map__lookup_3_p_0(mercury__digraph__TypeInfo_23_23, mercury__digraph__TypeInfo_26_26, (MR_Word) mercury__digraph__CliqMap_1, ((MR_Box) (mercury__digraph__X_10)), &mercury__digraph__conv0_CliqX_14);
            }
#line 917 "digraph.m"
            mercury__digraph__CliqX_14 = ((MR_Word) mercury__digraph__conv0_CliqX_14);
#line 918 "digraph.m"
            {
#line 918 "digraph.m"
              mercury__map__lookup_3_p_0(mercury__digraph__TypeInfo_23_23, mercury__digraph__TypeInfo_26_26, (MR_Word) mercury__digraph__CliqMap_1, ((MR_Box) (mercury__digraph__Y_11)), &mercury__digraph__conv1_CliqY_15);
            }
#line 918 "digraph.m"
            mercury__digraph__CliqY_15 = ((MR_Word) mercury__digraph__conv1_CliqY_15);
#line 335 "digraph.m"
            mercury__digraph__CastX_31 = (MR_Integer) mercury__digraph__CliqX_14;
#line 335 "digraph.m"
            mercury__digraph__CastY_32 = (MR_Integer) mercury__digraph__CliqY_15;
#line 335 "digraph.m"
            mercury__digraph__succeeded = (mercury__digraph__CastX_31 == mercury__digraph__CastY_32);
#line 335 "digraph.m"
            if (mercury__digraph__succeeded)
#line 335 "digraph.m"
              mercury__digraph__succeeded = MR_TRUE;
#line 335 "digraph.m"
            else
#line 335 "digraph.m"
              {
#line 335 "digraph.m"
                MR_Integer mercury__digraph__V_29_29 = (MR_Integer) mercury__digraph__CliqX_14;
#line 335 "digraph.m"
                MR_Integer mercury__digraph__V_30_30 = (MR_Integer) mercury__digraph__CliqY_15;

#line 8621 "digraph.c"
                mercury__digraph__succeeded = (mercury__digraph__V_29_29 == mercury__digraph__V_30_30);
#line 335 "digraph.m"
              }
#line 921 "digraph.m"
            if (mercury__digraph__succeeded)
#line 921 "digraph.m"
              mercury__digraph__STATE_VARIABLE_R_19_19 = mercury__digraph__STATE_VARIABLE_R_0_3;
#line 921 "digraph.m"
            else
#line 922 "digraph.m"
              {
#line 922 "digraph.m"
                MR_Word mercury__digraph__conv2_STATE_VARIABLE_R_19_19;

#line 922 "digraph.m"
                {
#line 922 "digraph.m"
                  mercury__digraph__add_edge_4_p_0(mercury__digraph__TypeInfo_25_25, (MR_Word) mercury__digraph__CliqX_14, (MR_Word) mercury__digraph__CliqY_15, (MR_Word) mercury__digraph__STATE_VARIABLE_R_0_3, &mercury__digraph__conv2_STATE_VARIABLE_R_19_19);
                }
#line 922 "digraph.m"
                mercury__digraph__STATE_VARIABLE_R_19_19 = (MR_Word) mercury__digraph__conv2_STATE_VARIABLE_R_19_19;
#line 922 "digraph.m"
              }
#line 924 "digraph.m"
            /* direct tailcall eliminated */
#line 924 "digraph.m"
            {
#line 924 "digraph.m"
              MR_Word mercury__digraph__HeadVar__2__tmp_copy_2 = mercury__digraph__Edges_12;
#line 924 "digraph.m"
              MR_Word mercury__digraph__STATE_VARIABLE_R_0__tmp_copy_3 = mercury__digraph__STATE_VARIABLE_R_19_19;

#line 924 "digraph.m"
              mercury__digraph__STATE_VARIABLE_R_0_3 = mercury__digraph__STATE_VARIABLE_R_0__tmp_copy_3;
#line 924 "digraph.m"
              mercury__digraph__HeadVar__2_2 = mercury__digraph__HeadVar__2__tmp_copy_2;
#line 924 "digraph.m"
            }
#line 924 "digraph.m"
            continue;
#line 916 "digraph.m"
          }
#line 915 "digraph.m"
      }
#line 915 "digraph.m"
      break;
#line 915 "digraph.m"
    }
#line 911 "digraph.m"
}

#line 894 "digraph.m"
void MR_CALL 
mercury__digraph__make_clique_map_6_p_0(
#line 894 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_31,
#line 894 "digraph.m"
  MR_Word mercury__digraph__G_1,
#line 894 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 894 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_CliqMap_0_3,
#line 894 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_CliqMap_4,
#line 894 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_R_0_5,
#line 894 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_R_6)
#line 894 "digraph.m"
{
#line 898 "digraph.m"
  while (MR_TRUE)
#line 898 "digraph.m"
    {
#line 898 "digraph.m"
      /* tailcall optimized into a loop */
#line 898 "digraph.m"
      {
#line 898 "digraph.m"
        MR_bool mercury__digraph__succeeded;

#line 898 "digraph.m"
        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 898 "digraph.m"
          {
#line 898 "digraph.m"
            *mercury__digraph__STATE_VARIABLE_R_6 = mercury__digraph__STATE_VARIABLE_R_0_5;
#line 898 "digraph.m"
            *mercury__digraph__STATE_VARIABLE_CliqMap_4 = mercury__digraph__STATE_VARIABLE_CliqMap_0_3;
#line 898 "digraph.m"
          }
#line 898 "digraph.m"
        else
#line 899 "digraph.m"
          {
#line 899 "digraph.m"
            MR_Word mercury__digraph__TypeCtorInfo_36_36;
#line 899 "digraph.m"
            MR_Word mercury__digraph__TypeInfo_37_37;
#line 899 "digraph.m"
            MR_Word mercury__digraph__Clique_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 899 "digraph.m"
            MR_Word mercury__digraph__Cliques_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 899 "digraph.m"
            MR_Word mercury__digraph__Vertices_19;
#line 899 "digraph.m"
            MR_Word mercury__digraph__CliqKey_20;
#line 899 "digraph.m"
            MR_Word mercury__digraph__STATE_VARIABLE_R_26_26;
#line 899 "digraph.m"
            MR_Word mercury__digraph__STATE_VARIABLE_CliqMap_28_28;
#line 899 "digraph.m"
            MR_Word mercury__digraph__V_7_47 = (MR_Word) mercury__digraph__Clique_15;
#line 899 "digraph.m"
            MR_Word mercury__digraph__V_8_48;
#line 899 "digraph.m"
            MR_Word mercury__digraph__V_4_60;
#line 899 "digraph.m"
            MR_Integer mercury__digraph__V_5_63;
#line 901 "digraph.m"
            MR_Word mercury__digraph__conv1_CliqKey_20;
#line 901 "digraph.m"
            MR_Word mercury__digraph__conv0_STATE_VARIABLE_R_26_26;

#line 175 "set.opt"
            {
#line 175 "set.opt"
              mercury__digraph__V_8_48 = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_51_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_2_f_in__list_0(mercury__digraph__TypeInfo_for_T_31, mercury__digraph__G_1, mercury__digraph__V_7_47);
            }
#line 600 "list.opt"
            {
#line 600 "list.opt"
              mercury__list__length_acc_3_p_0(mercury__digraph__TypeInfo_for_T_31, mercury__digraph__V_8_48, (MR_Integer) 0, &mercury__digraph__V_5_63);
            }
#line 1102 "list.opt"
            {
#line 1102 "list.opt"
              mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__digraph__TypeInfo_for_T_31, mercury__digraph__V_5_63, mercury__digraph__V_8_48, &mercury__digraph__V_4_60);
            }
#line 214 "set_ordlist.opt"
            mercury__digraph__Vertices_19 = (MR_Word) mercury__digraph__V_4_60;
#line 8763 "digraph.c"
            mercury__digraph__TypeCtorInfo_36_36 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 8765 "digraph.c"
            {
#line 8767 "digraph.c"
              mercury__digraph__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8769 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_37_37, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_36_36));
#line 8771 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_37_37, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_31));
#line 8773 "digraph.c"
            }
#line 901 "digraph.m"
            {
#line 901 "digraph.m"
              mercury__digraph__add_vertex_4_p_0(mercury__digraph__TypeInfo_37_37, ((MR_Box) (mercury__digraph__Vertices_19)), &mercury__digraph__conv1_CliqKey_20, (MR_Word) mercury__digraph__STATE_VARIABLE_R_0_5, &mercury__digraph__conv0_STATE_VARIABLE_R_26_26);
            }
#line 901 "digraph.m"
            mercury__digraph__CliqKey_20 = (MR_Word) mercury__digraph__conv1_CliqKey_20;
#line 901 "digraph.m"
            mercury__digraph__STATE_VARIABLE_R_26_26 = (MR_Word) mercury__digraph__conv0_STATE_VARIABLE_R_26_26;
#line 902 "digraph.m"
            {
#line 902 "digraph.m"
              mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_95_104_111_54_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__set_0(mercury__digraph__TypeInfo_for_T_31, mercury__digraph__CliqKey_20, mercury__digraph__Clique_15, mercury__digraph__STATE_VARIABLE_CliqMap_0_3, &mercury__digraph__STATE_VARIABLE_CliqMap_28_28);
            }
#line 903 "digraph.m"
            /* direct tailcall eliminated */
#line 903 "digraph.m"
            {
#line 903 "digraph.m"
              MR_Word mercury__digraph__HeadVar__2__tmp_copy_2 = mercury__digraph__Cliques_16;
#line 903 "digraph.m"
              MR_Word mercury__digraph__STATE_VARIABLE_CliqMap_0__tmp_copy_3 = mercury__digraph__STATE_VARIABLE_CliqMap_28_28;
#line 903 "digraph.m"
              MR_Word mercury__digraph__STATE_VARIABLE_R_0__tmp_copy_5 = mercury__digraph__STATE_VARIABLE_R_26_26;

#line 903 "digraph.m"
              mercury__digraph__STATE_VARIABLE_R_0_5 = mercury__digraph__STATE_VARIABLE_R_0__tmp_copy_5;
#line 903 "digraph.m"
              mercury__digraph__STATE_VARIABLE_CliqMap_0_3 = mercury__digraph__STATE_VARIABLE_CliqMap_0__tmp_copy_3;
#line 903 "digraph.m"
              mercury__digraph__HeadVar__2_2 = mercury__digraph__HeadVar__2__tmp_copy_2;
#line 903 "digraph.m"
            }
#line 903 "digraph.m"
            continue;
#line 899 "digraph.m"
          }
#line 898 "digraph.m"
      }
#line 898 "digraph.m"
      break;
#line 898 "digraph.m"
    }
#line 894 "digraph.m"
}

#line 854 "digraph.m"
void MR_CALL 
mercury__digraph__cliques_2_5_p_0(
#line 854 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_26,
#line 854 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 854 "digraph.m"
  MR_Word mercury__digraph__GInv_2,
#line 854 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Visited_0_3,
#line 854 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Cliques_0_4,
#line 854 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Cliques_5)
#line 854 "digraph.m"
{
#line 858 "digraph.m"
  while (MR_TRUE)
#line 858 "digraph.m"
    {
#line 858 "digraph.m"
      /* tailcall optimized into a loop */
#line 858 "digraph.m"
      {
#line 858 "digraph.m"
        MR_bool mercury__digraph__succeeded;

#line 858 "digraph.m"
        if ((mercury__digraph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 858 "digraph.m"
          *mercury__digraph__STATE_VARIABLE_Cliques_5 = mercury__digraph__STATE_VARIABLE_Cliques_0_4;
#line 858 "digraph.m"
        else
#line 859 "digraph.m"
          {
#line 859 "digraph.m"
            MR_Word mercury__digraph__TypeCtorInfo_27_27;
#line 859 "digraph.m"
            MR_Word mercury__digraph__TypeInfo_28_28;
#line 859 "digraph.m"
            MR_Word mercury__digraph__TypeCtorInfo_29_29;
#line 859 "digraph.m"
            MR_Word mercury__digraph__TypeInfo_30_30;
#line 859 "digraph.m"
            MR_Word mercury__digraph__X_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 0)));
#line 859 "digraph.m"
            MR_Word mercury__digraph__Xs0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 1)));
#line 859 "digraph.m"
            MR_Word mercury__digraph__CliqueList_16;
#line 859 "digraph.m"
            MR_Word mercury__digraph__Clique_17;
#line 859 "digraph.m"
            MR_Word mercury__digraph__Xs_18;
#line 859 "digraph.m"
            MR_Word mercury__digraph__STATE_VARIABLE_Visited_22_22;
#line 859 "digraph.m"
            MR_Word mercury__digraph__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 859 "digraph.m"
            MR_Word mercury__digraph__STATE_VARIABLE_Cliques_24_24;
#line 859 "digraph.m"
            MR_Word mercury__digraph__V_4_34;
#line 859 "digraph.m"
            MR_Integer mercury__digraph__V_5_37;
#line 859 "digraph.m"
            MR_Word mercury__digraph__V_5_47;
#line 859 "digraph.m"
            MR_Word mercury__digraph__V_6_48;
#line 1102 "list.opt"
            MR_Word mercury__digraph__conv0_V_4_34;
#line 176 "set_ordlist.opt"
            MR_Word mercury__digraph__conv1_V_6_48;
#line 869 "digraph.m"
            MR_Word mercury__digraph__conv2_Xs_18;

#line 861 "digraph.m"
            {
#line 861 "digraph.m"
              mercury__digraph__dfs_2_6_p_0(mercury__digraph__TypeInfo_for_T_26, mercury__digraph__GInv_2, mercury__digraph__X_11, mercury__digraph__STATE_VARIABLE_Visited_0_3, &mercury__digraph__STATE_VARIABLE_Visited_22_22, mercury__digraph__V_23_23, &mercury__digraph__CliqueList_16);
            }
#line 8901 "digraph.c"
            mercury__digraph__TypeCtorInfo_27_27 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 8903 "digraph.c"
            {
#line 8905 "digraph.c"
              mercury__digraph__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8907 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_28_28, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_27_27));
#line 8909 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_28_28, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_26));
#line 8911 "digraph.c"
            }
#line 600 "list.opt"
            {
#line 600 "list.opt"
              mercury__list__length_acc_3_p_0(mercury__digraph__TypeInfo_28_28, (MR_Word) mercury__digraph__CliqueList_16, (MR_Integer) 0, &mercury__digraph__V_5_37);
            }
#line 1102 "list.opt"
            {
#line 1102 "list.opt"
              mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__digraph__TypeInfo_28_28, mercury__digraph__V_5_37, (MR_Word) mercury__digraph__CliqueList_16, &mercury__digraph__conv0_V_4_34);
            }
#line 1102 "list.opt"
            mercury__digraph__V_4_34 = (MR_Word) mercury__digraph__conv0_V_4_34;
#line 214 "set_ordlist.opt"
            mercury__digraph__Clique_17 = (MR_Word) mercury__digraph__V_4_34;
#line 8927 "digraph.c"
            mercury__digraph__TypeCtorInfo_29_29 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 8929 "digraph.c"
            {
#line 8931 "digraph.c"
              mercury__digraph__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8933 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_30_30, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_29_29));
#line 8935 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_30_30, 1) = ((MR_Box) (mercury__digraph__TypeInfo_28_28));
#line 8937 "digraph.c"
            }
#line 175 "set_ordlist.opt"
            mercury__digraph__V_5_47 = (MR_Word) mercury__digraph__STATE_VARIABLE_Cliques_0_4;
#line 176 "set_ordlist.opt"
            {
#line 176 "set_ordlist.opt"
              mercury__set_ordlist__insert_loop_3_p_0(mercury__digraph__TypeInfo_30_30, (MR_Word) mercury__digraph__V_5_47, ((MR_Box) (mercury__digraph__Clique_17)), &mercury__digraph__conv1_V_6_48);
            }
#line 176 "set_ordlist.opt"
            mercury__digraph__V_6_48 = (MR_Word) mercury__digraph__conv1_V_6_48;
#line 175 "set_ordlist.opt"
            mercury__digraph__STATE_VARIABLE_Cliques_24_24 = (MR_Word) mercury__digraph__V_6_48;
#line 869 "digraph.m"
            {
#line 869 "digraph.m"
              mercury__list__delete_elems_3_p_0(mercury__digraph__TypeInfo_28_28, (MR_Word) mercury__digraph__Xs0_12, (MR_Word) mercury__digraph__CliqueList_16, &mercury__digraph__conv2_Xs_18);
            }
#line 869 "digraph.m"
            mercury__digraph__Xs_18 = (MR_Word) mercury__digraph__conv2_Xs_18;
#line 870 "digraph.m"
            /* direct tailcall eliminated */
#line 870 "digraph.m"
            {
#line 870 "digraph.m"
              MR_Word mercury__digraph__HeadVar__1__tmp_copy_1 = mercury__digraph__Xs_18;
#line 870 "digraph.m"
              MR_Word mercury__digraph__STATE_VARIABLE_Visited_0__tmp_copy_3 = mercury__digraph__STATE_VARIABLE_Visited_22_22;
#line 870 "digraph.m"
              MR_Word mercury__digraph__STATE_VARIABLE_Cliques_0__tmp_copy_4 = mercury__digraph__STATE_VARIABLE_Cliques_24_24;

#line 870 "digraph.m"
              mercury__digraph__STATE_VARIABLE_Cliques_0_4 = mercury__digraph__STATE_VARIABLE_Cliques_0__tmp_copy_4;
#line 870 "digraph.m"
              mercury__digraph__STATE_VARIABLE_Visited_0_3 = mercury__digraph__STATE_VARIABLE_Visited_0__tmp_copy_3;
#line 870 "digraph.m"
              mercury__digraph__HeadVar__1_1 = mercury__digraph__HeadVar__1__tmp_copy_1;
#line 870 "digraph.m"
            }
#line 870 "digraph.m"
            continue;
#line 859 "digraph.m"
          }
#line 858 "digraph.m"
      }
#line 858 "digraph.m"
      break;
#line 858 "digraph.m"
    }
#line 854 "digraph.m"
}

#line 814 "digraph.m"
static void MR_CALL 
mercury__digraph__reachable_from_4_p_0(
#line 814 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_19,
#line 814 "digraph.m"
  MR_Word mercury__digraph__G_5,
#line 814 "digraph.m"
  MR_Word mercury__digraph__Keys0_6,
#line 814 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Comp_0_15,
#line 814 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Comp_16)
#line 814 "digraph.m"
{
#line 827 "digraph.m"
  while (MR_TRUE)
#line 827 "digraph.m"
    {
#line 827 "digraph.m"
      /* tailcall optimized into a loop */
#line 827 "digraph.m"
      {
#line 827 "digraph.m"
        MR_bool mercury__digraph__succeeded;
#line 827 "digraph.m"
        MR_Word mercury__digraph__TypeClassInfo_for_enum_23;
#line 827 "digraph.m"
        MR_Word mercury__digraph__X_8;
#line 827 "digraph.m"
        MR_Word mercury__digraph__Keys1_9;
#line 819 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_20_20 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 819 "digraph.m"
        MR_Word mercury__digraph__TypeInfo_21_21;
#line 819 "digraph.m"
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_22 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 819 "digraph.m"
        MR_Box mercury__digraph__conv1_X_8;
#line 819 "digraph.m"
        MR_Word mercury__digraph__conv0_Keys1_9;

#line 9031 "digraph.c"
        {
#line 9033 "digraph.c"
          mercury__digraph__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9035 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_21_21, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_20_20));
#line 9037 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_21_21, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_19));
#line 9039 "digraph.c"
        }
#line 9041 "digraph.c"
        {
#line 9043 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9045 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_22));
#line 9047 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_19));
#line 9049 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 2) = ((MR_Box) (mercury__digraph__TypeInfo_21_21));
#line 9051 "digraph.c"
        }
#line 819 "digraph.m"
        {
#line 819 "digraph.m"
          mercury__digraph__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mercury__digraph__TypeClassInfo_for_enum_23, &mercury__digraph__conv1_X_8, (MR_Word) mercury__digraph__Keys0_6, &mercury__digraph__conv0_Keys1_9);
        }
#line 819 "digraph.m"
        if (mercury__digraph__succeeded)
#line 819 "digraph.m"
          {
#line 819 "digraph.m"
            mercury__digraph__X_8 = ((MR_Word) mercury__digraph__conv1_X_8);
#line 819 "digraph.m"
            mercury__digraph__Keys1_9 = (MR_Word) mercury__digraph__conv0_Keys1_9;
#line 819 "digraph.m"
            mercury__digraph__succeeded = MR_TRUE;
#line 819 "digraph.m"
          }
#line 827 "digraph.m"
        if (mercury__digraph__succeeded)
#line 820 "digraph.m"
          {
#line 820 "digraph.m"
            MR_Word mercury__digraph__FwdSet_10;
#line 820 "digraph.m"
            MR_Word mercury__digraph__BwdSet_11;
#line 820 "digraph.m"
            MR_Word mercury__digraph__Keys_14;
#line 820 "digraph.m"
            MR_Word mercury__digraph__STATE_VARIABLE_Comp_17_17;
#line 820 "digraph.m"
            MR_Word mercury__digraph__V_6_31 = (MR_Word) mercury__digraph__STATE_VARIABLE_Comp_0_15;
#line 820 "digraph.m"
            MR_Integer mercury__digraph__V_9_33;
#line 820 "digraph.m"
            MR_Word mercury__digraph__V_5_34;
#line 820 "digraph.m"
            MR_Word mercury__digraph__V_4_38;
#line 820 "digraph.m"
            MR_Word mercury__digraph__V_5_39;
#line 820 "digraph.m"
            MR_Word mercury__digraph__V_4_44;
#line 820 "digraph.m"
            MR_Word mercury__digraph__V_5_45;
#line 820 "digraph.m"
            MR_Word mercury__digraph__V_4_50;
#line 820 "digraph.m"
            MR_Word mercury__digraph__V_5_51;
#line 820 "digraph.m"
            MR_Word mercury__digraph__V_6_52;
#line 9102 "digraph.c"
            MR_Box MR_CALL (* mercury__digraph__func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9104 "digraph.c"
            MR_Box mercury__digraph__conv3_V_9_33;

#line 9107 "digraph.c"
            {
#line 9109 "digraph.c"
              mercury__digraph__conv3_V_9_33 = mercury__digraph__func_2(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_23), ((MR_Box) (mercury__digraph__X_8)));
            }
#line 9112 "digraph.c"
            mercury__digraph__V_9_33 = ((MR_Integer) mercury__digraph__conv3_V_9_33);
#line 490 "sparse_bitset.opt"
            {
#line 490 "sparse_bitset.opt"
              mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__V_6_31, mercury__digraph__V_9_33, &mercury__digraph__V_5_34);
            }
#line 491 "sparse_bitset.opt"
            mercury__digraph__STATE_VARIABLE_Comp_17_17 = (MR_Word) mercury__digraph__V_5_34;
#line 821 "digraph.m"
            {
#line 821 "digraph.m"
              mercury__digraph__lookup_key_set_from_3_p_0(mercury__digraph__TypeInfo_for_T_19, mercury__digraph__G_5, mercury__digraph__X_8, &mercury__digraph__FwdSet_10);
            }
#line 822 "digraph.m"
            {
#line 822 "digraph.m"
              mercury__digraph__lookup_key_set_to_3_p_0(mercury__digraph__TypeInfo_for_T_19, mercury__digraph__G_5, mercury__digraph__X_8, &mercury__digraph__BwdSet_11);
            }
#line 606 "sparse_bitset.opt"
            mercury__digraph__V_4_38 = (MR_Word) mercury__digraph__FwdSet_10;
#line 606 "sparse_bitset.opt"
            mercury__digraph__V_5_39 = (MR_Word) mercury__digraph__BwdSet_11;
#line 607 "sparse_bitset.opt"
            {
#line 607 "sparse_bitset.opt"
              mercury__digraph__V_4_44 = mercury__sparse_bitset__union_2_2_f_0(mercury__digraph__V_4_38, mercury__digraph__V_5_39);
            }
#line 218 "sparse_bitset.opt"
            mercury__digraph__V_5_45 = (MR_Word) mercury__digraph__STATE_VARIABLE_Comp_17_17;
#line 219 "sparse_bitset.opt"
            {
#line 219 "sparse_bitset.opt"
              mercury__digraph__V_5_51 = mercury__sparse_bitset__difference_2_2_f_0(mercury__digraph__V_4_44, mercury__digraph__V_5_45);
            }
#line 606 "sparse_bitset.opt"
            mercury__digraph__V_4_50 = (MR_Word) mercury__digraph__Keys1_9;
#line 607 "sparse_bitset.opt"
            {
#line 607 "sparse_bitset.opt"
              mercury__digraph__V_6_52 = mercury__sparse_bitset__union_2_2_f_0(mercury__digraph__V_4_50, mercury__digraph__V_5_51);
            }
#line 606 "sparse_bitset.opt"
            mercury__digraph__Keys_14 = (MR_Word) mercury__digraph__V_6_52;
#line 826 "digraph.m"
            /* direct tailcall eliminated */
#line 826 "digraph.m"
            {
#line 826 "digraph.m"
              MR_Word mercury__digraph__Keys0__tmp_copy_6 = mercury__digraph__Keys_14;
#line 826 "digraph.m"
              MR_Word mercury__digraph__STATE_VARIABLE_Comp_0__tmp_copy_15 = mercury__digraph__STATE_VARIABLE_Comp_17_17;

#line 826 "digraph.m"
              mercury__digraph__STATE_VARIABLE_Comp_0_15 = mercury__digraph__STATE_VARIABLE_Comp_0__tmp_copy_15;
#line 826 "digraph.m"
              mercury__digraph__Keys0_6 = mercury__digraph__Keys0__tmp_copy_6;
#line 826 "digraph.m"
            }
#line 826 "digraph.m"
            continue;
#line 820 "digraph.m"
          }
#line 827 "digraph.m"
        else
#line 827 "digraph.m"
          *mercury__digraph__STATE_VARIABLE_Comp_16 = mercury__digraph__STATE_VARIABLE_Comp_0_15;
#line 827 "digraph.m"
      }
#line 827 "digraph.m"
      break;
#line 827 "digraph.m"
    }
#line 814 "digraph.m"
}

#line 799 "digraph.m"
static void MR_CALL 
mercury__digraph__components_2_4_p_0(
#line 799 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_19,
#line 799 "digraph.m"
  MR_Word mercury__digraph__G_5,
#line 799 "digraph.m"
  MR_Word mercury__digraph__Xs0_6,
#line 799 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Components_0_14,
#line 799 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Components_15)
#line 799 "digraph.m"
{
#line 810 "digraph.m"
  while (MR_TRUE)
#line 810 "digraph.m"
    {
#line 810 "digraph.m"
      /* tailcall optimized into a loop */
#line 810 "digraph.m"
      {
#line 810 "digraph.m"
        MR_bool mercury__digraph__succeeded;
#line 810 "digraph.m"
        MR_Word mercury__digraph__TypeInfo_21_21;
#line 810 "digraph.m"
        MR_Word mercury__digraph__TypeClassInfo_for_enum_23;
#line 810 "digraph.m"
        MR_Word mercury__digraph__X_8;
#line 810 "digraph.m"
        MR_Word mercury__digraph__Xs1_9;
#line 803 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_20_20 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 803 "digraph.m"
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_22 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 803 "digraph.m"
        MR_Box mercury__digraph__conv1_X_8;
#line 803 "digraph.m"
        MR_Word mercury__digraph__conv0_Xs1_9;

#line 9230 "digraph.c"
        {
#line 9232 "digraph.c"
          mercury__digraph__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9234 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_21_21, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_20_20));
#line 9236 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_21_21, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_19));
#line 9238 "digraph.c"
        }
#line 9240 "digraph.c"
        {
#line 9242 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9244 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_22));
#line 9246 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_19));
#line 9248 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 2) = ((MR_Box) (mercury__digraph__TypeInfo_21_21));
#line 9250 "digraph.c"
        }
#line 803 "digraph.m"
        {
#line 803 "digraph.m"
          mercury__digraph__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mercury__digraph__TypeClassInfo_for_enum_23, &mercury__digraph__conv1_X_8, (MR_Word) mercury__digraph__Xs0_6, &mercury__digraph__conv0_Xs1_9);
        }
#line 803 "digraph.m"
        if (mercury__digraph__succeeded)
#line 803 "digraph.m"
          {
#line 803 "digraph.m"
            mercury__digraph__X_8 = ((MR_Word) mercury__digraph__conv1_X_8);
#line 803 "digraph.m"
            mercury__digraph__Xs1_9 = (MR_Word) mercury__digraph__conv0_Xs1_9;
#line 803 "digraph.m"
            mercury__digraph__succeeded = MR_TRUE;
#line 803 "digraph.m"
          }
#line 810 "digraph.m"
        if (mercury__digraph__succeeded)
#line 804 "digraph.m"
          {
#line 804 "digraph.m"
            MR_Word mercury__digraph__TypeCtorInfo_28_28;
#line 804 "digraph.m"
            MR_Word mercury__digraph__TypeInfo_29_29;
#line 804 "digraph.m"
            MR_Word mercury__digraph__Keys0_11;
#line 804 "digraph.m"
            MR_Word mercury__digraph__Comp_12;
#line 804 "digraph.m"
            MR_Word mercury__digraph__Xs2_13;
#line 804 "digraph.m"
            MR_Word mercury__digraph__V_16_16;
#line 804 "digraph.m"
            MR_Word mercury__digraph__STATE_VARIABLE_Components_17_17;
#line 804 "digraph.m"
            MR_Word mercury__digraph__V_2_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 804 "digraph.m"
            MR_Word mercury__digraph__V_4_34 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 804 "digraph.m"
            MR_Word mercury__digraph__V_6_44 = (MR_Word) mercury__digraph__V_4_34;
#line 804 "digraph.m"
            MR_Integer mercury__digraph__V_9_46;
#line 804 "digraph.m"
            MR_Word mercury__digraph__V_5_47;
#line 804 "digraph.m"
            MR_Word mercury__digraph__V_5_52;
#line 804 "digraph.m"
            MR_Word mercury__digraph__V_6_53;
#line 804 "digraph.m"
            MR_Word mercury__digraph__V_4_57;
#line 804 "digraph.m"
            MR_Word mercury__digraph__V_5_58;
#line 804 "digraph.m"
            MR_Word mercury__digraph__V_6_59;
#line 9307 "digraph.c"
            MR_Box MR_CALL (* mercury__digraph__func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9309 "digraph.c"
            MR_Box mercury__digraph__conv3_V_9_46;
#line 807 "digraph.m"
            MR_Word mercury__digraph__conv4_V_16_16;
#line 176 "set_ordlist.opt"
            MR_Word mercury__digraph__conv5_V_6_53;

#line 9316 "digraph.c"
            {
#line 9318 "digraph.c"
              mercury__digraph__conv3_V_9_46 = mercury__digraph__func_2(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_23), ((MR_Box) (mercury__digraph__X_8)));
            }
#line 9321 "digraph.c"
            mercury__digraph__V_9_46 = ((MR_Integer) mercury__digraph__conv3_V_9_46);
#line 490 "sparse_bitset.opt"
            {
#line 490 "sparse_bitset.opt"
              mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__V_6_44, mercury__digraph__V_9_46, &mercury__digraph__V_5_47);
            }
#line 491 "sparse_bitset.opt"
            mercury__digraph__Keys0_11 = (MR_Word) mercury__digraph__V_5_47;
#line 806 "digraph.m"
            {
#line 806 "digraph.m"
              mercury__digraph__reachable_from_4_p_0(mercury__digraph__TypeInfo_for_T_19, mercury__digraph__G_5, mercury__digraph__Keys0_11, mercury__digraph__V_4_34, &mercury__digraph__Comp_12);
            }
#line 807 "digraph.m"
            {
#line 807 "digraph.m"
              mercury__digraph__conv4_V_16_16 = mercury__sparse_bitset__to_set_1_f_0(mercury__digraph__TypeClassInfo_for_enum_23, (MR_Word) mercury__digraph__Comp_12);
            }
#line 807 "digraph.m"
            mercury__digraph__V_16_16 = (MR_Word) mercury__digraph__conv4_V_16_16;
#line 9342 "digraph.c"
            mercury__digraph__TypeCtorInfo_28_28 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 9344 "digraph.c"
            {
#line 9346 "digraph.c"
              mercury__digraph__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9348 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_28_28));
#line 9350 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 1) = ((MR_Box) (mercury__digraph__TypeInfo_21_21));
#line 9352 "digraph.c"
            }
#line 175 "set_ordlist.opt"
            mercury__digraph__V_5_52 = (MR_Word) mercury__digraph__STATE_VARIABLE_Components_0_14;
#line 176 "set_ordlist.opt"
            {
#line 176 "set_ordlist.opt"
              mercury__set_ordlist__insert_loop_3_p_0(mercury__digraph__TypeInfo_29_29, (MR_Word) mercury__digraph__V_5_52, ((MR_Box) (mercury__digraph__V_16_16)), &mercury__digraph__conv5_V_6_53);
            }
#line 176 "set_ordlist.opt"
            mercury__digraph__V_6_53 = (MR_Word) mercury__digraph__conv5_V_6_53;
#line 175 "set_ordlist.opt"
            mercury__digraph__STATE_VARIABLE_Components_17_17 = (MR_Word) mercury__digraph__V_6_53;
#line 218 "sparse_bitset.opt"
            mercury__digraph__V_4_57 = (MR_Word) mercury__digraph__Xs1_9;
#line 218 "sparse_bitset.opt"
            mercury__digraph__V_5_58 = (MR_Word) mercury__digraph__Comp_12;
#line 219 "sparse_bitset.opt"
            {
#line 219 "sparse_bitset.opt"
              mercury__digraph__V_6_59 = mercury__sparse_bitset__difference_2_2_f_0(mercury__digraph__V_4_57, mercury__digraph__V_5_58);
            }
#line 218 "sparse_bitset.opt"
            mercury__digraph__Xs2_13 = (MR_Word) mercury__digraph__V_6_59;
#line 809 "digraph.m"
            /* direct tailcall eliminated */
#line 809 "digraph.m"
            {
#line 809 "digraph.m"
              MR_Word mercury__digraph__Xs0__tmp_copy_6 = mercury__digraph__Xs2_13;
#line 809 "digraph.m"
              MR_Word mercury__digraph__STATE_VARIABLE_Components_0__tmp_copy_14 = mercury__digraph__STATE_VARIABLE_Components_17_17;

#line 809 "digraph.m"
              mercury__digraph__STATE_VARIABLE_Components_0_14 = mercury__digraph__STATE_VARIABLE_Components_0__tmp_copy_14;
#line 809 "digraph.m"
              mercury__digraph__Xs0_6 = mercury__digraph__Xs0__tmp_copy_6;
#line 809 "digraph.m"
            }
#line 809 "digraph.m"
            continue;
#line 804 "digraph.m"
          }
#line 810 "digraph.m"
        else
#line 810 "digraph.m"
          *mercury__digraph__STATE_VARIABLE_Components_15 = mercury__digraph__STATE_VARIABLE_Components_0_14;
#line 810 "digraph.m"
      }
#line 810 "digraph.m"
      break;
#line 810 "digraph.m"
    }
#line 799 "digraph.m"
}

#line 774 "digraph.m"
MR_bool MR_CALL 
mercury__digraph__is_dag_2_5_p_0(
#line 774 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_17,
#line 774 "digraph.m"
  MR_Word mercury__digraph__G_6,
#line 774 "digraph.m"
  MR_Word mercury__digraph__Ancestors_7,
#line 774 "digraph.m"
  MR_Word mercury__digraph__X_8,
#line 774 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Visited_0_11,
#line 774 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Visited_12)
#line 774 "digraph.m"
{
#line 781 "digraph.m"
  {
#line 781 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 779 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_18_18 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 779 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_19_19;

#line 9434 "digraph.c"
    {
#line 9436 "digraph.c"
      mercury__digraph__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9438 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_19_19, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_18_18));
#line 9440 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_19_19, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
#line 9442 "digraph.c"
    }
#line 779 "digraph.m"
    {
#line 779 "digraph.m"
      mercury__digraph__succeeded = mercury__list__member_2_p_0(mercury__digraph__TypeInfo_19_19, ((MR_Box) (mercury__digraph__X_8)), (MR_Word) mercury__digraph__Ancestors_7);
    }
#line 781 "digraph.m"
    if (mercury__digraph__succeeded)
#line 780 "digraph.m"
      mercury__digraph__succeeded = MR_FALSE;
#line 781 "digraph.m"
    else
#line 783 "digraph.m"
      {
#line 781 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_20_20 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 781 "digraph.m"
        MR_Word mercury__digraph__TypeInfo_21_21;
#line 781 "digraph.m"
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_22 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 781 "digraph.m"
        MR_Word mercury__digraph__TypeClassInfo_for_enum_23;
#line 781 "digraph.m"
        MR_Word mercury__digraph__V_3_34;
#line 781 "digraph.m"
        MR_Integer mercury__digraph__V_5_35;
#line 9469 "digraph.c"
        MR_Box MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box);
#line 9471 "digraph.c"
        MR_Box mercury__digraph__conv1_V_5_35;

#line 9474 "digraph.c"
        {
#line 9476 "digraph.c"
          mercury__digraph__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9478 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_21_21, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_20_20));
#line 9480 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_21_21, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
#line 9482 "digraph.c"
        }
#line 9484 "digraph.c"
        {
#line 9486 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9488 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_22));
#line 9490 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
#line 9492 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 2) = ((MR_Box) (mercury__digraph__TypeInfo_21_21));
#line 9494 "digraph.c"
        }
#line 183 "sparse_bitset.opt"
        mercury__digraph__V_3_34 = (MR_Word) mercury__digraph__STATE_VARIABLE_Visited_0_11;
#line 9498 "digraph.c"
        mercury__digraph__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9500 "digraph.c"
        {
#line 9502 "digraph.c"
          mercury__digraph__conv1_V_5_35 = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_23), ((MR_Box) (mercury__digraph__X_8)));
        }
#line 9505 "digraph.c"
        mercury__digraph__V_5_35 = ((MR_Integer) mercury__digraph__conv1_V_5_35);
#line 185 "sparse_bitset.opt"
        {
#line 185 "sparse_bitset.opt"
          mercury__digraph__succeeded = mercury__sparse_bitset__contains_search_nodes_2_p_0(mercury__digraph__V_3_34, mercury__digraph__V_5_35);
        }
#line 783 "digraph.m"
        if (mercury__digraph__succeeded)
#line 783 "digraph.m"
          {
#line 783 "digraph.m"
            *mercury__digraph__STATE_VARIABLE_Visited_12 = mercury__digraph__STATE_VARIABLE_Visited_0_11;
#line 783 "digraph.m"
            mercury__digraph__succeeded = MR_TRUE;
#line 783 "digraph.m"
          }
#line 783 "digraph.m"
        else
#line 784 "digraph.m"
          {
#line 784 "digraph.m"
            MR_Word mercury__digraph__TypeCtorInfo_24_24;
#line 784 "digraph.m"
            MR_Word mercury__digraph__TypeInfo_25_25;
#line 784 "digraph.m"
            MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_26;
#line 784 "digraph.m"
            MR_Word mercury__digraph__TypeClassInfo_for_enum_27;
#line 784 "digraph.m"
            MR_Word mercury__digraph__SuccXs_10;
#line 784 "digraph.m"
            MR_Word mercury__digraph__STATE_VARIABLE_Visited_13_13;
#line 784 "digraph.m"
            MR_Word mercury__digraph__V_16_16;
#line 784 "digraph.m"
            MR_Word mercury__digraph__V_6_42;
#line 784 "digraph.m"
            MR_Integer mercury__digraph__V_9_44;
#line 784 "digraph.m"
            MR_Word mercury__digraph__V_5_45;
#line 9546 "digraph.c"
            MR_Box MR_CALL (* mercury__digraph__func_2)(MR_Box, MR_Box);
#line 9548 "digraph.c"
            MR_Box mercury__digraph__conv3_V_9_44;

#line 784 "digraph.m"
            {
#line 784 "digraph.m"
              mercury__digraph__lookup_key_set_from_3_p_0(mercury__digraph__TypeInfo_for_T_17, mercury__digraph__G_6, mercury__digraph__X_8, &mercury__digraph__SuccXs_10);
            }
#line 9556 "digraph.c"
            mercury__digraph__BaseTypeClassInfo_for_enum_26 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 9558 "digraph.c"
            mercury__digraph__TypeCtorInfo_24_24 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 9560 "digraph.c"
            {
#line 9562 "digraph.c"
              mercury__digraph__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9564 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_24_24));
#line 9566 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
#line 9568 "digraph.c"
            }
#line 9570 "digraph.c"
            {
#line 9572 "digraph.c"
              mercury__digraph__TypeClassInfo_for_enum_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9574 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_27, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_26));
#line 9576 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_27, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
#line 9578 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_27, 2) = ((MR_Box) (mercury__digraph__TypeInfo_25_25));
#line 9580 "digraph.c"
            }
#line 488 "sparse_bitset.opt"
            mercury__digraph__V_6_42 = (MR_Word) mercury__digraph__STATE_VARIABLE_Visited_0_11;
#line 9584 "digraph.c"
            mercury__digraph__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9586 "digraph.c"
            {
#line 9588 "digraph.c"
              mercury__digraph__conv3_V_9_44 = mercury__digraph__func_2(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_27), ((MR_Box) (mercury__digraph__X_8)));
            }
#line 9591 "digraph.c"
            mercury__digraph__V_9_44 = ((MR_Integer) mercury__digraph__conv3_V_9_44);
#line 490 "sparse_bitset.opt"
            {
#line 490 "sparse_bitset.opt"
              mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__V_6_42, mercury__digraph__V_9_44, &mercury__digraph__V_5_45);
            }
#line 491 "sparse_bitset.opt"
            mercury__digraph__STATE_VARIABLE_Visited_13_13 = (MR_Word) mercury__digraph__V_5_45;
#line 786 "digraph.m"
            {
#line 786 "digraph.m"
              mercury__digraph__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "digraph.m"
              MR_hl_field(MR_mktag(1), mercury__digraph__V_16_16, 0) = ((MR_Box) (mercury__digraph__X_8));
#line 786 "digraph.m"
              MR_hl_field(MR_mktag(1), mercury__digraph__V_16_16, 1) = ((MR_Box) (mercury__digraph__Ancestors_7));
#line 786 "digraph.m"
            }
#line 786 "digraph.m"
            {
#line 786 "digraph.m"
              return mercury__digraph__succeeded = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_17, mercury__digraph__G_6, mercury__digraph__V_16_16, mercury__digraph__TypeClassInfo_for_enum_27, mercury__digraph__SuccXs_10, mercury__digraph__STATE_VARIABLE_Visited_13_13, mercury__digraph__STATE_VARIABLE_Visited_12);
            }
#line 784 "digraph.m"
          }
#line 783 "digraph.m"
      }
#line 781 "digraph.m"
    return mercury__digraph__succeeded;
#line 781 "digraph.m"
  }
#line 774 "digraph.m"
}

#line 744 "digraph.m"
static void MR_CALL 
mercury__digraph__accumulate_digraph_key_set_4_p_0(
#line 744 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_13,
#line 744 "digraph.m"
  MR_Word mercury__digraph__KMap_5,
#line 744 "digraph.m"
  MR_Word mercury__digraph__X_6,
#line 744 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Set_0_10,
#line 744 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Set_11)
#line 744 "digraph.m"
{
#line 747 "digraph.m"
  {
#line 747 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 747 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_15_15 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 747 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_16_16;
#line 747 "digraph.m"
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_17;
#line 747 "digraph.m"
    MR_Word mercury__digraph__TypeClassInfo_for_enum_18;
#line 747 "digraph.m"
    MR_Integer mercury__digraph__XI_8 = (MR_Integer) mercury__digraph__X_6;
#line 747 "digraph.m"
    MR_Word mercury__digraph__Y_9;
#line 747 "digraph.m"
    MR_Word mercury__digraph__V_6_25;
#line 747 "digraph.m"
    MR_Integer mercury__digraph__V_9_27;
#line 747 "digraph.m"
    MR_Word mercury__digraph__V_5_28;
#line 749 "digraph.m"
    MR_Box mercury__digraph__conv0_Y_9;
#line 9665 "digraph.c"
    MR_Box MR_CALL (* mercury__digraph__func_1)(MR_Box, MR_Box);
#line 9667 "digraph.c"
    MR_Box mercury__digraph__conv2_V_9_27;

#line 9670 "digraph.c"
    {
#line 9672 "digraph.c"
      mercury__digraph__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9674 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_15_15));
#line 9676 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
#line 9678 "digraph.c"
    }
#line 749 "digraph.m"
    {
#line 749 "digraph.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_16_16, (MR_Word) mercury__digraph__KMap_5, mercury__digraph__XI_8, &mercury__digraph__conv0_Y_9);
    }
#line 749 "digraph.m"
    mercury__digraph__Y_9 = ((MR_Word) mercury__digraph__conv0_Y_9);
#line 9687 "digraph.c"
    mercury__digraph__BaseTypeClassInfo_for_enum_17 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 9689 "digraph.c"
    {
#line 9691 "digraph.c"
      mercury__digraph__TypeClassInfo_for_enum_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9693 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_18, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_17));
#line 9695 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_18, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
#line 9697 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_18, 2) = ((MR_Box) (mercury__digraph__TypeInfo_16_16));
#line 9699 "digraph.c"
    }
#line 488 "sparse_bitset.opt"
    mercury__digraph__V_6_25 = (MR_Word) mercury__digraph__STATE_VARIABLE_Set_0_10;
#line 9703 "digraph.c"
    mercury__digraph__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9705 "digraph.c"
    {
#line 9707 "digraph.c"
      mercury__digraph__conv2_V_9_27 = mercury__digraph__func_1(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_18), ((MR_Box) (mercury__digraph__Y_9)));
    }
#line 9710 "digraph.c"
    mercury__digraph__V_9_27 = ((MR_Integer) mercury__digraph__conv2_V_9_27);
#line 490 "sparse_bitset.opt"
    {
#line 490 "sparse_bitset.opt"
      mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__V_6_25, mercury__digraph__V_9_27, &mercury__digraph__V_5_28);
    }
#line 491 "sparse_bitset.opt"
    *mercury__digraph__STATE_VARIABLE_Set_11 = (MR_Word) mercury__digraph__V_5_28;
#line 747 "digraph.m"
  }
#line 744 "digraph.m"
}

#line 731 "digraph.m"
static void MR_CALL 
mercury__digraph__add_composition_edges_5_p_0(
#line 731 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_16,
#line 731 "digraph.m"
  MR_Word mercury__digraph__KMap1_6,
#line 731 "digraph.m"
  MR_Word mercury__digraph__KMap2_7,
#line 731 "digraph.m"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 731 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Comp_0_11,
#line 731 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Comp_12)
#line 731 "digraph.m"
{
#line 734 "digraph.m"
  {
#line 734 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 734 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_13_25 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 734 "digraph.m"
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_27;
#line 734 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_14_49;
#line 734 "digraph.m"
    MR_Word mercury__digraph__TypeClassInfo_for_enum_51;
#line 734 "digraph.m"
    MR_Word mercury__digraph__Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__3_3, (MR_Integer) 0)));
#line 734 "digraph.m"
    MR_Word mercury__digraph__Ys_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__3_3, (MR_Integer) 1)));
#line 734 "digraph.m"
    MR_Word mercury__digraph__V_13_13;
#line 734 "digraph.m"
    MR_Word mercury__digraph__V_14_14;
#line 734 "digraph.m"
    MR_Word mercury__digraph__V_21_21;
#line 734 "digraph.m"
    MR_Word mercury__digraph__V_2_31;
#line 734 "digraph.m"
    MR_Word mercury__digraph__V_6_35;
#line 734 "digraph.m"
    MR_Word mercury__digraph__V_6_58;

#line 9770 "digraph.c"
    {
#line 9772 "digraph.c"
      mercury__digraph__TypeInfo_14_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9774 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_49, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_13_25));
#line 9776 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_49, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_16));
#line 9778 "digraph.c"
    }
#line 485 "sparse_bitset.opt"
    mercury__digraph__V_2_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 484 "sparse_bitset.opt"
    mercury__digraph__V_21_21 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 9784 "digraph.c"
    mercury__digraph__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 9786 "digraph.c"
    {
#line 9788 "digraph.c"
      mercury__digraph__TypeClassInfo_for_enum_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9790 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_51, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_27));
#line 9792 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_51, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_16));
#line 9794 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_51, 2) = ((MR_Box) (mercury__digraph__TypeInfo_14_49));
#line 9796 "digraph.c"
    }
#line 441 "sparse_bitset.opt"
    mercury__digraph__V_6_35 = (MR_Word) mercury__digraph__Xs_8;
#line 442 "sparse_bitset.opt"
    {
#line 442 "sparse_bitset.opt"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_16, mercury__digraph__KMap1_6, mercury__digraph__TypeClassInfo_for_enum_51, mercury__digraph__V_6_35, mercury__digraph__V_21_21, &mercury__digraph__V_13_13);
    }
#line 441 "sparse_bitset.opt"
    mercury__digraph__V_6_58 = (MR_Word) mercury__digraph__Ys_9;
#line 442 "sparse_bitset.opt"
    {
#line 442 "sparse_bitset.opt"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_16, mercury__digraph__KMap2_7, mercury__digraph__TypeClassInfo_for_enum_51, mercury__digraph__V_6_58, mercury__digraph__V_21_21, &mercury__digraph__V_14_14);
    }
#line 735 "digraph.m"
    {
#line 735 "digraph.m"
      mercury__digraph__add_cartesian_product_4_p_0(mercury__digraph__TypeInfo_for_T_16, mercury__digraph__V_13_13, mercury__digraph__V_14_14, mercury__digraph__STATE_VARIABLE_Comp_0_11, mercury__digraph__STATE_VARIABLE_Comp_12);
#line 735 "digraph.m"
      return;
    }
#line 734 "digraph.m"
  }
#line 731 "digraph.m"
}

#line 713 "digraph.m"
static void MR_CALL 
mercury__digraph__find_necessary_keys_5_p_0(
#line 713 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_16,
#line 713 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 713 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Needed1_0_10,
#line 713 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Needed1_11,
#line 713 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Needed2_0_12,
#line 713 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Needed2_13)
#line 713 "digraph.m"
{
#line 717 "digraph.m"
  {
#line 717 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 717 "digraph.m"
    MR_Word mercury__digraph__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__1_1, (MR_Integer) 0)));
#line 717 "digraph.m"
    MR_Word mercury__digraph__Ys_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__1_1, (MR_Integer) 1)));
#line 717 "digraph.m"
    MR_Word mercury__digraph__V_4_22 = (MR_Word) mercury__digraph__Xs_6;
#line 717 "digraph.m"
    MR_Word mercury__digraph__V_5_23 = (MR_Word) mercury__digraph__STATE_VARIABLE_Needed1_0_10;
#line 717 "digraph.m"
    MR_Word mercury__digraph__V_6_24;
#line 717 "digraph.m"
    MR_Word mercury__digraph__V_4_28;
#line 717 "digraph.m"
    MR_Word mercury__digraph__V_5_29;
#line 717 "digraph.m"
    MR_Word mercury__digraph__V_6_30;

#line 607 "sparse_bitset.opt"
    {
#line 607 "sparse_bitset.opt"
      mercury__digraph__V_6_24 = mercury__sparse_bitset__union_2_2_f_0(mercury__digraph__V_4_22, mercury__digraph__V_5_23);
    }
#line 606 "sparse_bitset.opt"
    *mercury__digraph__STATE_VARIABLE_Needed1_11 = (MR_Word) mercury__digraph__V_6_24;
#line 606 "sparse_bitset.opt"
    mercury__digraph__V_4_28 = (MR_Word) mercury__digraph__Ys_7;
#line 606 "sparse_bitset.opt"
    mercury__digraph__V_5_29 = (MR_Word) mercury__digraph__STATE_VARIABLE_Needed2_0_12;
#line 607 "sparse_bitset.opt"
    {
#line 607 "sparse_bitset.opt"
      mercury__digraph__V_6_30 = mercury__sparse_bitset__union_2_2_f_0(mercury__digraph__V_4_28, mercury__digraph__V_5_29);
    }
#line 606 "sparse_bitset.opt"
    *mercury__digraph__STATE_VARIABLE_Needed2_13 = (MR_Word) mercury__digraph__V_6_30;
#line 717 "digraph.m"
  }
#line 713 "digraph.m"
}

#line 664 "digraph.m"
void MR_CALL 
mercury__digraph__keys_2_p_0(
#line 664 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_9,
#line 664 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 664 "digraph.m"
  MR_Word * mercury__digraph__Keys_4)
#line 664 "digraph.m"
{
#line 666 "digraph.m"
  {
#line 666 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 666 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_10_10 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 666 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_11_11;
#line 666 "digraph.m"
    MR_Word mercury__digraph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
#line 666 "digraph.m"
    MR_Word mercury__digraph__V_4_14;
#line 666 "digraph.m"
    MR_Word mercury__digraph__V_5_19;
#line 667 "digraph.m"
    MR_Integer mercury__digraph__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 667 "digraph.m"
    MR_Word mercury__digraph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 667 "digraph.m"
    MR_Word mercury__digraph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
#line 43 "bimap.opt"
    MR_Word mercury__digraph__V_3_13;
#line 252 "tree234.opt"
    MR_Word mercury__digraph__conv0_Keys_4;

#line 9921 "digraph.c"
    {
#line 9923 "digraph.c"
      mercury__digraph__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9925 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_11, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_10));
#line 9927 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_11, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_9));
#line 9929 "digraph.c"
    }
#line 43 "bimap.opt"
    mercury__digraph__V_3_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_5_5, (MR_Integer) 0)));
#line 43 "bimap.opt"
    mercury__digraph__V_4_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_5_5, (MR_Integer) 1)));
#line 251 "tree234.opt"
    mercury__digraph__V_5_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 252 "tree234.opt"
    {
#line 252 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__digraph__TypeInfo_11_11, mercury__digraph__TypeInfo_for_T_9, (MR_Word) mercury__digraph__V_4_14, (MR_Word) mercury__digraph__V_5_19, &mercury__digraph__conv0_Keys_4);
    }
#line 252 "tree234.opt"
    *mercury__digraph__Keys_4 = (MR_Word) mercury__digraph__conv0_Keys_4;
#line 666 "digraph.m"
  }
#line 664 "digraph.m"
}

#line 639 "digraph.m"
void MR_CALL 
mercury__digraph__dfs_2_6_p_0(
#line 639 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_21,
#line 639 "digraph.m"
  MR_Word mercury__digraph__G_7,
#line 639 "digraph.m"
  MR_Word mercury__digraph__X_8,
#line 639 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Visited_0_12,
#line 639 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Visited_13,
#line 639 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_DfsRev_0_14,
#line 639 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_DfsRev_15)
#line 639 "digraph.m"
{
#line 646 "digraph.m"
  {
#line 646 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 644 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_22_22 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 644 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_23_23;
#line 644 "digraph.m"
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_24 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 644 "digraph.m"
    MR_Word mercury__digraph__TypeClassInfo_for_enum_25;
#line 644 "digraph.m"
    MR_Word mercury__digraph__V_3_40;
#line 644 "digraph.m"
    MR_Integer mercury__digraph__V_5_41;
#line 9984 "digraph.c"
    MR_Box MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box);
#line 9986 "digraph.c"
    MR_Box mercury__digraph__conv1_V_5_41;

#line 9989 "digraph.c"
    {
#line 9991 "digraph.c"
      mercury__digraph__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9993 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_23, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_22_22));
#line 9995 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_21));
#line 9997 "digraph.c"
    }
#line 9999 "digraph.c"
    {
#line 10001 "digraph.c"
      mercury__digraph__TypeClassInfo_for_enum_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10003 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_25, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_24));
#line 10005 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_25, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_21));
#line 10007 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_25, 2) = ((MR_Box) (mercury__digraph__TypeInfo_23_23));
#line 10009 "digraph.c"
    }
#line 183 "sparse_bitset.opt"
    mercury__digraph__V_3_40 = (MR_Word) mercury__digraph__STATE_VARIABLE_Visited_0_12;
#line 10013 "digraph.c"
    mercury__digraph__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_25, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10015 "digraph.c"
    {
#line 10017 "digraph.c"
      mercury__digraph__conv1_V_5_41 = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_25), ((MR_Box) (mercury__digraph__X_8)));
    }
#line 10020 "digraph.c"
    mercury__digraph__V_5_41 = ((MR_Integer) mercury__digraph__conv1_V_5_41);
#line 185 "sparse_bitset.opt"
    {
#line 185 "sparse_bitset.opt"
      mercury__digraph__succeeded = mercury__sparse_bitset__contains_search_nodes_2_p_0(mercury__digraph__V_3_40, mercury__digraph__V_5_41);
    }
#line 646 "digraph.m"
    if (mercury__digraph__succeeded)
#line 645 "digraph.m"
      {
#line 645 "digraph.m"
        *mercury__digraph__STATE_VARIABLE_DfsRev_15 = mercury__digraph__STATE_VARIABLE_DfsRev_0_14;
#line 645 "digraph.m"
        *mercury__digraph__STATE_VARIABLE_Visited_13 = mercury__digraph__STATE_VARIABLE_Visited_0_12;
#line 645 "digraph.m"
      }
#line 646 "digraph.m"
    else
#line 647 "digraph.m"
      {
#line 647 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_26_26;
#line 647 "digraph.m"
        MR_Word mercury__digraph__TypeInfo_27_27;
#line 647 "digraph.m"
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_28;
#line 647 "digraph.m"
        MR_Word mercury__digraph__TypeClassInfo_for_enum_29;
#line 647 "digraph.m"
        MR_Word mercury__digraph__SuccXs_11;
#line 647 "digraph.m"
        MR_Word mercury__digraph__STATE_VARIABLE_Visited_16_16;
#line 647 "digraph.m"
        MR_Word mercury__digraph__STATE_VARIABLE_DfsRev_19_19;
#line 647 "digraph.m"
        MR_Word mercury__digraph__V_6_45;
#line 647 "digraph.m"
        MR_Integer mercury__digraph__V_9_47;
#line 647 "digraph.m"
        MR_Word mercury__digraph__V_5_48;
#line 10061 "digraph.c"
        MR_Box MR_CALL (* mercury__digraph__func_2)(MR_Box, MR_Box);
#line 10063 "digraph.c"
        MR_Box mercury__digraph__conv3_V_9_47;

#line 647 "digraph.m"
        {
#line 647 "digraph.m"
          mercury__digraph__lookup_key_set_from_3_p_0(mercury__digraph__TypeInfo_for_T_21, mercury__digraph__G_7, mercury__digraph__X_8, &mercury__digraph__SuccXs_11);
        }
#line 10071 "digraph.c"
        mercury__digraph__BaseTypeClassInfo_for_enum_28 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 10073 "digraph.c"
        mercury__digraph__TypeCtorInfo_26_26 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 10075 "digraph.c"
        {
#line 10077 "digraph.c"
          mercury__digraph__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10079 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_26_26));
#line 10081 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_21));
#line 10083 "digraph.c"
        }
#line 10085 "digraph.c"
        {
#line 10087 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10089 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_28));
#line 10091 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_21));
#line 10093 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, 2) = ((MR_Box) (mercury__digraph__TypeInfo_27_27));
#line 10095 "digraph.c"
        }
#line 488 "sparse_bitset.opt"
        mercury__digraph__V_6_45 = (MR_Word) mercury__digraph__STATE_VARIABLE_Visited_0_12;
#line 10099 "digraph.c"
        mercury__digraph__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10101 "digraph.c"
        {
#line 10103 "digraph.c"
          mercury__digraph__conv3_V_9_47 = mercury__digraph__func_2(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__X_8)));
        }
#line 10106 "digraph.c"
        mercury__digraph__V_9_47 = ((MR_Integer) mercury__digraph__conv3_V_9_47);
#line 490 "sparse_bitset.opt"
        {
#line 490 "sparse_bitset.opt"
          mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__V_6_45, mercury__digraph__V_9_47, &mercury__digraph__V_5_48);
        }
#line 491 "sparse_bitset.opt"
        mercury__digraph__STATE_VARIABLE_Visited_16_16 = (MR_Word) mercury__digraph__V_5_48;
#line 651 "digraph.m"
        {
#line 651 "digraph.m"
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_55_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_21, mercury__digraph__G_7, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__SuccXs_11, mercury__digraph__STATE_VARIABLE_Visited_16_16, mercury__digraph__STATE_VARIABLE_Visited_13, mercury__digraph__STATE_VARIABLE_DfsRev_0_14, &mercury__digraph__STATE_VARIABLE_DfsRev_19_19);
        }
#line 652 "digraph.m"
        {
#line 652 "digraph.m"
          MR_Word base;
#line 652 "digraph.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 652 "digraph.m"
          *mercury__digraph__STATE_VARIABLE_DfsRev_15 = base;
#line 652 "digraph.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__digraph__X_8));
#line 652 "digraph.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__digraph__STATE_VARIABLE_DfsRev_19_19));
#line 652 "digraph.m"
        }
#line 647 "digraph.m"
      }
#line 646 "digraph.m"
  }
#line 639 "digraph.m"
}

#line 578 "digraph.m"
void MR_CALL 
mercury__digraph__to_key_assoc_list_2_4_p_0(
#line 578 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_20,
#line 578 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 578 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 578 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_AL_0_3,
#line 578 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_AL_4)
#line 578 "digraph.m"
{
#line 582 "digraph.m"
  {
#line 582 "digraph.m"
    MR_bool mercury__digraph__succeeded;

#line 582 "digraph.m"
    if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 582 "digraph.m"
      *mercury__digraph__STATE_VARIABLE_AL_4 = mercury__digraph__STATE_VARIABLE_AL_0_3;
#line 582 "digraph.m"
    else
#line 583 "digraph.m"
      {
#line 583 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_22_22;
#line 583 "digraph.m"
        MR_Word mercury__digraph__TypeInfo_23_23;
#line 583 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_24_24;
#line 583 "digraph.m"
        MR_Word mercury__digraph__TypeInfo_25_25;
#line 583 "digraph.m"
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_29;
#line 583 "digraph.m"
        MR_Word mercury__digraph__TypeClassInfo_for_enum_30;
#line 583 "digraph.m"
        MR_Integer mercury__digraph__XI_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 583 "digraph.m"
        MR_Word mercury__digraph__XIs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 583 "digraph.m"
        MR_Word mercury__digraph__SuccXs_13;
#line 583 "digraph.m"
        MR_Word mercury__digraph__STATE_VARIABLE_AL_16_16;
#line 583 "digraph.m"
        MR_Word mercury__digraph__V_19_19;
#line 583 "digraph.m"
        MR_Word mercury__digraph__V_6_38;
#line 585 "digraph.m"
        MR_Box mercury__digraph__conv0_SuccXs_13;

#line 584 "digraph.m"
        {
#line 584 "digraph.m"
          mercury__digraph__to_key_assoc_list_2_4_p_0(mercury__digraph__TypeInfo_for_T_20, mercury__digraph__HeadVar__1_1, mercury__digraph__XIs_11, mercury__digraph__STATE_VARIABLE_AL_0_3, &mercury__digraph__STATE_VARIABLE_AL_16_16);
        }
#line 10201 "digraph.c"
        mercury__digraph__TypeCtorInfo_24_24 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 10203 "digraph.c"
        mercury__digraph__TypeCtorInfo_22_22 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 10205 "digraph.c"
        {
#line 10207 "digraph.c"
          mercury__digraph__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10209 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_23, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_22_22));
#line 10211 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_20));
#line 10213 "digraph.c"
        }
#line 10215 "digraph.c"
        {
#line 10217 "digraph.c"
          mercury__digraph__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10219 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_24_24));
#line 10221 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 1) = ((MR_Box) (mercury__digraph__TypeInfo_23_23));
#line 10223 "digraph.c"
        }
#line 585 "digraph.m"
        {
#line 585 "digraph.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_25_25, (MR_Word) mercury__digraph__HeadVar__1_1, mercury__digraph__XI_10, &mercury__digraph__conv0_SuccXs_13);
        }
#line 585 "digraph.m"
        mercury__digraph__SuccXs_13 = ((MR_Word) mercury__digraph__conv0_SuccXs_13);
#line 586 "digraph.m"
        mercury__digraph__V_19_19 = (MR_Word) mercury__digraph__XI_10;
#line 10234 "digraph.c"
        mercury__digraph__BaseTypeClassInfo_for_enum_29 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 10236 "digraph.c"
        {
#line 10238 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10240 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_30, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_29));
#line 10242 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_30, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_20));
#line 10244 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_30, 2) = ((MR_Box) (mercury__digraph__TypeInfo_23_23));
#line 10246 "digraph.c"
        }
#line 459 "sparse_bitset.opt"
        mercury__digraph__V_6_38 = (MR_Word) mercury__digraph__SuccXs_13;
#line 460 "sparse_bitset.opt"
        {
#line 460 "sparse_bitset.opt"
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__V_19_19, mercury__digraph__TypeClassInfo_for_enum_30, mercury__digraph__V_6_38, mercury__digraph__STATE_VARIABLE_AL_16_16, mercury__digraph__STATE_VARIABLE_AL_4);
#line 460 "sparse_bitset.opt"
          return;
        }
#line 583 "digraph.m"
      }
#line 582 "digraph.m"
  }
#line 578 "digraph.m"
}

#line 552 "digraph.m"
void MR_CALL 
mercury__digraph__to_assoc_list_2_5_p_0(
#line 552 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_24,
#line 552 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 552 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 552 "digraph.m"
  MR_Word mercury__digraph__VMap_3,
#line 552 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_AL_0_4,
#line 552 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_AL_5)
#line 552 "digraph.m"
{
#line 556 "digraph.m"
  {
#line 556 "digraph.m"
    MR_bool mercury__digraph__succeeded;

#line 556 "digraph.m"
    if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 556 "digraph.m"
      *mercury__digraph__STATE_VARIABLE_AL_5 = mercury__digraph__STATE_VARIABLE_AL_0_4;
#line 556 "digraph.m"
    else
#line 557 "digraph.m"
      {
#line 557 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_25_25;
#line 557 "digraph.m"
        MR_Word mercury__digraph__TypeInfo_26_26;
#line 557 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_28_28;
#line 557 "digraph.m"
        MR_Word mercury__digraph__TypeInfo_29_29;
#line 557 "digraph.m"
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_33;
#line 557 "digraph.m"
        MR_Word mercury__digraph__TypeClassInfo_for_enum_34;
#line 557 "digraph.m"
        MR_Integer mercury__digraph__XI_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 557 "digraph.m"
        MR_Word mercury__digraph__XIs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 557 "digraph.m"
        MR_Box mercury__digraph__VX_16;
#line 557 "digraph.m"
        MR_Word mercury__digraph__SuccXs_17;
#line 557 "digraph.m"
        MR_Word mercury__digraph__STATE_VARIABLE_AL_20_20;
#line 557 "digraph.m"
        MR_Word mercury__digraph__V_21_21;
#line 557 "digraph.m"
        MR_Word mercury__digraph__V_5_42;
#line 557 "digraph.m"
        MR_Word mercury__digraph__V_6_46;
#line 233 "bimap.opt"
        MR_Word mercury__digraph__V_4_41;
#line 560 "digraph.m"
        MR_Box mercury__digraph__conv0_SuccXs_17;

#line 558 "digraph.m"
        {
#line 558 "digraph.m"
          mercury__digraph__to_assoc_list_2_5_p_0(mercury__digraph__TypeInfo_for_T_24, mercury__digraph__HeadVar__1_1, mercury__digraph__XIs_13, mercury__digraph__VMap_3, mercury__digraph__STATE_VARIABLE_AL_0_4, &mercury__digraph__STATE_VARIABLE_AL_20_20);
        }
#line 559 "digraph.m"
        mercury__digraph__V_21_21 = (MR_Word) mercury__digraph__XI_12;
#line 10334 "digraph.c"
        mercury__digraph__TypeCtorInfo_25_25 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 10336 "digraph.c"
        {
#line 10338 "digraph.c"
          mercury__digraph__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10340 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_26_26, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_25_25));
#line 10342 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_26_26, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_24));
#line 10344 "digraph.c"
        }
#line 233 "bimap.opt"
        mercury__digraph__V_4_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__VMap_3, (MR_Integer) 0)));
#line 233 "bimap.opt"
        mercury__digraph__V_5_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__VMap_3, (MR_Integer) 1)));
#line 234 "bimap.opt"
        {
#line 234 "bimap.opt"
          mercury__map__lookup_3_p_0(mercury__digraph__TypeInfo_26_26, mercury__digraph__TypeInfo_for_T_24, (MR_Word) mercury__digraph__V_5_42, ((MR_Box) (mercury__digraph__V_21_21)), &mercury__digraph__VX_16);
        }
#line 10355 "digraph.c"
        mercury__digraph__TypeCtorInfo_28_28 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 10357 "digraph.c"
        {
#line 10359 "digraph.c"
          mercury__digraph__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10361 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_28_28));
#line 10363 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 1) = ((MR_Box) (mercury__digraph__TypeInfo_26_26));
#line 10365 "digraph.c"
        }
#line 560 "digraph.m"
        {
#line 560 "digraph.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_29_29, (MR_Word) mercury__digraph__HeadVar__1_1, mercury__digraph__XI_12, &mercury__digraph__conv0_SuccXs_17);
        }
#line 560 "digraph.m"
        mercury__digraph__SuccXs_17 = ((MR_Word) mercury__digraph__conv0_SuccXs_17);
#line 10374 "digraph.c"
        mercury__digraph__BaseTypeClassInfo_for_enum_33 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 10376 "digraph.c"
        {
#line 10378 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10380 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_34, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_33));
#line 10382 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_34, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_24));
#line 10384 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_34, 2) = ((MR_Box) (mercury__digraph__TypeInfo_26_26));
#line 10386 "digraph.c"
        }
#line 459 "sparse_bitset.opt"
        mercury__digraph__V_6_46 = (MR_Word) mercury__digraph__SuccXs_17;
#line 460 "sparse_bitset.opt"
        {
#line 460 "sparse_bitset.opt"
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_24, mercury__digraph__VMap_3, mercury__digraph__VX_16, mercury__digraph__TypeClassInfo_for_enum_34, mercury__digraph__V_6_46, mercury__digraph__STATE_VARIABLE_AL_20_20, mercury__digraph__STATE_VARIABLE_AL_5);
#line 460 "sparse_bitset.opt"
          return;
        }
#line 557 "digraph.m"
      }
#line 556 "digraph.m"
  }
#line 552 "digraph.m"
}

#line 382 "digraph.m"
static MR_Word MR_CALL 
mercury__digraph__key_set_map_delete_3_f_0(
#line 382 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_11,
#line 382 "digraph.m"
  MR_Word mercury__digraph__Map0_5,
#line 382 "digraph.m"
  MR_Integer mercury__digraph__XI_6,
#line 382 "digraph.m"
  MR_Word mercury__digraph__Y_7)
#line 382 "digraph.m"
{
#line 389 "digraph.m"
  {
#line 389 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 389 "digraph.m"
    MR_Word mercury__digraph__Map_8;
#line 389 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_14_14;
#line 389 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_16_16;
#line 389 "digraph.m"
    MR_Word mercury__digraph__SuccXs0_9;
#line 386 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_13_13 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 386 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_15_15 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 452 "map.opt"
    MR_Box mercury__digraph__conv0_SuccXs0_9;

#line 10436 "digraph.c"
    {
#line 10438 "digraph.c"
      mercury__digraph__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10440 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_14, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_13_13));
#line 10442 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_14, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_11));
#line 10444 "digraph.c"
    }
#line 10446 "digraph.c"
    {
#line 10448 "digraph.c"
      mercury__digraph__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10450 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_15_15));
#line 10452 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 1) = ((MR_Box) (mercury__digraph__TypeInfo_14_14));
#line 10454 "digraph.c"
    }
#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_16_16, (MR_Word) mercury__digraph__Map0_5, mercury__digraph__XI_6, &mercury__digraph__conv0_SuccXs0_9);
    }
#line 452 "map.opt"
    if (mercury__digraph__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__digraph__SuccXs0_9 = ((MR_Word) mercury__digraph__conv0_SuccXs0_9);
#line 452 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 389 "digraph.m"
    if (mercury__digraph__succeeded)
#line 387 "digraph.m"
      {
#line 387 "digraph.m"
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 387 "digraph.m"
        MR_Word mercury__digraph__TypeClassInfo_for_enum_20;
#line 387 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_21_21;
#line 387 "digraph.m"
        MR_Word mercury__digraph__SuccXs_10;
#line 387 "digraph.m"
        MR_Word mercury__digraph__V_6_46;
#line 387 "digraph.m"
        MR_Integer mercury__digraph__V_9_48;
#line 387 "digraph.m"
        MR_Word mercury__digraph__V_4_50;
#line 387 "digraph.m"
        MR_Word mercury__digraph__V_5_51;
#line 387 "digraph.m"
        MR_Word mercury__digraph__V_6_52;
#line 10493 "digraph.c"
        MR_Box MR_CALL (* mercury__digraph__func_1)(MR_Box, MR_Box);
#line 10495 "digraph.c"
        MR_Box mercury__digraph__conv2_V_9_48;

#line 10498 "digraph.c"
        {
#line 10500 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10502 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_20, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_19));
#line 10504 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_20, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_11));
#line 10506 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_20, 2) = ((MR_Box) (mercury__digraph__TypeInfo_14_14));
#line 10508 "digraph.c"
        }
#line 485 "sparse_bitset.opt"
        mercury__digraph__V_6_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10512 "digraph.c"
        mercury__digraph__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10514 "digraph.c"
        {
#line 10516 "digraph.c"
          mercury__digraph__conv2_V_9_48 = mercury__digraph__func_1(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_20), ((MR_Box) (mercury__digraph__Y_7)));
        }
#line 10519 "digraph.c"
        mercury__digraph__V_9_48 = ((MR_Integer) mercury__digraph__conv2_V_9_48);
#line 490 "sparse_bitset.opt"
        {
#line 490 "sparse_bitset.opt"
          mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__V_6_46, mercury__digraph__V_9_48, &mercury__digraph__V_5_51);
        }
#line 218 "sparse_bitset.opt"
        mercury__digraph__V_4_50 = (MR_Word) mercury__digraph__SuccXs0_9;
#line 219 "sparse_bitset.opt"
        {
#line 219 "sparse_bitset.opt"
          mercury__digraph__V_6_52 = mercury__sparse_bitset__difference_2_2_f_0(mercury__digraph__V_4_50, mercury__digraph__V_5_51);
        }
#line 218 "sparse_bitset.opt"
        mercury__digraph__SuccXs_10 = (MR_Word) mercury__digraph__V_6_52;
#line 10535 "digraph.c"
        mercury__digraph__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 162 "map.opt"
        {
#line 162 "map.opt"
          mercury__map__det_update_4_p_0(mercury__digraph__TypeCtorInfo_21_21, mercury__digraph__TypeInfo_16_16, ((MR_Box) (mercury__digraph__XI_6)), ((MR_Box) (mercury__digraph__SuccXs_10)), mercury__digraph__Map0_5, &mercury__digraph__Map_8);
        }
#line 387 "digraph.m"
      }
#line 389 "digraph.m"
    else
#line 390 "digraph.m"
      mercury__digraph__Map_8 = mercury__digraph__Map0_5;
#line 389 "digraph.m"
    return mercury__digraph__Map_8;
#line 389 "digraph.m"
  }
#line 382 "digraph.m"
}

#line 366 "digraph.m"
static MR_Word MR_CALL 
mercury__digraph__key_set_map_add_3_f_0(
#line 366 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_13,
#line 366 "digraph.m"
  MR_Word mercury__digraph__Map0_5,
#line 366 "digraph.m"
  MR_Integer mercury__digraph__XI_6,
#line 366 "digraph.m"
  MR_Word mercury__digraph__Y_7)
#line 366 "digraph.m"
{
#line 376 "digraph.m"
  {
#line 376 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 376 "digraph.m"
    MR_Word mercury__digraph__Map_8;
#line 376 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_16_16;
#line 376 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_18_18;
#line 376 "digraph.m"
    MR_Word mercury__digraph__SuccXs0_9;
#line 369 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_15_15 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 369 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_17_17 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 452 "map.opt"
    MR_Box mercury__digraph__conv0_SuccXs0_9;

#line 10587 "digraph.c"
    {
#line 10589 "digraph.c"
      mercury__digraph__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10591 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_15_15));
#line 10593 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
#line 10595 "digraph.c"
    }
#line 10597 "digraph.c"
    {
#line 10599 "digraph.c"
      mercury__digraph__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10601 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_18_18, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_17_17));
#line 10603 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_18_18, 1) = ((MR_Box) (mercury__digraph__TypeInfo_16_16));
#line 10605 "digraph.c"
    }
#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_18_18, (MR_Word) mercury__digraph__Map0_5, mercury__digraph__XI_6, &mercury__digraph__conv0_SuccXs0_9);
    }
#line 452 "map.opt"
    if (mercury__digraph__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__digraph__SuccXs0_9 = ((MR_Word) mercury__digraph__conv0_SuccXs0_9);
#line 452 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 376 "digraph.m"
    if (mercury__digraph__succeeded)
#line 372 "digraph.m"
      {
#line 370 "digraph.m"
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_21 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 370 "digraph.m"
        MR_Word mercury__digraph__TypeClassInfo_for_enum_22;
#line 370 "digraph.m"
        MR_Word mercury__digraph__V_3_42;
#line 370 "digraph.m"
        MR_Integer mercury__digraph__V_5_43;
#line 10634 "digraph.c"
        MR_Box MR_CALL (* mercury__digraph__func_1)(MR_Box, MR_Box);
#line 10636 "digraph.c"
        MR_Box mercury__digraph__conv2_V_5_43;

#line 10639 "digraph.c"
        {
#line 10641 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10643 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_22, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_21));
#line 10645 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_22, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
#line 10647 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_22, 2) = ((MR_Box) (mercury__digraph__TypeInfo_16_16));
#line 10649 "digraph.c"
        }
#line 183 "sparse_bitset.opt"
        mercury__digraph__V_3_42 = (MR_Word) mercury__digraph__SuccXs0_9;
#line 10653 "digraph.c"
        mercury__digraph__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_22, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10655 "digraph.c"
        {
#line 10657 "digraph.c"
          mercury__digraph__conv2_V_5_43 = mercury__digraph__func_1(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_22), ((MR_Box) (mercury__digraph__Y_7)));
        }
#line 10660 "digraph.c"
        mercury__digraph__V_5_43 = ((MR_Integer) mercury__digraph__conv2_V_5_43);
#line 185 "sparse_bitset.opt"
        {
#line 185 "sparse_bitset.opt"
          mercury__digraph__succeeded = mercury__sparse_bitset__contains_search_nodes_2_p_0(mercury__digraph__V_3_42, mercury__digraph__V_5_43);
        }
#line 372 "digraph.m"
        if (mercury__digraph__succeeded)
#line 371 "digraph.m"
          mercury__digraph__Map_8 = mercury__digraph__Map0_5;
#line 372 "digraph.m"
        else
#line 373 "digraph.m"
          {
#line 373 "digraph.m"
            MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_25 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 373 "digraph.m"
            MR_Word mercury__digraph__TypeClassInfo_for_enum_26;
#line 373 "digraph.m"
            MR_Word mercury__digraph__TypeCtorInfo_27_27;
#line 373 "digraph.m"
            MR_Word mercury__digraph__SuccXs_10;
#line 373 "digraph.m"
            MR_Word mercury__digraph__V_6_47;
#line 373 "digraph.m"
            MR_Integer mercury__digraph__V_9_49;
#line 373 "digraph.m"
            MR_Word mercury__digraph__V_5_50;
#line 10689 "digraph.c"
            MR_Box MR_CALL (* mercury__digraph__func_3)(MR_Box, MR_Box);
#line 10691 "digraph.c"
            MR_Box mercury__digraph__conv4_V_9_49;

#line 10694 "digraph.c"
            {
#line 10696 "digraph.c"
              mercury__digraph__TypeClassInfo_for_enum_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10698 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_26, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_25));
#line 10700 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_26, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
#line 10702 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_26, 2) = ((MR_Box) (mercury__digraph__TypeInfo_16_16));
#line 10704 "digraph.c"
            }
#line 488 "sparse_bitset.opt"
            mercury__digraph__V_6_47 = (MR_Word) mercury__digraph__SuccXs0_9;
#line 10708 "digraph.c"
            mercury__digraph__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_26, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10710 "digraph.c"
            {
#line 10712 "digraph.c"
              mercury__digraph__conv4_V_9_49 = mercury__digraph__func_3(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_26), ((MR_Box) (mercury__digraph__Y_7)));
            }
#line 10715 "digraph.c"
            mercury__digraph__V_9_49 = ((MR_Integer) mercury__digraph__conv4_V_9_49);
#line 490 "sparse_bitset.opt"
            {
#line 490 "sparse_bitset.opt"
              mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__V_6_47, mercury__digraph__V_9_49, &mercury__digraph__V_5_50);
            }
#line 491 "sparse_bitset.opt"
            mercury__digraph__SuccXs_10 = (MR_Word) mercury__digraph__V_5_50;
#line 10724 "digraph.c"
            mercury__digraph__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 162 "map.opt"
            {
#line 162 "map.opt"
              mercury__map__det_update_4_p_0(mercury__digraph__TypeCtorInfo_27_27, mercury__digraph__TypeInfo_18_18, ((MR_Box) (mercury__digraph__XI_6)), ((MR_Box) (mercury__digraph__SuccXs_10)), mercury__digraph__Map0_5, &mercury__digraph__Map_8);
            }
#line 373 "digraph.m"
          }
#line 372 "digraph.m"
      }
#line 376 "digraph.m"
    else
#line 377 "digraph.m"
      {
#line 377 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_30_30 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 377 "digraph.m"
        MR_Word mercury__digraph__TypeInfo_31_31;
#line 377 "digraph.m"
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_32;
#line 377 "digraph.m"
        MR_Word mercury__digraph__TypeClassInfo_for_enum_33;
#line 377 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_34_34;
#line 377 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_35_35;
#line 377 "digraph.m"
        MR_Word mercury__digraph__TypeInfo_36_36;
#line 377 "digraph.m"
        MR_Word mercury__digraph__SuccXs_12;
#line 377 "digraph.m"
        MR_Word mercury__digraph__V_6_60;
#line 377 "digraph.m"
        MR_Integer mercury__digraph__V_9_62;
#line 377 "digraph.m"
        MR_Word mercury__digraph__V_5_63;
#line 10761 "digraph.c"
        MR_Box MR_CALL (* mercury__digraph__func_5)(MR_Box, MR_Box);
#line 10763 "digraph.c"
        MR_Box mercury__digraph__conv6_V_9_62;

#line 10766 "digraph.c"
        {
#line 10768 "digraph.c"
          mercury__digraph__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10770 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_31_31, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_30_30));
#line 10772 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_31_31, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
#line 10774 "digraph.c"
        }
#line 485 "sparse_bitset.opt"
        mercury__digraph__V_6_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10778 "digraph.c"
        mercury__digraph__BaseTypeClassInfo_for_enum_32 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 10780 "digraph.c"
        {
#line 10782 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10784 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_33, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_32));
#line 10786 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_33, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
#line 10788 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_33, 2) = ((MR_Box) (mercury__digraph__TypeInfo_31_31));
#line 10790 "digraph.c"
        }
#line 10792 "digraph.c"
        mercury__digraph__func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_33, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10794 "digraph.c"
        {
#line 10796 "digraph.c"
          mercury__digraph__conv6_V_9_62 = mercury__digraph__func_5(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_33), ((MR_Box) (mercury__digraph__Y_7)));
        }
#line 10799 "digraph.c"
        mercury__digraph__V_9_62 = ((MR_Integer) mercury__digraph__conv6_V_9_62);
#line 490 "sparse_bitset.opt"
        {
#line 490 "sparse_bitset.opt"
          mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__V_6_60, mercury__digraph__V_9_62, &mercury__digraph__V_5_63);
        }
#line 491 "sparse_bitset.opt"
        mercury__digraph__SuccXs_12 = (MR_Word) mercury__digraph__V_5_63;
#line 10808 "digraph.c"
        mercury__digraph__TypeCtorInfo_34_34 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 10810 "digraph.c"
        mercury__digraph__TypeCtorInfo_35_35 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 10812 "digraph.c"
        {
#line 10814 "digraph.c"
          mercury__digraph__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10816 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_36_36, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_35_35));
#line 10818 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_36_36, 1) = ((MR_Box) (mercury__digraph__TypeInfo_31_31));
#line 10820 "digraph.c"
        }
#line 67 "map.opt"
        {
#line 67 "map.opt"
          mercury__map__det_insert_4_p_0(mercury__digraph__TypeCtorInfo_34_34, mercury__digraph__TypeInfo_36_36, ((MR_Box) (mercury__digraph__XI_6)), ((MR_Box) (mercury__digraph__SuccXs_12)), mercury__digraph__Map0_5, &mercury__digraph__Map_8);
        }
#line 377 "digraph.m"
      }
#line 376 "digraph.m"
    return mercury__digraph__Map_8;
#line 376 "digraph.m"
  }
#line 366 "digraph.m"
}

#line 321 "digraph.m"
void MR_CALL 
mercury__digraph__traverse_5_p_1(
#line 321 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_14,
#line 321 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_A_15,
#line 321 "digraph.m"
  MR_Word mercury__digraph__G_6,
#line 321 "digraph.m"
  MR_Word mercury__digraph__ProcessVertex_7,
#line 321 "digraph.m"
  MR_Word mercury__digraph__ProcessEdge_8,
#line 321 "digraph.m"
  MR_Box mercury__digraph__STATE_VARIABLE_Acc_0_11,
#line 321 "digraph.m"
  MR_Box * mercury__digraph__STATE_VARIABLE_Acc_12)
#line 321 "digraph.m"
{
#line 1090 "digraph.m"
  {
#line 1090 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 1090 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_10_22 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 1090 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_11_23;
#line 1090 "digraph.m"
    MR_Word mercury__digraph__Keys_10;
#line 1090 "digraph.m"
    MR_Word mercury__digraph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_6, (MR_Integer) 1)));
#line 1090 "digraph.m"
    MR_Word mercury__digraph__V_4_26;
#line 1090 "digraph.m"
    MR_Word mercury__digraph__V_5_31;
#line 667 "digraph.m"
    MR_Integer mercury__digraph__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_6, (MR_Integer) 0)));
#line 667 "digraph.m"
    MR_Word mercury__digraph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_6, (MR_Integer) 2)));
#line 667 "digraph.m"
    MR_Word mercury__digraph__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_6, (MR_Integer) 3)));
#line 43 "bimap.opt"
    MR_Word mercury__digraph__V_3_25;
#line 252 "tree234.opt"
    MR_Word mercury__digraph__conv0_Keys_10;

#line 10882 "digraph.c"
    {
#line 10884 "digraph.c"
      mercury__digraph__TypeInfo_11_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10886 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_23, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_22));
#line 10888 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_14));
#line 10890 "digraph.c"
    }
#line 43 "bimap.opt"
    mercury__digraph__V_3_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_18_18, (MR_Integer) 0)));
#line 43 "bimap.opt"
    mercury__digraph__V_4_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_18_18, (MR_Integer) 1)));
#line 251 "tree234.opt"
    mercury__digraph__V_5_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 252 "tree234.opt"
    {
#line 252 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__digraph__TypeInfo_11_23, mercury__digraph__TypeInfo_for_T_14, (MR_Word) mercury__digraph__V_4_26, (MR_Word) mercury__digraph__V_5_31, &mercury__digraph__conv0_Keys_10);
    }
#line 252 "tree234.opt"
    mercury__digraph__Keys_10 = (MR_Word) mercury__digraph__conv0_Keys_10;
#line 1092 "digraph.m"
    {
#line 1092 "digraph.m"
      mercury__digraph__traverse_2_6_p_1(mercury__digraph__TypeInfo_for_T_14, mercury__digraph__TypeInfo_for_A_15, mercury__digraph__Keys_10, mercury__digraph__G_6, mercury__digraph__ProcessVertex_7, mercury__digraph__ProcessEdge_8, mercury__digraph__STATE_VARIABLE_Acc_0_11, mercury__digraph__STATE_VARIABLE_Acc_12);
#line 1092 "digraph.m"
      return;
    }
#line 1090 "digraph.m"
  }
#line 321 "digraph.m"
}

#line 319 "digraph.m"
void MR_CALL 
mercury__digraph__traverse_5_p_0(
#line 319 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_14,
#line 319 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_A_15,
#line 319 "digraph.m"
  MR_Word mercury__digraph__G_6,
#line 319 "digraph.m"
  MR_Word mercury__digraph__ProcessVertex_7,
#line 319 "digraph.m"
  MR_Word mercury__digraph__ProcessEdge_8,
#line 319 "digraph.m"
  MR_Box mercury__digraph__STATE_VARIABLE_Acc_0_11,
#line 319 "digraph.m"
  MR_Box * mercury__digraph__STATE_VARIABLE_Acc_12)
#line 319 "digraph.m"
{
#line 1090 "digraph.m"
  {
#line 1090 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 1090 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_10_22 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 1090 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_11_23;
#line 1090 "digraph.m"
    MR_Word mercury__digraph__Keys_10;
#line 1090 "digraph.m"
    MR_Word mercury__digraph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_6, (MR_Integer) 1)));
#line 1090 "digraph.m"
    MR_Word mercury__digraph__V_4_26;
#line 1090 "digraph.m"
    MR_Word mercury__digraph__V_5_31;
#line 667 "digraph.m"
    MR_Integer mercury__digraph__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_6, (MR_Integer) 0)));
#line 667 "digraph.m"
    MR_Word mercury__digraph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_6, (MR_Integer) 2)));
#line 667 "digraph.m"
    MR_Word mercury__digraph__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_6, (MR_Integer) 3)));
#line 43 "bimap.opt"
    MR_Word mercury__digraph__V_3_25;
#line 252 "tree234.opt"
    MR_Word mercury__digraph__conv0_Keys_10;

#line 10963 "digraph.c"
    {
#line 10965 "digraph.c"
      mercury__digraph__TypeInfo_11_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10967 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_23, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_22));
#line 10969 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_14));
#line 10971 "digraph.c"
    }
#line 43 "bimap.opt"
    mercury__digraph__V_3_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_18_18, (MR_Integer) 0)));
#line 43 "bimap.opt"
    mercury__digraph__V_4_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_18_18, (MR_Integer) 1)));
#line 251 "tree234.opt"
    mercury__digraph__V_5_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 252 "tree234.opt"
    {
#line 252 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__digraph__TypeInfo_11_23, mercury__digraph__TypeInfo_for_T_14, (MR_Word) mercury__digraph__V_4_26, (MR_Word) mercury__digraph__V_5_31, &mercury__digraph__conv0_Keys_10);
    }
#line 252 "tree234.opt"
    mercury__digraph__Keys_10 = (MR_Word) mercury__digraph__conv0_Keys_10;
#line 1092 "digraph.m"
    {
#line 1092 "digraph.m"
      mercury__digraph__traverse_2_6_p_0(mercury__digraph__TypeInfo_for_T_14, mercury__digraph__TypeInfo_for_A_15, mercury__digraph__Keys_10, mercury__digraph__G_6, mercury__digraph__ProcessVertex_7, mercury__digraph__ProcessEdge_8, mercury__digraph__STATE_VARIABLE_Acc_0_11, mercury__digraph__STATE_VARIABLE_Acc_12);
#line 1092 "digraph.m"
      return;
    }
#line 1090 "digraph.m"
  }
#line 319 "digraph.m"
}

#line 311 "digraph.m"
void MR_CALL 
mercury__digraph__rtc_2_p_0(
#line 311 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_16,
#line 311 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 311 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Rtc_13)
#line 311 "digraph.m"
{
#line 1033 "digraph.m"
  {
#line 1033 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 1033 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_7_25;
#line 1033 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_8_26;
#line 1033 "digraph.m"
    MR_Word mercury__digraph__Dfs_5;
#line 1033 "digraph.m"
    MR_Word mercury__digraph__Vis_6;
#line 1033 "digraph.m"
    MR_Integer mercury__digraph__NextKey_7;
#line 1033 "digraph.m"
    MR_Word mercury__digraph__VMap_8;
#line 1033 "digraph.m"
    MR_Word mercury__digraph__FwdMap_11;
#line 1033 "digraph.m"
    MR_Word mercury__digraph__BwdMap_12;
#line 1033 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_Rtc_14_14;
#line 1033 "digraph.m"
    MR_Word mercury__digraph__DfsRev_24;
#line 1033 "digraph.m"
    MR_Word mercury__digraph__V_2_28;
#line 623 "digraph.m"
    MR_Word mercury__digraph__conv0_Dfs_5;
#line 1050 "digraph.m"
    MR_Word mercury__digraph__V_9_9;
#line 1050 "digraph.m"
    MR_Word mercury__digraph__V_10_10;

#line 622 "digraph.m"
    {
#line 622 "digraph.m"
      mercury__digraph__dfsrev_2_p_0(mercury__digraph__TypeInfo_for_T_16, mercury__digraph__G_3, &mercury__digraph__DfsRev_24);
    }
#line 11047 "digraph.c"
    mercury__digraph__TypeCtorInfo_7_25 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 11049 "digraph.c"
    {
#line 11051 "digraph.c"
      mercury__digraph__TypeInfo_8_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11053 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_26, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_25));
#line 11055 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_26, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_16));
#line 11057 "digraph.c"
    }
#line 623 "digraph.m"
    {
#line 623 "digraph.m"
      mercury__list__reverse_2_p_0(mercury__digraph__TypeInfo_8_26, (MR_Word) mercury__digraph__DfsRev_24, &mercury__digraph__conv0_Dfs_5);
    }
#line 623 "digraph.m"
    mercury__digraph__Dfs_5 = (MR_Word) mercury__digraph__conv0_Dfs_5;
#line 485 "sparse_bitset.opt"
    mercury__digraph__V_2_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 484 "sparse_bitset.opt"
    mercury__digraph__Vis_6 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1050 "digraph.m"
    mercury__digraph__NextKey_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 1050 "digraph.m"
    mercury__digraph__VMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
#line 1050 "digraph.m"
    mercury__digraph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 1050 "digraph.m"
    mercury__digraph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
#line 243 "tree234.opt"
    mercury__digraph__FwdMap_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 243 "tree234.opt"
    mercury__digraph__BwdMap_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1053 "digraph.m"
    {
#line 1053 "digraph.m"
      mercury__digraph__STATE_VARIABLE_Rtc_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1053 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_Rtc_14_14, 0) = ((MR_Box) (mercury__digraph__NextKey_7));
#line 1053 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_Rtc_14_14, 1) = ((MR_Box) (mercury__digraph__VMap_8));
#line 1053 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_Rtc_14_14, 2) = ((MR_Box) (mercury__digraph__FwdMap_11));
#line 1053 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_Rtc_14_14, 3) = ((MR_Box) (mercury__digraph__BwdMap_12));
#line 1053 "digraph.m"
    }
#line 1055 "digraph.m"
    {
#line 1055 "digraph.m"
      mercury__digraph__rtc_2_5_p_0(mercury__digraph__TypeInfo_for_T_16, mercury__digraph__Dfs_5, mercury__digraph__G_3, mercury__digraph__Vis_6, mercury__digraph__STATE_VARIABLE_Rtc_14_14, mercury__digraph__STATE_VARIABLE_Rtc_13);
#line 1055 "digraph.m"
      return;
    }
#line 1033 "digraph.m"
  }
#line 311 "digraph.m"
}

#line 310 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__rtc_1_f_0(
#line 310 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 310 "digraph.m"
  MR_Word mercury__digraph__G_3)
#line 310 "digraph.m"
{
#line 1031 "digraph.m"
  {
#line 1031 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 1031 "digraph.m"
    MR_Word mercury__digraph__Rtc_4;

#line 1031 "digraph.m"
    {
#line 1031 "digraph.m"
      mercury__digraph__rtc_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__Rtc_4);
    }
#line 1031 "digraph.m"
    return mercury__digraph__Rtc_4;
#line 1031 "digraph.m"
  }
#line 310 "digraph.m"
}

#line 305 "digraph.m"
void MR_CALL 
mercury__digraph__tc_2_p_0(
#line 305 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_9,
#line 305 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 305 "digraph.m"
  MR_Word * mercury__digraph__Tc_4)
#line 305 "digraph.m"
{
#line 991 "digraph.m"
  {
#line 991 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 991 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_10_16;
#line 991 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_11_17;
#line 991 "digraph.m"
    MR_Word mercury__digraph__Rtc_5;
#line 991 "digraph.m"
    MR_Word mercury__digraph__Keys_6;
#line 991 "digraph.m"
    MR_Word mercury__digraph__Fakes_7;
#line 991 "digraph.m"
    MR_Word mercury__digraph__V_8_8;
#line 991 "digraph.m"
    MR_Word mercury__digraph__V_12_12;
#line 991 "digraph.m"
    MR_Word mercury__digraph__V_4_20;
#line 991 "digraph.m"
    MR_Word mercury__digraph__V_5_25;
#line 667 "digraph.m"
    MR_Integer mercury__digraph__V_13_13;
#line 667 "digraph.m"
    MR_Word mercury__digraph__V_14_14;
#line 667 "digraph.m"
    MR_Word mercury__digraph__V_15_15;
#line 43 "bimap.opt"
    MR_Word mercury__digraph__V_3_19;
#line 252 "tree234.opt"
    MR_Word mercury__digraph__conv0_Keys_6;

#line 1003 "digraph.m"
    {
#line 1003 "digraph.m"
      mercury__digraph__rtc_2_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__G_3, &mercury__digraph__Rtc_5);
    }
#line 667 "digraph.m"
    mercury__digraph__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 667 "digraph.m"
    mercury__digraph__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
#line 667 "digraph.m"
    mercury__digraph__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 667 "digraph.m"
    mercury__digraph__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
#line 11193 "digraph.c"
    mercury__digraph__TypeCtorInfo_10_16 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 11195 "digraph.c"
    {
#line 11197 "digraph.c"
      mercury__digraph__TypeInfo_11_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11199 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_16));
#line 11201 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_9));
#line 11203 "digraph.c"
    }
#line 43 "bimap.opt"
    mercury__digraph__V_3_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_12_12, (MR_Integer) 0)));
#line 43 "bimap.opt"
    mercury__digraph__V_4_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_12_12, (MR_Integer) 1)));
#line 251 "tree234.opt"
    mercury__digraph__V_5_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 252 "tree234.opt"
    {
#line 252 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__digraph__TypeInfo_11_17, mercury__digraph__TypeInfo_for_T_9, (MR_Word) mercury__digraph__V_4_20, (MR_Word) mercury__digraph__V_5_25, &mercury__digraph__conv0_Keys_6);
    }
#line 252 "tree234.opt"
    mercury__digraph__Keys_6 = (MR_Word) mercury__digraph__conv0_Keys_6;
#line 1007 "digraph.m"
    mercury__digraph__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1007 "digraph.m"
    {
#line 1007 "digraph.m"
      mercury__digraph__detect_fake_reflexives_5_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__G_3, mercury__digraph__Rtc_5, mercury__digraph__Keys_6, mercury__digraph__V_8_8, &mercury__digraph__Fakes_7);
    }
#line 1010 "digraph.m"
    {
#line 1010 "digraph.m"
      mercury__digraph__delete_assoc_list_3_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__Fakes_7, mercury__digraph__Rtc_5, mercury__digraph__Tc_4);
#line 1010 "digraph.m"
      return;
    }
#line 991 "digraph.m"
  }
#line 305 "digraph.m"
}

#line 304 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__tc_1_f_0(
#line 304 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 304 "digraph.m"
  MR_Word mercury__digraph__G_3)
#line 304 "digraph.m"
{
#line 989 "digraph.m"
  {
#line 989 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 989 "digraph.m"
    MR_Word mercury__digraph__Tc_4;

#line 989 "digraph.m"
    {
#line 989 "digraph.m"
      mercury__digraph__tc_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__Tc_4);
    }
#line 989 "digraph.m"
    return mercury__digraph__Tc_4;
#line 989 "digraph.m"
  }
#line 304 "digraph.m"
}

#line 300 "digraph.m"
void MR_CALL 
mercury__digraph__sc_2_p_0(
#line 300 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_7,
#line 300 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 300 "digraph.m"
  MR_Word * mercury__digraph__Sc_4)
#line 300 "digraph.m"
{
#line 981 "digraph.m"
  {
#line 981 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 981 "digraph.m"
    MR_Word mercury__digraph__GInv_5;
#line 981 "digraph.m"
    MR_Word mercury__digraph__GInvList_6;
#line 981 "digraph.m"
    MR_Integer mercury__digraph__Next_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 981 "digraph.m"
    MR_Word mercury__digraph__VMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
#line 981 "digraph.m"
    MR_Word mercury__digraph__Fwd_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 981 "digraph.m"
    MR_Word mercury__digraph__Bwd_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));

#line 676 "digraph.m"
    {
#line 676 "digraph.m"
      mercury__digraph__GInv_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 676 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_5, 0) = ((MR_Box) (mercury__digraph__Next_10));
#line 676 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_5, 1) = ((MR_Box) (mercury__digraph__VMap_11));
#line 676 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_5, 2) = ((MR_Box) (mercury__digraph__Bwd_13));
#line 676 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_5, 3) = ((MR_Box) (mercury__digraph__Fwd_12));
#line 676 "digraph.m"
    }
#line 983 "digraph.m"
    {
#line 983 "digraph.m"
      mercury__digraph__to_key_assoc_list_2_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__GInv_5, &mercury__digraph__GInvList_6);
    }
#line 984 "digraph.m"
    {
#line 984 "digraph.m"
      mercury__digraph__add_assoc_list_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__GInvList_6, mercury__digraph__G_3, mercury__digraph__Sc_4);
#line 984 "digraph.m"
      return;
    }
#line 981 "digraph.m"
  }
#line 300 "digraph.m"
}

#line 299 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__sc_1_f_0(
#line 299 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 299 "digraph.m"
  MR_Word mercury__digraph__G_3)
#line 299 "digraph.m"
{
#line 981 "digraph.m"
  {
#line 981 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 981 "digraph.m"
    MR_Word mercury__digraph__Sc_4;
#line 981 "digraph.m"
    MR_Word mercury__digraph__GInv_8;
#line 981 "digraph.m"
    MR_Word mercury__digraph__GInvList_9;
#line 981 "digraph.m"
    MR_Integer mercury__digraph__Next_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 981 "digraph.m"
    MR_Word mercury__digraph__VMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
#line 981 "digraph.m"
    MR_Word mercury__digraph__Fwd_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 981 "digraph.m"
    MR_Word mercury__digraph__Bwd_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));

#line 676 "digraph.m"
    {
#line 676 "digraph.m"
      mercury__digraph__GInv_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 676 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_8, 0) = ((MR_Box) (mercury__digraph__Next_12));
#line 676 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_8, 1) = ((MR_Box) (mercury__digraph__VMap_13));
#line 676 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_8, 2) = ((MR_Box) (mercury__digraph__Bwd_15));
#line 676 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_8, 3) = ((MR_Box) (mercury__digraph__Fwd_14));
#line 676 "digraph.m"
    }
#line 983 "digraph.m"
    {
#line 983 "digraph.m"
      mercury__digraph__to_key_assoc_list_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__GInv_8, &mercury__digraph__GInvList_9);
    }
#line 984 "digraph.m"
    {
#line 984 "digraph.m"
      mercury__digraph__add_assoc_list_3_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__GInvList_9, mercury__digraph__G_3, &mercury__digraph__Sc_4);
    }
#line 981 "digraph.m"
    return mercury__digraph__Sc_4;
#line 981 "digraph.m"
  }
#line 299 "digraph.m"
}

#line 294 "digraph.m"
void MR_CALL 
mercury__digraph__atsort_2_p_0(
#line 294 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_10,
#line 294 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 294 "digraph.m"
  MR_Word * mercury__digraph__ATsort_4)
#line 294 "digraph.m"
{
#line 949 "digraph.m"
  {
#line 949 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 949 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_13_13;
#line 949 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_14_14;
#line 949 "digraph.m"
    MR_Word mercury__digraph__DfsRev_5;
#line 949 "digraph.m"
    MR_Word mercury__digraph__GInv_6;
#line 949 "digraph.m"
    MR_Word mercury__digraph__Vis_7;
#line 949 "digraph.m"
    MR_Word mercury__digraph__ATsort0_8;
#line 949 "digraph.m"
    MR_Word mercury__digraph__V_9_9;
#line 949 "digraph.m"
    MR_Integer mercury__digraph__Next_17;
#line 949 "digraph.m"
    MR_Word mercury__digraph__VMap_18;
#line 949 "digraph.m"
    MR_Word mercury__digraph__Fwd_19;
#line 949 "digraph.m"
    MR_Word mercury__digraph__Bwd_20;
#line 949 "digraph.m"
    MR_Word mercury__digraph__V_2_22;
#line 959 "digraph.m"
    MR_Word mercury__digraph__conv0_ATsort_4;

#line 955 "digraph.m"
    {
#line 955 "digraph.m"
      mercury__digraph__dfsrev_2_p_0(mercury__digraph__TypeInfo_for_T_10, mercury__digraph__G_3, &mercury__digraph__DfsRev_5);
    }
#line 675 "digraph.m"
    mercury__digraph__Next_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 675 "digraph.m"
    mercury__digraph__VMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
#line 675 "digraph.m"
    mercury__digraph__Fwd_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 675 "digraph.m"
    mercury__digraph__Bwd_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
#line 676 "digraph.m"
    {
#line 676 "digraph.m"
      mercury__digraph__GInv_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 676 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_6, 0) = ((MR_Box) (mercury__digraph__Next_17));
#line 676 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_6, 1) = ((MR_Box) (mercury__digraph__VMap_18));
#line 676 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_6, 2) = ((MR_Box) (mercury__digraph__Bwd_20));
#line 676 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_6, 3) = ((MR_Box) (mercury__digraph__Fwd_19));
#line 676 "digraph.m"
    }
#line 485 "sparse_bitset.opt"
    mercury__digraph__V_2_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 484 "sparse_bitset.opt"
    mercury__digraph__Vis_7 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 958 "digraph.m"
    mercury__digraph__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 958 "digraph.m"
    {
#line 958 "digraph.m"
      mercury__digraph__atsort_2_5_p_0(mercury__digraph__TypeInfo_for_T_10, mercury__digraph__DfsRev_5, mercury__digraph__GInv_6, mercury__digraph__Vis_7, mercury__digraph__V_9_9, &mercury__digraph__ATsort0_8);
    }
#line 11463 "digraph.c"
    mercury__digraph__TypeCtorInfo_13_13 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 11465 "digraph.c"
    {
#line 11467 "digraph.c"
      mercury__digraph__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11469 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_14, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_13_13));
#line 11471 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_14, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_10));
#line 11473 "digraph.c"
    }
#line 959 "digraph.m"
    {
#line 959 "digraph.m"
      mercury__list__reverse_2_p_0(mercury__digraph__TypeInfo_14_14, (MR_Word) mercury__digraph__ATsort0_8, &mercury__digraph__conv0_ATsort_4);
    }
#line 959 "digraph.m"
    *mercury__digraph__ATsort_4 = (MR_Word) mercury__digraph__conv0_ATsort_4;
#line 949 "digraph.m"
  }
#line 294 "digraph.m"
}

#line 293 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__atsort_1_f_0(
#line 293 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 293 "digraph.m"
  MR_Word mercury__digraph__G_3)
#line 293 "digraph.m"
{
#line 947 "digraph.m"
  {
#line 947 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 947 "digraph.m"
    MR_Word mercury__digraph__ATsort_4;

#line 947 "digraph.m"
    {
#line 947 "digraph.m"
      mercury__digraph__atsort_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__ATsort_4);
    }
#line 947 "digraph.m"
    return mercury__digraph__ATsort_4;
#line 947 "digraph.m"
  }
#line 293 "digraph.m"
}

#line 288 "digraph.m"
MR_bool MR_CALL 
mercury__digraph__tsort_2_p_0(
#line 288 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_8,
#line 288 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 288 "digraph.m"
  MR_Word * mercury__digraph__Tsort_4)
#line 288 "digraph.m"
{
#line 928 "digraph.m"
  {
#line 928 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 928 "digraph.m"
    MR_Word mercury__digraph__Tsort0_5;
#line 928 "digraph.m"
    MR_Word mercury__digraph__V_6_6;
#line 928 "digraph.m"
    MR_Word mercury__digraph__V_2_13;

#line 929 "digraph.m"
    {
#line 929 "digraph.m"
      mercury__digraph__dfsrev_2_p_0(mercury__digraph__TypeInfo_for_T_8, mercury__digraph__G_3, &mercury__digraph__Tsort0_5);
    }
#line 485 "sparse_bitset.opt"
    mercury__digraph__V_2_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 484 "sparse_bitset.opt"
    mercury__digraph__V_6_6 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 930 "digraph.m"
    {
#line 930 "digraph.m"
      mercury__digraph__succeeded = mercury__digraph__check_tsort_3_p_0(mercury__digraph__TypeInfo_for_T_8, mercury__digraph__G_3, mercury__digraph__V_6_6, mercury__digraph__Tsort0_5);
    }
#line 928 "digraph.m"
    if (mercury__digraph__succeeded)
#line 928 "digraph.m"
      {
#line 931 "digraph.m"
        {
#line 931 "digraph.m"
          *mercury__digraph__Tsort_4 = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_51_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_2_f_in__list_0(mercury__digraph__TypeInfo_for_T_8, mercury__digraph__G_3, mercury__digraph__Tsort0_5);
        }
#line 931 "digraph.m"
        mercury__digraph__succeeded = MR_TRUE;
#line 928 "digraph.m"
      }
#line 928 "digraph.m"
    return mercury__digraph__succeeded;
#line 928 "digraph.m"
  }
#line 288 "digraph.m"
}

#line 282 "digraph.m"
void MR_CALL 
mercury__digraph__reduced_3_p_0(
#line 282 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_17,
#line 282 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 282 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_R_10,
#line 282 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_CliqMap_11)
#line 282 "digraph.m"
{
#line 880 "digraph.m"
  {
#line 880 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 880 "digraph.m"
    MR_Word mercury__digraph__Cliques_7;
#line 880 "digraph.m"
    MR_Word mercury__digraph__CliqList_8;
#line 880 "digraph.m"
    MR_Word mercury__digraph__AL_9;
#line 880 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_R_12_12;
#line 880 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_CliqMap_13_13;
#line 880 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_R_15_15;
#line 880 "digraph.m"
    MR_Word mercury__digraph__VMap_27;
#line 880 "digraph.m"
    MR_Word mercury__digraph__FwdMap_28;
#line 880 "digraph.m"
    MR_Word mercury__digraph__BwdMap_29;
#line 880 "digraph.m"
    MR_Word mercury__digraph__V_3_37;
#line 880 "digraph.m"
    MR_Word mercury__digraph__V_4_38;

#line 881 "digraph.m"
    {
#line 881 "digraph.m"
      mercury__digraph__cliques_2_p_0(mercury__digraph__TypeInfo_for_T_17, mercury__digraph__G_4, &mercury__digraph__Cliques_7);
    }
#line 271 "set_ordlist.opt"
    mercury__digraph__CliqList_8 = (MR_Word) mercury__digraph__Cliques_7;
#line 243 "tree234.opt"
    mercury__digraph__V_3_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 243 "tree234.opt"
    mercury__digraph__V_4_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 136 "bimap.opt"
    mercury__digraph__VMap_27 = (MR_Word) &mercury__digraph_scalar_common_4[1];
#line 243 "tree234.opt"
    mercury__digraph__FwdMap_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 243 "tree234.opt"
    mercury__digraph__BwdMap_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 398 "digraph.m"
    mercury__digraph__STATE_VARIABLE_R_12_12 = (MR_Word) &mercury__digraph_scalar_common_2[2];
#line 243 "tree234.opt"
    mercury__digraph__STATE_VARIABLE_CliqMap_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 885 "digraph.m"
    {
#line 885 "digraph.m"
      mercury__digraph__make_clique_map_6_p_0(mercury__digraph__TypeInfo_for_T_17, mercury__digraph__G_4, mercury__digraph__CliqList_8, mercury__digraph__STATE_VARIABLE_CliqMap_13_13, mercury__digraph__STATE_VARIABLE_CliqMap_11, mercury__digraph__STATE_VARIABLE_R_12_12, &mercury__digraph__STATE_VARIABLE_R_15_15);
    }
#line 886 "digraph.m"
    {
#line 886 "digraph.m"
      mercury__digraph__to_key_assoc_list_2_p_0(mercury__digraph__TypeInfo_for_T_17, mercury__digraph__G_4, &mercury__digraph__AL_9);
    }
#line 887 "digraph.m"
    {
#line 887 "digraph.m"
      mercury__digraph__make_reduced_graph_4_p_0(mercury__digraph__TypeInfo_for_T_17, *mercury__digraph__STATE_VARIABLE_CliqMap_11, mercury__digraph__AL_9, mercury__digraph__STATE_VARIABLE_R_15_15, mercury__digraph__STATE_VARIABLE_R_10);
#line 887 "digraph.m"
      return;
    }
#line 880 "digraph.m"
  }
#line 282 "digraph.m"
}

#line 277 "digraph.m"
void MR_CALL 
mercury__digraph__reduced_2_p_0(
#line 277 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_6,
#line 277 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 277 "digraph.m"
  MR_Word * mercury__digraph__R_4)
#line 277 "digraph.m"
{
#line 878 "digraph.m"
  {
#line 878 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 878 "digraph.m"
    MR_Word mercury__digraph__V_5_5;

#line 878 "digraph.m"
    {
#line 878 "digraph.m"
      mercury__digraph__reduced_3_p_0(mercury__digraph__TypeInfo_for_T_6, mercury__digraph__G_3, mercury__digraph__R_4, &mercury__digraph__V_5_5);
    }
#line 878 "digraph.m"
  }
#line 277 "digraph.m"
}

#line 276 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__reduced_1_f_0(
#line 276 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 276 "digraph.m"
  MR_Word mercury__digraph__G_3)
#line 276 "digraph.m"
{
#line 878 "digraph.m"
  {
#line 878 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 878 "digraph.m"
    MR_Word mercury__digraph__R_4;
#line 878 "digraph.m"
    MR_Word mercury__digraph__V_8_8;

#line 878 "digraph.m"
    {
#line 878 "digraph.m"
      mercury__digraph__reduced_3_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__R_4, &mercury__digraph__V_8_8);
    }
#line 878 "digraph.m"
    return mercury__digraph__R_4;
#line 878 "digraph.m"
  }
#line 276 "digraph.m"
}

#line 271 "digraph.m"
void MR_CALL 
mercury__digraph__cliques_2_p_0(
#line 271 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_9,
#line 271 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 271 "digraph.m"
  MR_Word * mercury__digraph__Cliques_4)
#line 271 "digraph.m"
{
#line 836 "digraph.m"
  {
#line 836 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 836 "digraph.m"
    MR_Word mercury__digraph__DfsRev_5;
#line 836 "digraph.m"
    MR_Word mercury__digraph__GInv_6;
#line 836 "digraph.m"
    MR_Word mercury__digraph__Cliques0_7;
#line 836 "digraph.m"
    MR_Word mercury__digraph__Visit_8;
#line 836 "digraph.m"
    MR_Integer mercury__digraph__Next_16;
#line 836 "digraph.m"
    MR_Word mercury__digraph__VMap_17;
#line 836 "digraph.m"
    MR_Word mercury__digraph__Fwd_18;
#line 836 "digraph.m"
    MR_Word mercury__digraph__Bwd_19;
#line 836 "digraph.m"
    MR_Word mercury__digraph__V_2_21;
#line 836 "digraph.m"
    MR_Word mercury__digraph__V_2_24;

#line 848 "digraph.m"
    {
#line 848 "digraph.m"
      mercury__digraph__dfsrev_2_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__G_3, &mercury__digraph__DfsRev_5);
    }
#line 675 "digraph.m"
    mercury__digraph__Next_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 675 "digraph.m"
    mercury__digraph__VMap_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
#line 675 "digraph.m"
    mercury__digraph__Fwd_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 675 "digraph.m"
    mercury__digraph__Bwd_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
#line 676 "digraph.m"
    {
#line 676 "digraph.m"
      mercury__digraph__GInv_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 676 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_6, 0) = ((MR_Box) (mercury__digraph__Next_16));
#line 676 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_6, 1) = ((MR_Box) (mercury__digraph__VMap_17));
#line 676 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_6, 2) = ((MR_Box) (mercury__digraph__Bwd_19));
#line 676 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_6, 3) = ((MR_Box) (mercury__digraph__Fwd_18));
#line 676 "digraph.m"
    }
#line 170 "set_ordlist.opt"
    mercury__digraph__V_2_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 169 "set_ordlist.opt"
    mercury__digraph__Cliques0_7 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 485 "sparse_bitset.opt"
    mercury__digraph__V_2_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 484 "sparse_bitset.opt"
    mercury__digraph__Visit_8 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 852 "digraph.m"
    {
#line 852 "digraph.m"
      mercury__digraph__cliques_2_5_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__DfsRev_5, mercury__digraph__GInv_6, mercury__digraph__Visit_8, mercury__digraph__Cliques0_7, mercury__digraph__Cliques_4);
#line 852 "digraph.m"
      return;
    }
#line 836 "digraph.m"
  }
#line 271 "digraph.m"
}

#line 270 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__cliques_1_f_0(
#line 270 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 270 "digraph.m"
  MR_Word mercury__digraph__G_3)
#line 270 "digraph.m"
{
#line 834 "digraph.m"
  {
#line 834 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 834 "digraph.m"
    MR_Word mercury__digraph__Cliques_4;

#line 834 "digraph.m"
    {
#line 834 "digraph.m"
      mercury__digraph__cliques_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__Cliques_4);
    }
#line 834 "digraph.m"
    return mercury__digraph__Cliques_4;
#line 834 "digraph.m"
  }
#line 270 "digraph.m"
}

#line 264 "digraph.m"
void MR_CALL 
mercury__digraph__components_2_p_0(
#line 264 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_10,
#line 264 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 264 "digraph.m"
  MR_Word * mercury__digraph__Components_4)
#line 264 "digraph.m"
{
#line 794 "digraph.m"
  {
#line 794 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 794 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_12_12;
#line 794 "digraph.m"
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_13;
#line 794 "digraph.m"
    MR_Word mercury__digraph__TypeClassInfo_for_enum_14;
#line 794 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_10_23 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 794 "digraph.m"
    MR_Word mercury__digraph__Keys_5;
#line 794 "digraph.m"
    MR_Word mercury__digraph__KeySet_6;
#line 794 "digraph.m"
    MR_Word mercury__digraph__V_9_9;
#line 794 "digraph.m"
    MR_Word mercury__digraph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
#line 794 "digraph.m"
    MR_Word mercury__digraph__V_4_27;
#line 794 "digraph.m"
    MR_Word mercury__digraph__V_5_32;
#line 794 "digraph.m"
    MR_Word mercury__digraph__V_4_37;
#line 794 "digraph.m"
    MR_Word mercury__digraph__V_5_38;
#line 794 "digraph.m"
    MR_Word mercury__digraph__V_2_41;
#line 667 "digraph.m"
    MR_Integer mercury__digraph__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 667 "digraph.m"
    MR_Word mercury__digraph__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 667 "digraph.m"
    MR_Word mercury__digraph__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
#line 43 "bimap.opt"
    MR_Word mercury__digraph__V_3_26;
#line 252 "tree234.opt"
    MR_Word mercury__digraph__conv0_Keys_5;

#line 11875 "digraph.c"
    {
#line 11877 "digraph.c"
      mercury__digraph__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11879 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_12_12, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_23));
#line 11881 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_12_12, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_10));
#line 11883 "digraph.c"
    }
#line 43 "bimap.opt"
    mercury__digraph__V_3_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_19_19, (MR_Integer) 0)));
#line 43 "bimap.opt"
    mercury__digraph__V_4_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_19_19, (MR_Integer) 1)));
#line 251 "tree234.opt"
    mercury__digraph__V_5_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 252 "tree234.opt"
    {
#line 252 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__digraph__TypeInfo_12_12, mercury__digraph__TypeInfo_for_T_10, (MR_Word) mercury__digraph__V_4_27, (MR_Word) mercury__digraph__V_5_32, &mercury__digraph__conv0_Keys_5);
    }
#line 252 "tree234.opt"
    mercury__digraph__Keys_5 = (MR_Word) mercury__digraph__conv0_Keys_5;
#line 11898 "digraph.c"
    mercury__digraph__BaseTypeClassInfo_for_enum_13 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 11900 "digraph.c"
    {
#line 11902 "digraph.c"
      mercury__digraph__TypeClassInfo_for_enum_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11904 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_14, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_13));
#line 11906 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_14, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_10));
#line 11908 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_14, 2) = ((MR_Box) (mercury__digraph__TypeInfo_12_12));
#line 11910 "digraph.c"
    }
#line 529 "sparse_bitset.opt"
    mercury__digraph__V_5_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "sparse_bitset.opt"
    {
#line 528 "sparse_bitset.opt"
      mercury__digraph__V_4_37 = mercury__sparse_bitset__list_to_set_2_2_f_0(mercury__digraph__TypeClassInfo_for_enum_14, (MR_Word) mercury__digraph__Keys_5, mercury__digraph__V_5_38);
    }
#line 527 "sparse_bitset.opt"
    mercury__digraph__KeySet_6 = (MR_Word) mercury__digraph__V_4_37;
#line 170 "set_ordlist.opt"
    mercury__digraph__V_2_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 169 "set_ordlist.opt"
    mercury__digraph__V_9_9 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 797 "digraph.m"
    {
#line 797 "digraph.m"
      mercury__digraph__components_2_4_p_0(mercury__digraph__TypeInfo_for_T_10, mercury__digraph__G_3, mercury__digraph__KeySet_6, mercury__digraph__V_9_9, mercury__digraph__Components_4);
#line 797 "digraph.m"
      return;
    }
#line 794 "digraph.m"
  }
#line 264 "digraph.m"
}

#line 263 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__components_1_f_0(
#line 263 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 263 "digraph.m"
  MR_Word mercury__digraph__G_3)
#line 263 "digraph.m"
{
#line 792 "digraph.m"
  {
#line 792 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 792 "digraph.m"
    MR_Word mercury__digraph__Components_4;

#line 792 "digraph.m"
    {
#line 792 "digraph.m"
      mercury__digraph__components_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__Components_4);
    }
#line 792 "digraph.m"
    return mercury__digraph__Components_4;
#line 792 "digraph.m"
  }
#line 263 "digraph.m"
}

#line 258 "digraph.m"
MR_bool MR_CALL 
mercury__digraph__is_dag_1_p_0(
#line 258 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_8,
#line 258 "digraph.m"
  MR_Word mercury__digraph__G_2)
#line 258 "digraph.m"
{
#line 754 "digraph.m"
  {
#line 754 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 754 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_10_22 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 754 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_11_23;
#line 754 "digraph.m"
    MR_Word mercury__digraph__Keys_3;
#line 754 "digraph.m"
    MR_Word mercury__digraph__V_6_6;
#line 754 "digraph.m"
    MR_Word mercury__digraph__V_7_7;
#line 754 "digraph.m"
    MR_Word mercury__digraph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_2, (MR_Integer) 1)));
#line 754 "digraph.m"
    MR_Word mercury__digraph__V_4_26;
#line 754 "digraph.m"
    MR_Word mercury__digraph__V_5_31;
#line 754 "digraph.m"
    MR_Word mercury__digraph__V_2_33;
#line 667 "digraph.m"
    MR_Integer mercury__digraph__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_2, (MR_Integer) 0)));
#line 667 "digraph.m"
    MR_Word mercury__digraph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_2, (MR_Integer) 2)));
#line 667 "digraph.m"
    MR_Word mercury__digraph__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_2, (MR_Integer) 3)));
#line 43 "bimap.opt"
    MR_Word mercury__digraph__V_3_25;
#line 252 "tree234.opt"
    MR_Word mercury__digraph__conv0_Keys_3;
#line 772 "digraph.m"
    MR_Word mercury__digraph__V_4_4;

#line 12009 "digraph.c"
    {
#line 12011 "digraph.c"
      mercury__digraph__TypeInfo_11_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12013 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_23, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_22));
#line 12015 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_8));
#line 12017 "digraph.c"
    }
#line 43 "bimap.opt"
    mercury__digraph__V_3_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_18_18, (MR_Integer) 0)));
#line 43 "bimap.opt"
    mercury__digraph__V_4_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_18_18, (MR_Integer) 1)));
#line 251 "tree234.opt"
    mercury__digraph__V_5_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 252 "tree234.opt"
    {
#line 252 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__digraph__TypeInfo_11_23, mercury__digraph__TypeInfo_for_T_8, (MR_Word) mercury__digraph__V_4_26, (MR_Word) mercury__digraph__V_5_31, &mercury__digraph__conv0_Keys_3);
    }
#line 252 "tree234.opt"
    mercury__digraph__Keys_3 = (MR_Word) mercury__digraph__conv0_Keys_3;
#line 772 "digraph.m"
    mercury__digraph__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 485 "sparse_bitset.opt"
    mercury__digraph__V_2_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 484 "sparse_bitset.opt"
    mercury__digraph__V_6_6 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 772 "digraph.m"
    {
#line 772 "digraph.m"
      mercury__digraph__succeeded = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_52_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__list_0(mercury__digraph__TypeInfo_for_T_8, mercury__digraph__G_2, mercury__digraph__V_7_7, mercury__digraph__Keys_3, mercury__digraph__V_6_6, &mercury__digraph__V_4_4);
    }
#line 754 "digraph.m"
    return mercury__digraph__succeeded;
#line 754 "digraph.m"
  }
#line 258 "digraph.m"
}

#line 253 "digraph.m"
void MR_CALL 
mercury__digraph__compose_3_p_0(
#line 253 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_38,
#line 253 "digraph.m"
  MR_Word mercury__digraph__G1_4,
#line 253 "digraph.m"
  MR_Word mercury__digraph__G2_5,
#line 253 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Comp_20)
#line 253 "digraph.m"
{
#line 683 "digraph.m"
  {
#line 683 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 683 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_39_39;
#line 683 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_40_40;
#line 683 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_55_55;
#line 683 "digraph.m"
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_56;
#line 683 "digraph.m"
    MR_Word mercury__digraph__TypeClassInfo_for_enum_57;
#line 683 "digraph.m"
    MR_Word mercury__digraph__G1Vs_7;
#line 683 "digraph.m"
    MR_Word mercury__digraph__G2Vs_8;
#line 683 "digraph.m"
    MR_Word mercury__digraph__Matches_9;
#line 683 "digraph.m"
    MR_Word mercury__digraph__AL_10;
#line 683 "digraph.m"
    MR_Word mercury__digraph__Needed1_16;
#line 683 "digraph.m"
    MR_Word mercury__digraph__Needed2_17;
#line 683 "digraph.m"
    MR_Word mercury__digraph__KMap1_18;
#line 683 "digraph.m"
    MR_Word mercury__digraph__KMap2_19;
#line 683 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_Comp_21_21 = (MR_Word) &mercury__digraph_scalar_common_2[1];
#line 683 "digraph.m"
    MR_Word mercury__digraph__V_25_25;
#line 683 "digraph.m"
    MR_Word mercury__digraph__V_27_27;
#line 683 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_Comp_30_30;
#line 683 "digraph.m"
    MR_Word mercury__digraph__V_31_31;
#line 683 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_Comp_33_33;
#line 683 "digraph.m"
    MR_Word mercury__digraph__V_34_34;
#line 683 "digraph.m"
    MR_Word mercury__digraph__VMap_71 = (MR_Word) &mercury__digraph_scalar_common_4[0];
#line 683 "digraph.m"
    MR_Word mercury__digraph__FwdMap_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 683 "digraph.m"
    MR_Word mercury__digraph__BwdMap_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 683 "digraph.m"
    MR_Word mercury__digraph__V_3_81 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 683 "digraph.m"
    MR_Word mercury__digraph__V_4_82 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 683 "digraph.m"
    MR_Word mercury__digraph__V_4_94;
#line 683 "digraph.m"
    MR_Word mercury__digraph__V_5_95;
#line 683 "digraph.m"
    MR_Word mercury__digraph__V_6_96;
#line 683 "digraph.m"
    MR_Word mercury__digraph__V_2_97;

#line 687 "digraph.m"
    {
#line 687 "digraph.m"
      mercury__digraph__vertices_2_p_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__G1_4, &mercury__digraph__G1Vs_7);
    }
#line 688 "digraph.m"
    {
#line 688 "digraph.m"
      mercury__digraph__vertices_2_p_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__G2_5, &mercury__digraph__G2Vs_8);
    }
#line 192 "set_ordlist.opt"
    mercury__digraph__V_4_94 = (MR_Word) mercury__digraph__G1Vs_7;
#line 192 "set_ordlist.opt"
    mercury__digraph__V_5_95 = (MR_Word) mercury__digraph__G2Vs_8;
#line 193 "set_ordlist.opt"
    {
#line 193 "set_ordlist.opt"
      mercury__set_ordlist__intersect_loop_3_p_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__V_4_94, mercury__digraph__V_5_95, &mercury__digraph__V_6_96);
    }
#line 192 "set_ordlist.opt"
    mercury__digraph__Matches_9 = (MR_Word) mercury__digraph__V_6_96;
#line 12147 "digraph.c"
    mercury__digraph__TypeCtorInfo_39_39 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 12149 "digraph.c"
    {
#line 12151 "digraph.c"
      mercury__digraph__TypeInfo_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12153 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_40_40, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_39_39));
#line 12155 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_40_40, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_38));
#line 12157 "digraph.c"
    }
#line 699 "digraph.m"
    {
#line 699 "digraph.m"
      mercury__digraph__V_25_25 = mercury__set__to_sorted_list_1_f_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__Matches_9);
    }
#line 692 "digraph.m"
    {
#line 692 "digraph.m"
      mercury__digraph__AL_10 = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_2_f_in__list_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__G1_4, mercury__digraph__G2_5, mercury__digraph__V_25_25);
    }
#line 485 "sparse_bitset.opt"
    mercury__digraph__V_2_97 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 484 "sparse_bitset.opt"
    mercury__digraph__V_27_27 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 703 "digraph.m"
    {
#line 703 "digraph.m"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_55_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_53_93_95_48_6_p_in__list_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__AL_10, mercury__digraph__V_27_27, &mercury__digraph__Needed1_16, mercury__digraph__V_27_27, &mercury__digraph__Needed2_17);
    }
#line 12178 "digraph.c"
    mercury__digraph__TypeCtorInfo_55_55 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 707 "digraph.m"
    {
#line 707 "digraph.m"
      mercury__digraph__V_31_31 = mercury__map__init_0_f_0(mercury__digraph__TypeCtorInfo_55_55, mercury__digraph__TypeInfo_40_40);
    }
#line 12185 "digraph.c"
    mercury__digraph__BaseTypeClassInfo_for_enum_56 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 12187 "digraph.c"
    {
#line 12189 "digraph.c"
      mercury__digraph__TypeClassInfo_for_enum_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12191 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_57, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_56));
#line 12193 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_57, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_38));
#line 12195 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_57, 2) = ((MR_Box) (mercury__digraph__TypeInfo_40_40));
#line 12197 "digraph.c"
    }
#line 707 "digraph.m"
    {
#line 707 "digraph.m"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_55_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__G1_4, mercury__digraph__TypeClassInfo_for_enum_57, mercury__digraph__Needed1_16, mercury__digraph__STATE_VARIABLE_Comp_21_21, &mercury__digraph__STATE_VARIABLE_Comp_30_30, mercury__digraph__V_31_31, &mercury__digraph__KMap1_18);
    }
#line 708 "digraph.m"
    {
#line 708 "digraph.m"
      mercury__digraph__V_34_34 = mercury__map__init_0_f_0(mercury__digraph__TypeCtorInfo_55_55, mercury__digraph__TypeInfo_40_40);
    }
#line 708 "digraph.m"
    {
#line 708 "digraph.m"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_55_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__G2_5, mercury__digraph__TypeClassInfo_for_enum_57, mercury__digraph__Needed2_17, mercury__digraph__STATE_VARIABLE_Comp_30_30, &mercury__digraph__STATE_VARIABLE_Comp_33_33, mercury__digraph__V_34_34, &mercury__digraph__KMap2_19);
    }
#line 711 "digraph.m"
    {
#line 711 "digraph.m"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_4_p_in__list_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__KMap1_18, mercury__digraph__KMap2_19, mercury__digraph__AL_10, mercury__digraph__STATE_VARIABLE_Comp_33_33, mercury__digraph__STATE_VARIABLE_Comp_20);
#line 711 "digraph.m"
      return;
    }
#line 683 "digraph.m"
  }
#line 253 "digraph.m"
}

#line 252 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__compose_2_f_0(
#line 252 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_7,
#line 252 "digraph.m"
  MR_Word mercury__digraph__G1_4,
#line 252 "digraph.m"
  MR_Word mercury__digraph__G2_5)
#line 252 "digraph.m"
{
#line 681 "digraph.m"
  {
#line 681 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 681 "digraph.m"
    MR_Word mercury__digraph__Comp_6;

#line 681 "digraph.m"
    {
#line 681 "digraph.m"
      mercury__digraph__compose_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G1_4, mercury__digraph__G2_5, &mercury__digraph__Comp_6);
    }
#line 681 "digraph.m"
    return mercury__digraph__Comp_6;
#line 681 "digraph.m"
  }
#line 252 "digraph.m"
}

#line 246 "digraph.m"
void MR_CALL 
mercury__digraph__inverse_2_p_0(
#line 246 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_9,
#line 246 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 246 "digraph.m"
  MR_Word * mercury__digraph__InvG_4)
#line 246 "digraph.m"
{
#line 674 "digraph.m"
  {
#line 674 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 674 "digraph.m"
    MR_Integer mercury__digraph__Next_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 674 "digraph.m"
    MR_Word mercury__digraph__VMap_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
#line 674 "digraph.m"
    MR_Word mercury__digraph__Fwd_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 674 "digraph.m"
    MR_Word mercury__digraph__Bwd_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));

#line 676 "digraph.m"
    {
#line 676 "digraph.m"
      MR_Word base;
#line 676 "digraph.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 676 "digraph.m"
      *mercury__digraph__InvG_4 = base;
#line 676 "digraph.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__digraph__Next_5));
#line 676 "digraph.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__digraph__VMap_6));
#line 676 "digraph.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__digraph__Bwd_8));
#line 676 "digraph.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__digraph__Fwd_7));
#line 676 "digraph.m"
    }
#line 674 "digraph.m"
  }
#line 246 "digraph.m"
}

#line 245 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__inverse_1_f_0(
#line 245 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 245 "digraph.m"
  MR_Word mercury__digraph__G_3)
#line 245 "digraph.m"
{
#line 674 "digraph.m"
  {
#line 674 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 674 "digraph.m"
    MR_Word mercury__digraph__InvG_4;
#line 674 "digraph.m"
    MR_Integer mercury__digraph__Next_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 674 "digraph.m"
    MR_Word mercury__digraph__VMap_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
#line 674 "digraph.m"
    MR_Word mercury__digraph__Fwd_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 674 "digraph.m"
    MR_Word mercury__digraph__Bwd_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));

#line 676 "digraph.m"
    {
#line 676 "digraph.m"
      mercury__digraph__InvG_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 676 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__InvG_4, 0) = ((MR_Box) (mercury__digraph__Next_8));
#line 676 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__InvG_4, 1) = ((MR_Box) (mercury__digraph__VMap_9));
#line 676 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__InvG_4, 2) = ((MR_Box) (mercury__digraph__Bwd_11));
#line 676 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__InvG_4, 3) = ((MR_Box) (mercury__digraph__Fwd_10));
#line 676 "digraph.m"
    }
#line 674 "digraph.m"
    return mercury__digraph__InvG_4;
#line 674 "digraph.m"
  }
#line 245 "digraph.m"
}

#line 239 "digraph.m"
void MR_CALL 
mercury__digraph__vertices_2_p_0(
#line 239 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_10,
#line 239 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 239 "digraph.m"
  MR_Word * mercury__digraph__Vs_4)
#line 239 "digraph.m"
{
#line 660 "digraph.m"
  {
#line 660 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 660 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_11_11 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 660 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_12_12;
#line 660 "digraph.m"
    MR_Word mercury__digraph__VsList_5;
#line 660 "digraph.m"
    MR_Word mercury__digraph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
#line 660 "digraph.m"
    MR_Word mercury__digraph__V_3_14;
#line 660 "digraph.m"
    MR_Word mercury__digraph__V_5_20;
#line 660 "digraph.m"
    MR_Word mercury__digraph__V_4_25;
#line 661 "digraph.m"
    MR_Integer mercury__digraph__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 661 "digraph.m"
    MR_Word mercury__digraph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 661 "digraph.m"
    MR_Word mercury__digraph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
#line 220 "bimap.opt"
    MR_Word mercury__digraph__V_4_15;

#line 12386 "digraph.c"
    {
#line 12388 "digraph.c"
      mercury__digraph__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12390 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_12_12, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_11_11));
#line 12392 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_12_12, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_10));
#line 12394 "digraph.c"
    }
#line 220 "bimap.opt"
    mercury__digraph__V_3_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_6_6, (MR_Integer) 0)));
#line 220 "bimap.opt"
    mercury__digraph__V_4_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_6_6, (MR_Integer) 1)));
#line 251 "tree234.opt"
    mercury__digraph__V_5_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 252 "tree234.opt"
    {
#line 252 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__digraph__TypeInfo_for_T_10, mercury__digraph__TypeInfo_12_12, mercury__digraph__V_3_14, mercury__digraph__V_5_20, &mercury__digraph__VsList_5);
    }
#line 994 "list.opt"
    if ((mercury__digraph__VsList_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 994 "list.opt"
      mercury__digraph__V_4_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 994 "list.opt"
    else
#line 995 "list.opt"
      {
#line 995 "list.opt"
        MR_Box mercury__digraph__V_3_26 = (MR_hl_field(MR_mktag(1), mercury__digraph__VsList_5, (MR_Integer) 0));
#line 995 "list.opt"
        MR_Word mercury__digraph__V_4_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__VsList_5, (MR_Integer) 1)));

#line 996 "list.opt"
        {
#line 996 "list.opt"
          mercury__list__remove_adjacent_dups_2_3_p_0(mercury__digraph__TypeInfo_for_T_10, mercury__digraph__V_3_26, mercury__digraph__V_4_27, &mercury__digraph__V_4_25);
        }
#line 995 "list.opt"
      }
#line 258 "set_ordlist.opt"
    *mercury__digraph__Vs_4 = (MR_Word) mercury__digraph__V_4_25;
#line 660 "digraph.m"
  }
#line 239 "digraph.m"
}

#line 238 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__vertices_1_f_0(
#line 238 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 238 "digraph.m"
  MR_Word mercury__digraph__G_3)
#line 238 "digraph.m"
{
#line 658 "digraph.m"
  {
#line 658 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 658 "digraph.m"
    MR_Word mercury__digraph__Vs_4;

#line 658 "digraph.m"
    {
#line 658 "digraph.m"
      mercury__digraph__vertices_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__Vs_4);
    }
#line 658 "digraph.m"
    return mercury__digraph__Vs_4;
#line 658 "digraph.m"
  }
#line 238 "digraph.m"
}

#line 230 "digraph.m"
void MR_CALL 
mercury__digraph__dfsrev_5_p_0(
#line 230 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_14,
#line 230 "digraph.m"
  MR_Word mercury__digraph__G_6,
#line 230 "digraph.m"
  MR_Word mercury__digraph__X_7,
#line 230 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Visited_0_10,
#line 230 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Visited_11,
#line 230 "digraph.m"
  MR_Word * mercury__digraph__DfsRev_9)
#line 230 "digraph.m"
{
#line 636 "digraph.m"
  {
#line 636 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 636 "digraph.m"
    MR_Word mercury__digraph__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 637 "digraph.m"
    {
#line 637 "digraph.m"
      mercury__digraph__dfs_2_6_p_0(mercury__digraph__TypeInfo_for_T_14, mercury__digraph__G_6, mercury__digraph__X_7, mercury__digraph__STATE_VARIABLE_Visited_0_10, mercury__digraph__STATE_VARIABLE_Visited_11, mercury__digraph__V_13_13, mercury__digraph__DfsRev_9);
#line 637 "digraph.m"
      return;
    }
#line 636 "digraph.m"
  }
#line 230 "digraph.m"
}

#line 222 "digraph.m"
void MR_CALL 
mercury__digraph__dfs_5_p_0(
#line 222 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_15,
#line 222 "digraph.m"
  MR_Word mercury__digraph__G_6,
#line 222 "digraph.m"
  MR_Word mercury__digraph__X_7,
#line 222 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Visited_0_11,
#line 222 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Visited_12,
#line 222 "digraph.m"
  MR_Word * mercury__digraph__Dfs_9)
#line 222 "digraph.m"
{
#line 632 "digraph.m"
  {
#line 632 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 632 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_16_16;
#line 632 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_17_17;
#line 632 "digraph.m"
    MR_Word mercury__digraph__DfsRev_10;
#line 632 "digraph.m"
    MR_Word mercury__digraph__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 634 "digraph.m"
    MR_Word mercury__digraph__conv0_Dfs_9;

#line 633 "digraph.m"
    {
#line 633 "digraph.m"
      mercury__digraph__dfs_2_6_p_0(mercury__digraph__TypeInfo_for_T_15, mercury__digraph__G_6, mercury__digraph__X_7, mercury__digraph__STATE_VARIABLE_Visited_0_11, mercury__digraph__STATE_VARIABLE_Visited_12, mercury__digraph__V_14_14, &mercury__digraph__DfsRev_10);
    }
#line 12535 "digraph.c"
    mercury__digraph__TypeCtorInfo_16_16 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 12537 "digraph.c"
    {
#line 12539 "digraph.c"
      mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12541 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
#line 12543 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_15));
#line 12545 "digraph.c"
    }
#line 634 "digraph.m"
    {
#line 634 "digraph.m"
      mercury__list__reverse_2_p_0(mercury__digraph__TypeInfo_17_17, (MR_Word) mercury__digraph__DfsRev_10, &mercury__digraph__conv0_Dfs_9);
    }
#line 634 "digraph.m"
    *mercury__digraph__Dfs_9 = (MR_Word) mercury__digraph__conv0_Dfs_9;
#line 632 "digraph.m"
  }
#line 222 "digraph.m"
}

#line 213 "digraph.m"
void MR_CALL 
mercury__digraph__dfsrev_2_p_0(
#line 213 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_10,
#line 213 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 213 "digraph.m"
  MR_Word * mercury__digraph__DfsRev_4)
#line 213 "digraph.m"
{
#line 628 "digraph.m"
  {
#line 628 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 628 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_10_28 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 628 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_11_29;
#line 628 "digraph.m"
    MR_Word mercury__digraph__Keys_5;
#line 628 "digraph.m"
    MR_Word mercury__digraph__V_8_8;
#line 628 "digraph.m"
    MR_Word mercury__digraph__V_9_9;
#line 628 "digraph.m"
    MR_Word mercury__digraph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
#line 628 "digraph.m"
    MR_Word mercury__digraph__V_4_32;
#line 628 "digraph.m"
    MR_Word mercury__digraph__V_5_37;
#line 628 "digraph.m"
    MR_Word mercury__digraph__V_2_39;
#line 667 "digraph.m"
    MR_Integer mercury__digraph__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 667 "digraph.m"
    MR_Word mercury__digraph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 667 "digraph.m"
    MR_Word mercury__digraph__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
#line 43 "bimap.opt"
    MR_Word mercury__digraph__V_3_31;
#line 252 "tree234.opt"
    MR_Word mercury__digraph__conv0_Keys_5;
#line 630 "digraph.m"
    MR_Word mercury__digraph__V_6_6;

#line 12605 "digraph.c"
    {
#line 12607 "digraph.c"
      mercury__digraph__TypeInfo_11_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12609 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_29, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_28));
#line 12611 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_29, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_10));
#line 12613 "digraph.c"
    }
#line 43 "bimap.opt"
    mercury__digraph__V_3_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_24_24, (MR_Integer) 0)));
#line 43 "bimap.opt"
    mercury__digraph__V_4_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_24_24, (MR_Integer) 1)));
#line 251 "tree234.opt"
    mercury__digraph__V_5_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 252 "tree234.opt"
    {
#line 252 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__digraph__TypeInfo_11_29, mercury__digraph__TypeInfo_for_T_10, (MR_Word) mercury__digraph__V_4_32, (MR_Word) mercury__digraph__V_5_37, &mercury__digraph__conv0_Keys_5);
    }
#line 252 "tree234.opt"
    mercury__digraph__Keys_5 = (MR_Word) mercury__digraph__conv0_Keys_5;
#line 485 "sparse_bitset.opt"
    mercury__digraph__V_2_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 484 "sparse_bitset.opt"
    mercury__digraph__V_8_8 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 630 "digraph.m"
    mercury__digraph__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 630 "digraph.m"
    {
#line 630 "digraph.m"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_55_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_6_p_in__list_0(mercury__digraph__TypeInfo_for_T_10, mercury__digraph__G_3, mercury__digraph__Keys_5, mercury__digraph__V_8_8, &mercury__digraph__V_6_6, mercury__digraph__V_9_9, mercury__digraph__DfsRev_4);
    }
#line 628 "digraph.m"
  }
#line 213 "digraph.m"
}

#line 212 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__dfsrev_1_f_0(
#line 212 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 212 "digraph.m"
  MR_Word mercury__digraph__G_3)
#line 212 "digraph.m"
{
#line 626 "digraph.m"
  {
#line 626 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 626 "digraph.m"
    MR_Word mercury__digraph__DfsRev_4;

#line 626 "digraph.m"
    {
#line 626 "digraph.m"
      mercury__digraph__dfsrev_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__DfsRev_4);
    }
#line 626 "digraph.m"
    return mercury__digraph__DfsRev_4;
#line 626 "digraph.m"
  }
#line 212 "digraph.m"
}

#line 207 "digraph.m"
void MR_CALL 
mercury__digraph__dfs_2_p_0(
#line 207 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_6,
#line 207 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 207 "digraph.m"
  MR_Word * mercury__digraph__Dfs_4)
#line 207 "digraph.m"
{
#line 621 "digraph.m"
  {
#line 621 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 621 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_7_7;
#line 621 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_8_8;
#line 621 "digraph.m"
    MR_Word mercury__digraph__DfsRev_5;
#line 623 "digraph.m"
    MR_Word mercury__digraph__conv0_Dfs_4;

#line 622 "digraph.m"
    {
#line 622 "digraph.m"
      mercury__digraph__dfsrev_2_p_0(mercury__digraph__TypeInfo_for_T_6, mercury__digraph__G_3, &mercury__digraph__DfsRev_5);
    }
#line 12701 "digraph.c"
    mercury__digraph__TypeCtorInfo_7_7 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 12703 "digraph.c"
    {
#line 12705 "digraph.c"
      mercury__digraph__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12707 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_7));
#line 12709 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_6));
#line 12711 "digraph.c"
    }
#line 623 "digraph.m"
    {
#line 623 "digraph.m"
      mercury__list__reverse_2_p_0(mercury__digraph__TypeInfo_8_8, (MR_Word) mercury__digraph__DfsRev_5, &mercury__digraph__conv0_Dfs_4);
    }
#line 623 "digraph.m"
    *mercury__digraph__Dfs_4 = (MR_Word) mercury__digraph__conv0_Dfs_4;
#line 621 "digraph.m"
  }
#line 207 "digraph.m"
}

#line 206 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__dfs_1_f_0(
#line 206 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 206 "digraph.m"
  MR_Word mercury__digraph__G_3)
#line 206 "digraph.m"
{
#line 621 "digraph.m"
  {
#line 621 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 621 "digraph.m"
    MR_Word mercury__digraph__Dfs_4;
#line 621 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_7_9;
#line 621 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_8_10;
#line 621 "digraph.m"
    MR_Word mercury__digraph__DfsRev_8;
#line 623 "digraph.m"
    MR_Word mercury__digraph__conv0_Dfs_4;

#line 622 "digraph.m"
    {
#line 622 "digraph.m"
      mercury__digraph__dfsrev_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__DfsRev_8);
    }
#line 12754 "digraph.c"
    mercury__digraph__TypeCtorInfo_7_9 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 12756 "digraph.c"
    {
#line 12758 "digraph.c"
      mercury__digraph__TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12760 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_10, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_9));
#line 12762 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_10, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_5));
#line 12764 "digraph.c"
    }
#line 623 "digraph.m"
    {
#line 623 "digraph.m"
      mercury__list__reverse_2_p_0(mercury__digraph__TypeInfo_8_10, (MR_Word) mercury__digraph__DfsRev_8, &mercury__digraph__conv0_Dfs_4);
    }
#line 623 "digraph.m"
    mercury__digraph__Dfs_4 = (MR_Word) mercury__digraph__conv0_Dfs_4;
#line 621 "digraph.m"
    return mercury__digraph__Dfs_4;
#line 621 "digraph.m"
  }
#line 206 "digraph.m"
}

#line 197 "digraph.m"
void MR_CALL 
mercury__digraph__dfsrev_3_p_0(
#line 197 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_10,
#line 197 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 197 "digraph.m"
  MR_Word mercury__digraph__X_5,
#line 197 "digraph.m"
  MR_Word * mercury__digraph__DfsRev_6)
#line 197 "digraph.m"
{
#line 614 "digraph.m"
  {
#line 614 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 614 "digraph.m"
    MR_Word mercury__digraph__Vis0_7 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 614 "digraph.m"
    MR_Word mercury__digraph__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 614 "digraph.m"
    MR_Word mercury__digraph__V_2_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 616 "digraph.m"
    MR_Word mercury__digraph__V_8_8;

#line 616 "digraph.m"
    {
#line 616 "digraph.m"
      mercury__digraph__dfs_2_6_p_0(mercury__digraph__TypeInfo_for_T_10, mercury__digraph__G_4, mercury__digraph__X_5, mercury__digraph__Vis0_7, &mercury__digraph__V_8_8, mercury__digraph__V_9_9, mercury__digraph__DfsRev_6);
    }
#line 614 "digraph.m"
  }
#line 197 "digraph.m"
}

#line 196 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__dfsrev_2_f_0(
#line 196 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_7,
#line 196 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 196 "digraph.m"
  MR_Word mercury__digraph__X_5)
#line 196 "digraph.m"
{
#line 614 "digraph.m"
  {
#line 614 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 614 "digraph.m"
    MR_Word mercury__digraph__DfsRev_6;
#line 614 "digraph.m"
    MR_Word mercury__digraph__Vis0_11 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 614 "digraph.m"
    MR_Word mercury__digraph__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 614 "digraph.m"
    MR_Word mercury__digraph__V_2_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 616 "digraph.m"
    MR_Word mercury__digraph__V_12_12;

#line 616 "digraph.m"
    {
#line 616 "digraph.m"
      mercury__digraph__dfs_2_6_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__X_5, mercury__digraph__Vis0_11, &mercury__digraph__V_12_12, mercury__digraph__V_13_13, &mercury__digraph__DfsRev_6);
    }
#line 614 "digraph.m"
    return mercury__digraph__DfsRev_6;
#line 614 "digraph.m"
  }
#line 196 "digraph.m"
}

#line 189 "digraph.m"
void MR_CALL 
mercury__digraph__dfs_3_p_0(
#line 189 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_8,
#line 189 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 189 "digraph.m"
  MR_Word mercury__digraph__X_5,
#line 189 "digraph.m"
  MR_Word * mercury__digraph__Dfs_6)
#line 189 "digraph.m"
{
#line 607 "digraph.m"
  {
#line 607 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 607 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_9_9;
#line 607 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_10_10;
#line 607 "digraph.m"
    MR_Word mercury__digraph__DfsRev_7;
#line 607 "digraph.m"
    MR_Word mercury__digraph__Vis0_14 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 607 "digraph.m"
    MR_Word mercury__digraph__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 607 "digraph.m"
    MR_Word mercury__digraph__V_2_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 616 "digraph.m"
    MR_Word mercury__digraph__V_15_15;
#line 609 "digraph.m"
    MR_Word mercury__digraph__conv0_Dfs_6;

#line 616 "digraph.m"
    {
#line 616 "digraph.m"
      mercury__digraph__dfs_2_6_p_0(mercury__digraph__TypeInfo_for_T_8, mercury__digraph__G_4, mercury__digraph__X_5, mercury__digraph__Vis0_14, &mercury__digraph__V_15_15, mercury__digraph__V_16_16, &mercury__digraph__DfsRev_7);
    }
#line 12893 "digraph.c"
    mercury__digraph__TypeCtorInfo_9_9 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 12895 "digraph.c"
    {
#line 12897 "digraph.c"
      mercury__digraph__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12899 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_9_9));
#line 12901 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_8));
#line 12903 "digraph.c"
    }
#line 609 "digraph.m"
    {
#line 609 "digraph.m"
      mercury__list__reverse_2_p_0(mercury__digraph__TypeInfo_10_10, (MR_Word) mercury__digraph__DfsRev_7, &mercury__digraph__conv0_Dfs_6);
    }
#line 609 "digraph.m"
    *mercury__digraph__Dfs_6 = (MR_Word) mercury__digraph__conv0_Dfs_6;
#line 607 "digraph.m"
  }
#line 189 "digraph.m"
}

#line 188 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__dfs_2_f_0(
#line 188 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_7,
#line 188 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 188 "digraph.m"
  MR_Word mercury__digraph__X_5)
#line 188 "digraph.m"
{
#line 605 "digraph.m"
  {
#line 605 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 605 "digraph.m"
    MR_Word mercury__digraph__Dfs_6;

#line 605 "digraph.m"
    {
#line 605 "digraph.m"
      mercury__digraph__dfs_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__X_5, &mercury__digraph__Dfs_6);
    }
#line 605 "digraph.m"
    return mercury__digraph__Dfs_6;
#line 605 "digraph.m"
  }
#line 188 "digraph.m"
}

#line 180 "digraph.m"
void MR_CALL 
mercury__digraph__from_assoc_list_2_p_0(
#line 180 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_7,
#line 180 "digraph.m"
  MR_Word mercury__digraph__AL_3,
#line 180 "digraph.m"
  MR_Word * mercury__digraph__G_4)
#line 180 "digraph.m"
{
#line 598 "digraph.m"
  {
#line 598 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 598 "digraph.m"
    MR_Word mercury__digraph__V_6_6 = (MR_Word) &mercury__digraph_scalar_common_2[1];
#line 598 "digraph.m"
    MR_Word mercury__digraph__VMap_16 = (MR_Word) &mercury__digraph_scalar_common_4[0];
#line 598 "digraph.m"
    MR_Word mercury__digraph__FwdMap_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 598 "digraph.m"
    MR_Word mercury__digraph__BwdMap_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 598 "digraph.m"
    MR_Word mercury__digraph__V_3_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 598 "digraph.m"
    MR_Word mercury__digraph__V_4_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 599 "digraph.m"
    {
#line 599 "digraph.m"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_48_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_93_95_48_4_p_in__list_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__AL_3, mercury__digraph__V_6_6, mercury__digraph__G_4);
#line 599 "digraph.m"
      return;
    }
#line 598 "digraph.m"
  }
#line 180 "digraph.m"
}

#line 179 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__from_assoc_list_1_f_0(
#line 179 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 179 "digraph.m"
  MR_Word mercury__digraph__AL_3)
#line 179 "digraph.m"
{
#line 596 "digraph.m"
  {
#line 596 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 596 "digraph.m"
    MR_Word mercury__digraph__G_4;

#line 596 "digraph.m"
    {
#line 596 "digraph.m"
      mercury__digraph__from_assoc_list_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__AL_3, &mercury__digraph__G_4);
    }
#line 596 "digraph.m"
    return mercury__digraph__G_4;
#line 596 "digraph.m"
  }
#line 179 "digraph.m"
}

#line 174 "digraph.m"
void MR_CALL 
mercury__digraph__to_key_assoc_list_2_p_0(
#line 174 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_11,
#line 174 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 174 "digraph.m"
  MR_Word * mercury__digraph__List_4)
#line 174 "digraph.m"
{
#line 573 "digraph.m"
  {
#line 573 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 573 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 573 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_13_13 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 573 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_14_14;
#line 573 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_15_15 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 573 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_16_16;
#line 573 "digraph.m"
    MR_Word mercury__digraph__Fwd_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 573 "digraph.m"
    MR_Word mercury__digraph__FwdKeys_6;
#line 573 "digraph.m"
    MR_Word mercury__digraph__V_7_7;
#line 573 "digraph.m"
    MR_Word mercury__digraph__V_5_21;
#line 574 "digraph.m"
    MR_Integer mercury__digraph__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 574 "digraph.m"
    MR_Word mercury__digraph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
#line 574 "digraph.m"
    MR_Word mercury__digraph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));

#line 13055 "digraph.c"
    {
#line 13057 "digraph.c"
      mercury__digraph__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13059 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_14, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_13_13));
#line 13061 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_14, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_11));
#line 13063 "digraph.c"
    }
#line 13065 "digraph.c"
    {
#line 13067 "digraph.c"
      mercury__digraph__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13069 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_15_15));
#line 13071 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 1) = ((MR_Box) (mercury__digraph__TypeInfo_14_14));
#line 13073 "digraph.c"
    }
#line 251 "tree234.opt"
    mercury__digraph__V_5_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 252 "tree234.opt"
    {
#line 252 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__digraph__TypeCtorInfo_12_12, mercury__digraph__TypeInfo_16_16, mercury__digraph__Fwd_5, mercury__digraph__V_5_21, &mercury__digraph__FwdKeys_6);
    }
#line 576 "digraph.m"
    mercury__digraph__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 576 "digraph.m"
    {
#line 576 "digraph.m"
      mercury__digraph__to_key_assoc_list_2_4_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__Fwd_5, mercury__digraph__FwdKeys_6, mercury__digraph__V_7_7, mercury__digraph__List_4);
#line 576 "digraph.m"
      return;
    }
#line 573 "digraph.m"
  }
#line 174 "digraph.m"
}

#line 172 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__to_key_assoc_list_1_f_0(
#line 172 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 172 "digraph.m"
  MR_Word mercury__digraph__G_3)
#line 172 "digraph.m"
{
#line 571 "digraph.m"
  {
#line 571 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 571 "digraph.m"
    MR_Word mercury__digraph__List_4;

#line 571 "digraph.m"
    {
#line 571 "digraph.m"
      mercury__digraph__to_key_assoc_list_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__List_4);
    }
#line 571 "digraph.m"
    return mercury__digraph__List_4;
#line 571 "digraph.m"
  }
#line 172 "digraph.m"
}

#line 167 "digraph.m"
void MR_CALL 
mercury__digraph__to_assoc_list_2_p_0(
#line 167 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_15,
#line 167 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 167 "digraph.m"
  MR_Word * mercury__digraph__List_4)
#line 167 "digraph.m"
{
#line 547 "digraph.m"
  {
#line 547 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 547 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 547 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_17_17 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 547 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_18_18;
#line 547 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_19_19 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 547 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_20_20;
#line 547 "digraph.m"
    MR_Word mercury__digraph__Fwd_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 547 "digraph.m"
    MR_Word mercury__digraph__FwdKeys_6;
#line 547 "digraph.m"
    MR_Word mercury__digraph__V_7_7;
#line 547 "digraph.m"
    MR_Word mercury__digraph__V_8_8;
#line 547 "digraph.m"
    MR_Word mercury__digraph__V_5_25;
#line 548 "digraph.m"
    MR_Integer mercury__digraph__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 548 "digraph.m"
    MR_Word mercury__digraph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
#line 548 "digraph.m"
    MR_Word mercury__digraph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
#line 550 "digraph.m"
    MR_Integer mercury__digraph__V_12_12;
#line 550 "digraph.m"
    MR_Word mercury__digraph__V_13_13;
#line 550 "digraph.m"
    MR_Word mercury__digraph__V_14_14;

#line 13172 "digraph.c"
    {
#line 13174 "digraph.c"
      mercury__digraph__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13176 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_18_18, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_17_17));
#line 13178 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_18_18, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_15));
#line 13180 "digraph.c"
    }
#line 13182 "digraph.c"
    {
#line 13184 "digraph.c"
      mercury__digraph__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13186 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_20_20, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_19_19));
#line 13188 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_20_20, 1) = ((MR_Box) (mercury__digraph__TypeInfo_18_18));
#line 13190 "digraph.c"
    }
#line 251 "tree234.opt"
    mercury__digraph__V_5_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 252 "tree234.opt"
    {
#line 252 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__digraph__TypeCtorInfo_16_16, mercury__digraph__TypeInfo_20_20, mercury__digraph__Fwd_5, mercury__digraph__V_5_25, &mercury__digraph__FwdKeys_6);
    }
#line 550 "digraph.m"
    mercury__digraph__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 550 "digraph.m"
    mercury__digraph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
#line 550 "digraph.m"
    mercury__digraph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 550 "digraph.m"
    mercury__digraph__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
#line 550 "digraph.m"
    mercury__digraph__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 550 "digraph.m"
    {
#line 550 "digraph.m"
      mercury__digraph__to_assoc_list_2_5_p_0(mercury__digraph__TypeInfo_for_T_15, mercury__digraph__Fwd_5, mercury__digraph__FwdKeys_6, mercury__digraph__V_7_7, mercury__digraph__V_8_8, mercury__digraph__List_4);
#line 550 "digraph.m"
      return;
    }
#line 547 "digraph.m"
  }
#line 167 "digraph.m"
}

#line 166 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__to_assoc_list_1_f_0(
#line 166 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 166 "digraph.m"
  MR_Word mercury__digraph__G_3)
#line 166 "digraph.m"
{
#line 545 "digraph.m"
  {
#line 545 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 545 "digraph.m"
    MR_Word mercury__digraph__List_4;

#line 545 "digraph.m"
    {
#line 545 "digraph.m"
      mercury__digraph__to_assoc_list_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__List_4);
    }
#line 545 "digraph.m"
    return mercury__digraph__List_4;
#line 545 "digraph.m"
  }
#line 166 "digraph.m"
}

#line 158 "digraph.m"
void MR_CALL 
mercury__digraph__lookup_key_set_to_3_p_0(
#line 158 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_12,
#line 158 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 158 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 158 "digraph.m"
  MR_Word * mercury__digraph__Xs_6)
#line 158 "digraph.m"
{
#line 534 "digraph.m"
  {
#line 534 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 534 "digraph.m"
    MR_Integer mercury__digraph__YI_5 = (MR_Integer) mercury__digraph__HeadVar__2_2;
#line 537 "digraph.m"
    MR_Word mercury__digraph__Xs0_7;
#line 535 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_14_14 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 535 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_15_15;
#line 535 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_16_16 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 535 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_17_17;
#line 535 "digraph.m"
    MR_Word mercury__digraph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 3)));
#line 535 "digraph.m"
    MR_Integer mercury__digraph__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 0)));
#line 535 "digraph.m"
    MR_Word mercury__digraph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 1)));
#line 535 "digraph.m"
    MR_Word mercury__digraph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 2)));
#line 452 "map.opt"
    MR_Box mercury__digraph__conv0_Xs0_7;

#line 13289 "digraph.c"
    {
#line 13291 "digraph.c"
      mercury__digraph__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13293 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
#line 13295 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
#line 13297 "digraph.c"
    }
#line 13299 "digraph.c"
    {
#line 13301 "digraph.c"
      mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13303 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
#line 13305 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 13307 "digraph.c"
    }
#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_17_17, (MR_Word) mercury__digraph__V_8_8, mercury__digraph__YI_5, &mercury__digraph__conv0_Xs0_7);
    }
#line 452 "map.opt"
    if (mercury__digraph__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__digraph__Xs0_7 = ((MR_Word) mercury__digraph__conv0_Xs0_7);
#line 452 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 537 "digraph.m"
    if (mercury__digraph__succeeded)
#line 536 "digraph.m"
      *mercury__digraph__Xs_6 = mercury__digraph__Xs0_7;
#line 537 "digraph.m"
    else
#line 538 "digraph.m"
      {
#line 538 "digraph.m"
        MR_Word mercury__digraph__V_2_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 484 "sparse_bitset.opt"
        *mercury__digraph__Xs_6 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 538 "digraph.m"
      }
#line 534 "digraph.m"
  }
#line 158 "digraph.m"
}

#line 157 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__lookup_key_set_to_2_f_0(
#line 157 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_7,
#line 157 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 157 "digraph.m"
  MR_Word mercury__digraph__Y_5)
#line 157 "digraph.m"
{
#line 532 "digraph.m"
  {
#line 532 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 532 "digraph.m"
    MR_Word mercury__digraph__Xs_6;

#line 532 "digraph.m"
    {
#line 532 "digraph.m"
      mercury__digraph__lookup_key_set_to_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__Y_5, &mercury__digraph__Xs_6);
    }
#line 532 "digraph.m"
    return mercury__digraph__Xs_6;
#line 532 "digraph.m"
  }
#line 157 "digraph.m"
}

#line 152 "digraph.m"
void MR_CALL 
mercury__digraph__lookup_to_3_p_0(
#line 152 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_7,
#line 152 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 152 "digraph.m"
  MR_Word mercury__digraph__Y_5,
#line 152 "digraph.m"
  MR_Word * mercury__digraph__HeadVar__3_3)
#line 152 "digraph.m"
{
#line 528 "digraph.m"
  {
#line 528 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 528 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_8_8 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 528 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_9_9;
#line 528 "digraph.m"
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_10 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 528 "digraph.m"
    MR_Word mercury__digraph__TypeClassInfo_for_enum_11;
#line 528 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_8_16;
#line 528 "digraph.m"
    MR_Word mercury__digraph__Xs_6;
#line 528 "digraph.m"
    MR_Word mercury__digraph__V_4_14;
#line 528 "digraph.m"
    MR_Word mercury__digraph__V_10_20;
#line 528 "digraph.m"
    MR_Word mercury__digraph__V_6_39;
#line 528 "digraph.m"
    MR_Word mercury__digraph__V_4_61;
#line 472 "sparse_bitset.opt"
    MR_Word mercury__digraph__conv0_V_4_14;

#line 13414 "digraph.c"
    {
#line 13416 "digraph.c"
      mercury__digraph__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13418 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_8_8));
#line 13420 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_7));
#line 13422 "digraph.c"
    }
#line 13424 "digraph.c"
    {
#line 13426 "digraph.c"
      mercury__digraph__TypeClassInfo_for_enum_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13428 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_11, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_10));
#line 13430 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_11, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_7));
#line 13432 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_11, 2) = ((MR_Box) (mercury__digraph__TypeInfo_9_9));
#line 13434 "digraph.c"
    }
#line 529 "digraph.m"
    {
#line 529 "digraph.m"
      mercury__digraph__lookup_key_set_to_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__Y_5, &mercury__digraph__Xs_6);
    }
#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__digraph__lookup_to_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__digraph__TypeClassInfo_for_enum_11 ;
	Index =  (MR_Integer) 1 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 13456 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__TypeInfo_8_16  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 601 "sparse_bitset.opt"
    mercury__digraph__V_10_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 462 "sparse_bitset.opt"
    mercury__digraph__V_6_39 = (MR_Word) mercury__digraph__Xs_6;
#line 472 "sparse_bitset.opt"
    {
#line 472 "sparse_bitset.opt"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_57_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeClassInfo_for_enum_11, mercury__digraph__V_6_39, (MR_Word) mercury__digraph__V_10_20, &mercury__digraph__conv0_V_4_14);
    }
#line 472 "sparse_bitset.opt"
    mercury__digraph__V_4_14 = (MR_Word) mercury__digraph__conv0_V_4_14;
#line 994 "list.opt"
    if ((mercury__digraph__V_4_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 994 "list.opt"
      mercury__digraph__V_4_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 994 "list.opt"
    else
#line 995 "list.opt"
      {
#line 995 "list.opt"
        MR_Word mercury__digraph__V_3_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__V_4_14, (MR_Integer) 0)));
#line 995 "list.opt"
        MR_Word mercury__digraph__V_4_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__V_4_14, (MR_Integer) 1)));
#line 996 "list.opt"
        MR_Word mercury__digraph__conv1_V_4_61;

#line 996 "list.opt"
        {
#line 996 "list.opt"
          mercury__list__remove_adjacent_dups_2_3_p_0(mercury__digraph__TypeInfo_8_16, ((MR_Box) (mercury__digraph__V_3_62)), (MR_Word) mercury__digraph__V_4_63, &mercury__digraph__conv1_V_4_61);
        }
#line 996 "list.opt"
        mercury__digraph__V_4_61 = (MR_Word) mercury__digraph__conv1_V_4_61;
#line 995 "list.opt"
      }
#line 258 "set_ordlist.opt"
    *mercury__digraph__HeadVar__3_3 = (MR_Word) mercury__digraph__V_4_61;
#line 528 "digraph.m"
  }
#line 152 "digraph.m"
}

#line 151 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__lookup_to_2_f_0(
#line 151 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_7,
#line 151 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 151 "digraph.m"
  MR_Word mercury__digraph__Y_5)
#line 151 "digraph.m"
{
#line 526 "digraph.m"
  {
#line 526 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 526 "digraph.m"
    MR_Word mercury__digraph__Xs_6;

#line 526 "digraph.m"
    {
#line 526 "digraph.m"
      mercury__digraph__lookup_to_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__Y_5, &mercury__digraph__Xs_6);
    }
#line 526 "digraph.m"
    return mercury__digraph__Xs_6;
#line 526 "digraph.m"
  }
#line 151 "digraph.m"
}

#line 145 "digraph.m"
void MR_CALL 
mercury__digraph__lookup_key_set_from_3_p_0(
#line 145 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_12,
#line 145 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 145 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 145 "digraph.m"
  MR_Word * mercury__digraph__Ys_6)
#line 145 "digraph.m"
{
#line 518 "digraph.m"
  {
#line 518 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 518 "digraph.m"
    MR_Integer mercury__digraph__XI_5 = (MR_Integer) mercury__digraph__HeadVar__2_2;
#line 521 "digraph.m"
    MR_Word mercury__digraph__Ys0_7;
#line 519 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_14_14 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 519 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_15_15;
#line 519 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_16_16 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 519 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_17_17;
#line 519 "digraph.m"
    MR_Word mercury__digraph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 2)));
#line 519 "digraph.m"
    MR_Integer mercury__digraph__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 0)));
#line 519 "digraph.m"
    MR_Word mercury__digraph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 1)));
#line 519 "digraph.m"
    MR_Word mercury__digraph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 3)));
#line 452 "map.opt"
    MR_Box mercury__digraph__conv0_Ys0_7;

#line 13575 "digraph.c"
    {
#line 13577 "digraph.c"
      mercury__digraph__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13579 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
#line 13581 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
#line 13583 "digraph.c"
    }
#line 13585 "digraph.c"
    {
#line 13587 "digraph.c"
      mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13589 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
#line 13591 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 13593 "digraph.c"
    }
#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_17_17, (MR_Word) mercury__digraph__V_8_8, mercury__digraph__XI_5, &mercury__digraph__conv0_Ys0_7);
    }
#line 452 "map.opt"
    if (mercury__digraph__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__digraph__Ys0_7 = ((MR_Word) mercury__digraph__conv0_Ys0_7);
#line 452 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 521 "digraph.m"
    if (mercury__digraph__succeeded)
#line 520 "digraph.m"
      *mercury__digraph__Ys_6 = mercury__digraph__Ys0_7;
#line 521 "digraph.m"
    else
#line 522 "digraph.m"
      {
#line 522 "digraph.m"
        MR_Word mercury__digraph__V_2_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 484 "sparse_bitset.opt"
        *mercury__digraph__Ys_6 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 522 "digraph.m"
      }
#line 518 "digraph.m"
  }
#line 145 "digraph.m"
}

#line 144 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__lookup_key_set_from_2_f_0(
#line 144 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_7,
#line 144 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 144 "digraph.m"
  MR_Word mercury__digraph__X_5)
#line 144 "digraph.m"
{
#line 516 "digraph.m"
  {
#line 516 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 516 "digraph.m"
    MR_Word mercury__digraph__Ys_6;

#line 516 "digraph.m"
    {
#line 516 "digraph.m"
      mercury__digraph__lookup_key_set_from_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__X_5, &mercury__digraph__Ys_6);
    }
#line 516 "digraph.m"
    return mercury__digraph__Ys_6;
#line 516 "digraph.m"
  }
#line 144 "digraph.m"
}

#line 139 "digraph.m"
void MR_CALL 
mercury__digraph__lookup_from_3_p_0(
#line 139 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_7,
#line 139 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 139 "digraph.m"
  MR_Word mercury__digraph__X_5,
#line 139 "digraph.m"
  MR_Word * mercury__digraph__HeadVar__3_3)
#line 139 "digraph.m"
{
#line 512 "digraph.m"
  {
#line 512 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 512 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_8_8 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 512 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_9_9;
#line 512 "digraph.m"
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_10 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 512 "digraph.m"
    MR_Word mercury__digraph__TypeClassInfo_for_enum_11;
#line 512 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_8_16;
#line 512 "digraph.m"
    MR_Word mercury__digraph__Ys_6;
#line 512 "digraph.m"
    MR_Word mercury__digraph__V_4_14;
#line 512 "digraph.m"
    MR_Word mercury__digraph__V_10_20;
#line 512 "digraph.m"
    MR_Word mercury__digraph__V_6_39;
#line 512 "digraph.m"
    MR_Word mercury__digraph__V_4_61;
#line 472 "sparse_bitset.opt"
    MR_Word mercury__digraph__conv0_V_4_14;

#line 13700 "digraph.c"
    {
#line 13702 "digraph.c"
      mercury__digraph__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13704 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_8_8));
#line 13706 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_7));
#line 13708 "digraph.c"
    }
#line 13710 "digraph.c"
    {
#line 13712 "digraph.c"
      mercury__digraph__TypeClassInfo_for_enum_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13714 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_11, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_10));
#line 13716 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_11, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_7));
#line 13718 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_11, 2) = ((MR_Box) (mercury__digraph__TypeInfo_9_9));
#line 13720 "digraph.c"
    }
#line 513 "digraph.m"
    {
#line 513 "digraph.m"
      mercury__digraph__lookup_key_set_from_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__X_5, &mercury__digraph__Ys_6);
    }
#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__digraph__lookup_from_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__digraph__TypeClassInfo_for_enum_11 ;
	Index =  (MR_Integer) 1 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 13742 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__TypeInfo_8_16  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 601 "sparse_bitset.opt"
    mercury__digraph__V_10_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 462 "sparse_bitset.opt"
    mercury__digraph__V_6_39 = (MR_Word) mercury__digraph__Ys_6;
#line 472 "sparse_bitset.opt"
    {
#line 472 "sparse_bitset.opt"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_57_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeClassInfo_for_enum_11, mercury__digraph__V_6_39, (MR_Word) mercury__digraph__V_10_20, &mercury__digraph__conv0_V_4_14);
    }
#line 472 "sparse_bitset.opt"
    mercury__digraph__V_4_14 = (MR_Word) mercury__digraph__conv0_V_4_14;
#line 994 "list.opt"
    if ((mercury__digraph__V_4_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 994 "list.opt"
      mercury__digraph__V_4_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 994 "list.opt"
    else
#line 995 "list.opt"
      {
#line 995 "list.opt"
        MR_Word mercury__digraph__V_3_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__V_4_14, (MR_Integer) 0)));
#line 995 "list.opt"
        MR_Word mercury__digraph__V_4_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__V_4_14, (MR_Integer) 1)));
#line 996 "list.opt"
        MR_Word mercury__digraph__conv1_V_4_61;

#line 996 "list.opt"
        {
#line 996 "list.opt"
          mercury__list__remove_adjacent_dups_2_3_p_0(mercury__digraph__TypeInfo_8_16, ((MR_Box) (mercury__digraph__V_3_62)), (MR_Word) mercury__digraph__V_4_63, &mercury__digraph__conv1_V_4_61);
        }
#line 996 "list.opt"
        mercury__digraph__V_4_61 = (MR_Word) mercury__digraph__conv1_V_4_61;
#line 995 "list.opt"
      }
#line 258 "set_ordlist.opt"
    *mercury__digraph__HeadVar__3_3 = (MR_Word) mercury__digraph__V_4_61;
#line 512 "digraph.m"
  }
#line 139 "digraph.m"
}

#line 138 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__lookup_from_2_f_0(
#line 138 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_7,
#line 138 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 138 "digraph.m"
  MR_Word mercury__digraph__X_5)
#line 138 "digraph.m"
{
#line 510 "digraph.m"
  {
#line 510 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 510 "digraph.m"
    MR_Word mercury__digraph__Ys_6;

#line 510 "digraph.m"
    {
#line 510 "digraph.m"
      mercury__digraph__lookup_from_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__X_5, &mercury__digraph__Ys_6);
    }
#line 510 "digraph.m"
    return mercury__digraph__Ys_6;
#line 510 "digraph.m"
  }
#line 138 "digraph.m"
}

#line 133 "digraph.m"
MR_bool MR_CALL 
mercury__digraph__is_edge_rev_3_p_1(
#line 133 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_12,
#line 133 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 133 "digraph.m"
  MR_Word mercury__digraph__X_5,
#line 133 "digraph.m"
  MR_Word mercury__digraph__HeadVar__3_3)
#line 133 "digraph.m"
{
#line 503 "digraph.m"
  {
#line 503 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 503 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_14_14 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 503 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_15_15;
#line 503 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_16_16 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 503 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_17_17;
#line 503 "digraph.m"
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_18;
#line 503 "digraph.m"
    MR_Word mercury__digraph__TypeClassInfo_for_enum_19;
#line 503 "digraph.m"
    MR_Integer mercury__digraph__YI_6 = (MR_Integer) mercury__digraph__HeadVar__3_3;
#line 503 "digraph.m"
    MR_Word mercury__digraph__XSet_7;
#line 503 "digraph.m"
    MR_Word mercury__digraph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 3)));
#line 504 "digraph.m"
    MR_Integer mercury__digraph__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 0)));
#line 504 "digraph.m"
    MR_Word mercury__digraph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 1)));
#line 504 "digraph.m"
    MR_Word mercury__digraph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 2)));
#line 452 "map.opt"
    MR_Box mercury__digraph__conv0_XSet_7;

#line 13865 "digraph.c"
    {
#line 13867 "digraph.c"
      mercury__digraph__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13869 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
#line 13871 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
#line 13873 "digraph.c"
    }
#line 13875 "digraph.c"
    {
#line 13877 "digraph.c"
      mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13879 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
#line 13881 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 13883 "digraph.c"
    }
#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_17_17, (MR_Word) mercury__digraph__V_8_8, mercury__digraph__YI_6, &mercury__digraph__conv0_XSet_7);
    }
#line 452 "map.opt"
    if (mercury__digraph__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__digraph__XSet_7 = ((MR_Word) mercury__digraph__conv0_XSet_7);
#line 452 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 503 "digraph.m"
    if (mercury__digraph__succeeded)
#line 503 "digraph.m"
      {
#line 13904 "digraph.c"
        mercury__digraph__BaseTypeClassInfo_for_enum_18 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 13906 "digraph.c"
        {
#line 13908 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13910 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_18));
#line 13912 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
#line 13914 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 2) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 13916 "digraph.c"
        }
#line 505 "digraph.m"
        {
#line 505 "digraph.m"
          return mercury__digraph__succeeded = mercury__sparse_bitset__member_2_p_0(mercury__digraph__TypeClassInfo_for_enum_19, ((MR_Box) (mercury__digraph__X_5)), (MR_Word) mercury__digraph__XSet_7);
        }
#line 503 "digraph.m"
      }
#line 503 "digraph.m"
    return mercury__digraph__succeeded;
#line 503 "digraph.m"
  }
#line 133 "digraph.m"
}

#line 505 "digraph.m"
static void MR_CALL 
mercury__digraph__is_edge_rev_3_p_0_1(
#line 505 "digraph.m"
  void * mercury__digraph__env_ptr_arg)
#line 505 "digraph.m"
{
#line 505 "digraph.m"
  {
#line 505 "digraph.m"
    struct mercury__digraph__is_edge_rev_3_p_0_env_0_s * mercury__digraph__env_ptr = (struct mercury__digraph__is_edge_rev_3_p_0_env_0_s *) mercury__digraph__env_ptr_arg;

#line 505 "digraph.m"
    *((mercury__digraph__env_ptr)->mercury__digraph__is_edge_rev_3_p_0_env_0__X_5) = ((MR_Word) (mercury__digraph__env_ptr)->mercury__digraph__is_edge_rev_3_p_0_env_0__conv1_X_5);
#line 505 "digraph.m"
    {
#line 505 "digraph.m"
      ((mercury__digraph__env_ptr)->mercury__digraph__is_edge_rev_3_p_0_env_0__cont)((mercury__digraph__env_ptr)->mercury__digraph__is_edge_rev_3_p_0_env_0__cont_env_ptr);
#line 505 "digraph.m"
      return;
    }
#line 505 "digraph.m"
  }
#line 505 "digraph.m"
}

#line 132 "digraph.m"
void MR_CALL 
mercury__digraph__is_edge_rev_3_p_0(
#line 132 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_12,
#line 132 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 132 "digraph.m"
  MR_Word * mercury__digraph__X_5,
#line 132 "digraph.m"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 132 "digraph.m"
  MR_Cont mercury__digraph__cont,
#line 132 "digraph.m"
  void * mercury__digraph__cont_env_ptr)
#line 132 "digraph.m"
{
#line 132 "digraph.m"
  {
#line 132 "digraph.m"
    struct mercury__digraph__is_edge_rev_3_p_0_env_0_s mercury__digraph__env;

#line 132 "digraph.m"
    (mercury__digraph__env).mercury__digraph__is_edge_rev_3_p_0_env_0__X_5 = mercury__digraph__X_5;
#line 132 "digraph.m"
    (mercury__digraph__env).mercury__digraph__is_edge_rev_3_p_0_env_0__cont = mercury__digraph__cont;
#line 132 "digraph.m"
    (mercury__digraph__env).mercury__digraph__is_edge_rev_3_p_0_env_0__cont_env_ptr = mercury__digraph__cont_env_ptr;
#line 503 "digraph.m"
    {
#line 503 "digraph.m"
      MR_bool mercury__digraph__succeeded;
#line 503 "digraph.m"
      MR_Word mercury__digraph__TypeCtorInfo_14_14 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 503 "digraph.m"
      MR_Word mercury__digraph__TypeInfo_15_15;
#line 503 "digraph.m"
      MR_Word mercury__digraph__TypeCtorInfo_16_16 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 503 "digraph.m"
      MR_Word mercury__digraph__TypeInfo_17_17;
#line 503 "digraph.m"
      MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_18;
#line 503 "digraph.m"
      MR_Word mercury__digraph__TypeClassInfo_for_enum_19;
#line 503 "digraph.m"
      MR_Integer mercury__digraph__YI_6 = (MR_Integer) mercury__digraph__HeadVar__3_3;
#line 503 "digraph.m"
      MR_Word mercury__digraph__XSet_7;
#line 503 "digraph.m"
      MR_Word mercury__digraph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 3)));
#line 504 "digraph.m"
      MR_Integer mercury__digraph__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 0)));
#line 504 "digraph.m"
      MR_Word mercury__digraph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 1)));
#line 504 "digraph.m"
      MR_Word mercury__digraph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 2)));
#line 452 "map.opt"
      MR_Box mercury__digraph__conv0_XSet_7;

#line 14017 "digraph.c"
      {
#line 14019 "digraph.c"
        mercury__digraph__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14021 "digraph.c"
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
#line 14023 "digraph.c"
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
#line 14025 "digraph.c"
      }
#line 14027 "digraph.c"
      {
#line 14029 "digraph.c"
        mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14031 "digraph.c"
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
#line 14033 "digraph.c"
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 14035 "digraph.c"
      }
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_17_17, (MR_Word) mercury__digraph__V_8_8, mercury__digraph__YI_6, &mercury__digraph__conv0_XSet_7);
      }
#line 452 "map.opt"
      if (mercury__digraph__succeeded)
#line 452 "map.opt"
        {
#line 452 "map.opt"
          mercury__digraph__XSet_7 = ((MR_Word) mercury__digraph__conv0_XSet_7);
#line 452 "map.opt"
          mercury__digraph__succeeded = MR_TRUE;
#line 452 "map.opt"
        }
#line 503 "digraph.m"
      if (mercury__digraph__succeeded)
#line 503 "digraph.m"
        {
#line 14056 "digraph.c"
          mercury__digraph__BaseTypeClassInfo_for_enum_18 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 14058 "digraph.c"
          {
#line 14060 "digraph.c"
            mercury__digraph__TypeClassInfo_for_enum_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 14062 "digraph.c"
            MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_18));
#line 14064 "digraph.c"
            MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
#line 14066 "digraph.c"
            MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 2) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 14068 "digraph.c"
          }
#line 505 "digraph.m"
          {
#line 505 "digraph.m"
            mercury__sparse_bitset__member_2_p_1(mercury__digraph__TypeClassInfo_for_enum_19, &(mercury__digraph__env).mercury__digraph__is_edge_rev_3_p_0_env_0__conv1_X_5, (MR_Word) mercury__digraph__XSet_7, mercury__digraph__is_edge_rev_3_p_0_1, &mercury__digraph__env);
          }
#line 503 "digraph.m"
        }
#line 503 "digraph.m"
    }
#line 132 "digraph.m"
  }
#line 132 "digraph.m"
}

#line 126 "digraph.m"
MR_bool MR_CALL 
mercury__digraph__is_edge_3_p_1(
#line 126 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_12,
#line 126 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 126 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 126 "digraph.m"
  MR_Word mercury__digraph__Y_6)
#line 126 "digraph.m"
{
#line 499 "digraph.m"
  {
#line 499 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 499 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_14_14 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 499 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_15_15;
#line 499 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_16_16 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 499 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_17_17;
#line 499 "digraph.m"
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_18;
#line 499 "digraph.m"
    MR_Word mercury__digraph__TypeClassInfo_for_enum_19;
#line 499 "digraph.m"
    MR_Integer mercury__digraph__XI_5 = (MR_Integer) mercury__digraph__HeadVar__2_2;
#line 499 "digraph.m"
    MR_Word mercury__digraph__YSet_7;
#line 499 "digraph.m"
    MR_Word mercury__digraph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 2)));
#line 500 "digraph.m"
    MR_Integer mercury__digraph__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 0)));
#line 500 "digraph.m"
    MR_Word mercury__digraph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 1)));
#line 500 "digraph.m"
    MR_Word mercury__digraph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 3)));
#line 452 "map.opt"
    MR_Box mercury__digraph__conv0_YSet_7;

#line 14128 "digraph.c"
    {
#line 14130 "digraph.c"
      mercury__digraph__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14132 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
#line 14134 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
#line 14136 "digraph.c"
    }
#line 14138 "digraph.c"
    {
#line 14140 "digraph.c"
      mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14142 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
#line 14144 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 14146 "digraph.c"
    }
#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_17_17, (MR_Word) mercury__digraph__V_8_8, mercury__digraph__XI_5, &mercury__digraph__conv0_YSet_7);
    }
#line 452 "map.opt"
    if (mercury__digraph__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__digraph__YSet_7 = ((MR_Word) mercury__digraph__conv0_YSet_7);
#line 452 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 499 "digraph.m"
    if (mercury__digraph__succeeded)
#line 499 "digraph.m"
      {
#line 14167 "digraph.c"
        mercury__digraph__BaseTypeClassInfo_for_enum_18 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 14169 "digraph.c"
        {
#line 14171 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 14173 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_18));
#line 14175 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
#line 14177 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 2) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 14179 "digraph.c"
        }
#line 501 "digraph.m"
        {
#line 501 "digraph.m"
          return mercury__digraph__succeeded = mercury__sparse_bitset__member_2_p_0(mercury__digraph__TypeClassInfo_for_enum_19, ((MR_Box) (mercury__digraph__Y_6)), (MR_Word) mercury__digraph__YSet_7);
        }
#line 499 "digraph.m"
      }
#line 499 "digraph.m"
    return mercury__digraph__succeeded;
#line 499 "digraph.m"
  }
#line 126 "digraph.m"
}

#line 501 "digraph.m"
static void MR_CALL 
mercury__digraph__is_edge_3_p_0_1(
#line 501 "digraph.m"
  void * mercury__digraph__env_ptr_arg)
#line 501 "digraph.m"
{
#line 501 "digraph.m"
  {
#line 501 "digraph.m"
    struct mercury__digraph__is_edge_3_p_0_env_0_s * mercury__digraph__env_ptr = (struct mercury__digraph__is_edge_3_p_0_env_0_s *) mercury__digraph__env_ptr_arg;

#line 501 "digraph.m"
    *((mercury__digraph__env_ptr)->mercury__digraph__is_edge_3_p_0_env_0__Y_6) = ((MR_Word) (mercury__digraph__env_ptr)->mercury__digraph__is_edge_3_p_0_env_0__conv1_Y_6);
#line 501 "digraph.m"
    {
#line 501 "digraph.m"
      ((mercury__digraph__env_ptr)->mercury__digraph__is_edge_3_p_0_env_0__cont)((mercury__digraph__env_ptr)->mercury__digraph__is_edge_3_p_0_env_0__cont_env_ptr);
#line 501 "digraph.m"
      return;
    }
#line 501 "digraph.m"
  }
#line 501 "digraph.m"
}

#line 125 "digraph.m"
void MR_CALL 
mercury__digraph__is_edge_3_p_0(
#line 125 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_12,
#line 125 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 125 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 125 "digraph.m"
  MR_Word * mercury__digraph__Y_6,
#line 125 "digraph.m"
  MR_Cont mercury__digraph__cont,
#line 125 "digraph.m"
  void * mercury__digraph__cont_env_ptr)
#line 125 "digraph.m"
{
#line 125 "digraph.m"
  {
#line 125 "digraph.m"
    struct mercury__digraph__is_edge_3_p_0_env_0_s mercury__digraph__env;

#line 125 "digraph.m"
    (mercury__digraph__env).mercury__digraph__is_edge_3_p_0_env_0__Y_6 = mercury__digraph__Y_6;
#line 125 "digraph.m"
    (mercury__digraph__env).mercury__digraph__is_edge_3_p_0_env_0__cont = mercury__digraph__cont;
#line 125 "digraph.m"
    (mercury__digraph__env).mercury__digraph__is_edge_3_p_0_env_0__cont_env_ptr = mercury__digraph__cont_env_ptr;
#line 499 "digraph.m"
    {
#line 499 "digraph.m"
      MR_bool mercury__digraph__succeeded;
#line 499 "digraph.m"
      MR_Word mercury__digraph__TypeCtorInfo_14_14 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 499 "digraph.m"
      MR_Word mercury__digraph__TypeInfo_15_15;
#line 499 "digraph.m"
      MR_Word mercury__digraph__TypeCtorInfo_16_16 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 499 "digraph.m"
      MR_Word mercury__digraph__TypeInfo_17_17;
#line 499 "digraph.m"
      MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_18;
#line 499 "digraph.m"
      MR_Word mercury__digraph__TypeClassInfo_for_enum_19;
#line 499 "digraph.m"
      MR_Integer mercury__digraph__XI_5 = (MR_Integer) mercury__digraph__HeadVar__2_2;
#line 499 "digraph.m"
      MR_Word mercury__digraph__YSet_7;
#line 499 "digraph.m"
      MR_Word mercury__digraph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 2)));
#line 500 "digraph.m"
      MR_Integer mercury__digraph__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 0)));
#line 500 "digraph.m"
      MR_Word mercury__digraph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 1)));
#line 500 "digraph.m"
      MR_Word mercury__digraph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 3)));
#line 452 "map.opt"
      MR_Box mercury__digraph__conv0_YSet_7;

#line 14280 "digraph.c"
      {
#line 14282 "digraph.c"
        mercury__digraph__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14284 "digraph.c"
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
#line 14286 "digraph.c"
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
#line 14288 "digraph.c"
      }
#line 14290 "digraph.c"
      {
#line 14292 "digraph.c"
        mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14294 "digraph.c"
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
#line 14296 "digraph.c"
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 14298 "digraph.c"
      }
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_17_17, (MR_Word) mercury__digraph__V_8_8, mercury__digraph__XI_5, &mercury__digraph__conv0_YSet_7);
      }
#line 452 "map.opt"
      if (mercury__digraph__succeeded)
#line 452 "map.opt"
        {
#line 452 "map.opt"
          mercury__digraph__YSet_7 = ((MR_Word) mercury__digraph__conv0_YSet_7);
#line 452 "map.opt"
          mercury__digraph__succeeded = MR_TRUE;
#line 452 "map.opt"
        }
#line 499 "digraph.m"
      if (mercury__digraph__succeeded)
#line 499 "digraph.m"
        {
#line 14319 "digraph.c"
          mercury__digraph__BaseTypeClassInfo_for_enum_18 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 14321 "digraph.c"
          {
#line 14323 "digraph.c"
            mercury__digraph__TypeClassInfo_for_enum_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 14325 "digraph.c"
            MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_18));
#line 14327 "digraph.c"
            MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
#line 14329 "digraph.c"
            MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 2) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 14331 "digraph.c"
          }
#line 501 "digraph.m"
          {
#line 501 "digraph.m"
            mercury__sparse_bitset__member_2_p_1(mercury__digraph__TypeClassInfo_for_enum_19, &(mercury__digraph__env).mercury__digraph__is_edge_3_p_0_env_0__conv1_Y_6, (MR_Word) mercury__digraph__YSet_7, mercury__digraph__is_edge_3_p_0_1, &mercury__digraph__env);
          }
#line 499 "digraph.m"
        }
#line 499 "digraph.m"
    }
#line 125 "digraph.m"
  }
#line 125 "digraph.m"
}

#line 118 "digraph.m"
void MR_CALL 
mercury__digraph__delete_assoc_list_3_p_0(
#line 118 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_16,
#line 118 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 118 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_2,
#line 118 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_G_3)
#line 118 "digraph.m"
{
#line 492 "digraph.m"
  while (MR_TRUE)
#line 492 "digraph.m"
    {
#line 492 "digraph.m"
      /* tailcall optimized into a loop */
#line 492 "digraph.m"
      {
#line 492 "digraph.m"
        MR_bool mercury__digraph__succeeded;

#line 492 "digraph.m"
        if ((mercury__digraph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 492 "digraph.m"
          *mercury__digraph__STATE_VARIABLE_G_3 = mercury__digraph__STATE_VARIABLE_G_0_2;
#line 492 "digraph.m"
        else
#line 493 "digraph.m"
          {
#line 493 "digraph.m"
            MR_Word mercury__digraph__X_7;
#line 493 "digraph.m"
            MR_Word mercury__digraph__Y_8;
#line 493 "digraph.m"
            MR_Word mercury__digraph__Edges_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 1)));
#line 493 "digraph.m"
            MR_Word mercury__digraph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 0)));
#line 493 "digraph.m"
            MR_Word mercury__digraph__STATE_VARIABLE_G_14_14;

#line 493 "digraph.m"
            mercury__digraph__X_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_13_13, (MR_Integer) 0)));
#line 493 "digraph.m"
            mercury__digraph__Y_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_13_13, (MR_Integer) 1)));
#line 494 "digraph.m"
            {
#line 494 "digraph.m"
              mercury__digraph__delete_edge_4_p_0(mercury__digraph__TypeInfo_for_T_16, mercury__digraph__X_7, mercury__digraph__Y_8, mercury__digraph__STATE_VARIABLE_G_0_2, &mercury__digraph__STATE_VARIABLE_G_14_14);
            }
#line 495 "digraph.m"
            /* direct tailcall eliminated */
#line 495 "digraph.m"
            {
#line 495 "digraph.m"
              MR_Word mercury__digraph__HeadVar__1__tmp_copy_1 = mercury__digraph__Edges_9;
#line 495 "digraph.m"
              MR_Word mercury__digraph__STATE_VARIABLE_G_0__tmp_copy_2 = mercury__digraph__STATE_VARIABLE_G_14_14;

#line 495 "digraph.m"
              mercury__digraph__STATE_VARIABLE_G_0_2 = mercury__digraph__STATE_VARIABLE_G_0__tmp_copy_2;
#line 495 "digraph.m"
              mercury__digraph__HeadVar__1_1 = mercury__digraph__HeadVar__1__tmp_copy_1;
#line 495 "digraph.m"
            }
#line 495 "digraph.m"
            continue;
#line 493 "digraph.m"
          }
#line 492 "digraph.m"
      }
#line 492 "digraph.m"
      break;
#line 492 "digraph.m"
    }
#line 118 "digraph.m"
}

#line 116 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__delete_assoc_list_2_f_0(
#line 116 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_9,
#line 116 "digraph.m"
  MR_Word mercury__digraph__Edges_4,
#line 116 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_6)
#line 116 "digraph.m"
{
#line 490 "digraph.m"
  {
#line 490 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 490 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_7;

#line 490 "digraph.m"
    {
#line 490 "digraph.m"
      mercury__digraph__delete_assoc_list_3_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__Edges_4, mercury__digraph__STATE_VARIABLE_G_0_6, &mercury__digraph__STATE_VARIABLE_G_7);
    }
#line 490 "digraph.m"
    return mercury__digraph__STATE_VARIABLE_G_7;
#line 490 "digraph.m"
  }
#line 116 "digraph.m"
}

#line 111 "digraph.m"
void MR_CALL 
mercury__digraph__delete_edge_4_p_0(
#line 111 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_32,
#line 111 "digraph.m"
  MR_Word mercury__digraph__X_5,
#line 111 "digraph.m"
  MR_Word mercury__digraph__Y_6,
#line 111 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_10,
#line 111 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_G_11)
#line 111 "digraph.m"
{
#line 483 "digraph.m"
  {
#line 483 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 483 "digraph.m"
    MR_Integer mercury__digraph__XI_8 = (MR_Integer) mercury__digraph__X_5;
#line 483 "digraph.m"
    MR_Integer mercury__digraph__YI_9 = (MR_Integer) mercury__digraph__Y_6;
#line 483 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_12_12;
#line 483 "digraph.m"
    MR_Word mercury__digraph__V_13_13;
#line 483 "digraph.m"
    MR_Word mercury__digraph__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 2)));
#line 483 "digraph.m"
    MR_Word mercury__digraph__V_16_16;
#line 483 "digraph.m"
    MR_Word mercury__digraph__V_24_24;
#line 486 "digraph.m"
    MR_Integer mercury__digraph__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 0)));
#line 486 "digraph.m"
    MR_Word mercury__digraph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 1)));
#line 486 "digraph.m"
    MR_Word mercury__digraph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 3)));
#line 389 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_14_41;
#line 389 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_16_43;
#line 389 "digraph.m"
    MR_Word mercury__digraph__SuccXs0_37;
#line 386 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_13_40 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 386 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_15_42 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 452 "map.opt"
    MR_Box mercury__digraph__conv0_SuccXs0_37;
#line 486 "digraph.m"
    MR_Integer mercury__digraph__V_21_21;
#line 486 "digraph.m"
    MR_Word mercury__digraph__V_22_22;
#line 486 "digraph.m"
    MR_Word mercury__digraph__V_23_23;
#line 487 "digraph.m"
    MR_Integer mercury__digraph__V_28_28;
#line 487 "digraph.m"
    MR_Word mercury__digraph__V_29_29;
#line 487 "digraph.m"
    MR_Word mercury__digraph__V_30_30;
#line 487 "digraph.m"
    MR_Word mercury__digraph__V_31_31;

#line 14523 "digraph.c"
    {
#line 14525 "digraph.c"
      mercury__digraph__TypeInfo_14_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14527 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_41, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_13_40));
#line 14529 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_41, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_32));
#line 14531 "digraph.c"
    }
#line 14533 "digraph.c"
    {
#line 14535 "digraph.c"
      mercury__digraph__TypeInfo_16_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14537 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_43, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_15_42));
#line 14539 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_43, 1) = ((MR_Box) (mercury__digraph__TypeInfo_14_41));
#line 14541 "digraph.c"
    }
#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_16_43, (MR_Word) mercury__digraph__V_14_14, mercury__digraph__XI_8, &mercury__digraph__conv0_SuccXs0_37);
    }
#line 452 "map.opt"
    if (mercury__digraph__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__digraph__SuccXs0_37 = ((MR_Word) mercury__digraph__conv0_SuccXs0_37);
#line 452 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 389 "digraph.m"
    if (mercury__digraph__succeeded)
#line 387 "digraph.m"
      {
#line 387 "digraph.m"
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_46 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 387 "digraph.m"
        MR_Word mercury__digraph__TypeClassInfo_for_enum_47;
#line 387 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_21_48;
#line 387 "digraph.m"
        MR_Word mercury__digraph__SuccXs_38;
#line 387 "digraph.m"
        MR_Word mercury__digraph__V_6_73;
#line 387 "digraph.m"
        MR_Integer mercury__digraph__V_9_75;
#line 387 "digraph.m"
        MR_Word mercury__digraph__V_4_77;
#line 387 "digraph.m"
        MR_Word mercury__digraph__V_5_78;
#line 387 "digraph.m"
        MR_Word mercury__digraph__V_6_79;
#line 14580 "digraph.c"
        MR_Box MR_CALL (* mercury__digraph__func_1)(MR_Box, MR_Box);
#line 14582 "digraph.c"
        MR_Box mercury__digraph__conv2_V_9_75;

#line 14585 "digraph.c"
        {
#line 14587 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 14589 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_47, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_46));
#line 14591 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_47, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_32));
#line 14593 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_47, 2) = ((MR_Box) (mercury__digraph__TypeInfo_14_41));
#line 14595 "digraph.c"
        }
#line 485 "sparse_bitset.opt"
        mercury__digraph__V_6_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 14599 "digraph.c"
        mercury__digraph__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14601 "digraph.c"
        {
#line 14603 "digraph.c"
          mercury__digraph__conv2_V_9_75 = mercury__digraph__func_1(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_47), ((MR_Box) (mercury__digraph__Y_6)));
        }
#line 14606 "digraph.c"
        mercury__digraph__V_9_75 = ((MR_Integer) mercury__digraph__conv2_V_9_75);
#line 490 "sparse_bitset.opt"
        {
#line 490 "sparse_bitset.opt"
          mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__V_6_73, mercury__digraph__V_9_75, &mercury__digraph__V_5_78);
        }
#line 218 "sparse_bitset.opt"
        mercury__digraph__V_4_77 = (MR_Word) mercury__digraph__SuccXs0_37;
#line 219 "sparse_bitset.opt"
        {
#line 219 "sparse_bitset.opt"
          mercury__digraph__V_6_79 = mercury__sparse_bitset__difference_2_2_f_0(mercury__digraph__V_4_77, mercury__digraph__V_5_78);
        }
#line 218 "sparse_bitset.opt"
        mercury__digraph__SuccXs_38 = (MR_Word) mercury__digraph__V_6_79;
#line 14622 "digraph.c"
        mercury__digraph__TypeCtorInfo_21_48 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 162 "map.opt"
        {
#line 162 "map.opt"
          mercury__map__det_update_4_p_0(mercury__digraph__TypeCtorInfo_21_48, mercury__digraph__TypeInfo_16_43, ((MR_Box) (mercury__digraph__XI_8)), ((MR_Box) (mercury__digraph__SuccXs_38)), mercury__digraph__V_14_14, &mercury__digraph__V_13_13);
        }
#line 387 "digraph.m"
      }
#line 389 "digraph.m"
    else
#line 390 "digraph.m"
      mercury__digraph__V_13_13 = mercury__digraph__V_14_14;
#line 486 "digraph.m"
    mercury__digraph__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 0)));
#line 486 "digraph.m"
    mercury__digraph__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 1)));
#line 486 "digraph.m"
    mercury__digraph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 2)));
#line 486 "digraph.m"
    mercury__digraph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 3)));
#line 486 "digraph.m"
    {
#line 486 "digraph.m"
      mercury__digraph__STATE_VARIABLE_G_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 486 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 0) = ((MR_Box) (mercury__digraph__V_21_21));
#line 486 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 1) = ((MR_Box) (mercury__digraph__V_22_22));
#line 486 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 2) = ((MR_Box) (mercury__digraph__V_13_13));
#line 486 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 3) = ((MR_Box) (mercury__digraph__V_24_24));
#line 486 "digraph.m"
    }
#line 487 "digraph.m"
    {
#line 487 "digraph.m"
      mercury__digraph__V_16_16 = mercury__digraph__key_set_map_delete_3_f_0(mercury__digraph__TypeInfo_for_T_32, mercury__digraph__V_24_24, mercury__digraph__YI_9, mercury__digraph__X_5);
    }
#line 487 "digraph.m"
    mercury__digraph__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 0)));
#line 487 "digraph.m"
    mercury__digraph__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 1)));
#line 487 "digraph.m"
    mercury__digraph__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 2)));
#line 487 "digraph.m"
    mercury__digraph__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 3)));
#line 487 "digraph.m"
    {
#line 487 "digraph.m"
      MR_Word base;
#line 487 "digraph.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 487 "digraph.m"
      *mercury__digraph__STATE_VARIABLE_G_11 = base;
#line 487 "digraph.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__digraph__V_28_28));
#line 487 "digraph.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__digraph__V_29_29));
#line 487 "digraph.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__digraph__V_30_30));
#line 487 "digraph.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__digraph__V_16_16));
#line 487 "digraph.m"
    }
#line 483 "digraph.m"
  }
#line 111 "digraph.m"
}

#line 110 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__delete_edge_3_f_0(
#line 110 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_11,
#line 110 "digraph.m"
  MR_Word mercury__digraph__X_5,
#line 110 "digraph.m"
  MR_Word mercury__digraph__Y_6,
#line 110 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_8)
#line 110 "digraph.m"
{
#line 481 "digraph.m"
  {
#line 481 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 481 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_9;

#line 481 "digraph.m"
    {
#line 481 "digraph.m"
      mercury__digraph__delete_edge_4_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__X_5, mercury__digraph__Y_6, mercury__digraph__STATE_VARIABLE_G_0_8, &mercury__digraph__STATE_VARIABLE_G_9);
    }
#line 481 "digraph.m"
    return mercury__digraph__STATE_VARIABLE_G_9;
#line 481 "digraph.m"
  }
#line 110 "digraph.m"
}

#line 104 "digraph.m"
void MR_CALL 
mercury__digraph__add_assoc_list_3_p_0(
#line 104 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_16,
#line 104 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 104 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_2,
#line 104 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_G_3)
#line 104 "digraph.m"
{
#line 473 "digraph.m"
  while (MR_TRUE)
#line 473 "digraph.m"
    {
#line 473 "digraph.m"
      /* tailcall optimized into a loop */
#line 473 "digraph.m"
      {
#line 473 "digraph.m"
        MR_bool mercury__digraph__succeeded;

#line 473 "digraph.m"
        if ((mercury__digraph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 473 "digraph.m"
          *mercury__digraph__STATE_VARIABLE_G_3 = mercury__digraph__STATE_VARIABLE_G_0_2;
#line 473 "digraph.m"
        else
#line 474 "digraph.m"
          {
#line 474 "digraph.m"
            MR_Word mercury__digraph__X_7;
#line 474 "digraph.m"
            MR_Word mercury__digraph__Y_8;
#line 474 "digraph.m"
            MR_Word mercury__digraph__Edges_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 1)));
#line 474 "digraph.m"
            MR_Word mercury__digraph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 0)));
#line 474 "digraph.m"
            MR_Word mercury__digraph__STATE_VARIABLE_G_14_14;

#line 474 "digraph.m"
            mercury__digraph__X_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_13_13, (MR_Integer) 0)));
#line 474 "digraph.m"
            mercury__digraph__Y_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_13_13, (MR_Integer) 1)));
#line 475 "digraph.m"
            {
#line 475 "digraph.m"
              mercury__digraph__add_edge_4_p_0(mercury__digraph__TypeInfo_for_T_16, mercury__digraph__X_7, mercury__digraph__Y_8, mercury__digraph__STATE_VARIABLE_G_0_2, &mercury__digraph__STATE_VARIABLE_G_14_14);
            }
#line 476 "digraph.m"
            /* direct tailcall eliminated */
#line 476 "digraph.m"
            {
#line 476 "digraph.m"
              MR_Word mercury__digraph__HeadVar__1__tmp_copy_1 = mercury__digraph__Edges_9;
#line 476 "digraph.m"
              MR_Word mercury__digraph__STATE_VARIABLE_G_0__tmp_copy_2 = mercury__digraph__STATE_VARIABLE_G_14_14;

#line 476 "digraph.m"
              mercury__digraph__STATE_VARIABLE_G_0_2 = mercury__digraph__STATE_VARIABLE_G_0__tmp_copy_2;
#line 476 "digraph.m"
              mercury__digraph__HeadVar__1_1 = mercury__digraph__HeadVar__1__tmp_copy_1;
#line 476 "digraph.m"
            }
#line 476 "digraph.m"
            continue;
#line 474 "digraph.m"
          }
#line 473 "digraph.m"
      }
#line 473 "digraph.m"
      break;
#line 473 "digraph.m"
    }
#line 104 "digraph.m"
}

#line 102 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__add_assoc_list_2_f_0(
#line 102 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_9,
#line 102 "digraph.m"
  MR_Word mercury__digraph__Edges_4,
#line 102 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_6)
#line 102 "digraph.m"
{
#line 471 "digraph.m"
  {
#line 471 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 471 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_7;

#line 471 "digraph.m"
    {
#line 471 "digraph.m"
      mercury__digraph__add_assoc_list_3_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__Edges_4, mercury__digraph__STATE_VARIABLE_G_0_6, &mercury__digraph__STATE_VARIABLE_G_7);
    }
#line 471 "digraph.m"
    return mercury__digraph__STATE_VARIABLE_G_7;
#line 471 "digraph.m"
  }
#line 102 "digraph.m"
}

#line 98 "digraph.m"
void MR_CALL 
mercury__digraph__add_vertex_pair_3_p_0(
#line 98 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_10,
#line 98 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 98 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_7,
#line 98 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_G_8)
#line 98 "digraph.m"
{
#line 467 "digraph.m"
  {
#line 467 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 467 "digraph.m"
    MR_Box mercury__digraph__VX_4 = (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__1_1, (MR_Integer) 0));
#line 467 "digraph.m"
    MR_Box mercury__digraph__VY_5 = (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__1_1, (MR_Integer) 1));
#line 467 "digraph.m"
    MR_Word mercury__digraph__X_16;
#line 467 "digraph.m"
    MR_Word mercury__digraph__Y_17;
#line 467 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_12_18;
#line 467 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_13_19;

#line 460 "digraph.m"
    {
#line 460 "digraph.m"
      mercury__digraph__add_vertex_4_p_0(mercury__digraph__TypeInfo_for_T_10, mercury__digraph__VX_4, &mercury__digraph__X_16, mercury__digraph__STATE_VARIABLE_G_0_7, &mercury__digraph__STATE_VARIABLE_G_12_18);
    }
#line 461 "digraph.m"
    {
#line 461 "digraph.m"
      mercury__digraph__add_vertex_4_p_0(mercury__digraph__TypeInfo_for_T_10, mercury__digraph__VY_5, &mercury__digraph__Y_17, mercury__digraph__STATE_VARIABLE_G_12_18, &mercury__digraph__STATE_VARIABLE_G_13_19);
    }
#line 462 "digraph.m"
    {
#line 462 "digraph.m"
      mercury__digraph__add_edge_4_p_0(mercury__digraph__TypeInfo_for_T_10, mercury__digraph__X_16, mercury__digraph__Y_17, mercury__digraph__STATE_VARIABLE_G_13_19, mercury__digraph__STATE_VARIABLE_G_8);
#line 462 "digraph.m"
      return;
    }
#line 467 "digraph.m"
  }
#line 98 "digraph.m"
}

#line 97 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__add_vertex_pair_2_f_0(
#line 97 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_9,
#line 97 "digraph.m"
  MR_Word mercury__digraph__Edge_4,
#line 97 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_6)
#line 97 "digraph.m"
{
#line 467 "digraph.m"
  {
#line 467 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 467 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_7;
#line 467 "digraph.m"
    MR_Box mercury__digraph__VX_12 = (MR_hl_field(MR_mktag(0), mercury__digraph__Edge_4, (MR_Integer) 0));
#line 467 "digraph.m"
    MR_Box mercury__digraph__VY_13 = (MR_hl_field(MR_mktag(0), mercury__digraph__Edge_4, (MR_Integer) 1));
#line 467 "digraph.m"
    MR_Word mercury__digraph__X_21;
#line 467 "digraph.m"
    MR_Word mercury__digraph__Y_22;
#line 467 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_12_23;
#line 467 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_13_24;

#line 460 "digraph.m"
    {
#line 460 "digraph.m"
      mercury__digraph__add_vertex_4_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__VX_12, &mercury__digraph__X_21, mercury__digraph__STATE_VARIABLE_G_0_6, &mercury__digraph__STATE_VARIABLE_G_12_23);
    }
#line 461 "digraph.m"
    {
#line 461 "digraph.m"
      mercury__digraph__add_vertex_4_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__VY_13, &mercury__digraph__Y_22, mercury__digraph__STATE_VARIABLE_G_12_23, &mercury__digraph__STATE_VARIABLE_G_13_24);
    }
#line 462 "digraph.m"
    {
#line 462 "digraph.m"
      mercury__digraph__add_edge_4_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__X_21, mercury__digraph__Y_22, mercury__digraph__STATE_VARIABLE_G_13_24, &mercury__digraph__STATE_VARIABLE_G_7);
    }
#line 467 "digraph.m"
    return mercury__digraph__STATE_VARIABLE_G_7;
#line 467 "digraph.m"
  }
#line 97 "digraph.m"
}

#line 92 "digraph.m"
void MR_CALL 
mercury__digraph__add_vertices_and_edge_4_p_0(
#line 92 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_15,
#line 92 "digraph.m"
  MR_Box mercury__digraph__VX_5,
#line 92 "digraph.m"
  MR_Box mercury__digraph__VY_6,
#line 92 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_10,
#line 92 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_G_11)
#line 92 "digraph.m"
{
#line 459 "digraph.m"
  {
#line 459 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 459 "digraph.m"
    MR_Word mercury__digraph__X_8;
#line 459 "digraph.m"
    MR_Word mercury__digraph__Y_9;
#line 459 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_12_12;
#line 459 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_13_13;

#line 460 "digraph.m"
    {
#line 460 "digraph.m"
      mercury__digraph__add_vertex_4_p_0(mercury__digraph__TypeInfo_for_T_15, mercury__digraph__VX_5, &mercury__digraph__X_8, mercury__digraph__STATE_VARIABLE_G_0_10, &mercury__digraph__STATE_VARIABLE_G_12_12);
    }
#line 461 "digraph.m"
    {
#line 461 "digraph.m"
      mercury__digraph__add_vertex_4_p_0(mercury__digraph__TypeInfo_for_T_15, mercury__digraph__VY_6, &mercury__digraph__Y_9, mercury__digraph__STATE_VARIABLE_G_12_12, &mercury__digraph__STATE_VARIABLE_G_13_13);
    }
#line 462 "digraph.m"
    {
#line 462 "digraph.m"
      mercury__digraph__add_edge_4_p_0(mercury__digraph__TypeInfo_for_T_15, mercury__digraph__X_8, mercury__digraph__Y_9, mercury__digraph__STATE_VARIABLE_G_13_13, mercury__digraph__STATE_VARIABLE_G_11);
#line 462 "digraph.m"
      return;
    }
#line 459 "digraph.m"
  }
#line 92 "digraph.m"
}

#line 91 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__add_vertices_and_edge_3_f_0(
#line 91 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_11,
#line 91 "digraph.m"
  MR_Box mercury__digraph__VX_5,
#line 91 "digraph.m"
  MR_Box mercury__digraph__VY_6,
#line 91 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_8)
#line 91 "digraph.m"
{
#line 459 "digraph.m"
  {
#line 459 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 459 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_9;
#line 459 "digraph.m"
    MR_Word mercury__digraph__X_17;
#line 459 "digraph.m"
    MR_Word mercury__digraph__Y_18;
#line 459 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_12_19;
#line 459 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_13_20;

#line 460 "digraph.m"
    {
#line 460 "digraph.m"
      mercury__digraph__add_vertex_4_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__VX_5, &mercury__digraph__X_17, mercury__digraph__STATE_VARIABLE_G_0_8, &mercury__digraph__STATE_VARIABLE_G_12_19);
    }
#line 461 "digraph.m"
    {
#line 461 "digraph.m"
      mercury__digraph__add_vertex_4_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__VY_6, &mercury__digraph__Y_18, mercury__digraph__STATE_VARIABLE_G_12_19, &mercury__digraph__STATE_VARIABLE_G_13_20);
    }
#line 462 "digraph.m"
    {
#line 462 "digraph.m"
      mercury__digraph__add_edge_4_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__X_17, mercury__digraph__Y_18, mercury__digraph__STATE_VARIABLE_G_13_20, &mercury__digraph__STATE_VARIABLE_G_9);
    }
#line 459 "digraph.m"
    return mercury__digraph__STATE_VARIABLE_G_9;
#line 459 "digraph.m"
  }
#line 91 "digraph.m"
}

#line 80 "digraph.m"
void MR_CALL 
mercury__digraph__add_edge_4_p_0(
#line 80 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_32,
#line 80 "digraph.m"
  MR_Word mercury__digraph__X_5,
#line 80 "digraph.m"
  MR_Word mercury__digraph__Y_6,
#line 80 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_10,
#line 80 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_G_11)
#line 80 "digraph.m"
{
#line 450 "digraph.m"
  {
#line 450 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 450 "digraph.m"
    MR_Integer mercury__digraph__XI_8 = (MR_Integer) mercury__digraph__X_5;
#line 450 "digraph.m"
    MR_Integer mercury__digraph__YI_9 = (MR_Integer) mercury__digraph__Y_6;
#line 450 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_12_12;
#line 450 "digraph.m"
    MR_Word mercury__digraph__V_13_13;
#line 450 "digraph.m"
    MR_Word mercury__digraph__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 2)));
#line 450 "digraph.m"
    MR_Word mercury__digraph__V_16_16;
#line 450 "digraph.m"
    MR_Word mercury__digraph__V_24_24;
#line 453 "digraph.m"
    MR_Integer mercury__digraph__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 0)));
#line 453 "digraph.m"
    MR_Word mercury__digraph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 1)));
#line 453 "digraph.m"
    MR_Word mercury__digraph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 3)));
#line 376 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_16_43;
#line 376 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_18_45;
#line 376 "digraph.m"
    MR_Word mercury__digraph__SuccXs0_37;
#line 369 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_15_42 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 369 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_17_44 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 452 "map.opt"
    MR_Box mercury__digraph__conv0_SuccXs0_37;
#line 453 "digraph.m"
    MR_Integer mercury__digraph__V_21_21;
#line 453 "digraph.m"
    MR_Word mercury__digraph__V_22_22;
#line 453 "digraph.m"
    MR_Word mercury__digraph__V_23_23;
#line 454 "digraph.m"
    MR_Integer mercury__digraph__V_28_28;
#line 454 "digraph.m"
    MR_Word mercury__digraph__V_29_29;
#line 454 "digraph.m"
    MR_Word mercury__digraph__V_30_30;
#line 454 "digraph.m"
    MR_Word mercury__digraph__V_31_31;

#line 15105 "digraph.c"
    {
#line 15107 "digraph.c"
      mercury__digraph__TypeInfo_16_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15109 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_43, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_15_42));
#line 15111 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_43, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_32));
#line 15113 "digraph.c"
    }
#line 15115 "digraph.c"
    {
#line 15117 "digraph.c"
      mercury__digraph__TypeInfo_18_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15119 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_18_45, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_17_44));
#line 15121 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_18_45, 1) = ((MR_Box) (mercury__digraph__TypeInfo_16_43));
#line 15123 "digraph.c"
    }
#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_18_45, (MR_Word) mercury__digraph__V_14_14, mercury__digraph__XI_8, &mercury__digraph__conv0_SuccXs0_37);
    }
#line 452 "map.opt"
    if (mercury__digraph__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__digraph__SuccXs0_37 = ((MR_Word) mercury__digraph__conv0_SuccXs0_37);
#line 452 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 376 "digraph.m"
    if (mercury__digraph__succeeded)
#line 372 "digraph.m"
      {
#line 370 "digraph.m"
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_48 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 370 "digraph.m"
        MR_Word mercury__digraph__TypeClassInfo_for_enum_49;
#line 370 "digraph.m"
        MR_Word mercury__digraph__V_3_69;
#line 370 "digraph.m"
        MR_Integer mercury__digraph__V_5_70;
#line 15152 "digraph.c"
        MR_Box MR_CALL (* mercury__digraph__func_1)(MR_Box, MR_Box);
#line 15154 "digraph.c"
        MR_Box mercury__digraph__conv2_V_5_70;

#line 15157 "digraph.c"
        {
#line 15159 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 15161 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_49, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_48));
#line 15163 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_49, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_32));
#line 15165 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_49, 2) = ((MR_Box) (mercury__digraph__TypeInfo_16_43));
#line 15167 "digraph.c"
        }
#line 183 "sparse_bitset.opt"
        mercury__digraph__V_3_69 = (MR_Word) mercury__digraph__SuccXs0_37;
#line 15171 "digraph.c"
        mercury__digraph__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_49, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15173 "digraph.c"
        {
#line 15175 "digraph.c"
          mercury__digraph__conv2_V_5_70 = mercury__digraph__func_1(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_49), ((MR_Box) (mercury__digraph__Y_6)));
        }
#line 15178 "digraph.c"
        mercury__digraph__V_5_70 = ((MR_Integer) mercury__digraph__conv2_V_5_70);
#line 185 "sparse_bitset.opt"
        {
#line 185 "sparse_bitset.opt"
          mercury__digraph__succeeded = mercury__sparse_bitset__contains_search_nodes_2_p_0(mercury__digraph__V_3_69, mercury__digraph__V_5_70);
        }
#line 372 "digraph.m"
        if (mercury__digraph__succeeded)
#line 371 "digraph.m"
          mercury__digraph__V_13_13 = mercury__digraph__V_14_14;
#line 372 "digraph.m"
        else
#line 373 "digraph.m"
          {
#line 373 "digraph.m"
            MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_52 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 373 "digraph.m"
            MR_Word mercury__digraph__TypeClassInfo_for_enum_53;
#line 373 "digraph.m"
            MR_Word mercury__digraph__TypeCtorInfo_27_54;
#line 373 "digraph.m"
            MR_Word mercury__digraph__SuccXs_38;
#line 373 "digraph.m"
            MR_Word mercury__digraph__V_6_74;
#line 373 "digraph.m"
            MR_Integer mercury__digraph__V_9_76;
#line 373 "digraph.m"
            MR_Word mercury__digraph__V_5_77;
#line 15207 "digraph.c"
            MR_Box MR_CALL (* mercury__digraph__func_3)(MR_Box, MR_Box);
#line 15209 "digraph.c"
            MR_Box mercury__digraph__conv4_V_9_76;

#line 15212 "digraph.c"
            {
#line 15214 "digraph.c"
              mercury__digraph__TypeClassInfo_for_enum_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 15216 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_53, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_52));
#line 15218 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_53, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_32));
#line 15220 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_53, 2) = ((MR_Box) (mercury__digraph__TypeInfo_16_43));
#line 15222 "digraph.c"
            }
#line 488 "sparse_bitset.opt"
            mercury__digraph__V_6_74 = (MR_Word) mercury__digraph__SuccXs0_37;
#line 15226 "digraph.c"
            mercury__digraph__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_53, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15228 "digraph.c"
            {
#line 15230 "digraph.c"
              mercury__digraph__conv4_V_9_76 = mercury__digraph__func_3(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_53), ((MR_Box) (mercury__digraph__Y_6)));
            }
#line 15233 "digraph.c"
            mercury__digraph__V_9_76 = ((MR_Integer) mercury__digraph__conv4_V_9_76);
#line 490 "sparse_bitset.opt"
            {
#line 490 "sparse_bitset.opt"
              mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__V_6_74, mercury__digraph__V_9_76, &mercury__digraph__V_5_77);
            }
#line 491 "sparse_bitset.opt"
            mercury__digraph__SuccXs_38 = (MR_Word) mercury__digraph__V_5_77;
#line 15242 "digraph.c"
            mercury__digraph__TypeCtorInfo_27_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 162 "map.opt"
            {
#line 162 "map.opt"
              mercury__map__det_update_4_p_0(mercury__digraph__TypeCtorInfo_27_54, mercury__digraph__TypeInfo_18_45, ((MR_Box) (mercury__digraph__XI_8)), ((MR_Box) (mercury__digraph__SuccXs_38)), mercury__digraph__V_14_14, &mercury__digraph__V_13_13);
            }
#line 373 "digraph.m"
          }
#line 372 "digraph.m"
      }
#line 376 "digraph.m"
    else
#line 377 "digraph.m"
      {
#line 377 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_30_57 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 377 "digraph.m"
        MR_Word mercury__digraph__TypeInfo_31_58;
#line 377 "digraph.m"
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_59;
#line 377 "digraph.m"
        MR_Word mercury__digraph__TypeClassInfo_for_enum_60;
#line 377 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_34_61;
#line 377 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_35_62;
#line 377 "digraph.m"
        MR_Word mercury__digraph__TypeInfo_36_63;
#line 377 "digraph.m"
        MR_Word mercury__digraph__SuccXs_40;
#line 377 "digraph.m"
        MR_Word mercury__digraph__V_6_87;
#line 377 "digraph.m"
        MR_Integer mercury__digraph__V_9_89;
#line 377 "digraph.m"
        MR_Word mercury__digraph__V_5_90;
#line 15279 "digraph.c"
        MR_Box MR_CALL (* mercury__digraph__func_5)(MR_Box, MR_Box);
#line 15281 "digraph.c"
        MR_Box mercury__digraph__conv6_V_9_89;

#line 15284 "digraph.c"
        {
#line 15286 "digraph.c"
          mercury__digraph__TypeInfo_31_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15288 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_31_58, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_30_57));
#line 15290 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_31_58, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_32));
#line 15292 "digraph.c"
        }
#line 485 "sparse_bitset.opt"
        mercury__digraph__V_6_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 15296 "digraph.c"
        mercury__digraph__BaseTypeClassInfo_for_enum_59 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 15298 "digraph.c"
        {
#line 15300 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 15302 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_60, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_59));
#line 15304 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_60, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_32));
#line 15306 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_60, 2) = ((MR_Box) (mercury__digraph__TypeInfo_31_58));
#line 15308 "digraph.c"
        }
#line 15310 "digraph.c"
        mercury__digraph__func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_60, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15312 "digraph.c"
        {
#line 15314 "digraph.c"
          mercury__digraph__conv6_V_9_89 = mercury__digraph__func_5(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_60), ((MR_Box) (mercury__digraph__Y_6)));
        }
#line 15317 "digraph.c"
        mercury__digraph__V_9_89 = ((MR_Integer) mercury__digraph__conv6_V_9_89);
#line 490 "sparse_bitset.opt"
        {
#line 490 "sparse_bitset.opt"
          mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__V_6_87, mercury__digraph__V_9_89, &mercury__digraph__V_5_90);
        }
#line 491 "sparse_bitset.opt"
        mercury__digraph__SuccXs_40 = (MR_Word) mercury__digraph__V_5_90;
#line 15326 "digraph.c"
        mercury__digraph__TypeCtorInfo_34_61 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 15328 "digraph.c"
        mercury__digraph__TypeCtorInfo_35_62 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 15330 "digraph.c"
        {
#line 15332 "digraph.c"
          mercury__digraph__TypeInfo_36_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15334 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_36_63, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_35_62));
#line 15336 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_36_63, 1) = ((MR_Box) (mercury__digraph__TypeInfo_31_58));
#line 15338 "digraph.c"
        }
#line 67 "map.opt"
        {
#line 67 "map.opt"
          mercury__map__det_insert_4_p_0(mercury__digraph__TypeCtorInfo_34_61, mercury__digraph__TypeInfo_36_63, ((MR_Box) (mercury__digraph__XI_8)), ((MR_Box) (mercury__digraph__SuccXs_40)), mercury__digraph__V_14_14, &mercury__digraph__V_13_13);
        }
#line 377 "digraph.m"
      }
#line 453 "digraph.m"
    mercury__digraph__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 0)));
#line 453 "digraph.m"
    mercury__digraph__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 1)));
#line 453 "digraph.m"
    mercury__digraph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 2)));
#line 453 "digraph.m"
    mercury__digraph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 3)));
#line 453 "digraph.m"
    {
#line 453 "digraph.m"
      mercury__digraph__STATE_VARIABLE_G_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 453 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 0) = ((MR_Box) (mercury__digraph__V_21_21));
#line 453 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 1) = ((MR_Box) (mercury__digraph__V_22_22));
#line 453 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 2) = ((MR_Box) (mercury__digraph__V_13_13));
#line 453 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 3) = ((MR_Box) (mercury__digraph__V_24_24));
#line 453 "digraph.m"
    }
#line 454 "digraph.m"
    {
#line 454 "digraph.m"
      mercury__digraph__V_16_16 = mercury__digraph__key_set_map_add_3_f_0(mercury__digraph__TypeInfo_for_T_32, mercury__digraph__V_24_24, mercury__digraph__YI_9, mercury__digraph__X_5);
    }
#line 454 "digraph.m"
    mercury__digraph__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 0)));
#line 454 "digraph.m"
    mercury__digraph__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 1)));
#line 454 "digraph.m"
    mercury__digraph__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 2)));
#line 454 "digraph.m"
    mercury__digraph__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 3)));
#line 454 "digraph.m"
    {
#line 454 "digraph.m"
      MR_Word base;
#line 454 "digraph.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 454 "digraph.m"
      *mercury__digraph__STATE_VARIABLE_G_11 = base;
#line 454 "digraph.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__digraph__V_28_28));
#line 454 "digraph.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__digraph__V_29_29));
#line 454 "digraph.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__digraph__V_30_30));
#line 454 "digraph.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__digraph__V_16_16));
#line 454 "digraph.m"
    }
#line 450 "digraph.m"
  }
#line 80 "digraph.m"
}

#line 79 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__add_edge_3_f_0(
#line 79 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_11,
#line 79 "digraph.m"
  MR_Word mercury__digraph__X_5,
#line 79 "digraph.m"
  MR_Word mercury__digraph__Y_6,
#line 79 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_8)
#line 79 "digraph.m"
{
#line 448 "digraph.m"
  {
#line 448 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 448 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_9;

#line 448 "digraph.m"
    {
#line 448 "digraph.m"
      mercury__digraph__add_edge_4_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__X_5, mercury__digraph__Y_6, mercury__digraph__STATE_VARIABLE_G_0_8, &mercury__digraph__STATE_VARIABLE_G_9);
    }
#line 448 "digraph.m"
    return mercury__digraph__STATE_VARIABLE_G_9;
#line 448 "digraph.m"
  }
#line 79 "digraph.m"
}

#line 74 "digraph.m"
void MR_CALL 
mercury__digraph__lookup_vertex_3_p_0(
#line 74 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_15,
#line 74 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 74 "digraph.m"
  MR_Word mercury__digraph__Key_5,
#line 74 "digraph.m"
  MR_Box * mercury__digraph__Vertex_6)
#line 74 "digraph.m"
{
#line 441 "digraph.m"
  {
#line 441 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 441 "digraph.m"
    MR_Box mercury__digraph__Vertex0_7;
#line 439 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_16_16 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 439 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_17_17;
#line 439 "digraph.m"
    MR_Word mercury__digraph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 1)));
#line 439 "digraph.m"
    MR_Word mercury__digraph__V_4_20;
#line 439 "digraph.m"
    MR_Word mercury__digraph__V_5_21;
#line 439 "digraph.m"
    MR_Word mercury__digraph__V_23_23;
#line 439 "digraph.m"
    MR_Integer mercury__digraph__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 0)));
#line 439 "digraph.m"
    MR_Word mercury__digraph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 2)));
#line 439 "digraph.m"
    MR_Word mercury__digraph__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 3)));
#line 452 "map.opt"
    MR_Box mercury__digraph__conv0_V_23_23;

#line 15477 "digraph.c"
    {
#line 15479 "digraph.c"
      mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15481 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
#line 15483 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_15));
#line 15485 "digraph.c"
    }
#line 247 "bimap.opt"
    mercury__digraph__V_4_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_8_8, (MR_Integer) 0)));
#line 247 "bimap.opt"
    mercury__digraph__V_5_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_8_8, (MR_Integer) 1)));
#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_17_17, mercury__digraph__TypeInfo_for_T_15, (MR_Word) mercury__digraph__V_5_21, ((MR_Box) (mercury__digraph__Key_5)), &mercury__digraph__Vertex0_7);
    }
#line 439 "digraph.m"
    if (mercury__digraph__succeeded)
#line 439 "digraph.m"
      {
#line 452 "map.opt"
        {
#line 452 "map.opt"
          mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_for_T_15, mercury__digraph__TypeInfo_17_17, mercury__digraph__V_4_20, mercury__digraph__Vertex0_7, &mercury__digraph__conv0_V_23_23);
        }
#line 452 "map.opt"
        if (mercury__digraph__succeeded)
#line 452 "map.opt"
          {
#line 452 "map.opt"
            mercury__digraph__V_23_23 = ((MR_Word) mercury__digraph__conv0_V_23_23);
#line 452 "map.opt"
            mercury__digraph__succeeded = MR_TRUE;
#line 452 "map.opt"
          }
#line 439 "digraph.m"
        if (mercury__digraph__succeeded)
#line 248 "bimap.opt"
          {
#line 248 "bimap.opt"
            mercury__digraph__succeeded = mercury__builtin__unify_2_p_0(mercury__digraph__TypeInfo_17_17, ((MR_Box) (mercury__digraph__Key_5)), ((MR_Box) (mercury__digraph__V_23_23)));
          }
#line 439 "digraph.m"
      }
#line 441 "digraph.m"
    if (mercury__digraph__succeeded)
#line 440 "digraph.m"
      *mercury__digraph__Vertex_6 = mercury__digraph__Vertex0_7;
#line 441 "digraph.m"
    else
#line 442 "digraph.m"
      {
#line 442 "digraph.m"
        {
#line 442 "digraph.m"
          mercury__require__unexpected_3_p_0((MR_String) "digraph", (MR_String) "predicate \140digraph.lookup_vertex\'/3", (MR_String) "search for vertex failed");
#line 442 "digraph.m"
          return;
        }
#line 442 "digraph.m"
      }
#line 441 "digraph.m"
  }
#line 74 "digraph.m"
}

#line 73 "digraph.m"
MR_Box MR_CALL 
mercury__digraph__lookup_vertex_2_f_0(
#line 73 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_7,
#line 73 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 73 "digraph.m"
  MR_Word mercury__digraph__Key_5)
#line 73 "digraph.m"
{
#line 436 "digraph.m"
  {
#line 436 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 436 "digraph.m"
    MR_Box mercury__digraph__Vertex_6;

#line 436 "digraph.m"
    {
#line 436 "digraph.m"
      mercury__digraph__lookup_vertex_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__Key_5, &mercury__digraph__Vertex_6);
    }
#line 436 "digraph.m"
    return mercury__digraph__Vertex_6;
#line 436 "digraph.m"
  }
#line 73 "digraph.m"
}

#line 69 "digraph.m"
void MR_CALL 
mercury__digraph__lookup_key_3_p_0(
#line 69 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_11,
#line 69 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 69 "digraph.m"
  MR_Box mercury__digraph__Vertex_5,
#line 69 "digraph.m"
  MR_Word * mercury__digraph__Key_6)
#line 69 "digraph.m"
{
#line 431 "digraph.m"
  {
#line 431 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 431 "digraph.m"
    MR_Word mercury__digraph__Key0_7;
#line 422 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_12_19 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 422 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_13_20;
#line 422 "digraph.m"
    MR_Word mercury__digraph__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 1)));
#line 422 "digraph.m"
    MR_Word mercury__digraph__V_4_23;
#line 422 "digraph.m"
    MR_Word mercury__digraph__V_5_24;
#line 422 "digraph.m"
    MR_Box mercury__digraph__V_25_25;
#line 423 "digraph.m"
    MR_Integer mercury__digraph__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 0)));
#line 423 "digraph.m"
    MR_Word mercury__digraph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 2)));
#line 423 "digraph.m"
    MR_Word mercury__digraph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 3)));
#line 452 "map.opt"
    MR_Box mercury__digraph__conv0_Key0_7;

#line 15616 "digraph.c"
    {
#line 15618 "digraph.c"
      mercury__digraph__TypeInfo_13_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15620 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_13_20, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_12_19));
#line 15622 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_13_20, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_11));
#line 15624 "digraph.c"
    }
#line 247 "bimap.opt"
    mercury__digraph__V_4_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_15_15, (MR_Integer) 0)));
#line 247 "bimap.opt"
    mercury__digraph__V_5_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_15_15, (MR_Integer) 1)));
#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__TypeInfo_13_20, mercury__digraph__V_4_23, mercury__digraph__Vertex_5, &mercury__digraph__conv0_Key0_7);
    }
#line 452 "map.opt"
    if (mercury__digraph__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__digraph__Key0_7 = ((MR_Word) mercury__digraph__conv0_Key0_7);
#line 452 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 422 "digraph.m"
    if (mercury__digraph__succeeded)
#line 422 "digraph.m"
      {
#line 452 "map.opt"
        {
#line 452 "map.opt"
          mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_13_20, mercury__digraph__TypeInfo_for_T_11, (MR_Word) mercury__digraph__V_5_24, ((MR_Box) (mercury__digraph__Key0_7)), &mercury__digraph__V_25_25);
        }
#line 422 "digraph.m"
        if (mercury__digraph__succeeded)
#line 249 "bimap.opt"
          {
#line 249 "bimap.opt"
            mercury__digraph__succeeded = mercury__builtin__unify_2_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__Vertex_5, mercury__digraph__V_25_25);
          }
#line 422 "digraph.m"
      }
#line 431 "digraph.m"
    if (mercury__digraph__succeeded)
#line 430 "digraph.m"
      *mercury__digraph__Key_6 = mercury__digraph__Key0_7;
#line 431 "digraph.m"
    else
#line 432 "digraph.m"
      {
#line 432 "digraph.m"
        {
#line 432 "digraph.m"
          mercury__require__unexpected_3_p_0((MR_String) "digraph", (MR_String) "predicate \140digraph.lookup_key\'/3", (MR_String) "search for key failed");
#line 432 "digraph.m"
          return;
        }
#line 432 "digraph.m"
      }
#line 431 "digraph.m"
  }
#line 69 "digraph.m"
}

#line 68 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__lookup_key_2_f_0(
#line 68 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_7,
#line 68 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 68 "digraph.m"
  MR_Box mercury__digraph__Vertex_5)
#line 68 "digraph.m"
{
#line 426 "digraph.m"
  {
#line 426 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 426 "digraph.m"
    MR_Word mercury__digraph__Key_6;

#line 426 "digraph.m"
    {
#line 426 "digraph.m"
      mercury__digraph__lookup_key_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__Vertex_5, &mercury__digraph__Key_6);
    }
#line 426 "digraph.m"
    return mercury__digraph__Key_6;
#line 426 "digraph.m"
  }
#line 68 "digraph.m"
}

#line 63 "digraph.m"
MR_bool MR_CALL 
mercury__digraph__search_key_3_p_0(
#line 63 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_11,
#line 63 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 63 "digraph.m"
  MR_Box mercury__digraph__Vertex_5,
#line 63 "digraph.m"
  MR_Word * mercury__digraph__Key_6)
#line 63 "digraph.m"
{
#line 422 "digraph.m"
  {
#line 422 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 422 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_12_12 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 422 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_13_13;
#line 422 "digraph.m"
    MR_Word mercury__digraph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 1)));
#line 422 "digraph.m"
    MR_Word mercury__digraph__V_4_16;
#line 422 "digraph.m"
    MR_Word mercury__digraph__V_5_17;
#line 422 "digraph.m"
    MR_Box mercury__digraph__V_18_18;
#line 423 "digraph.m"
    MR_Integer mercury__digraph__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 0)));
#line 423 "digraph.m"
    MR_Word mercury__digraph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 2)));
#line 423 "digraph.m"
    MR_Word mercury__digraph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 3)));
#line 452 "map.opt"
    MR_Box mercury__digraph__conv0_Key_6;

#line 15753 "digraph.c"
    {
#line 15755 "digraph.c"
      mercury__digraph__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15757 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_13_13, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_12_12));
#line 15759 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_13_13, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_11));
#line 15761 "digraph.c"
    }
#line 247 "bimap.opt"
    mercury__digraph__V_4_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_7_7, (MR_Integer) 0)));
#line 247 "bimap.opt"
    mercury__digraph__V_5_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_7_7, (MR_Integer) 1)));
#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__TypeInfo_13_13, mercury__digraph__V_4_16, mercury__digraph__Vertex_5, &mercury__digraph__conv0_Key_6);
    }
#line 452 "map.opt"
    if (mercury__digraph__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        *mercury__digraph__Key_6 = ((MR_Word) mercury__digraph__conv0_Key_6);
#line 452 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 422 "digraph.m"
    if (mercury__digraph__succeeded)
#line 422 "digraph.m"
      {
#line 452 "map.opt"
        {
#line 452 "map.opt"
          mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_13_13, mercury__digraph__TypeInfo_for_T_11, (MR_Word) mercury__digraph__V_5_17, ((MR_Box) (*mercury__digraph__Key_6)), &mercury__digraph__V_18_18);
        }
#line 422 "digraph.m"
        if (mercury__digraph__succeeded)
#line 249 "bimap.opt"
          {
#line 249 "bimap.opt"
            return mercury__digraph__succeeded = mercury__builtin__unify_2_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__Vertex_5, mercury__digraph__V_18_18);
          }
#line 422 "digraph.m"
      }
#line 422 "digraph.m"
    return mercury__digraph__succeeded;
#line 422 "digraph.m"
  }
#line 63 "digraph.m"
}

#line 57 "digraph.m"
void MR_CALL 
mercury__digraph__add_vertex_4_p_0(
#line 57 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_26,
#line 57 "digraph.m"
  MR_Box mercury__digraph__Vertex_5,
#line 57 "digraph.m"
  MR_Word * mercury__digraph__Key_6,
#line 57 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_9,
#line 57 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_G_10)
#line 57 "digraph.m"
{
#line 408 "digraph.m"
  {
#line 408 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 408 "digraph.m"
    MR_Word mercury__digraph__Key0_8;
#line 406 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_27_27 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 406 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_28_28;
#line 406 "digraph.m"
    MR_Word mercury__digraph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_9, (MR_Integer) 1)));
#line 406 "digraph.m"
    MR_Word mercury__digraph__V_4_33;
#line 406 "digraph.m"
    MR_Word mercury__digraph__V_5_34;
#line 406 "digraph.m"
    MR_Box mercury__digraph__V_35_35;
#line 406 "digraph.m"
    MR_Integer mercury__digraph__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_9, (MR_Integer) 0)));
#line 406 "digraph.m"
    MR_Word mercury__digraph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_9, (MR_Integer) 2)));
#line 406 "digraph.m"
    MR_Word mercury__digraph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_9, (MR_Integer) 3)));
#line 452 "map.opt"
    MR_Box mercury__digraph__conv0_Key0_8;

#line 15849 "digraph.c"
    {
#line 15851 "digraph.c"
      mercury__digraph__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15853 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_28_28, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_27_27));
#line 15855 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_28_28, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_26));
#line 15857 "digraph.c"
    }
#line 247 "bimap.opt"
    mercury__digraph__V_4_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_11_11, (MR_Integer) 0)));
#line 247 "bimap.opt"
    mercury__digraph__V_5_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_11_11, (MR_Integer) 1)));
#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_for_T_26, mercury__digraph__TypeInfo_28_28, mercury__digraph__V_4_33, mercury__digraph__Vertex_5, &mercury__digraph__conv0_Key0_8);
    }
#line 452 "map.opt"
    if (mercury__digraph__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__digraph__Key0_8 = ((MR_Word) mercury__digraph__conv0_Key0_8);
#line 452 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 406 "digraph.m"
    if (mercury__digraph__succeeded)
#line 406 "digraph.m"
      {
#line 452 "map.opt"
        {
#line 452 "map.opt"
          mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_28_28, mercury__digraph__TypeInfo_for_T_26, (MR_Word) mercury__digraph__V_5_34, ((MR_Box) (mercury__digraph__Key0_8)), &mercury__digraph__V_35_35);
        }
#line 406 "digraph.m"
        if (mercury__digraph__succeeded)
#line 249 "bimap.opt"
          {
#line 249 "bimap.opt"
            mercury__digraph__succeeded = mercury__builtin__unify_2_p_0(mercury__digraph__TypeInfo_for_T_26, mercury__digraph__Vertex_5, mercury__digraph__V_35_35);
          }
#line 406 "digraph.m"
      }
#line 408 "digraph.m"
    if (mercury__digraph__succeeded)
#line 407 "digraph.m"
      {
#line 407 "digraph.m"
        *mercury__digraph__Key_6 = mercury__digraph__Key0_8;
#line 407 "digraph.m"
        *mercury__digraph__STATE_VARIABLE_G_10 = mercury__digraph__STATE_VARIABLE_G_0_9;
#line 407 "digraph.m"
      }
#line 408 "digraph.m"
    else
#line 409 "digraph.m"
      {
#line 409 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_29_29;
#line 409 "digraph.m"
        MR_Word mercury__digraph__TypeInfo_30_30;
#line 409 "digraph.m"
        MR_Word mercury__digraph__STATE_VARIABLE_G_12_12;
#line 409 "digraph.m"
        MR_Word mercury__digraph__V_14_14;
#line 409 "digraph.m"
        MR_Integer mercury__digraph__I_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_9, (MR_Integer) 0)));
#line 409 "digraph.m"
        MR_Integer mercury__digraph__V_47_47;
#line 409 "digraph.m"
        MR_Word mercury__digraph__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_9, (MR_Integer) 1)));
#line 409 "digraph.m"
        MR_Word mercury__digraph__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_9, (MR_Integer) 2)));
#line 409 "digraph.m"
        MR_Word mercury__digraph__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_9, (MR_Integer) 3)));
#line 410 "digraph.m"
        MR_Integer mercury__digraph__V_22_22;
#line 410 "digraph.m"
        MR_Word mercury__digraph__V_24_24;
#line 410 "digraph.m"
        MR_Word mercury__digraph__V_25_25;
#line 410 "digraph.m"
        MR_Word mercury__digraph__V_23_23;

#line 416 "digraph.m"
        *mercury__digraph__Key_6 = (MR_Word) mercury__digraph__I_44;
#line 418 "digraph.m"
        mercury__digraph__V_47_47 = (mercury__digraph__I_44 + (MR_Integer) 1);
#line 418 "digraph.m"
        {
#line 418 "digraph.m"
          mercury__digraph__STATE_VARIABLE_G_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 418 "digraph.m"
          MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 0) = ((MR_Box) (mercury__digraph__V_47_47));
#line 418 "digraph.m"
          MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 1) = ((MR_Box) (mercury__digraph__V_49_49));
#line 418 "digraph.m"
          MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 2) = ((MR_Box) (mercury__digraph__V_50_50));
#line 418 "digraph.m"
          MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 3) = ((MR_Box) (mercury__digraph__V_51_51));
#line 418 "digraph.m"
        }
#line 15955 "digraph.c"
        mercury__digraph__TypeCtorInfo_29_29 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 15957 "digraph.c"
        {
#line 15959 "digraph.c"
          mercury__digraph__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15961 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_30_30, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_29_29));
#line 15963 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_30_30, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_26));
#line 15965 "digraph.c"
        }
#line 252 "bimap.opt"
        {
#line 252 "bimap.opt"
          mercury__bimap__set_4_p_0(mercury__digraph__TypeInfo_for_T_26, mercury__digraph__TypeInfo_30_30, mercury__digraph__Vertex_5, ((MR_Box) (*mercury__digraph__Key_6)), mercury__digraph__V_49_49, &mercury__digraph__V_14_14);
        }
#line 410 "digraph.m"
        mercury__digraph__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 0)));
#line 410 "digraph.m"
        mercury__digraph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 1)));
#line 410 "digraph.m"
        mercury__digraph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 2)));
#line 410 "digraph.m"
        mercury__digraph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 3)));
#line 410 "digraph.m"
        {
#line 410 "digraph.m"
          MR_Word base;
#line 410 "digraph.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 410 "digraph.m"
          *mercury__digraph__STATE_VARIABLE_G_10 = base;
#line 410 "digraph.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__digraph__V_22_22));
#line 410 "digraph.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__digraph__V_14_14));
#line 410 "digraph.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__digraph__V_24_24));
#line 410 "digraph.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__digraph__V_25_25));
#line 410 "digraph.m"
        }
#line 409 "digraph.m"
      }
#line 408 "digraph.m"
  }
#line 57 "digraph.m"
}

#line 51 "digraph.m"
void MR_CALL 
mercury__digraph__init_1_p_0(
#line 51 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_6,
#line 51 "digraph.m"
  MR_Word * mercury__digraph__HeadVar__1_1)
#line 51 "digraph.m"
{
#line 398 "digraph.m"
  {
#line 398 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 398 "digraph.m"
    MR_Word mercury__digraph__VMap_2 = (MR_Word) &mercury__digraph_scalar_common_4[0];
#line 398 "digraph.m"
    MR_Word mercury__digraph__FwdMap_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 398 "digraph.m"
    MR_Word mercury__digraph__BwdMap_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 398 "digraph.m"
    MR_Word mercury__digraph__V_3_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 398 "digraph.m"
    MR_Word mercury__digraph__V_4_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 398 "digraph.m"
    *mercury__digraph__HeadVar__1_1 = (MR_Word) &mercury__digraph_scalar_common_2[1];
#line 398 "digraph.m"
  }
#line 51 "digraph.m"
}

#line 50 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__init_0_f_0(
#line 50 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_3)
#line 50 "digraph.m"
{
#line 398 "digraph.m"
  {
#line 398 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 398 "digraph.m"
    MR_Word mercury__digraph__G_2 = (MR_Word) &mercury__digraph_scalar_common_2[1];
#line 398 "digraph.m"
    MR_Word mercury__digraph__VMap_4 = (MR_Word) &mercury__digraph_scalar_common_4[0];
#line 398 "digraph.m"
    MR_Word mercury__digraph__FwdMap_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 398 "digraph.m"
    MR_Word mercury__digraph__BwdMap_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 398 "digraph.m"
    MR_Word mercury__digraph__V_3_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 398 "digraph.m"
    MR_Word mercury__digraph__V_4_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 398 "digraph.m"
    return mercury__digraph__G_2;
#line 398 "digraph.m"
  }
#line 50 "digraph.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module digraph. */
