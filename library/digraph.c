/*
** Automatically generated from `digraph.m'
** by the Mercury compiler,
** version rotd-2014-09-30
** configured for x86_64-apple-darwin13.3.0.
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



#line 138 "digraph.m"
struct mercury__digraph__is_edge_rev_3_p_0_env_0_s {
#line 138 "digraph.m"
  MR_Word * mercury__digraph__is_edge_rev_3_p_0_env_0__X_5;
#line 138 "digraph.m"
  MR_Cont mercury__digraph__is_edge_rev_3_p_0_env_0__cont;
#line 138 "digraph.m"
  void * mercury__digraph__is_edge_rev_3_p_0_env_0__cont_env_ptr;
#line 513 "digraph.m"
  MR_Box mercury__digraph__is_edge_rev_3_p_0_env_0__conv1_X_5;
#line 138 "digraph.m"
};

#line 131 "digraph.m"
struct mercury__digraph__is_edge_3_p_0_env_0_s {
#line 131 "digraph.m"
  MR_Word * mercury__digraph__is_edge_3_p_0_env_0__Y_6;
#line 131 "digraph.m"
  MR_Cont mercury__digraph__is_edge_3_p_0_env_0__cont;
#line 131 "digraph.m"
  void * mercury__digraph__is_edge_3_p_0_env_0__cont_env_ptr;
#line 509 "digraph.m"
  MR_Box mercury__digraph__is_edge_3_p_0_env_0__conv1_Y_6;
#line 131 "digraph.m"
};


#line 115 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__digraph__pti_digraph_key_1__pseudo_1;

#line 118 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__set_ordlist__pti_set_ordlist_1__pseudo_1;

#line 121 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__digraph__pti_digraph_key_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1;

#line 124 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1;

#line 127 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__bimap__pti_bimap_2__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1;

#line 130 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1;

#line 133 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1;

#line 136 "digraph.c"
static const MR_PseudoTypeInfo mercury__digraph__digraph__field_types_digraph_1_0[4];

#line 139 "digraph.c"
static const MR_ConstString mercury__digraph__digraph__field_names_digraph_1_0[4];

#line 142 "digraph.c"
static const MR_DuFunctorDesc mercury__digraph__digraph__du_functor_desc_digraph_1_0;

#line 145 "digraph.c"
static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_stag_ordered_digraph_1_0[1];

#line 148 "digraph.c"
static const MR_DuPtagLayout mercury__digraph__digraph__du_ptag_ordered_digraph_1[1];

#line 151 "digraph.c"
static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_name_ordered_digraph_1[1];

#line 154 "digraph.c"
static const MR_Integer mercury__digraph__digraph__functor_number_map_digraph_1[1];

#line 157 "digraph.c"
static const MR_Integer mercury__digraph__digraph__functor_number_map_digraph_key_1[1];

#line 160 "digraph.c"
static const MR_NotagFunctorDesc mercury__digraph__digraph__notag_functor_desc_digraph_key_1;

#line 163 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_digraph__pti_digraph_key_1__pseudo_1;

#line 166 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____clique_map_1_0_10001(
#line 169 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 171 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 173 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3);

#line 176 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____clique_map_1_0_10001(
#line 179 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 181 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 183 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 185 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4);

#line 188 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_1_0_10001(
#line 191 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 193 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 195 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3);

#line 198 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____digraph_1_0_10001(
#line 201 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 203 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 205 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 207 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4);

#line 210 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_key_1_0_10001(
#line 213 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 215 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 217 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3);

#line 220 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____digraph_key_1_0_10001(
#line 223 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 225 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 227 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 229 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4);

#line 232 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_key_set_1_0_10001(
#line 235 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 237 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 239 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3);

#line 242 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____digraph_key_set_1_0_10001(
#line 245 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 247 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 249 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 251 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4);

#line 254 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____key_map_1_0_10001(
#line 257 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 259 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 261 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3);

#line 264 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____key_map_1_0_10001(
#line 267 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 269 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 271 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 273 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4);

#line 276 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____key_set_map_1_0_10001(
#line 279 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 281 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 283 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3);

#line 286 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____key_set_map_1_0_10001(
#line 289 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 291 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 293 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 295 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4);

#line 298 "digraph.c"
static MR_Box MR_CALL 
mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__to_int_1_1_f_0_10001(
#line 301 "digraph.c"
  MR_Box mercury__digraph__closure_arg,
#line 303 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1);

#line 306 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__from_int_1_1_f_0_10001(
#line 309 "digraph.c"
  MR_Box mercury__digraph__closure_arg,
#line 311 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 313 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2);

#line 133 "list.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_49_48_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_51_93_95_48_9_p_in__sparse_bitset_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_51_93_95_48_7_p_in__sparse_bitset_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_52_93_95_48_7_p_in__sparse_bitset_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_57_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_52_93_95_48_9_p_in__sparse_bitset_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_50_93_95_48_7_p_in__sparse_bitset_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_55_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_4_p_in__sparse_bitset_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_4_p_in__sparse_bitset_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_55_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_93_95_48_4_p_in__list_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_55_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_6_p_in__list_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_4_p_in__list_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_54_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_53_93_95_48_6_p_in__list_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_2_f_in__list_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_54_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_54_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__list_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_53_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__digraph__V_14_14,
#line 324 "list.int"
  MR_Word mercury__digraph__V_15_15,
#line 324 "list.int"
  MR_Word mercury__digraph__HeadVar__2_2);

#line 92 "sparse_bitset.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_54_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_95_104_111_53_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__set_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_53_55_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
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

#line 1092 "digraph.m"
static void MR_CALL 
mercury__digraph__IntroducedFrom__pred__add_cartesian_product__1092__1_5_p_0(
#line 1092 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_23,
#line 1092 "digraph.m"
  MR_Word mercury__digraph__KeySet2_6,
#line 1092 "digraph.m"
  MR_Word mercury__digraph__HeadVar__3_15,
#line 1092 "digraph.m"
  MR_Word mercury__digraph__HeadVar__4_16,
#line 1092 "digraph.m"
  MR_Word * mercury__digraph__HeadVar__5_17);

#line 1088 "digraph.m"
static void MR_CALL 
mercury__digraph__add_cartesian_product_4_p_0(
#line 1088 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_23,
#line 1088 "digraph.m"
  MR_Word mercury__digraph__KeySet1_5,
#line 1088 "digraph.m"
  MR_Word mercury__digraph__KeySet2_6,
#line 1088 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Rtc_0_9,
#line 1088 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Rtc_10);

#line 1065 "digraph.m"
static void MR_CALL 
mercury__digraph__rtc_2_5_p_0(
#line 1065 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_30,
#line 1065 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 1065 "digraph.m"
  MR_Word mercury__digraph__G_2,
#line 1065 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Vis_0_3,
#line 1065 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Rtc_0_4,
#line 1065 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Rtc_5);

#line 822 "digraph.m"
static void MR_CALL 
mercury__digraph__reachable_from_4_p_0(
#line 822 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_19,
#line 822 "digraph.m"
  MR_Word mercury__digraph__G_5,
#line 822 "digraph.m"
  MR_Word mercury__digraph__Keys0_6,
#line 822 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Comp_0_15,
#line 822 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Comp_16);

#line 807 "digraph.m"
static void MR_CALL 
mercury__digraph__components_2_4_p_0(
#line 807 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_19,
#line 807 "digraph.m"
  MR_Word mercury__digraph__G_5,
#line 807 "digraph.m"
  MR_Word mercury__digraph__Xs0_6,
#line 807 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Components_0_14,
#line 807 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Components_15);

#line 752 "digraph.m"
static void MR_CALL 
mercury__digraph__accumulate_digraph_key_set_4_p_0(
#line 752 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_13,
#line 752 "digraph.m"
  MR_Word mercury__digraph__KMap_5,
#line 752 "digraph.m"
  MR_Word mercury__digraph__X_6,
#line 752 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Set_0_10,
#line 752 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Set_11);

#line 739 "digraph.m"
static void MR_CALL 
mercury__digraph__add_composition_edges_5_p_0(
#line 739 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_16,
#line 739 "digraph.m"
  MR_Word mercury__digraph__KMap1_6,
#line 739 "digraph.m"
  MR_Word mercury__digraph__KMap2_7,
#line 739 "digraph.m"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 739 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Comp_0_11,
#line 739 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Comp_12);

#line 721 "digraph.m"
static void MR_CALL 
mercury__digraph__find_necessary_keys_5_p_0(
#line 721 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_16,
#line 721 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 721 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Needed1_0_10,
#line 721 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Needed1_11,
#line 721 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Needed2_0_12,
#line 721 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Needed2_13);

#line 390 "digraph.m"
static MR_Word MR_CALL 
mercury__digraph__key_set_map_delete_3_f_0(
#line 390 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_11,
#line 390 "digraph.m"
  MR_Word mercury__digraph__Map0_5,
#line 390 "digraph.m"
  MR_Integer mercury__digraph__XI_6,
#line 390 "digraph.m"
  MR_Word mercury__digraph__Y_7);

#line 374 "digraph.m"
static MR_Word MR_CALL 
mercury__digraph__key_set_map_add_3_f_0(
#line 374 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_13,
#line 374 "digraph.m"
  MR_Word mercury__digraph__Map0_5,
#line 374 "digraph.m"
  MR_Integer mercury__digraph__XI_6,
#line 374 "digraph.m"
  MR_Word mercury__digraph__Y_7);

#line 513 "digraph.m"
static void MR_CALL 
mercury__digraph__is_edge_rev_3_p_0_1(
#line 513 "digraph.m"
  void * mercury__digraph__env_ptr_arg);

#line 509 "digraph.m"
static void MR_CALL 
mercury__digraph__is_edge_3_p_0_1(
#line 509 "digraph.m"
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
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
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



#line 1457 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1465 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1473 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__digraph__pti_digraph_key_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) &mercury__digraph__set_ordlist__pti_set_ordlist_1__pseudo_1
  }
};

#line 1481 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__pseudo_digraph__pti_digraph_key_1__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__digraph__digraph__pti_digraph_key_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__digraph__digraph__pti_digraph_key_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
  }
};

#line 1490 "digraph.c"
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

#line 1511 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__bimap__pti_bimap_2__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__digraph__digraph__pti_digraph_key_1__pseudo_1
  }
};

#line 1520 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__digraph__sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &mercury__digraph__digraph__pti_digraph_key_1__pseudo_1
  }
};

#line 1528 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__digraph__sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1
  }
};

#line 1537 "digraph.c"
static const MR_PseudoTypeInfo mercury__digraph__digraph__field_types_digraph_1_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__digraph__bimap__pti_bimap_2__pseudo_1__pseudo_digraph__pti_digraph_key_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_digraph__pti_digraph_key_1__pseudo_1
};

#line 1545 "digraph.c"
static const MR_ConstString mercury__digraph__digraph__field_names_digraph_1_0[4] = {
  (MR_String) "next_key",
  (MR_String) "vertex_map",
  (MR_String) "fwd_map",
  (MR_String) "bwd_map"
};

#line 1553 "digraph.c"
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

#line 1568 "digraph.c"
static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_stag_ordered_digraph_1_0[1] = {
  &mercury__digraph__digraph__du_functor_desc_digraph_1_0
};

#line 1573 "digraph.c"
static const MR_DuPtagLayout mercury__digraph__digraph__du_ptag_ordered_digraph_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__digraph__digraph__du_stag_ordered_digraph_1_0
  }
};

#line 1582 "digraph.c"
static const MR_DuFunctorDescPtr mercury__digraph__digraph__du_name_ordered_digraph_1[1] = {
  &mercury__digraph__digraph__du_functor_desc_digraph_1_0
};

#line 1587 "digraph.c"
static const MR_Integer mercury__digraph__digraph__functor_number_map_digraph_1[1] = {
  (MR_Integer) 0
};

#line 1592 "digraph.c"
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

#line 1613 "digraph.c"
static const MR_Integer mercury__digraph__digraph__functor_number_map_digraph_key_1[1] = {
  (MR_Integer) 0
};

#line 1618 "digraph.c"
static const MR_NotagFunctorDesc mercury__digraph__digraph__notag_functor_desc_digraph_key_1 = {
  (MR_String) "digraph_key",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1625 "digraph.c"
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

#line 1646 "digraph.c"
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

#line 1667 "digraph.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__digraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_digraph__pti_digraph_key_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__digraph__digraph__pti_digraph_key_1__pseudo_1
  }
};

#line 1676 "digraph.c"
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

#line 1697 "digraph.c"
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

#line 1718 "digraph.c"
const MR_BaseTypeclassInfo base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__to_int_1_1_f_0_10001)),
  ((MR_Box) (mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__from_int_1_1_f_0_10001))
};

#line 1729 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____clique_map_1_0_10001(
#line 1732 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1734 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 1736 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3)
#line 1738 "digraph.c"
{
#line 1740 "digraph.c"
  {
#line 1742 "digraph.c"
    MR_bool mercury__digraph__succeeded;

#line 1745 "digraph.c"
    {
#line 1747 "digraph.c"
      mercury__digraph__succeeded = mercury__digraph____Unify____clique_map_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), ((MR_Word) mercury__digraph__wrapper_arg_2), ((MR_Word) mercury__digraph__wrapper_arg_3));
    }
#line 1750 "digraph.c"
    return mercury__digraph__succeeded;
#line 1752 "digraph.c"
  }
#line 1754 "digraph.c"
}

#line 1757 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____clique_map_1_0_10001(
#line 1760 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1762 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 1764 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 1766 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4)
#line 1768 "digraph.c"
{
#line 1770 "digraph.c"
  {
#line 1772 "digraph.c"
    MR_Word mercury__digraph__conv0_HeadVar__1_1;

#line 1775 "digraph.c"
    {
#line 1777 "digraph.c"
      mercury__digraph____Compare____clique_map_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), &mercury__digraph__conv0_HeadVar__1_1, ((MR_Word) mercury__digraph__wrapper_arg_3), ((MR_Word) mercury__digraph__wrapper_arg_4));
    }
#line 1780 "digraph.c"
    *mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_HeadVar__1_1));
#line 1782 "digraph.c"
  }
#line 1784 "digraph.c"
}

#line 1787 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_1_0_10001(
#line 1790 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1792 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 1794 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3)
#line 1796 "digraph.c"
{
#line 1798 "digraph.c"
  {
#line 1800 "digraph.c"
    MR_bool mercury__digraph__succeeded;

#line 1803 "digraph.c"
    {
#line 1805 "digraph.c"
      mercury__digraph__succeeded = mercury__digraph____Unify____digraph_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), ((MR_Word) mercury__digraph__wrapper_arg_2), ((MR_Word) mercury__digraph__wrapper_arg_3));
    }
#line 1808 "digraph.c"
    return mercury__digraph__succeeded;
#line 1810 "digraph.c"
  }
#line 1812 "digraph.c"
}

#line 1815 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____digraph_1_0_10001(
#line 1818 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1820 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 1822 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 1824 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4)
#line 1826 "digraph.c"
{
#line 1828 "digraph.c"
  {
#line 1830 "digraph.c"
    MR_Word mercury__digraph__conv0_HeadVar__1_1;

#line 1833 "digraph.c"
    {
#line 1835 "digraph.c"
      mercury__digraph____Compare____digraph_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), &mercury__digraph__conv0_HeadVar__1_1, ((MR_Word) mercury__digraph__wrapper_arg_3), ((MR_Word) mercury__digraph__wrapper_arg_4));
    }
#line 1838 "digraph.c"
    *mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_HeadVar__1_1));
#line 1840 "digraph.c"
  }
#line 1842 "digraph.c"
}

#line 1845 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_key_1_0_10001(
#line 1848 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1850 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 1852 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3)
#line 1854 "digraph.c"
{
#line 1856 "digraph.c"
  {
#line 1858 "digraph.c"
    MR_bool mercury__digraph__succeeded;

#line 1861 "digraph.c"
    {
#line 1863 "digraph.c"
      mercury__digraph__succeeded = mercury__digraph____Unify____digraph_key_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), ((MR_Word) mercury__digraph__wrapper_arg_2), ((MR_Word) mercury__digraph__wrapper_arg_3));
    }
#line 1866 "digraph.c"
    return mercury__digraph__succeeded;
#line 1868 "digraph.c"
  }
#line 1870 "digraph.c"
}

#line 1873 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____digraph_key_1_0_10001(
#line 1876 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1878 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 1880 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 1882 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4)
#line 1884 "digraph.c"
{
#line 1886 "digraph.c"
  {
#line 1888 "digraph.c"
    MR_Word mercury__digraph__conv0_HeadVar__1_1;

#line 1891 "digraph.c"
    {
#line 1893 "digraph.c"
      mercury__digraph____Compare____digraph_key_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), &mercury__digraph__conv0_HeadVar__1_1, ((MR_Word) mercury__digraph__wrapper_arg_3), ((MR_Word) mercury__digraph__wrapper_arg_4));
    }
#line 1896 "digraph.c"
    *mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_HeadVar__1_1));
#line 1898 "digraph.c"
  }
#line 1900 "digraph.c"
}

#line 1903 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____digraph_key_set_1_0_10001(
#line 1906 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1908 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 1910 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3)
#line 1912 "digraph.c"
{
#line 1914 "digraph.c"
  {
#line 1916 "digraph.c"
    MR_bool mercury__digraph__succeeded;

#line 1919 "digraph.c"
    {
#line 1921 "digraph.c"
      mercury__digraph__succeeded = mercury__digraph____Unify____digraph_key_set_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), ((MR_Word) mercury__digraph__wrapper_arg_2), ((MR_Word) mercury__digraph__wrapper_arg_3));
    }
#line 1924 "digraph.c"
    return mercury__digraph__succeeded;
#line 1926 "digraph.c"
  }
#line 1928 "digraph.c"
}

#line 1931 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____digraph_key_set_1_0_10001(
#line 1934 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1936 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 1938 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 1940 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4)
#line 1942 "digraph.c"
{
#line 1944 "digraph.c"
  {
#line 1946 "digraph.c"
    MR_Word mercury__digraph__conv0_HeadVar__1_1;

#line 1949 "digraph.c"
    {
#line 1951 "digraph.c"
      mercury__digraph____Compare____digraph_key_set_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), &mercury__digraph__conv0_HeadVar__1_1, ((MR_Word) mercury__digraph__wrapper_arg_3), ((MR_Word) mercury__digraph__wrapper_arg_4));
    }
#line 1954 "digraph.c"
    *mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_HeadVar__1_1));
#line 1956 "digraph.c"
  }
#line 1958 "digraph.c"
}

#line 1961 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____key_map_1_0_10001(
#line 1964 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1966 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 1968 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3)
#line 1970 "digraph.c"
{
#line 1972 "digraph.c"
  {
#line 1974 "digraph.c"
    MR_bool mercury__digraph__succeeded;

#line 1977 "digraph.c"
    {
#line 1979 "digraph.c"
      mercury__digraph__succeeded = mercury__digraph____Unify____key_map_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), ((MR_Word) mercury__digraph__wrapper_arg_2), ((MR_Word) mercury__digraph__wrapper_arg_3));
    }
#line 1982 "digraph.c"
    return mercury__digraph__succeeded;
#line 1984 "digraph.c"
  }
#line 1986 "digraph.c"
}

#line 1989 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____key_map_1_0_10001(
#line 1992 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 1994 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 1996 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 1998 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4)
#line 2000 "digraph.c"
{
#line 2002 "digraph.c"
  {
#line 2004 "digraph.c"
    MR_Word mercury__digraph__conv0_HeadVar__1_1;

#line 2007 "digraph.c"
    {
#line 2009 "digraph.c"
      mercury__digraph____Compare____key_map_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), &mercury__digraph__conv0_HeadVar__1_1, ((MR_Word) mercury__digraph__wrapper_arg_3), ((MR_Word) mercury__digraph__wrapper_arg_4));
    }
#line 2012 "digraph.c"
    *mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_HeadVar__1_1));
#line 2014 "digraph.c"
  }
#line 2016 "digraph.c"
}

#line 2019 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph____Unify____key_set_map_1_0_10001(
#line 2022 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 2024 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_2,
#line 2026 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3)
#line 2028 "digraph.c"
{
#line 2030 "digraph.c"
  {
#line 2032 "digraph.c"
    MR_bool mercury__digraph__succeeded;

#line 2035 "digraph.c"
    {
#line 2037 "digraph.c"
      mercury__digraph__succeeded = mercury__digraph____Unify____key_set_map_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), ((MR_Word) mercury__digraph__wrapper_arg_2), ((MR_Word) mercury__digraph__wrapper_arg_3));
    }
#line 2040 "digraph.c"
    return mercury__digraph__succeeded;
#line 2042 "digraph.c"
  }
#line 2044 "digraph.c"
}

#line 2047 "digraph.c"
static void MR_CALL 
mercury__digraph____Compare____key_set_map_1_0_10001(
#line 2050 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 2052 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2,
#line 2054 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_3,
#line 2056 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_4)
#line 2058 "digraph.c"
{
#line 2060 "digraph.c"
  {
#line 2062 "digraph.c"
    MR_Word mercury__digraph__conv0_HeadVar__1_1;

#line 2065 "digraph.c"
    {
#line 2067 "digraph.c"
      mercury__digraph____Compare____key_set_map_1_0(((MR_Word) mercury__digraph__wrapper_arg_1), &mercury__digraph__conv0_HeadVar__1_1, ((MR_Word) mercury__digraph__wrapper_arg_3), ((MR_Word) mercury__digraph__wrapper_arg_4));
    }
#line 2070 "digraph.c"
    *mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_HeadVar__1_1));
#line 2072 "digraph.c"
  }
#line 2074 "digraph.c"
}

#line 2077 "digraph.c"
static MR_Box MR_CALL 
mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__to_int_1_1_f_0_10001(
#line 2080 "digraph.c"
  MR_Box mercury__digraph__closure_arg,
#line 2082 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1)
#line 2084 "digraph.c"
{
#line 2086 "digraph.c"
  {
#line 2088 "digraph.c"
    MR_Box mercury__digraph__wrapper_arg_2;
#line 2090 "digraph.c"
    MR_Box mercury__digraph__closure;
#line 2092 "digraph.c"
    MR_Integer mercury__digraph__conv0_Int_4;

#line 2095 "digraph.c"
    mercury__digraph__closure = mercury__digraph__closure_arg;
#line 2097 "digraph.c"
    {
#line 2099 "digraph.c"
      mercury__digraph__conv0_Int_4 = mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__to_int_1_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__closure, (MR_Integer) 1))), ((MR_Word) mercury__digraph__wrapper_arg_1));
    }
#line 2102 "digraph.c"
    mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_Int_4));
#line 2104 "digraph.c"
    return mercury__digraph__wrapper_arg_2;
#line 2106 "digraph.c"
  }
#line 2108 "digraph.c"
}

#line 2111 "digraph.c"
static MR_bool MR_CALL 
mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__from_int_1_1_f_0_10001(
#line 2114 "digraph.c"
  MR_Box mercury__digraph__closure_arg,
#line 2116 "digraph.c"
  MR_Box mercury__digraph__wrapper_arg_1,
#line 2118 "digraph.c"
  MR_Box * mercury__digraph__wrapper_arg_2)
#line 2120 "digraph.c"
{
#line 2122 "digraph.c"
  {
#line 2124 "digraph.c"
    MR_bool mercury__digraph__succeeded;
#line 2126 "digraph.c"
    MR_Box mercury__digraph__closure;
#line 2128 "digraph.c"
    MR_Word mercury__digraph__conv0_HeadVar__2_2;

#line 2131 "digraph.c"
    mercury__digraph__closure = mercury__digraph__closure_arg;
#line 2133 "digraph.c"
    {
#line 2135 "digraph.c"
      mercury__digraph__succeeded = mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__from_int_1_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__closure, (MR_Integer) 1))), ((MR_Integer) mercury__digraph__wrapper_arg_1), &mercury__digraph__conv0_HeadVar__2_2);
    }
#line 2138 "digraph.c"
    if (mercury__digraph__succeeded)
#line 2140 "digraph.c"
      {
#line 2142 "digraph.c"
        *mercury__digraph__wrapper_arg_2 = ((MR_Box) (mercury__digraph__conv0_HeadVar__2_2));
#line 2144 "digraph.c"
        mercury__digraph__succeeded = MR_TRUE;
#line 2146 "digraph.c"
      }
#line 2148 "digraph.c"
    return mercury__digraph__succeeded;
#line 2150 "digraph.c"
  }
#line 2152 "digraph.c"
}

#line 133 "list.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
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
#line 117 "map.opt"
            MR_Word mercury__digraph__conv0_STATE_VARIABLE_A_15_15_13;

#line 2208 "digraph.c"
            {
#line 2210 "digraph.c"
              mercury__digraph__TypeInfo_13_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2212 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_13_36, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_12_35));
#line 2214 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_13_36, 1) = ((MR_Box) (mercury__digraph__V_27_27));
#line 2216 "digraph.c"
            }
#line 2218 "digraph.c"
            mercury__digraph__TypeCtorInfo_14_37 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 2220 "digraph.c"
            {
#line 2222 "digraph.c"
              mercury__digraph__TypeInfo_15_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2224 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_38, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_37));
#line 2226 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_38, 1) = ((MR_Box) (mercury__digraph__V_27_27));
#line 2228 "digraph.c"
            }
#line 2230 "digraph.c"
            {
#line 2232 "digraph.c"
              mercury__digraph__TypeInfo_16_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2234 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_39, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_12_35));
#line 2236 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_39, 1) = ((MR_Box) (mercury__digraph__TypeInfo_15_38));
#line 2238 "digraph.c"
            }
#line 117 "map.opt"
            {
#line 117 "map.opt"
              mercury__tree234__set_4_p_0(mercury__digraph__TypeInfo_13_36, mercury__digraph__TypeInfo_16_39, ((MR_Box) (mercury__digraph__H_10_9)), ((MR_Box) (mercury__digraph__V_28_28)), (MR_Word) mercury__digraph__HeadVar__3_3, &mercury__digraph__conv0_STATE_VARIABLE_A_15_15_13);
            }
#line 117 "map.opt"
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_49_48_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_51_93_95_48_9_p_in__sparse_bitset_0(
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
#line 2335 "digraph.c"
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_35, (MR_Integer) 0)), (MR_Integer) 6)));
#line 2337 "digraph.c"
                MR_Box mercury__digraph__conv1_Elem_17_19;

#line 2340 "digraph.c"
                {
#line 2342 "digraph.c"
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_35), ((MR_Box) (mercury__digraph__Offset_12_12)), &mercury__digraph__conv1_Elem_17_19);
                }
#line 2345 "digraph.c"
                if (mercury__digraph__succeeded)
#line 2347 "digraph.c"
                  {
#line 2349 "digraph.c"
                    mercury__digraph__Elem_17_19 = ((MR_Word) mercury__digraph__conv1_Elem_17_19);
#line 2351 "digraph.c"
                    mercury__digraph__succeeded = MR_TRUE;
#line 2353 "digraph.c"
                  }
#line 376 "sparse_bitset.opt"
                if (mercury__digraph__succeeded)
#line 733 "digraph.m"
                  {
#line 733 "digraph.m"
                    MR_Word mercury__digraph__TypeCtorInfo_22_66;
#line 733 "digraph.m"
                    MR_Word mercury__digraph__TypeInfo_23_67;
#line 733 "digraph.m"
                    MR_Box mercury__digraph__VX_60;
#line 733 "digraph.m"
                    MR_Word mercury__digraph__CompX_61;
#line 733 "digraph.m"
                    MR_Integer mercury__digraph__XI_62;
#line 737 "digraph.m"
                    MR_Word mercury__digraph__conv2_STATE_VARIABLE_Acc2_25_18;

#line 734 "digraph.m"
                    {
#line 734 "digraph.m"
                      mercury__digraph__lookup_vertex_3_p_0(mercury__digraph__V_50_50, mercury__digraph__V_51_51, mercury__digraph__Elem_17_19, &mercury__digraph__VX_60);
                    }
#line 735 "digraph.m"
                    {
#line 735 "digraph.m"
                      mercury__digraph__add_vertex_4_p_0(mercury__digraph__V_50_50, mercury__digraph__VX_60, &mercury__digraph__CompX_61, mercury__digraph__STATE_VARIABLE_Acc1_0_22_15, mercury__digraph__STATE_VARIABLE_Acc1_23_16);
                    }
#line 736 "digraph.m"
                    mercury__digraph__XI_62 = (MR_Integer) mercury__digraph__Elem_17_19;
#line 2384 "digraph.c"
                    mercury__digraph__TypeCtorInfo_22_66 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 2386 "digraph.c"
                    {
#line 2388 "digraph.c"
                      mercury__digraph__TypeInfo_23_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2390 "digraph.c"
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_67, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_22_66));
#line 2392 "digraph.c"
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_67, 1) = ((MR_Box) (mercury__digraph__V_50_50));
#line 2394 "digraph.c"
                    }
#line 737 "digraph.m"
                    {
#line 737 "digraph.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__digraph__TypeInfo_23_67, mercury__digraph__XI_62, ((MR_Box) (mercury__digraph__CompX_61)), (MR_Word) mercury__digraph__STATE_VARIABLE_Acc2_0_24_17, &mercury__digraph__conv2_STATE_VARIABLE_Acc2_25_18);
                    }
#line 737 "digraph.m"
                    *mercury__digraph__STATE_VARIABLE_Acc2_25_18 = (MR_Word) mercury__digraph__conv2_STATE_VARIABLE_Acc2_25_18;
#line 733 "digraph.m"
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
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_49_48_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_51_93_95_48_9_p_in__sparse_bitset_0(mercury__digraph__V_50_50, mercury__digraph__V_51_51, mercury__digraph__TypeClassInfo_for_enum_35, mercury__digraph__Dir_10_10, mercury__digraph__V_33_32, mercury__digraph__HighBits_21_27, mercury__digraph__HalfSize_18_23, mercury__digraph__STATE_VARIABLE_Acc1_0_22_15, &mercury__digraph__STATE_VARIABLE_Acc1_34_34_33, mercury__digraph__STATE_VARIABLE_Acc2_0_24_17, &mercury__digraph__STATE_VARIABLE_Acc2_35_35_34);
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
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_49_48_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_51_93_95_48_9_p_in__sparse_bitset_0(mercury__digraph__V_50_50, mercury__digraph__V_51_51, mercury__digraph__TypeClassInfo_for_enum_35, mercury__digraph__Dir_10_10, mercury__digraph__Offset_12_12, mercury__digraph__LowBits_20_26, mercury__digraph__HalfSize_18_23, mercury__digraph__STATE_VARIABLE_Acc1_0_22_15, &mercury__digraph__STATE_VARIABLE_Acc1_38_38_29, mercury__digraph__STATE_VARIABLE_Acc2_0_24_17, &mercury__digraph__STATE_VARIABLE_Acc2_39_39_30);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_51_93_95_48_7_p_in__sparse_bitset_0(
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
#line 2602 "digraph.c"
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 2604 "digraph.c"
                MR_Box mercury__digraph__conv1_Elem_14_15;

#line 2607 "digraph.c"
                {
#line 2609 "digraph.c"
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__Offset_10_10)), &mercury__digraph__conv1_Elem_14_15);
                }
#line 2612 "digraph.c"
                if (mercury__digraph__succeeded)
#line 2614 "digraph.c"
                  {
#line 2616 "digraph.c"
                    mercury__digraph__Elem_14_15 = ((MR_Word) mercury__digraph__conv1_Elem_14_15);
#line 2618 "digraph.c"
                    mercury__digraph__succeeded = MR_TRUE;
#line 2620 "digraph.c"
                  }
#line 335 "sparse_bitset.opt"
                if (mercury__digraph__succeeded)
#line 574 "digraph.m"
                  {
#line 574 "digraph.m"
                    MR_Word mercury__digraph__TypeCtorInfo_16_53 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 574 "digraph.m"
                    MR_Word mercury__digraph__TypeInfo_17_54;
#line 574 "digraph.m"
                    MR_Box mercury__digraph__VY_50;
#line 574 "digraph.m"
                    MR_Word mercury__digraph__V_52_52;
#line 574 "digraph.m"
                    MR_Word mercury__digraph__Reverse_5_58;
#line 48 "bimap.opt"
                    MR_Word mercury__digraph__V_4_57;

#line 2639 "digraph.c"
                    {
#line 2641 "digraph.c"
                      mercury__digraph__TypeInfo_17_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2643 "digraph.c"
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_54, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_53));
#line 2645 "digraph.c"
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_54, 1) = ((MR_Box) (mercury__digraph__V_41_41));
#line 2647 "digraph.c"
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
#line 576 "digraph.m"
                    {
#line 576 "digraph.m"
                      mercury__digraph__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 576 "digraph.m"
                      MR_hl_field(MR_mktag(0), mercury__digraph__V_52_52, 0) = mercury__digraph__V_43_43;
#line 576 "digraph.m"
                      MR_hl_field(MR_mktag(0), mercury__digraph__V_52_52, 1) = mercury__digraph__VY_50;
#line 576 "digraph.m"
                    }
#line 576 "digraph.m"
                    {
#line 576 "digraph.m"
                      MR_Word base;
#line 576 "digraph.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "digraph.m"
                      *mercury__digraph__STATE_VARIABLE_Acc_20_14 = base;
#line 576 "digraph.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__digraph__V_52_52));
#line 576 "digraph.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__digraph__STATE_VARIABLE_Acc_0_19_13));
#line 576 "digraph.m"
                    }
#line 574 "digraph.m"
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
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_51_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_41_41, mercury__digraph__V_42_42, mercury__digraph__V_43_43, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__V_27_27, mercury__digraph__HighBits_18_23, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_28_28_28);
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
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_51_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_41_41, mercury__digraph__V_42_42, mercury__digraph__V_43_43, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__Offset_10_10, mercury__digraph__LowBits_17_22, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_30_30_25);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_52_93_95_48_7_p_in__sparse_bitset_0(
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
#line 2865 "digraph.c"
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 2867 "digraph.c"
                MR_Box mercury__digraph__conv1_Elem_14_15;

#line 2870 "digraph.c"
                {
#line 2872 "digraph.c"
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__Offset_10_10)), &mercury__digraph__conv1_Elem_14_15);
                }
#line 2875 "digraph.c"
                if (mercury__digraph__succeeded)
#line 2877 "digraph.c"
                  {
#line 2879 "digraph.c"
                    mercury__digraph__Elem_14_15 = ((MR_Word) mercury__digraph__conv1_Elem_14_15);
#line 2881 "digraph.c"
                    mercury__digraph__succeeded = MR_TRUE;
#line 2883 "digraph.c"
                  }
#line 335 "sparse_bitset.opt"
                if (mercury__digraph__succeeded)
#line 600 "digraph.m"
                  {
#line 600 "digraph.m"
                    MR_Word mercury__digraph__V_53_53;

#line 601 "digraph.m"
                    {
#line 601 "digraph.m"
                      mercury__digraph__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 601 "digraph.m"
                      MR_hl_field(MR_mktag(0), mercury__digraph__V_53_53, 0) = ((MR_Box) (mercury__digraph__V_46_46));
#line 601 "digraph.m"
                      MR_hl_field(MR_mktag(0), mercury__digraph__V_53_53, 1) = ((MR_Box) (mercury__digraph__Elem_14_15));
#line 601 "digraph.m"
                    }
#line 601 "digraph.m"
                    {
#line 601 "digraph.m"
                      MR_Word base;
#line 601 "digraph.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 601 "digraph.m"
                      *mercury__digraph__STATE_VARIABLE_Acc_20_14 = base;
#line 601 "digraph.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__digraph__V_53_53));
#line 601 "digraph.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__digraph__STATE_VARIABLE_Acc_0_19_13));
#line 601 "digraph.m"
                    }
#line 600 "digraph.m"
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
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_52_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_46_46, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__V_27_27, mercury__digraph__HighBits_18_23, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_28_28_28);
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
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_52_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_46_46, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__Offset_10_10, mercury__digraph__LowBits_17_22, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_30_30_25);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_57_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_52_93_95_48_9_p_in__sparse_bitset_0(
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
#line 3111 "digraph.c"
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_35, (MR_Integer) 0)), (MR_Integer) 6)));
#line 3113 "digraph.c"
                MR_Box mercury__digraph__conv1_Elem_17_19;

#line 3116 "digraph.c"
                {
#line 3118 "digraph.c"
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_35), ((MR_Box) (mercury__digraph__Offset_12_12)), &mercury__digraph__conv1_Elem_17_19);
                }
#line 3121 "digraph.c"
                if (mercury__digraph__succeeded)
#line 3123 "digraph.c"
                  {
#line 3125 "digraph.c"
                    mercury__digraph__Elem_17_19 = ((MR_Word) mercury__digraph__conv1_Elem_17_19);
#line 3127 "digraph.c"
                    mercury__digraph__succeeded = MR_TRUE;
#line 3129 "digraph.c"
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
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_57_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_52_93_95_48_9_p_in__sparse_bitset_0(mercury__digraph__V_51_51, mercury__digraph__V_52_52, mercury__digraph__TypeClassInfo_for_enum_35, mercury__digraph__Dir_10_10, mercury__digraph__V_33_32, mercury__digraph__HighBits_21_27, mercury__digraph__HalfSize_18_23, mercury__digraph__STATE_VARIABLE_Acc1_0_22_15, &mercury__digraph__STATE_VARIABLE_Acc1_34_34_33, mercury__digraph__STATE_VARIABLE_Acc2_0_24_17, &mercury__digraph__STATE_VARIABLE_Acc2_35_35_34);
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
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_57_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_52_93_95_48_9_p_in__sparse_bitset_0(mercury__digraph__V_51_51, mercury__digraph__V_52_52, mercury__digraph__TypeClassInfo_for_enum_35, mercury__digraph__Dir_10_10, mercury__digraph__Offset_12_12, mercury__digraph__LowBits_20_26, mercury__digraph__HalfSize_18_23, mercury__digraph__STATE_VARIABLE_Acc1_0_22_15, &mercury__digraph__STATE_VARIABLE_Acc1_38_38_29, mercury__digraph__STATE_VARIABLE_Acc2_0_24_17, &mercury__digraph__STATE_VARIABLE_Acc2_39_39_30);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(
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
#line 3335 "digraph.c"
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 3337 "digraph.c"
                MR_Box mercury__digraph__conv1_Elem_14_15;

#line 3340 "digraph.c"
                {
#line 3342 "digraph.c"
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__Offset_10_10)), &mercury__digraph__conv1_Elem_14_15);
                }
#line 3345 "digraph.c"
                if (mercury__digraph__succeeded)
#line 3347 "digraph.c"
                  {
#line 3349 "digraph.c"
                    mercury__digraph__Elem_14_15 = ((MR_Word) mercury__digraph__conv1_Elem_14_15);
#line 3351 "digraph.c"
                    mercury__digraph__succeeded = MR_TRUE;
#line 3353 "digraph.c"
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
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_40_40, mercury__digraph__V_41_41, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__V_27_27, mercury__digraph__HighBits_18_23, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_28_28_28);
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
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_40_40, mercury__digraph__V_41_41, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__Offset_10_10, mercury__digraph__LowBits_17_22, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_30_30_25);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_50_93_95_48_7_p_in__sparse_bitset_0(
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
#line 3555 "digraph.c"
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 3557 "digraph.c"
                MR_Box mercury__digraph__conv1_Elem_14_15;

#line 3560 "digraph.c"
                {
#line 3562 "digraph.c"
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__Offset_10_10)), &mercury__digraph__conv1_Elem_14_15);
                }
#line 3565 "digraph.c"
                if (mercury__digraph__succeeded)
#line 3567 "digraph.c"
                  {
#line 3569 "digraph.c"
                    mercury__digraph__Elem_14_15 = ((MR_Word) mercury__digraph__conv1_Elem_14_15);
#line 3571 "digraph.c"
                    mercury__digraph__succeeded = MR_TRUE;
#line 3573 "digraph.c"
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
                      mercury__digraph__succeeded = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_50_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_40_40, mercury__digraph__V_41_41, mercury__digraph__V_42_42, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__V_27_27, mercury__digraph__HighBits_18_23, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_28_28_28);
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
                      mercury__digraph__succeeded = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_50_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_40_40, mercury__digraph__V_41_41, mercury__digraph__V_42_42, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__Offset_10_10, mercury__digraph__LowBits_17_22, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_30_30_25);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(
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
#line 3779 "digraph.c"
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 3781 "digraph.c"
                MR_Box mercury__digraph__conv1_Elem_14_15;

#line 3784 "digraph.c"
                {
#line 3786 "digraph.c"
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__Offset_10_10)), &mercury__digraph__conv1_Elem_14_15);
                }
#line 3789 "digraph.c"
                if (mercury__digraph__succeeded)
#line 3791 "digraph.c"
                  {
#line 3793 "digraph.c"
                    mercury__digraph__Elem_14_15 = ((MR_Word) mercury__digraph__conv1_Elem_14_15);
#line 3795 "digraph.c"
                    mercury__digraph__succeeded = MR_TRUE;
#line 3797 "digraph.c"
                  }
#line 335 "sparse_bitset.opt"
                if (mercury__digraph__succeeded)
#line 1084 "digraph.m"
                  {
#line 1084 "digraph.m"
                    MR_Word mercury__digraph__SuccXs_47;
#line 1084 "digraph.m"
                    MR_Word mercury__digraph__Set1_4_54;
#line 1084 "digraph.m"
                    MR_Word mercury__digraph__Set2_5_55;
#line 1084 "digraph.m"
                    MR_Word mercury__digraph__V_6_56;

#line 1085 "digraph.m"
                    {
#line 1085 "digraph.m"
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
#line 1084 "digraph.m"
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
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_40_40, mercury__digraph__V_41_41, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__V_27_27, mercury__digraph__HighBits_18_23, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_28_28_28);
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
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_40_40, mercury__digraph__V_41_41, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__Offset_10_10, mercury__digraph__LowBits_17_22, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_30_30_25);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
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
#line 4013 "digraph.c"
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 4015 "digraph.c"
                MR_Box mercury__digraph__conv1_Elem_14_15;

#line 4018 "digraph.c"
                {
#line 4020 "digraph.c"
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__Offset_10_10)), &mercury__digraph__conv1_Elem_14_15);
                }
#line 4023 "digraph.c"
                if (mercury__digraph__succeeded)
#line 4025 "digraph.c"
                  {
#line 4027 "digraph.c"
                    mercury__digraph__Elem_14_15 = ((MR_Word) mercury__digraph__conv1_Elem_14_15);
#line 4029 "digraph.c"
                    mercury__digraph__succeeded = MR_TRUE;
#line 4031 "digraph.c"
                  }
#line 335 "sparse_bitset.opt"
                if (mercury__digraph__succeeded)
#line 334 "sparse_bitset.opt"
                  {
#line 334 "sparse_bitset.opt"
                    mercury__digraph__IntroducedFrom__pred__add_cartesian_product__1092__1_5_p_0(mercury__digraph__V_38_38, mercury__digraph__V_39_39, mercury__digraph__Elem_14_15, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, mercury__digraph__STATE_VARIABLE_Acc_20_14);
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
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_38_38, mercury__digraph__V_39_39, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__V_27_27, mercury__digraph__HighBits_18_23, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_28_28_28);
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
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_38_38, mercury__digraph__V_39_39, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__Offset_10_10, mercury__digraph__LowBits_17_22, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_30_30_25);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
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
#line 4221 "digraph.c"
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));

#line 4224 "digraph.c"
                {
#line 4226 "digraph.c"
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
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__V_27_27, mercury__digraph__HighBits_18_23, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_28_28_28);
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
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__Offset_10_10, mercury__digraph__LowBits_17_22, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_30_30_25);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
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
#line 4428 "digraph.c"
                MR_bool MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));
#line 4430 "digraph.c"
                MR_Box mercury__digraph__conv1_Elem_14_15;

#line 4433 "digraph.c"
                {
#line 4435 "digraph.c"
                  mercury__digraph__succeeded = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__Offset_10_10)), &mercury__digraph__conv1_Elem_14_15);
                }
#line 4438 "digraph.c"
                if (mercury__digraph__succeeded)
#line 4440 "digraph.c"
                  {
#line 4442 "digraph.c"
                    mercury__digraph__Elem_14_15 = ((MR_Word) mercury__digraph__conv1_Elem_14_15);
#line 4444 "digraph.c"
                    mercury__digraph__succeeded = MR_TRUE;
#line 4446 "digraph.c"
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
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_38_38, mercury__digraph__V_39_39, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__V_27_27, mercury__digraph__HighBits_18_23, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_28_28_28);
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
                      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_38_38, mercury__digraph__V_39_39, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__Dir_8_8, mercury__digraph__Offset_10_10, mercury__digraph__LowBits_17_22, mercury__digraph__HalfSize_15_19, mercury__digraph__STATE_VARIABLE_Acc_0_19_13, &mercury__digraph__STATE_VARIABLE_Acc_30_30_25);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
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
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 4650 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_18_18  = Bits;
#line 171 "int.opt"
}
#line 291 "sparse_bitset.opt"
            {
#line 291 "sparse_bitset.opt"
              mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_29_29, mercury__digraph__V_30_30, mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 0, mercury__digraph__V_22_16, mercury__digraph__V_17_17, mercury__digraph__V_18_18, mercury__digraph__HeadVar__3_3, &mercury__digraph__STATE_VARIABLE_Acc_19_19_19);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
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
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeClassInfo_for_enum_20, mercury__digraph__T_11_10, mercury__digraph__HeadVar__3_3, &mercury__digraph__STATE_VARIABLE_Acc_15_15_13);
        }
#line 308 "sparse_bitset.opt"
        mercury__digraph__V_22_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__H_10_9, (MR_Integer) 0)));
#line 308 "sparse_bitset.opt"
        mercury__digraph__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__H_10_9, (MR_Integer) 1)));
#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 4749 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_19_19  = Bits;
#line 171 "int.opt"
}
#line 311 "sparse_bitset.opt"
        {
#line 311 "sparse_bitset.opt"
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 1, mercury__digraph__V_22_17, mercury__digraph__V_18_18, mercury__digraph__V_19_19, mercury__digraph__STATE_VARIABLE_Acc_15_15_13, mercury__digraph__HeadVar__4_4);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
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
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 4830 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_18_18  = Bits;
#line 171 "int.opt"
}
#line 291 "sparse_bitset.opt"
            {
#line 291 "sparse_bitset.opt"
              mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_29_29, mercury__digraph__V_30_30, mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 0, mercury__digraph__V_22_16, mercury__digraph__V_17_17, mercury__digraph__V_18_18, mercury__digraph__HeadVar__3_3, &mercury__digraph__STATE_VARIABLE_Acc_19_19_19);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(
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
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 4930 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_18_18  = Bits;
#line 171 "int.opt"
}
#line 291 "sparse_bitset.opt"
            {
#line 291 "sparse_bitset.opt"
              mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_31_31, mercury__digraph__V_32_32, mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 0, mercury__digraph__V_22_16, mercury__digraph__V_17_17, mercury__digraph__V_18_18, mercury__digraph__HeadVar__3_3, &mercury__digraph__STATE_VARIABLE_Acc_19_19_19);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(
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
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 5038 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_18_18  = Bits;
#line 171 "int.opt"
}
#line 291 "sparse_bitset.opt"
            {
#line 291 "sparse_bitset.opt"
              mercury__digraph__succeeded = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_50_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_31_31, mercury__digraph__V_32_32, mercury__digraph__V_33_33, mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 0, mercury__digraph__V_22_16, mercury__digraph__V_17_17, mercury__digraph__V_18_18, mercury__digraph__HeadVar__3_3, &mercury__digraph__STATE_VARIABLE_Acc_19_19_19);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(
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
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 5146 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_18_18  = Bits;
#line 171 "int.opt"
}
#line 291 "sparse_bitset.opt"
            {
#line 291 "sparse_bitset.opt"
              mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_49_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_31_31, mercury__digraph__V_32_32, mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 0, mercury__digraph__V_22_16, mercury__digraph__V_17_17, mercury__digraph__V_18_18, mercury__digraph__HeadVar__3_3, &mercury__digraph__STATE_VARIABLE_Acc_19_19_19);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_55_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(
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
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_55_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 5258 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_26_24  = Bits;
#line 171 "int.opt"
}
#line 301 "sparse_bitset.opt"
            {
#line 301 "sparse_bitset.opt"
              mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_57_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_52_93_95_48_9_p_in__sparse_bitset_0(mercury__digraph__V_43_43, mercury__digraph__V_44_44, mercury__digraph__TypeClassInfo_for_enum_27, (MR_Integer) 0, mercury__digraph__V_32_22, mercury__digraph__V_25_23, mercury__digraph__V_26_24, mercury__digraph__HeadVar__3_3, &mercury__digraph__STATE_VARIABLE_Acc1_27_27_25, mercury__digraph__HeadVar__5_5, &mercury__digraph__STATE_VARIABLE_Acc2_28_28_26);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_4_p_in__sparse_bitset_0(
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
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__V_37_37, mercury__digraph__TypeClassInfo_for_enum_20, mercury__digraph__T_11_10, mercury__digraph__HeadVar__3_3, &mercury__digraph__STATE_VARIABLE_Acc_15_15_13);
        }
#line 308 "sparse_bitset.opt"
        mercury__digraph__V_22_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__H_10_9, (MR_Integer) 0)));
#line 308 "sparse_bitset.opt"
        mercury__digraph__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__H_10_9, (MR_Integer) 1)));
#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 5363 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_19_19  = Bits;
#line 171 "int.opt"
}
#line 311 "sparse_bitset.opt"
        {
#line 311 "sparse_bitset.opt"
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_57_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_52_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_37_37, mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 1, mercury__digraph__V_22_17, mercury__digraph__V_18_18, mercury__digraph__V_19_19, mercury__digraph__STATE_VARIABLE_Acc_15_15_13, mercury__digraph__HeadVar__4_4);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_4_p_in__sparse_bitset_0(
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
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__V_32_32, mercury__digraph__V_33_33, mercury__digraph__V_34_34, mercury__digraph__TypeClassInfo_for_enum_20, mercury__digraph__T_11_10, mercury__digraph__HeadVar__3_3, &mercury__digraph__STATE_VARIABLE_Acc_15_15_13);
        }
#line 308 "sparse_bitset.opt"
        mercury__digraph__V_22_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__H_10_9, (MR_Integer) 0)));
#line 308 "sparse_bitset.opt"
        mercury__digraph__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__H_10_9, (MR_Integer) 1)));
#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 5449 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_19_19  = Bits;
#line 171 "int.opt"
}
#line 311 "sparse_bitset.opt"
        {
#line 311 "sparse_bitset.opt"
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_49_48_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_51_93_95_48_7_p_in__sparse_bitset_0(mercury__digraph__V_32_32, mercury__digraph__V_33_33, mercury__digraph__V_34_34, mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 1, mercury__digraph__V_22_17, mercury__digraph__V_18_18, mercury__digraph__V_19_19, mercury__digraph__STATE_VARIABLE_Acc_15_15_13, mercury__digraph__HeadVar__4_4);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_55_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(
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
#define MR_PROC_LABEL mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_55_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 5542 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__V_26_24  = Bits;
#line 171 "int.opt"
}
#line 301 "sparse_bitset.opt"
            {
#line 301 "sparse_bitset.opt"
              mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_50_95_98_105_116_115_95_95_104_111_49_48_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_51_93_95_48_9_p_in__sparse_bitset_0(mercury__digraph__V_42_42, mercury__digraph__V_43_43, mercury__digraph__TypeClassInfo_for_enum_27, (MR_Integer) 0, mercury__digraph__V_32_22, mercury__digraph__V_25_23, mercury__digraph__V_26_24, mercury__digraph__HeadVar__3_3, &mercury__digraph__STATE_VARIABLE_Acc1_27_27_25, mercury__digraph__HeadVar__5_5, &mercury__digraph__STATE_VARIABLE_Acc2_28_28_26);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_93_95_48_4_p_in__list_0(
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

#line 468 "digraph.m"
            {
#line 468 "digraph.m"
              mercury__digraph__add_vertex_4_p_0(mercury__digraph__V_21_21, mercury__digraph__VX_24, &mercury__digraph__X_33, mercury__digraph__HeadVar__3_3, &mercury__digraph__STATE_VARIABLE_G_12_35);
            }
#line 469 "digraph.m"
            {
#line 469 "digraph.m"
              mercury__digraph__add_vertex_4_p_0(mercury__digraph__V_21_21, mercury__digraph__VY_25, &mercury__digraph__Y_34, mercury__digraph__STATE_VARIABLE_G_12_35, &mercury__digraph__STATE_VARIABLE_G_13_36);
            }
#line 470 "digraph.m"
            {
#line 470 "digraph.m"
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_55_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_6_p_in__list_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_4_p_in__list_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_54_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_53_93_95_48_6_p_in__list_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_2_f_in__list_0(
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

#line 702 "digraph.m"
        {
#line 702 "digraph.m"
          mercury__digraph__lookup_key_3_p_0(mercury__digraph__V_23_23, mercury__digraph__V_24_24, mercury__digraph__H_6_6, &mercury__digraph__M1_37);
        }
#line 703 "digraph.m"
        {
#line 703 "digraph.m"
          mercury__digraph__lookup_key_set_to_3_p_0(mercury__digraph__V_23_23, mercury__digraph__V_24_24, mercury__digraph__M1_37, &mercury__digraph__Xs_35);
        }
#line 704 "digraph.m"
        {
#line 704 "digraph.m"
          mercury__digraph__lookup_key_3_p_0(mercury__digraph__V_23_23, mercury__digraph__V_25_25, mercury__digraph__H_6_6, &mercury__digraph__M2_38);
        }
#line 705 "digraph.m"
        {
#line 705 "digraph.m"
          mercury__digraph__lookup_key_set_from_3_p_0(mercury__digraph__V_23_23, mercury__digraph__V_25_25, mercury__digraph__M2_38, &mercury__digraph__Ys_36);
        }
#line 701 "digraph.m"
        {
#line 701 "digraph.m"
          mercury__digraph__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 701 "digraph.m"
          MR_hl_field(MR_mktag(0), mercury__digraph__V_8_8, 0) = ((MR_Box) (mercury__digraph__Xs_35));
#line 701 "digraph.m"
          MR_hl_field(MR_mktag(0), mercury__digraph__V_8_8, 1) = ((MR_Box) (mercury__digraph__Ys_36));
#line 701 "digraph.m"
        }
#line 173 "list.opt"
        {
#line 173 "list.opt"
          mercury__digraph__V_9_9 = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_2_f_in__list_0(mercury__digraph__V_23_23, mercury__digraph__V_24_24, mercury__digraph__V_25_25, mercury__digraph__T_7_7);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_54_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(
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
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_55_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(mercury__digraph__V_28_28, mercury__digraph__V_29_29, mercury__digraph__TypeClassInfo_for_enum_13, mercury__digraph__Set_8_8, mercury__digraph__STATE_VARIABLE_Acc1_0_11_9, mercury__digraph__STATE_VARIABLE_Acc1_12_10, mercury__digraph__STATE_VARIABLE_Acc2_0_13_11, mercury__digraph__STATE_VARIABLE_Acc2_14_12);
#line 257 "sparse_bitset.opt"
      return;
    }
#line 256 "sparse_bitset.opt"
  }
#line 92 "sparse_bitset.int"
}

#line 136 "list.int"
static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_54_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__list_0(
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_53_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_2_f_in__list_0(
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

#line 444 "digraph.m"
        {
#line 444 "digraph.m"
          mercury__digraph__lookup_vertex_3_p_0(mercury__digraph__V_14_14, mercury__digraph__V_15_15, mercury__digraph__H_6_6, &mercury__digraph__V_8_8);
        }
#line 173 "list.opt"
        {
#line 173 "list.opt"
          mercury__digraph__V_9_9 = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_53_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_2_f_in__list_0(mercury__digraph__V_14_14, mercury__digraph__V_15_15, mercury__digraph__T_7_7);
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
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_54_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(
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
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_50_95_112_114_101_100_95_95_104_111_55_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(mercury__digraph__V_29_29, mercury__digraph__V_30_30, mercury__digraph__TypeClassInfo_for_enum_13, mercury__digraph__Set_8_8, mercury__digraph__STATE_VARIABLE_Acc1_0_11_9, mercury__digraph__STATE_VARIABLE_Acc1_12_10, mercury__digraph__STATE_VARIABLE_Acc2_0_13_11, mercury__digraph__STATE_VARIABLE_Acc2_14_12);
#line 257 "sparse_bitset.opt"
      return;
    }
#line 256 "sparse_bitset.opt"
  }
#line 92 "sparse_bitset.int"
}

#line 85 "sparse_bitset.int"
static MR_bool MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(
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
      return mercury__digraph__succeeded = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__V_20_20, mercury__digraph__V_21_21, mercury__digraph__V_22_22, mercury__digraph__TypeClassInfo_for_enum_9, mercury__digraph__Set_6_6, mercury__digraph__STATE_VARIABLE_Acc_0_8_7, mercury__digraph__STATE_VARIABLE_Acc_9_8);
    }
#line 254 "sparse_bitset.opt"
    return mercury__digraph__succeeded;
#line 254 "sparse_bitset.opt"
  }
#line 85 "sparse_bitset.int"
}

#line 59 "set.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_95_104_111_53_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__set_0(
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
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_51_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(mercury__digraph__V_22_22, mercury__digraph__V_23_23, mercury__digraph__V_10_46, mercury__digraph__STATE_VARIABLE_A_0_8_7, mercury__digraph__STATE_VARIABLE_A_9_8);
#line 163 "set_ordlist.opt"
      return;
    }
#line 128 "set.opt"
  }
#line 59 "set.int"
}

#line 318 "list.int"
static void MR_CALL 
mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_53_55_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
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
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_53_55_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(mercury__digraph__V_14_14, mercury__digraph__V_15_15, mercury__digraph__T0_7_7, &mercury__digraph__T_9_9);
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

#line 1092 "digraph.m"
static void MR_CALL 
mercury__digraph__IntroducedFrom__pred__add_cartesian_product__1092__1_5_p_0(
#line 1092 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_23,
#line 1092 "digraph.m"
  MR_Word mercury__digraph__KeySet2_6,
#line 1092 "digraph.m"
  MR_Word mercury__digraph__HeadVar__3_15,
#line 1092 "digraph.m"
  MR_Word mercury__digraph__HeadVar__4_16,
#line 1092 "digraph.m"
  MR_Word * mercury__digraph__HeadVar__5_17)
#line 1092 "digraph.m"
{
#line 1092 "digraph.m"
  {
#line 1092 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 1092 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_27_27 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 1092 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_28_28;
#line 1092 "digraph.m"
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_29 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 1092 "digraph.m"
    MR_Word mercury__digraph__TypeClassInfo_for_enum_30;
#line 1092 "digraph.m"
    MR_Word mercury__digraph__Set_6_42;

#line 6452 "digraph.c"
    {
#line 6454 "digraph.c"
      mercury__digraph__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6456 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_28_28, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_27_27));
#line 6458 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_28_28, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_23));
#line 6460 "digraph.c"
    }
#line 6462 "digraph.c"
    {
#line 6464 "digraph.c"
      mercury__digraph__TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6466 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_30, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_29));
#line 6468 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_30, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_23));
#line 6470 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_30, 2) = ((MR_Box) (mercury__digraph__TypeInfo_28_28));
#line 6472 "digraph.c"
    }
#line 254 "sparse_bitset.opt"
    mercury__digraph__Set_6_42 = (MR_Word) mercury__digraph__KeySet2_6;
#line 255 "sparse_bitset.opt"
    {
#line 255 "sparse_bitset.opt"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_23, mercury__digraph__HeadVar__3_15, mercury__digraph__TypeClassInfo_for_enum_30, mercury__digraph__Set_6_42, mercury__digraph__HeadVar__4_16, mercury__digraph__HeadVar__5_17);
#line 255 "sparse_bitset.opt"
      return;
    }
#line 1092 "digraph.m"
  }
#line 1092 "digraph.m"
}

#line 348 "digraph.m"
MR_bool MR_CALL 
mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__from_int_1_1_f_0(
#line 348 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 348 "digraph.m"
  MR_Integer mercury__digraph__Int_4,
#line 348 "digraph.m"
  MR_Word * mercury__digraph__HeadVar__2_2)
#line 348 "digraph.m"
{
#line 348 "digraph.m"
  {
#line 348 "digraph.m"
    *mercury__digraph__HeadVar__2_2 = (MR_Word) mercury__digraph__Int_4;
#line 348 "digraph.m"
    return MR_TRUE;
#line 348 "digraph.m"
  }
#line 348 "digraph.m"
}

#line 347 "digraph.m"
MR_Integer MR_CALL 
mercury__digraph__ClassMethod_for_enum__enum____digraph__digraph_key__arity1______enum__to_int_1_1_f_0(
#line 347 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 347 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1)
#line 347 "digraph.m"
{
#line 347 "digraph.m"
  {
#line 347 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 347 "digraph.m"
    MR_Integer mercury__digraph__Int_4 = (MR_Integer) mercury__digraph__HeadVar__1_1;

#line 347 "digraph.m"
    return mercury__digraph__Int_4;
#line 347 "digraph.m"
  }
#line 347 "digraph.m"
}

#line 372 "digraph.m"
void MR_CALL 
mercury__digraph____Compare____key_set_map_1_0(
#line 372 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_6,
#line 372 "digraph.m"
  MR_Word * mercury__digraph__HeadVar__1_1,
#line 372 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 372 "digraph.m"
  MR_Word mercury__digraph__HeadVar__3_3)
#line 372 "digraph.m"
{
#line 372 "digraph.m"
  {
#line 372 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 372 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_7_7 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 372 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_8_8 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 372 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_9_9;
#line 372 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_10_10 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 372 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_11_11;
#line 372 "digraph.m"
    MR_Word mercury__digraph__Cast_HeadVar1_4 = mercury__digraph__HeadVar__2_2;
#line 372 "digraph.m"
    MR_Word mercury__digraph__Cast_HeadVar2_5 = mercury__digraph__HeadVar__3_3;

#line 6565 "digraph.c"
    {
#line 6567 "digraph.c"
      mercury__digraph__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6569 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_8_8));
#line 6571 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_6));
#line 6573 "digraph.c"
    }
#line 6575 "digraph.c"
    {
#line 6577 "digraph.c"
      mercury__digraph__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6579 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_11, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_10));
#line 6581 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_11, 1) = ((MR_Box) (mercury__digraph__TypeInfo_9_9));
#line 6583 "digraph.c"
    }
#line 372 "digraph.m"
    {
#line 372 "digraph.m"
      mercury__tree234____Compare____tree234_2_0(mercury__digraph__TypeCtorInfo_7_7, mercury__digraph__TypeInfo_11_11, mercury__digraph__HeadVar__1_1, mercury__digraph__Cast_HeadVar1_4, mercury__digraph__Cast_HeadVar2_5);
#line 372 "digraph.m"
      return;
    }
#line 372 "digraph.m"
  }
#line 372 "digraph.m"
}

#line 372 "digraph.m"
MR_bool MR_CALL 
mercury__digraph____Unify____key_set_map_1_0(
#line 372 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 372 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 372 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2)
#line 372 "digraph.m"
{
#line 372 "digraph.m"
  {
#line 372 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 372 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 372 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_7_7 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 372 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_8_8;
#line 372 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_9_9 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 372 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_10_10;
#line 372 "digraph.m"
    MR_Word mercury__digraph__Cast_HeadVar1_3 = mercury__digraph__HeadVar__1_1;
#line 372 "digraph.m"
    MR_Word mercury__digraph__Cast_HeadVar2_4 = mercury__digraph__HeadVar__2_2;

#line 6627 "digraph.c"
    {
#line 6629 "digraph.c"
      mercury__digraph__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6631 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_7));
#line 6633 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_5));
#line 6635 "digraph.c"
    }
#line 6637 "digraph.c"
    {
#line 6639 "digraph.c"
      mercury__digraph__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6641 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_9_9));
#line 6643 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 1) = ((MR_Box) (mercury__digraph__TypeInfo_8_8));
#line 6645 "digraph.c"
    }
#line 372 "digraph.m"
    {
#line 372 "digraph.m"
      return mercury__digraph__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__digraph__TypeCtorInfo_6_6, mercury__digraph__TypeInfo_10_10, mercury__digraph__Cast_HeadVar1_3, mercury__digraph__Cast_HeadVar2_4);
    }
#line 372 "digraph.m"
    return mercury__digraph__succeeded;
#line 372 "digraph.m"
  }
#line 372 "digraph.m"
}

#line 371 "digraph.m"
void MR_CALL 
mercury__digraph____Compare____key_map_1_0(
#line 371 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_6,
#line 371 "digraph.m"
  MR_Word * mercury__digraph__HeadVar__1_1,
#line 371 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 371 "digraph.m"
  MR_Word mercury__digraph__HeadVar__3_3)
#line 371 "digraph.m"
{
#line 371 "digraph.m"
  {
#line 371 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 371 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_7_7 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 371 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_8_8 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 371 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_9_9;
#line 371 "digraph.m"
    MR_Word mercury__digraph__Cast_HeadVar1_4 = mercury__digraph__HeadVar__2_2;
#line 371 "digraph.m"
    MR_Word mercury__digraph__Cast_HeadVar2_5 = mercury__digraph__HeadVar__3_3;

#line 6687 "digraph.c"
    {
#line 6689 "digraph.c"
      mercury__digraph__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6691 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_8_8));
#line 6693 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_6));
#line 6695 "digraph.c"
    }
#line 371 "digraph.m"
    {
#line 371 "digraph.m"
      mercury__tree234____Compare____tree234_2_0(mercury__digraph__TypeCtorInfo_7_7, mercury__digraph__TypeInfo_9_9, mercury__digraph__HeadVar__1_1, mercury__digraph__Cast_HeadVar1_4, mercury__digraph__Cast_HeadVar2_5);
#line 371 "digraph.m"
      return;
    }
#line 371 "digraph.m"
  }
#line 371 "digraph.m"
}

#line 371 "digraph.m"
MR_bool MR_CALL 
mercury__digraph____Unify____key_map_1_0(
#line 371 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 371 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 371 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2)
#line 371 "digraph.m"
{
#line 371 "digraph.m"
  {
#line 371 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 371 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 371 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_7_7 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 371 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_8_8;
#line 371 "digraph.m"
    MR_Word mercury__digraph__Cast_HeadVar1_3 = mercury__digraph__HeadVar__1_1;
#line 371 "digraph.m"
    MR_Word mercury__digraph__Cast_HeadVar2_4 = mercury__digraph__HeadVar__2_2;

#line 6735 "digraph.c"
    {
#line 6737 "digraph.c"
      mercury__digraph__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6739 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_7));
#line 6741 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_5));
#line 6743 "digraph.c"
    }
#line 371 "digraph.m"
    {
#line 371 "digraph.m"
      return mercury__digraph__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__digraph__TypeCtorInfo_6_6, mercury__digraph__TypeInfo_8_8, mercury__digraph__Cast_HeadVar1_3, mercury__digraph__Cast_HeadVar2_4);
    }
#line 371 "digraph.m"
    return mercury__digraph__succeeded;
#line 371 "digraph.m"
  }
#line 371 "digraph.m"
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

#line 6783 "digraph.c"
    {
#line 6785 "digraph.c"
      mercury__digraph__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6787 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_7));
#line 6789 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_6));
#line 6791 "digraph.c"
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

#line 6829 "digraph.c"
    {
#line 6831 "digraph.c"
      mercury__digraph__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6833 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_7_7, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_6_6));
#line 6835 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_7_7, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_5));
#line 6837 "digraph.c"
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

#line 343 "digraph.m"
void MR_CALL 
mercury__digraph____Compare____digraph_key_1_0(
#line 343 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_8,
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
    MR_Integer mercury__digraph__CastX_6 = (MR_Integer) mercury__digraph__HeadVar__2_2;
#line 343 "digraph.m"
    MR_Integer mercury__digraph__CastY_7 = (MR_Integer) mercury__digraph__HeadVar__3_3;

#line 343 "digraph.m"
    mercury__digraph__succeeded = (mercury__digraph__CastX_6 == mercury__digraph__CastY_7);
#line 343 "digraph.m"
    if (mercury__digraph__succeeded)
#line 6877 "digraph.c"
      *mercury__digraph__HeadVar__1_1 = (MR_Integer) 0;
#line 343 "digraph.m"
    else
#line 343 "digraph.m"
      {
#line 343 "digraph.m"
        MR_Integer mercury__digraph__V_4_4 = (MR_Integer) mercury__digraph__HeadVar__2_2;
#line 343 "digraph.m"
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
#line 343 "digraph.m"
      }
#line 343 "digraph.m"
  }
#line 343 "digraph.m"
}

#line 343 "digraph.m"
MR_bool MR_CALL 
mercury__digraph____Unify____digraph_key_1_0(
#line 343 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_7,
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
    MR_Integer mercury__digraph__CastX_5 = (MR_Integer) mercury__digraph__HeadVar__1_1;
#line 343 "digraph.m"
    MR_Integer mercury__digraph__CastY_6 = (MR_Integer) mercury__digraph__HeadVar__2_2;

#line 343 "digraph.m"
    mercury__digraph__succeeded = (mercury__digraph__CastX_5 == mercury__digraph__CastY_6);
#line 343 "digraph.m"
    if (mercury__digraph__succeeded)
#line 343 "digraph.m"
      mercury__digraph__succeeded = MR_TRUE;
#line 343 "digraph.m"
    else
#line 343 "digraph.m"
      {
#line 343 "digraph.m"
        MR_Integer mercury__digraph__V_3_3 = (MR_Integer) mercury__digraph__HeadVar__1_1;
#line 343 "digraph.m"
        MR_Integer mercury__digraph__V_4_4 = (MR_Integer) mercury__digraph__HeadVar__2_2;

#line 6952 "digraph.c"
        mercury__digraph__succeeded = (mercury__digraph__V_3_3 == mercury__digraph__V_4_4);
#line 343 "digraph.m"
      }
#line 343 "digraph.m"
    return mercury__digraph__succeeded;
#line 343 "digraph.m"
  }
#line 343 "digraph.m"
}

#line 351 "digraph.m"
void MR_CALL 
mercury__digraph____Compare____digraph_1_0(
#line 351 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_17,
#line 351 "digraph.m"
  MR_Word * mercury__digraph__HeadVar__1_1,
#line 351 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 351 "digraph.m"
  MR_Word mercury__digraph__HeadVar__3_3)
#line 351 "digraph.m"
{
#line 351 "digraph.m"
  {
#line 351 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 351 "digraph.m"
    MR_Integer mercury__digraph__CastX_15 = (MR_Integer) mercury__digraph__HeadVar__2_2;
#line 351 "digraph.m"
    MR_Integer mercury__digraph__CastY_16 = (MR_Integer) mercury__digraph__HeadVar__3_3;

#line 351 "digraph.m"
    mercury__digraph__succeeded = (mercury__digraph__CastX_15 == mercury__digraph__CastY_16);
#line 351 "digraph.m"
    if (mercury__digraph__succeeded)
#line 6989 "digraph.c"
      *mercury__digraph__HeadVar__1_1 = (MR_Integer) 0;
#line 351 "digraph.m"
    else
#line 351 "digraph.m"
      {
#line 351 "digraph.m"
        MR_Integer mercury__digraph__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 351 "digraph.m"
        MR_Word mercury__digraph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 351 "digraph.m"
        MR_Word mercury__digraph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__2_2, (MR_Integer) 2)));
#line 351 "digraph.m"
        MR_Word mercury__digraph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__2_2, (MR_Integer) 3)));
#line 351 "digraph.m"
        MR_Integer mercury__digraph__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__3_3, (MR_Integer) 0)));
#line 351 "digraph.m"
        MR_Word mercury__digraph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__3_3, (MR_Integer) 1)));
#line 351 "digraph.m"
        MR_Word mercury__digraph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__3_3, (MR_Integer) 2)));
#line 351 "digraph.m"
        MR_Word mercury__digraph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__3_3, (MR_Integer) 3)));
#line 351 "digraph.m"
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
#line 7036 "digraph.c"
        mercury__digraph__succeeded = (mercury__digraph__V_12_12 == (MR_Integer) 0);
#line 351 "digraph.m"
        mercury__digraph__succeeded = !(mercury__digraph__succeeded);
#line 351 "digraph.m"
        if (mercury__digraph__succeeded)
#line 351 "digraph.m"
          *mercury__digraph__HeadVar__1_1 = mercury__digraph__V_12_12;
#line 351 "digraph.m"
        else
#line 351 "digraph.m"
          {
#line 351 "digraph.m"
            MR_Word mercury__digraph__V_13_13;
#line 351 "digraph.m"
            MR_Word mercury__digraph__TypeCtorInfo_19_19 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 351 "digraph.m"
            MR_Word mercury__digraph__TypeInfo_20_20;

#line 7055 "digraph.c"
            {
#line 7057 "digraph.c"
              mercury__digraph__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7059 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_20_20, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_19_19));
#line 7061 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_20_20, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
#line 7063 "digraph.c"
            }
#line 351 "digraph.m"
            {
#line 351 "digraph.m"
              mercury__bimap____Compare____bimap_2_0(mercury__digraph__TypeInfo_for_T_17, mercury__digraph__TypeInfo_20_20, &mercury__digraph__V_13_13, mercury__digraph__V_5_5, mercury__digraph__V_9_9);
            }
#line 7070 "digraph.c"
            mercury__digraph__succeeded = (mercury__digraph__V_13_13 == (MR_Integer) 0);
#line 351 "digraph.m"
            mercury__digraph__succeeded = !(mercury__digraph__succeeded);
#line 351 "digraph.m"
            if (mercury__digraph__succeeded)
#line 351 "digraph.m"
              *mercury__digraph__HeadVar__1_1 = mercury__digraph__V_13_13;
#line 351 "digraph.m"
            else
#line 351 "digraph.m"
              {
#line 351 "digraph.m"
                MR_Word mercury__digraph__V_14_14;
#line 351 "digraph.m"
                MR_Word mercury__digraph__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 351 "digraph.m"
                MR_Word mercury__digraph__TypeCtorInfo_24_24 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 351 "digraph.m"
                MR_Word mercury__digraph__TypeInfo_25_25;
#line 351 "digraph.m"
                MR_Word mercury__digraph__TypeCtorInfo_26_26 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 351 "digraph.m"
                MR_Word mercury__digraph__TypeInfo_27_27;

#line 7095 "digraph.c"
                {
#line 7097 "digraph.c"
                  mercury__digraph__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7099 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_24_24));
#line 7101 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
#line 7103 "digraph.c"
                }
#line 7105 "digraph.c"
                {
#line 7107 "digraph.c"
                  mercury__digraph__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7109 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_26_26));
#line 7111 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 1) = ((MR_Box) (mercury__digraph__TypeInfo_25_25));
#line 7113 "digraph.c"
                }
#line 351 "digraph.m"
                {
#line 351 "digraph.m"
                  mercury__tree234____Compare____tree234_2_0(mercury__digraph__TypeCtorInfo_23_23, mercury__digraph__TypeInfo_27_27, &mercury__digraph__V_14_14, mercury__digraph__V_6_6, mercury__digraph__V_10_10);
                }
#line 7120 "digraph.c"
                mercury__digraph__succeeded = (mercury__digraph__V_14_14 == (MR_Integer) 0);
#line 351 "digraph.m"
                mercury__digraph__succeeded = !(mercury__digraph__succeeded);
#line 351 "digraph.m"
                if (mercury__digraph__succeeded)
#line 351 "digraph.m"
                  *mercury__digraph__HeadVar__1_1 = mercury__digraph__V_14_14;
#line 351 "digraph.m"
                else
#line 351 "digraph.m"
                  {
#line 351 "digraph.m"
                    MR_Word mercury__digraph__TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 351 "digraph.m"
                    MR_Word mercury__digraph__TypeCtorInfo_31_31 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 351 "digraph.m"
                    MR_Word mercury__digraph__TypeInfo_32_32;
#line 351 "digraph.m"
                    MR_Word mercury__digraph__TypeCtorInfo_33_33 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 351 "digraph.m"
                    MR_Word mercury__digraph__TypeInfo_34_34;

#line 7143 "digraph.c"
                    {
#line 7145 "digraph.c"
                      mercury__digraph__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7147 "digraph.c"
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_32_32, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_31_31));
#line 7149 "digraph.c"
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_32_32, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
#line 7151 "digraph.c"
                    }
#line 7153 "digraph.c"
                    {
#line 7155 "digraph.c"
                      mercury__digraph__TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7157 "digraph.c"
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_34_34, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_33_33));
#line 7159 "digraph.c"
                      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_34_34, 1) = ((MR_Box) (mercury__digraph__TypeInfo_32_32));
#line 7161 "digraph.c"
                    }
#line 351 "digraph.m"
                    {
#line 351 "digraph.m"
                      mercury__tree234____Compare____tree234_2_0(mercury__digraph__TypeCtorInfo_30_30, mercury__digraph__TypeInfo_34_34, mercury__digraph__HeadVar__1_1, mercury__digraph__V_7_7, mercury__digraph__V_11_11);
#line 351 "digraph.m"
                      return;
                    }
#line 351 "digraph.m"
                  }
#line 351 "digraph.m"
              }
#line 351 "digraph.m"
          }
#line 351 "digraph.m"
      }
#line 351 "digraph.m"
  }
#line 351 "digraph.m"
}

#line 351 "digraph.m"
MR_bool MR_CALL 
mercury__digraph____Unify____digraph_1_0(
#line 351 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_13,
#line 351 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 351 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2)
#line 351 "digraph.m"
{
#line 351 "digraph.m"
  {
#line 351 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 351 "digraph.m"
    MR_Integer mercury__digraph__CastX_11 = (MR_Integer) mercury__digraph__HeadVar__1_1;
#line 351 "digraph.m"
    MR_Integer mercury__digraph__CastY_12 = (MR_Integer) mercury__digraph__HeadVar__2_2;

#line 351 "digraph.m"
    mercury__digraph__succeeded = (mercury__digraph__CastX_11 == mercury__digraph__CastY_12);
#line 351 "digraph.m"
    if (mercury__digraph__succeeded)
#line 351 "digraph.m"
      mercury__digraph__succeeded = MR_TRUE;
#line 351 "digraph.m"
    else
#line 351 "digraph.m"
      {
#line 351 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_14_14;
#line 351 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_18_18;
#line 351 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_21_21;
#line 351 "digraph.m"
        MR_Word mercury__digraph__TypeInfo_27_27;
#line 351 "digraph.m"
        MR_Word mercury__digraph__TypeInfo_29_29;
#line 351 "digraph.m"
        MR_Integer mercury__digraph__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__1_1, (MR_Integer) 0)));
#line 351 "digraph.m"
        MR_Word mercury__digraph__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__1_1, (MR_Integer) 1)));
#line 351 "digraph.m"
        MR_Word mercury__digraph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__1_1, (MR_Integer) 2)));
#line 351 "digraph.m"
        MR_Word mercury__digraph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__1_1, (MR_Integer) 3)));
#line 351 "digraph.m"
        MR_Integer mercury__digraph__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 351 "digraph.m"
        MR_Word mercury__digraph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 351 "digraph.m"
        MR_Word mercury__digraph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__2_2, (MR_Integer) 2)));
#line 351 "digraph.m"
        MR_Word mercury__digraph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__2_2, (MR_Integer) 3)));

#line 7240 "digraph.c"
        mercury__digraph__succeeded = (mercury__digraph__V_3_3 == mercury__digraph__V_7_7);
#line 351 "digraph.m"
        if (mercury__digraph__succeeded)
#line 351 "digraph.m"
          {
#line 7246 "digraph.c"
            mercury__digraph__TypeCtorInfo_14_14 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 7248 "digraph.c"
            {
#line 7250 "digraph.c"
              mercury__digraph__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7252 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
#line 7254 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
#line 7256 "digraph.c"
            }
#line 7258 "digraph.c"
            {
#line 7260 "digraph.c"
              mercury__digraph__succeeded = mercury__bimap____Unify____bimap_2_0(mercury__digraph__TypeInfo_for_T_13, mercury__digraph__TypeInfo_27_27, mercury__digraph__V_4_4, mercury__digraph__V_8_8);
            }
#line 351 "digraph.m"
            if (mercury__digraph__succeeded)
#line 351 "digraph.m"
              {
#line 7267 "digraph.c"
                mercury__digraph__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 7269 "digraph.c"
                mercury__digraph__TypeCtorInfo_21_21 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 7271 "digraph.c"
                {
#line 7273 "digraph.c"
                  mercury__digraph__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7275 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_21_21));
#line 7277 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 1) = ((MR_Box) (mercury__digraph__TypeInfo_27_27));
#line 7279 "digraph.c"
                }
#line 7281 "digraph.c"
                {
#line 7283 "digraph.c"
                  mercury__digraph__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__digraph__TypeCtorInfo_18_18, mercury__digraph__TypeInfo_29_29, mercury__digraph__V_5_5, mercury__digraph__V_9_9);
                }
#line 351 "digraph.m"
                if (mercury__digraph__succeeded)
#line 7288 "digraph.c"
                  {
#line 7290 "digraph.c"
                    return mercury__digraph__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__digraph__TypeCtorInfo_18_18, mercury__digraph__TypeInfo_29_29, mercury__digraph__V_6_6, mercury__digraph__V_10_10);
                  }
#line 351 "digraph.m"
              }
#line 351 "digraph.m"
          }
#line 351 "digraph.m"
      }
#line 351 "digraph.m"
    return mercury__digraph__succeeded;
#line 351 "digraph.m"
  }
#line 351 "digraph.m"
}

#line 897 "digraph.m"
void MR_CALL 
mercury__digraph____Compare____clique_map_1_0(
#line 897 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_6,
#line 897 "digraph.m"
  MR_Word * mercury__digraph__HeadVar__1_1,
#line 897 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 897 "digraph.m"
  MR_Word mercury__digraph__HeadVar__3_3)
#line 897 "digraph.m"
{
#line 897 "digraph.m"
  {
#line 897 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 897 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_7_7 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 897 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_8_8;
#line 897 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_9_9;
#line 897 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_10_10;
#line 897 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_11_11;
#line 897 "digraph.m"
    MR_Word mercury__digraph__Cast_HeadVar1_4 = mercury__digraph__HeadVar__2_2;
#line 897 "digraph.m"
    MR_Word mercury__digraph__Cast_HeadVar2_5 = mercury__digraph__HeadVar__3_3;

#line 7338 "digraph.c"
    {
#line 7340 "digraph.c"
      mercury__digraph__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7342 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_7));
#line 7344 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_6));
#line 7346 "digraph.c"
    }
#line 7348 "digraph.c"
    mercury__digraph__TypeCtorInfo_9_9 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 7350 "digraph.c"
    {
#line 7352 "digraph.c"
      mercury__digraph__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7354 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_9_9));
#line 7356 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_6));
#line 7358 "digraph.c"
    }
#line 7360 "digraph.c"
    {
#line 7362 "digraph.c"
      mercury__digraph__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7364 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_11, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_7));
#line 7366 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_11, 1) = ((MR_Box) (mercury__digraph__TypeInfo_10_10));
#line 7368 "digraph.c"
    }
#line 897 "digraph.m"
    {
#line 897 "digraph.m"
      mercury__tree234____Compare____tree234_2_0(mercury__digraph__TypeInfo_8_8, mercury__digraph__TypeInfo_11_11, mercury__digraph__HeadVar__1_1, (MR_Word) mercury__digraph__Cast_HeadVar1_4, (MR_Word) mercury__digraph__Cast_HeadVar2_5);
#line 897 "digraph.m"
      return;
    }
#line 897 "digraph.m"
  }
#line 897 "digraph.m"
}

#line 897 "digraph.m"
MR_bool MR_CALL 
mercury__digraph____Unify____clique_map_1_0(
#line 897 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 897 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 897 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2)
#line 897 "digraph.m"
{
#line 897 "digraph.m"
  {
#line 897 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 897 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_6_6 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 897 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_7_7;
#line 897 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_8_8 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 897 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_9_9;
#line 897 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_10_10;
#line 897 "digraph.m"
    MR_Word mercury__digraph__Cast_HeadVar1_3 = mercury__digraph__HeadVar__1_1;
#line 897 "digraph.m"
    MR_Word mercury__digraph__Cast_HeadVar2_4 = mercury__digraph__HeadVar__2_2;

#line 7412 "digraph.c"
    {
#line 7414 "digraph.c"
      mercury__digraph__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7416 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_7_7, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_6_6));
#line 7418 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_7_7, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_5));
#line 7420 "digraph.c"
    }
#line 7422 "digraph.c"
    {
#line 7424 "digraph.c"
      mercury__digraph__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7426 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_8_8));
#line 7428 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_5));
#line 7430 "digraph.c"
    }
#line 7432 "digraph.c"
    {
#line 7434 "digraph.c"
      mercury__digraph__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7436 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_6_6));
#line 7438 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 1) = ((MR_Box) (mercury__digraph__TypeInfo_9_9));
#line 7440 "digraph.c"
    }
#line 897 "digraph.m"
    {
#line 897 "digraph.m"
      return mercury__digraph__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__digraph__TypeInfo_7_7, mercury__digraph__TypeInfo_10_10, (MR_Word) mercury__digraph__Cast_HeadVar1_3, (MR_Word) mercury__digraph__Cast_HeadVar2_4);
    }
#line 897 "digraph.m"
    return mercury__digraph__succeeded;
#line 897 "digraph.m"
  }
#line 897 "digraph.m"
}

#line 1124 "digraph.m"
void MR_CALL 
mercury__digraph__traverse_children_6_p_1(
#line 1124 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_24,
#line 1124 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_A_25,
#line 1124 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 1124 "digraph.m"
  MR_Box mercury__digraph__Parent_2,
#line 1124 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 1124 "digraph.m"
  MR_Word mercury__digraph__ProcessEdge_4,
#line 1124 "digraph.m"
  MR_Box mercury__digraph__STATE_VARIABLE_Acc_0_5,
#line 1124 "digraph.m"
  MR_Box * mercury__digraph__STATE_VARIABLE_Acc_6)
#line 1124 "digraph.m"
{
#line 1127 "digraph.m"
  while (MR_TRUE)
#line 1127 "digraph.m"
    {
#line 1127 "digraph.m"
      /* tailcall optimized into a loop */
#line 1127 "digraph.m"
      {
#line 1127 "digraph.m"
        MR_bool mercury__digraph__succeeded;

#line 1127 "digraph.m"
        if ((mercury__digraph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1127 "digraph.m"
          *mercury__digraph__STATE_VARIABLE_Acc_6 = mercury__digraph__STATE_VARIABLE_Acc_0_5;
#line 1127 "digraph.m"
        else
#line 1128 "digraph.m"
          {
#line 1128 "digraph.m"
            MR_Word mercury__digraph__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 0)));
#line 1128 "digraph.m"
            MR_Word mercury__digraph__Xs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 1)));
#line 1128 "digraph.m"
            MR_Box mercury__digraph__Child_19;
#line 1128 "digraph.m"
            MR_Box mercury__digraph__STATE_VARIABLE_Acc_22_22;
#line 1130 "digraph.m"
            void MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 444 "digraph.m"
            {
#line 444 "digraph.m"
              mercury__digraph__lookup_vertex_3_p_0(mercury__digraph__TypeInfo_for_T_24, mercury__digraph__G_3, mercury__digraph__X_13, &mercury__digraph__Child_19);
            }
#line 1130 "digraph.m"
            mercury__digraph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__digraph__ProcessEdge_4, (MR_Integer) 1)));
#line 1130 "digraph.m"
            {
#line 1130 "digraph.m"
              mercury__digraph__func_0(((MR_Box) mercury__digraph__ProcessEdge_4), mercury__digraph__Parent_2, mercury__digraph__Child_19, mercury__digraph__STATE_VARIABLE_Acc_0_5, &mercury__digraph__STATE_VARIABLE_Acc_22_22);
            }
#line 1131 "digraph.m"
            /* direct tailcall eliminated */
#line 1131 "digraph.m"
            {
#line 1131 "digraph.m"
              MR_Word mercury__digraph__HeadVar__1__tmp_copy_1 = mercury__digraph__Xs_14;
#line 1131 "digraph.m"
              MR_Box mercury__digraph__STATE_VARIABLE_Acc_0__tmp_copy_5 = mercury__digraph__STATE_VARIABLE_Acc_22_22;

#line 1131 "digraph.m"
              mercury__digraph__STATE_VARIABLE_Acc_0_5 = mercury__digraph__STATE_VARIABLE_Acc_0__tmp_copy_5;
#line 1131 "digraph.m"
              mercury__digraph__HeadVar__1_1 = mercury__digraph__HeadVar__1__tmp_copy_1;
#line 1131 "digraph.m"
            }
#line 1131 "digraph.m"
            continue;
#line 1128 "digraph.m"
          }
#line 1127 "digraph.m"
      }
#line 1127 "digraph.m"
      break;
#line 1127 "digraph.m"
    }
#line 1124 "digraph.m"
}

#line 1122 "digraph.m"
void MR_CALL 
mercury__digraph__traverse_children_6_p_0(
#line 1122 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_24,
#line 1122 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_A_25,
#line 1122 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 1122 "digraph.m"
  MR_Box mercury__digraph__Parent_2,
#line 1122 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 1122 "digraph.m"
  MR_Word mercury__digraph__ProcessEdge_4,
#line 1122 "digraph.m"
  MR_Box mercury__digraph__STATE_VARIABLE_Acc_0_5,
#line 1122 "digraph.m"
  MR_Box * mercury__digraph__STATE_VARIABLE_Acc_6)
#line 1122 "digraph.m"
{
#line 1127 "digraph.m"
  while (MR_TRUE)
#line 1127 "digraph.m"
    {
#line 1127 "digraph.m"
      /* tailcall optimized into a loop */
#line 1127 "digraph.m"
      {
#line 1127 "digraph.m"
        MR_bool mercury__digraph__succeeded;

#line 1127 "digraph.m"
        if ((mercury__digraph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1127 "digraph.m"
          *mercury__digraph__STATE_VARIABLE_Acc_6 = mercury__digraph__STATE_VARIABLE_Acc_0_5;
#line 1127 "digraph.m"
        else
#line 1128 "digraph.m"
          {
#line 1128 "digraph.m"
            MR_Word mercury__digraph__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 0)));
#line 1128 "digraph.m"
            MR_Word mercury__digraph__Xs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 1)));
#line 1128 "digraph.m"
            MR_Box mercury__digraph__Child_19;
#line 1128 "digraph.m"
            MR_Box mercury__digraph__STATE_VARIABLE_Acc_22_22;
#line 1130 "digraph.m"
            void MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 444 "digraph.m"
            {
#line 444 "digraph.m"
              mercury__digraph__lookup_vertex_3_p_0(mercury__digraph__TypeInfo_for_T_24, mercury__digraph__G_3, mercury__digraph__X_13, &mercury__digraph__Child_19);
            }
#line 1130 "digraph.m"
            mercury__digraph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__digraph__ProcessEdge_4, (MR_Integer) 1)));
#line 1130 "digraph.m"
            {
#line 1130 "digraph.m"
              mercury__digraph__func_0(((MR_Box) mercury__digraph__ProcessEdge_4), mercury__digraph__Parent_2, mercury__digraph__Child_19, mercury__digraph__STATE_VARIABLE_Acc_0_5, &mercury__digraph__STATE_VARIABLE_Acc_22_22);
            }
#line 1131 "digraph.m"
            /* direct tailcall eliminated */
#line 1131 "digraph.m"
            {
#line 1131 "digraph.m"
              MR_Word mercury__digraph__HeadVar__1__tmp_copy_1 = mercury__digraph__Xs_14;
#line 1131 "digraph.m"
              MR_Box mercury__digraph__STATE_VARIABLE_Acc_0__tmp_copy_5 = mercury__digraph__STATE_VARIABLE_Acc_22_22;

#line 1131 "digraph.m"
              mercury__digraph__STATE_VARIABLE_Acc_0_5 = mercury__digraph__STATE_VARIABLE_Acc_0__tmp_copy_5;
#line 1131 "digraph.m"
              mercury__digraph__HeadVar__1_1 = mercury__digraph__HeadVar__1__tmp_copy_1;
#line 1131 "digraph.m"
            }
#line 1131 "digraph.m"
            continue;
#line 1128 "digraph.m"
          }
#line 1127 "digraph.m"
      }
#line 1127 "digraph.m"
      break;
#line 1127 "digraph.m"
    }
#line 1122 "digraph.m"
}

#line 1106 "digraph.m"
void MR_CALL 
mercury__digraph__traverse_2_6_p_1(
#line 1106 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_27,
#line 1106 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_A_28,
#line 1106 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 1106 "digraph.m"
  MR_Word mercury__digraph__G_2,
#line 1106 "digraph.m"
  MR_Word mercury__digraph__ProcessVertex_3,
#line 1106 "digraph.m"
  MR_Word mercury__digraph__ProcessEdge_4,
#line 1106 "digraph.m"
  MR_Box mercury__digraph__STATE_VARIABLE_Acc_0_5,
#line 1106 "digraph.m"
  MR_Box * mercury__digraph__STATE_VARIABLE_Acc_6)
#line 1106 "digraph.m"
{
#line 1109 "digraph.m"
  while (MR_TRUE)
#line 1109 "digraph.m"
    {
#line 1109 "digraph.m"
      /* tailcall optimized into a loop */
#line 1109 "digraph.m"
      {
#line 1109 "digraph.m"
        MR_bool mercury__digraph__succeeded;

#line 1109 "digraph.m"
        if ((mercury__digraph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1109 "digraph.m"
          *mercury__digraph__STATE_VARIABLE_Acc_6 = mercury__digraph__STATE_VARIABLE_Acc_0_5;
#line 1109 "digraph.m"
        else
#line 1110 "digraph.m"
          {
#line 1110 "digraph.m"
            MR_Word mercury__digraph__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 0)));
#line 1110 "digraph.m"
            MR_Word mercury__digraph__Xs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 1)));
#line 1110 "digraph.m"
            MR_Box mercury__digraph__VX_19;
#line 1110 "digraph.m"
            MR_Word mercury__digraph__Children_20;
#line 1110 "digraph.m"
            MR_Word mercury__digraph__V_23_23;
#line 1110 "digraph.m"
            MR_Box mercury__digraph__STATE_VARIABLE_Acc_24_24;
#line 1110 "digraph.m"
            MR_Box mercury__digraph__STATE_VARIABLE_Acc_25_25;
#line 1116 "digraph.m"
            void MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 444 "digraph.m"
            {
#line 444 "digraph.m"
              mercury__digraph__lookup_vertex_3_p_0(mercury__digraph__TypeInfo_for_T_27, mercury__digraph__G_2, mercury__digraph__X_13, &mercury__digraph__VX_19);
            }
#line 518 "digraph.m"
            {
#line 518 "digraph.m"
              mercury__digraph__lookup_from_3_p_0(mercury__digraph__TypeInfo_for_T_27, mercury__digraph__G_2, mercury__digraph__X_13, &mercury__digraph__V_23_23);
            }
#line 38 "set_ordlist.opt"
            mercury__digraph__Children_20 = (MR_Word) mercury__digraph__V_23_23;
#line 1116 "digraph.m"
            mercury__digraph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__digraph__ProcessVertex_3, (MR_Integer) 1)));
#line 1116 "digraph.m"
            {
#line 1116 "digraph.m"
              mercury__digraph__func_0(((MR_Box) mercury__digraph__ProcessVertex_3), mercury__digraph__VX_19, mercury__digraph__STATE_VARIABLE_Acc_0_5, &mercury__digraph__STATE_VARIABLE_Acc_24_24);
            }
#line 1117 "digraph.m"
            {
#line 1117 "digraph.m"
              mercury__digraph__traverse_children_6_p_1(mercury__digraph__TypeInfo_for_T_27, mercury__digraph__TypeInfo_for_A_28, mercury__digraph__Children_20, mercury__digraph__VX_19, mercury__digraph__G_2, mercury__digraph__ProcessEdge_4, mercury__digraph__STATE_VARIABLE_Acc_24_24, &mercury__digraph__STATE_VARIABLE_Acc_25_25);
            }
#line 1118 "digraph.m"
            /* direct tailcall eliminated */
#line 1118 "digraph.m"
            {
#line 1118 "digraph.m"
              MR_Word mercury__digraph__HeadVar__1__tmp_copy_1 = mercury__digraph__Xs_14;
#line 1118 "digraph.m"
              MR_Box mercury__digraph__STATE_VARIABLE_Acc_0__tmp_copy_5 = mercury__digraph__STATE_VARIABLE_Acc_25_25;

#line 1118 "digraph.m"
              mercury__digraph__STATE_VARIABLE_Acc_0_5 = mercury__digraph__STATE_VARIABLE_Acc_0__tmp_copy_5;
#line 1118 "digraph.m"
              mercury__digraph__HeadVar__1_1 = mercury__digraph__HeadVar__1__tmp_copy_1;
#line 1118 "digraph.m"
            }
#line 1118 "digraph.m"
            continue;
#line 1110 "digraph.m"
          }
#line 1109 "digraph.m"
      }
#line 1109 "digraph.m"
      break;
#line 1109 "digraph.m"
    }
#line 1106 "digraph.m"
}

#line 1104 "digraph.m"
void MR_CALL 
mercury__digraph__traverse_2_6_p_0(
#line 1104 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_27,
#line 1104 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_A_28,
#line 1104 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 1104 "digraph.m"
  MR_Word mercury__digraph__G_2,
#line 1104 "digraph.m"
  MR_Word mercury__digraph__ProcessVertex_3,
#line 1104 "digraph.m"
  MR_Word mercury__digraph__ProcessEdge_4,
#line 1104 "digraph.m"
  MR_Box mercury__digraph__STATE_VARIABLE_Acc_0_5,
#line 1104 "digraph.m"
  MR_Box * mercury__digraph__STATE_VARIABLE_Acc_6)
#line 1104 "digraph.m"
{
#line 1109 "digraph.m"
  while (MR_TRUE)
#line 1109 "digraph.m"
    {
#line 1109 "digraph.m"
      /* tailcall optimized into a loop */
#line 1109 "digraph.m"
      {
#line 1109 "digraph.m"
        MR_bool mercury__digraph__succeeded;

#line 1109 "digraph.m"
        if ((mercury__digraph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1109 "digraph.m"
          *mercury__digraph__STATE_VARIABLE_Acc_6 = mercury__digraph__STATE_VARIABLE_Acc_0_5;
#line 1109 "digraph.m"
        else
#line 1110 "digraph.m"
          {
#line 1110 "digraph.m"
            MR_Word mercury__digraph__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 0)));
#line 1110 "digraph.m"
            MR_Word mercury__digraph__Xs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 1)));
#line 1110 "digraph.m"
            MR_Box mercury__digraph__VX_19;
#line 1110 "digraph.m"
            MR_Word mercury__digraph__Children_20;
#line 1110 "digraph.m"
            MR_Word mercury__digraph__V_23_23;
#line 1110 "digraph.m"
            MR_Box mercury__digraph__STATE_VARIABLE_Acc_24_24;
#line 1110 "digraph.m"
            MR_Box mercury__digraph__STATE_VARIABLE_Acc_25_25;
#line 1116 "digraph.m"
            void MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 444 "digraph.m"
            {
#line 444 "digraph.m"
              mercury__digraph__lookup_vertex_3_p_0(mercury__digraph__TypeInfo_for_T_27, mercury__digraph__G_2, mercury__digraph__X_13, &mercury__digraph__VX_19);
            }
#line 518 "digraph.m"
            {
#line 518 "digraph.m"
              mercury__digraph__lookup_from_3_p_0(mercury__digraph__TypeInfo_for_T_27, mercury__digraph__G_2, mercury__digraph__X_13, &mercury__digraph__V_23_23);
            }
#line 38 "set_ordlist.opt"
            mercury__digraph__Children_20 = (MR_Word) mercury__digraph__V_23_23;
#line 1116 "digraph.m"
            mercury__digraph__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__digraph__ProcessVertex_3, (MR_Integer) 1)));
#line 1116 "digraph.m"
            {
#line 1116 "digraph.m"
              mercury__digraph__func_0(((MR_Box) mercury__digraph__ProcessVertex_3), mercury__digraph__VX_19, mercury__digraph__STATE_VARIABLE_Acc_0_5, &mercury__digraph__STATE_VARIABLE_Acc_24_24);
            }
#line 1117 "digraph.m"
            {
#line 1117 "digraph.m"
              mercury__digraph__traverse_children_6_p_0(mercury__digraph__TypeInfo_for_T_27, mercury__digraph__TypeInfo_for_A_28, mercury__digraph__Children_20, mercury__digraph__VX_19, mercury__digraph__G_2, mercury__digraph__ProcessEdge_4, mercury__digraph__STATE_VARIABLE_Acc_24_24, &mercury__digraph__STATE_VARIABLE_Acc_25_25);
            }
#line 1118 "digraph.m"
            /* direct tailcall eliminated */
#line 1118 "digraph.m"
            {
#line 1118 "digraph.m"
              MR_Word mercury__digraph__HeadVar__1__tmp_copy_1 = mercury__digraph__Xs_14;
#line 1118 "digraph.m"
              MR_Box mercury__digraph__STATE_VARIABLE_Acc_0__tmp_copy_5 = mercury__digraph__STATE_VARIABLE_Acc_25_25;

#line 1118 "digraph.m"
              mercury__digraph__STATE_VARIABLE_Acc_0_5 = mercury__digraph__STATE_VARIABLE_Acc_0__tmp_copy_5;
#line 1118 "digraph.m"
              mercury__digraph__HeadVar__1_1 = mercury__digraph__HeadVar__1__tmp_copy_1;
#line 1118 "digraph.m"
            }
#line 1118 "digraph.m"
            continue;
#line 1110 "digraph.m"
          }
#line 1109 "digraph.m"
      }
#line 1109 "digraph.m"
      break;
#line 1109 "digraph.m"
    }
#line 1104 "digraph.m"
}

#line 1088 "digraph.m"
static void MR_CALL 
mercury__digraph__add_cartesian_product_4_p_0(
#line 1088 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_23,
#line 1088 "digraph.m"
  MR_Word mercury__digraph__KeySet1_5,
#line 1088 "digraph.m"
  MR_Word mercury__digraph__KeySet2_6,
#line 1088 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Rtc_0_9,
#line 1088 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Rtc_10)
#line 1088 "digraph.m"
{
#line 1091 "digraph.m"
  {
#line 1091 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 1091 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_33_33 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 1091 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_34_34;
#line 1091 "digraph.m"
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_35 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 1091 "digraph.m"
    MR_Word mercury__digraph__TypeClassInfo_for_enum_36;
#line 1091 "digraph.m"
    MR_Word mercury__digraph__Set_6_42;

#line 7884 "digraph.c"
    {
#line 7886 "digraph.c"
      mercury__digraph__TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7888 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_34_34, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_33_33));
#line 7890 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_34_34, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_23));
#line 7892 "digraph.c"
    }
#line 7894 "digraph.c"
    {
#line 7896 "digraph.c"
      mercury__digraph__TypeClassInfo_for_enum_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7898 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_36, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_35));
#line 7900 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_36, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_23));
#line 7902 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_36, 2) = ((MR_Box) (mercury__digraph__TypeInfo_34_34));
#line 7904 "digraph.c"
    }
#line 254 "sparse_bitset.opt"
    mercury__digraph__Set_6_42 = (MR_Word) mercury__digraph__KeySet1_5;
#line 255 "sparse_bitset.opt"
    {
#line 255 "sparse_bitset.opt"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_23, mercury__digraph__KeySet2_6, mercury__digraph__TypeClassInfo_for_enum_36, mercury__digraph__Set_6_42, mercury__digraph__STATE_VARIABLE_Rtc_0_9, mercury__digraph__STATE_VARIABLE_Rtc_10);
#line 255 "sparse_bitset.opt"
      return;
    }
#line 1091 "digraph.m"
  }
#line 1088 "digraph.m"
}

#line 1065 "digraph.m"
static void MR_CALL 
mercury__digraph__rtc_2_5_p_0(
#line 1065 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_30,
#line 1065 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 1065 "digraph.m"
  MR_Word mercury__digraph__G_2,
#line 1065 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Vis_0_3,
#line 1065 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Rtc_0_4,
#line 1065 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Rtc_5)
#line 1065 "digraph.m"
{
#line 1068 "digraph.m"
  while (MR_TRUE)
#line 1068 "digraph.m"
    {
#line 1068 "digraph.m"
      /* tailcall optimized into a loop */
#line 1068 "digraph.m"
      {
#line 1068 "digraph.m"
        MR_bool mercury__digraph__succeeded;

#line 1068 "digraph.m"
        if ((mercury__digraph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1068 "digraph.m"
          *mercury__digraph__STATE_VARIABLE_Rtc_5 = mercury__digraph__STATE_VARIABLE_Rtc_0_4;
#line 1068 "digraph.m"
        else
#line 1069 "digraph.m"
          {
#line 1069 "digraph.m"
            MR_Word mercury__digraph__X_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 0)));
#line 1069 "digraph.m"
            MR_Word mercury__digraph__Xs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 1)));
#line 1069 "digraph.m"
            MR_Word mercury__digraph__STATE_VARIABLE_Vis_23_23;
#line 1069 "digraph.m"
            MR_Word mercury__digraph__STATE_VARIABLE_Rtc_28_28;
#line 1070 "digraph.m"
            MR_Word mercury__digraph__TypeCtorInfo_31_31 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 1070 "digraph.m"
            MR_Word mercury__digraph__TypeInfo_32_32;
#line 1070 "digraph.m"
            MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_33 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 1070 "digraph.m"
            MR_Word mercury__digraph__TypeClassInfo_for_enum_34;
#line 1070 "digraph.m"
            MR_Word mercury__digraph__Set_3_48;
#line 1070 "digraph.m"
            MR_Integer mercury__digraph__V_5_49;
#line 7976 "digraph.c"
            MR_Box MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box);
#line 7978 "digraph.c"
            MR_Box mercury__digraph__conv1_V_5_49;

#line 7981 "digraph.c"
            {
#line 7983 "digraph.c"
              mercury__digraph__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7985 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_32_32, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_31_31));
#line 7987 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_32_32, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_30));
#line 7989 "digraph.c"
            }
#line 7991 "digraph.c"
            {
#line 7993 "digraph.c"
              mercury__digraph__TypeClassInfo_for_enum_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7995 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_34, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_33));
#line 7997 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_34, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_30));
#line 7999 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_34, 2) = ((MR_Box) (mercury__digraph__TypeInfo_32_32));
#line 8001 "digraph.c"
            }
#line 162 "sparse_bitset.opt"
            mercury__digraph__Set_3_48 = (MR_Word) mercury__digraph__STATE_VARIABLE_Vis_0_3;
#line 8005 "digraph.c"
            mercury__digraph__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8007 "digraph.c"
            {
#line 8009 "digraph.c"
              mercury__digraph__conv1_V_5_49 = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_34), ((MR_Box) (mercury__digraph__X_11)));
            }
#line 8012 "digraph.c"
            mercury__digraph__V_5_49 = ((MR_Integer) mercury__digraph__conv1_V_5_49);
#line 164 "sparse_bitset.opt"
            {
#line 164 "sparse_bitset.opt"
              mercury__digraph__succeeded = mercury__sparse_bitset__contains_search_nodes_2_p_0(mercury__digraph__Set_3_48, mercury__digraph__V_5_49);
            }
#line 1072 "digraph.m"
            if (mercury__digraph__succeeded)
#line 1071 "digraph.m"
              {
#line 1071 "digraph.m"
                mercury__digraph__STATE_VARIABLE_Rtc_28_28 = mercury__digraph__STATE_VARIABLE_Rtc_0_4;
#line 1071 "digraph.m"
                mercury__digraph__STATE_VARIABLE_Vis_23_23 = mercury__digraph__STATE_VARIABLE_Vis_0_3;
#line 1071 "digraph.m"
              }
#line 1072 "digraph.m"
            else
#line 1073 "digraph.m"
              {
#line 1073 "digraph.m"
                MR_Word mercury__digraph__TypeCtorInfo_35_35;
#line 1073 "digraph.m"
                MR_Word mercury__digraph__TypeInfo_36_36;
#line 1073 "digraph.m"
                MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_37;
#line 1073 "digraph.m"
                MR_Word mercury__digraph__TypeClassInfo_for_enum_38;
#line 1073 "digraph.m"
                MR_Word mercury__digraph__CliqList_16;
#line 1073 "digraph.m"
                MR_Word mercury__digraph__Cliq_17;
#line 1073 "digraph.m"
                MR_Word mercury__digraph__Followers0_18;
#line 1073 "digraph.m"
                MR_Word mercury__digraph__Followers_19;
#line 1073 "digraph.m"
                MR_Word mercury__digraph__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1073 "digraph.m"
                MR_Word mercury__digraph__V_5_54;
#line 1073 "digraph.m"
                MR_Word mercury__digraph__Set_6_58;
#line 1073 "digraph.m"
                MR_Word mercury__digraph__Set_6_66;

#line 1073 "digraph.m"
                {
#line 1073 "digraph.m"
                  mercury__digraph__dfs_2_6_p_0(mercury__digraph__TypeInfo_for_T_30, mercury__digraph__G_2, mercury__digraph__X_11, mercury__digraph__STATE_VARIABLE_Vis_0_3, &mercury__digraph__STATE_VARIABLE_Vis_23_23, mercury__digraph__V_24_24, &mercury__digraph__CliqList_16);
                }
#line 8063 "digraph.c"
                mercury__digraph__BaseTypeClassInfo_for_enum_37 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 8065 "digraph.c"
                mercury__digraph__TypeCtorInfo_35_35 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 8067 "digraph.c"
                {
#line 8069 "digraph.c"
                  mercury__digraph__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8071 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_36_36, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_35_35));
#line 8073 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_36_36, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_30));
#line 8075 "digraph.c"
                }
#line 8077 "digraph.c"
                {
#line 8079 "digraph.c"
                  mercury__digraph__TypeClassInfo_for_enum_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8081 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_38, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_37));
#line 8083 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_38, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_30));
#line 8085 "digraph.c"
                  MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_38, 2) = ((MR_Box) (mercury__digraph__TypeInfo_36_36));
#line 8087 "digraph.c"
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
                  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_30, mercury__digraph__G_2, mercury__digraph__TypeClassInfo_for_enum_38, mercury__digraph__Set_6_58, mercury__digraph__Cliq_17, &mercury__digraph__Followers0_18);
                }
#line 254 "sparse_bitset.opt"
                mercury__digraph__Set_6_66 = (MR_Word) mercury__digraph__Followers0_18;
#line 255 "sparse_bitset.opt"
                {
#line 255 "sparse_bitset.opt"
                  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_56_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_30, mercury__digraph__STATE_VARIABLE_Rtc_0_4, mercury__digraph__TypeClassInfo_for_enum_38, mercury__digraph__Set_6_66, mercury__digraph__Cliq_17, &mercury__digraph__Followers_19);
                }
#line 1077 "digraph.m"
                {
#line 1077 "digraph.m"
                  mercury__digraph__add_cartesian_product_4_p_0(mercury__digraph__TypeInfo_for_T_30, mercury__digraph__Cliq_17, mercury__digraph__Followers_19, mercury__digraph__STATE_VARIABLE_Rtc_0_4, &mercury__digraph__STATE_VARIABLE_Rtc_28_28);
                }
#line 1073 "digraph.m"
              }
#line 1079 "digraph.m"
            /* direct tailcall eliminated */
#line 1079 "digraph.m"
            {
#line 1079 "digraph.m"
              MR_Word mercury__digraph__HeadVar__1__tmp_copy_1 = mercury__digraph__Xs_12;
#line 1079 "digraph.m"
              MR_Word mercury__digraph__STATE_VARIABLE_Vis_0__tmp_copy_3 = mercury__digraph__STATE_VARIABLE_Vis_23_23;
#line 1079 "digraph.m"
              MR_Word mercury__digraph__STATE_VARIABLE_Rtc_0__tmp_copy_4 = mercury__digraph__STATE_VARIABLE_Rtc_28_28;

#line 1079 "digraph.m"
              mercury__digraph__STATE_VARIABLE_Rtc_0_4 = mercury__digraph__STATE_VARIABLE_Rtc_0__tmp_copy_4;
#line 1079 "digraph.m"
              mercury__digraph__STATE_VARIABLE_Vis_0_3 = mercury__digraph__STATE_VARIABLE_Vis_0__tmp_copy_3;
#line 1079 "digraph.m"
              mercury__digraph__HeadVar__1_1 = mercury__digraph__HeadVar__1__tmp_copy_1;
#line 1079 "digraph.m"
            }
#line 1079 "digraph.m"
            continue;
#line 1069 "digraph.m"
          }
#line 1068 "digraph.m"
      }
#line 1068 "digraph.m"
      break;
#line 1068 "digraph.m"
    }
#line 1065 "digraph.m"
}

#line 1020 "digraph.m"
void MR_CALL 
mercury__digraph__detect_fake_reflexives_5_p_0(
#line 1020 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_25,
#line 1020 "digraph.m"
  MR_Word mercury__digraph__G_1,
#line 1020 "digraph.m"
  MR_Word mercury__digraph__Rtc_2,
#line 1020 "digraph.m"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 1020 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Fakes_0_4,
#line 1020 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Fakes_5)
#line 1020 "digraph.m"
{
#line 1024 "digraph.m"
  while (MR_TRUE)
#line 1024 "digraph.m"
    {
#line 1024 "digraph.m"
      /* tailcall optimized into a loop */
#line 1024 "digraph.m"
      {
#line 1024 "digraph.m"
        MR_bool mercury__digraph__succeeded;

#line 1024 "digraph.m"
        if ((mercury__digraph__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1024 "digraph.m"
          *mercury__digraph__STATE_VARIABLE_Fakes_5 = mercury__digraph__STATE_VARIABLE_Fakes_0_4;
#line 1024 "digraph.m"
        else
#line 1025 "digraph.m"
          {
#line 1025 "digraph.m"
            MR_Word mercury__digraph__TypeCtorInfo_26_26;
#line 1025 "digraph.m"
            MR_Word mercury__digraph__TypeInfo_27_27;
#line 1025 "digraph.m"
            MR_Word mercury__digraph__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__3_3, (MR_Integer) 0)));
#line 1025 "digraph.m"
            MR_Word mercury__digraph__Xs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__3_3, (MR_Integer) 1)));
#line 1025 "digraph.m"
            MR_Word mercury__digraph__SuccXs_16;
#line 1025 "digraph.m"
            MR_Word mercury__digraph__PreXs_17;
#line 1025 "digraph.m"
            MR_Word mercury__digraph__Ys_18;
#line 1025 "digraph.m"
            MR_Word mercury__digraph__STATE_VARIABLE_Fakes_21_21;
#line 1025 "digraph.m"
            MR_Word mercury__digraph__Set1_4_31;
#line 1025 "digraph.m"
            MR_Word mercury__digraph__Set2_5_32;
#line 1025 "digraph.m"
            MR_Word mercury__digraph__V_6_33;
#line 118 "sparse_bitset.opt"
            MR_Word mercury__digraph__V_35_35;
#line 118 "sparse_bitset.opt"
            MR_Word mercury__digraph__V_2_38;

#line 1026 "digraph.m"
            {
#line 1026 "digraph.m"
              mercury__digraph__lookup_key_set_from_3_p_0(mercury__digraph__TypeInfo_for_T_25, mercury__digraph__G_1, mercury__digraph__X_13, &mercury__digraph__SuccXs_16);
            }
#line 1027 "digraph.m"
            {
#line 1027 "digraph.m"
              mercury__digraph__lookup_key_set_to_3_p_0(mercury__digraph__TypeInfo_for_T_25, mercury__digraph__Rtc_2, mercury__digraph__X_13, &mercury__digraph__PreXs_17);
            }
#line 8222 "digraph.c"
            mercury__digraph__TypeCtorInfo_26_26 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 8224 "digraph.c"
            {
#line 8226 "digraph.c"
              mercury__digraph__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8228 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_26_26));
#line 8230 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_25));
#line 8232 "digraph.c"
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
#line 1031 "digraph.m"
            if (mercury__digraph__succeeded)
#line 1030 "digraph.m"
              {
#line 1030 "digraph.m"
                MR_Word mercury__digraph__V_22_22;

#line 1030 "digraph.m"
                {
#line 1030 "digraph.m"
                  mercury__digraph__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1030 "digraph.m"
                  MR_hl_field(MR_mktag(0), mercury__digraph__V_22_22, 0) = ((MR_Box) (mercury__digraph__X_13));
#line 1030 "digraph.m"
                  MR_hl_field(MR_mktag(0), mercury__digraph__V_22_22, 1) = ((MR_Box) (mercury__digraph__X_13));
#line 1030 "digraph.m"
                }
#line 1030 "digraph.m"
                {
#line 1030 "digraph.m"
                  mercury__digraph__STATE_VARIABLE_Fakes_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "digraph.m"
                  MR_hl_field(MR_mktag(1), mercury__digraph__STATE_VARIABLE_Fakes_21_21, 0) = ((MR_Box) (mercury__digraph__V_22_22));
#line 1030 "digraph.m"
                  MR_hl_field(MR_mktag(1), mercury__digraph__STATE_VARIABLE_Fakes_21_21, 1) = ((MR_Box) (mercury__digraph__STATE_VARIABLE_Fakes_0_4));
#line 1030 "digraph.m"
                }
#line 1030 "digraph.m"
              }
#line 1031 "digraph.m"
            else
#line 1030 "digraph.m"
              mercury__digraph__STATE_VARIABLE_Fakes_21_21 = mercury__digraph__STATE_VARIABLE_Fakes_0_4;
#line 1034 "digraph.m"
            /* direct tailcall eliminated */
#line 1034 "digraph.m"
            {
#line 1034 "digraph.m"
              MR_Word mercury__digraph__HeadVar__3__tmp_copy_3 = mercury__digraph__Xs_14;
#line 1034 "digraph.m"
              MR_Word mercury__digraph__STATE_VARIABLE_Fakes_0__tmp_copy_4 = mercury__digraph__STATE_VARIABLE_Fakes_21_21;

#line 1034 "digraph.m"
              mercury__digraph__STATE_VARIABLE_Fakes_0_4 = mercury__digraph__STATE_VARIABLE_Fakes_0__tmp_copy_4;
#line 1034 "digraph.m"
              mercury__digraph__HeadVar__3_3 = mercury__digraph__HeadVar__3__tmp_copy_3;
#line 1034 "digraph.m"
            }
#line 1034 "digraph.m"
            continue;
#line 1025 "digraph.m"
          }
#line 1024 "digraph.m"
      }
#line 1024 "digraph.m"
      break;
#line 1024 "digraph.m"
    }
#line 1020 "digraph.m"
}

#line 969 "digraph.m"
void MR_CALL 
mercury__digraph__atsort_2_5_p_0(
#line 969 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_27,
#line 969 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 969 "digraph.m"
  MR_Word mercury__digraph__GInv_2,
#line 969 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Vis_0_3,
#line 969 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_ATsort_0_4,
#line 969 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_ATsort_5)
#line 969 "digraph.m"
{
#line 972 "digraph.m"
  while (MR_TRUE)
#line 972 "digraph.m"
    {
#line 972 "digraph.m"
      /* tailcall optimized into a loop */
#line 972 "digraph.m"
      {
#line 972 "digraph.m"
        MR_bool mercury__digraph__succeeded;

#line 972 "digraph.m"
        if ((mercury__digraph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 972 "digraph.m"
          *mercury__digraph__STATE_VARIABLE_ATsort_5 = mercury__digraph__STATE_VARIABLE_ATsort_0_4;
#line 972 "digraph.m"
        else
#line 973 "digraph.m"
          {
#line 973 "digraph.m"
            MR_Word mercury__digraph__X_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 0)));
#line 973 "digraph.m"
            MR_Word mercury__digraph__Xs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 1)));
#line 973 "digraph.m"
            MR_Word mercury__digraph__STATE_VARIABLE_Vis_22_22;
#line 973 "digraph.m"
            MR_Word mercury__digraph__STATE_VARIABLE_ATsort_25_25;
#line 974 "digraph.m"
            MR_Word mercury__digraph__TypeCtorInfo_28_28 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 974 "digraph.m"
            MR_Word mercury__digraph__TypeInfo_29_29;
#line 974 "digraph.m"
            MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_30 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 974 "digraph.m"
            MR_Word mercury__digraph__TypeClassInfo_for_enum_31;
#line 974 "digraph.m"
            MR_Word mercury__digraph__Set_3_37;
#line 974 "digraph.m"
            MR_Integer mercury__digraph__V_5_38;
#line 8371 "digraph.c"
            MR_Box MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box);
#line 8373 "digraph.c"
            MR_Box mercury__digraph__conv1_V_5_38;

#line 8376 "digraph.c"
            {
#line 8378 "digraph.c"
              mercury__digraph__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8380 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_28_28));
#line 8382 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_27));
#line 8384 "digraph.c"
            }
#line 8386 "digraph.c"
            {
#line 8388 "digraph.c"
              mercury__digraph__TypeClassInfo_for_enum_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8390 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_31, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_30));
#line 8392 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_31, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_27));
#line 8394 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_31, 2) = ((MR_Box) (mercury__digraph__TypeInfo_29_29));
#line 8396 "digraph.c"
            }
#line 162 "sparse_bitset.opt"
            mercury__digraph__Set_3_37 = (MR_Word) mercury__digraph__STATE_VARIABLE_Vis_0_3;
#line 8400 "digraph.c"
            mercury__digraph__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_31, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8402 "digraph.c"
            {
#line 8404 "digraph.c"
              mercury__digraph__conv1_V_5_38 = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_31), ((MR_Box) (mercury__digraph__X_11)));
            }
#line 8407 "digraph.c"
            mercury__digraph__V_5_38 = ((MR_Integer) mercury__digraph__conv1_V_5_38);
#line 164 "sparse_bitset.opt"
            {
#line 164 "sparse_bitset.opt"
              mercury__digraph__succeeded = mercury__sparse_bitset__contains_search_nodes_2_p_0(mercury__digraph__Set_3_37, mercury__digraph__V_5_38);
            }
#line 976 "digraph.m"
            if (mercury__digraph__succeeded)
#line 975 "digraph.m"
              {
#line 975 "digraph.m"
                mercury__digraph__STATE_VARIABLE_ATsort_25_25 = mercury__digraph__STATE_VARIABLE_ATsort_0_4;
#line 975 "digraph.m"
                mercury__digraph__STATE_VARIABLE_Vis_22_22 = mercury__digraph__STATE_VARIABLE_Vis_0_3;
#line 975 "digraph.m"
              }
#line 976 "digraph.m"
            else
#line 977 "digraph.m"
              {
#line 977 "digraph.m"
                MR_Word mercury__digraph__CliqKeys_16;
#line 977 "digraph.m"
                MR_Word mercury__digraph__CliqList_17;
#line 977 "digraph.m"
                MR_Word mercury__digraph__Cliq_18;
#line 977 "digraph.m"
                MR_Word mercury__digraph__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 977 "digraph.m"
                MR_Word mercury__digraph__List_4_42;
#line 977 "digraph.m"
                MR_Integer mercury__digraph__V_5_45;

#line 977 "digraph.m"
                {
#line 977 "digraph.m"
                  mercury__digraph__dfs_2_6_p_0(mercury__digraph__TypeInfo_for_T_27, mercury__digraph__GInv_2, mercury__digraph__X_11, mercury__digraph__STATE_VARIABLE_Vis_0_3, &mercury__digraph__STATE_VARIABLE_Vis_22_22, mercury__digraph__V_23_23, &mercury__digraph__CliqKeys_16);
                }
#line 978 "digraph.m"
                {
#line 978 "digraph.m"
                  mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_53_55_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(mercury__digraph__TypeInfo_for_T_27, mercury__digraph__GInv_2, mercury__digraph__CliqKeys_16, &mercury__digraph__CliqList_17);
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
#line 980 "digraph.m"
                {
#line 980 "digraph.m"
                  mercury__digraph__STATE_VARIABLE_ATsort_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 980 "digraph.m"
                  MR_hl_field(MR_mktag(1), mercury__digraph__STATE_VARIABLE_ATsort_25_25, 0) = ((MR_Box) (mercury__digraph__Cliq_18));
#line 980 "digraph.m"
                  MR_hl_field(MR_mktag(1), mercury__digraph__STATE_VARIABLE_ATsort_25_25, 1) = ((MR_Box) (mercury__digraph__STATE_VARIABLE_ATsort_0_4));
#line 980 "digraph.m"
                }
#line 977 "digraph.m"
              }
#line 982 "digraph.m"
            /* direct tailcall eliminated */
#line 982 "digraph.m"
            {
#line 982 "digraph.m"
              MR_Word mercury__digraph__HeadVar__1__tmp_copy_1 = mercury__digraph__Xs_12;
#line 982 "digraph.m"
              MR_Word mercury__digraph__STATE_VARIABLE_Vis_0__tmp_copy_3 = mercury__digraph__STATE_VARIABLE_Vis_22_22;
#line 982 "digraph.m"
              MR_Word mercury__digraph__STATE_VARIABLE_ATsort_0__tmp_copy_4 = mercury__digraph__STATE_VARIABLE_ATsort_25_25;

#line 982 "digraph.m"
              mercury__digraph__STATE_VARIABLE_ATsort_0_4 = mercury__digraph__STATE_VARIABLE_ATsort_0__tmp_copy_4;
#line 982 "digraph.m"
              mercury__digraph__STATE_VARIABLE_Vis_0_3 = mercury__digraph__STATE_VARIABLE_Vis_0__tmp_copy_3;
#line 982 "digraph.m"
              mercury__digraph__HeadVar__1_1 = mercury__digraph__HeadVar__1__tmp_copy_1;
#line 982 "digraph.m"
            }
#line 982 "digraph.m"
            continue;
#line 973 "digraph.m"
          }
#line 972 "digraph.m"
      }
#line 972 "digraph.m"
      break;
#line 972 "digraph.m"
    }
#line 969 "digraph.m"
}

#line 941 "digraph.m"
MR_bool MR_CALL 
mercury__digraph__check_tsort_3_p_0(
#line 941 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_13,
#line 941 "digraph.m"
  MR_Word mercury__digraph__G_1,
#line 941 "digraph.m"
  MR_Word mercury__digraph__Vis0_2,
#line 941 "digraph.m"
  MR_Word mercury__digraph__HeadVar__3_3)
#line 941 "digraph.m"
{
#line 944 "digraph.m"
  while (MR_TRUE)
#line 944 "digraph.m"
    {
#line 944 "digraph.m"
      /* tailcall optimized into a loop */
#line 944 "digraph.m"
      {
#line 944 "digraph.m"
        MR_bool mercury__digraph__succeeded;

#line 944 "digraph.m"
        if ((mercury__digraph__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 944 "digraph.m"
          mercury__digraph__succeeded = MR_TRUE;
#line 944 "digraph.m"
        else
#line 945 "digraph.m"
          {
#line 945 "digraph.m"
            MR_Word mercury__digraph__TypeCtorInfo_14_14 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 945 "digraph.m"
            MR_Word mercury__digraph__TypeInfo_15_15;
#line 945 "digraph.m"
            MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_16 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 945 "digraph.m"
            MR_Word mercury__digraph__TypeClassInfo_for_enum_17;
#line 945 "digraph.m"
            MR_Word mercury__digraph__X_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__3_3, (MR_Integer) 0)));
#line 945 "digraph.m"
            MR_Word mercury__digraph__Xs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__3_3, (MR_Integer) 1)));
#line 945 "digraph.m"
            MR_Word mercury__digraph__Vis_10;
#line 945 "digraph.m"
            MR_Word mercury__digraph__SuccXs_11;
#line 945 "digraph.m"
            MR_Word mercury__digraph__BackPointers_12;
#line 945 "digraph.m"
            MR_Word mercury__digraph__Set0_6_21;
#line 945 "digraph.m"
            MR_Integer mercury__digraph__V_9_23;
#line 945 "digraph.m"
            MR_Word mercury__digraph__Set_5_24;
#line 945 "digraph.m"
            MR_Word mercury__digraph__Set1_4_28;
#line 945 "digraph.m"
            MR_Word mercury__digraph__Set2_5_29;
#line 945 "digraph.m"
            MR_Word mercury__digraph__V_6_30;
#line 945 "digraph.m"
            MR_Word mercury__digraph__V_32_32;
#line 945 "digraph.m"
            MR_Word mercury__digraph__V_2_35;
#line 8573 "digraph.c"
            MR_Box MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box);
#line 8575 "digraph.c"
            MR_Box mercury__digraph__conv1_V_9_23;

#line 8578 "digraph.c"
            {
#line 8580 "digraph.c"
              mercury__digraph__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8582 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
#line 8584 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
#line 8586 "digraph.c"
            }
#line 8588 "digraph.c"
            {
#line 8590 "digraph.c"
              mercury__digraph__TypeClassInfo_for_enum_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8592 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_17, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_16));
#line 8594 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
#line 8596 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_17, 2) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 8598 "digraph.c"
            }
#line 168 "sparse_bitset.opt"
            mercury__digraph__Set0_6_21 = (MR_Word) mercury__digraph__Vis0_2;
#line 8602 "digraph.c"
            mercury__digraph__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8604 "digraph.c"
            {
#line 8606 "digraph.c"
              mercury__digraph__conv1_V_9_23 = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_17), ((MR_Box) (mercury__digraph__X_8)));
            }
#line 8609 "digraph.c"
            mercury__digraph__V_9_23 = ((MR_Integer) mercury__digraph__conv1_V_9_23);
#line 170 "sparse_bitset.opt"
            {
#line 170 "sparse_bitset.opt"
              mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__Set0_6_21, mercury__digraph__V_9_23, &mercury__digraph__Set_5_24);
            }
#line 171 "sparse_bitset.opt"
            mercury__digraph__Vis_10 = (MR_Word) mercury__digraph__Set_5_24;
#line 947 "digraph.m"
            {
#line 947 "digraph.m"
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
#line 945 "digraph.m"
            if (mercury__digraph__succeeded)
#line 950 "digraph.m"
              {
#line 950 "digraph.m"
                /* direct tailcall eliminated */
#line 950 "digraph.m"
                {
#line 950 "digraph.m"
                  MR_Word mercury__digraph__Vis0__tmp_copy_2 = mercury__digraph__Vis_10;
#line 950 "digraph.m"
                  MR_Word mercury__digraph__HeadVar__3__tmp_copy_3 = mercury__digraph__Xs_9;

#line 950 "digraph.m"
                  mercury__digraph__HeadVar__3_3 = mercury__digraph__HeadVar__3__tmp_copy_3;
#line 950 "digraph.m"
                  mercury__digraph__Vis0_2 = mercury__digraph__Vis0__tmp_copy_2;
#line 950 "digraph.m"
                }
#line 950 "digraph.m"
                continue;
#line 950 "digraph.m"
              }
#line 945 "digraph.m"
          }
#line 944 "digraph.m"
        return mercury__digraph__succeeded;
#line 944 "digraph.m"
      }
#line 944 "digraph.m"
      break;
#line 944 "digraph.m"
    }
#line 941 "digraph.m"
}

#line 919 "digraph.m"
void MR_CALL 
mercury__digraph__make_reduced_graph_4_p_0(
#line 919 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_21,
#line 919 "digraph.m"
  MR_Word mercury__digraph__CliqMap_1,
#line 919 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 919 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_R_0_3,
#line 919 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_R_4)
#line 919 "digraph.m"
{
#line 923 "digraph.m"
  while (MR_TRUE)
#line 923 "digraph.m"
    {
#line 923 "digraph.m"
      /* tailcall optimized into a loop */
#line 923 "digraph.m"
      {
#line 923 "digraph.m"
        MR_bool mercury__digraph__succeeded;

#line 923 "digraph.m"
        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 923 "digraph.m"
          *mercury__digraph__STATE_VARIABLE_R_4 = mercury__digraph__STATE_VARIABLE_R_0_3;
#line 923 "digraph.m"
        else
#line 924 "digraph.m"
          {
#line 924 "digraph.m"
            MR_Word mercury__digraph__TypeCtorInfo_22_22;
#line 924 "digraph.m"
            MR_Word mercury__digraph__TypeInfo_23_23;
#line 924 "digraph.m"
            MR_Word mercury__digraph__TypeCtorInfo_24_24;
#line 924 "digraph.m"
            MR_Word mercury__digraph__TypeInfo_25_25;
#line 924 "digraph.m"
            MR_Word mercury__digraph__TypeInfo_26_26;
#line 924 "digraph.m"
            MR_Word mercury__digraph__X_10;
#line 924 "digraph.m"
            MR_Word mercury__digraph__Y_11;
#line 924 "digraph.m"
            MR_Word mercury__digraph__Edges_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 924 "digraph.m"
            MR_Word mercury__digraph__CliqX_14;
#line 924 "digraph.m"
            MR_Word mercury__digraph__CliqY_15;
#line 924 "digraph.m"
            MR_Word mercury__digraph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 924 "digraph.m"
            MR_Word mercury__digraph__STATE_VARIABLE_R_19_19;
#line 925 "digraph.m"
            MR_Box mercury__digraph__conv0_CliqX_14;
#line 926 "digraph.m"
            MR_Box mercury__digraph__conv1_CliqY_15;
#line 343 "digraph.m"
            MR_Integer mercury__digraph__CastX_31;
#line 343 "digraph.m"
            MR_Integer mercury__digraph__CastY_32;

#line 924 "digraph.m"
            mercury__digraph__X_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_18_18, (MR_Integer) 0)));
#line 924 "digraph.m"
            mercury__digraph__Y_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_18_18, (MR_Integer) 1)));
#line 8750 "digraph.c"
            mercury__digraph__TypeCtorInfo_22_22 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 8752 "digraph.c"
            {
#line 8754 "digraph.c"
              mercury__digraph__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8756 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_23, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_22_22));
#line 8758 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_21));
#line 8760 "digraph.c"
            }
#line 8762 "digraph.c"
            mercury__digraph__TypeCtorInfo_24_24 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 8764 "digraph.c"
            {
#line 8766 "digraph.c"
              mercury__digraph__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8768 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_24_24));
#line 8770 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_21));
#line 8772 "digraph.c"
            }
#line 8774 "digraph.c"
            {
#line 8776 "digraph.c"
              mercury__digraph__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8778 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_26_26, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_22_22));
#line 8780 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_26_26, 1) = ((MR_Box) (mercury__digraph__TypeInfo_25_25));
#line 8782 "digraph.c"
            }
#line 925 "digraph.m"
            {
#line 925 "digraph.m"
              mercury__map__lookup_3_p_0(mercury__digraph__TypeInfo_23_23, mercury__digraph__TypeInfo_26_26, (MR_Word) mercury__digraph__CliqMap_1, ((MR_Box) (mercury__digraph__X_10)), &mercury__digraph__conv0_CliqX_14);
            }
#line 925 "digraph.m"
            mercury__digraph__CliqX_14 = ((MR_Word) mercury__digraph__conv0_CliqX_14);
#line 926 "digraph.m"
            {
#line 926 "digraph.m"
              mercury__map__lookup_3_p_0(mercury__digraph__TypeInfo_23_23, mercury__digraph__TypeInfo_26_26, (MR_Word) mercury__digraph__CliqMap_1, ((MR_Box) (mercury__digraph__Y_11)), &mercury__digraph__conv1_CliqY_15);
            }
#line 926 "digraph.m"
            mercury__digraph__CliqY_15 = ((MR_Word) mercury__digraph__conv1_CliqY_15);
#line 343 "digraph.m"
            mercury__digraph__CastX_31 = (MR_Integer) mercury__digraph__CliqX_14;
#line 343 "digraph.m"
            mercury__digraph__CastY_32 = (MR_Integer) mercury__digraph__CliqY_15;
#line 343 "digraph.m"
            mercury__digraph__succeeded = (mercury__digraph__CastX_31 == mercury__digraph__CastY_32);
#line 343 "digraph.m"
            if (mercury__digraph__succeeded)
#line 343 "digraph.m"
              mercury__digraph__succeeded = MR_TRUE;
#line 343 "digraph.m"
            else
#line 343 "digraph.m"
              {
#line 343 "digraph.m"
                MR_Integer mercury__digraph__V_29_29 = (MR_Integer) mercury__digraph__CliqX_14;
#line 343 "digraph.m"
                MR_Integer mercury__digraph__V_30_30 = (MR_Integer) mercury__digraph__CliqY_15;

#line 8817 "digraph.c"
                mercury__digraph__succeeded = (mercury__digraph__V_29_29 == mercury__digraph__V_30_30);
#line 343 "digraph.m"
              }
#line 929 "digraph.m"
            if (mercury__digraph__succeeded)
#line 927 "digraph.m"
              mercury__digraph__STATE_VARIABLE_R_19_19 = mercury__digraph__STATE_VARIABLE_R_0_3;
#line 929 "digraph.m"
            else
#line 930 "digraph.m"
              {
#line 930 "digraph.m"
                MR_Word mercury__digraph__conv2_STATE_VARIABLE_R_19_19;

#line 930 "digraph.m"
                {
#line 930 "digraph.m"
                  mercury__digraph__add_edge_4_p_0(mercury__digraph__TypeInfo_25_25, (MR_Word) mercury__digraph__CliqX_14, (MR_Word) mercury__digraph__CliqY_15, (MR_Word) mercury__digraph__STATE_VARIABLE_R_0_3, &mercury__digraph__conv2_STATE_VARIABLE_R_19_19);
                }
#line 930 "digraph.m"
                mercury__digraph__STATE_VARIABLE_R_19_19 = (MR_Word) mercury__digraph__conv2_STATE_VARIABLE_R_19_19;
#line 930 "digraph.m"
              }
#line 932 "digraph.m"
            /* direct tailcall eliminated */
#line 932 "digraph.m"
            {
#line 932 "digraph.m"
              MR_Word mercury__digraph__HeadVar__2__tmp_copy_2 = mercury__digraph__Edges_12;
#line 932 "digraph.m"
              MR_Word mercury__digraph__STATE_VARIABLE_R_0__tmp_copy_3 = mercury__digraph__STATE_VARIABLE_R_19_19;

#line 932 "digraph.m"
              mercury__digraph__STATE_VARIABLE_R_0_3 = mercury__digraph__STATE_VARIABLE_R_0__tmp_copy_3;
#line 932 "digraph.m"
              mercury__digraph__HeadVar__2_2 = mercury__digraph__HeadVar__2__tmp_copy_2;
#line 932 "digraph.m"
            }
#line 932 "digraph.m"
            continue;
#line 924 "digraph.m"
          }
#line 923 "digraph.m"
      }
#line 923 "digraph.m"
      break;
#line 923 "digraph.m"
    }
#line 919 "digraph.m"
}

#line 902 "digraph.m"
void MR_CALL 
mercury__digraph__make_clique_map_6_p_0(
#line 902 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_31,
#line 902 "digraph.m"
  MR_Word mercury__digraph__G_1,
#line 902 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 902 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_CliqMap_0_3,
#line 902 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_CliqMap_4,
#line 902 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_R_0_5,
#line 902 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_R_6)
#line 902 "digraph.m"
{
#line 906 "digraph.m"
  while (MR_TRUE)
#line 906 "digraph.m"
    {
#line 906 "digraph.m"
      /* tailcall optimized into a loop */
#line 906 "digraph.m"
      {
#line 906 "digraph.m"
        MR_bool mercury__digraph__succeeded;

#line 906 "digraph.m"
        if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 906 "digraph.m"
          {
#line 906 "digraph.m"
            *mercury__digraph__STATE_VARIABLE_R_6 = mercury__digraph__STATE_VARIABLE_R_0_5;
#line 906 "digraph.m"
            *mercury__digraph__STATE_VARIABLE_CliqMap_4 = mercury__digraph__STATE_VARIABLE_CliqMap_0_3;
#line 906 "digraph.m"
          }
#line 906 "digraph.m"
        else
#line 907 "digraph.m"
          {
#line 907 "digraph.m"
            MR_Word mercury__digraph__TypeCtorInfo_36_36;
#line 907 "digraph.m"
            MR_Word mercury__digraph__TypeInfo_37_37;
#line 907 "digraph.m"
            MR_Word mercury__digraph__Clique_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 907 "digraph.m"
            MR_Word mercury__digraph__Cliques_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 907 "digraph.m"
            MR_Word mercury__digraph__Vertices_19;
#line 907 "digraph.m"
            MR_Word mercury__digraph__CliqKey_20;
#line 907 "digraph.m"
            MR_Word mercury__digraph__STATE_VARIABLE_R_26_26;
#line 907 "digraph.m"
            MR_Word mercury__digraph__STATE_VARIABLE_CliqMap_28_28;
#line 907 "digraph.m"
            MR_Word mercury__digraph__List_7_47 = (MR_Word) mercury__digraph__Clique_15;
#line 907 "digraph.m"
            MR_Word mercury__digraph__TransformedList_8_48;
#line 907 "digraph.m"
            MR_Word mercury__digraph__List_4_60;
#line 907 "digraph.m"
            MR_Integer mercury__digraph__V_5_63;
#line 909 "digraph.m"
            MR_Word mercury__digraph__conv1_CliqKey_20;
#line 909 "digraph.m"
            MR_Word mercury__digraph__conv0_STATE_VARIABLE_R_26_26;

#line 103 "set.opt"
            {
#line 103 "set.opt"
              mercury__digraph__TransformedList_8_48 = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_53_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_2_f_in__list_0(mercury__digraph__TypeInfo_for_T_31, mercury__digraph__G_1, mercury__digraph__List_7_47);
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
#line 8959 "digraph.c"
            mercury__digraph__TypeCtorInfo_36_36 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 8961 "digraph.c"
            {
#line 8963 "digraph.c"
              mercury__digraph__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8965 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_37_37, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_36_36));
#line 8967 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_37_37, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_31));
#line 8969 "digraph.c"
            }
#line 909 "digraph.m"
            {
#line 909 "digraph.m"
              mercury__digraph__add_vertex_4_p_0(mercury__digraph__TypeInfo_37_37, ((MR_Box) (mercury__digraph__Vertices_19)), &mercury__digraph__conv1_CliqKey_20, (MR_Word) mercury__digraph__STATE_VARIABLE_R_0_5, &mercury__digraph__conv0_STATE_VARIABLE_R_26_26);
            }
#line 909 "digraph.m"
            mercury__digraph__CliqKey_20 = (MR_Word) mercury__digraph__conv1_CliqKey_20;
#line 909 "digraph.m"
            mercury__digraph__STATE_VARIABLE_R_26_26 = (MR_Word) mercury__digraph__conv0_STATE_VARIABLE_R_26_26;
#line 910 "digraph.m"
            {
#line 910 "digraph.m"
              mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_95_104_111_53_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__set_0(mercury__digraph__TypeInfo_for_T_31, mercury__digraph__CliqKey_20, mercury__digraph__Clique_15, mercury__digraph__STATE_VARIABLE_CliqMap_0_3, &mercury__digraph__STATE_VARIABLE_CliqMap_28_28);
            }
#line 911 "digraph.m"
            /* direct tailcall eliminated */
#line 911 "digraph.m"
            {
#line 911 "digraph.m"
              MR_Word mercury__digraph__HeadVar__2__tmp_copy_2 = mercury__digraph__Cliques_16;
#line 911 "digraph.m"
              MR_Word mercury__digraph__STATE_VARIABLE_CliqMap_0__tmp_copy_3 = mercury__digraph__STATE_VARIABLE_CliqMap_28_28;
#line 911 "digraph.m"
              MR_Word mercury__digraph__STATE_VARIABLE_R_0__tmp_copy_5 = mercury__digraph__STATE_VARIABLE_R_26_26;

#line 911 "digraph.m"
              mercury__digraph__STATE_VARIABLE_R_0_5 = mercury__digraph__STATE_VARIABLE_R_0__tmp_copy_5;
#line 911 "digraph.m"
              mercury__digraph__STATE_VARIABLE_CliqMap_0_3 = mercury__digraph__STATE_VARIABLE_CliqMap_0__tmp_copy_3;
#line 911 "digraph.m"
              mercury__digraph__HeadVar__2_2 = mercury__digraph__HeadVar__2__tmp_copy_2;
#line 911 "digraph.m"
            }
#line 911 "digraph.m"
            continue;
#line 907 "digraph.m"
          }
#line 906 "digraph.m"
      }
#line 906 "digraph.m"
      break;
#line 906 "digraph.m"
    }
#line 902 "digraph.m"
}

#line 862 "digraph.m"
void MR_CALL 
mercury__digraph__cliques_2_5_p_0(
#line 862 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_26,
#line 862 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 862 "digraph.m"
  MR_Word mercury__digraph__GInv_2,
#line 862 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Visited_0_3,
#line 862 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Cliques_0_4,
#line 862 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Cliques_5)
#line 862 "digraph.m"
{
#line 866 "digraph.m"
  while (MR_TRUE)
#line 866 "digraph.m"
    {
#line 866 "digraph.m"
      /* tailcall optimized into a loop */
#line 866 "digraph.m"
      {
#line 866 "digraph.m"
        MR_bool mercury__digraph__succeeded;

#line 866 "digraph.m"
        if ((mercury__digraph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 866 "digraph.m"
          *mercury__digraph__STATE_VARIABLE_Cliques_5 = mercury__digraph__STATE_VARIABLE_Cliques_0_4;
#line 866 "digraph.m"
        else
#line 867 "digraph.m"
          {
#line 867 "digraph.m"
            MR_Word mercury__digraph__TypeCtorInfo_27_27;
#line 867 "digraph.m"
            MR_Word mercury__digraph__TypeInfo_28_28;
#line 867 "digraph.m"
            MR_Word mercury__digraph__TypeCtorInfo_29_29;
#line 867 "digraph.m"
            MR_Word mercury__digraph__TypeInfo_30_30;
#line 867 "digraph.m"
            MR_Word mercury__digraph__X_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 0)));
#line 867 "digraph.m"
            MR_Word mercury__digraph__Xs0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 1)));
#line 867 "digraph.m"
            MR_Word mercury__digraph__CliqueList_16;
#line 867 "digraph.m"
            MR_Word mercury__digraph__Clique_17;
#line 867 "digraph.m"
            MR_Word mercury__digraph__Xs_18;
#line 867 "digraph.m"
            MR_Word mercury__digraph__STATE_VARIABLE_Visited_22_22;
#line 867 "digraph.m"
            MR_Word mercury__digraph__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 867 "digraph.m"
            MR_Word mercury__digraph__STATE_VARIABLE_Cliques_24_24;
#line 867 "digraph.m"
            MR_Word mercury__digraph__List_4_34;
#line 867 "digraph.m"
            MR_Integer mercury__digraph__V_5_37;
#line 867 "digraph.m"
            MR_Word mercury__digraph__List0_5_47;
#line 867 "digraph.m"
            MR_Word mercury__digraph__List_6_48;
#line 110 "list.opt"
            MR_Word mercury__digraph__conv0_List_4_34;
#line 68 "set_ordlist.opt"
            MR_Word mercury__digraph__conv1_List_6_48;
#line 877 "digraph.m"
            MR_Word mercury__digraph__conv2_Xs_18;

#line 869 "digraph.m"
            {
#line 869 "digraph.m"
              mercury__digraph__dfs_2_6_p_0(mercury__digraph__TypeInfo_for_T_26, mercury__digraph__GInv_2, mercury__digraph__X_11, mercury__digraph__STATE_VARIABLE_Visited_0_3, &mercury__digraph__STATE_VARIABLE_Visited_22_22, mercury__digraph__V_23_23, &mercury__digraph__CliqueList_16);
            }
#line 9097 "digraph.c"
            mercury__digraph__TypeCtorInfo_27_27 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 9099 "digraph.c"
            {
#line 9101 "digraph.c"
              mercury__digraph__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9103 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_28_28, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_27_27));
#line 9105 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_28_28, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_26));
#line 9107 "digraph.c"
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
#line 9123 "digraph.c"
            mercury__digraph__TypeCtorInfo_29_29 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 9125 "digraph.c"
            {
#line 9127 "digraph.c"
              mercury__digraph__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9129 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_30_30, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_29_29));
#line 9131 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_30_30, 1) = ((MR_Box) (mercury__digraph__TypeInfo_28_28));
#line 9133 "digraph.c"
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
#line 877 "digraph.m"
            {
#line 877 "digraph.m"
              mercury__list__delete_elems_3_p_0(mercury__digraph__TypeInfo_28_28, (MR_Word) mercury__digraph__Xs0_12, (MR_Word) mercury__digraph__CliqueList_16, &mercury__digraph__conv2_Xs_18);
            }
#line 877 "digraph.m"
            mercury__digraph__Xs_18 = (MR_Word) mercury__digraph__conv2_Xs_18;
#line 878 "digraph.m"
            /* direct tailcall eliminated */
#line 878 "digraph.m"
            {
#line 878 "digraph.m"
              MR_Word mercury__digraph__HeadVar__1__tmp_copy_1 = mercury__digraph__Xs_18;
#line 878 "digraph.m"
              MR_Word mercury__digraph__STATE_VARIABLE_Visited_0__tmp_copy_3 = mercury__digraph__STATE_VARIABLE_Visited_22_22;
#line 878 "digraph.m"
              MR_Word mercury__digraph__STATE_VARIABLE_Cliques_0__tmp_copy_4 = mercury__digraph__STATE_VARIABLE_Cliques_24_24;

#line 878 "digraph.m"
              mercury__digraph__STATE_VARIABLE_Cliques_0_4 = mercury__digraph__STATE_VARIABLE_Cliques_0__tmp_copy_4;
#line 878 "digraph.m"
              mercury__digraph__STATE_VARIABLE_Visited_0_3 = mercury__digraph__STATE_VARIABLE_Visited_0__tmp_copy_3;
#line 878 "digraph.m"
              mercury__digraph__HeadVar__1_1 = mercury__digraph__HeadVar__1__tmp_copy_1;
#line 878 "digraph.m"
            }
#line 878 "digraph.m"
            continue;
#line 867 "digraph.m"
          }
#line 866 "digraph.m"
      }
#line 866 "digraph.m"
      break;
#line 866 "digraph.m"
    }
#line 862 "digraph.m"
}

#line 822 "digraph.m"
static void MR_CALL 
mercury__digraph__reachable_from_4_p_0(
#line 822 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_19,
#line 822 "digraph.m"
  MR_Word mercury__digraph__G_5,
#line 822 "digraph.m"
  MR_Word mercury__digraph__Keys0_6,
#line 822 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Comp_0_15,
#line 822 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Comp_16)
#line 822 "digraph.m"
{
#line 835 "digraph.m"
  while (MR_TRUE)
#line 835 "digraph.m"
    {
#line 835 "digraph.m"
      /* tailcall optimized into a loop */
#line 835 "digraph.m"
      {
#line 835 "digraph.m"
        MR_bool mercury__digraph__succeeded;
#line 835 "digraph.m"
        MR_Word mercury__digraph__TypeClassInfo_for_enum_23;
#line 835 "digraph.m"
        MR_Word mercury__digraph__X_8;
#line 835 "digraph.m"
        MR_Word mercury__digraph__Keys1_9;
#line 827 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_20_20 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 827 "digraph.m"
        MR_Word mercury__digraph__TypeInfo_21_21;
#line 827 "digraph.m"
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_22 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 827 "digraph.m"
        MR_Box mercury__digraph__conv1_X_8;
#line 827 "digraph.m"
        MR_Word mercury__digraph__conv0_Keys1_9;

#line 9227 "digraph.c"
        {
#line 9229 "digraph.c"
          mercury__digraph__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9231 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_21_21, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_20_20));
#line 9233 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_21_21, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_19));
#line 9235 "digraph.c"
        }
#line 9237 "digraph.c"
        {
#line 9239 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9241 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_22));
#line 9243 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_19));
#line 9245 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 2) = ((MR_Box) (mercury__digraph__TypeInfo_21_21));
#line 9247 "digraph.c"
        }
#line 827 "digraph.m"
        {
#line 827 "digraph.m"
          mercury__digraph__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mercury__digraph__TypeClassInfo_for_enum_23, &mercury__digraph__conv1_X_8, (MR_Word) mercury__digraph__Keys0_6, &mercury__digraph__conv0_Keys1_9);
        }
#line 827 "digraph.m"
        if (mercury__digraph__succeeded)
#line 827 "digraph.m"
          {
#line 827 "digraph.m"
            mercury__digraph__X_8 = ((MR_Word) mercury__digraph__conv1_X_8);
#line 827 "digraph.m"
            mercury__digraph__Keys1_9 = (MR_Word) mercury__digraph__conv0_Keys1_9;
#line 827 "digraph.m"
            mercury__digraph__succeeded = MR_TRUE;
#line 827 "digraph.m"
          }
#line 835 "digraph.m"
        if (mercury__digraph__succeeded)
#line 828 "digraph.m"
          {
#line 828 "digraph.m"
            MR_Word mercury__digraph__FwdSet_10;
#line 828 "digraph.m"
            MR_Word mercury__digraph__BwdSet_11;
#line 828 "digraph.m"
            MR_Word mercury__digraph__Keys_14;
#line 828 "digraph.m"
            MR_Word mercury__digraph__STATE_VARIABLE_Comp_17_17;
#line 828 "digraph.m"
            MR_Word mercury__digraph__Set0_6_31 = (MR_Word) mercury__digraph__STATE_VARIABLE_Comp_0_15;
#line 828 "digraph.m"
            MR_Integer mercury__digraph__V_9_33;
#line 828 "digraph.m"
            MR_Word mercury__digraph__Set_5_34;
#line 828 "digraph.m"
            MR_Word mercury__digraph__Set1_4_38;
#line 828 "digraph.m"
            MR_Word mercury__digraph__Set2_5_39;
#line 828 "digraph.m"
            MR_Word mercury__digraph__Set1_4_44;
#line 828 "digraph.m"
            MR_Word mercury__digraph__Set2_5_45;
#line 828 "digraph.m"
            MR_Word mercury__digraph__Set1_4_50;
#line 828 "digraph.m"
            MR_Word mercury__digraph__Set2_5_51;
#line 828 "digraph.m"
            MR_Word mercury__digraph__V_6_52;
#line 9298 "digraph.c"
            MR_Box MR_CALL (* mercury__digraph__func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9300 "digraph.c"
            MR_Box mercury__digraph__conv3_V_9_33;

#line 9303 "digraph.c"
            {
#line 9305 "digraph.c"
              mercury__digraph__conv3_V_9_33 = mercury__digraph__func_2(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_23), ((MR_Box) (mercury__digraph__X_8)));
            }
#line 9308 "digraph.c"
            mercury__digraph__V_9_33 = ((MR_Integer) mercury__digraph__conv3_V_9_33);
#line 170 "sparse_bitset.opt"
            {
#line 170 "sparse_bitset.opt"
              mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__Set0_6_31, mercury__digraph__V_9_33, &mercury__digraph__Set_5_34);
            }
#line 171 "sparse_bitset.opt"
            mercury__digraph__STATE_VARIABLE_Comp_17_17 = (MR_Word) mercury__digraph__Set_5_34;
#line 829 "digraph.m"
            {
#line 829 "digraph.m"
              mercury__digraph__lookup_key_set_from_3_p_0(mercury__digraph__TypeInfo_for_T_19, mercury__digraph__G_5, mercury__digraph__X_8, &mercury__digraph__FwdSet_10);
            }
#line 830 "digraph.m"
            {
#line 830 "digraph.m"
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
#line 834 "digraph.m"
            /* direct tailcall eliminated */
#line 834 "digraph.m"
            {
#line 834 "digraph.m"
              MR_Word mercury__digraph__Keys0__tmp_copy_6 = mercury__digraph__Keys_14;
#line 834 "digraph.m"
              MR_Word mercury__digraph__STATE_VARIABLE_Comp_0__tmp_copy_15 = mercury__digraph__STATE_VARIABLE_Comp_17_17;

#line 834 "digraph.m"
              mercury__digraph__STATE_VARIABLE_Comp_0_15 = mercury__digraph__STATE_VARIABLE_Comp_0__tmp_copy_15;
#line 834 "digraph.m"
              mercury__digraph__Keys0_6 = mercury__digraph__Keys0__tmp_copy_6;
#line 834 "digraph.m"
            }
#line 834 "digraph.m"
            continue;
#line 828 "digraph.m"
          }
#line 835 "digraph.m"
        else
#line 834 "digraph.m"
          *mercury__digraph__STATE_VARIABLE_Comp_16 = mercury__digraph__STATE_VARIABLE_Comp_0_15;
#line 835 "digraph.m"
      }
#line 835 "digraph.m"
      break;
#line 835 "digraph.m"
    }
#line 822 "digraph.m"
}

#line 807 "digraph.m"
static void MR_CALL 
mercury__digraph__components_2_4_p_0(
#line 807 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_19,
#line 807 "digraph.m"
  MR_Word mercury__digraph__G_5,
#line 807 "digraph.m"
  MR_Word mercury__digraph__Xs0_6,
#line 807 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Components_0_14,
#line 807 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Components_15)
#line 807 "digraph.m"
{
#line 818 "digraph.m"
  while (MR_TRUE)
#line 818 "digraph.m"
    {
#line 818 "digraph.m"
      /* tailcall optimized into a loop */
#line 818 "digraph.m"
      {
#line 818 "digraph.m"
        MR_bool mercury__digraph__succeeded;
#line 818 "digraph.m"
        MR_Word mercury__digraph__TypeInfo_21_21;
#line 818 "digraph.m"
        MR_Word mercury__digraph__TypeClassInfo_for_enum_23;
#line 818 "digraph.m"
        MR_Word mercury__digraph__X_8;
#line 818 "digraph.m"
        MR_Word mercury__digraph__Xs1_9;
#line 811 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_20_20 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 811 "digraph.m"
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_22 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 811 "digraph.m"
        MR_Box mercury__digraph__conv1_X_8;
#line 811 "digraph.m"
        MR_Word mercury__digraph__conv0_Xs1_9;

#line 9426 "digraph.c"
        {
#line 9428 "digraph.c"
          mercury__digraph__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9430 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_21_21, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_20_20));
#line 9432 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_21_21, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_19));
#line 9434 "digraph.c"
        }
#line 9436 "digraph.c"
        {
#line 9438 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9440 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_22));
#line 9442 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_19));
#line 9444 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 2) = ((MR_Box) (mercury__digraph__TypeInfo_21_21));
#line 9446 "digraph.c"
        }
#line 811 "digraph.m"
        {
#line 811 "digraph.m"
          mercury__digraph__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mercury__digraph__TypeClassInfo_for_enum_23, &mercury__digraph__conv1_X_8, (MR_Word) mercury__digraph__Xs0_6, &mercury__digraph__conv0_Xs1_9);
        }
#line 811 "digraph.m"
        if (mercury__digraph__succeeded)
#line 811 "digraph.m"
          {
#line 811 "digraph.m"
            mercury__digraph__X_8 = ((MR_Word) mercury__digraph__conv1_X_8);
#line 811 "digraph.m"
            mercury__digraph__Xs1_9 = (MR_Word) mercury__digraph__conv0_Xs1_9;
#line 811 "digraph.m"
            mercury__digraph__succeeded = MR_TRUE;
#line 811 "digraph.m"
          }
#line 818 "digraph.m"
        if (mercury__digraph__succeeded)
#line 812 "digraph.m"
          {
#line 812 "digraph.m"
            MR_Word mercury__digraph__TypeCtorInfo_28_28;
#line 812 "digraph.m"
            MR_Word mercury__digraph__TypeInfo_29_29;
#line 812 "digraph.m"
            MR_Word mercury__digraph__Keys0_11;
#line 812 "digraph.m"
            MR_Word mercury__digraph__Comp_12;
#line 812 "digraph.m"
            MR_Word mercury__digraph__Xs2_13;
#line 812 "digraph.m"
            MR_Word mercury__digraph__V_16_16;
#line 812 "digraph.m"
            MR_Word mercury__digraph__STATE_VARIABLE_Components_17_17;
#line 812 "digraph.m"
            MR_Word mercury__digraph__V_2_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 812 "digraph.m"
            MR_Word mercury__digraph__V_4_34 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 812 "digraph.m"
            MR_Word mercury__digraph__Set0_6_44 = (MR_Word) mercury__digraph__V_4_34;
#line 812 "digraph.m"
            MR_Integer mercury__digraph__V_9_46;
#line 812 "digraph.m"
            MR_Word mercury__digraph__Set_5_47;
#line 812 "digraph.m"
            MR_Word mercury__digraph__List0_5_52;
#line 812 "digraph.m"
            MR_Word mercury__digraph__List_6_53;
#line 812 "digraph.m"
            MR_Word mercury__digraph__Set1_4_57;
#line 812 "digraph.m"
            MR_Word mercury__digraph__Set2_5_58;
#line 812 "digraph.m"
            MR_Word mercury__digraph__V_6_59;
#line 9503 "digraph.c"
            MR_Box MR_CALL (* mercury__digraph__func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9505 "digraph.c"
            MR_Box mercury__digraph__conv3_V_9_46;
#line 815 "digraph.m"
            MR_Word mercury__digraph__conv4_V_16_16;
#line 68 "set_ordlist.opt"
            MR_Word mercury__digraph__conv5_List_6_53;

#line 9512 "digraph.c"
            {
#line 9514 "digraph.c"
              mercury__digraph__conv3_V_9_46 = mercury__digraph__func_2(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_23), ((MR_Box) (mercury__digraph__X_8)));
            }
#line 9517 "digraph.c"
            mercury__digraph__V_9_46 = ((MR_Integer) mercury__digraph__conv3_V_9_46);
#line 170 "sparse_bitset.opt"
            {
#line 170 "sparse_bitset.opt"
              mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__Set0_6_44, mercury__digraph__V_9_46, &mercury__digraph__Set_5_47);
            }
#line 171 "sparse_bitset.opt"
            mercury__digraph__Keys0_11 = (MR_Word) mercury__digraph__Set_5_47;
#line 814 "digraph.m"
            {
#line 814 "digraph.m"
              mercury__digraph__reachable_from_4_p_0(mercury__digraph__TypeInfo_for_T_19, mercury__digraph__G_5, mercury__digraph__Keys0_11, mercury__digraph__V_4_34, &mercury__digraph__Comp_12);
            }
#line 815 "digraph.m"
            {
#line 815 "digraph.m"
              mercury__digraph__conv4_V_16_16 = mercury__sparse_bitset__to_set_1_f_0(mercury__digraph__TypeClassInfo_for_enum_23, (MR_Word) mercury__digraph__Comp_12);
            }
#line 815 "digraph.m"
            mercury__digraph__V_16_16 = (MR_Word) mercury__digraph__conv4_V_16_16;
#line 9538 "digraph.c"
            mercury__digraph__TypeCtorInfo_28_28 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 9540 "digraph.c"
            {
#line 9542 "digraph.c"
              mercury__digraph__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9544 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_28_28));
#line 9546 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 1) = ((MR_Box) (mercury__digraph__TypeInfo_21_21));
#line 9548 "digraph.c"
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
#line 817 "digraph.m"
            /* direct tailcall eliminated */
#line 817 "digraph.m"
            {
#line 817 "digraph.m"
              MR_Word mercury__digraph__Xs0__tmp_copy_6 = mercury__digraph__Xs2_13;
#line 817 "digraph.m"
              MR_Word mercury__digraph__STATE_VARIABLE_Components_0__tmp_copy_14 = mercury__digraph__STATE_VARIABLE_Components_17_17;

#line 817 "digraph.m"
              mercury__digraph__STATE_VARIABLE_Components_0_14 = mercury__digraph__STATE_VARIABLE_Components_0__tmp_copy_14;
#line 817 "digraph.m"
              mercury__digraph__Xs0_6 = mercury__digraph__Xs0__tmp_copy_6;
#line 817 "digraph.m"
            }
#line 817 "digraph.m"
            continue;
#line 812 "digraph.m"
          }
#line 818 "digraph.m"
        else
#line 817 "digraph.m"
          *mercury__digraph__STATE_VARIABLE_Components_15 = mercury__digraph__STATE_VARIABLE_Components_0_14;
#line 818 "digraph.m"
      }
#line 818 "digraph.m"
      break;
#line 818 "digraph.m"
    }
#line 807 "digraph.m"
}

#line 782 "digraph.m"
MR_bool MR_CALL 
mercury__digraph__is_dag_2_5_p_0(
#line 782 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_17,
#line 782 "digraph.m"
  MR_Word mercury__digraph__G_6,
#line 782 "digraph.m"
  MR_Word mercury__digraph__Ancestors_7,
#line 782 "digraph.m"
  MR_Word mercury__digraph__X_8,
#line 782 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Visited_0_11,
#line 782 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Visited_12)
#line 782 "digraph.m"
{
#line 789 "digraph.m"
  {
#line 789 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 787 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_18_18 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 787 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_19_19;

#line 9630 "digraph.c"
    {
#line 9632 "digraph.c"
      mercury__digraph__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9634 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_19_19, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_18_18));
#line 9636 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_19_19, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
#line 9638 "digraph.c"
    }
#line 787 "digraph.m"
    {
#line 787 "digraph.m"
      mercury__digraph__succeeded = mercury__list__member_2_p_0(mercury__digraph__TypeInfo_19_19, ((MR_Box) (mercury__digraph__X_8)), (MR_Word) mercury__digraph__Ancestors_7);
    }
#line 789 "digraph.m"
    if (mercury__digraph__succeeded)
#line 788 "digraph.m"
      mercury__digraph__succeeded = MR_FALSE;
#line 789 "digraph.m"
    else
#line 791 "digraph.m"
      {
#line 789 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_20_20 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 789 "digraph.m"
        MR_Word mercury__digraph__TypeInfo_21_21;
#line 789 "digraph.m"
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_22 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 789 "digraph.m"
        MR_Word mercury__digraph__TypeClassInfo_for_enum_23;
#line 789 "digraph.m"
        MR_Word mercury__digraph__Set_3_34;
#line 789 "digraph.m"
        MR_Integer mercury__digraph__V_5_35;
#line 9665 "digraph.c"
        MR_Box MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box);
#line 9667 "digraph.c"
        MR_Box mercury__digraph__conv1_V_5_35;

#line 9670 "digraph.c"
        {
#line 9672 "digraph.c"
          mercury__digraph__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9674 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_21_21, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_20_20));
#line 9676 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_21_21, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
#line 9678 "digraph.c"
        }
#line 9680 "digraph.c"
        {
#line 9682 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9684 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_22));
#line 9686 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
#line 9688 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, 2) = ((MR_Box) (mercury__digraph__TypeInfo_21_21));
#line 9690 "digraph.c"
        }
#line 162 "sparse_bitset.opt"
        mercury__digraph__Set_3_34 = (MR_Word) mercury__digraph__STATE_VARIABLE_Visited_0_11;
#line 9694 "digraph.c"
        mercury__digraph__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_23, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9696 "digraph.c"
        {
#line 9698 "digraph.c"
          mercury__digraph__conv1_V_5_35 = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_23), ((MR_Box) (mercury__digraph__X_8)));
        }
#line 9701 "digraph.c"
        mercury__digraph__V_5_35 = ((MR_Integer) mercury__digraph__conv1_V_5_35);
#line 164 "sparse_bitset.opt"
        {
#line 164 "sparse_bitset.opt"
          mercury__digraph__succeeded = mercury__sparse_bitset__contains_search_nodes_2_p_0(mercury__digraph__Set_3_34, mercury__digraph__V_5_35);
        }
#line 791 "digraph.m"
        if (mercury__digraph__succeeded)
#line 789 "digraph.m"
          {
#line 789 "digraph.m"
            *mercury__digraph__STATE_VARIABLE_Visited_12 = mercury__digraph__STATE_VARIABLE_Visited_0_11;
#line 789 "digraph.m"
            mercury__digraph__succeeded = MR_TRUE;
#line 789 "digraph.m"
          }
#line 791 "digraph.m"
        else
#line 792 "digraph.m"
          {
#line 792 "digraph.m"
            MR_Word mercury__digraph__TypeCtorInfo_24_24;
#line 792 "digraph.m"
            MR_Word mercury__digraph__TypeInfo_25_25;
#line 792 "digraph.m"
            MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_26;
#line 792 "digraph.m"
            MR_Word mercury__digraph__TypeClassInfo_for_enum_27;
#line 792 "digraph.m"
            MR_Word mercury__digraph__SuccXs_10;
#line 792 "digraph.m"
            MR_Word mercury__digraph__STATE_VARIABLE_Visited_13_13;
#line 792 "digraph.m"
            MR_Word mercury__digraph__V_16_16;
#line 792 "digraph.m"
            MR_Word mercury__digraph__Set0_6_42;
#line 792 "digraph.m"
            MR_Integer mercury__digraph__V_9_44;
#line 792 "digraph.m"
            MR_Word mercury__digraph__Set_5_45;
#line 9742 "digraph.c"
            MR_Box MR_CALL (* mercury__digraph__func_2)(MR_Box, MR_Box);
#line 9744 "digraph.c"
            MR_Box mercury__digraph__conv3_V_9_44;

#line 792 "digraph.m"
            {
#line 792 "digraph.m"
              mercury__digraph__lookup_key_set_from_3_p_0(mercury__digraph__TypeInfo_for_T_17, mercury__digraph__G_6, mercury__digraph__X_8, &mercury__digraph__SuccXs_10);
            }
#line 9752 "digraph.c"
            mercury__digraph__BaseTypeClassInfo_for_enum_26 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 9754 "digraph.c"
            mercury__digraph__TypeCtorInfo_24_24 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 9756 "digraph.c"
            {
#line 9758 "digraph.c"
              mercury__digraph__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9760 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_24_24));
#line 9762 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
#line 9764 "digraph.c"
            }
#line 9766 "digraph.c"
            {
#line 9768 "digraph.c"
              mercury__digraph__TypeClassInfo_for_enum_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9770 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_27, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_26));
#line 9772 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_27, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_17));
#line 9774 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_27, 2) = ((MR_Box) (mercury__digraph__TypeInfo_25_25));
#line 9776 "digraph.c"
            }
#line 168 "sparse_bitset.opt"
            mercury__digraph__Set0_6_42 = (MR_Word) mercury__digraph__STATE_VARIABLE_Visited_0_11;
#line 9780 "digraph.c"
            mercury__digraph__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9782 "digraph.c"
            {
#line 9784 "digraph.c"
              mercury__digraph__conv3_V_9_44 = mercury__digraph__func_2(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_27), ((MR_Box) (mercury__digraph__X_8)));
            }
#line 9787 "digraph.c"
            mercury__digraph__V_9_44 = ((MR_Integer) mercury__digraph__conv3_V_9_44);
#line 170 "sparse_bitset.opt"
            {
#line 170 "sparse_bitset.opt"
              mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__Set0_6_42, mercury__digraph__V_9_44, &mercury__digraph__Set_5_45);
            }
#line 171 "sparse_bitset.opt"
            mercury__digraph__STATE_VARIABLE_Visited_13_13 = (MR_Word) mercury__digraph__Set_5_45;
#line 794 "digraph.m"
            {
#line 794 "digraph.m"
              mercury__digraph__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "digraph.m"
              MR_hl_field(MR_mktag(1), mercury__digraph__V_16_16, 0) = ((MR_Box) (mercury__digraph__X_8));
#line 794 "digraph.m"
              MR_hl_field(MR_mktag(1), mercury__digraph__V_16_16, 1) = ((MR_Box) (mercury__digraph__Ancestors_7));
#line 794 "digraph.m"
            }
#line 794 "digraph.m"
            {
#line 794 "digraph.m"
              return mercury__digraph__succeeded = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_49_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_17, mercury__digraph__G_6, mercury__digraph__V_16_16, mercury__digraph__TypeClassInfo_for_enum_27, mercury__digraph__SuccXs_10, mercury__digraph__STATE_VARIABLE_Visited_13_13, mercury__digraph__STATE_VARIABLE_Visited_12);
            }
#line 792 "digraph.m"
          }
#line 791 "digraph.m"
      }
#line 789 "digraph.m"
    return mercury__digraph__succeeded;
#line 789 "digraph.m"
  }
#line 782 "digraph.m"
}

#line 752 "digraph.m"
static void MR_CALL 
mercury__digraph__accumulate_digraph_key_set_4_p_0(
#line 752 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_13,
#line 752 "digraph.m"
  MR_Word mercury__digraph__KMap_5,
#line 752 "digraph.m"
  MR_Word mercury__digraph__X_6,
#line 752 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Set_0_10,
#line 752 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Set_11)
#line 752 "digraph.m"
{
#line 755 "digraph.m"
  {
#line 755 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 755 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_15_15 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 755 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_16_16;
#line 755 "digraph.m"
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_17;
#line 755 "digraph.m"
    MR_Word mercury__digraph__TypeClassInfo_for_enum_18;
#line 755 "digraph.m"
    MR_Integer mercury__digraph__XI_8 = (MR_Integer) mercury__digraph__X_6;
#line 755 "digraph.m"
    MR_Word mercury__digraph__Y_9;
#line 755 "digraph.m"
    MR_Word mercury__digraph__Set0_6_25;
#line 755 "digraph.m"
    MR_Integer mercury__digraph__V_9_27;
#line 755 "digraph.m"
    MR_Word mercury__digraph__Set_5_28;
#line 757 "digraph.m"
    MR_Box mercury__digraph__conv0_Y_9;
#line 9861 "digraph.c"
    MR_Box MR_CALL (* mercury__digraph__func_1)(MR_Box, MR_Box);
#line 9863 "digraph.c"
    MR_Box mercury__digraph__conv2_V_9_27;

#line 9866 "digraph.c"
    {
#line 9868 "digraph.c"
      mercury__digraph__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9870 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_15_15));
#line 9872 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
#line 9874 "digraph.c"
    }
#line 757 "digraph.m"
    {
#line 757 "digraph.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_16_16, (MR_Word) mercury__digraph__KMap_5, mercury__digraph__XI_8, &mercury__digraph__conv0_Y_9);
    }
#line 757 "digraph.m"
    mercury__digraph__Y_9 = ((MR_Word) mercury__digraph__conv0_Y_9);
#line 9883 "digraph.c"
    mercury__digraph__BaseTypeClassInfo_for_enum_17 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 9885 "digraph.c"
    {
#line 9887 "digraph.c"
      mercury__digraph__TypeClassInfo_for_enum_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9889 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_18, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_17));
#line 9891 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_18, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
#line 9893 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_18, 2) = ((MR_Box) (mercury__digraph__TypeInfo_16_16));
#line 9895 "digraph.c"
    }
#line 168 "sparse_bitset.opt"
    mercury__digraph__Set0_6_25 = (MR_Word) mercury__digraph__STATE_VARIABLE_Set_0_10;
#line 9899 "digraph.c"
    mercury__digraph__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9901 "digraph.c"
    {
#line 9903 "digraph.c"
      mercury__digraph__conv2_V_9_27 = mercury__digraph__func_1(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_18), ((MR_Box) (mercury__digraph__Y_9)));
    }
#line 9906 "digraph.c"
    mercury__digraph__V_9_27 = ((MR_Integer) mercury__digraph__conv2_V_9_27);
#line 170 "sparse_bitset.opt"
    {
#line 170 "sparse_bitset.opt"
      mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__Set0_6_25, mercury__digraph__V_9_27, &mercury__digraph__Set_5_28);
    }
#line 171 "sparse_bitset.opt"
    *mercury__digraph__STATE_VARIABLE_Set_11 = (MR_Word) mercury__digraph__Set_5_28;
#line 755 "digraph.m"
  }
#line 752 "digraph.m"
}

#line 739 "digraph.m"
static void MR_CALL 
mercury__digraph__add_composition_edges_5_p_0(
#line 739 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_16,
#line 739 "digraph.m"
  MR_Word mercury__digraph__KMap1_6,
#line 739 "digraph.m"
  MR_Word mercury__digraph__KMap2_7,
#line 739 "digraph.m"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 739 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Comp_0_11,
#line 739 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Comp_12)
#line 739 "digraph.m"
{
#line 742 "digraph.m"
  {
#line 742 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 742 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_13_25 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 742 "digraph.m"
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_27;
#line 742 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_14_49;
#line 742 "digraph.m"
    MR_Word mercury__digraph__TypeClassInfo_for_enum_51;
#line 742 "digraph.m"
    MR_Word mercury__digraph__Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__3_3, (MR_Integer) 0)));
#line 742 "digraph.m"
    MR_Word mercury__digraph__Ys_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__3_3, (MR_Integer) 1)));
#line 742 "digraph.m"
    MR_Word mercury__digraph__V_13_13;
#line 742 "digraph.m"
    MR_Word mercury__digraph__V_14_14;
#line 742 "digraph.m"
    MR_Word mercury__digraph__V_21_21;
#line 742 "digraph.m"
    MR_Word mercury__digraph__V_2_31;
#line 742 "digraph.m"
    MR_Word mercury__digraph__Set_6_35;
#line 742 "digraph.m"
    MR_Word mercury__digraph__Set_6_58;

#line 9966 "digraph.c"
    {
#line 9968 "digraph.c"
      mercury__digraph__TypeInfo_14_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9970 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_49, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_13_25));
#line 9972 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_49, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_16));
#line 9974 "digraph.c"
    }
#line 114 "sparse_bitset.opt"
    mercury__digraph__V_2_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 113 "sparse_bitset.opt"
    mercury__digraph__V_21_21 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 9980 "digraph.c"
    mercury__digraph__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 9982 "digraph.c"
    {
#line 9984 "digraph.c"
      mercury__digraph__TypeClassInfo_for_enum_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9986 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_51, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_27));
#line 9988 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_51, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_16));
#line 9990 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_51, 2) = ((MR_Box) (mercury__digraph__TypeInfo_14_49));
#line 9992 "digraph.c"
    }
#line 254 "sparse_bitset.opt"
    mercury__digraph__Set_6_35 = (MR_Word) mercury__digraph__Xs_8;
#line 255 "sparse_bitset.opt"
    {
#line 255 "sparse_bitset.opt"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_16, mercury__digraph__KMap1_6, mercury__digraph__TypeClassInfo_for_enum_51, mercury__digraph__Set_6_35, mercury__digraph__V_21_21, &mercury__digraph__V_13_13);
    }
#line 254 "sparse_bitset.opt"
    mercury__digraph__Set_6_58 = (MR_Word) mercury__digraph__Ys_9;
#line 255 "sparse_bitset.opt"
    {
#line 255 "sparse_bitset.opt"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_55_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_49_48_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_16, mercury__digraph__KMap2_7, mercury__digraph__TypeClassInfo_for_enum_51, mercury__digraph__Set_6_58, mercury__digraph__V_21_21, &mercury__digraph__V_14_14);
    }
#line 743 "digraph.m"
    {
#line 743 "digraph.m"
      mercury__digraph__add_cartesian_product_4_p_0(mercury__digraph__TypeInfo_for_T_16, mercury__digraph__V_13_13, mercury__digraph__V_14_14, mercury__digraph__STATE_VARIABLE_Comp_0_11, mercury__digraph__STATE_VARIABLE_Comp_12);
#line 743 "digraph.m"
      return;
    }
#line 742 "digraph.m"
  }
#line 739 "digraph.m"
}

#line 721 "digraph.m"
static void MR_CALL 
mercury__digraph__find_necessary_keys_5_p_0(
#line 721 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_16,
#line 721 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 721 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Needed1_0_10,
#line 721 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Needed1_11,
#line 721 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Needed2_0_12,
#line 721 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Needed2_13)
#line 721 "digraph.m"
{
#line 725 "digraph.m"
  {
#line 725 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 725 "digraph.m"
    MR_Word mercury__digraph__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__1_1, (MR_Integer) 0)));
#line 725 "digraph.m"
    MR_Word mercury__digraph__Ys_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__1_1, (MR_Integer) 1)));
#line 725 "digraph.m"
    MR_Word mercury__digraph__Set1_4_22 = (MR_Word) mercury__digraph__Xs_6;
#line 725 "digraph.m"
    MR_Word mercury__digraph__Set2_5_23 = (MR_Word) mercury__digraph__STATE_VARIABLE_Needed1_0_10;
#line 725 "digraph.m"
    MR_Word mercury__digraph__V_6_24;
#line 725 "digraph.m"
    MR_Word mercury__digraph__Set1_4_28;
#line 725 "digraph.m"
    MR_Word mercury__digraph__Set2_5_29;
#line 725 "digraph.m"
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
#line 725 "digraph.m"
  }
#line 721 "digraph.m"
}

#line 672 "digraph.m"
void MR_CALL 
mercury__digraph__keys_2_p_0(
#line 672 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_9,
#line 672 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 672 "digraph.m"
  MR_Word * mercury__digraph__Keys_4)
#line 672 "digraph.m"
{
#line 674 "digraph.m"
  {
#line 674 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 674 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_10_10 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 674 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_11_11;
#line 674 "digraph.m"
    MR_Word mercury__digraph__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
#line 674 "digraph.m"
    MR_Word mercury__digraph__Reverse_4_14;
#line 674 "digraph.m"
    MR_Word mercury__digraph__V_5_19;
#line 675 "digraph.m"
    MR_Integer mercury__digraph__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 675 "digraph.m"
    MR_Word mercury__digraph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 675 "digraph.m"
    MR_Word mercury__digraph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
#line 56 "bimap.opt"
    MR_Word mercury__digraph__V_3_13;
#line 70 "tree234.opt"
    MR_Word mercury__digraph__conv0_Keys_4;

#line 10117 "digraph.c"
    {
#line 10119 "digraph.c"
      mercury__digraph__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10121 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_11, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_10));
#line 10123 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_11, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_9));
#line 10125 "digraph.c"
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
#line 674 "digraph.m"
  }
#line 672 "digraph.m"
}

#line 647 "digraph.m"
void MR_CALL 
mercury__digraph__dfs_2_6_p_0(
#line 647 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_21,
#line 647 "digraph.m"
  MR_Word mercury__digraph__G_7,
#line 647 "digraph.m"
  MR_Word mercury__digraph__X_8,
#line 647 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Visited_0_12,
#line 647 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Visited_13,
#line 647 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_DfsRev_0_14,
#line 647 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_DfsRev_15)
#line 647 "digraph.m"
{
#line 654 "digraph.m"
  {
#line 654 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 652 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_22_22 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 652 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_23_23;
#line 652 "digraph.m"
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_24 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 652 "digraph.m"
    MR_Word mercury__digraph__TypeClassInfo_for_enum_25;
#line 652 "digraph.m"
    MR_Word mercury__digraph__Set_3_40;
#line 652 "digraph.m"
    MR_Integer mercury__digraph__V_5_41;
#line 10180 "digraph.c"
    MR_Box MR_CALL (* mercury__digraph__func_0)(MR_Box, MR_Box);
#line 10182 "digraph.c"
    MR_Box mercury__digraph__conv1_V_5_41;

#line 10185 "digraph.c"
    {
#line 10187 "digraph.c"
      mercury__digraph__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10189 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_23, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_22_22));
#line 10191 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_21));
#line 10193 "digraph.c"
    }
#line 10195 "digraph.c"
    {
#line 10197 "digraph.c"
      mercury__digraph__TypeClassInfo_for_enum_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10199 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_25, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_24));
#line 10201 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_25, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_21));
#line 10203 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_25, 2) = ((MR_Box) (mercury__digraph__TypeInfo_23_23));
#line 10205 "digraph.c"
    }
#line 162 "sparse_bitset.opt"
    mercury__digraph__Set_3_40 = (MR_Word) mercury__digraph__STATE_VARIABLE_Visited_0_12;
#line 10209 "digraph.c"
    mercury__digraph__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_25, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10211 "digraph.c"
    {
#line 10213 "digraph.c"
      mercury__digraph__conv1_V_5_41 = mercury__digraph__func_0(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_25), ((MR_Box) (mercury__digraph__X_8)));
    }
#line 10216 "digraph.c"
    mercury__digraph__V_5_41 = ((MR_Integer) mercury__digraph__conv1_V_5_41);
#line 164 "sparse_bitset.opt"
    {
#line 164 "sparse_bitset.opt"
      mercury__digraph__succeeded = mercury__sparse_bitset__contains_search_nodes_2_p_0(mercury__digraph__Set_3_40, mercury__digraph__V_5_41);
    }
#line 654 "digraph.m"
    if (mercury__digraph__succeeded)
#line 653 "digraph.m"
      {
#line 653 "digraph.m"
        *mercury__digraph__STATE_VARIABLE_DfsRev_15 = mercury__digraph__STATE_VARIABLE_DfsRev_0_14;
#line 653 "digraph.m"
        *mercury__digraph__STATE_VARIABLE_Visited_13 = mercury__digraph__STATE_VARIABLE_Visited_0_12;
#line 653 "digraph.m"
      }
#line 654 "digraph.m"
    else
#line 655 "digraph.m"
      {
#line 655 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_26_26;
#line 655 "digraph.m"
        MR_Word mercury__digraph__TypeInfo_27_27;
#line 655 "digraph.m"
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_28;
#line 655 "digraph.m"
        MR_Word mercury__digraph__TypeClassInfo_for_enum_29;
#line 655 "digraph.m"
        MR_Word mercury__digraph__SuccXs_11;
#line 655 "digraph.m"
        MR_Word mercury__digraph__STATE_VARIABLE_Visited_16_16;
#line 655 "digraph.m"
        MR_Word mercury__digraph__STATE_VARIABLE_DfsRev_19_19;
#line 655 "digraph.m"
        MR_Word mercury__digraph__Set0_6_45;
#line 655 "digraph.m"
        MR_Integer mercury__digraph__V_9_47;
#line 655 "digraph.m"
        MR_Word mercury__digraph__Set_5_48;
#line 10257 "digraph.c"
        MR_Box MR_CALL (* mercury__digraph__func_2)(MR_Box, MR_Box);
#line 10259 "digraph.c"
        MR_Box mercury__digraph__conv3_V_9_47;

#line 655 "digraph.m"
        {
#line 655 "digraph.m"
          mercury__digraph__lookup_key_set_from_3_p_0(mercury__digraph__TypeInfo_for_T_21, mercury__digraph__G_7, mercury__digraph__X_8, &mercury__digraph__SuccXs_11);
        }
#line 10267 "digraph.c"
        mercury__digraph__BaseTypeClassInfo_for_enum_28 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 10269 "digraph.c"
        mercury__digraph__TypeCtorInfo_26_26 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 10271 "digraph.c"
        {
#line 10273 "digraph.c"
          mercury__digraph__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10275 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_26_26));
#line 10277 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_27_27, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_21));
#line 10279 "digraph.c"
        }
#line 10281 "digraph.c"
        {
#line 10283 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10285 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_28));
#line 10287 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_21));
#line 10289 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, 2) = ((MR_Box) (mercury__digraph__TypeInfo_27_27));
#line 10291 "digraph.c"
        }
#line 168 "sparse_bitset.opt"
        mercury__digraph__Set0_6_45 = (MR_Word) mercury__digraph__STATE_VARIABLE_Visited_0_12;
#line 10295 "digraph.c"
        mercury__digraph__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10297 "digraph.c"
        {
#line 10299 "digraph.c"
          mercury__digraph__conv3_V_9_47 = mercury__digraph__func_2(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__digraph__X_8)));
        }
#line 10302 "digraph.c"
        mercury__digraph__V_9_47 = ((MR_Integer) mercury__digraph__conv3_V_9_47);
#line 170 "sparse_bitset.opt"
        {
#line 170 "sparse_bitset.opt"
          mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__Set0_6_45, mercury__digraph__V_9_47, &mercury__digraph__Set_5_48);
        }
#line 171 "sparse_bitset.opt"
        mercury__digraph__STATE_VARIABLE_Visited_16_16 = (MR_Word) mercury__digraph__Set_5_48;
#line 659 "digraph.m"
        {
#line 659 "digraph.m"
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_54_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_44_32_49_49_44_32_49_51_93_95_48_6_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_21, mercury__digraph__G_7, mercury__digraph__TypeClassInfo_for_enum_29, mercury__digraph__SuccXs_11, mercury__digraph__STATE_VARIABLE_Visited_16_16, mercury__digraph__STATE_VARIABLE_Visited_13, mercury__digraph__STATE_VARIABLE_DfsRev_0_14, &mercury__digraph__STATE_VARIABLE_DfsRev_19_19);
        }
#line 660 "digraph.m"
        {
#line 660 "digraph.m"
          MR_Word base;
#line 660 "digraph.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "digraph.m"
          *mercury__digraph__STATE_VARIABLE_DfsRev_15 = base;
#line 660 "digraph.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__digraph__X_8));
#line 660 "digraph.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__digraph__STATE_VARIABLE_DfsRev_19_19));
#line 660 "digraph.m"
        }
#line 655 "digraph.m"
      }
#line 654 "digraph.m"
  }
#line 647 "digraph.m"
}

#line 586 "digraph.m"
void MR_CALL 
mercury__digraph__to_key_assoc_list_2_4_p_0(
#line 586 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_20,
#line 586 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 586 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 586 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_AL_0_3,
#line 586 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_AL_4)
#line 586 "digraph.m"
{
#line 590 "digraph.m"
  {
#line 590 "digraph.m"
    MR_bool mercury__digraph__succeeded;

#line 590 "digraph.m"
    if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 590 "digraph.m"
      *mercury__digraph__STATE_VARIABLE_AL_4 = mercury__digraph__STATE_VARIABLE_AL_0_3;
#line 590 "digraph.m"
    else
#line 591 "digraph.m"
      {
#line 591 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_22_22;
#line 591 "digraph.m"
        MR_Word mercury__digraph__TypeInfo_23_23;
#line 591 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_24_24;
#line 591 "digraph.m"
        MR_Word mercury__digraph__TypeInfo_25_25;
#line 591 "digraph.m"
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_29;
#line 591 "digraph.m"
        MR_Word mercury__digraph__TypeClassInfo_for_enum_30;
#line 591 "digraph.m"
        MR_Integer mercury__digraph__XI_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 591 "digraph.m"
        MR_Word mercury__digraph__XIs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 591 "digraph.m"
        MR_Word mercury__digraph__SuccXs_13;
#line 591 "digraph.m"
        MR_Word mercury__digraph__STATE_VARIABLE_AL_16_16;
#line 591 "digraph.m"
        MR_Word mercury__digraph__V_19_19;
#line 591 "digraph.m"
        MR_Word mercury__digraph__Set_6_38;
#line 593 "digraph.m"
        MR_Box mercury__digraph__conv0_SuccXs_13;

#line 592 "digraph.m"
        {
#line 592 "digraph.m"
          mercury__digraph__to_key_assoc_list_2_4_p_0(mercury__digraph__TypeInfo_for_T_20, mercury__digraph__HeadVar__1_1, mercury__digraph__XIs_11, mercury__digraph__STATE_VARIABLE_AL_0_3, &mercury__digraph__STATE_VARIABLE_AL_16_16);
        }
#line 10397 "digraph.c"
        mercury__digraph__TypeCtorInfo_24_24 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 10399 "digraph.c"
        mercury__digraph__TypeCtorInfo_22_22 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 10401 "digraph.c"
        {
#line 10403 "digraph.c"
          mercury__digraph__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10405 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_23, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_22_22));
#line 10407 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_23_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_20));
#line 10409 "digraph.c"
        }
#line 10411 "digraph.c"
        {
#line 10413 "digraph.c"
          mercury__digraph__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10415 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_24_24));
#line 10417 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_25_25, 1) = ((MR_Box) (mercury__digraph__TypeInfo_23_23));
#line 10419 "digraph.c"
        }
#line 593 "digraph.m"
        {
#line 593 "digraph.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_25_25, (MR_Word) mercury__digraph__HeadVar__1_1, mercury__digraph__XI_10, &mercury__digraph__conv0_SuccXs_13);
        }
#line 593 "digraph.m"
        mercury__digraph__SuccXs_13 = ((MR_Word) mercury__digraph__conv0_SuccXs_13);
#line 594 "digraph.m"
        mercury__digraph__V_19_19 = (MR_Word) mercury__digraph__XI_10;
#line 10430 "digraph.c"
        mercury__digraph__BaseTypeClassInfo_for_enum_29 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 10432 "digraph.c"
        {
#line 10434 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10436 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_30, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_29));
#line 10438 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_30, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_20));
#line 10440 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_30, 2) = ((MR_Box) (mercury__digraph__TypeInfo_23_23));
#line 10442 "digraph.c"
        }
#line 269 "sparse_bitset.opt"
        mercury__digraph__Set_6_38 = (MR_Word) mercury__digraph__SuccXs_13;
#line 270 "sparse_bitset.opt"
        {
#line 270 "sparse_bitset.opt"
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_49_44_32_49_51_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__V_19_19, mercury__digraph__TypeClassInfo_for_enum_30, mercury__digraph__Set_6_38, mercury__digraph__STATE_VARIABLE_AL_16_16, mercury__digraph__STATE_VARIABLE_AL_4);
#line 270 "sparse_bitset.opt"
          return;
        }
#line 591 "digraph.m"
      }
#line 590 "digraph.m"
  }
#line 586 "digraph.m"
}

#line 560 "digraph.m"
void MR_CALL 
mercury__digraph__to_assoc_list_2_5_p_0(
#line 560 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_24,
#line 560 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 560 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 560 "digraph.m"
  MR_Word mercury__digraph__VMap_3,
#line 560 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_AL_0_4,
#line 560 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_AL_5)
#line 560 "digraph.m"
{
#line 564 "digraph.m"
  {
#line 564 "digraph.m"
    MR_bool mercury__digraph__succeeded;

#line 564 "digraph.m"
    if ((mercury__digraph__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 564 "digraph.m"
      *mercury__digraph__STATE_VARIABLE_AL_5 = mercury__digraph__STATE_VARIABLE_AL_0_4;
#line 564 "digraph.m"
    else
#line 565 "digraph.m"
      {
#line 565 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_25_25;
#line 565 "digraph.m"
        MR_Word mercury__digraph__TypeInfo_26_26;
#line 565 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_28_28;
#line 565 "digraph.m"
        MR_Word mercury__digraph__TypeInfo_29_29;
#line 565 "digraph.m"
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_33;
#line 565 "digraph.m"
        MR_Word mercury__digraph__TypeClassInfo_for_enum_34;
#line 565 "digraph.m"
        MR_Integer mercury__digraph__XI_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 0)));
#line 565 "digraph.m"
        MR_Word mercury__digraph__XIs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__2_2, (MR_Integer) 1)));
#line 565 "digraph.m"
        MR_Box mercury__digraph__VX_16;
#line 565 "digraph.m"
        MR_Word mercury__digraph__SuccXs_17;
#line 565 "digraph.m"
        MR_Word mercury__digraph__STATE_VARIABLE_AL_20_20;
#line 565 "digraph.m"
        MR_Word mercury__digraph__V_21_21;
#line 565 "digraph.m"
        MR_Word mercury__digraph__Reverse_5_42;
#line 565 "digraph.m"
        MR_Word mercury__digraph__Set_6_46;
#line 48 "bimap.opt"
        MR_Word mercury__digraph__V_4_41;
#line 568 "digraph.m"
        MR_Box mercury__digraph__conv0_SuccXs_17;

#line 566 "digraph.m"
        {
#line 566 "digraph.m"
          mercury__digraph__to_assoc_list_2_5_p_0(mercury__digraph__TypeInfo_for_T_24, mercury__digraph__HeadVar__1_1, mercury__digraph__XIs_13, mercury__digraph__VMap_3, mercury__digraph__STATE_VARIABLE_AL_0_4, &mercury__digraph__STATE_VARIABLE_AL_20_20);
        }
#line 567 "digraph.m"
        mercury__digraph__V_21_21 = (MR_Word) mercury__digraph__XI_12;
#line 10530 "digraph.c"
        mercury__digraph__TypeCtorInfo_25_25 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 10532 "digraph.c"
        {
#line 10534 "digraph.c"
          mercury__digraph__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10536 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_26_26, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_25_25));
#line 10538 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_26_26, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_24));
#line 10540 "digraph.c"
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
#line 10551 "digraph.c"
        mercury__digraph__TypeCtorInfo_28_28 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 10553 "digraph.c"
        {
#line 10555 "digraph.c"
          mercury__digraph__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10557 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_28_28));
#line 10559 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_29_29, 1) = ((MR_Box) (mercury__digraph__TypeInfo_26_26));
#line 10561 "digraph.c"
        }
#line 568 "digraph.m"
        {
#line 568 "digraph.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_29_29, (MR_Word) mercury__digraph__HeadVar__1_1, mercury__digraph__XI_12, &mercury__digraph__conv0_SuccXs_17);
        }
#line 568 "digraph.m"
        mercury__digraph__SuccXs_17 = ((MR_Word) mercury__digraph__conv0_SuccXs_17);
#line 10570 "digraph.c"
        mercury__digraph__BaseTypeClassInfo_for_enum_33 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 10572 "digraph.c"
        {
#line 10574 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10576 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_34, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_33));
#line 10578 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_34, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_24));
#line 10580 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_34, 2) = ((MR_Box) (mercury__digraph__TypeInfo_26_26));
#line 10582 "digraph.c"
        }
#line 269 "sparse_bitset.opt"
        mercury__digraph__Set_6_46 = (MR_Word) mercury__digraph__SuccXs_17;
#line 270 "sparse_bitset.opt"
        {
#line 270 "sparse_bitset.opt"
          mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_55_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_50_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_24, mercury__digraph__VMap_3, mercury__digraph__VX_16, mercury__digraph__TypeClassInfo_for_enum_34, mercury__digraph__Set_6_46, mercury__digraph__STATE_VARIABLE_AL_20_20, mercury__digraph__STATE_VARIABLE_AL_5);
#line 270 "sparse_bitset.opt"
          return;
        }
#line 565 "digraph.m"
      }
#line 564 "digraph.m"
  }
#line 560 "digraph.m"
}

#line 390 "digraph.m"
static MR_Word MR_CALL 
mercury__digraph__key_set_map_delete_3_f_0(
#line 390 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_11,
#line 390 "digraph.m"
  MR_Word mercury__digraph__Map0_5,
#line 390 "digraph.m"
  MR_Integer mercury__digraph__XI_6,
#line 390 "digraph.m"
  MR_Word mercury__digraph__Y_7)
#line 390 "digraph.m"
{
#line 397 "digraph.m"
  {
#line 397 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 397 "digraph.m"
    MR_Word mercury__digraph__Map_8;
#line 397 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_14_14;
#line 397 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_16_16;
#line 397 "digraph.m"
    MR_Word mercury__digraph__SuccXs0_9;
#line 394 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_13_13 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 394 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_15_15 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 39 "map.opt"
    MR_Box mercury__digraph__conv0_SuccXs0_9;

#line 10632 "digraph.c"
    {
#line 10634 "digraph.c"
      mercury__digraph__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10636 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_14, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_13_13));
#line 10638 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_14, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_11));
#line 10640 "digraph.c"
    }
#line 10642 "digraph.c"
    {
#line 10644 "digraph.c"
      mercury__digraph__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10646 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_15_15));
#line 10648 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 1) = ((MR_Box) (mercury__digraph__TypeInfo_14_14));
#line 10650 "digraph.c"
    }
#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_16_16, (MR_Word) mercury__digraph__Map0_5, mercury__digraph__XI_6, &mercury__digraph__conv0_SuccXs0_9);
    }
#line 39 "map.opt"
    if (mercury__digraph__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__digraph__SuccXs0_9 = ((MR_Word) mercury__digraph__conv0_SuccXs0_9);
#line 39 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 397 "digraph.m"
    if (mercury__digraph__succeeded)
#line 395 "digraph.m"
      {
#line 395 "digraph.m"
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 395 "digraph.m"
        MR_Word mercury__digraph__TypeClassInfo_for_enum_20;
#line 395 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_21_21;
#line 395 "digraph.m"
        MR_Word mercury__digraph__SuccXs_10;
#line 395 "digraph.m"
        MR_Word mercury__digraph__Set0_6_46;
#line 395 "digraph.m"
        MR_Integer mercury__digraph__V_9_48;
#line 395 "digraph.m"
        MR_Word mercury__digraph__Set1_4_50;
#line 395 "digraph.m"
        MR_Word mercury__digraph__Set2_5_51;
#line 395 "digraph.m"
        MR_Word mercury__digraph__V_6_52;
#line 10689 "digraph.c"
        MR_Box MR_CALL (* mercury__digraph__func_1)(MR_Box, MR_Box);
#line 10691 "digraph.c"
        MR_Box mercury__digraph__conv2_V_9_48;

#line 10694 "digraph.c"
        {
#line 10696 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10698 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_20, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_19));
#line 10700 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_20, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_11));
#line 10702 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_20, 2) = ((MR_Box) (mercury__digraph__TypeInfo_14_14));
#line 10704 "digraph.c"
        }
#line 114 "sparse_bitset.opt"
        mercury__digraph__Set0_6_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10708 "digraph.c"
        mercury__digraph__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10710 "digraph.c"
        {
#line 10712 "digraph.c"
          mercury__digraph__conv2_V_9_48 = mercury__digraph__func_1(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_20), ((MR_Box) (mercury__digraph__Y_7)));
        }
#line 10715 "digraph.c"
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
#line 10731 "digraph.c"
        mercury__digraph__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 89 "map.opt"
        {
#line 89 "map.opt"
          mercury__map__det_update_4_p_0(mercury__digraph__TypeCtorInfo_21_21, mercury__digraph__TypeInfo_16_16, ((MR_Box) (mercury__digraph__XI_6)), ((MR_Box) (mercury__digraph__SuccXs_10)), mercury__digraph__Map0_5, &mercury__digraph__Map_8);
        }
#line 395 "digraph.m"
      }
#line 397 "digraph.m"
    else
#line 398 "digraph.m"
      mercury__digraph__Map_8 = mercury__digraph__Map0_5;
#line 397 "digraph.m"
    return mercury__digraph__Map_8;
#line 397 "digraph.m"
  }
#line 390 "digraph.m"
}

#line 374 "digraph.m"
static MR_Word MR_CALL 
mercury__digraph__key_set_map_add_3_f_0(
#line 374 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_13,
#line 374 "digraph.m"
  MR_Word mercury__digraph__Map0_5,
#line 374 "digraph.m"
  MR_Integer mercury__digraph__XI_6,
#line 374 "digraph.m"
  MR_Word mercury__digraph__Y_7)
#line 374 "digraph.m"
{
#line 384 "digraph.m"
  {
#line 384 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 384 "digraph.m"
    MR_Word mercury__digraph__Map_8;
#line 384 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_16_16;
#line 384 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_18_18;
#line 384 "digraph.m"
    MR_Word mercury__digraph__SuccXs0_9;
#line 377 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_15_15 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 377 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_17_17 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 39 "map.opt"
    MR_Box mercury__digraph__conv0_SuccXs0_9;

#line 10783 "digraph.c"
    {
#line 10785 "digraph.c"
      mercury__digraph__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10787 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_15_15));
#line 10789 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
#line 10791 "digraph.c"
    }
#line 10793 "digraph.c"
    {
#line 10795 "digraph.c"
      mercury__digraph__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10797 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_18_18, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_17_17));
#line 10799 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_18_18, 1) = ((MR_Box) (mercury__digraph__TypeInfo_16_16));
#line 10801 "digraph.c"
    }
#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_18_18, (MR_Word) mercury__digraph__Map0_5, mercury__digraph__XI_6, &mercury__digraph__conv0_SuccXs0_9);
    }
#line 39 "map.opt"
    if (mercury__digraph__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__digraph__SuccXs0_9 = ((MR_Word) mercury__digraph__conv0_SuccXs0_9);
#line 39 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 384 "digraph.m"
    if (mercury__digraph__succeeded)
#line 380 "digraph.m"
      {
#line 378 "digraph.m"
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_21 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 378 "digraph.m"
        MR_Word mercury__digraph__TypeClassInfo_for_enum_22;
#line 378 "digraph.m"
        MR_Word mercury__digraph__Set_3_42;
#line 378 "digraph.m"
        MR_Integer mercury__digraph__V_5_43;
#line 10830 "digraph.c"
        MR_Box MR_CALL (* mercury__digraph__func_1)(MR_Box, MR_Box);
#line 10832 "digraph.c"
        MR_Box mercury__digraph__conv2_V_5_43;

#line 10835 "digraph.c"
        {
#line 10837 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10839 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_22, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_21));
#line 10841 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_22, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
#line 10843 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_22, 2) = ((MR_Box) (mercury__digraph__TypeInfo_16_16));
#line 10845 "digraph.c"
        }
#line 162 "sparse_bitset.opt"
        mercury__digraph__Set_3_42 = (MR_Word) mercury__digraph__SuccXs0_9;
#line 10849 "digraph.c"
        mercury__digraph__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_22, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10851 "digraph.c"
        {
#line 10853 "digraph.c"
          mercury__digraph__conv2_V_5_43 = mercury__digraph__func_1(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_22), ((MR_Box) (mercury__digraph__Y_7)));
        }
#line 10856 "digraph.c"
        mercury__digraph__V_5_43 = ((MR_Integer) mercury__digraph__conv2_V_5_43);
#line 164 "sparse_bitset.opt"
        {
#line 164 "sparse_bitset.opt"
          mercury__digraph__succeeded = mercury__sparse_bitset__contains_search_nodes_2_p_0(mercury__digraph__Set_3_42, mercury__digraph__V_5_43);
        }
#line 380 "digraph.m"
        if (mercury__digraph__succeeded)
#line 379 "digraph.m"
          mercury__digraph__Map_8 = mercury__digraph__Map0_5;
#line 380 "digraph.m"
        else
#line 381 "digraph.m"
          {
#line 381 "digraph.m"
            MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_25 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 381 "digraph.m"
            MR_Word mercury__digraph__TypeClassInfo_for_enum_26;
#line 381 "digraph.m"
            MR_Word mercury__digraph__TypeCtorInfo_27_27;
#line 381 "digraph.m"
            MR_Word mercury__digraph__SuccXs_10;
#line 381 "digraph.m"
            MR_Word mercury__digraph__Set0_6_47;
#line 381 "digraph.m"
            MR_Integer mercury__digraph__V_9_49;
#line 381 "digraph.m"
            MR_Word mercury__digraph__Set_5_50;
#line 10885 "digraph.c"
            MR_Box MR_CALL (* mercury__digraph__func_3)(MR_Box, MR_Box);
#line 10887 "digraph.c"
            MR_Box mercury__digraph__conv4_V_9_49;

#line 10890 "digraph.c"
            {
#line 10892 "digraph.c"
              mercury__digraph__TypeClassInfo_for_enum_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10894 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_26, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_25));
#line 10896 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_26, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
#line 10898 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_26, 2) = ((MR_Box) (mercury__digraph__TypeInfo_16_16));
#line 10900 "digraph.c"
            }
#line 168 "sparse_bitset.opt"
            mercury__digraph__Set0_6_47 = (MR_Word) mercury__digraph__SuccXs0_9;
#line 10904 "digraph.c"
            mercury__digraph__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_26, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10906 "digraph.c"
            {
#line 10908 "digraph.c"
              mercury__digraph__conv4_V_9_49 = mercury__digraph__func_3(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_26), ((MR_Box) (mercury__digraph__Y_7)));
            }
#line 10911 "digraph.c"
            mercury__digraph__V_9_49 = ((MR_Integer) mercury__digraph__conv4_V_9_49);
#line 170 "sparse_bitset.opt"
            {
#line 170 "sparse_bitset.opt"
              mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__Set0_6_47, mercury__digraph__V_9_49, &mercury__digraph__Set_5_50);
            }
#line 171 "sparse_bitset.opt"
            mercury__digraph__SuccXs_10 = (MR_Word) mercury__digraph__Set_5_50;
#line 10920 "digraph.c"
            mercury__digraph__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 89 "map.opt"
            {
#line 89 "map.opt"
              mercury__map__det_update_4_p_0(mercury__digraph__TypeCtorInfo_27_27, mercury__digraph__TypeInfo_18_18, ((MR_Box) (mercury__digraph__XI_6)), ((MR_Box) (mercury__digraph__SuccXs_10)), mercury__digraph__Map0_5, &mercury__digraph__Map_8);
            }
#line 381 "digraph.m"
          }
#line 380 "digraph.m"
      }
#line 384 "digraph.m"
    else
#line 385 "digraph.m"
      {
#line 385 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_30_30 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 385 "digraph.m"
        MR_Word mercury__digraph__TypeInfo_31_31;
#line 385 "digraph.m"
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_32;
#line 385 "digraph.m"
        MR_Word mercury__digraph__TypeClassInfo_for_enum_33;
#line 385 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_34_34;
#line 385 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_35_35;
#line 385 "digraph.m"
        MR_Word mercury__digraph__TypeInfo_36_36;
#line 385 "digraph.m"
        MR_Word mercury__digraph__SuccXs_12;
#line 385 "digraph.m"
        MR_Word mercury__digraph__Set0_6_60;
#line 385 "digraph.m"
        MR_Integer mercury__digraph__V_9_62;
#line 385 "digraph.m"
        MR_Word mercury__digraph__Set_5_63;
#line 10957 "digraph.c"
        MR_Box MR_CALL (* mercury__digraph__func_5)(MR_Box, MR_Box);
#line 10959 "digraph.c"
        MR_Box mercury__digraph__conv6_V_9_62;

#line 10962 "digraph.c"
        {
#line 10964 "digraph.c"
          mercury__digraph__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10966 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_31_31, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_30_30));
#line 10968 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_31_31, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
#line 10970 "digraph.c"
        }
#line 114 "sparse_bitset.opt"
        mercury__digraph__Set0_6_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10974 "digraph.c"
        mercury__digraph__BaseTypeClassInfo_for_enum_32 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 10976 "digraph.c"
        {
#line 10978 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10980 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_33, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_32));
#line 10982 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_33, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_13));
#line 10984 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_33, 2) = ((MR_Box) (mercury__digraph__TypeInfo_31_31));
#line 10986 "digraph.c"
        }
#line 10988 "digraph.c"
        mercury__digraph__func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_33, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10990 "digraph.c"
        {
#line 10992 "digraph.c"
          mercury__digraph__conv6_V_9_62 = mercury__digraph__func_5(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_33), ((MR_Box) (mercury__digraph__Y_7)));
        }
#line 10995 "digraph.c"
        mercury__digraph__V_9_62 = ((MR_Integer) mercury__digraph__conv6_V_9_62);
#line 170 "sparse_bitset.opt"
        {
#line 170 "sparse_bitset.opt"
          mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__Set0_6_60, mercury__digraph__V_9_62, &mercury__digraph__Set_5_63);
        }
#line 171 "sparse_bitset.opt"
        mercury__digraph__SuccXs_12 = (MR_Word) mercury__digraph__Set_5_63;
#line 11004 "digraph.c"
        mercury__digraph__TypeCtorInfo_34_34 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 11006 "digraph.c"
        mercury__digraph__TypeCtorInfo_35_35 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 11008 "digraph.c"
        {
#line 11010 "digraph.c"
          mercury__digraph__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11012 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_36_36, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_35_35));
#line 11014 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_36_36, 1) = ((MR_Box) (mercury__digraph__TypeInfo_31_31));
#line 11016 "digraph.c"
        }
#line 75 "map.opt"
        {
#line 75 "map.opt"
          mercury__map__det_insert_4_p_0(mercury__digraph__TypeCtorInfo_34_34, mercury__digraph__TypeInfo_36_36, ((MR_Box) (mercury__digraph__XI_6)), ((MR_Box) (mercury__digraph__SuccXs_12)), mercury__digraph__Map0_5, &mercury__digraph__Map_8);
        }
#line 385 "digraph.m"
      }
#line 384 "digraph.m"
    return mercury__digraph__Map_8;
#line 384 "digraph.m"
  }
#line 374 "digraph.m"
}

#line 329 "digraph.m"
void MR_CALL 
mercury__digraph__traverse_5_p_1(
#line 329 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_14,
#line 329 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_A_15,
#line 329 "digraph.m"
  MR_Word mercury__digraph__G_6,
#line 329 "digraph.m"
  MR_Word mercury__digraph__ProcessVertex_7,
#line 329 "digraph.m"
  MR_Word mercury__digraph__ProcessEdge_8,
#line 329 "digraph.m"
  MR_Box mercury__digraph__STATE_VARIABLE_Acc_0_11,
#line 329 "digraph.m"
  MR_Box * mercury__digraph__STATE_VARIABLE_Acc_12)
#line 329 "digraph.m"
{
#line 1098 "digraph.m"
  {
#line 1098 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 1098 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_10_22 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 1098 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_11_23;
#line 1098 "digraph.m"
    MR_Word mercury__digraph__Keys_10;
#line 1098 "digraph.m"
    MR_Word mercury__digraph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_6, (MR_Integer) 1)));
#line 1098 "digraph.m"
    MR_Word mercury__digraph__Reverse_4_26;
#line 1098 "digraph.m"
    MR_Word mercury__digraph__V_5_31;
#line 675 "digraph.m"
    MR_Integer mercury__digraph__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_6, (MR_Integer) 0)));
#line 675 "digraph.m"
    MR_Word mercury__digraph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_6, (MR_Integer) 2)));
#line 675 "digraph.m"
    MR_Word mercury__digraph__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_6, (MR_Integer) 3)));
#line 56 "bimap.opt"
    MR_Word mercury__digraph__V_3_25;
#line 70 "tree234.opt"
    MR_Word mercury__digraph__conv0_Keys_10;

#line 11078 "digraph.c"
    {
#line 11080 "digraph.c"
      mercury__digraph__TypeInfo_11_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11082 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_23, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_22));
#line 11084 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_14));
#line 11086 "digraph.c"
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
#line 1100 "digraph.m"
    {
#line 1100 "digraph.m"
      mercury__digraph__traverse_2_6_p_1(mercury__digraph__TypeInfo_for_T_14, mercury__digraph__TypeInfo_for_A_15, mercury__digraph__Keys_10, mercury__digraph__G_6, mercury__digraph__ProcessVertex_7, mercury__digraph__ProcessEdge_8, mercury__digraph__STATE_VARIABLE_Acc_0_11, mercury__digraph__STATE_VARIABLE_Acc_12);
#line 1100 "digraph.m"
      return;
    }
#line 1098 "digraph.m"
  }
#line 329 "digraph.m"
}

#line 327 "digraph.m"
void MR_CALL 
mercury__digraph__traverse_5_p_0(
#line 327 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_14,
#line 327 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_A_15,
#line 327 "digraph.m"
  MR_Word mercury__digraph__G_6,
#line 327 "digraph.m"
  MR_Word mercury__digraph__ProcessVertex_7,
#line 327 "digraph.m"
  MR_Word mercury__digraph__ProcessEdge_8,
#line 327 "digraph.m"
  MR_Box mercury__digraph__STATE_VARIABLE_Acc_0_11,
#line 327 "digraph.m"
  MR_Box * mercury__digraph__STATE_VARIABLE_Acc_12)
#line 327 "digraph.m"
{
#line 1098 "digraph.m"
  {
#line 1098 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 1098 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_10_22 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 1098 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_11_23;
#line 1098 "digraph.m"
    MR_Word mercury__digraph__Keys_10;
#line 1098 "digraph.m"
    MR_Word mercury__digraph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_6, (MR_Integer) 1)));
#line 1098 "digraph.m"
    MR_Word mercury__digraph__Reverse_4_26;
#line 1098 "digraph.m"
    MR_Word mercury__digraph__V_5_31;
#line 675 "digraph.m"
    MR_Integer mercury__digraph__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_6, (MR_Integer) 0)));
#line 675 "digraph.m"
    MR_Word mercury__digraph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_6, (MR_Integer) 2)));
#line 675 "digraph.m"
    MR_Word mercury__digraph__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_6, (MR_Integer) 3)));
#line 56 "bimap.opt"
    MR_Word mercury__digraph__V_3_25;
#line 70 "tree234.opt"
    MR_Word mercury__digraph__conv0_Keys_10;

#line 11159 "digraph.c"
    {
#line 11161 "digraph.c"
      mercury__digraph__TypeInfo_11_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11163 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_23, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_22));
#line 11165 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_14));
#line 11167 "digraph.c"
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
#line 1100 "digraph.m"
    {
#line 1100 "digraph.m"
      mercury__digraph__traverse_2_6_p_0(mercury__digraph__TypeInfo_for_T_14, mercury__digraph__TypeInfo_for_A_15, mercury__digraph__Keys_10, mercury__digraph__G_6, mercury__digraph__ProcessVertex_7, mercury__digraph__ProcessEdge_8, mercury__digraph__STATE_VARIABLE_Acc_0_11, mercury__digraph__STATE_VARIABLE_Acc_12);
#line 1100 "digraph.m"
      return;
    }
#line 1098 "digraph.m"
  }
#line 327 "digraph.m"
}

#line 319 "digraph.m"
void MR_CALL 
mercury__digraph__rtc_2_p_0(
#line 319 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_16,
#line 319 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 319 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Rtc_13)
#line 319 "digraph.m"
{
#line 1041 "digraph.m"
  {
#line 1041 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 1041 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_7_25;
#line 1041 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_8_26;
#line 1041 "digraph.m"
    MR_Word mercury__digraph__Dfs_5;
#line 1041 "digraph.m"
    MR_Word mercury__digraph__Vis_6;
#line 1041 "digraph.m"
    MR_Integer mercury__digraph__NextKey_7;
#line 1041 "digraph.m"
    MR_Word mercury__digraph__VMap_8;
#line 1041 "digraph.m"
    MR_Word mercury__digraph__FwdMap_11;
#line 1041 "digraph.m"
    MR_Word mercury__digraph__BwdMap_12;
#line 1041 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_Rtc_14_14;
#line 1041 "digraph.m"
    MR_Word mercury__digraph__DfsRev_24;
#line 1041 "digraph.m"
    MR_Word mercury__digraph__V_2_28;
#line 631 "digraph.m"
    MR_Word mercury__digraph__conv0_Dfs_5;
#line 1058 "digraph.m"
    MR_Word mercury__digraph__V_9_9;
#line 1058 "digraph.m"
    MR_Word mercury__digraph__V_10_10;

#line 630 "digraph.m"
    {
#line 630 "digraph.m"
      mercury__digraph__dfsrev_2_p_0(mercury__digraph__TypeInfo_for_T_16, mercury__digraph__G_3, &mercury__digraph__DfsRev_24);
    }
#line 11243 "digraph.c"
    mercury__digraph__TypeCtorInfo_7_25 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 11245 "digraph.c"
    {
#line 11247 "digraph.c"
      mercury__digraph__TypeInfo_8_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11249 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_26, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_25));
#line 11251 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_26, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_16));
#line 11253 "digraph.c"
    }
#line 631 "digraph.m"
    {
#line 631 "digraph.m"
      mercury__list__reverse_2_p_0(mercury__digraph__TypeInfo_8_26, (MR_Word) mercury__digraph__DfsRev_24, &mercury__digraph__conv0_Dfs_5);
    }
#line 631 "digraph.m"
    mercury__digraph__Dfs_5 = (MR_Word) mercury__digraph__conv0_Dfs_5;
#line 114 "sparse_bitset.opt"
    mercury__digraph__V_2_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 113 "sparse_bitset.opt"
    mercury__digraph__Vis_6 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1058 "digraph.m"
    mercury__digraph__NextKey_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 1058 "digraph.m"
    mercury__digraph__VMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
#line 1058 "digraph.m"
    mercury__digraph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 1058 "digraph.m"
    mercury__digraph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
#line 48 "tree234.opt"
    mercury__digraph__FwdMap_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 48 "tree234.opt"
    mercury__digraph__BwdMap_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1061 "digraph.m"
    {
#line 1061 "digraph.m"
      mercury__digraph__STATE_VARIABLE_Rtc_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1061 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_Rtc_14_14, 0) = ((MR_Box) (mercury__digraph__NextKey_7));
#line 1061 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_Rtc_14_14, 1) = ((MR_Box) (mercury__digraph__VMap_8));
#line 1061 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_Rtc_14_14, 2) = ((MR_Box) (mercury__digraph__FwdMap_11));
#line 1061 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_Rtc_14_14, 3) = ((MR_Box) (mercury__digraph__BwdMap_12));
#line 1061 "digraph.m"
    }
#line 1063 "digraph.m"
    {
#line 1063 "digraph.m"
      mercury__digraph__rtc_2_5_p_0(mercury__digraph__TypeInfo_for_T_16, mercury__digraph__Dfs_5, mercury__digraph__G_3, mercury__digraph__Vis_6, mercury__digraph__STATE_VARIABLE_Rtc_14_14, mercury__digraph__STATE_VARIABLE_Rtc_13);
#line 1063 "digraph.m"
      return;
    }
#line 1041 "digraph.m"
  }
#line 319 "digraph.m"
}

#line 318 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__rtc_1_f_0(
#line 318 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 318 "digraph.m"
  MR_Word mercury__digraph__G_3)
#line 318 "digraph.m"
{
#line 1039 "digraph.m"
  {
#line 1039 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 1039 "digraph.m"
    MR_Word mercury__digraph__Rtc_4;

#line 1039 "digraph.m"
    {
#line 1039 "digraph.m"
      mercury__digraph__rtc_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__Rtc_4);
    }
#line 1039 "digraph.m"
    return mercury__digraph__Rtc_4;
#line 1039 "digraph.m"
  }
#line 318 "digraph.m"
}

#line 313 "digraph.m"
void MR_CALL 
mercury__digraph__tc_2_p_0(
#line 313 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_9,
#line 313 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 313 "digraph.m"
  MR_Word * mercury__digraph__Tc_4)
#line 313 "digraph.m"
{
#line 999 "digraph.m"
  {
#line 999 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 999 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_10_16;
#line 999 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_11_17;
#line 999 "digraph.m"
    MR_Word mercury__digraph__Rtc_5;
#line 999 "digraph.m"
    MR_Word mercury__digraph__Keys_6;
#line 999 "digraph.m"
    MR_Word mercury__digraph__Fakes_7;
#line 999 "digraph.m"
    MR_Word mercury__digraph__V_8_8;
#line 999 "digraph.m"
    MR_Word mercury__digraph__V_12_12;
#line 999 "digraph.m"
    MR_Word mercury__digraph__Reverse_4_20;
#line 999 "digraph.m"
    MR_Word mercury__digraph__V_5_25;
#line 675 "digraph.m"
    MR_Integer mercury__digraph__V_13_13;
#line 675 "digraph.m"
    MR_Word mercury__digraph__V_14_14;
#line 675 "digraph.m"
    MR_Word mercury__digraph__V_15_15;
#line 56 "bimap.opt"
    MR_Word mercury__digraph__V_3_19;
#line 70 "tree234.opt"
    MR_Word mercury__digraph__conv0_Keys_6;

#line 1011 "digraph.m"
    {
#line 1011 "digraph.m"
      mercury__digraph__rtc_2_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__G_3, &mercury__digraph__Rtc_5);
    }
#line 675 "digraph.m"
    mercury__digraph__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 675 "digraph.m"
    mercury__digraph__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
#line 675 "digraph.m"
    mercury__digraph__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 675 "digraph.m"
    mercury__digraph__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
#line 11389 "digraph.c"
    mercury__digraph__TypeCtorInfo_10_16 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 11391 "digraph.c"
    {
#line 11393 "digraph.c"
      mercury__digraph__TypeInfo_11_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11395 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_16));
#line 11397 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_9));
#line 11399 "digraph.c"
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
#line 1015 "digraph.m"
    mercury__digraph__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1015 "digraph.m"
    {
#line 1015 "digraph.m"
      mercury__digraph__detect_fake_reflexives_5_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__G_3, mercury__digraph__Rtc_5, mercury__digraph__Keys_6, mercury__digraph__V_8_8, &mercury__digraph__Fakes_7);
    }
#line 1018 "digraph.m"
    {
#line 1018 "digraph.m"
      mercury__digraph__delete_assoc_list_3_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__Fakes_7, mercury__digraph__Rtc_5, mercury__digraph__Tc_4);
#line 1018 "digraph.m"
      return;
    }
#line 999 "digraph.m"
  }
#line 313 "digraph.m"
}

#line 312 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__tc_1_f_0(
#line 312 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 312 "digraph.m"
  MR_Word mercury__digraph__G_3)
#line 312 "digraph.m"
{
#line 997 "digraph.m"
  {
#line 997 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 997 "digraph.m"
    MR_Word mercury__digraph__Tc_4;

#line 997 "digraph.m"
    {
#line 997 "digraph.m"
      mercury__digraph__tc_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__Tc_4);
    }
#line 997 "digraph.m"
    return mercury__digraph__Tc_4;
#line 997 "digraph.m"
  }
#line 312 "digraph.m"
}

#line 308 "digraph.m"
void MR_CALL 
mercury__digraph__sc_2_p_0(
#line 308 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_7,
#line 308 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 308 "digraph.m"
  MR_Word * mercury__digraph__Sc_4)
#line 308 "digraph.m"
{
#line 989 "digraph.m"
  {
#line 989 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 989 "digraph.m"
    MR_Word mercury__digraph__GInv_5;
#line 989 "digraph.m"
    MR_Word mercury__digraph__GInvList_6;
#line 989 "digraph.m"
    MR_Integer mercury__digraph__Next_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 989 "digraph.m"
    MR_Word mercury__digraph__VMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
#line 989 "digraph.m"
    MR_Word mercury__digraph__Fwd_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 989 "digraph.m"
    MR_Word mercury__digraph__Bwd_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));

#line 684 "digraph.m"
    {
#line 684 "digraph.m"
      mercury__digraph__GInv_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 684 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_5, 0) = ((MR_Box) (mercury__digraph__Next_10));
#line 684 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_5, 1) = ((MR_Box) (mercury__digraph__VMap_11));
#line 684 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_5, 2) = ((MR_Box) (mercury__digraph__Bwd_13));
#line 684 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_5, 3) = ((MR_Box) (mercury__digraph__Fwd_12));
#line 684 "digraph.m"
    }
#line 991 "digraph.m"
    {
#line 991 "digraph.m"
      mercury__digraph__to_key_assoc_list_2_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__GInv_5, &mercury__digraph__GInvList_6);
    }
#line 992 "digraph.m"
    {
#line 992 "digraph.m"
      mercury__digraph__add_assoc_list_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__GInvList_6, mercury__digraph__G_3, mercury__digraph__Sc_4);
#line 992 "digraph.m"
      return;
    }
#line 989 "digraph.m"
  }
#line 308 "digraph.m"
}

#line 307 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__sc_1_f_0(
#line 307 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 307 "digraph.m"
  MR_Word mercury__digraph__G_3)
#line 307 "digraph.m"
{
#line 989 "digraph.m"
  {
#line 989 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 989 "digraph.m"
    MR_Word mercury__digraph__Sc_4;
#line 989 "digraph.m"
    MR_Word mercury__digraph__GInv_8;
#line 989 "digraph.m"
    MR_Word mercury__digraph__GInvList_9;
#line 989 "digraph.m"
    MR_Integer mercury__digraph__Next_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 989 "digraph.m"
    MR_Word mercury__digraph__VMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
#line 989 "digraph.m"
    MR_Word mercury__digraph__Fwd_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 989 "digraph.m"
    MR_Word mercury__digraph__Bwd_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));

#line 684 "digraph.m"
    {
#line 684 "digraph.m"
      mercury__digraph__GInv_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 684 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_8, 0) = ((MR_Box) (mercury__digraph__Next_12));
#line 684 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_8, 1) = ((MR_Box) (mercury__digraph__VMap_13));
#line 684 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_8, 2) = ((MR_Box) (mercury__digraph__Bwd_15));
#line 684 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_8, 3) = ((MR_Box) (mercury__digraph__Fwd_14));
#line 684 "digraph.m"
    }
#line 991 "digraph.m"
    {
#line 991 "digraph.m"
      mercury__digraph__to_key_assoc_list_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__GInv_8, &mercury__digraph__GInvList_9);
    }
#line 992 "digraph.m"
    {
#line 992 "digraph.m"
      mercury__digraph__add_assoc_list_3_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__GInvList_9, mercury__digraph__G_3, &mercury__digraph__Sc_4);
    }
#line 989 "digraph.m"
    return mercury__digraph__Sc_4;
#line 989 "digraph.m"
  }
#line 307 "digraph.m"
}

#line 302 "digraph.m"
void MR_CALL 
mercury__digraph__atsort_2_p_0(
#line 302 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_10,
#line 302 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 302 "digraph.m"
  MR_Word * mercury__digraph__ATsort_4)
#line 302 "digraph.m"
{
#line 957 "digraph.m"
  {
#line 957 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 957 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_13_13;
#line 957 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_14_14;
#line 957 "digraph.m"
    MR_Word mercury__digraph__DfsRev_5;
#line 957 "digraph.m"
    MR_Word mercury__digraph__GInv_6;
#line 957 "digraph.m"
    MR_Word mercury__digraph__Vis_7;
#line 957 "digraph.m"
    MR_Word mercury__digraph__ATsort0_8;
#line 957 "digraph.m"
    MR_Word mercury__digraph__V_9_9;
#line 957 "digraph.m"
    MR_Integer mercury__digraph__Next_17;
#line 957 "digraph.m"
    MR_Word mercury__digraph__VMap_18;
#line 957 "digraph.m"
    MR_Word mercury__digraph__Fwd_19;
#line 957 "digraph.m"
    MR_Word mercury__digraph__Bwd_20;
#line 957 "digraph.m"
    MR_Word mercury__digraph__V_2_22;
#line 967 "digraph.m"
    MR_Word mercury__digraph__conv0_ATsort_4;

#line 963 "digraph.m"
    {
#line 963 "digraph.m"
      mercury__digraph__dfsrev_2_p_0(mercury__digraph__TypeInfo_for_T_10, mercury__digraph__G_3, &mercury__digraph__DfsRev_5);
    }
#line 683 "digraph.m"
    mercury__digraph__Next_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 683 "digraph.m"
    mercury__digraph__VMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
#line 683 "digraph.m"
    mercury__digraph__Fwd_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 683 "digraph.m"
    mercury__digraph__Bwd_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
#line 684 "digraph.m"
    {
#line 684 "digraph.m"
      mercury__digraph__GInv_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 684 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_6, 0) = ((MR_Box) (mercury__digraph__Next_17));
#line 684 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_6, 1) = ((MR_Box) (mercury__digraph__VMap_18));
#line 684 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_6, 2) = ((MR_Box) (mercury__digraph__Bwd_20));
#line 684 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_6, 3) = ((MR_Box) (mercury__digraph__Fwd_19));
#line 684 "digraph.m"
    }
#line 114 "sparse_bitset.opt"
    mercury__digraph__V_2_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 113 "sparse_bitset.opt"
    mercury__digraph__Vis_7 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 966 "digraph.m"
    mercury__digraph__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 966 "digraph.m"
    {
#line 966 "digraph.m"
      mercury__digraph__atsort_2_5_p_0(mercury__digraph__TypeInfo_for_T_10, mercury__digraph__DfsRev_5, mercury__digraph__GInv_6, mercury__digraph__Vis_7, mercury__digraph__V_9_9, &mercury__digraph__ATsort0_8);
    }
#line 11659 "digraph.c"
    mercury__digraph__TypeCtorInfo_13_13 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 11661 "digraph.c"
    {
#line 11663 "digraph.c"
      mercury__digraph__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11665 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_14, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_13_13));
#line 11667 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_14, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_10));
#line 11669 "digraph.c"
    }
#line 967 "digraph.m"
    {
#line 967 "digraph.m"
      mercury__list__reverse_2_p_0(mercury__digraph__TypeInfo_14_14, (MR_Word) mercury__digraph__ATsort0_8, &mercury__digraph__conv0_ATsort_4);
    }
#line 967 "digraph.m"
    *mercury__digraph__ATsort_4 = (MR_Word) mercury__digraph__conv0_ATsort_4;
#line 957 "digraph.m"
  }
#line 302 "digraph.m"
}

#line 301 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__atsort_1_f_0(
#line 301 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 301 "digraph.m"
  MR_Word mercury__digraph__G_3)
#line 301 "digraph.m"
{
#line 955 "digraph.m"
  {
#line 955 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 955 "digraph.m"
    MR_Word mercury__digraph__ATsort_4;

#line 955 "digraph.m"
    {
#line 955 "digraph.m"
      mercury__digraph__atsort_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__ATsort_4);
    }
#line 955 "digraph.m"
    return mercury__digraph__ATsort_4;
#line 955 "digraph.m"
  }
#line 301 "digraph.m"
}

#line 296 "digraph.m"
MR_bool MR_CALL 
mercury__digraph__tsort_2_p_0(
#line 296 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_8,
#line 296 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 296 "digraph.m"
  MR_Word * mercury__digraph__Tsort_4)
#line 296 "digraph.m"
{
#line 936 "digraph.m"
  {
#line 936 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 936 "digraph.m"
    MR_Word mercury__digraph__Tsort0_5;
#line 936 "digraph.m"
    MR_Word mercury__digraph__V_6_6;
#line 936 "digraph.m"
    MR_Word mercury__digraph__V_2_13;

#line 937 "digraph.m"
    {
#line 937 "digraph.m"
      mercury__digraph__dfsrev_2_p_0(mercury__digraph__TypeInfo_for_T_8, mercury__digraph__G_3, &mercury__digraph__Tsort0_5);
    }
#line 114 "sparse_bitset.opt"
    mercury__digraph__V_2_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 113 "sparse_bitset.opt"
    mercury__digraph__V_6_6 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 938 "digraph.m"
    {
#line 938 "digraph.m"
      mercury__digraph__succeeded = mercury__digraph__check_tsort_3_p_0(mercury__digraph__TypeInfo_for_T_8, mercury__digraph__G_3, mercury__digraph__V_6_6, mercury__digraph__Tsort0_5);
    }
#line 936 "digraph.m"
    if (mercury__digraph__succeeded)
#line 936 "digraph.m"
      {
#line 939 "digraph.m"
        {
#line 939 "digraph.m"
          *mercury__digraph__Tsort_4 = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_53_95_95_91_49_44_32_52_44_32_53_44_32_54_93_95_48_2_f_in__list_0(mercury__digraph__TypeInfo_for_T_8, mercury__digraph__G_3, mercury__digraph__Tsort0_5);
        }
#line 939 "digraph.m"
        mercury__digraph__succeeded = MR_TRUE;
#line 936 "digraph.m"
      }
#line 936 "digraph.m"
    return mercury__digraph__succeeded;
#line 936 "digraph.m"
  }
#line 296 "digraph.m"
}

#line 290 "digraph.m"
void MR_CALL 
mercury__digraph__reduced_3_p_0(
#line 290 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_17,
#line 290 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 290 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_R_10,
#line 290 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_CliqMap_11)
#line 290 "digraph.m"
{
#line 888 "digraph.m"
  {
#line 888 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 888 "digraph.m"
    MR_Word mercury__digraph__Cliques_7;
#line 888 "digraph.m"
    MR_Word mercury__digraph__CliqList_8;
#line 888 "digraph.m"
    MR_Word mercury__digraph__AL_9;
#line 888 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_R_12_12;
#line 888 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_CliqMap_13_13;
#line 888 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_R_15_15;
#line 888 "digraph.m"
    MR_Word mercury__digraph__VMap_27;
#line 888 "digraph.m"
    MR_Word mercury__digraph__FwdMap_28;
#line 888 "digraph.m"
    MR_Word mercury__digraph__BwdMap_29;
#line 888 "digraph.m"
    MR_Word mercury__digraph__Forward_3_37;
#line 888 "digraph.m"
    MR_Word mercury__digraph__Reverse_4_38;

#line 889 "digraph.m"
    {
#line 889 "digraph.m"
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
#line 406 "digraph.m"
    mercury__digraph__STATE_VARIABLE_R_12_12 = (MR_Word) &mercury__digraph_scalar_common_2[2];
#line 48 "tree234.opt"
    mercury__digraph__STATE_VARIABLE_CliqMap_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 893 "digraph.m"
    {
#line 893 "digraph.m"
      mercury__digraph__make_clique_map_6_p_0(mercury__digraph__TypeInfo_for_T_17, mercury__digraph__G_4, mercury__digraph__CliqList_8, mercury__digraph__STATE_VARIABLE_CliqMap_13_13, mercury__digraph__STATE_VARIABLE_CliqMap_11, mercury__digraph__STATE_VARIABLE_R_12_12, &mercury__digraph__STATE_VARIABLE_R_15_15);
    }
#line 894 "digraph.m"
    {
#line 894 "digraph.m"
      mercury__digraph__to_key_assoc_list_2_p_0(mercury__digraph__TypeInfo_for_T_17, mercury__digraph__G_4, &mercury__digraph__AL_9);
    }
#line 895 "digraph.m"
    {
#line 895 "digraph.m"
      mercury__digraph__make_reduced_graph_4_p_0(mercury__digraph__TypeInfo_for_T_17, *mercury__digraph__STATE_VARIABLE_CliqMap_11, mercury__digraph__AL_9, mercury__digraph__STATE_VARIABLE_R_15_15, mercury__digraph__STATE_VARIABLE_R_10);
#line 895 "digraph.m"
      return;
    }
#line 888 "digraph.m"
  }
#line 290 "digraph.m"
}

#line 285 "digraph.m"
void MR_CALL 
mercury__digraph__reduced_2_p_0(
#line 285 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_6,
#line 285 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 285 "digraph.m"
  MR_Word * mercury__digraph__R_4)
#line 285 "digraph.m"
{
#line 886 "digraph.m"
  {
#line 886 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 886 "digraph.m"
    MR_Word mercury__digraph__V_5_5;

#line 886 "digraph.m"
    {
#line 886 "digraph.m"
      mercury__digraph__reduced_3_p_0(mercury__digraph__TypeInfo_for_T_6, mercury__digraph__G_3, mercury__digraph__R_4, &mercury__digraph__V_5_5);
    }
#line 886 "digraph.m"
  }
#line 285 "digraph.m"
}

#line 284 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__reduced_1_f_0(
#line 284 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 284 "digraph.m"
  MR_Word mercury__digraph__G_3)
#line 284 "digraph.m"
{
#line 886 "digraph.m"
  {
#line 886 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 886 "digraph.m"
    MR_Word mercury__digraph__R_4;
#line 886 "digraph.m"
    MR_Word mercury__digraph__V_8_8;

#line 886 "digraph.m"
    {
#line 886 "digraph.m"
      mercury__digraph__reduced_3_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__R_4, &mercury__digraph__V_8_8);
    }
#line 886 "digraph.m"
    return mercury__digraph__R_4;
#line 886 "digraph.m"
  }
#line 284 "digraph.m"
}

#line 279 "digraph.m"
void MR_CALL 
mercury__digraph__cliques_2_p_0(
#line 279 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_9,
#line 279 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 279 "digraph.m"
  MR_Word * mercury__digraph__Cliques_4)
#line 279 "digraph.m"
{
#line 844 "digraph.m"
  {
#line 844 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 844 "digraph.m"
    MR_Word mercury__digraph__DfsRev_5;
#line 844 "digraph.m"
    MR_Word mercury__digraph__GInv_6;
#line 844 "digraph.m"
    MR_Word mercury__digraph__Cliques0_7;
#line 844 "digraph.m"
    MR_Word mercury__digraph__Visit_8;
#line 844 "digraph.m"
    MR_Integer mercury__digraph__Next_16;
#line 844 "digraph.m"
    MR_Word mercury__digraph__VMap_17;
#line 844 "digraph.m"
    MR_Word mercury__digraph__Fwd_18;
#line 844 "digraph.m"
    MR_Word mercury__digraph__Bwd_19;
#line 844 "digraph.m"
    MR_Word mercury__digraph__V_2_21;
#line 844 "digraph.m"
    MR_Word mercury__digraph__V_2_24;

#line 856 "digraph.m"
    {
#line 856 "digraph.m"
      mercury__digraph__dfsrev_2_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__G_3, &mercury__digraph__DfsRev_5);
    }
#line 683 "digraph.m"
    mercury__digraph__Next_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 683 "digraph.m"
    mercury__digraph__VMap_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
#line 683 "digraph.m"
    mercury__digraph__Fwd_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 683 "digraph.m"
    mercury__digraph__Bwd_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
#line 684 "digraph.m"
    {
#line 684 "digraph.m"
      mercury__digraph__GInv_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 684 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_6, 0) = ((MR_Box) (mercury__digraph__Next_16));
#line 684 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_6, 1) = ((MR_Box) (mercury__digraph__VMap_17));
#line 684 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_6, 2) = ((MR_Box) (mercury__digraph__Bwd_19));
#line 684 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__GInv_6, 3) = ((MR_Box) (mercury__digraph__Fwd_18));
#line 684 "digraph.m"
    }
#line 23 "set_ordlist.opt"
    mercury__digraph__V_2_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 22 "set_ordlist.opt"
    mercury__digraph__Cliques0_7 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 114 "sparse_bitset.opt"
    mercury__digraph__V_2_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 113 "sparse_bitset.opt"
    mercury__digraph__Visit_8 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "digraph.m"
    {
#line 860 "digraph.m"
      mercury__digraph__cliques_2_5_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__DfsRev_5, mercury__digraph__GInv_6, mercury__digraph__Visit_8, mercury__digraph__Cliques0_7, mercury__digraph__Cliques_4);
#line 860 "digraph.m"
      return;
    }
#line 844 "digraph.m"
  }
#line 279 "digraph.m"
}

#line 278 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__cliques_1_f_0(
#line 278 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 278 "digraph.m"
  MR_Word mercury__digraph__G_3)
#line 278 "digraph.m"
{
#line 842 "digraph.m"
  {
#line 842 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 842 "digraph.m"
    MR_Word mercury__digraph__Cliques_4;

#line 842 "digraph.m"
    {
#line 842 "digraph.m"
      mercury__digraph__cliques_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__Cliques_4);
    }
#line 842 "digraph.m"
    return mercury__digraph__Cliques_4;
#line 842 "digraph.m"
  }
#line 278 "digraph.m"
}

#line 272 "digraph.m"
void MR_CALL 
mercury__digraph__components_2_p_0(
#line 272 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_10,
#line 272 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 272 "digraph.m"
  MR_Word * mercury__digraph__Components_4)
#line 272 "digraph.m"
{
#line 802 "digraph.m"
  {
#line 802 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 802 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_12_12;
#line 802 "digraph.m"
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_13;
#line 802 "digraph.m"
    MR_Word mercury__digraph__TypeClassInfo_for_enum_14;
#line 802 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_10_23 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 802 "digraph.m"
    MR_Word mercury__digraph__Keys_5;
#line 802 "digraph.m"
    MR_Word mercury__digraph__KeySet_6;
#line 802 "digraph.m"
    MR_Word mercury__digraph__V_9_9;
#line 802 "digraph.m"
    MR_Word mercury__digraph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
#line 802 "digraph.m"
    MR_Word mercury__digraph__Reverse_4_27;
#line 802 "digraph.m"
    MR_Word mercury__digraph__V_5_32;
#line 802 "digraph.m"
    MR_Word mercury__digraph__V_4_37;
#line 802 "digraph.m"
    MR_Word mercury__digraph__V_5_38;
#line 802 "digraph.m"
    MR_Word mercury__digraph__V_2_41;
#line 675 "digraph.m"
    MR_Integer mercury__digraph__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 675 "digraph.m"
    MR_Word mercury__digraph__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 675 "digraph.m"
    MR_Word mercury__digraph__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
#line 56 "bimap.opt"
    MR_Word mercury__digraph__V_3_26;
#line 70 "tree234.opt"
    MR_Word mercury__digraph__conv0_Keys_5;

#line 12071 "digraph.c"
    {
#line 12073 "digraph.c"
      mercury__digraph__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12075 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_12_12, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_23));
#line 12077 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_12_12, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_10));
#line 12079 "digraph.c"
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
#line 12094 "digraph.c"
    mercury__digraph__BaseTypeClassInfo_for_enum_13 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 12096 "digraph.c"
    {
#line 12098 "digraph.c"
      mercury__digraph__TypeClassInfo_for_enum_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12100 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_14, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_13));
#line 12102 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_14, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_10));
#line 12104 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_14, 2) = ((MR_Box) (mercury__digraph__TypeInfo_12_12));
#line 12106 "digraph.c"
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
#line 805 "digraph.m"
    {
#line 805 "digraph.m"
      mercury__digraph__components_2_4_p_0(mercury__digraph__TypeInfo_for_T_10, mercury__digraph__G_3, mercury__digraph__KeySet_6, mercury__digraph__V_9_9, mercury__digraph__Components_4);
#line 805 "digraph.m"
      return;
    }
#line 802 "digraph.m"
  }
#line 272 "digraph.m"
}

#line 271 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__components_1_f_0(
#line 271 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 271 "digraph.m"
  MR_Word mercury__digraph__G_3)
#line 271 "digraph.m"
{
#line 800 "digraph.m"
  {
#line 800 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 800 "digraph.m"
    MR_Word mercury__digraph__Components_4;

#line 800 "digraph.m"
    {
#line 800 "digraph.m"
      mercury__digraph__components_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__Components_4);
    }
#line 800 "digraph.m"
    return mercury__digraph__Components_4;
#line 800 "digraph.m"
  }
#line 271 "digraph.m"
}

#line 266 "digraph.m"
MR_bool MR_CALL 
mercury__digraph__is_dag_1_p_0(
#line 266 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_8,
#line 266 "digraph.m"
  MR_Word mercury__digraph__G_2)
#line 266 "digraph.m"
{
#line 762 "digraph.m"
  {
#line 762 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 762 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_10_22 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 762 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_11_23;
#line 762 "digraph.m"
    MR_Word mercury__digraph__Keys_3;
#line 762 "digraph.m"
    MR_Word mercury__digraph__V_6_6;
#line 762 "digraph.m"
    MR_Word mercury__digraph__V_7_7;
#line 762 "digraph.m"
    MR_Word mercury__digraph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_2, (MR_Integer) 1)));
#line 762 "digraph.m"
    MR_Word mercury__digraph__Reverse_4_26;
#line 762 "digraph.m"
    MR_Word mercury__digraph__V_5_31;
#line 762 "digraph.m"
    MR_Word mercury__digraph__V_2_33;
#line 675 "digraph.m"
    MR_Integer mercury__digraph__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_2, (MR_Integer) 0)));
#line 675 "digraph.m"
    MR_Word mercury__digraph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_2, (MR_Integer) 2)));
#line 675 "digraph.m"
    MR_Word mercury__digraph__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_2, (MR_Integer) 3)));
#line 56 "bimap.opt"
    MR_Word mercury__digraph__V_3_25;
#line 70 "tree234.opt"
    MR_Word mercury__digraph__conv0_Keys_3;
#line 780 "digraph.m"
    MR_Word mercury__digraph__V_4_4;

#line 12205 "digraph.c"
    {
#line 12207 "digraph.c"
      mercury__digraph__TypeInfo_11_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12209 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_23, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_22));
#line 12211 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_23, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_8));
#line 12213 "digraph.c"
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
#line 780 "digraph.m"
    mercury__digraph__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 114 "sparse_bitset.opt"
    mercury__digraph__V_2_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 113 "sparse_bitset.opt"
    mercury__digraph__V_6_6 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 780 "digraph.m"
    {
#line 780 "digraph.m"
      mercury__digraph__succeeded = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_54_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_44_32_57_93_95_48_4_p_in__list_0(mercury__digraph__TypeInfo_for_T_8, mercury__digraph__G_2, mercury__digraph__V_7_7, mercury__digraph__Keys_3, mercury__digraph__V_6_6, &mercury__digraph__V_4_4);
    }
#line 762 "digraph.m"
    return mercury__digraph__succeeded;
#line 762 "digraph.m"
  }
#line 266 "digraph.m"
}

#line 261 "digraph.m"
void MR_CALL 
mercury__digraph__compose_3_p_0(
#line 261 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_38,
#line 261 "digraph.m"
  MR_Word mercury__digraph__G1_4,
#line 261 "digraph.m"
  MR_Word mercury__digraph__G2_5,
#line 261 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Comp_20)
#line 261 "digraph.m"
{
#line 691 "digraph.m"
  {
#line 691 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 691 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_39_39;
#line 691 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_40_40;
#line 691 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_55_55;
#line 691 "digraph.m"
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_56;
#line 691 "digraph.m"
    MR_Word mercury__digraph__TypeClassInfo_for_enum_57;
#line 691 "digraph.m"
    MR_Word mercury__digraph__G1Vs_7;
#line 691 "digraph.m"
    MR_Word mercury__digraph__G2Vs_8;
#line 691 "digraph.m"
    MR_Word mercury__digraph__Matches_9;
#line 691 "digraph.m"
    MR_Word mercury__digraph__AL_10;
#line 691 "digraph.m"
    MR_Word mercury__digraph__Needed1_16;
#line 691 "digraph.m"
    MR_Word mercury__digraph__Needed2_17;
#line 691 "digraph.m"
    MR_Word mercury__digraph__KMap1_18;
#line 691 "digraph.m"
    MR_Word mercury__digraph__KMap2_19;
#line 691 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_Comp_21_21 = (MR_Word) &mercury__digraph_scalar_common_2[1];
#line 691 "digraph.m"
    MR_Word mercury__digraph__V_25_25;
#line 691 "digraph.m"
    MR_Word mercury__digraph__V_27_27;
#line 691 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_Comp_30_30;
#line 691 "digraph.m"
    MR_Word mercury__digraph__V_31_31;
#line 691 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_Comp_33_33;
#line 691 "digraph.m"
    MR_Word mercury__digraph__V_34_34;
#line 691 "digraph.m"
    MR_Word mercury__digraph__VMap_71 = (MR_Word) &mercury__digraph_scalar_common_4[0];
#line 691 "digraph.m"
    MR_Word mercury__digraph__FwdMap_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 691 "digraph.m"
    MR_Word mercury__digraph__BwdMap_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 691 "digraph.m"
    MR_Word mercury__digraph__Forward_3_81 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 691 "digraph.m"
    MR_Word mercury__digraph__Reverse_4_82 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 691 "digraph.m"
    MR_Word mercury__digraph__V_2_94;

#line 695 "digraph.m"
    {
#line 695 "digraph.m"
      mercury__digraph__vertices_2_p_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__G1_4, &mercury__digraph__G1Vs_7);
    }
#line 696 "digraph.m"
    {
#line 696 "digraph.m"
      mercury__digraph__vertices_2_p_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__G2_5, &mercury__digraph__G2Vs_8);
    }
#line 697 "digraph.m"
    {
#line 697 "digraph.m"
      mercury__digraph__Matches_9 = mercury__set__intersect_2_f_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__G1Vs_7, mercury__digraph__G2Vs_8);
    }
#line 12331 "digraph.c"
    mercury__digraph__TypeCtorInfo_39_39 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 12333 "digraph.c"
    {
#line 12335 "digraph.c"
      mercury__digraph__TypeInfo_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12337 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_40_40, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_39_39));
#line 12339 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_40_40, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_38));
#line 12341 "digraph.c"
    }
#line 38 "set_ordlist.opt"
    mercury__digraph__V_25_25 = (MR_Word) mercury__digraph__Matches_9;
#line 700 "digraph.m"
    {
#line 700 "digraph.m"
      mercury__digraph__AL_10 = mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_44_32_49_50_93_95_48_2_f_in__list_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__G1_4, mercury__digraph__G2_5, mercury__digraph__V_25_25);
    }
#line 114 "sparse_bitset.opt"
    mercury__digraph__V_2_94 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 113 "sparse_bitset.opt"
    mercury__digraph__V_27_27 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 711 "digraph.m"
    {
#line 711 "digraph.m"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_54_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_50_44_32_49_51_44_32_49_52_44_32_49_53_93_95_48_6_p_in__list_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__AL_10, mercury__digraph__V_27_27, &mercury__digraph__Needed1_16, mercury__digraph__V_27_27, &mercury__digraph__Needed2_17);
    }
#line 12359 "digraph.c"
    mercury__digraph__TypeCtorInfo_55_55 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 48 "tree234.opt"
    mercury__digraph__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 12363 "digraph.c"
    mercury__digraph__BaseTypeClassInfo_for_enum_56 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 12365 "digraph.c"
    {
#line 12367 "digraph.c"
      mercury__digraph__TypeClassInfo_for_enum_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12369 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_57, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_56));
#line 12371 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_57, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_38));
#line 12373 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_57, 2) = ((MR_Box) (mercury__digraph__TypeInfo_40_40));
#line 12375 "digraph.c"
    }
#line 715 "digraph.m"
    {
#line 715 "digraph.m"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_54_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__G1_4, mercury__digraph__TypeClassInfo_for_enum_57, mercury__digraph__Needed1_16, mercury__digraph__STATE_VARIABLE_Comp_21_21, &mercury__digraph__STATE_VARIABLE_Comp_30_30, mercury__digraph__V_31_31, &mercury__digraph__KMap1_18);
    }
#line 716 "digraph.m"
    {
#line 716 "digraph.m"
      mercury__digraph__V_34_34 = mercury__map__init_0_f_0(mercury__digraph__TypeCtorInfo_55_55, mercury__digraph__TypeInfo_40_40);
    }
#line 716 "digraph.m"
    {
#line 716 "digraph.m"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_54_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_57_44_32_49_48_44_32_49_50_93_95_48_6_p_in__sparse_bitset_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__G2_5, mercury__digraph__TypeClassInfo_for_enum_57, mercury__digraph__Needed2_17, mercury__digraph__STATE_VARIABLE_Comp_30_30, &mercury__digraph__STATE_VARIABLE_Comp_33_33, mercury__digraph__V_34_34, &mercury__digraph__KMap2_19);
    }
#line 719 "digraph.m"
    {
#line 719 "digraph.m"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_4_p_in__list_0(mercury__digraph__TypeInfo_for_T_38, mercury__digraph__KMap1_18, mercury__digraph__KMap2_19, mercury__digraph__AL_10, mercury__digraph__STATE_VARIABLE_Comp_33_33, mercury__digraph__STATE_VARIABLE_Comp_20);
#line 719 "digraph.m"
      return;
    }
#line 691 "digraph.m"
  }
#line 261 "digraph.m"
}

#line 260 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__compose_2_f_0(
#line 260 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_7,
#line 260 "digraph.m"
  MR_Word mercury__digraph__G1_4,
#line 260 "digraph.m"
  MR_Word mercury__digraph__G2_5)
#line 260 "digraph.m"
{
#line 689 "digraph.m"
  {
#line 689 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 689 "digraph.m"
    MR_Word mercury__digraph__Comp_6;

#line 689 "digraph.m"
    {
#line 689 "digraph.m"
      mercury__digraph__compose_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G1_4, mercury__digraph__G2_5, &mercury__digraph__Comp_6);
    }
#line 689 "digraph.m"
    return mercury__digraph__Comp_6;
#line 689 "digraph.m"
  }
#line 260 "digraph.m"
}

#line 254 "digraph.m"
void MR_CALL 
mercury__digraph__inverse_2_p_0(
#line 254 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_9,
#line 254 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 254 "digraph.m"
  MR_Word * mercury__digraph__InvG_4)
#line 254 "digraph.m"
{
#line 682 "digraph.m"
  {
#line 682 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 682 "digraph.m"
    MR_Integer mercury__digraph__Next_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 682 "digraph.m"
    MR_Word mercury__digraph__VMap_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
#line 682 "digraph.m"
    MR_Word mercury__digraph__Fwd_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 682 "digraph.m"
    MR_Word mercury__digraph__Bwd_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));

#line 684 "digraph.m"
    {
#line 684 "digraph.m"
      MR_Word base;
#line 684 "digraph.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 684 "digraph.m"
      *mercury__digraph__InvG_4 = base;
#line 684 "digraph.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__digraph__Next_5));
#line 684 "digraph.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__digraph__VMap_6));
#line 684 "digraph.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__digraph__Bwd_8));
#line 684 "digraph.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__digraph__Fwd_7));
#line 684 "digraph.m"
    }
#line 682 "digraph.m"
  }
#line 254 "digraph.m"
}

#line 253 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__inverse_1_f_0(
#line 253 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 253 "digraph.m"
  MR_Word mercury__digraph__G_3)
#line 253 "digraph.m"
{
#line 682 "digraph.m"
  {
#line 682 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 682 "digraph.m"
    MR_Word mercury__digraph__InvG_4;
#line 682 "digraph.m"
    MR_Integer mercury__digraph__Next_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 682 "digraph.m"
    MR_Word mercury__digraph__VMap_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
#line 682 "digraph.m"
    MR_Word mercury__digraph__Fwd_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 682 "digraph.m"
    MR_Word mercury__digraph__Bwd_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));

#line 684 "digraph.m"
    {
#line 684 "digraph.m"
      mercury__digraph__InvG_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 684 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__InvG_4, 0) = ((MR_Box) (mercury__digraph__Next_8));
#line 684 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__InvG_4, 1) = ((MR_Box) (mercury__digraph__VMap_9));
#line 684 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__InvG_4, 2) = ((MR_Box) (mercury__digraph__Bwd_11));
#line 684 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__InvG_4, 3) = ((MR_Box) (mercury__digraph__Fwd_10));
#line 684 "digraph.m"
    }
#line 682 "digraph.m"
    return mercury__digraph__InvG_4;
#line 682 "digraph.m"
  }
#line 253 "digraph.m"
}

#line 247 "digraph.m"
void MR_CALL 
mercury__digraph__vertices_2_p_0(
#line 247 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_10,
#line 247 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 247 "digraph.m"
  MR_Word * mercury__digraph__Vs_4)
#line 247 "digraph.m"
{
#line 668 "digraph.m"
  {
#line 668 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 668 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_11_11 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 668 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_12_12;
#line 668 "digraph.m"
    MR_Word mercury__digraph__VsList_5;
#line 668 "digraph.m"
    MR_Word mercury__digraph__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
#line 668 "digraph.m"
    MR_Word mercury__digraph__Forward_3_14;
#line 668 "digraph.m"
    MR_Word mercury__digraph__V_5_20;
#line 668 "digraph.m"
    MR_Word mercury__digraph__List_4_25;
#line 669 "digraph.m"
    MR_Integer mercury__digraph__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 669 "digraph.m"
    MR_Word mercury__digraph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 669 "digraph.m"
    MR_Word mercury__digraph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
#line 52 "bimap.opt"
    MR_Word mercury__digraph__V_4_15;

#line 12564 "digraph.c"
    {
#line 12566 "digraph.c"
      mercury__digraph__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12568 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_12_12, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_11_11));
#line 12570 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_12_12, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_10));
#line 12572 "digraph.c"
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
#line 668 "digraph.m"
  }
#line 247 "digraph.m"
}

#line 246 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__vertices_1_f_0(
#line 246 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 246 "digraph.m"
  MR_Word mercury__digraph__G_3)
#line 246 "digraph.m"
{
#line 666 "digraph.m"
  {
#line 666 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 666 "digraph.m"
    MR_Word mercury__digraph__Vs_4;

#line 666 "digraph.m"
    {
#line 666 "digraph.m"
      mercury__digraph__vertices_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__Vs_4);
    }
#line 666 "digraph.m"
    return mercury__digraph__Vs_4;
#line 666 "digraph.m"
  }
#line 246 "digraph.m"
}

#line 238 "digraph.m"
void MR_CALL 
mercury__digraph__dfsrev_5_p_0(
#line 238 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_14,
#line 238 "digraph.m"
  MR_Word mercury__digraph__G_6,
#line 238 "digraph.m"
  MR_Word mercury__digraph__X_7,
#line 238 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Visited_0_10,
#line 238 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Visited_11,
#line 238 "digraph.m"
  MR_Word * mercury__digraph__DfsRev_9)
#line 238 "digraph.m"
{
#line 644 "digraph.m"
  {
#line 644 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 644 "digraph.m"
    MR_Word mercury__digraph__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 645 "digraph.m"
    {
#line 645 "digraph.m"
      mercury__digraph__dfs_2_6_p_0(mercury__digraph__TypeInfo_for_T_14, mercury__digraph__G_6, mercury__digraph__X_7, mercury__digraph__STATE_VARIABLE_Visited_0_10, mercury__digraph__STATE_VARIABLE_Visited_11, mercury__digraph__V_13_13, mercury__digraph__DfsRev_9);
#line 645 "digraph.m"
      return;
    }
#line 644 "digraph.m"
  }
#line 238 "digraph.m"
}

#line 230 "digraph.m"
void MR_CALL 
mercury__digraph__dfs_5_p_0(
#line 230 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_15,
#line 230 "digraph.m"
  MR_Word mercury__digraph__G_6,
#line 230 "digraph.m"
  MR_Word mercury__digraph__X_7,
#line 230 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_Visited_0_11,
#line 230 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_Visited_12,
#line 230 "digraph.m"
  MR_Word * mercury__digraph__Dfs_9)
#line 230 "digraph.m"
{
#line 640 "digraph.m"
  {
#line 640 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 640 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_16_16;
#line 640 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_17_17;
#line 640 "digraph.m"
    MR_Word mercury__digraph__DfsRev_10;
#line 640 "digraph.m"
    MR_Word mercury__digraph__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 642 "digraph.m"
    MR_Word mercury__digraph__conv0_Dfs_9;

#line 641 "digraph.m"
    {
#line 641 "digraph.m"
      mercury__digraph__dfs_2_6_p_0(mercury__digraph__TypeInfo_for_T_15, mercury__digraph__G_6, mercury__digraph__X_7, mercury__digraph__STATE_VARIABLE_Visited_0_11, mercury__digraph__STATE_VARIABLE_Visited_12, mercury__digraph__V_14_14, &mercury__digraph__DfsRev_10);
    }
#line 12713 "digraph.c"
    mercury__digraph__TypeCtorInfo_16_16 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 12715 "digraph.c"
    {
#line 12717 "digraph.c"
      mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12719 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
#line 12721 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_15));
#line 12723 "digraph.c"
    }
#line 642 "digraph.m"
    {
#line 642 "digraph.m"
      mercury__list__reverse_2_p_0(mercury__digraph__TypeInfo_17_17, (MR_Word) mercury__digraph__DfsRev_10, &mercury__digraph__conv0_Dfs_9);
    }
#line 642 "digraph.m"
    *mercury__digraph__Dfs_9 = (MR_Word) mercury__digraph__conv0_Dfs_9;
#line 640 "digraph.m"
  }
#line 230 "digraph.m"
}

#line 221 "digraph.m"
void MR_CALL 
mercury__digraph__dfsrev_2_p_0(
#line 221 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_10,
#line 221 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 221 "digraph.m"
  MR_Word * mercury__digraph__DfsRev_4)
#line 221 "digraph.m"
{
#line 636 "digraph.m"
  {
#line 636 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 636 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_10_28 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 636 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_11_29;
#line 636 "digraph.m"
    MR_Word mercury__digraph__Keys_5;
#line 636 "digraph.m"
    MR_Word mercury__digraph__V_8_8;
#line 636 "digraph.m"
    MR_Word mercury__digraph__V_9_9;
#line 636 "digraph.m"
    MR_Word mercury__digraph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
#line 636 "digraph.m"
    MR_Word mercury__digraph__Reverse_4_32;
#line 636 "digraph.m"
    MR_Word mercury__digraph__V_5_37;
#line 636 "digraph.m"
    MR_Word mercury__digraph__V_2_39;
#line 675 "digraph.m"
    MR_Integer mercury__digraph__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 675 "digraph.m"
    MR_Word mercury__digraph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 675 "digraph.m"
    MR_Word mercury__digraph__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
#line 56 "bimap.opt"
    MR_Word mercury__digraph__V_3_31;
#line 70 "tree234.opt"
    MR_Word mercury__digraph__conv0_Keys_5;
#line 638 "digraph.m"
    MR_Word mercury__digraph__V_6_6;

#line 12783 "digraph.c"
    {
#line 12785 "digraph.c"
      mercury__digraph__TypeInfo_11_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12787 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_29, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_10_28));
#line 12789 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_11_29, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_10));
#line 12791 "digraph.c"
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
#line 638 "digraph.m"
    mercury__digraph__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 638 "digraph.m"
    {
#line 638 "digraph.m"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_55_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_44_32_49_49_93_95_48_6_p_in__list_0(mercury__digraph__TypeInfo_for_T_10, mercury__digraph__G_3, mercury__digraph__Keys_5, mercury__digraph__V_8_8, &mercury__digraph__V_6_6, mercury__digraph__V_9_9, mercury__digraph__DfsRev_4);
    }
#line 636 "digraph.m"
  }
#line 221 "digraph.m"
}

#line 220 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__dfsrev_1_f_0(
#line 220 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 220 "digraph.m"
  MR_Word mercury__digraph__G_3)
#line 220 "digraph.m"
{
#line 634 "digraph.m"
  {
#line 634 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 634 "digraph.m"
    MR_Word mercury__digraph__DfsRev_4;

#line 634 "digraph.m"
    {
#line 634 "digraph.m"
      mercury__digraph__dfsrev_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__DfsRev_4);
    }
#line 634 "digraph.m"
    return mercury__digraph__DfsRev_4;
#line 634 "digraph.m"
  }
#line 220 "digraph.m"
}

#line 215 "digraph.m"
void MR_CALL 
mercury__digraph__dfs_2_p_0(
#line 215 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_6,
#line 215 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 215 "digraph.m"
  MR_Word * mercury__digraph__Dfs_4)
#line 215 "digraph.m"
{
#line 629 "digraph.m"
  {
#line 629 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 629 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_7_7;
#line 629 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_8_8;
#line 629 "digraph.m"
    MR_Word mercury__digraph__DfsRev_5;
#line 631 "digraph.m"
    MR_Word mercury__digraph__conv0_Dfs_4;

#line 630 "digraph.m"
    {
#line 630 "digraph.m"
      mercury__digraph__dfsrev_2_p_0(mercury__digraph__TypeInfo_for_T_6, mercury__digraph__G_3, &mercury__digraph__DfsRev_5);
    }
#line 12879 "digraph.c"
    mercury__digraph__TypeCtorInfo_7_7 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 12881 "digraph.c"
    {
#line 12883 "digraph.c"
      mercury__digraph__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12885 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_7));
#line 12887 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_8, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_6));
#line 12889 "digraph.c"
    }
#line 631 "digraph.m"
    {
#line 631 "digraph.m"
      mercury__list__reverse_2_p_0(mercury__digraph__TypeInfo_8_8, (MR_Word) mercury__digraph__DfsRev_5, &mercury__digraph__conv0_Dfs_4);
    }
#line 631 "digraph.m"
    *mercury__digraph__Dfs_4 = (MR_Word) mercury__digraph__conv0_Dfs_4;
#line 629 "digraph.m"
  }
#line 215 "digraph.m"
}

#line 214 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__dfs_1_f_0(
#line 214 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 214 "digraph.m"
  MR_Word mercury__digraph__G_3)
#line 214 "digraph.m"
{
#line 629 "digraph.m"
  {
#line 629 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 629 "digraph.m"
    MR_Word mercury__digraph__Dfs_4;
#line 629 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_7_9;
#line 629 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_8_10;
#line 629 "digraph.m"
    MR_Word mercury__digraph__DfsRev_8;
#line 631 "digraph.m"
    MR_Word mercury__digraph__conv0_Dfs_4;

#line 630 "digraph.m"
    {
#line 630 "digraph.m"
      mercury__digraph__dfsrev_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__DfsRev_8);
    }
#line 12932 "digraph.c"
    mercury__digraph__TypeCtorInfo_7_9 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 12934 "digraph.c"
    {
#line 12936 "digraph.c"
      mercury__digraph__TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12938 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_10, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_7_9));
#line 12940 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_8_10, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_5));
#line 12942 "digraph.c"
    }
#line 631 "digraph.m"
    {
#line 631 "digraph.m"
      mercury__list__reverse_2_p_0(mercury__digraph__TypeInfo_8_10, (MR_Word) mercury__digraph__DfsRev_8, &mercury__digraph__conv0_Dfs_4);
    }
#line 631 "digraph.m"
    mercury__digraph__Dfs_4 = (MR_Word) mercury__digraph__conv0_Dfs_4;
#line 629 "digraph.m"
    return mercury__digraph__Dfs_4;
#line 629 "digraph.m"
  }
#line 214 "digraph.m"
}

#line 205 "digraph.m"
void MR_CALL 
mercury__digraph__dfsrev_3_p_0(
#line 205 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_10,
#line 205 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 205 "digraph.m"
  MR_Word mercury__digraph__X_5,
#line 205 "digraph.m"
  MR_Word * mercury__digraph__DfsRev_6)
#line 205 "digraph.m"
{
#line 622 "digraph.m"
  {
#line 622 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 622 "digraph.m"
    MR_Word mercury__digraph__Vis0_7 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 622 "digraph.m"
    MR_Word mercury__digraph__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 622 "digraph.m"
    MR_Word mercury__digraph__V_2_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 624 "digraph.m"
    MR_Word mercury__digraph__V_8_8;

#line 624 "digraph.m"
    {
#line 624 "digraph.m"
      mercury__digraph__dfs_2_6_p_0(mercury__digraph__TypeInfo_for_T_10, mercury__digraph__G_4, mercury__digraph__X_5, mercury__digraph__Vis0_7, &mercury__digraph__V_8_8, mercury__digraph__V_9_9, mercury__digraph__DfsRev_6);
    }
#line 622 "digraph.m"
  }
#line 205 "digraph.m"
}

#line 204 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__dfsrev_2_f_0(
#line 204 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_7,
#line 204 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 204 "digraph.m"
  MR_Word mercury__digraph__X_5)
#line 204 "digraph.m"
{
#line 622 "digraph.m"
  {
#line 622 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 622 "digraph.m"
    MR_Word mercury__digraph__DfsRev_6;
#line 622 "digraph.m"
    MR_Word mercury__digraph__Vis0_11 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 622 "digraph.m"
    MR_Word mercury__digraph__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 622 "digraph.m"
    MR_Word mercury__digraph__V_2_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 624 "digraph.m"
    MR_Word mercury__digraph__V_12_12;

#line 624 "digraph.m"
    {
#line 624 "digraph.m"
      mercury__digraph__dfs_2_6_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__X_5, mercury__digraph__Vis0_11, &mercury__digraph__V_12_12, mercury__digraph__V_13_13, &mercury__digraph__DfsRev_6);
    }
#line 622 "digraph.m"
    return mercury__digraph__DfsRev_6;
#line 622 "digraph.m"
  }
#line 204 "digraph.m"
}

#line 197 "digraph.m"
void MR_CALL 
mercury__digraph__dfs_3_p_0(
#line 197 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_8,
#line 197 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 197 "digraph.m"
  MR_Word mercury__digraph__X_5,
#line 197 "digraph.m"
  MR_Word * mercury__digraph__Dfs_6)
#line 197 "digraph.m"
{
#line 615 "digraph.m"
  {
#line 615 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 615 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_9_9;
#line 615 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_10_10;
#line 615 "digraph.m"
    MR_Word mercury__digraph__DfsRev_7;
#line 615 "digraph.m"
    MR_Word mercury__digraph__Vis0_14 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 615 "digraph.m"
    MR_Word mercury__digraph__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 615 "digraph.m"
    MR_Word mercury__digraph__V_2_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 624 "digraph.m"
    MR_Word mercury__digraph__V_15_15;
#line 617 "digraph.m"
    MR_Word mercury__digraph__conv0_Dfs_6;

#line 624 "digraph.m"
    {
#line 624 "digraph.m"
      mercury__digraph__dfs_2_6_p_0(mercury__digraph__TypeInfo_for_T_8, mercury__digraph__G_4, mercury__digraph__X_5, mercury__digraph__Vis0_14, &mercury__digraph__V_15_15, mercury__digraph__V_16_16, &mercury__digraph__DfsRev_7);
    }
#line 13071 "digraph.c"
    mercury__digraph__TypeCtorInfo_9_9 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 13073 "digraph.c"
    {
#line 13075 "digraph.c"
      mercury__digraph__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13077 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_9_9));
#line 13079 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_10_10, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_8));
#line 13081 "digraph.c"
    }
#line 617 "digraph.m"
    {
#line 617 "digraph.m"
      mercury__list__reverse_2_p_0(mercury__digraph__TypeInfo_10_10, (MR_Word) mercury__digraph__DfsRev_7, &mercury__digraph__conv0_Dfs_6);
    }
#line 617 "digraph.m"
    *mercury__digraph__Dfs_6 = (MR_Word) mercury__digraph__conv0_Dfs_6;
#line 615 "digraph.m"
  }
#line 197 "digraph.m"
}

#line 196 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__dfs_2_f_0(
#line 196 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_7,
#line 196 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 196 "digraph.m"
  MR_Word mercury__digraph__X_5)
#line 196 "digraph.m"
{
#line 613 "digraph.m"
  {
#line 613 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 613 "digraph.m"
    MR_Word mercury__digraph__Dfs_6;

#line 613 "digraph.m"
    {
#line 613 "digraph.m"
      mercury__digraph__dfs_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__X_5, &mercury__digraph__Dfs_6);
    }
#line 613 "digraph.m"
    return mercury__digraph__Dfs_6;
#line 613 "digraph.m"
  }
#line 196 "digraph.m"
}

#line 188 "digraph.m"
void MR_CALL 
mercury__digraph__from_assoc_list_2_p_0(
#line 188 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_7,
#line 188 "digraph.m"
  MR_Word mercury__digraph__AL_3,
#line 188 "digraph.m"
  MR_Word * mercury__digraph__G_4)
#line 188 "digraph.m"
{
#line 606 "digraph.m"
  {
#line 606 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 606 "digraph.m"
    MR_Word mercury__digraph__V_6_6 = (MR_Word) &mercury__digraph_scalar_common_2[1];
#line 606 "digraph.m"
    MR_Word mercury__digraph__VMap_16 = (MR_Word) &mercury__digraph_scalar_common_4[0];
#line 606 "digraph.m"
    MR_Word mercury__digraph__FwdMap_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 606 "digraph.m"
    MR_Word mercury__digraph__BwdMap_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 606 "digraph.m"
    MR_Word mercury__digraph__Forward_3_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 606 "digraph.m"
    MR_Word mercury__digraph__Reverse_4_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 607 "digraph.m"
    {
#line 607 "digraph.m"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_93_95_48_4_p_in__list_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__AL_3, mercury__digraph__V_6_6, mercury__digraph__G_4);
#line 607 "digraph.m"
      return;
    }
#line 606 "digraph.m"
  }
#line 188 "digraph.m"
}

#line 187 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__from_assoc_list_1_f_0(
#line 187 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 187 "digraph.m"
  MR_Word mercury__digraph__AL_3)
#line 187 "digraph.m"
{
#line 604 "digraph.m"
  {
#line 604 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 604 "digraph.m"
    MR_Word mercury__digraph__G_4;

#line 604 "digraph.m"
    {
#line 604 "digraph.m"
      mercury__digraph__from_assoc_list_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__AL_3, &mercury__digraph__G_4);
    }
#line 604 "digraph.m"
    return mercury__digraph__G_4;
#line 604 "digraph.m"
  }
#line 187 "digraph.m"
}

#line 182 "digraph.m"
void MR_CALL 
mercury__digraph__to_key_assoc_list_2_p_0(
#line 182 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_11,
#line 182 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 182 "digraph.m"
  MR_Word * mercury__digraph__List_4)
#line 182 "digraph.m"
{
#line 581 "digraph.m"
  {
#line 581 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 581 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 581 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_13_13 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 581 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_14_14;
#line 581 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_15_15 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 581 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_16_16;
#line 581 "digraph.m"
    MR_Word mercury__digraph__Fwd_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 581 "digraph.m"
    MR_Word mercury__digraph__FwdKeys_6;
#line 581 "digraph.m"
    MR_Word mercury__digraph__V_7_7;
#line 581 "digraph.m"
    MR_Word mercury__digraph__V_5_21;
#line 582 "digraph.m"
    MR_Integer mercury__digraph__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 582 "digraph.m"
    MR_Word mercury__digraph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
#line 582 "digraph.m"
    MR_Word mercury__digraph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));

#line 13233 "digraph.c"
    {
#line 13235 "digraph.c"
      mercury__digraph__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13237 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_14, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_13_13));
#line 13239 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_14, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_11));
#line 13241 "digraph.c"
    }
#line 13243 "digraph.c"
    {
#line 13245 "digraph.c"
      mercury__digraph__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13247 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_15_15));
#line 13249 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_16, 1) = ((MR_Box) (mercury__digraph__TypeInfo_14_14));
#line 13251 "digraph.c"
    }
#line 69 "tree234.opt"
    mercury__digraph__V_5_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__digraph__TypeCtorInfo_12_12, mercury__digraph__TypeInfo_16_16, mercury__digraph__Fwd_5, mercury__digraph__V_5_21, &mercury__digraph__FwdKeys_6);
    }
#line 584 "digraph.m"
    mercury__digraph__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 584 "digraph.m"
    {
#line 584 "digraph.m"
      mercury__digraph__to_key_assoc_list_2_4_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__Fwd_5, mercury__digraph__FwdKeys_6, mercury__digraph__V_7_7, mercury__digraph__List_4);
#line 584 "digraph.m"
      return;
    }
#line 581 "digraph.m"
  }
#line 182 "digraph.m"
}

#line 180 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__to_key_assoc_list_1_f_0(
#line 180 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 180 "digraph.m"
  MR_Word mercury__digraph__G_3)
#line 180 "digraph.m"
{
#line 579 "digraph.m"
  {
#line 579 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 579 "digraph.m"
    MR_Word mercury__digraph__List_4;

#line 579 "digraph.m"
    {
#line 579 "digraph.m"
      mercury__digraph__to_key_assoc_list_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__List_4);
    }
#line 579 "digraph.m"
    return mercury__digraph__List_4;
#line 579 "digraph.m"
  }
#line 180 "digraph.m"
}

#line 175 "digraph.m"
void MR_CALL 
mercury__digraph__to_assoc_list_2_p_0(
#line 175 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_15,
#line 175 "digraph.m"
  MR_Word mercury__digraph__G_3,
#line 175 "digraph.m"
  MR_Word * mercury__digraph__List_4)
#line 175 "digraph.m"
{
#line 555 "digraph.m"
  {
#line 555 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 555 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 555 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_17_17 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 555 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_18_18;
#line 555 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_19_19 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 555 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_20_20;
#line 555 "digraph.m"
    MR_Word mercury__digraph__Fwd_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 555 "digraph.m"
    MR_Word mercury__digraph__FwdKeys_6;
#line 555 "digraph.m"
    MR_Word mercury__digraph__V_7_7;
#line 555 "digraph.m"
    MR_Word mercury__digraph__V_8_8;
#line 555 "digraph.m"
    MR_Word mercury__digraph__V_5_25;
#line 556 "digraph.m"
    MR_Integer mercury__digraph__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 556 "digraph.m"
    MR_Word mercury__digraph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
#line 556 "digraph.m"
    MR_Word mercury__digraph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
#line 558 "digraph.m"
    MR_Integer mercury__digraph__V_12_12;
#line 558 "digraph.m"
    MR_Word mercury__digraph__V_13_13;
#line 558 "digraph.m"
    MR_Word mercury__digraph__V_14_14;

#line 13350 "digraph.c"
    {
#line 13352 "digraph.c"
      mercury__digraph__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13354 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_18_18, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_17_17));
#line 13356 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_18_18, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_15));
#line 13358 "digraph.c"
    }
#line 13360 "digraph.c"
    {
#line 13362 "digraph.c"
      mercury__digraph__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13364 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_20_20, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_19_19));
#line 13366 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_20_20, 1) = ((MR_Box) (mercury__digraph__TypeInfo_18_18));
#line 13368 "digraph.c"
    }
#line 69 "tree234.opt"
    mercury__digraph__V_5_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__digraph__TypeCtorInfo_16_16, mercury__digraph__TypeInfo_20_20, mercury__digraph__Fwd_5, mercury__digraph__V_5_25, &mercury__digraph__FwdKeys_6);
    }
#line 558 "digraph.m"
    mercury__digraph__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 0)));
#line 558 "digraph.m"
    mercury__digraph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 1)));
#line 558 "digraph.m"
    mercury__digraph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 2)));
#line 558 "digraph.m"
    mercury__digraph__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_3, (MR_Integer) 3)));
#line 558 "digraph.m"
    mercury__digraph__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 558 "digraph.m"
    {
#line 558 "digraph.m"
      mercury__digraph__to_assoc_list_2_5_p_0(mercury__digraph__TypeInfo_for_T_15, mercury__digraph__Fwd_5, mercury__digraph__FwdKeys_6, mercury__digraph__V_7_7, mercury__digraph__V_8_8, mercury__digraph__List_4);
#line 558 "digraph.m"
      return;
    }
#line 555 "digraph.m"
  }
#line 175 "digraph.m"
}

#line 174 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__to_assoc_list_1_f_0(
#line 174 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_5,
#line 174 "digraph.m"
  MR_Word mercury__digraph__G_3)
#line 174 "digraph.m"
{
#line 553 "digraph.m"
  {
#line 553 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 553 "digraph.m"
    MR_Word mercury__digraph__List_4;

#line 553 "digraph.m"
    {
#line 553 "digraph.m"
      mercury__digraph__to_assoc_list_2_p_0(mercury__digraph__TypeInfo_for_T_5, mercury__digraph__G_3, &mercury__digraph__List_4);
    }
#line 553 "digraph.m"
    return mercury__digraph__List_4;
#line 553 "digraph.m"
  }
#line 174 "digraph.m"
}

#line 166 "digraph.m"
void MR_CALL 
mercury__digraph__lookup_key_set_to_3_p_0(
#line 166 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_12,
#line 166 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 166 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 166 "digraph.m"
  MR_Word * mercury__digraph__Xs_6)
#line 166 "digraph.m"
{
#line 542 "digraph.m"
  {
#line 542 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 542 "digraph.m"
    MR_Integer mercury__digraph__YI_5 = (MR_Integer) mercury__digraph__HeadVar__2_2;
#line 545 "digraph.m"
    MR_Word mercury__digraph__Xs0_7;
#line 543 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_14_14 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 543 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_15_15;
#line 543 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_16_16 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 543 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_17_17;
#line 543 "digraph.m"
    MR_Word mercury__digraph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 3)));
#line 543 "digraph.m"
    MR_Integer mercury__digraph__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 0)));
#line 543 "digraph.m"
    MR_Word mercury__digraph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 1)));
#line 543 "digraph.m"
    MR_Word mercury__digraph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 2)));
#line 39 "map.opt"
    MR_Box mercury__digraph__conv0_Xs0_7;

#line 13467 "digraph.c"
    {
#line 13469 "digraph.c"
      mercury__digraph__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13471 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
#line 13473 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
#line 13475 "digraph.c"
    }
#line 13477 "digraph.c"
    {
#line 13479 "digraph.c"
      mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13481 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
#line 13483 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 13485 "digraph.c"
    }
#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_17_17, (MR_Word) mercury__digraph__V_8_8, mercury__digraph__YI_5, &mercury__digraph__conv0_Xs0_7);
    }
#line 39 "map.opt"
    if (mercury__digraph__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__digraph__Xs0_7 = ((MR_Word) mercury__digraph__conv0_Xs0_7);
#line 39 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 545 "digraph.m"
    if (mercury__digraph__succeeded)
#line 544 "digraph.m"
      *mercury__digraph__Xs_6 = mercury__digraph__Xs0_7;
#line 545 "digraph.m"
    else
#line 546 "digraph.m"
      {
#line 546 "digraph.m"
        MR_Word mercury__digraph__V_2_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 113 "sparse_bitset.opt"
        *mercury__digraph__Xs_6 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 546 "digraph.m"
      }
#line 542 "digraph.m"
  }
#line 166 "digraph.m"
}

#line 164 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__lookup_key_set_to_2_f_0(
#line 164 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_7,
#line 164 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 164 "digraph.m"
  MR_Word mercury__digraph__Y_5)
#line 164 "digraph.m"
{
#line 540 "digraph.m"
  {
#line 540 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 540 "digraph.m"
    MR_Word mercury__digraph__Xs_6;

#line 540 "digraph.m"
    {
#line 540 "digraph.m"
      mercury__digraph__lookup_key_set_to_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__Y_5, &mercury__digraph__Xs_6);
    }
#line 540 "digraph.m"
    return mercury__digraph__Xs_6;
#line 540 "digraph.m"
  }
#line 164 "digraph.m"
}

#line 159 "digraph.m"
void MR_CALL 
mercury__digraph__lookup_to_3_p_0(
#line 159 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_7,
#line 159 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 159 "digraph.m"
  MR_Word mercury__digraph__Y_5,
#line 159 "digraph.m"
  MR_Word * mercury__digraph__HeadVar__3_3)
#line 159 "digraph.m"
{
#line 536 "digraph.m"
  {
#line 536 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 536 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_8_8 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 536 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_9_9;
#line 536 "digraph.m"
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_10 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 536 "digraph.m"
    MR_Word mercury__digraph__TypeClassInfo_for_enum_11;
#line 536 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_8_16;
#line 536 "digraph.m"
    MR_Word mercury__digraph__Xs_6;
#line 536 "digraph.m"
    MR_Word mercury__digraph__V_4_14;
#line 536 "digraph.m"
    MR_Word mercury__digraph__V_10_20;
#line 536 "digraph.m"
    MR_Word mercury__digraph__Set_6_39;
#line 536 "digraph.m"
    MR_Word mercury__digraph__List_4_61;
#line 268 "sparse_bitset.opt"
    MR_Word mercury__digraph__conv0_V_4_14;

#line 13592 "digraph.c"
    {
#line 13594 "digraph.c"
      mercury__digraph__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13596 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_8_8));
#line 13598 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_7));
#line 13600 "digraph.c"
    }
#line 13602 "digraph.c"
    {
#line 13604 "digraph.c"
      mercury__digraph__TypeClassInfo_for_enum_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13606 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_11, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_10));
#line 13608 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_11, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_7));
#line 13610 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_11, 2) = ((MR_Box) (mercury__digraph__TypeInfo_9_9));
#line 13612 "digraph.c"
    }
#line 537 "digraph.m"
    {
#line 537 "digraph.m"
      mercury__digraph__lookup_key_set_to_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__Y_5, &mercury__digraph__Xs_6);
    }
#line 137 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__digraph__lookup_to_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__digraph__TypeClassInfo_for_enum_11 ;
	Index =  (MR_Integer) 1 ;
		{
#line 137 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 13634 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__TypeInfo_8_16  = TypeInfo;
#line 137 "private_builtin.opt"
}
#line 146 "sparse_bitset.opt"
    mercury__digraph__V_10_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 258 "sparse_bitset.opt"
    mercury__digraph__Set_6_39 = (MR_Word) mercury__digraph__Xs_6;
#line 268 "sparse_bitset.opt"
    {
#line 268 "sparse_bitset.opt"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeClassInfo_for_enum_11, mercury__digraph__Set_6_39, (MR_Word) mercury__digraph__V_10_20, &mercury__digraph__conv0_V_4_14);
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
#line 536 "digraph.m"
  }
#line 159 "digraph.m"
}

#line 158 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__lookup_to_2_f_0(
#line 158 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_7,
#line 158 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 158 "digraph.m"
  MR_Word mercury__digraph__Y_5)
#line 158 "digraph.m"
{
#line 534 "digraph.m"
  {
#line 534 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 534 "digraph.m"
    MR_Word mercury__digraph__Xs_6;

#line 534 "digraph.m"
    {
#line 534 "digraph.m"
      mercury__digraph__lookup_to_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__Y_5, &mercury__digraph__Xs_6);
    }
#line 534 "digraph.m"
    return mercury__digraph__Xs_6;
#line 534 "digraph.m"
  }
#line 158 "digraph.m"
}

#line 152 "digraph.m"
void MR_CALL 
mercury__digraph__lookup_key_set_from_3_p_0(
#line 152 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_12,
#line 152 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 152 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 152 "digraph.m"
  MR_Word * mercury__digraph__Ys_6)
#line 152 "digraph.m"
{
#line 526 "digraph.m"
  {
#line 526 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 526 "digraph.m"
    MR_Integer mercury__digraph__XI_5 = (MR_Integer) mercury__digraph__HeadVar__2_2;
#line 529 "digraph.m"
    MR_Word mercury__digraph__Ys0_7;
#line 527 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_14_14 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 527 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_15_15;
#line 527 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_16_16 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 527 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_17_17;
#line 527 "digraph.m"
    MR_Word mercury__digraph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 2)));
#line 527 "digraph.m"
    MR_Integer mercury__digraph__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 0)));
#line 527 "digraph.m"
    MR_Word mercury__digraph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 1)));
#line 527 "digraph.m"
    MR_Word mercury__digraph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 3)));
#line 39 "map.opt"
    MR_Box mercury__digraph__conv0_Ys0_7;

#line 13753 "digraph.c"
    {
#line 13755 "digraph.c"
      mercury__digraph__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13757 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
#line 13759 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
#line 13761 "digraph.c"
    }
#line 13763 "digraph.c"
    {
#line 13765 "digraph.c"
      mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13767 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
#line 13769 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 13771 "digraph.c"
    }
#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_17_17, (MR_Word) mercury__digraph__V_8_8, mercury__digraph__XI_5, &mercury__digraph__conv0_Ys0_7);
    }
#line 39 "map.opt"
    if (mercury__digraph__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__digraph__Ys0_7 = ((MR_Word) mercury__digraph__conv0_Ys0_7);
#line 39 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 529 "digraph.m"
    if (mercury__digraph__succeeded)
#line 528 "digraph.m"
      *mercury__digraph__Ys_6 = mercury__digraph__Ys0_7;
#line 529 "digraph.m"
    else
#line 530 "digraph.m"
      {
#line 530 "digraph.m"
        MR_Word mercury__digraph__V_2_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 113 "sparse_bitset.opt"
        *mercury__digraph__Ys_6 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 530 "digraph.m"
      }
#line 526 "digraph.m"
  }
#line 152 "digraph.m"
}

#line 150 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__lookup_key_set_from_2_f_0(
#line 150 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_7,
#line 150 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 150 "digraph.m"
  MR_Word mercury__digraph__X_5)
#line 150 "digraph.m"
{
#line 524 "digraph.m"
  {
#line 524 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 524 "digraph.m"
    MR_Word mercury__digraph__Ys_6;

#line 524 "digraph.m"
    {
#line 524 "digraph.m"
      mercury__digraph__lookup_key_set_from_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__X_5, &mercury__digraph__Ys_6);
    }
#line 524 "digraph.m"
    return mercury__digraph__Ys_6;
#line 524 "digraph.m"
  }
#line 150 "digraph.m"
}

#line 145 "digraph.m"
void MR_CALL 
mercury__digraph__lookup_from_3_p_0(
#line 145 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_7,
#line 145 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 145 "digraph.m"
  MR_Word mercury__digraph__X_5,
#line 145 "digraph.m"
  MR_Word * mercury__digraph__HeadVar__3_3)
#line 145 "digraph.m"
{
#line 520 "digraph.m"
  {
#line 520 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 520 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_8_8 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 520 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_9_9;
#line 520 "digraph.m"
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_10 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 520 "digraph.m"
    MR_Word mercury__digraph__TypeClassInfo_for_enum_11;
#line 520 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_8_16;
#line 520 "digraph.m"
    MR_Word mercury__digraph__Ys_6;
#line 520 "digraph.m"
    MR_Word mercury__digraph__V_4_14;
#line 520 "digraph.m"
    MR_Word mercury__digraph__V_10_20;
#line 520 "digraph.m"
    MR_Word mercury__digraph__Set_6_39;
#line 520 "digraph.m"
    MR_Word mercury__digraph__List_4_61;
#line 268 "sparse_bitset.opt"
    MR_Word mercury__digraph__conv0_V_4_14;

#line 13878 "digraph.c"
    {
#line 13880 "digraph.c"
      mercury__digraph__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13882 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_8_8));
#line 13884 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_9_9, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_7));
#line 13886 "digraph.c"
    }
#line 13888 "digraph.c"
    {
#line 13890 "digraph.c"
      mercury__digraph__TypeClassInfo_for_enum_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13892 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_11, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_10));
#line 13894 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_11, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_7));
#line 13896 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_11, 2) = ((MR_Box) (mercury__digraph__TypeInfo_9_9));
#line 13898 "digraph.c"
    }
#line 521 "digraph.m"
    {
#line 521 "digraph.m"
      mercury__digraph__lookup_key_set_from_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__X_5, &mercury__digraph__Ys_6);
    }
#line 137 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__digraph__lookup_from_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__digraph__TypeClassInfo_for_enum_11 ;
	Index =  (MR_Integer) 1 ;
		{
#line 137 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 13920 "digraph.c"

		;}
#undef MR_PROC_LABEL
	 mercury__digraph__TypeInfo_8_16  = TypeInfo;
#line 137 "private_builtin.opt"
}
#line 146 "sparse_bitset.opt"
    mercury__digraph__V_10_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 258 "sparse_bitset.opt"
    mercury__digraph__Set_6_39 = (MR_Word) mercury__digraph__Ys_6;
#line 268 "sparse_bitset.opt"
    {
#line 268 "sparse_bitset.opt"
      mercury__digraph__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_56_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(mercury__digraph__TypeClassInfo_for_enum_11, mercury__digraph__Set_6_39, (MR_Word) mercury__digraph__V_10_20, &mercury__digraph__conv0_V_4_14);
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
#line 520 "digraph.m"
  }
#line 145 "digraph.m"
}

#line 144 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__lookup_from_2_f_0(
#line 144 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_7,
#line 144 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 144 "digraph.m"
  MR_Word mercury__digraph__X_5)
#line 144 "digraph.m"
{
#line 518 "digraph.m"
  {
#line 518 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 518 "digraph.m"
    MR_Word mercury__digraph__Ys_6;

#line 518 "digraph.m"
    {
#line 518 "digraph.m"
      mercury__digraph__lookup_from_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__X_5, &mercury__digraph__Ys_6);
    }
#line 518 "digraph.m"
    return mercury__digraph__Ys_6;
#line 518 "digraph.m"
  }
#line 144 "digraph.m"
}

#line 139 "digraph.m"
MR_bool MR_CALL 
mercury__digraph__is_edge_rev_3_p_1(
#line 139 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_12,
#line 139 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 139 "digraph.m"
  MR_Word mercury__digraph__X_5,
#line 139 "digraph.m"
  MR_Word mercury__digraph__HeadVar__3_3)
#line 139 "digraph.m"
{
#line 511 "digraph.m"
  {
#line 511 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 511 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_14_14 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 511 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_15_15;
#line 511 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_16_16 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 511 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_17_17;
#line 511 "digraph.m"
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_18;
#line 511 "digraph.m"
    MR_Word mercury__digraph__TypeClassInfo_for_enum_19;
#line 511 "digraph.m"
    MR_Integer mercury__digraph__YI_6 = (MR_Integer) mercury__digraph__HeadVar__3_3;
#line 511 "digraph.m"
    MR_Word mercury__digraph__XSet_7;
#line 511 "digraph.m"
    MR_Word mercury__digraph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 3)));
#line 512 "digraph.m"
    MR_Integer mercury__digraph__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 0)));
#line 512 "digraph.m"
    MR_Word mercury__digraph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 1)));
#line 512 "digraph.m"
    MR_Word mercury__digraph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 2)));
#line 39 "map.opt"
    MR_Box mercury__digraph__conv0_XSet_7;

#line 14043 "digraph.c"
    {
#line 14045 "digraph.c"
      mercury__digraph__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14047 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
#line 14049 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
#line 14051 "digraph.c"
    }
#line 14053 "digraph.c"
    {
#line 14055 "digraph.c"
      mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14057 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
#line 14059 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 14061 "digraph.c"
    }
#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_17_17, (MR_Word) mercury__digraph__V_8_8, mercury__digraph__YI_6, &mercury__digraph__conv0_XSet_7);
    }
#line 39 "map.opt"
    if (mercury__digraph__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__digraph__XSet_7 = ((MR_Word) mercury__digraph__conv0_XSet_7);
#line 39 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 511 "digraph.m"
    if (mercury__digraph__succeeded)
#line 511 "digraph.m"
      {
#line 14082 "digraph.c"
        mercury__digraph__BaseTypeClassInfo_for_enum_18 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 14084 "digraph.c"
        {
#line 14086 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 14088 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_18));
#line 14090 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
#line 14092 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 2) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 14094 "digraph.c"
        }
#line 513 "digraph.m"
        {
#line 513 "digraph.m"
          return mercury__digraph__succeeded = mercury__sparse_bitset__member_2_p_0(mercury__digraph__TypeClassInfo_for_enum_19, ((MR_Box) (mercury__digraph__X_5)), (MR_Word) mercury__digraph__XSet_7);
        }
#line 511 "digraph.m"
      }
#line 511 "digraph.m"
    return mercury__digraph__succeeded;
#line 511 "digraph.m"
  }
#line 139 "digraph.m"
}

#line 513 "digraph.m"
static void MR_CALL 
mercury__digraph__is_edge_rev_3_p_0_1(
#line 513 "digraph.m"
  void * mercury__digraph__env_ptr_arg)
#line 513 "digraph.m"
{
#line 513 "digraph.m"
  {
#line 513 "digraph.m"
    struct mercury__digraph__is_edge_rev_3_p_0_env_0_s * mercury__digraph__env_ptr = (struct mercury__digraph__is_edge_rev_3_p_0_env_0_s *) mercury__digraph__env_ptr_arg;

#line 513 "digraph.m"
    *((mercury__digraph__env_ptr)->mercury__digraph__is_edge_rev_3_p_0_env_0__X_5) = ((MR_Word) (mercury__digraph__env_ptr)->mercury__digraph__is_edge_rev_3_p_0_env_0__conv1_X_5);
#line 513 "digraph.m"
    {
#line 513 "digraph.m"
      ((mercury__digraph__env_ptr)->mercury__digraph__is_edge_rev_3_p_0_env_0__cont)((mercury__digraph__env_ptr)->mercury__digraph__is_edge_rev_3_p_0_env_0__cont_env_ptr);
#line 513 "digraph.m"
      return;
    }
#line 513 "digraph.m"
  }
#line 513 "digraph.m"
}

#line 138 "digraph.m"
void MR_CALL 
mercury__digraph__is_edge_rev_3_p_0(
#line 138 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_12,
#line 138 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 138 "digraph.m"
  MR_Word * mercury__digraph__X_5,
#line 138 "digraph.m"
  MR_Word mercury__digraph__HeadVar__3_3,
#line 138 "digraph.m"
  MR_Cont mercury__digraph__cont,
#line 138 "digraph.m"
  void * mercury__digraph__cont_env_ptr)
#line 138 "digraph.m"
{
#line 138 "digraph.m"
  {
#line 138 "digraph.m"
    struct mercury__digraph__is_edge_rev_3_p_0_env_0_s mercury__digraph__env;

#line 138 "digraph.m"
    (mercury__digraph__env).mercury__digraph__is_edge_rev_3_p_0_env_0__X_5 = mercury__digraph__X_5;
#line 138 "digraph.m"
    (mercury__digraph__env).mercury__digraph__is_edge_rev_3_p_0_env_0__cont = mercury__digraph__cont;
#line 138 "digraph.m"
    (mercury__digraph__env).mercury__digraph__is_edge_rev_3_p_0_env_0__cont_env_ptr = mercury__digraph__cont_env_ptr;
#line 511 "digraph.m"
    {
#line 511 "digraph.m"
      MR_bool mercury__digraph__succeeded;
#line 511 "digraph.m"
      MR_Word mercury__digraph__TypeCtorInfo_14_14 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 511 "digraph.m"
      MR_Word mercury__digraph__TypeInfo_15_15;
#line 511 "digraph.m"
      MR_Word mercury__digraph__TypeCtorInfo_16_16 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 511 "digraph.m"
      MR_Word mercury__digraph__TypeInfo_17_17;
#line 511 "digraph.m"
      MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_18;
#line 511 "digraph.m"
      MR_Word mercury__digraph__TypeClassInfo_for_enum_19;
#line 511 "digraph.m"
      MR_Integer mercury__digraph__YI_6 = (MR_Integer) mercury__digraph__HeadVar__3_3;
#line 511 "digraph.m"
      MR_Word mercury__digraph__XSet_7;
#line 511 "digraph.m"
      MR_Word mercury__digraph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 3)));
#line 512 "digraph.m"
      MR_Integer mercury__digraph__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 0)));
#line 512 "digraph.m"
      MR_Word mercury__digraph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 1)));
#line 512 "digraph.m"
      MR_Word mercury__digraph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 2)));
#line 39 "map.opt"
      MR_Box mercury__digraph__conv0_XSet_7;

#line 14195 "digraph.c"
      {
#line 14197 "digraph.c"
        mercury__digraph__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14199 "digraph.c"
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
#line 14201 "digraph.c"
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
#line 14203 "digraph.c"
      }
#line 14205 "digraph.c"
      {
#line 14207 "digraph.c"
        mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14209 "digraph.c"
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
#line 14211 "digraph.c"
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 14213 "digraph.c"
      }
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_17_17, (MR_Word) mercury__digraph__V_8_8, mercury__digraph__YI_6, &mercury__digraph__conv0_XSet_7);
      }
#line 39 "map.opt"
      if (mercury__digraph__succeeded)
#line 39 "map.opt"
        {
#line 39 "map.opt"
          mercury__digraph__XSet_7 = ((MR_Word) mercury__digraph__conv0_XSet_7);
#line 39 "map.opt"
          mercury__digraph__succeeded = MR_TRUE;
#line 39 "map.opt"
        }
#line 511 "digraph.m"
      if (mercury__digraph__succeeded)
#line 511 "digraph.m"
        {
#line 14234 "digraph.c"
          mercury__digraph__BaseTypeClassInfo_for_enum_18 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 14236 "digraph.c"
          {
#line 14238 "digraph.c"
            mercury__digraph__TypeClassInfo_for_enum_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 14240 "digraph.c"
            MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_18));
#line 14242 "digraph.c"
            MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
#line 14244 "digraph.c"
            MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 2) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 14246 "digraph.c"
          }
#line 513 "digraph.m"
          {
#line 513 "digraph.m"
            mercury__sparse_bitset__member_2_p_1(mercury__digraph__TypeClassInfo_for_enum_19, &(mercury__digraph__env).mercury__digraph__is_edge_rev_3_p_0_env_0__conv1_X_5, (MR_Word) mercury__digraph__XSet_7, mercury__digraph__is_edge_rev_3_p_0_1, &mercury__digraph__env);
          }
#line 511 "digraph.m"
        }
#line 511 "digraph.m"
    }
#line 138 "digraph.m"
  }
#line 138 "digraph.m"
}

#line 132 "digraph.m"
MR_bool MR_CALL 
mercury__digraph__is_edge_3_p_1(
#line 132 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_12,
#line 132 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 132 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 132 "digraph.m"
  MR_Word mercury__digraph__Y_6)
#line 132 "digraph.m"
{
#line 507 "digraph.m"
  {
#line 507 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 507 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_14_14 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 507 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_15_15;
#line 507 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_16_16 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 507 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_17_17;
#line 507 "digraph.m"
    MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_18;
#line 507 "digraph.m"
    MR_Word mercury__digraph__TypeClassInfo_for_enum_19;
#line 507 "digraph.m"
    MR_Integer mercury__digraph__XI_5 = (MR_Integer) mercury__digraph__HeadVar__2_2;
#line 507 "digraph.m"
    MR_Word mercury__digraph__YSet_7;
#line 507 "digraph.m"
    MR_Word mercury__digraph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 2)));
#line 508 "digraph.m"
    MR_Integer mercury__digraph__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 0)));
#line 508 "digraph.m"
    MR_Word mercury__digraph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 1)));
#line 508 "digraph.m"
    MR_Word mercury__digraph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 3)));
#line 39 "map.opt"
    MR_Box mercury__digraph__conv0_YSet_7;

#line 14306 "digraph.c"
    {
#line 14308 "digraph.c"
      mercury__digraph__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14310 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
#line 14312 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
#line 14314 "digraph.c"
    }
#line 14316 "digraph.c"
    {
#line 14318 "digraph.c"
      mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14320 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
#line 14322 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 14324 "digraph.c"
    }
#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_17_17, (MR_Word) mercury__digraph__V_8_8, mercury__digraph__XI_5, &mercury__digraph__conv0_YSet_7);
    }
#line 39 "map.opt"
    if (mercury__digraph__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__digraph__YSet_7 = ((MR_Word) mercury__digraph__conv0_YSet_7);
#line 39 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 507 "digraph.m"
    if (mercury__digraph__succeeded)
#line 507 "digraph.m"
      {
#line 14345 "digraph.c"
        mercury__digraph__BaseTypeClassInfo_for_enum_18 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 14347 "digraph.c"
        {
#line 14349 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 14351 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_18));
#line 14353 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
#line 14355 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 2) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 14357 "digraph.c"
        }
#line 509 "digraph.m"
        {
#line 509 "digraph.m"
          return mercury__digraph__succeeded = mercury__sparse_bitset__member_2_p_0(mercury__digraph__TypeClassInfo_for_enum_19, ((MR_Box) (mercury__digraph__Y_6)), (MR_Word) mercury__digraph__YSet_7);
        }
#line 507 "digraph.m"
      }
#line 507 "digraph.m"
    return mercury__digraph__succeeded;
#line 507 "digraph.m"
  }
#line 132 "digraph.m"
}

#line 509 "digraph.m"
static void MR_CALL 
mercury__digraph__is_edge_3_p_0_1(
#line 509 "digraph.m"
  void * mercury__digraph__env_ptr_arg)
#line 509 "digraph.m"
{
#line 509 "digraph.m"
  {
#line 509 "digraph.m"
    struct mercury__digraph__is_edge_3_p_0_env_0_s * mercury__digraph__env_ptr = (struct mercury__digraph__is_edge_3_p_0_env_0_s *) mercury__digraph__env_ptr_arg;

#line 509 "digraph.m"
    *((mercury__digraph__env_ptr)->mercury__digraph__is_edge_3_p_0_env_0__Y_6) = ((MR_Word) (mercury__digraph__env_ptr)->mercury__digraph__is_edge_3_p_0_env_0__conv1_Y_6);
#line 509 "digraph.m"
    {
#line 509 "digraph.m"
      ((mercury__digraph__env_ptr)->mercury__digraph__is_edge_3_p_0_env_0__cont)((mercury__digraph__env_ptr)->mercury__digraph__is_edge_3_p_0_env_0__cont_env_ptr);
#line 509 "digraph.m"
      return;
    }
#line 509 "digraph.m"
  }
#line 509 "digraph.m"
}

#line 131 "digraph.m"
void MR_CALL 
mercury__digraph__is_edge_3_p_0(
#line 131 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_12,
#line 131 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 131 "digraph.m"
  MR_Word mercury__digraph__HeadVar__2_2,
#line 131 "digraph.m"
  MR_Word * mercury__digraph__Y_6,
#line 131 "digraph.m"
  MR_Cont mercury__digraph__cont,
#line 131 "digraph.m"
  void * mercury__digraph__cont_env_ptr)
#line 131 "digraph.m"
{
#line 131 "digraph.m"
  {
#line 131 "digraph.m"
    struct mercury__digraph__is_edge_3_p_0_env_0_s mercury__digraph__env;

#line 131 "digraph.m"
    (mercury__digraph__env).mercury__digraph__is_edge_3_p_0_env_0__Y_6 = mercury__digraph__Y_6;
#line 131 "digraph.m"
    (mercury__digraph__env).mercury__digraph__is_edge_3_p_0_env_0__cont = mercury__digraph__cont;
#line 131 "digraph.m"
    (mercury__digraph__env).mercury__digraph__is_edge_3_p_0_env_0__cont_env_ptr = mercury__digraph__cont_env_ptr;
#line 507 "digraph.m"
    {
#line 507 "digraph.m"
      MR_bool mercury__digraph__succeeded;
#line 507 "digraph.m"
      MR_Word mercury__digraph__TypeCtorInfo_14_14 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 507 "digraph.m"
      MR_Word mercury__digraph__TypeInfo_15_15;
#line 507 "digraph.m"
      MR_Word mercury__digraph__TypeCtorInfo_16_16 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 507 "digraph.m"
      MR_Word mercury__digraph__TypeInfo_17_17;
#line 507 "digraph.m"
      MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_18;
#line 507 "digraph.m"
      MR_Word mercury__digraph__TypeClassInfo_for_enum_19;
#line 507 "digraph.m"
      MR_Integer mercury__digraph__XI_5 = (MR_Integer) mercury__digraph__HeadVar__2_2;
#line 507 "digraph.m"
      MR_Word mercury__digraph__YSet_7;
#line 507 "digraph.m"
      MR_Word mercury__digraph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 2)));
#line 508 "digraph.m"
      MR_Integer mercury__digraph__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 0)));
#line 508 "digraph.m"
      MR_Word mercury__digraph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 1)));
#line 508 "digraph.m"
      MR_Word mercury__digraph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 3)));
#line 39 "map.opt"
      MR_Box mercury__digraph__conv0_YSet_7;

#line 14458 "digraph.c"
      {
#line 14460 "digraph.c"
        mercury__digraph__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14462 "digraph.c"
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_14_14));
#line 14464 "digraph.c"
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_15_15, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
#line 14466 "digraph.c"
      }
#line 14468 "digraph.c"
      {
#line 14470 "digraph.c"
        mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14472 "digraph.c"
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
#line 14474 "digraph.c"
        MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 14476 "digraph.c"
      }
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_17_17, (MR_Word) mercury__digraph__V_8_8, mercury__digraph__XI_5, &mercury__digraph__conv0_YSet_7);
      }
#line 39 "map.opt"
      if (mercury__digraph__succeeded)
#line 39 "map.opt"
        {
#line 39 "map.opt"
          mercury__digraph__YSet_7 = ((MR_Word) mercury__digraph__conv0_YSet_7);
#line 39 "map.opt"
          mercury__digraph__succeeded = MR_TRUE;
#line 39 "map.opt"
        }
#line 507 "digraph.m"
      if (mercury__digraph__succeeded)
#line 507 "digraph.m"
        {
#line 14497 "digraph.c"
          mercury__digraph__BaseTypeClassInfo_for_enum_18 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 14499 "digraph.c"
          {
#line 14501 "digraph.c"
            mercury__digraph__TypeClassInfo_for_enum_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 14503 "digraph.c"
            MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_18));
#line 14505 "digraph.c"
            MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_12));
#line 14507 "digraph.c"
            MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_19, 2) = ((MR_Box) (mercury__digraph__TypeInfo_15_15));
#line 14509 "digraph.c"
          }
#line 509 "digraph.m"
          {
#line 509 "digraph.m"
            mercury__sparse_bitset__member_2_p_1(mercury__digraph__TypeClassInfo_for_enum_19, &(mercury__digraph__env).mercury__digraph__is_edge_3_p_0_env_0__conv1_Y_6, (MR_Word) mercury__digraph__YSet_7, mercury__digraph__is_edge_3_p_0_1, &mercury__digraph__env);
          }
#line 507 "digraph.m"
        }
#line 507 "digraph.m"
    }
#line 131 "digraph.m"
  }
#line 131 "digraph.m"
}

#line 124 "digraph.m"
void MR_CALL 
mercury__digraph__delete_assoc_list_3_p_0(
#line 124 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_16,
#line 124 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 124 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_2,
#line 124 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_G_3)
#line 124 "digraph.m"
{
#line 500 "digraph.m"
  while (MR_TRUE)
#line 500 "digraph.m"
    {
#line 500 "digraph.m"
      /* tailcall optimized into a loop */
#line 500 "digraph.m"
      {
#line 500 "digraph.m"
        MR_bool mercury__digraph__succeeded;

#line 500 "digraph.m"
        if ((mercury__digraph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 500 "digraph.m"
          *mercury__digraph__STATE_VARIABLE_G_3 = mercury__digraph__STATE_VARIABLE_G_0_2;
#line 500 "digraph.m"
        else
#line 501 "digraph.m"
          {
#line 501 "digraph.m"
            MR_Word mercury__digraph__X_7;
#line 501 "digraph.m"
            MR_Word mercury__digraph__Y_8;
#line 501 "digraph.m"
            MR_Word mercury__digraph__Edges_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 1)));
#line 501 "digraph.m"
            MR_Word mercury__digraph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 0)));
#line 501 "digraph.m"
            MR_Word mercury__digraph__STATE_VARIABLE_G_14_14;

#line 501 "digraph.m"
            mercury__digraph__X_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_13_13, (MR_Integer) 0)));
#line 501 "digraph.m"
            mercury__digraph__Y_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_13_13, (MR_Integer) 1)));
#line 502 "digraph.m"
            {
#line 502 "digraph.m"
              mercury__digraph__delete_edge_4_p_0(mercury__digraph__TypeInfo_for_T_16, mercury__digraph__X_7, mercury__digraph__Y_8, mercury__digraph__STATE_VARIABLE_G_0_2, &mercury__digraph__STATE_VARIABLE_G_14_14);
            }
#line 503 "digraph.m"
            /* direct tailcall eliminated */
#line 503 "digraph.m"
            {
#line 503 "digraph.m"
              MR_Word mercury__digraph__HeadVar__1__tmp_copy_1 = mercury__digraph__Edges_9;
#line 503 "digraph.m"
              MR_Word mercury__digraph__STATE_VARIABLE_G_0__tmp_copy_2 = mercury__digraph__STATE_VARIABLE_G_14_14;

#line 503 "digraph.m"
              mercury__digraph__STATE_VARIABLE_G_0_2 = mercury__digraph__STATE_VARIABLE_G_0__tmp_copy_2;
#line 503 "digraph.m"
              mercury__digraph__HeadVar__1_1 = mercury__digraph__HeadVar__1__tmp_copy_1;
#line 503 "digraph.m"
            }
#line 503 "digraph.m"
            continue;
#line 501 "digraph.m"
          }
#line 500 "digraph.m"
      }
#line 500 "digraph.m"
      break;
#line 500 "digraph.m"
    }
#line 124 "digraph.m"
}

#line 122 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__delete_assoc_list_2_f_0(
#line 122 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_9,
#line 122 "digraph.m"
  MR_Word mercury__digraph__Edges_4,
#line 122 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_6)
#line 122 "digraph.m"
{
#line 498 "digraph.m"
  {
#line 498 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 498 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_7;

#line 498 "digraph.m"
    {
#line 498 "digraph.m"
      mercury__digraph__delete_assoc_list_3_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__Edges_4, mercury__digraph__STATE_VARIABLE_G_0_6, &mercury__digraph__STATE_VARIABLE_G_7);
    }
#line 498 "digraph.m"
    return mercury__digraph__STATE_VARIABLE_G_7;
#line 498 "digraph.m"
  }
#line 122 "digraph.m"
}

#line 117 "digraph.m"
void MR_CALL 
mercury__digraph__delete_edge_4_p_0(
#line 117 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_32,
#line 117 "digraph.m"
  MR_Word mercury__digraph__X_5,
#line 117 "digraph.m"
  MR_Word mercury__digraph__Y_6,
#line 117 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_10,
#line 117 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_G_11)
#line 117 "digraph.m"
{
#line 491 "digraph.m"
  {
#line 491 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 491 "digraph.m"
    MR_Integer mercury__digraph__XI_8 = (MR_Integer) mercury__digraph__X_5;
#line 491 "digraph.m"
    MR_Integer mercury__digraph__YI_9 = (MR_Integer) mercury__digraph__Y_6;
#line 491 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_12_12;
#line 491 "digraph.m"
    MR_Word mercury__digraph__V_13_13;
#line 491 "digraph.m"
    MR_Word mercury__digraph__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 2)));
#line 491 "digraph.m"
    MR_Word mercury__digraph__V_16_16;
#line 491 "digraph.m"
    MR_Word mercury__digraph__V_24_24;
#line 494 "digraph.m"
    MR_Integer mercury__digraph__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 0)));
#line 494 "digraph.m"
    MR_Word mercury__digraph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 1)));
#line 494 "digraph.m"
    MR_Word mercury__digraph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 3)));
#line 397 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_14_41;
#line 397 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_16_43;
#line 397 "digraph.m"
    MR_Word mercury__digraph__SuccXs0_37;
#line 394 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_13_40 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 394 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_15_42 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 39 "map.opt"
    MR_Box mercury__digraph__conv0_SuccXs0_37;
#line 494 "digraph.m"
    MR_Integer mercury__digraph__V_21_21;
#line 494 "digraph.m"
    MR_Word mercury__digraph__V_22_22;
#line 494 "digraph.m"
    MR_Word mercury__digraph__V_23_23;
#line 495 "digraph.m"
    MR_Integer mercury__digraph__V_28_28;
#line 495 "digraph.m"
    MR_Word mercury__digraph__V_29_29;
#line 495 "digraph.m"
    MR_Word mercury__digraph__V_30_30;
#line 495 "digraph.m"
    MR_Word mercury__digraph__V_31_31;

#line 14701 "digraph.c"
    {
#line 14703 "digraph.c"
      mercury__digraph__TypeInfo_14_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14705 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_41, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_13_40));
#line 14707 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_14_41, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_32));
#line 14709 "digraph.c"
    }
#line 14711 "digraph.c"
    {
#line 14713 "digraph.c"
      mercury__digraph__TypeInfo_16_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14715 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_43, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_15_42));
#line 14717 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_43, 1) = ((MR_Box) (mercury__digraph__TypeInfo_14_41));
#line 14719 "digraph.c"
    }
#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_16_43, (MR_Word) mercury__digraph__V_14_14, mercury__digraph__XI_8, &mercury__digraph__conv0_SuccXs0_37);
    }
#line 39 "map.opt"
    if (mercury__digraph__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__digraph__SuccXs0_37 = ((MR_Word) mercury__digraph__conv0_SuccXs0_37);
#line 39 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 397 "digraph.m"
    if (mercury__digraph__succeeded)
#line 395 "digraph.m"
      {
#line 395 "digraph.m"
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_46 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 395 "digraph.m"
        MR_Word mercury__digraph__TypeClassInfo_for_enum_47;
#line 395 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_21_48;
#line 395 "digraph.m"
        MR_Word mercury__digraph__SuccXs_38;
#line 395 "digraph.m"
        MR_Word mercury__digraph__Set0_6_73;
#line 395 "digraph.m"
        MR_Integer mercury__digraph__V_9_75;
#line 395 "digraph.m"
        MR_Word mercury__digraph__Set1_4_77;
#line 395 "digraph.m"
        MR_Word mercury__digraph__Set2_5_78;
#line 395 "digraph.m"
        MR_Word mercury__digraph__V_6_79;
#line 14758 "digraph.c"
        MR_Box MR_CALL (* mercury__digraph__func_1)(MR_Box, MR_Box);
#line 14760 "digraph.c"
        MR_Box mercury__digraph__conv2_V_9_75;

#line 14763 "digraph.c"
        {
#line 14765 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 14767 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_47, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_46));
#line 14769 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_47, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_32));
#line 14771 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_47, 2) = ((MR_Box) (mercury__digraph__TypeInfo_14_41));
#line 14773 "digraph.c"
        }
#line 114 "sparse_bitset.opt"
        mercury__digraph__Set0_6_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 14777 "digraph.c"
        mercury__digraph__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_47, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14779 "digraph.c"
        {
#line 14781 "digraph.c"
          mercury__digraph__conv2_V_9_75 = mercury__digraph__func_1(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_47), ((MR_Box) (mercury__digraph__Y_6)));
        }
#line 14784 "digraph.c"
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
#line 14800 "digraph.c"
        mercury__digraph__TypeCtorInfo_21_48 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 89 "map.opt"
        {
#line 89 "map.opt"
          mercury__map__det_update_4_p_0(mercury__digraph__TypeCtorInfo_21_48, mercury__digraph__TypeInfo_16_43, ((MR_Box) (mercury__digraph__XI_8)), ((MR_Box) (mercury__digraph__SuccXs_38)), mercury__digraph__V_14_14, &mercury__digraph__V_13_13);
        }
#line 395 "digraph.m"
      }
#line 397 "digraph.m"
    else
#line 398 "digraph.m"
      mercury__digraph__V_13_13 = mercury__digraph__V_14_14;
#line 494 "digraph.m"
    mercury__digraph__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 0)));
#line 494 "digraph.m"
    mercury__digraph__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 1)));
#line 494 "digraph.m"
    mercury__digraph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 2)));
#line 494 "digraph.m"
    mercury__digraph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 3)));
#line 494 "digraph.m"
    {
#line 494 "digraph.m"
      mercury__digraph__STATE_VARIABLE_G_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 494 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 0) = ((MR_Box) (mercury__digraph__V_21_21));
#line 494 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 1) = ((MR_Box) (mercury__digraph__V_22_22));
#line 494 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 2) = ((MR_Box) (mercury__digraph__V_13_13));
#line 494 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 3) = ((MR_Box) (mercury__digraph__V_24_24));
#line 494 "digraph.m"
    }
#line 495 "digraph.m"
    {
#line 495 "digraph.m"
      mercury__digraph__V_16_16 = mercury__digraph__key_set_map_delete_3_f_0(mercury__digraph__TypeInfo_for_T_32, mercury__digraph__V_24_24, mercury__digraph__YI_9, mercury__digraph__X_5);
    }
#line 495 "digraph.m"
    mercury__digraph__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 0)));
#line 495 "digraph.m"
    mercury__digraph__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 1)));
#line 495 "digraph.m"
    mercury__digraph__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 2)));
#line 495 "digraph.m"
    mercury__digraph__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 3)));
#line 495 "digraph.m"
    {
#line 495 "digraph.m"
      MR_Word base;
#line 495 "digraph.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 495 "digraph.m"
      *mercury__digraph__STATE_VARIABLE_G_11 = base;
#line 495 "digraph.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__digraph__V_28_28));
#line 495 "digraph.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__digraph__V_29_29));
#line 495 "digraph.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__digraph__V_30_30));
#line 495 "digraph.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__digraph__V_16_16));
#line 495 "digraph.m"
    }
#line 491 "digraph.m"
  }
#line 117 "digraph.m"
}

#line 115 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__delete_edge_3_f_0(
#line 115 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_11,
#line 115 "digraph.m"
  MR_Word mercury__digraph__X_5,
#line 115 "digraph.m"
  MR_Word mercury__digraph__Y_6,
#line 115 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_8)
#line 115 "digraph.m"
{
#line 489 "digraph.m"
  {
#line 489 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 489 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_9;

#line 489 "digraph.m"
    {
#line 489 "digraph.m"
      mercury__digraph__delete_edge_4_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__X_5, mercury__digraph__Y_6, mercury__digraph__STATE_VARIABLE_G_0_8, &mercury__digraph__STATE_VARIABLE_G_9);
    }
#line 489 "digraph.m"
    return mercury__digraph__STATE_VARIABLE_G_9;
#line 489 "digraph.m"
  }
#line 115 "digraph.m"
}

#line 109 "digraph.m"
void MR_CALL 
mercury__digraph__add_assoc_list_3_p_0(
#line 109 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_16,
#line 109 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 109 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_2,
#line 109 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_G_3)
#line 109 "digraph.m"
{
#line 481 "digraph.m"
  while (MR_TRUE)
#line 481 "digraph.m"
    {
#line 481 "digraph.m"
      /* tailcall optimized into a loop */
#line 481 "digraph.m"
      {
#line 481 "digraph.m"
        MR_bool mercury__digraph__succeeded;

#line 481 "digraph.m"
        if ((mercury__digraph__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 481 "digraph.m"
          *mercury__digraph__STATE_VARIABLE_G_3 = mercury__digraph__STATE_VARIABLE_G_0_2;
#line 481 "digraph.m"
        else
#line 482 "digraph.m"
          {
#line 482 "digraph.m"
            MR_Word mercury__digraph__X_7;
#line 482 "digraph.m"
            MR_Word mercury__digraph__Y_8;
#line 482 "digraph.m"
            MR_Word mercury__digraph__Edges_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 1)));
#line 482 "digraph.m"
            MR_Word mercury__digraph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__digraph__HeadVar__1_1, (MR_Integer) 0)));
#line 482 "digraph.m"
            MR_Word mercury__digraph__STATE_VARIABLE_G_14_14;

#line 482 "digraph.m"
            mercury__digraph__X_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_13_13, (MR_Integer) 0)));
#line 482 "digraph.m"
            mercury__digraph__Y_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_13_13, (MR_Integer) 1)));
#line 483 "digraph.m"
            {
#line 483 "digraph.m"
              mercury__digraph__add_edge_4_p_0(mercury__digraph__TypeInfo_for_T_16, mercury__digraph__X_7, mercury__digraph__Y_8, mercury__digraph__STATE_VARIABLE_G_0_2, &mercury__digraph__STATE_VARIABLE_G_14_14);
            }
#line 484 "digraph.m"
            /* direct tailcall eliminated */
#line 484 "digraph.m"
            {
#line 484 "digraph.m"
              MR_Word mercury__digraph__HeadVar__1__tmp_copy_1 = mercury__digraph__Edges_9;
#line 484 "digraph.m"
              MR_Word mercury__digraph__STATE_VARIABLE_G_0__tmp_copy_2 = mercury__digraph__STATE_VARIABLE_G_14_14;

#line 484 "digraph.m"
              mercury__digraph__STATE_VARIABLE_G_0_2 = mercury__digraph__STATE_VARIABLE_G_0__tmp_copy_2;
#line 484 "digraph.m"
              mercury__digraph__HeadVar__1_1 = mercury__digraph__HeadVar__1__tmp_copy_1;
#line 484 "digraph.m"
            }
#line 484 "digraph.m"
            continue;
#line 482 "digraph.m"
          }
#line 481 "digraph.m"
      }
#line 481 "digraph.m"
      break;
#line 481 "digraph.m"
    }
#line 109 "digraph.m"
}

#line 107 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__add_assoc_list_2_f_0(
#line 107 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_9,
#line 107 "digraph.m"
  MR_Word mercury__digraph__Edges_4,
#line 107 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_6)
#line 107 "digraph.m"
{
#line 479 "digraph.m"
  {
#line 479 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 479 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_7;

#line 479 "digraph.m"
    {
#line 479 "digraph.m"
      mercury__digraph__add_assoc_list_3_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__Edges_4, mercury__digraph__STATE_VARIABLE_G_0_6, &mercury__digraph__STATE_VARIABLE_G_7);
    }
#line 479 "digraph.m"
    return mercury__digraph__STATE_VARIABLE_G_7;
#line 479 "digraph.m"
  }
#line 107 "digraph.m"
}

#line 102 "digraph.m"
void MR_CALL 
mercury__digraph__add_vertex_pair_3_p_0(
#line 102 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_10,
#line 102 "digraph.m"
  MR_Word mercury__digraph__HeadVar__1_1,
#line 102 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_7,
#line 102 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_G_8)
#line 102 "digraph.m"
{
#line 475 "digraph.m"
  {
#line 475 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 475 "digraph.m"
    MR_Box mercury__digraph__VX_4 = (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__1_1, (MR_Integer) 0));
#line 475 "digraph.m"
    MR_Box mercury__digraph__VY_5 = (MR_hl_field(MR_mktag(0), mercury__digraph__HeadVar__1_1, (MR_Integer) 1));
#line 475 "digraph.m"
    MR_Word mercury__digraph__X_16;
#line 475 "digraph.m"
    MR_Word mercury__digraph__Y_17;
#line 475 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_12_18;
#line 475 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_13_19;

#line 468 "digraph.m"
    {
#line 468 "digraph.m"
      mercury__digraph__add_vertex_4_p_0(mercury__digraph__TypeInfo_for_T_10, mercury__digraph__VX_4, &mercury__digraph__X_16, mercury__digraph__STATE_VARIABLE_G_0_7, &mercury__digraph__STATE_VARIABLE_G_12_18);
    }
#line 469 "digraph.m"
    {
#line 469 "digraph.m"
      mercury__digraph__add_vertex_4_p_0(mercury__digraph__TypeInfo_for_T_10, mercury__digraph__VY_5, &mercury__digraph__Y_17, mercury__digraph__STATE_VARIABLE_G_12_18, &mercury__digraph__STATE_VARIABLE_G_13_19);
    }
#line 470 "digraph.m"
    {
#line 470 "digraph.m"
      mercury__digraph__add_edge_4_p_0(mercury__digraph__TypeInfo_for_T_10, mercury__digraph__X_16, mercury__digraph__Y_17, mercury__digraph__STATE_VARIABLE_G_13_19, mercury__digraph__STATE_VARIABLE_G_8);
#line 470 "digraph.m"
      return;
    }
#line 475 "digraph.m"
  }
#line 102 "digraph.m"
}

#line 101 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__add_vertex_pair_2_f_0(
#line 101 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_9,
#line 101 "digraph.m"
  MR_Word mercury__digraph__Edge_4,
#line 101 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_6)
#line 101 "digraph.m"
{
#line 475 "digraph.m"
  {
#line 475 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 475 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_7;
#line 475 "digraph.m"
    MR_Box mercury__digraph__VX_12 = (MR_hl_field(MR_mktag(0), mercury__digraph__Edge_4, (MR_Integer) 0));
#line 475 "digraph.m"
    MR_Box mercury__digraph__VY_13 = (MR_hl_field(MR_mktag(0), mercury__digraph__Edge_4, (MR_Integer) 1));
#line 475 "digraph.m"
    MR_Word mercury__digraph__X_21;
#line 475 "digraph.m"
    MR_Word mercury__digraph__Y_22;
#line 475 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_12_23;
#line 475 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_13_24;

#line 468 "digraph.m"
    {
#line 468 "digraph.m"
      mercury__digraph__add_vertex_4_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__VX_12, &mercury__digraph__X_21, mercury__digraph__STATE_VARIABLE_G_0_6, &mercury__digraph__STATE_VARIABLE_G_12_23);
    }
#line 469 "digraph.m"
    {
#line 469 "digraph.m"
      mercury__digraph__add_vertex_4_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__VY_13, &mercury__digraph__Y_22, mercury__digraph__STATE_VARIABLE_G_12_23, &mercury__digraph__STATE_VARIABLE_G_13_24);
    }
#line 470 "digraph.m"
    {
#line 470 "digraph.m"
      mercury__digraph__add_edge_4_p_0(mercury__digraph__TypeInfo_for_T_9, mercury__digraph__X_21, mercury__digraph__Y_22, mercury__digraph__STATE_VARIABLE_G_13_24, &mercury__digraph__STATE_VARIABLE_G_7);
    }
#line 475 "digraph.m"
    return mercury__digraph__STATE_VARIABLE_G_7;
#line 475 "digraph.m"
  }
#line 101 "digraph.m"
}

#line 96 "digraph.m"
void MR_CALL 
mercury__digraph__add_vertices_and_edge_4_p_0(
#line 96 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_15,
#line 96 "digraph.m"
  MR_Box mercury__digraph__VX_5,
#line 96 "digraph.m"
  MR_Box mercury__digraph__VY_6,
#line 96 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_10,
#line 96 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_G_11)
#line 96 "digraph.m"
{
#line 467 "digraph.m"
  {
#line 467 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 467 "digraph.m"
    MR_Word mercury__digraph__X_8;
#line 467 "digraph.m"
    MR_Word mercury__digraph__Y_9;
#line 467 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_12_12;
#line 467 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_13_13;

#line 468 "digraph.m"
    {
#line 468 "digraph.m"
      mercury__digraph__add_vertex_4_p_0(mercury__digraph__TypeInfo_for_T_15, mercury__digraph__VX_5, &mercury__digraph__X_8, mercury__digraph__STATE_VARIABLE_G_0_10, &mercury__digraph__STATE_VARIABLE_G_12_12);
    }
#line 469 "digraph.m"
    {
#line 469 "digraph.m"
      mercury__digraph__add_vertex_4_p_0(mercury__digraph__TypeInfo_for_T_15, mercury__digraph__VY_6, &mercury__digraph__Y_9, mercury__digraph__STATE_VARIABLE_G_12_12, &mercury__digraph__STATE_VARIABLE_G_13_13);
    }
#line 470 "digraph.m"
    {
#line 470 "digraph.m"
      mercury__digraph__add_edge_4_p_0(mercury__digraph__TypeInfo_for_T_15, mercury__digraph__X_8, mercury__digraph__Y_9, mercury__digraph__STATE_VARIABLE_G_13_13, mercury__digraph__STATE_VARIABLE_G_11);
#line 470 "digraph.m"
      return;
    }
#line 467 "digraph.m"
  }
#line 96 "digraph.m"
}

#line 95 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__add_vertices_and_edge_3_f_0(
#line 95 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_11,
#line 95 "digraph.m"
  MR_Box mercury__digraph__VX_5,
#line 95 "digraph.m"
  MR_Box mercury__digraph__VY_6,
#line 95 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_8)
#line 95 "digraph.m"
{
#line 467 "digraph.m"
  {
#line 467 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 467 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_9;
#line 467 "digraph.m"
    MR_Word mercury__digraph__X_17;
#line 467 "digraph.m"
    MR_Word mercury__digraph__Y_18;
#line 467 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_12_19;
#line 467 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_13_20;

#line 468 "digraph.m"
    {
#line 468 "digraph.m"
      mercury__digraph__add_vertex_4_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__VX_5, &mercury__digraph__X_17, mercury__digraph__STATE_VARIABLE_G_0_8, &mercury__digraph__STATE_VARIABLE_G_12_19);
    }
#line 469 "digraph.m"
    {
#line 469 "digraph.m"
      mercury__digraph__add_vertex_4_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__VY_6, &mercury__digraph__Y_18, mercury__digraph__STATE_VARIABLE_G_12_19, &mercury__digraph__STATE_VARIABLE_G_13_20);
    }
#line 470 "digraph.m"
    {
#line 470 "digraph.m"
      mercury__digraph__add_edge_4_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__X_17, mercury__digraph__Y_18, mercury__digraph__STATE_VARIABLE_G_13_20, &mercury__digraph__STATE_VARIABLE_G_9);
    }
#line 467 "digraph.m"
    return mercury__digraph__STATE_VARIABLE_G_9;
#line 467 "digraph.m"
  }
#line 95 "digraph.m"
}

#line 84 "digraph.m"
void MR_CALL 
mercury__digraph__add_edge_4_p_0(
#line 84 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_32,
#line 84 "digraph.m"
  MR_Word mercury__digraph__X_5,
#line 84 "digraph.m"
  MR_Word mercury__digraph__Y_6,
#line 84 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_10,
#line 84 "digraph.m"
  MR_Word * mercury__digraph__STATE_VARIABLE_G_11)
#line 84 "digraph.m"
{
#line 458 "digraph.m"
  {
#line 458 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 458 "digraph.m"
    MR_Integer mercury__digraph__XI_8 = (MR_Integer) mercury__digraph__X_5;
#line 458 "digraph.m"
    MR_Integer mercury__digraph__YI_9 = (MR_Integer) mercury__digraph__Y_6;
#line 458 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_12_12;
#line 458 "digraph.m"
    MR_Word mercury__digraph__V_13_13;
#line 458 "digraph.m"
    MR_Word mercury__digraph__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 2)));
#line 458 "digraph.m"
    MR_Word mercury__digraph__V_16_16;
#line 458 "digraph.m"
    MR_Word mercury__digraph__V_24_24;
#line 461 "digraph.m"
    MR_Integer mercury__digraph__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 0)));
#line 461 "digraph.m"
    MR_Word mercury__digraph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 1)));
#line 461 "digraph.m"
    MR_Word mercury__digraph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 3)));
#line 384 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_16_43;
#line 384 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_18_45;
#line 384 "digraph.m"
    MR_Word mercury__digraph__SuccXs0_37;
#line 377 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_15_42 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 377 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_17_44 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 39 "map.opt"
    MR_Box mercury__digraph__conv0_SuccXs0_37;
#line 461 "digraph.m"
    MR_Integer mercury__digraph__V_21_21;
#line 461 "digraph.m"
    MR_Word mercury__digraph__V_22_22;
#line 461 "digraph.m"
    MR_Word mercury__digraph__V_23_23;
#line 462 "digraph.m"
    MR_Integer mercury__digraph__V_28_28;
#line 462 "digraph.m"
    MR_Word mercury__digraph__V_29_29;
#line 462 "digraph.m"
    MR_Word mercury__digraph__V_30_30;
#line 462 "digraph.m"
    MR_Word mercury__digraph__V_31_31;

#line 15283 "digraph.c"
    {
#line 15285 "digraph.c"
      mercury__digraph__TypeInfo_16_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15287 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_43, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_15_42));
#line 15289 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_16_43, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_32));
#line 15291 "digraph.c"
    }
#line 15293 "digraph.c"
    {
#line 15295 "digraph.c"
      mercury__digraph__TypeInfo_18_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15297 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_18_45, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_17_44));
#line 15299 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_18_45, 1) = ((MR_Box) (mercury__digraph__TypeInfo_16_43));
#line 15301 "digraph.c"
    }
#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__digraph__TypeInfo_18_45, (MR_Word) mercury__digraph__V_14_14, mercury__digraph__XI_8, &mercury__digraph__conv0_SuccXs0_37);
    }
#line 39 "map.opt"
    if (mercury__digraph__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__digraph__SuccXs0_37 = ((MR_Word) mercury__digraph__conv0_SuccXs0_37);
#line 39 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 384 "digraph.m"
    if (mercury__digraph__succeeded)
#line 380 "digraph.m"
      {
#line 378 "digraph.m"
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_48 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 378 "digraph.m"
        MR_Word mercury__digraph__TypeClassInfo_for_enum_49;
#line 378 "digraph.m"
        MR_Word mercury__digraph__Set_3_69;
#line 378 "digraph.m"
        MR_Integer mercury__digraph__V_5_70;
#line 15330 "digraph.c"
        MR_Box MR_CALL (* mercury__digraph__func_1)(MR_Box, MR_Box);
#line 15332 "digraph.c"
        MR_Box mercury__digraph__conv2_V_5_70;

#line 15335 "digraph.c"
        {
#line 15337 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 15339 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_49, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_48));
#line 15341 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_49, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_32));
#line 15343 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_49, 2) = ((MR_Box) (mercury__digraph__TypeInfo_16_43));
#line 15345 "digraph.c"
        }
#line 162 "sparse_bitset.opt"
        mercury__digraph__Set_3_69 = (MR_Word) mercury__digraph__SuccXs0_37;
#line 15349 "digraph.c"
        mercury__digraph__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_49, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15351 "digraph.c"
        {
#line 15353 "digraph.c"
          mercury__digraph__conv2_V_5_70 = mercury__digraph__func_1(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_49), ((MR_Box) (mercury__digraph__Y_6)));
        }
#line 15356 "digraph.c"
        mercury__digraph__V_5_70 = ((MR_Integer) mercury__digraph__conv2_V_5_70);
#line 164 "sparse_bitset.opt"
        {
#line 164 "sparse_bitset.opt"
          mercury__digraph__succeeded = mercury__sparse_bitset__contains_search_nodes_2_p_0(mercury__digraph__Set_3_69, mercury__digraph__V_5_70);
        }
#line 380 "digraph.m"
        if (mercury__digraph__succeeded)
#line 379 "digraph.m"
          mercury__digraph__V_13_13 = mercury__digraph__V_14_14;
#line 380 "digraph.m"
        else
#line 381 "digraph.m"
          {
#line 381 "digraph.m"
            MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_52 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 381 "digraph.m"
            MR_Word mercury__digraph__TypeClassInfo_for_enum_53;
#line 381 "digraph.m"
            MR_Word mercury__digraph__TypeCtorInfo_27_54;
#line 381 "digraph.m"
            MR_Word mercury__digraph__SuccXs_38;
#line 381 "digraph.m"
            MR_Word mercury__digraph__Set0_6_74;
#line 381 "digraph.m"
            MR_Integer mercury__digraph__V_9_76;
#line 381 "digraph.m"
            MR_Word mercury__digraph__Set_5_77;
#line 15385 "digraph.c"
            MR_Box MR_CALL (* mercury__digraph__func_3)(MR_Box, MR_Box);
#line 15387 "digraph.c"
            MR_Box mercury__digraph__conv4_V_9_76;

#line 15390 "digraph.c"
            {
#line 15392 "digraph.c"
              mercury__digraph__TypeClassInfo_for_enum_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 15394 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_53, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_52));
#line 15396 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_53, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_32));
#line 15398 "digraph.c"
              MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_53, 2) = ((MR_Box) (mercury__digraph__TypeInfo_16_43));
#line 15400 "digraph.c"
            }
#line 168 "sparse_bitset.opt"
            mercury__digraph__Set0_6_74 = (MR_Word) mercury__digraph__SuccXs0_37;
#line 15404 "digraph.c"
            mercury__digraph__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_53, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15406 "digraph.c"
            {
#line 15408 "digraph.c"
              mercury__digraph__conv4_V_9_76 = mercury__digraph__func_3(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_53), ((MR_Box) (mercury__digraph__Y_6)));
            }
#line 15411 "digraph.c"
            mercury__digraph__V_9_76 = ((MR_Integer) mercury__digraph__conv4_V_9_76);
#line 170 "sparse_bitset.opt"
            {
#line 170 "sparse_bitset.opt"
              mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__Set0_6_74, mercury__digraph__V_9_76, &mercury__digraph__Set_5_77);
            }
#line 171 "sparse_bitset.opt"
            mercury__digraph__SuccXs_38 = (MR_Word) mercury__digraph__Set_5_77;
#line 15420 "digraph.c"
            mercury__digraph__TypeCtorInfo_27_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 89 "map.opt"
            {
#line 89 "map.opt"
              mercury__map__det_update_4_p_0(mercury__digraph__TypeCtorInfo_27_54, mercury__digraph__TypeInfo_18_45, ((MR_Box) (mercury__digraph__XI_8)), ((MR_Box) (mercury__digraph__SuccXs_38)), mercury__digraph__V_14_14, &mercury__digraph__V_13_13);
            }
#line 381 "digraph.m"
          }
#line 380 "digraph.m"
      }
#line 384 "digraph.m"
    else
#line 385 "digraph.m"
      {
#line 385 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_30_57 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 385 "digraph.m"
        MR_Word mercury__digraph__TypeInfo_31_58;
#line 385 "digraph.m"
        MR_Word mercury__digraph__BaseTypeClassInfo_for_enum_59;
#line 385 "digraph.m"
        MR_Word mercury__digraph__TypeClassInfo_for_enum_60;
#line 385 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_34_61;
#line 385 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_35_62;
#line 385 "digraph.m"
        MR_Word mercury__digraph__TypeInfo_36_63;
#line 385 "digraph.m"
        MR_Word mercury__digraph__SuccXs_40;
#line 385 "digraph.m"
        MR_Word mercury__digraph__Set0_6_87;
#line 385 "digraph.m"
        MR_Integer mercury__digraph__V_9_89;
#line 385 "digraph.m"
        MR_Word mercury__digraph__Set_5_90;
#line 15457 "digraph.c"
        MR_Box MR_CALL (* mercury__digraph__func_5)(MR_Box, MR_Box);
#line 15459 "digraph.c"
        MR_Box mercury__digraph__conv6_V_9_89;

#line 15462 "digraph.c"
        {
#line 15464 "digraph.c"
          mercury__digraph__TypeInfo_31_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15466 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_31_58, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_30_57));
#line 15468 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_31_58, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_32));
#line 15470 "digraph.c"
        }
#line 114 "sparse_bitset.opt"
        mercury__digraph__Set0_6_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 15474 "digraph.c"
        mercury__digraph__BaseTypeClassInfo_for_enum_59 = (MR_Word) base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__;
#line 15476 "digraph.c"
        {
#line 15478 "digraph.c"
          mercury__digraph__TypeClassInfo_for_enum_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 15480 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_60, 0) = ((MR_Box) (mercury__digraph__BaseTypeClassInfo_for_enum_59));
#line 15482 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_60, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_32));
#line 15484 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_60, 2) = ((MR_Box) (mercury__digraph__TypeInfo_31_58));
#line 15486 "digraph.c"
        }
#line 15488 "digraph.c"
        mercury__digraph__func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__digraph__TypeClassInfo_for_enum_60, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15490 "digraph.c"
        {
#line 15492 "digraph.c"
          mercury__digraph__conv6_V_9_89 = mercury__digraph__func_5(((MR_Box) mercury__digraph__TypeClassInfo_for_enum_60), ((MR_Box) (mercury__digraph__Y_6)));
        }
#line 15495 "digraph.c"
        mercury__digraph__V_9_89 = ((MR_Integer) mercury__digraph__conv6_V_9_89);
#line 170 "sparse_bitset.opt"
        {
#line 170 "sparse_bitset.opt"
          mercury__sparse_bitset__insert_2_3_p_0(mercury__digraph__Set0_6_87, mercury__digraph__V_9_89, &mercury__digraph__Set_5_90);
        }
#line 171 "sparse_bitset.opt"
        mercury__digraph__SuccXs_40 = (MR_Word) mercury__digraph__Set_5_90;
#line 15504 "digraph.c"
        mercury__digraph__TypeCtorInfo_34_61 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 15506 "digraph.c"
        mercury__digraph__TypeCtorInfo_35_62 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 15508 "digraph.c"
        {
#line 15510 "digraph.c"
          mercury__digraph__TypeInfo_36_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15512 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_36_63, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_35_62));
#line 15514 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_36_63, 1) = ((MR_Box) (mercury__digraph__TypeInfo_31_58));
#line 15516 "digraph.c"
        }
#line 75 "map.opt"
        {
#line 75 "map.opt"
          mercury__map__det_insert_4_p_0(mercury__digraph__TypeCtorInfo_34_61, mercury__digraph__TypeInfo_36_63, ((MR_Box) (mercury__digraph__XI_8)), ((MR_Box) (mercury__digraph__SuccXs_40)), mercury__digraph__V_14_14, &mercury__digraph__V_13_13);
        }
#line 385 "digraph.m"
      }
#line 461 "digraph.m"
    mercury__digraph__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 0)));
#line 461 "digraph.m"
    mercury__digraph__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 1)));
#line 461 "digraph.m"
    mercury__digraph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 2)));
#line 461 "digraph.m"
    mercury__digraph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_10, (MR_Integer) 3)));
#line 461 "digraph.m"
    {
#line 461 "digraph.m"
      mercury__digraph__STATE_VARIABLE_G_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 461 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 0) = ((MR_Box) (mercury__digraph__V_21_21));
#line 461 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 1) = ((MR_Box) (mercury__digraph__V_22_22));
#line 461 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 2) = ((MR_Box) (mercury__digraph__V_13_13));
#line 461 "digraph.m"
      MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 3) = ((MR_Box) (mercury__digraph__V_24_24));
#line 461 "digraph.m"
    }
#line 462 "digraph.m"
    {
#line 462 "digraph.m"
      mercury__digraph__V_16_16 = mercury__digraph__key_set_map_add_3_f_0(mercury__digraph__TypeInfo_for_T_32, mercury__digraph__V_24_24, mercury__digraph__YI_9, mercury__digraph__X_5);
    }
#line 462 "digraph.m"
    mercury__digraph__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 0)));
#line 462 "digraph.m"
    mercury__digraph__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 1)));
#line 462 "digraph.m"
    mercury__digraph__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 2)));
#line 462 "digraph.m"
    mercury__digraph__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 3)));
#line 462 "digraph.m"
    {
#line 462 "digraph.m"
      MR_Word base;
#line 462 "digraph.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 462 "digraph.m"
      *mercury__digraph__STATE_VARIABLE_G_11 = base;
#line 462 "digraph.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__digraph__V_28_28));
#line 462 "digraph.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__digraph__V_29_29));
#line 462 "digraph.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__digraph__V_30_30));
#line 462 "digraph.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__digraph__V_16_16));
#line 462 "digraph.m"
    }
#line 458 "digraph.m"
  }
#line 84 "digraph.m"
}

#line 82 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__add_edge_3_f_0(
#line 82 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_11,
#line 82 "digraph.m"
  MR_Word mercury__digraph__X_5,
#line 82 "digraph.m"
  MR_Word mercury__digraph__Y_6,
#line 82 "digraph.m"
  MR_Word mercury__digraph__STATE_VARIABLE_G_0_8)
#line 82 "digraph.m"
{
#line 456 "digraph.m"
  {
#line 456 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 456 "digraph.m"
    MR_Word mercury__digraph__STATE_VARIABLE_G_9;

#line 456 "digraph.m"
    {
#line 456 "digraph.m"
      mercury__digraph__add_edge_4_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__X_5, mercury__digraph__Y_6, mercury__digraph__STATE_VARIABLE_G_0_8, &mercury__digraph__STATE_VARIABLE_G_9);
    }
#line 456 "digraph.m"
    return mercury__digraph__STATE_VARIABLE_G_9;
#line 456 "digraph.m"
  }
#line 82 "digraph.m"
}

#line 76 "digraph.m"
void MR_CALL 
mercury__digraph__lookup_vertex_3_p_0(
#line 76 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_15,
#line 76 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 76 "digraph.m"
  MR_Word mercury__digraph__Key_5,
#line 76 "digraph.m"
  MR_Box * mercury__digraph__Vertex_6)
#line 76 "digraph.m"
{
#line 449 "digraph.m"
  {
#line 449 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 449 "digraph.m"
    MR_Box mercury__digraph__Vertex0_7;
#line 447 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_16_16 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 447 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_17_17;
#line 447 "digraph.m"
    MR_Word mercury__digraph__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 1)));
#line 447 "digraph.m"
    MR_Word mercury__digraph__Forward_4_20;
#line 447 "digraph.m"
    MR_Word mercury__digraph__Reverse_5_21;
#line 447 "digraph.m"
    MR_Word mercury__digraph__V_23_23;
#line 447 "digraph.m"
    MR_Integer mercury__digraph__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 0)));
#line 447 "digraph.m"
    MR_Word mercury__digraph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 2)));
#line 447 "digraph.m"
    MR_Word mercury__digraph__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 3)));
#line 39 "map.opt"
    MR_Box mercury__digraph__conv0_V_23_23;

#line 15655 "digraph.c"
    {
#line 15657 "digraph.c"
      mercury__digraph__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15659 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_16_16));
#line 15661 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_17_17, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_15));
#line 15663 "digraph.c"
    }
#line 31 "bimap.opt"
    mercury__digraph__Forward_4_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_8_8, (MR_Integer) 0)));
#line 31 "bimap.opt"
    mercury__digraph__Reverse_5_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_8_8, (MR_Integer) 1)));
#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_17_17, mercury__digraph__TypeInfo_for_T_15, (MR_Word) mercury__digraph__Reverse_5_21, ((MR_Box) (mercury__digraph__Key_5)), &mercury__digraph__Vertex0_7);
    }
#line 447 "digraph.m"
    if (mercury__digraph__succeeded)
#line 447 "digraph.m"
      {
#line 39 "map.opt"
        {
#line 39 "map.opt"
          mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_for_T_15, mercury__digraph__TypeInfo_17_17, mercury__digraph__Forward_4_20, mercury__digraph__Vertex0_7, &mercury__digraph__conv0_V_23_23);
        }
#line 39 "map.opt"
        if (mercury__digraph__succeeded)
#line 39 "map.opt"
          {
#line 39 "map.opt"
            mercury__digraph__V_23_23 = ((MR_Word) mercury__digraph__conv0_V_23_23);
#line 39 "map.opt"
            mercury__digraph__succeeded = MR_TRUE;
#line 39 "map.opt"
          }
#line 447 "digraph.m"
        if (mercury__digraph__succeeded)
#line 32 "bimap.opt"
          {
#line 32 "bimap.opt"
            mercury__digraph__succeeded = mercury__builtin__unify_2_p_0(mercury__digraph__TypeInfo_17_17, ((MR_Box) (mercury__digraph__Key_5)), ((MR_Box) (mercury__digraph__V_23_23)));
          }
#line 447 "digraph.m"
      }
#line 449 "digraph.m"
    if (mercury__digraph__succeeded)
#line 448 "digraph.m"
      *mercury__digraph__Vertex_6 = mercury__digraph__Vertex0_7;
#line 449 "digraph.m"
    else
#line 450 "digraph.m"
      {
#line 450 "digraph.m"
        {
#line 450 "digraph.m"
          mercury__require__unexpected_3_p_0((MR_String) "digraph", (MR_String) "predicate \140digraph.lookup_vertex\'/3", (MR_String) "search for vertex failed");
#line 450 "digraph.m"
          return;
        }
#line 450 "digraph.m"
      }
#line 449 "digraph.m"
  }
#line 76 "digraph.m"
}

#line 75 "digraph.m"
MR_Box MR_CALL 
mercury__digraph__lookup_vertex_2_f_0(
#line 75 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_7,
#line 75 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 75 "digraph.m"
  MR_Word mercury__digraph__Key_5)
#line 75 "digraph.m"
{
#line 444 "digraph.m"
  {
#line 444 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 444 "digraph.m"
    MR_Box mercury__digraph__Vertex_6;

#line 444 "digraph.m"
    {
#line 444 "digraph.m"
      mercury__digraph__lookup_vertex_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__Key_5, &mercury__digraph__Vertex_6);
    }
#line 444 "digraph.m"
    return mercury__digraph__Vertex_6;
#line 444 "digraph.m"
  }
#line 75 "digraph.m"
}

#line 70 "digraph.m"
void MR_CALL 
mercury__digraph__lookup_key_3_p_0(
#line 70 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_11,
#line 70 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 70 "digraph.m"
  MR_Box mercury__digraph__Vertex_5,
#line 70 "digraph.m"
  MR_Word * mercury__digraph__Key_6)
#line 70 "digraph.m"
{
#line 439 "digraph.m"
  {
#line 439 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 439 "digraph.m"
    MR_Word mercury__digraph__Key0_7;
#line 430 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_12_19 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 430 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_13_20;
#line 430 "digraph.m"
    MR_Word mercury__digraph__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 1)));
#line 430 "digraph.m"
    MR_Word mercury__digraph__Forward_4_23;
#line 430 "digraph.m"
    MR_Word mercury__digraph__Reverse_5_24;
#line 430 "digraph.m"
    MR_Box mercury__digraph__V_25_25;
#line 431 "digraph.m"
    MR_Integer mercury__digraph__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 0)));
#line 431 "digraph.m"
    MR_Word mercury__digraph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 2)));
#line 431 "digraph.m"
    MR_Word mercury__digraph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 3)));
#line 39 "map.opt"
    MR_Box mercury__digraph__conv0_Key0_7;

#line 15794 "digraph.c"
    {
#line 15796 "digraph.c"
      mercury__digraph__TypeInfo_13_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15798 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_13_20, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_12_19));
#line 15800 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_13_20, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_11));
#line 15802 "digraph.c"
    }
#line 31 "bimap.opt"
    mercury__digraph__Forward_4_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_15_15, (MR_Integer) 0)));
#line 31 "bimap.opt"
    mercury__digraph__Reverse_5_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_15_15, (MR_Integer) 1)));
#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__TypeInfo_13_20, mercury__digraph__Forward_4_23, mercury__digraph__Vertex_5, &mercury__digraph__conv0_Key0_7);
    }
#line 39 "map.opt"
    if (mercury__digraph__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__digraph__Key0_7 = ((MR_Word) mercury__digraph__conv0_Key0_7);
#line 39 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 430 "digraph.m"
    if (mercury__digraph__succeeded)
#line 430 "digraph.m"
      {
#line 39 "map.opt"
        {
#line 39 "map.opt"
          mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_13_20, mercury__digraph__TypeInfo_for_T_11, (MR_Word) mercury__digraph__Reverse_5_24, ((MR_Box) (mercury__digraph__Key0_7)), &mercury__digraph__V_25_25);
        }
#line 430 "digraph.m"
        if (mercury__digraph__succeeded)
#line 33 "bimap.opt"
          {
#line 33 "bimap.opt"
            mercury__digraph__succeeded = mercury__builtin__unify_2_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__Vertex_5, mercury__digraph__V_25_25);
          }
#line 430 "digraph.m"
      }
#line 439 "digraph.m"
    if (mercury__digraph__succeeded)
#line 438 "digraph.m"
      *mercury__digraph__Key_6 = mercury__digraph__Key0_7;
#line 439 "digraph.m"
    else
#line 440 "digraph.m"
      {
#line 440 "digraph.m"
        {
#line 440 "digraph.m"
          mercury__require__unexpected_3_p_0((MR_String) "digraph", (MR_String) "predicate \140digraph.lookup_key\'/3", (MR_String) "search for key failed");
#line 440 "digraph.m"
          return;
        }
#line 440 "digraph.m"
      }
#line 439 "digraph.m"
  }
#line 70 "digraph.m"
}

#line 69 "digraph.m"
MR_Word MR_CALL 
mercury__digraph__lookup_key_2_f_0(
#line 69 "digraph.m"
  MR_Word mercury__digraph__TypeInfo_for_T_7,
#line 69 "digraph.m"
  MR_Word mercury__digraph__G_4,
#line 69 "digraph.m"
  MR_Box mercury__digraph__Vertex_5)
#line 69 "digraph.m"
{
#line 434 "digraph.m"
  {
#line 434 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 434 "digraph.m"
    MR_Word mercury__digraph__Key_6;

#line 434 "digraph.m"
    {
#line 434 "digraph.m"
      mercury__digraph__lookup_key_3_p_0(mercury__digraph__TypeInfo_for_T_7, mercury__digraph__G_4, mercury__digraph__Vertex_5, &mercury__digraph__Key_6);
    }
#line 434 "digraph.m"
    return mercury__digraph__Key_6;
#line 434 "digraph.m"
  }
#line 69 "digraph.m"
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
#line 430 "digraph.m"
  {
#line 430 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 430 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_12_12 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 430 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_13_13;
#line 430 "digraph.m"
    MR_Word mercury__digraph__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 1)));
#line 430 "digraph.m"
    MR_Word mercury__digraph__Forward_4_16;
#line 430 "digraph.m"
    MR_Word mercury__digraph__Reverse_5_17;
#line 430 "digraph.m"
    MR_Box mercury__digraph__V_18_18;
#line 431 "digraph.m"
    MR_Integer mercury__digraph__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 0)));
#line 431 "digraph.m"
    MR_Word mercury__digraph__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 2)));
#line 431 "digraph.m"
    MR_Word mercury__digraph__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__G_4, (MR_Integer) 3)));
#line 39 "map.opt"
    MR_Box mercury__digraph__conv0_Key_6;

#line 15931 "digraph.c"
    {
#line 15933 "digraph.c"
      mercury__digraph__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15935 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_13_13, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_12_12));
#line 15937 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_13_13, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_11));
#line 15939 "digraph.c"
    }
#line 31 "bimap.opt"
    mercury__digraph__Forward_4_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_7_7, (MR_Integer) 0)));
#line 31 "bimap.opt"
    mercury__digraph__Reverse_5_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_7_7, (MR_Integer) 1)));
#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__TypeInfo_13_13, mercury__digraph__Forward_4_16, mercury__digraph__Vertex_5, &mercury__digraph__conv0_Key_6);
    }
#line 39 "map.opt"
    if (mercury__digraph__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        *mercury__digraph__Key_6 = ((MR_Word) mercury__digraph__conv0_Key_6);
#line 39 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 430 "digraph.m"
    if (mercury__digraph__succeeded)
#line 430 "digraph.m"
      {
#line 39 "map.opt"
        {
#line 39 "map.opt"
          mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_13_13, mercury__digraph__TypeInfo_for_T_11, (MR_Word) mercury__digraph__Reverse_5_17, ((MR_Box) (*mercury__digraph__Key_6)), &mercury__digraph__V_18_18);
        }
#line 430 "digraph.m"
        if (mercury__digraph__succeeded)
#line 33 "bimap.opt"
          {
#line 33 "bimap.opt"
            return mercury__digraph__succeeded = mercury__builtin__unify_2_p_0(mercury__digraph__TypeInfo_for_T_11, mercury__digraph__Vertex_5, mercury__digraph__V_18_18);
          }
#line 430 "digraph.m"
      }
#line 430 "digraph.m"
    return mercury__digraph__succeeded;
#line 430 "digraph.m"
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
#line 416 "digraph.m"
  {
#line 416 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 416 "digraph.m"
    MR_Word mercury__digraph__Key0_8;
#line 414 "digraph.m"
    MR_Word mercury__digraph__TypeCtorInfo_27_27 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 414 "digraph.m"
    MR_Word mercury__digraph__TypeInfo_28_28;
#line 414 "digraph.m"
    MR_Word mercury__digraph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_9, (MR_Integer) 1)));
#line 414 "digraph.m"
    MR_Word mercury__digraph__Forward_4_33;
#line 414 "digraph.m"
    MR_Word mercury__digraph__Reverse_5_34;
#line 414 "digraph.m"
    MR_Box mercury__digraph__V_35_35;
#line 414 "digraph.m"
    MR_Integer mercury__digraph__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_9, (MR_Integer) 0)));
#line 414 "digraph.m"
    MR_Word mercury__digraph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_9, (MR_Integer) 2)));
#line 414 "digraph.m"
    MR_Word mercury__digraph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_9, (MR_Integer) 3)));
#line 39 "map.opt"
    MR_Box mercury__digraph__conv0_Key0_8;

#line 16027 "digraph.c"
    {
#line 16029 "digraph.c"
      mercury__digraph__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 16031 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_28_28, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_27_27));
#line 16033 "digraph.c"
      MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_28_28, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_26));
#line 16035 "digraph.c"
    }
#line 31 "bimap.opt"
    mercury__digraph__Forward_4_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_11_11, (MR_Integer) 0)));
#line 31 "bimap.opt"
    mercury__digraph__Reverse_5_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__V_11_11, (MR_Integer) 1)));
#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_for_T_26, mercury__digraph__TypeInfo_28_28, mercury__digraph__Forward_4_33, mercury__digraph__Vertex_5, &mercury__digraph__conv0_Key0_8);
    }
#line 39 "map.opt"
    if (mercury__digraph__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__digraph__Key0_8 = ((MR_Word) mercury__digraph__conv0_Key0_8);
#line 39 "map.opt"
        mercury__digraph__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 414 "digraph.m"
    if (mercury__digraph__succeeded)
#line 414 "digraph.m"
      {
#line 39 "map.opt"
        {
#line 39 "map.opt"
          mercury__digraph__succeeded = mercury__tree234__search_3_p_0(mercury__digraph__TypeInfo_28_28, mercury__digraph__TypeInfo_for_T_26, (MR_Word) mercury__digraph__Reverse_5_34, ((MR_Box) (mercury__digraph__Key0_8)), &mercury__digraph__V_35_35);
        }
#line 414 "digraph.m"
        if (mercury__digraph__succeeded)
#line 33 "bimap.opt"
          {
#line 33 "bimap.opt"
            mercury__digraph__succeeded = mercury__builtin__unify_2_p_0(mercury__digraph__TypeInfo_for_T_26, mercury__digraph__Vertex_5, mercury__digraph__V_35_35);
          }
#line 414 "digraph.m"
      }
#line 416 "digraph.m"
    if (mercury__digraph__succeeded)
#line 415 "digraph.m"
      {
#line 415 "digraph.m"
        *mercury__digraph__Key_6 = mercury__digraph__Key0_8;
#line 415 "digraph.m"
        *mercury__digraph__STATE_VARIABLE_G_10 = mercury__digraph__STATE_VARIABLE_G_0_9;
#line 415 "digraph.m"
      }
#line 416 "digraph.m"
    else
#line 417 "digraph.m"
      {
#line 417 "digraph.m"
        MR_Word mercury__digraph__TypeCtorInfo_29_29;
#line 417 "digraph.m"
        MR_Word mercury__digraph__TypeInfo_30_30;
#line 417 "digraph.m"
        MR_Word mercury__digraph__STATE_VARIABLE_G_12_12;
#line 417 "digraph.m"
        MR_Word mercury__digraph__V_14_14;
#line 417 "digraph.m"
        MR_Integer mercury__digraph__I_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_9, (MR_Integer) 0)));
#line 417 "digraph.m"
        MR_Integer mercury__digraph__V_47_47;
#line 417 "digraph.m"
        MR_Word mercury__digraph__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_9, (MR_Integer) 1)));
#line 417 "digraph.m"
        MR_Word mercury__digraph__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_9, (MR_Integer) 2)));
#line 417 "digraph.m"
        MR_Word mercury__digraph__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_0_9, (MR_Integer) 3)));
#line 418 "digraph.m"
        MR_Integer mercury__digraph__V_22_22;
#line 418 "digraph.m"
        MR_Word mercury__digraph__V_24_24;
#line 418 "digraph.m"
        MR_Word mercury__digraph__V_25_25;
#line 418 "digraph.m"
        MR_Word mercury__digraph__V_23_23;

#line 424 "digraph.m"
        *mercury__digraph__Key_6 = (MR_Word) mercury__digraph__I_44;
#line 426 "digraph.m"
        mercury__digraph__V_47_47 = (mercury__digraph__I_44 + (MR_Integer) 1);
#line 426 "digraph.m"
        {
#line 426 "digraph.m"
          mercury__digraph__STATE_VARIABLE_G_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 426 "digraph.m"
          MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 0) = ((MR_Box) (mercury__digraph__V_47_47));
#line 426 "digraph.m"
          MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 1) = ((MR_Box) (mercury__digraph__V_49_49));
#line 426 "digraph.m"
          MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 2) = ((MR_Box) (mercury__digraph__V_50_50));
#line 426 "digraph.m"
          MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, 3) = ((MR_Box) (mercury__digraph__V_51_51));
#line 426 "digraph.m"
        }
#line 16133 "digraph.c"
        mercury__digraph__TypeCtorInfo_29_29 = (MR_Word) &mercury__digraph__digraph__type_ctor_info_digraph_key_1;
#line 16135 "digraph.c"
        {
#line 16137 "digraph.c"
          mercury__digraph__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 16139 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_30_30, 0) = ((MR_Box) (mercury__digraph__TypeCtorInfo_29_29));
#line 16141 "digraph.c"
          MR_hl_field(MR_mktag(0), mercury__digraph__TypeInfo_30_30, 1) = ((MR_Box) (mercury__digraph__TypeInfo_for_T_26));
#line 16143 "digraph.c"
        }
#line 75 "bimap.opt"
        {
#line 75 "bimap.opt"
          mercury__bimap__set_4_p_0(mercury__digraph__TypeInfo_for_T_26, mercury__digraph__TypeInfo_30_30, mercury__digraph__Vertex_5, ((MR_Box) (*mercury__digraph__Key_6)), mercury__digraph__V_49_49, &mercury__digraph__V_14_14);
        }
#line 418 "digraph.m"
        mercury__digraph__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 0)));
#line 418 "digraph.m"
        mercury__digraph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 1)));
#line 418 "digraph.m"
        mercury__digraph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 2)));
#line 418 "digraph.m"
        mercury__digraph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__digraph__STATE_VARIABLE_G_12_12, (MR_Integer) 3)));
#line 418 "digraph.m"
        {
#line 418 "digraph.m"
          MR_Word base;
#line 418 "digraph.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 418 "digraph.m"
          *mercury__digraph__STATE_VARIABLE_G_10 = base;
#line 418 "digraph.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__digraph__V_22_22));
#line 418 "digraph.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__digraph__V_14_14));
#line 418 "digraph.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__digraph__V_24_24));
#line 418 "digraph.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__digraph__V_25_25));
#line 418 "digraph.m"
        }
#line 417 "digraph.m"
      }
#line 416 "digraph.m"
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
#line 406 "digraph.m"
  {
#line 406 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 406 "digraph.m"
    MR_Word mercury__digraph__VMap_2 = (MR_Word) &mercury__digraph_scalar_common_4[0];
#line 406 "digraph.m"
    MR_Word mercury__digraph__FwdMap_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 406 "digraph.m"
    MR_Word mercury__digraph__BwdMap_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 406 "digraph.m"
    MR_Word mercury__digraph__Forward_3_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 406 "digraph.m"
    MR_Word mercury__digraph__Reverse_4_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 406 "digraph.m"
    *mercury__digraph__HeadVar__1_1 = (MR_Word) &mercury__digraph_scalar_common_2[1];
#line 406 "digraph.m"
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
#line 406 "digraph.m"
  {
#line 406 "digraph.m"
    MR_bool mercury__digraph__succeeded;
#line 406 "digraph.m"
    MR_Word mercury__digraph__G_2 = (MR_Word) &mercury__digraph_scalar_common_2[1];
#line 406 "digraph.m"
    MR_Word mercury__digraph__VMap_4 = (MR_Word) &mercury__digraph_scalar_common_4[0];
#line 406 "digraph.m"
    MR_Word mercury__digraph__FwdMap_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 406 "digraph.m"
    MR_Word mercury__digraph__BwdMap_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 406 "digraph.m"
    MR_Word mercury__digraph__Forward_3_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 406 "digraph.m"
    MR_Word mercury__digraph__Reverse_4_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 406 "digraph.m"
    return mercury__digraph__G_2;
#line 406 "digraph.m"
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
