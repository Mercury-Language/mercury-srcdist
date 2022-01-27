/*
** Automatically generated from `digraph.m'
** by the Mercury compiler,
** version rotd-2015-05-05
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


#line 120 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__digraph__pti_digraph_key_1__pseudo_1;

#line 123 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__set_ordlist__pti_set_ordlist_1__pseudo_1;

#line 126 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__digraph__pti_digraph_key_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1;

#line 129 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1;

#line 132 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__bimap__pti_bimap_2__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1;

#line 135 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1;

#line 138 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1;

#line 141 "digraph.c"
static const MR_PseudoTypeInfo mercury__digraph__digraph__field_types_digraph_1_0[4];

#line 144 "digraph.c"
static const MR_ConstString mercury__digraph__digraph__field_names_digraph_1_0[4];

#line 147 "digraph.c"
static const MR_DuFunctorDesc mercury__digraph__digraph__du_functor_desc_digraph_1_0;

#line 150 "digraph.c"
static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_stag_ordered_digraph_1_0[1];

#line 153 "digraph.c"
static const MR_DuPtagLayout mercury__digraph__digraph__du_ptag_ordered_digraph_1[1];

#line 156 "digraph.c"
static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_name_ordered_digraph_1[1];

#line 159 "digraph.c"
static const MR_Integer mercury__digraph__digraph__functor_number_map_digraph_1[1];

#line 162 "digraph.c"
static const MR_Integer mercury__digraph__digraph__functor_number_map_digraph_key_1[1];

#line 165 "digraph.c"
static const MR_NotagFunctorDesc mercury__digraph__digraph__notag_functor_desc_digraph_key_1;

#line 168 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_digraph__pti_digraph_key_1__pseudo_1;

#line 171 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____clique_map_1_0_10001(
#line 174 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 176 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 178 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3);

#line 181 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____clique_map_1_0_10001(
#line 184 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 186 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 188 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 190 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4);

#line 193 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_1_0_10001(
#line 196 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 198 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 200 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3);

#line 203 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____digraph_1_0_10001(
#line 206 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 208 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 210 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 212 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4);

#line 215 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_key_1_0_10001(
#line 218 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 220 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 222 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3);

#line 225 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____digraph_key_1_0_10001(
#line 228 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 230 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 232 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 234 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4);

#line 237 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_key_set_1_0_10001(
#line 240 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 242 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 244 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3);

#line 247 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____digraph_key_set_1_0_10001(
#line 250 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 252 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 254 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 256 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4);

#line 259 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____key_map_1_0_10001(
#line 262 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 264 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 266 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3);

#line 269 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____key_map_1_0_10001(
#line 272 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 274 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 276 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 278 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4);

#line 281 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____key_set_map_1_0_10001(
#line 284 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 286 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 288 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3);

#line 291 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____key_set_map_1_0_10001(
#line 294 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 296 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 298 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 300 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4);

#line 303 "digraph.c"
static MR_Box MR_CALL 
mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__to_int_1_1_f_0_10001(
#line 306 "digraph.c"
  MR_Box mercury__digraph__closure_arg,
#line 308 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1);

#line 311 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__from_int_1_1_f_0_10001(
#line 314 "digraph.c"
  MR_Box mercury__digraph__closure_arg,
#line 316 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 318 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2);

#line 133 "list.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__digraph__V_27_27,
#line 133 "list.int"
  MR_Word mercury__digraph__V_28_28,
#line 133 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 133 "list.int"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 133 "list.int"
  MR_Word * mercury__digraph__HeadVar__4_4);

#line 63 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_57_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_51_93_95_48_9_p_in__sparse_bitset_0(
#line 63 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_50_50,
#line 63 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_51_51,
#line 63 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_35,
#line 63 "sparse_bitset.opt"
  MR_Word mercury__digraph__Dir_10_10,
#line 63 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Offset_12_12,
#line 63 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Bits_13_13,
#line 63 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Size_14_14,
#line 63 "sparse_bitset.opt"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc1_0_22_15,
#line 63 "sparse_bitset.opt"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc1_23_16,
#line 63 "sparse_bitset.opt"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc2_0_24_17,
#line 63 "sparse_bitset.opt"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc2_25_18);

#line 52 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_51_93_95_48_7_p_in__sparse_bitset_0(
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_41_41,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_42_42,
#line 52 "sparse_bitset.opt"
  MR_Box mercury__digraph__V_43_43,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__Dir_8_8,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Offset_10_10,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Bits_11_11,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Size_12_12,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19_13,
#line 52 "sparse_bitset.opt"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc_20_14);

#line 52 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_52_93_95_48_7_p_in__sparse_bitset_0(
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_46_46,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__Dir_8_8,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Offset_10_10,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Bits_11_11,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Size_12_12,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19_13,
#line 52 "sparse_bitset.opt"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc_20_14);

#line 63 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_57_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_52_93_95_48_9_p_in__sparse_bitset_0(
#line 63 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_51_51,
#line 63 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_52_52,
#line 63 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_35,
#line 63 "sparse_bitset.opt"
  MR_Word mercury__digraph__Dir_10_10,
#line 63 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Offset_12_12,
#line 63 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Bits_13_13,
#line 63 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Size_14_14,
#line 63 "sparse_bitset.opt"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc1_0_22_15,
#line 63 "sparse_bitset.opt"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc1_23_16,
#line 63 "sparse_bitset.opt"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc2_0_24_17,
#line 63 "sparse_bitset.opt"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc2_25_18);

#line 52 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_40_40,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_41_41,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__Dir_8_8,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Offset_10_10,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Bits_11_11,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Size_12_12,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19_13,
#line 52 "sparse_bitset.opt"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc_20_14);

#line 54 "sparse_bitset.opt"
static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_50_93_95_48_7_p_in__sparse_bitset_0(
#line 54 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_40_40,
#line 54 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_41_41,
#line 54 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_42_42,
#line 54 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 54 "sparse_bitset.opt"
  MR_Word mercury__digraph__Dir_8_8,
#line 54 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Offset_10_10,
#line 54 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Bits_11_11,
#line 54 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Size_12_12,
#line 54 "sparse_bitset.opt"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19_13,
#line 54 "sparse_bitset.opt"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc_20_14);

#line 52 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_40_40,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_41_41,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__Dir_8_8,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Offset_10_10,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Bits_11_11,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Size_12_12,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19_13,
#line 52 "sparse_bitset.opt"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc_20_14);

#line 52 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_38_38,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_39_39,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__Dir_8_8,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Offset_10_10,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Bits_11_11,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Size_12_12,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19_13,
#line 52 "sparse_bitset.opt"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc_20_14);

#line 52 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_56_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__Dir_8_8,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Offset_10_10,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Bits_11_11,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Size_12_12,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19_13,
#line 52 "sparse_bitset.opt"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc_20_14);

#line 52 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_56_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_38_38,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_39_39,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__Dir_8_8,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Offset_10_10,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Bits_11_11,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Size_12_12,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19_13,
#line 52 "sparse_bitset.opt"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc_20_14);

#line 13 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_29_29,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_30_30,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 13 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4);

#line 33 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
#line 33 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 33 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 33 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 33 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4);

#line 13 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_29_29,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_30_30,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 13 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4);

#line 13 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_31_31,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_32_32,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 13 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4);

#line 14 "sparse_bitset.opt"
static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(
#line 14 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_31_31,
#line 14 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_32_32,
#line 14 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_33_33,
#line 14 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 14 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 14 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 14 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4);

#line 13 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_31_31,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_32_32,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 13 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4);

#line 23 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_55_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(
#line 23 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_43_43,
#line 23 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_44_44,
#line 23 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_27,
#line 23 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 23 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 23 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4,
#line 23 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__5_5,
#line 23 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__6_6);

#line 33 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_4_p_in__sparse_bitset_0(
#line 33 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_37_37,
#line 33 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 33 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 33 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 33 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4);

#line 33 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_4_p_in__sparse_bitset_0(
#line 33 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_32_32,
#line 33 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_33_33,
#line 33 "sparse_bitset.opt"
  MR_Box mercury__digraph__V_34_34,
#line 33 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 33 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 33 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 33 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4);

#line 23 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_54_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(
#line 23 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_42_42,
#line 23 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_43_43,
#line 23 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_27,
#line 23 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 23 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 23 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4,
#line 23 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__5_5,
#line 23 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__6_6);

#line 133 "list.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_56_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__digraph__V_21_21,
#line 133 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 133 "list.int"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 133 "list.int"
  MR_Word * mercury__digraph__HeadVar__4_4);

#line 146 "list.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_54_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_6_p_in__list_0(
#line 146 "list.int"
  MR_Word mercury__digraph__V_34_34,
#line 146 "list.int"
  MR_Word mercury__digraph__V_35_35,
#line 146 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 146 "list.int"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 146 "list.int"
  MR_Word * mercury__digraph__HeadVar__4_4,
#line 146 "list.int"
  MR_Word mercury__digraph__HeadVar__5_5,
#line 146 "list.int"
  MR_Word * mercury__digraph__HeadVar__6_6);

#line 133 "list.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__digraph__V_29_29,
#line 133 "list.int"
  MR_Word mercury__digraph__V_30_30,
#line 133 "list.int"
  MR_Word mercury__digraph__V_31_31,
#line 133 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 133 "list.int"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 133 "list.int"
  MR_Word * mercury__digraph__HeadVar__4_4);

#line 146 "list.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_54_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_53_93_95_48_6_p_in__list_0(
#line 146 "list.int"
  MR_Word mercury__digraph__V_43_43,
#line 146 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 146 "list.int"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 146 "list.int"
  MR_Word * mercury__digraph__HeadVar__4_4,
#line 146 "list.int"
  MR_Word mercury__digraph__HeadVar__5_5,
#line 146 "list.int"
  MR_Word * mercury__digraph__HeadVar__6_6);

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__digraph__V_23_23,
#line 324 "list.int"
  MR_Word mercury__digraph__V_24_24,
#line 324 "list.int"
  MR_Word mercury__digraph__V_25_25,
#line 324 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2);

#line 92 "sparse_bitset.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_54_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(
#line 92 "sparse_bitset.int"
  MR_Word mercury__digraph__V_28_28,
#line 92 "sparse_bitset.int"
  MR_Word mercury__digraph__V_29_29,
#line 92 "sparse_bitset.int"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_13,
#line 92 "sparse_bitset.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 92 "sparse_bitset.int"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc1_0_11_9,
#line 92 "sparse_bitset.int"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc1_12_10,
#line 92 "sparse_bitset.int"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc2_0_13_11,
#line 92 "sparse_bitset.int"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc2_14_12);

#line 136 "list.int"
static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_50_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__list_0(
#line 136 "list.int"
  MR_Word mercury__digraph__V_22_22,
#line 136 "list.int"
  MR_Word mercury__digraph__V_23_23,
#line 136 "list.int"
  MR_Word mercury__digraph__V_24_24,
#line 136 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 136 "list.int"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 136 "list.int"
  MR_Word * mercury__digraph__HeadVar__4_4);

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_49_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__digraph__V_14_14,
#line 324 "list.int"
  MR_Word mercury__digraph__V_15_15,
#line 324 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2);

#line 92 "sparse_bitset.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_53_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(
#line 92 "sparse_bitset.int"
  MR_Word mercury__digraph__V_29_29,
#line 92 "sparse_bitset.int"
  MR_Word mercury__digraph__V_30_30,
#line 92 "sparse_bitset.int"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_13,
#line 92 "sparse_bitset.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 92 "sparse_bitset.int"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc1_0_11_9,
#line 92 "sparse_bitset.int"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc1_12_10,
#line 92 "sparse_bitset.int"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc2_0_13_11,
#line 92 "sparse_bitset.int"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc2_14_12);

#line 85 "sparse_bitset.int"
static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_53_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(
#line 85 "sparse_bitset.int"
  MR_Word mercury__digraph__V_20_20,
#line 85 "sparse_bitset.int"
  MR_Word mercury__digraph__V_21_21,
#line 85 "sparse_bitset.int"
  MR_Word mercury__digraph__V_22_22,
#line 85 "sparse_bitset.int"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_9,
#line 85 "sparse_bitset.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 85 "sparse_bitset.int"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_8_7,
#line 85 "sparse_bitset.int"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc_9_8);

#line 59 "set.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_95_104_111_53_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__set_0(
#line 59 "set.int"
  MR_Word mercury__digraph__V_22_22,
#line 59 "set.int"
  MR_Word mercury__digraph__V_23_23,
#line 59 "set.int"
  MR_Word mercury__digraph__S_6_6,
#line 59 "set.int"
  MR_Word mercury__digraph__STATE_VARIABLE_A_0_8_7,
#line 59 "set.int"
  MR_Word * mercury__digraph__STATE_VARIABLE_A_9_8);

#line 318 "list.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_53_51_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
#line 318 "list.int"
  MR_Word mercury__digraph__V_14_14,
#line 318 "list.int"
  MR_Word mercury__digraph__V_15_15,
#line 318 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 318 "list.int"
  MR_Word * mercury__digraph__HeadVar__3_3);

#line 13 "ops.opt"
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



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "exception.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "benchmarking.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "construct.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "store.mh"
#include "store.mh"
#include "store.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "char.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "float.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "math.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "builtin.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "int.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "private_builtin.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "version_array.mh"



#line 1462 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1470 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1478 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__digraph__pti_digraph_key_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) &mercury__digraph__set_ordlist__pti_set_ordlist_1__pseudo_1
  }
};

#line 1486 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__digraph__digraph__pti_digraph_key_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__digraph__digraph__pti_digraph_key_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
  }
};

#line 1495 "digraph.c"
const MR_TypeCtorInfo_Struct mercury__digraph__digraph__type_ctor_info_clique_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__digraph____Unify____clique_map_1_0_10001)),
  ((MR_Box) (mercury__digraph____Compare____clique_map_1_0_10001)),
  (MR_String) "digraph",
  (MR_String) "clique_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__digraph__tree234__pti_tree234_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1516 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__bimap__pti_bimap_2__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__digraph__digraph__pti_digraph_key_1__pseudo_1
  }
};

#line 1525 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &mercury__digraph__digraph__pti_digraph_key_1__pseudo_1
  }
};

#line 1533 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__digraph__sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1
  }
};

#line 1542 "digraph.c"
static const MR_PseudoTypeInfo mercury__digraph__digraph__field_types_digraph_1_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__digraph__bimap__pti_bimap_2__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1
};

#line 1550 "digraph.c"
static const MR_ConstString mercury__digraph__digraph__field_names_digraph_1_0[4] = {
  (MR_String) "next_key",
  (MR_String) "vertex_map",
  (MR_String) "fwd_map",
  (MR_String) "bwd_map"
};

#line 1558 "digraph.c"
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

#line 1573 "digraph.c"
static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_stag_ordered_digraph_1_0[1] = {
  &mercury__digraph__digraph__du_functor_desc_digraph_1_0
};

#line 1578 "digraph.c"
static const MR_DuPtagLayout mercury__digraph__digraph__du_ptag_ordered_digraph_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__digraph__digraph__du_stag_ordered_digraph_1_0
  }
};

#line 1587 "digraph.c"
static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_name_ordered_digraph_1[1] = {
  &mercury__digraph__digraph__du_functor_desc_digraph_1_0
};

#line 1592 "digraph.c"
static const MR_Integer mercury__digraph__digraph__functor_number_map_digraph_1[1] = {
  (MR_Integer) 0
};

#line 1597 "digraph.c"
const MR_TypeCtorInfo_Struct mercury__digraph__digraph__type_ctor_info_digraph_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__digraph____Unify____digraph_1_0_10001)),
  ((MR_Box) (mercury__digraph____Compare____digraph_1_0_10001)),
  (MR_String) "digraph",
  (MR_String) "digraph",
  {
    mercury__digraph__digraph__du_name_ordered_digraph_1
  },
  {
    mercury__digraph__digraph__du_ptag_ordered_digraph_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__digraph__digraph__functor_number_map_digraph_1
};

#line 1618 "digraph.c"
static const MR_Integer mercury__digraph__digraph__functor_number_map_digraph_key_1[1] = {
  (MR_Integer) 0
};

#line 1623 "digraph.c"
static const MR_NotagFunctorDesc mercury__digraph__digraph__notag_functor_desc_digraph_key_1 = {
  (MR_String) "digraph_key",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1630 "digraph.c"
const MR_TypeCtorInfo_Struct mercury__digraph__digraph__type_ctor_info_digraph_key_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__digraph____Unify____digraph_key_1_0_10001)),
  ((MR_Box) (mercury__digraph____Compare____digraph_key_1_0_10001)),
  (MR_String) "digraph",
  (MR_String) "digraph_key",
  {
    &mercury__digraph__digraph__notag_functor_desc_digraph_key_1
  },
  {
    &mercury__digraph__digraph__notag_functor_desc_digraph_key_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__digraph__digraph__functor_number_map_digraph_key_1
};

#line 1651 "digraph.c"
const MR_TypeCtorInfo_Struct mercury__digraph__digraph__type_ctor_info_digraph_key_set_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__digraph____Unify____digraph_key_set_1_0_10001)),
  ((MR_Box) (mercury__digraph____Compare____digraph_key_set_1_0_10001)),
  (MR_String) "digraph",
  (MR_String) "digraph_key_set",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__digraph__sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1672 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__digraph__digraph__pti_digraph_key_1__pseudo_1
  }
};

#line 1681 "digraph.c"
const MR_TypeCtorInfo_Struct mercury__digraph__digraph__type_ctor_info_key_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__digraph____Unify____key_map_1_0_10001)),
  ((MR_Box) (mercury__digraph____Compare____key_map_1_0_10001)),
  (MR_String) "digraph",
  (MR_String) "key_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_digraph__pti_digraph_key_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1702 "digraph.c"
const MR_TypeCtorInfo_Struct mercury__digraph__digraph__type_ctor_info_key_set_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__digraph____Unify____key_set_map_1_0_10001)),
  ((MR_Box) (mercury__digraph____Compare____key_set_map_1_0_10001)),
  (MR_String) "digraph",
  (MR_String) "key_set_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1723 "digraph.c"
const MR_BaseTypeclassInfo base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__to_int_1_1_f_0_10001)),
  ((MR_Box) (mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__from_int_1_1_f_0_10001))
};

#line 1734 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____clique_map_1_0_10001(
#line 1737 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1739 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 1741 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3)
#line 1743 "digraph.c"
{
#line 1745 "digraph.c"
  {
#line 1747 "digraph.c"
    MR_bool mercury__digraph__succeeded;

#line 1750 "digraph.c"
    {
#line 1752 "digraph.c"
      mercury__digraph__succeeded = mercury__digraph____Unify____clique_map_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), ((MR_Word) mercury__digraph__wrapper_arg_2), ((MR_Word) mercury__digraph__wrapper_arg_3));
    }
#line 1755 "digraph.c"
    return mercury__digraph__succeeded;
#line 1757 "digraph.c"
  }
#line 1759 "digraph.c"
}

#line 1762 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____clique_map_1_0_10001(
#line 1765 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1767 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 1769 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 1771 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4)
#line 1773 "digraph.c"
{
#line 1775 "digraph.c"
  {
#line 1777 "digraph.c"
    MR_Word mercury__digraph__conv0_HeadVar__1_1;

#line 1780 "digraph.c"
    {
#line 1782 "digraph.c"
      mercury__digraph____Compare____clique_map_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), &mercury__digraph__conv0_HeadVar__1_1, ((MR_Word) mercury__digraph__wrapper_arg_3), ((MR_Word) mercury__digraph__wrapper_arg_4));
    }
#line 1785 "digraph.c"
    *mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_HeadVar__1_1));
#line 1787 "digraph.c"
  }
#line 1789 "digraph.c"
}

#line 1792 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_1_0_10001(
#line 1795 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1797 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 1799 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3)
#line 1801 "digraph.c"
{
#line 1803 "digraph.c"
  {
#line 1805 "digraph.c"
    MR_bool mercury__digraph__succeeded;

#line 1808 "digraph.c"
    {
#line 1810 "digraph.c"
      mercury__digraph__succeeded = mercury__digraph____Unify____digraph_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), ((MR_Word) mercury__digraph__wrapper_arg_2), ((MR_Word) mercury__digraph__wrapper_arg_3));
    }
#line 1813 "digraph.c"
    return mercury__digraph__succeeded;
#line 1815 "digraph.c"
  }
#line 1817 "digraph.c"
}

#line 1820 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____digraph_1_0_10001(
#line 1823 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1825 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 1827 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 1829 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4)
#line 1831 "digraph.c"
{
#line 1833 "digraph.c"
  {
#line 1835 "digraph.c"
    MR_Word mercury__digraph__conv0_HeadVar__1_1;

#line 1838 "digraph.c"
    {
#line 1840 "digraph.c"
      mercury__digraph____Compare____digraph_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), &mercury__digraph__conv0_HeadVar__1_1, ((MR_Word) mercury__digraph__wrapper_arg_3), ((MR_Word) mercury__digraph__wrapper_arg_4));
    }
#line 1843 "digraph.c"
    *mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_HeadVar__1_1));
#line 1845 "digraph.c"
  }
#line 1847 "digraph.c"
}

#line 1850 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_key_1_0_10001(
#line 1853 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1855 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 1857 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3)
#line 1859 "digraph.c"
{
#line 1861 "digraph.c"
  {
#line 1863 "digraph.c"
    MR_bool mercury__digraph__succeeded;

#line 1866 "digraph.c"
    {
#line 1868 "digraph.c"
      mercury__digraph__succeeded = mercury__digraph____Unify____digraph_key_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), ((MR_Word) mercury__digraph__wrapper_arg_2), ((MR_Word) mercury__digraph__wrapper_arg_3));
    }
#line 1871 "digraph.c"
    return mercury__digraph__succeeded;
#line 1873 "digraph.c"
  }
#line 1875 "digraph.c"
}

#line 1878 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____digraph_key_1_0_10001(
#line 1881 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1883 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 1885 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 1887 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4)
#line 1889 "digraph.c"
{
#line 1891 "digraph.c"
  {
#line 1893 "digraph.c"
    MR_Word mercury__digraph__conv0_HeadVar__1_1;

#line 1896 "digraph.c"
    {
#line 1898 "digraph.c"
      mercury__digraph____Compare____digraph_key_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), &mercury__digraph__conv0_HeadVar__1_1, ((MR_Word) mercury__digraph__wrapper_arg_3), ((MR_Word) mercury__digraph__wrapper_arg_4));
    }
#line 1901 "digraph.c"
    *mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_HeadVar__1_1));
#line 1903 "digraph.c"
  }
#line 1905 "digraph.c"
}

#line 1908 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_key_set_1_0_10001(
#line 1911 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1913 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 1915 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3)
#line 1917 "digraph.c"
{
#line 1919 "digraph.c"
  {
#line 1921 "digraph.c"
    MR_bool mercury__digraph__succeeded;

#line 1924 "digraph.c"
    {
#line 1926 "digraph.c"
      mercury__digraph__succeeded = mercury__digraph____Unify____digraph_key_set_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), ((MR_Word) mercury__digraph__wrapper_arg_2), ((MR_Word) mercury__digraph__wrapper_arg_3));
    }
#line 1929 "digraph.c"
    return mercury__digraph__succeeded;
#line 1931 "digraph.c"
  }
#line 1933 "digraph.c"
}

#line 1936 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____digraph_key_set_1_0_10001(
#line 1939 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1941 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 1943 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 1945 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4)
#line 1947 "digraph.c"
{
#line 1949 "digraph.c"
  {
#line 1951 "digraph.c"
    MR_Word mercury__digraph__conv0_HeadVar__1_1;

#line 1954 "digraph.c"
    {
#line 1956 "digraph.c"
      mercury__digraph____Compare____digraph_key_set_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), &mercury__digraph__conv0_HeadVar__1_1, ((MR_Word) mercury__digraph__wrapper_arg_3), ((MR_Word) mercury__digraph__wrapper_arg_4));
    }
#line 1959 "digraph.c"
    *mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_HeadVar__1_1));
#line 1961 "digraph.c"
  }
#line 1963 "digraph.c"
}

#line 1966 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____key_map_1_0_10001(
#line 1969 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1971 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 1973 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3)
#line 1975 "digraph.c"
{
#line 1977 "digraph.c"
  {
#line 1979 "digraph.c"
    MR_bool mercury__digraph__succeeded;

#line 1982 "digraph.c"
    {
#line 1984 "digraph.c"
      mercury__digraph__succeeded = mercury__digraph____Unify____key_map_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), ((MR_Word) mercury__digraph__wrapper_arg_2), ((MR_Word) mercury__digraph__wrapper_arg_3));
    }
#line 1987 "digraph.c"
    return mercury__digraph__succeeded;
#line 1989 "digraph.c"
  }
#line 1991 "digraph.c"
}

#line 1994 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____key_map_1_0_10001(
#line 1997 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1999 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 2001 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 2003 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4)
#line 2005 "digraph.c"
{
#line 2007 "digraph.c"
  {
#line 2009 "digraph.c"
    MR_Word mercury__digraph__conv0_HeadVar__1_1;

#line 2012 "digraph.c"
    {
#line 2014 "digraph.c"
      mercury__digraph____Compare____key_map_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), &mercury__digraph__conv0_HeadVar__1_1, ((MR_Word) mercury__digraph__wrapper_arg_3), ((MR_Word) mercury__digraph__wrapper_arg_4));
    }
#line 2017 "digraph.c"
    *mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_HeadVar__1_1));
#line 2019 "digraph.c"
  }
#line 2021 "digraph.c"
}

#line 2024 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____key_set_map_1_0_10001(
#line 2027 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 2029 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 2031 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3)
#line 2033 "digraph.c"
{
#line 2035 "digraph.c"
  {
#line 2037 "digraph.c"
    MR_bool mercury__digraph__succeeded;

#line 2040 "digraph.c"
    {
#line 2042 "digraph.c"
      mercury__digraph__succeeded = mercury__digraph____Unify____key_set_map_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), ((MR_Word) mercury__digraph__wrapper_arg_2), ((MR_Word) mercury__digraph__wrapper_arg_3));
    }
#line 2045 "digraph.c"
    return mercury__digraph__succeeded;
#line 2047 "digraph.c"
  }
#line 2049 "digraph.c"
}

#line 2052 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____key_set_map_1_0_10001(
#line 2055 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 2057 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 2059 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 2061 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4)
#line 2063 "digraph.c"
{
#line 2065 "digraph.c"
  {
#line 2067 "digraph.c"
    MR_Word mercury__digraph__conv0_HeadVar__1_1;

#line 2070 "digraph.c"
    {
#line 2072 "digraph.c"
      mercury__digraph____Compare____key_set_map_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), &mercury__digraph__conv0_HeadVar__1_1, ((MR_Word) mercury__digraph__wrapper_arg_3), ((MR_Word) mercury__digraph__wrapper_arg_4));
    }
#line 2075 "digraph.c"
    *mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_HeadVar__1_1));
#line 2077 "digraph.c"
  }
#line 2079 "digraph.c"
}

#line 2082 "digraph.c"
static MR_Box MR_CALL 
mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__to_int_1_1_f_0_10001(
#line 2085 "digraph.c"
  MR_Box mercury__digraph__closure_arg,
#line 2087 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1)
#line 2089 "digraph.c"
{
#line 2091 "digraph.c"
  {
#line 2093 "digraph.c"
    MR_Box mercury__digraph__wrapper_arg_2;
#line 2095 "digraph.c"
    MR_Box mercury__digraph__closure;
#line 2097 "digraph.c"
    MR_Integer mercury__digraph__conv0_Int_4;

#line 2100 "digraph.c"
    mercury__digraph__closure = mercury__digraph__closure_arg;
#line 2102 "digraph.c"
    {
#line 2104 "digraph.c"
      mercury__digraph__conv0_Int_4 = mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__to_int_1_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__closure, (MR_Integer) 1))), ((MR_Word) mercury__digraph__wrapper_arg_1));
    }
#line 2107 "digraph.c"
    mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_Int_4));
#line 2109 "digraph.c"
    return mercury__digraph__wrapper_arg_2;
#line 2111 "digraph.c"
  }
#line 2113 "digraph.c"
}

#line 2116 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__from_int_1_1_f_0_10001(
#line 2119 "digraph.c"
  MR_Box mercury__digraph__closure_arg,
#line 2121 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 2123 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2)
#line 2125 "digraph.c"
{
#line 2127 "digraph.c"
  {
#line 2129 "digraph.c"
    MR_bool mercury__digraph__succeeded;
#line 2131 "digraph.c"
    MR_Box mercury__digraph__closure;
#line 2133 "digraph.c"
    MR_Word mercury__digraph__conv0_HeadVar__2_2;

#line 2136 "digraph.c"
    mercury__digraph__closure = mercury__digraph__closure_arg;
#line 2138 "digraph.c"
    {
#line 2140 "digraph.c"
      mercury__digraph__succeeded = mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__from_int_1_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__closure, (MR_Integer) 1))), ((MR_Integer) mercury__digraph__wrapper_arg_1), &mercury__digraph__conv0_HeadVar__2_2);
    }
#line 2143 "digraph.c"
    if (mercury__digraph__succeeded)
#line 2145 "digraph.c"
      {
#line 2147 "digraph.c"
        *mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_HeadVar__2_2));
#line 2149 "digraph.c"
        mercury__digraph__succeeded = MR_TRUE;
#line 2151 "digraph.c"
      }
#line 2153 "digraph.c"
    return mercury__digraph__succeeded;
#line 2155 "digraph.c"
  }
#line 2157 "digraph.c"
}

#line 133 "list.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__digraph__V_27_27,
#line 133 "list.int"
  MR_Word mercury__digraph__V_28_28,
#line 133 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 133 "list.int"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 133 "list.int"
  MR_Word * mercury__digraph__HeadVar__4_4)
#line 133 "list.int"
{
#line 380 "list.opt"
  while (MR_TRUE)
#line 380 "list.opt"
    {
#line 380 "list.opt"
      /* tailcall optimized into a loop */
#line 380 "list.opt"
      {
#line 380 "list.opt"
        MR_bool mercury__digraph__succeeded;

#line 380 "list.opt"
        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "list.opt"
          *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 380 "list.opt"
        else
#line 382 "list.opt"
          {
#line 382 "list.opt"
            MR_Word mercury__digraph__TypeCtorInfo_12_35 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 382 "list.opt"
            MR_Word mercury__digraph__TypeInfo_13_36;
#line 382 "list.opt"
            MR_Word mercury__digraph__TypeCtorInfo_14_37;
#line 382 "list.opt"
            MR_Word mercury__digraph__TypeInfo_15_38;
#line 382 "list.opt"
            MR_Word mercury__digraph__TypeInfo_16_39;
#line 382 "list.opt"
            MR_Word mercury__digraph__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 382 "list.opt"
            MR_Word mercury__digraph__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "list.opt"
            MR_Word mercury__digraph__STATE_VARIABLE_A_15_15_13;
#line 119 "map.opt"
            MR_Word mercury__digraph__conv0_STATE_VARIABLE_A_15_15_13;

#line 2213 "digraph.c"
            {
#line 2215 "digraph.c"
              mercury__digraph__TypeInfo_13_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2217 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_13_36, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_12_35));
#line 2219 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_13_36, 1) = ((MR_Box) (mercury__digraph__V_27_27));
#line 2221 "digraph.c"
            }
#line 2223 "digraph.c"
            mercury__digraph__TypeCtorInfo_14_37 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 2225 "digraph.c"
            {
#line 2227 "digraph.c"
              mercury__digraph__TypeInfo_15_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2229 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_38, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_37));
#line 2231 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_38, 1) = ((MR_Box) (mercury__digraph__V_27_27));
#line 2233 "digraph.c"
            }
#line 2235 "digraph.c"
            {
#line 2237 "digraph.c"
              mercury__digraph__TypeInfo_16_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2239 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_39, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_12_35));
#line 2241 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_39, 1) = ((MR_Box) (mercury__digraph__TypeInfo_15_38));
#line 2243 "digraph.c"
            }
#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__digraph__TypeInfo_13_36, mercury__digraph__TypeInfo_16_39, ((MR_Box) (mercury__digraph__H_10_9)), ((MR_Box) (mercury__digraph__V_28_28)), (MR_Word) mercury__digraph__HeadVar__3_3, &mercury__digraph__conv0_STATE_VARIABLE_A_15_15_13);
            }
#line 119 "map.opt"
            mercury__digraph__STATE_VARIABLE_A_15_15_13 = (MR_Word) mercury__digraph__conv0_STATE_VARIABLE_A_15_15_13;
#line 384 "list.opt"
            /* direct tailcall eliminated */
#line 384 "list.opt"
            {
#line 384 "list.opt"
              MR_Word mercury__digraph__HeadVar__2__tmp_copy_2 = mercury__digraph__T_11_10;
#line 384 "list.opt"
              MR_Word mercury__digraph__HeadVar__3__tmp_copy_3 = mercury__digraph__STATE_VARIABLE_A_15_15_13;

#line 384 "list.opt"
              mercury__digraph__HeadVar__3_3 = mercury__digraph__HeadVar__3__tmp_copy_3;
#line 384 "list.opt"
              mercury__digraph__HeadVar__2_2 = mercury__digraph__HeadVar__2__tmp_copy_2;
#line 384 "list.opt"
            }
#line 384 "list.opt"
            continue;
#line 382 "list.opt"
          }
#line 380 "list.opt"
      }
#line 380 "list.opt"
      break;
#line 380 "list.opt"
    }
#line 133 "list.int"
}

#line 63 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_57_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_51_93_95_48_9_p_in__sparse_bitset_0(
#line 63 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_50_50,
#line 63 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_51_51,
#line 63 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_35,
#line 63 "sparse_bitset.opt"
  MR_Word mercury__digraph__Dir_10_10,
#line 63 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Offset_12_12,
#line 63 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Bits_13_13,
#line 63 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Size_14_14,
#line 63 "sparse_bitset.opt"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc1_0_22_15,
#line 63 "sparse_bitset.opt"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc1_23_16,
#line 63 "sparse_bitset.opt"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc2_0_24_17,
#line 63 "sparse_bitset.opt"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc2_25_18)
#line 63 "sparse_bitset.opt"
{
#line 368 "sparse_bitset.opt"
  while (MR_TRUE)
#line 368 "sparse_bitset.opt"
    {
#line 368 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 368 "sparse_bitset.opt"
      {
#line 368 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded = (mercury__digraph__Bits_13_13 == (MR_Integer) 0);

#line 368 "sparse_bitset.opt"
        if (mercury__digraph__succeeded)
#line 366 "sparse_bitset.opt"
          {
#line 366 "sparse_bitset.opt"
            *mercury__digraph__STATE_VARIABLE_Acc2_25_18 = mercury__digraph__STATE_VARIABLE_Acc2_0_24_17;
#line 367 "sparse_bitset.opt"
            *mercury__digraph__STATE_VARIABLE_Acc1_23_16 = mercury__digraph__STATE_VARIABLE_Acc1_0_22_15;
#line 366 "sparse_bitset.opt"
          }
#line 368 "sparse_bitset.opt"
        else
#line 384 "sparse_bitset.opt"
          {
#line 370 "sparse_bitset.opt"
            mercury__digraph__succeeded = (mercury__digraph__Size_14_14 == (MR_Integer) 1);
#line 384 "sparse_bitset.opt"
            if (mercury__digraph__succeeded)
#line 376 "sparse_bitset.opt"
              {
#line 376 "sparse_bitset.opt"
                MR_Word mercury__digraph__Elem_17_19;
#line 2340 "digraph.c"
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_35, (MR_Integer) 0)), (MR_Integer) 6)));
#line 2342 "digraph.c"
                MR_Box mercury__digraph__conv1_Elem_17_19;

#line 2345 "digraph.c"
                {
#line 2347 "digraph.c"
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_35), ((MR_Box) (mercury__digraph__Offset_12_12)), &mercury__digraph__conv1_Elem_17_19);
                }
#line 2350 "digraph.c"
                if (mercury__digraph__succeeded)
#line 2352 "digraph.c"
                  {
#line 2354 "digraph.c"
                    mercury__digraph__Elem_17_19 = ((MR_Word) mercury__digraph__conv1_Elem_17_19);
#line 2356 "digraph.c"
                    mercury__digraph__succeeded = MR_TRUE;
#line 2358 "digraph.c"
                  }
#line 376 "sparse_bitset.opt"
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
                    MR_Word mercury__digraph__conv2_STATE_VARIABLE_Acc2_25_18;

#line 726 "digraph.m"
                    {
#line 726 "digraph.m"
                      mercury__digraph__lookup_vertex_3_p_0(mercury__digraph__V_50_50, mercury__digraph__V_51_51, mercury__digraph__Elem_17_19, &mercury__digraph__VX_60);
                    }
#line 727 "digraph.m"
                    {
#line 727 "digraph.m"
                      mercury__digraph__add_vertex_4_p_0(mercury__digraph__V_50_50, mercury__digraph__VX_60, &mercury__digraph__CompX_61, mercury__digraph__STATE_VARIABLE_Acc1_0_22_15, mercury__digraph__STATE_VARIABLE_Acc1_23_16);
                    }
#line 728 "digraph.m"
                    mercury__digraph__XI_62 = (MR_Integer) mercury__digraph__Elem_17_19;
#line 2389 "digraph.c"
                    mercury__digraph__TypeCtorInfo_22_66 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 2391 "digraph.c"
                    {
#line 2393 "digraph.c"
                      mercury__digraph__TypeInfo_23_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2395 "digraph.c"
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_67, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_22_66));
#line 2397 "digraph.c"
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_67, 1) = ((MR_Box) (mercury__digraph__V_50_50));
#line 2399 "digraph.c"
                    }
#line 729 "digraph.m"
                    {
#line 729 "digraph.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__digraph__TypeInfo_23_67, mercury__digraph__XI_62, ((MR_Box) (mercury__digraph__CompX_61)), (MR_Word) mercury__digraph__STATE_VARIABLE_Acc2_0_24_17, &mercury__digraph__conv2_STATE_VARIABLE_Acc2_25_18);
                    }
#line 729 "digraph.m"
                    *mercury__digraph__STATE_VARIABLE_Acc2_25_18 = (MR_Word) mercury__digraph__conv2_STATE_VARIABLE_Acc2_25_18;
#line 725 "digraph.m"
                  }
#line 376 "sparse_bitset.opt"
                else
#line 377 "sparse_bitset.opt"
                  {
#line 380 "sparse_bitset.opt"
                    {
#line 380 "sparse_bitset.opt"
                      mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold2_bits\'/9", (MR_String) "\140enum.from_int/1\' failed");
#line 380 "sparse_bitset.opt"
                      return;
                    }
#line 377 "sparse_bitset.opt"
                  }
#line 376 "sparse_bitset.opt"
              }
#line 384 "sparse_bitset.opt"
            else
#line 385 "sparse_bitset.opt"
              {
#line 385 "sparse_bitset.opt"
                MR_Integer mercury__digraph__HalfSize_18_23 = (mercury__digraph__Size_14_14 >> (MR_Integer) 1);
#line 385 "sparse_bitset.opt"
                MR_Integer mercury__digraph__Mask_19_25;
#line 385 "sparse_bitset.opt"
                MR_Integer mercury__digraph__LowBits_20_26;
#line 385 "sparse_bitset.opt"
                MR_Integer mercury__digraph__HighBits_21_27;
#line 385 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_32_28;
#line 385 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_4_70 = ((MR_Integer) -1 << mercury__digraph__HalfSize_18_23);

#line 513 "sparse_bitset.opt"
                mercury__digraph__Mask_19_25 = ~(mercury__digraph__V_4_70);
#line 388 "sparse_bitset.opt"
                mercury__digraph__LowBits_20_26 = (mercury__digraph__Mask_19_25 & mercury__digraph__Bits_13_13);
#line 390 "sparse_bitset.opt"
                mercury__digraph__V_32_28 = (mercury__digraph__Bits_13_13 >> mercury__digraph__HalfSize_18_23);
#line 389 "sparse_bitset.opt"
                mercury__digraph__HighBits_21_27 = (mercury__digraph__Mask_19_25 & mercury__digraph__V_32_28);
#line 396 "sparse_bitset.opt"
                if ((mercury__digraph__Dir_10_10 == (MR_Integer) 1))
#line 397 "sparse_bitset.opt"
                  {
#line 397 "sparse_bitset.opt"
                    MR_Integer mercury__digraph__V_33_32 = (mercury__digraph__Offset_12_12 + mercury__digraph__HalfSize_18_23);
#line 397 "sparse_bitset.opt"
                    MR_Word mercury__digraph__STATE_VARIABLE_Acc1_34_34_33;
#line 397 "sparse_bitset.opt"
                    MR_Word mercury__digraph__STATE_VARIABLE_Acc2_35_35_34;

#line 399 "sparse_bitset.opt"
                    {
#line 399 "sparse_bitset.opt"
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_57_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_51_93_95_48_9_p_in__sparse_bitset_0(mercury__digraph__V_50_50, mercury__digraph__V_51_51, mercury__digraph__TypeClassInfo_for_enum_35, mercury__digraph__Dir_10_10, mercury__digraph__V_33_32, mercury__digraph__HighBits_21_27, mercury__digraph__HalfSize_18_23, mercury__digraph__STATE_VARIABLE_Acc1_0_22_15, &mercury__digraph__STATE_VARIABLE_Acc1_34_34_33, mercury__digraph__STATE_VARIABLE_Acc2_0_24_17, &mercury__digraph__STATE_VARIABLE_Acc2_35_35_34);
                    }
#line 400 "sparse_bitset.opt"
                    /* direct tailcall eliminated */
#line 400 "sparse_bitset.opt"
                    {
#line 400 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Bits_13__tmp_copy_13 = mercury__digraph__LowBits_20_26;
#line 400 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Size_14__tmp_copy_14 = mercury__digraph__HalfSize_18_23;
#line 400 "sparse_bitset.opt"
                      MR_Word mercury__digraph__STATE_VARIABLE_Acc1_0_22__tmp_copy_15 = mercury__digraph__STATE_VARIABLE_Acc1_34_34_33;
#line 400 "sparse_bitset.opt"
                      MR_Word mercury__digraph__STATE_VARIABLE_Acc2_0_24__tmp_copy_17 = mercury__digraph__STATE_VARIABLE_Acc2_35_35_34;

#line 400 "sparse_bitset.opt"
                      mercury__digraph__STATE_VARIABLE_Acc2_0_24_17 = mercury__digraph__STATE_VARIABLE_Acc2_0_24__tmp_copy_17;
#line 400 "sparse_bitset.opt"
                      mercury__digraph__STATE_VARIABLE_Acc1_0_22_15 = mercury__digraph__STATE_VARIABLE_Acc1_0_22__tmp_copy_15;
#line 400 "sparse_bitset.opt"
                      mercury__digraph__Size_14_14 = mercury__digraph__Size_14__tmp_copy_14;
#line 400 "sparse_bitset.opt"
                      mercury__digraph__Bits_13_13 = mercury__digraph__Bits_13__tmp_copy_13;
#line 400 "sparse_bitset.opt"
                    }
#line 400 "sparse_bitset.opt"
                    continue;
#line 397 "sparse_bitset.opt"
                  }
#line 396 "sparse_bitset.opt"
                else
#line 392 "sparse_bitset.opt"
                  {
#line 392 "sparse_bitset.opt"
                    MR_Word mercury__digraph__STATE_VARIABLE_Acc1_38_38_29;
#line 392 "sparse_bitset.opt"
                    MR_Word mercury__digraph__STATE_VARIABLE_Acc2_39_39_30;
#line 392 "sparse_bitset.opt"
                    MR_Integer mercury__digraph__V_40_31;

#line 393 "sparse_bitset.opt"
                    {
#line 393 "sparse_bitset.opt"
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_57_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_51_93_95_48_9_p_in__sparse_bitset_0(mercury__digraph__V_50_50, mercury__digraph__V_51_51, mercury__digraph__TypeClassInfo_for_enum_35, mercury__digraph__Dir_10_10, mercury__digraph__Offset_12_12, mercury__digraph__LowBits_20_26, mercury__digraph__HalfSize_18_23, mercury__digraph__STATE_VARIABLE_Acc1_0_22_15, &mercury__digraph__STATE_VARIABLE_Acc1_38_38_29, mercury__digraph__STATE_VARIABLE_Acc2_0_24_17, &mercury__digraph__STATE_VARIABLE_Acc2_39_39_30);
                    }
#line 394 "sparse_bitset.opt"
                    mercury__digraph__V_40_31 = (mercury__digraph__Offset_12_12 + mercury__digraph__HalfSize_18_23);
#line 395 "sparse_bitset.opt"
                    /* direct tailcall eliminated */
#line 395 "sparse_bitset.opt"
                    {
#line 395 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Offset_12__tmp_copy_12 = mercury__digraph__V_40_31;
#line 395 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Bits_13__tmp_copy_13 = mercury__digraph__HighBits_21_27;
#line 395 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Size_14__tmp_copy_14 = mercury__digraph__HalfSize_18_23;
#line 395 "sparse_bitset.opt"
                      MR_Word mercury__digraph__STATE_VARIABLE_Acc1_0_22__tmp_copy_15 = mercury__digraph__STATE_VARIABLE_Acc1_38_38_29;
#line 395 "sparse_bitset.opt"
                      MR_Word mercury__digraph__STATE_VARIABLE_Acc2_0_24__tmp_copy_17 = mercury__digraph__STATE_VARIABLE_Acc2_39_39_30;

#line 395 "sparse_bitset.opt"
                      mercury__digraph__STATE_VARIABLE_Acc2_0_24_17 = mercury__digraph__STATE_VARIABLE_Acc2_0_24__tmp_copy_17;
#line 395 "sparse_bitset.opt"
                      mercury__digraph__STATE_VARIABLE_Acc1_0_22_15 = mercury__digraph__STATE_VARIABLE_Acc1_0_22__tmp_copy_15;
#line 395 "sparse_bitset.opt"
                      mercury__digraph__Size_14_14 = mercury__digraph__Size_14__tmp_copy_14;
#line 395 "sparse_bitset.opt"
                      mercury__digraph__Bits_13_13 = mercury__digraph__Bits_13__tmp_copy_13;
#line 395 "sparse_bitset.opt"
                      mercury__digraph__Offset_12_12 = mercury__digraph__Offset_12__tmp_copy_12;
#line 395 "sparse_bitset.opt"
                    }
#line 395 "sparse_bitset.opt"
                    continue;
#line 392 "sparse_bitset.opt"
                  }
#line 385 "sparse_bitset.opt"
              }
#line 384 "sparse_bitset.opt"
          }
#line 368 "sparse_bitset.opt"
      }
#line 368 "sparse_bitset.opt"
      break;
#line 368 "sparse_bitset.opt"
    }
#line 63 "sparse_bitset.opt"
}

#line 52 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_51_93_95_48_7_p_in__sparse_bitset_0(
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_41_41,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_42_42,
#line 52 "sparse_bitset.opt"
  MR_Box mercury__digraph__V_43_43,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__Dir_8_8,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Offset_10_10,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Bits_11_11,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Size_12_12,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19_13,
#line 52 "sparse_bitset.opt"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc_20_14)
#line 52 "sparse_bitset.opt"
{
#line 327 "sparse_bitset.opt"
  while (MR_TRUE)
#line 327 "sparse_bitset.opt"
    {
#line 327 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 327 "sparse_bitset.opt"
      {
#line 327 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded = (mercury__digraph__Bits_11_11 == (MR_Integer) 0);

#line 327 "sparse_bitset.opt"
        if (mercury__digraph__succeeded)
#line 326 "sparse_bitset.opt"
          *mercury__digraph__STATE_VARIABLE_Acc_20_14 = mercury__digraph__STATE_VARIABLE_Acc_0_19_13;
#line 327 "sparse_bitset.opt"
        else
#line 342 "sparse_bitset.opt"
          {
#line 329 "sparse_bitset.opt"
            mercury__digraph__succeeded = (mercury__digraph__Size_12_12 == (MR_Integer) 1);
#line 342 "sparse_bitset.opt"
            if (mercury__digraph__succeeded)
#line 335 "sparse_bitset.opt"
              {
#line 335 "sparse_bitset.opt"
                MR_Word mercury__digraph__Elem_14_15;
#line 2607 "digraph.c"
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 2609 "digraph.c"
                MR_Box mercury__digraph__conv1_Elem_14_15;

#line 2612 "digraph.c"
                {
#line 2614 "digraph.c"
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__Offset_10_10)), &mercury__digraph__conv1_Elem_14_15);
                }
#line 2617 "digraph.c"
                if (mercury__digraph__succeeded)
#line 2619 "digraph.c"
                  {
#line 2621 "digraph.c"
                    mercury__digraph__Elem_14_15 = ((MR_Word) mercury__digraph__conv1_Elem_14_15);
#line 2623 "digraph.c"
                    mercury__digraph__succeeded = MR_TRUE;
#line 2625 "digraph.c"
                  }
#line 335 "sparse_bitset.opt"
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
                    MR_Word mercury__digraph__Reverse_5_58;
#line 48 "bimap.opt"
                    MR_Word mercury__digraph__V_4_57;

#line 2644 "digraph.c"
                    {
#line 2646 "digraph.c"
                      mercury__digraph__TypeInfo_17_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2648 "digraph.c"
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_54, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_53));
#line 2650 "digraph.c"
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_54, 1) = ((MR_Box) (mercury__digraph__V_41_41));
#line 2652 "digraph.c"
                    }
#line 48 "bimap.opt"
                    mercury__digraph__V_4_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_42_42, (MR_Integer) 0)));
#line 48 "bimap.opt"
                    mercury__digraph__Reverse_5_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_42_42, (MR_Integer) 1)));
#line 49 "bimap.opt"
                    {
#line 49 "bimap.opt"
                      mercury__map__lookup_3_p_0(mercury__digraph__TypeInfo_17_54, mercury__digraph__V_41_41, (MR_Word) mercury__digraph__Reverse_5_58, ((MR_Box) (mercury__digraph__Elem_14_15)), &mercury__digraph__VY_50);
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
                      *mercury__digraph__STATE_VARIABLE_Acc_20_14 = base;
#line 568 "digraph.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__digraph__V_52_52));
#line 568 "digraph.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__digraph__STATE_VARIABLE_Acc_0_19_13));
#line 568 "digraph.m"
                    }
#line 566 "digraph.m"
                  }
#line 335 "sparse_bitset.opt"
                else
#line 336 "sparse_bitset.opt"
                  {
#line 339 "sparse_bitset.opt"
                    {
#line 339 "sparse_bitset.opt"
                      mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold_bits\'/7", (MR_String) "\140enum.from_int/1\' failed");
#line 339 "sparse_bitset.opt"
                      return;
                    }
#line 336 "sparse_bitset.opt"
                  }
#line 335 "sparse_bitset.opt"
              }
#line 342 "sparse_bitset.opt"
            else
#line 343 "sparse_bitset.opt"
              {
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__HalfSize_15_19 = (mercury__digraph__Size_12_12 >> (MR_Integer) 1);
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__Mask_16_21;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__LowBits_17_22;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__HighBits_18_23;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_26_24;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_4_61 = ((MR_Integer) -1 << mercury__digraph__HalfSize_15_19);

#line 513 "sparse_bitset.opt"
                mercury__digraph__Mask_16_21 = ~(mercury__digraph__V_4_61);
#line 346 "sparse_bitset.opt"
                mercury__digraph__LowBits_17_22 = (mercury__digraph__Mask_16_21 & mercury__digraph__Bits_11_11);
#line 348 "sparse_bitset.opt"
                mercury__digraph__V_26_24 = (mercury__digraph__Bits_11_11 >> mercury__digraph__HalfSize_15_19);
#line 347 "sparse_bitset.opt"
                mercury__digraph__HighBits_18_23 = (mercury__digraph__Mask_16_21 & mercury__digraph__V_26_24);
#line 354 "sparse_bitset.opt"
                if ((mercury__digraph__Dir_8_8 == (MR_Integer) 1))
#line 355 "sparse_bitset.opt"
                  {
#line 355 "sparse_bitset.opt"
                    MR_Integer mercury__digraph__V_27_27 = (mercury__digraph__Offset_10_10 + mercury__digraph__HalfSize_15_19);
#line 355 "sparse_bitset.opt"
                    MR_Word mercury__digraph__STATE_VARIABLE_Acc_28_28_28;

#line 357 "sparse_bitset.opt"
                    {
#line 357 "sparse_bitset.opt"
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_51_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_41_41, mercury__digraph__V_42_42, mercury__digraph__V_43_43, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__V_27_27, mercury__digraph__HighBits_18_23, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_28_28_28);
                    }
#line 358 "sparse_bitset.opt"
                    /* direct tailcall eliminated */
#line 358 "sparse_bitset.opt"
                    {
#line 358 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Bits_11__tmp_copy_11 = mercury__digraph__LowBits_17_22;
#line 358 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Size_12__tmp_copy_12 = mercury__digraph__HalfSize_15_19;
#line 358 "sparse_bitset.opt"
                      MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13 = mercury__digraph__STATE_VARIABLE_Acc_28_28_28;

#line 358 "sparse_bitset.opt"
                      mercury__digraph__STATE_VARIABLE_Acc_0_19_13 = mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13;
#line 358 "sparse_bitset.opt"
                      mercury__digraph__Size_12_12 = mercury__digraph__Size_12__tmp_copy_12;
#line 358 "sparse_bitset.opt"
                      mercury__digraph__Bits_11_11 = mercury__digraph__Bits_11__tmp_copy_11;
#line 358 "sparse_bitset.opt"
                    }
#line 358 "sparse_bitset.opt"
                    continue;
#line 355 "sparse_bitset.opt"
                  }
#line 354 "sparse_bitset.opt"
                else
#line 350 "sparse_bitset.opt"
                  {
#line 350 "sparse_bitset.opt"
                    MR_Word mercury__digraph__STATE_VARIABLE_Acc_30_30_25;
#line 350 "sparse_bitset.opt"
                    MR_Integer mercury__digraph__V_31_26;

#line 351 "sparse_bitset.opt"
                    {
#line 351 "sparse_bitset.opt"
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_51_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_41_41, mercury__digraph__V_42_42, mercury__digraph__V_43_43, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__Offset_10_10, mercury__digraph__LowBits_17_22, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_30_30_25);
                    }
#line 352 "sparse_bitset.opt"
                    mercury__digraph__V_31_26 = (mercury__digraph__Offset_10_10 + mercury__digraph__HalfSize_15_19);
#line 353 "sparse_bitset.opt"
                    /* direct tailcall eliminated */
#line 353 "sparse_bitset.opt"
                    {
#line 353 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Offset_10__tmp_copy_10 = mercury__digraph__V_31_26;
#line 353 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Bits_11__tmp_copy_11 = mercury__digraph__HighBits_18_23;
#line 353 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Size_12__tmp_copy_12 = mercury__digraph__HalfSize_15_19;
#line 353 "sparse_bitset.opt"
                      MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13 = mercury__digraph__STATE_VARIABLE_Acc_30_30_25;

#line 353 "sparse_bitset.opt"
                      mercury__digraph__STATE_VARIABLE_Acc_0_19_13 = mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13;
#line 353 "sparse_bitset.opt"
                      mercury__digraph__Size_12_12 = mercury__digraph__Size_12__tmp_copy_12;
#line 353 "sparse_bitset.opt"
                      mercury__digraph__Bits_11_11 = mercury__digraph__Bits_11__tmp_copy_11;
#line 353 "sparse_bitset.opt"
                      mercury__digraph__Offset_10_10 = mercury__digraph__Offset_10__tmp_copy_10;
#line 353 "sparse_bitset.opt"
                    }
#line 353 "sparse_bitset.opt"
                    continue;
#line 350 "sparse_bitset.opt"
                  }
#line 343 "sparse_bitset.opt"
              }
#line 342 "sparse_bitset.opt"
          }
#line 327 "sparse_bitset.opt"
      }
#line 327 "sparse_bitset.opt"
      break;
#line 327 "sparse_bitset.opt"
    }
#line 52 "sparse_bitset.opt"
}

#line 52 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_52_93_95_48_7_p_in__sparse_bitset_0(
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_46_46,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__Dir_8_8,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Offset_10_10,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Bits_11_11,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Size_12_12,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19_13,
#line 52 "sparse_bitset.opt"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc_20_14)
#line 52 "sparse_bitset.opt"
{
#line 327 "sparse_bitset.opt"
  while (MR_TRUE)
#line 327 "sparse_bitset.opt"
    {
#line 327 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 327 "sparse_bitset.opt"
      {
#line 327 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded = (mercury__digraph__Bits_11_11 == (MR_Integer) 0);

#line 327 "sparse_bitset.opt"
        if (mercury__digraph__succeeded)
#line 326 "sparse_bitset.opt"
          *mercury__digraph__STATE_VARIABLE_Acc_20_14 = mercury__digraph__STATE_VARIABLE_Acc_0_19_13;
#line 327 "sparse_bitset.opt"
        else
#line 342 "sparse_bitset.opt"
          {
#line 329 "sparse_bitset.opt"
            mercury__digraph__succeeded = (mercury__digraph__Size_12_12 == (MR_Integer) 1);
#line 342 "sparse_bitset.opt"
            if (mercury__digraph__succeeded)
#line 335 "sparse_bitset.opt"
              {
#line 335 "sparse_bitset.opt"
                MR_Word mercury__digraph__Elem_14_15;
#line 2870 "digraph.c"
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 2872 "digraph.c"
                MR_Box mercury__digraph__conv1_Elem_14_15;

#line 2875 "digraph.c"
                {
#line 2877 "digraph.c"
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__Offset_10_10)), &mercury__digraph__conv1_Elem_14_15);
                }
#line 2880 "digraph.c"
                if (mercury__digraph__succeeded)
#line 2882 "digraph.c"
                  {
#line 2884 "digraph.c"
                    mercury__digraph__Elem_14_15 = ((MR_Word) mercury__digraph__conv1_Elem_14_15);
#line 2886 "digraph.c"
                    mercury__digraph__succeeded = MR_TRUE;
#line 2888 "digraph.c"
                  }
#line 335 "sparse_bitset.opt"
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
                      MR_hl_field(MR_mktag(0), mercury__digraph__V_53_53, 1) = ((MR_Box) (mercury__digraph__Elem_14_15));
#line 593 "digraph.m"
                    }
#line 593 "digraph.m"
                    {
#line 593 "digraph.m"
                      MR_Word base;
#line 593 "digraph.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 593 "digraph.m"
                      *mercury__digraph__STATE_VARIABLE_Acc_20_14 = base;
#line 593 "digraph.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__digraph__V_53_53));
#line 593 "digraph.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__digraph__STATE_VARIABLE_Acc_0_19_13));
#line 593 "digraph.m"
                    }
#line 592 "digraph.m"
                  }
#line 335 "sparse_bitset.opt"
                else
#line 336 "sparse_bitset.opt"
                  {
#line 339 "sparse_bitset.opt"
                    {
#line 339 "sparse_bitset.opt"
                      mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold_bits\'/7", (MR_String) "\140enum.from_int/1\' failed");
#line 339 "sparse_bitset.opt"
                      return;
                    }
#line 336 "sparse_bitset.opt"
                  }
#line 335 "sparse_bitset.opt"
              }
#line 342 "sparse_bitset.opt"
            else
#line 343 "sparse_bitset.opt"
              {
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__HalfSize_15_19 = (mercury__digraph__Size_12_12 >> (MR_Integer) 1);
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__Mask_16_21;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__LowBits_17_22;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__HighBits_18_23;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_26_24;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_4_56 = ((MR_Integer) -1 << mercury__digraph__HalfSize_15_19);

#line 513 "sparse_bitset.opt"
                mercury__digraph__Mask_16_21 = ~(mercury__digraph__V_4_56);
#line 346 "sparse_bitset.opt"
                mercury__digraph__LowBits_17_22 = (mercury__digraph__Mask_16_21 & mercury__digraph__Bits_11_11);
#line 348 "sparse_bitset.opt"
                mercury__digraph__V_26_24 = (mercury__digraph__Bits_11_11 >> mercury__digraph__HalfSize_15_19);
#line 347 "sparse_bitset.opt"
                mercury__digraph__HighBits_18_23 = (mercury__digraph__Mask_16_21 & mercury__digraph__V_26_24);
#line 354 "sparse_bitset.opt"
                if ((mercury__digraph__Dir_8_8 == (MR_Integer) 1))
#line 355 "sparse_bitset.opt"
                  {
#line 355 "sparse_bitset.opt"
                    MR_Integer mercury__digraph__V_27_27 = (mercury__digraph__Offset_10_10 + mercury__digraph__HalfSize_15_19);
#line 355 "sparse_bitset.opt"
                    MR_Word mercury__digraph__STATE_VARIABLE_Acc_28_28_28;

#line 357 "sparse_bitset.opt"
                    {
#line 357 "sparse_bitset.opt"
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_52_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_46_46, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__V_27_27, mercury__digraph__HighBits_18_23, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_28_28_28);
                    }
#line 358 "sparse_bitset.opt"
                    /* direct tailcall eliminated */
#line 358 "sparse_bitset.opt"
                    {
#line 358 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Bits_11__tmp_copy_11 = mercury__digraph__LowBits_17_22;
#line 358 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Size_12__tmp_copy_12 = mercury__digraph__HalfSize_15_19;
#line 358 "sparse_bitset.opt"
                      MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13 = mercury__digraph__STATE_VARIABLE_Acc_28_28_28;

#line 358 "sparse_bitset.opt"
                      mercury__digraph__STATE_VARIABLE_Acc_0_19_13 = mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13;
#line 358 "sparse_bitset.opt"
                      mercury__digraph__Size_12_12 = mercury__digraph__Size_12__tmp_copy_12;
#line 358 "sparse_bitset.opt"
                      mercury__digraph__Bits_11_11 = mercury__digraph__Bits_11__tmp_copy_11;
#line 358 "sparse_bitset.opt"
                    }
#line 358 "sparse_bitset.opt"
                    continue;
#line 355 "sparse_bitset.opt"
                  }
#line 354 "sparse_bitset.opt"
                else
#line 350 "sparse_bitset.opt"
                  {
#line 350 "sparse_bitset.opt"
                    MR_Word mercury__digraph__STATE_VARIABLE_Acc_30_30_25;
#line 350 "sparse_bitset.opt"
                    MR_Integer mercury__digraph__V_31_26;

#line 351 "sparse_bitset.opt"
                    {
#line 351 "sparse_bitset.opt"
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_52_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_46_46, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__Offset_10_10, mercury__digraph__LowBits_17_22, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_30_30_25);
                    }
#line 352 "sparse_bitset.opt"
                    mercury__digraph__V_31_26 = (mercury__digraph__Offset_10_10 + mercury__digraph__HalfSize_15_19);
#line 353 "sparse_bitset.opt"
                    /* direct tailcall eliminated */
#line 353 "sparse_bitset.opt"
                    {
#line 353 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Offset_10__tmp_copy_10 = mercury__digraph__V_31_26;
#line 353 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Bits_11__tmp_copy_11 = mercury__digraph__HighBits_18_23;
#line 353 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Size_12__tmp_copy_12 = mercury__digraph__HalfSize_15_19;
#line 353 "sparse_bitset.opt"
                      MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13 = mercury__digraph__STATE_VARIABLE_Acc_30_30_25;

#line 353 "sparse_bitset.opt"
                      mercury__digraph__STATE_VARIABLE_Acc_0_19_13 = mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13;
#line 353 "sparse_bitset.opt"
                      mercury__digraph__Size_12_12 = mercury__digraph__Size_12__tmp_copy_12;
#line 353 "sparse_bitset.opt"
                      mercury__digraph__Bits_11_11 = mercury__digraph__Bits_11__tmp_copy_11;
#line 353 "sparse_bitset.opt"
                      mercury__digraph__Offset_10_10 = mercury__digraph__Offset_10__tmp_copy_10;
#line 353 "sparse_bitset.opt"
                    }
#line 353 "sparse_bitset.opt"
                    continue;
#line 350 "sparse_bitset.opt"
                  }
#line 343 "sparse_bitset.opt"
              }
#line 342 "sparse_bitset.opt"
          }
#line 327 "sparse_bitset.opt"
      }
#line 327 "sparse_bitset.opt"
      break;
#line 327 "sparse_bitset.opt"
    }
#line 52 "sparse_bitset.opt"
}

#line 63 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_57_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_52_93_95_48_9_p_in__sparse_bitset_0(
#line 63 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_51_51,
#line 63 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_52_52,
#line 63 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_35,
#line 63 "sparse_bitset.opt"
  MR_Word mercury__digraph__Dir_10_10,
#line 63 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Offset_12_12,
#line 63 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Bits_13_13,
#line 63 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Size_14_14,
#line 63 "sparse_bitset.opt"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc1_0_22_15,
#line 63 "sparse_bitset.opt"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc1_23_16,
#line 63 "sparse_bitset.opt"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc2_0_24_17,
#line 63 "sparse_bitset.opt"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc2_25_18)
#line 63 "sparse_bitset.opt"
{
#line 368 "sparse_bitset.opt"
  while (MR_TRUE)
#line 368 "sparse_bitset.opt"
    {
#line 368 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 368 "sparse_bitset.opt"
      {
#line 368 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded = (mercury__digraph__Bits_13_13 == (MR_Integer) 0);

#line 368 "sparse_bitset.opt"
        if (mercury__digraph__succeeded)
#line 366 "sparse_bitset.opt"
          {
#line 366 "sparse_bitset.opt"
            *mercury__digraph__STATE_VARIABLE_Acc2_25_18 = mercury__digraph__STATE_VARIABLE_Acc2_0_24_17;
#line 367 "sparse_bitset.opt"
            *mercury__digraph__STATE_VARIABLE_Acc1_23_16 = mercury__digraph__STATE_VARIABLE_Acc1_0_22_15;
#line 366 "sparse_bitset.opt"
          }
#line 368 "sparse_bitset.opt"
        else
#line 384 "sparse_bitset.opt"
          {
#line 370 "sparse_bitset.opt"
            mercury__digraph__succeeded = (mercury__digraph__Size_14_14 == (MR_Integer) 1);
#line 384 "sparse_bitset.opt"
            if (mercury__digraph__succeeded)
#line 376 "sparse_bitset.opt"
              {
#line 376 "sparse_bitset.opt"
                MR_Word mercury__digraph__Elem_17_19;
#line 3116 "digraph.c"
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_35, (MR_Integer) 0)), (MR_Integer) 6)));
#line 3118 "digraph.c"
                MR_Box mercury__digraph__conv1_Elem_17_19;

#line 3121 "digraph.c"
                {
#line 3123 "digraph.c"
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_35), ((MR_Box) (mercury__digraph__Offset_12_12)), &mercury__digraph__conv1_Elem_17_19);
                }
#line 3126 "digraph.c"
                if (mercury__digraph__succeeded)
#line 3128 "digraph.c"
                  {
#line 3130 "digraph.c"
                    mercury__digraph__Elem_17_19 = ((MR_Word) mercury__digraph__conv1_Elem_17_19);
#line 3132 "digraph.c"
                    mercury__digraph__succeeded = MR_TRUE;
#line 3134 "digraph.c"
                  }
#line 376 "sparse_bitset.opt"
                if (mercury__digraph__succeeded)
#line 375 "sparse_bitset.opt"
                  {
#line 375 "sparse_bitset.opt"
                    mercury__digraph__dfs_2_6_p_0(mercury__digraph__V_51_51, mercury__digraph__V_52_52, mercury__digraph__Elem_17_19, mercury__digraph__STATE_VARIABLE_Acc1_0_22_15, mercury__digraph__STATE_VARIABLE_Acc1_23_16, mercury__digraph__STATE_VARIABLE_Acc2_0_24_17, mercury__digraph__STATE_VARIABLE_Acc2_25_18);
#line 375 "sparse_bitset.opt"
                    return;
                  }
#line 376 "sparse_bitset.opt"
                else
#line 377 "sparse_bitset.opt"
                  {
#line 380 "sparse_bitset.opt"
                    {
#line 380 "sparse_bitset.opt"
                      mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold2_bits\'/9", (MR_String) "\140enum.from_int/1\' failed");
#line 380 "sparse_bitset.opt"
                      return;
                    }
#line 377 "sparse_bitset.opt"
                  }
#line 376 "sparse_bitset.opt"
              }
#line 384 "sparse_bitset.opt"
            else
#line 385 "sparse_bitset.opt"
              {
#line 385 "sparse_bitset.opt"
                MR_Integer mercury__digraph__HalfSize_18_23 = (mercury__digraph__Size_14_14 >> (MR_Integer) 1);
#line 385 "sparse_bitset.opt"
                MR_Integer mercury__digraph__Mask_19_25;
#line 385 "sparse_bitset.opt"
                MR_Integer mercury__digraph__LowBits_20_26;
#line 385 "sparse_bitset.opt"
                MR_Integer mercury__digraph__HighBits_21_27;
#line 385 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_32_28;
#line 385 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_4_55 = ((MR_Integer) -1 << mercury__digraph__HalfSize_18_23);

#line 513 "sparse_bitset.opt"
                mercury__digraph__Mask_19_25 = ~(mercury__digraph__V_4_55);
#line 388 "sparse_bitset.opt"
                mercury__digraph__LowBits_20_26 = (mercury__digraph__Mask_19_25 & mercury__digraph__Bits_13_13);
#line 390 "sparse_bitset.opt"
                mercury__digraph__V_32_28 = (mercury__digraph__Bits_13_13 >> mercury__digraph__HalfSize_18_23);
#line 389 "sparse_bitset.opt"
                mercury__digraph__HighBits_21_27 = (mercury__digraph__Mask_19_25 & mercury__digraph__V_32_28);
#line 396 "sparse_bitset.opt"
                if ((mercury__digraph__Dir_10_10 == (MR_Integer) 1))
#line 397 "sparse_bitset.opt"
                  {
#line 397 "sparse_bitset.opt"
                    MR_Integer mercury__digraph__V_33_32 = (mercury__digraph__Offset_12_12 + mercury__digraph__HalfSize_18_23);
#line 397 "sparse_bitset.opt"
                    MR_Word mercury__digraph__STATE_VARIABLE_Acc1_34_34_33;
#line 397 "sparse_bitset.opt"
                    MR_Word mercury__digraph__STATE_VARIABLE_Acc2_35_35_34;

#line 399 "sparse_bitset.opt"
                    {
#line 399 "sparse_bitset.opt"
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_57_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_52_93_95_48_9_p_in__sparse_bitset_0(mercury__digraph__V_51_51, mercury__digraph__V_52_52, mercury__digraph__TypeClassInfo_for_enum_35, mercury__digraph__Dir_10_10, mercury__digraph__V_33_32, mercury__digraph__HighBits_21_27, mercury__digraph__HalfSize_18_23, mercury__digraph__STATE_VARIABLE_Acc1_0_22_15, &mercury__digraph__STATE_VARIABLE_Acc1_34_34_33, mercury__digraph__STATE_VARIABLE_Acc2_0_24_17, &mercury__digraph__STATE_VARIABLE_Acc2_35_35_34);
                    }
#line 400 "sparse_bitset.opt"
                    /* direct tailcall eliminated */
#line 400 "sparse_bitset.opt"
                    {
#line 400 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Bits_13__tmp_copy_13 = mercury__digraph__LowBits_20_26;
#line 400 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Size_14__tmp_copy_14 = mercury__digraph__HalfSize_18_23;
#line 400 "sparse_bitset.opt"
                      MR_Word mercury__digraph__STATE_VARIABLE_Acc1_0_22__tmp_copy_15 = mercury__digraph__STATE_VARIABLE_Acc1_34_34_33;
#line 400 "sparse_bitset.opt"
                      MR_Word mercury__digraph__STATE_VARIABLE_Acc2_0_24__tmp_copy_17 = mercury__digraph__STATE_VARIABLE_Acc2_35_35_34;

#line 400 "sparse_bitset.opt"
                      mercury__digraph__STATE_VARIABLE_Acc2_0_24_17 = mercury__digraph__STATE_VARIABLE_Acc2_0_24__tmp_copy_17;
#line 400 "sparse_bitset.opt"
                      mercury__digraph__STATE_VARIABLE_Acc1_0_22_15 = mercury__digraph__STATE_VARIABLE_Acc1_0_22__tmp_copy_15;
#line 400 "sparse_bitset.opt"
                      mercury__digraph__Size_14_14 = mercury__digraph__Size_14__tmp_copy_14;
#line 400 "sparse_bitset.opt"
                      mercury__digraph__Bits_13_13 = mercury__digraph__Bits_13__tmp_copy_13;
#line 400 "sparse_bitset.opt"
                    }
#line 400 "sparse_bitset.opt"
                    continue;
#line 397 "sparse_bitset.opt"
                  }
#line 396 "sparse_bitset.opt"
                else
#line 392 "sparse_bitset.opt"
                  {
#line 392 "sparse_bitset.opt"
                    MR_Word mercury__digraph__STATE_VARIABLE_Acc1_38_38_29;
#line 392 "sparse_bitset.opt"
                    MR_Word mercury__digraph__STATE_VARIABLE_Acc2_39_39_30;
#line 392 "sparse_bitset.opt"
                    MR_Integer mercury__digraph__V_40_31;

#line 393 "sparse_bitset.opt"
                    {
#line 393 "sparse_bitset.opt"
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_57_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_52_93_95_48_9_p_in__sparse_bitset_0(mercury__digraph__V_51_51, mercury__digraph__V_52_52, mercury__digraph__TypeClassInfo_for_enum_35, mercury__digraph__Dir_10_10, mercury__digraph__Offset_12_12, mercury__digraph__LowBits_20_26, mercury__digraph__HalfSize_18_23, mercury__digraph__STATE_VARIABLE_Acc1_0_22_15, &mercury__digraph__STATE_VARIABLE_Acc1_38_38_29, mercury__digraph__STATE_VARIABLE_Acc2_0_24_17, &mercury__digraph__STATE_VARIABLE_Acc2_39_39_30);
                    }
#line 394 "sparse_bitset.opt"
                    mercury__digraph__V_40_31 = (mercury__digraph__Offset_12_12 + mercury__digraph__HalfSize_18_23);
#line 395 "sparse_bitset.opt"
                    /* direct tailcall eliminated */
#line 395 "sparse_bitset.opt"
                    {
#line 395 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Offset_12__tmp_copy_12 = mercury__digraph__V_40_31;
#line 395 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Bits_13__tmp_copy_13 = mercury__digraph__HighBits_21_27;
#line 395 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Size_14__tmp_copy_14 = mercury__digraph__HalfSize_18_23;
#line 395 "sparse_bitset.opt"
                      MR_Word mercury__digraph__STATE_VARIABLE_Acc1_0_22__tmp_copy_15 = mercury__digraph__STATE_VARIABLE_Acc1_38_38_29;
#line 395 "sparse_bitset.opt"
                      MR_Word mercury__digraph__STATE_VARIABLE_Acc2_0_24__tmp_copy_17 = mercury__digraph__STATE_VARIABLE_Acc2_39_39_30;

#line 395 "sparse_bitset.opt"
                      mercury__digraph__STATE_VARIABLE_Acc2_0_24_17 = mercury__digraph__STATE_VARIABLE_Acc2_0_24__tmp_copy_17;
#line 395 "sparse_bitset.opt"
                      mercury__digraph__STATE_VARIABLE_Acc1_0_22_15 = mercury__digraph__STATE_VARIABLE_Acc1_0_22__tmp_copy_15;
#line 395 "sparse_bitset.opt"
                      mercury__digraph__Size_14_14 = mercury__digraph__Size_14__tmp_copy_14;
#line 395 "sparse_bitset.opt"
                      mercury__digraph__Bits_13_13 = mercury__digraph__Bits_13__tmp_copy_13;
#line 395 "sparse_bitset.opt"
                      mercury__digraph__Offset_12_12 = mercury__digraph__Offset_12__tmp_copy_12;
#line 395 "sparse_bitset.opt"
                    }
#line 395 "sparse_bitset.opt"
                    continue;
#line 392 "sparse_bitset.opt"
                  }
#line 385 "sparse_bitset.opt"
              }
#line 384 "sparse_bitset.opt"
          }
#line 368 "sparse_bitset.opt"
      }
#line 368 "sparse_bitset.opt"
      break;
#line 368 "sparse_bitset.opt"
    }
#line 63 "sparse_bitset.opt"
}

#line 52 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_40_40,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_41_41,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__Dir_8_8,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Offset_10_10,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Bits_11_11,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Size_12_12,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19_13,
#line 52 "sparse_bitset.opt"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc_20_14)
#line 52 "sparse_bitset.opt"
{
#line 327 "sparse_bitset.opt"
  while (MR_TRUE)
#line 327 "sparse_bitset.opt"
    {
#line 327 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 327 "sparse_bitset.opt"
      {
#line 327 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded = (mercury__digraph__Bits_11_11 == (MR_Integer) 0);

#line 327 "sparse_bitset.opt"
        if (mercury__digraph__succeeded)
#line 326 "sparse_bitset.opt"
          *mercury__digraph__STATE_VARIABLE_Acc_20_14 = mercury__digraph__STATE_VARIABLE_Acc_0_19_13;
#line 327 "sparse_bitset.opt"
        else
#line 342 "sparse_bitset.opt"
          {
#line 329 "sparse_bitset.opt"
            mercury__digraph__succeeded = (mercury__digraph__Size_12_12 == (MR_Integer) 1);
#line 342 "sparse_bitset.opt"
            if (mercury__digraph__succeeded)
#line 335 "sparse_bitset.opt"
              {
#line 335 "sparse_bitset.opt"
                MR_Word mercury__digraph__Elem_14_15;
#line 3340 "digraph.c"
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 3342 "digraph.c"
                MR_Box mercury__digraph__conv1_Elem_14_15;

#line 3345 "digraph.c"
                {
#line 3347 "digraph.c"
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__Offset_10_10)), &mercury__digraph__conv1_Elem_14_15);
                }
#line 3350 "digraph.c"
                if (mercury__digraph__succeeded)
#line 3352 "digraph.c"
                  {
#line 3354 "digraph.c"
                    mercury__digraph__Elem_14_15 = ((MR_Word) mercury__digraph__conv1_Elem_14_15);
#line 3356 "digraph.c"
                    mercury__digraph__succeeded = MR_TRUE;
#line 3358 "digraph.c"
                  }
#line 335 "sparse_bitset.opt"
                if (mercury__digraph__succeeded)
#line 334 "sparse_bitset.opt"
                  {
#line 334 "sparse_bitset.opt"
                    mercury__digraph__accumulate_digraph_key_set_4_p_0(mercury__digraph__V_40_40, mercury__digraph__V_41_41, mercury__digraph__Elem_14_15, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, mercury__digraph__STATE_VARIABLE_Acc_20_14);
#line 334 "sparse_bitset.opt"
                    return;
                  }
#line 335 "sparse_bitset.opt"
                else
#line 336 "sparse_bitset.opt"
                  {
#line 339 "sparse_bitset.opt"
                    {
#line 339 "sparse_bitset.opt"
                      mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold_bits\'/7", (MR_String) "\140enum.from_int/1\' failed");
#line 339 "sparse_bitset.opt"
                      return;
                    }
#line 336 "sparse_bitset.opt"
                  }
#line 335 "sparse_bitset.opt"
              }
#line 342 "sparse_bitset.opt"
            else
#line 343 "sparse_bitset.opt"
              {
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__HalfSize_15_19 = (mercury__digraph__Size_12_12 >> (MR_Integer) 1);
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__Mask_16_21;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__LowBits_17_22;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__HighBits_18_23;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_26_24;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_4_44 = ((MR_Integer) -1 << mercury__digraph__HalfSize_15_19);

#line 513 "sparse_bitset.opt"
                mercury__digraph__Mask_16_21 = ~(mercury__digraph__V_4_44);
#line 346 "sparse_bitset.opt"
                mercury__digraph__LowBits_17_22 = (mercury__digraph__Mask_16_21 & mercury__digraph__Bits_11_11);
#line 348 "sparse_bitset.opt"
                mercury__digraph__V_26_24 = (mercury__digraph__Bits_11_11 >> mercury__digraph__HalfSize_15_19);
#line 347 "sparse_bitset.opt"
                mercury__digraph__HighBits_18_23 = (mercury__digraph__Mask_16_21 & mercury__digraph__V_26_24);
#line 354 "sparse_bitset.opt"
                if ((mercury__digraph__Dir_8_8 == (MR_Integer) 1))
#line 355 "sparse_bitset.opt"
                  {
#line 355 "sparse_bitset.opt"
                    MR_Integer mercury__digraph__V_27_27 = (mercury__digraph__Offset_10_10 + mercury__digraph__HalfSize_15_19);
#line 355 "sparse_bitset.opt"
                    MR_Word mercury__digraph__STATE_VARIABLE_Acc_28_28_28;

#line 357 "sparse_bitset.opt"
                    {
#line 357 "sparse_bitset.opt"
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_40_40, mercury__digraph__V_41_41, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__V_27_27, mercury__digraph__HighBits_18_23, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_28_28_28);
                    }
#line 358 "sparse_bitset.opt"
                    /* direct tailcall eliminated */
#line 358 "sparse_bitset.opt"
                    {
#line 358 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Bits_11__tmp_copy_11 = mercury__digraph__LowBits_17_22;
#line 358 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Size_12__tmp_copy_12 = mercury__digraph__HalfSize_15_19;
#line 358 "sparse_bitset.opt"
                      MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13 = mercury__digraph__STATE_VARIABLE_Acc_28_28_28;

#line 358 "sparse_bitset.opt"
                      mercury__digraph__STATE_VARIABLE_Acc_0_19_13 = mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13;
#line 358 "sparse_bitset.opt"
                      mercury__digraph__Size_12_12 = mercury__digraph__Size_12__tmp_copy_12;
#line 358 "sparse_bitset.opt"
                      mercury__digraph__Bits_11_11 = mercury__digraph__Bits_11__tmp_copy_11;
#line 358 "sparse_bitset.opt"
                    }
#line 358 "sparse_bitset.opt"
                    continue;
#line 355 "sparse_bitset.opt"
                  }
#line 354 "sparse_bitset.opt"
                else
#line 350 "sparse_bitset.opt"
                  {
#line 350 "sparse_bitset.opt"
                    MR_Word mercury__digraph__STATE_VARIABLE_Acc_30_30_25;
#line 350 "sparse_bitset.opt"
                    MR_Integer mercury__digraph__V_31_26;

#line 351 "sparse_bitset.opt"
                    {
#line 351 "sparse_bitset.opt"
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_40_40, mercury__digraph__V_41_41, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__Offset_10_10, mercury__digraph__LowBits_17_22, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_30_30_25);
                    }
#line 352 "sparse_bitset.opt"
                    mercury__digraph__V_31_26 = (mercury__digraph__Offset_10_10 + mercury__digraph__HalfSize_15_19);
#line 353 "sparse_bitset.opt"
                    /* direct tailcall eliminated */
#line 353 "sparse_bitset.opt"
                    {
#line 353 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Offset_10__tmp_copy_10 = mercury__digraph__V_31_26;
#line 353 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Bits_11__tmp_copy_11 = mercury__digraph__HighBits_18_23;
#line 353 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Size_12__tmp_copy_12 = mercury__digraph__HalfSize_15_19;
#line 353 "sparse_bitset.opt"
                      MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13 = mercury__digraph__STATE_VARIABLE_Acc_30_30_25;

#line 353 "sparse_bitset.opt"
                      mercury__digraph__STATE_VARIABLE_Acc_0_19_13 = mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13;
#line 353 "sparse_bitset.opt"
                      mercury__digraph__Size_12_12 = mercury__digraph__Size_12__tmp_copy_12;
#line 353 "sparse_bitset.opt"
                      mercury__digraph__Bits_11_11 = mercury__digraph__Bits_11__tmp_copy_11;
#line 353 "sparse_bitset.opt"
                      mercury__digraph__Offset_10_10 = mercury__digraph__Offset_10__tmp_copy_10;
#line 353 "sparse_bitset.opt"
                    }
#line 353 "sparse_bitset.opt"
                    continue;
#line 350 "sparse_bitset.opt"
                  }
#line 343 "sparse_bitset.opt"
              }
#line 342 "sparse_bitset.opt"
          }
#line 327 "sparse_bitset.opt"
      }
#line 327 "sparse_bitset.opt"
      break;
#line 327 "sparse_bitset.opt"
    }
#line 52 "sparse_bitset.opt"
}

#line 54 "sparse_bitset.opt"
static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_50_93_95_48_7_p_in__sparse_bitset_0(
#line 54 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_40_40,
#line 54 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_41_41,
#line 54 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_42_42,
#line 54 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 54 "sparse_bitset.opt"
  MR_Word mercury__digraph__Dir_8_8,
#line 54 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Offset_10_10,
#line 54 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Bits_11_11,
#line 54 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Size_12_12,
#line 54 "sparse_bitset.opt"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19_13,
#line 54 "sparse_bitset.opt"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc_20_14)
#line 54 "sparse_bitset.opt"
{
#line 327 "sparse_bitset.opt"
  while (MR_TRUE)
#line 327 "sparse_bitset.opt"
    {
#line 327 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 327 "sparse_bitset.opt"
      {
#line 327 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded = (mercury__digraph__Bits_11_11 == (MR_Integer) 0);

#line 327 "sparse_bitset.opt"
        if (mercury__digraph__succeeded)
#line 326 "sparse_bitset.opt"
          {
#line 326 "sparse_bitset.opt"
            *mercury__digraph__STATE_VARIABLE_Acc_20_14 = mercury__digraph__STATE_VARIABLE_Acc_0_19_13;
#line 326 "sparse_bitset.opt"
            mercury__digraph__succeeded = MR_TRUE;
#line 326 "sparse_bitset.opt"
          }
#line 327 "sparse_bitset.opt"
        else
#line 342 "sparse_bitset.opt"
          {
#line 329 "sparse_bitset.opt"
            mercury__digraph__succeeded = (mercury__digraph__Size_12_12 == (MR_Integer) 1);
#line 342 "sparse_bitset.opt"
            if (mercury__digraph__succeeded)
#line 335 "sparse_bitset.opt"
              {
#line 335 "sparse_bitset.opt"
                MR_Word mercury__digraph__Elem_14_15;
#line 3560 "digraph.c"
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 3562 "digraph.c"
                MR_Box mercury__digraph__conv1_Elem_14_15;

#line 3565 "digraph.c"
                {
#line 3567 "digraph.c"
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__Offset_10_10)), &mercury__digraph__conv1_Elem_14_15);
                }
#line 3570 "digraph.c"
                if (mercury__digraph__succeeded)
#line 3572 "digraph.c"
                  {
#line 3574 "digraph.c"
                    mercury__digraph__Elem_14_15 = ((MR_Word) mercury__digraph__conv1_Elem_14_15);
#line 3576 "digraph.c"
                    mercury__digraph__succeeded = MR_TRUE;
#line 3578 "digraph.c"
                  }
#line 335 "sparse_bitset.opt"
                if (mercury__digraph__succeeded)
#line 334 "sparse_bitset.opt"
                  {
#line 334 "sparse_bitset.opt"
                    return mercury__digraph__succeeded = mercury__digraph__is_dag_2_5_p_0(mercury__digraph__V_40_40, mercury__digraph__V_41_41, mercury__digraph__V_42_42, mercury__digraph__Elem_14_15, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, mercury__digraph__STATE_VARIABLE_Acc_20_14);
                  }
#line 335 "sparse_bitset.opt"
                else
#line 336 "sparse_bitset.opt"
                  {
#line 339 "sparse_bitset.opt"
                    {
#line 339 "sparse_bitset.opt"
                      mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold_bits\'/7", (MR_String) "\140enum.from_int/1\' failed");
                    }
#line 336 "sparse_bitset.opt"
                    mercury__digraph__succeeded = MR_TRUE;
#line 336 "sparse_bitset.opt"
                  }
#line 335 "sparse_bitset.opt"
              }
#line 342 "sparse_bitset.opt"
            else
#line 343 "sparse_bitset.opt"
              {
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__HalfSize_15_19 = (mercury__digraph__Size_12_12 >> (MR_Integer) 1);
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__Mask_16_21;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__LowBits_17_22;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__HighBits_18_23;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_26_24;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_4_45 = ((MR_Integer) -1 << mercury__digraph__HalfSize_15_19);

#line 513 "sparse_bitset.opt"
                mercury__digraph__Mask_16_21 = ~(mercury__digraph__V_4_45);
#line 346 "sparse_bitset.opt"
                mercury__digraph__LowBits_17_22 = (mercury__digraph__Mask_16_21 & mercury__digraph__Bits_11_11);
#line 348 "sparse_bitset.opt"
                mercury__digraph__V_26_24 = (mercury__digraph__Bits_11_11 >> mercury__digraph__HalfSize_15_19);
#line 347 "sparse_bitset.opt"
                mercury__digraph__HighBits_18_23 = (mercury__digraph__Mask_16_21 & mercury__digraph__V_26_24);
#line 354 "sparse_bitset.opt"
                if ((mercury__digraph__Dir_8_8 == (MR_Integer) 1))
#line 355 "sparse_bitset.opt"
                  {
#line 355 "sparse_bitset.opt"
                    MR_Integer mercury__digraph__V_27_27 = (mercury__digraph__Offset_10_10 + mercury__digraph__HalfSize_15_19);
#line 355 "sparse_bitset.opt"
                    MR_Word mercury__digraph__STATE_VARIABLE_Acc_28_28_28;

#line 357 "sparse_bitset.opt"
                    {
#line 357 "sparse_bitset.opt"
                      mercury__digraph__succeeded = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_50_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_40_40, mercury__digraph__V_41_41, mercury__digraph__V_42_42, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__V_27_27, mercury__digraph__HighBits_18_23, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_28_28_28);
                    }
#line 355 "sparse_bitset.opt"
                    if (mercury__digraph__succeeded)
#line 358 "sparse_bitset.opt"
                      {
#line 358 "sparse_bitset.opt"
                        /* direct tailcall eliminated */
#line 358 "sparse_bitset.opt"
                        {
#line 358 "sparse_bitset.opt"
                          MR_Integer mercury__digraph__Bits_11__tmp_copy_11 = mercury__digraph__LowBits_17_22;
#line 358 "sparse_bitset.opt"
                          MR_Integer mercury__digraph__Size_12__tmp_copy_12 = mercury__digraph__HalfSize_15_19;
#line 358 "sparse_bitset.opt"
                          MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13 = mercury__digraph__STATE_VARIABLE_Acc_28_28_28;

#line 358 "sparse_bitset.opt"
                          mercury__digraph__STATE_VARIABLE_Acc_0_19_13 = mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13;
#line 358 "sparse_bitset.opt"
                          mercury__digraph__Size_12_12 = mercury__digraph__Size_12__tmp_copy_12;
#line 358 "sparse_bitset.opt"
                          mercury__digraph__Bits_11_11 = mercury__digraph__Bits_11__tmp_copy_11;
#line 358 "sparse_bitset.opt"
                        }
#line 358 "sparse_bitset.opt"
                        continue;
#line 358 "sparse_bitset.opt"
                      }
#line 355 "sparse_bitset.opt"
                  }
#line 354 "sparse_bitset.opt"
                else
#line 350 "sparse_bitset.opt"
                  {
#line 350 "sparse_bitset.opt"
                    MR_Word mercury__digraph__STATE_VARIABLE_Acc_30_30_25;
#line 350 "sparse_bitset.opt"
                    MR_Integer mercury__digraph__V_31_26;

#line 351 "sparse_bitset.opt"
                    {
#line 351 "sparse_bitset.opt"
                      mercury__digraph__succeeded = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_50_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_40_40, mercury__digraph__V_41_41, mercury__digraph__V_42_42, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__Offset_10_10, mercury__digraph__LowBits_17_22, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_30_30_25);
                    }
#line 350 "sparse_bitset.opt"
                    if (mercury__digraph__succeeded)
#line 350 "sparse_bitset.opt"
                      {
#line 352 "sparse_bitset.opt"
                        mercury__digraph__V_31_26 = (mercury__digraph__Offset_10_10 + mercury__digraph__HalfSize_15_19);
#line 353 "sparse_bitset.opt"
                        /* direct tailcall eliminated */
#line 353 "sparse_bitset.opt"
                        {
#line 353 "sparse_bitset.opt"
                          MR_Integer mercury__digraph__Offset_10__tmp_copy_10 = mercury__digraph__V_31_26;
#line 353 "sparse_bitset.opt"
                          MR_Integer mercury__digraph__Bits_11__tmp_copy_11 = mercury__digraph__HighBits_18_23;
#line 353 "sparse_bitset.opt"
                          MR_Integer mercury__digraph__Size_12__tmp_copy_12 = mercury__digraph__HalfSize_15_19;
#line 353 "sparse_bitset.opt"
                          MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13 = mercury__digraph__STATE_VARIABLE_Acc_30_30_25;

#line 353 "sparse_bitset.opt"
                          mercury__digraph__STATE_VARIABLE_Acc_0_19_13 = mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13;
#line 353 "sparse_bitset.opt"
                          mercury__digraph__Size_12_12 = mercury__digraph__Size_12__tmp_copy_12;
#line 353 "sparse_bitset.opt"
                          mercury__digraph__Bits_11_11 = mercury__digraph__Bits_11__tmp_copy_11;
#line 353 "sparse_bitset.opt"
                          mercury__digraph__Offset_10_10 = mercury__digraph__Offset_10__tmp_copy_10;
#line 353 "sparse_bitset.opt"
                        }
#line 353 "sparse_bitset.opt"
                        continue;
#line 350 "sparse_bitset.opt"
                      }
#line 350 "sparse_bitset.opt"
                  }
#line 343 "sparse_bitset.opt"
              }
#line 342 "sparse_bitset.opt"
          }
#line 327 "sparse_bitset.opt"
        return mercury__digraph__succeeded;
#line 327 "sparse_bitset.opt"
      }
#line 327 "sparse_bitset.opt"
      break;
#line 327 "sparse_bitset.opt"
    }
#line 54 "sparse_bitset.opt"
}

#line 52 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_40_40,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_41_41,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__Dir_8_8,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Offset_10_10,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Bits_11_11,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Size_12_12,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19_13,
#line 52 "sparse_bitset.opt"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc_20_14)
#line 52 "sparse_bitset.opt"
{
#line 327 "sparse_bitset.opt"
  while (MR_TRUE)
#line 327 "sparse_bitset.opt"
    {
#line 327 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 327 "sparse_bitset.opt"
      {
#line 327 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded = (mercury__digraph__Bits_11_11 == (MR_Integer) 0);

#line 327 "sparse_bitset.opt"
        if (mercury__digraph__succeeded)
#line 326 "sparse_bitset.opt"
          *mercury__digraph__STATE_VARIABLE_Acc_20_14 = mercury__digraph__STATE_VARIABLE_Acc_0_19_13;
#line 327 "sparse_bitset.opt"
        else
#line 342 "sparse_bitset.opt"
          {
#line 329 "sparse_bitset.opt"
            mercury__digraph__succeeded = (mercury__digraph__Size_12_12 == (MR_Integer) 1);
#line 342 "sparse_bitset.opt"
            if (mercury__digraph__succeeded)
#line 335 "sparse_bitset.opt"
              {
#line 335 "sparse_bitset.opt"
                MR_Word mercury__digraph__Elem_14_15;
#line 3784 "digraph.c"
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 3786 "digraph.c"
                MR_Box mercury__digraph__conv1_Elem_14_15;

#line 3789 "digraph.c"
                {
#line 3791 "digraph.c"
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__Offset_10_10)), &mercury__digraph__conv1_Elem_14_15);
                }
#line 3794 "digraph.c"
                if (mercury__digraph__succeeded)
#line 3796 "digraph.c"
                  {
#line 3798 "digraph.c"
                    mercury__digraph__Elem_14_15 = ((MR_Word) mercury__digraph__conv1_Elem_14_15);
#line 3800 "digraph.c"
                    mercury__digraph__succeeded = MR_TRUE;
#line 3802 "digraph.c"
                  }
#line 335 "sparse_bitset.opt"
                if (mercury__digraph__succeeded)
#line 1076 "digraph.m"
                  {
#line 1076 "digraph.m"
                    MR_Word mercury__digraph__SuccXs_47;
#line 1076 "digraph.m"
                    MR_Word mercury__digraph__Set1_4_54;
#line 1076 "digraph.m"
                    MR_Word mercury__digraph__Set2_5_55;
#line 1076 "digraph.m"
                    MR_Word mercury__digraph__V_6_56;

#line 1077 "digraph.m"
                    {
#line 1077 "digraph.m"
                      mercury__digraph__lookup_key_set_from_3_p_0(mercury__digraph__V_40_40, mercury__digraph__V_41_41, mercury__digraph__Elem_14_15, &mercury__digraph__SuccXs_47);
                    }
#line 210 "sparse_bitset.opt"
                    mercury__digraph__Set1_4_54 = (MR_Word) mercury__digraph__SuccXs_47;
#line 210 "sparse_bitset.opt"
                    mercury__digraph__Set2_5_55 = (MR_Word) mercury__digraph__STATE_VARIABLE_Acc_0_19_13;
#line 211 "sparse_bitset.opt"
                    {
#line 211 "sparse_bitset.opt"
                      mercury__digraph__V_6_56 = mercury__sparse_bitset__union_2_2_f_0(mercury__digraph__Set1_4_54, mercury__digraph__Set2_5_55);
                    }
#line 210 "sparse_bitset.opt"
                    *mercury__digraph__STATE_VARIABLE_Acc_20_14 = (MR_Word) mercury__digraph__V_6_56;
#line 1076 "digraph.m"
                  }
#line 335 "sparse_bitset.opt"
                else
#line 336 "sparse_bitset.opt"
                  {
#line 339 "sparse_bitset.opt"
                    {
#line 339 "sparse_bitset.opt"
                      mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold_bits\'/7", (MR_String) "\140enum.from_int/1\' failed");
#line 339 "sparse_bitset.opt"
                      return;
                    }
#line 336 "sparse_bitset.opt"
                  }
#line 335 "sparse_bitset.opt"
              }
#line 342 "sparse_bitset.opt"
            else
#line 343 "sparse_bitset.opt"
              {
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__HalfSize_15_19 = (mercury__digraph__Size_12_12 >> (MR_Integer) 1);
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__Mask_16_21;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__LowBits_17_22;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__HighBits_18_23;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_26_24;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_4_59 = ((MR_Integer) -1 << mercury__digraph__HalfSize_15_19);

#line 513 "sparse_bitset.opt"
                mercury__digraph__Mask_16_21 = ~(mercury__digraph__V_4_59);
#line 346 "sparse_bitset.opt"
                mercury__digraph__LowBits_17_22 = (mercury__digraph__Mask_16_21 & mercury__digraph__Bits_11_11);
#line 348 "sparse_bitset.opt"
                mercury__digraph__V_26_24 = (mercury__digraph__Bits_11_11 >> mercury__digraph__HalfSize_15_19);
#line 347 "sparse_bitset.opt"
                mercury__digraph__HighBits_18_23 = (mercury__digraph__Mask_16_21 & mercury__digraph__V_26_24);
#line 354 "sparse_bitset.opt"
                if ((mercury__digraph__Dir_8_8 == (MR_Integer) 1))
#line 355 "sparse_bitset.opt"
                  {
#line 355 "sparse_bitset.opt"
                    MR_Integer mercury__digraph__V_27_27 = (mercury__digraph__Offset_10_10 + mercury__digraph__HalfSize_15_19);
#line 355 "sparse_bitset.opt"
                    MR_Word mercury__digraph__STATE_VARIABLE_Acc_28_28_28;

#line 357 "sparse_bitset.opt"
                    {
#line 357 "sparse_bitset.opt"
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_40_40, mercury__digraph__V_41_41, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__V_27_27, mercury__digraph__HighBits_18_23, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_28_28_28);
                    }
#line 358 "sparse_bitset.opt"
                    /* direct tailcall eliminated */
#line 358 "sparse_bitset.opt"
                    {
#line 358 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Bits_11__tmp_copy_11 = mercury__digraph__LowBits_17_22;
#line 358 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Size_12__tmp_copy_12 = mercury__digraph__HalfSize_15_19;
#line 358 "sparse_bitset.opt"
                      MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13 = mercury__digraph__STATE_VARIABLE_Acc_28_28_28;

#line 358 "sparse_bitset.opt"
                      mercury__digraph__STATE_VARIABLE_Acc_0_19_13 = mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13;
#line 358 "sparse_bitset.opt"
                      mercury__digraph__Size_12_12 = mercury__digraph__Size_12__tmp_copy_12;
#line 358 "sparse_bitset.opt"
                      mercury__digraph__Bits_11_11 = mercury__digraph__Bits_11__tmp_copy_11;
#line 358 "sparse_bitset.opt"
                    }
#line 358 "sparse_bitset.opt"
                    continue;
#line 355 "sparse_bitset.opt"
                  }
#line 354 "sparse_bitset.opt"
                else
#line 350 "sparse_bitset.opt"
                  {
#line 350 "sparse_bitset.opt"
                    MR_Word mercury__digraph__STATE_VARIABLE_Acc_30_30_25;
#line 350 "sparse_bitset.opt"
                    MR_Integer mercury__digraph__V_31_26;

#line 351 "sparse_bitset.opt"
                    {
#line 351 "sparse_bitset.opt"
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_40_40, mercury__digraph__V_41_41, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__Offset_10_10, mercury__digraph__LowBits_17_22, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_30_30_25);
                    }
#line 352 "sparse_bitset.opt"
                    mercury__digraph__V_31_26 = (mercury__digraph__Offset_10_10 + mercury__digraph__HalfSize_15_19);
#line 353 "sparse_bitset.opt"
                    /* direct tailcall eliminated */
#line 353 "sparse_bitset.opt"
                    {
#line 353 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Offset_10__tmp_copy_10 = mercury__digraph__V_31_26;
#line 353 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Bits_11__tmp_copy_11 = mercury__digraph__HighBits_18_23;
#line 353 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Size_12__tmp_copy_12 = mercury__digraph__HalfSize_15_19;
#line 353 "sparse_bitset.opt"
                      MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13 = mercury__digraph__STATE_VARIABLE_Acc_30_30_25;

#line 353 "sparse_bitset.opt"
                      mercury__digraph__STATE_VARIABLE_Acc_0_19_13 = mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13;
#line 353 "sparse_bitset.opt"
                      mercury__digraph__Size_12_12 = mercury__digraph__Size_12__tmp_copy_12;
#line 353 "sparse_bitset.opt"
                      mercury__digraph__Bits_11_11 = mercury__digraph__Bits_11__tmp_copy_11;
#line 353 "sparse_bitset.opt"
                      mercury__digraph__Offset_10_10 = mercury__digraph__Offset_10__tmp_copy_10;
#line 353 "sparse_bitset.opt"
                    }
#line 353 "sparse_bitset.opt"
                    continue;
#line 350 "sparse_bitset.opt"
                  }
#line 343 "sparse_bitset.opt"
              }
#line 342 "sparse_bitset.opt"
          }
#line 327 "sparse_bitset.opt"
      }
#line 327 "sparse_bitset.opt"
      break;
#line 327 "sparse_bitset.opt"
    }
#line 52 "sparse_bitset.opt"
}

#line 52 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_38_38,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_39_39,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__Dir_8_8,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Offset_10_10,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Bits_11_11,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Size_12_12,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19_13,
#line 52 "sparse_bitset.opt"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc_20_14)
#line 52 "sparse_bitset.opt"
{
#line 327 "sparse_bitset.opt"
  while (MR_TRUE)
#line 327 "sparse_bitset.opt"
    {
#line 327 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 327 "sparse_bitset.opt"
      {
#line 327 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded = (mercury__digraph__Bits_11_11 == (MR_Integer) 0);

#line 327 "sparse_bitset.opt"
        if (mercury__digraph__succeeded)
#line 326 "sparse_bitset.opt"
          *mercury__digraph__STATE_VARIABLE_Acc_20_14 = mercury__digraph__STATE_VARIABLE_Acc_0_19_13;
#line 327 "sparse_bitset.opt"
        else
#line 342 "sparse_bitset.opt"
          {
#line 329 "sparse_bitset.opt"
            mercury__digraph__succeeded = (mercury__digraph__Size_12_12 == (MR_Integer) 1);
#line 342 "sparse_bitset.opt"
            if (mercury__digraph__succeeded)
#line 335 "sparse_bitset.opt"
              {
#line 335 "sparse_bitset.opt"
                MR_Word mercury__digraph__Elem_14_15;
#line 4018 "digraph.c"
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 4020 "digraph.c"
                MR_Box mercury__digraph__conv1_Elem_14_15;

#line 4023 "digraph.c"
                {
#line 4025 "digraph.c"
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__Offset_10_10)), &mercury__digraph__conv1_Elem_14_15);
                }
#line 4028 "digraph.c"
                if (mercury__digraph__succeeded)
#line 4030 "digraph.c"
                  {
#line 4032 "digraph.c"
                    mercury__digraph__Elem_14_15 = ((MR_Word) mercury__digraph__conv1_Elem_14_15);
#line 4034 "digraph.c"
                    mercury__digraph__succeeded = MR_TRUE;
#line 4036 "digraph.c"
                  }
#line 335 "sparse_bitset.opt"
                if (mercury__digraph__succeeded)
#line 334 "sparse_bitset.opt"
                  {
#line 334 "sparse_bitset.opt"
                    mercury__digraph__IntroducedFrom__pred__add_cartesian_product__1084__1_5_p_0(mercury__digraph__V_38_38, mercury__digraph__V_39_39, mercury__digraph__Elem_14_15, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, mercury__digraph__STATE_VARIABLE_Acc_20_14);
#line 334 "sparse_bitset.opt"
                    return;
                  }
#line 335 "sparse_bitset.opt"
                else
#line 336 "sparse_bitset.opt"
                  {
#line 339 "sparse_bitset.opt"
                    {
#line 339 "sparse_bitset.opt"
                      mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold_bits\'/7", (MR_String) "\140enum.from_int/1\' failed");
#line 339 "sparse_bitset.opt"
                      return;
                    }
#line 336 "sparse_bitset.opt"
                  }
#line 335 "sparse_bitset.opt"
              }
#line 342 "sparse_bitset.opt"
            else
#line 343 "sparse_bitset.opt"
              {
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__HalfSize_15_19 = (mercury__digraph__Size_12_12 >> (MR_Integer) 1);
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__Mask_16_21;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__LowBits_17_22;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__HighBits_18_23;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_26_24;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_4_42 = ((MR_Integer) -1 << mercury__digraph__HalfSize_15_19);

#line 513 "sparse_bitset.opt"
                mercury__digraph__Mask_16_21 = ~(mercury__digraph__V_4_42);
#line 346 "sparse_bitset.opt"
                mercury__digraph__LowBits_17_22 = (mercury__digraph__Mask_16_21 & mercury__digraph__Bits_11_11);
#line 348 "sparse_bitset.opt"
                mercury__digraph__V_26_24 = (mercury__digraph__Bits_11_11 >> mercury__digraph__HalfSize_15_19);
#line 347 "sparse_bitset.opt"
                mercury__digraph__HighBits_18_23 = (mercury__digraph__Mask_16_21 & mercury__digraph__V_26_24);
#line 354 "sparse_bitset.opt"
                if ((mercury__digraph__Dir_8_8 == (MR_Integer) 1))
#line 355 "sparse_bitset.opt"
                  {
#line 355 "sparse_bitset.opt"
                    MR_Integer mercury__digraph__V_27_27 = (mercury__digraph__Offset_10_10 + mercury__digraph__HalfSize_15_19);
#line 355 "sparse_bitset.opt"
                    MR_Word mercury__digraph__STATE_VARIABLE_Acc_28_28_28;

#line 357 "sparse_bitset.opt"
                    {
#line 357 "sparse_bitset.opt"
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_38_38, mercury__digraph__V_39_39, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__V_27_27, mercury__digraph__HighBits_18_23, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_28_28_28);
                    }
#line 358 "sparse_bitset.opt"
                    /* direct tailcall eliminated */
#line 358 "sparse_bitset.opt"
                    {
#line 358 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Bits_11__tmp_copy_11 = mercury__digraph__LowBits_17_22;
#line 358 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Size_12__tmp_copy_12 = mercury__digraph__HalfSize_15_19;
#line 358 "sparse_bitset.opt"
                      MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13 = mercury__digraph__STATE_VARIABLE_Acc_28_28_28;

#line 358 "sparse_bitset.opt"
                      mercury__digraph__STATE_VARIABLE_Acc_0_19_13 = mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13;
#line 358 "sparse_bitset.opt"
                      mercury__digraph__Size_12_12 = mercury__digraph__Size_12__tmp_copy_12;
#line 358 "sparse_bitset.opt"
                      mercury__digraph__Bits_11_11 = mercury__digraph__Bits_11__tmp_copy_11;
#line 358 "sparse_bitset.opt"
                    }
#line 358 "sparse_bitset.opt"
                    continue;
#line 355 "sparse_bitset.opt"
                  }
#line 354 "sparse_bitset.opt"
                else
#line 350 "sparse_bitset.opt"
                  {
#line 350 "sparse_bitset.opt"
                    MR_Word mercury__digraph__STATE_VARIABLE_Acc_30_30_25;
#line 350 "sparse_bitset.opt"
                    MR_Integer mercury__digraph__V_31_26;

#line 351 "sparse_bitset.opt"
                    {
#line 351 "sparse_bitset.opt"
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_38_38, mercury__digraph__V_39_39, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__Offset_10_10, mercury__digraph__LowBits_17_22, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_30_30_25);
                    }
#line 352 "sparse_bitset.opt"
                    mercury__digraph__V_31_26 = (mercury__digraph__Offset_10_10 + mercury__digraph__HalfSize_15_19);
#line 353 "sparse_bitset.opt"
                    /* direct tailcall eliminated */
#line 353 "sparse_bitset.opt"
                    {
#line 353 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Offset_10__tmp_copy_10 = mercury__digraph__V_31_26;
#line 353 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Bits_11__tmp_copy_11 = mercury__digraph__HighBits_18_23;
#line 353 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Size_12__tmp_copy_12 = mercury__digraph__HalfSize_15_19;
#line 353 "sparse_bitset.opt"
                      MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13 = mercury__digraph__STATE_VARIABLE_Acc_30_30_25;

#line 353 "sparse_bitset.opt"
                      mercury__digraph__STATE_VARIABLE_Acc_0_19_13 = mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13;
#line 353 "sparse_bitset.opt"
                      mercury__digraph__Size_12_12 = mercury__digraph__Size_12__tmp_copy_12;
#line 353 "sparse_bitset.opt"
                      mercury__digraph__Bits_11_11 = mercury__digraph__Bits_11__tmp_copy_11;
#line 353 "sparse_bitset.opt"
                      mercury__digraph__Offset_10_10 = mercury__digraph__Offset_10__tmp_copy_10;
#line 353 "sparse_bitset.opt"
                    }
#line 353 "sparse_bitset.opt"
                    continue;
#line 350 "sparse_bitset.opt"
                  }
#line 343 "sparse_bitset.opt"
              }
#line 342 "sparse_bitset.opt"
          }
#line 327 "sparse_bitset.opt"
      }
#line 327 "sparse_bitset.opt"
      break;
#line 327 "sparse_bitset.opt"
    }
#line 52 "sparse_bitset.opt"
}

#line 52 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_56_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__Dir_8_8,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Offset_10_10,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Bits_11_11,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Size_12_12,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19_13,
#line 52 "sparse_bitset.opt"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc_20_14)
#line 52 "sparse_bitset.opt"
{
#line 327 "sparse_bitset.opt"
  while (MR_TRUE)
#line 327 "sparse_bitset.opt"
    {
#line 327 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 327 "sparse_bitset.opt"
      {
#line 327 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded = (mercury__digraph__Bits_11_11 == (MR_Integer) 0);

#line 327 "sparse_bitset.opt"
        if (mercury__digraph__succeeded)
#line 326 "sparse_bitset.opt"
          *mercury__digraph__STATE_VARIABLE_Acc_20_14 = mercury__digraph__STATE_VARIABLE_Acc_0_19_13;
#line 327 "sparse_bitset.opt"
        else
#line 342 "sparse_bitset.opt"
          {
#line 329 "sparse_bitset.opt"
            mercury__digraph__succeeded = (mercury__digraph__Size_12_12 == (MR_Integer) 1);
#line 342 "sparse_bitset.opt"
            if (mercury__digraph__succeeded)
#line 335 "sparse_bitset.opt"
              {
#line 335 "sparse_bitset.opt"
                MR_Box mercury__digraph__Elem_14_15;
#line 4226 "digraph.c"
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));

#line 4229 "digraph.c"
                {
#line 4231 "digraph.c"
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__Offset_10_10)), &mercury__digraph__Elem_14_15);
                }
#line 335 "sparse_bitset.opt"
                if (mercury__digraph__succeeded)
#line 142 "sparse_bitset.opt"
                  {
#line 142 "sparse_bitset.opt"
                    MR_Word base;
#line 142 "sparse_bitset.opt"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 142 "sparse_bitset.opt"
                    *mercury__digraph__STATE_VARIABLE_Acc_20_14 = base;
#line 142 "sparse_bitset.opt"
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__digraph__Elem_14_15;
#line 142 "sparse_bitset.opt"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__digraph__STATE_VARIABLE_Acc_0_19_13));
#line 142 "sparse_bitset.opt"
                  }
#line 335 "sparse_bitset.opt"
                else
#line 336 "sparse_bitset.opt"
                  {
#line 339 "sparse_bitset.opt"
                    {
#line 339 "sparse_bitset.opt"
                      mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold_bits\'/7", (MR_String) "\140enum.from_int/1\' failed");
#line 339 "sparse_bitset.opt"
                      return;
                    }
#line 336 "sparse_bitset.opt"
                  }
#line 335 "sparse_bitset.opt"
              }
#line 342 "sparse_bitset.opt"
            else
#line 343 "sparse_bitset.opt"
              {
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__HalfSize_15_19 = (mercury__digraph__Size_12_12 >> (MR_Integer) 1);
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__Mask_16_21;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__LowBits_17_22;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__HighBits_18_23;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_26_24;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_4_79 = ((MR_Integer) -1 << mercury__digraph__HalfSize_15_19);

#line 513 "sparse_bitset.opt"
                mercury__digraph__Mask_16_21 = ~(mercury__digraph__V_4_79);
#line 346 "sparse_bitset.opt"
                mercury__digraph__LowBits_17_22 = (mercury__digraph__Mask_16_21 & mercury__digraph__Bits_11_11);
#line 348 "sparse_bitset.opt"
                mercury__digraph__V_26_24 = (mercury__digraph__Bits_11_11 >> mercury__digraph__HalfSize_15_19);
#line 347 "sparse_bitset.opt"
                mercury__digraph__HighBits_18_23 = (mercury__digraph__Mask_16_21 & mercury__digraph__V_26_24);
#line 354 "sparse_bitset.opt"
                if ((mercury__digraph__Dir_8_8 == (MR_Integer) 1))
#line 355 "sparse_bitset.opt"
                  {
#line 355 "sparse_bitset.opt"
                    MR_Integer mercury__digraph__V_27_27 = (mercury__digraph__Offset_10_10 + mercury__digraph__HalfSize_15_19);
#line 355 "sparse_bitset.opt"
                    MR_Word mercury__digraph__STATE_VARIABLE_Acc_28_28_28;

#line 357 "sparse_bitset.opt"
                    {
#line 357 "sparse_bitset.opt"
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_56_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__V_27_27, mercury__digraph__HighBits_18_23, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_28_28_28);
                    }
#line 358 "sparse_bitset.opt"
                    /* direct tailcall eliminated */
#line 358 "sparse_bitset.opt"
                    {
#line 358 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Bits_11__tmp_copy_11 = mercury__digraph__LowBits_17_22;
#line 358 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Size_12__tmp_copy_12 = mercury__digraph__HalfSize_15_19;
#line 358 "sparse_bitset.opt"
                      MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13 = mercury__digraph__STATE_VARIABLE_Acc_28_28_28;

#line 358 "sparse_bitset.opt"
                      mercury__digraph__STATE_VARIABLE_Acc_0_19_13 = mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13;
#line 358 "sparse_bitset.opt"
                      mercury__digraph__Size_12_12 = mercury__digraph__Size_12__tmp_copy_12;
#line 358 "sparse_bitset.opt"
                      mercury__digraph__Bits_11_11 = mercury__digraph__Bits_11__tmp_copy_11;
#line 358 "sparse_bitset.opt"
                    }
#line 358 "sparse_bitset.opt"
                    continue;
#line 355 "sparse_bitset.opt"
                  }
#line 354 "sparse_bitset.opt"
                else
#line 350 "sparse_bitset.opt"
                  {
#line 350 "sparse_bitset.opt"
                    MR_Word mercury__digraph__STATE_VARIABLE_Acc_30_30_25;
#line 350 "sparse_bitset.opt"
                    MR_Integer mercury__digraph__V_31_26;

#line 351 "sparse_bitset.opt"
                    {
#line 351 "sparse_bitset.opt"
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_56_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__Offset_10_10, mercury__digraph__LowBits_17_22, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_30_30_25);
                    }
#line 352 "sparse_bitset.opt"
                    mercury__digraph__V_31_26 = (mercury__digraph__Offset_10_10 + mercury__digraph__HalfSize_15_19);
#line 353 "sparse_bitset.opt"
                    /* direct tailcall eliminated */
#line 353 "sparse_bitset.opt"
                    {
#line 353 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Offset_10__tmp_copy_10 = mercury__digraph__V_31_26;
#line 353 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Bits_11__tmp_copy_11 = mercury__digraph__HighBits_18_23;
#line 353 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Size_12__tmp_copy_12 = mercury__digraph__HalfSize_15_19;
#line 353 "sparse_bitset.opt"
                      MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13 = mercury__digraph__STATE_VARIABLE_Acc_30_30_25;

#line 353 "sparse_bitset.opt"
                      mercury__digraph__STATE_VARIABLE_Acc_0_19_13 = mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13;
#line 353 "sparse_bitset.opt"
                      mercury__digraph__Size_12_12 = mercury__digraph__Size_12__tmp_copy_12;
#line 353 "sparse_bitset.opt"
                      mercury__digraph__Bits_11_11 = mercury__digraph__Bits_11__tmp_copy_11;
#line 353 "sparse_bitset.opt"
                      mercury__digraph__Offset_10_10 = mercury__digraph__Offset_10__tmp_copy_10;
#line 353 "sparse_bitset.opt"
                    }
#line 353 "sparse_bitset.opt"
                    continue;
#line 350 "sparse_bitset.opt"
                  }
#line 343 "sparse_bitset.opt"
              }
#line 342 "sparse_bitset.opt"
          }
#line 327 "sparse_bitset.opt"
      }
#line 327 "sparse_bitset.opt"
      break;
#line 327 "sparse_bitset.opt"
    }
#line 52 "sparse_bitset.opt"
}

#line 52 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_56_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_38_38,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_39_39,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_29,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__Dir_8_8,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Offset_10_10,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Bits_11_11,
#line 52 "sparse_bitset.opt"
  MR_Integer mercury__digraph__Size_12_12,
#line 52 "sparse_bitset.opt"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19_13,
#line 52 "sparse_bitset.opt"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc_20_14)
#line 52 "sparse_bitset.opt"
{
#line 327 "sparse_bitset.opt"
  while (MR_TRUE)
#line 327 "sparse_bitset.opt"
    {
#line 327 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 327 "sparse_bitset.opt"
      {
#line 327 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded = (mercury__digraph__Bits_11_11 == (MR_Integer) 0);

#line 327 "sparse_bitset.opt"
        if (mercury__digraph__succeeded)
#line 326 "sparse_bitset.opt"
          *mercury__digraph__STATE_VARIABLE_Acc_20_14 = mercury__digraph__STATE_VARIABLE_Acc_0_19_13;
#line 327 "sparse_bitset.opt"
        else
#line 342 "sparse_bitset.opt"
          {
#line 329 "sparse_bitset.opt"
            mercury__digraph__succeeded = (mercury__digraph__Size_12_12 == (MR_Integer) 1);
#line 342 "sparse_bitset.opt"
            if (mercury__digraph__succeeded)
#line 335 "sparse_bitset.opt"
              {
#line 335 "sparse_bitset.opt"
                MR_Word mercury__digraph__Elem_14_15;
#line 4433 "digraph.c"
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 4435 "digraph.c"
                MR_Box mercury__digraph__conv1_Elem_14_15;

#line 4438 "digraph.c"
                {
#line 4440 "digraph.c"
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__Offset_10_10)), &mercury__digraph__conv1_Elem_14_15);
                }
#line 4443 "digraph.c"
                if (mercury__digraph__succeeded)
#line 4445 "digraph.c"
                  {
#line 4447 "digraph.c"
                    mercury__digraph__Elem_14_15 = ((MR_Word) mercury__digraph__conv1_Elem_14_15);
#line 4449 "digraph.c"
                    mercury__digraph__succeeded = MR_TRUE;
#line 4451 "digraph.c"
                  }
#line 335 "sparse_bitset.opt"
                if (mercury__digraph__succeeded)
#line 334 "sparse_bitset.opt"
                  {
#line 334 "sparse_bitset.opt"
                    mercury__digraph__add_edge_4_p_0(mercury__digraph__V_38_38, mercury__digraph__V_39_39, mercury__digraph__Elem_14_15, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, mercury__digraph__STATE_VARIABLE_Acc_20_14);
#line 334 "sparse_bitset.opt"
                    return;
                  }
#line 335 "sparse_bitset.opt"
                else
#line 336 "sparse_bitset.opt"
                  {
#line 339 "sparse_bitset.opt"
                    {
#line 339 "sparse_bitset.opt"
                      mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold_bits\'/7", (MR_String) "\140enum.from_int/1\' failed");
#line 339 "sparse_bitset.opt"
                      return;
                    }
#line 336 "sparse_bitset.opt"
                  }
#line 335 "sparse_bitset.opt"
              }
#line 342 "sparse_bitset.opt"
            else
#line 343 "sparse_bitset.opt"
              {
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__HalfSize_15_19 = (mercury__digraph__Size_12_12 >> (MR_Integer) 1);
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__Mask_16_21;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__LowBits_17_22;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__HighBits_18_23;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_26_24;
#line 343 "sparse_bitset.opt"
                MR_Integer mercury__digraph__V_4_42 = ((MR_Integer) -1 << mercury__digraph__HalfSize_15_19);

#line 513 "sparse_bitset.opt"
                mercury__digraph__Mask_16_21 = ~(mercury__digraph__V_4_42);
#line 346 "sparse_bitset.opt"
                mercury__digraph__LowBits_17_22 = (mercury__digraph__Mask_16_21 & mercury__digraph__Bits_11_11);
#line 348 "sparse_bitset.opt"
                mercury__digraph__V_26_24 = (mercury__digraph__Bits_11_11 >> mercury__digraph__HalfSize_15_19);
#line 347 "sparse_bitset.opt"
                mercury__digraph__HighBits_18_23 = (mercury__digraph__Mask_16_21 & mercury__digraph__V_26_24);
#line 354 "sparse_bitset.opt"
                if ((mercury__digraph__Dir_8_8 == (MR_Integer) 1))
#line 355 "sparse_bitset.opt"
                  {
#line 355 "sparse_bitset.opt"
                    MR_Integer mercury__digraph__V_27_27 = (mercury__digraph__Offset_10_10 + mercury__digraph__HalfSize_15_19);
#line 355 "sparse_bitset.opt"
                    MR_Word mercury__digraph__STATE_VARIABLE_Acc_28_28_28;

#line 357 "sparse_bitset.opt"
                    {
#line 357 "sparse_bitset.opt"
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_56_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_38_38, mercury__digraph__V_39_39, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__V_27_27, mercury__digraph__HighBits_18_23, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_28_28_28);
                    }
#line 358 "sparse_bitset.opt"
                    /* direct tailcall eliminated */
#line 358 "sparse_bitset.opt"
                    {
#line 358 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Bits_11__tmp_copy_11 = mercury__digraph__LowBits_17_22;
#line 358 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Size_12__tmp_copy_12 = mercury__digraph__HalfSize_15_19;
#line 358 "sparse_bitset.opt"
                      MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13 = mercury__digraph__STATE_VARIABLE_Acc_28_28_28;

#line 358 "sparse_bitset.opt"
                      mercury__digraph__STATE_VARIABLE_Acc_0_19_13 = mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13;
#line 358 "sparse_bitset.opt"
                      mercury__digraph__Size_12_12 = mercury__digraph__Size_12__tmp_copy_12;
#line 358 "sparse_bitset.opt"
                      mercury__digraph__Bits_11_11 = mercury__digraph__Bits_11__tmp_copy_11;
#line 358 "sparse_bitset.opt"
                    }
#line 358 "sparse_bitset.opt"
                    continue;
#line 355 "sparse_bitset.opt"
                  }
#line 354 "sparse_bitset.opt"
                else
#line 350 "sparse_bitset.opt"
                  {
#line 350 "sparse_bitset.opt"
                    MR_Word mercury__digraph__STATE_VARIABLE_Acc_30_30_25;
#line 350 "sparse_bitset.opt"
                    MR_Integer mercury__digraph__V_31_26;

#line 351 "sparse_bitset.opt"
                    {
#line 351 "sparse_bitset.opt"
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_56_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_38_38, mercury__digraph__V_39_39, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__Offset_10_10, mercury__digraph__LowBits_17_22, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_30_30_25);
                    }
#line 352 "sparse_bitset.opt"
                    mercury__digraph__V_31_26 = (mercury__digraph__Offset_10_10 + mercury__digraph__HalfSize_15_19);
#line 353 "sparse_bitset.opt"
                    /* direct tailcall eliminated */
#line 353 "sparse_bitset.opt"
                    {
#line 353 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Offset_10__tmp_copy_10 = mercury__digraph__V_31_26;
#line 353 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Bits_11__tmp_copy_11 = mercury__digraph__HighBits_18_23;
#line 353 "sparse_bitset.opt"
                      MR_Integer mercury__digraph__Size_12__tmp_copy_12 = mercury__digraph__HalfSize_15_19;
#line 353 "sparse_bitset.opt"
                      MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13 = mercury__digraph__STATE_VARIABLE_Acc_30_30_25;

#line 353 "sparse_bitset.opt"
                      mercury__digraph__STATE_VARIABLE_Acc_0_19_13 = mercury__digraph__STATE_VARIABLE_Acc_0_19__tmp_copy_13;
#line 353 "sparse_bitset.opt"
                      mercury__digraph__Size_12_12 = mercury__digraph__Size_12__tmp_copy_12;
#line 353 "sparse_bitset.opt"
                      mercury__digraph__Bits_11_11 = mercury__digraph__Bits_11__tmp_copy_11;
#line 353 "sparse_bitset.opt"
                      mercury__digraph__Offset_10_10 = mercury__digraph__Offset_10__tmp_copy_10;
#line 353 "sparse_bitset.opt"
                    }
#line 353 "sparse_bitset.opt"
                    continue;
#line 350 "sparse_bitset.opt"
                  }
#line 343 "sparse_bitset.opt"
              }
#line 342 "sparse_bitset.opt"
          }
#line 327 "sparse_bitset.opt"
      }
#line 327 "sparse_bitset.opt"
      break;
#line 327 "sparse_bitset.opt"
    }
#line 52 "sparse_bitset.opt"
}

#line 13 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_29_29,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_30_30,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 13 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4)
#line 13 "sparse_bitset.opt"
{
#line 284 "sparse_bitset.opt"
  while (MR_TRUE)
#line 284 "sparse_bitset.opt"
    {
#line 284 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 284 "sparse_bitset.opt"
      {
#line 284 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded;

#line 284 "sparse_bitset.opt"
        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 284 "sparse_bitset.opt"
          *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 284 "sparse_bitset.opt"
        else
#line 286 "sparse_bitset.opt"
          {
#line 286 "sparse_bitset.opt"
            MR_Word mercury__digraph__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 286 "sparse_bitset.opt"
            MR_Word mercury__digraph__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_22_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__H_10_9, (MR_Integer) 0)));
#line 286 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__H_10_9, (MR_Integer) 1)));
#line 286 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_18_18;
#line 286 "sparse_bitset.opt"
            MR_Word mercury__digraph__STATE_VARIABLE_Acc_19_19_19;

#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 4655 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_18_18  = Bits;
#line 171 "int.opt"
}
#line 291 "sparse_bitset.opt"
            {
#line 291 "sparse_bitset.opt"
              mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_56_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_29_29, mercury__digraph__V_30_30, mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 0, mercury__digraph__V_22_16, mercury__digraph__V_17_17, mercury__digraph__V_18_18, mercury__digraph__HeadVar__3_3, &mercury__digraph__STATE_VARIABLE_Acc_19_19_19);
            }
#line 292 "sparse_bitset.opt"
            /* direct tailcall eliminated */
#line 292 "sparse_bitset.opt"
            {
#line 292 "sparse_bitset.opt"
              MR_Word mercury__digraph__HeadVar__2__tmp_copy_2 = mercury__digraph__T_11_10;
#line 292 "sparse_bitset.opt"
              MR_Word mercury__digraph__HeadVar__3__tmp_copy_3 = mercury__digraph__STATE_VARIABLE_Acc_19_19_19;

#line 292 "sparse_bitset.opt"
              mercury__digraph__HeadVar__3_3 = mercury__digraph__HeadVar__3__tmp_copy_3;
#line 292 "sparse_bitset.opt"
              mercury__digraph__HeadVar__2_2 = mercury__digraph__HeadVar__2__tmp_copy_2;
#line 292 "sparse_bitset.opt"
            }
#line 292 "sparse_bitset.opt"
            continue;
#line 286 "sparse_bitset.opt"
          }
#line 284 "sparse_bitset.opt"
      }
#line 284 "sparse_bitset.opt"
      break;
#line 284 "sparse_bitset.opt"
    }
#line 13 "sparse_bitset.opt"
}

#line 33 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
#line 33 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 33 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 33 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 33 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4)
#line 33 "sparse_bitset.opt"
{
#line 303 "sparse_bitset.opt"
  {
#line 303 "sparse_bitset.opt"
    MR_bool mercury__digraph__succeeded;

#line 303 "sparse_bitset.opt"
    if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 303 "sparse_bitset.opt"
      *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 303 "sparse_bitset.opt"
    else
#line 305 "sparse_bitset.opt"
      {
#line 305 "sparse_bitset.opt"
        MR_Word mercury__digraph__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 305 "sparse_bitset.opt"
        MR_Word mercury__digraph__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 305 "sparse_bitset.opt"
        MR_Word mercury__digraph__STATE_VARIABLE_Acc_15_15_13;
#line 305 "sparse_bitset.opt"
        MR_Integer mercury__digraph__V_22_17;
#line 305 "sparse_bitset.opt"
        MR_Integer mercury__digraph__V_18_18;
#line 305 "sparse_bitset.opt"
        MR_Integer mercury__digraph__V_19_19;

#line 306 "sparse_bitset.opt"
        {
#line 306 "sparse_bitset.opt"
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeClassInfo_for_enum_20, mercury__digraph__T_11_10, mercury__digraph__HeadVar__3_3, &mercury__digraph__STATE_VARIABLE_Acc_15_15_13);
        }
#line 308 "sparse_bitset.opt"
        mercury__digraph__V_22_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__H_10_9, (MR_Integer) 0)));
#line 308 "sparse_bitset.opt"
        mercury__digraph__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__H_10_9, (MR_Integer) 1)));
#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 4754 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_19_19  = Bits;
#line 171 "int.opt"
}
#line 311 "sparse_bitset.opt"
        {
#line 311 "sparse_bitset.opt"
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_56_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 1, mercury__digraph__V_22_17, mercury__digraph__V_18_18, mercury__digraph__V_19_19, mercury__digraph__STATE_VARIABLE_Acc_15_15_13, mercury__digraph__HeadVar__4_4);
#line 311 "sparse_bitset.opt"
          return;
        }
#line 305 "sparse_bitset.opt"
      }
#line 303 "sparse_bitset.opt"
  }
#line 33 "sparse_bitset.opt"
}

#line 13 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_29_29,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_30_30,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 13 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4)
#line 13 "sparse_bitset.opt"
{
#line 284 "sparse_bitset.opt"
  while (MR_TRUE)
#line 284 "sparse_bitset.opt"
    {
#line 284 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 284 "sparse_bitset.opt"
      {
#line 284 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded;

#line 284 "sparse_bitset.opt"
        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 284 "sparse_bitset.opt"
          *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 284 "sparse_bitset.opt"
        else
#line 286 "sparse_bitset.opt"
          {
#line 286 "sparse_bitset.opt"
            MR_Word mercury__digraph__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 286 "sparse_bitset.opt"
            MR_Word mercury__digraph__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_22_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__H_10_9, (MR_Integer) 0)));
#line 286 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__H_10_9, (MR_Integer) 1)));
#line 286 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_18_18;
#line 286 "sparse_bitset.opt"
            MR_Word mercury__digraph__STATE_VARIABLE_Acc_19_19_19;

#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 4835 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_18_18  = Bits;
#line 171 "int.opt"
}
#line 291 "sparse_bitset.opt"
            {
#line 291 "sparse_bitset.opt"
              mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_29_29, mercury__digraph__V_30_30, mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 0, mercury__digraph__V_22_16, mercury__digraph__V_17_17, mercury__digraph__V_18_18, mercury__digraph__HeadVar__3_3, &mercury__digraph__STATE_VARIABLE_Acc_19_19_19);
            }
#line 292 "sparse_bitset.opt"
            /* direct tailcall eliminated */
#line 292 "sparse_bitset.opt"
            {
#line 292 "sparse_bitset.opt"
              MR_Word mercury__digraph__HeadVar__2__tmp_copy_2 = mercury__digraph__T_11_10;
#line 292 "sparse_bitset.opt"
              MR_Word mercury__digraph__HeadVar__3__tmp_copy_3 = mercury__digraph__STATE_VARIABLE_Acc_19_19_19;

#line 292 "sparse_bitset.opt"
              mercury__digraph__HeadVar__3_3 = mercury__digraph__HeadVar__3__tmp_copy_3;
#line 292 "sparse_bitset.opt"
              mercury__digraph__HeadVar__2_2 = mercury__digraph__HeadVar__2__tmp_copy_2;
#line 292 "sparse_bitset.opt"
            }
#line 292 "sparse_bitset.opt"
            continue;
#line 286 "sparse_bitset.opt"
          }
#line 284 "sparse_bitset.opt"
      }
#line 284 "sparse_bitset.opt"
      break;
#line 284 "sparse_bitset.opt"
    }
#line 13 "sparse_bitset.opt"
}

#line 13 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_31_31,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_32_32,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 13 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4)
#line 13 "sparse_bitset.opt"
{
#line 284 "sparse_bitset.opt"
  while (MR_TRUE)
#line 284 "sparse_bitset.opt"
    {
#line 284 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 284 "sparse_bitset.opt"
      {
#line 284 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded;

#line 284 "sparse_bitset.opt"
        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 284 "sparse_bitset.opt"
          *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 284 "sparse_bitset.opt"
        else
#line 286 "sparse_bitset.opt"
          {
#line 286 "sparse_bitset.opt"
            MR_Word mercury__digraph__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 286 "sparse_bitset.opt"
            MR_Word mercury__digraph__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_22_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__H_10_9, (MR_Integer) 0)));
#line 286 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__H_10_9, (MR_Integer) 1)));
#line 286 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_18_18;
#line 286 "sparse_bitset.opt"
            MR_Word mercury__digraph__STATE_VARIABLE_Acc_19_19_19;

#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 4935 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_18_18  = Bits;
#line 171 "int.opt"
}
#line 291 "sparse_bitset.opt"
            {
#line 291 "sparse_bitset.opt"
              mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_31_31, mercury__digraph__V_32_32, mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 0, mercury__digraph__V_22_16, mercury__digraph__V_17_17, mercury__digraph__V_18_18, mercury__digraph__HeadVar__3_3, &mercury__digraph__STATE_VARIABLE_Acc_19_19_19);
            }
#line 292 "sparse_bitset.opt"
            /* direct tailcall eliminated */
#line 292 "sparse_bitset.opt"
            {
#line 292 "sparse_bitset.opt"
              MR_Word mercury__digraph__HeadVar__2__tmp_copy_2 = mercury__digraph__T_11_10;
#line 292 "sparse_bitset.opt"
              MR_Word mercury__digraph__HeadVar__3__tmp_copy_3 = mercury__digraph__STATE_VARIABLE_Acc_19_19_19;

#line 292 "sparse_bitset.opt"
              mercury__digraph__HeadVar__3_3 = mercury__digraph__HeadVar__3__tmp_copy_3;
#line 292 "sparse_bitset.opt"
              mercury__digraph__HeadVar__2_2 = mercury__digraph__HeadVar__2__tmp_copy_2;
#line 292 "sparse_bitset.opt"
            }
#line 292 "sparse_bitset.opt"
            continue;
#line 286 "sparse_bitset.opt"
          }
#line 284 "sparse_bitset.opt"
      }
#line 284 "sparse_bitset.opt"
      break;
#line 284 "sparse_bitset.opt"
    }
#line 13 "sparse_bitset.opt"
}

#line 14 "sparse_bitset.opt"
static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(
#line 14 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_31_31,
#line 14 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_32_32,
#line 14 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_33_33,
#line 14 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 14 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 14 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 14 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4)
#line 14 "sparse_bitset.opt"
{
#line 284 "sparse_bitset.opt"
  while (MR_TRUE)
#line 284 "sparse_bitset.opt"
    {
#line 284 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 284 "sparse_bitset.opt"
      {
#line 284 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded;

#line 284 "sparse_bitset.opt"
        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 284 "sparse_bitset.opt"
          {
#line 284 "sparse_bitset.opt"
            *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 284 "sparse_bitset.opt"
            mercury__digraph__succeeded = MR_TRUE;
#line 284 "sparse_bitset.opt"
          }
#line 284 "sparse_bitset.opt"
        else
#line 286 "sparse_bitset.opt"
          {
#line 286 "sparse_bitset.opt"
            MR_Word mercury__digraph__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 286 "sparse_bitset.opt"
            MR_Word mercury__digraph__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_22_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__H_10_9, (MR_Integer) 0)));
#line 286 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__H_10_9, (MR_Integer) 1)));
#line 286 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_18_18;
#line 286 "sparse_bitset.opt"
            MR_Word mercury__digraph__STATE_VARIABLE_Acc_19_19_19;

#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 5043 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_18_18  = Bits;
#line 171 "int.opt"
}
#line 291 "sparse_bitset.opt"
            {
#line 291 "sparse_bitset.opt"
              mercury__digraph__succeeded = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_50_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_31_31, mercury__digraph__V_32_32, mercury__digraph__V_33_33, mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 0, mercury__digraph__V_22_16, mercury__digraph__V_17_17, mercury__digraph__V_18_18, mercury__digraph__HeadVar__3_3, &mercury__digraph__STATE_VARIABLE_Acc_19_19_19);
            }
#line 286 "sparse_bitset.opt"
            if (mercury__digraph__succeeded)
#line 292 "sparse_bitset.opt"
              {
#line 292 "sparse_bitset.opt"
                /* direct tailcall eliminated */
#line 292 "sparse_bitset.opt"
                {
#line 292 "sparse_bitset.opt"
                  MR_Word mercury__digraph__HeadVar__2__tmp_copy_2 = mercury__digraph__T_11_10;
#line 292 "sparse_bitset.opt"
                  MR_Word mercury__digraph__HeadVar__3__tmp_copy_3 = mercury__digraph__STATE_VARIABLE_Acc_19_19_19;

#line 292 "sparse_bitset.opt"
                  mercury__digraph__HeadVar__3_3 = mercury__digraph__HeadVar__3__tmp_copy_3;
#line 292 "sparse_bitset.opt"
                  mercury__digraph__HeadVar__2_2 = mercury__digraph__HeadVar__2__tmp_copy_2;
#line 292 "sparse_bitset.opt"
                }
#line 292 "sparse_bitset.opt"
                continue;
#line 292 "sparse_bitset.opt"
              }
#line 286 "sparse_bitset.opt"
          }
#line 284 "sparse_bitset.opt"
        return mercury__digraph__succeeded;
#line 284 "sparse_bitset.opt"
      }
#line 284 "sparse_bitset.opt"
      break;
#line 284 "sparse_bitset.opt"
    }
#line 14 "sparse_bitset.opt"
}

#line 13 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_31_31,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_32_32,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 13 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 13 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4)
#line 13 "sparse_bitset.opt"
{
#line 284 "sparse_bitset.opt"
  while (MR_TRUE)
#line 284 "sparse_bitset.opt"
    {
#line 284 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 284 "sparse_bitset.opt"
      {
#line 284 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded;

#line 284 "sparse_bitset.opt"
        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 284 "sparse_bitset.opt"
          *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 284 "sparse_bitset.opt"
        else
#line 286 "sparse_bitset.opt"
          {
#line 286 "sparse_bitset.opt"
            MR_Word mercury__digraph__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 286 "sparse_bitset.opt"
            MR_Word mercury__digraph__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_22_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__H_10_9, (MR_Integer) 0)));
#line 286 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__H_10_9, (MR_Integer) 1)));
#line 286 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_18_18;
#line 286 "sparse_bitset.opt"
            MR_Word mercury__digraph__STATE_VARIABLE_Acc_19_19_19;

#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 5151 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_18_18  = Bits;
#line 171 "int.opt"
}
#line 291 "sparse_bitset.opt"
            {
#line 291 "sparse_bitset.opt"
              mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_31_31, mercury__digraph__V_32_32, mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 0, mercury__digraph__V_22_16, mercury__digraph__V_17_17, mercury__digraph__V_18_18, mercury__digraph__HeadVar__3_3, &mercury__digraph__STATE_VARIABLE_Acc_19_19_19);
            }
#line 292 "sparse_bitset.opt"
            /* direct tailcall eliminated */
#line 292 "sparse_bitset.opt"
            {
#line 292 "sparse_bitset.opt"
              MR_Word mercury__digraph__HeadVar__2__tmp_copy_2 = mercury__digraph__T_11_10;
#line 292 "sparse_bitset.opt"
              MR_Word mercury__digraph__HeadVar__3__tmp_copy_3 = mercury__digraph__STATE_VARIABLE_Acc_19_19_19;

#line 292 "sparse_bitset.opt"
              mercury__digraph__HeadVar__3_3 = mercury__digraph__HeadVar__3__tmp_copy_3;
#line 292 "sparse_bitset.opt"
              mercury__digraph__HeadVar__2_2 = mercury__digraph__HeadVar__2__tmp_copy_2;
#line 292 "sparse_bitset.opt"
            }
#line 292 "sparse_bitset.opt"
            continue;
#line 286 "sparse_bitset.opt"
          }
#line 284 "sparse_bitset.opt"
      }
#line 284 "sparse_bitset.opt"
      break;
#line 284 "sparse_bitset.opt"
    }
#line 13 "sparse_bitset.opt"
}

#line 23 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_55_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(
#line 23 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_43_43,
#line 23 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_44_44,
#line 23 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_27,
#line 23 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 23 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 23 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4,
#line 23 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__5_5,
#line 23 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__6_6)
#line 23 "sparse_bitset.opt"
{
#line 293 "sparse_bitset.opt"
  while (MR_TRUE)
#line 293 "sparse_bitset.opt"
    {
#line 293 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 293 "sparse_bitset.opt"
      {
#line 293 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded;

#line 293 "sparse_bitset.opt"
        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 293 "sparse_bitset.opt"
          {
#line 293 "sparse_bitset.opt"
            *mercury__digraph__HeadVar__6_6 = mercury__digraph__HeadVar__5_5;
#line 293 "sparse_bitset.opt"
            *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 293 "sparse_bitset.opt"
          }
#line 293 "sparse_bitset.opt"
        else
#line 296 "sparse_bitset.opt"
          {
#line 296 "sparse_bitset.opt"
            MR_Word mercury__digraph__H_15_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 296 "sparse_bitset.opt"
            MR_Word mercury__digraph__T_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 296 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_32_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__H_15_13, (MR_Integer) 0)));
#line 296 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_25_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__H_15_13, (MR_Integer) 1)));
#line 296 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_26_24;
#line 296 "sparse_bitset.opt"
            MR_Word mercury__digraph__STATE_VARIABLE_Acc1_27_27_25;
#line 296 "sparse_bitset.opt"
            MR_Word mercury__digraph__STATE_VARIABLE_Acc2_28_28_26;

#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_55_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 5263 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_26_24  = Bits;
#line 171 "int.opt"
}
#line 301 "sparse_bitset.opt"
            {
#line 301 "sparse_bitset.opt"
              mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_57_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_52_93_95_48_9_p_in__sparse_bitset_0(mercury__digraph__V_43_43, mercury__digraph__V_44_44, mercury__digraph__TypeClassInfo_for_enum_27, (MR_Integer) 0, mercury__digraph__V_32_22, mercury__digraph__V_25_23, mercury__digraph__V_26_24, mercury__digraph__HeadVar__3_3, &mercury__digraph__STATE_VARIABLE_Acc1_27_27_25, mercury__digraph__HeadVar__5_5, &mercury__digraph__STATE_VARIABLE_Acc2_28_28_26);
            }
#line 302 "sparse_bitset.opt"
            /* direct tailcall eliminated */
#line 302 "sparse_bitset.opt"
            {
#line 302 "sparse_bitset.opt"
              MR_Word mercury__digraph__HeadVar__2__tmp_copy_2 = mercury__digraph__T_16_14;
#line 302 "sparse_bitset.opt"
              MR_Word mercury__digraph__HeadVar__3__tmp_copy_3 = mercury__digraph__STATE_VARIABLE_Acc1_27_27_25;
#line 302 "sparse_bitset.opt"
              MR_Word mercury__digraph__HeadVar__5__tmp_copy_5 = mercury__digraph__STATE_VARIABLE_Acc2_28_28_26;

#line 302 "sparse_bitset.opt"
              mercury__digraph__HeadVar__5_5 = mercury__digraph__HeadVar__5__tmp_copy_5;
#line 302 "sparse_bitset.opt"
              mercury__digraph__HeadVar__3_3 = mercury__digraph__HeadVar__3__tmp_copy_3;
#line 302 "sparse_bitset.opt"
              mercury__digraph__HeadVar__2_2 = mercury__digraph__HeadVar__2__tmp_copy_2;
#line 302 "sparse_bitset.opt"
            }
#line 302 "sparse_bitset.opt"
            continue;
#line 296 "sparse_bitset.opt"
          }
#line 293 "sparse_bitset.opt"
      }
#line 293 "sparse_bitset.opt"
      break;
#line 293 "sparse_bitset.opt"
    }
#line 23 "sparse_bitset.opt"
}

#line 33 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_4_p_in__sparse_bitset_0(
#line 33 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_37_37,
#line 33 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 33 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 33 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 33 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4)
#line 33 "sparse_bitset.opt"
{
#line 303 "sparse_bitset.opt"
  {
#line 303 "sparse_bitset.opt"
    MR_bool mercury__digraph__succeeded;

#line 303 "sparse_bitset.opt"
    if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 303 "sparse_bitset.opt"
      *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 303 "sparse_bitset.opt"
    else
#line 305 "sparse_bitset.opt"
      {
#line 305 "sparse_bitset.opt"
        MR_Word mercury__digraph__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 305 "sparse_bitset.opt"
        MR_Word mercury__digraph__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 305 "sparse_bitset.opt"
        MR_Word mercury__digraph__STATE_VARIABLE_Acc_15_15_13;
#line 305 "sparse_bitset.opt"
        MR_Integer mercury__digraph__V_22_17;
#line 305 "sparse_bitset.opt"
        MR_Integer mercury__digraph__V_18_18;
#line 305 "sparse_bitset.opt"
        MR_Integer mercury__digraph__V_19_19;

#line 306 "sparse_bitset.opt"
        {
#line 306 "sparse_bitset.opt"
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__V_37_37, mercury__digraph__TypeClassInfo_for_enum_20, mercury__digraph__T_11_10, mercury__digraph__HeadVar__3_3, &mercury__digraph__STATE_VARIABLE_Acc_15_15_13);
        }
#line 308 "sparse_bitset.opt"
        mercury__digraph__V_22_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__H_10_9, (MR_Integer) 0)));
#line 308 "sparse_bitset.opt"
        mercury__digraph__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__H_10_9, (MR_Integer) 1)));
#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 5368 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_19_19  = Bits;
#line 171 "int.opt"
}
#line 311 "sparse_bitset.opt"
        {
#line 311 "sparse_bitset.opt"
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_52_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_37_37, mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 1, mercury__digraph__V_22_17, mercury__digraph__V_18_18, mercury__digraph__V_19_19, mercury__digraph__STATE_VARIABLE_Acc_15_15_13, mercury__digraph__HeadVar__4_4);
#line 311 "sparse_bitset.opt"
          return;
        }
#line 305 "sparse_bitset.opt"
      }
#line 303 "sparse_bitset.opt"
  }
#line 33 "sparse_bitset.opt"
}

#line 33 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_4_p_in__sparse_bitset_0(
#line 33 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_32_32,
#line 33 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_33_33,
#line 33 "sparse_bitset.opt"
  MR_Box mercury__digraph__V_34_34,
#line 33 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_20,
#line 33 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 33 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 33 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4)
#line 33 "sparse_bitset.opt"
{
#line 303 "sparse_bitset.opt"
  {
#line 303 "sparse_bitset.opt"
    MR_bool mercury__digraph__succeeded;

#line 303 "sparse_bitset.opt"
    if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 303 "sparse_bitset.opt"
      *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 303 "sparse_bitset.opt"
    else
#line 305 "sparse_bitset.opt"
      {
#line 305 "sparse_bitset.opt"
        MR_Word mercury__digraph__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 305 "sparse_bitset.opt"
        MR_Word mercury__digraph__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 305 "sparse_bitset.opt"
        MR_Word mercury__digraph__STATE_VARIABLE_Acc_15_15_13;
#line 305 "sparse_bitset.opt"
        MR_Integer mercury__digraph__V_22_17;
#line 305 "sparse_bitset.opt"
        MR_Integer mercury__digraph__V_18_18;
#line 305 "sparse_bitset.opt"
        MR_Integer mercury__digraph__V_19_19;

#line 306 "sparse_bitset.opt"
        {
#line 306 "sparse_bitset.opt"
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__V_32_32, mercury__digraph__V_33_33, mercury__digraph__V_34_34, mercury__digraph__TypeClassInfo_for_enum_20, mercury__digraph__T_11_10, mercury__digraph__HeadVar__3_3, &mercury__digraph__STATE_VARIABLE_Acc_15_15_13);
        }
#line 308 "sparse_bitset.opt"
        mercury__digraph__V_22_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__H_10_9, (MR_Integer) 0)));
#line 308 "sparse_bitset.opt"
        mercury__digraph__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__H_10_9, (MR_Integer) 1)));
#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 5454 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_19_19  = Bits;
#line 171 "int.opt"
}
#line 311 "sparse_bitset.opt"
        {
#line 311 "sparse_bitset.opt"
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_51_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_32_32, mercury__digraph__V_33_33, mercury__digraph__V_34_34, mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 1, mercury__digraph__V_22_17, mercury__digraph__V_18_18, mercury__digraph__V_19_19, mercury__digraph__STATE_VARIABLE_Acc_15_15_13, mercury__digraph__HeadVar__4_4);
#line 311 "sparse_bitset.opt"
          return;
        }
#line 305 "sparse_bitset.opt"
      }
#line 303 "sparse_bitset.opt"
  }
#line 33 "sparse_bitset.opt"
}

#line 23 "sparse_bitset.opt"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_54_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(
#line 23 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_42_42,
#line 23 "sparse_bitset.opt"
  MR_Word mercury__digraph__V_43_43,
#line 23 "sparse_bitset.opt"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_27,
#line 23 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 23 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 23 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__4_4,
#line 23 "sparse_bitset.opt"
  MR_Word mercury__digraph__HeadVar__5_5,
#line 23 "sparse_bitset.opt"
  MR_Word * mercury__digraph__HeadVar__6_6)
#line 23 "sparse_bitset.opt"
{
#line 293 "sparse_bitset.opt"
  while (MR_TRUE)
#line 293 "sparse_bitset.opt"
    {
#line 293 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 293 "sparse_bitset.opt"
      {
#line 293 "sparse_bitset.opt"
        MR_bool mercury__digraph__succeeded;

#line 293 "sparse_bitset.opt"
        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 293 "sparse_bitset.opt"
          {
#line 293 "sparse_bitset.opt"
            *mercury__digraph__HeadVar__6_6 = mercury__digraph__HeadVar__5_5;
#line 293 "sparse_bitset.opt"
            *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 293 "sparse_bitset.opt"
          }
#line 293 "sparse_bitset.opt"
        else
#line 296 "sparse_bitset.opt"
          {
#line 296 "sparse_bitset.opt"
            MR_Word mercury__digraph__H_15_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 296 "sparse_bitset.opt"
            MR_Word mercury__digraph__T_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 296 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_32_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__H_15_13, (MR_Integer) 0)));
#line 296 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_25_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__H_15_13, (MR_Integer) 1)));
#line 296 "sparse_bitset.opt"
            MR_Integer mercury__digraph__V_26_24;
#line 296 "sparse_bitset.opt"
            MR_Word mercury__digraph__STATE_VARIABLE_Acc1_27_27_25;
#line 296 "sparse_bitset.opt"
            MR_Word mercury__digraph__STATE_VARIABLE_Acc2_28_28_26;

#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_54_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 5547 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_26_24  = Bits;
#line 171 "int.opt"
}
#line 301 "sparse_bitset.opt"
            {
#line 301 "sparse_bitset.opt"
              mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_57_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_51_93_95_48_9_p_in__sparse_bitset_0(mercury__digraph__V_42_42, mercury__digraph__V_43_43, mercury__digraph__TypeClassInfo_for_enum_27, (MR_Integer) 0, mercury__digraph__V_32_22, mercury__digraph__V_25_23, mercury__digraph__V_26_24, mercury__digraph__HeadVar__3_3, &mercury__digraph__STATE_VARIABLE_Acc1_27_27_25, mercury__digraph__HeadVar__5_5, &mercury__digraph__STATE_VARIABLE_Acc2_28_28_26);
            }
#line 302 "sparse_bitset.opt"
            /* direct tailcall eliminated */
#line 302 "sparse_bitset.opt"
            {
#line 302 "sparse_bitset.opt"
              MR_Word mercury__digraph__HeadVar__2__tmp_copy_2 = mercury__digraph__T_16_14;
#line 302 "sparse_bitset.opt"
              MR_Word mercury__digraph__HeadVar__3__tmp_copy_3 = mercury__digraph__STATE_VARIABLE_Acc1_27_27_25;
#line 302 "sparse_bitset.opt"
              MR_Word mercury__digraph__HeadVar__5__tmp_copy_5 = mercury__digraph__STATE_VARIABLE_Acc2_28_28_26;

#line 302 "sparse_bitset.opt"
              mercury__digraph__HeadVar__5_5 = mercury__digraph__HeadVar__5__tmp_copy_5;
#line 302 "sparse_bitset.opt"
              mercury__digraph__HeadVar__3_3 = mercury__digraph__HeadVar__3__tmp_copy_3;
#line 302 "sparse_bitset.opt"
              mercury__digraph__HeadVar__2_2 = mercury__digraph__HeadVar__2__tmp_copy_2;
#line 302 "sparse_bitset.opt"
            }
#line 302 "sparse_bitset.opt"
            continue;
#line 296 "sparse_bitset.opt"
          }
#line 293 "sparse_bitset.opt"
      }
#line 293 "sparse_bitset.opt"
      break;
#line 293 "sparse_bitset.opt"
    }
#line 23 "sparse_bitset.opt"
}

#line 133 "list.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_56_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__digraph__V_21_21,
#line 133 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 133 "list.int"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 133 "list.int"
  MR_Word * mercury__digraph__HeadVar__4_4)
#line 133 "list.int"
{
#line 380 "list.opt"
  while (MR_TRUE)
#line 380 "list.opt"
    {
#line 380 "list.opt"
      /* tailcall optimized into a loop */
#line 380 "list.opt"
      {
#line 380 "list.opt"
        MR_bool mercury__digraph__succeeded;

#line 380 "list.opt"
        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "list.opt"
          *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 380 "list.opt"
        else
#line 382 "list.opt"
          {
#line 382 "list.opt"
            MR_Word mercury__digraph__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 382 "list.opt"
            MR_Word mercury__digraph__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "list.opt"
            MR_Word mercury__digraph__STATE_VARIABLE_A_15_15_13;
#line 382 "list.opt"
            MR_Box mercury__digraph__VX_24 = (MR_hl_field(MR_mktag(0), mercury__digraph__H_10_9, (MR_Integer) 0));
#line 382 "list.opt"
            MR_Box mercury__digraph__VY_25 = (MR_hl_field(MR_mktag(0), mercury__digraph__H_10_9, (MR_Integer) 1));
#line 382 "list.opt"
            MR_Word mercury__digraph__X_33;
#line 382 "list.opt"
            MR_Word mercury__digraph__Y_34;
#line 382 "list.opt"
            MR_Word mercury__digraph__STATE_VARIABLE_G_12_35;
#line 382 "list.opt"
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
              mercury__digraph__add_edge_4_p_0(mercury__digraph__V_21_21, mercury__digraph__X_33, mercury__digraph__Y_34, mercury__digraph__STATE_VARIABLE_G_13_36, &mercury__digraph__STATE_VARIABLE_A_15_15_13);
            }
#line 384 "list.opt"
            /* direct tailcall eliminated */
#line 384 "list.opt"
            {
#line 384 "list.opt"
              MR_Word mercury__digraph__HeadVar__2__tmp_copy_2 = mercury__digraph__T_11_10;
#line 384 "list.opt"
              MR_Word mercury__digraph__HeadVar__3__tmp_copy_3 = mercury__digraph__STATE_VARIABLE_A_15_15_13;

#line 384 "list.opt"
              mercury__digraph__HeadVar__3_3 = mercury__digraph__HeadVar__3__tmp_copy_3;
#line 384 "list.opt"
              mercury__digraph__HeadVar__2_2 = mercury__digraph__HeadVar__2__tmp_copy_2;
#line 384 "list.opt"
            }
#line 384 "list.opt"
            continue;
#line 382 "list.opt"
          }
#line 380 "list.opt"
      }
#line 380 "list.opt"
      break;
#line 380 "list.opt"
    }
#line 133 "list.int"
}

#line 146 "list.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_54_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_6_p_in__list_0(
#line 146 "list.int"
  MR_Word mercury__digraph__V_34_34,
#line 146 "list.int"
  MR_Word mercury__digraph__V_35_35,
#line 146 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 146 "list.int"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 146 "list.int"
  MR_Word * mercury__digraph__HeadVar__4_4,
#line 146 "list.int"
  MR_Word mercury__digraph__HeadVar__5_5,
#line 146 "list.int"
  MR_Word * mercury__digraph__HeadVar__6_6)
#line 146 "list.int"
{
#line 396 "list.opt"
  while (MR_TRUE)
#line 396 "list.opt"
    {
#line 396 "list.opt"
      /* tailcall optimized into a loop */
#line 396 "list.opt"
      {
#line 396 "list.opt"
        MR_bool mercury__digraph__succeeded;

#line 396 "list.opt"
        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 396 "list.opt"
          {
#line 396 "list.opt"
            *mercury__digraph__HeadVar__6_6 = mercury__digraph__HeadVar__5_5;
#line 396 "list.opt"
            *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 396 "list.opt"
          }
#line 396 "list.opt"
        else
#line 399 "list.opt"
          {
#line 399 "list.opt"
            MR_Word mercury__digraph__H_15_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 399 "list.opt"
            MR_Word mercury__digraph__T_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 399 "list.opt"
            MR_Word mercury__digraph__STATE_VARIABLE_A_23_23_19;
#line 399 "list.opt"
            MR_Word mercury__digraph__STATE_VARIABLE_B_24_24_20;

#line 400 "list.opt"
            {
#line 400 "list.opt"
              mercury__digraph__dfs_2_6_p_0(mercury__digraph__V_34_34, mercury__digraph__V_35_35, mercury__digraph__H_15_13, mercury__digraph__HeadVar__3_3, &mercury__digraph__STATE_VARIABLE_A_23_23_19, mercury__digraph__HeadVar__5_5, &mercury__digraph__STATE_VARIABLE_B_24_24_20);
            }
#line 401 "list.opt"
            /* direct tailcall eliminated */
#line 401 "list.opt"
            {
#line 401 "list.opt"
              MR_Word mercury__digraph__HeadVar__2__tmp_copy_2 = mercury__digraph__T_16_14;
#line 401 "list.opt"
              MR_Word mercury__digraph__HeadVar__3__tmp_copy_3 = mercury__digraph__STATE_VARIABLE_A_23_23_19;
#line 401 "list.opt"
              MR_Word mercury__digraph__HeadVar__5__tmp_copy_5 = mercury__digraph__STATE_VARIABLE_B_24_24_20;

#line 401 "list.opt"
              mercury__digraph__HeadVar__5_5 = mercury__digraph__HeadVar__5__tmp_copy_5;
#line 401 "list.opt"
              mercury__digraph__HeadVar__3_3 = mercury__digraph__HeadVar__3__tmp_copy_3;
#line 401 "list.opt"
              mercury__digraph__HeadVar__2_2 = mercury__digraph__HeadVar__2__tmp_copy_2;
#line 401 "list.opt"
            }
#line 401 "list.opt"
            continue;
#line 399 "list.opt"
          }
#line 396 "list.opt"
      }
#line 396 "list.opt"
      break;
#line 396 "list.opt"
    }
#line 146 "list.int"
}

#line 133 "list.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__digraph__V_29_29,
#line 133 "list.int"
  MR_Word mercury__digraph__V_30_30,
#line 133 "list.int"
  MR_Word mercury__digraph__V_31_31,
#line 133 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 133 "list.int"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 133 "list.int"
  MR_Word * mercury__digraph__HeadVar__4_4)
#line 133 "list.int"
{
#line 380 "list.opt"
  while (MR_TRUE)
#line 380 "list.opt"
    {
#line 380 "list.opt"
      /* tailcall optimized into a loop */
#line 380 "list.opt"
      {
#line 380 "list.opt"
        MR_bool mercury__digraph__succeeded;

#line 380 "list.opt"
        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "list.opt"
          *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 380 "list.opt"
        else
#line 382 "list.opt"
          {
#line 382 "list.opt"
            MR_Word mercury__digraph__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 382 "list.opt"
            MR_Word mercury__digraph__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "list.opt"
            MR_Word mercury__digraph__STATE_VARIABLE_A_15_15_13;

#line 383 "list.opt"
            {
#line 383 "list.opt"
              mercury__digraph__add_composition_edges_5_p_0(mercury__digraph__V_29_29, mercury__digraph__V_30_30, mercury__digraph__V_31_31, mercury__digraph__H_10_9, mercury__digraph__HeadVar__3_3, &mercury__digraph__STATE_VARIABLE_A_15_15_13);
            }
#line 384 "list.opt"
            /* direct tailcall eliminated */
#line 384 "list.opt"
            {
#line 384 "list.opt"
              MR_Word mercury__digraph__HeadVar__2__tmp_copy_2 = mercury__digraph__T_11_10;
#line 384 "list.opt"
              MR_Word mercury__digraph__HeadVar__3__tmp_copy_3 = mercury__digraph__STATE_VARIABLE_A_15_15_13;

#line 384 "list.opt"
              mercury__digraph__HeadVar__3_3 = mercury__digraph__HeadVar__3__tmp_copy_3;
#line 384 "list.opt"
              mercury__digraph__HeadVar__2_2 = mercury__digraph__HeadVar__2__tmp_copy_2;
#line 384 "list.opt"
            }
#line 384 "list.opt"
            continue;
#line 382 "list.opt"
          }
#line 380 "list.opt"
      }
#line 380 "list.opt"
      break;
#line 380 "list.opt"
    }
#line 133 "list.int"
}

#line 146 "list.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_54_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_53_93_95_48_6_p_in__list_0(
#line 146 "list.int"
  MR_Word mercury__digraph__V_43_43,
#line 146 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 146 "list.int"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 146 "list.int"
  MR_Word * mercury__digraph__HeadVar__4_4,
#line 146 "list.int"
  MR_Word mercury__digraph__HeadVar__5_5,
#line 146 "list.int"
  MR_Word * mercury__digraph__HeadVar__6_6)
#line 146 "list.int"
{
#line 396 "list.opt"
  while (MR_TRUE)
#line 396 "list.opt"
    {
#line 396 "list.opt"
      /* tailcall optimized into a loop */
#line 396 "list.opt"
      {
#line 396 "list.opt"
        MR_bool mercury__digraph__succeeded;

#line 396 "list.opt"
        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 396 "list.opt"
          {
#line 396 "list.opt"
            *mercury__digraph__HeadVar__6_6 = mercury__digraph__HeadVar__5_5;
#line 396 "list.opt"
            *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 396 "list.opt"
          }
#line 396 "list.opt"
        else
#line 399 "list.opt"
          {
#line 399 "list.opt"
            MR_Word mercury__digraph__H_15_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 399 "list.opt"
            MR_Word mercury__digraph__T_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 399 "list.opt"
            MR_Word mercury__digraph__STATE_VARIABLE_A_23_23_19;
#line 399 "list.opt"
            MR_Word mercury__digraph__STATE_VARIABLE_B_24_24_20;

#line 400 "list.opt"
            {
#line 400 "list.opt"
              mercury__digraph__find_necessary_keys_5_p_0(mercury__digraph__V_43_43, mercury__digraph__H_15_13, mercury__digraph__HeadVar__3_3, &mercury__digraph__STATE_VARIABLE_A_23_23_19, mercury__digraph__HeadVar__5_5, &mercury__digraph__STATE_VARIABLE_B_24_24_20);
            }
#line 401 "list.opt"
            /* direct tailcall eliminated */
#line 401 "list.opt"
            {
#line 401 "list.opt"
              MR_Word mercury__digraph__HeadVar__2__tmp_copy_2 = mercury__digraph__T_16_14;
#line 401 "list.opt"
              MR_Word mercury__digraph__HeadVar__3__tmp_copy_3 = mercury__digraph__STATE_VARIABLE_A_23_23_19;
#line 401 "list.opt"
              MR_Word mercury__digraph__HeadVar__5__tmp_copy_5 = mercury__digraph__STATE_VARIABLE_B_24_24_20;

#line 401 "list.opt"
              mercury__digraph__HeadVar__5_5 = mercury__digraph__HeadVar__5__tmp_copy_5;
#line 401 "list.opt"
              mercury__digraph__HeadVar__3_3 = mercury__digraph__HeadVar__3__tmp_copy_3;
#line 401 "list.opt"
              mercury__digraph__HeadVar__2_2 = mercury__digraph__HeadVar__2__tmp_copy_2;
#line 401 "list.opt"
            }
#line 401 "list.opt"
            continue;
#line 399 "list.opt"
          }
#line 396 "list.opt"
      }
#line 396 "list.opt"
      break;
#line 396 "list.opt"
    }
#line 146 "list.int"
}

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__digraph__V_23_23,
#line 324 "list.int"
  MR_Word mercury__digraph__V_24_24,
#line 324 "list.int"
  MR_Word mercury__digraph__V_25_25,
#line 324 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2)
#line 324 "list.int"
{
#line 170 "list.opt"
  {
#line 170 "list.opt"
    MR_bool mercury__digraph__succeeded;
#line 170 "list.opt"
    MR_Word mercury__digraph__HeadVar__3_3;

#line 170 "list.opt"
    if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "list.opt"
      mercury__digraph__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "list.opt"
    else
#line 171 "list.opt"
      {
#line 171 "list.opt"
        MR_Box mercury__digraph__H_6_6 = (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0));
#line 171 "list.opt"
        MR_Word mercury__digraph__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "list.opt"
        MR_Word mercury__digraph__V_8_8;
#line 171 "list.opt"
        MR_Word mercury__digraph__V_9_9;
#line 171 "list.opt"
        MR_Word mercury__digraph__Xs_35;
#line 171 "list.opt"
        MR_Word mercury__digraph__Ys_36;
#line 171 "list.opt"
        MR_Word mercury__digraph__M1_37;
#line 171 "list.opt"
        MR_Word mercury__digraph__M2_38;

#line 694 "digraph.m"
        {
#line 694 "digraph.m"
          mercury__digraph__lookup_key_3_p_0(mercury__digraph__V_23_23, mercury__digraph__V_24_24, mercury__digraph__H_6_6, &mercury__digraph__M1_37);
        }
#line 695 "digraph.m"
        {
#line 695 "digraph.m"
          mercury__digraph__lookup_key_set_to_3_p_0(mercury__digraph__V_23_23, mercury__digraph__V_24_24, mercury__digraph__M1_37, &mercury__digraph__Xs_35);
        }
#line 696 "digraph.m"
        {
#line 696 "digraph.m"
          mercury__digraph__lookup_key_3_p_0(mercury__digraph__V_23_23, mercury__digraph__V_25_25, mercury__digraph__H_6_6, &mercury__digraph__M2_38);
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
#line 173 "list.opt"
        {
#line 173 "list.opt"
          mercury__digraph__V_9_9 = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_2_f_in__list_0(mercury__digraph__V_23_23, mercury__digraph__V_24_24, mercury__digraph__V_25_25, mercury__digraph__T_7_7);
        }
#line 171 "list.opt"
        {
#line 171 "list.opt"
          mercury__digraph__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__3_3, 0) = ((MR_Box) (mercury__digraph__V_8_8));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__3_3, 1) = ((MR_Box) (mercury__digraph__V_9_9));
#line 171 "list.opt"
        }
#line 171 "list.opt"
      }
#line 170 "list.opt"
    return mercury__digraph__HeadVar__3_3;
#line 170 "list.opt"
  }
#line 324 "list.int"
}

#line 92 "sparse_bitset.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_54_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(
#line 92 "sparse_bitset.int"
  MR_Word mercury__digraph__V_28_28,
#line 92 "sparse_bitset.int"
  MR_Word mercury__digraph__V_29_29,
#line 92 "sparse_bitset.int"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_13,
#line 92 "sparse_bitset.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 92 "sparse_bitset.int"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc1_0_11_9,
#line 92 "sparse_bitset.int"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc1_12_10,
#line 92 "sparse_bitset.int"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc2_0_13_11,
#line 92 "sparse_bitset.int"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc2_14_12)
#line 92 "sparse_bitset.int"
{
#line 256 "sparse_bitset.opt"
  {
#line 256 "sparse_bitset.opt"
    MR_bool mercury__digraph__succeeded;
#line 256 "sparse_bitset.opt"
    MR_Word mercury__digraph__Set_8_8 = (MR_Word) mercury__digraph__HeadVar__2_2;

#line 257 "sparse_bitset.opt"
    {
#line 257 "sparse_bitset.opt"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_54_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(mercury__digraph__V_28_28, mercury__digraph__V_29_29, mercury__digraph__TypeClassInfo_for_enum_13, mercury__digraph__Set_8_8, mercury__digraph__STATE_VARIABLE_Acc1_0_11_9, mercury__digraph__STATE_VARIABLE_Acc1_12_10, mercury__digraph__STATE_VARIABLE_Acc2_0_13_11, mercury__digraph__STATE_VARIABLE_Acc2_14_12);
#line 257 "sparse_bitset.opt"
      return;
    }
#line 256 "sparse_bitset.opt"
  }
#line 92 "sparse_bitset.int"
}

#line 136 "list.int"
static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_50_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__list_0(
#line 136 "list.int"
  MR_Word mercury__digraph__V_22_22,
#line 136 "list.int"
  MR_Word mercury__digraph__V_23_23,
#line 136 "list.int"
  MR_Word mercury__digraph__V_24_24,
#line 136 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 136 "list.int"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 136 "list.int"
  MR_Word * mercury__digraph__HeadVar__4_4)
#line 136 "list.int"
{
#line 380 "list.opt"
  while (MR_TRUE)
#line 380 "list.opt"
    {
#line 380 "list.opt"
      /* tailcall optimized into a loop */
#line 380 "list.opt"
      {
#line 380 "list.opt"
        MR_bool mercury__digraph__succeeded;

#line 380 "list.opt"
        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "list.opt"
          {
#line 380 "list.opt"
            *mercury__digraph__HeadVar__4_4 = mercury__digraph__HeadVar__3_3;
#line 380 "list.opt"
            mercury__digraph__succeeded = MR_TRUE;
#line 380 "list.opt"
          }
#line 380 "list.opt"
        else
#line 382 "list.opt"
          {
#line 382 "list.opt"
            MR_Word mercury__digraph__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 382 "list.opt"
            MR_Word mercury__digraph__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "list.opt"
            MR_Word mercury__digraph__STATE_VARIABLE_A_15_15_13;

#line 383 "list.opt"
            {
#line 383 "list.opt"
              mercury__digraph__succeeded = mercury__digraph__is_dag_2_5_p_0(mercury__digraph__V_22_22, mercury__digraph__V_23_23, mercury__digraph__V_24_24, mercury__digraph__H_10_9, mercury__digraph__HeadVar__3_3, &mercury__digraph__STATE_VARIABLE_A_15_15_13);
            }
#line 382 "list.opt"
            if (mercury__digraph__succeeded)
#line 384 "list.opt"
              {
#line 384 "list.opt"
                /* direct tailcall eliminated */
#line 384 "list.opt"
                {
#line 384 "list.opt"
                  MR_Word mercury__digraph__HeadVar__2__tmp_copy_2 = mercury__digraph__T_11_10;
#line 384 "list.opt"
                  MR_Word mercury__digraph__HeadVar__3__tmp_copy_3 = mercury__digraph__STATE_VARIABLE_A_15_15_13;

#line 384 "list.opt"
                  mercury__digraph__HeadVar__3_3 = mercury__digraph__HeadVar__3__tmp_copy_3;
#line 384 "list.opt"
                  mercury__digraph__HeadVar__2_2 = mercury__digraph__HeadVar__2__tmp_copy_2;
#line 384 "list.opt"
                }
#line 384 "list.opt"
                continue;
#line 384 "list.opt"
              }
#line 382 "list.opt"
          }
#line 380 "list.opt"
        return mercury__digraph__succeeded;
#line 380 "list.opt"
      }
#line 380 "list.opt"
      break;
#line 380 "list.opt"
    }
#line 136 "list.int"
}

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_49_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__digraph__V_14_14,
#line 324 "list.int"
  MR_Word mercury__digraph__V_15_15,
#line 324 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2)
#line 324 "list.int"
{
#line 170 "list.opt"
  {
#line 170 "list.opt"
    MR_bool mercury__digraph__succeeded;
#line 170 "list.opt"
    MR_Word mercury__digraph__HeadVar__3_3;

#line 170 "list.opt"
    if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "list.opt"
      mercury__digraph__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "list.opt"
    else
#line 171 "list.opt"
      {
#line 171 "list.opt"
        MR_Word mercury__digraph__H_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "list.opt"
        MR_Word mercury__digraph__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "list.opt"
        MR_Box mercury__digraph__V_8_8;
#line 171 "list.opt"
        MR_Word mercury__digraph__V_9_9;

#line 436 "digraph.m"
        {
#line 436 "digraph.m"
          mercury__digraph__lookup_vertex_3_p_0(mercury__digraph__V_14_14, mercury__digraph__V_15_15, mercury__digraph__H_6_6, &mercury__digraph__V_8_8);
        }
#line 173 "list.opt"
        {
#line 173 "list.opt"
          mercury__digraph__V_9_9 = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_49_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_2_f_in__list_0(mercury__digraph__V_14_14, mercury__digraph__V_15_15, mercury__digraph__T_7_7);
        }
#line 171 "list.opt"
        {
#line 171 "list.opt"
          mercury__digraph__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__3_3, 0) = mercury__digraph__V_8_8;
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__3_3, 1) = ((MR_Box) (mercury__digraph__V_9_9));
#line 171 "list.opt"
        }
#line 171 "list.opt"
      }
#line 170 "list.opt"
    return mercury__digraph__HeadVar__3_3;
#line 170 "list.opt"
  }
#line 324 "list.int"
}

#line 92 "sparse_bitset.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_53_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(
#line 92 "sparse_bitset.int"
  MR_Word mercury__digraph__V_29_29,
#line 92 "sparse_bitset.int"
  MR_Word mercury__digraph__V_30_30,
#line 92 "sparse_bitset.int"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_13,
#line 92 "sparse_bitset.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 92 "sparse_bitset.int"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc1_0_11_9,
#line 92 "sparse_bitset.int"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc1_12_10,
#line 92 "sparse_bitset.int"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc2_0_13_11,
#line 92 "sparse_bitset.int"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc2_14_12)
#line 92 "sparse_bitset.int"
{
#line 256 "sparse_bitset.opt"
  {
#line 256 "sparse_bitset.opt"
    MR_bool mercury__digraph__succeeded;
#line 256 "sparse_bitset.opt"
    MR_Word mercury__digraph__Set_8_8 = (MR_Word) mercury__digraph__HeadVar__2_2;

#line 257 "sparse_bitset.opt"
    {
#line 257 "sparse_bitset.opt"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_55_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(mercury__digraph__V_29_29, mercury__digraph__V_30_30, mercury__digraph__TypeClassInfo_for_enum_13, mercury__digraph__Set_8_8, mercury__digraph__STATE_VARIABLE_Acc1_0_11_9, mercury__digraph__STATE_VARIABLE_Acc1_12_10, mercury__digraph__STATE_VARIABLE_Acc2_0_13_11, mercury__digraph__STATE_VARIABLE_Acc2_14_12);
#line 257 "sparse_bitset.opt"
      return;
    }
#line 256 "sparse_bitset.opt"
  }
#line 92 "sparse_bitset.int"
}

#line 85 "sparse_bitset.int"
static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_53_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(
#line 85 "sparse_bitset.int"
  MR_Word mercury__digraph__V_20_20,
#line 85 "sparse_bitset.int"
  MR_Word mercury__digraph__V_21_21,
#line 85 "sparse_bitset.int"
  MR_Word mercury__digraph__V_22_22,
#line 85 "sparse_bitset.int"
  MR_Word mercury__digraph__TypeClassInfo_for_enum_9,
#line 85 "sparse_bitset.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 85 "sparse_bitset.int"
  MR_Word mercury__digraph__STATE_VARIABLE_Acc_0_8_7,
#line 85 "sparse_bitset.int"
  MR_Word * mercury__digraph__STATE_VARIABLE_Acc_9_8)
#line 85 "sparse_bitset.int"
{
#line 254 "sparse_bitset.opt"
  {
#line 254 "sparse_bitset.opt"
    MR_bool mercury__digraph__succeeded;
#line 254 "sparse_bitset.opt"
    MR_Word mercury__digraph__Set_6_6 = (MR_Word) mercury__digraph__HeadVar__2_2;

#line 255 "sparse_bitset.opt"
    {
#line 255 "sparse_bitset.opt"
      return mercury__digraph__succeeded = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__V_20_20, mercury__digraph__V_21_21, mercury__digraph__V_22_22, mercury__digraph__TypeClassInfo_for_enum_9, mercury__digraph__Set_6_6, mercury__digraph__STATE_VARIABLE_Acc_0_8_7, mercury__digraph__STATE_VARIABLE_Acc_9_8);
    }
#line 254 "sparse_bitset.opt"
    return mercury__digraph__succeeded;
#line 254 "sparse_bitset.opt"
  }
#line 85 "sparse_bitset.int"
}

#line 59 "set.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_95_104_111_53_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__set_0(
#line 59 "set.int"
  MR_Word mercury__digraph__V_22_22,
#line 59 "set.int"
  MR_Word mercury__digraph__V_23_23,
#line 59 "set.int"
  MR_Word mercury__digraph__S_6_6,
#line 59 "set.int"
  MR_Word mercury__digraph__STATE_VARIABLE_A_0_8_7,
#line 59 "set.int"
  MR_Word * mercury__digraph__STATE_VARIABLE_A_9_8)
#line 59 "set.int"
{
#line 128 "set.opt"
  {
#line 128 "set.opt"
    MR_bool mercury__digraph__succeeded;
#line 128 "set.opt"
    MR_Word mercury__digraph__V_10_46 = (MR_Word) mercury__digraph__S_6_6;

#line 163 "set_ordlist.opt"
    {
#line 163 "set_ordlist.opt"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(mercury__digraph__V_22_22, mercury__digraph__V_23_23, mercury__digraph__V_10_46, mercury__digraph__STATE_VARIABLE_A_0_8_7, mercury__digraph__STATE_VARIABLE_A_9_8);
#line 163 "set_ordlist.opt"
      return;
    }
#line 128 "set.opt"
  }
#line 59 "set.int"
}

#line 318 "list.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_53_51_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
#line 318 "list.int"
  MR_Word mercury__digraph__V_14_14,
#line 318 "list.int"
  MR_Word mercury__digraph__V_15_15,
#line 318 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 318 "list.int"
  MR_Word * mercury__digraph__HeadVar__3_3)
#line 318 "list.int"
{
#line 166 "list.opt"
  {
#line 166 "list.opt"
    MR_bool mercury__digraph__succeeded;

#line 166 "list.opt"
    if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 166 "list.opt"
      *mercury__digraph__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 166 "list.opt"
    else
#line 167 "list.opt"
      {
#line 167 "list.opt"
        MR_Word mercury__digraph__H0_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 167 "list.opt"
        MR_Word mercury__digraph__T0_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 167 "list.opt"
        MR_Box mercury__digraph__H_8_8;
#line 167 "list.opt"
        MR_Word mercury__digraph__T_9_9;

#line 168 "list.opt"
        {
#line 168 "list.opt"
          mercury__digraph__lookup_vertex_3_p_0(mercury__digraph__V_14_14, mercury__digraph__V_15_15, mercury__digraph__H0_6_6, &mercury__digraph__H_8_8);
        }
#line 169 "list.opt"
        {
#line 169 "list.opt"
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_53_51_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(mercury__digraph__V_14_14, mercury__digraph__V_15_15, mercury__digraph__T0_7_7, &mercury__digraph__T_9_9);
        }
#line 167 "list.opt"
        {
#line 167 "list.opt"
          MR_Word base;
#line 167 "list.opt"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 167 "list.opt"
          *mercury__digraph__HeadVar__3_3 = base;
#line 167 "list.opt"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__digraph__H_8_8;
#line 167 "list.opt"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__digraph__T_9_9));
#line 167 "list.opt"
        }
#line 167 "list.opt"
      }
#line 166 "list.opt"
  }
#line 318 "list.int"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__digraph__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
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
    MR_Word mercury__digraph__Set_6_42;

#line 6457 "digraph.c"
    {
#line 6459 "digraph.c"
      mercury__digraph__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6461 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_28_28, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_27_27));
#line 6463 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_28_28, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_23));
#line 6465 "digraph.c"
    }
#line 6467 "digraph.c"
    {
#line 6469 "digraph.c"
      mercury__digraph__TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6471 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_30, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_29));
#line 6473 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_30, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_23));
#line 6475 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_30, 2) = ((MR_Box) (mercury__digraph__TypeInfo_28_28));
#line 6477 "digraph.c"
    }
#line 254 "sparse_bitset.opt"
    mercury__digraph__Set_6_42 = (MR_Word) mercury__digraph__KeySet2_6;
#line 255 "sparse_bitset.opt"
    {
#line 255 "sparse_bitset.opt"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_23, mercury__digraph__HeadVar__3_15, mercury__digraph__TypeClassInfo_for_enum_30, mercury__digraph__Set_6_42, mercury__digraph__HeadVar__4_16, mercury__digraph__HeadVar__5_17);
#line 255 "sparse_bitset.opt"
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

#line 6570 "digraph.c"
    {
#line 6572 "digraph.c"
      mercury__digraph__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6574 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_8_8));
#line 6576 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_6));
#line 6578 "digraph.c"
    }
#line 6580 "digraph.c"
    {
#line 6582 "digraph.c"
      mercury__digraph__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6584 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_11, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_10));
#line 6586 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_11, 1) = ((MR_Box) (mercury__digraph__TypeInfo_9_9));
#line 6588 "digraph.c"
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

#line 6632 "digraph.c"
    {
#line 6634 "digraph.c"
      mercury__digraph__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6636 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_7));
#line 6638 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_5));
#line 6640 "digraph.c"
    }
#line 6642 "digraph.c"
    {
#line 6644 "digraph.c"
      mercury__digraph__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6646 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_9_9));
#line 6648 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 1) = ((MR_Box) (mercury__digraph__TypeInfo_8_8));
#line 6650 "digraph.c"
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

#line 6692 "digraph.c"
    {
#line 6694 "digraph.c"
      mercury__digraph__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6696 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_8_8));
#line 6698 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_6));
#line 6700 "digraph.c"
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

#line 6740 "digraph.c"
    {
#line 6742 "digraph.c"
      mercury__digraph__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6744 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_7));
#line 6746 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_5));
#line 6748 "digraph.c"
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

#line 6788 "digraph.c"
    {
#line 6790 "digraph.c"
      mercury__digraph__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6792 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_7));
#line 6794 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_6));
#line 6796 "digraph.c"
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

#line 6834 "digraph.c"
    {
#line 6836 "digraph.c"
      mercury__digraph__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6838 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_7_7, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_6_6));
#line 6840 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_7_7, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_5));
#line 6842 "digraph.c"
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
#line 6882 "digraph.c"
      *mercury__digraph__HeadVar__1_1 = (MR_Integer) 0;
#line 335 "digraph.m"
    else
#line 335 "digraph.m"
      {
#line 335 "digraph.m"
        MR_Integer mercury__digraph__V_4_4 = (MR_Integer) mercury__digraph__HeadVar__2_2;
#line 335 "digraph.m"
        MR_Integer mercury__digraph__V_5_5 = (MR_Integer) mercury__digraph__HeadVar__3_3;

#line 66 "private_builtin.opt"
        mercury__digraph__succeeded = (mercury__digraph__V_4_4 < mercury__digraph__V_5_5);
#line 69 "private_builtin.opt"
        if (mercury__digraph__succeeded)
#line 68 "private_builtin.opt"
          *mercury__digraph__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__digraph__succeeded = (mercury__digraph__V_4_4 == mercury__digraph__V_5_5);
#line 74 "private_builtin.opt"
            if (mercury__digraph__succeeded)
#line 73 "private_builtin.opt"
              *mercury__digraph__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              *mercury__digraph__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
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

#line 6957 "digraph.c"
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
#line 6994 "digraph.c"
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

#line 66 "private_builtin.opt"
        mercury__digraph__succeeded = (mercury__digraph__V_4_4 < mercury__digraph__V_8_8);
#line 69 "private_builtin.opt"
        if (mercury__digraph__succeeded)
#line 68 "private_builtin.opt"
          mercury__digraph__V_12_12 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__digraph__succeeded = (mercury__digraph__V_4_4 == mercury__digraph__V_8_8);
#line 74 "private_builtin.opt"
            if (mercury__digraph__succeeded)
#line 73 "private_builtin.opt"
              mercury__digraph__V_12_12 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__digraph__V_12_12 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 7041 "digraph.c"
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

#line 7060 "digraph.c"
            {
#line 7062 "digraph.c"
              mercury__digraph__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7064 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_20_20, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_19_19));
#line 7066 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_20_20, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
#line 7068 "digraph.c"
            }
#line 343 "digraph.m"
            {
#line 343 "digraph.m"
              mercury__bimap____Compare____bimap_2_0(mercury__digraph__TypeInfo_for_T_17, mercury__digraph__TypeInfo_20_20, &mercury__digraph__V_13_13, mercury__digraph__V_5_5, mercury__digraph__V_9_9);
            }
#line 7075 "digraph.c"
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

#line 7100 "digraph.c"
                {
#line 7102 "digraph.c"
                  mercury__digraph__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7104 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_24_24));
#line 7106 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
#line 7108 "digraph.c"
                }
#line 7110 "digraph.c"
                {
#line 7112 "digraph.c"
                  mercury__digraph__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7114 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_26_26));
#line 7116 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 1) = ((MR_Box) (mercury__digraph__TypeInfo_25_25));
#line 7118 "digraph.c"
                }
#line 343 "digraph.m"
                {
#line 343 "digraph.m"
                  mercury__tree234____Compare____tree234_2_0(mercury__digraph__TypeCtorInfo_23_23, mercury__digraph__TypeInfo_27_27, &mercury__digraph__V_14_14, mercury__digraph__V_6_6, mercury__digraph__V_10_10);
                }
#line 7125 "digraph.c"
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

#line 7148 "digraph.c"
                    {
#line 7150 "digraph.c"
                      mercury__digraph__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7152 "digraph.c"
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_32_32, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_31_31));
#line 7154 "digraph.c"
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_32_32, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
#line 7156 "digraph.c"
                    }
#line 7158 "digraph.c"
                    {
#line 7160 "digraph.c"
                      mercury__digraph__TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7162 "digraph.c"
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_34_34, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_33_33));
#line 7164 "digraph.c"
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_34_34, 1) = ((MR_Box) (mercury__digraph__TypeInfo_32_32));
#line 7166 "digraph.c"
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

#line 7245 "digraph.c"
        mercury__digraph__succeeded = (mercury__digraph__V_3_3 == mercury__digraph__V_7_7);
#line 343 "digraph.m"
        if (mercury__digraph__succeeded)
#line 343 "digraph.m"
          {
#line 7251 "digraph.c"
            mercury__digraph__TypeCtorInfo_14_14 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 7253 "digraph.c"
            {
#line 7255 "digraph.c"
              mercury__digraph__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7257 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
#line 7259 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
#line 7261 "digraph.c"
            }
#line 7263 "digraph.c"
            {
#line 7265 "digraph.c"
              mercury__digraph__succeeded = mercury__bimap____Unify____bimap_2_0(mercury__digraph__TypeInfo_for_T_13, mercury__digraph__TypeInfo_27_27, mercury__digraph__V_4_4, mercury__digraph__V_8_8);
            }
#line 343 "digraph.m"
            if (mercury__digraph__succeeded)
#line 343 "digraph.m"
              {
#line 7272 "digraph.c"
                mercury__digraph__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 7274 "digraph.c"
                mercury__digraph__TypeCtorInfo_21_21 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 7276 "digraph.c"
                {
#line 7278 "digraph.c"
                  mercury__digraph__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7280 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_21_21));
#line 7282 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 1) = ((MR_Box) (mercury__digraph__TypeInfo_27_27));
#line 7284 "digraph.c"
                }
#line 7286 "digraph.c"
                {
#line 7288 "digraph.c"
                  mercury__digraph__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__digraph__TypeCtorInfo_18_18, mercury__digraph__TypeInfo_29_29, mercury__digraph__V_5_5, mercury__digraph__V_9_9);
                }
#line 343 "digraph.m"
                if (mercury__digraph__succeeded)
#line 7293 "digraph.c"
                  {
#line 7295 "digraph.c"
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

#line 7343 "digraph.c"
    {
#line 7345 "digraph.c"
      mercury__digraph__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7347 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_7));
#line 7349 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_6));
#line 7351 "digraph.c"
    }
#line 7353 "digraph.c"
    mercury__digraph__TypeCtorInfo_9_9 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 7355 "digraph.c"
    {
#line 7357 "digraph.c"
      mercury__digraph__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7359 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_9_9));
#line 7361 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_6));
#line 7363 "digraph.c"
    }
#line 7365 "digraph.c"
    {
#line 7367 "digraph.c"
      mercury__digraph__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7369 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_11, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_7));
#line 7371 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_11, 1) = ((MR_Box) (mercury__digraph__TypeInfo_10_10));
#line 7373 "digraph.c"
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

#line 7417 "digraph.c"
    {
#line 7419 "digraph.c"
      mercury__digraph__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7421 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_7_7, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_6_6));
#line 7423 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_7_7, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_5));
#line 7425 "digraph.c"
    }
#line 7427 "digraph.c"
    {
#line 7429 "digraph.c"
      mercury__digraph__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7431 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_8_8));
#line 7433 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_5));
#line 7435 "digraph.c"
    }
#line 7437 "digraph.c"
    {
#line 7439 "digraph.c"
      mercury__digraph__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7441 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_6_6));
#line 7443 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 1) = ((MR_Box) (mercury__digraph__TypeInfo_9_9));
#line 7445 "digraph.c"
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
#line 38 "set_ordlist.opt"
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
#line 38 "set_ordlist.opt"
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
    MR_Word mercury__digraph__Set_6_42;

#line 7889 "digraph.c"
    {
#line 7891 "digraph.c"
      mercury__digraph__TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7893 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_34_34, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_33_33));
#line 7895 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_34_34, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_23));
#line 7897 "digraph.c"
    }
#line 7899 "digraph.c"
    {
#line 7901 "digraph.c"
      mercury__digraph__TypeClassInfo_for_enum_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7903 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_36, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_35));
#line 7905 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_36, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_23));
#line 7907 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_36, 2) = ((MR_Box) (mercury__digraph__TypeInfo_34_34));
#line 7909 "digraph.c"
    }
#line 254 "sparse_bitset.opt"
    mercury__digraph__Set_6_42 = (MR_Word) mercury__digraph__KeySet1_5;
#line 255 "sparse_bitset.opt"
    {
#line 255 "sparse_bitset.opt"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_23, mercury__digraph__KeySet2_6, mercury__digraph__TypeClassInfo_for_enum_36, mercury__digraph__Set_6_42, mercury__digraph__STATE_VARIABLE_Rtc_0_9, mercury__digraph__STATE_VARIABLE_Rtc_10);
#line 255 "sparse_bitset.opt"
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
            MR_Word mercury__digraph__Set_3_48;
#line 1062 "digraph.m"
            MR_Integer mercury__digraph__V_5_49;
#line 7981 "digraph.c"
            MR_Box MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box);
#line 7983 "digraph.c"
            MR_Box mercury__digraph__conv1_V_5_49;

#line 7986 "digraph.c"
            {
#line 7988 "digraph.c"
              mercury__digraph__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7990 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_32_32, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_31_31));
#line 7992 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_32_32, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_30));
#line 7994 "digraph.c"
            }
#line 7996 "digraph.c"
            {
#line 7998 "digraph.c"
              mercury__digraph__TypeClassInfo_for_enum_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8000 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_34, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_33));
#line 8002 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_34, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_30));
#line 8004 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_34, 2) = ((MR_Box) (mercury__digraph__TypeInfo_32_32));
#line 8006 "digraph.c"
            }
#line 162 "sparse_bitset.opt"
            mercury__digraph__Set_3_48 = (MR_Word) mercury__digraph__STATE_VARIABLE_Vis_0_3;
#line 8010 "digraph.c"
            mercury__digraph__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8012 "digraph.c"
            {
#line 8014 "digraph.c"
              mercury__digraph__conv1_V_5_49 = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_34), ((MR_Box) (mercury__digraph__X_11)));
            }
#line 8017 "digraph.c"
            mercury__digraph__V_5_49 = ((MR_Integer) mercury__digraph__conv1_V_5_49);
#line 164 "sparse_bitset.opt"
            {
#line 164 "sparse_bitset.opt"
              mercury__digraph__succeeded = mercury__sparse_bitset__contains_search_nodes_2_p_0(mercury__digraph__Set_3_48, mercury__digraph__V_5_49);
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
                MR_Word mercury__digraph__Set_6_58;
#line 1065 "digraph.m"
                MR_Word mercury__digraph__Set_6_66;

#line 1065 "digraph.m"
                {
#line 1065 "digraph.m"
                  mercury__digraph__dfs_2_6_p_0(mercury__digraph__TypeInfo_for_T_30, mercury__digraph__G_2, mercury__digraph__X_11, mercury__digraph__STATE_VARIABLE_Vis_0_3, &mercury__digraph__STATE_VARIABLE_Vis_23_23, mercury__digraph__V_24_24, &mercury__digraph__CliqList_16);
                }
#line 8068 "digraph.c"
                mercury__digraph__BaseTypeClassInfo_for_enum_37 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 8070 "digraph.c"
                mercury__digraph__TypeCtorInfo_35_35 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 8072 "digraph.c"
                {
#line 8074 "digraph.c"
                  mercury__digraph__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8076 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_36_36, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_35_35));
#line 8078 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_36_36, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_30));
#line 8080 "digraph.c"
                }
#line 8082 "digraph.c"
                {
#line 8084 "digraph.c"
                  mercury__digraph__TypeClassInfo_for_enum_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8086 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_38, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_37));
#line 8088 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_38, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_30));
#line 8090 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_38, 2) = ((MR_Box) (mercury__digraph__TypeInfo_36_36));
#line 8092 "digraph.c"
                }
#line 126 "sparse_bitset.opt"
                mercury__digraph__V_5_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 125 "sparse_bitset.opt"
                {
#line 125 "sparse_bitset.opt"
                  mercury__digraph__Set_6_58 = mercury__sparse_bitset__list_to_set_2_2_f_0(mercury__digraph__TypeClassInfo_for_enum_38, (MR_Word) mercury__digraph__CliqList_16, mercury__digraph__V_5_54);
                }
#line 124 "sparse_bitset.opt"
                mercury__digraph__Cliq_17 = (MR_Word) mercury__digraph__Set_6_58;
#line 255 "sparse_bitset.opt"
                {
#line 255 "sparse_bitset.opt"
                  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_30, mercury__digraph__G_2, mercury__digraph__TypeClassInfo_for_enum_38, mercury__digraph__Set_6_58, mercury__digraph__Cliq_17, &mercury__digraph__Followers0_18);
                }
#line 254 "sparse_bitset.opt"
                mercury__digraph__Set_6_66 = (MR_Word) mercury__digraph__Followers0_18;
#line 255 "sparse_bitset.opt"
                {
#line 255 "sparse_bitset.opt"
                  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_30, mercury__digraph__STATE_VARIABLE_Rtc_0_4, mercury__digraph__TypeClassInfo_for_enum_38, mercury__digraph__Set_6_66, mercury__digraph__Cliq_17, &mercury__digraph__Followers_19);
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
            MR_Word mercury__digraph__Set1_4_31;
#line 1017 "digraph.m"
            MR_Word mercury__digraph__Set2_5_32;
#line 1017 "digraph.m"
            MR_Word mercury__digraph__V_6_33;
#line 118 "sparse_bitset.opt"
            MR_Word mercury__digraph__V_35_35;
#line 118 "sparse_bitset.opt"
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
#line 8227 "digraph.c"
            mercury__digraph__TypeCtorInfo_26_26 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 8229 "digraph.c"
            {
#line 8231 "digraph.c"
              mercury__digraph__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8233 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_26_26));
#line 8235 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_25));
#line 8237 "digraph.c"
            }
#line 216 "sparse_bitset.opt"
            mercury__digraph__Set1_4_31 = (MR_Word) mercury__digraph__SuccXs_16;
#line 216 "sparse_bitset.opt"
            mercury__digraph__Set2_5_32 = (MR_Word) mercury__digraph__PreXs_17;
#line 217 "sparse_bitset.opt"
            {
#line 217 "sparse_bitset.opt"
              mercury__digraph__V_6_33 = mercury__sparse_bitset__intersect_2_2_f_0(mercury__digraph__Set1_4_31, mercury__digraph__Set2_5_32);
            }
#line 216 "sparse_bitset.opt"
            mercury__digraph__Ys_18 = (MR_Word) mercury__digraph__V_6_33;
#line 114 "sparse_bitset.opt"
            mercury__digraph__V_2_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 113 "sparse_bitset.opt"
            mercury__digraph__V_35_35 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 118 "sparse_bitset.opt"
            {
#line 118 "sparse_bitset.opt"
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
#line 1022 "digraph.m"
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
            MR_Word mercury__digraph__Set_3_37;
#line 966 "digraph.m"
            MR_Integer mercury__digraph__V_5_38;
#line 8376 "digraph.c"
            MR_Box MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box);
#line 8378 "digraph.c"
            MR_Box mercury__digraph__conv1_V_5_38;

#line 8381 "digraph.c"
            {
#line 8383 "digraph.c"
              mercury__digraph__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8385 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_28_28));
#line 8387 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_27));
#line 8389 "digraph.c"
            }
#line 8391 "digraph.c"
            {
#line 8393 "digraph.c"
              mercury__digraph__TypeClassInfo_for_enum_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8395 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_31, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_30));
#line 8397 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_31, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_27));
#line 8399 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_31, 2) = ((MR_Box) (mercury__digraph__TypeInfo_29_29));
#line 8401 "digraph.c"
            }
#line 162 "sparse_bitset.opt"
            mercury__digraph__Set_3_37 = (MR_Word) mercury__digraph__STATE_VARIABLE_Vis_0_3;
#line 8405 "digraph.c"
            mercury__digraph__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_31, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8407 "digraph.c"
            {
#line 8409 "digraph.c"
              mercury__digraph__conv1_V_5_38 = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_31), ((MR_Box) (mercury__digraph__X_11)));
            }
#line 8412 "digraph.c"
            mercury__digraph__V_5_38 = ((MR_Integer) mercury__digraph__conv1_V_5_38);
#line 164 "sparse_bitset.opt"
            {
#line 164 "sparse_bitset.opt"
              mercury__digraph__succeeded = mercury__sparse_bitset__contains_search_nodes_2_p_0(mercury__digraph__Set_3_37, mercury__digraph__V_5_38);
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
                MR_Word mercury__digraph__List_4_42;
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
                  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_53_51_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(mercury__digraph__TypeInfo_for_T_27, mercury__digraph__GInv_2, mercury__digraph__CliqKeys_16, &mercury__digraph__CliqList_17);
                }
#line 78 "list.opt"
                {
#line 78 "list.opt"
                  mercury__list__length_2_3_p_0(mercury__digraph__TypeInfo_for_T_27, mercury__digraph__CliqList_17, (MR_Integer) 0, &mercury__digraph__V_5_45);
                }
#line 110 "list.opt"
                {
#line 110 "list.opt"
                  mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__digraph__TypeInfo_for_T_27, mercury__digraph__V_5_45, mercury__digraph__CliqList_17, &mercury__digraph__List_4_42);
                }
#line 26 "set_ordlist.opt"
                mercury__digraph__Cliq_18 = (MR_Word) mercury__digraph__List_4_42;
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
            MR_Word mercury__digraph__Set0_6_21;
#line 937 "digraph.m"
            MR_Integer mercury__digraph__V_9_23;
#line 937 "digraph.m"
            MR_Word mercury__digraph__Set_5_24;
#line 937 "digraph.m"
            MR_Word mercury__digraph__Set1_4_28;
#line 937 "digraph.m"
            MR_Word mercury__digraph__Set2_5_29;
#line 937 "digraph.m"
            MR_Word mercury__digraph__V_6_30;
#line 937 "digraph.m"
            MR_Word mercury__digraph__V_32_32;
#line 937 "digraph.m"
            MR_Word mercury__digraph__V_2_35;
#line 8578 "digraph.c"
            MR_Box MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box);
#line 8580 "digraph.c"
            MR_Box mercury__digraph__conv1_V_9_23;

#line 8583 "digraph.c"
            {
#line 8585 "digraph.c"
              mercury__digraph__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8587 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
#line 8589 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
#line 8591 "digraph.c"
            }
#line 8593 "digraph.c"
            {
#line 8595 "digraph.c"
              mercury__digraph__TypeClassInfo_for_enum_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8597 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_17, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_16));
#line 8599 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
#line 8601 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_17, 2) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 8603 "digraph.c"
            }
#line 168 "sparse_bitset.opt"
            mercury__digraph__Set0_6_21 = (MR_Word) mercury__digraph__Vis0_2;
#line 8607 "digraph.c"
            mercury__digraph__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8609 "digraph.c"
            {
#line 8611 "digraph.c"
              mercury__digraph__conv1_V_9_23 = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_17), ((MR_Box) (mercury__digraph__X_8)));
            }
#line 8614 "digraph.c"
            mercury__digraph__V_9_23 = ((MR_Integer) mercury__digraph__conv1_V_9_23);
#line 170 "sparse_bitset.opt"
            {
#line 170 "sparse_bitset.opt"
              mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__Set0_6_21, mercury__digraph__V_9_23, &mercury__digraph__Set_5_24);
            }
#line 171 "sparse_bitset.opt"
            mercury__digraph__Vis_10 = (MR_Word) mercury__digraph__Set_5_24;
#line 939 "digraph.m"
            {
#line 939 "digraph.m"
              mercury__digraph__lookup_key_set_from_3_p_0(mercury__digraph__TypeInfo_for_T_13, mercury__digraph__G_1, mercury__digraph__X_8, &mercury__digraph__SuccXs_11);
            }
#line 216 "sparse_bitset.opt"
            mercury__digraph__Set1_4_28 = (MR_Word) mercury__digraph__Vis_10;
#line 216 "sparse_bitset.opt"
            mercury__digraph__Set2_5_29 = (MR_Word) mercury__digraph__SuccXs_11;
#line 217 "sparse_bitset.opt"
            {
#line 217 "sparse_bitset.opt"
              mercury__digraph__V_6_30 = mercury__sparse_bitset__intersect_2_2_f_0(mercury__digraph__Set1_4_28, mercury__digraph__Set2_5_29);
            }
#line 114 "sparse_bitset.opt"
            mercury__digraph__V_2_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 216 "sparse_bitset.opt"
            mercury__digraph__BackPointers_12 = (MR_Word) mercury__digraph__V_6_30;
#line 113 "sparse_bitset.opt"
            mercury__digraph__V_32_32 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 118 "sparse_bitset.opt"
            {
#line 118 "sparse_bitset.opt"
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
#line 8755 "digraph.c"
            mercury__digraph__TypeCtorInfo_22_22 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 8757 "digraph.c"
            {
#line 8759 "digraph.c"
              mercury__digraph__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8761 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_23, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_22_22));
#line 8763 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_21));
#line 8765 "digraph.c"
            }
#line 8767 "digraph.c"
            mercury__digraph__TypeCtorInfo_24_24 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 8769 "digraph.c"
            {
#line 8771 "digraph.c"
              mercury__digraph__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8773 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_24_24));
#line 8775 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_21));
#line 8777 "digraph.c"
            }
#line 8779 "digraph.c"
            {
#line 8781 "digraph.c"
              mercury__digraph__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8783 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_26_26, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_22_22));
#line 8785 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_26_26, 1) = ((MR_Box) (mercury__digraph__TypeInfo_25_25));
#line 8787 "digraph.c"
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

#line 8822 "digraph.c"
                mercury__digraph__succeeded = (mercury__digraph__V_29_29 == mercury__digraph__V_30_30);
#line 335 "digraph.m"
              }
#line 921 "digraph.m"
            if (mercury__digraph__succeeded)
#line 919 "digraph.m"
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
            MR_Word mercury__digraph__List_7_47 = (MR_Word) mercury__digraph__Clique_15;
#line 899 "digraph.m"
            MR_Word mercury__digraph__TransformedList_8_48;
#line 899 "digraph.m"
            MR_Word mercury__digraph__List_4_60;
#line 899 "digraph.m"
            MR_Integer mercury__digraph__V_5_63;
#line 901 "digraph.m"
            MR_Word mercury__digraph__conv1_CliqKey_20;
#line 901 "digraph.m"
            MR_Word mercury__digraph__conv0_STATE_VARIABLE_R_26_26;

#line 103 "set.opt"
            {
#line 103 "set.opt"
              mercury__digraph__TransformedList_8_48 = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_49_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_2_f_in__list_0(mercury__digraph__TypeInfo_for_T_31, mercury__digraph__G_1, mercury__digraph__List_7_47);
            }
#line 78 "list.opt"
            {
#line 78 "list.opt"
              mercury__list__length_2_3_p_0(mercury__digraph__TypeInfo_for_T_31, mercury__digraph__TransformedList_8_48, (MR_Integer) 0, &mercury__digraph__V_5_63);
            }
#line 110 "list.opt"
            {
#line 110 "list.opt"
              mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__digraph__TypeInfo_for_T_31, mercury__digraph__V_5_63, mercury__digraph__TransformedList_8_48, &mercury__digraph__List_4_60);
            }
#line 26 "set_ordlist.opt"
            mercury__digraph__Vertices_19 = (MR_Word) mercury__digraph__List_4_60;
#line 8964 "digraph.c"
            mercury__digraph__TypeCtorInfo_36_36 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 8966 "digraph.c"
            {
#line 8968 "digraph.c"
              mercury__digraph__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8970 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_37_37, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_36_36));
#line 8972 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_37_37, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_31));
#line 8974 "digraph.c"
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
              mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_95_104_111_53_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__set_0(mercury__digraph__TypeInfo_for_T_31, mercury__digraph__CliqKey_20, mercury__digraph__Clique_15, mercury__digraph__STATE_VARIABLE_CliqMap_0_3, &mercury__digraph__STATE_VARIABLE_CliqMap_28_28);
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
            MR_Word mercury__digraph__List_4_34;
#line 859 "digraph.m"
            MR_Integer mercury__digraph__V_5_37;
#line 859 "digraph.m"
            MR_Word mercury__digraph__List0_5_47;
#line 859 "digraph.m"
            MR_Word mercury__digraph__List_6_48;
#line 110 "list.opt"
            MR_Word mercury__digraph__conv0_List_4_34;
#line 68 "set_ordlist.opt"
            MR_Word mercury__digraph__conv1_List_6_48;
#line 869 "digraph.m"
            MR_Word mercury__digraph__conv2_Xs_18;

#line 861 "digraph.m"
            {
#line 861 "digraph.m"
              mercury__digraph__dfs_2_6_p_0(mercury__digraph__TypeInfo_for_T_26, mercury__digraph__GInv_2, mercury__digraph__X_11, mercury__digraph__STATE_VARIABLE_Visited_0_3, &mercury__digraph__STATE_VARIABLE_Visited_22_22, mercury__digraph__V_23_23, &mercury__digraph__CliqueList_16);
            }
#line 9102 "digraph.c"
            mercury__digraph__TypeCtorInfo_27_27 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 9104 "digraph.c"
            {
#line 9106 "digraph.c"
              mercury__digraph__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9108 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_28_28, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_27_27));
#line 9110 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_28_28, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_26));
#line 9112 "digraph.c"
            }
#line 78 "list.opt"
            {
#line 78 "list.opt"
              mercury__list__length_2_3_p_0(mercury__digraph__TypeInfo_28_28, (MR_Word) mercury__digraph__CliqueList_16, (MR_Integer) 0, &mercury__digraph__V_5_37);
            }
#line 110 "list.opt"
            {
#line 110 "list.opt"
              mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__digraph__TypeInfo_28_28, mercury__digraph__V_5_37, (MR_Word) mercury__digraph__CliqueList_16, &mercury__digraph__conv0_List_4_34);
            }
#line 110 "list.opt"
            mercury__digraph__List_4_34 = (MR_Word) mercury__digraph__conv0_List_4_34;
#line 26 "set_ordlist.opt"
            mercury__digraph__Clique_17 = (MR_Word) mercury__digraph__List_4_34;
#line 9128 "digraph.c"
            mercury__digraph__TypeCtorInfo_29_29 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 9130 "digraph.c"
            {
#line 9132 "digraph.c"
              mercury__digraph__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9134 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_30_30, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_29_29));
#line 9136 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_30_30, 1) = ((MR_Box) (mercury__digraph__TypeInfo_28_28));
#line 9138 "digraph.c"
            }
#line 67 "set_ordlist.opt"
            mercury__digraph__List0_5_47 = (MR_Word) mercury__digraph__STATE_VARIABLE_Cliques_0_4;
#line 68 "set_ordlist.opt"
            {
#line 68 "set_ordlist.opt"
              mercury__set_ordlist__insert_2_3_p_0(mercury__digraph__TypeInfo_30_30, (MR_Word) mercury__digraph__List0_5_47, ((MR_Box) (mercury__digraph__Clique_17)), &mercury__digraph__conv1_List_6_48);
            }
#line 68 "set_ordlist.opt"
            mercury__digraph__List_6_48 = (MR_Word) mercury__digraph__conv1_List_6_48;
#line 67 "set_ordlist.opt"
            mercury__digraph__STATE_VARIABLE_Cliques_24_24 = (MR_Word) mercury__digraph__List_6_48;
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

#line 9232 "digraph.c"
        {
#line 9234 "digraph.c"
          mercury__digraph__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9236 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_21_21, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_20_20));
#line 9238 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_21_21, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_19));
#line 9240 "digraph.c"
        }
#line 9242 "digraph.c"
        {
#line 9244 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9246 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_22));
#line 9248 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_19));
#line 9250 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 2) = ((MR_Box) (mercury__digraph__TypeInfo_21_21));
#line 9252 "digraph.c"
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
            MR_Word mercury__digraph__Set0_6_31 = (MR_Word) mercury__digraph__STATE_VARIABLE_Comp_0_15;
#line 820 "digraph.m"
            MR_Integer mercury__digraph__V_9_33;
#line 820 "digraph.m"
            MR_Word mercury__digraph__Set_5_34;
#line 820 "digraph.m"
            MR_Word mercury__digraph__Set1_4_38;
#line 820 "digraph.m"
            MR_Word mercury__digraph__Set2_5_39;
#line 820 "digraph.m"
            MR_Word mercury__digraph__Set1_4_44;
#line 820 "digraph.m"
            MR_Word mercury__digraph__Set2_5_45;
#line 820 "digraph.m"
            MR_Word mercury__digraph__Set1_4_50;
#line 820 "digraph.m"
            MR_Word mercury__digraph__Set2_5_51;
#line 820 "digraph.m"
            MR_Word mercury__digraph__V_6_52;
#line 9303 "digraph.c"
            MR_Box MR_CALL (* mercury__digraph__func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9305 "digraph.c"
            MR_Box mercury__digraph__conv3_V_9_33;

#line 9308 "digraph.c"
            {
#line 9310 "digraph.c"
              mercury__digraph__conv3_V_9_33 = mercury__digraph__func_2(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_23), ((MR_Box) (mercury__digraph__X_8)));
            }
#line 9313 "digraph.c"
            mercury__digraph__V_9_33 = ((MR_Integer) mercury__digraph__conv3_V_9_33);
#line 170 "sparse_bitset.opt"
            {
#line 170 "sparse_bitset.opt"
              mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__Set0_6_31, mercury__digraph__V_9_33, &mercury__digraph__Set_5_34);
            }
#line 171 "sparse_bitset.opt"
            mercury__digraph__STATE_VARIABLE_Comp_17_17 = (MR_Word) mercury__digraph__Set_5_34;
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
#line 210 "sparse_bitset.opt"
            mercury__digraph__Set1_4_38 = (MR_Word) mercury__digraph__FwdSet_10;
#line 210 "sparse_bitset.opt"
            mercury__digraph__Set2_5_39 = (MR_Word) mercury__digraph__BwdSet_11;
#line 211 "sparse_bitset.opt"
            {
#line 211 "sparse_bitset.opt"
              mercury__digraph__Set1_4_44 = mercury__sparse_bitset__union_2_2_f_0(mercury__digraph__Set1_4_38, mercury__digraph__Set2_5_39);
            }
#line 222 "sparse_bitset.opt"
            mercury__digraph__Set2_5_45 = (MR_Word) mercury__digraph__STATE_VARIABLE_Comp_17_17;
#line 223 "sparse_bitset.opt"
            {
#line 223 "sparse_bitset.opt"
              mercury__digraph__Set2_5_51 = mercury__sparse_bitset__difference_2_2_f_0(mercury__digraph__Set1_4_44, mercury__digraph__Set2_5_45);
            }
#line 210 "sparse_bitset.opt"
            mercury__digraph__Set1_4_50 = (MR_Word) mercury__digraph__Keys1_9;
#line 211 "sparse_bitset.opt"
            {
#line 211 "sparse_bitset.opt"
              mercury__digraph__V_6_52 = mercury__sparse_bitset__union_2_2_f_0(mercury__digraph__Set1_4_50, mercury__digraph__Set2_5_51);
            }
#line 210 "sparse_bitset.opt"
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
#line 826 "digraph.m"
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

#line 9431 "digraph.c"
        {
#line 9433 "digraph.c"
          mercury__digraph__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9435 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_21_21, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_20_20));
#line 9437 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_21_21, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_19));
#line 9439 "digraph.c"
        }
#line 9441 "digraph.c"
        {
#line 9443 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9445 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_22));
#line 9447 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_19));
#line 9449 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 2) = ((MR_Box) (mercury__digraph__TypeInfo_21_21));
#line 9451 "digraph.c"
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
            MR_Word mercury__digraph__Set0_6_44 = (MR_Word) mercury__digraph__V_4_34;
#line 804 "digraph.m"
            MR_Integer mercury__digraph__V_9_46;
#line 804 "digraph.m"
            MR_Word mercury__digraph__Set_5_47;
#line 804 "digraph.m"
            MR_Word mercury__digraph__List0_5_52;
#line 804 "digraph.m"
            MR_Word mercury__digraph__List_6_53;
#line 804 "digraph.m"
            MR_Word mercury__digraph__Set1_4_57;
#line 804 "digraph.m"
            MR_Word mercury__digraph__Set2_5_58;
#line 804 "digraph.m"
            MR_Word mercury__digraph__V_6_59;
#line 9508 "digraph.c"
            MR_Box MR_CALL (* mercury__digraph__func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9510 "digraph.c"
            MR_Box mercury__digraph__conv3_V_9_46;
#line 807 "digraph.m"
            MR_Word mercury__digraph__conv4_V_16_16;
#line 68 "set_ordlist.opt"
            MR_Word mercury__digraph__conv5_List_6_53;

#line 9517 "digraph.c"
            {
#line 9519 "digraph.c"
              mercury__digraph__conv3_V_9_46 = mercury__digraph__func_2(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_23), ((MR_Box) (mercury__digraph__X_8)));
            }
#line 9522 "digraph.c"
            mercury__digraph__V_9_46 = ((MR_Integer) mercury__digraph__conv3_V_9_46);
#line 170 "sparse_bitset.opt"
            {
#line 170 "sparse_bitset.opt"
              mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__Set0_6_44, mercury__digraph__V_9_46, &mercury__digraph__Set_5_47);
            }
#line 171 "sparse_bitset.opt"
            mercury__digraph__Keys0_11 = (MR_Word) mercury__digraph__Set_5_47;
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
#line 9543 "digraph.c"
            mercury__digraph__TypeCtorInfo_28_28 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 9545 "digraph.c"
            {
#line 9547 "digraph.c"
              mercury__digraph__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9549 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_28_28));
#line 9551 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 1) = ((MR_Box) (mercury__digraph__TypeInfo_21_21));
#line 9553 "digraph.c"
            }
#line 67 "set_ordlist.opt"
            mercury__digraph__List0_5_52 = (MR_Word) mercury__digraph__STATE_VARIABLE_Components_0_14;
#line 68 "set_ordlist.opt"
            {
#line 68 "set_ordlist.opt"
              mercury__set_ordlist__insert_2_3_p_0(mercury__digraph__TypeInfo_29_29, (MR_Word) mercury__digraph__List0_5_52, ((MR_Box) (mercury__digraph__V_16_16)), &mercury__digraph__conv5_List_6_53);
            }
#line 68 "set_ordlist.opt"
            mercury__digraph__List_6_53 = (MR_Word) mercury__digraph__conv5_List_6_53;
#line 67 "set_ordlist.opt"
            mercury__digraph__STATE_VARIABLE_Components_17_17 = (MR_Word) mercury__digraph__List_6_53;
#line 222 "sparse_bitset.opt"
            mercury__digraph__Set1_4_57 = (MR_Word) mercury__digraph__Xs1_9;
#line 222 "sparse_bitset.opt"
            mercury__digraph__Set2_5_58 = (MR_Word) mercury__digraph__Comp_12;
#line 223 "sparse_bitset.opt"
            {
#line 223 "sparse_bitset.opt"
              mercury__digraph__V_6_59 = mercury__sparse_bitset__difference_2_2_f_0(mercury__digraph__Set1_4_57, mercury__digraph__Set2_5_58);
            }
#line 222 "sparse_bitset.opt"
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
#line 809 "digraph.m"
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

#line 9635 "digraph.c"
    {
#line 9637 "digraph.c"
      mercury__digraph__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9639 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_19_19, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_18_18));
#line 9641 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_19_19, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
#line 9643 "digraph.c"
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
        MR_Word mercury__digraph__Set_3_34;
#line 781 "digraph.m"
        MR_Integer mercury__digraph__V_5_35;
#line 9670 "digraph.c"
        MR_Box MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box);
#line 9672 "digraph.c"
        MR_Box mercury__digraph__conv1_V_5_35;

#line 9675 "digraph.c"
        {
#line 9677 "digraph.c"
          mercury__digraph__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9679 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_21_21, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_20_20));
#line 9681 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_21_21, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
#line 9683 "digraph.c"
        }
#line 9685 "digraph.c"
        {
#line 9687 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9689 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_22));
#line 9691 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
#line 9693 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 2) = ((MR_Box) (mercury__digraph__TypeInfo_21_21));
#line 9695 "digraph.c"
        }
#line 162 "sparse_bitset.opt"
        mercury__digraph__Set_3_34 = (MR_Word) mercury__digraph__STATE_VARIABLE_Visited_0_11;
#line 9699 "digraph.c"
        mercury__digraph__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9701 "digraph.c"
        {
#line 9703 "digraph.c"
          mercury__digraph__conv1_V_5_35 = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_23), ((MR_Box) (mercury__digraph__X_8)));
        }
#line 9706 "digraph.c"
        mercury__digraph__V_5_35 = ((MR_Integer) mercury__digraph__conv1_V_5_35);
#line 164 "sparse_bitset.opt"
        {
#line 164 "sparse_bitset.opt"
          mercury__digraph__succeeded = mercury__sparse_bitset__contains_search_nodes_2_p_0(mercury__digraph__Set_3_34, mercury__digraph__V_5_35);
        }
#line 783 "digraph.m"
        if (mercury__digraph__succeeded)
#line 781 "digraph.m"
          {
#line 781 "digraph.m"
            *mercury__digraph__STATE_VARIABLE_Visited_12 = mercury__digraph__STATE_VARIABLE_Visited_0_11;
#line 781 "digraph.m"
            mercury__digraph__succeeded = MR_TRUE;
#line 781 "digraph.m"
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
            MR_Word mercury__digraph__Set0_6_42;
#line 784 "digraph.m"
            MR_Integer mercury__digraph__V_9_44;
#line 784 "digraph.m"
            MR_Word mercury__digraph__Set_5_45;
#line 9747 "digraph.c"
            MR_Box MR_CALL (* mercury__digraph__func_2)(MR_Box, MR_Box);
#line 9749 "digraph.c"
            MR_Box mercury__digraph__conv3_V_9_44;

#line 784 "digraph.m"
            {
#line 784 "digraph.m"
              mercury__digraph__lookup_key_set_from_3_p_0(mercury__digraph__TypeInfo_for_T_17, mercury__digraph__G_6, mercury__digraph__X_8, &mercury__digraph__SuccXs_10);
            }
#line 9757 "digraph.c"
            mercury__digraph__BaseTypeClassInfo_for_enum_26 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 9759 "digraph.c"
            mercury__digraph__TypeCtorInfo_24_24 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 9761 "digraph.c"
            {
#line 9763 "digraph.c"
              mercury__digraph__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9765 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_24_24));
#line 9767 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
#line 9769 "digraph.c"
            }
#line 9771 "digraph.c"
            {
#line 9773 "digraph.c"
              mercury__digraph__TypeClassInfo_for_enum_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9775 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_27, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_26));
#line 9777 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_27, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
#line 9779 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_27, 2) = ((MR_Box) (mercury__digraph__TypeInfo_25_25));
#line 9781 "digraph.c"
            }
#line 168 "sparse_bitset.opt"
            mercury__digraph__Set0_6_42 = (MR_Word) mercury__digraph__STATE_VARIABLE_Visited_0_11;
#line 9785 "digraph.c"
            mercury__digraph__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9787 "digraph.c"
            {
#line 9789 "digraph.c"
              mercury__digraph__conv3_V_9_44 = mercury__digraph__func_2(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_27), ((MR_Box) (mercury__digraph__X_8)));
            }
#line 9792 "digraph.c"
            mercury__digraph__V_9_44 = ((MR_Integer) mercury__digraph__conv3_V_9_44);
#line 170 "sparse_bitset.opt"
            {
#line 170 "sparse_bitset.opt"
              mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__Set0_6_42, mercury__digraph__V_9_44, &mercury__digraph__Set_5_45);
            }
#line 171 "sparse_bitset.opt"
            mercury__digraph__STATE_VARIABLE_Visited_13_13 = (MR_Word) mercury__digraph__Set_5_45;
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
              return mercury__digraph__succeeded = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_53_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_17, mercury__digraph__G_6, mercury__digraph__V_16_16, mercury__digraph__TypeClassInfo_for_enum_27, mercury__digraph__SuccXs_10, mercury__digraph__STATE_VARIABLE_Visited_13_13, mercury__digraph__STATE_VARIABLE_Visited_12);
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
    MR_Word mercury__digraph__Set0_6_25;
#line 747 "digraph.m"
    MR_Integer mercury__digraph__V_9_27;
#line 747 "digraph.m"
    MR_Word mercury__digraph__Set_5_28;
#line 749 "digraph.m"
    MR_Box mercury__digraph__conv0_Y_9;
#line 9866 "digraph.c"
    MR_Box MR_CALL (* mercury__digraph__func_1)(MR_Box, MR_Box);
#line 9868 "digraph.c"
    MR_Box mercury__digraph__conv2_V_9_27;

#line 9871 "digraph.c"
    {
#line 9873 "digraph.c"
      mercury__digraph__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9875 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_15_15));
#line 9877 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
#line 9879 "digraph.c"
    }
#line 749 "digraph.m"
    {
#line 749 "digraph.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_16_16, (MR_Word) mercury__digraph__KMap_5, mercury__digraph__XI_8, &mercury__digraph__conv0_Y_9);
    }
#line 749 "digraph.m"
    mercury__digraph__Y_9 = ((MR_Word) mercury__digraph__conv0_Y_9);
#line 9888 "digraph.c"
    mercury__digraph__BaseTypeClassInfo_for_enum_17 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 9890 "digraph.c"
    {
#line 9892 "digraph.c"
      mercury__digraph__TypeClassInfo_for_enum_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9894 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_18, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_17));
#line 9896 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_18, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
#line 9898 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_18, 2) = ((MR_Box) (mercury__digraph__TypeInfo_16_16));
#line 9900 "digraph.c"
    }
#line 168 "sparse_bitset.opt"
    mercury__digraph__Set0_6_25 = (MR_Word) mercury__digraph__STATE_VARIABLE_Set_0_10;
#line 9904 "digraph.c"
    mercury__digraph__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9906 "digraph.c"
    {
#line 9908 "digraph.c"
      mercury__digraph__conv2_V_9_27 = mercury__digraph__func_1(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_18), ((MR_Box) (mercury__digraph__Y_9)));
    }
#line 9911 "digraph.c"
    mercury__digraph__V_9_27 = ((MR_Integer) mercury__digraph__conv2_V_9_27);
#line 170 "sparse_bitset.opt"
    {
#line 170 "sparse_bitset.opt"
      mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__Set0_6_25, mercury__digraph__V_9_27, &mercury__digraph__Set_5_28);
    }
#line 171 "sparse_bitset.opt"
    *mercury__digraph__STATE_VARIABLE_Set_11 = (MR_Word) mercury__digraph__Set_5_28;
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
    MR_Word mercury__digraph__Set_6_35;
#line 734 "digraph.m"
    MR_Word mercury__digraph__Set_6_58;

#line 9971 "digraph.c"
    {
#line 9973 "digraph.c"
      mercury__digraph__TypeInfo_14_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9975 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_49, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_13_25));
#line 9977 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_49, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_16));
#line 9979 "digraph.c"
    }
#line 114 "sparse_bitset.opt"
    mercury__digraph__V_2_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 113 "sparse_bitset.opt"
    mercury__digraph__V_21_21 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 9985 "digraph.c"
    mercury__digraph__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 9987 "digraph.c"
    {
#line 9989 "digraph.c"
      mercury__digraph__TypeClassInfo_for_enum_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9991 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_51, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_27));
#line 9993 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_51, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_16));
#line 9995 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_51, 2) = ((MR_Box) (mercury__digraph__TypeInfo_14_49));
#line 9997 "digraph.c"
    }
#line 254 "sparse_bitset.opt"
    mercury__digraph__Set_6_35 = (MR_Word) mercury__digraph__Xs_8;
#line 255 "sparse_bitset.opt"
    {
#line 255 "sparse_bitset.opt"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_16, mercury__digraph__KMap1_6, mercury__digraph__TypeClassInfo_for_enum_51, mercury__digraph__Set_6_35, mercury__digraph__V_21_21, &mercury__digraph__V_13_13);
    }
#line 254 "sparse_bitset.opt"
    mercury__digraph__Set_6_58 = (MR_Word) mercury__digraph__Ys_9;
#line 255 "sparse_bitset.opt"
    {
#line 255 "sparse_bitset.opt"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_16, mercury__digraph__KMap2_7, mercury__digraph__TypeClassInfo_for_enum_51, mercury__digraph__Set_6_58, mercury__digraph__V_21_21, &mercury__digraph__V_14_14);
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
    MR_Word mercury__digraph__Set1_4_22 = (MR_Word) mercury__digraph__Xs_6;
#line 717 "digraph.m"
    MR_Word mercury__digraph__Set2_5_23 = (MR_Word) mercury__digraph__STATE_VARIABLE_Needed1_0_10;
#line 717 "digraph.m"
    MR_Word mercury__digraph__V_6_24;
#line 717 "digraph.m"
    MR_Word mercury__digraph__Set1_4_28;
#line 717 "digraph.m"
    MR_Word mercury__digraph__Set2_5_29;
#line 717 "digraph.m"
    MR_Word mercury__digraph__V_6_30;

#line 211 "sparse_bitset.opt"
    {
#line 211 "sparse_bitset.opt"
      mercury__digraph__V_6_24 = mercury__sparse_bitset__union_2_2_f_0(mercury__digraph__Set1_4_22, mercury__digraph__Set2_5_23);
    }
#line 210 "sparse_bitset.opt"
    *mercury__digraph__STATE_VARIABLE_Needed1_11 = (MR_Word) mercury__digraph__V_6_24;
#line 210 "sparse_bitset.opt"
    mercury__digraph__Set1_4_28 = (MR_Word) mercury__digraph__Ys_7;
#line 210 "sparse_bitset.opt"
    mercury__digraph__Set2_5_29 = (MR_Word) mercury__digraph__STATE_VARIABLE_Needed2_0_12;
#line 211 "sparse_bitset.opt"
    {
#line 211 "sparse_bitset.opt"
      mercury__digraph__V_6_30 = mercury__sparse_bitset__union_2_2_f_0(mercury__digraph__Set1_4_28, mercury__digraph__Set2_5_29);
    }
#line 210 "sparse_bitset.opt"
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
    MR_Word mercury__digraph__Reverse_4_14;
#line 666 "digraph.m"
    MR_Word mercury__digraph__V_5_19;
#line 667 "digraph.m"
    MR_Integer mercury__digraph__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 667 "digraph.m"
    MR_Word mercury__digraph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 667 "digraph.m"
    MR_Word mercury__digraph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
#line 56 "bimap.opt"
    MR_Word mercury__digraph__V_3_13;
#line 70 "tree234.opt"
    MR_Word mercury__digraph__conv0_Keys_4;

#line 10122 "digraph.c"
    {
#line 10124 "digraph.c"
      mercury__digraph__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10126 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_11, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_10));
#line 10128 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_11, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_9));
#line 10130 "digraph.c"
    }
#line 56 "bimap.opt"
    mercury__digraph__V_3_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_5_5, (MR_Integer) 0)));
#line 56 "bimap.opt"
    mercury__digraph__Reverse_4_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_5_5, (MR_Integer) 1)));
#line 69 "tree234.opt"
    mercury__digraph__V_5_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__digraph__TypeInfo_11_11, mercury__digraph__TypeInfo_for_T_9, (MR_Word) mercury__digraph__Reverse_4_14, (MR_Word) mercury__digraph__V_5_19, &mercury__digraph__conv0_Keys_4);
    }
#line 70 "tree234.opt"
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
    MR_Word mercury__digraph__Set_3_40;
#line 644 "digraph.m"
    MR_Integer mercury__digraph__V_5_41;
#line 10185 "digraph.c"
    MR_Box MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box);
#line 10187 "digraph.c"
    MR_Box mercury__digraph__conv1_V_5_41;

#line 10190 "digraph.c"
    {
#line 10192 "digraph.c"
      mercury__digraph__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10194 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_23, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_22_22));
#line 10196 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_21));
#line 10198 "digraph.c"
    }
#line 10200 "digraph.c"
    {
#line 10202 "digraph.c"
      mercury__digraph__TypeClassInfo_for_enum_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10204 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_25, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_24));
#line 10206 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_25, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_21));
#line 10208 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_25, 2) = ((MR_Box) (mercury__digraph__TypeInfo_23_23));
#line 10210 "digraph.c"
    }
#line 162 "sparse_bitset.opt"
    mercury__digraph__Set_3_40 = (MR_Word) mercury__digraph__STATE_VARIABLE_Visited_0_12;
#line 10214 "digraph.c"
    mercury__digraph__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_25, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10216 "digraph.c"
    {
#line 10218 "digraph.c"
      mercury__digraph__conv1_V_5_41 = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_25), ((MR_Box) (mercury__digraph__X_8)));
    }
#line 10221 "digraph.c"
    mercury__digraph__V_5_41 = ((MR_Integer) mercury__digraph__conv1_V_5_41);
#line 164 "sparse_bitset.opt"
    {
#line 164 "sparse_bitset.opt"
      mercury__digraph__succeeded = mercury__sparse_bitset__contains_search_nodes_2_p_0(mercury__digraph__Set_3_40, mercury__digraph__V_5_41);
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
        MR_Word mercury__digraph__Set0_6_45;
#line 647 "digraph.m"
        MR_Integer mercury__digraph__V_9_47;
#line 647 "digraph.m"
        MR_Word mercury__digraph__Set_5_48;
#line 10262 "digraph.c"
        MR_Box MR_CALL (* mercury__digraph__func_2)(MR_Box, MR_Box);
#line 10264 "digraph.c"
        MR_Box mercury__digraph__conv3_V_9_47;

#line 647 "digraph.m"
        {
#line 647 "digraph.m"
          mercury__digraph__lookup_key_set_from_3_p_0(mercury__digraph__TypeInfo_for_T_21, mercury__digraph__G_7, mercury__digraph__X_8, &mercury__digraph__SuccXs_11);
        }
#line 10272 "digraph.c"
        mercury__digraph__BaseTypeClassInfo_for_enum_28 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 10274 "digraph.c"
        mercury__digraph__TypeCtorInfo_26_26 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 10276 "digraph.c"
        {
#line 10278 "digraph.c"
          mercury__digraph__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10280 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_26_26));
#line 10282 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_21));
#line 10284 "digraph.c"
        }
#line 10286 "digraph.c"
        {
#line 10288 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10290 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_28));
#line 10292 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_21));
#line 10294 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, 2) = ((MR_Box) (mercury__digraph__TypeInfo_27_27));
#line 10296 "digraph.c"
        }
#line 168 "sparse_bitset.opt"
        mercury__digraph__Set0_6_45 = (MR_Word) mercury__digraph__STATE_VARIABLE_Visited_0_12;
#line 10300 "digraph.c"
        mercury__digraph__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10302 "digraph.c"
        {
#line 10304 "digraph.c"
          mercury__digraph__conv3_V_9_47 = mercury__digraph__func_2(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__X_8)));
        }
#line 10307 "digraph.c"
        mercury__digraph__V_9_47 = ((MR_Integer) mercury__digraph__conv3_V_9_47);
#line 170 "sparse_bitset.opt"
        {
#line 170 "sparse_bitset.opt"
          mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__Set0_6_45, mercury__digraph__V_9_47, &mercury__digraph__Set_5_48);
        }
#line 171 "sparse_bitset.opt"
        mercury__digraph__STATE_VARIABLE_Visited_16_16 = (MR_Word) mercury__digraph__Set_5_48;
#line 651 "digraph.m"
        {
#line 651 "digraph.m"
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_53_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_21, mercury__digraph__G_7, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__SuccXs_11, mercury__digraph__STATE_VARIABLE_Visited_16_16, mercury__digraph__STATE_VARIABLE_Visited_13, mercury__digraph__STATE_VARIABLE_DfsRev_0_14, &mercury__digraph__STATE_VARIABLE_DfsRev_19_19);
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
        MR_Word mercury__digraph__Set_6_38;
#line 585 "digraph.m"
        MR_Box mercury__digraph__conv0_SuccXs_13;

#line 584 "digraph.m"
        {
#line 584 "digraph.m"
          mercury__digraph__to_key_assoc_list_2_4_p_0(mercury__digraph__TypeInfo_for_T_20, mercury__digraph__HeadVar__1_1, mercury__digraph__XIs_11, mercury__digraph__STATE_VARIABLE_AL_0_3, &mercury__digraph__STATE_VARIABLE_AL_16_16);
        }
#line 10402 "digraph.c"
        mercury__digraph__TypeCtorInfo_24_24 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 10404 "digraph.c"
        mercury__digraph__TypeCtorInfo_22_22 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 10406 "digraph.c"
        {
#line 10408 "digraph.c"
          mercury__digraph__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10410 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_23, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_22_22));
#line 10412 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_20));
#line 10414 "digraph.c"
        }
#line 10416 "digraph.c"
        {
#line 10418 "digraph.c"
          mercury__digraph__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10420 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_24_24));
#line 10422 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 1) = ((MR_Box) (mercury__digraph__TypeInfo_23_23));
#line 10424 "digraph.c"
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
#line 10435 "digraph.c"
        mercury__digraph__BaseTypeClassInfo_for_enum_29 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 10437 "digraph.c"
        {
#line 10439 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10441 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_30, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_29));
#line 10443 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_30, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_20));
#line 10445 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_30, 2) = ((MR_Box) (mercury__digraph__TypeInfo_23_23));
#line 10447 "digraph.c"
        }
#line 269 "sparse_bitset.opt"
        mercury__digraph__Set_6_38 = (MR_Word) mercury__digraph__SuccXs_13;
#line 270 "sparse_bitset.opt"
        {
#line 270 "sparse_bitset.opt"
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__V_19_19, mercury__digraph__TypeClassInfo_for_enum_30, mercury__digraph__Set_6_38, mercury__digraph__STATE_VARIABLE_AL_16_16, mercury__digraph__STATE_VARIABLE_AL_4);
#line 270 "sparse_bitset.opt"
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
        MR_Word mercury__digraph__Reverse_5_42;
#line 557 "digraph.m"
        MR_Word mercury__digraph__Set_6_46;
#line 48 "bimap.opt"
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
#line 10535 "digraph.c"
        mercury__digraph__TypeCtorInfo_25_25 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 10537 "digraph.c"
        {
#line 10539 "digraph.c"
          mercury__digraph__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10541 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_26_26, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_25_25));
#line 10543 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_26_26, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_24));
#line 10545 "digraph.c"
        }
#line 48 "bimap.opt"
        mercury__digraph__V_4_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__VMap_3, (MR_Integer) 0)));
#line 48 "bimap.opt"
        mercury__digraph__Reverse_5_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__VMap_3, (MR_Integer) 1)));
#line 49 "bimap.opt"
        {
#line 49 "bimap.opt"
          mercury__map__lookup_3_p_0(mercury__digraph__TypeInfo_26_26, mercury__digraph__TypeInfo_for_T_24, (MR_Word) mercury__digraph__Reverse_5_42, ((MR_Box) (mercury__digraph__V_21_21)), &mercury__digraph__VX_16);
        }
#line 10556 "digraph.c"
        mercury__digraph__TypeCtorInfo_28_28 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 10558 "digraph.c"
        {
#line 10560 "digraph.c"
          mercury__digraph__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10562 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_28_28));
#line 10564 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 1) = ((MR_Box) (mercury__digraph__TypeInfo_26_26));
#line 10566 "digraph.c"
        }
#line 560 "digraph.m"
        {
#line 560 "digraph.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_29_29, (MR_Word) mercury__digraph__HeadVar__1_1, mercury__digraph__XI_12, &mercury__digraph__conv0_SuccXs_17);
        }
#line 560 "digraph.m"
        mercury__digraph__SuccXs_17 = ((MR_Word) mercury__digraph__conv0_SuccXs_17);
#line 10575 "digraph.c"
        mercury__digraph__BaseTypeClassInfo_for_enum_33 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 10577 "digraph.c"
        {
#line 10579 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10581 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_34, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_33));
#line 10583 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_34, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_24));
#line 10585 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_34, 2) = ((MR_Box) (mercury__digraph__TypeInfo_26_26));
#line 10587 "digraph.c"
        }
#line 269 "sparse_bitset.opt"
        mercury__digraph__Set_6_46 = (MR_Word) mercury__digraph__SuccXs_17;
#line 270 "sparse_bitset.opt"
        {
#line 270 "sparse_bitset.opt"
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_24, mercury__digraph__VMap_3, mercury__digraph__VX_16, mercury__digraph__TypeClassInfo_for_enum_34, mercury__digraph__Set_6_46, mercury__digraph__STATE_VARIABLE_AL_20_20, mercury__digraph__STATE_VARIABLE_AL_5);
#line 270 "sparse_bitset.opt"
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
#line 41 "map.opt"
    MR_Box mercury__digraph__conv0_SuccXs0_9;

#line 10637 "digraph.c"
    {
#line 10639 "digraph.c"
      mercury__digraph__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10641 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_14, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_13_13));
#line 10643 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_14, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_11));
#line 10645 "digraph.c"
    }
#line 10647 "digraph.c"
    {
#line 10649 "digraph.c"
      mercury__digraph__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10651 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_15_15));
#line 10653 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 1) = ((MR_Box) (mercury__digraph__TypeInfo_14_14));
#line 10655 "digraph.c"
    }
#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_16_16, (MR_Word) mercury__digraph__Map0_5, mercury__digraph__XI_6, &mercury__digraph__conv0_SuccXs0_9);
    }
#line 41 "map.opt"
    if (mercury__digraph__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__digraph__SuccXs0_9 = ((MR_Word) mercury__digraph__conv0_SuccXs0_9);
#line 41 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 41 "map.opt"
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
        MR_Word mercury__digraph__Set0_6_46;
#line 387 "digraph.m"
        MR_Integer mercury__digraph__V_9_48;
#line 387 "digraph.m"
        MR_Word mercury__digraph__Set1_4_50;
#line 387 "digraph.m"
        MR_Word mercury__digraph__Set2_5_51;
#line 387 "digraph.m"
        MR_Word mercury__digraph__V_6_52;
#line 10694 "digraph.c"
        MR_Box MR_CALL (* mercury__digraph__func_1)(MR_Box, MR_Box);
#line 10696 "digraph.c"
        MR_Box mercury__digraph__conv2_V_9_48;

#line 10699 "digraph.c"
        {
#line 10701 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10703 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_20, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_19));
#line 10705 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_20, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_11));
#line 10707 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_20, 2) = ((MR_Box) (mercury__digraph__TypeInfo_14_14));
#line 10709 "digraph.c"
        }
#line 114 "sparse_bitset.opt"
        mercury__digraph__Set0_6_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10713 "digraph.c"
        mercury__digraph__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10715 "digraph.c"
        {
#line 10717 "digraph.c"
          mercury__digraph__conv2_V_9_48 = mercury__digraph__func_1(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_20), ((MR_Box) (mercury__digraph__Y_7)));
        }
#line 10720 "digraph.c"
        mercury__digraph__V_9_48 = ((MR_Integer) mercury__digraph__conv2_V_9_48);
#line 170 "sparse_bitset.opt"
        {
#line 170 "sparse_bitset.opt"
          mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__Set0_6_46, mercury__digraph__V_9_48, &mercury__digraph__Set2_5_51);
        }
#line 222 "sparse_bitset.opt"
        mercury__digraph__Set1_4_50 = (MR_Word) mercury__digraph__SuccXs0_9;
#line 223 "sparse_bitset.opt"
        {
#line 223 "sparse_bitset.opt"
          mercury__digraph__V_6_52 = mercury__sparse_bitset__difference_2_2_f_0(mercury__digraph__Set1_4_50, mercury__digraph__Set2_5_51);
        }
#line 222 "sparse_bitset.opt"
        mercury__digraph__SuccXs_10 = (MR_Word) mercury__digraph__V_6_52;
#line 10736 "digraph.c"
        mercury__digraph__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 91 "map.opt"
        {
#line 91 "map.opt"
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
#line 41 "map.opt"
    MR_Box mercury__digraph__conv0_SuccXs0_9;

#line 10788 "digraph.c"
    {
#line 10790 "digraph.c"
      mercury__digraph__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10792 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_15_15));
#line 10794 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
#line 10796 "digraph.c"
    }
#line 10798 "digraph.c"
    {
#line 10800 "digraph.c"
      mercury__digraph__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10802 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_18_18, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_17_17));
#line 10804 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_18_18, 1) = ((MR_Box) (mercury__digraph__TypeInfo_16_16));
#line 10806 "digraph.c"
    }
#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_18_18, (MR_Word) mercury__digraph__Map0_5, mercury__digraph__XI_6, &mercury__digraph__conv0_SuccXs0_9);
    }
#line 41 "map.opt"
    if (mercury__digraph__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__digraph__SuccXs0_9 = ((MR_Word) mercury__digraph__conv0_SuccXs0_9);
#line 41 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 41 "map.opt"
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
        MR_Word mercury__digraph__Set_3_42;
#line 370 "digraph.m"
        MR_Integer mercury__digraph__V_5_43;
#line 10835 "digraph.c"
        MR_Box MR_CALL (* mercury__digraph__func_1)(MR_Box, MR_Box);
#line 10837 "digraph.c"
        MR_Box mercury__digraph__conv2_V_5_43;

#line 10840 "digraph.c"
        {
#line 10842 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10844 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_22, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_21));
#line 10846 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_22, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
#line 10848 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_22, 2) = ((MR_Box) (mercury__digraph__TypeInfo_16_16));
#line 10850 "digraph.c"
        }
#line 162 "sparse_bitset.opt"
        mercury__digraph__Set_3_42 = (MR_Word) mercury__digraph__SuccXs0_9;
#line 10854 "digraph.c"
        mercury__digraph__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_22, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10856 "digraph.c"
        {
#line 10858 "digraph.c"
          mercury__digraph__conv2_V_5_43 = mercury__digraph__func_1(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_22), ((MR_Box) (mercury__digraph__Y_7)));
        }
#line 10861 "digraph.c"
        mercury__digraph__V_5_43 = ((MR_Integer) mercury__digraph__conv2_V_5_43);
#line 164 "sparse_bitset.opt"
        {
#line 164 "sparse_bitset.opt"
          mercury__digraph__succeeded = mercury__sparse_bitset__contains_search_nodes_2_p_0(mercury__digraph__Set_3_42, mercury__digraph__V_5_43);
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
            MR_Word mercury__digraph__Set0_6_47;
#line 373 "digraph.m"
            MR_Integer mercury__digraph__V_9_49;
#line 373 "digraph.m"
            MR_Word mercury__digraph__Set_5_50;
#line 10890 "digraph.c"
            MR_Box MR_CALL (* mercury__digraph__func_3)(MR_Box, MR_Box);
#line 10892 "digraph.c"
            MR_Box mercury__digraph__conv4_V_9_49;

#line 10895 "digraph.c"
            {
#line 10897 "digraph.c"
              mercury__digraph__TypeClassInfo_for_enum_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10899 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_26, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_25));
#line 10901 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_26, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
#line 10903 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_26, 2) = ((MR_Box) (mercury__digraph__TypeInfo_16_16));
#line 10905 "digraph.c"
            }
#line 168 "sparse_bitset.opt"
            mercury__digraph__Set0_6_47 = (MR_Word) mercury__digraph__SuccXs0_9;
#line 10909 "digraph.c"
            mercury__digraph__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_26, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10911 "digraph.c"
            {
#line 10913 "digraph.c"
              mercury__digraph__conv4_V_9_49 = mercury__digraph__func_3(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_26), ((MR_Box) (mercury__digraph__Y_7)));
            }
#line 10916 "digraph.c"
            mercury__digraph__V_9_49 = ((MR_Integer) mercury__digraph__conv4_V_9_49);
#line 170 "sparse_bitset.opt"
            {
#line 170 "sparse_bitset.opt"
              mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__Set0_6_47, mercury__digraph__V_9_49, &mercury__digraph__Set_5_50);
            }
#line 171 "sparse_bitset.opt"
            mercury__digraph__SuccXs_10 = (MR_Word) mercury__digraph__Set_5_50;
#line 10925 "digraph.c"
            mercury__digraph__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 91 "map.opt"
            {
#line 91 "map.opt"
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
        MR_Word mercury__digraph__Set0_6_60;
#line 377 "digraph.m"
        MR_Integer mercury__digraph__V_9_62;
#line 377 "digraph.m"
        MR_Word mercury__digraph__Set_5_63;
#line 10962 "digraph.c"
        MR_Box MR_CALL (* mercury__digraph__func_5)(MR_Box, MR_Box);
#line 10964 "digraph.c"
        MR_Box mercury__digraph__conv6_V_9_62;

#line 10967 "digraph.c"
        {
#line 10969 "digraph.c"
          mercury__digraph__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10971 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_31_31, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_30_30));
#line 10973 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_31_31, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
#line 10975 "digraph.c"
        }
#line 114 "sparse_bitset.opt"
        mercury__digraph__Set0_6_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10979 "digraph.c"
        mercury__digraph__BaseTypeClassInfo_for_enum_32 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 10981 "digraph.c"
        {
#line 10983 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10985 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_33, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_32));
#line 10987 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_33, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
#line 10989 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_33, 2) = ((MR_Box) (mercury__digraph__TypeInfo_31_31));
#line 10991 "digraph.c"
        }
#line 10993 "digraph.c"
        mercury__digraph__func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_33, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10995 "digraph.c"
        {
#line 10997 "digraph.c"
          mercury__digraph__conv6_V_9_62 = mercury__digraph__func_5(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_33), ((MR_Box) (mercury__digraph__Y_7)));
        }
#line 11000 "digraph.c"
        mercury__digraph__V_9_62 = ((MR_Integer) mercury__digraph__conv6_V_9_62);
#line 170 "sparse_bitset.opt"
        {
#line 170 "sparse_bitset.opt"
          mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__Set0_6_60, mercury__digraph__V_9_62, &mercury__digraph__Set_5_63);
        }
#line 171 "sparse_bitset.opt"
        mercury__digraph__SuccXs_12 = (MR_Word) mercury__digraph__Set_5_63;
#line 11009 "digraph.c"
        mercury__digraph__TypeCtorInfo_34_34 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 11011 "digraph.c"
        mercury__digraph__TypeCtorInfo_35_35 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 11013 "digraph.c"
        {
#line 11015 "digraph.c"
          mercury__digraph__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11017 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_36_36, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_35_35));
#line 11019 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_36_36, 1) = ((MR_Box) (mercury__digraph__TypeInfo_31_31));
#line 11021 "digraph.c"
        }
#line 77 "map.opt"
        {
#line 77 "map.opt"
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
    MR_Word mercury__digraph__Reverse_4_26;
#line 1090 "digraph.m"
    MR_Word mercury__digraph__V_5_31;
#line 667 "digraph.m"
    MR_Integer mercury__digraph__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_6, (MR_Integer) 0)));
#line 667 "digraph.m"
    MR_Word mercury__digraph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_6, (MR_Integer) 2)));
#line 667 "digraph.m"
    MR_Word mercury__digraph__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_6, (MR_Integer) 3)));
#line 56 "bimap.opt"
    MR_Word mercury__digraph__V_3_25;
#line 70 "tree234.opt"
    MR_Word mercury__digraph__conv0_Keys_10;

#line 11083 "digraph.c"
    {
#line 11085 "digraph.c"
      mercury__digraph__TypeInfo_11_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11087 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_23, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_22));
#line 11089 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_14));
#line 11091 "digraph.c"
    }
#line 56 "bimap.opt"
    mercury__digraph__V_3_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_18_18, (MR_Integer) 0)));
#line 56 "bimap.opt"
    mercury__digraph__Reverse_4_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_18_18, (MR_Integer) 1)));
#line 69 "tree234.opt"
    mercury__digraph__V_5_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__digraph__TypeInfo_11_23, mercury__digraph__TypeInfo_for_T_14, (MR_Word) mercury__digraph__Reverse_4_26, (MR_Word) mercury__digraph__V_5_31, &mercury__digraph__conv0_Keys_10);
    }
#line 70 "tree234.opt"
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
    MR_Word mercury__digraph__Reverse_4_26;
#line 1090 "digraph.m"
    MR_Word mercury__digraph__V_5_31;
#line 667 "digraph.m"
    MR_Integer mercury__digraph__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_6, (MR_Integer) 0)));
#line 667 "digraph.m"
    MR_Word mercury__digraph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_6, (MR_Integer) 2)));
#line 667 "digraph.m"
    MR_Word mercury__digraph__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_6, (MR_Integer) 3)));
#line 56 "bimap.opt"
    MR_Word mercury__digraph__V_3_25;
#line 70 "tree234.opt"
    MR_Word mercury__digraph__conv0_Keys_10;

#line 11164 "digraph.c"
    {
#line 11166 "digraph.c"
      mercury__digraph__TypeInfo_11_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11168 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_23, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_22));
#line 11170 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_14));
#line 11172 "digraph.c"
    }
#line 56 "bimap.opt"
    mercury__digraph__V_3_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_18_18, (MR_Integer) 0)));
#line 56 "bimap.opt"
    mercury__digraph__Reverse_4_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_18_18, (MR_Integer) 1)));
#line 69 "tree234.opt"
    mercury__digraph__V_5_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__digraph__TypeInfo_11_23, mercury__digraph__TypeInfo_for_T_14, (MR_Word) mercury__digraph__Reverse_4_26, (MR_Word) mercury__digraph__V_5_31, &mercury__digraph__conv0_Keys_10);
    }
#line 70 "tree234.opt"
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
#line 11248 "digraph.c"
    mercury__digraph__TypeCtorInfo_7_25 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 11250 "digraph.c"
    {
#line 11252 "digraph.c"
      mercury__digraph__TypeInfo_8_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11254 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_26, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_25));
#line 11256 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_26, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_16));
#line 11258 "digraph.c"
    }
#line 623 "digraph.m"
    {
#line 623 "digraph.m"
      mercury__list__reverse_2_p_0(mercury__digraph__TypeInfo_8_26, (MR_Word) mercury__digraph__DfsRev_24, &mercury__digraph__conv0_Dfs_5);
    }
#line 623 "digraph.m"
    mercury__digraph__Dfs_5 = (MR_Word) mercury__digraph__conv0_Dfs_5;
#line 114 "sparse_bitset.opt"
    mercury__digraph__V_2_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 113 "sparse_bitset.opt"
    mercury__digraph__Vis_6 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1050 "digraph.m"
    mercury__digraph__NextKey_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 1050 "digraph.m"
    mercury__digraph__VMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
#line 1050 "digraph.m"
    mercury__digraph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 1050 "digraph.m"
    mercury__digraph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
#line 48 "tree234.opt"
    mercury__digraph__FwdMap_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 48 "tree234.opt"
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
    MR_Word mercury__digraph__Reverse_4_20;
#line 991 "digraph.m"
    MR_Word mercury__digraph__V_5_25;
#line 667 "digraph.m"
    MR_Integer mercury__digraph__V_13_13;
#line 667 "digraph.m"
    MR_Word mercury__digraph__V_14_14;
#line 667 "digraph.m"
    MR_Word mercury__digraph__V_15_15;
#line 56 "bimap.opt"
    MR_Word mercury__digraph__V_3_19;
#line 70 "tree234.opt"
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
#line 11394 "digraph.c"
    mercury__digraph__TypeCtorInfo_10_16 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 11396 "digraph.c"
    {
#line 11398 "digraph.c"
      mercury__digraph__TypeInfo_11_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11400 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_16));
#line 11402 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_9));
#line 11404 "digraph.c"
    }
#line 56 "bimap.opt"
    mercury__digraph__V_3_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_12_12, (MR_Integer) 0)));
#line 56 "bimap.opt"
    mercury__digraph__Reverse_4_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_12_12, (MR_Integer) 1)));
#line 69 "tree234.opt"
    mercury__digraph__V_5_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__digraph__TypeInfo_11_17, mercury__digraph__TypeInfo_for_T_9, (MR_Word) mercury__digraph__Reverse_4_20, (MR_Word) mercury__digraph__V_5_25, &mercury__digraph__conv0_Keys_6);
    }
#line 70 "tree234.opt"
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
#line 114 "sparse_bitset.opt"
    mercury__digraph__V_2_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 113 "sparse_bitset.opt"
    mercury__digraph__Vis_7 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 958 "digraph.m"
    mercury__digraph__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 958 "digraph.m"
    {
#line 958 "digraph.m"
      mercury__digraph__atsort_2_5_p_0(mercury__digraph__TypeInfo_for_T_10, mercury__digraph__DfsRev_5, mercury__digraph__GInv_6, mercury__digraph__Vis_7, mercury__digraph__V_9_9, &mercury__digraph__ATsort0_8);
    }
#line 11664 "digraph.c"
    mercury__digraph__TypeCtorInfo_13_13 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 11666 "digraph.c"
    {
#line 11668 "digraph.c"
      mercury__digraph__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11670 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_14, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_13_13));
#line 11672 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_14, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_10));
#line 11674 "digraph.c"
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
#line 114 "sparse_bitset.opt"
    mercury__digraph__V_2_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 113 "sparse_bitset.opt"
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
          *mercury__digraph__Tsort_4 = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_49_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_2_f_in__list_0(mercury__digraph__TypeInfo_for_T_8, mercury__digraph__G_3, mercury__digraph__Tsort0_5);
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
    MR_Word mercury__digraph__Forward_3_37;
#line 880 "digraph.m"
    MR_Word mercury__digraph__Reverse_4_38;

#line 881 "digraph.m"
    {
#line 881 "digraph.m"
      mercury__digraph__cliques_2_p_0(mercury__digraph__TypeInfo_for_T_17, mercury__digraph__G_4, &mercury__digraph__Cliques_7);
    }
#line 38 "set_ordlist.opt"
    mercury__digraph__CliqList_8 = (MR_Word) mercury__digraph__Cliques_7;
#line 48 "tree234.opt"
    mercury__digraph__Forward_3_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 48 "tree234.opt"
    mercury__digraph__Reverse_4_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 20 "bimap.opt"
    mercury__digraph__VMap_27 = (MR_Word) &mercury__digraph_scalar_common_4[1];
#line 48 "tree234.opt"
    mercury__digraph__FwdMap_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 48 "tree234.opt"
    mercury__digraph__BwdMap_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 398 "digraph.m"
    mercury__digraph__STATE_VARIABLE_R_12_12 = (MR_Word) &mercury__digraph_scalar_common_2[2];
#line 48 "tree234.opt"
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
#line 23 "set_ordlist.opt"
    mercury__digraph__V_2_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 22 "set_ordlist.opt"
    mercury__digraph__Cliques0_7 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 114 "sparse_bitset.opt"
    mercury__digraph__V_2_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 113 "sparse_bitset.opt"
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
    MR_Word mercury__digraph__Reverse_4_27;
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
#line 56 "bimap.opt"
    MR_Word mercury__digraph__V_3_26;
#line 70 "tree234.opt"
    MR_Word mercury__digraph__conv0_Keys_5;

#line 12076 "digraph.c"
    {
#line 12078 "digraph.c"
      mercury__digraph__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12080 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_12_12, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_23));
#line 12082 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_12_12, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_10));
#line 12084 "digraph.c"
    }
#line 56 "bimap.opt"
    mercury__digraph__V_3_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_19_19, (MR_Integer) 0)));
#line 56 "bimap.opt"
    mercury__digraph__Reverse_4_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_19_19, (MR_Integer) 1)));
#line 69 "tree234.opt"
    mercury__digraph__V_5_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__digraph__TypeInfo_12_12, mercury__digraph__TypeInfo_for_T_10, (MR_Word) mercury__digraph__Reverse_4_27, (MR_Word) mercury__digraph__V_5_32, &mercury__digraph__conv0_Keys_5);
    }
#line 70 "tree234.opt"
    mercury__digraph__Keys_5 = (MR_Word) mercury__digraph__conv0_Keys_5;
#line 12099 "digraph.c"
    mercury__digraph__BaseTypeClassInfo_for_enum_13 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 12101 "digraph.c"
    {
#line 12103 "digraph.c"
      mercury__digraph__TypeClassInfo_for_enum_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12105 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_14, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_13));
#line 12107 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_14, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_10));
#line 12109 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_14, 2) = ((MR_Box) (mercury__digraph__TypeInfo_12_12));
#line 12111 "digraph.c"
    }
#line 126 "sparse_bitset.opt"
    mercury__digraph__V_5_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 125 "sparse_bitset.opt"
    {
#line 125 "sparse_bitset.opt"
      mercury__digraph__V_4_37 = mercury__sparse_bitset__list_to_set_2_2_f_0(mercury__digraph__TypeClassInfo_for_enum_14, (MR_Word) mercury__digraph__Keys_5, mercury__digraph__V_5_38);
    }
#line 124 "sparse_bitset.opt"
    mercury__digraph__KeySet_6 = (MR_Word) mercury__digraph__V_4_37;
#line 23 "set_ordlist.opt"
    mercury__digraph__V_2_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 22 "set_ordlist.opt"
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
    MR_Word mercury__digraph__Reverse_4_26;
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
#line 56 "bimap.opt"
    MR_Word mercury__digraph__V_3_25;
#line 70 "tree234.opt"
    MR_Word mercury__digraph__conv0_Keys_3;
#line 772 "digraph.m"
    MR_Word mercury__digraph__V_4_4;

#line 12210 "digraph.c"
    {
#line 12212 "digraph.c"
      mercury__digraph__TypeInfo_11_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12214 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_23, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_22));
#line 12216 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_8));
#line 12218 "digraph.c"
    }
#line 56 "bimap.opt"
    mercury__digraph__V_3_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_18_18, (MR_Integer) 0)));
#line 56 "bimap.opt"
    mercury__digraph__Reverse_4_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_18_18, (MR_Integer) 1)));
#line 69 "tree234.opt"
    mercury__digraph__V_5_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__digraph__TypeInfo_11_23, mercury__digraph__TypeInfo_for_T_8, (MR_Word) mercury__digraph__Reverse_4_26, (MR_Word) mercury__digraph__V_5_31, &mercury__digraph__conv0_Keys_3);
    }
#line 70 "tree234.opt"
    mercury__digraph__Keys_3 = (MR_Word) mercury__digraph__conv0_Keys_3;
#line 772 "digraph.m"
    mercury__digraph__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 114 "sparse_bitset.opt"
    mercury__digraph__V_2_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 113 "sparse_bitset.opt"
    mercury__digraph__V_6_6 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 772 "digraph.m"
    {
#line 772 "digraph.m"
      mercury__digraph__succeeded = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_50_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__list_0(mercury__digraph__TypeInfo_for_T_8, mercury__digraph__G_2, mercury__digraph__V_7_7, mercury__digraph__Keys_3, mercury__digraph__V_6_6, &mercury__digraph__V_4_4);
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
    MR_Word mercury__digraph__Forward_3_81 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 683 "digraph.m"
    MR_Word mercury__digraph__Reverse_4_82 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 683 "digraph.m"
    MR_Word mercury__digraph__V_2_94;

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
#line 689 "digraph.m"
    {
#line 689 "digraph.m"
      mercury__digraph__Matches_9 = mercury__set__intersect_2_f_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__G1Vs_7, mercury__digraph__G2Vs_8);
    }
#line 12336 "digraph.c"
    mercury__digraph__TypeCtorInfo_39_39 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 12338 "digraph.c"
    {
#line 12340 "digraph.c"
      mercury__digraph__TypeInfo_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12342 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_40_40, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_39_39));
#line 12344 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_40_40, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_38));
#line 12346 "digraph.c"
    }
#line 38 "set_ordlist.opt"
    mercury__digraph__V_25_25 = (MR_Word) mercury__digraph__Matches_9;
#line 692 "digraph.m"
    {
#line 692 "digraph.m"
      mercury__digraph__AL_10 = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_2_f_in__list_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__G1_4, mercury__digraph__G2_5, mercury__digraph__V_25_25);
    }
#line 114 "sparse_bitset.opt"
    mercury__digraph__V_2_94 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 113 "sparse_bitset.opt"
    mercury__digraph__V_27_27 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 703 "digraph.m"
    {
#line 703 "digraph.m"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_54_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_53_93_95_48_6_p_in__list_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__AL_10, mercury__digraph__V_27_27, &mercury__digraph__Needed1_16, mercury__digraph__V_27_27, &mercury__digraph__Needed2_17);
    }
#line 12364 "digraph.c"
    mercury__digraph__TypeCtorInfo_55_55 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 48 "tree234.opt"
    mercury__digraph__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 12368 "digraph.c"
    mercury__digraph__BaseTypeClassInfo_for_enum_56 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 12370 "digraph.c"
    {
#line 12372 "digraph.c"
      mercury__digraph__TypeClassInfo_for_enum_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12374 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_57, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_56));
#line 12376 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_57, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_38));
#line 12378 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_57, 2) = ((MR_Box) (mercury__digraph__TypeInfo_40_40));
#line 12380 "digraph.c"
    }
#line 707 "digraph.m"
    {
#line 707 "digraph.m"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_54_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__G1_4, mercury__digraph__TypeClassInfo_for_enum_57, mercury__digraph__Needed1_16, mercury__digraph__STATE_VARIABLE_Comp_21_21, &mercury__digraph__STATE_VARIABLE_Comp_30_30, mercury__digraph__V_31_31, &mercury__digraph__KMap1_18);
    }
#line 708 "digraph.m"
    {
#line 708 "digraph.m"
      mercury__digraph__V_34_34 = mercury__map__init_0_f_0(mercury__digraph__TypeCtorInfo_55_55, mercury__digraph__TypeInfo_40_40);
    }
#line 708 "digraph.m"
    {
#line 708 "digraph.m"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_54_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__G2_5, mercury__digraph__TypeClassInfo_for_enum_57, mercury__digraph__Needed2_17, mercury__digraph__STATE_VARIABLE_Comp_30_30, &mercury__digraph__STATE_VARIABLE_Comp_33_33, mercury__digraph__V_34_34, &mercury__digraph__KMap2_19);
    }
#line 711 "digraph.m"
    {
#line 711 "digraph.m"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_4_p_in__list_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__KMap1_18, mercury__digraph__KMap2_19, mercury__digraph__AL_10, mercury__digraph__STATE_VARIABLE_Comp_33_33, mercury__digraph__STATE_VARIABLE_Comp_20);
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
    MR_Word mercury__digraph__Forward_3_14;
#line 660 "digraph.m"
    MR_Word mercury__digraph__V_5_20;
#line 660 "digraph.m"
    MR_Word mercury__digraph__List_4_25;
#line 661 "digraph.m"
    MR_Integer mercury__digraph__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 661 "digraph.m"
    MR_Word mercury__digraph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 661 "digraph.m"
    MR_Word mercury__digraph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
#line 52 "bimap.opt"
    MR_Word mercury__digraph__V_4_15;

#line 12569 "digraph.c"
    {
#line 12571 "digraph.c"
      mercury__digraph__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12573 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_12_12, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_11_11));
#line 12575 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_12_12, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_10));
#line 12577 "digraph.c"
    }
#line 52 "bimap.opt"
    mercury__digraph__Forward_3_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_6_6, (MR_Integer) 0)));
#line 52 "bimap.opt"
    mercury__digraph__V_4_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_6_6, (MR_Integer) 1)));
#line 69 "tree234.opt"
    mercury__digraph__V_5_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__digraph__TypeInfo_for_T_10, mercury__digraph__TypeInfo_12_12, mercury__digraph__Forward_3_14, mercury__digraph__V_5_20, &mercury__digraph__VsList_5);
    }
#line 58 "list.opt"
    if ((mercury__digraph__VsList_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 58 "list.opt"
      mercury__digraph__List_4_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 58 "list.opt"
    else
#line 59 "list.opt"
      {
#line 59 "list.opt"
        MR_Box mercury__digraph__X_3_26 = (MR_hl_field(MR_mktag(1), mercury__digraph__VsList_5, (MR_Integer) 0));
#line 59 "list.opt"
        MR_Word mercury__digraph__Xs_4_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__VsList_5, (MR_Integer) 1)));

#line 60 "list.opt"
        {
#line 60 "list.opt"
          mercury__list__remove_adjacent_dups_2_3_p_0(mercury__digraph__TypeInfo_for_T_10, mercury__digraph__Xs_4_27, mercury__digraph__X_3_26, &mercury__digraph__List_4_25);
        }
#line 59 "list.opt"
      }
#line 32 "set_ordlist.opt"
    *mercury__digraph__Vs_4 = (MR_Word) mercury__digraph__List_4_25;
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
#line 12718 "digraph.c"
    mercury__digraph__TypeCtorInfo_16_16 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 12720 "digraph.c"
    {
#line 12722 "digraph.c"
      mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12724 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
#line 12726 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_15));
#line 12728 "digraph.c"
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
    MR_Word mercury__digraph__Reverse_4_32;
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
#line 56 "bimap.opt"
    MR_Word mercury__digraph__V_3_31;
#line 70 "tree234.opt"
    MR_Word mercury__digraph__conv0_Keys_5;
#line 630 "digraph.m"
    MR_Word mercury__digraph__V_6_6;

#line 12788 "digraph.c"
    {
#line 12790 "digraph.c"
      mercury__digraph__TypeInfo_11_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12792 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_29, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_28));
#line 12794 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_29, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_10));
#line 12796 "digraph.c"
    }
#line 56 "bimap.opt"
    mercury__digraph__V_3_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_24_24, (MR_Integer) 0)));
#line 56 "bimap.opt"
    mercury__digraph__Reverse_4_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_24_24, (MR_Integer) 1)));
#line 69 "tree234.opt"
    mercury__digraph__V_5_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__digraph__TypeInfo_11_29, mercury__digraph__TypeInfo_for_T_10, (MR_Word) mercury__digraph__Reverse_4_32, (MR_Word) mercury__digraph__V_5_37, &mercury__digraph__conv0_Keys_5);
    }
#line 70 "tree234.opt"
    mercury__digraph__Keys_5 = (MR_Word) mercury__digraph__conv0_Keys_5;
#line 114 "sparse_bitset.opt"
    mercury__digraph__V_2_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 113 "sparse_bitset.opt"
    mercury__digraph__V_8_8 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 630 "digraph.m"
    mercury__digraph__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 630 "digraph.m"
    {
#line 630 "digraph.m"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_54_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_6_p_in__list_0(mercury__digraph__TypeInfo_for_T_10, mercury__digraph__G_3, mercury__digraph__Keys_5, mercury__digraph__V_8_8, &mercury__digraph__V_6_6, mercury__digraph__V_9_9, mercury__digraph__DfsRev_4);
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
#line 12884 "digraph.c"
    mercury__digraph__TypeCtorInfo_7_7 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 12886 "digraph.c"
    {
#line 12888 "digraph.c"
      mercury__digraph__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12890 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_7));
#line 12892 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_6));
#line 12894 "digraph.c"
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
#line 12937 "digraph.c"
    mercury__digraph__TypeCtorInfo_7_9 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 12939 "digraph.c"
    {
#line 12941 "digraph.c"
      mercury__digraph__TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12943 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_10, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_9));
#line 12945 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_10, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_5));
#line 12947 "digraph.c"
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
#line 13076 "digraph.c"
    mercury__digraph__TypeCtorInfo_9_9 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 13078 "digraph.c"
    {
#line 13080 "digraph.c"
      mercury__digraph__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13082 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_9_9));
#line 13084 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_8));
#line 13086 "digraph.c"
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
    MR_Word mercury__digraph__Forward_3_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 598 "digraph.m"
    MR_Word mercury__digraph__Reverse_4_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 599 "digraph.m"
    {
#line 599 "digraph.m"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_56_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_93_95_48_4_p_in__list_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__AL_3, mercury__digraph__V_6_6, mercury__digraph__G_4);
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

#line 13238 "digraph.c"
    {
#line 13240 "digraph.c"
      mercury__digraph__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13242 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_14, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_13_13));
#line 13244 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_14, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_11));
#line 13246 "digraph.c"
    }
#line 13248 "digraph.c"
    {
#line 13250 "digraph.c"
      mercury__digraph__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13252 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_15_15));
#line 13254 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 1) = ((MR_Box) (mercury__digraph__TypeInfo_14_14));
#line 13256 "digraph.c"
    }
#line 69 "tree234.opt"
    mercury__digraph__V_5_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
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

#line 13355 "digraph.c"
    {
#line 13357 "digraph.c"
      mercury__digraph__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13359 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_18_18, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_17_17));
#line 13361 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_18_18, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_15));
#line 13363 "digraph.c"
    }
#line 13365 "digraph.c"
    {
#line 13367 "digraph.c"
      mercury__digraph__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13369 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_20_20, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_19_19));
#line 13371 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_20_20, 1) = ((MR_Box) (mercury__digraph__TypeInfo_18_18));
#line 13373 "digraph.c"
    }
#line 69 "tree234.opt"
    mercury__digraph__V_5_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
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
#line 41 "map.opt"
    MR_Box mercury__digraph__conv0_Xs0_7;

#line 13472 "digraph.c"
    {
#line 13474 "digraph.c"
      mercury__digraph__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13476 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
#line 13478 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
#line 13480 "digraph.c"
    }
#line 13482 "digraph.c"
    {
#line 13484 "digraph.c"
      mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13486 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
#line 13488 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 13490 "digraph.c"
    }
#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_17_17, (MR_Word) mercury__digraph__V_8_8, mercury__digraph__YI_5, &mercury__digraph__conv0_Xs0_7);
    }
#line 41 "map.opt"
    if (mercury__digraph__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__digraph__Xs0_7 = ((MR_Word) mercury__digraph__conv0_Xs0_7);
#line 41 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 41 "map.opt"
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

#line 113 "sparse_bitset.opt"
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
    MR_Word mercury__digraph__Set_6_39;
#line 528 "digraph.m"
    MR_Word mercury__digraph__List_4_61;
#line 268 "sparse_bitset.opt"
    MR_Word mercury__digraph__conv0_V_4_14;

#line 13597 "digraph.c"
    {
#line 13599 "digraph.c"
      mercury__digraph__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13601 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_8_8));
#line 13603 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_7));
#line 13605 "digraph.c"
    }
#line 13607 "digraph.c"
    {
#line 13609 "digraph.c"
      mercury__digraph__TypeClassInfo_for_enum_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13611 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_11, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_10));
#line 13613 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_11, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_7));
#line 13615 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_11, 2) = ((MR_Box) (mercury__digraph__TypeInfo_9_9));
#line 13617 "digraph.c"
    }
#line 529 "digraph.m"
    {
#line 529 "digraph.m"
      mercury__digraph__lookup_key_set_to_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__Y_5, &mercury__digraph__Xs_6);
    }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__digraph__lookup_to_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__digraph__TypeClassInfo_for_enum_11 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 13639 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__TypeInfo_8_16  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 146 "sparse_bitset.opt"
    mercury__digraph__V_10_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 258 "sparse_bitset.opt"
    mercury__digraph__Set_6_39 = (MR_Word) mercury__digraph__Xs_6;
#line 268 "sparse_bitset.opt"
    {
#line 268 "sparse_bitset.opt"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeClassInfo_for_enum_11, mercury__digraph__Set_6_39, (MR_Word) mercury__digraph__V_10_20, &mercury__digraph__conv0_V_4_14);
    }
#line 268 "sparse_bitset.opt"
    mercury__digraph__V_4_14 = (MR_Word) mercury__digraph__conv0_V_4_14;
#line 58 "list.opt"
    if ((mercury__digraph__V_4_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 58 "list.opt"
      mercury__digraph__List_4_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 58 "list.opt"
    else
#line 59 "list.opt"
      {
#line 59 "list.opt"
        MR_Word mercury__digraph__X_3_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__V_4_14, (MR_Integer) 0)));
#line 59 "list.opt"
        MR_Word mercury__digraph__Xs_4_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__V_4_14, (MR_Integer) 1)));
#line 60 "list.opt"
        MR_Word mercury__digraph__conv1_List_4_61;

#line 60 "list.opt"
        {
#line 60 "list.opt"
          mercury__list__remove_adjacent_dups_2_3_p_0(mercury__digraph__TypeInfo_8_16, (MR_Word) mercury__digraph__Xs_4_63, ((MR_Box) (mercury__digraph__X_3_62)), &mercury__digraph__conv1_List_4_61);
        }
#line 60 "list.opt"
        mercury__digraph__List_4_61 = (MR_Word) mercury__digraph__conv1_List_4_61;
#line 59 "list.opt"
      }
#line 32 "set_ordlist.opt"
    *mercury__digraph__HeadVar__3_3 = (MR_Word) mercury__digraph__List_4_61;
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
#line 41 "map.opt"
    MR_Box mercury__digraph__conv0_Ys0_7;

#line 13758 "digraph.c"
    {
#line 13760 "digraph.c"
      mercury__digraph__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13762 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
#line 13764 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
#line 13766 "digraph.c"
    }
#line 13768 "digraph.c"
    {
#line 13770 "digraph.c"
      mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13772 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
#line 13774 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 13776 "digraph.c"
    }
#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_17_17, (MR_Word) mercury__digraph__V_8_8, mercury__digraph__XI_5, &mercury__digraph__conv0_Ys0_7);
    }
#line 41 "map.opt"
    if (mercury__digraph__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__digraph__Ys0_7 = ((MR_Word) mercury__digraph__conv0_Ys0_7);
#line 41 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 41 "map.opt"
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

#line 113 "sparse_bitset.opt"
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
    MR_Word mercury__digraph__Set_6_39;
#line 512 "digraph.m"
    MR_Word mercury__digraph__List_4_61;
#line 268 "sparse_bitset.opt"
    MR_Word mercury__digraph__conv0_V_4_14;

#line 13883 "digraph.c"
    {
#line 13885 "digraph.c"
      mercury__digraph__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13887 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_8_8));
#line 13889 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_7));
#line 13891 "digraph.c"
    }
#line 13893 "digraph.c"
    {
#line 13895 "digraph.c"
      mercury__digraph__TypeClassInfo_for_enum_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13897 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_11, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_10));
#line 13899 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_11, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_7));
#line 13901 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_11, 2) = ((MR_Box) (mercury__digraph__TypeInfo_9_9));
#line 13903 "digraph.c"
    }
#line 513 "digraph.m"
    {
#line 513 "digraph.m"
      mercury__digraph__lookup_key_set_from_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__X_5, &mercury__digraph__Ys_6);
    }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__digraph__lookup_from_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__digraph__TypeClassInfo_for_enum_11 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 13925 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__TypeInfo_8_16  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 146 "sparse_bitset.opt"
    mercury__digraph__V_10_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 258 "sparse_bitset.opt"
    mercury__digraph__Set_6_39 = (MR_Word) mercury__digraph__Ys_6;
#line 268 "sparse_bitset.opt"
    {
#line 268 "sparse_bitset.opt"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeClassInfo_for_enum_11, mercury__digraph__Set_6_39, (MR_Word) mercury__digraph__V_10_20, &mercury__digraph__conv0_V_4_14);
    }
#line 268 "sparse_bitset.opt"
    mercury__digraph__V_4_14 = (MR_Word) mercury__digraph__conv0_V_4_14;
#line 58 "list.opt"
    if ((mercury__digraph__V_4_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 58 "list.opt"
      mercury__digraph__List_4_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 58 "list.opt"
    else
#line 59 "list.opt"
      {
#line 59 "list.opt"
        MR_Word mercury__digraph__X_3_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__V_4_14, (MR_Integer) 0)));
#line 59 "list.opt"
        MR_Word mercury__digraph__Xs_4_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__V_4_14, (MR_Integer) 1)));
#line 60 "list.opt"
        MR_Word mercury__digraph__conv1_List_4_61;

#line 60 "list.opt"
        {
#line 60 "list.opt"
          mercury__list__remove_adjacent_dups_2_3_p_0(mercury__digraph__TypeInfo_8_16, (MR_Word) mercury__digraph__Xs_4_63, ((MR_Box) (mercury__digraph__X_3_62)), &mercury__digraph__conv1_List_4_61);
        }
#line 60 "list.opt"
        mercury__digraph__List_4_61 = (MR_Word) mercury__digraph__conv1_List_4_61;
#line 59 "list.opt"
      }
#line 32 "set_ordlist.opt"
    *mercury__digraph__HeadVar__3_3 = (MR_Word) mercury__digraph__List_4_61;
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
#line 41 "map.opt"
    MR_Box mercury__digraph__conv0_XSet_7;

#line 14048 "digraph.c"
    {
#line 14050 "digraph.c"
      mercury__digraph__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14052 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
#line 14054 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
#line 14056 "digraph.c"
    }
#line 14058 "digraph.c"
    {
#line 14060 "digraph.c"
      mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14062 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
#line 14064 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 14066 "digraph.c"
    }
#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_17_17, (MR_Word) mercury__digraph__V_8_8, mercury__digraph__YI_6, &mercury__digraph__conv0_XSet_7);
    }
#line 41 "map.opt"
    if (mercury__digraph__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__digraph__XSet_7 = ((MR_Word) mercury__digraph__conv0_XSet_7);
#line 41 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 41 "map.opt"
      }
#line 503 "digraph.m"
    if (mercury__digraph__succeeded)
#line 503 "digraph.m"
      {
#line 14087 "digraph.c"
        mercury__digraph__BaseTypeClassInfo_for_enum_18 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 14089 "digraph.c"
        {
#line 14091 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 14093 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_18));
#line 14095 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
#line 14097 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 2) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 14099 "digraph.c"
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
#line 41 "map.opt"
      MR_Box mercury__digraph__conv0_XSet_7;

#line 14200 "digraph.c"
      {
#line 14202 "digraph.c"
        mercury__digraph__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14204 "digraph.c"
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
#line 14206 "digraph.c"
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
#line 14208 "digraph.c"
      }
#line 14210 "digraph.c"
      {
#line 14212 "digraph.c"
        mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14214 "digraph.c"
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
#line 14216 "digraph.c"
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 14218 "digraph.c"
      }
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_17_17, (MR_Word) mercury__digraph__V_8_8, mercury__digraph__YI_6, &mercury__digraph__conv0_XSet_7);
      }
#line 41 "map.opt"
      if (mercury__digraph__succeeded)
#line 41 "map.opt"
        {
#line 41 "map.opt"
          mercury__digraph__XSet_7 = ((MR_Word) mercury__digraph__conv0_XSet_7);
#line 41 "map.opt"
          mercury__digraph__succeeded = MR_TRUE;
#line 41 "map.opt"
        }
#line 503 "digraph.m"
      if (mercury__digraph__succeeded)
#line 503 "digraph.m"
        {
#line 14239 "digraph.c"
          mercury__digraph__BaseTypeClassInfo_for_enum_18 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 14241 "digraph.c"
          {
#line 14243 "digraph.c"
            mercury__digraph__TypeClassInfo_for_enum_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 14245 "digraph.c"
            MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_18));
#line 14247 "digraph.c"
            MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
#line 14249 "digraph.c"
            MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 2) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 14251 "digraph.c"
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
#line 41 "map.opt"
    MR_Box mercury__digraph__conv0_YSet_7;

#line 14311 "digraph.c"
    {
#line 14313 "digraph.c"
      mercury__digraph__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14315 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
#line 14317 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
#line 14319 "digraph.c"
    }
#line 14321 "digraph.c"
    {
#line 14323 "digraph.c"
      mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14325 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
#line 14327 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 14329 "digraph.c"
    }
#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_17_17, (MR_Word) mercury__digraph__V_8_8, mercury__digraph__XI_5, &mercury__digraph__conv0_YSet_7);
    }
#line 41 "map.opt"
    if (mercury__digraph__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__digraph__YSet_7 = ((MR_Word) mercury__digraph__conv0_YSet_7);
#line 41 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 41 "map.opt"
      }
#line 499 "digraph.m"
    if (mercury__digraph__succeeded)
#line 499 "digraph.m"
      {
#line 14350 "digraph.c"
        mercury__digraph__BaseTypeClassInfo_for_enum_18 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 14352 "digraph.c"
        {
#line 14354 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 14356 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_18));
#line 14358 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
#line 14360 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 2) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 14362 "digraph.c"
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
#line 41 "map.opt"
      MR_Box mercury__digraph__conv0_YSet_7;

#line 14463 "digraph.c"
      {
#line 14465 "digraph.c"
        mercury__digraph__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14467 "digraph.c"
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
#line 14469 "digraph.c"
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
#line 14471 "digraph.c"
      }
#line 14473 "digraph.c"
      {
#line 14475 "digraph.c"
        mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14477 "digraph.c"
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
#line 14479 "digraph.c"
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 14481 "digraph.c"
      }
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_17_17, (MR_Word) mercury__digraph__V_8_8, mercury__digraph__XI_5, &mercury__digraph__conv0_YSet_7);
      }
#line 41 "map.opt"
      if (mercury__digraph__succeeded)
#line 41 "map.opt"
        {
#line 41 "map.opt"
          mercury__digraph__YSet_7 = ((MR_Word) mercury__digraph__conv0_YSet_7);
#line 41 "map.opt"
          mercury__digraph__succeeded = MR_TRUE;
#line 41 "map.opt"
        }
#line 499 "digraph.m"
      if (mercury__digraph__succeeded)
#line 499 "digraph.m"
        {
#line 14502 "digraph.c"
          mercury__digraph__BaseTypeClassInfo_for_enum_18 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 14504 "digraph.c"
          {
#line 14506 "digraph.c"
            mercury__digraph__TypeClassInfo_for_enum_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 14508 "digraph.c"
            MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_18));
#line 14510 "digraph.c"
            MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
#line 14512 "digraph.c"
            MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 2) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 14514 "digraph.c"
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
#line 41 "map.opt"
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

#line 14706 "digraph.c"
    {
#line 14708 "digraph.c"
      mercury__digraph__TypeInfo_14_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14710 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_41, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_13_40));
#line 14712 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_41, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_32));
#line 14714 "digraph.c"
    }
#line 14716 "digraph.c"
    {
#line 14718 "digraph.c"
      mercury__digraph__TypeInfo_16_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14720 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_43, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_15_42));
#line 14722 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_43, 1) = ((MR_Box) (mercury__digraph__TypeInfo_14_41));
#line 14724 "digraph.c"
    }
#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_16_43, (MR_Word) mercury__digraph__V_14_14, mercury__digraph__XI_8, &mercury__digraph__conv0_SuccXs0_37);
    }
#line 41 "map.opt"
    if (mercury__digraph__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__digraph__SuccXs0_37 = ((MR_Word) mercury__digraph__conv0_SuccXs0_37);
#line 41 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 41 "map.opt"
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
        MR_Word mercury__digraph__Set0_6_73;
#line 387 "digraph.m"
        MR_Integer mercury__digraph__V_9_75;
#line 387 "digraph.m"
        MR_Word mercury__digraph__Set1_4_77;
#line 387 "digraph.m"
        MR_Word mercury__digraph__Set2_5_78;
#line 387 "digraph.m"
        MR_Word mercury__digraph__V_6_79;
#line 14763 "digraph.c"
        MR_Box MR_CALL (* mercury__digraph__func_1)(MR_Box, MR_Box);
#line 14765 "digraph.c"
        MR_Box mercury__digraph__conv2_V_9_75;

#line 14768 "digraph.c"
        {
#line 14770 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 14772 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_47, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_46));
#line 14774 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_47, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_32));
#line 14776 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_47, 2) = ((MR_Box) (mercury__digraph__TypeInfo_14_41));
#line 14778 "digraph.c"
        }
#line 114 "sparse_bitset.opt"
        mercury__digraph__Set0_6_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 14782 "digraph.c"
        mercury__digraph__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14784 "digraph.c"
        {
#line 14786 "digraph.c"
          mercury__digraph__conv2_V_9_75 = mercury__digraph__func_1(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_47), ((MR_Box) (mercury__digraph__Y_6)));
        }
#line 14789 "digraph.c"
        mercury__digraph__V_9_75 = ((MR_Integer) mercury__digraph__conv2_V_9_75);
#line 170 "sparse_bitset.opt"
        {
#line 170 "sparse_bitset.opt"
          mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__Set0_6_73, mercury__digraph__V_9_75, &mercury__digraph__Set2_5_78);
        }
#line 222 "sparse_bitset.opt"
        mercury__digraph__Set1_4_77 = (MR_Word) mercury__digraph__SuccXs0_37;
#line 223 "sparse_bitset.opt"
        {
#line 223 "sparse_bitset.opt"
          mercury__digraph__V_6_79 = mercury__sparse_bitset__difference_2_2_f_0(mercury__digraph__Set1_4_77, mercury__digraph__Set2_5_78);
        }
#line 222 "sparse_bitset.opt"
        mercury__digraph__SuccXs_38 = (MR_Word) mercury__digraph__V_6_79;
#line 14805 "digraph.c"
        mercury__digraph__TypeCtorInfo_21_48 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 91 "map.opt"
        {
#line 91 "map.opt"
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
#line 41 "map.opt"
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

#line 15288 "digraph.c"
    {
#line 15290 "digraph.c"
      mercury__digraph__TypeInfo_16_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15292 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_43, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_15_42));
#line 15294 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_43, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_32));
#line 15296 "digraph.c"
    }
#line 15298 "digraph.c"
    {
#line 15300 "digraph.c"
      mercury__digraph__TypeInfo_18_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15302 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_18_45, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_17_44));
#line 15304 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_18_45, 1) = ((MR_Box) (mercury__digraph__TypeInfo_16_43));
#line 15306 "digraph.c"
    }
#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_18_45, (MR_Word) mercury__digraph__V_14_14, mercury__digraph__XI_8, &mercury__digraph__conv0_SuccXs0_37);
    }
#line 41 "map.opt"
    if (mercury__digraph__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__digraph__SuccXs0_37 = ((MR_Word) mercury__digraph__conv0_SuccXs0_37);
#line 41 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 41 "map.opt"
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
        MR_Word mercury__digraph__Set_3_69;
#line 370 "digraph.m"
        MR_Integer mercury__digraph__V_5_70;
#line 15335 "digraph.c"
        MR_Box MR_CALL (* mercury__digraph__func_1)(MR_Box, MR_Box);
#line 15337 "digraph.c"
        MR_Box mercury__digraph__conv2_V_5_70;

#line 15340 "digraph.c"
        {
#line 15342 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 15344 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_49, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_48));
#line 15346 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_49, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_32));
#line 15348 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_49, 2) = ((MR_Box) (mercury__digraph__TypeInfo_16_43));
#line 15350 "digraph.c"
        }
#line 162 "sparse_bitset.opt"
        mercury__digraph__Set_3_69 = (MR_Word) mercury__digraph__SuccXs0_37;
#line 15354 "digraph.c"
        mercury__digraph__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_49, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15356 "digraph.c"
        {
#line 15358 "digraph.c"
          mercury__digraph__conv2_V_5_70 = mercury__digraph__func_1(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_49), ((MR_Box) (mercury__digraph__Y_6)));
        }
#line 15361 "digraph.c"
        mercury__digraph__V_5_70 = ((MR_Integer) mercury__digraph__conv2_V_5_70);
#line 164 "sparse_bitset.opt"
        {
#line 164 "sparse_bitset.opt"
          mercury__digraph__succeeded = mercury__sparse_bitset__contains_search_nodes_2_p_0(mercury__digraph__Set_3_69, mercury__digraph__V_5_70);
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
            MR_Word mercury__digraph__Set0_6_74;
#line 373 "digraph.m"
            MR_Integer mercury__digraph__V_9_76;
#line 373 "digraph.m"
            MR_Word mercury__digraph__Set_5_77;
#line 15390 "digraph.c"
            MR_Box MR_CALL (* mercury__digraph__func_3)(MR_Box, MR_Box);
#line 15392 "digraph.c"
            MR_Box mercury__digraph__conv4_V_9_76;

#line 15395 "digraph.c"
            {
#line 15397 "digraph.c"
              mercury__digraph__TypeClassInfo_for_enum_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 15399 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_53, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_52));
#line 15401 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_53, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_32));
#line 15403 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_53, 2) = ((MR_Box) (mercury__digraph__TypeInfo_16_43));
#line 15405 "digraph.c"
            }
#line 168 "sparse_bitset.opt"
            mercury__digraph__Set0_6_74 = (MR_Word) mercury__digraph__SuccXs0_37;
#line 15409 "digraph.c"
            mercury__digraph__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_53, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15411 "digraph.c"
            {
#line 15413 "digraph.c"
              mercury__digraph__conv4_V_9_76 = mercury__digraph__func_3(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_53), ((MR_Box) (mercury__digraph__Y_6)));
            }
#line 15416 "digraph.c"
            mercury__digraph__V_9_76 = ((MR_Integer) mercury__digraph__conv4_V_9_76);
#line 170 "sparse_bitset.opt"
            {
#line 170 "sparse_bitset.opt"
              mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__Set0_6_74, mercury__digraph__V_9_76, &mercury__digraph__Set_5_77);
            }
#line 171 "sparse_bitset.opt"
            mercury__digraph__SuccXs_38 = (MR_Word) mercury__digraph__Set_5_77;
#line 15425 "digraph.c"
            mercury__digraph__TypeCtorInfo_27_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 91 "map.opt"
            {
#line 91 "map.opt"
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
        MR_Word mercury__digraph__Set0_6_87;
#line 377 "digraph.m"
        MR_Integer mercury__digraph__V_9_89;
#line 377 "digraph.m"
        MR_Word mercury__digraph__Set_5_90;
#line 15462 "digraph.c"
        MR_Box MR_CALL (* mercury__digraph__func_5)(MR_Box, MR_Box);
#line 15464 "digraph.c"
        MR_Box mercury__digraph__conv6_V_9_89;

#line 15467 "digraph.c"
        {
#line 15469 "digraph.c"
          mercury__digraph__TypeInfo_31_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15471 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_31_58, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_30_57));
#line 15473 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_31_58, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_32));
#line 15475 "digraph.c"
        }
#line 114 "sparse_bitset.opt"
        mercury__digraph__Set0_6_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 15479 "digraph.c"
        mercury__digraph__BaseTypeClassInfo_for_enum_59 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 15481 "digraph.c"
        {
#line 15483 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 15485 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_60, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_59));
#line 15487 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_60, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_32));
#line 15489 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_60, 2) = ((MR_Box) (mercury__digraph__TypeInfo_31_58));
#line 15491 "digraph.c"
        }
#line 15493 "digraph.c"
        mercury__digraph__func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_60, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15495 "digraph.c"
        {
#line 15497 "digraph.c"
          mercury__digraph__conv6_V_9_89 = mercury__digraph__func_5(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_60), ((MR_Box) (mercury__digraph__Y_6)));
        }
#line 15500 "digraph.c"
        mercury__digraph__V_9_89 = ((MR_Integer) mercury__digraph__conv6_V_9_89);
#line 170 "sparse_bitset.opt"
        {
#line 170 "sparse_bitset.opt"
          mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__Set0_6_87, mercury__digraph__V_9_89, &mercury__digraph__Set_5_90);
        }
#line 171 "sparse_bitset.opt"
        mercury__digraph__SuccXs_40 = (MR_Word) mercury__digraph__Set_5_90;
#line 15509 "digraph.c"
        mercury__digraph__TypeCtorInfo_34_61 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 15511 "digraph.c"
        mercury__digraph__TypeCtorInfo_35_62 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 15513 "digraph.c"
        {
#line 15515 "digraph.c"
          mercury__digraph__TypeInfo_36_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15517 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_36_63, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_35_62));
#line 15519 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_36_63, 1) = ((MR_Box) (mercury__digraph__TypeInfo_31_58));
#line 15521 "digraph.c"
        }
#line 77 "map.opt"
        {
#line 77 "map.opt"
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
    MR_Word mercury__digraph__Forward_4_20;
#line 439 "digraph.m"
    MR_Word mercury__digraph__Reverse_5_21;
#line 439 "digraph.m"
    MR_Word mercury__digraph__V_23_23;
#line 439 "digraph.m"
    MR_Integer mercury__digraph__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 0)));
#line 439 "digraph.m"
    MR_Word mercury__digraph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 2)));
#line 439 "digraph.m"
    MR_Word mercury__digraph__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 3)));
#line 41 "map.opt"
    MR_Box mercury__digraph__conv0_V_23_23;

#line 15660 "digraph.c"
    {
#line 15662 "digraph.c"
      mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15664 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
#line 15666 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_15));
#line 15668 "digraph.c"
    }
#line 31 "bimap.opt"
    mercury__digraph__Forward_4_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_8_8, (MR_Integer) 0)));
#line 31 "bimap.opt"
    mercury__digraph__Reverse_5_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_8_8, (MR_Integer) 1)));
#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_17_17, mercury__digraph__TypeInfo_for_T_15, (MR_Word) mercury__digraph__Reverse_5_21, ((MR_Box) (mercury__digraph__Key_5)), &mercury__digraph__Vertex0_7);
    }
#line 439 "digraph.m"
    if (mercury__digraph__succeeded)
#line 439 "digraph.m"
      {
#line 41 "map.opt"
        {
#line 41 "map.opt"
          mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_for_T_15, mercury__digraph__TypeInfo_17_17, mercury__digraph__Forward_4_20, mercury__digraph__Vertex0_7, &mercury__digraph__conv0_V_23_23);
        }
#line 41 "map.opt"
        if (mercury__digraph__succeeded)
#line 41 "map.opt"
          {
#line 41 "map.opt"
            mercury__digraph__V_23_23 = ((MR_Word) mercury__digraph__conv0_V_23_23);
#line 41 "map.opt"
            mercury__digraph__succeeded = MR_TRUE;
#line 41 "map.opt"
          }
#line 439 "digraph.m"
        if (mercury__digraph__succeeded)
#line 32 "bimap.opt"
          {
#line 32 "bimap.opt"
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
    MR_Word mercury__digraph__Forward_4_23;
#line 422 "digraph.m"
    MR_Word mercury__digraph__Reverse_5_24;
#line 422 "digraph.m"
    MR_Box mercury__digraph__V_25_25;
#line 423 "digraph.m"
    MR_Integer mercury__digraph__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 0)));
#line 423 "digraph.m"
    MR_Word mercury__digraph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 2)));
#line 423 "digraph.m"
    MR_Word mercury__digraph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 3)));
#line 41 "map.opt"
    MR_Box mercury__digraph__conv0_Key0_7;

#line 15799 "digraph.c"
    {
#line 15801 "digraph.c"
      mercury__digraph__TypeInfo_13_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15803 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_13_20, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_12_19));
#line 15805 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_13_20, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_11));
#line 15807 "digraph.c"
    }
#line 31 "bimap.opt"
    mercury__digraph__Forward_4_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_15_15, (MR_Integer) 0)));
#line 31 "bimap.opt"
    mercury__digraph__Reverse_5_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_15_15, (MR_Integer) 1)));
#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__TypeInfo_13_20, mercury__digraph__Forward_4_23, mercury__digraph__Vertex_5, &mercury__digraph__conv0_Key0_7);
    }
#line 41 "map.opt"
    if (mercury__digraph__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__digraph__Key0_7 = ((MR_Word) mercury__digraph__conv0_Key0_7);
#line 41 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 41 "map.opt"
      }
#line 422 "digraph.m"
    if (mercury__digraph__succeeded)
#line 422 "digraph.m"
      {
#line 41 "map.opt"
        {
#line 41 "map.opt"
          mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_13_20, mercury__digraph__TypeInfo_for_T_11, (MR_Word) mercury__digraph__Reverse_5_24, ((MR_Box) (mercury__digraph__Key0_7)), &mercury__digraph__V_25_25);
        }
#line 422 "digraph.m"
        if (mercury__digraph__succeeded)
#line 33 "bimap.opt"
          {
#line 33 "bimap.opt"
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
    MR_Word mercury__digraph__Forward_4_16;
#line 422 "digraph.m"
    MR_Word mercury__digraph__Reverse_5_17;
#line 422 "digraph.m"
    MR_Box mercury__digraph__V_18_18;
#line 423 "digraph.m"
    MR_Integer mercury__digraph__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 0)));
#line 423 "digraph.m"
    MR_Word mercury__digraph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 2)));
#line 423 "digraph.m"
    MR_Word mercury__digraph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 3)));
#line 41 "map.opt"
    MR_Box mercury__digraph__conv0_Key_6;

#line 15936 "digraph.c"
    {
#line 15938 "digraph.c"
      mercury__digraph__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15940 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_13_13, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_12_12));
#line 15942 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_13_13, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_11));
#line 15944 "digraph.c"
    }
#line 31 "bimap.opt"
    mercury__digraph__Forward_4_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_7_7, (MR_Integer) 0)));
#line 31 "bimap.opt"
    mercury__digraph__Reverse_5_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_7_7, (MR_Integer) 1)));
#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__TypeInfo_13_13, mercury__digraph__Forward_4_16, mercury__digraph__Vertex_5, &mercury__digraph__conv0_Key_6);
    }
#line 41 "map.opt"
    if (mercury__digraph__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        *mercury__digraph__Key_6 = ((MR_Word) mercury__digraph__conv0_Key_6);
#line 41 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 41 "map.opt"
      }
#line 422 "digraph.m"
    if (mercury__digraph__succeeded)
#line 422 "digraph.m"
      {
#line 41 "map.opt"
        {
#line 41 "map.opt"
          mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_13_13, mercury__digraph__TypeInfo_for_T_11, (MR_Word) mercury__digraph__Reverse_5_17, ((MR_Box) (*mercury__digraph__Key_6)), &mercury__digraph__V_18_18);
        }
#line 422 "digraph.m"
        if (mercury__digraph__succeeded)
#line 33 "bimap.opt"
          {
#line 33 "bimap.opt"
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
    MR_Word mercury__digraph__Forward_4_33;
#line 406 "digraph.m"
    MR_Word mercury__digraph__Reverse_5_34;
#line 406 "digraph.m"
    MR_Box mercury__digraph__V_35_35;
#line 406 "digraph.m"
    MR_Integer mercury__digraph__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_9, (MR_Integer) 0)));
#line 406 "digraph.m"
    MR_Word mercury__digraph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_9, (MR_Integer) 2)));
#line 406 "digraph.m"
    MR_Word mercury__digraph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_9, (MR_Integer) 3)));
#line 41 "map.opt"
    MR_Box mercury__digraph__conv0_Key0_8;

#line 16032 "digraph.c"
    {
#line 16034 "digraph.c"
      mercury__digraph__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 16036 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_28_28, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_27_27));
#line 16038 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_28_28, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_26));
#line 16040 "digraph.c"
    }
#line 31 "bimap.opt"
    mercury__digraph__Forward_4_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_11_11, (MR_Integer) 0)));
#line 31 "bimap.opt"
    mercury__digraph__Reverse_5_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_11_11, (MR_Integer) 1)));
#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_for_T_26, mercury__digraph__TypeInfo_28_28, mercury__digraph__Forward_4_33, mercury__digraph__Vertex_5, &mercury__digraph__conv0_Key0_8);
    }
#line 41 "map.opt"
    if (mercury__digraph__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__digraph__Key0_8 = ((MR_Word) mercury__digraph__conv0_Key0_8);
#line 41 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 41 "map.opt"
      }
#line 406 "digraph.m"
    if (mercury__digraph__succeeded)
#line 406 "digraph.m"
      {
#line 41 "map.opt"
        {
#line 41 "map.opt"
          mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_28_28, mercury__digraph__TypeInfo_for_T_26, (MR_Word) mercury__digraph__Reverse_5_34, ((MR_Box) (mercury__digraph__Key0_8)), &mercury__digraph__V_35_35);
        }
#line 406 "digraph.m"
        if (mercury__digraph__succeeded)
#line 33 "bimap.opt"
          {
#line 33 "bimap.opt"
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
#line 16138 "digraph.c"
        mercury__digraph__TypeCtorInfo_29_29 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 16140 "digraph.c"
        {
#line 16142 "digraph.c"
          mercury__digraph__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 16144 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_30_30, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_29_29));
#line 16146 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_30_30, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_26));
#line 16148 "digraph.c"
        }
#line 75 "bimap.opt"
        {
#line 75 "bimap.opt"
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
    MR_Word mercury__digraph__Forward_3_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 398 "digraph.m"
    MR_Word mercury__digraph__Reverse_4_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

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
    MR_Word mercury__digraph__Forward_3_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 398 "digraph.m"
    MR_Word mercury__digraph__Reverse_4_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

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
