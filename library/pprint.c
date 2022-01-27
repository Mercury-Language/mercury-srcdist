/*
** Automatically generated from `pprint.m'
** by the Mercury compiler,
** version rotd-2015-06-22
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


/* :- module pprint. */
/* :- implementation. */

/*
INIT mercury__pprint__init
ENDINIT
*/

#include "pprint.mih"


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
#include "hash_table.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_bbbtree.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "set_unordlist.mih"
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




#line 100 "pprint.c"
static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_0;

#line 103 "pprint.c"
static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_1[2];

#line 106 "pprint.c"
static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_1;

#line 109 "pprint.c"
static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_2[2];

#line 112 "pprint.c"
static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_2;

#line 115 "pprint.c"
static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_3[2];

#line 118 "pprint.c"
static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_3;

#line 121 "pprint.c"
static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_4[1];

#line 124 "pprint.c"
static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_4;

#line 127 "pprint.c"
static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_5;

#line 130 "pprint.c"
static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_6[1];

#line 133 "pprint.c"
static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_6;

#line 136 "pprint.c"
static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_7[2];

#line 139 "pprint.c"
static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_7;

#line 142 "pprint.c"
static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_stag_ordered_doc_0_0[2];

#line 145 "pprint.c"
static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_stag_ordered_doc_0_1[1];

#line 148 "pprint.c"
static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_stag_ordered_doc_0_2[1];

#line 151 "pprint.c"
static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_stag_ordered_doc_0_3[4];

#line 154 "pprint.c"
static const MR_DuPtagLayout mercury__pprint__pprint__du_ptag_ordered_doc_0[4];

#line 157 "pprint.c"
static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_name_ordered_doc_0[8];

#line 160 "pprint.c"
static const MR_Integer mercury__pprint__pprint__functor_number_map_doc_0[8];

#line 163 "pprint.c"
static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_map_pair_2_0[2];

#line 166 "pprint.c"
static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_map_pair_2_0;

#line 169 "pprint.c"
static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_stag_ordered_map_pair_2_0[1];

#line 172 "pprint.c"
static const MR_DuPtagLayout mercury__pprint__pprint__du_ptag_ordered_map_pair_2[1];

#line 175 "pprint.c"
static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_name_ordered_map_pair_2[1];

#line 178 "pprint.c"
static const MR_Integer mercury__pprint__pprint__functor_number_map_map_pair_2[1];

#line 181 "pprint.c"
static const MR_ConstString mercury__pprint__pprint__type_class_id_var_names_doc_1[1];

#line 184 "pprint.c"
static const MR_TypeClassMethod mercury__pprint__pprint__type_class_id_method_ids_doc_1[1];

#line 187 "pprint.c"
static const MR_TypeClassId mercury__pprint__pprint__type_class_id_doc_1;

#line 190 "pprint.c"
static MR_bool MR_CALL 
mercury__pprint____Unify____depth_0_0_10001(
#line 193 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_1,
#line 195 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2);

#line 198 "pprint.c"
static void MR_CALL 
mercury__pprint____Compare____depth_0_0_10001(
#line 201 "pprint.c"
  MR_Box * mercury__pprint__wrapper_arg_1,
#line 203 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2,
#line 205 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_3);

#line 208 "pprint.c"
static MR_bool MR_CALL 
mercury__pprint____Unify____doc_0_0_10001(
#line 211 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_1,
#line 213 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2);

#line 216 "pprint.c"
static void MR_CALL 
mercury__pprint____Compare____doc_0_0_10001(
#line 219 "pprint.c"
  MR_Box * mercury__pprint__wrapper_arg_1,
#line 221 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2,
#line 223 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_3);

#line 226 "pprint.c"
static MR_bool MR_CALL 
mercury__pprint____Unify____map_pair_2_0_10001(
#line 229 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_1,
#line 231 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2,
#line 233 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_3,
#line 235 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_4);

#line 238 "pprint.c"
static void MR_CALL 
mercury__pprint____Compare____map_pair_2_0_10001(
#line 241 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_1,
#line 243 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2,
#line 245 "pprint.c"
  MR_Box * mercury__pprint__wrapper_arg_3,
#line 247 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_4,
#line 249 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_5);

#line 252 "pprint.c"
static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____character__arity0______pprint__doc_2_2_f_0_10001(
#line 255 "pprint.c"
  MR_Box mercury__pprint__closure_arg,
#line 257 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_1,
#line 259 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2);

#line 262 "pprint.c"
static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____float__arity0______pprint__doc_2_2_f_0_10001(
#line 265 "pprint.c"
  MR_Box mercury__pprint__closure_arg,
#line 267 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_1,
#line 269 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2);

#line 272 "pprint.c"
static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int__arity0______pprint__doc_2_2_f_0_10001(
#line 275 "pprint.c"
  MR_Box mercury__pprint__closure_arg,
#line 277 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_1,
#line 279 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2);

#line 282 "pprint.c"
static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____string__arity0______pprint__doc_2_2_f_0_10001(
#line 285 "pprint.c"
  MR_Box mercury__pprint__closure_arg,
#line 287 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_1,
#line 289 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2);

#line 292 "pprint.c"
static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____pprint__doc__arity0______pprint__doc_2_2_f_0_10001(
#line 295 "pprint.c"
  MR_Box mercury__pprint__closure_arg,
#line 297 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_1,
#line 299 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2);

#line 543 "pprint.m"
static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_57_95_95_91_51_44_32_52_93_95_48_6_p_0(
#line 543 "pprint.m"
  MR_Word mercury__pprint__V_60_60,
#line 543 "pprint.m"
  MR_Box mercury__pprint__V_61_61,
#line 543 "pprint.m"
  MR_Integer mercury__pprint__HeadVar__2_2,
#line 543 "pprint.m"
  MR_Integer * mercury__pprint__K_3,
#line 543 "pprint.m"
  MR_Word mercury__pprint__HeadVar__4_4,
#line 543 "pprint.m"
  MR_Box mercury__pprint__HeadVar__5_5,
#line 543 "pprint.m"
  MR_Box * mercury__pprint__S_6);

#line 64 "sparse_bitset.opt"
static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
#line 64 "sparse_bitset.opt"
  MR_Word mercury__pprint__TypeClassInfo_for_enum_29,
#line 64 "sparse_bitset.opt"
  MR_Word mercury__pprint__Dir_8_8,
#line 64 "sparse_bitset.opt"
  MR_Integer mercury__pprint__Offset_10_10,
#line 64 "sparse_bitset.opt"
  MR_Integer mercury__pprint__Bits_11_11,
#line 64 "sparse_bitset.opt"
  MR_Integer mercury__pprint__Size_12_12,
#line 64 "sparse_bitset.opt"
  MR_Word mercury__pprint__STATE_VARIABLE_Acc_0_19_13,
#line 64 "sparse_bitset.opt"
  MR_Word * mercury__pprint__STATE_VARIABLE_Acc_20_14);

#line 92 "version_array.opt"
static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(
#line 92 "version_array.opt"
  MR_Word mercury__pprint__TypeInfo_for_T1_1_16,
#line 92 "version_array.opt"
  MR_Box mercury__pprint__VA_7_7,
#line 92 "version_array.opt"
  MR_Word mercury__pprint__Acc_8_8,
#line 92 "version_array.opt"
  MR_Integer mercury__pprint__Hi_9_9);

#line 38 "sparse_bitset.opt"
static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
#line 38 "sparse_bitset.opt"
  MR_Word mercury__pprint__TypeClassInfo_for_enum_20,
#line 38 "sparse_bitset.opt"
  MR_Word mercury__pprint__HeadVar__2_2,
#line 38 "sparse_bitset.opt"
  MR_Word mercury__pprint__HeadVar__3_3,
#line 38 "sparse_bitset.opt"
  MR_Word * mercury__pprint__HeadVar__4_4);

#line 484 "pprint.m"
static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_52_95_95_91_51_44_32_52_93_95_48_8_p_0(
#line 484 "pprint.m"
  MR_Word mercury__pprint__V_85_85,
#line 484 "pprint.m"
  MR_Box mercury__pprint__V_86_86,
#line 484 "pprint.m"
  MR_Integer mercury__pprint__W_2,
#line 484 "pprint.m"
  MR_Integer mercury__pprint__HeadVar__3_3,
#line 484 "pprint.m"
  MR_Integer * mercury__pprint__K_4,
#line 484 "pprint.m"
  MR_String mercury__pprint__I_5,
#line 484 "pprint.m"
  MR_Word mercury__pprint__HeadVar__6_6,
#line 484 "pprint.m"
  MR_Box mercury__pprint__HeadVar__7_7,
#line 484 "pprint.m"
  MR_Box * mercury__pprint__S_8);

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_57_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__pprint__V_12_12,
#line 324 "list.int"
  MR_Integer mercury__pprint__V_13_13,
#line 324 "list.int"
  MR_Word mercury__pprint__HeadVar__2_2);

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_56_95_95_91_50_93_95_48_2_f_in__list_0(
#line 324 "list.int"
  MR_Integer mercury__pprint__V_12_12,
#line 324 "list.int"
  MR_Word mercury__pprint__HeadVar__2_2);

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__pprint__HeadVar__2_2);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 544 "pprint.m"
static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_p_1(
#line 544 "pprint.m"
  MR_Word mercury__pprint__P_1,
#line 544 "pprint.m"
  MR_Integer mercury__pprint__HeadVar__2_2,
#line 544 "pprint.m"
  MR_Integer * mercury__pprint__K_3,
#line 544 "pprint.m"
  MR_Word mercury__pprint__HeadVar__4_4,
#line 544 "pprint.m"
  MR_Box mercury__pprint__HeadVar__5_5,
#line 544 "pprint.m"
  MR_Box * mercury__pprint__S_6);

#line 543 "pprint.m"
static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_p_0(
#line 543 "pprint.m"
  MR_Word mercury__pprint__P_1,
#line 543 "pprint.m"
  MR_Integer mercury__pprint__HeadVar__2_2,
#line 543 "pprint.m"
  MR_Integer * mercury__pprint__K_3,
#line 543 "pprint.m"
  MR_Word mercury__pprint__HeadVar__4_4,
#line 543 "pprint.m"
  MR_Box mercury__pprint__HeadVar__5_5,
#line 543 "pprint.m"
  MR_Box * mercury__pprint__S_6);

#line 100 "string.opt"
static void MR_CALL 
mercury__pprint__next_boundary__ho23__ho52_4_p_in__string_0(
#line 100 "string.opt"
  MR_String mercury__pprint__String_6_6,
#line 100 "string.opt"
  MR_Integer mercury__pprint__Cur_7_7,
#line 100 "string.opt"
  MR_Integer * mercury__pprint__NextWordStart_8_8);

#line 544 "pprint.m"
static void MR_CALL 
mercury__pprint__layout_flat__ho51_6_p_0(
#line 544 "pprint.m"
  MR_Integer mercury__pprint__HeadVar__2_2,
#line 544 "pprint.m"
  MR_Integer * mercury__pprint__K_3,
#line 544 "pprint.m"
  MR_Word mercury__pprint__HeadVar__4_4,
#line 544 "pprint.m"
  MR_Word mercury__pprint__HeadVar__5_5,
#line 544 "pprint.m"
  MR_Word * mercury__pprint__S_6);

#line 543 "pprint.m"
static void MR_CALL 
mercury__pprint__layout_flat__ho50_6_p_0(
#line 543 "pprint.m"
  MR_Integer mercury__pprint__HeadVar__2_2,
#line 543 "pprint.m"
  MR_Integer * mercury__pprint__K_3,
#line 543 "pprint.m"
  MR_Word mercury__pprint__HeadVar__4_4);

#line 484 "pprint.m"
static void MR_CALL 
mercury__pprint__lb__ho43_8_p_0(
#line 484 "pprint.m"
  MR_Integer mercury__pprint__W_2,
#line 484 "pprint.m"
  MR_Integer mercury__pprint__HeadVar__3_3,
#line 484 "pprint.m"
  MR_Integer * mercury__pprint__K_4,
#line 484 "pprint.m"
  MR_String mercury__pprint__I_5,
#line 484 "pprint.m"
  MR_Word mercury__pprint__HeadVar__6_6);

#line 485 "pprint.m"
static void MR_CALL 
mercury__pprint__lb__ho42_8_p_0(
#line 485 "pprint.m"
  MR_Integer mercury__pprint__W_2,
#line 485 "pprint.m"
  MR_Integer mercury__pprint__HeadVar__3_3,
#line 485 "pprint.m"
  MR_Integer * mercury__pprint__K_4,
#line 485 "pprint.m"
  MR_String mercury__pprint__I_5,
#line 485 "pprint.m"
  MR_Word mercury__pprint__HeadVar__6_6,
#line 485 "pprint.m"
  MR_Word mercury__pprint__HeadVar__7_7,
#line 485 "pprint.m"
  MR_Word * mercury__pprint__S_8);

#line 98 "string.opt"
static void MR_CALL 
mercury__pprint__words_loop__ho41_4_p_in__string_0(
#line 98 "string.opt"
  MR_String mercury__pprint__String_6_6,
#line 98 "string.opt"
  MR_Integer mercury__pprint__WordStart_7_7,
#line 98 "string.opt"
  MR_Word * mercury__pprint__Words_8_8);

#line 100 "string.opt"
static void MR_CALL 
mercury__pprint__next_boundary__ho40_4_p_in__string_0(
#line 100 "string.opt"
  MR_String mercury__pprint__String_6_6,
#line 100 "string.opt"
  MR_Integer mercury__pprint__Cur_7_7,
#line 100 "string.opt"
  MR_Integer * mercury__pprint__NextWordStart_8_8);

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__pprint__map__ho37_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__pprint__HeadVar__2_2);

#line 443 "pprint.m"
static void MR_CALL 
mercury__pprint__IntroducedFrom__pred__to_string__443__1_3_p_0(
#line 443 "pprint.m"
  MR_String mercury__pprint__HeadVar__1_12,
#line 443 "pprint.m"
  MR_Word mercury__pprint__HeadVar__2_13,
#line 443 "pprint.m"
  MR_Word * mercury__pprint__HeadVar__3_14);

#line 1007 "pprint.m"
static MR_Word MR_CALL 
mercury__pprint__robdd_to_doc_2_f_0(
#line 1007 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T_12,
#line 1007 "pprint.m"
  MR_Integer mercury__pprint__Depth_4,
#line 1007 "pprint.m"
  MR_Word mercury__pprint__R_5);

#line 999 "pprint.m"
static MR_Word MR_CALL 
mercury__pprint__map_pair_to_doc_2_f_0(
#line 999 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T1_21,
#line 999 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T2_22,
#line 999 "pprint.m"
  MR_Integer mercury__pprint__Depth_4,
#line 999 "pprint.m"
  MR_Word mercury__pprint__HeadVar__2_2);

#line 987 "pprint.m"
static MR_Word MR_CALL 
mercury__pprint__map_to_doc_2_f_0(
#line 987 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T1_16,
#line 987 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T2_17,
#line 987 "pprint.m"
  MR_Integer mercury__pprint__Depth_4,
#line 987 "pprint.m"
  MR_Word mercury__pprint__X_5);

#line 979 "pprint.m"
static MR_Word MR_CALL 
mercury__pprint__tuple_to_doc_2_f_0(
#line 979 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T_17,
#line 979 "pprint.m"
  MR_Integer mercury__pprint__Depth_4,
#line 979 "pprint.m"
  MR_Box mercury__pprint__Tuple_5);

#line 968 "pprint.m"
static MR_Word MR_CALL 
mercury__pprint__version_array_to_doc_2_f_0(
#line 968 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T_13,
#line 968 "pprint.m"
  MR_Integer mercury__pprint__Depth_4,
#line 968 "pprint.m"
  MR_Box mercury__pprint__A_5);

#line 958 "pprint.m"
static MR_Word MR_CALL 
mercury__pprint__array_to_doc_2_f_0(
#line 958 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T_13,
#line 958 "pprint.m"
  MR_Integer mercury__pprint__Depth_4,
#line 958 "pprint.m"
  MR_ArrayPtr mercury__pprint__A_5);

#line 948 "pprint.m"
static MR_Word MR_CALL 
mercury__pprint__list_to_doc_2_f_0(
#line 948 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T_11,
#line 948 "pprint.m"
  MR_Integer mercury__pprint__Depth_4,
#line 948 "pprint.m"
  MR_Word mercury__pprint__Xs_5);

#line 940 "pprint.m"
static MR_Word MR_CALL 
mercury__pprint__sparse_bitset_to_doc_2_f_0(
#line 940 "pprint.m"
  MR_Word mercury__pprint__TypeClassInfo_for_enum_13,
#line 940 "pprint.m"
  MR_Integer mercury__pprint__Depth_4,
#line 940 "pprint.m"
  MR_Word mercury__pprint__A_5);

#line 930 "pprint.m"
static MR_Word MR_CALL 
mercury__pprint__var_to_doc_2_f_0(
#line 930 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T_7,
#line 930 "pprint.m"
  MR_Integer mercury__pprint__Depth_4,
#line 930 "pprint.m"
  MR_Word mercury__pprint__V_5);

#line 916 "pprint.m"
static MR_bool MR_CALL 
mercury__pprint__dynamic_cast_to_robdd_2_p_0(
#line 916 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T1_14,
#line 916 "pprint.m"
  MR_Word * mercury__pprint__TypeInfo_for_T_13,
#line 916 "pprint.m"
  MR_Box mercury__pprint__X_3,
#line 916 "pprint.m"
  MR_Word * mercury__pprint__R_4);

#line 890 "pprint.m"
static MR_bool MR_CALL 
mercury__pprint__dynamic_cast_to_map_pair_2_p_0(
#line 890 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T1_20,
#line 890 "pprint.m"
  MR_Word * mercury__pprint__TypeInfo_for_T_18,
#line 890 "pprint.m"
  MR_Word * mercury__pprint__TypeInfo_for_T_19,
#line 890 "pprint.m"
  MR_Box mercury__pprint__X_3,
#line 890 "pprint.m"
  MR_Word * mercury__pprint__MP_4);

#line 875 "pprint.m"
static MR_bool MR_CALL 
mercury__pprint__dynamic_cast_to_map_2_p_0(
#line 875 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T1_20,
#line 875 "pprint.m"
  MR_Word * mercury__pprint__TypeInfo_for_T_18,
#line 875 "pprint.m"
  MR_Word * mercury__pprint__TypeInfo_for_T_19,
#line 875 "pprint.m"
  MR_Box mercury__pprint__X_3,
#line 875 "pprint.m"
  MR_Word * mercury__pprint__M_4);

#line 846 "pprint.m"
static MR_bool MR_CALL 
mercury__pprint__dynamic_cast_to_version_array_2_p_0(
#line 846 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T1_14,
#line 846 "pprint.m"
  MR_Word * mercury__pprint__TypeInfo_for_T_13,
#line 846 "pprint.m"
  MR_Box mercury__pprint__X_3,
#line 846 "pprint.m"
  MR_Box * mercury__pprint__VA_4);

#line 812 "pprint.m"
static MR_Word MR_CALL 
mercury__pprint__univ_to_doc_3_f_0(
#line 812 "pprint.m"
  MR_Integer mercury__pprint__Depth_5,
#line 812 "pprint.m"
  MR_Integer mercury__pprint__Priority_6,
#line 812 "pprint.m"
  MR_Word mercury__pprint__Univ_7);

#line 803 "pprint.m"
static MR_Integer MR_CALL 
mercury__pprint__adjusted_by_2_f_0(
#line 803 "pprint.m"
  MR_Integer mercury__pprint__Priority_1,
#line 803 "pprint.m"
  MR_Word mercury__pprint__HeadVar__2_2);

#line 793 "pprint.m"
static MR_Word MR_CALL 
mercury__pprint__maybe_parens_3_f_0(
#line 793 "pprint.m"
  MR_Integer mercury__pprint__ParentPriority_5,
#line 793 "pprint.m"
  MR_Integer mercury__pprint__OpPriority_6,
#line 793 "pprint.m"
  MR_Word mercury__pprint__Doc_7);

#line 709 "pprint.m"
static MR_Word MR_CALL 
mercury__pprint__generic_term_to_doc_3_f_0(
#line 709 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T_101,
#line 709 "pprint.m"
  MR_Integer mercury__pprint__Depth_5,
#line 709 "pprint.m"
  MR_Integer mercury__pprint__Priority_6,
#line 709 "pprint.m"
  MR_Box mercury__pprint__X_7);

#line 572 "pprint.m"
static MR_String MR_CALL 
mercury__pprint__extend_2_f_0(
#line 572 "pprint.m"
  MR_String mercury__pprint__I_4,
#line 572 "pprint.m"
  MR_Integer mercury__pprint__J_5);

#line 525 "pprint.m"
static MR_bool MR_CALL 
mercury__pprint__ff_2_f_0(
#line 525 "pprint.m"
  MR_Word mercury__pprint__HeadVar__1_1,
#line 525 "pprint.m"
  MR_Integer mercury__pprint__R_2,
#line 525 "pprint.m"
  MR_Integer * mercury__pprint__HeadVar__3_3);


static /* final */ const MR_Box mercury__pprint_scalar_common_1[18][2];

static /* final */ const MR_Box mercury__pprint_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__pprint_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__pprint_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__pprint_scalar_common_5[1][1];




static /* final */ const MR_Box mercury__pprint_scalar_common_1[18][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_pprint__doc__arity1__pprint__doc__arity0__)),
    ((MR_Box) (&mercury__pprint__pprint__type_ctor_info_doc_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_pprint__doc__arity1__string__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_enum__enum__arity1__int__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (base_typeclass_info_pprint__doc__arity1__int__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&mercury__pprint_scalar_common_1[6]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "..."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) " "))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ", "))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "; "))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ": "))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) " -> "))
  },
};

static /* final */ const MR_Box mercury__pprint_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__pprint_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pprint_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__pprint_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pprint_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pprint_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__pprint_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



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
#include "hash_table.mh"
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
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
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
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "dir.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "time.mh"



#line 1228 "pprint.c"
const MR_TypeCtorInfo_Struct mercury__pprint__pprint__type_ctor_info_depth_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__pprint____Unify____depth_0_0_10001)),
  ((MR_Box) (mercury__pprint____Compare____depth_0_0_10001)),
  (MR_String) "pprint",
  (MR_String) "depth",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1245 "pprint.c"
static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_0 = {
  (MR_String) "NIL",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1260 "pprint.c"
static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__pprint__pprint__type_ctor_info_doc_0,
  (MR_PseudoTypeInfo) &mercury__pprint__pprint__type_ctor_info_doc_0
};

#line 1266 "pprint.c"
static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_1 = {
  (MR_String) "SEQ",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__pprint__pprint__field_types_doc_0_1,
  NULL,
  NULL,
  NULL
};

#line 1281 "pprint.c"
static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__pprint__pprint__type_ctor_info_doc_0
};

#line 1287 "pprint.c"
static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_2 = {
  (MR_String) "NEST",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__pprint__pprint__field_types_doc_0_2,
  NULL,
  NULL,
  NULL
};

#line 1302 "pprint.c"
static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_3[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__pprint__pprint__type_ctor_info_doc_0
};

#line 1308 "pprint.c"
static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_3 = {
  (MR_String) "LABEL",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  mercury__pprint__pprint__field_types_doc_0_3,
  NULL,
  NULL,
  NULL
};

#line 1323 "pprint.c"
static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1328 "pprint.c"
static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_4 = {
  (MR_String) "TEXT",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__pprint__pprint__field_types_doc_0_4,
  NULL,
  NULL,
  NULL
};

#line 1343 "pprint.c"
static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_5 = {
  (MR_String) "LINE",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1358 "pprint.c"
static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__pprint__pprint__type_ctor_info_doc_0
};

#line 1363 "pprint.c"
static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_6 = {
  (MR_String) "GROUP",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 6,
  mercury__pprint__pprint__field_types_doc_0_6,
  NULL,
  NULL,
  NULL
};

#line 1378 "pprint.c"
static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_7[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
};

#line 1384 "pprint.c"
static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_7 = {
  (MR_String) "DOC",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 7,
  mercury__pprint__pprint__field_types_doc_0_7,
  NULL,
  NULL,
  NULL
};

#line 1399 "pprint.c"
static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_stag_ordered_doc_0_0[2] = {
  &mercury__pprint__pprint__du_functor_desc_doc_0_0,
  &mercury__pprint__pprint__du_functor_desc_doc_0_5
};

#line 1405 "pprint.c"
static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_stag_ordered_doc_0_1[1] = {
  &mercury__pprint__pprint__du_functor_desc_doc_0_1
};

#line 1410 "pprint.c"
static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_stag_ordered_doc_0_2[1] = {
  &mercury__pprint__pprint__du_functor_desc_doc_0_2
};

#line 1415 "pprint.c"
static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_stag_ordered_doc_0_3[4] = {
  &mercury__pprint__pprint__du_functor_desc_doc_0_3,
  &mercury__pprint__pprint__du_functor_desc_doc_0_4,
  &mercury__pprint__pprint__du_functor_desc_doc_0_6,
  &mercury__pprint__pprint__du_functor_desc_doc_0_7
};

#line 1423 "pprint.c"
static const MR_DuPtagLayout mercury__pprint__pprint__du_ptag_ordered_doc_0[4] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__pprint__pprint__du_stag_ordered_doc_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__pprint__pprint__du_stag_ordered_doc_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__pprint__pprint__du_stag_ordered_doc_0_2
  },
  {
    (MR_Integer) 4,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mercury__pprint__pprint__du_stag_ordered_doc_0_3
  }
};

#line 1447 "pprint.c"
static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_name_ordered_doc_0[8] = {
  &mercury__pprint__pprint__du_functor_desc_doc_0_7,
  &mercury__pprint__pprint__du_functor_desc_doc_0_6,
  &mercury__pprint__pprint__du_functor_desc_doc_0_3,
  &mercury__pprint__pprint__du_functor_desc_doc_0_5,
  &mercury__pprint__pprint__du_functor_desc_doc_0_2,
  &mercury__pprint__pprint__du_functor_desc_doc_0_0,
  &mercury__pprint__pprint__du_functor_desc_doc_0_1,
  &mercury__pprint__pprint__du_functor_desc_doc_0_4
};

#line 1459 "pprint.c"
static const MR_Integer mercury__pprint__pprint__functor_number_map_doc_0[8] = {
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 7,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1471 "pprint.c"
const MR_TypeCtorInfo_Struct mercury__pprint__pprint__type_ctor_info_doc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pprint____Unify____doc_0_0_10001)),
  ((MR_Box) (mercury__pprint____Compare____doc_0_0_10001)),
  (MR_String) "pprint",
  (MR_String) "doc",
  {     mercury__pprint__pprint__du_name_ordered_doc_0 },
  {     mercury__pprint__pprint__du_ptag_ordered_doc_0 },
  (MR_Integer) 8,
  (MR_Integer) 4,
  mercury__pprint__pprint__functor_number_map_doc_0
};

#line 1488 "pprint.c"
static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_map_pair_2_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 1494 "pprint.c"
static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_map_pair_2_0 = {
  (MR_String) "map_pair",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__pprint__pprint__field_types_map_pair_2_0,
  NULL,
  NULL,
  NULL
};

#line 1509 "pprint.c"
static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_stag_ordered_map_pair_2_0[1] = {
  &mercury__pprint__pprint__du_functor_desc_map_pair_2_0
};

#line 1514 "pprint.c"
static const MR_DuPtagLayout mercury__pprint__pprint__du_ptag_ordered_map_pair_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__pprint__pprint__du_stag_ordered_map_pair_2_0
  }
};

#line 1523 "pprint.c"
static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_name_ordered_map_pair_2[1] = {
  &mercury__pprint__pprint__du_functor_desc_map_pair_2_0
};

#line 1528 "pprint.c"
static const MR_Integer mercury__pprint__pprint__functor_number_map_map_pair_2[1] = {
  (MR_Integer) 0
};

#line 1533 "pprint.c"
const MR_TypeCtorInfo_Struct mercury__pprint__pprint__type_ctor_info_map_pair_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pprint____Unify____map_pair_2_0_10001)),
  ((MR_Box) (mercury__pprint____Compare____map_pair_2_0_10001)),
  (MR_String) "pprint",
  (MR_String) "map_pair",
  {     mercury__pprint__pprint__du_name_ordered_map_pair_2 },
  {     mercury__pprint__pprint__du_ptag_ordered_map_pair_2 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__pprint__pprint__functor_number_map_map_pair_2
};

#line 1550 "pprint.c"
const MR_BaseTypeclassInfo base_typeclass_info_pprint__doc__arity1__character__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__pprint__ClassMethod_for_pprint__doc____character__arity0______pprint__doc_2_2_f_0_10001))
};

#line 1560 "pprint.c"
const MR_BaseTypeclassInfo base_typeclass_info_pprint__doc__arity1__float__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__pprint__ClassMethod_for_pprint__doc____float__arity0______pprint__doc_2_2_f_0_10001))
};

#line 1570 "pprint.c"
const MR_BaseTypeclassInfo base_typeclass_info_pprint__doc__arity1__int__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__pprint__ClassMethod_for_pprint__doc____int__arity0______pprint__doc_2_2_f_0_10001))
};

#line 1580 "pprint.c"
const MR_BaseTypeclassInfo base_typeclass_info_pprint__doc__arity1__string__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__pprint__ClassMethod_for_pprint__doc____string__arity0______pprint__doc_2_2_f_0_10001))
};

#line 1590 "pprint.c"
const MR_BaseTypeclassInfo base_typeclass_info_pprint__doc__arity1__pprint__doc__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__pprint__ClassMethod_for_pprint__doc____pprint__doc__arity0______pprint__doc_2_2_f_0_10001))
};

#line 1600 "pprint.c"
static const MR_ConstString mercury__pprint__pprint__type_class_id_var_names_doc_1[1] = {
  (MR_String) "T"
};

#line 1605 "pprint.c"
static const MR_TypeClassMethod mercury__pprint__pprint__type_class_id_method_ids_doc_1[1] = {
  {
    (MR_String) "doc",
    (MR_Integer) 3,
    mercury__private_builtin__MR_FUNCTION
  }
};

#line 1614 "pprint.c"
static const MR_TypeClassId mercury__pprint__pprint__type_class_id_doc_1 = {
  (MR_String) "pprint",
  (MR_String) "doc",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__pprint__pprint__type_class_id_var_names_doc_1,
  mercury__pprint__pprint__type_class_id_method_ids_doc_1
};

#line 1625 "pprint.c"
const MR_TypeClassDeclStruct mercury__pprint__pprint__type_class_decl_doc_1 = {
  &mercury__pprint__pprint__type_class_id_doc_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 1633 "pprint.c"
static MR_bool MR_CALL 
mercury__pprint____Unify____depth_0_0_10001(
#line 1636 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_1,
#line 1638 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2)
#line 1640 "pprint.c"
{
#line 1642 "pprint.c"
  {
#line 1644 "pprint.c"
    MR_bool mercury__pprint__succeeded;

#line 1647 "pprint.c"
    {
#line 1649 "pprint.c"
      mercury__pprint__succeeded = mercury__pprint____Unify____depth_0_0(((MR_Integer) mercury__pprint__wrapper_arg_1), ((MR_Integer) mercury__pprint__wrapper_arg_2));
    }
#line 1652 "pprint.c"
    return mercury__pprint__succeeded;
#line 1654 "pprint.c"
  }
#line 1656 "pprint.c"
}

#line 1659 "pprint.c"
static void MR_CALL 
mercury__pprint____Compare____depth_0_0_10001(
#line 1662 "pprint.c"
  MR_Box * mercury__pprint__wrapper_arg_1,
#line 1664 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2,
#line 1666 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_3)
#line 1668 "pprint.c"
{
#line 1670 "pprint.c"
  {
#line 1672 "pprint.c"
    MR_Word mercury__pprint__conv0_HeadVar__1_1;

#line 1675 "pprint.c"
    {
#line 1677 "pprint.c"
      mercury__pprint____Compare____depth_0_0(&mercury__pprint__conv0_HeadVar__1_1, ((MR_Integer) mercury__pprint__wrapper_arg_2), ((MR_Integer) mercury__pprint__wrapper_arg_3));
    }
#line 1680 "pprint.c"
    *mercury__pprint__wrapper_arg_1 = ((MR_Box) (mercury__pprint__conv0_HeadVar__1_1));
#line 1682 "pprint.c"
  }
#line 1684 "pprint.c"
}

#line 1687 "pprint.c"
static MR_bool MR_CALL 
mercury__pprint____Unify____doc_0_0_10001(
#line 1690 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_1,
#line 1692 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2)
#line 1694 "pprint.c"
{
#line 1696 "pprint.c"
  {
#line 1698 "pprint.c"
    MR_bool mercury__pprint__succeeded;

#line 1701 "pprint.c"
    {
#line 1703 "pprint.c"
      mercury__pprint__succeeded = mercury__pprint____Unify____doc_0_0(((MR_Word) mercury__pprint__wrapper_arg_1), ((MR_Word) mercury__pprint__wrapper_arg_2));
    }
#line 1706 "pprint.c"
    return mercury__pprint__succeeded;
#line 1708 "pprint.c"
  }
#line 1710 "pprint.c"
}

#line 1713 "pprint.c"
static void MR_CALL 
mercury__pprint____Compare____doc_0_0_10001(
#line 1716 "pprint.c"
  MR_Box * mercury__pprint__wrapper_arg_1,
#line 1718 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2,
#line 1720 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_3)
#line 1722 "pprint.c"
{
#line 1724 "pprint.c"
  {
#line 1726 "pprint.c"
    MR_Word mercury__pprint__conv0_HeadVar__1_1;

#line 1729 "pprint.c"
    {
#line 1731 "pprint.c"
      mercury__pprint____Compare____doc_0_0(&mercury__pprint__conv0_HeadVar__1_1, ((MR_Word) mercury__pprint__wrapper_arg_2), ((MR_Word) mercury__pprint__wrapper_arg_3));
    }
#line 1734 "pprint.c"
    *mercury__pprint__wrapper_arg_1 = ((MR_Box) (mercury__pprint__conv0_HeadVar__1_1));
#line 1736 "pprint.c"
  }
#line 1738 "pprint.c"
}

#line 1741 "pprint.c"
static MR_bool MR_CALL 
mercury__pprint____Unify____map_pair_2_0_10001(
#line 1744 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_1,
#line 1746 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2,
#line 1748 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_3,
#line 1750 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_4)
#line 1752 "pprint.c"
{
#line 1754 "pprint.c"
  {
#line 1756 "pprint.c"
    MR_bool mercury__pprint__succeeded;

#line 1759 "pprint.c"
    {
#line 1761 "pprint.c"
      mercury__pprint__succeeded = mercury__pprint____Unify____map_pair_2_0(((MR_Word) mercury__pprint__wrapper_arg_1), ((MR_Word) mercury__pprint__wrapper_arg_2), ((MR_Word) mercury__pprint__wrapper_arg_3), ((MR_Word) mercury__pprint__wrapper_arg_4));
    }
#line 1764 "pprint.c"
    return mercury__pprint__succeeded;
#line 1766 "pprint.c"
  }
#line 1768 "pprint.c"
}

#line 1771 "pprint.c"
static void MR_CALL 
mercury__pprint____Compare____map_pair_2_0_10001(
#line 1774 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_1,
#line 1776 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2,
#line 1778 "pprint.c"
  MR_Box * mercury__pprint__wrapper_arg_3,
#line 1780 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_4,
#line 1782 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_5)
#line 1784 "pprint.c"
{
#line 1786 "pprint.c"
  {
#line 1788 "pprint.c"
    MR_Word mercury__pprint__conv0_HeadVar__1_1;

#line 1791 "pprint.c"
    {
#line 1793 "pprint.c"
      mercury__pprint____Compare____map_pair_2_0(((MR_Word) mercury__pprint__wrapper_arg_1), ((MR_Word) mercury__pprint__wrapper_arg_2), &mercury__pprint__conv0_HeadVar__1_1, ((MR_Word) mercury__pprint__wrapper_arg_4), ((MR_Word) mercury__pprint__wrapper_arg_5));
    }
#line 1796 "pprint.c"
    *mercury__pprint__wrapper_arg_3 = ((MR_Box) (mercury__pprint__conv0_HeadVar__1_1));
#line 1798 "pprint.c"
  }
#line 1800 "pprint.c"
}

#line 1803 "pprint.c"
static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____character__arity0______pprint__doc_2_2_f_0_10001(
#line 1806 "pprint.c"
  MR_Box mercury__pprint__closure_arg,
#line 1808 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_1,
#line 1810 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2)
#line 1812 "pprint.c"
{
#line 1814 "pprint.c"
  {
#line 1816 "pprint.c"
    MR_Box mercury__pprint__wrapper_arg_3;
#line 1818 "pprint.c"
    MR_Box mercury__pprint__closure;
#line 1820 "pprint.c"
    MR_Word mercury__pprint__conv0_HeadVar__3_3;

#line 1823 "pprint.c"
    mercury__pprint__closure = mercury__pprint__closure_arg;
#line 1825 "pprint.c"
    {
#line 1827 "pprint.c"
      mercury__pprint__conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____character__arity0______pprint__doc_2_2_f_0(((MR_Integer) mercury__pprint__wrapper_arg_1), ((MR_Char) (MR_Word) mercury__pprint__wrapper_arg_2));
    }
#line 1830 "pprint.c"
    mercury__pprint__wrapper_arg_3 = ((MR_Box) (mercury__pprint__conv0_HeadVar__3_3));
#line 1832 "pprint.c"
    return mercury__pprint__wrapper_arg_3;
#line 1834 "pprint.c"
  }
#line 1836 "pprint.c"
}

#line 1839 "pprint.c"
static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____float__arity0______pprint__doc_2_2_f_0_10001(
#line 1842 "pprint.c"
  MR_Box mercury__pprint__closure_arg,
#line 1844 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_1,
#line 1846 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2)
#line 1848 "pprint.c"
{
#line 1850 "pprint.c"
  {
#line 1852 "pprint.c"
    MR_Box mercury__pprint__wrapper_arg_3;
#line 1854 "pprint.c"
    MR_Box mercury__pprint__closure;
#line 1856 "pprint.c"
    MR_Word mercury__pprint__conv0_HeadVar__3_3;

#line 1859 "pprint.c"
    mercury__pprint__closure = mercury__pprint__closure_arg;
#line 1861 "pprint.c"
    {
#line 1863 "pprint.c"
      mercury__pprint__conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____float__arity0______pprint__doc_2_2_f_0(((MR_Integer) mercury__pprint__wrapper_arg_1), MR_unbox_float(mercury__pprint__wrapper_arg_2));
    }
#line 1866 "pprint.c"
    mercury__pprint__wrapper_arg_3 = ((MR_Box) (mercury__pprint__conv0_HeadVar__3_3));
#line 1868 "pprint.c"
    return mercury__pprint__wrapper_arg_3;
#line 1870 "pprint.c"
  }
#line 1872 "pprint.c"
}

#line 1875 "pprint.c"
static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int__arity0______pprint__doc_2_2_f_0_10001(
#line 1878 "pprint.c"
  MR_Box mercury__pprint__closure_arg,
#line 1880 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_1,
#line 1882 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2)
#line 1884 "pprint.c"
{
#line 1886 "pprint.c"
  {
#line 1888 "pprint.c"
    MR_Box mercury__pprint__wrapper_arg_3;
#line 1890 "pprint.c"
    MR_Box mercury__pprint__closure;
#line 1892 "pprint.c"
    MR_Word mercury__pprint__conv0_HeadVar__3_3;

#line 1895 "pprint.c"
    mercury__pprint__closure = mercury__pprint__closure_arg;
#line 1897 "pprint.c"
    {
#line 1899 "pprint.c"
      mercury__pprint__conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____int__arity0______pprint__doc_2_2_f_0(((MR_Integer) mercury__pprint__wrapper_arg_1), ((MR_Integer) mercury__pprint__wrapper_arg_2));
    }
#line 1902 "pprint.c"
    mercury__pprint__wrapper_arg_3 = ((MR_Box) (mercury__pprint__conv0_HeadVar__3_3));
#line 1904 "pprint.c"
    return mercury__pprint__wrapper_arg_3;
#line 1906 "pprint.c"
  }
#line 1908 "pprint.c"
}

#line 1911 "pprint.c"
static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____string__arity0______pprint__doc_2_2_f_0_10001(
#line 1914 "pprint.c"
  MR_Box mercury__pprint__closure_arg,
#line 1916 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_1,
#line 1918 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2)
#line 1920 "pprint.c"
{
#line 1922 "pprint.c"
  {
#line 1924 "pprint.c"
    MR_Box mercury__pprint__wrapper_arg_3;
#line 1926 "pprint.c"
    MR_Box mercury__pprint__closure;
#line 1928 "pprint.c"
    MR_Word mercury__pprint__conv0_HeadVar__3_3;

#line 1931 "pprint.c"
    mercury__pprint__closure = mercury__pprint__closure_arg;
#line 1933 "pprint.c"
    {
#line 1935 "pprint.c"
      mercury__pprint__conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____string__arity0______pprint__doc_2_2_f_0(((MR_Integer) mercury__pprint__wrapper_arg_1), ((MR_String) mercury__pprint__wrapper_arg_2));
    }
#line 1938 "pprint.c"
    mercury__pprint__wrapper_arg_3 = ((MR_Box) (mercury__pprint__conv0_HeadVar__3_3));
#line 1940 "pprint.c"
    return mercury__pprint__wrapper_arg_3;
#line 1942 "pprint.c"
  }
#line 1944 "pprint.c"
}

#line 1947 "pprint.c"
static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____pprint__doc__arity0______pprint__doc_2_2_f_0_10001(
#line 1950 "pprint.c"
  MR_Box mercury__pprint__closure_arg,
#line 1952 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_1,
#line 1954 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2)
#line 1956 "pprint.c"
{
#line 1958 "pprint.c"
  {
#line 1960 "pprint.c"
    MR_Box mercury__pprint__wrapper_arg_3;
#line 1962 "pprint.c"
    MR_Box mercury__pprint__closure;
#line 1964 "pprint.c"
    MR_Word mercury__pprint__conv0_Doc_3;

#line 1967 "pprint.c"
    mercury__pprint__closure = mercury__pprint__closure_arg;
#line 1969 "pprint.c"
    {
#line 1971 "pprint.c"
      mercury__pprint__conv0_Doc_3 = mercury__pprint__ClassMethod_for_pprint__doc____pprint__doc__arity0______pprint__doc_2_2_f_0(((MR_Integer) mercury__pprint__wrapper_arg_1), ((MR_Word) mercury__pprint__wrapper_arg_2));
    }
#line 1974 "pprint.c"
    mercury__pprint__wrapper_arg_3 = ((MR_Box) (mercury__pprint__conv0_Doc_3));
#line 1976 "pprint.c"
    return mercury__pprint__wrapper_arg_3;
#line 1978 "pprint.c"
  }
#line 1980 "pprint.c"
}

#line 543 "pprint.m"
static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_57_95_95_91_51_44_32_52_93_95_48_6_p_0(
#line 543 "pprint.m"
  MR_Word mercury__pprint__V_60_60,
#line 543 "pprint.m"
  MR_Box mercury__pprint__V_61_61,
#line 543 "pprint.m"
  MR_Integer mercury__pprint__HeadVar__2_2,
#line 543 "pprint.m"
  MR_Integer * mercury__pprint__K_3,
#line 543 "pprint.m"
  MR_Word mercury__pprint__HeadVar__4_4,
#line 543 "pprint.m"
  MR_Box mercury__pprint__HeadVar__5_5,
#line 543 "pprint.m"
  MR_Box * mercury__pprint__S_6)
#line 543 "pprint.m"
{
#line 546 "pprint.m"
  while (MR_TRUE)
#line 546 "pprint.m"
    {
#line 546 "pprint.m"
      /* tailcall optimized into a loop */
#line 546 "pprint.m"
      {
#line 546 "pprint.m"
        MR_bool mercury__pprint__succeeded;

#line 546 "pprint.m"
#line 546 "pprint.m"
        switch (MR_tag((MR_Word) mercury__pprint__HeadVar__4_4)) {
#line 546 "pprint.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 546 "pprint.m"
          case (MR_Integer) 0:
#line 546 "pprint.m"
#line 546 "pprint.m"
            switch (MR_unmkbody(mercury__pprint__HeadVar__4_4)) {
#line 546 "pprint.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 546 "pprint.m"
              case (MR_Integer) 0:
#line 546 "pprint.m"
                {
#line 546 "pprint.m"
                  *mercury__pprint__K_3 = mercury__pprint__HeadVar__2_2;
#line 546 "pprint.m"
                  *mercury__pprint__S_6 = mercury__pprint__HeadVar__5_5;
#line 546 "pprint.m"
                }
#line 546 "pprint.m"
                break;
#line 546 "pprint.m"
              case (MR_Integer) 1:
#line 558 "pprint.m"
                {
#line 558 "pprint.m"
                  *mercury__pprint__K_3 = mercury__pprint__HeadVar__2_2;
#line 558 "pprint.m"
                  *mercury__pprint__S_6 = mercury__pprint__HeadVar__5_5;
#line 558 "pprint.m"
                }
#line 546 "pprint.m"
                break;
#line 546 "pprint.m"
            }
#line 546 "pprint.m"
            break;
#line 546 "pprint.m"
          case (MR_Integer) 1:
#line 548 "pprint.m"
            {
#line 548 "pprint.m"
              MR_Word mercury__pprint__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__4_4, (MR_Integer) 0)));
#line 548 "pprint.m"
              MR_Word mercury__pprint__Y_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
#line 548 "pprint.m"
              MR_Integer mercury__pprint__K1_17;
#line 548 "pprint.m"
              MR_Box mercury__pprint__S1_18;

#line 549 "pprint.m"
              {
#line 549 "pprint.m"
                mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_57_95_95_91_51_44_32_52_93_95_48_6_p_0(mercury__pprint__V_60_60, mercury__pprint__V_61_61, mercury__pprint__HeadVar__2_2, &mercury__pprint__K1_17, mercury__pprint__X_13, mercury__pprint__HeadVar__5_5, &mercury__pprint__S1_18);
              }
#line 550 "pprint.m"
              /* direct tailcall eliminated */
#line 550 "pprint.m"
              {
#line 550 "pprint.m"
                MR_Integer mercury__pprint__HeadVar__2__tmp_copy_2 = mercury__pprint__K1_17;
#line 550 "pprint.m"
                MR_Word mercury__pprint__HeadVar__4__tmp_copy_4 = mercury__pprint__Y_14;
#line 550 "pprint.m"
                MR_Box mercury__pprint__HeadVar__5__tmp_copy_5 = mercury__pprint__S1_18;

#line 550 "pprint.m"
                mercury__pprint__HeadVar__5_5 = mercury__pprint__HeadVar__5__tmp_copy_5;
#line 550 "pprint.m"
                mercury__pprint__HeadVar__4_4 = mercury__pprint__HeadVar__4__tmp_copy_4;
#line 550 "pprint.m"
                mercury__pprint__HeadVar__2_2 = mercury__pprint__HeadVar__2__tmp_copy_2;
#line 550 "pprint.m"
              }
#line 550 "pprint.m"
              continue;
#line 548 "pprint.m"
            }
#line 546 "pprint.m"
            break;
#line 546 "pprint.m"
          case (MR_Integer) 2:
#line 552 "pprint.m"
            {
#line 552 "pprint.m"
              MR_Word mercury__pprint__X_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
#line 552 "pprint.m"
              MR_Integer mercury__pprint__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__4_4, (MR_Integer) 0)));

#line 553 "pprint.m"
              /* direct tailcall eliminated */
#line 553 "pprint.m"
              {
#line 553 "pprint.m"
                MR_Word mercury__pprint__HeadVar__4__tmp_copy_4 = mercury__pprint__X_23;

#line 553 "pprint.m"
                mercury__pprint__HeadVar__4_4 = mercury__pprint__HeadVar__4__tmp_copy_4;
#line 553 "pprint.m"
              }
#line 553 "pprint.m"
              continue;
#line 552 "pprint.m"
            }
#line 546 "pprint.m"
            break;
#line 546 "pprint.m"
          case (MR_Integer) 3:
#line 546 "pprint.m"
#line 546 "pprint.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 0)))) {
#line 546 "pprint.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 546 "pprint.m"
              case (MR_Integer) 0:
#line 555 "pprint.m"
                {
#line 555 "pprint.m"
                  MR_Word mercury__pprint__X_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 2)));
#line 555 "pprint.m"
                  MR_String mercury__pprint__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));

#line 556 "pprint.m"
                  /* direct tailcall eliminated */
#line 556 "pprint.m"
                  {
#line 556 "pprint.m"
                    MR_Word mercury__pprint__HeadVar__4__tmp_copy_4 = mercury__pprint__X_30;

#line 556 "pprint.m"
                    mercury__pprint__HeadVar__4_4 = mercury__pprint__HeadVar__4__tmp_copy_4;
#line 556 "pprint.m"
                  }
#line 556 "pprint.m"
                  continue;
#line 555 "pprint.m"
                }
#line 546 "pprint.m"
                break;
#line 546 "pprint.m"
              case (MR_Integer) 1:
#line 566 "pprint.m"
                {
#line 566 "pprint.m"
                  MR_String mercury__pprint__T_54 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
#line 566 "pprint.m"
                  MR_Integer mercury__pprint__V_57_57;
#line 2163 "pprint.c"
                  void MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 258 "string.opt"
                  {
#line 258 "string.opt"
                    mercury__string__count_codepoints_2_p_0(mercury__pprint__T_54, &mercury__pprint__V_57_57);
                  }
#line 567 "pprint.m"
                  *mercury__pprint__K_3 = (mercury__pprint__HeadVar__2_2 + mercury__pprint__V_57_57);
#line 2173 "pprint.c"
                  mercury__pprint__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__V_60_60, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2175 "pprint.c"
                  {
#line 2177 "pprint.c"
                    mercury__pprint__func_0(((MR_Box) mercury__pprint__V_60_60), mercury__pprint__V_61_61, ((MR_Box) (mercury__pprint__T_54)), mercury__pprint__HeadVar__5_5, mercury__pprint__S_6);
#line 2179 "pprint.c"
                    return;
                  }
#line 566 "pprint.m"
                }
#line 546 "pprint.m"
                break;
#line 546 "pprint.m"
              case (MR_Integer) 2:
#line 560 "pprint.m"
                {
#line 560 "pprint.m"
                  MR_Word mercury__pprint__X_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));

#line 561 "pprint.m"
                  /* direct tailcall eliminated */
#line 561 "pprint.m"
                  {
#line 561 "pprint.m"
                    MR_Word mercury__pprint__HeadVar__4__tmp_copy_4 = mercury__pprint__X_39;

#line 561 "pprint.m"
                    mercury__pprint__HeadVar__4_4 = mercury__pprint__HeadVar__4__tmp_copy_4;
#line 561 "pprint.m"
                  }
#line 561 "pprint.m"
                  continue;
#line 560 "pprint.m"
                }
#line 546 "pprint.m"
                break;
#line 546 "pprint.m"
              case (MR_Integer) 3:
#line 563 "pprint.m"
                {
#line 563 "pprint.m"
                  MR_Word mercury__pprint__TypeInfo_59_59;
#line 563 "pprint.m"
                  MR_Integer mercury__pprint__D_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
#line 563 "pprint.m"
                  MR_Word mercury__pprint__U_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 2)));
#line 563 "pprint.m"
                  MR_Word mercury__pprint__V_49_49;
#line 563 "pprint.m"
                  MR_Box mercury__pprint__V_50_50;

#line 12 "univ.opt"
                  mercury__pprint__TypeInfo_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_46, (MR_Integer) 0)));
#line 12 "univ.opt"
                  mercury__pprint__V_50_50 = (MR_hl_field(MR_mktag(0), mercury__pprint__U_46, (MR_Integer) 1));
#line 664 "pprint.m"
                  {
#line 664 "pprint.m"
                    mercury__pprint__V_49_49 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_59_59, mercury__pprint__D_45, (MR_Integer) 1000, mercury__pprint__V_50_50);
                  }
#line 564 "pprint.m"
                  /* direct tailcall eliminated */
#line 564 "pprint.m"
                  {
#line 564 "pprint.m"
                    MR_Word mercury__pprint__HeadVar__4__tmp_copy_4 = mercury__pprint__V_49_49;

#line 564 "pprint.m"
                    mercury__pprint__HeadVar__4_4 = mercury__pprint__HeadVar__4__tmp_copy_4;
#line 564 "pprint.m"
                  }
#line 564 "pprint.m"
                  continue;
#line 563 "pprint.m"
                }
#line 546 "pprint.m"
                break;
#line 546 "pprint.m"
            }
#line 546 "pprint.m"
            break;
#line 546 "pprint.m"
        }
#line 546 "pprint.m"
      }
#line 546 "pprint.m"
      break;
#line 546 "pprint.m"
    }
#line 543 "pprint.m"
}

#line 64 "sparse_bitset.opt"
static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
#line 64 "sparse_bitset.opt"
  MR_Word mercury__pprint__TypeClassInfo_for_enum_29,
#line 64 "sparse_bitset.opt"
  MR_Word mercury__pprint__Dir_8_8,
#line 64 "sparse_bitset.opt"
  MR_Integer mercury__pprint__Offset_10_10,
#line 64 "sparse_bitset.opt"
  MR_Integer mercury__pprint__Bits_11_11,
#line 64 "sparse_bitset.opt"
  MR_Integer mercury__pprint__Size_12_12,
#line 64 "sparse_bitset.opt"
  MR_Word mercury__pprint__STATE_VARIABLE_Acc_0_19_13,
#line 64 "sparse_bitset.opt"
  MR_Word * mercury__pprint__STATE_VARIABLE_Acc_20_14)
#line 64 "sparse_bitset.opt"
{
#line 345 "sparse_bitset.opt"
  while (MR_TRUE)
#line 345 "sparse_bitset.opt"
    {
#line 345 "sparse_bitset.opt"
      /* tailcall optimized into a loop */
#line 345 "sparse_bitset.opt"
      {
#line 345 "sparse_bitset.opt"
        MR_bool mercury__pprint__succeeded = (mercury__pprint__Bits_11_11 == (MR_Integer) 0);

#line 345 "sparse_bitset.opt"
        if (mercury__pprint__succeeded)
#line 344 "sparse_bitset.opt"
          *mercury__pprint__STATE_VARIABLE_Acc_20_14 = mercury__pprint__STATE_VARIABLE_Acc_0_19_13;
#line 345 "sparse_bitset.opt"
        else
#line 360 "sparse_bitset.opt"
          {
#line 347 "sparse_bitset.opt"
            mercury__pprint__succeeded = (mercury__pprint__Size_12_12 == (MR_Integer) 1);
#line 360 "sparse_bitset.opt"
            if (mercury__pprint__succeeded)
#line 353 "sparse_bitset.opt"
              {
#line 353 "sparse_bitset.opt"
                MR_Box mercury__pprint__Elem_14_15;
#line 2312 "pprint.c"
                MR_bool MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));

#line 2315 "pprint.c"
                {
#line 2317 "pprint.c"
                  mercury__pprint__succeeded = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__pprint__Offset_10_10)), &mercury__pprint__Elem_14_15);
                }
#line 353 "sparse_bitset.opt"
                if (mercury__pprint__succeeded)
#line 160 "sparse_bitset.opt"
                  {
#line 160 "sparse_bitset.opt"
                    MR_Word base;
#line 160 "sparse_bitset.opt"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 160 "sparse_bitset.opt"
                    *mercury__pprint__STATE_VARIABLE_Acc_20_14 = base;
#line 160 "sparse_bitset.opt"
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__pprint__Elem_14_15;
#line 160 "sparse_bitset.opt"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pprint__STATE_VARIABLE_Acc_0_19_13));
#line 160 "sparse_bitset.opt"
                  }
#line 353 "sparse_bitset.opt"
                else
#line 354 "sparse_bitset.opt"
                  {
#line 357 "sparse_bitset.opt"
                    {
#line 357 "sparse_bitset.opt"
                      mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold_bits\'/7", (MR_String) "\140enum.from_int/1\' failed");
#line 357 "sparse_bitset.opt"
                      return;
                    }
#line 354 "sparse_bitset.opt"
                  }
#line 353 "sparse_bitset.opt"
              }
#line 360 "sparse_bitset.opt"
            else
#line 361 "sparse_bitset.opt"
              {
#line 361 "sparse_bitset.opt"
                MR_Integer mercury__pprint__HalfSize_15_19 = (mercury__pprint__Size_12_12 >> (MR_Integer) 1);
#line 361 "sparse_bitset.opt"
                MR_Integer mercury__pprint__Mask_16_21;
#line 361 "sparse_bitset.opt"
                MR_Integer mercury__pprint__LowBits_17_22;
#line 361 "sparse_bitset.opt"
                MR_Integer mercury__pprint__HighBits_18_23;
#line 361 "sparse_bitset.opt"
                MR_Integer mercury__pprint__V_26_24;
#line 361 "sparse_bitset.opt"
                MR_Integer mercury__pprint__V_4_79 = ((MR_Integer) -1 << mercury__pprint__HalfSize_15_19);

#line 531 "sparse_bitset.opt"
                mercury__pprint__Mask_16_21 = ~(mercury__pprint__V_4_79);
#line 364 "sparse_bitset.opt"
                mercury__pprint__LowBits_17_22 = (mercury__pprint__Mask_16_21 & mercury__pprint__Bits_11_11);
#line 366 "sparse_bitset.opt"
                mercury__pprint__V_26_24 = (mercury__pprint__Bits_11_11 >> mercury__pprint__HalfSize_15_19);
#line 365 "sparse_bitset.opt"
                mercury__pprint__HighBits_18_23 = (mercury__pprint__Mask_16_21 & mercury__pprint__V_26_24);
#line 372 "sparse_bitset.opt"
#line 372 "sparse_bitset.opt"
                switch (mercury__pprint__Dir_8_8) {
#line 372 "sparse_bitset.opt"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 372 "sparse_bitset.opt"
                  case (MR_Integer) 1:
#line 373 "sparse_bitset.opt"
                    {
#line 373 "sparse_bitset.opt"
                      MR_Integer mercury__pprint__V_27_27 = (mercury__pprint__Offset_10_10 + mercury__pprint__HalfSize_15_19);
#line 373 "sparse_bitset.opt"
                      MR_Word mercury__pprint__STATE_VARIABLE_Acc_28_28_28;

#line 375 "sparse_bitset.opt"
                      {
#line 375 "sparse_bitset.opt"
                        mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__pprint__TypeClassInfo_for_enum_29, mercury__pprint__Dir_8_8, mercury__pprint__V_27_27, mercury__pprint__HighBits_18_23, mercury__pprint__HalfSize_15_19, mercury__pprint__STATE_VARIABLE_Acc_0_19_13, &mercury__pprint__STATE_VARIABLE_Acc_28_28_28);
                      }
#line 376 "sparse_bitset.opt"
                      /* direct tailcall eliminated */
#line 376 "sparse_bitset.opt"
                      {
#line 376 "sparse_bitset.opt"
                        MR_Integer mercury__pprint__Bits_11__tmp_copy_11 = mercury__pprint__LowBits_17_22;
#line 376 "sparse_bitset.opt"
                        MR_Integer mercury__pprint__Size_12__tmp_copy_12 = mercury__pprint__HalfSize_15_19;
#line 376 "sparse_bitset.opt"
                        MR_Word mercury__pprint__STATE_VARIABLE_Acc_0_19__tmp_copy_13 = mercury__pprint__STATE_VARIABLE_Acc_28_28_28;

#line 376 "sparse_bitset.opt"
                        mercury__pprint__STATE_VARIABLE_Acc_0_19_13 = mercury__pprint__STATE_VARIABLE_Acc_0_19__tmp_copy_13;
#line 376 "sparse_bitset.opt"
                        mercury__pprint__Size_12_12 = mercury__pprint__Size_12__tmp_copy_12;
#line 376 "sparse_bitset.opt"
                        mercury__pprint__Bits_11_11 = mercury__pprint__Bits_11__tmp_copy_11;
#line 376 "sparse_bitset.opt"
                      }
#line 376 "sparse_bitset.opt"
                      continue;
#line 373 "sparse_bitset.opt"
                    }
#line 372 "sparse_bitset.opt"
                    break;
#line 372 "sparse_bitset.opt"
                  case (MR_Integer) 0:
#line 368 "sparse_bitset.opt"
                    {
#line 368 "sparse_bitset.opt"
                      MR_Word mercury__pprint__STATE_VARIABLE_Acc_30_30_25;
#line 368 "sparse_bitset.opt"
                      MR_Integer mercury__pprint__V_31_26;

#line 369 "sparse_bitset.opt"
                      {
#line 369 "sparse_bitset.opt"
                        mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__pprint__TypeClassInfo_for_enum_29, mercury__pprint__Dir_8_8, mercury__pprint__Offset_10_10, mercury__pprint__LowBits_17_22, mercury__pprint__HalfSize_15_19, mercury__pprint__STATE_VARIABLE_Acc_0_19_13, &mercury__pprint__STATE_VARIABLE_Acc_30_30_25);
                      }
#line 370 "sparse_bitset.opt"
                      mercury__pprint__V_31_26 = (mercury__pprint__Offset_10_10 + mercury__pprint__HalfSize_15_19);
#line 371 "sparse_bitset.opt"
                      /* direct tailcall eliminated */
#line 371 "sparse_bitset.opt"
                      {
#line 371 "sparse_bitset.opt"
                        MR_Integer mercury__pprint__Offset_10__tmp_copy_10 = mercury__pprint__V_31_26;
#line 371 "sparse_bitset.opt"
                        MR_Integer mercury__pprint__Bits_11__tmp_copy_11 = mercury__pprint__HighBits_18_23;
#line 371 "sparse_bitset.opt"
                        MR_Integer mercury__pprint__Size_12__tmp_copy_12 = mercury__pprint__HalfSize_15_19;
#line 371 "sparse_bitset.opt"
                        MR_Word mercury__pprint__STATE_VARIABLE_Acc_0_19__tmp_copy_13 = mercury__pprint__STATE_VARIABLE_Acc_30_30_25;

#line 371 "sparse_bitset.opt"
                        mercury__pprint__STATE_VARIABLE_Acc_0_19_13 = mercury__pprint__STATE_VARIABLE_Acc_0_19__tmp_copy_13;
#line 371 "sparse_bitset.opt"
                        mercury__pprint__Size_12_12 = mercury__pprint__Size_12__tmp_copy_12;
#line 371 "sparse_bitset.opt"
                        mercury__pprint__Bits_11_11 = mercury__pprint__Bits_11__tmp_copy_11;
#line 371 "sparse_bitset.opt"
                        mercury__pprint__Offset_10_10 = mercury__pprint__Offset_10__tmp_copy_10;
#line 371 "sparse_bitset.opt"
                      }
#line 371 "sparse_bitset.opt"
                      continue;
#line 368 "sparse_bitset.opt"
                    }
#line 372 "sparse_bitset.opt"
                    break;
#line 372 "sparse_bitset.opt"
                }
#line 361 "sparse_bitset.opt"
              }
#line 360 "sparse_bitset.opt"
          }
#line 345 "sparse_bitset.opt"
      }
#line 345 "sparse_bitset.opt"
      break;
#line 345 "sparse_bitset.opt"
    }
#line 64 "sparse_bitset.opt"
}

#line 92 "version_array.opt"
static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(
#line 92 "version_array.opt"
  MR_Word mercury__pprint__TypeInfo_for_T1_1_16,
#line 92 "version_array.opt"
  MR_Box mercury__pprint__VA_7_7,
#line 92 "version_array.opt"
  MR_Word mercury__pprint__Acc_8_8,
#line 92 "version_array.opt"
  MR_Integer mercury__pprint__Hi_9_9)
#line 92 "version_array.opt"
{
#line 264 "version_array.opt"
  while (MR_TRUE)
#line 264 "version_array.opt"
    {
#line 264 "version_array.opt"
      /* tailcall optimized into a loop */
#line 264 "version_array.opt"
      {
#line 264 "version_array.opt"
        MR_bool mercury__pprint__succeeded = ((MR_Integer) 0 <= mercury__pprint__Hi_9_9);
#line 264 "version_array.opt"
        MR_Word mercury__pprint__HeadVar__5_5_10;

#line 264 "version_array.opt"
        if (mercury__pprint__succeeded)
#line 259 "version_array.opt"
          {
#line 259 "version_array.opt"
            MR_Word mercury__pprint__V_11_12;
#line 259 "version_array.opt"
            MR_Integer mercury__pprint__V_13_13;
#line 259 "version_array.opt"
            MR_Box mercury__pprint__V_12_14;

#line 261 "version_array.opt"
            {
#line 261 "version_array.opt"
              mercury__pprint__V_12_14 = mercury__version_array__lookup_2_f_0(mercury__pprint__TypeInfo_for_T1_1_16, mercury__pprint__VA_7_7, mercury__pprint__Hi_9_9);
            }
#line 44 "list.opt"
            {
#line 44 "list.opt"
              mercury__pprint__V_11_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 44 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__pprint__V_11_12, 0) = mercury__pprint__V_12_14;
#line 44 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__pprint__V_11_12, 1) = ((MR_Box) (mercury__pprint__Acc_8_8));
#line 44 "list.opt"
            }
#line 262 "version_array.opt"
            mercury__pprint__V_13_13 = (mercury__pprint__Hi_9_9 - (MR_Integer) 1);
#line 259 "version_array.opt"
            /* direct tailcall eliminated */
#line 259 "version_array.opt"
            {
#line 259 "version_array.opt"
              MR_Word mercury__pprint__Acc_8__tmp_copy_8 = mercury__pprint__V_11_12;
#line 259 "version_array.opt"
              MR_Integer mercury__pprint__Hi_9__tmp_copy_9 = mercury__pprint__V_13_13;

#line 259 "version_array.opt"
              mercury__pprint__Hi_9_9 = mercury__pprint__Hi_9__tmp_copy_9;
#line 259 "version_array.opt"
              mercury__pprint__Acc_8_8 = mercury__pprint__Acc_8__tmp_copy_8;
#line 259 "version_array.opt"
            }
#line 259 "version_array.opt"
            continue;
#line 259 "version_array.opt"
          }
#line 264 "version_array.opt"
        else
#line 265 "version_array.opt"
          mercury__pprint__HeadVar__5_5_10 = mercury__pprint__Acc_8_8;
#line 264 "version_array.opt"
        return mercury__pprint__HeadVar__5_5_10;
#line 264 "version_array.opt"
      }
#line 264 "version_array.opt"
      break;
#line 264 "version_array.opt"
    }
#line 92 "version_array.opt"
}

#line 38 "sparse_bitset.opt"
static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
#line 38 "sparse_bitset.opt"
  MR_Word mercury__pprint__TypeClassInfo_for_enum_20,
#line 38 "sparse_bitset.opt"
  MR_Word mercury__pprint__HeadVar__2_2,
#line 38 "sparse_bitset.opt"
  MR_Word mercury__pprint__HeadVar__3_3,
#line 38 "sparse_bitset.opt"
  MR_Word * mercury__pprint__HeadVar__4_4)
#line 38 "sparse_bitset.opt"
{
#line 321 "sparse_bitset.opt"
  {
#line 321 "sparse_bitset.opt"
    MR_bool mercury__pprint__succeeded;

#line 321 "sparse_bitset.opt"
    if ((mercury__pprint__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 321 "sparse_bitset.opt"
      *mercury__pprint__HeadVar__4_4 = mercury__pprint__HeadVar__3_3;
#line 321 "sparse_bitset.opt"
    else
#line 323 "sparse_bitset.opt"
      {
#line 323 "sparse_bitset.opt"
        MR_Word mercury__pprint__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 0)));
#line 323 "sparse_bitset.opt"
        MR_Word mercury__pprint__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));
#line 323 "sparse_bitset.opt"
        MR_Word mercury__pprint__STATE_VARIABLE_Acc_15_15_13;
#line 323 "sparse_bitset.opt"
        MR_Integer mercury__pprint__V_22_17;
#line 323 "sparse_bitset.opt"
        MR_Integer mercury__pprint__V_18_18;

#line 324 "sparse_bitset.opt"
        {
#line 324 "sparse_bitset.opt"
          mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(mercury__pprint__TypeClassInfo_for_enum_20, mercury__pprint__T_11_10, mercury__pprint__HeadVar__3_3, &mercury__pprint__STATE_VARIABLE_Acc_15_15_13);
        }
#line 326 "sparse_bitset.opt"
        mercury__pprint__V_22_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pprint__H_10_9, (MR_Integer) 0)));
#line 326 "sparse_bitset.opt"
        mercury__pprint__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pprint__H_10_9, (MR_Integer) 1)));
#line 329 "sparse_bitset.opt"
        {
#line 329 "sparse_bitset.opt"
          mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__pprint__TypeClassInfo_for_enum_20, (MR_Integer) 1, mercury__pprint__V_22_17, mercury__pprint__V_18_18, (MR_Integer) 32, mercury__pprint__STATE_VARIABLE_Acc_15_15_13, mercury__pprint__HeadVar__4_4);
#line 329 "sparse_bitset.opt"
          return;
        }
#line 323 "sparse_bitset.opt"
      }
#line 321 "sparse_bitset.opt"
  }
#line 38 "sparse_bitset.opt"
}

#line 484 "pprint.m"
static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_52_95_95_91_51_44_32_52_93_95_48_8_p_0(
#line 484 "pprint.m"
  MR_Word mercury__pprint__V_85_85,
#line 484 "pprint.m"
  MR_Box mercury__pprint__V_86_86,
#line 484 "pprint.m"
  MR_Integer mercury__pprint__W_2,
#line 484 "pprint.m"
  MR_Integer mercury__pprint__HeadVar__3_3,
#line 484 "pprint.m"
  MR_Integer * mercury__pprint__K_4,
#line 484 "pprint.m"
  MR_String mercury__pprint__I_5,
#line 484 "pprint.m"
  MR_Word mercury__pprint__HeadVar__6_6,
#line 484 "pprint.m"
  MR_Box mercury__pprint__HeadVar__7_7,
#line 484 "pprint.m"
  MR_Box * mercury__pprint__S_8)
#line 484 "pprint.m"
{
#line 487 "pprint.m"
  while (MR_TRUE)
#line 487 "pprint.m"
    {
#line 487 "pprint.m"
      /* tailcall optimized into a loop */
#line 487 "pprint.m"
      {
#line 487 "pprint.m"
        MR_bool mercury__pprint__succeeded;

#line 487 "pprint.m"
#line 487 "pprint.m"
        switch (MR_tag((MR_Word) mercury__pprint__HeadVar__6_6)) {
#line 487 "pprint.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 487 "pprint.m"
          case (MR_Integer) 0:
#line 487 "pprint.m"
#line 487 "pprint.m"
            switch (MR_unmkbody(mercury__pprint__HeadVar__6_6)) {
#line 487 "pprint.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 487 "pprint.m"
              case (MR_Integer) 0:
#line 487 "pprint.m"
                {
#line 487 "pprint.m"
                  *mercury__pprint__K_4 = mercury__pprint__HeadVar__3_3;
#line 487 "pprint.m"
                  *mercury__pprint__S_8 = mercury__pprint__HeadVar__7_7;
#line 487 "pprint.m"
                }
#line 487 "pprint.m"
                break;
#line 487 "pprint.m"
              case (MR_Integer) 1:
#line 499 "pprint.m"
                {
#line 499 "pprint.m"
                  MR_Box mercury__pprint__S1_52;
#line 2692 "pprint.c"
                  void MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 2694 "pprint.c"
                  void MR_CALL (* mercury__pprint__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 258 "string.opt"
                  {
#line 258 "string.opt"
                    mercury__string__count_codepoints_2_p_0(mercury__pprint__I_5, mercury__pprint__K_4);
                  }
#line 2702 "pprint.c"
                  mercury__pprint__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__V_85_85, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2704 "pprint.c"
                  {
#line 2706 "pprint.c"
                    mercury__pprint__func_0(((MR_Box) mercury__pprint__V_85_85), mercury__pprint__V_86_86, ((MR_Box) ((MR_String) "\n")), mercury__pprint__HeadVar__7_7, &mercury__pprint__S1_52);
                  }
#line 2709 "pprint.c"
                  mercury__pprint__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__V_85_85, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2711 "pprint.c"
                  {
#line 2713 "pprint.c"
                    mercury__pprint__func_1(((MR_Box) mercury__pprint__V_85_85), mercury__pprint__V_86_86, ((MR_Box) (mercury__pprint__I_5)), mercury__pprint__S1_52, mercury__pprint__S_8);
#line 2715 "pprint.c"
                    return;
                  }
#line 499 "pprint.m"
                }
#line 487 "pprint.m"
                break;
#line 487 "pprint.m"
            }
#line 487 "pprint.m"
            break;
#line 487 "pprint.m"
          case (MR_Integer) 1:
#line 489 "pprint.m"
            {
#line 489 "pprint.m"
              MR_Word mercury__pprint__X_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__6_6, (MR_Integer) 0)));
#line 489 "pprint.m"
              MR_Word mercury__pprint__Y_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
#line 489 "pprint.m"
              MR_Integer mercury__pprint__K1_23;
#line 489 "pprint.m"
              MR_Box mercury__pprint__S1_24;

#line 490 "pprint.m"
              {
#line 490 "pprint.m"
                mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_52_95_95_91_51_44_32_52_93_95_48_8_p_0(mercury__pprint__V_85_85, mercury__pprint__V_86_86, mercury__pprint__W_2, mercury__pprint__HeadVar__3_3, &mercury__pprint__K1_23, mercury__pprint__I_5, mercury__pprint__X_19, mercury__pprint__HeadVar__7_7, &mercury__pprint__S1_24);
              }
#line 491 "pprint.m"
              /* direct tailcall eliminated */
#line 491 "pprint.m"
              {
#line 491 "pprint.m"
                MR_Integer mercury__pprint__HeadVar__3__tmp_copy_3 = mercury__pprint__K1_23;
#line 491 "pprint.m"
                MR_Word mercury__pprint__HeadVar__6__tmp_copy_6 = mercury__pprint__Y_20;
#line 491 "pprint.m"
                MR_Box mercury__pprint__HeadVar__7__tmp_copy_7 = mercury__pprint__S1_24;

#line 491 "pprint.m"
                mercury__pprint__HeadVar__7_7 = mercury__pprint__HeadVar__7__tmp_copy_7;
#line 491 "pprint.m"
                mercury__pprint__HeadVar__6_6 = mercury__pprint__HeadVar__6__tmp_copy_6;
#line 491 "pprint.m"
                mercury__pprint__HeadVar__3_3 = mercury__pprint__HeadVar__3__tmp_copy_3;
#line 491 "pprint.m"
              }
#line 491 "pprint.m"
              continue;
#line 489 "pprint.m"
            }
#line 487 "pprint.m"
            break;
#line 487 "pprint.m"
          case (MR_Integer) 2:
#line 493 "pprint.m"
            {
#line 493 "pprint.m"
              MR_Integer mercury__pprint__J_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__6_6, (MR_Integer) 0)));
#line 493 "pprint.m"
              MR_Word mercury__pprint__X_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
#line 493 "pprint.m"
              MR_String mercury__pprint__V_34_34;

#line 494 "pprint.m"
              {
#line 494 "pprint.m"
                mercury__pprint__V_34_34 = mercury__pprint__extend_2_f_0(mercury__pprint__I_5, mercury__pprint__J_30);
              }
#line 494 "pprint.m"
              /* direct tailcall eliminated */
#line 494 "pprint.m"
              {
#line 494 "pprint.m"
                MR_String mercury__pprint__I__tmp_copy_5 = mercury__pprint__V_34_34;
#line 494 "pprint.m"
                MR_Word mercury__pprint__HeadVar__6__tmp_copy_6 = mercury__pprint__X_31;

#line 494 "pprint.m"
                mercury__pprint__HeadVar__6_6 = mercury__pprint__HeadVar__6__tmp_copy_6;
#line 494 "pprint.m"
                mercury__pprint__I_5 = mercury__pprint__I__tmp_copy_5;
#line 494 "pprint.m"
              }
#line 494 "pprint.m"
              continue;
#line 493 "pprint.m"
            }
#line 487 "pprint.m"
            break;
#line 487 "pprint.m"
          case (MR_Integer) 3:
#line 487 "pprint.m"
#line 487 "pprint.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 0)))) {
#line 487 "pprint.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 487 "pprint.m"
              case (MR_Integer) 0:
#line 496 "pprint.m"
                {
#line 496 "pprint.m"
                  MR_String mercury__pprint__L_40 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
#line 496 "pprint.m"
                  MR_Word mercury__pprint__X_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 2)));
#line 496 "pprint.m"
                  MR_String mercury__pprint__V_44_44;

#line 497 "pprint.m"
                  {
#line 497 "pprint.m"
                    mercury__pprint__V_44_44 = mercury__string__f_43_43_2_f_0(mercury__pprint__I_5, mercury__pprint__L_40);
                  }
#line 497 "pprint.m"
                  /* direct tailcall eliminated */
#line 497 "pprint.m"
                  {
#line 497 "pprint.m"
                    MR_String mercury__pprint__I__tmp_copy_5 = mercury__pprint__V_44_44;
#line 497 "pprint.m"
                    MR_Word mercury__pprint__HeadVar__6__tmp_copy_6 = mercury__pprint__X_41;

#line 497 "pprint.m"
                    mercury__pprint__HeadVar__6_6 = mercury__pprint__HeadVar__6__tmp_copy_6;
#line 497 "pprint.m"
                    mercury__pprint__I_5 = mercury__pprint__I__tmp_copy_5;
#line 497 "pprint.m"
                  }
#line 497 "pprint.m"
                  continue;
#line 496 "pprint.m"
                }
#line 487 "pprint.m"
                break;
#line 487 "pprint.m"
              case (MR_Integer) 1:
#line 512 "pprint.m"
                {
#line 512 "pprint.m"
                  MR_String mercury__pprint__T_79 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
#line 512 "pprint.m"
                  MR_Integer mercury__pprint__V_82_82;

#line 258 "string.opt"
                  {
#line 258 "string.opt"
                    mercury__string__count_codepoints_2_p_0(mercury__pprint__T_79, &mercury__pprint__V_82_82);
                  }
#line 513 "pprint.m"
                  *mercury__pprint__K_4 = (mercury__pprint__HeadVar__3_3 + mercury__pprint__V_82_82);
#line 514 "pprint.m"
                  {
#line 514 "pprint.m"
                    mercury__stream__put_4_p_0(mercury__pprint__V_85_85, mercury__pprint__V_86_86, ((MR_Box) (mercury__pprint__T_79)), mercury__pprint__HeadVar__7_7, mercury__pprint__S_8);
#line 514 "pprint.m"
                    return;
                  }
#line 512 "pprint.m"
                }
#line 487 "pprint.m"
                break;
#line 487 "pprint.m"
              case (MR_Integer) 2:
#line 504 "pprint.m"
                {
#line 504 "pprint.m"
                  MR_Word mercury__pprint__X_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
#line 505 "pprint.m"
                  MR_Integer mercury__pprint__V_62_62 = (mercury__pprint__W_2 - mercury__pprint__HeadVar__3_3);
#line 523 "pprint.m"
                  MR_Integer mercury__pprint__V_93_93;

#line 523 "pprint.m"
                  {
#line 523 "pprint.m"
                    mercury__pprint__succeeded = mercury__pprint__ff_2_f_0(mercury__pprint__X_59, mercury__pprint__V_62_62, &mercury__pprint__V_93_93);
                  }
#line 506 "pprint.m"
                  if (mercury__pprint__succeeded)
#line 505 "pprint.m"
                    {
#line 505 "pprint.m"
                      mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_57_95_95_91_51_44_32_52_93_95_48_6_p_0(mercury__pprint__V_85_85, mercury__pprint__V_86_86, mercury__pprint__HeadVar__3_3, mercury__pprint__K_4, mercury__pprint__X_59, mercury__pprint__HeadVar__7_7, mercury__pprint__S_8);
#line 505 "pprint.m"
                      return;
                    }
#line 506 "pprint.m"
                  else
#line 506 "pprint.m"
                    {
#line 506 "pprint.m"
                      /* direct tailcall eliminated */
#line 506 "pprint.m"
                      {
#line 506 "pprint.m"
                        MR_Word mercury__pprint__HeadVar__6__tmp_copy_6 = mercury__pprint__X_59;

#line 506 "pprint.m"
                        mercury__pprint__HeadVar__6_6 = mercury__pprint__HeadVar__6__tmp_copy_6;
#line 506 "pprint.m"
                      }
#line 506 "pprint.m"
                      continue;
#line 506 "pprint.m"
                    }
#line 504 "pprint.m"
                }
#line 487 "pprint.m"
                break;
#line 487 "pprint.m"
              case (MR_Integer) 3:
#line 509 "pprint.m"
                {
#line 509 "pprint.m"
                  MR_Word mercury__pprint__TypeInfo_84_84;
#line 509 "pprint.m"
                  MR_Integer mercury__pprint__D_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
#line 509 "pprint.m"
                  MR_Word mercury__pprint__U_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 2)));
#line 509 "pprint.m"
                  MR_Word mercury__pprint__V_72_72;
#line 509 "pprint.m"
                  MR_Box mercury__pprint__V_73_73;

#line 12 "univ.opt"
                  mercury__pprint__TypeInfo_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_69, (MR_Integer) 0)));
#line 12 "univ.opt"
                  mercury__pprint__V_73_73 = (MR_hl_field(MR_mktag(0), mercury__pprint__U_69, (MR_Integer) 1));
#line 664 "pprint.m"
                  {
#line 664 "pprint.m"
                    mercury__pprint__V_72_72 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_84_84, mercury__pprint__D_68, (MR_Integer) 1000, mercury__pprint__V_73_73);
                  }
#line 510 "pprint.m"
                  /* direct tailcall eliminated */
#line 510 "pprint.m"
                  {
#line 510 "pprint.m"
                    MR_Word mercury__pprint__HeadVar__6__tmp_copy_6 = mercury__pprint__V_72_72;

#line 510 "pprint.m"
                    mercury__pprint__HeadVar__6_6 = mercury__pprint__HeadVar__6__tmp_copy_6;
#line 510 "pprint.m"
                  }
#line 510 "pprint.m"
                  continue;
#line 509 "pprint.m"
                }
#line 487 "pprint.m"
                break;
#line 487 "pprint.m"
            }
#line 487 "pprint.m"
            break;
#line 487 "pprint.m"
        }
#line 487 "pprint.m"
      }
#line 487 "pprint.m"
      break;
#line 487 "pprint.m"
    }
#line 484 "pprint.m"
}

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_57_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__pprint__V_12_12,
#line 324 "list.int"
  MR_Integer mercury__pprint__V_13_13,
#line 324 "list.int"
  MR_Word mercury__pprint__HeadVar__2_2)
#line 324 "list.int"
{
#line 170 "list.opt"
  {
#line 170 "list.opt"
    MR_bool mercury__pprint__succeeded;
#line 170 "list.opt"
    MR_Word mercury__pprint__HeadVar__3_3;

#line 170 "list.opt"
    if ((mercury__pprint__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "list.opt"
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "list.opt"
    else
#line 171 "list.opt"
      {
#line 171 "list.opt"
        MR_Box mercury__pprint__H_6_6 = (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 0));
#line 171 "list.opt"
        MR_Word mercury__pprint__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "list.opt"
        MR_Word mercury__pprint__V_8_8;
#line 171 "list.opt"
        MR_Word mercury__pprint__V_9_9;

#line 664 "pprint.m"
        {
#line 664 "pprint.m"
          mercury__pprint__V_8_8 = mercury__pprint__to_doc_3_f_0(mercury__pprint__V_12_12, mercury__pprint__V_13_13, (MR_Integer) 1000, mercury__pprint__H_6_6);
        }
#line 173 "list.opt"
        {
#line 173 "list.opt"
          mercury__pprint__V_9_9 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_57_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(mercury__pprint__V_12_12, mercury__pprint__V_13_13, mercury__pprint__T_7_7);
        }
#line 171 "list.opt"
        {
#line 171 "list.opt"
          mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (mercury__pprint__V_8_8));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__V_9_9));
#line 171 "list.opt"
        }
#line 171 "list.opt"
      }
#line 170 "list.opt"
    return mercury__pprint__HeadVar__3_3;
#line 170 "list.opt"
  }
#line 324 "list.int"
}

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_56_95_95_91_50_93_95_48_2_f_in__list_0(
#line 324 "list.int"
  MR_Integer mercury__pprint__V_12_12,
#line 324 "list.int"
  MR_Word mercury__pprint__HeadVar__2_2)
#line 324 "list.int"
{
#line 170 "list.opt"
  {
#line 170 "list.opt"
    MR_bool mercury__pprint__succeeded;
#line 170 "list.opt"
    MR_Word mercury__pprint__HeadVar__3_3;

#line 170 "list.opt"
    if ((mercury__pprint__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "list.opt"
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "list.opt"
    else
#line 171 "list.opt"
      {
#line 171 "list.opt"
        MR_Word mercury__pprint__H_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "list.opt"
        MR_Word mercury__pprint__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "list.opt"
        MR_Word mercury__pprint__V_8_8;
#line 171 "list.opt"
        MR_Word mercury__pprint__V_9_9;

#line 630 "pprint.m"
        {
#line 630 "pprint.m"
          mercury__pprint__V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 630 "pprint.m"
          MR_hl_field(MR_mktag(3), mercury__pprint__V_8_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 630 "pprint.m"
          MR_hl_field(MR_mktag(3), mercury__pprint__V_8_8, 1) = ((MR_Box) (mercury__pprint__V_12_12));
#line 630 "pprint.m"
          MR_hl_field(MR_mktag(3), mercury__pprint__V_8_8, 2) = ((MR_Box) (mercury__pprint__H_6_6));
#line 630 "pprint.m"
        }
#line 173 "list.opt"
        {
#line 173 "list.opt"
          mercury__pprint__V_9_9 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_56_95_95_91_50_93_95_48_2_f_in__list_0(mercury__pprint__V_12_12, mercury__pprint__T_7_7);
        }
#line 171 "list.opt"
        {
#line 171 "list.opt"
          mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (mercury__pprint__V_8_8));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__V_9_9));
#line 171 "list.opt"
        }
#line 171 "list.opt"
      }
#line 170 "list.opt"
    return mercury__pprint__HeadVar__3_3;
#line 170 "list.opt"
  }
#line 324 "list.int"
}

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__pprint__HeadVar__2_2)
#line 324 "list.int"
{
#line 170 "list.opt"
  {
#line 170 "list.opt"
    MR_bool mercury__pprint__succeeded;
#line 170 "list.opt"
    MR_Word mercury__pprint__HeadVar__3_3;

#line 170 "list.opt"
    if ((mercury__pprint__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "list.opt"
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "list.opt"
    else
#line 171 "list.opt"
      {
#line 171 "list.opt"
        MR_Word mercury__pprint__H_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "list.opt"
        MR_Word mercury__pprint__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "list.opt"
        MR_Word mercury__pprint__V_8_8;
#line 171 "list.opt"
        MR_Word mercury__pprint__V_9_9;
#line 171 "list.opt"
        MR_Box mercury__pprint__K_20 = (MR_hl_field(MR_mktag(0), mercury__pprint__H_6_6, (MR_Integer) 0));
#line 171 "list.opt"
        MR_Box mercury__pprint__V_21 = (MR_hl_field(MR_mktag(0), mercury__pprint__H_6_6, (MR_Integer) 1));

#line 995 "pprint.m"
        {
#line 995 "pprint.m"
          mercury__pprint__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 995 "pprint.m"
          MR_hl_field(MR_mktag(0), mercury__pprint__V_8_8, 0) = mercury__pprint__K_20;
#line 995 "pprint.m"
          MR_hl_field(MR_mktag(0), mercury__pprint__V_8_8, 1) = mercury__pprint__V_21;
#line 995 "pprint.m"
        }
#line 173 "list.opt"
        {
#line 173 "list.opt"
          mercury__pprint__V_9_9 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_2_f_in__list_0(mercury__pprint__T_7_7);
        }
#line 171 "list.opt"
        {
#line 171 "list.opt"
          mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (mercury__pprint__V_8_8));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__V_9_9));
#line 171 "list.opt"
        }
#line 171 "list.opt"
      }
#line 170 "list.opt"
    return mercury__pprint__HeadVar__3_3;
#line 170 "list.opt"
  }
#line 324 "list.int"
}

#line 415 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(
#line 415 "pprint.m"
  MR_Word mercury__pprint__Doc_5)
#line 415 "pprint.m"
{
#line 415 "pprint.m"
  {
#line 415 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 415 "pprint.m"
    MR_Word mercury__pprint__Doc_3 = mercury__pprint__Doc_5;

#line 415 "pprint.m"
    return mercury__pprint__Doc_3;
#line 415 "pprint.m"
  }
#line 415 "pprint.m"
}

#line 416 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_115_116_114_105_110_103_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(
#line 416 "pprint.m"
  MR_String mercury__pprint__String_5)
#line 416 "pprint.m"
{
#line 431 "pprint.m"
  {
#line 431 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 431 "pprint.m"
    MR_Word mercury__pprint__HeadVar__3_3;

#line 431 "pprint.m"
    {
#line 431 "pprint.m"
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "pprint.m"
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 431 "pprint.m"
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__String_5));
#line 431 "pprint.m"
    }
#line 431 "pprint.m"
    return mercury__pprint__HeadVar__3_3;
#line 431 "pprint.m"
  }
#line 416 "pprint.m"
}

#line 417 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_105_110_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(
#line 417 "pprint.m"
  MR_Integer mercury__pprint__Int_5)
#line 417 "pprint.m"
{
#line 417 "pprint.m"
  {
#line 417 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 417 "pprint.m"
    MR_Word mercury__pprint__HeadVar__3_3;
#line 417 "pprint.m"
    MR_Word mercury__pprint__V_6_6;

#line 417 "pprint.m"
    {
#line 417 "pprint.m"
      mercury__pprint__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 417 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__V_6_6, 0) = ((MR_Box) (mercury__pprint__Int_5));
#line 417 "pprint.m"
    }
#line 417 "pprint.m"
    {
#line 417 "pprint.m"
      return mercury__pprint__HeadVar__3_3 = mercury__pprint__poly_1_f_0(mercury__pprint__V_6_6);
    }
#line 417 "pprint.m"
    return mercury__pprint__HeadVar__3_3;
#line 417 "pprint.m"
  }
#line 417 "pprint.m"
}

#line 418 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_102_108_111_97_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(
#line 418 "pprint.m"
  MR_Float mercury__pprint__Float_5)
#line 418 "pprint.m"
{
#line 418 "pprint.m"
  {
#line 418 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 418 "pprint.m"
    MR_Word mercury__pprint__HeadVar__3_3;
#line 418 "pprint.m"
    MR_Word mercury__pprint__V_6_6;

#line 418 "pprint.m"
    {
#line 418 "pprint.m"
      mercury__pprint__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 418 "pprint.m"
      MR_hl_field(MR_mktag(0), mercury__pprint__V_6_6, 0) = MR_box_float(mercury__pprint__Float_5);
#line 418 "pprint.m"
    }
#line 418 "pprint.m"
    {
#line 418 "pprint.m"
      return mercury__pprint__HeadVar__3_3 = mercury__pprint__poly_1_f_0(mercury__pprint__V_6_6);
    }
#line 418 "pprint.m"
    return mercury__pprint__HeadVar__3_3;
#line 418 "pprint.m"
  }
#line 418 "pprint.m"
}

#line 419 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_99_104_97_114_97_99_116_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(
#line 419 "pprint.m"
  MR_Char mercury__pprint__Char_5)
#line 419 "pprint.m"
{
#line 419 "pprint.m"
  {
#line 419 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 419 "pprint.m"
    MR_Word mercury__pprint__HeadVar__3_3;
#line 419 "pprint.m"
    MR_Word mercury__pprint__V_6_6;

#line 419 "pprint.m"
    {
#line 419 "pprint.m"
      mercury__pprint__V_6_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 419 "pprint.m"
      MR_hl_field(MR_mktag(3), mercury__pprint__V_6_6, 0) = ((MR_Box) (MR_Word) (mercury__pprint__Char_5));
#line 419 "pprint.m"
    }
#line 419 "pprint.m"
    {
#line 419 "pprint.m"
      return mercury__pprint__HeadVar__3_3 = mercury__pprint__poly_1_f_0(mercury__pprint__V_6_6);
    }
#line 419 "pprint.m"
    return mercury__pprint__HeadVar__3_3;
#line 419 "pprint.m"
  }
#line 419 "pprint.m"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__pprint__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 544 "pprint.m"
static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_p_1(
#line 544 "pprint.m"
  MR_Word mercury__pprint__P_1,
#line 544 "pprint.m"
  MR_Integer mercury__pprint__HeadVar__2_2,
#line 544 "pprint.m"
  MR_Integer * mercury__pprint__K_3,
#line 544 "pprint.m"
  MR_Word mercury__pprint__HeadVar__4_4,
#line 544 "pprint.m"
  MR_Box mercury__pprint__HeadVar__5_5,
#line 544 "pprint.m"
  MR_Box * mercury__pprint__S_6)
#line 544 "pprint.m"
{
#line 546 "pprint.m"
  while (MR_TRUE)
#line 546 "pprint.m"
    {
#line 546 "pprint.m"
      /* tailcall optimized into a loop */
#line 546 "pprint.m"
      {
#line 546 "pprint.m"
        MR_bool mercury__pprint__succeeded;

#line 546 "pprint.m"
#line 546 "pprint.m"
        switch (MR_tag((MR_Word) mercury__pprint__HeadVar__4_4)) {
#line 546 "pprint.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 546 "pprint.m"
          case (MR_Integer) 0:
#line 546 "pprint.m"
#line 546 "pprint.m"
            switch (MR_unmkbody(mercury__pprint__HeadVar__4_4)) {
#line 546 "pprint.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 546 "pprint.m"
              case (MR_Integer) 0:
#line 546 "pprint.m"
                {
#line 546 "pprint.m"
                  *mercury__pprint__K_3 = mercury__pprint__HeadVar__2_2;
#line 546 "pprint.m"
                  *mercury__pprint__S_6 = mercury__pprint__HeadVar__5_5;
#line 546 "pprint.m"
                }
#line 546 "pprint.m"
                break;
#line 546 "pprint.m"
              case (MR_Integer) 1:
#line 558 "pprint.m"
                {
#line 558 "pprint.m"
                  *mercury__pprint__K_3 = mercury__pprint__HeadVar__2_2;
#line 558 "pprint.m"
                  *mercury__pprint__S_6 = mercury__pprint__HeadVar__5_5;
#line 558 "pprint.m"
                }
#line 546 "pprint.m"
                break;
#line 546 "pprint.m"
            }
#line 546 "pprint.m"
            break;
#line 546 "pprint.m"
          case (MR_Integer) 1:
#line 548 "pprint.m"
            {
#line 548 "pprint.m"
              MR_Word mercury__pprint__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__4_4, (MR_Integer) 0)));
#line 548 "pprint.m"
              MR_Word mercury__pprint__Y_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
#line 548 "pprint.m"
              MR_Integer mercury__pprint__K1_17;
#line 548 "pprint.m"
              MR_Box mercury__pprint__S1_18;

#line 549 "pprint.m"
              {
#line 549 "pprint.m"
                mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_p_1(mercury__pprint__P_1, mercury__pprint__HeadVar__2_2, &mercury__pprint__K1_17, mercury__pprint__X_13, mercury__pprint__HeadVar__5_5, &mercury__pprint__S1_18);
              }
#line 550 "pprint.m"
              /* direct tailcall eliminated */
#line 550 "pprint.m"
              {
#line 550 "pprint.m"
                MR_Integer mercury__pprint__HeadVar__2__tmp_copy_2 = mercury__pprint__K1_17;
#line 550 "pprint.m"
                MR_Word mercury__pprint__HeadVar__4__tmp_copy_4 = mercury__pprint__Y_14;
#line 550 "pprint.m"
                MR_Box mercury__pprint__HeadVar__5__tmp_copy_5 = mercury__pprint__S1_18;

#line 550 "pprint.m"
                mercury__pprint__HeadVar__5_5 = mercury__pprint__HeadVar__5__tmp_copy_5;
#line 550 "pprint.m"
                mercury__pprint__HeadVar__4_4 = mercury__pprint__HeadVar__4__tmp_copy_4;
#line 550 "pprint.m"
                mercury__pprint__HeadVar__2_2 = mercury__pprint__HeadVar__2__tmp_copy_2;
#line 550 "pprint.m"
              }
#line 550 "pprint.m"
              continue;
#line 548 "pprint.m"
            }
#line 546 "pprint.m"
            break;
#line 546 "pprint.m"
          case (MR_Integer) 2:
#line 552 "pprint.m"
            {
#line 552 "pprint.m"
              MR_Word mercury__pprint__X_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
#line 552 "pprint.m"
              MR_Integer mercury__pprint__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__4_4, (MR_Integer) 0)));

#line 553 "pprint.m"
              /* direct tailcall eliminated */
#line 553 "pprint.m"
              {
#line 553 "pprint.m"
                MR_Word mercury__pprint__HeadVar__4__tmp_copy_4 = mercury__pprint__X_23;

#line 553 "pprint.m"
                mercury__pprint__HeadVar__4_4 = mercury__pprint__HeadVar__4__tmp_copy_4;
#line 553 "pprint.m"
              }
#line 553 "pprint.m"
              continue;
#line 552 "pprint.m"
            }
#line 546 "pprint.m"
            break;
#line 546 "pprint.m"
          case (MR_Integer) 3:
#line 546 "pprint.m"
#line 546 "pprint.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 0)))) {
#line 546 "pprint.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 546 "pprint.m"
              case (MR_Integer) 0:
#line 555 "pprint.m"
                {
#line 555 "pprint.m"
                  MR_Word mercury__pprint__X_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 2)));
#line 555 "pprint.m"
                  MR_String mercury__pprint__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));

#line 556 "pprint.m"
                  /* direct tailcall eliminated */
#line 556 "pprint.m"
                  {
#line 556 "pprint.m"
                    MR_Word mercury__pprint__HeadVar__4__tmp_copy_4 = mercury__pprint__X_30;

#line 556 "pprint.m"
                    mercury__pprint__HeadVar__4_4 = mercury__pprint__HeadVar__4__tmp_copy_4;
#line 556 "pprint.m"
                  }
#line 556 "pprint.m"
                  continue;
#line 555 "pprint.m"
                }
#line 546 "pprint.m"
                break;
#line 546 "pprint.m"
              case (MR_Integer) 1:
#line 566 "pprint.m"
                {
#line 566 "pprint.m"
                  MR_String mercury__pprint__T_54 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
#line 566 "pprint.m"
                  MR_Integer mercury__pprint__V_57_57;
#line 568 "pprint.m"
                  void MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 258 "string.opt"
                  {
#line 258 "string.opt"
                    mercury__string__count_codepoints_2_p_0(mercury__pprint__T_54, &mercury__pprint__V_57_57);
                  }
#line 567 "pprint.m"
                  *mercury__pprint__K_3 = (mercury__pprint__HeadVar__2_2 + mercury__pprint__V_57_57);
#line 568 "pprint.m"
                  mercury__pprint__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__pprint__P_1, (MR_Integer) 1)));
#line 568 "pprint.m"
                  {
#line 568 "pprint.m"
                    mercury__pprint__func_0(((MR_Box) mercury__pprint__P_1), ((MR_Box) (mercury__pprint__T_54)), mercury__pprint__HeadVar__5_5, mercury__pprint__S_6);
#line 568 "pprint.m"
                    return;
                  }
#line 566 "pprint.m"
                }
#line 546 "pprint.m"
                break;
#line 546 "pprint.m"
              case (MR_Integer) 2:
#line 560 "pprint.m"
                {
#line 560 "pprint.m"
                  MR_Word mercury__pprint__X_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));

#line 561 "pprint.m"
                  /* direct tailcall eliminated */
#line 561 "pprint.m"
                  {
#line 561 "pprint.m"
                    MR_Word mercury__pprint__HeadVar__4__tmp_copy_4 = mercury__pprint__X_39;

#line 561 "pprint.m"
                    mercury__pprint__HeadVar__4_4 = mercury__pprint__HeadVar__4__tmp_copy_4;
#line 561 "pprint.m"
                  }
#line 561 "pprint.m"
                  continue;
#line 560 "pprint.m"
                }
#line 546 "pprint.m"
                break;
#line 546 "pprint.m"
              case (MR_Integer) 3:
#line 563 "pprint.m"
                {
#line 563 "pprint.m"
                  MR_Word mercury__pprint__TypeInfo_59_59;
#line 563 "pprint.m"
                  MR_Integer mercury__pprint__D_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
#line 563 "pprint.m"
                  MR_Word mercury__pprint__U_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 2)));
#line 563 "pprint.m"
                  MR_Word mercury__pprint__V_49_49;
#line 563 "pprint.m"
                  MR_Box mercury__pprint__V_50_50;

#line 12 "univ.opt"
                  mercury__pprint__TypeInfo_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_46, (MR_Integer) 0)));
#line 12 "univ.opt"
                  mercury__pprint__V_50_50 = (MR_hl_field(MR_mktag(0), mercury__pprint__U_46, (MR_Integer) 1));
#line 664 "pprint.m"
                  {
#line 664 "pprint.m"
                    mercury__pprint__V_49_49 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_59_59, mercury__pprint__D_45, (MR_Integer) 1000, mercury__pprint__V_50_50);
                  }
#line 564 "pprint.m"
                  /* direct tailcall eliminated */
#line 564 "pprint.m"
                  {
#line 564 "pprint.m"
                    MR_Word mercury__pprint__HeadVar__4__tmp_copy_4 = mercury__pprint__V_49_49;

#line 564 "pprint.m"
                    mercury__pprint__HeadVar__4_4 = mercury__pprint__HeadVar__4__tmp_copy_4;
#line 564 "pprint.m"
                  }
#line 564 "pprint.m"
                  continue;
#line 563 "pprint.m"
                }
#line 546 "pprint.m"
                break;
#line 546 "pprint.m"
            }
#line 546 "pprint.m"
            break;
#line 546 "pprint.m"
        }
#line 546 "pprint.m"
      }
#line 546 "pprint.m"
      break;
#line 546 "pprint.m"
    }
#line 544 "pprint.m"
}

#line 543 "pprint.m"
static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_p_0(
#line 543 "pprint.m"
  MR_Word mercury__pprint__P_1,
#line 543 "pprint.m"
  MR_Integer mercury__pprint__HeadVar__2_2,
#line 543 "pprint.m"
  MR_Integer * mercury__pprint__K_3,
#line 543 "pprint.m"
  MR_Word mercury__pprint__HeadVar__4_4,
#line 543 "pprint.m"
  MR_Box mercury__pprint__HeadVar__5_5,
#line 543 "pprint.m"
  MR_Box * mercury__pprint__S_6)
#line 543 "pprint.m"
{
#line 546 "pprint.m"
  while (MR_TRUE)
#line 546 "pprint.m"
    {
#line 546 "pprint.m"
      /* tailcall optimized into a loop */
#line 546 "pprint.m"
      {
#line 546 "pprint.m"
        MR_bool mercury__pprint__succeeded;

#line 546 "pprint.m"
#line 546 "pprint.m"
        switch (MR_tag((MR_Word) mercury__pprint__HeadVar__4_4)) {
#line 546 "pprint.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 546 "pprint.m"
          case (MR_Integer) 0:
#line 546 "pprint.m"
#line 546 "pprint.m"
            switch (MR_unmkbody(mercury__pprint__HeadVar__4_4)) {
#line 546 "pprint.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 546 "pprint.m"
              case (MR_Integer) 0:
#line 546 "pprint.m"
                {
#line 546 "pprint.m"
                  *mercury__pprint__K_3 = mercury__pprint__HeadVar__2_2;
#line 546 "pprint.m"
                  *mercury__pprint__S_6 = mercury__pprint__HeadVar__5_5;
#line 546 "pprint.m"
                }
#line 546 "pprint.m"
                break;
#line 546 "pprint.m"
              case (MR_Integer) 1:
#line 558 "pprint.m"
                {
#line 558 "pprint.m"
                  *mercury__pprint__K_3 = mercury__pprint__HeadVar__2_2;
#line 558 "pprint.m"
                  *mercury__pprint__S_6 = mercury__pprint__HeadVar__5_5;
#line 558 "pprint.m"
                }
#line 546 "pprint.m"
                break;
#line 546 "pprint.m"
            }
#line 546 "pprint.m"
            break;
#line 546 "pprint.m"
          case (MR_Integer) 1:
#line 548 "pprint.m"
            {
#line 548 "pprint.m"
              MR_Word mercury__pprint__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__4_4, (MR_Integer) 0)));
#line 548 "pprint.m"
              MR_Word mercury__pprint__Y_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
#line 548 "pprint.m"
              MR_Integer mercury__pprint__K1_17;
#line 548 "pprint.m"
              MR_Box mercury__pprint__S1_18;

#line 549 "pprint.m"
              {
#line 549 "pprint.m"
                mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_p_0(mercury__pprint__P_1, mercury__pprint__HeadVar__2_2, &mercury__pprint__K1_17, mercury__pprint__X_13, mercury__pprint__HeadVar__5_5, &mercury__pprint__S1_18);
              }
#line 550 "pprint.m"
              /* direct tailcall eliminated */
#line 550 "pprint.m"
              {
#line 550 "pprint.m"
                MR_Integer mercury__pprint__HeadVar__2__tmp_copy_2 = mercury__pprint__K1_17;
#line 550 "pprint.m"
                MR_Word mercury__pprint__HeadVar__4__tmp_copy_4 = mercury__pprint__Y_14;
#line 550 "pprint.m"
                MR_Box mercury__pprint__HeadVar__5__tmp_copy_5 = mercury__pprint__S1_18;

#line 550 "pprint.m"
                mercury__pprint__HeadVar__5_5 = mercury__pprint__HeadVar__5__tmp_copy_5;
#line 550 "pprint.m"
                mercury__pprint__HeadVar__4_4 = mercury__pprint__HeadVar__4__tmp_copy_4;
#line 550 "pprint.m"
                mercury__pprint__HeadVar__2_2 = mercury__pprint__HeadVar__2__tmp_copy_2;
#line 550 "pprint.m"
              }
#line 550 "pprint.m"
              continue;
#line 548 "pprint.m"
            }
#line 546 "pprint.m"
            break;
#line 546 "pprint.m"
          case (MR_Integer) 2:
#line 552 "pprint.m"
            {
#line 552 "pprint.m"
              MR_Word mercury__pprint__X_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
#line 552 "pprint.m"
              MR_Integer mercury__pprint__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__4_4, (MR_Integer) 0)));

#line 553 "pprint.m"
              /* direct tailcall eliminated */
#line 553 "pprint.m"
              {
#line 553 "pprint.m"
                MR_Word mercury__pprint__HeadVar__4__tmp_copy_4 = mercury__pprint__X_23;

#line 553 "pprint.m"
                mercury__pprint__HeadVar__4_4 = mercury__pprint__HeadVar__4__tmp_copy_4;
#line 553 "pprint.m"
              }
#line 553 "pprint.m"
              continue;
#line 552 "pprint.m"
            }
#line 546 "pprint.m"
            break;
#line 546 "pprint.m"
          case (MR_Integer) 3:
#line 546 "pprint.m"
#line 546 "pprint.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 0)))) {
#line 546 "pprint.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 546 "pprint.m"
              case (MR_Integer) 0:
#line 555 "pprint.m"
                {
#line 555 "pprint.m"
                  MR_Word mercury__pprint__X_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 2)));
#line 555 "pprint.m"
                  MR_String mercury__pprint__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));

#line 556 "pprint.m"
                  /* direct tailcall eliminated */
#line 556 "pprint.m"
                  {
#line 556 "pprint.m"
                    MR_Word mercury__pprint__HeadVar__4__tmp_copy_4 = mercury__pprint__X_30;

#line 556 "pprint.m"
                    mercury__pprint__HeadVar__4_4 = mercury__pprint__HeadVar__4__tmp_copy_4;
#line 556 "pprint.m"
                  }
#line 556 "pprint.m"
                  continue;
#line 555 "pprint.m"
                }
#line 546 "pprint.m"
                break;
#line 546 "pprint.m"
              case (MR_Integer) 1:
#line 566 "pprint.m"
                {
#line 566 "pprint.m"
                  MR_String mercury__pprint__T_54 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
#line 566 "pprint.m"
                  MR_Integer mercury__pprint__V_57_57;
#line 568 "pprint.m"
                  void MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 258 "string.opt"
                  {
#line 258 "string.opt"
                    mercury__string__count_codepoints_2_p_0(mercury__pprint__T_54, &mercury__pprint__V_57_57);
                  }
#line 567 "pprint.m"
                  *mercury__pprint__K_3 = (mercury__pprint__HeadVar__2_2 + mercury__pprint__V_57_57);
#line 568 "pprint.m"
                  mercury__pprint__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__pprint__P_1, (MR_Integer) 1)));
#line 568 "pprint.m"
                  {
#line 568 "pprint.m"
                    mercury__pprint__func_0(((MR_Box) mercury__pprint__P_1), ((MR_Box) (mercury__pprint__T_54)), mercury__pprint__HeadVar__5_5, mercury__pprint__S_6);
#line 568 "pprint.m"
                    return;
                  }
#line 566 "pprint.m"
                }
#line 546 "pprint.m"
                break;
#line 546 "pprint.m"
              case (MR_Integer) 2:
#line 560 "pprint.m"
                {
#line 560 "pprint.m"
                  MR_Word mercury__pprint__X_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));

#line 561 "pprint.m"
                  /* direct tailcall eliminated */
#line 561 "pprint.m"
                  {
#line 561 "pprint.m"
                    MR_Word mercury__pprint__HeadVar__4__tmp_copy_4 = mercury__pprint__X_39;

#line 561 "pprint.m"
                    mercury__pprint__HeadVar__4_4 = mercury__pprint__HeadVar__4__tmp_copy_4;
#line 561 "pprint.m"
                  }
#line 561 "pprint.m"
                  continue;
#line 560 "pprint.m"
                }
#line 546 "pprint.m"
                break;
#line 546 "pprint.m"
              case (MR_Integer) 3:
#line 563 "pprint.m"
                {
#line 563 "pprint.m"
                  MR_Word mercury__pprint__TypeInfo_59_59;
#line 563 "pprint.m"
                  MR_Integer mercury__pprint__D_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
#line 563 "pprint.m"
                  MR_Word mercury__pprint__U_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 2)));
#line 563 "pprint.m"
                  MR_Word mercury__pprint__V_49_49;
#line 563 "pprint.m"
                  MR_Box mercury__pprint__V_50_50;

#line 12 "univ.opt"
                  mercury__pprint__TypeInfo_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_46, (MR_Integer) 0)));
#line 12 "univ.opt"
                  mercury__pprint__V_50_50 = (MR_hl_field(MR_mktag(0), mercury__pprint__U_46, (MR_Integer) 1));
#line 664 "pprint.m"
                  {
#line 664 "pprint.m"
                    mercury__pprint__V_49_49 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_59_59, mercury__pprint__D_45, (MR_Integer) 1000, mercury__pprint__V_50_50);
                  }
#line 564 "pprint.m"
                  /* direct tailcall eliminated */
#line 564 "pprint.m"
                  {
#line 564 "pprint.m"
                    MR_Word mercury__pprint__HeadVar__4__tmp_copy_4 = mercury__pprint__V_49_49;

#line 564 "pprint.m"
                    mercury__pprint__HeadVar__4_4 = mercury__pprint__HeadVar__4__tmp_copy_4;
#line 564 "pprint.m"
                  }
#line 564 "pprint.m"
                  continue;
#line 563 "pprint.m"
                }
#line 546 "pprint.m"
                break;
#line 546 "pprint.m"
            }
#line 546 "pprint.m"
            break;
#line 546 "pprint.m"
        }
#line 546 "pprint.m"
      }
#line 546 "pprint.m"
      break;
#line 546 "pprint.m"
    }
#line 543 "pprint.m"
}

#line 100 "string.opt"
static void MR_CALL 
mercury__pprint__next_boundary__ho23__ho52_4_p_in__string_0(
#line 100 "string.opt"
  MR_String mercury__pprint__String_6_6,
#line 100 "string.opt"
  MR_Integer mercury__pprint__Cur_7_7,
#line 100 "string.opt"
  MR_Integer * mercury__pprint__NextWordStart_8_8)
#line 100 "string.opt"
{
#line 931 "string.opt"
  while (MR_TRUE)
#line 931 "string.opt"
    {
#line 931 "string.opt"
      /* tailcall optimized into a loop */
#line 931 "string.opt"
      {
#line 931 "string.opt"
        MR_bool mercury__pprint__succeeded;
#line 931 "string.opt"
        MR_Integer mercury__pprint__Next_9_9;
#line 927 "string.opt"
        MR_Char mercury__pprint__Char_10_10;

#line 199 "string.opt"
{
#define MR_PROC_LABEL mercury__pprint__next_boundary__ho23__ho52_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__pprint__String_6_6 ;
	Index =  mercury__pprint__Cur_7_7 ;
		{
#line 199 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 3973 "pprint.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__pprint__Next_9_9  = NextIndex;
	 mercury__pprint__Char_10_10  = Ch;
#line 199 "string.opt"
	}
mercury__pprint__succeeded  = SUCCESS_INDICATOR;
}
#line 927 "string.opt"
        if (mercury__pprint__succeeded)
#line 927 "string.opt"
          {
#line 38 "std_util.opt"
            {
#line 38 "std_util.opt"
              mercury__pprint__succeeded = mercury__char__is_whitespace_1_p_0(mercury__pprint__Char_10_10);
            }
#line 37 "std_util.opt"
            mercury__pprint__succeeded = !(mercury__pprint__succeeded);
#line 927 "string.opt"
          }
#line 931 "string.opt"
        if (mercury__pprint__succeeded)
#line 930 "string.opt"
          {
#line 930 "string.opt"
            /* direct tailcall eliminated */
#line 930 "string.opt"
            {
#line 930 "string.opt"
              MR_Integer mercury__pprint__Cur_7__tmp_copy_7 = mercury__pprint__Next_9_9;

#line 930 "string.opt"
              mercury__pprint__Cur_7_7 = mercury__pprint__Cur_7__tmp_copy_7;
#line 930 "string.opt"
            }
#line 930 "string.opt"
            continue;
#line 930 "string.opt"
          }
#line 931 "string.opt"
        else
#line 932 "string.opt"
          *mercury__pprint__NextWordStart_8_8 = mercury__pprint__Cur_7_7;
#line 931 "string.opt"
      }
#line 931 "string.opt"
      break;
#line 931 "string.opt"
    }
#line 100 "string.opt"
}

#line 544 "pprint.m"
static void MR_CALL 
mercury__pprint__layout_flat__ho51_6_p_0(
#line 544 "pprint.m"
  MR_Integer mercury__pprint__HeadVar__2_2,
#line 544 "pprint.m"
  MR_Integer * mercury__pprint__K_3,
#line 544 "pprint.m"
  MR_Word mercury__pprint__HeadVar__4_4,
#line 544 "pprint.m"
  MR_Word mercury__pprint__HeadVar__5_5,
#line 544 "pprint.m"
  MR_Word * mercury__pprint__S_6)
#line 544 "pprint.m"
{
#line 546 "pprint.m"
  while (MR_TRUE)
#line 546 "pprint.m"
    {
#line 546 "pprint.m"
      /* tailcall optimized into a loop */
#line 546 "pprint.m"
      {
#line 546 "pprint.m"
        MR_bool mercury__pprint__succeeded;

#line 546 "pprint.m"
#line 546 "pprint.m"
        switch (MR_tag((MR_Word) mercury__pprint__HeadVar__4_4)) {
#line 546 "pprint.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 546 "pprint.m"
          case (MR_Integer) 0:
#line 546 "pprint.m"
#line 546 "pprint.m"
            switch (MR_unmkbody(mercury__pprint__HeadVar__4_4)) {
#line 546 "pprint.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 546 "pprint.m"
              case (MR_Integer) 0:
#line 546 "pprint.m"
                {
#line 546 "pprint.m"
                  *mercury__pprint__K_3 = mercury__pprint__HeadVar__2_2;
#line 546 "pprint.m"
                  *mercury__pprint__S_6 = mercury__pprint__HeadVar__5_5;
#line 546 "pprint.m"
                }
#line 546 "pprint.m"
                break;
#line 546 "pprint.m"
              case (MR_Integer) 1:
#line 558 "pprint.m"
                {
#line 558 "pprint.m"
                  *mercury__pprint__K_3 = mercury__pprint__HeadVar__2_2;
#line 558 "pprint.m"
                  *mercury__pprint__S_6 = mercury__pprint__HeadVar__5_5;
#line 558 "pprint.m"
                }
#line 546 "pprint.m"
                break;
#line 546 "pprint.m"
            }
#line 546 "pprint.m"
            break;
#line 546 "pprint.m"
          case (MR_Integer) 1:
#line 548 "pprint.m"
            {
#line 548 "pprint.m"
              MR_Word mercury__pprint__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__4_4, (MR_Integer) 0)));
#line 548 "pprint.m"
              MR_Word mercury__pprint__Y_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
#line 548 "pprint.m"
              MR_Integer mercury__pprint__K1_17;
#line 548 "pprint.m"
              MR_Word mercury__pprint__S1_18;

#line 549 "pprint.m"
              {
#line 549 "pprint.m"
                mercury__pprint__layout_flat__ho51_6_p_0(mercury__pprint__HeadVar__2_2, &mercury__pprint__K1_17, mercury__pprint__X_13, mercury__pprint__HeadVar__5_5, &mercury__pprint__S1_18);
              }
#line 550 "pprint.m"
              /* direct tailcall eliminated */
#line 550 "pprint.m"
              {
#line 550 "pprint.m"
                MR_Integer mercury__pprint__HeadVar__2__tmp_copy_2 = mercury__pprint__K1_17;
#line 550 "pprint.m"
                MR_Word mercury__pprint__HeadVar__4__tmp_copy_4 = mercury__pprint__Y_14;
#line 550 "pprint.m"
                MR_Word mercury__pprint__HeadVar__5__tmp_copy_5 = mercury__pprint__S1_18;

#line 550 "pprint.m"
                mercury__pprint__HeadVar__5_5 = mercury__pprint__HeadVar__5__tmp_copy_5;
#line 550 "pprint.m"
                mercury__pprint__HeadVar__4_4 = mercury__pprint__HeadVar__4__tmp_copy_4;
#line 550 "pprint.m"
                mercury__pprint__HeadVar__2_2 = mercury__pprint__HeadVar__2__tmp_copy_2;
#line 550 "pprint.m"
              }
#line 550 "pprint.m"
              continue;
#line 548 "pprint.m"
            }
#line 546 "pprint.m"
            break;
#line 546 "pprint.m"
          case (MR_Integer) 2:
#line 552 "pprint.m"
            {
#line 552 "pprint.m"
              MR_Word mercury__pprint__X_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
#line 552 "pprint.m"
              MR_Integer mercury__pprint__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__4_4, (MR_Integer) 0)));

#line 553 "pprint.m"
              /* direct tailcall eliminated */
#line 553 "pprint.m"
              {
#line 553 "pprint.m"
                MR_Word mercury__pprint__HeadVar__4__tmp_copy_4 = mercury__pprint__X_23;

#line 553 "pprint.m"
                mercury__pprint__HeadVar__4_4 = mercury__pprint__HeadVar__4__tmp_copy_4;
#line 553 "pprint.m"
              }
#line 553 "pprint.m"
              continue;
#line 552 "pprint.m"
            }
#line 546 "pprint.m"
            break;
#line 546 "pprint.m"
          case (MR_Integer) 3:
#line 546 "pprint.m"
#line 546 "pprint.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 0)))) {
#line 546 "pprint.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 546 "pprint.m"
              case (MR_Integer) 0:
#line 555 "pprint.m"
                {
#line 555 "pprint.m"
                  MR_Word mercury__pprint__X_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 2)));
#line 555 "pprint.m"
                  MR_String mercury__pprint__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));

#line 556 "pprint.m"
                  /* direct tailcall eliminated */
#line 556 "pprint.m"
                  {
#line 556 "pprint.m"
                    MR_Word mercury__pprint__HeadVar__4__tmp_copy_4 = mercury__pprint__X_30;

#line 556 "pprint.m"
                    mercury__pprint__HeadVar__4_4 = mercury__pprint__HeadVar__4__tmp_copy_4;
#line 556 "pprint.m"
                  }
#line 556 "pprint.m"
                  continue;
#line 555 "pprint.m"
                }
#line 546 "pprint.m"
                break;
#line 546 "pprint.m"
              case (MR_Integer) 1:
#line 566 "pprint.m"
                {
#line 566 "pprint.m"
                  MR_String mercury__pprint__T_54 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
#line 566 "pprint.m"
                  MR_Integer mercury__pprint__V_57_57;

#line 258 "string.opt"
                  {
#line 258 "string.opt"
                    mercury__string__count_codepoints_2_p_0(mercury__pprint__T_54, &mercury__pprint__V_57_57);
                  }
#line 567 "pprint.m"
                  *mercury__pprint__K_3 = (mercury__pprint__HeadVar__2_2 + mercury__pprint__V_57_57);
#line 443 "pprint.m"
                  {
#line 443 "pprint.m"
                    MR_Word base;
#line 443 "pprint.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "pprint.m"
                    *mercury__pprint__S_6 = base;
#line 443 "pprint.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pprint__T_54));
#line 443 "pprint.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pprint__HeadVar__5_5));
#line 443 "pprint.m"
                  }
#line 566 "pprint.m"
                }
#line 546 "pprint.m"
                break;
#line 546 "pprint.m"
              case (MR_Integer) 2:
#line 560 "pprint.m"
                {
#line 560 "pprint.m"
                  MR_Word mercury__pprint__X_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));

#line 561 "pprint.m"
                  /* direct tailcall eliminated */
#line 561 "pprint.m"
                  {
#line 561 "pprint.m"
                    MR_Word mercury__pprint__HeadVar__4__tmp_copy_4 = mercury__pprint__X_39;

#line 561 "pprint.m"
                    mercury__pprint__HeadVar__4_4 = mercury__pprint__HeadVar__4__tmp_copy_4;
#line 561 "pprint.m"
                  }
#line 561 "pprint.m"
                  continue;
#line 560 "pprint.m"
                }
#line 546 "pprint.m"
                break;
#line 546 "pprint.m"
              case (MR_Integer) 3:
#line 563 "pprint.m"
                {
#line 563 "pprint.m"
                  MR_Word mercury__pprint__TypeInfo_59_59;
#line 563 "pprint.m"
                  MR_Integer mercury__pprint__D_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
#line 563 "pprint.m"
                  MR_Word mercury__pprint__U_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 2)));
#line 563 "pprint.m"
                  MR_Word mercury__pprint__V_49_49;
#line 563 "pprint.m"
                  MR_Box mercury__pprint__V_50_50;

#line 12 "univ.opt"
                  mercury__pprint__TypeInfo_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_46, (MR_Integer) 0)));
#line 12 "univ.opt"
                  mercury__pprint__V_50_50 = (MR_hl_field(MR_mktag(0), mercury__pprint__U_46, (MR_Integer) 1));
#line 664 "pprint.m"
                  {
#line 664 "pprint.m"
                    mercury__pprint__V_49_49 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_59_59, mercury__pprint__D_45, (MR_Integer) 1000, mercury__pprint__V_50_50);
                  }
#line 564 "pprint.m"
                  /* direct tailcall eliminated */
#line 564 "pprint.m"
                  {
#line 564 "pprint.m"
                    MR_Word mercury__pprint__HeadVar__4__tmp_copy_4 = mercury__pprint__V_49_49;

#line 564 "pprint.m"
                    mercury__pprint__HeadVar__4_4 = mercury__pprint__HeadVar__4__tmp_copy_4;
#line 564 "pprint.m"
                  }
#line 564 "pprint.m"
                  continue;
#line 563 "pprint.m"
                }
#line 546 "pprint.m"
                break;
#line 546 "pprint.m"
            }
#line 546 "pprint.m"
            break;
#line 546 "pprint.m"
        }
#line 546 "pprint.m"
      }
#line 546 "pprint.m"
      break;
#line 546 "pprint.m"
    }
#line 544 "pprint.m"
}

#line 543 "pprint.m"
static void MR_CALL 
mercury__pprint__layout_flat__ho50_6_p_0(
#line 543 "pprint.m"
  MR_Integer mercury__pprint__HeadVar__2_2,
#line 543 "pprint.m"
  MR_Integer * mercury__pprint__K_3,
#line 543 "pprint.m"
  MR_Word mercury__pprint__HeadVar__4_4)
#line 543 "pprint.m"
{
#line 546 "pprint.m"
  while (MR_TRUE)
#line 546 "pprint.m"
    {
#line 546 "pprint.m"
      /* tailcall optimized into a loop */
#line 546 "pprint.m"
      {
#line 546 "pprint.m"
        MR_bool mercury__pprint__succeeded;

#line 546 "pprint.m"
#line 546 "pprint.m"
        switch (MR_tag((MR_Word) mercury__pprint__HeadVar__4_4)) {
#line 546 "pprint.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 546 "pprint.m"
          case (MR_Integer) 0:
#line 546 "pprint.m"
#line 546 "pprint.m"
            switch (MR_unmkbody(mercury__pprint__HeadVar__4_4)) {
#line 546 "pprint.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 546 "pprint.m"
              case (MR_Integer) 0:
#line 546 "pprint.m"
                *mercury__pprint__K_3 = mercury__pprint__HeadVar__2_2;
#line 546 "pprint.m"
                break;
#line 546 "pprint.m"
              case (MR_Integer) 1:
#line 558 "pprint.m"
                *mercury__pprint__K_3 = mercury__pprint__HeadVar__2_2;
#line 546 "pprint.m"
                break;
#line 546 "pprint.m"
            }
#line 546 "pprint.m"
            break;
#line 546 "pprint.m"
          case (MR_Integer) 1:
#line 548 "pprint.m"
            {
#line 548 "pprint.m"
              MR_Word mercury__pprint__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__4_4, (MR_Integer) 0)));
#line 548 "pprint.m"
              MR_Word mercury__pprint__Y_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
#line 548 "pprint.m"
              MR_Integer mercury__pprint__K1_17;

#line 549 "pprint.m"
              {
#line 549 "pprint.m"
                mercury__pprint__layout_flat__ho50_6_p_0(mercury__pprint__HeadVar__2_2, &mercury__pprint__K1_17, mercury__pprint__X_13);
              }
#line 550 "pprint.m"
              /* direct tailcall eliminated */
#line 550 "pprint.m"
              {
#line 550 "pprint.m"
                MR_Integer mercury__pprint__HeadVar__2__tmp_copy_2 = mercury__pprint__K1_17;
#line 550 "pprint.m"
                MR_Word mercury__pprint__HeadVar__4__tmp_copy_4 = mercury__pprint__Y_14;

#line 550 "pprint.m"
                mercury__pprint__HeadVar__4_4 = mercury__pprint__HeadVar__4__tmp_copy_4;
#line 550 "pprint.m"
                mercury__pprint__HeadVar__2_2 = mercury__pprint__HeadVar__2__tmp_copy_2;
#line 550 "pprint.m"
              }
#line 550 "pprint.m"
              continue;
#line 548 "pprint.m"
            }
#line 546 "pprint.m"
            break;
#line 546 "pprint.m"
          case (MR_Integer) 2:
#line 552 "pprint.m"
            {
#line 552 "pprint.m"
              MR_Word mercury__pprint__X_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
#line 552 "pprint.m"
              MR_Integer mercury__pprint__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__4_4, (MR_Integer) 0)));

#line 553 "pprint.m"
              /* direct tailcall eliminated */
#line 553 "pprint.m"
              {
#line 553 "pprint.m"
                MR_Word mercury__pprint__HeadVar__4__tmp_copy_4 = mercury__pprint__X_23;

#line 553 "pprint.m"
                mercury__pprint__HeadVar__4_4 = mercury__pprint__HeadVar__4__tmp_copy_4;
#line 553 "pprint.m"
              }
#line 553 "pprint.m"
              continue;
#line 552 "pprint.m"
            }
#line 546 "pprint.m"
            break;
#line 546 "pprint.m"
          case (MR_Integer) 3:
#line 546 "pprint.m"
#line 546 "pprint.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 0)))) {
#line 546 "pprint.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 546 "pprint.m"
              case (MR_Integer) 0:
#line 555 "pprint.m"
                {
#line 555 "pprint.m"
                  MR_Word mercury__pprint__X_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 2)));
#line 555 "pprint.m"
                  MR_String mercury__pprint__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));

#line 556 "pprint.m"
                  /* direct tailcall eliminated */
#line 556 "pprint.m"
                  {
#line 556 "pprint.m"
                    MR_Word mercury__pprint__HeadVar__4__tmp_copy_4 = mercury__pprint__X_30;

#line 556 "pprint.m"
                    mercury__pprint__HeadVar__4_4 = mercury__pprint__HeadVar__4__tmp_copy_4;
#line 556 "pprint.m"
                  }
#line 556 "pprint.m"
                  continue;
#line 555 "pprint.m"
                }
#line 546 "pprint.m"
                break;
#line 546 "pprint.m"
              case (MR_Integer) 1:
#line 566 "pprint.m"
                {
#line 566 "pprint.m"
                  MR_String mercury__pprint__T_54 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
#line 566 "pprint.m"
                  MR_Integer mercury__pprint__V_57_57;

#line 258 "string.opt"
                  {
#line 258 "string.opt"
                    mercury__string__count_codepoints_2_p_0(mercury__pprint__T_54, &mercury__pprint__V_57_57);
                  }
#line 567 "pprint.m"
                  *mercury__pprint__K_3 = (mercury__pprint__HeadVar__2_2 + mercury__pprint__V_57_57);
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__pprint__layout_flat__ho50_6_p_0

	MR_String Message;

	Message =  mercury__pprint__T_54 ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 4485 "pprint.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 566 "pprint.m"
                }
#line 546 "pprint.m"
                break;
#line 546 "pprint.m"
              case (MR_Integer) 2:
#line 560 "pprint.m"
                {
#line 560 "pprint.m"
                  MR_Word mercury__pprint__X_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));

#line 561 "pprint.m"
                  /* direct tailcall eliminated */
#line 561 "pprint.m"
                  {
#line 561 "pprint.m"
                    MR_Word mercury__pprint__HeadVar__4__tmp_copy_4 = mercury__pprint__X_39;

#line 561 "pprint.m"
                    mercury__pprint__HeadVar__4_4 = mercury__pprint__HeadVar__4__tmp_copy_4;
#line 561 "pprint.m"
                  }
#line 561 "pprint.m"
                  continue;
#line 560 "pprint.m"
                }
#line 546 "pprint.m"
                break;
#line 546 "pprint.m"
              case (MR_Integer) 3:
#line 563 "pprint.m"
                {
#line 563 "pprint.m"
                  MR_Word mercury__pprint__TypeInfo_59_59;
#line 563 "pprint.m"
                  MR_Integer mercury__pprint__D_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
#line 563 "pprint.m"
                  MR_Word mercury__pprint__U_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 2)));
#line 563 "pprint.m"
                  MR_Word mercury__pprint__V_49_49;
#line 563 "pprint.m"
                  MR_Box mercury__pprint__V_50_50;

#line 12 "univ.opt"
                  mercury__pprint__TypeInfo_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_46, (MR_Integer) 0)));
#line 12 "univ.opt"
                  mercury__pprint__V_50_50 = (MR_hl_field(MR_mktag(0), mercury__pprint__U_46, (MR_Integer) 1));
#line 664 "pprint.m"
                  {
#line 664 "pprint.m"
                    mercury__pprint__V_49_49 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_59_59, mercury__pprint__D_45, (MR_Integer) 1000, mercury__pprint__V_50_50);
                  }
#line 564 "pprint.m"
                  /* direct tailcall eliminated */
#line 564 "pprint.m"
                  {
#line 564 "pprint.m"
                    MR_Word mercury__pprint__HeadVar__4__tmp_copy_4 = mercury__pprint__V_49_49;

#line 564 "pprint.m"
                    mercury__pprint__HeadVar__4_4 = mercury__pprint__HeadVar__4__tmp_copy_4;
#line 564 "pprint.m"
                  }
#line 564 "pprint.m"
                  continue;
#line 563 "pprint.m"
                }
#line 546 "pprint.m"
                break;
#line 546 "pprint.m"
            }
#line 546 "pprint.m"
            break;
#line 546 "pprint.m"
        }
#line 546 "pprint.m"
      }
#line 546 "pprint.m"
      break;
#line 546 "pprint.m"
    }
#line 543 "pprint.m"
}

#line 484 "pprint.m"
static void MR_CALL 
mercury__pprint__lb__ho43_8_p_0(
#line 484 "pprint.m"
  MR_Integer mercury__pprint__W_2,
#line 484 "pprint.m"
  MR_Integer mercury__pprint__HeadVar__3_3,
#line 484 "pprint.m"
  MR_Integer * mercury__pprint__K_4,
#line 484 "pprint.m"
  MR_String mercury__pprint__I_5,
#line 484 "pprint.m"
  MR_Word mercury__pprint__HeadVar__6_6)
#line 484 "pprint.m"
{
#line 487 "pprint.m"
  while (MR_TRUE)
#line 487 "pprint.m"
    {
#line 487 "pprint.m"
      /* tailcall optimized into a loop */
#line 487 "pprint.m"
      {
#line 487 "pprint.m"
        MR_bool mercury__pprint__succeeded;

#line 487 "pprint.m"
#line 487 "pprint.m"
        switch (MR_tag((MR_Word) mercury__pprint__HeadVar__6_6)) {
#line 487 "pprint.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 487 "pprint.m"
          case (MR_Integer) 0:
#line 487 "pprint.m"
#line 487 "pprint.m"
            switch (MR_unmkbody(mercury__pprint__HeadVar__6_6)) {
#line 487 "pprint.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 487 "pprint.m"
              case (MR_Integer) 0:
#line 487 "pprint.m"
                *mercury__pprint__K_4 = mercury__pprint__HeadVar__3_3;
#line 487 "pprint.m"
                break;
#line 487 "pprint.m"
              case (MR_Integer) 1:
#line 499 "pprint.m"
                {
#line 500 "pprint.m"
                  {
#line 500 "pprint.m"
                    *mercury__pprint__K_4 = mercury__string__count_codepoints_1_f_0(mercury__pprint__I_5);
                  }
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__pprint__lb__ho43_8_p_0

	MR_String Message;

	Message =  (MR_String) "\n" ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 4640 "pprint.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__pprint__lb__ho43_8_p_0

	MR_String Message;

	Message =  mercury__pprint__I_5 ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 4658 "pprint.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 499 "pprint.m"
                }
#line 487 "pprint.m"
                break;
#line 487 "pprint.m"
            }
#line 487 "pprint.m"
            break;
#line 487 "pprint.m"
          case (MR_Integer) 1:
#line 489 "pprint.m"
            {
#line 489 "pprint.m"
              MR_Word mercury__pprint__X_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__6_6, (MR_Integer) 0)));
#line 489 "pprint.m"
              MR_Word mercury__pprint__Y_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
#line 489 "pprint.m"
              MR_Integer mercury__pprint__K1_23;

#line 490 "pprint.m"
              {
#line 490 "pprint.m"
                mercury__pprint__lb__ho43_8_p_0(mercury__pprint__W_2, mercury__pprint__HeadVar__3_3, &mercury__pprint__K1_23, mercury__pprint__I_5, mercury__pprint__X_19);
              }
#line 491 "pprint.m"
              /* direct tailcall eliminated */
#line 491 "pprint.m"
              {
#line 491 "pprint.m"
                MR_Integer mercury__pprint__HeadVar__3__tmp_copy_3 = mercury__pprint__K1_23;
#line 491 "pprint.m"
                MR_Word mercury__pprint__HeadVar__6__tmp_copy_6 = mercury__pprint__Y_20;

#line 491 "pprint.m"
                mercury__pprint__HeadVar__6_6 = mercury__pprint__HeadVar__6__tmp_copy_6;
#line 491 "pprint.m"
                mercury__pprint__HeadVar__3_3 = mercury__pprint__HeadVar__3__tmp_copy_3;
#line 491 "pprint.m"
              }
#line 491 "pprint.m"
              continue;
#line 489 "pprint.m"
            }
#line 487 "pprint.m"
            break;
#line 487 "pprint.m"
          case (MR_Integer) 2:
#line 493 "pprint.m"
            {
#line 493 "pprint.m"
              MR_Integer mercury__pprint__J_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__6_6, (MR_Integer) 0)));
#line 493 "pprint.m"
              MR_Word mercury__pprint__X_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
#line 493 "pprint.m"
              MR_String mercury__pprint__V_34_34;

#line 494 "pprint.m"
              {
#line 494 "pprint.m"
                mercury__pprint__V_34_34 = mercury__pprint__extend_2_f_0(mercury__pprint__I_5, mercury__pprint__J_30);
              }
#line 494 "pprint.m"
              /* direct tailcall eliminated */
#line 494 "pprint.m"
              {
#line 494 "pprint.m"
                MR_String mercury__pprint__I__tmp_copy_5 = mercury__pprint__V_34_34;
#line 494 "pprint.m"
                MR_Word mercury__pprint__HeadVar__6__tmp_copy_6 = mercury__pprint__X_31;

#line 494 "pprint.m"
                mercury__pprint__HeadVar__6_6 = mercury__pprint__HeadVar__6__tmp_copy_6;
#line 494 "pprint.m"
                mercury__pprint__I_5 = mercury__pprint__I__tmp_copy_5;
#line 494 "pprint.m"
              }
#line 494 "pprint.m"
              continue;
#line 493 "pprint.m"
            }
#line 487 "pprint.m"
            break;
#line 487 "pprint.m"
          case (MR_Integer) 3:
#line 487 "pprint.m"
#line 487 "pprint.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 0)))) {
#line 487 "pprint.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 487 "pprint.m"
              case (MR_Integer) 0:
#line 496 "pprint.m"
                {
#line 496 "pprint.m"
                  MR_String mercury__pprint__L_40 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
#line 496 "pprint.m"
                  MR_Word mercury__pprint__X_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 2)));
#line 496 "pprint.m"
                  MR_String mercury__pprint__V_44_44;

#line 415 "string.opt"
                  {
#line 415 "string.opt"
                    mercury__string__append_3_p_2(mercury__pprint__I_5, mercury__pprint__L_40, &mercury__pprint__V_44_44);
                  }
#line 497 "pprint.m"
                  /* direct tailcall eliminated */
#line 497 "pprint.m"
                  {
#line 497 "pprint.m"
                    MR_String mercury__pprint__I__tmp_copy_5 = mercury__pprint__V_44_44;
#line 497 "pprint.m"
                    MR_Word mercury__pprint__HeadVar__6__tmp_copy_6 = mercury__pprint__X_41;

#line 497 "pprint.m"
                    mercury__pprint__HeadVar__6_6 = mercury__pprint__HeadVar__6__tmp_copy_6;
#line 497 "pprint.m"
                    mercury__pprint__I_5 = mercury__pprint__I__tmp_copy_5;
#line 497 "pprint.m"
                  }
#line 497 "pprint.m"
                  continue;
#line 496 "pprint.m"
                }
#line 487 "pprint.m"
                break;
#line 487 "pprint.m"
              case (MR_Integer) 1:
#line 512 "pprint.m"
                {
#line 512 "pprint.m"
                  MR_String mercury__pprint__T_79 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
#line 512 "pprint.m"
                  MR_Integer mercury__pprint__V_82_82;

#line 513 "pprint.m"
                  {
#line 513 "pprint.m"
                    mercury__pprint__V_82_82 = mercury__string__count_codepoints_1_f_0(mercury__pprint__T_79);
                  }
#line 513 "pprint.m"
                  *mercury__pprint__K_4 = (mercury__pprint__HeadVar__3_3 + mercury__pprint__V_82_82);
#line 542 "io.opt"
{
#define MR_PROC_LABEL mercury__pprint__lb__ho43_8_p_0

	MR_String Message;

	Message =  mercury__pprint__T_79 ;
		{
#line 542 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 4818 "pprint.c"

		;}
#undef MR_PROC_LABEL
#line 542 "io.opt"
}
#line 512 "pprint.m"
                }
#line 487 "pprint.m"
                break;
#line 487 "pprint.m"
              case (MR_Integer) 2:
#line 504 "pprint.m"
                {
#line 504 "pprint.m"
                  MR_Word mercury__pprint__X_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
#line 505 "pprint.m"
                  MR_Integer mercury__pprint__V_62_62 = (mercury__pprint__W_2 - mercury__pprint__HeadVar__3_3);
#line 523 "pprint.m"
                  MR_Integer mercury__pprint__V_91_91;

#line 523 "pprint.m"
                  {
#line 523 "pprint.m"
                    mercury__pprint__succeeded = mercury__pprint__ff_2_f_0(mercury__pprint__X_59, mercury__pprint__V_62_62, &mercury__pprint__V_91_91);
                  }
#line 506 "pprint.m"
                  if (mercury__pprint__succeeded)
#line 505 "pprint.m"
                    {
#line 505 "pprint.m"
                      mercury__pprint__layout_flat__ho50_6_p_0(mercury__pprint__HeadVar__3_3, mercury__pprint__K_4, mercury__pprint__X_59);
#line 505 "pprint.m"
                      return;
                    }
#line 506 "pprint.m"
                  else
#line 506 "pprint.m"
                    {
#line 506 "pprint.m"
                      /* direct tailcall eliminated */
#line 506 "pprint.m"
                      {
#line 506 "pprint.m"
                        MR_Word mercury__pprint__HeadVar__6__tmp_copy_6 = mercury__pprint__X_59;

#line 506 "pprint.m"
                        mercury__pprint__HeadVar__6_6 = mercury__pprint__HeadVar__6__tmp_copy_6;
#line 506 "pprint.m"
                      }
#line 506 "pprint.m"
                      continue;
#line 506 "pprint.m"
                    }
#line 504 "pprint.m"
                }
#line 487 "pprint.m"
                break;
#line 487 "pprint.m"
              case (MR_Integer) 3:
#line 509 "pprint.m"
                {
#line 509 "pprint.m"
                  MR_Word mercury__pprint__TypeInfo_84_84;
#line 509 "pprint.m"
                  MR_Integer mercury__pprint__D_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
#line 509 "pprint.m"
                  MR_Word mercury__pprint__U_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 2)));
#line 509 "pprint.m"
                  MR_Word mercury__pprint__V_72_72;
#line 509 "pprint.m"
                  MR_Box mercury__pprint__V_73_73;

#line 12 "univ.opt"
                  mercury__pprint__TypeInfo_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_69, (MR_Integer) 0)));
#line 12 "univ.opt"
                  mercury__pprint__V_73_73 = (MR_hl_field(MR_mktag(0), mercury__pprint__U_69, (MR_Integer) 1));
#line 664 "pprint.m"
                  {
#line 664 "pprint.m"
                    mercury__pprint__V_72_72 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_84_84, mercury__pprint__D_68, (MR_Integer) 1000, mercury__pprint__V_73_73);
                  }
#line 510 "pprint.m"
                  /* direct tailcall eliminated */
#line 510 "pprint.m"
                  {
#line 510 "pprint.m"
                    MR_Word mercury__pprint__HeadVar__6__tmp_copy_6 = mercury__pprint__V_72_72;

#line 510 "pprint.m"
                    mercury__pprint__HeadVar__6_6 = mercury__pprint__HeadVar__6__tmp_copy_6;
#line 510 "pprint.m"
                  }
#line 510 "pprint.m"
                  continue;
#line 509 "pprint.m"
                }
#line 487 "pprint.m"
                break;
#line 487 "pprint.m"
            }
#line 487 "pprint.m"
            break;
#line 487 "pprint.m"
        }
#line 487 "pprint.m"
      }
#line 487 "pprint.m"
      break;
#line 487 "pprint.m"
    }
#line 484 "pprint.m"
}

#line 485 "pprint.m"
static void MR_CALL 
mercury__pprint__lb__ho42_8_p_0(
#line 485 "pprint.m"
  MR_Integer mercury__pprint__W_2,
#line 485 "pprint.m"
  MR_Integer mercury__pprint__HeadVar__3_3,
#line 485 "pprint.m"
  MR_Integer * mercury__pprint__K_4,
#line 485 "pprint.m"
  MR_String mercury__pprint__I_5,
#line 485 "pprint.m"
  MR_Word mercury__pprint__HeadVar__6_6,
#line 485 "pprint.m"
  MR_Word mercury__pprint__HeadVar__7_7,
#line 485 "pprint.m"
  MR_Word * mercury__pprint__S_8)
#line 485 "pprint.m"
{
#line 487 "pprint.m"
  while (MR_TRUE)
#line 487 "pprint.m"
    {
#line 487 "pprint.m"
      /* tailcall optimized into a loop */
#line 487 "pprint.m"
      {
#line 487 "pprint.m"
        MR_bool mercury__pprint__succeeded;

#line 487 "pprint.m"
#line 487 "pprint.m"
        switch (MR_tag((MR_Word) mercury__pprint__HeadVar__6_6)) {
#line 487 "pprint.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 487 "pprint.m"
          case (MR_Integer) 0:
#line 487 "pprint.m"
#line 487 "pprint.m"
            switch (MR_unmkbody(mercury__pprint__HeadVar__6_6)) {
#line 487 "pprint.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 487 "pprint.m"
              case (MR_Integer) 0:
#line 487 "pprint.m"
                {
#line 487 "pprint.m"
                  *mercury__pprint__K_4 = mercury__pprint__HeadVar__3_3;
#line 487 "pprint.m"
                  *mercury__pprint__S_8 = mercury__pprint__HeadVar__7_7;
#line 487 "pprint.m"
                }
#line 487 "pprint.m"
                break;
#line 487 "pprint.m"
              case (MR_Integer) 1:
#line 499 "pprint.m"
                {
#line 499 "pprint.m"
                  MR_Word mercury__pprint__S1_52;

#line 500 "pprint.m"
                  {
#line 500 "pprint.m"
                    *mercury__pprint__K_4 = mercury__string__count_codepoints_1_f_0(mercury__pprint__I_5);
                  }
#line 501 "pprint.m"
                  {
#line 501 "pprint.m"
                    mercury__pprint__IntroducedFrom__pred__to_string__443__1_3_p_0((MR_String) "\n", mercury__pprint__HeadVar__7_7, &mercury__pprint__S1_52);
                  }
#line 502 "pprint.m"
                  {
#line 502 "pprint.m"
                    mercury__pprint__IntroducedFrom__pred__to_string__443__1_3_p_0(mercury__pprint__I_5, mercury__pprint__S1_52, mercury__pprint__S_8);
#line 502 "pprint.m"
                    return;
                  }
#line 499 "pprint.m"
                }
#line 487 "pprint.m"
                break;
#line 487 "pprint.m"
            }
#line 487 "pprint.m"
            break;
#line 487 "pprint.m"
          case (MR_Integer) 1:
#line 489 "pprint.m"
            {
#line 489 "pprint.m"
              MR_Word mercury__pprint__X_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__6_6, (MR_Integer) 0)));
#line 489 "pprint.m"
              MR_Word mercury__pprint__Y_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
#line 489 "pprint.m"
              MR_Integer mercury__pprint__K1_23;
#line 489 "pprint.m"
              MR_Word mercury__pprint__S1_24;

#line 490 "pprint.m"
              {
#line 490 "pprint.m"
                mercury__pprint__lb__ho42_8_p_0(mercury__pprint__W_2, mercury__pprint__HeadVar__3_3, &mercury__pprint__K1_23, mercury__pprint__I_5, mercury__pprint__X_19, mercury__pprint__HeadVar__7_7, &mercury__pprint__S1_24);
              }
#line 491 "pprint.m"
              /* direct tailcall eliminated */
#line 491 "pprint.m"
              {
#line 491 "pprint.m"
                MR_Integer mercury__pprint__HeadVar__3__tmp_copy_3 = mercury__pprint__K1_23;
#line 491 "pprint.m"
                MR_Word mercury__pprint__HeadVar__6__tmp_copy_6 = mercury__pprint__Y_20;
#line 491 "pprint.m"
                MR_Word mercury__pprint__HeadVar__7__tmp_copy_7 = mercury__pprint__S1_24;

#line 491 "pprint.m"
                mercury__pprint__HeadVar__7_7 = mercury__pprint__HeadVar__7__tmp_copy_7;
#line 491 "pprint.m"
                mercury__pprint__HeadVar__6_6 = mercury__pprint__HeadVar__6__tmp_copy_6;
#line 491 "pprint.m"
                mercury__pprint__HeadVar__3_3 = mercury__pprint__HeadVar__3__tmp_copy_3;
#line 491 "pprint.m"
              }
#line 491 "pprint.m"
              continue;
#line 489 "pprint.m"
            }
#line 487 "pprint.m"
            break;
#line 487 "pprint.m"
          case (MR_Integer) 2:
#line 493 "pprint.m"
            {
#line 493 "pprint.m"
              MR_Integer mercury__pprint__J_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__6_6, (MR_Integer) 0)));
#line 493 "pprint.m"
              MR_Word mercury__pprint__X_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
#line 493 "pprint.m"
              MR_String mercury__pprint__V_34_34;

#line 494 "pprint.m"
              {
#line 494 "pprint.m"
                mercury__pprint__V_34_34 = mercury__pprint__extend_2_f_0(mercury__pprint__I_5, mercury__pprint__J_30);
              }
#line 494 "pprint.m"
              /* direct tailcall eliminated */
#line 494 "pprint.m"
              {
#line 494 "pprint.m"
                MR_String mercury__pprint__I__tmp_copy_5 = mercury__pprint__V_34_34;
#line 494 "pprint.m"
                MR_Word mercury__pprint__HeadVar__6__tmp_copy_6 = mercury__pprint__X_31;

#line 494 "pprint.m"
                mercury__pprint__HeadVar__6_6 = mercury__pprint__HeadVar__6__tmp_copy_6;
#line 494 "pprint.m"
                mercury__pprint__I_5 = mercury__pprint__I__tmp_copy_5;
#line 494 "pprint.m"
              }
#line 494 "pprint.m"
              continue;
#line 493 "pprint.m"
            }
#line 487 "pprint.m"
            break;
#line 487 "pprint.m"
          case (MR_Integer) 3:
#line 487 "pprint.m"
#line 487 "pprint.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 0)))) {
#line 487 "pprint.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 487 "pprint.m"
              case (MR_Integer) 0:
#line 496 "pprint.m"
                {
#line 496 "pprint.m"
                  MR_String mercury__pprint__L_40 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
#line 496 "pprint.m"
                  MR_Word mercury__pprint__X_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 2)));
#line 496 "pprint.m"
                  MR_String mercury__pprint__V_44_44;

#line 415 "string.opt"
                  {
#line 415 "string.opt"
                    mercury__string__append_3_p_2(mercury__pprint__I_5, mercury__pprint__L_40, &mercury__pprint__V_44_44);
                  }
#line 497 "pprint.m"
                  /* direct tailcall eliminated */
#line 497 "pprint.m"
                  {
#line 497 "pprint.m"
                    MR_String mercury__pprint__I__tmp_copy_5 = mercury__pprint__V_44_44;
#line 497 "pprint.m"
                    MR_Word mercury__pprint__HeadVar__6__tmp_copy_6 = mercury__pprint__X_41;

#line 497 "pprint.m"
                    mercury__pprint__HeadVar__6_6 = mercury__pprint__HeadVar__6__tmp_copy_6;
#line 497 "pprint.m"
                    mercury__pprint__I_5 = mercury__pprint__I__tmp_copy_5;
#line 497 "pprint.m"
                  }
#line 497 "pprint.m"
                  continue;
#line 496 "pprint.m"
                }
#line 487 "pprint.m"
                break;
#line 487 "pprint.m"
              case (MR_Integer) 1:
#line 512 "pprint.m"
                {
#line 512 "pprint.m"
                  MR_String mercury__pprint__T_79 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
#line 512 "pprint.m"
                  MR_Integer mercury__pprint__V_82_82;

#line 513 "pprint.m"
                  {
#line 513 "pprint.m"
                    mercury__pprint__V_82_82 = mercury__string__count_codepoints_1_f_0(mercury__pprint__T_79);
                  }
#line 513 "pprint.m"
                  *mercury__pprint__K_4 = (mercury__pprint__HeadVar__3_3 + mercury__pprint__V_82_82);
#line 514 "pprint.m"
                  {
#line 514 "pprint.m"
                    mercury__pprint__IntroducedFrom__pred__to_string__443__1_3_p_0(mercury__pprint__T_79, mercury__pprint__HeadVar__7_7, mercury__pprint__S_8);
#line 514 "pprint.m"
                    return;
                  }
#line 512 "pprint.m"
                }
#line 487 "pprint.m"
                break;
#line 487 "pprint.m"
              case (MR_Integer) 2:
#line 504 "pprint.m"
                {
#line 504 "pprint.m"
                  MR_Word mercury__pprint__X_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
#line 505 "pprint.m"
                  MR_Integer mercury__pprint__V_62_62 = (mercury__pprint__W_2 - mercury__pprint__HeadVar__3_3);
#line 523 "pprint.m"
                  MR_Integer mercury__pprint__V_91_91;

#line 523 "pprint.m"
                  {
#line 523 "pprint.m"
                    mercury__pprint__succeeded = mercury__pprint__ff_2_f_0(mercury__pprint__X_59, mercury__pprint__V_62_62, &mercury__pprint__V_91_91);
                  }
#line 506 "pprint.m"
                  if (mercury__pprint__succeeded)
#line 505 "pprint.m"
                    {
#line 505 "pprint.m"
                      mercury__pprint__layout_flat__ho51_6_p_0(mercury__pprint__HeadVar__3_3, mercury__pprint__K_4, mercury__pprint__X_59, mercury__pprint__HeadVar__7_7, mercury__pprint__S_8);
#line 505 "pprint.m"
                      return;
                    }
#line 506 "pprint.m"
                  else
#line 506 "pprint.m"
                    {
#line 506 "pprint.m"
                      /* direct tailcall eliminated */
#line 506 "pprint.m"
                      {
#line 506 "pprint.m"
                        MR_Word mercury__pprint__HeadVar__6__tmp_copy_6 = mercury__pprint__X_59;

#line 506 "pprint.m"
                        mercury__pprint__HeadVar__6_6 = mercury__pprint__HeadVar__6__tmp_copy_6;
#line 506 "pprint.m"
                      }
#line 506 "pprint.m"
                      continue;
#line 506 "pprint.m"
                    }
#line 504 "pprint.m"
                }
#line 487 "pprint.m"
                break;
#line 487 "pprint.m"
              case (MR_Integer) 3:
#line 509 "pprint.m"
                {
#line 509 "pprint.m"
                  MR_Word mercury__pprint__TypeInfo_84_84;
#line 509 "pprint.m"
                  MR_Integer mercury__pprint__D_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
#line 509 "pprint.m"
                  MR_Word mercury__pprint__U_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 2)));
#line 509 "pprint.m"
                  MR_Word mercury__pprint__V_72_72;
#line 509 "pprint.m"
                  MR_Box mercury__pprint__V_73_73;

#line 12 "univ.opt"
                  mercury__pprint__TypeInfo_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_69, (MR_Integer) 0)));
#line 12 "univ.opt"
                  mercury__pprint__V_73_73 = (MR_hl_field(MR_mktag(0), mercury__pprint__U_69, (MR_Integer) 1));
#line 664 "pprint.m"
                  {
#line 664 "pprint.m"
                    mercury__pprint__V_72_72 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_84_84, mercury__pprint__D_68, (MR_Integer) 1000, mercury__pprint__V_73_73);
                  }
#line 510 "pprint.m"
                  /* direct tailcall eliminated */
#line 510 "pprint.m"
                  {
#line 510 "pprint.m"
                    MR_Word mercury__pprint__HeadVar__6__tmp_copy_6 = mercury__pprint__V_72_72;

#line 510 "pprint.m"
                    mercury__pprint__HeadVar__6_6 = mercury__pprint__HeadVar__6__tmp_copy_6;
#line 510 "pprint.m"
                  }
#line 510 "pprint.m"
                  continue;
#line 509 "pprint.m"
                }
#line 487 "pprint.m"
                break;
#line 487 "pprint.m"
            }
#line 487 "pprint.m"
            break;
#line 487 "pprint.m"
        }
#line 487 "pprint.m"
      }
#line 487 "pprint.m"
      break;
#line 487 "pprint.m"
    }
#line 485 "pprint.m"
}

#line 98 "string.opt"
static void MR_CALL 
mercury__pprint__words_loop__ho41_4_p_in__string_0(
#line 98 "string.opt"
  MR_String mercury__pprint__String_6_6,
#line 98 "string.opt"
  MR_Integer mercury__pprint__WordStart_7_7,
#line 98 "string.opt"
  MR_Word * mercury__pprint__Words_8_8)
#line 98 "string.opt"
{
#line 905 "string.opt"
  {
#line 905 "string.opt"
    MR_bool mercury__pprint__succeeded;
#line 905 "string.opt"
    MR_Integer mercury__pprint__WordEnd_9_10;

#line 907 "string.opt"
    {
#line 907 "string.opt"
      mercury__pprint__next_boundary__ho23__ho52_4_p_in__string_0(mercury__pprint__String_6_6, mercury__pprint__WordStart_7_7, &mercury__pprint__WordEnd_9_10);
    }
#line 909 "string.opt"
    mercury__pprint__succeeded = (mercury__pprint__WordEnd_9_10 == mercury__pprint__WordStart_7_7);
#line 912 "string.opt"
    if (mercury__pprint__succeeded)
#line 911 "string.opt"
      *mercury__pprint__Words_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 912 "string.opt"
    else
#line 913 "string.opt"
      {
#line 913 "string.opt"
        MR_String mercury__pprint__Word_10_11;
#line 913 "string.opt"
        MR_Integer mercury__pprint__NextWordStart_11_12;

#line 502 "string.opt"
{
#define MR_PROC_LABEL mercury__pprint__words_loop__ho41_4_p_in__string_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__pprint__String_6_6 ;
	Start =  mercury__pprint__WordStart_7_7 ;
	End =  mercury__pprint__WordEnd_9_10 ;
		{
#line 502 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 5333 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__Word_10_11  = SubString;
#line 502 "string.opt"
}
#line 914 "string.opt"
        {
#line 914 "string.opt"
          mercury__pprint__next_boundary__ho40_4_p_in__string_0(mercury__pprint__String_6_6, mercury__pprint__WordEnd_9_10, &mercury__pprint__NextWordStart_11_12);
        }
#line 916 "string.opt"
        mercury__pprint__succeeded = (mercury__pprint__WordEnd_9_10 == mercury__pprint__NextWordStart_11_12);
#line 920 "string.opt"
        if (mercury__pprint__succeeded)
#line 918 "string.opt"
          {
#line 918 "string.opt"
            MR_Word mercury__pprint__V_14_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 918 "string.opt"
            {
#line 918 "string.opt"
              MR_Word base;
#line 918 "string.opt"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 918 "string.opt"
              *mercury__pprint__Words_8_8 = base;
#line 918 "string.opt"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pprint__Word_10_11));
#line 918 "string.opt"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pprint__V_14_13));
#line 918 "string.opt"
            }
#line 918 "string.opt"
          }
#line 920 "string.opt"
        else
#line 921 "string.opt"
          {
#line 921 "string.opt"
            MR_Word mercury__pprint__Words0_12_14;

#line 921 "string.opt"
            {
#line 921 "string.opt"
              mercury__pprint__words_loop__ho41_4_p_in__string_0(mercury__pprint__String_6_6, mercury__pprint__NextWordStart_11_12, &mercury__pprint__Words0_12_14);
            }
#line 922 "string.opt"
            {
#line 922 "string.opt"
              MR_Word base;
#line 922 "string.opt"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 922 "string.opt"
              *mercury__pprint__Words_8_8 = base;
#line 922 "string.opt"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pprint__Word_10_11));
#line 922 "string.opt"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pprint__Words0_12_14));
#line 922 "string.opt"
            }
#line 921 "string.opt"
          }
#line 913 "string.opt"
      }
#line 905 "string.opt"
  }
#line 98 "string.opt"
}

#line 100 "string.opt"
static void MR_CALL 
mercury__pprint__next_boundary__ho40_4_p_in__string_0(
#line 100 "string.opt"
  MR_String mercury__pprint__String_6_6,
#line 100 "string.opt"
  MR_Integer mercury__pprint__Cur_7_7,
#line 100 "string.opt"
  MR_Integer * mercury__pprint__NextWordStart_8_8)
#line 100 "string.opt"
{
#line 931 "string.opt"
  while (MR_TRUE)
#line 931 "string.opt"
    {
#line 931 "string.opt"
      /* tailcall optimized into a loop */
#line 931 "string.opt"
      {
#line 931 "string.opt"
        MR_bool mercury__pprint__succeeded;
#line 931 "string.opt"
        MR_Integer mercury__pprint__Next_9_9;
#line 927 "string.opt"
        MR_Char mercury__pprint__Char_10_10;

#line 199 "string.opt"
{
#define MR_PROC_LABEL mercury__pprint__next_boundary__ho40_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__pprint__String_6_6 ;
	Index =  mercury__pprint__Cur_7_7 ;
		{
#line 199 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 5456 "pprint.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__pprint__Next_9_9  = NextIndex;
	 mercury__pprint__Char_10_10  = Ch;
#line 199 "string.opt"
	}
mercury__pprint__succeeded  = SUCCESS_INDICATOR;
}
#line 927 "string.opt"
        if (mercury__pprint__succeeded)
#line 928 "string.opt"
          {
#line 928 "string.opt"
            mercury__pprint__succeeded = mercury__char__is_whitespace_1_p_0(mercury__pprint__Char_10_10);
          }
#line 931 "string.opt"
        if (mercury__pprint__succeeded)
#line 930 "string.opt"
          {
#line 930 "string.opt"
            /* direct tailcall eliminated */
#line 930 "string.opt"
            {
#line 930 "string.opt"
              MR_Integer mercury__pprint__Cur_7__tmp_copy_7 = mercury__pprint__Next_9_9;

#line 930 "string.opt"
              mercury__pprint__Cur_7_7 = mercury__pprint__Cur_7__tmp_copy_7;
#line 930 "string.opt"
            }
#line 930 "string.opt"
            continue;
#line 930 "string.opt"
          }
#line 931 "string.opt"
        else
#line 932 "string.opt"
          *mercury__pprint__NextWordStart_8_8 = mercury__pprint__Cur_7_7;
#line 931 "string.opt"
      }
#line 931 "string.opt"
      break;
#line 931 "string.opt"
    }
#line 100 "string.opt"
}

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__pprint__map__ho37_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__pprint__HeadVar__2_2)
#line 324 "list.int"
{
#line 170 "list.opt"
  {
#line 170 "list.opt"
    MR_bool mercury__pprint__succeeded;
#line 170 "list.opt"
    MR_Word mercury__pprint__HeadVar__3_3;

#line 170 "list.opt"
    if ((mercury__pprint__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "list.opt"
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "list.opt"
    else
#line 171 "list.opt"
      {
#line 171 "list.opt"
        MR_String mercury__pprint__H_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "list.opt"
        MR_Word mercury__pprint__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "list.opt"
        MR_Word mercury__pprint__V_8_8;
#line 171 "list.opt"
        MR_Word mercury__pprint__V_9_9;

#line 431 "pprint.m"
        {
#line 431 "pprint.m"
          mercury__pprint__V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "pprint.m"
          MR_hl_field(MR_mktag(3), mercury__pprint__V_8_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 431 "pprint.m"
          MR_hl_field(MR_mktag(3), mercury__pprint__V_8_8, 1) = ((MR_Box) (mercury__pprint__H_6_6));
#line 431 "pprint.m"
        }
#line 173 "list.opt"
        {
#line 173 "list.opt"
          mercury__pprint__V_9_9 = mercury__pprint__map__ho37_2_f_in__list_0(mercury__pprint__T_7_7);
        }
#line 171 "list.opt"
        {
#line 171 "list.opt"
          mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (mercury__pprint__V_8_8));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__V_9_9));
#line 171 "list.opt"
        }
#line 171 "list.opt"
      }
#line 170 "list.opt"
    return mercury__pprint__HeadVar__3_3;
#line 170 "list.opt"
  }
#line 324 "list.int"
}

#line 443 "pprint.m"
static void MR_CALL 
mercury__pprint__IntroducedFrom__pred__to_string__443__1_3_p_0(
#line 443 "pprint.m"
  MR_String mercury__pprint__HeadVar__1_12,
#line 443 "pprint.m"
  MR_Word mercury__pprint__HeadVar__2_13,
#line 443 "pprint.m"
  MR_Word * mercury__pprint__HeadVar__3_14)
#line 443 "pprint.m"
{
#line 443 "pprint.m"
  {
#line 443 "pprint.m"
    MR_bool mercury__pprint__succeeded;

#line 443 "pprint.m"
    {
#line 443 "pprint.m"
      MR_Word base;
#line 443 "pprint.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "pprint.m"
      *mercury__pprint__HeadVar__3_14 = base;
#line 443 "pprint.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pprint__HeadVar__1_12));
#line 443 "pprint.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pprint__HeadVar__2_13));
#line 443 "pprint.m"
    }
#line 443 "pprint.m"
  }
#line 443 "pprint.m"
}

#line 415 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____pprint__doc__arity0______pprint__doc_2_2_f_0(
#line 415 "pprint.m"
  MR_Integer mercury__pprint__HeadVar__1_4,
#line 415 "pprint.m"
  MR_Word mercury__pprint__Doc_5)
#line 415 "pprint.m"
{
#line 415 "pprint.m"
  {
#line 415 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 415 "pprint.m"
    MR_Word mercury__pprint__Doc_3;

#line 415 "pprint.m"
    {
#line 415 "pprint.m"
      return mercury__pprint__Doc_3 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(mercury__pprint__Doc_5);
    }
#line 415 "pprint.m"
    return mercury__pprint__Doc_3;
#line 415 "pprint.m"
  }
#line 415 "pprint.m"
}

#line 416 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____string__arity0______pprint__doc_2_2_f_0(
#line 416 "pprint.m"
  MR_Integer mercury__pprint__HeadVar__1_4,
#line 416 "pprint.m"
  MR_String mercury__pprint__String_5)
#line 416 "pprint.m"
{
#line 431 "pprint.m"
  {
#line 431 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 431 "pprint.m"
    MR_Word mercury__pprint__HeadVar__3_3;

#line 431 "pprint.m"
    {
#line 431 "pprint.m"
      return mercury__pprint__HeadVar__3_3 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_115_116_114_105_110_103_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(mercury__pprint__String_5);
    }
#line 431 "pprint.m"
    return mercury__pprint__HeadVar__3_3;
#line 431 "pprint.m"
  }
#line 416 "pprint.m"
}

#line 417 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int__arity0______pprint__doc_2_2_f_0(
#line 417 "pprint.m"
  MR_Integer mercury__pprint__HeadVar__1_4,
#line 417 "pprint.m"
  MR_Integer mercury__pprint__Int_5)
#line 417 "pprint.m"
{
#line 417 "pprint.m"
  {
#line 417 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 417 "pprint.m"
    MR_Word mercury__pprint__HeadVar__3_3;

#line 417 "pprint.m"
    {
#line 417 "pprint.m"
      return mercury__pprint__HeadVar__3_3 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_105_110_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(mercury__pprint__Int_5);
    }
#line 417 "pprint.m"
    return mercury__pprint__HeadVar__3_3;
#line 417 "pprint.m"
  }
#line 417 "pprint.m"
}

#line 418 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____float__arity0______pprint__doc_2_2_f_0(
#line 418 "pprint.m"
  MR_Integer mercury__pprint__HeadVar__1_4,
#line 418 "pprint.m"
  MR_Float mercury__pprint__Float_5)
#line 418 "pprint.m"
{
#line 418 "pprint.m"
  {
#line 418 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 418 "pprint.m"
    MR_Word mercury__pprint__HeadVar__3_3;

#line 418 "pprint.m"
    {
#line 418 "pprint.m"
      return mercury__pprint__HeadVar__3_3 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_102_108_111_97_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(mercury__pprint__Float_5);
    }
#line 418 "pprint.m"
    return mercury__pprint__HeadVar__3_3;
#line 418 "pprint.m"
  }
#line 418 "pprint.m"
}

#line 419 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____character__arity0______pprint__doc_2_2_f_0(
#line 419 "pprint.m"
  MR_Integer mercury__pprint__HeadVar__1_4,
#line 419 "pprint.m"
  MR_Char mercury__pprint__Char_5)
#line 419 "pprint.m"
{
#line 419 "pprint.m"
  {
#line 419 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 419 "pprint.m"
    MR_Word mercury__pprint__HeadVar__3_3;

#line 419 "pprint.m"
    {
#line 419 "pprint.m"
      return mercury__pprint__HeadVar__3_3 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_99_104_97_114_97_99_116_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(mercury__pprint__Char_5);
    }
#line 419 "pprint.m"
    return mercury__pprint__HeadVar__3_3;
#line 419 "pprint.m"
  }
#line 419 "pprint.m"
}

#line 402 "pprint.m"
void MR_CALL 
mercury__pprint____Compare____map_pair_2_0(
#line 402 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_K_11,
#line 402 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_V_12,
#line 402 "pprint.m"
  MR_Word * mercury__pprint__HeadVar__1_1,
#line 402 "pprint.m"
  MR_Word mercury__pprint__HeadVar__2_2,
#line 402 "pprint.m"
  MR_Word mercury__pprint__HeadVar__3_3)
#line 402 "pprint.m"
{
#line 402 "pprint.m"
  {
#line 402 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 402 "pprint.m"
    MR_Integer mercury__pprint__CastX_9 = (MR_Integer) mercury__pprint__HeadVar__2_2;
#line 402 "pprint.m"
    MR_Integer mercury__pprint__CastY_10 = (MR_Integer) mercury__pprint__HeadVar__3_3;

#line 402 "pprint.m"
    mercury__pprint__succeeded = (mercury__pprint__CastX_9 == mercury__pprint__CastY_10);
#line 402 "pprint.m"
    if (mercury__pprint__succeeded)
#line 5774 "pprint.c"
      *mercury__pprint__HeadVar__1_1 = (MR_Integer) 0;
#line 402 "pprint.m"
    else
#line 402 "pprint.m"
      {
#line 402 "pprint.m"
        MR_Box mercury__pprint__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__pprint__HeadVar__2_2, (MR_Integer) 0));
#line 402 "pprint.m"
        MR_Box mercury__pprint__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__pprint__HeadVar__2_2, (MR_Integer) 1));
#line 402 "pprint.m"
        MR_Box mercury__pprint__V_6_6 = (MR_hl_field(MR_mktag(0), mercury__pprint__HeadVar__3_3, (MR_Integer) 0));
#line 402 "pprint.m"
        MR_Box mercury__pprint__V_7_7 = (MR_hl_field(MR_mktag(0), mercury__pprint__HeadVar__3_3, (MR_Integer) 1));
#line 402 "pprint.m"
        MR_Word mercury__pprint__V_8_8;

#line 402 "pprint.m"
        {
#line 402 "pprint.m"
          mercury__builtin__compare_3_p_0(mercury__pprint__TypeInfo_for_K_11, &mercury__pprint__V_8_8, mercury__pprint__V_4_4, mercury__pprint__V_6_6);
        }
#line 5796 "pprint.c"
        mercury__pprint__succeeded = (mercury__pprint__V_8_8 == (MR_Integer) 0);
#line 402 "pprint.m"
        mercury__pprint__succeeded = !(mercury__pprint__succeeded);
#line 402 "pprint.m"
        if (mercury__pprint__succeeded)
#line 402 "pprint.m"
          *mercury__pprint__HeadVar__1_1 = mercury__pprint__V_8_8;
#line 402 "pprint.m"
        else
#line 402 "pprint.m"
          {
#line 402 "pprint.m"
            mercury__builtin__compare_3_p_0(mercury__pprint__TypeInfo_for_V_12, mercury__pprint__HeadVar__1_1, mercury__pprint__V_5_5, mercury__pprint__V_7_7);
#line 402 "pprint.m"
            return;
          }
#line 402 "pprint.m"
      }
#line 402 "pprint.m"
  }
#line 402 "pprint.m"
}

#line 402 "pprint.m"
MR_bool MR_CALL 
mercury__pprint____Unify____map_pair_2_0(
#line 402 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_K_9,
#line 402 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_V_10,
#line 402 "pprint.m"
  MR_Word mercury__pprint__HeadVar__1_1,
#line 402 "pprint.m"
  MR_Word mercury__pprint__HeadVar__2_2)
#line 402 "pprint.m"
{
#line 402 "pprint.m"
  {
#line 402 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 402 "pprint.m"
    MR_Integer mercury__pprint__CastX_7 = (MR_Integer) mercury__pprint__HeadVar__1_1;
#line 402 "pprint.m"
    MR_Integer mercury__pprint__CastY_8 = (MR_Integer) mercury__pprint__HeadVar__2_2;

#line 402 "pprint.m"
    mercury__pprint__succeeded = (mercury__pprint__CastX_7 == mercury__pprint__CastY_8);
#line 402 "pprint.m"
    if (mercury__pprint__succeeded)
#line 402 "pprint.m"
      mercury__pprint__succeeded = MR_TRUE;
#line 402 "pprint.m"
    else
#line 402 "pprint.m"
      {
#line 402 "pprint.m"
        MR_Box mercury__pprint__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__pprint__HeadVar__1_1, (MR_Integer) 0));
#line 402 "pprint.m"
        MR_Box mercury__pprint__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__pprint__HeadVar__1_1, (MR_Integer) 1));
#line 402 "pprint.m"
        MR_Box mercury__pprint__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__pprint__HeadVar__2_2, (MR_Integer) 0));
#line 402 "pprint.m"
        MR_Box mercury__pprint__V_6_6 = (MR_hl_field(MR_mktag(0), mercury__pprint__HeadVar__2_2, (MR_Integer) 1));

#line 5861 "pprint.c"
        {
#line 5863 "pprint.c"
          mercury__pprint__succeeded = mercury__builtin__unify_2_p_0(mercury__pprint__TypeInfo_for_K_9, mercury__pprint__V_3_3, mercury__pprint__V_5_5);
        }
#line 402 "pprint.m"
        if (mercury__pprint__succeeded)
#line 5868 "pprint.c"
          {
#line 5870 "pprint.c"
            return mercury__pprint__succeeded = mercury__builtin__unify_2_p_0(mercury__pprint__TypeInfo_for_V_10, mercury__pprint__V_4_4, mercury__pprint__V_6_6);
          }
#line 402 "pprint.m"
      }
#line 402 "pprint.m"
    return mercury__pprint__succeeded;
#line 402 "pprint.m"
  }
#line 402 "pprint.m"
}

#line 384 "pprint.m"
void MR_CALL 
mercury__pprint____Compare____doc_0_0(
#line 384 "pprint.m"
  MR_Word * mercury__pprint__HeadVar__1_1,
#line 384 "pprint.m"
  MR_Word mercury__pprint__HeadVar__2_2,
#line 384 "pprint.m"
  MR_Word mercury__pprint__HeadVar__3_3)
#line 384 "pprint.m"
{
#line 384 "pprint.m"
  while (MR_TRUE)
#line 384 "pprint.m"
    {
#line 384 "pprint.m"
      /* tailcall optimized into a loop */
#line 384 "pprint.m"
      {
#line 384 "pprint.m"
        MR_bool mercury__pprint__succeeded;
#line 384 "pprint.m"
        MR_Integer mercury__pprint__CastX_168 = (MR_Integer) mercury__pprint__HeadVar__2_2;
#line 384 "pprint.m"
        MR_Integer mercury__pprint__CastY_169 = (MR_Integer) mercury__pprint__HeadVar__3_3;

#line 384 "pprint.m"
        mercury__pprint__succeeded = (mercury__pprint__CastX_168 == mercury__pprint__CastY_169);
#line 384 "pprint.m"
        if (mercury__pprint__succeeded)
#line 5912 "pprint.c"
          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 0;
#line 384 "pprint.m"
        else
#line 384 "pprint.m"
#line 384 "pprint.m"
          switch (MR_tag((MR_Word) mercury__pprint__HeadVar__2_2)) {
#line 384 "pprint.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 384 "pprint.m"
            case (MR_Integer) 0:
#line 384 "pprint.m"
#line 384 "pprint.m"
              switch (MR_unmkbody(mercury__pprint__HeadVar__2_2)) {
#line 384 "pprint.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 384 "pprint.m"
                case (MR_Integer) 0:
#line 384 "pprint.m"
#line 384 "pprint.m"
                  switch (MR_tag((MR_Word) mercury__pprint__HeadVar__3_3)) {
#line 384 "pprint.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 384 "pprint.m"
                    case (MR_Integer) 0:
#line 384 "pprint.m"
#line 384 "pprint.m"
                      switch (MR_unmkbody(mercury__pprint__HeadVar__3_3)) {
#line 384 "pprint.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 384 "pprint.m"
                        case (MR_Integer) 0:
#line 384 "pprint.m"
                          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 0;
#line 384 "pprint.m"
                          break;
#line 384 "pprint.m"
                        case (MR_Integer) 1:
#line 384 "pprint.m"
                          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                          break;
#line 384 "pprint.m"
                      }
#line 384 "pprint.m"
                      break;
#line 384 "pprint.m"
                    case (MR_Integer) 1:
#line 5960 "pprint.c"
                      *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                      break;
#line 384 "pprint.m"
                    case (MR_Integer) 2:
#line 5966 "pprint.c"
                      *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                      break;
#line 384 "pprint.m"
                    case (MR_Integer) 3:
#line 384 "pprint.m"
#line 384 "pprint.m"
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, (MR_Integer) 0)))) {
#line 384 "pprint.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 384 "pprint.m"
                        case (MR_Integer) 0:
#line 5979 "pprint.c"
                          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                          break;
#line 384 "pprint.m"
                        case (MR_Integer) 1:
#line 5985 "pprint.c"
                          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                          break;
#line 384 "pprint.m"
                        case (MR_Integer) 2:
#line 5991 "pprint.c"
                          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                          break;
#line 384 "pprint.m"
                        case (MR_Integer) 3:
#line 5997 "pprint.c"
                          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                          break;
#line 384 "pprint.m"
                      }
#line 384 "pprint.m"
                      break;
#line 384 "pprint.m"
                  }
#line 384 "pprint.m"
                  break;
#line 384 "pprint.m"
                case (MR_Integer) 1:
#line 384 "pprint.m"
#line 384 "pprint.m"
                  switch (MR_tag((MR_Word) mercury__pprint__HeadVar__3_3)) {
#line 384 "pprint.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 384 "pprint.m"
                    case (MR_Integer) 0:
#line 384 "pprint.m"
#line 384 "pprint.m"
                      switch (MR_unmkbody(mercury__pprint__HeadVar__3_3)) {
#line 384 "pprint.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 384 "pprint.m"
                        case (MR_Integer) 0:
#line 384 "pprint.m"
                          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                          break;
#line 384 "pprint.m"
                        case (MR_Integer) 1:
#line 384 "pprint.m"
                          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 0;
#line 384 "pprint.m"
                          break;
#line 384 "pprint.m"
                      }
#line 384 "pprint.m"
                      break;
#line 384 "pprint.m"
                    case (MR_Integer) 1:
#line 6041 "pprint.c"
                      *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                      break;
#line 384 "pprint.m"
                    case (MR_Integer) 2:
#line 6047 "pprint.c"
                      *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                      break;
#line 384 "pprint.m"
                    case (MR_Integer) 3:
#line 384 "pprint.m"
#line 384 "pprint.m"
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, (MR_Integer) 0)))) {
#line 384 "pprint.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 384 "pprint.m"
                        case (MR_Integer) 0:
#line 6060 "pprint.c"
                          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                          break;
#line 384 "pprint.m"
                        case (MR_Integer) 1:
#line 6066 "pprint.c"
                          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                          break;
#line 384 "pprint.m"
                        case (MR_Integer) 2:
#line 6072 "pprint.c"
                          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                          break;
#line 384 "pprint.m"
                        case (MR_Integer) 3:
#line 6078 "pprint.c"
                          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                          break;
#line 384 "pprint.m"
                      }
#line 384 "pprint.m"
                      break;
#line 384 "pprint.m"
                  }
#line 384 "pprint.m"
                  break;
#line 384 "pprint.m"
              }
#line 384 "pprint.m"
              break;
#line 384 "pprint.m"
            case (MR_Integer) 1:
#line 384 "pprint.m"
              {
#line 384 "pprint.m"
                MR_Word mercury__pprint__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));
#line 384 "pprint.m"
                MR_Word mercury__pprint__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 0)));

#line 384 "pprint.m"
#line 384 "pprint.m"
                switch (MR_tag((MR_Word) mercury__pprint__HeadVar__3_3)) {
#line 384 "pprint.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 384 "pprint.m"
                  case (MR_Integer) 0:
#line 384 "pprint.m"
#line 384 "pprint.m"
                    switch (MR_unmkbody(mercury__pprint__HeadVar__3_3)) {
#line 384 "pprint.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 384 "pprint.m"
                      case (MR_Integer) 0:
#line 6117 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 1:
#line 6123 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                    }
#line 384 "pprint.m"
                    break;
#line 384 "pprint.m"
                  case (MR_Integer) 1:
#line 384 "pprint.m"
                    {
#line 384 "pprint.m"
                      MR_Word mercury__pprint__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, (MR_Integer) 0)));
#line 384 "pprint.m"
                      MR_Word mercury__pprint__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, (MR_Integer) 1)));
#line 384 "pprint.m"
                      MR_Word mercury__pprint__V_20_20;

#line 384 "pprint.m"
                      {
#line 384 "pprint.m"
                        mercury__pprint____Compare____doc_0_0(&mercury__pprint__V_20_20, mercury__pprint__V_188_188, mercury__pprint__V_18_18);
                      }
#line 6147 "pprint.c"
                      mercury__pprint__succeeded = (mercury__pprint__V_20_20 == (MR_Integer) 0);
#line 384 "pprint.m"
                      mercury__pprint__succeeded = !(mercury__pprint__succeeded);
#line 384 "pprint.m"
                      if (mercury__pprint__succeeded)
#line 384 "pprint.m"
                        *mercury__pprint__HeadVar__1_1 = mercury__pprint__V_20_20;
#line 384 "pprint.m"
                      else
#line 384 "pprint.m"
                        {
#line 384 "pprint.m"
                          /* direct tailcall eliminated */
#line 384 "pprint.m"
                          {
#line 384 "pprint.m"
                            MR_Word mercury__pprint__HeadVar__2__tmp_copy_2 = mercury__pprint__V_187_187;
#line 384 "pprint.m"
                            MR_Word mercury__pprint__HeadVar__3__tmp_copy_3 = mercury__pprint__V_19_19;

#line 384 "pprint.m"
                            mercury__pprint__HeadVar__3_3 = mercury__pprint__HeadVar__3__tmp_copy_3;
#line 384 "pprint.m"
                            mercury__pprint__HeadVar__2_2 = mercury__pprint__HeadVar__2__tmp_copy_2;
#line 384 "pprint.m"
                          }
#line 384 "pprint.m"
                          continue;
#line 384 "pprint.m"
                        }
#line 384 "pprint.m"
                    }
#line 384 "pprint.m"
                    break;
#line 384 "pprint.m"
                  case (MR_Integer) 2:
#line 6184 "pprint.c"
                    *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                    break;
#line 384 "pprint.m"
                  case (MR_Integer) 3:
#line 384 "pprint.m"
#line 384 "pprint.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, (MR_Integer) 0)))) {
#line 384 "pprint.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 384 "pprint.m"
                      case (MR_Integer) 0:
#line 6197 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 1:
#line 6203 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 2:
#line 6209 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 3:
#line 6215 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                    }
#line 384 "pprint.m"
                    break;
#line 384 "pprint.m"
                }
#line 384 "pprint.m"
              }
#line 384 "pprint.m"
              break;
#line 384 "pprint.m"
            case (MR_Integer) 2:
#line 384 "pprint.m"
              {
#line 384 "pprint.m"
                MR_Word mercury__pprint__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));
#line 384 "pprint.m"
                MR_Integer mercury__pprint__V_186_186 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__2_2, (MR_Integer) 0)));

#line 384 "pprint.m"
#line 384 "pprint.m"
                switch (MR_tag((MR_Word) mercury__pprint__HeadVar__3_3)) {
#line 384 "pprint.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 384 "pprint.m"
                  case (MR_Integer) 0:
#line 384 "pprint.m"
#line 384 "pprint.m"
                    switch (MR_unmkbody(mercury__pprint__HeadVar__3_3)) {
#line 384 "pprint.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 384 "pprint.m"
                      case (MR_Integer) 0:
#line 6252 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 1:
#line 6258 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                    }
#line 384 "pprint.m"
                    break;
#line 384 "pprint.m"
                  case (MR_Integer) 1:
#line 6268 "pprint.c"
                    *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                    break;
#line 384 "pprint.m"
                  case (MR_Integer) 2:
#line 384 "pprint.m"
                    {
#line 384 "pprint.m"
                      MR_Integer mercury__pprint__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__3_3, (MR_Integer) 0)));
#line 384 "pprint.m"
                      MR_Word mercury__pprint__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__3_3, (MR_Integer) 1)));
#line 384 "pprint.m"
                      MR_Word mercury__pprint__V_51_51;

#line 66 "private_builtin.opt"
                      mercury__pprint__succeeded = (mercury__pprint__V_186_186 < mercury__pprint__V_49_49);
#line 69 "private_builtin.opt"
                      if (mercury__pprint__succeeded)
#line 68 "private_builtin.opt"
                        mercury__pprint__V_51_51 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                      else
#line 74 "private_builtin.opt"
                        {
#line 71 "private_builtin.opt"
                          mercury__pprint__succeeded = (mercury__pprint__V_186_186 == mercury__pprint__V_49_49);
#line 74 "private_builtin.opt"
                          if (mercury__pprint__succeeded)
#line 73 "private_builtin.opt"
                            mercury__pprint__V_51_51 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                          else
#line 75 "private_builtin.opt"
                            mercury__pprint__V_51_51 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                        }
#line 6305 "pprint.c"
                      mercury__pprint__succeeded = (mercury__pprint__V_51_51 == (MR_Integer) 0);
#line 384 "pprint.m"
                      mercury__pprint__succeeded = !(mercury__pprint__succeeded);
#line 384 "pprint.m"
                      if (mercury__pprint__succeeded)
#line 384 "pprint.m"
                        *mercury__pprint__HeadVar__1_1 = mercury__pprint__V_51_51;
#line 384 "pprint.m"
                      else
#line 384 "pprint.m"
                        {
#line 384 "pprint.m"
                          /* direct tailcall eliminated */
#line 384 "pprint.m"
                          {
#line 384 "pprint.m"
                            MR_Word mercury__pprint__HeadVar__2__tmp_copy_2 = mercury__pprint__V_185_185;
#line 384 "pprint.m"
                            MR_Word mercury__pprint__HeadVar__3__tmp_copy_3 = mercury__pprint__V_50_50;

#line 384 "pprint.m"
                            mercury__pprint__HeadVar__3_3 = mercury__pprint__HeadVar__3__tmp_copy_3;
#line 384 "pprint.m"
                            mercury__pprint__HeadVar__2_2 = mercury__pprint__HeadVar__2__tmp_copy_2;
#line 384 "pprint.m"
                          }
#line 384 "pprint.m"
                          continue;
#line 384 "pprint.m"
                        }
#line 384 "pprint.m"
                    }
#line 384 "pprint.m"
                    break;
#line 384 "pprint.m"
                  case (MR_Integer) 3:
#line 384 "pprint.m"
#line 384 "pprint.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, (MR_Integer) 0)))) {
#line 384 "pprint.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 384 "pprint.m"
                      case (MR_Integer) 0:
#line 6349 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 1:
#line 6355 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 2:
#line 6361 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 3:
#line 6367 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                    }
#line 384 "pprint.m"
                    break;
#line 384 "pprint.m"
                }
#line 384 "pprint.m"
              }
#line 384 "pprint.m"
              break;
#line 384 "pprint.m"
            case (MR_Integer) 3:
#line 384 "pprint.m"
#line 384 "pprint.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 0)))) {
#line 384 "pprint.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 384 "pprint.m"
                case (MR_Integer) 0:
#line 384 "pprint.m"
                  {
#line 384 "pprint.m"
                    MR_Word mercury__pprint__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 2)));
#line 384 "pprint.m"
                    MR_String mercury__pprint__V_184_184 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));

#line 384 "pprint.m"
#line 384 "pprint.m"
                    switch (MR_tag((MR_Word) mercury__pprint__HeadVar__3_3)) {
#line 384 "pprint.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 384 "pprint.m"
                      case (MR_Integer) 0:
#line 384 "pprint.m"
#line 384 "pprint.m"
                        switch (MR_unmkbody(mercury__pprint__HeadVar__3_3)) {
#line 384 "pprint.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 384 "pprint.m"
                          case (MR_Integer) 0:
#line 6411 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                          case (MR_Integer) 1:
#line 6417 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                        }
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 1:
#line 6427 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 2:
#line 6433 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 3:
#line 384 "pprint.m"
#line 384 "pprint.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, (MR_Integer) 0)))) {
#line 384 "pprint.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 384 "pprint.m"
                          case (MR_Integer) 0:
#line 384 "pprint.m"
                            {
#line 384 "pprint.m"
                              MR_String mercury__pprint__V_80_80 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, (MR_Integer) 1)));
#line 384 "pprint.m"
                              MR_Word mercury__pprint__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, (MR_Integer) 2)));
#line 384 "pprint.m"
                              MR_Word mercury__pprint__V_82_82;
#line 384 "pprint.m"
                              MR_Integer mercury__pprint__Res_7_196;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__pprint____Compare____doc_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__pprint__V_184_184 ;
	S2 =  mercury__pprint__V_80_80 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6472 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__Res_7_196  = Res;
#line 130 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                              mercury__pprint__succeeded = (mercury__pprint__Res_7_196 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                              if (mercury__pprint__succeeded)
#line 104 "private_builtin.opt"
                                mercury__pprint__V_82_82 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                              else
#line 110 "private_builtin.opt"
                                {
#line 107 "private_builtin.opt"
                                  mercury__pprint__succeeded = (mercury__pprint__Res_7_196 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                                  if (mercury__pprint__succeeded)
#line 109 "private_builtin.opt"
                                    mercury__pprint__V_82_82 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                                  else
#line 111 "private_builtin.opt"
                                    mercury__pprint__V_82_82 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                                }
#line 6501 "pprint.c"
                              mercury__pprint__succeeded = (mercury__pprint__V_82_82 == (MR_Integer) 0);
#line 384 "pprint.m"
                              mercury__pprint__succeeded = !(mercury__pprint__succeeded);
#line 384 "pprint.m"
                              if (mercury__pprint__succeeded)
#line 384 "pprint.m"
                                *mercury__pprint__HeadVar__1_1 = mercury__pprint__V_82_82;
#line 384 "pprint.m"
                              else
#line 384 "pprint.m"
                                {
#line 384 "pprint.m"
                                  /* direct tailcall eliminated */
#line 384 "pprint.m"
                                  {
#line 384 "pprint.m"
                                    MR_Word mercury__pprint__HeadVar__2__tmp_copy_2 = mercury__pprint__V_183_183;
#line 384 "pprint.m"
                                    MR_Word mercury__pprint__HeadVar__3__tmp_copy_3 = mercury__pprint__V_81_81;

#line 384 "pprint.m"
                                    mercury__pprint__HeadVar__3_3 = mercury__pprint__HeadVar__3__tmp_copy_3;
#line 384 "pprint.m"
                                    mercury__pprint__HeadVar__2_2 = mercury__pprint__HeadVar__2__tmp_copy_2;
#line 384 "pprint.m"
                                  }
#line 384 "pprint.m"
                                  continue;
#line 384 "pprint.m"
                                }
#line 384 "pprint.m"
                            }
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                          case (MR_Integer) 1:
#line 6538 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                          case (MR_Integer) 2:
#line 6544 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                          case (MR_Integer) 3:
#line 6550 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                        }
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                    }
#line 384 "pprint.m"
                  }
#line 384 "pprint.m"
                  break;
#line 384 "pprint.m"
                case (MR_Integer) 1:
#line 384 "pprint.m"
                  {
#line 384 "pprint.m"
                    MR_String mercury__pprint__V_189_189 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));

#line 384 "pprint.m"
#line 384 "pprint.m"
                    switch (MR_tag((MR_Word) mercury__pprint__HeadVar__3_3)) {
#line 384 "pprint.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 384 "pprint.m"
                      case (MR_Integer) 0:
#line 384 "pprint.m"
#line 384 "pprint.m"
                        switch (MR_unmkbody(mercury__pprint__HeadVar__3_3)) {
#line 384 "pprint.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 384 "pprint.m"
                          case (MR_Integer) 0:
#line 6585 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                          case (MR_Integer) 1:
#line 6591 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                        }
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 1:
#line 6601 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 2:
#line 6607 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 3:
#line 384 "pprint.m"
#line 384 "pprint.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, (MR_Integer) 0)))) {
#line 384 "pprint.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 384 "pprint.m"
                          case (MR_Integer) 0:
#line 6620 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                          case (MR_Integer) 1:
#line 384 "pprint.m"
                            {
#line 384 "pprint.m"
                              MR_String mercury__pprint__V_106_106 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, (MR_Integer) 1)));
#line 384 "pprint.m"
                              MR_Integer mercury__pprint__Res_7_204;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__pprint____Compare____doc_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__pprint__V_189_189 ;
	S2 =  mercury__pprint__V_106_106 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6648 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__Res_7_204  = Res;
#line 130 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                              mercury__pprint__succeeded = (mercury__pprint__Res_7_204 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                              if (mercury__pprint__succeeded)
#line 104 "private_builtin.opt"
                                *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                              else
#line 110 "private_builtin.opt"
                                {
#line 107 "private_builtin.opt"
                                  mercury__pprint__succeeded = (mercury__pprint__Res_7_204 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                                  if (mercury__pprint__succeeded)
#line 109 "private_builtin.opt"
                                    *mercury__pprint__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                                  else
#line 111 "private_builtin.opt"
                                    *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                                }
#line 384 "pprint.m"
                            }
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                          case (MR_Integer) 2:
#line 6683 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                          case (MR_Integer) 3:
#line 6689 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                        }
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                    }
#line 384 "pprint.m"
                  }
#line 384 "pprint.m"
                  break;
#line 384 "pprint.m"
                case (MR_Integer) 2:
#line 384 "pprint.m"
                  {
#line 384 "pprint.m"
                    MR_Word mercury__pprint__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));

#line 384 "pprint.m"
#line 384 "pprint.m"
                    switch (MR_tag((MR_Word) mercury__pprint__HeadVar__3_3)) {
#line 384 "pprint.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 384 "pprint.m"
                      case (MR_Integer) 0:
#line 384 "pprint.m"
#line 384 "pprint.m"
                        switch (MR_unmkbody(mercury__pprint__HeadVar__3_3)) {
#line 384 "pprint.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 384 "pprint.m"
                          case (MR_Integer) 0:
#line 6724 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                          case (MR_Integer) 1:
#line 6730 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                        }
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 1:
#line 6740 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 2:
#line 6746 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 3:
#line 384 "pprint.m"
#line 384 "pprint.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, (MR_Integer) 0)))) {
#line 384 "pprint.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 384 "pprint.m"
                          case (MR_Integer) 0:
#line 6759 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                          case (MR_Integer) 1:
#line 6765 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                          case (MR_Integer) 2:
#line 384 "pprint.m"
                            {
#line 384 "pprint.m"
                              MR_Word mercury__pprint__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, (MR_Integer) 1)));

#line 384 "pprint.m"
                              /* direct tailcall eliminated */
#line 384 "pprint.m"
                              {
#line 384 "pprint.m"
                                MR_Word mercury__pprint__HeadVar__2__tmp_copy_2 = mercury__pprint__V_182_182;
#line 384 "pprint.m"
                                MR_Word mercury__pprint__HeadVar__3__tmp_copy_3 = mercury__pprint__V_137_137;

#line 384 "pprint.m"
                                mercury__pprint__HeadVar__3_3 = mercury__pprint__HeadVar__3__tmp_copy_3;
#line 384 "pprint.m"
                                mercury__pprint__HeadVar__2_2 = mercury__pprint__HeadVar__2__tmp_copy_2;
#line 384 "pprint.m"
                              }
#line 384 "pprint.m"
                              continue;
#line 384 "pprint.m"
                            }
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                          case (MR_Integer) 3:
#line 6799 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                        }
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                    }
#line 384 "pprint.m"
                  }
#line 384 "pprint.m"
                  break;
#line 384 "pprint.m"
                case (MR_Integer) 3:
#line 384 "pprint.m"
                  {
#line 384 "pprint.m"
                    MR_Word mercury__pprint__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 2)));
#line 384 "pprint.m"
                    MR_Integer mercury__pprint__V_181_181 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));

#line 384 "pprint.m"
#line 384 "pprint.m"
                    switch (MR_tag((MR_Word) mercury__pprint__HeadVar__3_3)) {
#line 384 "pprint.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 384 "pprint.m"
                      case (MR_Integer) 0:
#line 384 "pprint.m"
#line 384 "pprint.m"
                        switch (MR_unmkbody(mercury__pprint__HeadVar__3_3)) {
#line 384 "pprint.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 384 "pprint.m"
                          case (MR_Integer) 0:
#line 6836 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                          case (MR_Integer) 1:
#line 6842 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                        }
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 1:
#line 6852 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 2:
#line 6858 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 3:
#line 384 "pprint.m"
#line 384 "pprint.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, (MR_Integer) 0)))) {
#line 384 "pprint.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 384 "pprint.m"
                          case (MR_Integer) 0:
#line 6871 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                          case (MR_Integer) 1:
#line 6877 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                          case (MR_Integer) 2:
#line 6883 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                          case (MR_Integer) 3:
#line 384 "pprint.m"
                            {
#line 384 "pprint.m"
                              MR_Integer mercury__pprint__V_165_165 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, (MR_Integer) 1)));
#line 384 "pprint.m"
                              MR_Word mercury__pprint__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, (MR_Integer) 2)));
#line 384 "pprint.m"
                              MR_Word mercury__pprint__V_167_167;

#line 66 "private_builtin.opt"
                              mercury__pprint__succeeded = (mercury__pprint__V_181_181 < mercury__pprint__V_165_165);
#line 69 "private_builtin.opt"
                              if (mercury__pprint__succeeded)
#line 68 "private_builtin.opt"
                                mercury__pprint__V_167_167 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                              else
#line 74 "private_builtin.opt"
                                {
#line 71 "private_builtin.opt"
                                  mercury__pprint__succeeded = (mercury__pprint__V_181_181 == mercury__pprint__V_165_165);
#line 74 "private_builtin.opt"
                                  if (mercury__pprint__succeeded)
#line 73 "private_builtin.opt"
                                    mercury__pprint__V_167_167 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                  else
#line 75 "private_builtin.opt"
                                    mercury__pprint__V_167_167 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                }
#line 6920 "pprint.c"
                              mercury__pprint__succeeded = (mercury__pprint__V_167_167 == (MR_Integer) 0);
#line 384 "pprint.m"
                              mercury__pprint__succeeded = !(mercury__pprint__succeeded);
#line 384 "pprint.m"
                              if (mercury__pprint__succeeded)
#line 384 "pprint.m"
                                *mercury__pprint__HeadVar__1_1 = mercury__pprint__V_167_167;
#line 384 "pprint.m"
                              else
#line 384 "pprint.m"
                                {
#line 384 "pprint.m"
                                  mercury__univ____Compare____univ_0_0(mercury__pprint__HeadVar__1_1, mercury__pprint__V_180_180, mercury__pprint__V_166_166);
#line 384 "pprint.m"
                                  return;
                                }
#line 384 "pprint.m"
                            }
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                        }
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                    }
#line 384 "pprint.m"
                  }
#line 384 "pprint.m"
                  break;
#line 384 "pprint.m"
              }
#line 384 "pprint.m"
              break;
#line 384 "pprint.m"
          }
#line 384 "pprint.m"
      }
#line 384 "pprint.m"
      break;
#line 384 "pprint.m"
    }
#line 384 "pprint.m"
}

#line 384 "pprint.m"
MR_bool MR_CALL 
mercury__pprint____Unify____doc_0_0(
#line 384 "pprint.m"
  MR_Word mercury__pprint__HeadVar__1_1,
#line 384 "pprint.m"
  MR_Word mercury__pprint__HeadVar__2_2)
#line 384 "pprint.m"
{
#line 384 "pprint.m"
  while (MR_TRUE)
#line 384 "pprint.m"
    {
#line 384 "pprint.m"
      /* tailcall optimized into a loop */
#line 384 "pprint.m"
      {
#line 384 "pprint.m"
        MR_bool mercury__pprint__succeeded;
#line 384 "pprint.m"
        MR_Integer mercury__pprint__CastX_27 = (MR_Integer) mercury__pprint__HeadVar__1_1;
#line 384 "pprint.m"
        MR_Integer mercury__pprint__CastY_28 = (MR_Integer) mercury__pprint__HeadVar__2_2;

#line 384 "pprint.m"
        mercury__pprint__succeeded = (mercury__pprint__CastX_27 == mercury__pprint__CastY_28);
#line 384 "pprint.m"
        if (mercury__pprint__succeeded)
#line 384 "pprint.m"
          mercury__pprint__succeeded = MR_TRUE;
#line 384 "pprint.m"
        else
#line 384 "pprint.m"
#line 384 "pprint.m"
          switch (MR_tag((MR_Word) mercury__pprint__HeadVar__1_1)) {
#line 384 "pprint.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 384 "pprint.m"
            case (MR_Integer) 0:
#line 384 "pprint.m"
#line 384 "pprint.m"
              switch (MR_unmkbody(mercury__pprint__HeadVar__1_1)) {
#line 384 "pprint.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 384 "pprint.m"
                case (MR_Integer) 0:
#line 384 "pprint.m"
                  {
#line 384 "pprint.m"
                    MR_Integer mercury__pprint__CastX_3 = (MR_Integer) mercury__pprint__HeadVar__1_1;
#line 384 "pprint.m"
                    MR_Integer mercury__pprint__CastY_4 = (MR_Integer) mercury__pprint__HeadVar__2_2;

#line 384 "pprint.m"
                    mercury__pprint__succeeded = (mercury__pprint__CastY_4 == mercury__pprint__CastX_3);
#line 384 "pprint.m"
                  }
#line 384 "pprint.m"
                  break;
#line 384 "pprint.m"
                case (MR_Integer) 1:
#line 384 "pprint.m"
                  {
#line 384 "pprint.m"
                    MR_Integer mercury__pprint__CastX_19 = (MR_Integer) mercury__pprint__HeadVar__1_1;
#line 384 "pprint.m"
                    MR_Integer mercury__pprint__CastY_20 = (MR_Integer) mercury__pprint__HeadVar__2_2;

#line 384 "pprint.m"
                    mercury__pprint__succeeded = (mercury__pprint__CastY_20 == mercury__pprint__CastX_19);
#line 384 "pprint.m"
                  }
#line 384 "pprint.m"
                  break;
#line 384 "pprint.m"
              }
#line 384 "pprint.m"
              break;
#line 384 "pprint.m"
            case (MR_Integer) 1:
#line 384 "pprint.m"
              {
#line 384 "pprint.m"
                MR_Word mercury__pprint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, (MR_Integer) 0)));
#line 384 "pprint.m"
                MR_Word mercury__pprint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, (MR_Integer) 1)));
#line 384 "pprint.m"
                MR_Word mercury__pprint__V_7_7;
#line 384 "pprint.m"
                MR_Word mercury__pprint__V_8_8;

#line 384 "pprint.m"
                mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 384 "pprint.m"
                if (mercury__pprint__succeeded)
#line 384 "pprint.m"
                  {
#line 384 "pprint.m"
                    mercury__pprint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 0)));
#line 384 "pprint.m"
                    mercury__pprint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));
#line 7067 "pprint.c"
                    {
#line 7069 "pprint.c"
                      mercury__pprint__succeeded = mercury__pprint____Unify____doc_0_0(mercury__pprint__V_5_5, mercury__pprint__V_7_7);
                    }
#line 384 "pprint.m"
                    if (mercury__pprint__succeeded)
#line 7074 "pprint.c"
                      {
#line 7076 "pprint.c"
                        /* direct tailcall eliminated */
#line 7078 "pprint.c"
                        {
#line 7080 "pprint.c"
                          MR_Word mercury__pprint__HeadVar__1__tmp_copy_1 = mercury__pprint__V_6_6;
#line 7082 "pprint.c"
                          MR_Word mercury__pprint__HeadVar__2__tmp_copy_2 = mercury__pprint__V_8_8;

#line 7085 "pprint.c"
                          mercury__pprint__HeadVar__2_2 = mercury__pprint__HeadVar__2__tmp_copy_2;
#line 7087 "pprint.c"
                          mercury__pprint__HeadVar__1_1 = mercury__pprint__HeadVar__1__tmp_copy_1;
#line 7089 "pprint.c"
                        }
#line 7091 "pprint.c"
                        continue;
#line 7093 "pprint.c"
                      }
#line 384 "pprint.m"
                  }
#line 384 "pprint.m"
              }
#line 384 "pprint.m"
              break;
#line 384 "pprint.m"
            case (MR_Integer) 2:
#line 384 "pprint.m"
              {
#line 384 "pprint.m"
                MR_Integer mercury__pprint__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__1_1, (MR_Integer) 0)));
#line 384 "pprint.m"
                MR_Word mercury__pprint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__1_1, (MR_Integer) 1)));
#line 384 "pprint.m"
                MR_Integer mercury__pprint__V_11_11;
#line 384 "pprint.m"
                MR_Word mercury__pprint__V_12_12;

#line 384 "pprint.m"
                mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 384 "pprint.m"
                if (mercury__pprint__succeeded)
#line 384 "pprint.m"
                  {
#line 384 "pprint.m"
                    mercury__pprint__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__2_2, (MR_Integer) 0)));
#line 384 "pprint.m"
                    mercury__pprint__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));
#line 7124 "pprint.c"
                    mercury__pprint__succeeded = (mercury__pprint__V_9_9 == mercury__pprint__V_11_11);
#line 384 "pprint.m"
                    if (mercury__pprint__succeeded)
#line 7128 "pprint.c"
                      {
#line 7130 "pprint.c"
                        /* direct tailcall eliminated */
#line 7132 "pprint.c"
                        {
#line 7134 "pprint.c"
                          MR_Word mercury__pprint__HeadVar__1__tmp_copy_1 = mercury__pprint__V_10_10;
#line 7136 "pprint.c"
                          MR_Word mercury__pprint__HeadVar__2__tmp_copy_2 = mercury__pprint__V_12_12;

#line 7139 "pprint.c"
                          mercury__pprint__HeadVar__2_2 = mercury__pprint__HeadVar__2__tmp_copy_2;
#line 7141 "pprint.c"
                          mercury__pprint__HeadVar__1_1 = mercury__pprint__HeadVar__1__tmp_copy_1;
#line 7143 "pprint.c"
                        }
#line 7145 "pprint.c"
                        continue;
#line 7147 "pprint.c"
                      }
#line 384 "pprint.m"
                  }
#line 384 "pprint.m"
              }
#line 384 "pprint.m"
              break;
#line 384 "pprint.m"
            case (MR_Integer) 3:
#line 384 "pprint.m"
#line 384 "pprint.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__1_1, (MR_Integer) 0)))) {
#line 384 "pprint.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 384 "pprint.m"
                case (MR_Integer) 0:
#line 384 "pprint.m"
                  {
#line 384 "pprint.m"
                    MR_String mercury__pprint__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__1_1, (MR_Integer) 1)));
#line 384 "pprint.m"
                    MR_Word mercury__pprint__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__1_1, (MR_Integer) 2)));
#line 384 "pprint.m"
                    MR_String mercury__pprint__V_15_15;
#line 384 "pprint.m"
                    MR_Word mercury__pprint__V_16_16;

#line 384 "pprint.m"
                    mercury__pprint__succeeded = ((((MR_tag((MR_Word) mercury__pprint__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 384 "pprint.m"
                    if (mercury__pprint__succeeded)
#line 384 "pprint.m"
                      {
#line 384 "pprint.m"
                        mercury__pprint__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));
#line 384 "pprint.m"
                        mercury__pprint__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 2)));
#line 7185 "pprint.c"
                        mercury__pprint__succeeded = (strcmp(mercury__pprint__V_13_13, mercury__pprint__V_15_15) == 0);
#line 384 "pprint.m"
                        if (mercury__pprint__succeeded)
#line 7189 "pprint.c"
                          {
#line 7191 "pprint.c"
                            /* direct tailcall eliminated */
#line 7193 "pprint.c"
                            {
#line 7195 "pprint.c"
                              MR_Word mercury__pprint__HeadVar__1__tmp_copy_1 = mercury__pprint__V_14_14;
#line 7197 "pprint.c"
                              MR_Word mercury__pprint__HeadVar__2__tmp_copy_2 = mercury__pprint__V_16_16;

#line 7200 "pprint.c"
                              mercury__pprint__HeadVar__2_2 = mercury__pprint__HeadVar__2__tmp_copy_2;
#line 7202 "pprint.c"
                              mercury__pprint__HeadVar__1_1 = mercury__pprint__HeadVar__1__tmp_copy_1;
#line 7204 "pprint.c"
                            }
#line 7206 "pprint.c"
                            continue;
#line 7208 "pprint.c"
                          }
#line 384 "pprint.m"
                      }
#line 384 "pprint.m"
                  }
#line 384 "pprint.m"
                  break;
#line 384 "pprint.m"
                case (MR_Integer) 1:
#line 384 "pprint.m"
                  {
#line 384 "pprint.m"
                    MR_String mercury__pprint__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__1_1, (MR_Integer) 1)));
#line 384 "pprint.m"
                    MR_String mercury__pprint__V_18_18;

#line 384 "pprint.m"
                    mercury__pprint__succeeded = ((((MR_tag((MR_Word) mercury__pprint__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 384 "pprint.m"
                    if (mercury__pprint__succeeded)
#line 384 "pprint.m"
                      {
#line 384 "pprint.m"
                        mercury__pprint__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));
#line 7233 "pprint.c"
                        mercury__pprint__succeeded = (strcmp(mercury__pprint__V_17_17, mercury__pprint__V_18_18) == 0);
#line 384 "pprint.m"
                      }
#line 384 "pprint.m"
                  }
#line 384 "pprint.m"
                  break;
#line 384 "pprint.m"
                case (MR_Integer) 2:
#line 384 "pprint.m"
                  {
#line 384 "pprint.m"
                    MR_Word mercury__pprint__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__1_1, (MR_Integer) 1)));
#line 384 "pprint.m"
                    MR_Word mercury__pprint__V_22_22;

#line 384 "pprint.m"
                    mercury__pprint__succeeded = ((((MR_tag((MR_Word) mercury__pprint__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 384 "pprint.m"
                    if (mercury__pprint__succeeded)
#line 384 "pprint.m"
                      {
#line 384 "pprint.m"
                        mercury__pprint__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));
#line 7258 "pprint.c"
                        /* direct tailcall eliminated */
#line 7260 "pprint.c"
                        {
#line 7262 "pprint.c"
                          MR_Word mercury__pprint__HeadVar__1__tmp_copy_1 = mercury__pprint__V_21_21;
#line 7264 "pprint.c"
                          MR_Word mercury__pprint__HeadVar__2__tmp_copy_2 = mercury__pprint__V_22_22;

#line 7267 "pprint.c"
                          mercury__pprint__HeadVar__2_2 = mercury__pprint__HeadVar__2__tmp_copy_2;
#line 7269 "pprint.c"
                          mercury__pprint__HeadVar__1_1 = mercury__pprint__HeadVar__1__tmp_copy_1;
#line 7271 "pprint.c"
                        }
#line 7273 "pprint.c"
                        continue;
#line 384 "pprint.m"
                      }
#line 384 "pprint.m"
                  }
#line 384 "pprint.m"
                  break;
#line 384 "pprint.m"
                case (MR_Integer) 3:
#line 384 "pprint.m"
                  {
#line 384 "pprint.m"
                    MR_Integer mercury__pprint__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__1_1, (MR_Integer) 1)));
#line 384 "pprint.m"
                    MR_Word mercury__pprint__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__1_1, (MR_Integer) 2)));
#line 384 "pprint.m"
                    MR_Integer mercury__pprint__V_25_25;
#line 384 "pprint.m"
                    MR_Word mercury__pprint__V_26_26;

#line 384 "pprint.m"
                    mercury__pprint__succeeded = ((((MR_tag((MR_Word) mercury__pprint__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 384 "pprint.m"
                    if (mercury__pprint__succeeded)
#line 384 "pprint.m"
                      {
#line 384 "pprint.m"
                        mercury__pprint__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));
#line 384 "pprint.m"
                        mercury__pprint__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 2)));
#line 7304 "pprint.c"
                        mercury__pprint__succeeded = (mercury__pprint__V_23_23 == mercury__pprint__V_25_25);
#line 384 "pprint.m"
                        if (mercury__pprint__succeeded)
#line 7308 "pprint.c"
                          {
#line 7310 "pprint.c"
                            return mercury__pprint__succeeded = mercury__univ____Unify____univ_0_0(mercury__pprint__V_24_24, mercury__pprint__V_26_26);
                          }
#line 384 "pprint.m"
                      }
#line 384 "pprint.m"
                  }
#line 384 "pprint.m"
                  break;
#line 384 "pprint.m"
              }
#line 384 "pprint.m"
              break;
#line 384 "pprint.m"
          }
#line 384 "pprint.m"
        return mercury__pprint__succeeded;
#line 384 "pprint.m"
      }
#line 384 "pprint.m"
      break;
#line 384 "pprint.m"
    }
#line 384 "pprint.m"
}

#line 407 "pprint.m"
void MR_CALL 
mercury__pprint____Compare____depth_0_0(
#line 407 "pprint.m"
  MR_Word * mercury__pprint__HeadVar__1_1,
#line 407 "pprint.m"
  MR_Integer mercury__pprint__HeadVar__2_2,
#line 407 "pprint.m"
  MR_Integer mercury__pprint__HeadVar__3_3)
#line 407 "pprint.m"
{
#line 407 "pprint.m"
  {
#line 407 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 407 "pprint.m"
    MR_Integer mercury__pprint__Cast_HeadVar1_4 = mercury__pprint__HeadVar__2_2;
#line 407 "pprint.m"
    MR_Integer mercury__pprint__Cast_HeadVar2_5 = mercury__pprint__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__pprint__succeeded = (mercury__pprint__Cast_HeadVar1_4 < mercury__pprint__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__pprint__succeeded)
#line 68 "private_builtin.opt"
      *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__pprint__succeeded = (mercury__pprint__Cast_HeadVar1_4 == mercury__pprint__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__pprint__succeeded)
#line 73 "private_builtin.opt"
          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 407 "pprint.m"
  }
#line 407 "pprint.m"
}

#line 407 "pprint.m"
MR_bool MR_CALL 
mercury__pprint____Unify____depth_0_0(
#line 407 "pprint.m"
  MR_Integer mercury__pprint__HeadVar__1_1,
#line 407 "pprint.m"
  MR_Integer mercury__pprint__HeadVar__2_2)
#line 407 "pprint.m"
{
#line 407 "pprint.m"
  {
#line 407 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 407 "pprint.m"
    MR_Integer mercury__pprint__Cast_HeadVar1_3 = mercury__pprint__HeadVar__1_1;
#line 407 "pprint.m"
    MR_Integer mercury__pprint__Cast_HeadVar2_4 = mercury__pprint__HeadVar__2_2;

#line 407 "pprint.m"
    mercury__pprint__succeeded = (mercury__pprint__Cast_HeadVar1_3 == mercury__pprint__Cast_HeadVar2_4);
#line 407 "pprint.m"
    return mercury__pprint__succeeded;
#line 407 "pprint.m"
  }
#line 407 "pprint.m"
}

#line 1007 "pprint.m"
static MR_Word MR_CALL 
mercury__pprint__robdd_to_doc_2_f_0(
#line 1007 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T_12,
#line 1007 "pprint.m"
  MR_Integer mercury__pprint__Depth_4,
#line 1007 "pprint.m"
  MR_Word mercury__pprint__R_5)
#line 1007 "pprint.m"
{
#line 1009 "pprint.m"
  {
#line 1009 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 1009 "pprint.m"
    MR_Word mercury__pprint__HeadVar__3_3;
#line 1009 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_13 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 1009 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_14 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 1009 "pprint.m"
    MR_Word mercury__pprint__TypeCtorInfo_15_15 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_literal_1;
#line 1009 "pprint.m"
    MR_Word mercury__pprint__TypeInfo_16_16;
#line 1009 "pprint.m"
    MR_Word mercury__pprint__TypeCtorInfo_17_17 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 1009 "pprint.m"
    MR_Word mercury__pprint__TypeInfo_18_18;
#line 1009 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_22;
#line 1009 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_23;
#line 1009 "pprint.m"
    MR_Word mercury__pprint__V_7_7;
#line 1009 "pprint.m"
    MR_Word mercury__pprint__V_8_8;
#line 1009 "pprint.m"
    MR_Integer mercury__pprint__V_9_9;
#line 1009 "pprint.m"
    MR_Word mercury__pprint__V_11_11;
#line 1009 "pprint.m"
    MR_Word mercury__pprint__V_26_26;
#line 1009 "pprint.m"
    MR_Word mercury__pprint__V_27_27;
#line 1009 "pprint.m"
    MR_Integer mercury__pprint__V_29_29;
#line 1009 "pprint.m"
    MR_Integer mercury__pprint__V_32_32;
#line 7459 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 7461 "pprint.c"
    MR_Box mercury__pprint__conv1_V_26_26;
#line 7463 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 7465 "pprint.c"
    MR_Box mercury__pprint__conv3_V_27_27;

#line 7468 "pprint.c"
    {
#line 7470 "pprint.c"
      mercury__pprint__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7472 "pprint.c"
      MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_16_16, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_15_15));
#line 7474 "pprint.c"
      MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_16_16, 1) = ((MR_Box) (mercury__pprint__TypeInfo_for_T_12));
#line 7476 "pprint.c"
    }
#line 7478 "pprint.c"
    {
#line 7480 "pprint.c"
      mercury__pprint__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7482 "pprint.c"
      MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_18_18, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_17_17));
#line 7484 "pprint.c"
      MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_18_18, 1) = ((MR_Box) (mercury__pprint__TypeInfo_16_16));
#line 7486 "pprint.c"
    }
#line 1010 "pprint.m"
    mercury__pprint__V_9_9 = (mercury__pprint__Depth_4 - (MR_Integer) 1);
#line 1010 "pprint.m"
    {
#line 1010 "pprint.m"
      mercury__pprint__V_11_11 = mercury__robdd__dnf_1_f_0(mercury__pprint__TypeInfo_for_T_12, mercury__pprint__R_5);
    }
#line 1010 "pprint.m"
    {
#line 1010 "pprint.m"
      mercury__pprint__V_8_8 = mercury__pprint__list_to_doc_2_f_0(mercury__pprint__TypeInfo_18_18, mercury__pprint__V_9_9, (MR_Word) mercury__pprint__V_11_11);
    }
#line 7500 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_22 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 7502 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_23 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 583 "pprint.m"
    {
#line 583 "pprint.m"
      mercury__pprint__V_7_7 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_22, mercury__pprint__TypeClassInfo_for_doc_23, mercury__pprint__TypeClassInfo_for_doc_14, ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), ((MR_Box) (mercury__pprint__V_8_8)));
    }
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__robdd_to_doc_2_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 7530 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_29_29  = Max;
#line 141 "int.opt"
}
#line 7537 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_13, (MR_Integer) 0)), (MR_Integer) 5)));
#line 7539 "pprint.c"
    {
#line 7541 "pprint.c"
      mercury__pprint__conv1_V_26_26 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_13), ((MR_Box) (mercury__pprint__V_29_29)), ((MR_Box) ((MR_String) "robdd_dnf")));
    }
#line 7544 "pprint.c"
    mercury__pprint__V_26_26 = ((MR_Word) mercury__pprint__conv1_V_26_26);
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__robdd_to_doc_2_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 7567 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_32_32  = Max;
#line 141 "int.opt"
}
#line 7574 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 7576 "pprint.c"
    {
#line 7578 "pprint.c"
      mercury__pprint__conv3_V_27_27 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_14), ((MR_Box) (mercury__pprint__V_32_32)), ((MR_Box) (mercury__pprint__V_7_7)));
    }
#line 7581 "pprint.c"
    mercury__pprint__V_27_27 = ((MR_Word) mercury__pprint__conv3_V_27_27);
#line 428 "pprint.m"
    {
#line 428 "pprint.m"
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (mercury__pprint__V_26_26));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__V_27_27));
#line 428 "pprint.m"
    }
#line 1009 "pprint.m"
    return mercury__pprint__HeadVar__3_3;
#line 1009 "pprint.m"
  }
#line 1007 "pprint.m"
}

#line 999 "pprint.m"
static MR_Word MR_CALL 
mercury__pprint__map_pair_to_doc_2_f_0(
#line 999 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T1_21,
#line 999 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T2_22,
#line 999 "pprint.m"
  MR_Integer mercury__pprint__Depth_4,
#line 999 "pprint.m"
  MR_Word mercury__pprint__HeadVar__2_2)
#line 999 "pprint.m"
{
#line 1001 "pprint.m"
  {
#line 1001 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 1001 "pprint.m"
    MR_Word mercury__pprint__HeadVar__3_3;
#line 1001 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_23 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 1001 "pprint.m"
    MR_Box mercury__pprint__Key_5 = (MR_hl_field(MR_mktag(0), mercury__pprint__HeadVar__2_2, (MR_Integer) 0));
#line 1001 "pprint.m"
    MR_Box mercury__pprint__Value_6 = (MR_hl_field(MR_mktag(0), mercury__pprint__HeadVar__2_2, (MR_Integer) 1));
#line 1001 "pprint.m"
    MR_Word mercury__pprint__V_7_7;
#line 1001 "pprint.m"
    MR_Integer mercury__pprint__V_8_8 = (mercury__pprint__Depth_4 - (MR_Integer) 1);
#line 1001 "pprint.m"
    MR_Word mercury__pprint__V_10_10;
#line 1001 "pprint.m"
    MR_Word mercury__pprint__V_11_11;
#line 1001 "pprint.m"
    MR_Word mercury__pprint__V_13_13;
#line 1001 "pprint.m"
    MR_Word mercury__pprint__V_14_14;
#line 1001 "pprint.m"
    MR_Word mercury__pprint__V_16_16;
#line 1001 "pprint.m"
    MR_Word mercury__pprint__V_17_17;
#line 1001 "pprint.m"
    MR_Word mercury__pprint__V_18_18;
#line 1001 "pprint.m"
    MR_Integer mercury__pprint__V_19_19;
#line 1001 "pprint.m"
    MR_Word mercury__pprint__V_33_33;
#line 1001 "pprint.m"
    MR_Integer mercury__pprint__V_35_35;
#line 1001 "pprint.m"
    MR_Word mercury__pprint__V_38_38;
#line 1001 "pprint.m"
    MR_Integer mercury__pprint__V_40_40;
#line 7653 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 7655 "pprint.c"
    MR_Box mercury__pprint__conv1_V_33_33;
#line 7657 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 7659 "pprint.c"
    MR_Box mercury__pprint__conv3_V_38_38;

#line 664 "pprint.m"
    {
#line 664 "pprint.m"
      mercury__pprint__V_7_7 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_for_T1_21, mercury__pprint__V_8_8, (MR_Integer) 1000, mercury__pprint__Key_5);
    }
#line 431 "pprint.m"
    mercury__pprint__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[17]);
#line 432 "pprint.m"
    mercury__pprint__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1003 "pprint.m"
    mercury__pprint__V_19_19 = (mercury__pprint__Depth_4 - (MR_Integer) 1);
#line 664 "pprint.m"
    {
#line 664 "pprint.m"
      mercury__pprint__V_18_18 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_for_T2_22, mercury__pprint__V_19_19, (MR_Integer) 1000, mercury__pprint__Value_6);
    }
#line 1003 "pprint.m"
    {
#line 1003 "pprint.m"
      mercury__pprint__V_16_16 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_23, mercury__pprint__TypeClassInfo_for_doc_23, ((MR_Box) (mercury__pprint__V_17_17)), ((MR_Box) (mercury__pprint__V_18_18)));
    }
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__map_pair_to_doc_2_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 7704 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_35_35  = Max;
#line 141 "int.opt"
}
#line 7711 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_23, (MR_Integer) 0)), (MR_Integer) 5)));
#line 7713 "pprint.c"
    {
#line 7715 "pprint.c"
      mercury__pprint__conv1_V_33_33 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_23), ((MR_Box) (mercury__pprint__V_35_35)), ((MR_Box) (mercury__pprint__V_16_16)));
    }
#line 7718 "pprint.c"
    mercury__pprint__V_33_33 = ((MR_Word) mercury__pprint__conv1_V_33_33);
#line 429 "pprint.m"
    {
#line 429 "pprint.m"
      mercury__pprint__V_14_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "pprint.m"
      MR_hl_field(MR_mktag(2), mercury__pprint__V_14_14, 0) = ((MR_Box) ((MR_Integer) 2));
#line 429 "pprint.m"
      MR_hl_field(MR_mktag(2), mercury__pprint__V_14_14, 1) = ((MR_Box) (mercury__pprint__V_33_33));
#line 429 "pprint.m"
    }
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__map_pair_to_doc_2_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 7751 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_40_40  = Max;
#line 141 "int.opt"
}
#line 7758 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_23, (MR_Integer) 0)), (MR_Integer) 5)));
#line 7760 "pprint.c"
    {
#line 7762 "pprint.c"
      mercury__pprint__conv3_V_38_38 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_23), ((MR_Box) (mercury__pprint__V_40_40)), ((MR_Box) (mercury__pprint__V_14_14)));
    }
#line 7765 "pprint.c"
    mercury__pprint__V_38_38 = ((MR_Word) mercury__pprint__conv3_V_38_38);
#line 433 "pprint.m"
    {
#line 433 "pprint.m"
      mercury__pprint__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "pprint.m"
      MR_hl_field(MR_mktag(3), mercury__pprint__V_13_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 433 "pprint.m"
      MR_hl_field(MR_mktag(3), mercury__pprint__V_13_13, 1) = ((MR_Box) (mercury__pprint__V_38_38));
#line 433 "pprint.m"
    }
#line 1002 "pprint.m"
    {
#line 1002 "pprint.m"
      mercury__pprint__V_10_10 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_23, mercury__pprint__TypeClassInfo_for_doc_23, ((MR_Box) (mercury__pprint__V_11_11)), ((MR_Box) (mercury__pprint__V_13_13)));
    }
#line 1002 "pprint.m"
    {
#line 1002 "pprint.m"
      return mercury__pprint__HeadVar__3_3 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_23, mercury__pprint__TypeClassInfo_for_doc_23, ((MR_Box) (mercury__pprint__V_7_7)), ((MR_Box) (mercury__pprint__V_10_10)));
    }
#line 1001 "pprint.m"
    return mercury__pprint__HeadVar__3_3;
#line 1001 "pprint.m"
  }
#line 999 "pprint.m"
}

#line 987 "pprint.m"
static MR_Word MR_CALL 
mercury__pprint__map_to_doc_2_f_0(
#line 987 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T1_16,
#line 987 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T2_17,
#line 987 "pprint.m"
  MR_Integer mercury__pprint__Depth_4,
#line 987 "pprint.m"
  MR_Word mercury__pprint__X_5)
#line 987 "pprint.m"
{
#line 989 "pprint.m"
  {
#line 989 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 989 "pprint.m"
    MR_Word mercury__pprint__Doc_6;
#line 989 "pprint.m"
    MR_Word mercury__pprint__TypeCtorInfo_20_20 = (MR_Word) &mercury__pprint__pprint__type_ctor_info_map_pair_2;
#line 989 "pprint.m"
    MR_Word mercury__pprint__TypeInfo_21_21;
#line 989 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_24;
#line 989 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_25;
#line 989 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_38;
#line 989 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_39;
#line 989 "pprint.m"
    MR_Word mercury__pprint__KVs_7;
#line 989 "pprint.m"
    MR_Word mercury__pprint__V_9_9;
#line 989 "pprint.m"
    MR_Word mercury__pprint__V_10_10;
#line 989 "pprint.m"
    MR_Word mercury__pprint__V_12_12;
#line 989 "pprint.m"
    MR_Word mercury__pprint__V_13_13;
#line 989 "pprint.m"
    MR_Integer mercury__pprint__V_14_14;
#line 989 "pprint.m"
    MR_Word mercury__pprint__V_5_32;
#line 989 "pprint.m"
    MR_Word mercury__pprint__V_42_42;
#line 989 "pprint.m"
    MR_Word mercury__pprint__V_43_43;
#line 989 "pprint.m"
    MR_Integer mercury__pprint__V_45_45;
#line 989 "pprint.m"
    MR_Integer mercury__pprint__V_48_48;
#line 989 "pprint.m"
    MR_Word mercury__pprint__V_53_53;
#line 989 "pprint.m"
    MR_Integer mercury__pprint__V_55_55;
#line 7851 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 7853 "pprint.c"
    MR_Box mercury__pprint__conv1_V_42_42;
#line 7855 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 7857 "pprint.c"
    MR_Box mercury__pprint__conv3_V_43_43;
#line 7859 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_4)(MR_Box, MR_Box, MR_Box);
#line 7861 "pprint.c"
    MR_Box mercury__pprint__conv5_V_53_53;

#line 7864 "pprint.c"
    {
#line 7866 "pprint.c"
      mercury__pprint__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7868 "pprint.c"
      MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_21_21, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_20_20));
#line 7870 "pprint.c"
      MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_21_21, 1) = ((MR_Box) (mercury__pprint__TypeInfo_for_T1_16));
#line 7872 "pprint.c"
      MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_21_21, 2) = ((MR_Box) (mercury__pprint__TypeInfo_for_T2_17));
#line 7874 "pprint.c"
    }
#line 85 "tree234.opt"
    mercury__pprint__V_5_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__pprint__TypeInfo_for_T1_16, mercury__pprint__TypeInfo_for_T2_17, mercury__pprint__X_5, mercury__pprint__V_5_32, &mercury__pprint__V_9_9);
    }
#line 990 "pprint.m"
    {
#line 990 "pprint.m"
      mercury__pprint__KVs_7 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_2_f_in__list_0(mercury__pprint__V_9_9);
    }
#line 7888 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_24 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 7890 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_25 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 991 "pprint.m"
    mercury__pprint__V_14_14 = (mercury__pprint__Depth_4 - (MR_Integer) 1);
#line 991 "pprint.m"
    {
#line 991 "pprint.m"
      mercury__pprint__V_13_13 = mercury__pprint__list_to_doc_2_f_0(mercury__pprint__TypeInfo_21_21, mercury__pprint__V_14_14, (MR_Word) mercury__pprint__KVs_7);
    }
#line 7899 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_38 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 7901 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_39 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 583 "pprint.m"
    {
#line 583 "pprint.m"
      mercury__pprint__V_12_12 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_38, mercury__pprint__TypeClassInfo_for_doc_39, mercury__pprint__TypeClassInfo_for_doc_24, ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), ((MR_Box) (mercury__pprint__V_13_13)));
    }
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__map_to_doc_2_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 7929 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_45_45  = Max;
#line 141 "int.opt"
}
#line 7936 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_25, (MR_Integer) 0)), (MR_Integer) 5)));
#line 7938 "pprint.c"
    {
#line 7940 "pprint.c"
      mercury__pprint__conv1_V_42_42 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_25), ((MR_Box) (mercury__pprint__V_45_45)), ((MR_Box) ((MR_String) "map")));
    }
#line 7943 "pprint.c"
    mercury__pprint__V_42_42 = ((MR_Word) mercury__pprint__conv1_V_42_42);
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__map_to_doc_2_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 7966 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_48_48  = Max;
#line 141 "int.opt"
}
#line 7973 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 7975 "pprint.c"
    {
#line 7977 "pprint.c"
      mercury__pprint__conv3_V_43_43 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_24), ((MR_Box) (mercury__pprint__V_48_48)), ((MR_Box) (mercury__pprint__V_12_12)));
    }
#line 7980 "pprint.c"
    mercury__pprint__V_43_43 = ((MR_Word) mercury__pprint__conv3_V_43_43);
#line 428 "pprint.m"
    {
#line 428 "pprint.m"
      mercury__pprint__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__V_10_10, 0) = ((MR_Box) (mercury__pprint__V_42_42));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__V_10_10, 1) = ((MR_Box) (mercury__pprint__V_43_43));
#line 428 "pprint.m"
    }
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__map_to_doc_2_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 8013 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_55_55  = Max;
#line 141 "int.opt"
}
#line 8020 "pprint.c"
    mercury__pprint__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8022 "pprint.c"
    {
#line 8024 "pprint.c"
      mercury__pprint__conv5_V_53_53 = mercury__pprint__func_4(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_24), ((MR_Box) (mercury__pprint__V_55_55)), ((MR_Box) (mercury__pprint__V_10_10)));
    }
#line 8027 "pprint.c"
    mercury__pprint__V_53_53 = ((MR_Word) mercury__pprint__conv5_V_53_53);
#line 433 "pprint.m"
    {
#line 433 "pprint.m"
      mercury__pprint__Doc_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "pprint.m"
      MR_hl_field(MR_mktag(3), mercury__pprint__Doc_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 433 "pprint.m"
      MR_hl_field(MR_mktag(3), mercury__pprint__Doc_6, 1) = ((MR_Box) (mercury__pprint__V_53_53));
#line 433 "pprint.m"
    }
#line 989 "pprint.m"
    return mercury__pprint__Doc_6;
#line 989 "pprint.m"
  }
#line 987 "pprint.m"
}

#line 979 "pprint.m"
static MR_Word MR_CALL 
mercury__pprint__tuple_to_doc_2_f_0(
#line 979 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T_17,
#line 979 "pprint.m"
  MR_Integer mercury__pprint__Depth_4,
#line 979 "pprint.m"
  MR_Box mercury__pprint__Tuple_5)
#line 979 "pprint.m"
{
#line 981 "pprint.m"
  {
#line 981 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 981 "pprint.m"
    MR_Word mercury__pprint__Doc_6;
#line 981 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_18;
#line 981 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_28;
#line 981 "pprint.m"
    MR_Word mercury__pprint__UnivArgs_9;
#line 981 "pprint.m"
    MR_Word mercury__pprint__V_11_11;
#line 981 "pprint.m"
    MR_Word mercury__pprint__V_12_12;
#line 981 "pprint.m"
    MR_Word mercury__pprint__V_14_14;
#line 981 "pprint.m"
    MR_Integer mercury__pprint__V_15_15;
#line 981 "pprint.m"
    MR_Word mercury__pprint__V_21_21;
#line 981 "pprint.m"
    MR_Integer mercury__pprint__V_23_23;
#line 981 "pprint.m"
    MR_Word mercury__pprint__V_30_30;
#line 981 "pprint.m"
    MR_Integer mercury__pprint__V_32_32;
#line 982 "pprint.m"
    MR_String mercury__pprint___Name_7;
#line 982 "pprint.m"
    MR_Integer mercury__pprint___Arity_8;
#line 8089 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 8091 "pprint.c"
    MR_Box mercury__pprint__conv1_V_21_21;
#line 8093 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 8095 "pprint.c"
    MR_Box mercury__pprint__conv3_V_30_30;

#line 982 "pprint.m"
    {
#line 982 "pprint.m"
      mercury__deconstruct__deconstruct_5_p_1(mercury__pprint__TypeInfo_for_T_17, mercury__pprint__Tuple_5, (MR_Integer) 1, &mercury__pprint___Name_7, &mercury__pprint___Arity_8, &mercury__pprint__UnivArgs_9);
    }
#line 8103 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_18 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 983 "pprint.m"
    mercury__pprint__V_15_15 = (mercury__pprint__Depth_4 - (MR_Integer) 1);
#line 983 "pprint.m"
    {
#line 983 "pprint.m"
      mercury__pprint__V_14_14 = mercury__pprint__packed_cs_univ_args_2_f_0(mercury__pprint__V_15_15, mercury__pprint__UnivArgs_9);
    }
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__tuple_to_doc_2_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 8133 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_23_23  = Max;
#line 141 "int.opt"
}
#line 8140 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8142 "pprint.c"
    {
#line 8144 "pprint.c"
      mercury__pprint__conv1_V_21_21 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_18), ((MR_Box) (mercury__pprint__V_23_23)), ((MR_Box) (mercury__pprint__V_14_14)));
    }
#line 8147 "pprint.c"
    mercury__pprint__V_21_21 = ((MR_Word) mercury__pprint__conv1_V_21_21);
#line 429 "pprint.m"
    {
#line 429 "pprint.m"
      mercury__pprint__V_12_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "pprint.m"
      MR_hl_field(MR_mktag(2), mercury__pprint__V_12_12, 0) = ((MR_Box) ((MR_Integer) 1));
#line 429 "pprint.m"
      MR_hl_field(MR_mktag(2), mercury__pprint__V_12_12, 1) = ((MR_Box) (mercury__pprint__V_21_21));
#line 429 "pprint.m"
    }
#line 8159 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_28 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 585 "pprint.m"
    {
#line 585 "pprint.m"
      mercury__pprint__V_11_11 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_28, mercury__pprint__TypeClassInfo_for_doc_28, mercury__pprint__TypeClassInfo_for_doc_18, ((MR_Box) ((MR_String) "{")), ((MR_Box) ((MR_String) "}")), ((MR_Box) (mercury__pprint__V_12_12)));
    }
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__tuple_to_doc_2_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 8187 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_32_32  = Max;
#line 141 "int.opt"
}
#line 8194 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8196 "pprint.c"
    {
#line 8198 "pprint.c"
      mercury__pprint__conv3_V_30_30 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_18), ((MR_Box) (mercury__pprint__V_32_32)), ((MR_Box) (mercury__pprint__V_11_11)));
    }
#line 8201 "pprint.c"
    mercury__pprint__V_30_30 = ((MR_Word) mercury__pprint__conv3_V_30_30);
#line 433 "pprint.m"
    {
#line 433 "pprint.m"
      mercury__pprint__Doc_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "pprint.m"
      MR_hl_field(MR_mktag(3), mercury__pprint__Doc_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 433 "pprint.m"
      MR_hl_field(MR_mktag(3), mercury__pprint__Doc_6, 1) = ((MR_Box) (mercury__pprint__V_30_30));
#line 433 "pprint.m"
    }
#line 981 "pprint.m"
    return mercury__pprint__Doc_6;
#line 981 "pprint.m"
  }
#line 979 "pprint.m"
}

#line 968 "pprint.m"
static MR_Word MR_CALL 
mercury__pprint__version_array_to_doc_2_f_0(
#line 968 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T_13,
#line 968 "pprint.m"
  MR_Integer mercury__pprint__Depth_4,
#line 968 "pprint.m"
  MR_Box mercury__pprint__A_5)
#line 968 "pprint.m"
{
#line 970 "pprint.m"
  {
#line 970 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 970 "pprint.m"
    MR_Word mercury__pprint__HeadVar__3_3;
#line 970 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_14 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 970 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_15 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 970 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_41;
#line 970 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_42;
#line 970 "pprint.m"
    MR_Word mercury__pprint__V_6_6;
#line 970 "pprint.m"
    MR_Word mercury__pprint__V_8_8;
#line 970 "pprint.m"
    MR_Word mercury__pprint__V_9_9;
#line 970 "pprint.m"
    MR_Integer mercury__pprint__V_10_10 = (mercury__pprint__Depth_4 - (MR_Integer) 1);
#line 970 "pprint.m"
    MR_Word mercury__pprint__V_12_12;
#line 970 "pprint.m"
    MR_Word mercury__pprint__V_5_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 970 "pprint.m"
    MR_Integer mercury__pprint__V_8_32;
#line 970 "pprint.m"
    MR_Integer mercury__pprint__V_4_36;
#line 970 "pprint.m"
    MR_Word mercury__pprint__V_45_45;
#line 970 "pprint.m"
    MR_Word mercury__pprint__V_46_46;
#line 970 "pprint.m"
    MR_Integer mercury__pprint__V_48_48;
#line 970 "pprint.m"
    MR_Integer mercury__pprint__V_51_51;
#line 970 "pprint.m"
    MR_Word mercury__pprint__V_56_56;
#line 970 "pprint.m"
    MR_Integer mercury__pprint__V_58_58;
#line 162 "version_array.opt"
    MR_Word mercury__pprint__TypeInfo_for_T_60;
#line 8275 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 8277 "pprint.c"
    MR_Box mercury__pprint__conv1_V_45_45;
#line 8279 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 8281 "pprint.c"
    MR_Box mercury__pprint__conv3_V_46_46;
#line 8283 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_4)(MR_Box, MR_Box, MR_Box);
#line 8285 "pprint.c"
    MR_Box mercury__pprint__conv5_V_56_56;

#line 162 "version_array.opt"
{
#define MR_PROC_LABEL mercury__pprint__version_array_to_doc_2_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__pprint__A_5 , VA);
		{
#line 162 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 8301 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_4_36  = N;
#line 162 "version_array.opt"
}
#line 166 "version_array.opt"
    mercury__pprint__V_8_32 = (mercury__pprint__V_4_36 - (MR_Integer) 1);
#line 196 "version_array.opt"
    {
#line 196 "version_array.opt"
      mercury__pprint__V_12_12 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(mercury__pprint__TypeInfo_for_T_13, mercury__pprint__A_5, mercury__pprint__V_5_21, mercury__pprint__V_8_32);
    }
#line 972 "pprint.m"
    {
#line 972 "pprint.m"
      mercury__pprint__V_9_9 = mercury__pprint__list_to_doc_2_f_0(mercury__pprint__TypeInfo_for_T_13, mercury__pprint__V_10_10, mercury__pprint__V_12_12);
    }
#line 8320 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_41 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 8322 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_42 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 583 "pprint.m"
    {
#line 583 "pprint.m"
      mercury__pprint__V_8_8 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_41, mercury__pprint__TypeClassInfo_for_doc_42, mercury__pprint__TypeClassInfo_for_doc_14, ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), ((MR_Box) (mercury__pprint__V_9_9)));
    }
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__version_array_to_doc_2_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 8350 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_48_48  = Max;
#line 141 "int.opt"
}
#line 8357 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_15, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8359 "pprint.c"
    {
#line 8361 "pprint.c"
      mercury__pprint__conv1_V_45_45 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_15), ((MR_Box) (mercury__pprint__V_48_48)), ((MR_Box) ((MR_String) "version_array")));
    }
#line 8364 "pprint.c"
    mercury__pprint__V_45_45 = ((MR_Word) mercury__pprint__conv1_V_45_45);
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__version_array_to_doc_2_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 8387 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_51_51  = Max;
#line 141 "int.opt"
}
#line 8394 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8396 "pprint.c"
    {
#line 8398 "pprint.c"
      mercury__pprint__conv3_V_46_46 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_14), ((MR_Box) (mercury__pprint__V_51_51)), ((MR_Box) (mercury__pprint__V_8_8)));
    }
#line 8401 "pprint.c"
    mercury__pprint__V_46_46 = ((MR_Word) mercury__pprint__conv3_V_46_46);
#line 428 "pprint.m"
    {
#line 428 "pprint.m"
      mercury__pprint__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__V_6_6, 0) = ((MR_Box) (mercury__pprint__V_45_45));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__V_6_6, 1) = ((MR_Box) (mercury__pprint__V_46_46));
#line 428 "pprint.m"
    }
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__version_array_to_doc_2_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 8434 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_58_58  = Max;
#line 141 "int.opt"
}
#line 8441 "pprint.c"
    mercury__pprint__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8443 "pprint.c"
    {
#line 8445 "pprint.c"
      mercury__pprint__conv5_V_56_56 = mercury__pprint__func_4(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_14), ((MR_Box) (mercury__pprint__V_58_58)), ((MR_Box) (mercury__pprint__V_6_6)));
    }
#line 8448 "pprint.c"
    mercury__pprint__V_56_56 = ((MR_Word) mercury__pprint__conv5_V_56_56);
#line 433 "pprint.m"
    {
#line 433 "pprint.m"
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "pprint.m"
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 433 "pprint.m"
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__V_56_56));
#line 433 "pprint.m"
    }
#line 970 "pprint.m"
    return mercury__pprint__HeadVar__3_3;
#line 970 "pprint.m"
  }
#line 968 "pprint.m"
}

#line 958 "pprint.m"
static MR_Word MR_CALL 
mercury__pprint__array_to_doc_2_f_0(
#line 958 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T_13,
#line 958 "pprint.m"
  MR_Integer mercury__pprint__Depth_4,
#line 958 "pprint.m"
  MR_ArrayPtr mercury__pprint__A_5)
#line 958 "pprint.m"
{
#line 960 "pprint.m"
  {
#line 960 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 960 "pprint.m"
    MR_Word mercury__pprint__HeadVar__3_3;
#line 960 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_14 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 960 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_15 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 960 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_28;
#line 960 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_29;
#line 960 "pprint.m"
    MR_Word mercury__pprint__V_6_6;
#line 960 "pprint.m"
    MR_Word mercury__pprint__V_8_8;
#line 960 "pprint.m"
    MR_Word mercury__pprint__V_9_9;
#line 960 "pprint.m"
    MR_Integer mercury__pprint__V_10_10 = (mercury__pprint__Depth_4 - (MR_Integer) 1);
#line 960 "pprint.m"
    MR_Word mercury__pprint__V_12_12;
#line 960 "pprint.m"
    MR_Integer mercury__pprint__Low_5_20;
#line 960 "pprint.m"
    MR_Integer mercury__pprint__High_6_21;
#line 960 "pprint.m"
    MR_Word mercury__pprint__V_32_32;
#line 960 "pprint.m"
    MR_Word mercury__pprint__V_33_33;
#line 960 "pprint.m"
    MR_Integer mercury__pprint__V_35_35;
#line 960 "pprint.m"
    MR_Integer mercury__pprint__V_38_38;
#line 960 "pprint.m"
    MR_Word mercury__pprint__V_43_43;
#line 960 "pprint.m"
    MR_Integer mercury__pprint__V_45_45;
#line 245 "array.opt"
    MR_Word mercury__pprint__TypeInfo_for_T_47;
#line 253 "array.opt"
    MR_Word mercury__pprint__TypeInfo_for_T_48;
#line 8522 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 8524 "pprint.c"
    MR_Box mercury__pprint__conv1_V_32_32;
#line 8526 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 8528 "pprint.c"
    MR_Box mercury__pprint__conv3_V_33_33;
#line 8530 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_4)(MR_Box, MR_Box, MR_Box);
#line 8532 "pprint.c"
    MR_Box mercury__pprint__conv5_V_43_43;

#line 245 "array.opt"
{
#define MR_PROC_LABEL mercury__pprint__array_to_doc_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__pprint__A_5 , Array);
		{
#line 245 "array.opt"

    /* Array not used */
    Min = 0;

#line 8549 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__Low_5_20  = Min;
#line 245 "array.opt"
}
#line 253 "array.opt"
{
#define MR_PROC_LABEL mercury__pprint__array_to_doc_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__pprint__A_5 , Array);
		{
#line 253 "array.opt"

    Max = Array->size - 1;

#line 8569 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__High_6_21  = Max;
#line 253 "array.opt"
}
#line 334 "array.opt"
    {
#line 334 "array.opt"
      mercury__array__fetch_items_4_p_0(mercury__pprint__TypeInfo_for_T_13, mercury__pprint__A_5, mercury__pprint__Low_5_20, mercury__pprint__High_6_21, &mercury__pprint__V_12_12);
    }
#line 961 "pprint.m"
    {
#line 961 "pprint.m"
      mercury__pprint__V_9_9 = mercury__pprint__list_to_doc_2_f_0(mercury__pprint__TypeInfo_for_T_13, mercury__pprint__V_10_10, mercury__pprint__V_12_12);
    }
#line 8586 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_28 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 8588 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_29 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 583 "pprint.m"
    {
#line 583 "pprint.m"
      mercury__pprint__V_8_8 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_28, mercury__pprint__TypeClassInfo_for_doc_29, mercury__pprint__TypeClassInfo_for_doc_14, ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), ((MR_Box) (mercury__pprint__V_9_9)));
    }
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__array_to_doc_2_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 8616 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_35_35  = Max;
#line 141 "int.opt"
}
#line 8623 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_15, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8625 "pprint.c"
    {
#line 8627 "pprint.c"
      mercury__pprint__conv1_V_32_32 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_15), ((MR_Box) (mercury__pprint__V_35_35)), ((MR_Box) ((MR_String) "array")));
    }
#line 8630 "pprint.c"
    mercury__pprint__V_32_32 = ((MR_Word) mercury__pprint__conv1_V_32_32);
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__array_to_doc_2_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 8653 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_38_38  = Max;
#line 141 "int.opt"
}
#line 8660 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8662 "pprint.c"
    {
#line 8664 "pprint.c"
      mercury__pprint__conv3_V_33_33 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_14), ((MR_Box) (mercury__pprint__V_38_38)), ((MR_Box) (mercury__pprint__V_8_8)));
    }
#line 8667 "pprint.c"
    mercury__pprint__V_33_33 = ((MR_Word) mercury__pprint__conv3_V_33_33);
#line 428 "pprint.m"
    {
#line 428 "pprint.m"
      mercury__pprint__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__V_6_6, 0) = ((MR_Box) (mercury__pprint__V_32_32));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__V_6_6, 1) = ((MR_Box) (mercury__pprint__V_33_33));
#line 428 "pprint.m"
    }
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__array_to_doc_2_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 8700 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_45_45  = Max;
#line 141 "int.opt"
}
#line 8707 "pprint.c"
    mercury__pprint__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8709 "pprint.c"
    {
#line 8711 "pprint.c"
      mercury__pprint__conv5_V_43_43 = mercury__pprint__func_4(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_14), ((MR_Box) (mercury__pprint__V_45_45)), ((MR_Box) (mercury__pprint__V_6_6)));
    }
#line 8714 "pprint.c"
    mercury__pprint__V_43_43 = ((MR_Word) mercury__pprint__conv5_V_43_43);
#line 433 "pprint.m"
    {
#line 433 "pprint.m"
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "pprint.m"
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 433 "pprint.m"
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__V_43_43));
#line 433 "pprint.m"
    }
#line 960 "pprint.m"
    return mercury__pprint__HeadVar__3_3;
#line 960 "pprint.m"
  }
#line 958 "pprint.m"
}

#line 948 "pprint.m"
static MR_Word MR_CALL 
mercury__pprint__list_to_doc_2_f_0(
#line 948 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T_11,
#line 948 "pprint.m"
  MR_Integer mercury__pprint__Depth_4,
#line 948 "pprint.m"
  MR_Word mercury__pprint__Xs_5)
#line 948 "pprint.m"
{
#line 950 "pprint.m"
  {
#line 950 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 950 "pprint.m"
    MR_Word mercury__pprint__HeadVar__3_3;
#line 950 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_12 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 950 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_17 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 950 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_24;
#line 950 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_34;
#line 950 "pprint.m"
    MR_Word mercury__pprint__V_6_6;
#line 950 "pprint.m"
    MR_Word mercury__pprint__V_8_8;
#line 950 "pprint.m"
    MR_Integer mercury__pprint__V_9_9 = (mercury__pprint__Depth_4 - (MR_Integer) 1);
#line 950 "pprint.m"
    MR_Word mercury__pprint__V_15_15;
#line 950 "pprint.m"
    MR_Word mercury__pprint__V_27_27;
#line 950 "pprint.m"
    MR_Integer mercury__pprint__V_29_29;
#line 8770 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 8772 "pprint.c"
    MR_Box mercury__pprint__conv1_V_27_27;

#line 625 "pprint.m"
    {
#line 625 "pprint.m"
      mercury__pprint__V_15_15 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_57_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(mercury__pprint__TypeInfo_for_T_11, mercury__pprint__V_9_9, mercury__pprint__Xs_5);
    }
#line 8780 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_24 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 616 "pprint.m"
    {
#line 616 "pprint.m"
      mercury__pprint__V_8_8 = mercury__pprint__packed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_24, mercury__pprint__TypeClassInfo_for_doc_17, mercury__pprint__V_9_9, ((MR_Box) ((MR_String) ", ")), mercury__pprint__V_15_15);
    }
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__list_to_doc_2_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 8808 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_29_29  = Max;
#line 141 "int.opt"
}
#line 8815 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_12, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8817 "pprint.c"
    {
#line 8819 "pprint.c"
      mercury__pprint__conv1_V_27_27 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_12), ((MR_Box) (mercury__pprint__V_29_29)), ((MR_Box) (mercury__pprint__V_8_8)));
    }
#line 8822 "pprint.c"
    mercury__pprint__V_27_27 = ((MR_Word) mercury__pprint__conv1_V_27_27);
#line 429 "pprint.m"
    {
#line 429 "pprint.m"
      mercury__pprint__V_6_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "pprint.m"
      MR_hl_field(MR_mktag(2), mercury__pprint__V_6_6, 0) = ((MR_Box) ((MR_Integer) 1));
#line 429 "pprint.m"
      MR_hl_field(MR_mktag(2), mercury__pprint__V_6_6, 1) = ((MR_Box) (mercury__pprint__V_27_27));
#line 429 "pprint.m"
    }
#line 8834 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_34 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 584 "pprint.m"
    {
#line 584 "pprint.m"
      return mercury__pprint__HeadVar__3_3 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_34, mercury__pprint__TypeClassInfo_for_doc_34, mercury__pprint__TypeClassInfo_for_doc_12, ((MR_Box) ((MR_String) "[")), ((MR_Box) ((MR_String) "]")), ((MR_Box) (mercury__pprint__V_6_6)));
    }
#line 950 "pprint.m"
    return mercury__pprint__HeadVar__3_3;
#line 950 "pprint.m"
  }
#line 948 "pprint.m"
}

#line 940 "pprint.m"
static MR_Word MR_CALL 
mercury__pprint__sparse_bitset_to_doc_2_f_0(
#line 940 "pprint.m"
  MR_Word mercury__pprint__TypeClassInfo_for_enum_13,
#line 940 "pprint.m"
  MR_Integer mercury__pprint__Depth_4,
#line 940 "pprint.m"
  MR_Word mercury__pprint__A_5)
#line 940 "pprint.m"
{
#line 942 "pprint.m"
  {
#line 942 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 942 "pprint.m"
    MR_Word mercury__pprint__HeadVar__3_3;
#line 942 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_14 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 942 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_15 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 942 "pprint.m"
    MR_Word mercury__pprint__TypeInfo_17_17;
#line 942 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_60;
#line 942 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_61;
#line 942 "pprint.m"
    MR_Word mercury__pprint__V_6_6;
#line 942 "pprint.m"
    MR_Word mercury__pprint__V_8_8;
#line 942 "pprint.m"
    MR_Word mercury__pprint__V_9_9;
#line 942 "pprint.m"
    MR_Integer mercury__pprint__V_10_10;
#line 942 "pprint.m"
    MR_Word mercury__pprint__V_12_12;
#line 942 "pprint.m"
    MR_Word mercury__pprint__V_10_21;
#line 942 "pprint.m"
    MR_Word mercury__pprint__Set_6_40;
#line 942 "pprint.m"
    MR_Word mercury__pprint__V_64_64;
#line 942 "pprint.m"
    MR_Word mercury__pprint__V_65_65;
#line 942 "pprint.m"
    MR_Integer mercury__pprint__V_67_67;
#line 942 "pprint.m"
    MR_Integer mercury__pprint__V_70_70;
#line 942 "pprint.m"
    MR_Word mercury__pprint__V_75_75;
#line 942 "pprint.m"
    MR_Integer mercury__pprint__V_77_77;
#line 8901 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 8903 "pprint.c"
    MR_Box mercury__pprint__conv1_V_64_64;
#line 8905 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 8907 "pprint.c"
    MR_Box mercury__pprint__conv3_V_65_65;
#line 8909 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_4)(MR_Box, MR_Box, MR_Box);
#line 8911 "pprint.c"
    MR_Box mercury__pprint__conv5_V_75_75;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__pprint__sparse_bitset_to_doc_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__pprint__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 8929 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__TypeInfo_17_17  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 944 "pprint.m"
    mercury__pprint__V_10_10 = (mercury__pprint__Depth_4 - (MR_Integer) 1);
#line 164 "sparse_bitset.opt"
    mercury__pprint__V_10_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 276 "sparse_bitset.opt"
    mercury__pprint__Set_6_40 = (MR_Word) mercury__pprint__A_5;
#line 286 "sparse_bitset.opt"
    {
#line 286 "sparse_bitset.opt"
      mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(mercury__pprint__TypeClassInfo_for_enum_13, mercury__pprint__Set_6_40, mercury__pprint__V_10_21, &mercury__pprint__V_12_12);
    }
#line 944 "pprint.m"
    {
#line 944 "pprint.m"
      mercury__pprint__V_9_9 = mercury__pprint__list_to_doc_2_f_0(mercury__pprint__TypeInfo_17_17, mercury__pprint__V_10_10, mercury__pprint__V_12_12);
    }
#line 8952 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_60 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 8954 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_61 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 583 "pprint.m"
    {
#line 583 "pprint.m"
      mercury__pprint__V_8_8 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_60, mercury__pprint__TypeClassInfo_for_doc_61, mercury__pprint__TypeClassInfo_for_doc_14, ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), ((MR_Box) (mercury__pprint__V_9_9)));
    }
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__sparse_bitset_to_doc_2_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 8982 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_67_67  = Max;
#line 141 "int.opt"
}
#line 8989 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_15, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8991 "pprint.c"
    {
#line 8993 "pprint.c"
      mercury__pprint__conv1_V_64_64 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_15), ((MR_Box) (mercury__pprint__V_67_67)), ((MR_Box) ((MR_String) "sparse_bitset")));
    }
#line 8996 "pprint.c"
    mercury__pprint__V_64_64 = ((MR_Word) mercury__pprint__conv1_V_64_64);
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__sparse_bitset_to_doc_2_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 9019 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_70_70  = Max;
#line 141 "int.opt"
}
#line 9026 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9028 "pprint.c"
    {
#line 9030 "pprint.c"
      mercury__pprint__conv3_V_65_65 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_14), ((MR_Box) (mercury__pprint__V_70_70)), ((MR_Box) (mercury__pprint__V_8_8)));
    }
#line 9033 "pprint.c"
    mercury__pprint__V_65_65 = ((MR_Word) mercury__pprint__conv3_V_65_65);
#line 428 "pprint.m"
    {
#line 428 "pprint.m"
      mercury__pprint__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__V_6_6, 0) = ((MR_Box) (mercury__pprint__V_64_64));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__V_6_6, 1) = ((MR_Box) (mercury__pprint__V_65_65));
#line 428 "pprint.m"
    }
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__sparse_bitset_to_doc_2_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 9066 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_77_77  = Max;
#line 141 "int.opt"
}
#line 9073 "pprint.c"
    mercury__pprint__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9075 "pprint.c"
    {
#line 9077 "pprint.c"
      mercury__pprint__conv5_V_75_75 = mercury__pprint__func_4(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_14), ((MR_Box) (mercury__pprint__V_77_77)), ((MR_Box) (mercury__pprint__V_6_6)));
    }
#line 9080 "pprint.c"
    mercury__pprint__V_75_75 = ((MR_Word) mercury__pprint__conv5_V_75_75);
#line 433 "pprint.m"
    {
#line 433 "pprint.m"
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "pprint.m"
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 433 "pprint.m"
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__V_75_75));
#line 433 "pprint.m"
    }
#line 942 "pprint.m"
    return mercury__pprint__HeadVar__3_3;
#line 942 "pprint.m"
  }
#line 940 "pprint.m"
}

#line 930 "pprint.m"
static MR_Word MR_CALL 
mercury__pprint__var_to_doc_2_f_0(
#line 930 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T_7,
#line 930 "pprint.m"
  MR_Integer mercury__pprint__Depth_4,
#line 930 "pprint.m"
  MR_Word mercury__pprint__V_5)
#line 930 "pprint.m"
{
#line 932 "pprint.m"
  {
#line 932 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 932 "pprint.m"
    MR_Word mercury__pprint__HeadVar__3_3;
#line 932 "pprint.m"
    MR_Word mercury__pprint__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 932 "pprint.m"
    MR_Word mercury__pprint__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 932 "pprint.m"
    MR_Word mercury__pprint__TypeInfo_10_10;
#line 932 "pprint.m"
    MR_Word mercury__pprint__BaseTypeClassInfo_for_enum_11 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 932 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_enum_12;
#line 932 "pprint.m"
    MR_Integer mercury__pprint__V_6_6;
#line 9128 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box);
#line 9130 "pprint.c"
    MR_Box mercury__pprint__conv1_V_6_6;

#line 9133 "pprint.c"
    {
#line 9135 "pprint.c"
      mercury__pprint__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9137 "pprint.c"
      MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_10_10, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_9_9));
#line 9139 "pprint.c"
      MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_10_10, 1) = ((MR_Box) (mercury__pprint__TypeInfo_for_T_7));
#line 9141 "pprint.c"
    }
#line 9143 "pprint.c"
    {
#line 9145 "pprint.c"
      mercury__pprint__TypeClassInfo_for_enum_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9147 "pprint.c"
      MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_enum_12, 0) = ((MR_Box) (mercury__pprint__BaseTypeClassInfo_for_enum_11));
#line 9149 "pprint.c"
      MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_enum_12, 1) = ((MR_Box) (mercury__pprint__TypeInfo_for_T_7));
#line 9151 "pprint.c"
      MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_enum_12, 2) = ((MR_Box) (mercury__pprint__TypeInfo_10_10));
#line 9153 "pprint.c"
    }
#line 9155 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_enum_12, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9157 "pprint.c"
    {
#line 9159 "pprint.c"
      mercury__pprint__conv1_V_6_6 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_enum_12), ((MR_Box) (mercury__pprint__V_5)));
    }
#line 9162 "pprint.c"
    mercury__pprint__V_6_6 = ((MR_Integer) mercury__pprint__conv1_V_6_6);
#line 664 "pprint.m"
    {
#line 664 "pprint.m"
      return mercury__pprint__HeadVar__3_3 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeCtorInfo_8_8, mercury__pprint__Depth_4, (MR_Integer) 1000, ((MR_Box) (mercury__pprint__V_6_6)));
    }
#line 932 "pprint.m"
    return mercury__pprint__HeadVar__3_3;
#line 932 "pprint.m"
  }
#line 930 "pprint.m"
}

#line 916 "pprint.m"
static MR_bool MR_CALL 
mercury__pprint__dynamic_cast_to_robdd_2_p_0(
#line 916 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T1_14,
#line 916 "pprint.m"
  MR_Word * mercury__pprint__TypeInfo_for_T_13,
#line 916 "pprint.m"
  MR_Box mercury__pprint__X_3,
#line 916 "pprint.m"
  MR_Word * mercury__pprint__R_4)
#line 916 "pprint.m"
{
#line 918 "pprint.m"
  {
#line 918 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 918 "pprint.m"
    MR_Word mercury__pprint__TypeCtorInfo_15_15;
#line 918 "pprint.m"
    MR_Word mercury__pprint__TypeInfo_16_16;
#line 918 "pprint.m"
    MR_Word mercury__pprint__TypeInfo_19_19;
#line 918 "pprint.m"
    MR_Word mercury__pprint__ArgTypeDesc_5;
#line 918 "pprint.m"
    MR_Word mercury__pprint__V_8_8;
#line 918 "pprint.m"
    MR_Word mercury__pprint__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 918 "pprint.m"
    MR_Word mercury__pprint__V_10_10;
#line 918 "pprint.m"
    MR_Word mercury__pprint__V_18_18;
#line 58 "type_desc.opt"
    MR_Box mercury__pprint__V_17_17;
#line 78 "type_desc.opt"
    MR_Word mercury__pprint___TypeCtor_5_22;
#line 74 "type_desc.opt"
    MR_Box mercury__pprint__V_11_11;
#line 107 "builtin.opt"
    MR_Box mercury__pprint__conv0_R_4;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_robdd_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__pprint__TypeInfo_for_T1_14 ;
		{
#line 58 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 9244 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_10_10  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 78 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_robdd_2_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__pprint__V_10_10 ;
		{
#line 78 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 9274 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint___TypeCtor_5_22  = TypeCtorDesc;
	 mercury__pprint__V_8_8  = ArgTypes;
#line 78 "type_desc.opt"
}
#line 920 "pprint.m"
    mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__V_8_8)) == (MR_mktag((MR_Integer) 1)));
#line 920 "pprint.m"
    if (mercury__pprint__succeeded)
#line 920 "pprint.m"
      {
#line 920 "pprint.m"
        mercury__pprint__ArgTypeDesc_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__V_8_8, (MR_Integer) 0)));
#line 920 "pprint.m"
        mercury__pprint__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__V_8_8, (MR_Integer) 1)));
#line 9292 "pprint.c"
        mercury__pprint__TypeInfo_19_19 = (MR_Word) &mercury__pprint_scalar_common_1[8];
#line 920 "pprint.m"
        {
#line 920 "pprint.m"
          mercury__pprint__succeeded = mercury__builtin__unify_2_p_0(mercury__pprint__TypeInfo_19_19, ((MR_Box) (mercury__pprint__V_9_9)), ((MR_Box) (mercury__pprint__V_18_18)));
        }
#line 918 "pprint.m"
        if (mercury__pprint__succeeded)
#line 918 "pprint.m"
          {
#line 74 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_robdd_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pprint__ArgTypeDesc_5 ;
		{
#line 74 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 9316 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__pprint__TypeInfo_for_T_13  = TypeInfo_for_T;
#line 74 "type_desc.opt"
}
#line 9323 "pprint.c"
            mercury__pprint__TypeCtorInfo_15_15 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_robdd_1;
#line 9325 "pprint.c"
            {
#line 9327 "pprint.c"
              mercury__pprint__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9329 "pprint.c"
              MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_16_16, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_15_15));
#line 9331 "pprint.c"
              MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_16_16, 1) = ((MR_Box) (*mercury__pprint__TypeInfo_for_T_13));
#line 9333 "pprint.c"
            }
#line 107 "builtin.opt"
            {
#line 107 "builtin.opt"
              mercury__pprint__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pprint__TypeInfo_for_T1_14, mercury__pprint__TypeInfo_16_16, mercury__pprint__X_3, &mercury__pprint__conv0_R_4);
            }
#line 107 "builtin.opt"
            if (mercury__pprint__succeeded)
#line 107 "builtin.opt"
              {
#line 107 "builtin.opt"
                *mercury__pprint__R_4 = ((MR_Word) mercury__pprint__conv0_R_4);
#line 107 "builtin.opt"
                mercury__pprint__succeeded = MR_TRUE;
#line 107 "builtin.opt"
              }
#line 918 "pprint.m"
          }
#line 920 "pprint.m"
      }
#line 918 "pprint.m"
    return mercury__pprint__succeeded;
#line 918 "pprint.m"
  }
#line 916 "pprint.m"
}

#line 890 "pprint.m"
static MR_bool MR_CALL 
mercury__pprint__dynamic_cast_to_map_pair_2_p_0(
#line 890 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T1_20,
#line 890 "pprint.m"
  MR_Word * mercury__pprint__TypeInfo_for_T_18,
#line 890 "pprint.m"
  MR_Word * mercury__pprint__TypeInfo_for_T_19,
#line 890 "pprint.m"
  MR_Box mercury__pprint__X_3,
#line 890 "pprint.m"
  MR_Word * mercury__pprint__MP_4)
#line 890 "pprint.m"
{
#line 893 "pprint.m"
  {
#line 893 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 893 "pprint.m"
    MR_Word mercury__pprint__TypeCtorInfo_21_21;
#line 893 "pprint.m"
    MR_Word mercury__pprint__TypeInfo_22_22;
#line 893 "pprint.m"
    MR_Word mercury__pprint__TypeInfo_25_25;
#line 893 "pprint.m"
    MR_Word mercury__pprint__KeyTypeDesc_5;
#line 893 "pprint.m"
    MR_Word mercury__pprint__ValueTypeDesc_6;
#line 893 "pprint.m"
    MR_Word mercury__pprint__V_11_11;
#line 893 "pprint.m"
    MR_Word mercury__pprint__V_12_12;
#line 893 "pprint.m"
    MR_Word mercury__pprint__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 893 "pprint.m"
    MR_Word mercury__pprint__V_14_14;
#line 893 "pprint.m"
    MR_Word mercury__pprint__V_24_24;
#line 58 "type_desc.opt"
    MR_Box mercury__pprint__V_23_23;
#line 78 "type_desc.opt"
    MR_Word mercury__pprint___TypeCtor_5_28;
#line 74 "type_desc.opt"
    MR_Box mercury__pprint__V_15_15;
#line 74 "type_desc.opt"
    MR_Box mercury__pprint__V_16_16;
#line 107 "builtin.opt"
    MR_Box mercury__pprint__conv0_MP_4;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_pair_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__pprint__TypeInfo_for_T1_20 ;
		{
#line 58 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 9437 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_14_14  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 78 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_pair_2_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__pprint__V_14_14 ;
		{
#line 78 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 9467 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint___TypeCtor_5_28  = TypeCtorDesc;
	 mercury__pprint__V_11_11  = ArgTypes;
#line 78 "type_desc.opt"
}
#line 895 "pprint.m"
    mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 895 "pprint.m"
    if (mercury__pprint__succeeded)
#line 895 "pprint.m"
      {
#line 895 "pprint.m"
        mercury__pprint__KeyTypeDesc_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__V_11_11, (MR_Integer) 0)));
#line 895 "pprint.m"
        mercury__pprint__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__V_11_11, (MR_Integer) 1)));
#line 895 "pprint.m"
        mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 895 "pprint.m"
        if (mercury__pprint__succeeded)
#line 895 "pprint.m"
          {
#line 895 "pprint.m"
            mercury__pprint__ValueTypeDesc_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__V_12_12, (MR_Integer) 0)));
#line 895 "pprint.m"
            mercury__pprint__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__V_12_12, (MR_Integer) 1)));
#line 9495 "pprint.c"
            mercury__pprint__TypeInfo_25_25 = (MR_Word) &mercury__pprint_scalar_common_1[8];
#line 895 "pprint.m"
            {
#line 895 "pprint.m"
              mercury__pprint__succeeded = mercury__builtin__unify_2_p_0(mercury__pprint__TypeInfo_25_25, ((MR_Box) (mercury__pprint__V_13_13)), ((MR_Box) (mercury__pprint__V_24_24)));
            }
#line 893 "pprint.m"
            if (mercury__pprint__succeeded)
#line 893 "pprint.m"
              {
#line 74 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_pair_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pprint__KeyTypeDesc_5 ;
		{
#line 74 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 9519 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__pprint__TypeInfo_for_T_18  = TypeInfo_for_T;
#line 74 "type_desc.opt"
}
#line 74 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_pair_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pprint__ValueTypeDesc_6 ;
		{
#line 74 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 9539 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__pprint__TypeInfo_for_T_19  = TypeInfo_for_T;
#line 74 "type_desc.opt"
}
#line 9546 "pprint.c"
                mercury__pprint__TypeCtorInfo_21_21 = (MR_Word) &mercury__pprint__pprint__type_ctor_info_map_pair_2;
#line 9548 "pprint.c"
                {
#line 9550 "pprint.c"
                  mercury__pprint__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9552 "pprint.c"
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_22_22, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_21_21));
#line 9554 "pprint.c"
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_22_22, 1) = ((MR_Box) (*mercury__pprint__TypeInfo_for_T_18));
#line 9556 "pprint.c"
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_22_22, 2) = ((MR_Box) (*mercury__pprint__TypeInfo_for_T_19));
#line 9558 "pprint.c"
                }
#line 107 "builtin.opt"
                {
#line 107 "builtin.opt"
                  mercury__pprint__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pprint__TypeInfo_for_T1_20, mercury__pprint__TypeInfo_22_22, mercury__pprint__X_3, &mercury__pprint__conv0_MP_4);
                }
#line 107 "builtin.opt"
                if (mercury__pprint__succeeded)
#line 107 "builtin.opt"
                  {
#line 107 "builtin.opt"
                    *mercury__pprint__MP_4 = ((MR_Word) mercury__pprint__conv0_MP_4);
#line 107 "builtin.opt"
                    mercury__pprint__succeeded = MR_TRUE;
#line 107 "builtin.opt"
                  }
#line 893 "pprint.m"
              }
#line 895 "pprint.m"
          }
#line 895 "pprint.m"
      }
#line 893 "pprint.m"
    return mercury__pprint__succeeded;
#line 893 "pprint.m"
  }
#line 890 "pprint.m"
}

#line 875 "pprint.m"
static MR_bool MR_CALL 
mercury__pprint__dynamic_cast_to_map_2_p_0(
#line 875 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T1_20,
#line 875 "pprint.m"
  MR_Word * mercury__pprint__TypeInfo_for_T_18,
#line 875 "pprint.m"
  MR_Word * mercury__pprint__TypeInfo_for_T_19,
#line 875 "pprint.m"
  MR_Box mercury__pprint__X_3,
#line 875 "pprint.m"
  MR_Word * mercury__pprint__M_4)
#line 875 "pprint.m"
{
#line 877 "pprint.m"
  {
#line 877 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 877 "pprint.m"
    MR_Word mercury__pprint__TypeCtorInfo_21_21;
#line 877 "pprint.m"
    MR_Word mercury__pprint__TypeInfo_22_22;
#line 877 "pprint.m"
    MR_Word mercury__pprint__TypeInfo_25_25;
#line 877 "pprint.m"
    MR_Word mercury__pprint__KeyTypeDesc_5;
#line 877 "pprint.m"
    MR_Word mercury__pprint__ValueTypeDesc_6;
#line 877 "pprint.m"
    MR_Word mercury__pprint__V_11_11;
#line 877 "pprint.m"
    MR_Word mercury__pprint__V_12_12;
#line 877 "pprint.m"
    MR_Word mercury__pprint__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 877 "pprint.m"
    MR_Word mercury__pprint__V_14_14;
#line 877 "pprint.m"
    MR_Word mercury__pprint__V_24_24;
#line 58 "type_desc.opt"
    MR_Box mercury__pprint__V_23_23;
#line 78 "type_desc.opt"
    MR_Word mercury__pprint___TypeCtor_5_28;
#line 74 "type_desc.opt"
    MR_Box mercury__pprint__V_15_15;
#line 74 "type_desc.opt"
    MR_Box mercury__pprint__V_16_16;
#line 107 "builtin.opt"
    MR_Box mercury__pprint__conv0_M_4;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__pprint__TypeInfo_for_T1_20 ;
		{
#line 58 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 9664 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_14_14  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 78 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_2_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__pprint__V_14_14 ;
		{
#line 78 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 9694 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint___TypeCtor_5_28  = TypeCtorDesc;
	 mercury__pprint__V_11_11  = ArgTypes;
#line 78 "type_desc.opt"
}
#line 879 "pprint.m"
    mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 879 "pprint.m"
    if (mercury__pprint__succeeded)
#line 879 "pprint.m"
      {
#line 879 "pprint.m"
        mercury__pprint__KeyTypeDesc_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__V_11_11, (MR_Integer) 0)));
#line 879 "pprint.m"
        mercury__pprint__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__V_11_11, (MR_Integer) 1)));
#line 879 "pprint.m"
        mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 879 "pprint.m"
        if (mercury__pprint__succeeded)
#line 879 "pprint.m"
          {
#line 879 "pprint.m"
            mercury__pprint__ValueTypeDesc_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__V_12_12, (MR_Integer) 0)));
#line 879 "pprint.m"
            mercury__pprint__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__V_12_12, (MR_Integer) 1)));
#line 9722 "pprint.c"
            mercury__pprint__TypeInfo_25_25 = (MR_Word) &mercury__pprint_scalar_common_1[8];
#line 879 "pprint.m"
            {
#line 879 "pprint.m"
              mercury__pprint__succeeded = mercury__builtin__unify_2_p_0(mercury__pprint__TypeInfo_25_25, ((MR_Box) (mercury__pprint__V_13_13)), ((MR_Box) (mercury__pprint__V_24_24)));
            }
#line 877 "pprint.m"
            if (mercury__pprint__succeeded)
#line 877 "pprint.m"
              {
#line 74 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pprint__KeyTypeDesc_5 ;
		{
#line 74 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 9746 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__pprint__TypeInfo_for_T_18  = TypeInfo_for_T;
#line 74 "type_desc.opt"
}
#line 74 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pprint__ValueTypeDesc_6 ;
		{
#line 74 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 9766 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__pprint__TypeInfo_for_T_19  = TypeInfo_for_T;
#line 74 "type_desc.opt"
}
#line 9773 "pprint.c"
                mercury__pprint__TypeCtorInfo_21_21 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 9775 "pprint.c"
                {
#line 9777 "pprint.c"
                  mercury__pprint__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9779 "pprint.c"
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_22_22, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_21_21));
#line 9781 "pprint.c"
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_22_22, 1) = ((MR_Box) (*mercury__pprint__TypeInfo_for_T_18));
#line 9783 "pprint.c"
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_22_22, 2) = ((MR_Box) (*mercury__pprint__TypeInfo_for_T_19));
#line 9785 "pprint.c"
                }
#line 107 "builtin.opt"
                {
#line 107 "builtin.opt"
                  mercury__pprint__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pprint__TypeInfo_for_T1_20, mercury__pprint__TypeInfo_22_22, mercury__pprint__X_3, &mercury__pprint__conv0_M_4);
                }
#line 107 "builtin.opt"
                if (mercury__pprint__succeeded)
#line 107 "builtin.opt"
                  {
#line 107 "builtin.opt"
                    *mercury__pprint__M_4 = ((MR_Word) mercury__pprint__conv0_M_4);
#line 107 "builtin.opt"
                    mercury__pprint__succeeded = MR_TRUE;
#line 107 "builtin.opt"
                  }
#line 877 "pprint.m"
              }
#line 879 "pprint.m"
          }
#line 879 "pprint.m"
      }
#line 877 "pprint.m"
    return mercury__pprint__succeeded;
#line 877 "pprint.m"
  }
#line 875 "pprint.m"
}

#line 846 "pprint.m"
static MR_bool MR_CALL 
mercury__pprint__dynamic_cast_to_version_array_2_p_0(
#line 846 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T1_14,
#line 846 "pprint.m"
  MR_Word * mercury__pprint__TypeInfo_for_T_13,
#line 846 "pprint.m"
  MR_Box mercury__pprint__X_3,
#line 846 "pprint.m"
  MR_Box * mercury__pprint__VA_4)
#line 846 "pprint.m"
{
#line 849 "pprint.m"
  {
#line 849 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 849 "pprint.m"
    MR_Word mercury__pprint__TypeCtorInfo_15_15;
#line 849 "pprint.m"
    MR_Word mercury__pprint__TypeInfo_16_16;
#line 849 "pprint.m"
    MR_Word mercury__pprint__TypeInfo_19_19;
#line 849 "pprint.m"
    MR_Word mercury__pprint__ArgTypeDesc_5;
#line 849 "pprint.m"
    MR_Word mercury__pprint__V_8_8;
#line 849 "pprint.m"
    MR_Word mercury__pprint__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 849 "pprint.m"
    MR_Word mercury__pprint__V_10_10;
#line 849 "pprint.m"
    MR_Word mercury__pprint__V_18_18;
#line 58 "type_desc.opt"
    MR_Box mercury__pprint__V_17_17;
#line 78 "type_desc.opt"
    MR_Word mercury__pprint___TypeCtor_5_22;
#line 74 "type_desc.opt"
    MR_Box mercury__pprint__V_11_11;
#line 107 "builtin.opt"
    MR_Box mercury__pprint__conv0_VA_4;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_version_array_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__pprint__TypeInfo_for_T1_14 ;
		{
#line 58 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 9883 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_10_10  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 78 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_version_array_2_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__pprint__V_10_10 ;
		{
#line 78 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 9913 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint___TypeCtor_5_22  = TypeCtorDesc;
	 mercury__pprint__V_8_8  = ArgTypes;
#line 78 "type_desc.opt"
}
#line 851 "pprint.m"
    mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__V_8_8)) == (MR_mktag((MR_Integer) 1)));
#line 851 "pprint.m"
    if (mercury__pprint__succeeded)
#line 851 "pprint.m"
      {
#line 851 "pprint.m"
        mercury__pprint__ArgTypeDesc_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__V_8_8, (MR_Integer) 0)));
#line 851 "pprint.m"
        mercury__pprint__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__V_8_8, (MR_Integer) 1)));
#line 9931 "pprint.c"
        mercury__pprint__TypeInfo_19_19 = (MR_Word) &mercury__pprint_scalar_common_1[8];
#line 851 "pprint.m"
        {
#line 851 "pprint.m"
          mercury__pprint__succeeded = mercury__builtin__unify_2_p_0(mercury__pprint__TypeInfo_19_19, ((MR_Box) (mercury__pprint__V_9_9)), ((MR_Box) (mercury__pprint__V_18_18)));
        }
#line 849 "pprint.m"
        if (mercury__pprint__succeeded)
#line 849 "pprint.m"
          {
#line 74 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_version_array_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pprint__ArgTypeDesc_5 ;
		{
#line 74 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 9955 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__pprint__TypeInfo_for_T_13  = TypeInfo_for_T;
#line 74 "type_desc.opt"
}
#line 9962 "pprint.c"
            mercury__pprint__TypeCtorInfo_15_15 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
#line 9964 "pprint.c"
            {
#line 9966 "pprint.c"
              mercury__pprint__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9968 "pprint.c"
              MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_16_16, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_15_15));
#line 9970 "pprint.c"
              MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_16_16, 1) = ((MR_Box) (*mercury__pprint__TypeInfo_for_T_13));
#line 9972 "pprint.c"
            }
#line 107 "builtin.opt"
            {
#line 107 "builtin.opt"
              mercury__pprint__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pprint__TypeInfo_for_T1_14, mercury__pprint__TypeInfo_16_16, mercury__pprint__X_3, &mercury__pprint__conv0_VA_4);
            }
#line 107 "builtin.opt"
            if (mercury__pprint__succeeded)
#line 107 "builtin.opt"
              {
#line 107 "builtin.opt"
                *mercury__pprint__VA_4 = ((MR_Box) mercury__pprint__conv0_VA_4);
#line 107 "builtin.opt"
                mercury__pprint__succeeded = MR_TRUE;
#line 107 "builtin.opt"
              }
#line 849 "pprint.m"
          }
#line 851 "pprint.m"
      }
#line 849 "pprint.m"
    return mercury__pprint__succeeded;
#line 849 "pprint.m"
  }
#line 846 "pprint.m"
}

#line 812 "pprint.m"
static MR_Word MR_CALL 
mercury__pprint__univ_to_doc_3_f_0(
#line 812 "pprint.m"
  MR_Integer mercury__pprint__Depth_5,
#line 812 "pprint.m"
  MR_Integer mercury__pprint__Priority_6,
#line 812 "pprint.m"
  MR_Word mercury__pprint__Univ_7)
#line 812 "pprint.m"
{
#line 814 "pprint.m"
  {
#line 814 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 814 "pprint.m"
    MR_Word mercury__pprint__HeadVar__4_4;
#line 814 "pprint.m"
    MR_Word mercury__pprint__TypeInfo_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__Univ_7, (MR_Integer) 0)));
#line 814 "pprint.m"
    MR_Box mercury__pprint__V_8_8 = (MR_hl_field(MR_mktag(0), mercury__pprint__Univ_7, (MR_Integer) 1));

#line 814 "pprint.m"
    {
#line 814 "pprint.m"
      return mercury__pprint__HeadVar__4_4 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_9_9, mercury__pprint__Depth_5, mercury__pprint__Priority_6, mercury__pprint__V_8_8);
    }
#line 814 "pprint.m"
    return mercury__pprint__HeadVar__4_4;
#line 814 "pprint.m"
  }
#line 812 "pprint.m"
}

#line 803 "pprint.m"
static MR_Integer MR_CALL 
mercury__pprint__adjusted_by_2_f_0(
#line 803 "pprint.m"
  MR_Integer mercury__pprint__Priority_1,
#line 803 "pprint.m"
  MR_Word mercury__pprint__HeadVar__2_2)
#line 803 "pprint.m"
{
#line 805 "pprint.m"
  {
#line 805 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 805 "pprint.m"
    MR_Integer mercury__pprint__HeadVar__3_3;

#line 805 "pprint.m"
#line 805 "pprint.m"
    switch (mercury__pprint__HeadVar__2_2) {
#line 805 "pprint.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 805 "pprint.m"
      case (MR_Integer) 0:
#line 805 "pprint.m"
        {
#line 805 "pprint.m"
          mercury__pprint__HeadVar__3_3 = (mercury__pprint__Priority_1 - (MR_Integer) 1);
#line 805 "pprint.m"
        }
#line 805 "pprint.m"
        break;
#line 805 "pprint.m"
      case (MR_Integer) 1:
#line 806 "pprint.m"
        mercury__pprint__HeadVar__3_3 = mercury__pprint__Priority_1;
#line 805 "pprint.m"
        break;
#line 805 "pprint.m"
    }
#line 805 "pprint.m"
    return mercury__pprint__HeadVar__3_3;
#line 805 "pprint.m"
  }
#line 803 "pprint.m"
}

#line 793 "pprint.m"
static MR_Word MR_CALL 
mercury__pprint__maybe_parens_3_f_0(
#line 793 "pprint.m"
  MR_Integer mercury__pprint__ParentPriority_5,
#line 793 "pprint.m"
  MR_Integer mercury__pprint__OpPriority_6,
#line 793 "pprint.m"
  MR_Word mercury__pprint__Doc_7)
#line 793 "pprint.m"
{
#line 795 "pprint.m"
  {
#line 795 "pprint.m"
    MR_bool mercury__pprint__succeeded = (mercury__pprint__ParentPriority_5 < mercury__pprint__OpPriority_6);
#line 795 "pprint.m"
    MR_Word mercury__pprint__HeadVar__4_4;

#line 795 "pprint.m"
    if (mercury__pprint__succeeded)
#line 796 "pprint.m"
      {
#line 796 "pprint.m"
        MR_Word mercury__pprint__TypeClassInfo_for_doc_8 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 796 "pprint.m"
        MR_Word mercury__pprint__TypeClassInfo_for_doc_12 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 796 "pprint.m"
        MR_Word mercury__pprint__TypeClassInfo_for_doc_13 = (MR_Word) &mercury__pprint_scalar_common_1[1];

#line 583 "pprint.m"
        {
#line 583 "pprint.m"
          return mercury__pprint__HeadVar__4_4 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_12, mercury__pprint__TypeClassInfo_for_doc_13, mercury__pprint__TypeClassInfo_for_doc_8, ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), ((MR_Box) (mercury__pprint__Doc_7)));
        }
#line 796 "pprint.m"
      }
#line 795 "pprint.m"
    else
#line 796 "pprint.m"
      mercury__pprint__HeadVar__4_4 = mercury__pprint__Doc_7;
#line 795 "pprint.m"
    return mercury__pprint__HeadVar__4_4;
#line 795 "pprint.m"
  }
#line 793 "pprint.m"
}

#line 709 "pprint.m"
static MR_Word MR_CALL 
mercury__pprint__generic_term_to_doc_3_f_0(
#line 709 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T_101,
#line 709 "pprint.m"
  MR_Integer mercury__pprint__Depth_5,
#line 709 "pprint.m"
  MR_Integer mercury__pprint__Priority_6,
#line 709 "pprint.m"
  MR_Box mercury__pprint__X_7)
#line 709 "pprint.m"
{
#line 717 "pprint.m"
  {
#line 717 "pprint.m"
    MR_bool mercury__pprint__succeeded = (mercury__pprint__Depth_5 <= (MR_Integer) 0);
#line 717 "pprint.m"
    MR_Word mercury__pprint__Doc_8;

#line 717 "pprint.m"
    if (mercury__pprint__succeeded)
#line 715 "pprint.m"
      {
#line 715 "pprint.m"
        MR_String mercury__pprint__Name_9;
#line 715 "pprint.m"
        MR_Integer mercury__pprint__Arity_10;

#line 715 "pprint.m"
        {
#line 715 "pprint.m"
          mercury__deconstruct__functor_4_p_1(mercury__pprint__TypeInfo_for_T_101, mercury__pprint__X_7, (MR_Integer) 1, &mercury__pprint__Name_9, &mercury__pprint__Arity_10);
        }
#line 716 "pprint.m"
        mercury__pprint__succeeded = (mercury__pprint__Arity_10 == (MR_Integer) 0);
#line 716 "pprint.m"
        if (mercury__pprint__succeeded)
#line 716 "pprint.m"
          {
#line 716 "pprint.m"
            return mercury__pprint__Doc_8 = mercury__pprint__text_1_f_0(mercury__pprint__Name_9);
          }
#line 716 "pprint.m"
        else
#line 716 "pprint.m"
          {
#line 716 "pprint.m"
            MR_Word mercury__pprint__TypeClassInfo_for_doc_102 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 716 "pprint.m"
            MR_Word mercury__pprint__TypeClassInfo_for_doc_103 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 716 "pprint.m"
            MR_Word mercury__pprint__TypeClassInfo_for_doc_104 = (MR_Word) &mercury__pprint_scalar_common_1[3];
#line 716 "pprint.m"
            MR_Word mercury__pprint__V_27_27;

#line 716 "pprint.m"
            {
#line 716 "pprint.m"
              mercury__pprint__V_27_27 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_102, mercury__pprint__TypeClassInfo_for_doc_104, ((MR_Box) ((MR_String) "/")), ((MR_Box) (mercury__pprint__Arity_10)));
            }
#line 716 "pprint.m"
            {
#line 716 "pprint.m"
              return mercury__pprint__Doc_8 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_102, mercury__pprint__TypeClassInfo_for_doc_103, ((MR_Box) (mercury__pprint__Name_9)), ((MR_Box) (mercury__pprint__V_27_27)));
            }
#line 716 "pprint.m"
          }
#line 715 "pprint.m"
      }
#line 717 "pprint.m"
    else
#line 718 "pprint.m"
      {
#line 718 "pprint.m"
        MR_Word mercury__pprint__UnivArgs_12;
#line 718 "pprint.m"
        MR_String mercury__pprint__Name_100;
#line 718 "pprint.m"
        MR_Integer mercury__pprint___Arity_11;
#line 720 "pprint.m"
        MR_Word mercury__pprint__UnivArg_14;
#line 720 "pprint.m"
        MR_Integer mercury__pprint__OpPri_15;
#line 720 "pprint.m"
        MR_Word mercury__pprint__Assoc_16;
#line 722 "pprint.m"
        MR_Word mercury__pprint__TypeClassInfo_for_op_table_105;
#line 722 "pprint.m"
        MR_Word mercury__pprint__V_30_30;

#line 718 "pprint.m"
        {
#line 718 "pprint.m"
          mercury__deconstruct__deconstruct_5_p_1(mercury__pprint__TypeInfo_for_T_101, mercury__pprint__X_7, (MR_Integer) 1, &mercury__pprint__Name_100, &mercury__pprint___Arity_11, &mercury__pprint__UnivArgs_12);
        }
#line 719 "pprint.m"
        {
#line 719 "pprint.m"
          mercury__ops__init_mercury_op_table_0_f_0();
        }
#line 722 "pprint.m"
        mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__UnivArgs_12)) == (MR_mktag((MR_Integer) 1)));
#line 722 "pprint.m"
        if (mercury__pprint__succeeded)
#line 722 "pprint.m"
          {
#line 722 "pprint.m"
            mercury__pprint__UnivArg_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__UnivArgs_12, (MR_Integer) 0)));
#line 722 "pprint.m"
            mercury__pprint__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__UnivArgs_12, (MR_Integer) 1)));
#line 722 "pprint.m"
            mercury__pprint__succeeded = (mercury__pprint__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 722 "pprint.m"
            if (mercury__pprint__succeeded)
#line 722 "pprint.m"
              {
#line 10244 "pprint.c"
                mercury__pprint__TypeClassInfo_for_op_table_105 = (MR_Word) &mercury__pprint_scalar_common_1[4];
#line 723 "pprint.m"
                {
#line 723 "pprint.m"
                  mercury__pprint__succeeded = mercury__ops__lookup_prefix_op_4_p_0(mercury__pprint__TypeClassInfo_for_op_table_105, ((MR_Box) ((MR_Integer) 0)), mercury__pprint__Name_100, &mercury__pprint__OpPri_15, &mercury__pprint__Assoc_16);
                }
#line 722 "pprint.m"
              }
#line 722 "pprint.m"
          }
#line 720 "pprint.m"
        if (mercury__pprint__succeeded)
#line 725 "pprint.m"
          {
#line 725 "pprint.m"
            MR_Word mercury__pprint__TypeClassInfo_for_doc_106 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 725 "pprint.m"
            MR_Word mercury__pprint__TypeClassInfo_for_doc_107 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 725 "pprint.m"
            MR_Word mercury__pprint__V_31_31;
#line 725 "pprint.m"
            MR_Word mercury__pprint__V_32_32;
#line 725 "pprint.m"
            MR_Word mercury__pprint__V_33_33;
#line 725 "pprint.m"
            MR_Word mercury__pprint__V_34_34;
#line 725 "pprint.m"
            MR_Integer mercury__pprint__V_35_35;
#line 725 "pprint.m"
            MR_Integer mercury__pprint__V_37_37;

#line 727 "pprint.m"
            {
#line 727 "pprint.m"
              mercury__pprint__V_33_33 = mercury__pprint__space_0_f_0();
            }
#line 728 "pprint.m"
            mercury__pprint__V_35_35 = (mercury__pprint__Depth_5 - (MR_Integer) 1);
#line 728 "pprint.m"
            {
#line 728 "pprint.m"
              mercury__pprint__V_37_37 = mercury__pprint__adjusted_by_2_f_0(mercury__pprint__OpPri_15, mercury__pprint__Assoc_16);
            }
#line 728 "pprint.m"
            {
#line 728 "pprint.m"
              mercury__pprint__V_34_34 = mercury__pprint__univ_to_doc_3_f_0(mercury__pprint__V_35_35, mercury__pprint__V_37_37, mercury__pprint__UnivArg_14);
            }
#line 727 "pprint.m"
            {
#line 727 "pprint.m"
              mercury__pprint__V_32_32 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_107, mercury__pprint__TypeClassInfo_for_doc_107, ((MR_Box) (mercury__pprint__V_33_33)), ((MR_Box) (mercury__pprint__V_34_34)));
            }
#line 726 "pprint.m"
            {
#line 726 "pprint.m"
              mercury__pprint__V_31_31 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_106, mercury__pprint__TypeClassInfo_for_doc_107, ((MR_Box) (mercury__pprint__Name_100)), ((MR_Box) (mercury__pprint__V_32_32)));
            }
#line 725 "pprint.m"
            {
#line 725 "pprint.m"
              return mercury__pprint__Doc_8 = mercury__pprint__maybe_parens_3_f_0(mercury__pprint__Priority_6, mercury__pprint__OpPri_15, mercury__pprint__V_31_31);
            }
#line 725 "pprint.m"
          }
#line 720 "pprint.m"
        else
#line 741 "pprint.m"
          {
#line 741 "pprint.m"
            MR_Word mercury__pprint__UnivArg_97;
#line 741 "pprint.m"
            MR_Integer mercury__pprint__OpPri_98;
#line 741 "pprint.m"
            MR_Word mercury__pprint__Assoc_99;
#line 732 "pprint.m"
            MR_Word mercury__pprint__TypeClassInfo_for_op_table_108;
#line 732 "pprint.m"
            MR_Word mercury__pprint__V_38_38;

#line 732 "pprint.m"
            mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__UnivArgs_12)) == (MR_mktag((MR_Integer) 1)));
#line 732 "pprint.m"
            if (mercury__pprint__succeeded)
#line 732 "pprint.m"
              {
#line 732 "pprint.m"
                mercury__pprint__UnivArg_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__UnivArgs_12, (MR_Integer) 0)));
#line 732 "pprint.m"
                mercury__pprint__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__UnivArgs_12, (MR_Integer) 1)));
#line 732 "pprint.m"
                mercury__pprint__succeeded = (mercury__pprint__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 732 "pprint.m"
                if (mercury__pprint__succeeded)
#line 732 "pprint.m"
                  {
#line 10341 "pprint.c"
                    mercury__pprint__TypeClassInfo_for_op_table_108 = (MR_Word) &mercury__pprint_scalar_common_1[4];
#line 733 "pprint.m"
                    {
#line 733 "pprint.m"
                      mercury__pprint__succeeded = mercury__ops__lookup_postfix_op_4_p_0(mercury__pprint__TypeClassInfo_for_op_table_108, ((MR_Box) ((MR_Integer) 0)), mercury__pprint__Name_100, &mercury__pprint__OpPri_98, &mercury__pprint__Assoc_99);
                    }
#line 732 "pprint.m"
                  }
#line 732 "pprint.m"
              }
#line 741 "pprint.m"
            if (mercury__pprint__succeeded)
#line 735 "pprint.m"
              {
#line 735 "pprint.m"
                MR_Word mercury__pprint__TypeClassInfo_for_doc_109 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 735 "pprint.m"
                MR_Word mercury__pprint__TypeClassInfo_for_doc_110;
#line 735 "pprint.m"
                MR_Word mercury__pprint__V_39_39;
#line 735 "pprint.m"
                MR_Word mercury__pprint__V_40_40;
#line 735 "pprint.m"
                MR_Integer mercury__pprint__V_41_41 = (mercury__pprint__Depth_5 - (MR_Integer) 1);
#line 735 "pprint.m"
                MR_Integer mercury__pprint__V_43_43;
#line 735 "pprint.m"
                MR_Word mercury__pprint__V_44_44;
#line 735 "pprint.m"
                MR_Word mercury__pprint__V_45_45;

#line 736 "pprint.m"
                {
#line 736 "pprint.m"
                  mercury__pprint__V_43_43 = mercury__pprint__adjusted_by_2_f_0(mercury__pprint__OpPri_98, mercury__pprint__Assoc_99);
                }
#line 736 "pprint.m"
                {
#line 736 "pprint.m"
                  mercury__pprint__V_40_40 = mercury__pprint__univ_to_doc_3_f_0(mercury__pprint__V_41_41, mercury__pprint__V_43_43, mercury__pprint__UnivArg_97);
                }
#line 10383 "pprint.c"
                mercury__pprint__TypeClassInfo_for_doc_110 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 738 "pprint.m"
                {
#line 738 "pprint.m"
                  mercury__pprint__V_45_45 = mercury__pprint__space_0_f_0();
                }
#line 738 "pprint.m"
                {
#line 738 "pprint.m"
                  mercury__pprint__V_44_44 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_109, mercury__pprint__TypeClassInfo_for_doc_110, ((MR_Box) (mercury__pprint__V_45_45)), ((MR_Box) (mercury__pprint__Name_100)));
                }
#line 737 "pprint.m"
                {
#line 737 "pprint.m"
                  mercury__pprint__V_39_39 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_109, mercury__pprint__TypeClassInfo_for_doc_109, ((MR_Box) (mercury__pprint__V_40_40)), ((MR_Box) (mercury__pprint__V_44_44)));
                }
#line 735 "pprint.m"
                {
#line 735 "pprint.m"
                  return mercury__pprint__Doc_8 = mercury__pprint__maybe_parens_3_f_0(mercury__pprint__Priority_6, mercury__pprint__OpPri_98, mercury__pprint__V_39_39);
                }
#line 735 "pprint.m"
              }
#line 741 "pprint.m"
            else
#line 758 "pprint.m"
              {
#line 758 "pprint.m"
                MR_Word mercury__pprint__UnivArgL_17;
#line 758 "pprint.m"
                MR_Word mercury__pprint__UnivArgR_18;
#line 758 "pprint.m"
                MR_Word mercury__pprint__AssocL_19;
#line 758 "pprint.m"
                MR_Word mercury__pprint__AssocR_20;
#line 758 "pprint.m"
                MR_Integer mercury__pprint__OpPri_96;
#line 742 "pprint.m"
                MR_Word mercury__pprint__TypeClassInfo_for_op_table_111;
#line 742 "pprint.m"
                MR_Word mercury__pprint__V_46_46;
#line 742 "pprint.m"
                MR_Word mercury__pprint__V_47_47;

#line 742 "pprint.m"
                mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__UnivArgs_12)) == (MR_mktag((MR_Integer) 1)));
#line 742 "pprint.m"
                if (mercury__pprint__succeeded)
#line 742 "pprint.m"
                  {
#line 742 "pprint.m"
                    mercury__pprint__UnivArgL_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__UnivArgs_12, (MR_Integer) 0)));
#line 742 "pprint.m"
                    mercury__pprint__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__UnivArgs_12, (MR_Integer) 1)));
#line 742 "pprint.m"
                    mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 742 "pprint.m"
                    if (mercury__pprint__succeeded)
#line 742 "pprint.m"
                      {
#line 742 "pprint.m"
                        mercury__pprint__UnivArgR_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__V_46_46, (MR_Integer) 0)));
#line 742 "pprint.m"
                        mercury__pprint__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__V_46_46, (MR_Integer) 1)));
#line 742 "pprint.m"
                        mercury__pprint__succeeded = (mercury__pprint__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 742 "pprint.m"
                        if (mercury__pprint__succeeded)
#line 742 "pprint.m"
                          {
#line 10454 "pprint.c"
                            mercury__pprint__TypeClassInfo_for_op_table_111 = (MR_Word) &mercury__pprint_scalar_common_1[4];
#line 743 "pprint.m"
                            {
#line 743 "pprint.m"
                              mercury__pprint__succeeded = mercury__ops__lookup_infix_op_5_p_0(mercury__pprint__TypeClassInfo_for_op_table_111, ((MR_Box) ((MR_Integer) 0)), mercury__pprint__Name_100, &mercury__pprint__OpPri_96, &mercury__pprint__AssocL_19, &mercury__pprint__AssocR_20);
                            }
#line 742 "pprint.m"
                          }
#line 742 "pprint.m"
                      }
#line 742 "pprint.m"
                  }
#line 758 "pprint.m"
                if (mercury__pprint__succeeded)
#line 745 "pprint.m"
                  {
#line 745 "pprint.m"
                    MR_Word mercury__pprint__TypeClassInfo_for_doc_112 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 745 "pprint.m"
                    MR_Word mercury__pprint__TypeClassInfo_for_doc_113;
#line 745 "pprint.m"
                    MR_Word mercury__pprint__V_48_48;
#line 745 "pprint.m"
                    MR_Word mercury__pprint__V_49_49;
#line 745 "pprint.m"
                    MR_Integer mercury__pprint__V_50_50 = (mercury__pprint__Depth_5 - (MR_Integer) 1);
#line 745 "pprint.m"
                    MR_Integer mercury__pprint__V_52_52;
#line 745 "pprint.m"
                    MR_Word mercury__pprint__V_53_53;
#line 745 "pprint.m"
                    MR_Word mercury__pprint__V_54_54;
#line 745 "pprint.m"
                    MR_Word mercury__pprint__V_55_55;
#line 745 "pprint.m"
                    MR_Word mercury__pprint__V_56_56;
#line 745 "pprint.m"
                    MR_Word mercury__pprint__V_57_57;
#line 745 "pprint.m"
                    MR_Word mercury__pprint__V_58_58;
#line 745 "pprint.m"
                    MR_Word mercury__pprint__V_59_59;
#line 745 "pprint.m"
                    MR_Word mercury__pprint__V_60_60;
#line 745 "pprint.m"
                    MR_Word mercury__pprint__V_61_61;
#line 745 "pprint.m"
                    MR_Word mercury__pprint__V_63_63;
#line 745 "pprint.m"
                    MR_Integer mercury__pprint__V_64_64;
#line 745 "pprint.m"
                    MR_Integer mercury__pprint__V_66_66;

#line 746 "pprint.m"
                    {
#line 746 "pprint.m"
                      mercury__pprint__V_52_52 = mercury__pprint__adjusted_by_2_f_0(mercury__pprint__OpPri_96, mercury__pprint__AssocL_19);
                    }
#line 746 "pprint.m"
                    {
#line 746 "pprint.m"
                      mercury__pprint__V_49_49 = mercury__pprint__univ_to_doc_3_f_0(mercury__pprint__V_50_50, mercury__pprint__V_52_52, mercury__pprint__UnivArgL_17);
                    }
#line 748 "pprint.m"
                    {
#line 748 "pprint.m"
                      mercury__pprint__V_54_54 = mercury__pprint__space_0_f_0();
                    }
#line 10523 "pprint.c"
                    mercury__pprint__TypeClassInfo_for_doc_113 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 750 "pprint.m"
                    {
#line 750 "pprint.m"
                      mercury__pprint__V_57_57 = mercury__pprint__space_0_f_0();
                    }
#line 751 "pprint.m"
                    {
#line 751 "pprint.m"
                      mercury__pprint__V_60_60 = mercury__pprint__line_0_f_0();
                    }
#line 753 "pprint.m"
                    mercury__pprint__V_64_64 = (mercury__pprint__Depth_5 - (MR_Integer) 2);
#line 753 "pprint.m"
                    {
#line 753 "pprint.m"
                      mercury__pprint__V_66_66 = mercury__pprint__adjusted_by_2_f_0(mercury__pprint__OpPri_96, mercury__pprint__AssocR_20);
                    }
#line 753 "pprint.m"
                    {
#line 753 "pprint.m"
                      mercury__pprint__V_63_63 = mercury__pprint__univ_to_doc_3_f_0(mercury__pprint__V_64_64, mercury__pprint__V_66_66, mercury__pprint__UnivArgR_18);
                    }
#line 752 "pprint.m"
                    {
#line 752 "pprint.m"
                      mercury__pprint__V_61_61 = mercury__pprint__nest_2_f_0(mercury__pprint__TypeClassInfo_for_doc_112, (MR_Integer) 2, ((MR_Box) (mercury__pprint__V_63_63)));
                    }
#line 751 "pprint.m"
                    {
#line 751 "pprint.m"
                      mercury__pprint__V_59_59 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_112, mercury__pprint__TypeClassInfo_for_doc_112, ((MR_Box) (mercury__pprint__V_60_60)), ((MR_Box) (mercury__pprint__V_61_61)));
                    }
#line 751 "pprint.m"
                    {
#line 751 "pprint.m"
                      mercury__pprint__V_58_58 = mercury__pprint__group_1_f_0(mercury__pprint__TypeClassInfo_for_doc_112, ((MR_Box) (mercury__pprint__V_59_59)));
                    }
#line 750 "pprint.m"
                    {
#line 750 "pprint.m"
                      mercury__pprint__V_56_56 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_112, mercury__pprint__TypeClassInfo_for_doc_112, ((MR_Box) (mercury__pprint__V_57_57)), ((MR_Box) (mercury__pprint__V_58_58)));
                    }
#line 749 "pprint.m"
                    {
#line 749 "pprint.m"
                      mercury__pprint__V_55_55 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_113, mercury__pprint__TypeClassInfo_for_doc_112, ((MR_Box) (mercury__pprint__Name_100)), ((MR_Box) (mercury__pprint__V_56_56)));
                    }
#line 748 "pprint.m"
                    {
#line 748 "pprint.m"
                      mercury__pprint__V_53_53 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_112, mercury__pprint__TypeClassInfo_for_doc_112, ((MR_Box) (mercury__pprint__V_54_54)), ((MR_Box) (mercury__pprint__V_55_55)));
                    }
#line 747 "pprint.m"
                    {
#line 747 "pprint.m"
                      mercury__pprint__V_48_48 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_112, mercury__pprint__TypeClassInfo_for_doc_112, ((MR_Box) (mercury__pprint__V_49_49)), ((MR_Box) (mercury__pprint__V_53_53)));
                    }
#line 745 "pprint.m"
                    {
#line 745 "pprint.m"
                      return mercury__pprint__Doc_8 = mercury__pprint__maybe_parens_3_f_0(mercury__pprint__Priority_6, mercury__pprint__OpPri_96, mercury__pprint__V_48_48);
                    }
#line 745 "pprint.m"
                  }
#line 758 "pprint.m"
                else
#line 775 "pprint.m"
                  {
#line 775 "pprint.m"
                    MR_Word mercury__pprint__UnivArgR1_21;
#line 775 "pprint.m"
                    MR_Word mercury__pprint__UnivArgR2_22;
#line 775 "pprint.m"
                    MR_Word mercury__pprint__AssocR1_23;
#line 775 "pprint.m"
                    MR_Word mercury__pprint__AssocR2_24;
#line 775 "pprint.m"
                    MR_Integer mercury__pprint__OpPri_95;
#line 759 "pprint.m"
                    MR_Word mercury__pprint__TypeClassInfo_for_op_table_114;
#line 759 "pprint.m"
                    MR_Word mercury__pprint__V_67_67;
#line 759 "pprint.m"
                    MR_Word mercury__pprint__V_68_68;

#line 759 "pprint.m"
                    mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__UnivArgs_12)) == (MR_mktag((MR_Integer) 1)));
#line 759 "pprint.m"
                    if (mercury__pprint__succeeded)
#line 759 "pprint.m"
                      {
#line 759 "pprint.m"
                        mercury__pprint__UnivArgR1_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__UnivArgs_12, (MR_Integer) 0)));
#line 759 "pprint.m"
                        mercury__pprint__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__UnivArgs_12, (MR_Integer) 1)));
#line 759 "pprint.m"
                        mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__V_67_67)) == (MR_mktag((MR_Integer) 1)));
#line 759 "pprint.m"
                        if (mercury__pprint__succeeded)
#line 759 "pprint.m"
                          {
#line 759 "pprint.m"
                            mercury__pprint__UnivArgR2_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__V_67_67, (MR_Integer) 0)));
#line 759 "pprint.m"
                            mercury__pprint__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__V_67_67, (MR_Integer) 1)));
#line 759 "pprint.m"
                            mercury__pprint__succeeded = (mercury__pprint__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 759 "pprint.m"
                            if (mercury__pprint__succeeded)
#line 759 "pprint.m"
                              {
#line 10636 "pprint.c"
                                mercury__pprint__TypeClassInfo_for_op_table_114 = (MR_Word) &mercury__pprint_scalar_common_1[4];
#line 760 "pprint.m"
                                {
#line 760 "pprint.m"
                                  mercury__pprint__succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0(mercury__pprint__TypeClassInfo_for_op_table_114, ((MR_Box) ((MR_Integer) 0)), mercury__pprint__Name_100, &mercury__pprint__OpPri_95, &mercury__pprint__AssocR1_23, &mercury__pprint__AssocR2_24);
                                }
#line 759 "pprint.m"
                              }
#line 759 "pprint.m"
                          }
#line 759 "pprint.m"
                      }
#line 775 "pprint.m"
                    if (mercury__pprint__succeeded)
#line 762 "pprint.m"
                      {
#line 762 "pprint.m"
                        MR_Word mercury__pprint__TypeClassInfo_for_doc_115 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 762 "pprint.m"
                        MR_Word mercury__pprint__TypeClassInfo_for_doc_116 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 762 "pprint.m"
                        MR_Word mercury__pprint__V_69_69;
#line 762 "pprint.m"
                        MR_Word mercury__pprint__V_70_70;
#line 762 "pprint.m"
                        MR_Word mercury__pprint__V_71_71;
#line 762 "pprint.m"
                        MR_Word mercury__pprint__V_72_72;
#line 762 "pprint.m"
                        MR_Word mercury__pprint__V_73_73;
#line 762 "pprint.m"
                        MR_Integer mercury__pprint__V_74_74;
#line 762 "pprint.m"
                        MR_Integer mercury__pprint__V_76_76;
#line 762 "pprint.m"
                        MR_Word mercury__pprint__V_77_77;
#line 762 "pprint.m"
                        MR_Word mercury__pprint__V_78_78;
#line 762 "pprint.m"
                        MR_Word mercury__pprint__V_79_79;
#line 762 "pprint.m"
                        MR_Word mercury__pprint__V_80_80;
#line 762 "pprint.m"
                        MR_Word mercury__pprint__V_81_81;
#line 762 "pprint.m"
                        MR_Word mercury__pprint__V_82_82;
#line 762 "pprint.m"
                        MR_Word mercury__pprint__V_84_84;
#line 762 "pprint.m"
                        MR_Integer mercury__pprint__V_85_85;
#line 762 "pprint.m"
                        MR_Integer mercury__pprint__V_87_87;

#line 764 "pprint.m"
                        {
#line 764 "pprint.m"
                          mercury__pprint__V_71_71 = mercury__pprint__space_0_f_0();
                        }
#line 765 "pprint.m"
                        mercury__pprint__V_74_74 = (mercury__pprint__Depth_5 - (MR_Integer) 2);
#line 765 "pprint.m"
                        {
#line 765 "pprint.m"
                          mercury__pprint__V_76_76 = mercury__pprint__adjusted_by_2_f_0(mercury__pprint__OpPri_95, mercury__pprint__AssocR1_23);
                        }
#line 765 "pprint.m"
                        {
#line 765 "pprint.m"
                          mercury__pprint__V_73_73 = mercury__pprint__univ_to_doc_3_f_0(mercury__pprint__V_74_74, mercury__pprint__V_76_76, mercury__pprint__UnivArgR1_21);
                        }
#line 767 "pprint.m"
                        {
#line 767 "pprint.m"
                          mercury__pprint__V_78_78 = mercury__pprint__space_0_f_0();
                        }
#line 768 "pprint.m"
                        {
#line 768 "pprint.m"
                          mercury__pprint__V_81_81 = mercury__pprint__line_0_f_0();
                        }
#line 770 "pprint.m"
                        mercury__pprint__V_85_85 = (mercury__pprint__Depth_5 - (MR_Integer) 2);
#line 770 "pprint.m"
                        {
#line 770 "pprint.m"
                          mercury__pprint__V_87_87 = mercury__pprint__adjusted_by_2_f_0(mercury__pprint__OpPri_95, mercury__pprint__AssocR2_24);
                        }
#line 770 "pprint.m"
                        {
#line 770 "pprint.m"
                          mercury__pprint__V_84_84 = mercury__pprint__univ_to_doc_3_f_0(mercury__pprint__V_85_85, mercury__pprint__V_87_87, mercury__pprint__UnivArgR2_22);
                        }
#line 769 "pprint.m"
                        {
#line 769 "pprint.m"
                          mercury__pprint__V_82_82 = mercury__pprint__nest_2_f_0(mercury__pprint__TypeClassInfo_for_doc_116, (MR_Integer) 2, ((MR_Box) (mercury__pprint__V_84_84)));
                        }
#line 768 "pprint.m"
                        {
#line 768 "pprint.m"
                          mercury__pprint__V_80_80 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_116, mercury__pprint__TypeClassInfo_for_doc_116, ((MR_Box) (mercury__pprint__V_81_81)), ((MR_Box) (mercury__pprint__V_82_82)));
                        }
#line 768 "pprint.m"
                        {
#line 768 "pprint.m"
                          mercury__pprint__V_79_79 = mercury__pprint__group_1_f_0(mercury__pprint__TypeClassInfo_for_doc_116, ((MR_Box) (mercury__pprint__V_80_80)));
                        }
#line 767 "pprint.m"
                        {
#line 767 "pprint.m"
                          mercury__pprint__V_77_77 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_116, mercury__pprint__TypeClassInfo_for_doc_116, ((MR_Box) (mercury__pprint__V_78_78)), ((MR_Box) (mercury__pprint__V_79_79)));
                        }
#line 766 "pprint.m"
                        {
#line 766 "pprint.m"
                          mercury__pprint__V_72_72 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_116, mercury__pprint__TypeClassInfo_for_doc_116, ((MR_Box) (mercury__pprint__V_73_73)), ((MR_Box) (mercury__pprint__V_77_77)));
                        }
#line 764 "pprint.m"
                        {
#line 764 "pprint.m"
                          mercury__pprint__V_70_70 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_116, mercury__pprint__TypeClassInfo_for_doc_116, ((MR_Box) (mercury__pprint__V_71_71)), ((MR_Box) (mercury__pprint__V_72_72)));
                        }
#line 763 "pprint.m"
                        {
#line 763 "pprint.m"
                          mercury__pprint__V_69_69 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_115, mercury__pprint__TypeClassInfo_for_doc_116, ((MR_Box) (mercury__pprint__Name_100)), ((MR_Box) (mercury__pprint__V_70_70)));
                        }
#line 762 "pprint.m"
                        {
#line 762 "pprint.m"
                          return mercury__pprint__Doc_8 = mercury__pprint__maybe_parens_3_f_0(mercury__pprint__Priority_6, mercury__pprint__OpPri_95, mercury__pprint__V_69_69);
                        }
#line 762 "pprint.m"
                      }
#line 775 "pprint.m"
                    else
#line 779 "pprint.m"
                      {
#line 776 "pprint.m"
                        mercury__pprint__succeeded = (mercury__pprint__UnivArgs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 779 "pprint.m"
                        if (mercury__pprint__succeeded)
#line 778 "pprint.m"
                          {
#line 778 "pprint.m"
                            return mercury__pprint__Doc_8 = mercury__pprint__text_1_f_0(mercury__pprint__Name_100);
                          }
#line 779 "pprint.m"
                        else
#line 780 "pprint.m"
                          {
#line 780 "pprint.m"
                            MR_Word mercury__pprint__TypeClassInfo_for_doc_117 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 780 "pprint.m"
                            MR_Word mercury__pprint__TypeClassInfo_for_doc_118 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 780 "pprint.m"
                            MR_Word mercury__pprint__V_88_88;
#line 780 "pprint.m"
                            MR_Word mercury__pprint__V_89_89;
#line 780 "pprint.m"
                            MR_Word mercury__pprint__V_90_90;
#line 780 "pprint.m"
                            MR_Word mercury__pprint__V_92_92;
#line 780 "pprint.m"
                            MR_Integer mercury__pprint__V_93_93 = (mercury__pprint__Depth_5 - (MR_Integer) 1);

#line 782 "pprint.m"
                            {
#line 782 "pprint.m"
                              mercury__pprint__V_92_92 = mercury__pprint__packed_cs_univ_args_2_f_0(mercury__pprint__V_93_93, mercury__pprint__UnivArgs_12);
                            }
#line 782 "pprint.m"
                            {
#line 782 "pprint.m"
                              mercury__pprint__V_90_90 = mercury__pprint__nest_2_f_0(mercury__pprint__TypeClassInfo_for_doc_117, (MR_Integer) 2, ((MR_Box) (mercury__pprint__V_92_92)));
                            }
#line 781 "pprint.m"
                            {
#line 781 "pprint.m"
                              mercury__pprint__V_89_89 = mercury__pprint__parentheses_1_f_0(mercury__pprint__TypeClassInfo_for_doc_117, ((MR_Box) (mercury__pprint__V_90_90)));
                            }
#line 781 "pprint.m"
                            {
#line 781 "pprint.m"
                              mercury__pprint__V_88_88 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_118, mercury__pprint__TypeClassInfo_for_doc_117, ((MR_Box) (mercury__pprint__Name_100)), ((MR_Box) (mercury__pprint__V_89_89)));
                            }
#line 780 "pprint.m"
                            {
#line 780 "pprint.m"
                              return mercury__pprint__Doc_8 = mercury__pprint__group_1_f_0(mercury__pprint__TypeClassInfo_for_doc_117, ((MR_Box) (mercury__pprint__V_88_88)));
                            }
#line 780 "pprint.m"
                          }
#line 779 "pprint.m"
                      }
#line 775 "pprint.m"
                  }
#line 758 "pprint.m"
              }
#line 741 "pprint.m"
          }
#line 718 "pprint.m"
      }
#line 717 "pprint.m"
    return mercury__pprint__Doc_8;
#line 717 "pprint.m"
  }
#line 709 "pprint.m"
}

#line 671 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__to_doc_3_f_0(
#line 671 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T_18,
#line 671 "pprint.m"
  MR_Integer mercury__pprint__Depth_5,
#line 671 "pprint.m"
  MR_Integer mercury__pprint__Priority_6,
#line 671 "pprint.m"
  MR_Box mercury__pprint__X_7)
#line 671 "pprint.m"
{
#line 673 "pprint.m"
  {
#line 673 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 673 "pprint.m"
    MR_Word mercury__pprint__HeadVar__4_4;
#line 673 "pprint.m"
    MR_Word mercury__pprint__TypeInfo_19_19;
#line 673 "pprint.m"
    MR_Word mercury__pprint__Var_8;
#line 820 "pprint.m"
    MR_Word mercury__pprint__TypeCtorInfo_15_44;
#line 820 "pprint.m"
    MR_Word mercury__pprint__TypeInfo_16_45;
#line 820 "pprint.m"
    MR_Word mercury__pprint__TypeInfo_19_48;
#line 820 "pprint.m"
    MR_Word mercury__pprint__ArgTypeDesc_36;
#line 820 "pprint.m"
    MR_Word mercury__pprint__V_39_39;
#line 820 "pprint.m"
    MR_Word mercury__pprint__V_40_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 820 "pprint.m"
    MR_Word mercury__pprint__V_41_41;
#line 820 "pprint.m"
    MR_Word mercury__pprint__V_47_47;
#line 58 "type_desc.opt"
    MR_Box mercury__pprint__V_46_46;
#line 78 "type_desc.opt"
    MR_Word mercury__pprint___TypeCtor_5_51;
#line 74 "type_desc.opt"
    MR_Box mercury__pprint__V_42_42;
#line 107 "builtin.opt"
    MR_Box mercury__pprint__conv0_Var_8;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__to_doc_3_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__pprint__TypeInfo_for_T_18 ;
		{
#line 58 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 10921 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_41_41  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 78 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__to_doc_3_f_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__pprint__V_41_41 ;
		{
#line 78 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 10951 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint___TypeCtor_5_51  = TypeCtorDesc;
	 mercury__pprint__V_39_39  = ArgTypes;
#line 78 "type_desc.opt"
}
#line 822 "pprint.m"
    mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 822 "pprint.m"
    if (mercury__pprint__succeeded)
#line 822 "pprint.m"
      {
#line 822 "pprint.m"
        mercury__pprint__ArgTypeDesc_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__V_39_39, (MR_Integer) 0)));
#line 822 "pprint.m"
        mercury__pprint__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__V_39_39, (MR_Integer) 1)));
#line 10969 "pprint.c"
        mercury__pprint__TypeInfo_19_48 = (MR_Word) &mercury__pprint_scalar_common_1[8];
#line 822 "pprint.m"
        {
#line 822 "pprint.m"
          mercury__pprint__succeeded = mercury__builtin__unify_2_p_0(mercury__pprint__TypeInfo_19_48, ((MR_Box) (mercury__pprint__V_40_40)), ((MR_Box) (mercury__pprint__V_47_47)));
        }
#line 820 "pprint.m"
        if (mercury__pprint__succeeded)
#line 820 "pprint.m"
          {
#line 74 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__to_doc_3_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pprint__ArgTypeDesc_36 ;
		{
#line 74 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 10993 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__TypeInfo_19_19  = TypeInfo_for_T;
#line 74 "type_desc.opt"
}
#line 11000 "pprint.c"
            mercury__pprint__TypeCtorInfo_15_44 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 11002 "pprint.c"
            {
#line 11004 "pprint.c"
              mercury__pprint__TypeInfo_16_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11006 "pprint.c"
              MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_16_45, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_15_44));
#line 11008 "pprint.c"
              MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_16_45, 1) = ((MR_Box) (mercury__pprint__TypeInfo_19_19));
#line 11010 "pprint.c"
            }
#line 107 "builtin.opt"
            {
#line 107 "builtin.opt"
              mercury__pprint__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pprint__TypeInfo_for_T_18, mercury__pprint__TypeInfo_16_45, mercury__pprint__X_7, &mercury__pprint__conv0_Var_8);
            }
#line 107 "builtin.opt"
            if (mercury__pprint__succeeded)
#line 107 "builtin.opt"
              {
#line 107 "builtin.opt"
                mercury__pprint__Var_8 = ((MR_Word) mercury__pprint__conv0_Var_8);
#line 107 "builtin.opt"
                mercury__pprint__succeeded = MR_TRUE;
#line 107 "builtin.opt"
              }
#line 820 "pprint.m"
          }
#line 822 "pprint.m"
      }
#line 673 "pprint.m"
    if (mercury__pprint__succeeded)
#line 675 "pprint.m"
      {
#line 675 "pprint.m"
        return mercury__pprint__HeadVar__4_4 = mercury__pprint__var_to_doc_2_f_0(mercury__pprint__TypeInfo_19_19, mercury__pprint__Depth_5, mercury__pprint__Var_8);
      }
#line 673 "pprint.m"
    else
#line 680 "pprint.m"
      {
#line 680 "pprint.m"
        MR_Word mercury__pprint__SparseBitsetInt_9;
#line 835 "pprint.m"
        MR_Word mercury__pprint__TypeInfo_7_57 = (MR_Word) &mercury__pprint_scalar_common_1[5];
#line 107 "builtin.opt"
        MR_Box mercury__pprint__conv1_SparseBitsetInt_9;

#line 107 "builtin.opt"
        {
#line 107 "builtin.opt"
          mercury__pprint__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pprint__TypeInfo_for_T_18, mercury__pprint__TypeInfo_7_57, mercury__pprint__X_7, &mercury__pprint__conv1_SparseBitsetInt_9);
        }
#line 107 "builtin.opt"
        if (mercury__pprint__succeeded)
#line 107 "builtin.opt"
          {
#line 107 "builtin.opt"
            mercury__pprint__SparseBitsetInt_9 = ((MR_Word) mercury__pprint__conv1_SparseBitsetInt_9);
#line 107 "builtin.opt"
            mercury__pprint__succeeded = MR_TRUE;
#line 107 "builtin.opt"
          }
#line 680 "pprint.m"
        if (mercury__pprint__succeeded)
#line 678 "pprint.m"
          {
#line 678 "pprint.m"
            MR_Word mercury__pprint__TypeClassInfo_for_enum_20 = (MR_Word) &mercury__pprint_scalar_common_1[2];

#line 678 "pprint.m"
            {
#line 678 "pprint.m"
              return mercury__pprint__HeadVar__4_4 = mercury__pprint__sparse_bitset_to_doc_2_f_0(mercury__pprint__TypeClassInfo_for_enum_20, mercury__pprint__Depth_5, mercury__pprint__SparseBitsetInt_9);
            }
#line 678 "pprint.m"
          }
#line 680 "pprint.m"
        else
#line 683 "pprint.m"
          {
#line 683 "pprint.m"
            MR_Word mercury__pprint__TypeInfo_21_21;
#line 683 "pprint.m"
            MR_Word mercury__pprint__SparseBitsetVar_10;
#line 841 "pprint.m"
            MR_Word mercury__pprint__TypeInfo_for_T2_64;
#line 841 "pprint.m"
            MR_Word mercury__pprint__TypeInfo_8_65 = (MR_Word) &mercury__pprint_scalar_common_1[7];
#line 841 "pprint.m"
            MR_Word mercury__pprint__A_62;
#line 107 "builtin.opt"
            MR_Box mercury__pprint__conv2_A_62;

#line 107 "builtin.opt"
            {
#line 107 "builtin.opt"
              mercury__pprint__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pprint__TypeInfo_for_T_18, mercury__pprint__TypeInfo_8_65, mercury__pprint__X_7, &mercury__pprint__conv2_A_62);
            }
#line 107 "builtin.opt"
            if (mercury__pprint__succeeded)
#line 107 "builtin.opt"
              {
#line 107 "builtin.opt"
                mercury__pprint__A_62 = ((MR_Word) mercury__pprint__conv2_A_62);
#line 107 "builtin.opt"
                mercury__pprint__succeeded = MR_TRUE;
#line 107 "builtin.opt"
              }
#line 841 "pprint.m"
            if (mercury__pprint__succeeded)
#line 841 "pprint.m"
              {
#line 11114 "pprint.c"
                mercury__pprint__TypeInfo_for_T2_64 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 11116 "pprint.c"
                mercury__pprint__SparseBitsetVar_10 = mercury__pprint__A_62;
#line 11118 "pprint.c"
                mercury__pprint__TypeInfo_21_21 = mercury__pprint__TypeInfo_for_T2_64;
#line 11120 "pprint.c"
                mercury__pprint__succeeded = MR_TRUE;
#line 841 "pprint.m"
              }
#line 683 "pprint.m"
            if (mercury__pprint__succeeded)
#line 681 "pprint.m"
              {
#line 681 "pprint.m"
                MR_Word mercury__pprint__TypeCtorInfo_22_22 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 681 "pprint.m"
                MR_Word mercury__pprint__TypeInfo_23_23;
#line 681 "pprint.m"
                MR_Word mercury__pprint__BaseTypeClassInfo_for_enum_24 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 681 "pprint.m"
                MR_Word mercury__pprint__TypeClassInfo_for_enum_25;

#line 11137 "pprint.c"
                {
#line 11139 "pprint.c"
                  mercury__pprint__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11141 "pprint.c"
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_23_23, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_22_22));
#line 11143 "pprint.c"
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_23_23, 1) = ((MR_Box) (mercury__pprint__TypeInfo_21_21));
#line 11145 "pprint.c"
                }
#line 11147 "pprint.c"
                {
#line 11149 "pprint.c"
                  mercury__pprint__TypeClassInfo_for_enum_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11151 "pprint.c"
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_enum_25, 0) = ((MR_Box) (mercury__pprint__BaseTypeClassInfo_for_enum_24));
#line 11153 "pprint.c"
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_enum_25, 1) = ((MR_Box) (mercury__pprint__TypeInfo_21_21));
#line 11155 "pprint.c"
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_enum_25, 2) = ((MR_Box) (mercury__pprint__TypeInfo_23_23));
#line 11157 "pprint.c"
                }
#line 681 "pprint.m"
                {
#line 681 "pprint.m"
                  return mercury__pprint__HeadVar__4_4 = mercury__pprint__sparse_bitset_to_doc_2_f_0(mercury__pprint__TypeClassInfo_for_enum_25, mercury__pprint__Depth_5, mercury__pprint__SparseBitsetVar_10);
                }
#line 681 "pprint.m"
              }
#line 683 "pprint.m"
            else
#line 686 "pprint.m"
              {
#line 686 "pprint.m"
                MR_Word mercury__pprint__TypeInfo_26_26;
#line 686 "pprint.m"
                MR_Word mercury__pprint__List_11;
#line 863 "pprint.m"
                MR_Word mercury__pprint__TypeCtorInfo_15_79;
#line 863 "pprint.m"
                MR_Word mercury__pprint__TypeInfo_16_80;
#line 863 "pprint.m"
                MR_Word mercury__pprint__TypeInfo_19_83;
#line 863 "pprint.m"
                MR_Word mercury__pprint__ArgTypeDesc_71;
#line 863 "pprint.m"
                MR_Word mercury__pprint__V_74_74;
#line 863 "pprint.m"
                MR_Word mercury__pprint__V_75_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 863 "pprint.m"
                MR_Word mercury__pprint__V_76_76;
#line 863 "pprint.m"
                MR_Word mercury__pprint__V_82_82;
#line 58 "type_desc.opt"
                MR_Box mercury__pprint__V_81_81;
#line 78 "type_desc.opt"
                MR_Word mercury__pprint___TypeCtor_5_86;
#line 74 "type_desc.opt"
                MR_Box mercury__pprint__V_77_77;
#line 107 "builtin.opt"
                MR_Box mercury__pprint__conv3_List_11;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__to_doc_3_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__pprint__TypeInfo_for_T_18 ;
		{
#line 58 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 11225 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_76_76  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 78 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__to_doc_3_f_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__pprint__V_76_76 ;
		{
#line 78 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 11255 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint___TypeCtor_5_86  = TypeCtorDesc;
	 mercury__pprint__V_74_74  = ArgTypes;
#line 78 "type_desc.opt"
}
#line 865 "pprint.m"
                mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__V_74_74)) == (MR_mktag((MR_Integer) 1)));
#line 865 "pprint.m"
                if (mercury__pprint__succeeded)
#line 865 "pprint.m"
                  {
#line 865 "pprint.m"
                    mercury__pprint__ArgTypeDesc_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__V_74_74, (MR_Integer) 0)));
#line 865 "pprint.m"
                    mercury__pprint__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__V_74_74, (MR_Integer) 1)));
#line 11273 "pprint.c"
                    mercury__pprint__TypeInfo_19_83 = (MR_Word) &mercury__pprint_scalar_common_1[8];
#line 865 "pprint.m"
                    {
#line 865 "pprint.m"
                      mercury__pprint__succeeded = mercury__builtin__unify_2_p_0(mercury__pprint__TypeInfo_19_83, ((MR_Box) (mercury__pprint__V_75_75)), ((MR_Box) (mercury__pprint__V_82_82)));
                    }
#line 863 "pprint.m"
                    if (mercury__pprint__succeeded)
#line 863 "pprint.m"
                      {
#line 74 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__to_doc_3_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pprint__ArgTypeDesc_71 ;
		{
#line 74 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 11297 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__TypeInfo_26_26  = TypeInfo_for_T;
#line 74 "type_desc.opt"
}
#line 11304 "pprint.c"
                        mercury__pprint__TypeCtorInfo_15_79 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 11306 "pprint.c"
                        {
#line 11308 "pprint.c"
                          mercury__pprint__TypeInfo_16_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11310 "pprint.c"
                          MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_16_80, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_15_79));
#line 11312 "pprint.c"
                          MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_16_80, 1) = ((MR_Box) (mercury__pprint__TypeInfo_26_26));
#line 11314 "pprint.c"
                        }
#line 107 "builtin.opt"
                        {
#line 107 "builtin.opt"
                          mercury__pprint__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pprint__TypeInfo_for_T_18, mercury__pprint__TypeInfo_16_80, mercury__pprint__X_7, &mercury__pprint__conv3_List_11);
                        }
#line 107 "builtin.opt"
                        if (mercury__pprint__succeeded)
#line 107 "builtin.opt"
                          {
#line 107 "builtin.opt"
                            mercury__pprint__List_11 = ((MR_Word) mercury__pprint__conv3_List_11);
#line 107 "builtin.opt"
                            mercury__pprint__succeeded = MR_TRUE;
#line 107 "builtin.opt"
                          }
#line 863 "pprint.m"
                      }
#line 865 "pprint.m"
                  }
#line 686 "pprint.m"
                if (mercury__pprint__succeeded)
#line 684 "pprint.m"
                  {
#line 684 "pprint.m"
                    return mercury__pprint__HeadVar__4_4 = mercury__pprint__list_to_doc_2_f_0(mercury__pprint__TypeInfo_26_26, mercury__pprint__Depth_5, mercury__pprint__List_11);
                  }
#line 686 "pprint.m"
                else
#line 689 "pprint.m"
                  {
#line 689 "pprint.m"
                    MR_Word mercury__pprint__TypeInfo_27_27;
#line 689 "pprint.m"
                    MR_ArrayPtr mercury__pprint__Array_12;
#line 686 "pprint.m"
                    MR_ArrayPtr mercury__pprint__conv4_Array_12;

#line 686 "pprint.m"
                    {
#line 686 "pprint.m"
                      mercury__pprint__succeeded = mercury__array__dynamic_cast_to_array_2_p_0(mercury__pprint__TypeInfo_for_T_18, &mercury__pprint__TypeInfo_27_27, mercury__pprint__X_7, &mercury__pprint__conv4_Array_12);
                    }
#line 686 "pprint.m"
                    if (mercury__pprint__succeeded)
#line 686 "pprint.m"
                      {
#line 686 "pprint.m"
                        mercury__pprint__Array_12 = (MR_ArrayPtr) mercury__pprint__conv4_Array_12;
#line 686 "pprint.m"
                        mercury__pprint__succeeded = MR_TRUE;
#line 686 "pprint.m"
                      }
#line 689 "pprint.m"
                    if (mercury__pprint__succeeded)
#line 687 "pprint.m"
                      {
#line 687 "pprint.m"
                        return mercury__pprint__HeadVar__4_4 = mercury__pprint__array_to_doc_2_f_0(mercury__pprint__TypeInfo_27_27, mercury__pprint__Depth_5, (MR_ArrayPtr) mercury__pprint__Array_12);
                      }
#line 689 "pprint.m"
                    else
#line 692 "pprint.m"
                      {
#line 692 "pprint.m"
                        MR_Word mercury__pprint__TypeInfo_28_28;
#line 692 "pprint.m"
                        MR_Box mercury__pprint__VersionArray_13;

#line 689 "pprint.m"
                        {
#line 689 "pprint.m"
                          mercury__pprint__succeeded = mercury__pprint__dynamic_cast_to_version_array_2_p_0(mercury__pprint__TypeInfo_for_T_18, &mercury__pprint__TypeInfo_28_28, mercury__pprint__X_7, &mercury__pprint__VersionArray_13);
                        }
#line 692 "pprint.m"
                        if (mercury__pprint__succeeded)
#line 690 "pprint.m"
                          {
#line 690 "pprint.m"
                            return mercury__pprint__HeadVar__4_4 = mercury__pprint__version_array_to_doc_2_f_0(mercury__pprint__TypeInfo_28_28, mercury__pprint__Depth_5, mercury__pprint__VersionArray_13);
                          }
#line 692 "pprint.m"
                        else
#line 695 "pprint.m"
                          {
#line 695 "pprint.m"
                            MR_Box mercury__pprint__Tuple_14 = mercury__pprint__X_7;
#line 909 "pprint.m"
                            MR_String mercury__pprint__V_93_93;
#line 911 "pprint.m"
                            MR_Integer mercury__pprint___Arity_90;

#line 911 "pprint.m"
                            {
#line 911 "pprint.m"
                              mercury__deconstruct__functor_4_p_1(mercury__pprint__TypeInfo_for_T_18, mercury__pprint__X_7, (MR_Integer) 1, &mercury__pprint__V_93_93, &mercury__pprint___Arity_90);
                            }
#line 911 "pprint.m"
                            mercury__pprint__succeeded = (strcmp((MR_String) "{}", mercury__pprint__V_93_93) == 0);
#line 695 "pprint.m"
                            if (mercury__pprint__succeeded)
#line 693 "pprint.m"
                              {
#line 693 "pprint.m"
                                return mercury__pprint__HeadVar__4_4 = mercury__pprint__tuple_to_doc_2_f_0(mercury__pprint__TypeInfo_for_T_18, mercury__pprint__Depth_5, mercury__pprint__Tuple_14);
                              }
#line 695 "pprint.m"
                            else
#line 698 "pprint.m"
                              {
#line 698 "pprint.m"
                                MR_Word mercury__pprint__TypeInfo_29_29;
#line 698 "pprint.m"
                                MR_Word mercury__pprint__TypeInfo_30_30;
#line 698 "pprint.m"
                                MR_Word mercury__pprint__Map_15;

#line 695 "pprint.m"
                                {
#line 695 "pprint.m"
                                  mercury__pprint__succeeded = mercury__pprint__dynamic_cast_to_map_2_p_0(mercury__pprint__TypeInfo_for_T_18, &mercury__pprint__TypeInfo_29_29, &mercury__pprint__TypeInfo_30_30, mercury__pprint__X_7, &mercury__pprint__Map_15);
                                }
#line 698 "pprint.m"
                                if (mercury__pprint__succeeded)
#line 696 "pprint.m"
                                  {
#line 696 "pprint.m"
                                    return mercury__pprint__HeadVar__4_4 = mercury__pprint__map_to_doc_2_f_0(mercury__pprint__TypeInfo_29_29, mercury__pprint__TypeInfo_30_30, mercury__pprint__Depth_5, mercury__pprint__Map_15);
                                  }
#line 698 "pprint.m"
                                else
#line 701 "pprint.m"
                                  {
#line 701 "pprint.m"
                                    MR_Word mercury__pprint__TypeInfo_31_31;
#line 701 "pprint.m"
                                    MR_Word mercury__pprint__TypeInfo_32_32;
#line 701 "pprint.m"
                                    MR_Word mercury__pprint__MapPair_16;

#line 698 "pprint.m"
                                    {
#line 698 "pprint.m"
                                      mercury__pprint__succeeded = mercury__pprint__dynamic_cast_to_map_pair_2_p_0(mercury__pprint__TypeInfo_for_T_18, &mercury__pprint__TypeInfo_31_31, &mercury__pprint__TypeInfo_32_32, mercury__pprint__X_7, &mercury__pprint__MapPair_16);
                                    }
#line 701 "pprint.m"
                                    if (mercury__pprint__succeeded)
#line 699 "pprint.m"
                                      {
#line 699 "pprint.m"
                                        return mercury__pprint__HeadVar__4_4 = mercury__pprint__map_pair_to_doc_2_f_0(mercury__pprint__TypeInfo_31_31, mercury__pprint__TypeInfo_32_32, mercury__pprint__Depth_5, mercury__pprint__MapPair_16);
                                      }
#line 701 "pprint.m"
                                    else
#line 704 "pprint.m"
                                      {
#line 704 "pprint.m"
                                        MR_Word mercury__pprint__TypeInfo_33_33;
#line 704 "pprint.m"
                                        MR_Word mercury__pprint__Robdd_17;

#line 701 "pprint.m"
                                        {
#line 701 "pprint.m"
                                          mercury__pprint__succeeded = mercury__pprint__dynamic_cast_to_robdd_2_p_0(mercury__pprint__TypeInfo_for_T_18, &mercury__pprint__TypeInfo_33_33, mercury__pprint__X_7, &mercury__pprint__Robdd_17);
                                        }
#line 704 "pprint.m"
                                        if (mercury__pprint__succeeded)
#line 702 "pprint.m"
                                          {
#line 702 "pprint.m"
                                            return mercury__pprint__HeadVar__4_4 = mercury__pprint__robdd_to_doc_2_f_0(mercury__pprint__TypeInfo_33_33, mercury__pprint__Depth_5, mercury__pprint__Robdd_17);
                                          }
#line 704 "pprint.m"
                                        else
#line 704 "pprint.m"
                                          {
#line 704 "pprint.m"
                                            return mercury__pprint__HeadVar__4_4 = mercury__pprint__generic_term_to_doc_3_f_0(mercury__pprint__TypeInfo_for_T_18, mercury__pprint__Depth_5, mercury__pprint__Priority_6, mercury__pprint__X_7);
                                          }
#line 704 "pprint.m"
                                      }
#line 701 "pprint.m"
                                  }
#line 698 "pprint.m"
                              }
#line 695 "pprint.m"
                          }
#line 692 "pprint.m"
                      }
#line 689 "pprint.m"
                  }
#line 686 "pprint.m"
              }
#line 683 "pprint.m"
          }
#line 680 "pprint.m"
      }
#line 673 "pprint.m"
    return mercury__pprint__HeadVar__4_4;
#line 673 "pprint.m"
  }
#line 671 "pprint.m"
}

#line 572 "pprint.m"
static MR_String MR_CALL 
mercury__pprint__extend_2_f_0(
#line 572 "pprint.m"
  MR_String mercury__pprint__I_4,
#line 572 "pprint.m"
  MR_Integer mercury__pprint__J_5)
#line 572 "pprint.m"
{
#line 574 "pprint.m"
  {
#line 574 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 574 "pprint.m"
    MR_String mercury__pprint__HeadVar__3_3;
#line 574 "pprint.m"
    MR_Word mercury__pprint__TypeCtorInfo_8_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 574 "pprint.m"
    MR_String mercury__pprint__V_6_6;
#line 574 "pprint.m"
    MR_Word mercury__pprint__V_7_14;
#line 574 "pprint.m"
    MR_Word mercury__pprint__V_6_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 145 "list.opt"
    {
#line 145 "list.opt"
      mercury__pprint__V_7_14 = mercury__list__duplicate_2_3_f_0(mercury__pprint__TypeCtorInfo_8_15, mercury__pprint__J_5, ((MR_Box) (MR_Word) ((MR_Char) 32)), mercury__pprint__V_6_22);
    }
#line 149 "string.opt"
    {
#line 149 "string.opt"
      mercury__string__from_char_list_2_p_0(mercury__pprint__V_7_14, &mercury__pprint__V_6_6);
    }
#line 415 "string.opt"
    {
#line 415 "string.opt"
      mercury__string__append_3_p_2(mercury__pprint__I_4, mercury__pprint__V_6_6, &mercury__pprint__HeadVar__3_3);
    }
#line 574 "pprint.m"
    return mercury__pprint__HeadVar__3_3;
#line 574 "pprint.m"
  }
#line 572 "pprint.m"
}

#line 525 "pprint.m"
static MR_bool MR_CALL 
mercury__pprint__ff_2_f_0(
#line 525 "pprint.m"
  MR_Word mercury__pprint__HeadVar__1_1,
#line 525 "pprint.m"
  MR_Integer mercury__pprint__R_2,
#line 525 "pprint.m"
  MR_Integer * mercury__pprint__HeadVar__3_3)
#line 525 "pprint.m"
{
#line 527 "pprint.m"
  while (MR_TRUE)
#line 527 "pprint.m"
    {
#line 527 "pprint.m"
      /* tailcall optimized into a loop */
#line 527 "pprint.m"
      {
#line 527 "pprint.m"
        MR_bool mercury__pprint__succeeded;

#line 527 "pprint.m"
#line 527 "pprint.m"
        switch (MR_tag((MR_Word) mercury__pprint__HeadVar__1_1)) {
#line 527 "pprint.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 527 "pprint.m"
          case (MR_Integer) 0:
#line 527 "pprint.m"
#line 527 "pprint.m"
            switch (MR_unmkbody(mercury__pprint__HeadVar__1_1)) {
#line 527 "pprint.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 527 "pprint.m"
              case (MR_Integer) 0:
#line 527 "pprint.m"
                {
#line 527 "pprint.m"
                  *mercury__pprint__HeadVar__3_3 = mercury__pprint__R_2;
#line 527 "pprint.m"
                  mercury__pprint__succeeded = MR_TRUE;
#line 527 "pprint.m"
                }
#line 527 "pprint.m"
                break;
#line 527 "pprint.m"
              case (MR_Integer) 1:
#line 531 "pprint.m"
                {
#line 531 "pprint.m"
                  *mercury__pprint__HeadVar__3_3 = mercury__pprint__R_2;
#line 531 "pprint.m"
                  mercury__pprint__succeeded = MR_TRUE;
#line 531 "pprint.m"
                }
#line 527 "pprint.m"
                break;
#line 527 "pprint.m"
            }
#line 527 "pprint.m"
            break;
#line 527 "pprint.m"
          case (MR_Integer) 1:
#line 528 "pprint.m"
            {
#line 528 "pprint.m"
              MR_Word mercury__pprint__X_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, (MR_Integer) 0)));
#line 528 "pprint.m"
              MR_Word mercury__pprint__Y_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, (MR_Integer) 1)));
#line 528 "pprint.m"
              MR_Integer mercury__pprint__V_8_8;

#line 528 "pprint.m"
              {
#line 528 "pprint.m"
                mercury__pprint__succeeded = mercury__pprint__ff_2_f_0(mercury__pprint__X_5, mercury__pprint__R_2, &mercury__pprint__V_8_8);
              }
#line 528 "pprint.m"
              if (mercury__pprint__succeeded)
#line 528 "pprint.m"
                {
#line 528 "pprint.m"
                  /* direct tailcall eliminated */
#line 528 "pprint.m"
                  {
#line 528 "pprint.m"
                    MR_Word mercury__pprint__HeadVar__1__tmp_copy_1 = mercury__pprint__Y_6;
#line 528 "pprint.m"
                    MR_Integer mercury__pprint__R__tmp_copy_2 = mercury__pprint__V_8_8;

#line 528 "pprint.m"
                    mercury__pprint__R_2 = mercury__pprint__R__tmp_copy_2;
#line 528 "pprint.m"
                    mercury__pprint__HeadVar__1_1 = mercury__pprint__HeadVar__1__tmp_copy_1;
#line 528 "pprint.m"
                  }
#line 528 "pprint.m"
                  continue;
#line 528 "pprint.m"
                }
#line 528 "pprint.m"
            }
#line 527 "pprint.m"
            break;
#line 527 "pprint.m"
          case (MR_Integer) 2:
#line 529 "pprint.m"
            {
#line 529 "pprint.m"
              MR_Word mercury__pprint__X_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__1_1, (MR_Integer) 1)));
#line 529 "pprint.m"
              MR_Integer mercury__pprint__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__1_1, (MR_Integer) 0)));

#line 529 "pprint.m"
              /* direct tailcall eliminated */
#line 529 "pprint.m"
              {
#line 529 "pprint.m"
                MR_Word mercury__pprint__HeadVar__1__tmp_copy_1 = mercury__pprint__X_10;

#line 529 "pprint.m"
                mercury__pprint__HeadVar__1_1 = mercury__pprint__HeadVar__1__tmp_copy_1;
#line 529 "pprint.m"
              }
#line 529 "pprint.m"
              continue;
#line 529 "pprint.m"
            }
#line 527 "pprint.m"
            break;
#line 527 "pprint.m"
          case (MR_Integer) 3:
#line 527 "pprint.m"
#line 527 "pprint.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__1_1, (MR_Integer) 0)))) {
#line 527 "pprint.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 527 "pprint.m"
              case (MR_Integer) 0:
#line 530 "pprint.m"
                {
#line 530 "pprint.m"
                  MR_Word mercury__pprint__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__1_1, (MR_Integer) 2)));
#line 530 "pprint.m"
                  MR_String mercury__pprint__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__1_1, (MR_Integer) 1)));

#line 530 "pprint.m"
                  /* direct tailcall eliminated */
#line 530 "pprint.m"
                  {
#line 530 "pprint.m"
                    MR_Word mercury__pprint__HeadVar__1__tmp_copy_1 = mercury__pprint__X_13;

#line 530 "pprint.m"
                    mercury__pprint__HeadVar__1_1 = mercury__pprint__HeadVar__1__tmp_copy_1;
#line 530 "pprint.m"
                  }
#line 530 "pprint.m"
                  continue;
#line 530 "pprint.m"
                }
#line 527 "pprint.m"
                break;
#line 527 "pprint.m"
              case (MR_Integer) 1:
#line 534 "pprint.m"
                {
#line 534 "pprint.m"
                  MR_String mercury__pprint__S_23 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__1_1, (MR_Integer) 1)));
#line 534 "pprint.m"
                  MR_Integer mercury__pprint__L_25;

#line 258 "string.opt"
                  {
#line 258 "string.opt"
                    mercury__string__count_codepoints_2_p_0(mercury__pprint__S_23, &mercury__pprint__L_25);
                  }
#line 534 "pprint.m"
                  *mercury__pprint__HeadVar__3_3 = (mercury__pprint__R_2 - mercury__pprint__L_25);
#line 536 "pprint.m"
                  mercury__pprint__succeeded = (mercury__pprint__R_2 > mercury__pprint__L_25);
#line 534 "pprint.m"
                }
#line 527 "pprint.m"
                break;
#line 527 "pprint.m"
              case (MR_Integer) 2:
#line 532 "pprint.m"
                {
#line 532 "pprint.m"
                  MR_Word mercury__pprint__X_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__1_1, (MR_Integer) 1)));

#line 532 "pprint.m"
                  /* direct tailcall eliminated */
#line 532 "pprint.m"
                  {
#line 532 "pprint.m"
                    MR_Word mercury__pprint__HeadVar__1__tmp_copy_1 = mercury__pprint__X_16;

#line 532 "pprint.m"
                    mercury__pprint__HeadVar__1_1 = mercury__pprint__HeadVar__1__tmp_copy_1;
#line 532 "pprint.m"
                  }
#line 532 "pprint.m"
                  continue;
#line 532 "pprint.m"
                }
#line 527 "pprint.m"
                break;
#line 527 "pprint.m"
              case (MR_Integer) 3:
#line 533 "pprint.m"
                {
#line 533 "pprint.m"
                  MR_Word mercury__pprint__TypeInfo_26_26;
#line 533 "pprint.m"
                  MR_Integer mercury__pprint__D_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__1_1, (MR_Integer) 1)));
#line 533 "pprint.m"
                  MR_Word mercury__pprint__U_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__1_1, (MR_Integer) 2)));
#line 533 "pprint.m"
                  MR_Word mercury__pprint__V_21_21;
#line 533 "pprint.m"
                  MR_Box mercury__pprint__V_22_22;

#line 12 "univ.opt"
                  mercury__pprint__TypeInfo_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_19, (MR_Integer) 0)));
#line 12 "univ.opt"
                  mercury__pprint__V_22_22 = (MR_hl_field(MR_mktag(0), mercury__pprint__U_19, (MR_Integer) 1));
#line 664 "pprint.m"
                  {
#line 664 "pprint.m"
                    mercury__pprint__V_21_21 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_26_26, mercury__pprint__D_18, (MR_Integer) 1000, mercury__pprint__V_22_22);
                  }
#line 533 "pprint.m"
                  /* direct tailcall eliminated */
#line 533 "pprint.m"
                  {
#line 533 "pprint.m"
                    MR_Word mercury__pprint__HeadVar__1__tmp_copy_1 = mercury__pprint__V_21_21;

#line 533 "pprint.m"
                    mercury__pprint__HeadVar__1_1 = mercury__pprint__HeadVar__1__tmp_copy_1;
#line 533 "pprint.m"
                  }
#line 533 "pprint.m"
                  continue;
#line 533 "pprint.m"
                }
#line 527 "pprint.m"
                break;
#line 527 "pprint.m"
            }
#line 527 "pprint.m"
            break;
#line 527 "pprint.m"
        }
#line 527 "pprint.m"
        return mercury__pprint__succeeded;
#line 527 "pprint.m"
      }
#line 527 "pprint.m"
      break;
#line 527 "pprint.m"
    }
#line 525 "pprint.m"
}

#line 485 "pprint.m"
void MR_CALL 
mercury__pprint__lb_8_p_1(
#line 485 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T_83,
#line 485 "pprint.m"
  MR_Word mercury__pprint__P_1,
#line 485 "pprint.m"
  MR_Integer mercury__pprint__W_2,
#line 485 "pprint.m"
  MR_Integer mercury__pprint__HeadVar__3_3,
#line 485 "pprint.m"
  MR_Integer * mercury__pprint__K_4,
#line 485 "pprint.m"
  MR_String mercury__pprint__I_5,
#line 485 "pprint.m"
  MR_Word mercury__pprint__HeadVar__6_6,
#line 485 "pprint.m"
  MR_Box mercury__pprint__HeadVar__7_7,
#line 485 "pprint.m"
  MR_Box * mercury__pprint__S_8)
#line 485 "pprint.m"
{
#line 487 "pprint.m"
  while (MR_TRUE)
#line 487 "pprint.m"
    {
#line 487 "pprint.m"
      /* tailcall optimized into a loop */
#line 487 "pprint.m"
      {
#line 487 "pprint.m"
        MR_bool mercury__pprint__succeeded;

#line 487 "pprint.m"
#line 487 "pprint.m"
        switch (MR_tag((MR_Word) mercury__pprint__HeadVar__6_6)) {
#line 487 "pprint.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 487 "pprint.m"
          case (MR_Integer) 0:
#line 487 "pprint.m"
#line 487 "pprint.m"
            switch (MR_unmkbody(mercury__pprint__HeadVar__6_6)) {
#line 487 "pprint.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 487 "pprint.m"
              case (MR_Integer) 0:
#line 487 "pprint.m"
                {
#line 487 "pprint.m"
                  *mercury__pprint__K_4 = mercury__pprint__HeadVar__3_3;
#line 487 "pprint.m"
                  *mercury__pprint__S_8 = mercury__pprint__HeadVar__7_7;
#line 487 "pprint.m"
                }
#line 487 "pprint.m"
                break;
#line 487 "pprint.m"
              case (MR_Integer) 1:
#line 499 "pprint.m"
                {
#line 499 "pprint.m"
                  MR_Box mercury__pprint__S1_52;
#line 501 "pprint.m"
                  void MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 502 "pprint.m"
                  void MR_CALL (* mercury__pprint__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 500 "pprint.m"
                  {
#line 500 "pprint.m"
                    *mercury__pprint__K_4 = mercury__string__count_codepoints_1_f_0(mercury__pprint__I_5);
                  }
#line 501 "pprint.m"
                  mercury__pprint__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__pprint__P_1, (MR_Integer) 1)));
#line 501 "pprint.m"
                  {
#line 501 "pprint.m"
                    mercury__pprint__func_0(((MR_Box) mercury__pprint__P_1), ((MR_Box) ((MR_String) "\n")), mercury__pprint__HeadVar__7_7, &mercury__pprint__S1_52);
                  }
#line 502 "pprint.m"
                  mercury__pprint__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__pprint__P_1, (MR_Integer) 1)));
#line 502 "pprint.m"
                  {
#line 502 "pprint.m"
                    mercury__pprint__func_1(((MR_Box) mercury__pprint__P_1), ((MR_Box) (mercury__pprint__I_5)), mercury__pprint__S1_52, mercury__pprint__S_8);
#line 502 "pprint.m"
                    return;
                  }
#line 499 "pprint.m"
                }
#line 487 "pprint.m"
                break;
#line 487 "pprint.m"
            }
#line 487 "pprint.m"
            break;
#line 487 "pprint.m"
          case (MR_Integer) 1:
#line 489 "pprint.m"
            {
#line 489 "pprint.m"
              MR_Word mercury__pprint__X_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__6_6, (MR_Integer) 0)));
#line 489 "pprint.m"
              MR_Word mercury__pprint__Y_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
#line 489 "pprint.m"
              MR_Integer mercury__pprint__K1_23;
#line 489 "pprint.m"
              MR_Box mercury__pprint__S1_24;

#line 490 "pprint.m"
              {
#line 490 "pprint.m"
                mercury__pprint__lb_8_p_1(mercury__pprint__TypeInfo_for_T_83, mercury__pprint__P_1, mercury__pprint__W_2, mercury__pprint__HeadVar__3_3, &mercury__pprint__K1_23, mercury__pprint__I_5, mercury__pprint__X_19, mercury__pprint__HeadVar__7_7, &mercury__pprint__S1_24);
              }
#line 491 "pprint.m"
              /* direct tailcall eliminated */
#line 491 "pprint.m"
              {
#line 491 "pprint.m"
                MR_Integer mercury__pprint__HeadVar__3__tmp_copy_3 = mercury__pprint__K1_23;
#line 491 "pprint.m"
                MR_Word mercury__pprint__HeadVar__6__tmp_copy_6 = mercury__pprint__Y_20;
#line 491 "pprint.m"
                MR_Box mercury__pprint__HeadVar__7__tmp_copy_7 = mercury__pprint__S1_24;

#line 491 "pprint.m"
                mercury__pprint__HeadVar__7_7 = mercury__pprint__HeadVar__7__tmp_copy_7;
#line 491 "pprint.m"
                mercury__pprint__HeadVar__6_6 = mercury__pprint__HeadVar__6__tmp_copy_6;
#line 491 "pprint.m"
                mercury__pprint__HeadVar__3_3 = mercury__pprint__HeadVar__3__tmp_copy_3;
#line 491 "pprint.m"
              }
#line 491 "pprint.m"
              continue;
#line 489 "pprint.m"
            }
#line 487 "pprint.m"
            break;
#line 487 "pprint.m"
          case (MR_Integer) 2:
#line 493 "pprint.m"
            {
#line 493 "pprint.m"
              MR_Integer mercury__pprint__J_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__6_6, (MR_Integer) 0)));
#line 493 "pprint.m"
              MR_Word mercury__pprint__X_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
#line 493 "pprint.m"
              MR_String mercury__pprint__V_34_34;

#line 494 "pprint.m"
              {
#line 494 "pprint.m"
                mercury__pprint__V_34_34 = mercury__pprint__extend_2_f_0(mercury__pprint__I_5, mercury__pprint__J_30);
              }
#line 494 "pprint.m"
              /* direct tailcall eliminated */
#line 494 "pprint.m"
              {
#line 494 "pprint.m"
                MR_String mercury__pprint__I__tmp_copy_5 = mercury__pprint__V_34_34;
#line 494 "pprint.m"
                MR_Word mercury__pprint__HeadVar__6__tmp_copy_6 = mercury__pprint__X_31;

#line 494 "pprint.m"
                mercury__pprint__HeadVar__6_6 = mercury__pprint__HeadVar__6__tmp_copy_6;
#line 494 "pprint.m"
                mercury__pprint__I_5 = mercury__pprint__I__tmp_copy_5;
#line 494 "pprint.m"
              }
#line 494 "pprint.m"
              continue;
#line 493 "pprint.m"
            }
#line 487 "pprint.m"
            break;
#line 487 "pprint.m"
          case (MR_Integer) 3:
#line 487 "pprint.m"
#line 487 "pprint.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 0)))) {
#line 487 "pprint.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 487 "pprint.m"
              case (MR_Integer) 0:
#line 496 "pprint.m"
                {
#line 496 "pprint.m"
                  MR_String mercury__pprint__L_40 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
#line 496 "pprint.m"
                  MR_Word mercury__pprint__X_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 2)));
#line 496 "pprint.m"
                  MR_String mercury__pprint__V_44_44;

#line 415 "string.opt"
                  {
#line 415 "string.opt"
                    mercury__string__append_3_p_2(mercury__pprint__I_5, mercury__pprint__L_40, &mercury__pprint__V_44_44);
                  }
#line 497 "pprint.m"
                  /* direct tailcall eliminated */
#line 497 "pprint.m"
                  {
#line 497 "pprint.m"
                    MR_String mercury__pprint__I__tmp_copy_5 = mercury__pprint__V_44_44;
#line 497 "pprint.m"
                    MR_Word mercury__pprint__HeadVar__6__tmp_copy_6 = mercury__pprint__X_41;

#line 497 "pprint.m"
                    mercury__pprint__HeadVar__6_6 = mercury__pprint__HeadVar__6__tmp_copy_6;
#line 497 "pprint.m"
                    mercury__pprint__I_5 = mercury__pprint__I__tmp_copy_5;
#line 497 "pprint.m"
                  }
#line 497 "pprint.m"
                  continue;
#line 496 "pprint.m"
                }
#line 487 "pprint.m"
                break;
#line 487 "pprint.m"
              case (MR_Integer) 1:
#line 512 "pprint.m"
                {
#line 512 "pprint.m"
                  MR_String mercury__pprint__T_79 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
#line 512 "pprint.m"
                  MR_Integer mercury__pprint__V_82_82;
#line 514 "pprint.m"
                  void MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 513 "pprint.m"
                  {
#line 513 "pprint.m"
                    mercury__pprint__V_82_82 = mercury__string__count_codepoints_1_f_0(mercury__pprint__T_79);
                  }
#line 513 "pprint.m"
                  *mercury__pprint__K_4 = (mercury__pprint__HeadVar__3_3 + mercury__pprint__V_82_82);
#line 514 "pprint.m"
                  mercury__pprint__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__pprint__P_1, (MR_Integer) 1)));
#line 514 "pprint.m"
                  {
#line 514 "pprint.m"
                    mercury__pprint__func_2(((MR_Box) mercury__pprint__P_1), ((MR_Box) (mercury__pprint__T_79)), mercury__pprint__HeadVar__7_7, mercury__pprint__S_8);
#line 514 "pprint.m"
                    return;
                  }
#line 512 "pprint.m"
                }
#line 487 "pprint.m"
                break;
#line 487 "pprint.m"
              case (MR_Integer) 2:
#line 504 "pprint.m"
                {
#line 504 "pprint.m"
                  MR_Word mercury__pprint__X_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
#line 505 "pprint.m"
                  MR_Integer mercury__pprint__V_62_62 = (mercury__pprint__W_2 - mercury__pprint__HeadVar__3_3);
#line 523 "pprint.m"
                  MR_Integer mercury__pprint__V_91_91;

#line 523 "pprint.m"
                  {
#line 523 "pprint.m"
                    mercury__pprint__succeeded = mercury__pprint__ff_2_f_0(mercury__pprint__X_59, mercury__pprint__V_62_62, &mercury__pprint__V_91_91);
                  }
#line 506 "pprint.m"
                  if (mercury__pprint__succeeded)
#line 505 "pprint.m"
                    {
#line 505 "pprint.m"
                      mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_p_1(mercury__pprint__P_1, mercury__pprint__HeadVar__3_3, mercury__pprint__K_4, mercury__pprint__X_59, mercury__pprint__HeadVar__7_7, mercury__pprint__S_8);
#line 505 "pprint.m"
                      return;
                    }
#line 506 "pprint.m"
                  else
#line 506 "pprint.m"
                    {
#line 506 "pprint.m"
                      /* direct tailcall eliminated */
#line 506 "pprint.m"
                      {
#line 506 "pprint.m"
                        MR_Word mercury__pprint__HeadVar__6__tmp_copy_6 = mercury__pprint__X_59;

#line 506 "pprint.m"
                        mercury__pprint__HeadVar__6_6 = mercury__pprint__HeadVar__6__tmp_copy_6;
#line 506 "pprint.m"
                      }
#line 506 "pprint.m"
                      continue;
#line 506 "pprint.m"
                    }
#line 504 "pprint.m"
                }
#line 487 "pprint.m"
                break;
#line 487 "pprint.m"
              case (MR_Integer) 3:
#line 509 "pprint.m"
                {
#line 509 "pprint.m"
                  MR_Word mercury__pprint__TypeInfo_84_84;
#line 509 "pprint.m"
                  MR_Integer mercury__pprint__D_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
#line 509 "pprint.m"
                  MR_Word mercury__pprint__U_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 2)));
#line 509 "pprint.m"
                  MR_Word mercury__pprint__V_72_72;
#line 509 "pprint.m"
                  MR_Box mercury__pprint__V_73_73;

#line 12 "univ.opt"
                  mercury__pprint__TypeInfo_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_69, (MR_Integer) 0)));
#line 12 "univ.opt"
                  mercury__pprint__V_73_73 = (MR_hl_field(MR_mktag(0), mercury__pprint__U_69, (MR_Integer) 1));
#line 664 "pprint.m"
                  {
#line 664 "pprint.m"
                    mercury__pprint__V_72_72 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_84_84, mercury__pprint__D_68, (MR_Integer) 1000, mercury__pprint__V_73_73);
                  }
#line 510 "pprint.m"
                  /* direct tailcall eliminated */
#line 510 "pprint.m"
                  {
#line 510 "pprint.m"
                    MR_Word mercury__pprint__HeadVar__6__tmp_copy_6 = mercury__pprint__V_72_72;

#line 510 "pprint.m"
                    mercury__pprint__HeadVar__6_6 = mercury__pprint__HeadVar__6__tmp_copy_6;
#line 510 "pprint.m"
                  }
#line 510 "pprint.m"
                  continue;
#line 509 "pprint.m"
                }
#line 487 "pprint.m"
                break;
#line 487 "pprint.m"
            }
#line 487 "pprint.m"
            break;
#line 487 "pprint.m"
        }
#line 487 "pprint.m"
      }
#line 487 "pprint.m"
      break;
#line 487 "pprint.m"
    }
#line 485 "pprint.m"
}

#line 484 "pprint.m"
void MR_CALL 
mercury__pprint__lb_8_p_0(
#line 484 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T_83,
#line 484 "pprint.m"
  MR_Word mercury__pprint__P_1,
#line 484 "pprint.m"
  MR_Integer mercury__pprint__W_2,
#line 484 "pprint.m"
  MR_Integer mercury__pprint__HeadVar__3_3,
#line 484 "pprint.m"
  MR_Integer * mercury__pprint__K_4,
#line 484 "pprint.m"
  MR_String mercury__pprint__I_5,
#line 484 "pprint.m"
  MR_Word mercury__pprint__HeadVar__6_6,
#line 484 "pprint.m"
  MR_Box mercury__pprint__HeadVar__7_7,
#line 484 "pprint.m"
  MR_Box * mercury__pprint__S_8)
#line 484 "pprint.m"
{
#line 487 "pprint.m"
  while (MR_TRUE)
#line 487 "pprint.m"
    {
#line 487 "pprint.m"
      /* tailcall optimized into a loop */
#line 487 "pprint.m"
      {
#line 487 "pprint.m"
        MR_bool mercury__pprint__succeeded;

#line 487 "pprint.m"
#line 487 "pprint.m"
        switch (MR_tag((MR_Word) mercury__pprint__HeadVar__6_6)) {
#line 487 "pprint.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 487 "pprint.m"
          case (MR_Integer) 0:
#line 487 "pprint.m"
#line 487 "pprint.m"
            switch (MR_unmkbody(mercury__pprint__HeadVar__6_6)) {
#line 487 "pprint.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 487 "pprint.m"
              case (MR_Integer) 0:
#line 487 "pprint.m"
                {
#line 487 "pprint.m"
                  *mercury__pprint__K_4 = mercury__pprint__HeadVar__3_3;
#line 487 "pprint.m"
                  *mercury__pprint__S_8 = mercury__pprint__HeadVar__7_7;
#line 487 "pprint.m"
                }
#line 487 "pprint.m"
                break;
#line 487 "pprint.m"
              case (MR_Integer) 1:
#line 499 "pprint.m"
                {
#line 499 "pprint.m"
                  MR_Box mercury__pprint__S1_52;
#line 501 "pprint.m"
                  void MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 502 "pprint.m"
                  void MR_CALL (* mercury__pprint__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 500 "pprint.m"
                  {
#line 500 "pprint.m"
                    *mercury__pprint__K_4 = mercury__string__count_codepoints_1_f_0(mercury__pprint__I_5);
                  }
#line 501 "pprint.m"
                  mercury__pprint__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__pprint__P_1, (MR_Integer) 1)));
#line 501 "pprint.m"
                  {
#line 501 "pprint.m"
                    mercury__pprint__func_0(((MR_Box) mercury__pprint__P_1), ((MR_Box) ((MR_String) "\n")), mercury__pprint__HeadVar__7_7, &mercury__pprint__S1_52);
                  }
#line 502 "pprint.m"
                  mercury__pprint__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__pprint__P_1, (MR_Integer) 1)));
#line 502 "pprint.m"
                  {
#line 502 "pprint.m"
                    mercury__pprint__func_1(((MR_Box) mercury__pprint__P_1), ((MR_Box) (mercury__pprint__I_5)), mercury__pprint__S1_52, mercury__pprint__S_8);
#line 502 "pprint.m"
                    return;
                  }
#line 499 "pprint.m"
                }
#line 487 "pprint.m"
                break;
#line 487 "pprint.m"
            }
#line 487 "pprint.m"
            break;
#line 487 "pprint.m"
          case (MR_Integer) 1:
#line 489 "pprint.m"
            {
#line 489 "pprint.m"
              MR_Word mercury__pprint__X_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__6_6, (MR_Integer) 0)));
#line 489 "pprint.m"
              MR_Word mercury__pprint__Y_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
#line 489 "pprint.m"
              MR_Integer mercury__pprint__K1_23;
#line 489 "pprint.m"
              MR_Box mercury__pprint__S1_24;

#line 490 "pprint.m"
              {
#line 490 "pprint.m"
                mercury__pprint__lb_8_p_0(mercury__pprint__TypeInfo_for_T_83, mercury__pprint__P_1, mercury__pprint__W_2, mercury__pprint__HeadVar__3_3, &mercury__pprint__K1_23, mercury__pprint__I_5, mercury__pprint__X_19, mercury__pprint__HeadVar__7_7, &mercury__pprint__S1_24);
              }
#line 491 "pprint.m"
              /* direct tailcall eliminated */
#line 491 "pprint.m"
              {
#line 491 "pprint.m"
                MR_Integer mercury__pprint__HeadVar__3__tmp_copy_3 = mercury__pprint__K1_23;
#line 491 "pprint.m"
                MR_Word mercury__pprint__HeadVar__6__tmp_copy_6 = mercury__pprint__Y_20;
#line 491 "pprint.m"
                MR_Box mercury__pprint__HeadVar__7__tmp_copy_7 = mercury__pprint__S1_24;

#line 491 "pprint.m"
                mercury__pprint__HeadVar__7_7 = mercury__pprint__HeadVar__7__tmp_copy_7;
#line 491 "pprint.m"
                mercury__pprint__HeadVar__6_6 = mercury__pprint__HeadVar__6__tmp_copy_6;
#line 491 "pprint.m"
                mercury__pprint__HeadVar__3_3 = mercury__pprint__HeadVar__3__tmp_copy_3;
#line 491 "pprint.m"
              }
#line 491 "pprint.m"
              continue;
#line 489 "pprint.m"
            }
#line 487 "pprint.m"
            break;
#line 487 "pprint.m"
          case (MR_Integer) 2:
#line 493 "pprint.m"
            {
#line 493 "pprint.m"
              MR_Integer mercury__pprint__J_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__6_6, (MR_Integer) 0)));
#line 493 "pprint.m"
              MR_Word mercury__pprint__X_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
#line 493 "pprint.m"
              MR_String mercury__pprint__V_34_34;

#line 494 "pprint.m"
              {
#line 494 "pprint.m"
                mercury__pprint__V_34_34 = mercury__pprint__extend_2_f_0(mercury__pprint__I_5, mercury__pprint__J_30);
              }
#line 494 "pprint.m"
              /* direct tailcall eliminated */
#line 494 "pprint.m"
              {
#line 494 "pprint.m"
                MR_String mercury__pprint__I__tmp_copy_5 = mercury__pprint__V_34_34;
#line 494 "pprint.m"
                MR_Word mercury__pprint__HeadVar__6__tmp_copy_6 = mercury__pprint__X_31;

#line 494 "pprint.m"
                mercury__pprint__HeadVar__6_6 = mercury__pprint__HeadVar__6__tmp_copy_6;
#line 494 "pprint.m"
                mercury__pprint__I_5 = mercury__pprint__I__tmp_copy_5;
#line 494 "pprint.m"
              }
#line 494 "pprint.m"
              continue;
#line 493 "pprint.m"
            }
#line 487 "pprint.m"
            break;
#line 487 "pprint.m"
          case (MR_Integer) 3:
#line 487 "pprint.m"
#line 487 "pprint.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 0)))) {
#line 487 "pprint.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 487 "pprint.m"
              case (MR_Integer) 0:
#line 496 "pprint.m"
                {
#line 496 "pprint.m"
                  MR_String mercury__pprint__L_40 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
#line 496 "pprint.m"
                  MR_Word mercury__pprint__X_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 2)));
#line 496 "pprint.m"
                  MR_String mercury__pprint__V_44_44;

#line 415 "string.opt"
                  {
#line 415 "string.opt"
                    mercury__string__append_3_p_2(mercury__pprint__I_5, mercury__pprint__L_40, &mercury__pprint__V_44_44);
                  }
#line 497 "pprint.m"
                  /* direct tailcall eliminated */
#line 497 "pprint.m"
                  {
#line 497 "pprint.m"
                    MR_String mercury__pprint__I__tmp_copy_5 = mercury__pprint__V_44_44;
#line 497 "pprint.m"
                    MR_Word mercury__pprint__HeadVar__6__tmp_copy_6 = mercury__pprint__X_41;

#line 497 "pprint.m"
                    mercury__pprint__HeadVar__6_6 = mercury__pprint__HeadVar__6__tmp_copy_6;
#line 497 "pprint.m"
                    mercury__pprint__I_5 = mercury__pprint__I__tmp_copy_5;
#line 497 "pprint.m"
                  }
#line 497 "pprint.m"
                  continue;
#line 496 "pprint.m"
                }
#line 487 "pprint.m"
                break;
#line 487 "pprint.m"
              case (MR_Integer) 1:
#line 512 "pprint.m"
                {
#line 512 "pprint.m"
                  MR_String mercury__pprint__T_79 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
#line 512 "pprint.m"
                  MR_Integer mercury__pprint__V_82_82;
#line 514 "pprint.m"
                  void MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 513 "pprint.m"
                  {
#line 513 "pprint.m"
                    mercury__pprint__V_82_82 = mercury__string__count_codepoints_1_f_0(mercury__pprint__T_79);
                  }
#line 513 "pprint.m"
                  *mercury__pprint__K_4 = (mercury__pprint__HeadVar__3_3 + mercury__pprint__V_82_82);
#line 514 "pprint.m"
                  mercury__pprint__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__pprint__P_1, (MR_Integer) 1)));
#line 514 "pprint.m"
                  {
#line 514 "pprint.m"
                    mercury__pprint__func_2(((MR_Box) mercury__pprint__P_1), ((MR_Box) (mercury__pprint__T_79)), mercury__pprint__HeadVar__7_7, mercury__pprint__S_8);
#line 514 "pprint.m"
                    return;
                  }
#line 512 "pprint.m"
                }
#line 487 "pprint.m"
                break;
#line 487 "pprint.m"
              case (MR_Integer) 2:
#line 504 "pprint.m"
                {
#line 504 "pprint.m"
                  MR_Word mercury__pprint__X_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
#line 505 "pprint.m"
                  MR_Integer mercury__pprint__V_62_62 = (mercury__pprint__W_2 - mercury__pprint__HeadVar__3_3);
#line 523 "pprint.m"
                  MR_Integer mercury__pprint__V_91_91;

#line 523 "pprint.m"
                  {
#line 523 "pprint.m"
                    mercury__pprint__succeeded = mercury__pprint__ff_2_f_0(mercury__pprint__X_59, mercury__pprint__V_62_62, &mercury__pprint__V_91_91);
                  }
#line 506 "pprint.m"
                  if (mercury__pprint__succeeded)
#line 505 "pprint.m"
                    {
#line 505 "pprint.m"
                      mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_p_0(mercury__pprint__P_1, mercury__pprint__HeadVar__3_3, mercury__pprint__K_4, mercury__pprint__X_59, mercury__pprint__HeadVar__7_7, mercury__pprint__S_8);
#line 505 "pprint.m"
                      return;
                    }
#line 506 "pprint.m"
                  else
#line 506 "pprint.m"
                    {
#line 506 "pprint.m"
                      /* direct tailcall eliminated */
#line 506 "pprint.m"
                      {
#line 506 "pprint.m"
                        MR_Word mercury__pprint__HeadVar__6__tmp_copy_6 = mercury__pprint__X_59;

#line 506 "pprint.m"
                        mercury__pprint__HeadVar__6_6 = mercury__pprint__HeadVar__6__tmp_copy_6;
#line 506 "pprint.m"
                      }
#line 506 "pprint.m"
                      continue;
#line 506 "pprint.m"
                    }
#line 504 "pprint.m"
                }
#line 487 "pprint.m"
                break;
#line 487 "pprint.m"
              case (MR_Integer) 3:
#line 509 "pprint.m"
                {
#line 509 "pprint.m"
                  MR_Word mercury__pprint__TypeInfo_84_84;
#line 509 "pprint.m"
                  MR_Integer mercury__pprint__D_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
#line 509 "pprint.m"
                  MR_Word mercury__pprint__U_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 2)));
#line 509 "pprint.m"
                  MR_Word mercury__pprint__V_72_72;
#line 509 "pprint.m"
                  MR_Box mercury__pprint__V_73_73;

#line 12 "univ.opt"
                  mercury__pprint__TypeInfo_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_69, (MR_Integer) 0)));
#line 12 "univ.opt"
                  mercury__pprint__V_73_73 = (MR_hl_field(MR_mktag(0), mercury__pprint__U_69, (MR_Integer) 1));
#line 664 "pprint.m"
                  {
#line 664 "pprint.m"
                    mercury__pprint__V_72_72 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_84_84, mercury__pprint__D_68, (MR_Integer) 1000, mercury__pprint__V_73_73);
                  }
#line 510 "pprint.m"
                  /* direct tailcall eliminated */
#line 510 "pprint.m"
                  {
#line 510 "pprint.m"
                    MR_Word mercury__pprint__HeadVar__6__tmp_copy_6 = mercury__pprint__V_72_72;

#line 510 "pprint.m"
                    mercury__pprint__HeadVar__6_6 = mercury__pprint__HeadVar__6__tmp_copy_6;
#line 510 "pprint.m"
                  }
#line 510 "pprint.m"
                  continue;
#line 509 "pprint.m"
                }
#line 487 "pprint.m"
                break;
#line 487 "pprint.m"
            }
#line 487 "pprint.m"
            break;
#line 487 "pprint.m"
        }
#line 487 "pprint.m"
      }
#line 487 "pprint.m"
      break;
#line 487 "pprint.m"
    }
#line 484 "pprint.m"
}

#line 459 "pprint.m"
void MR_CALL 
mercury__pprint__layout_best_5_p_1(
#line 459 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T_14,
#line 459 "pprint.m"
  MR_Word mercury__pprint__P_6,
#line 459 "pprint.m"
  MR_Integer mercury__pprint__W_7,
#line 459 "pprint.m"
  MR_Word mercury__pprint__X_8,
#line 459 "pprint.m"
  MR_Box mercury__pprint__S0_9,
#line 459 "pprint.m"
  MR_Box * mercury__pprint__S_10)
#line 459 "pprint.m"
{
#line 461 "pprint.m"
  {
#line 461 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 462 "pprint.m"
    MR_Integer mercury__pprint__V_11_11;

#line 462 "pprint.m"
    {
#line 462 "pprint.m"
      mercury__pprint__lb_8_p_1(mercury__pprint__TypeInfo_for_T_14, mercury__pprint__P_6, mercury__pprint__W_7, (MR_Integer) 0, &mercury__pprint__V_11_11, (MR_String) "", mercury__pprint__X_8, mercury__pprint__S0_9, mercury__pprint__S_10);
    }
#line 461 "pprint.m"
  }
#line 459 "pprint.m"
}

#line 458 "pprint.m"
void MR_CALL 
mercury__pprint__layout_best_5_p_0(
#line 458 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T_14,
#line 458 "pprint.m"
  MR_Word mercury__pprint__P_6,
#line 458 "pprint.m"
  MR_Integer mercury__pprint__W_7,
#line 458 "pprint.m"
  MR_Word mercury__pprint__X_8,
#line 458 "pprint.m"
  MR_Box mercury__pprint__S0_9,
#line 458 "pprint.m"
  MR_Box * mercury__pprint__S_10)
#line 458 "pprint.m"
{
#line 461 "pprint.m"
  {
#line 461 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 462 "pprint.m"
    MR_Integer mercury__pprint__V_11_11;

#line 462 "pprint.m"
    {
#line 462 "pprint.m"
      mercury__pprint__lb_8_p_0(mercury__pprint__TypeInfo_for_T_14, mercury__pprint__P_6, mercury__pprint__W_7, (MR_Integer) 0, &mercury__pprint__V_11_11, (MR_String) "", mercury__pprint__X_8, mercury__pprint__S0_9, mercury__pprint__S_10);
    }
#line 461 "pprint.m"
  }
#line 458 "pprint.m"
}

#line 361 "pprint.m"
void MR_CALL 
mercury__pprint__write_5_p_0(
#line 361 "pprint.m"
  MR_Word mercury__pprint__TypeClassInfo_for_doc_15,
#line 361 "pprint.m"
  MR_Word mercury__pprint__TypeClassInfo_for_writer_16,
#line 361 "pprint.m"
  MR_Box mercury__pprint__Stream_6,
#line 361 "pprint.m"
  MR_Integer mercury__pprint__W_7,
#line 361 "pprint.m"
  MR_Box mercury__pprint__X_8,
#line 361 "pprint.m"
  MR_Box mercury__pprint__STATE_VARIABLE_State_0_10,
#line 361 "pprint.m"
  MR_Box * mercury__pprint__STATE_VARIABLE_State_11)
#line 361 "pprint.m"
{
#line 449 "pprint.m"
  {
#line 449 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 449 "pprint.m"
    MR_Word mercury__pprint__V_13_13;
#line 449 "pprint.m"
    MR_Integer mercury__pprint__V_23_23;
#line 12643 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 12645 "pprint.c"
    MR_Box mercury__pprint__conv1_V_13_13;
#line 462 "pprint.m"
    MR_Integer mercury__pprint__V_30_30;

#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__write_5_p_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 12671 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_23_23  = Max;
#line 141 "int.opt"
}
#line 12678 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_15, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12680 "pprint.c"
    {
#line 12682 "pprint.c"
      mercury__pprint__conv1_V_13_13 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_15), ((MR_Box) (mercury__pprint__V_23_23)), mercury__pprint__X_8);
    }
#line 12685 "pprint.c"
    mercury__pprint__V_13_13 = ((MR_Word) mercury__pprint__conv1_V_13_13);
#line 462 "pprint.m"
    {
#line 462 "pprint.m"
      mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_52_95_95_91_51_44_32_52_93_95_48_8_p_0(mercury__pprint__TypeClassInfo_for_writer_16, mercury__pprint__Stream_6, mercury__pprint__W_7, (MR_Integer) 0, &mercury__pprint__V_30_30, (MR_String) "", mercury__pprint__V_13_13, mercury__pprint__STATE_VARIABLE_State_0_10, mercury__pprint__STATE_VARIABLE_State_11);
    }
#line 449 "pprint.m"
  }
#line 361 "pprint.m"
}

#line 356 "pprint.m"
void MR_CALL 
mercury__pprint__write_4_p_0(
#line 356 "pprint.m"
  MR_Word mercury__pprint__TypeClassInfo_for_doc_13,
#line 356 "pprint.m"
  MR_Integer mercury__pprint__W_5,
#line 356 "pprint.m"
  MR_Box mercury__pprint__X_6)
#line 356 "pprint.m"
{
#line 446 "pprint.m"
  {
#line 446 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 446 "pprint.m"
    MR_Word mercury__pprint__V_11_11;
#line 446 "pprint.m"
    MR_Integer mercury__pprint__V_19_19;
#line 12716 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 12718 "pprint.c"
    MR_Box mercury__pprint__conv1_V_11_11;
#line 462 "pprint.m"
    MR_Integer mercury__pprint__V_27_27;

#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__write_4_p_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 12744 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_19_19  = Max;
#line 141 "int.opt"
}
#line 12751 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_13, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12753 "pprint.c"
    {
#line 12755 "pprint.c"
      mercury__pprint__conv1_V_11_11 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_13), ((MR_Box) (mercury__pprint__V_19_19)), mercury__pprint__X_6);
    }
#line 12758 "pprint.c"
    mercury__pprint__V_11_11 = ((MR_Word) mercury__pprint__conv1_V_11_11);
#line 462 "pprint.m"
    {
#line 462 "pprint.m"
      mercury__pprint__lb__ho43_8_p_0(mercury__pprint__W_5, (MR_Integer) 0, &mercury__pprint__V_27_27, (MR_String) "", mercury__pprint__V_11_11);
    }
#line 446 "pprint.m"
  }
#line 356 "pprint.m"
}

#line 351 "pprint.m"
MR_String MR_CALL 
mercury__pprint__to_string_2_f_0(
#line 351 "pprint.m"
  MR_Integer mercury__pprint__W_4,
#line 351 "pprint.m"
  MR_Word mercury__pprint__X_5)
#line 351 "pprint.m"
{
#line 442 "pprint.m"
  {
#line 442 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 442 "pprint.m"
    MR_String mercury__pprint__S_6;
#line 442 "pprint.m"
    MR_Word mercury__pprint__TypeCtorInfo_19_19;
#line 442 "pprint.m"
    MR_Word mercury__pprint__Ss_9;
#line 442 "pprint.m"
    MR_Word mercury__pprint__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 442 "pprint.m"
    MR_Word mercury__pprint__V_15_15;
#line 462 "pprint.m"
    MR_Integer mercury__pprint__V_26_26;

#line 462 "pprint.m"
    {
#line 462 "pprint.m"
      mercury__pprint__lb__ho42_8_p_0(mercury__pprint__W_4, (MR_Integer) 0, &mercury__pprint__V_26_26, (MR_String) "", mercury__pprint__X_5, mercury__pprint__V_11_11, &mercury__pprint__Ss_9);
    }
#line 12801 "pprint.c"
    mercury__pprint__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__pprint__TypeCtorInfo_19_19, mercury__pprint__Ss_9, &mercury__pprint__V_15_15);
    }
#line 444 "pprint.m"
    {
#line 444 "pprint.m"
      return mercury__pprint__S_6 = mercury__string__append_list_1_f_0(mercury__pprint__V_15_15);
    }
#line 442 "pprint.m"
    return mercury__pprint__S_6;
#line 442 "pprint.m"
  }
#line 351 "pprint.m"
}

#line 346 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__to_doc_2_f_0(
#line 346 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T_7,
#line 346 "pprint.m"
  MR_Integer mercury__pprint__Depth_4,
#line 346 "pprint.m"
  MR_Box mercury__pprint__X_5)
#line 346 "pprint.m"
{
#line 664 "pprint.m"
  {
#line 664 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 664 "pprint.m"
    MR_Word mercury__pprint__HeadVar__3_3;

#line 664 "pprint.m"
    {
#line 664 "pprint.m"
      return mercury__pprint__HeadVar__3_3 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_for_T_7, mercury__pprint__Depth_4, (MR_Integer) 1000, mercury__pprint__X_5);
    }
#line 664 "pprint.m"
    return mercury__pprint__HeadVar__3_3;
#line 664 "pprint.m"
  }
#line 346 "pprint.m"
}

#line 345 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__to_doc_1_f_0(
#line 345 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T_5,
#line 345 "pprint.m"
  MR_Box mercury__pprint__X_3)
#line 345 "pprint.m"
{
#line 658 "pprint.m"
  {
#line 658 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 658 "pprint.m"
    MR_Word mercury__pprint__HeadVar__2_2;
#line 658 "pprint.m"
    MR_Integer mercury__pprint__V_4_4;

#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__to_doc_1_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 12889 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_4_4  = Max;
#line 141 "int.opt"
}
#line 664 "pprint.m"
    {
#line 664 "pprint.m"
      return mercury__pprint__HeadVar__2_2 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_for_T_5, mercury__pprint__V_4_4, (MR_Integer) 1000, mercury__pprint__X_3);
    }
#line 658 "pprint.m"
    return mercury__pprint__HeadVar__2_2;
#line 658 "pprint.m"
  }
#line 345 "pprint.m"
}

#line 334 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__word_wrapped_1_f_0(
#line 334 "pprint.m"
  MR_String mercury__pprint__String_3)
#line 334 "pprint.m"
{
#line 634 "pprint.m"
  {
#line 634 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 634 "pprint.m"
    MR_Word mercury__pprint__HeadVar__2_2;
#line 634 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_13 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 634 "pprint.m"
    MR_Word mercury__pprint__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[13]);
#line 634 "pprint.m"
    MR_Word mercury__pprint__V_6_6;
#line 634 "pprint.m"
    MR_Word mercury__pprint__V_10_10;
#line 634 "pprint.m"
    MR_Integer mercury__pprint__WordStart_7_24;

#line 518 "string.opt"
    {
#line 518 "string.opt"
      mercury__pprint__next_boundary__ho40_4_p_in__string_0(mercury__pprint__String_3, (MR_Integer) 0, &mercury__pprint__WordStart_7_24);
    }
#line 519 "string.opt"
    {
#line 519 "string.opt"
      mercury__pprint__words_loop__ho41_4_p_in__string_0(mercury__pprint__String_3, mercury__pprint__WordStart_7_24, &mercury__pprint__V_10_10);
    }
#line 635 "pprint.m"
    {
#line 635 "pprint.m"
      mercury__pprint__V_6_6 = mercury__pprint__map__ho37_2_f_in__list_0(mercury__pprint__V_10_10);
    }
#line 635 "pprint.m"
    {
#line 635 "pprint.m"
      return mercury__pprint__HeadVar__2_2 = mercury__pprint__packed_2_f_0(mercury__pprint__TypeClassInfo_for_doc_13, mercury__pprint__TypeClassInfo_for_doc_13, ((MR_Box) (mercury__pprint__V_5_5)), mercury__pprint__V_6_6);
    }
#line 634 "pprint.m"
    return mercury__pprint__HeadVar__2_2;
#line 634 "pprint.m"
  }
#line 334 "pprint.m"
}

#line 329 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__ellipsis_0_f_0(void)
#line 329 "pprint.m"
{
#line 654 "pprint.m"
  {
#line 654 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 654 "pprint.m"
    MR_Word mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[9]);

#line 654 "pprint.m"
    return mercury__pprint__HeadVar__1_1;
#line 654 "pprint.m"
  }
#line 329 "pprint.m"
}

#line 328 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__colon_space_line_0_f_0(void)
#line 328 "pprint.m"
{
#line 653 "pprint.m"
  {
#line 653 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 653 "pprint.m"
    MR_Word mercury__pprint__HeadVar__1_1;
#line 653 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_4 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 653 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_5 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 653 "pprint.m"
    MR_Word mercury__pprint__V_3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 653 "pprint.m"
    MR_Word mercury__pprint__V_8_8;
#line 653 "pprint.m"
    MR_Word mercury__pprint__V_9_9;
#line 653 "pprint.m"
    MR_Integer mercury__pprint__V_11_11;
#line 653 "pprint.m"
    MR_Integer mercury__pprint__V_14_14;
#line 13003 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 13005 "pprint.c"
    MR_Box mercury__pprint__conv1_V_8_8;
#line 13007 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 13009 "pprint.c"
    MR_Box mercury__pprint__conv3_V_9_9;

#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__colon_space_line_0_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 13033 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_11_11  = Max;
#line 141 "int.opt"
}
#line 13040 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13042 "pprint.c"
    {
#line 13044 "pprint.c"
      mercury__pprint__conv1_V_8_8 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_4), ((MR_Box) (mercury__pprint__V_11_11)), ((MR_Box) ((MR_String) ": ")));
    }
#line 13047 "pprint.c"
    mercury__pprint__V_8_8 = ((MR_Word) mercury__pprint__conv1_V_8_8);
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__colon_space_line_0_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 13070 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_14_14  = Max;
#line 141 "int.opt"
}
#line 13077 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13079 "pprint.c"
    {
#line 13081 "pprint.c"
      mercury__pprint__conv3_V_9_9 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_5), ((MR_Box) (mercury__pprint__V_14_14)), ((MR_Box) (mercury__pprint__V_3_3)));
    }
#line 13084 "pprint.c"
    mercury__pprint__V_9_9 = ((MR_Word) mercury__pprint__conv3_V_9_9);
#line 428 "pprint.m"
    {
#line 428 "pprint.m"
      mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, 0) = ((MR_Box) (mercury__pprint__V_8_8));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, 1) = ((MR_Box) (mercury__pprint__V_9_9));
#line 428 "pprint.m"
    }
#line 653 "pprint.m"
    return mercury__pprint__HeadVar__1_1;
#line 653 "pprint.m"
  }
#line 328 "pprint.m"
}

#line 327 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__semic_space_line_0_f_0(void)
#line 327 "pprint.m"
{
#line 652 "pprint.m"
  {
#line 652 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 652 "pprint.m"
    MR_Word mercury__pprint__HeadVar__1_1;
#line 652 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_4 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 652 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_5 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 652 "pprint.m"
    MR_Word mercury__pprint__V_3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 652 "pprint.m"
    MR_Word mercury__pprint__V_8_8;
#line 652 "pprint.m"
    MR_Word mercury__pprint__V_9_9;
#line 652 "pprint.m"
    MR_Integer mercury__pprint__V_11_11;
#line 652 "pprint.m"
    MR_Integer mercury__pprint__V_14_14;
#line 13128 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 13130 "pprint.c"
    MR_Box mercury__pprint__conv1_V_8_8;
#line 13132 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 13134 "pprint.c"
    MR_Box mercury__pprint__conv3_V_9_9;

#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__semic_space_line_0_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 13158 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_11_11  = Max;
#line 141 "int.opt"
}
#line 13165 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13167 "pprint.c"
    {
#line 13169 "pprint.c"
      mercury__pprint__conv1_V_8_8 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_4), ((MR_Box) (mercury__pprint__V_11_11)), ((MR_Box) ((MR_String) "; ")));
    }
#line 13172 "pprint.c"
    mercury__pprint__V_8_8 = ((MR_Word) mercury__pprint__conv1_V_8_8);
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__semic_space_line_0_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 13195 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_14_14  = Max;
#line 141 "int.opt"
}
#line 13202 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13204 "pprint.c"
    {
#line 13206 "pprint.c"
      mercury__pprint__conv3_V_9_9 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_5), ((MR_Box) (mercury__pprint__V_14_14)), ((MR_Box) (mercury__pprint__V_3_3)));
    }
#line 13209 "pprint.c"
    mercury__pprint__V_9_9 = ((MR_Word) mercury__pprint__conv3_V_9_9);
#line 428 "pprint.m"
    {
#line 428 "pprint.m"
      mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, 0) = ((MR_Box) (mercury__pprint__V_8_8));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, 1) = ((MR_Box) (mercury__pprint__V_9_9));
#line 428 "pprint.m"
    }
#line 652 "pprint.m"
    return mercury__pprint__HeadVar__1_1;
#line 652 "pprint.m"
  }
#line 327 "pprint.m"
}

#line 326 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__comma_space_line_0_f_0(void)
#line 326 "pprint.m"
{
#line 651 "pprint.m"
  {
#line 651 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 651 "pprint.m"
    MR_Word mercury__pprint__HeadVar__1_1;
#line 651 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_4 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 651 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_5 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 651 "pprint.m"
    MR_Word mercury__pprint__V_3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 651 "pprint.m"
    MR_Word mercury__pprint__V_8_8;
#line 651 "pprint.m"
    MR_Word mercury__pprint__V_9_9;
#line 651 "pprint.m"
    MR_Integer mercury__pprint__V_11_11;
#line 651 "pprint.m"
    MR_Integer mercury__pprint__V_14_14;
#line 13253 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 13255 "pprint.c"
    MR_Box mercury__pprint__conv1_V_8_8;
#line 13257 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 13259 "pprint.c"
    MR_Box mercury__pprint__conv3_V_9_9;

#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__comma_space_line_0_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 13283 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_11_11  = Max;
#line 141 "int.opt"
}
#line 13290 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13292 "pprint.c"
    {
#line 13294 "pprint.c"
      mercury__pprint__conv1_V_8_8 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_4), ((MR_Box) (mercury__pprint__V_11_11)), ((MR_Box) ((MR_String) ", ")));
    }
#line 13297 "pprint.c"
    mercury__pprint__V_8_8 = ((MR_Word) mercury__pprint__conv1_V_8_8);
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__comma_space_line_0_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 13320 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_14_14  = Max;
#line 141 "int.opt"
}
#line 13327 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13329 "pprint.c"
    {
#line 13331 "pprint.c"
      mercury__pprint__conv3_V_9_9 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_5), ((MR_Box) (mercury__pprint__V_14_14)), ((MR_Box) (mercury__pprint__V_3_3)));
    }
#line 13334 "pprint.c"
    mercury__pprint__V_9_9 = ((MR_Word) mercury__pprint__conv3_V_9_9);
#line 428 "pprint.m"
    {
#line 428 "pprint.m"
      mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, 0) = ((MR_Box) (mercury__pprint__V_8_8));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, 1) = ((MR_Box) (mercury__pprint__V_9_9));
#line 428 "pprint.m"
    }
#line 651 "pprint.m"
    return mercury__pprint__HeadVar__1_1;
#line 651 "pprint.m"
  }
#line 326 "pprint.m"
}

#line 325 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__space_line_0_f_0(void)
#line 325 "pprint.m"
{
#line 650 "pprint.m"
  {
#line 650 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 650 "pprint.m"
    MR_Word mercury__pprint__HeadVar__1_1;
#line 650 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_4 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 650 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_5 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 650 "pprint.m"
    MR_Word mercury__pprint__V_3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 650 "pprint.m"
    MR_Word mercury__pprint__V_8_8;
#line 650 "pprint.m"
    MR_Word mercury__pprint__V_9_9;
#line 650 "pprint.m"
    MR_Integer mercury__pprint__V_11_11;
#line 650 "pprint.m"
    MR_Integer mercury__pprint__V_14_14;
#line 13378 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 13380 "pprint.c"
    MR_Box mercury__pprint__conv1_V_8_8;
#line 13382 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 13384 "pprint.c"
    MR_Box mercury__pprint__conv3_V_9_9;

#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__space_line_0_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 13408 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_11_11  = Max;
#line 141 "int.opt"
}
#line 13415 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13417 "pprint.c"
    {
#line 13419 "pprint.c"
      mercury__pprint__conv1_V_8_8 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_4), ((MR_Box) (mercury__pprint__V_11_11)), ((MR_Box) ((MR_String) " ")));
    }
#line 13422 "pprint.c"
    mercury__pprint__V_8_8 = ((MR_Word) mercury__pprint__conv1_V_8_8);
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__space_line_0_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 13445 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_14_14  = Max;
#line 141 "int.opt"
}
#line 13452 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13454 "pprint.c"
    {
#line 13456 "pprint.c"
      mercury__pprint__conv3_V_9_9 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_5), ((MR_Box) (mercury__pprint__V_14_14)), ((MR_Box) (mercury__pprint__V_3_3)));
    }
#line 13459 "pprint.c"
    mercury__pprint__V_9_9 = ((MR_Word) mercury__pprint__conv3_V_9_9);
#line 428 "pprint.m"
    {
#line 428 "pprint.m"
      mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, 0) = ((MR_Box) (mercury__pprint__V_8_8));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, 1) = ((MR_Box) (mercury__pprint__V_9_9));
#line 428 "pprint.m"
    }
#line 650 "pprint.m"
    return mercury__pprint__HeadVar__1_1;
#line 650 "pprint.m"
  }
#line 325 "pprint.m"
}

#line 324 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__colon_line_0_f_0(void)
#line 324 "pprint.m"
{
#line 649 "pprint.m"
  {
#line 649 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 649 "pprint.m"
    MR_Word mercury__pprint__HeadVar__1_1;
#line 649 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_4 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 649 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_5 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 649 "pprint.m"
    MR_Word mercury__pprint__V_3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 649 "pprint.m"
    MR_Word mercury__pprint__V_8_8;
#line 649 "pprint.m"
    MR_Word mercury__pprint__V_9_9;
#line 649 "pprint.m"
    MR_Integer mercury__pprint__V_11_11;
#line 649 "pprint.m"
    MR_Integer mercury__pprint__V_14_14;
#line 13503 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 13505 "pprint.c"
    MR_Box mercury__pprint__conv1_V_8_8;
#line 13507 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 13509 "pprint.c"
    MR_Box mercury__pprint__conv3_V_9_9;

#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__colon_line_0_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 13533 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_11_11  = Max;
#line 141 "int.opt"
}
#line 13540 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13542 "pprint.c"
    {
#line 13544 "pprint.c"
      mercury__pprint__conv1_V_8_8 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_4), ((MR_Box) (mercury__pprint__V_11_11)), ((MR_Box) ((MR_String) ":")));
    }
#line 13547 "pprint.c"
    mercury__pprint__V_8_8 = ((MR_Word) mercury__pprint__conv1_V_8_8);
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__colon_line_0_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 13570 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_14_14  = Max;
#line 141 "int.opt"
}
#line 13577 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13579 "pprint.c"
    {
#line 13581 "pprint.c"
      mercury__pprint__conv3_V_9_9 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_5), ((MR_Box) (mercury__pprint__V_14_14)), ((MR_Box) (mercury__pprint__V_3_3)));
    }
#line 13584 "pprint.c"
    mercury__pprint__V_9_9 = ((MR_Word) mercury__pprint__conv3_V_9_9);
#line 428 "pprint.m"
    {
#line 428 "pprint.m"
      mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, 0) = ((MR_Box) (mercury__pprint__V_8_8));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, 1) = ((MR_Box) (mercury__pprint__V_9_9));
#line 428 "pprint.m"
    }
#line 649 "pprint.m"
    return mercury__pprint__HeadVar__1_1;
#line 649 "pprint.m"
  }
#line 324 "pprint.m"
}

#line 323 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__semic_line_0_f_0(void)
#line 323 "pprint.m"
{
#line 648 "pprint.m"
  {
#line 648 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 648 "pprint.m"
    MR_Word mercury__pprint__HeadVar__1_1;
#line 648 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_4 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 648 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_5 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 648 "pprint.m"
    MR_Word mercury__pprint__V_3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 648 "pprint.m"
    MR_Word mercury__pprint__V_8_8;
#line 648 "pprint.m"
    MR_Word mercury__pprint__V_9_9;
#line 648 "pprint.m"
    MR_Integer mercury__pprint__V_11_11;
#line 648 "pprint.m"
    MR_Integer mercury__pprint__V_14_14;
#line 13628 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 13630 "pprint.c"
    MR_Box mercury__pprint__conv1_V_8_8;
#line 13632 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 13634 "pprint.c"
    MR_Box mercury__pprint__conv3_V_9_9;

#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__semic_line_0_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 13658 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_11_11  = Max;
#line 141 "int.opt"
}
#line 13665 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13667 "pprint.c"
    {
#line 13669 "pprint.c"
      mercury__pprint__conv1_V_8_8 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_4), ((MR_Box) (mercury__pprint__V_11_11)), ((MR_Box) ((MR_String) ";")));
    }
#line 13672 "pprint.c"
    mercury__pprint__V_8_8 = ((MR_Word) mercury__pprint__conv1_V_8_8);
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__semic_line_0_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 13695 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_14_14  = Max;
#line 141 "int.opt"
}
#line 13702 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13704 "pprint.c"
    {
#line 13706 "pprint.c"
      mercury__pprint__conv3_V_9_9 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_5), ((MR_Box) (mercury__pprint__V_14_14)), ((MR_Box) (mercury__pprint__V_3_3)));
    }
#line 13709 "pprint.c"
    mercury__pprint__V_9_9 = ((MR_Word) mercury__pprint__conv3_V_9_9);
#line 428 "pprint.m"
    {
#line 428 "pprint.m"
      mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, 0) = ((MR_Box) (mercury__pprint__V_8_8));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, 1) = ((MR_Box) (mercury__pprint__V_9_9));
#line 428 "pprint.m"
    }
#line 648 "pprint.m"
    return mercury__pprint__HeadVar__1_1;
#line 648 "pprint.m"
  }
#line 323 "pprint.m"
}

#line 322 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__comma_line_0_f_0(void)
#line 322 "pprint.m"
{
#line 647 "pprint.m"
  {
#line 647 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 647 "pprint.m"
    MR_Word mercury__pprint__HeadVar__1_1;
#line 647 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_4 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 647 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_5 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 647 "pprint.m"
    MR_Word mercury__pprint__V_3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 647 "pprint.m"
    MR_Word mercury__pprint__V_8_8;
#line 647 "pprint.m"
    MR_Word mercury__pprint__V_9_9;
#line 647 "pprint.m"
    MR_Integer mercury__pprint__V_11_11;
#line 647 "pprint.m"
    MR_Integer mercury__pprint__V_14_14;
#line 13753 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 13755 "pprint.c"
    MR_Box mercury__pprint__conv1_V_8_8;
#line 13757 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 13759 "pprint.c"
    MR_Box mercury__pprint__conv3_V_9_9;

#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__comma_line_0_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 13783 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_11_11  = Max;
#line 141 "int.opt"
}
#line 13790 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13792 "pprint.c"
    {
#line 13794 "pprint.c"
      mercury__pprint__conv1_V_8_8 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_4), ((MR_Box) (mercury__pprint__V_11_11)), ((MR_Box) ((MR_String) ",")));
    }
#line 13797 "pprint.c"
    mercury__pprint__V_8_8 = ((MR_Word) mercury__pprint__conv1_V_8_8);
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__comma_line_0_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 13820 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_14_14  = Max;
#line 141 "int.opt"
}
#line 13827 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13829 "pprint.c"
    {
#line 13831 "pprint.c"
      mercury__pprint__conv3_V_9_9 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_5), ((MR_Box) (mercury__pprint__V_14_14)), ((MR_Box) (mercury__pprint__V_3_3)));
    }
#line 13834 "pprint.c"
    mercury__pprint__V_9_9 = ((MR_Word) mercury__pprint__conv3_V_9_9);
#line 428 "pprint.m"
    {
#line 428 "pprint.m"
      mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, 0) = ((MR_Box) (mercury__pprint__V_8_8));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, 1) = ((MR_Box) (mercury__pprint__V_9_9));
#line 428 "pprint.m"
    }
#line 647 "pprint.m"
    return mercury__pprint__HeadVar__1_1;
#line 647 "pprint.m"
  }
#line 322 "pprint.m"
}

#line 321 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__colon_space_0_f_0(void)
#line 321 "pprint.m"
{
#line 646 "pprint.m"
  {
#line 646 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 646 "pprint.m"
    MR_Word mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[16]);

#line 646 "pprint.m"
    return mercury__pprint__HeadVar__1_1;
#line 646 "pprint.m"
  }
#line 321 "pprint.m"
}

#line 320 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__semic_space_0_f_0(void)
#line 320 "pprint.m"
{
#line 645 "pprint.m"
  {
#line 645 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 645 "pprint.m"
    MR_Word mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[15]);

#line 645 "pprint.m"
    return mercury__pprint__HeadVar__1_1;
#line 645 "pprint.m"
  }
#line 320 "pprint.m"
}

#line 319 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__comma_space_0_f_0(void)
#line 319 "pprint.m"
{
#line 644 "pprint.m"
  {
#line 644 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 644 "pprint.m"
    MR_Word mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[14]);

#line 644 "pprint.m"
    return mercury__pprint__HeadVar__1_1;
#line 644 "pprint.m"
  }
#line 319 "pprint.m"
}

#line 318 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__space_0_f_0(void)
#line 318 "pprint.m"
{
#line 643 "pprint.m"
  {
#line 643 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 643 "pprint.m"
    MR_Word mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[13]);

#line 643 "pprint.m"
    return mercury__pprint__HeadVar__1_1;
#line 643 "pprint.m"
  }
#line 318 "pprint.m"
}

#line 317 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__colon_0_f_0(void)
#line 317 "pprint.m"
{
#line 642 "pprint.m"
  {
#line 642 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 642 "pprint.m"
    MR_Word mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[12]);

#line 642 "pprint.m"
    return mercury__pprint__HeadVar__1_1;
#line 642 "pprint.m"
  }
#line 317 "pprint.m"
}

#line 316 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__semic_0_f_0(void)
#line 316 "pprint.m"
{
#line 641 "pprint.m"
  {
#line 641 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 641 "pprint.m"
    MR_Word mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[11]);

#line 641 "pprint.m"
    return mercury__pprint__HeadVar__1_1;
#line 641 "pprint.m"
  }
#line 316 "pprint.m"
}

#line 315 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__comma_0_f_0(void)
#line 315 "pprint.m"
{
#line 640 "pprint.m"
  {
#line 640 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 640 "pprint.m"
    MR_Word mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[10]);

#line 640 "pprint.m"
    return mercury__pprint__HeadVar__1_1;
#line 640 "pprint.m"
  }
#line 315 "pprint.m"
}

#line 310 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__separated_3_f_0(
#line 310 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T1_15,
#line 310 "pprint.m"
  MR_Word mercury__pprint__TypeClassInfo_for_doc_14,
#line 310 "pprint.m"
  MR_Word mercury__pprint__PP_1,
#line 310 "pprint.m"
  MR_Box mercury__pprint__Sep_2,
#line 310 "pprint.m"
  MR_Word mercury__pprint__HeadVar__3_3)
#line 310 "pprint.m"
{
#line 589 "pprint.m"
  {
#line 589 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 589 "pprint.m"
    MR_Word mercury__pprint__HeadVar__4_4;

#line 589 "pprint.m"
    if ((mercury__pprint__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 427 "pprint.m"
      mercury__pprint__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 589 "pprint.m"
    else
#line 591 "pprint.m"
      {
#line 591 "pprint.m"
        MR_Box mercury__pprint__X_9 = (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, (MR_Integer) 0));
#line 591 "pprint.m"
        MR_Word mercury__pprint__Xs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, (MR_Integer) 1)));

#line 592 "pprint.m"
        mercury__pprint__succeeded = (mercury__pprint__Xs_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 591 "pprint.m"
        if (mercury__pprint__succeeded)
#line 592 "pprint.m"
          {
#line 592 "pprint.m"
            MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__pprint__PP_1, (MR_Integer) 1)));
#line 592 "pprint.m"
            MR_Box mercury__pprint__conv1_HeadVar__4_4;

#line 592 "pprint.m"
            {
#line 592 "pprint.m"
              mercury__pprint__conv1_HeadVar__4_4 = mercury__pprint__func_0(((MR_Box) mercury__pprint__PP_1), mercury__pprint__X_9);
            }
#line 592 "pprint.m"
            mercury__pprint__HeadVar__4_4 = ((MR_Word) mercury__pprint__conv1_HeadVar__4_4);
#line 592 "pprint.m"
          }
#line 591 "pprint.m"
        else
#line 593 "pprint.m"
          {
#line 593 "pprint.m"
            MR_Word mercury__pprint__TypeClassInfo_for_doc_16 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 593 "pprint.m"
            MR_Word mercury__pprint__V_11_11;
#line 593 "pprint.m"
            MR_Word mercury__pprint__V_12_12;
#line 593 "pprint.m"
            MR_Word mercury__pprint__V_13_13;
#line 593 "pprint.m"
            MR_Word mercury__pprint__V_19_19;
#line 593 "pprint.m"
            MR_Word mercury__pprint__V_20_20;
#line 593 "pprint.m"
            MR_Integer mercury__pprint__V_22_22;
#line 593 "pprint.m"
            MR_Integer mercury__pprint__V_25_25;
#line 593 "pprint.m"
            MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__pprint__PP_1, (MR_Integer) 1)));
#line 593 "pprint.m"
            MR_Box mercury__pprint__conv3_V_11_11;
#line 14065 "pprint.c"
            MR_Box MR_CALL (* mercury__pprint__func_4)(MR_Box, MR_Box, MR_Box);
#line 14067 "pprint.c"
            MR_Box mercury__pprint__conv5_V_19_19;
#line 14069 "pprint.c"
            MR_Box MR_CALL (* mercury__pprint__func_6)(MR_Box, MR_Box, MR_Box);
#line 14071 "pprint.c"
            MR_Box mercury__pprint__conv7_V_20_20;

#line 593 "pprint.m"
            {
#line 593 "pprint.m"
              mercury__pprint__conv3_V_11_11 = mercury__pprint__func_2(((MR_Box) mercury__pprint__PP_1), mercury__pprint__X_9);
            }
#line 593 "pprint.m"
            mercury__pprint__V_11_11 = ((MR_Word) mercury__pprint__conv3_V_11_11);
#line 593 "pprint.m"
            {
#line 593 "pprint.m"
              mercury__pprint__V_13_13 = mercury__pprint__separated_3_f_0(mercury__pprint__TypeInfo_for_T1_15, mercury__pprint__TypeClassInfo_for_doc_14, mercury__pprint__PP_1, mercury__pprint__Sep_2, mercury__pprint__Xs_10);
            }
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__separated_3_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 14107 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_22_22  = Max;
#line 141 "int.opt"
}
#line 14114 "pprint.c"
            mercury__pprint__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14116 "pprint.c"
            {
#line 14118 "pprint.c"
              mercury__pprint__conv5_V_19_19 = mercury__pprint__func_4(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_14), ((MR_Box) (mercury__pprint__V_22_22)), mercury__pprint__Sep_2);
            }
#line 14121 "pprint.c"
            mercury__pprint__V_19_19 = ((MR_Word) mercury__pprint__conv5_V_19_19);
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__separated_3_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 14144 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_25_25  = Max;
#line 141 "int.opt"
}
#line 14151 "pprint.c"
            mercury__pprint__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14153 "pprint.c"
            {
#line 14155 "pprint.c"
              mercury__pprint__conv7_V_20_20 = mercury__pprint__func_6(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_16), ((MR_Box) (mercury__pprint__V_25_25)), ((MR_Box) (mercury__pprint__V_13_13)));
            }
#line 14158 "pprint.c"
            mercury__pprint__V_20_20 = ((MR_Word) mercury__pprint__conv7_V_20_20);
#line 428 "pprint.m"
            {
#line 428 "pprint.m"
              mercury__pprint__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "pprint.m"
              MR_hl_field(MR_mktag(1), mercury__pprint__V_12_12, 0) = ((MR_Box) (mercury__pprint__V_19_19));
#line 428 "pprint.m"
              MR_hl_field(MR_mktag(1), mercury__pprint__V_12_12, 1) = ((MR_Box) (mercury__pprint__V_20_20));
#line 428 "pprint.m"
            }
#line 593 "pprint.m"
            {
#line 593 "pprint.m"
              return mercury__pprint__HeadVar__4_4 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_16, mercury__pprint__TypeClassInfo_for_doc_16, ((MR_Box) (mercury__pprint__V_11_11)), ((MR_Box) (mercury__pprint__V_12_12)));
            }
#line 593 "pprint.m"
          }
#line 591 "pprint.m"
      }
#line 589 "pprint.m"
    return mercury__pprint__HeadVar__4_4;
#line 589 "pprint.m"
  }
#line 310 "pprint.m"
}

#line 305 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__packed_cs_univ_args_2_f_0(
#line 305 "pprint.m"
  MR_Integer mercury__pprint__Depth_4,
#line 305 "pprint.m"
  MR_Word mercury__pprint__UnivArgs_5)
#line 305 "pprint.m"
{
#line 629 "pprint.m"
  {
#line 629 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 629 "pprint.m"
    MR_Word mercury__pprint__HeadVar__3_3;
#line 629 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_12 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 629 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_18;
#line 629 "pprint.m"
    MR_Word mercury__pprint__V_7_7;

#line 630 "pprint.m"
    {
#line 630 "pprint.m"
      mercury__pprint__V_7_7 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_56_95_95_91_50_93_95_48_2_f_in__list_0(mercury__pprint__Depth_4, mercury__pprint__UnivArgs_5);
    }
#line 14213 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_18 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 616 "pprint.m"
    {
#line 616 "pprint.m"
      return mercury__pprint__HeadVar__3_3 = mercury__pprint__packed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_18, mercury__pprint__TypeClassInfo_for_doc_12, mercury__pprint__Depth_4, ((MR_Box) ((MR_String) ", ")), mercury__pprint__V_7_7);
    }
#line 629 "pprint.m"
    return mercury__pprint__HeadVar__3_3;
#line 629 "pprint.m"
  }
#line 305 "pprint.m"
}

#line 300 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__packed_cs_to_depth_2_f_0(
#line 300 "pprint.m"
  MR_Word mercury__pprint__TypeInfo_for_T_8,
#line 300 "pprint.m"
  MR_Integer mercury__pprint__Depth_4,
#line 300 "pprint.m"
  MR_Word mercury__pprint__Xs_5)
#line 300 "pprint.m"
{
#line 624 "pprint.m"
  {
#line 624 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 624 "pprint.m"
    MR_Word mercury__pprint__HeadVar__3_3;
#line 624 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_9 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 624 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_16;
#line 624 "pprint.m"
    MR_Word mercury__pprint__V_6_6;

#line 625 "pprint.m"
    {
#line 625 "pprint.m"
      mercury__pprint__V_6_6 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_57_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(mercury__pprint__TypeInfo_for_T_8, mercury__pprint__Depth_4, mercury__pprint__Xs_5);
    }
#line 14256 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_16 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 616 "pprint.m"
    {
#line 616 "pprint.m"
      return mercury__pprint__HeadVar__3_3 = mercury__pprint__packed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_16, mercury__pprint__TypeClassInfo_for_doc_9, mercury__pprint__Depth_4, ((MR_Box) ((MR_String) ", ")), mercury__pprint__V_6_6);
    }
#line 624 "pprint.m"
    return mercury__pprint__HeadVar__3_3;
#line 624 "pprint.m"
  }
#line 300 "pprint.m"
}

#line 295 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__packed_cs_2_f_0(
#line 295 "pprint.m"
  MR_Word mercury__pprint__TypeClassInfo_for_doc_7,
#line 295 "pprint.m"
  MR_Integer mercury__pprint__N_4,
#line 295 "pprint.m"
  MR_Word mercury__pprint__Xs_5)
#line 295 "pprint.m"
{
#line 616 "pprint.m"
  {
#line 616 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 616 "pprint.m"
    MR_Word mercury__pprint__HeadVar__3_3;
#line 616 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_8 = (MR_Word) &mercury__pprint_scalar_common_1[1];

#line 616 "pprint.m"
    {
#line 616 "pprint.m"
      return mercury__pprint__HeadVar__3_3 = mercury__pprint__packed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_8, mercury__pprint__TypeClassInfo_for_doc_7, mercury__pprint__N_4, ((MR_Box) ((MR_String) ", ")), mercury__pprint__Xs_5);
    }
#line 616 "pprint.m"
    return mercury__pprint__HeadVar__3_3;
#line 616 "pprint.m"
  }
#line 295 "pprint.m"
}

#line 290 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__packed_cs_1_f_0(
#line 290 "pprint.m"
  MR_Word mercury__pprint__TypeClassInfo_for_doc_5,
#line 290 "pprint.m"
  MR_Word mercury__pprint__Xs_3)
#line 290 "pprint.m"
{
#line 620 "pprint.m"
  {
#line 620 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 620 "pprint.m"
    MR_Word mercury__pprint__HeadVar__2_2;
#line 620 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_6 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 620 "pprint.m"
    MR_Integer mercury__pprint__V_9_9;

#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__packed_cs_1_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 14343 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_9_9  = Max;
#line 141 "int.opt"
}
#line 612 "pprint.m"
    {
#line 612 "pprint.m"
      return mercury__pprint__HeadVar__2_2 = mercury__pprint__packed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_6, mercury__pprint__TypeClassInfo_for_doc_5, mercury__pprint__V_9_9, ((MR_Box) ((MR_String) ", ")), mercury__pprint__Xs_3);
    }
#line 620 "pprint.m"
    return mercury__pprint__HeadVar__2_2;
#line 620 "pprint.m"
  }
#line 290 "pprint.m"
}

#line 282 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__packed_3_f_0(
#line 282 "pprint.m"
  MR_Word mercury__pprint__TypeClassInfo_for_doc_33,
#line 282 "pprint.m"
  MR_Word mercury__pprint__TypeClassInfo_for_doc_34,
#line 282 "pprint.m"
  MR_Integer mercury__pprint__HeadVar__1_1,
#line 282 "pprint.m"
  MR_Box mercury__pprint__HeadVar__2_2,
#line 282 "pprint.m"
  MR_Word mercury__pprint__HeadVar__3_3)
#line 282 "pprint.m"
{
#line 598 "pprint.m"
  {
#line 598 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 598 "pprint.m"
    MR_Word mercury__pprint__HeadVar__4_4;

#line 598 "pprint.m"
    if ((mercury__pprint__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 427 "pprint.m"
      mercury__pprint__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 598 "pprint.m"
    else
#line 598 "pprint.m"
      {
#line 598 "pprint.m"
        MR_Word mercury__pprint__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, (MR_Integer) 1)));
#line 598 "pprint.m"
        MR_Box mercury__pprint__V_39_39 = (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, (MR_Integer) 0));

#line 598 "pprint.m"
        if ((mercury__pprint__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 601 "pprint.m"
          {
#line 601 "pprint.m"
            MR_Word mercury__pprint__TypeClassInfo_for_doc_35 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 601 "pprint.m"
            MR_Word mercury__pprint__V_11_11;
#line 601 "pprint.m"
            MR_Word mercury__pprint__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 601 "pprint.m"
            MR_Word mercury__pprint__V_13_13;
#line 601 "pprint.m"
            MR_Word mercury__pprint__V_46_46;
#line 601 "pprint.m"
            MR_Integer mercury__pprint__V_48_48;
#line 14413 "pprint.c"
            MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 14415 "pprint.c"
            MR_Box mercury__pprint__conv3_V_46_46;

#line 602 "pprint.m"
            mercury__pprint__succeeded = ((MR_Integer) 0 < mercury__pprint__HeadVar__1_1);
#line 602 "pprint.m"
            if (mercury__pprint__succeeded)
#line 411 "pprint.m"
              {
#line 411 "pprint.m"
                MR_Integer mercury__pprint__V_41_41;
#line 14426 "pprint.c"
                MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 14428 "pprint.c"
                MR_Box mercury__pprint__conv1_V_13_13;

#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__packed_3_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 14452 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_41_41  = Max;
#line 141 "int.opt"
}
#line 14459 "pprint.c"
                mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14461 "pprint.c"
                {
#line 14463 "pprint.c"
                  mercury__pprint__conv1_V_13_13 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_34), ((MR_Box) (mercury__pprint__V_41_41)), mercury__pprint__V_39_39);
                }
#line 14466 "pprint.c"
                mercury__pprint__V_13_13 = ((MR_Word) mercury__pprint__conv1_V_13_13);
#line 411 "pprint.m"
              }
#line 602 "pprint.m"
            else
#line 654 "pprint.m"
              {
#line 431 "pprint.m"
                mercury__pprint__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[9]);
#line 654 "pprint.m"
              }
#line 602 "pprint.m"
            {
#line 602 "pprint.m"
              mercury__pprint__V_11_11 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_35, mercury__pprint__TypeClassInfo_for_doc_35, ((MR_Box) (mercury__pprint__V_12_12)), ((MR_Box) (mercury__pprint__V_13_13)));
            }
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__packed_3_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 14504 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_48_48  = Max;
#line 141 "int.opt"
}
#line 14511 "pprint.c"
            mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_35, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14513 "pprint.c"
            {
#line 14515 "pprint.c"
              mercury__pprint__conv3_V_46_46 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_35), ((MR_Box) (mercury__pprint__V_48_48)), ((MR_Box) (mercury__pprint__V_11_11)));
            }
#line 14518 "pprint.c"
            mercury__pprint__V_46_46 = ((MR_Word) mercury__pprint__conv3_V_46_46);
#line 433 "pprint.m"
            {
#line 433 "pprint.m"
              mercury__pprint__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "pprint.m"
              MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 433 "pprint.m"
              MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, 1) = ((MR_Box) (mercury__pprint__V_46_46));
#line 433 "pprint.m"
            }
#line 601 "pprint.m"
          }
#line 598 "pprint.m"
        else
#line 604 "pprint.m"
          {
#line 605 "pprint.m"
            mercury__pprint__succeeded = ((MR_Integer) 0 < mercury__pprint__HeadVar__1_1);
#line 604 "pprint.m"
            if (mercury__pprint__succeeded)
#line 606 "pprint.m"
              {
#line 606 "pprint.m"
                MR_Word mercury__pprint__TypeClassInfo_for_doc_36 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 606 "pprint.m"
                MR_Word mercury__pprint__V_22_22;
#line 606 "pprint.m"
                MR_Word mercury__pprint__V_23_23;
#line 606 "pprint.m"
                MR_Word mercury__pprint__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 606 "pprint.m"
                MR_Word mercury__pprint__V_25_25;
#line 606 "pprint.m"
                MR_Word mercury__pprint__V_26_26;
#line 606 "pprint.m"
                MR_Integer mercury__pprint__V_27_27;
#line 606 "pprint.m"
                MR_Word mercury__pprint__V_52_52;
#line 606 "pprint.m"
                MR_Word mercury__pprint__V_53_53;
#line 606 "pprint.m"
                MR_Integer mercury__pprint__V_55_55;
#line 606 "pprint.m"
                MR_Integer mercury__pprint__V_58_58;
#line 606 "pprint.m"
                MR_Word mercury__pprint__V_63_63;
#line 606 "pprint.m"
                MR_Integer mercury__pprint__V_65_65;
#line 14568 "pprint.c"
                MR_Box MR_CALL (* mercury__pprint__func_4)(MR_Box, MR_Box, MR_Box);
#line 14570 "pprint.c"
                MR_Box mercury__pprint__conv5_V_52_52;
#line 14572 "pprint.c"
                MR_Box MR_CALL (* mercury__pprint__func_6)(MR_Box, MR_Box, MR_Box);
#line 14574 "pprint.c"
                MR_Box mercury__pprint__conv7_V_53_53;
#line 14576 "pprint.c"
                MR_Box MR_CALL (* mercury__pprint__func_8)(MR_Box, MR_Box, MR_Box);
#line 14578 "pprint.c"
                MR_Box mercury__pprint__conv9_V_63_63;

#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__packed_3_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 14602 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_55_55  = Max;
#line 141 "int.opt"
}
#line 14609 "pprint.c"
                mercury__pprint__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14611 "pprint.c"
                {
#line 14613 "pprint.c"
                  mercury__pprint__conv5_V_52_52 = mercury__pprint__func_4(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_34), ((MR_Box) (mercury__pprint__V_55_55)), mercury__pprint__V_39_39);
                }
#line 14616 "pprint.c"
                mercury__pprint__V_52_52 = ((MR_Word) mercury__pprint__conv5_V_52_52);
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__packed_3_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 14639 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_58_58  = Max;
#line 141 "int.opt"
}
#line 14646 "pprint.c"
                mercury__pprint__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_33, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14648 "pprint.c"
                {
#line 14650 "pprint.c"
                  mercury__pprint__conv7_V_53_53 = mercury__pprint__func_6(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_33), ((MR_Box) (mercury__pprint__V_58_58)), mercury__pprint__HeadVar__2_2);
                }
#line 14653 "pprint.c"
                mercury__pprint__V_53_53 = ((MR_Word) mercury__pprint__conv7_V_53_53);
#line 428 "pprint.m"
                {
#line 428 "pprint.m"
                  mercury__pprint__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "pprint.m"
                  MR_hl_field(MR_mktag(1), mercury__pprint__V_25_25, 0) = ((MR_Box) (mercury__pprint__V_52_52));
#line 428 "pprint.m"
                  MR_hl_field(MR_mktag(1), mercury__pprint__V_25_25, 1) = ((MR_Box) (mercury__pprint__V_53_53));
#line 428 "pprint.m"
                }
#line 606 "pprint.m"
                {
#line 606 "pprint.m"
                  mercury__pprint__V_23_23 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_36, mercury__pprint__TypeClassInfo_for_doc_36, ((MR_Box) (mercury__pprint__V_24_24)), ((MR_Box) (mercury__pprint__V_25_25)));
                }
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__packed_3_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 14691 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_65_65  = Max;
#line 141 "int.opt"
}
#line 14698 "pprint.c"
                mercury__pprint__func_8 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_36, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14700 "pprint.c"
                {
#line 14702 "pprint.c"
                  mercury__pprint__conv9_V_63_63 = mercury__pprint__func_8(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_36), ((MR_Box) (mercury__pprint__V_65_65)), ((MR_Box) (mercury__pprint__V_23_23)));
                }
#line 14705 "pprint.c"
                mercury__pprint__V_63_63 = ((MR_Word) mercury__pprint__conv9_V_63_63);
#line 433 "pprint.m"
                {
#line 433 "pprint.m"
                  mercury__pprint__V_22_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "pprint.m"
                  MR_hl_field(MR_mktag(3), mercury__pprint__V_22_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 433 "pprint.m"
                  MR_hl_field(MR_mktag(3), mercury__pprint__V_22_22, 1) = ((MR_Box) (mercury__pprint__V_63_63));
#line 433 "pprint.m"
                }
#line 606 "pprint.m"
                mercury__pprint__V_27_27 = (mercury__pprint__HeadVar__1_1 - (MR_Integer) 1);
#line 606 "pprint.m"
                {
#line 606 "pprint.m"
                  mercury__pprint__V_26_26 = mercury__pprint__packed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_33, mercury__pprint__TypeClassInfo_for_doc_34, mercury__pprint__V_27_27, mercury__pprint__HeadVar__2_2, mercury__pprint__V_38_38);
                }
#line 606 "pprint.m"
                {
#line 606 "pprint.m"
                  return mercury__pprint__HeadVar__4_4 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_36, mercury__pprint__TypeClassInfo_for_doc_36, ((MR_Box) (mercury__pprint__V_22_22)), ((MR_Box) (mercury__pprint__V_26_26)));
                }
#line 606 "pprint.m"
              }
#line 604 "pprint.m"
            else
#line 607 "pprint.m"
              {
#line 607 "pprint.m"
                MR_Word mercury__pprint__TypeClassInfo_for_doc_37 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 607 "pprint.m"
                MR_Word mercury__pprint__V_30_30;
#line 607 "pprint.m"
                MR_Word mercury__pprint__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 607 "pprint.m"
                MR_Word mercury__pprint__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[9]);
#line 607 "pprint.m"
                MR_Word mercury__pprint__V_70_70;
#line 607 "pprint.m"
                MR_Integer mercury__pprint__V_72_72;
#line 14747 "pprint.c"
                MR_Box MR_CALL (* mercury__pprint__func_10)(MR_Box, MR_Box, MR_Box);
#line 14749 "pprint.c"
                MR_Box mercury__pprint__conv11_V_70_70;

#line 607 "pprint.m"
                {
#line 607 "pprint.m"
                  mercury__pprint__V_30_30 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_37, mercury__pprint__TypeClassInfo_for_doc_37, ((MR_Box) (mercury__pprint__V_31_31)), ((MR_Box) (mercury__pprint__V_32_32)));
                }
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__packed_3_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 14778 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_72_72  = Max;
#line 141 "int.opt"
}
#line 14785 "pprint.c"
                mercury__pprint__func_10 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_37, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14787 "pprint.c"
                {
#line 14789 "pprint.c"
                  mercury__pprint__conv11_V_70_70 = mercury__pprint__func_10(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_37), ((MR_Box) (mercury__pprint__V_72_72)), ((MR_Box) (mercury__pprint__V_30_30)));
                }
#line 14792 "pprint.c"
                mercury__pprint__V_70_70 = ((MR_Word) mercury__pprint__conv11_V_70_70);
#line 433 "pprint.m"
                {
#line 433 "pprint.m"
                  mercury__pprint__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "pprint.m"
                  MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 433 "pprint.m"
                  MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, 1) = ((MR_Box) (mercury__pprint__V_70_70));
#line 433 "pprint.m"
                }
#line 607 "pprint.m"
              }
#line 604 "pprint.m"
          }
#line 598 "pprint.m"
      }
#line 598 "pprint.m"
    return mercury__pprint__HeadVar__4_4;
#line 598 "pprint.m"
  }
#line 282 "pprint.m"
}

#line 277 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__packed_2_f_0(
#line 277 "pprint.m"
  MR_Word mercury__pprint__TypeClassInfo_for_doc_7,
#line 277 "pprint.m"
  MR_Word mercury__pprint__TypeClassInfo_for_doc_8,
#line 277 "pprint.m"
  MR_Box mercury__pprint__Sep_4,
#line 277 "pprint.m"
  MR_Word mercury__pprint__Xs_5)
#line 277 "pprint.m"
{
#line 612 "pprint.m"
  {
#line 612 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 612 "pprint.m"
    MR_Word mercury__pprint__HeadVar__3_3;
#line 612 "pprint.m"
    MR_Integer mercury__pprint__V_6_6;

#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__packed_2_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 14860 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_6_6  = Max;
#line 141 "int.opt"
}
#line 612 "pprint.m"
    {
#line 612 "pprint.m"
      return mercury__pprint__HeadVar__3_3 = mercury__pprint__packed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_7, mercury__pprint__TypeClassInfo_for_doc_8, mercury__pprint__V_6_6, mercury__pprint__Sep_4, mercury__pprint__Xs_5);
    }
#line 612 "pprint.m"
    return mercury__pprint__HeadVar__3_3;
#line 612 "pprint.m"
  }
#line 277 "pprint.m"
}

#line 267 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__braces_1_f_0(
#line 267 "pprint.m"
  MR_Word mercury__pprint__TypeClassInfo_for_doc_6,
#line 267 "pprint.m"
  MR_Box mercury__pprint__D_3)
#line 267 "pprint.m"
{
#line 585 "pprint.m"
  {
#line 585 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 585 "pprint.m"
    MR_Word mercury__pprint__HeadVar__2_2;
#line 585 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_7 = (MR_Word) &mercury__pprint_scalar_common_1[1];

#line 585 "pprint.m"
    {
#line 585 "pprint.m"
      return mercury__pprint__HeadVar__2_2 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_7, mercury__pprint__TypeClassInfo_for_doc_7, mercury__pprint__TypeClassInfo_for_doc_6, ((MR_Box) ((MR_String) "{")), ((MR_Box) ((MR_String) "}")), mercury__pprint__D_3);
    }
#line 585 "pprint.m"
    return mercury__pprint__HeadVar__2_2;
#line 585 "pprint.m"
  }
#line 267 "pprint.m"
}

#line 266 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__brackets_1_f_0(
#line 266 "pprint.m"
  MR_Word mercury__pprint__TypeClassInfo_for_doc_6,
#line 266 "pprint.m"
  MR_Box mercury__pprint__D_3)
#line 266 "pprint.m"
{
#line 584 "pprint.m"
  {
#line 584 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 584 "pprint.m"
    MR_Word mercury__pprint__HeadVar__2_2;
#line 584 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_7 = (MR_Word) &mercury__pprint_scalar_common_1[1];

#line 584 "pprint.m"
    {
#line 584 "pprint.m"
      return mercury__pprint__HeadVar__2_2 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_7, mercury__pprint__TypeClassInfo_for_doc_7, mercury__pprint__TypeClassInfo_for_doc_6, ((MR_Box) ((MR_String) "[")), ((MR_Box) ((MR_String) "]")), mercury__pprint__D_3);
    }
#line 584 "pprint.m"
    return mercury__pprint__HeadVar__2_2;
#line 584 "pprint.m"
  }
#line 266 "pprint.m"
}

#line 265 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__parentheses_1_f_0(
#line 265 "pprint.m"
  MR_Word mercury__pprint__TypeClassInfo_for_doc_6,
#line 265 "pprint.m"
  MR_Box mercury__pprint__D_3)
#line 265 "pprint.m"
{
#line 583 "pprint.m"
  {
#line 583 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 583 "pprint.m"
    MR_Word mercury__pprint__HeadVar__2_2;
#line 583 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_7 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 583 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_8 = (MR_Word) &mercury__pprint_scalar_common_1[1];

#line 583 "pprint.m"
    {
#line 583 "pprint.m"
      return mercury__pprint__HeadVar__2_2 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_7, mercury__pprint__TypeClassInfo_for_doc_8, mercury__pprint__TypeClassInfo_for_doc_6, ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), mercury__pprint__D_3);
    }
#line 583 "pprint.m"
    return mercury__pprint__HeadVar__2_2;
#line 583 "pprint.m"
  }
#line 265 "pprint.m"
}

#line 264 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__bracketed_3_f_0(
#line 264 "pprint.m"
  MR_Word mercury__pprint__TypeClassInfo_for_doc_9,
#line 264 "pprint.m"
  MR_Word mercury__pprint__TypeClassInfo_for_doc_10,
#line 264 "pprint.m"
  MR_Word mercury__pprint__TypeClassInfo_for_doc_11,
#line 264 "pprint.m"
  MR_Box mercury__pprint__L_5,
#line 264 "pprint.m"
  MR_Box mercury__pprint__R_6,
#line 264 "pprint.m"
  MR_Box mercury__pprint__D_7)
#line 264 "pprint.m"
{
#line 582 "pprint.m"
  {
#line 582 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 582 "pprint.m"
    MR_Word mercury__pprint__HeadVar__4_4;
#line 582 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_12 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 582 "pprint.m"
    MR_Word mercury__pprint__V_8_8;
#line 582 "pprint.m"
    MR_Word mercury__pprint__V_15_15;
#line 582 "pprint.m"
    MR_Word mercury__pprint__V_16_16;
#line 582 "pprint.m"
    MR_Integer mercury__pprint__V_18_18;
#line 582 "pprint.m"
    MR_Integer mercury__pprint__V_21_21;
#line 582 "pprint.m"
    MR_Word mercury__pprint__V_27_27;
#line 582 "pprint.m"
    MR_Word mercury__pprint__V_28_28;
#line 582 "pprint.m"
    MR_Integer mercury__pprint__V_30_30;
#line 582 "pprint.m"
    MR_Integer mercury__pprint__V_33_33;
#line 15014 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 15016 "pprint.c"
    MR_Box mercury__pprint__conv1_V_15_15;
#line 15018 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 15020 "pprint.c"
    MR_Box mercury__pprint__conv3_V_16_16;
#line 15022 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_4)(MR_Box, MR_Box, MR_Box);
#line 15024 "pprint.c"
    MR_Box mercury__pprint__conv5_V_27_27;
#line 15026 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_6)(MR_Box, MR_Box, MR_Box);
#line 15028 "pprint.c"
    MR_Box mercury__pprint__conv7_V_28_28;

#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__bracketed_3_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 15052 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_18_18  = Max;
#line 141 "int.opt"
}
#line 15059 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_11, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15061 "pprint.c"
    {
#line 15063 "pprint.c"
      mercury__pprint__conv1_V_15_15 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_11), ((MR_Box) (mercury__pprint__V_18_18)), mercury__pprint__D_7);
    }
#line 15066 "pprint.c"
    mercury__pprint__V_15_15 = ((MR_Word) mercury__pprint__conv1_V_15_15);
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__bracketed_3_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 15089 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_21_21  = Max;
#line 141 "int.opt"
}
#line 15096 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_10, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15098 "pprint.c"
    {
#line 15100 "pprint.c"
      mercury__pprint__conv3_V_16_16 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_10), ((MR_Box) (mercury__pprint__V_21_21)), mercury__pprint__R_6);
    }
#line 15103 "pprint.c"
    mercury__pprint__V_16_16 = ((MR_Word) mercury__pprint__conv3_V_16_16);
#line 428 "pprint.m"
    {
#line 428 "pprint.m"
      mercury__pprint__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__V_8_8, 0) = ((MR_Box) (mercury__pprint__V_15_15));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__V_8_8, 1) = ((MR_Box) (mercury__pprint__V_16_16));
#line 428 "pprint.m"
    }
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__bracketed_3_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 15136 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_30_30  = Max;
#line 141 "int.opt"
}
#line 15143 "pprint.c"
    mercury__pprint__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15145 "pprint.c"
    {
#line 15147 "pprint.c"
      mercury__pprint__conv5_V_27_27 = mercury__pprint__func_4(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_9), ((MR_Box) (mercury__pprint__V_30_30)), mercury__pprint__L_5);
    }
#line 15150 "pprint.c"
    mercury__pprint__V_27_27 = ((MR_Word) mercury__pprint__conv5_V_27_27);
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__bracketed_3_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 15173 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_33_33  = Max;
#line 141 "int.opt"
}
#line 15180 "pprint.c"
    mercury__pprint__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_12, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15182 "pprint.c"
    {
#line 15184 "pprint.c"
      mercury__pprint__conv7_V_28_28 = mercury__pprint__func_6(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_12), ((MR_Box) (mercury__pprint__V_33_33)), ((MR_Box) (mercury__pprint__V_8_8)));
    }
#line 15187 "pprint.c"
    mercury__pprint__V_28_28 = ((MR_Word) mercury__pprint__conv7_V_28_28);
#line 428 "pprint.m"
    {
#line 428 "pprint.m"
      mercury__pprint__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__4_4, 0) = ((MR_Box) (mercury__pprint__V_27_27));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__4_4, 1) = ((MR_Box) (mercury__pprint__V_28_28));
#line 428 "pprint.m"
    }
#line 582 "pprint.m"
    return mercury__pprint__HeadVar__4_4;
#line 582 "pprint.m"
  }
#line 264 "pprint.m"
}

#line 255 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__f_60_47_62_2_f_0(
#line 255 "pprint.m"
  MR_Word mercury__pprint__X_4,
#line 255 "pprint.m"
  MR_Word mercury__pprint__Y_5)
#line 255 "pprint.m"
{
#line 578 "pprint.m"
  {
#line 578 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 578 "pprint.m"
    MR_Word mercury__pprint__HeadVar__3_3;
#line 578 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_8 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 578 "pprint.m"
    MR_Word mercury__pprint__TypeClassInfo_for_doc_9 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 578 "pprint.m"
    MR_Word mercury__pprint__V_6_6;
#line 578 "pprint.m"
    MR_Word mercury__pprint__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 578 "pprint.m"
    MR_Word mercury__pprint__V_12_12;
#line 578 "pprint.m"
    MR_Word mercury__pprint__V_13_13;
#line 578 "pprint.m"
    MR_Integer mercury__pprint__V_15_15;
#line 578 "pprint.m"
    MR_Integer mercury__pprint__V_18_18;
#line 15237 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 15239 "pprint.c"
    MR_Box mercury__pprint__conv1_V_12_12;
#line 15241 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 15243 "pprint.c"
    MR_Box mercury__pprint__conv3_V_13_13;

#line 578 "pprint.m"
    {
#line 578 "pprint.m"
      mercury__pprint__V_6_6 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_9, mercury__pprint__TypeClassInfo_for_doc_9, ((MR_Box) (mercury__pprint__V_7_7)), ((MR_Box) (mercury__pprint__Y_5)));
    }
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__f_60_47_62_2_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 15272 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_15_15  = Max;
#line 141 "int.opt"
}
#line 15279 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_8, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15281 "pprint.c"
    {
#line 15283 "pprint.c"
      mercury__pprint__conv1_V_12_12 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_8), ((MR_Box) (mercury__pprint__V_15_15)), ((MR_Box) (mercury__pprint__X_4)));
    }
#line 15286 "pprint.c"
    mercury__pprint__V_12_12 = ((MR_Word) mercury__pprint__conv1_V_12_12);
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__f_60_47_62_2_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 15309 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_18_18  = Max;
#line 141 "int.opt"
}
#line 15316 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15318 "pprint.c"
    {
#line 15320 "pprint.c"
      mercury__pprint__conv3_V_13_13 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_9), ((MR_Box) (mercury__pprint__V_18_18)), ((MR_Box) (mercury__pprint__V_6_6)));
    }
#line 15323 "pprint.c"
    mercury__pprint__V_13_13 = ((MR_Word) mercury__pprint__conv3_V_13_13);
#line 428 "pprint.m"
    {
#line 428 "pprint.m"
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (mercury__pprint__V_12_12));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__V_13_13));
#line 428 "pprint.m"
    }
#line 578 "pprint.m"
    return mercury__pprint__HeadVar__3_3;
#line 578 "pprint.m"
  }
#line 255 "pprint.m"
}

#line 251 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__poly_1_f_0(
#line 251 "pprint.m"
  MR_Word mercury__pprint__HeadVar__1_1)
#line 251 "pprint.m"
{
#line 435 "pprint.m"
  {
#line 435 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 435 "pprint.m"
    MR_Word mercury__pprint__HeadVar__2_2;

#line 435 "pprint.m"
#line 435 "pprint.m"
    switch (MR_tag((MR_Word) mercury__pprint__HeadVar__1_1)) {
#line 435 "pprint.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 435 "pprint.m"
      case (MR_Integer) 0:
#line 438 "pprint.m"
        {
#line 438 "pprint.m"
          MR_Float mercury__pprint__F_21 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__pprint__HeadVar__1_1, (MR_Integer) 0)));
#line 438 "pprint.m"
          MR_String mercury__pprint__V_22_22;
#line 438 "pprint.m"
          MR_Word mercury__pprint__V_44_44 = (MR_Word) &mercury__pprint_scalar_common_5[0];
#line 438 "pprint.m"
          MR_Word mercury__pprint__MaybeWidth_9_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 438 "pprint.m"
          MR_Word mercury__pprint__MaybePrec_10_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 70 "string.format.opt"
          {
#line 70 "string.format.opt"
            mercury__string__format__format_float_component_6_p_0(mercury__pprint__V_44_44, mercury__pprint__MaybeWidth_9_61, mercury__pprint__MaybePrec_10_62, (MR_Integer) 2, mercury__pprint__F_21, &mercury__pprint__V_22_22);
          }
#line 431 "pprint.m"
          {
#line 431 "pprint.m"
            mercury__pprint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "pprint.m"
            MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 431 "pprint.m"
            MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, 1) = ((MR_Box) (mercury__pprint__V_22_22));
#line 431 "pprint.m"
          }
#line 438 "pprint.m"
        }
#line 435 "pprint.m"
        break;
#line 435 "pprint.m"
      case (MR_Integer) 1:
#line 437 "pprint.m"
        {
#line 437 "pprint.m"
          MR_Integer mercury__pprint__I_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, (MR_Integer) 0)));
#line 437 "pprint.m"
          MR_String mercury__pprint__V_16_16;
#line 437 "pprint.m"
          MR_Word mercury__pprint__V_38_38 = (MR_Word) &mercury__pprint_scalar_common_5[0];
#line 437 "pprint.m"
          MR_Word mercury__pprint__MaybeWidth_7_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 437 "pprint.m"
          MR_Word mercury__pprint__MaybePrec_8_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 38 "string.format.opt"
          {
#line 38 "string.format.opt"
            mercury__string__format__format_signed_int_component_5_p_0(mercury__pprint__V_38_38, mercury__pprint__MaybeWidth_7_67, mercury__pprint__MaybePrec_8_68, mercury__pprint__I_15, &mercury__pprint__V_16_16);
          }
#line 431 "pprint.m"
          {
#line 431 "pprint.m"
            mercury__pprint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "pprint.m"
            MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 431 "pprint.m"
            MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, 1) = ((MR_Box) (mercury__pprint__V_16_16));
#line 431 "pprint.m"
          }
#line 437 "pprint.m"
        }
#line 435 "pprint.m"
        break;
#line 435 "pprint.m"
      case (MR_Integer) 2:
#line 435 "pprint.m"
        {
#line 435 "pprint.m"
          MR_String mercury__pprint__S_3 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__1_1, (MR_Integer) 0)));
#line 435 "pprint.m"
          MR_String mercury__pprint__V_4_4;
#line 435 "pprint.m"
          MR_Word mercury__pprint__V_32_32 = (MR_Word) &mercury__pprint_scalar_common_5[0];
#line 435 "pprint.m"
          MR_Word mercury__pprint__MaybeWidth_7_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 435 "pprint.m"
          MR_Word mercury__pprint__MaybePrec_8_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 22 "string.format.opt"
          {
#line 22 "string.format.opt"
            mercury__string__format__format_string_component_5_p_0(mercury__pprint__V_32_32, mercury__pprint__MaybeWidth_7_73, mercury__pprint__MaybePrec_8_74, mercury__pprint__S_3, &mercury__pprint__V_4_4);
          }
#line 431 "pprint.m"
          {
#line 431 "pprint.m"
            mercury__pprint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "pprint.m"
            MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 431 "pprint.m"
            MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, 1) = ((MR_Box) (mercury__pprint__V_4_4));
#line 431 "pprint.m"
          }
#line 435 "pprint.m"
        }
#line 435 "pprint.m"
        break;
#line 435 "pprint.m"
      case (MR_Integer) 3:
#line 436 "pprint.m"
        {
#line 436 "pprint.m"
          MR_Char mercury__pprint__C_9 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__1_1, (MR_Integer) 0)));
#line 436 "pprint.m"
          MR_String mercury__pprint__V_10_10;
#line 436 "pprint.m"
          MR_Word mercury__pprint__V_51_51 = (MR_Word) &mercury__pprint_scalar_common_5[0];
#line 436 "pprint.m"
          MR_Word mercury__pprint__MaybeWidth_7_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 15 "string.format.opt"
          {
#line 15 "string.format.opt"
            mercury__string__format__format_char_component_4_p_0(mercury__pprint__V_51_51, mercury__pprint__MaybeWidth_7_55, mercury__pprint__C_9, &mercury__pprint__V_10_10);
          }
#line 431 "pprint.m"
          {
#line 431 "pprint.m"
            mercury__pprint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "pprint.m"
            MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 431 "pprint.m"
            MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, 1) = ((MR_Box) (mercury__pprint__V_10_10));
#line 431 "pprint.m"
          }
#line 436 "pprint.m"
        }
#line 435 "pprint.m"
        break;
#line 435 "pprint.m"
    }
#line 435 "pprint.m"
    return mercury__pprint__HeadVar__2_2;
#line 435 "pprint.m"
  }
#line 251 "pprint.m"
}

#line 243 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__group_1_f_0(
#line 243 "pprint.m"
  MR_Word mercury__pprint__TypeClassInfo_for_doc_5,
#line 243 "pprint.m"
  MR_Box mercury__pprint__X_3)
#line 243 "pprint.m"
{
#line 433 "pprint.m"
  {
#line 433 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 433 "pprint.m"
    MR_Word mercury__pprint__HeadVar__2_2;
#line 433 "pprint.m"
    MR_Word mercury__pprint__V_4_4;
#line 433 "pprint.m"
    MR_Integer mercury__pprint__V_7_7;
#line 15523 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 15525 "pprint.c"
    MR_Box mercury__pprint__conv1_V_4_4;

#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__group_1_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 15549 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_7_7  = Max;
#line 141 "int.opt"
}
#line 15556 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15558 "pprint.c"
    {
#line 15560 "pprint.c"
      mercury__pprint__conv1_V_4_4 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_5), ((MR_Box) (mercury__pprint__V_7_7)), mercury__pprint__X_3);
    }
#line 15563 "pprint.c"
    mercury__pprint__V_4_4 = ((MR_Word) mercury__pprint__conv1_V_4_4);
#line 433 "pprint.m"
    {
#line 433 "pprint.m"
      mercury__pprint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "pprint.m"
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 433 "pprint.m"
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, 1) = ((MR_Box) (mercury__pprint__V_4_4));
#line 433 "pprint.m"
    }
#line 433 "pprint.m"
    return mercury__pprint__HeadVar__2_2;
#line 433 "pprint.m"
  }
#line 243 "pprint.m"
}

#line 235 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__label_2_f_0(
#line 235 "pprint.m"
  MR_Word mercury__pprint__TypeClassInfo_for_doc_7,
#line 235 "pprint.m"
  MR_String mercury__pprint__L_4,
#line 235 "pprint.m"
  MR_Box mercury__pprint__X_5)
#line 235 "pprint.m"
{
#line 430 "pprint.m"
  {
#line 430 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 430 "pprint.m"
    MR_Word mercury__pprint__HeadVar__3_3;
#line 430 "pprint.m"
    MR_Word mercury__pprint__V_6_6;
#line 430 "pprint.m"
    MR_Integer mercury__pprint__V_9_9;
#line 15603 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 15605 "pprint.c"
    MR_Box mercury__pprint__conv1_V_6_6;

#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__label_2_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 15629 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_9_9  = Max;
#line 141 "int.opt"
}
#line 15636 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_7, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15638 "pprint.c"
    {
#line 15640 "pprint.c"
      mercury__pprint__conv1_V_6_6 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_7), ((MR_Box) (mercury__pprint__V_9_9)), mercury__pprint__X_5);
    }
#line 15643 "pprint.c"
    mercury__pprint__V_6_6 = ((MR_Word) mercury__pprint__conv1_V_6_6);
#line 430 "pprint.m"
    {
#line 430 "pprint.m"
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 430 "pprint.m"
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 430 "pprint.m"
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__L_4));
#line 430 "pprint.m"
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, 2) = ((MR_Box) (mercury__pprint__V_6_6));
#line 430 "pprint.m"
    }
#line 430 "pprint.m"
    return mercury__pprint__HeadVar__3_3;
#line 430 "pprint.m"
  }
#line 235 "pprint.m"
}

#line 230 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__nest_2_f_0(
#line 230 "pprint.m"
  MR_Word mercury__pprint__TypeClassInfo_for_doc_7,
#line 230 "pprint.m"
  MR_Integer mercury__pprint__I_4,
#line 230 "pprint.m"
  MR_Box mercury__pprint__X_5)
#line 230 "pprint.m"
{
#line 429 "pprint.m"
  {
#line 429 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 429 "pprint.m"
    MR_Word mercury__pprint__HeadVar__3_3;
#line 429 "pprint.m"
    MR_Word mercury__pprint__V_6_6;
#line 429 "pprint.m"
    MR_Integer mercury__pprint__V_9_9;
#line 15685 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 15687 "pprint.c"
    MR_Box mercury__pprint__conv1_V_6_6;

#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__nest_2_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 15711 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_9_9  = Max;
#line 141 "int.opt"
}
#line 15718 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_7, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15720 "pprint.c"
    {
#line 15722 "pprint.c"
      mercury__pprint__conv1_V_6_6 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_7), ((MR_Box) (mercury__pprint__V_9_9)), mercury__pprint__X_5);
    }
#line 15725 "pprint.c"
    mercury__pprint__V_6_6 = ((MR_Word) mercury__pprint__conv1_V_6_6);
#line 429 "pprint.m"
    {
#line 429 "pprint.m"
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "pprint.m"
      MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (mercury__pprint__I_4));
#line 429 "pprint.m"
      MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__V_6_6));
#line 429 "pprint.m"
    }
#line 429 "pprint.m"
    return mercury__pprint__HeadVar__3_3;
#line 429 "pprint.m"
  }
#line 230 "pprint.m"
}

#line 224 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__line_0_f_0(void)
#line 224 "pprint.m"
{
#line 432 "pprint.m"
  {
#line 432 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 432 "pprint.m"
    MR_Word mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));

#line 432 "pprint.m"
    return mercury__pprint__HeadVar__1_1;
#line 432 "pprint.m"
  }
#line 224 "pprint.m"
}

#line 218 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__f_60_62_2_f_0(
#line 218 "pprint.m"
  MR_Word mercury__pprint__X_4,
#line 218 "pprint.m"
  MR_Word mercury__pprint__Y_5)
#line 218 "pprint.m"
{
#line 428 "pprint.m"
  {
#line 428 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 428 "pprint.m"
    MR_Word mercury__pprint__HeadVar__3_3;

#line 428 "pprint.m"
    {
#line 428 "pprint.m"
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (mercury__pprint__X_4));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__Y_5));
#line 428 "pprint.m"
    }
#line 428 "pprint.m"
    return mercury__pprint__HeadVar__3_3;
#line 428 "pprint.m"
  }
#line 218 "pprint.m"
}

#line 211 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__text_1_f_0(
#line 211 "pprint.m"
  MR_String mercury__pprint__S_3)
#line 211 "pprint.m"
{
#line 431 "pprint.m"
  {
#line 431 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 431 "pprint.m"
    MR_Word mercury__pprint__HeadVar__2_2;

#line 431 "pprint.m"
    {
#line 431 "pprint.m"
      mercury__pprint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "pprint.m"
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 431 "pprint.m"
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, 1) = ((MR_Box) (mercury__pprint__S_3));
#line 431 "pprint.m"
    }
#line 431 "pprint.m"
    return mercury__pprint__HeadVar__2_2;
#line 431 "pprint.m"
  }
#line 211 "pprint.m"
}

#line 203 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__nil_0_f_0(void)
#line 203 "pprint.m"
{
#line 427 "pprint.m"
  {
#line 427 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 427 "pprint.m"
    MR_Word mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 427 "pprint.m"
    return mercury__pprint__HeadVar__1_1;
#line 427 "pprint.m"
  }
#line 203 "pprint.m"
}

#line 199 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__f_43_43_2_f_0(
#line 199 "pprint.m"
  MR_Word mercury__pprint__TypeClassInfo_for_doc_8,
#line 199 "pprint.m"
  MR_Word mercury__pprint__TypeClassInfo_for_doc_9,
#line 199 "pprint.m"
  MR_Box mercury__pprint__Doc1_4,
#line 199 "pprint.m"
  MR_Box mercury__pprint__Doc2_5)
#line 199 "pprint.m"
{
#line 423 "pprint.m"
  {
#line 423 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 423 "pprint.m"
    MR_Word mercury__pprint__HeadVar__3_3;
#line 423 "pprint.m"
    MR_Word mercury__pprint__V_6_6;
#line 423 "pprint.m"
    MR_Word mercury__pprint__V_7_7;
#line 423 "pprint.m"
    MR_Integer mercury__pprint__V_11_11;
#line 423 "pprint.m"
    MR_Integer mercury__pprint__V_14_14;
#line 15873 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 15875 "pprint.c"
    MR_Box mercury__pprint__conv1_V_6_6;
#line 15877 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 15879 "pprint.c"
    MR_Box mercury__pprint__conv3_V_7_7;

#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__f_43_43_2_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 15903 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_11_11  = Max;
#line 141 "int.opt"
}
#line 15910 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_8, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15912 "pprint.c"
    {
#line 15914 "pprint.c"
      mercury__pprint__conv1_V_6_6 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_8), ((MR_Box) (mercury__pprint__V_11_11)), mercury__pprint__Doc1_4);
    }
#line 15917 "pprint.c"
    mercury__pprint__V_6_6 = ((MR_Word) mercury__pprint__conv1_V_6_6);
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__f_43_43_2_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 15940 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_14_14  = Max;
#line 141 "int.opt"
}
#line 15947 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15949 "pprint.c"
    {
#line 15951 "pprint.c"
      mercury__pprint__conv3_V_7_7 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_9), ((MR_Box) (mercury__pprint__V_14_14)), mercury__pprint__Doc2_5);
    }
#line 15954 "pprint.c"
    mercury__pprint__V_7_7 = ((MR_Word) mercury__pprint__conv3_V_7_7);
#line 428 "pprint.m"
    {
#line 428 "pprint.m"
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (mercury__pprint__V_6_6));
#line 428 "pprint.m"
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__V_7_7));
#line 428 "pprint.m"
    }
#line 423 "pprint.m"
    return mercury__pprint__HeadVar__3_3;
#line 423 "pprint.m"
  }
#line 199 "pprint.m"
}

#line 194 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__doc_1_f_0(
#line 194 "pprint.m"
  MR_Word mercury__pprint__TypeClassInfo_for_doc_5,
#line 194 "pprint.m"
  MR_Box mercury__pprint__X_3)
#line 194 "pprint.m"
{
#line 411 "pprint.m"
  {
#line 411 "pprint.m"
    MR_bool mercury__pprint__succeeded;
#line 411 "pprint.m"
    MR_Word mercury__pprint__HeadVar__2_2;
#line 411 "pprint.m"
    MR_Integer mercury__pprint__V_4_4;
#line 15990 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 15992 "pprint.c"
    MR_Box mercury__pprint__conv1_HeadVar__2_2;

#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__doc_1_f_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 16016 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_4_4  = Max;
#line 141 "int.opt"
}
#line 16023 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 16025 "pprint.c"
    {
#line 16027 "pprint.c"
      mercury__pprint__conv1_HeadVar__2_2 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_5), ((MR_Box) (mercury__pprint__V_4_4)), mercury__pprint__X_3);
    }
#line 16030 "pprint.c"
    mercury__pprint__HeadVar__2_2 = ((MR_Word) mercury__pprint__conv1_HeadVar__2_2);
#line 411 "pprint.m"
    return mercury__pprint__HeadVar__2_2;
#line 411 "pprint.m"
  }
#line 194 "pprint.m"
}

#line 183 "pprint.m"
MR_Word MR_CALL 
mercury__pprint__doc_2_f_0(
#line 183 "pprint.m"
  MR_Word mercury__pprint__TypeClassInfo_for_doc_4,
#line 183 "pprint.m"
  MR_Integer mercury__pprint__HeadVar__1_1,
#line 183 "pprint.m"
  MR_Box mercury__pprint__HeadVar__2_2)
#line 183 "pprint.m"
{
#line 16050 "pprint.c"
  {
#line 16052 "pprint.c"
    MR_bool mercury__pprint__succeeded;
#line 16054 "pprint.c"
    MR_Word mercury__pprint__HeadVar__3_3;
#line 16056 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 16058 "pprint.c"
    MR_Box mercury__pprint__conv1_HeadVar__3_3;

#line 16061 "pprint.c"
    {
#line 16063 "pprint.c"
      mercury__pprint__conv1_HeadVar__3_3 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_4), ((MR_Box) (mercury__pprint__HeadVar__1_1)), mercury__pprint__HeadVar__2_2);
    }
#line 16066 "pprint.c"
    mercury__pprint__HeadVar__3_3 = ((MR_Word) mercury__pprint__conv1_HeadVar__3_3);
#line 16068 "pprint.c"
    return mercury__pprint__HeadVar__3_3;
#line 16070 "pprint.c"
  }
#line 183 "pprint.m"
}

void mercury__pprint__init(void)
{
}

void mercury__pprint__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__pprint__pprint__type_ctor_info_depth_0);
	MR_register_type_ctor_info(&mercury__pprint__pprint__type_ctor_info_doc_0);
	MR_register_type_ctor_info(&mercury__pprint__pprint__type_ctor_info_map_pair_2);
}

void mercury__pprint__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module pprint. */
