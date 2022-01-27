/*
** Automatically generated from `pprint.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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

#line 103 "sparse_bitset.opt"
static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
#line 103 "sparse_bitset.opt"
  MR_Word mercury__pprint__TypeClassInfo_for_enum_29,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__pprint__V_8_8,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__pprint__V_10_10,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__pprint__V_11_11,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__pprint__V_12_12,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__pprint__V_19_13,
#line 103 "sparse_bitset.opt"
  MR_Word * mercury__pprint__V_20_14);

#line 67 "version_array.opt"
static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(
#line 67 "version_array.opt"
  MR_Word mercury__pprint__TypeInfo_for_T1_1_16,
#line 67 "version_array.opt"
  MR_Box mercury__pprint__V_7_7,
#line 67 "version_array.opt"
  MR_Word mercury__pprint__V_8_8,
#line 67 "version_array.opt"
  MR_Integer mercury__pprint__V_9_9);

#line 77 "sparse_bitset.opt"
static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
#line 77 "sparse_bitset.opt"
  MR_Word mercury__pprint__TypeClassInfo_for_enum_20,
#line 77 "sparse_bitset.opt"
  MR_Word mercury__pprint__HeadVar__2_2,
#line 77 "sparse_bitset.opt"
  MR_Word mercury__pprint__HeadVar__3_3,
#line 77 "sparse_bitset.opt"
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

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_57_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(
#line 311 "list.int"
  MR_Word mercury__pprint__V_12_12,
#line 311 "list.int"
  MR_Integer mercury__pprint__V_13_13,
#line 311 "list.int"
  MR_Word mercury__pprint__HeadVar__2_2);

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_56_95_95_91_50_93_95_48_2_f_in__list_0(
#line 311 "list.int"
  MR_Integer mercury__pprint__V_12_12,
#line 311 "list.int"
  MR_Word mercury__pprint__HeadVar__2_2);

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_2_f_in__list_0(
#line 311 "list.int"
  MR_Word mercury__pprint__HeadVar__2_2);

#line 18 "ops.opt"
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

#line 513 "string.int0"
static void MR_CALL 
mercury__pprint__next_boundary__ho23__ho52_4_p_in__string_0(
#line 513 "string.int0"
  MR_String mercury__pprint__V_6_6,
#line 513 "string.int0"
  MR_Integer mercury__pprint__V_7_7,
#line 513 "string.int0"
  MR_Integer * mercury__pprint__V_8_8);

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

#line 513 "string.int0"
static void MR_CALL 
mercury__pprint__next_boundary__ho41_4_p_in__string_0(
#line 513 "string.int0"
  MR_String mercury__pprint__V_6_6,
#line 513 "string.int0"
  MR_Integer mercury__pprint__V_7_7,
#line 513 "string.int0"
  MR_Integer * mercury__pprint__V_8_8);

#line 553 "string.int0"
static void MR_CALL 
mercury__pprint__words_loop__ho40_4_p_in__string_0(
#line 553 "string.int0"
  MR_String mercury__pprint__V_6_6,
#line 553 "string.int0"
  MR_Integer mercury__pprint__V_7_7,
#line 553 "string.int0"
  MR_Word * mercury__pprint__V_8_8);

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__pprint__map__ho37_2_f_in__list_0(
#line 311 "list.int"
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



#include "array.mh"
#include "benchmarking.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "hash_table.mh"
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



#line 930 "pprint.c"
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

#line 947 "pprint.c"
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

#line 962 "pprint.c"
static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__pprint__pprint__type_ctor_info_doc_0,
  (MR_PseudoTypeInfo) &mercury__pprint__pprint__type_ctor_info_doc_0
};

#line 968 "pprint.c"
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

#line 983 "pprint.c"
static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__pprint__pprint__type_ctor_info_doc_0
};

#line 989 "pprint.c"
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

#line 1004 "pprint.c"
static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_3[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__pprint__pprint__type_ctor_info_doc_0
};

#line 1010 "pprint.c"
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

#line 1025 "pprint.c"
static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1030 "pprint.c"
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

#line 1045 "pprint.c"
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

#line 1060 "pprint.c"
static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__pprint__pprint__type_ctor_info_doc_0
};

#line 1065 "pprint.c"
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

#line 1080 "pprint.c"
static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_7[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
};

#line 1086 "pprint.c"
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

#line 1101 "pprint.c"
static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_stag_ordered_doc_0_0[2] = {
  &mercury__pprint__pprint__du_functor_desc_doc_0_0,
  &mercury__pprint__pprint__du_functor_desc_doc_0_5
};

#line 1107 "pprint.c"
static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_stag_ordered_doc_0_1[1] = {
  &mercury__pprint__pprint__du_functor_desc_doc_0_1
};

#line 1112 "pprint.c"
static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_stag_ordered_doc_0_2[1] = {
  &mercury__pprint__pprint__du_functor_desc_doc_0_2
};

#line 1117 "pprint.c"
static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_stag_ordered_doc_0_3[4] = {
  &mercury__pprint__pprint__du_functor_desc_doc_0_3,
  &mercury__pprint__pprint__du_functor_desc_doc_0_4,
  &mercury__pprint__pprint__du_functor_desc_doc_0_6,
  &mercury__pprint__pprint__du_functor_desc_doc_0_7
};

#line 1125 "pprint.c"
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

#line 1149 "pprint.c"
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

#line 1161 "pprint.c"
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

#line 1173 "pprint.c"
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

#line 1190 "pprint.c"
static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_map_pair_2_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 1196 "pprint.c"
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

#line 1211 "pprint.c"
static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_stag_ordered_map_pair_2_0[1] = {
  &mercury__pprint__pprint__du_functor_desc_map_pair_2_0
};

#line 1216 "pprint.c"
static const MR_DuPtagLayout mercury__pprint__pprint__du_ptag_ordered_map_pair_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__pprint__pprint__du_stag_ordered_map_pair_2_0
  }
};

#line 1225 "pprint.c"
static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_name_ordered_map_pair_2[1] = {
  &mercury__pprint__pprint__du_functor_desc_map_pair_2_0
};

#line 1230 "pprint.c"
static const MR_Integer mercury__pprint__pprint__functor_number_map_map_pair_2[1] = {
  (MR_Integer) 0
};

#line 1235 "pprint.c"
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

#line 1252 "pprint.c"
const MR_BaseTypeclassInfo base_typeclass_info_pprint__doc__arity1__character__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__pprint__ClassMethod_for_pprint__doc____character__arity0______pprint__doc_2_2_f_0_10001))
};

#line 1262 "pprint.c"
const MR_BaseTypeclassInfo base_typeclass_info_pprint__doc__arity1__float__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__pprint__ClassMethod_for_pprint__doc____float__arity0______pprint__doc_2_2_f_0_10001))
};

#line 1272 "pprint.c"
const MR_BaseTypeclassInfo base_typeclass_info_pprint__doc__arity1__int__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__pprint__ClassMethod_for_pprint__doc____int__arity0______pprint__doc_2_2_f_0_10001))
};

#line 1282 "pprint.c"
const MR_BaseTypeclassInfo base_typeclass_info_pprint__doc__arity1__string__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__pprint__ClassMethod_for_pprint__doc____string__arity0______pprint__doc_2_2_f_0_10001))
};

#line 1292 "pprint.c"
const MR_BaseTypeclassInfo base_typeclass_info_pprint__doc__arity1__pprint__doc__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__pprint__ClassMethod_for_pprint__doc____pprint__doc__arity0______pprint__doc_2_2_f_0_10001))
};

#line 1302 "pprint.c"
static const MR_ConstString mercury__pprint__pprint__type_class_id_var_names_doc_1[1] = {
  (MR_String) "T"
};

#line 1307 "pprint.c"
static const MR_TypeClassMethod mercury__pprint__pprint__type_class_id_method_ids_doc_1[1] = {
  {
    (MR_String) "doc",
    (MR_Integer) 3,
    mercury__private_builtin__MR_FUNCTION
  }
};

#line 1316 "pprint.c"
static const MR_TypeClassId mercury__pprint__pprint__type_class_id_doc_1 = {
  (MR_String) "pprint",
  (MR_String) "doc",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__pprint__pprint__type_class_id_var_names_doc_1,
  mercury__pprint__pprint__type_class_id_method_ids_doc_1
};

#line 1327 "pprint.c"
const MR_TypeClassDeclStruct mercury__pprint__pprint__type_class_decl_doc_1 = {
  &mercury__pprint__pprint__type_class_id_doc_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 1335 "pprint.c"
static MR_bool MR_CALL 
mercury__pprint____Unify____depth_0_0_10001(
#line 1338 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_1,
#line 1340 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2)
#line 1342 "pprint.c"
{
#line 1344 "pprint.c"
  {
#line 1346 "pprint.c"
    MR_bool mercury__pprint__succeeded;

#line 1349 "pprint.c"
    {
#line 1351 "pprint.c"
      mercury__pprint__succeeded = mercury__pprint____Unify____depth_0_0(((MR_Integer) mercury__pprint__wrapper_arg_1), ((MR_Integer) mercury__pprint__wrapper_arg_2));
    }
#line 1354 "pprint.c"
    return mercury__pprint__succeeded;
#line 1356 "pprint.c"
  }
#line 1358 "pprint.c"
}

#line 1361 "pprint.c"
static void MR_CALL 
mercury__pprint____Compare____depth_0_0_10001(
#line 1364 "pprint.c"
  MR_Box * mercury__pprint__wrapper_arg_1,
#line 1366 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2,
#line 1368 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_3)
#line 1370 "pprint.c"
{
#line 1372 "pprint.c"
  {
#line 1374 "pprint.c"
    MR_Word mercury__pprint__conv0_HeadVar__1_1;

#line 1377 "pprint.c"
    {
#line 1379 "pprint.c"
      mercury__pprint____Compare____depth_0_0(&mercury__pprint__conv0_HeadVar__1_1, ((MR_Integer) mercury__pprint__wrapper_arg_2), ((MR_Integer) mercury__pprint__wrapper_arg_3));
    }
#line 1382 "pprint.c"
    *mercury__pprint__wrapper_arg_1 = ((MR_Box) (mercury__pprint__conv0_HeadVar__1_1));
#line 1384 "pprint.c"
  }
#line 1386 "pprint.c"
}

#line 1389 "pprint.c"
static MR_bool MR_CALL 
mercury__pprint____Unify____doc_0_0_10001(
#line 1392 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_1,
#line 1394 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2)
#line 1396 "pprint.c"
{
#line 1398 "pprint.c"
  {
#line 1400 "pprint.c"
    MR_bool mercury__pprint__succeeded;

#line 1403 "pprint.c"
    {
#line 1405 "pprint.c"
      mercury__pprint__succeeded = mercury__pprint____Unify____doc_0_0(((MR_Word) mercury__pprint__wrapper_arg_1), ((MR_Word) mercury__pprint__wrapper_arg_2));
    }
#line 1408 "pprint.c"
    return mercury__pprint__succeeded;
#line 1410 "pprint.c"
  }
#line 1412 "pprint.c"
}

#line 1415 "pprint.c"
static void MR_CALL 
mercury__pprint____Compare____doc_0_0_10001(
#line 1418 "pprint.c"
  MR_Box * mercury__pprint__wrapper_arg_1,
#line 1420 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2,
#line 1422 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_3)
#line 1424 "pprint.c"
{
#line 1426 "pprint.c"
  {
#line 1428 "pprint.c"
    MR_Word mercury__pprint__conv0_HeadVar__1_1;

#line 1431 "pprint.c"
    {
#line 1433 "pprint.c"
      mercury__pprint____Compare____doc_0_0(&mercury__pprint__conv0_HeadVar__1_1, ((MR_Word) mercury__pprint__wrapper_arg_2), ((MR_Word) mercury__pprint__wrapper_arg_3));
    }
#line 1436 "pprint.c"
    *mercury__pprint__wrapper_arg_1 = ((MR_Box) (mercury__pprint__conv0_HeadVar__1_1));
#line 1438 "pprint.c"
  }
#line 1440 "pprint.c"
}

#line 1443 "pprint.c"
static MR_bool MR_CALL 
mercury__pprint____Unify____map_pair_2_0_10001(
#line 1446 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_1,
#line 1448 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2,
#line 1450 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_3,
#line 1452 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_4)
#line 1454 "pprint.c"
{
#line 1456 "pprint.c"
  {
#line 1458 "pprint.c"
    MR_bool mercury__pprint__succeeded;

#line 1461 "pprint.c"
    {
#line 1463 "pprint.c"
      mercury__pprint__succeeded = mercury__pprint____Unify____map_pair_2_0(((MR_Word) mercury__pprint__wrapper_arg_1), ((MR_Word) mercury__pprint__wrapper_arg_2), ((MR_Word) mercury__pprint__wrapper_arg_3), ((MR_Word) mercury__pprint__wrapper_arg_4));
    }
#line 1466 "pprint.c"
    return mercury__pprint__succeeded;
#line 1468 "pprint.c"
  }
#line 1470 "pprint.c"
}

#line 1473 "pprint.c"
static void MR_CALL 
mercury__pprint____Compare____map_pair_2_0_10001(
#line 1476 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_1,
#line 1478 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2,
#line 1480 "pprint.c"
  MR_Box * mercury__pprint__wrapper_arg_3,
#line 1482 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_4,
#line 1484 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_5)
#line 1486 "pprint.c"
{
#line 1488 "pprint.c"
  {
#line 1490 "pprint.c"
    MR_Word mercury__pprint__conv0_HeadVar__1_1;

#line 1493 "pprint.c"
    {
#line 1495 "pprint.c"
      mercury__pprint____Compare____map_pair_2_0(((MR_Word) mercury__pprint__wrapper_arg_1), ((MR_Word) mercury__pprint__wrapper_arg_2), &mercury__pprint__conv0_HeadVar__1_1, ((MR_Word) mercury__pprint__wrapper_arg_4), ((MR_Word) mercury__pprint__wrapper_arg_5));
    }
#line 1498 "pprint.c"
    *mercury__pprint__wrapper_arg_3 = ((MR_Box) (mercury__pprint__conv0_HeadVar__1_1));
#line 1500 "pprint.c"
  }
#line 1502 "pprint.c"
}

#line 1505 "pprint.c"
static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____character__arity0______pprint__doc_2_2_f_0_10001(
#line 1508 "pprint.c"
  MR_Box mercury__pprint__closure_arg,
#line 1510 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_1,
#line 1512 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2)
#line 1514 "pprint.c"
{
#line 1516 "pprint.c"
  {
#line 1518 "pprint.c"
    MR_Box mercury__pprint__wrapper_arg_3;
#line 1520 "pprint.c"
    MR_Box mercury__pprint__closure;
#line 1522 "pprint.c"
    MR_Word mercury__pprint__conv0_HeadVar__3_3;

#line 1525 "pprint.c"
    mercury__pprint__closure = mercury__pprint__closure_arg;
#line 1527 "pprint.c"
    {
#line 1529 "pprint.c"
      mercury__pprint__conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____character__arity0______pprint__doc_2_2_f_0(((MR_Integer) mercury__pprint__wrapper_arg_1), ((MR_Char) (MR_Word) mercury__pprint__wrapper_arg_2));
    }
#line 1532 "pprint.c"
    mercury__pprint__wrapper_arg_3 = ((MR_Box) (mercury__pprint__conv0_HeadVar__3_3));
#line 1534 "pprint.c"
    return mercury__pprint__wrapper_arg_3;
#line 1536 "pprint.c"
  }
#line 1538 "pprint.c"
}

#line 1541 "pprint.c"
static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____float__arity0______pprint__doc_2_2_f_0_10001(
#line 1544 "pprint.c"
  MR_Box mercury__pprint__closure_arg,
#line 1546 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_1,
#line 1548 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2)
#line 1550 "pprint.c"
{
#line 1552 "pprint.c"
  {
#line 1554 "pprint.c"
    MR_Box mercury__pprint__wrapper_arg_3;
#line 1556 "pprint.c"
    MR_Box mercury__pprint__closure;
#line 1558 "pprint.c"
    MR_Word mercury__pprint__conv0_HeadVar__3_3;

#line 1561 "pprint.c"
    mercury__pprint__closure = mercury__pprint__closure_arg;
#line 1563 "pprint.c"
    {
#line 1565 "pprint.c"
      mercury__pprint__conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____float__arity0______pprint__doc_2_2_f_0(((MR_Integer) mercury__pprint__wrapper_arg_1), MR_unbox_float(mercury__pprint__wrapper_arg_2));
    }
#line 1568 "pprint.c"
    mercury__pprint__wrapper_arg_3 = ((MR_Box) (mercury__pprint__conv0_HeadVar__3_3));
#line 1570 "pprint.c"
    return mercury__pprint__wrapper_arg_3;
#line 1572 "pprint.c"
  }
#line 1574 "pprint.c"
}

#line 1577 "pprint.c"
static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int__arity0______pprint__doc_2_2_f_0_10001(
#line 1580 "pprint.c"
  MR_Box mercury__pprint__closure_arg,
#line 1582 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_1,
#line 1584 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2)
#line 1586 "pprint.c"
{
#line 1588 "pprint.c"
  {
#line 1590 "pprint.c"
    MR_Box mercury__pprint__wrapper_arg_3;
#line 1592 "pprint.c"
    MR_Box mercury__pprint__closure;
#line 1594 "pprint.c"
    MR_Word mercury__pprint__conv0_HeadVar__3_3;

#line 1597 "pprint.c"
    mercury__pprint__closure = mercury__pprint__closure_arg;
#line 1599 "pprint.c"
    {
#line 1601 "pprint.c"
      mercury__pprint__conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____int__arity0______pprint__doc_2_2_f_0(((MR_Integer) mercury__pprint__wrapper_arg_1), ((MR_Integer) mercury__pprint__wrapper_arg_2));
    }
#line 1604 "pprint.c"
    mercury__pprint__wrapper_arg_3 = ((MR_Box) (mercury__pprint__conv0_HeadVar__3_3));
#line 1606 "pprint.c"
    return mercury__pprint__wrapper_arg_3;
#line 1608 "pprint.c"
  }
#line 1610 "pprint.c"
}

#line 1613 "pprint.c"
static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____string__arity0______pprint__doc_2_2_f_0_10001(
#line 1616 "pprint.c"
  MR_Box mercury__pprint__closure_arg,
#line 1618 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_1,
#line 1620 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2)
#line 1622 "pprint.c"
{
#line 1624 "pprint.c"
  {
#line 1626 "pprint.c"
    MR_Box mercury__pprint__wrapper_arg_3;
#line 1628 "pprint.c"
    MR_Box mercury__pprint__closure;
#line 1630 "pprint.c"
    MR_Word mercury__pprint__conv0_HeadVar__3_3;

#line 1633 "pprint.c"
    mercury__pprint__closure = mercury__pprint__closure_arg;
#line 1635 "pprint.c"
    {
#line 1637 "pprint.c"
      mercury__pprint__conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____string__arity0______pprint__doc_2_2_f_0(((MR_Integer) mercury__pprint__wrapper_arg_1), ((MR_String) mercury__pprint__wrapper_arg_2));
    }
#line 1640 "pprint.c"
    mercury__pprint__wrapper_arg_3 = ((MR_Box) (mercury__pprint__conv0_HeadVar__3_3));
#line 1642 "pprint.c"
    return mercury__pprint__wrapper_arg_3;
#line 1644 "pprint.c"
  }
#line 1646 "pprint.c"
}

#line 1649 "pprint.c"
static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____pprint__doc__arity0______pprint__doc_2_2_f_0_10001(
#line 1652 "pprint.c"
  MR_Box mercury__pprint__closure_arg,
#line 1654 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_1,
#line 1656 "pprint.c"
  MR_Box mercury__pprint__wrapper_arg_2)
#line 1658 "pprint.c"
{
#line 1660 "pprint.c"
  {
#line 1662 "pprint.c"
    MR_Box mercury__pprint__wrapper_arg_3;
#line 1664 "pprint.c"
    MR_Box mercury__pprint__closure;
#line 1666 "pprint.c"
    MR_Word mercury__pprint__conv0_Doc_3;

#line 1669 "pprint.c"
    mercury__pprint__closure = mercury__pprint__closure_arg;
#line 1671 "pprint.c"
    {
#line 1673 "pprint.c"
      mercury__pprint__conv0_Doc_3 = mercury__pprint__ClassMethod_for_pprint__doc____pprint__doc__arity0______pprint__doc_2_2_f_0(((MR_Integer) mercury__pprint__wrapper_arg_1), ((MR_Word) mercury__pprint__wrapper_arg_2));
    }
#line 1676 "pprint.c"
    mercury__pprint__wrapper_arg_3 = ((MR_Box) (mercury__pprint__conv0_Doc_3));
#line 1678 "pprint.c"
    return mercury__pprint__wrapper_arg_3;
#line 1680 "pprint.c"
  }
#line 1682 "pprint.c"
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
#line 1865 "pprint.c"
                  void MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 248 "string.opt"
                  {
#line 248 "string.opt"
                    mercury__string__count_codepoints_2_p_0(mercury__pprint__T_54, &mercury__pprint__V_57_57);
                  }
#line 567 "pprint.m"
                  *mercury__pprint__K_3 = (mercury__pprint__HeadVar__2_2 + mercury__pprint__V_57_57);
#line 1875 "pprint.c"
                  mercury__pprint__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__V_60_60, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1877 "pprint.c"
                  {
#line 1879 "pprint.c"
                    mercury__pprint__func_0(((MR_Box) mercury__pprint__V_60_60), mercury__pprint__V_61_61, ((MR_Box) (mercury__pprint__T_54)), mercury__pprint__HeadVar__5_5, mercury__pprint__S_6);
#line 1881 "pprint.c"
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

#line 22 "univ.opt"
                  mercury__pprint__TypeInfo_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_46, (MR_Integer) 0)));
#line 22 "univ.opt"
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

#line 103 "sparse_bitset.opt"
static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
#line 103 "sparse_bitset.opt"
  MR_Word mercury__pprint__TypeClassInfo_for_enum_29,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__pprint__V_8_8,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__pprint__V_10_10,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__pprint__V_11_11,
#line 103 "sparse_bitset.opt"
  MR_Integer mercury__pprint__V_12_12,
#line 103 "sparse_bitset.opt"
  MR_Word mercury__pprint__V_19_13,
#line 103 "sparse_bitset.opt"
  MR_Word * mercury__pprint__V_20_14)
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
        MR_bool mercury__pprint__succeeded = (mercury__pprint__V_11_11 == (MR_Integer) 0);

#line 405 "sparse_bitset.opt"
        if (mercury__pprint__succeeded)
#line 404 "sparse_bitset.opt"
          *mercury__pprint__V_20_14 = mercury__pprint__V_19_13;
#line 405 "sparse_bitset.opt"
        else
#line 420 "sparse_bitset.opt"
          {
#line 407 "sparse_bitset.opt"
            mercury__pprint__succeeded = (mercury__pprint__V_12_12 == (MR_Integer) 1);
#line 420 "sparse_bitset.opt"
            if (mercury__pprint__succeeded)
#line 413 "sparse_bitset.opt"
              {
#line 413 "sparse_bitset.opt"
                MR_Box mercury__pprint__V_14_15;
#line 2014 "pprint.c"
                MR_bool MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));

#line 2017 "pprint.c"
                {
#line 2019 "pprint.c"
                  mercury__pprint__succeeded = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__pprint__V_10_10)), &mercury__pprint__V_14_15);
                }
#line 413 "sparse_bitset.opt"
                if (mercury__pprint__succeeded)
#line 597 "sparse_bitset.opt"
                  {
#line 597 "sparse_bitset.opt"
                    MR_Word base;
#line 597 "sparse_bitset.opt"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 597 "sparse_bitset.opt"
                    *mercury__pprint__V_20_14 = base;
#line 597 "sparse_bitset.opt"
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__pprint__V_14_15;
#line 597 "sparse_bitset.opt"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pprint__V_19_13));
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
                MR_Integer mercury__pprint__V_15_19 = (mercury__pprint__V_12_12 >> (MR_Integer) 1);
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__pprint__V_16_21;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__pprint__V_17_22;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__pprint__V_18_23;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__pprint__V_26_24;
#line 421 "sparse_bitset.opt"
                MR_Integer mercury__pprint__V_4_79 = ((MR_Integer) -1 << mercury__pprint__V_15_19);

#line 540 "sparse_bitset.opt"
                mercury__pprint__V_16_21 = ~(mercury__pprint__V_4_79);
#line 424 "sparse_bitset.opt"
                mercury__pprint__V_17_22 = (mercury__pprint__V_16_21 & mercury__pprint__V_11_11);
#line 426 "sparse_bitset.opt"
                mercury__pprint__V_26_24 = (mercury__pprint__V_11_11 >> mercury__pprint__V_15_19);
#line 425 "sparse_bitset.opt"
                mercury__pprint__V_18_23 = (mercury__pprint__V_16_21 & mercury__pprint__V_26_24);
#line 432 "sparse_bitset.opt"
#line 432 "sparse_bitset.opt"
                switch (mercury__pprint__V_8_8) {
#line 432 "sparse_bitset.opt"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 432 "sparse_bitset.opt"
                  case (MR_Integer) 1:
#line 433 "sparse_bitset.opt"
                    {
#line 433 "sparse_bitset.opt"
                      MR_Integer mercury__pprint__V_27_27 = (mercury__pprint__V_10_10 + mercury__pprint__V_15_19);
#line 433 "sparse_bitset.opt"
                      MR_Word mercury__pprint__V_28_28;

#line 435 "sparse_bitset.opt"
                      {
#line 435 "sparse_bitset.opt"
                        mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__pprint__TypeClassInfo_for_enum_29, mercury__pprint__V_8_8, mercury__pprint__V_27_27, mercury__pprint__V_18_23, mercury__pprint__V_15_19, mercury__pprint__V_19_13, &mercury__pprint__V_28_28);
                      }
#line 436 "sparse_bitset.opt"
                      /* direct tailcall eliminated */
#line 436 "sparse_bitset.opt"
                      {
#line 436 "sparse_bitset.opt"
                        MR_Integer mercury__pprint__V_11__tmp_copy_11 = mercury__pprint__V_17_22;
#line 436 "sparse_bitset.opt"
                        MR_Integer mercury__pprint__V_12__tmp_copy_12 = mercury__pprint__V_15_19;
#line 436 "sparse_bitset.opt"
                        MR_Word mercury__pprint__V_19__tmp_copy_13 = mercury__pprint__V_28_28;

#line 436 "sparse_bitset.opt"
                        mercury__pprint__V_19_13 = mercury__pprint__V_19__tmp_copy_13;
#line 436 "sparse_bitset.opt"
                        mercury__pprint__V_12_12 = mercury__pprint__V_12__tmp_copy_12;
#line 436 "sparse_bitset.opt"
                        mercury__pprint__V_11_11 = mercury__pprint__V_11__tmp_copy_11;
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
                      MR_Word mercury__pprint__V_30_25;
#line 428 "sparse_bitset.opt"
                      MR_Integer mercury__pprint__V_31_26;

#line 429 "sparse_bitset.opt"
                      {
#line 429 "sparse_bitset.opt"
                        mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__pprint__TypeClassInfo_for_enum_29, mercury__pprint__V_8_8, mercury__pprint__V_10_10, mercury__pprint__V_17_22, mercury__pprint__V_15_19, mercury__pprint__V_19_13, &mercury__pprint__V_30_25);
                      }
#line 430 "sparse_bitset.opt"
                      mercury__pprint__V_31_26 = (mercury__pprint__V_10_10 + mercury__pprint__V_15_19);
#line 431 "sparse_bitset.opt"
                      /* direct tailcall eliminated */
#line 431 "sparse_bitset.opt"
                      {
#line 431 "sparse_bitset.opt"
                        MR_Integer mercury__pprint__V_10__tmp_copy_10 = mercury__pprint__V_31_26;
#line 431 "sparse_bitset.opt"
                        MR_Integer mercury__pprint__V_11__tmp_copy_11 = mercury__pprint__V_18_23;
#line 431 "sparse_bitset.opt"
                        MR_Integer mercury__pprint__V_12__tmp_copy_12 = mercury__pprint__V_15_19;
#line 431 "sparse_bitset.opt"
                        MR_Word mercury__pprint__V_19__tmp_copy_13 = mercury__pprint__V_30_25;

#line 431 "sparse_bitset.opt"
                        mercury__pprint__V_19_13 = mercury__pprint__V_19__tmp_copy_13;
#line 431 "sparse_bitset.opt"
                        mercury__pprint__V_12_12 = mercury__pprint__V_12__tmp_copy_12;
#line 431 "sparse_bitset.opt"
                        mercury__pprint__V_11_11 = mercury__pprint__V_11__tmp_copy_11;
#line 431 "sparse_bitset.opt"
                        mercury__pprint__V_10_10 = mercury__pprint__V_10__tmp_copy_10;
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

#line 67 "version_array.opt"
static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(
#line 67 "version_array.opt"
  MR_Word mercury__pprint__TypeInfo_for_T1_1_16,
#line 67 "version_array.opt"
  MR_Box mercury__pprint__V_7_7,
#line 67 "version_array.opt"
  MR_Word mercury__pprint__V_8_8,
#line 67 "version_array.opt"
  MR_Integer mercury__pprint__V_9_9)
#line 67 "version_array.opt"
{
#line 182 "version_array.opt"
  while (MR_TRUE)
#line 182 "version_array.opt"
    {
#line 182 "version_array.opt"
      /* tailcall optimized into a loop */
#line 182 "version_array.opt"
      {
#line 182 "version_array.opt"
        MR_bool mercury__pprint__succeeded = ((MR_Integer) 0 <= mercury__pprint__V_9_9);
#line 182 "version_array.opt"
        MR_Word mercury__pprint__V_5_10;

#line 182 "version_array.opt"
        if (mercury__pprint__succeeded)
#line 177 "version_array.opt"
          {
#line 177 "version_array.opt"
            MR_Word mercury__pprint__V_11_12;
#line 177 "version_array.opt"
            MR_Integer mercury__pprint__V_13_13;
#line 177 "version_array.opt"
            MR_Box mercury__pprint__V_12_14;

#line 179 "version_array.opt"
            {
#line 179 "version_array.opt"
              mercury__pprint__V_12_14 = mercury__version_array__lookup_2_f_0(mercury__pprint__TypeInfo_for_T1_1_16, mercury__pprint__V_7_7, mercury__pprint__V_9_9);
            }
#line 133 "list.opt"
            {
#line 133 "list.opt"
              mercury__pprint__V_11_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 133 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__pprint__V_11_12, 0) = mercury__pprint__V_12_14;
#line 133 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__pprint__V_11_12, 1) = ((MR_Box) (mercury__pprint__V_8_8));
#line 133 "list.opt"
            }
#line 180 "version_array.opt"
            mercury__pprint__V_13_13 = (mercury__pprint__V_9_9 - (MR_Integer) 1);
#line 177 "version_array.opt"
            /* direct tailcall eliminated */
#line 177 "version_array.opt"
            {
#line 177 "version_array.opt"
              MR_Word mercury__pprint__V_8__tmp_copy_8 = mercury__pprint__V_11_12;
#line 177 "version_array.opt"
              MR_Integer mercury__pprint__V_9__tmp_copy_9 = mercury__pprint__V_13_13;

#line 177 "version_array.opt"
              mercury__pprint__V_9_9 = mercury__pprint__V_9__tmp_copy_9;
#line 177 "version_array.opt"
              mercury__pprint__V_8_8 = mercury__pprint__V_8__tmp_copy_8;
#line 177 "version_array.opt"
            }
#line 177 "version_array.opt"
            continue;
#line 177 "version_array.opt"
          }
#line 182 "version_array.opt"
        else
#line 183 "version_array.opt"
          mercury__pprint__V_5_10 = mercury__pprint__V_8_8;
#line 182 "version_array.opt"
        return mercury__pprint__V_5_10;
#line 182 "version_array.opt"
      }
#line 182 "version_array.opt"
      break;
#line 182 "version_array.opt"
    }
#line 67 "version_array.opt"
}

#line 77 "sparse_bitset.opt"
static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
#line 77 "sparse_bitset.opt"
  MR_Word mercury__pprint__TypeClassInfo_for_enum_20,
#line 77 "sparse_bitset.opt"
  MR_Word mercury__pprint__HeadVar__2_2,
#line 77 "sparse_bitset.opt"
  MR_Word mercury__pprint__HeadVar__3_3,
#line 77 "sparse_bitset.opt"
  MR_Word * mercury__pprint__HeadVar__4_4)
#line 77 "sparse_bitset.opt"
{
#line 331 "sparse_bitset.opt"
  {
#line 331 "sparse_bitset.opt"
    MR_bool mercury__pprint__succeeded;

#line 331 "sparse_bitset.opt"
    if ((mercury__pprint__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 331 "sparse_bitset.opt"
      *mercury__pprint__HeadVar__4_4 = mercury__pprint__HeadVar__3_3;
#line 331 "sparse_bitset.opt"
    else
#line 333 "sparse_bitset.opt"
      {
#line 333 "sparse_bitset.opt"
        MR_Word mercury__pprint__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 0)));
#line 333 "sparse_bitset.opt"
        MR_Word mercury__pprint__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));
#line 333 "sparse_bitset.opt"
        MR_Word mercury__pprint__V_15_13;
#line 333 "sparse_bitset.opt"
        MR_Integer mercury__pprint__V_22_17;
#line 333 "sparse_bitset.opt"
        MR_Integer mercury__pprint__V_18_18;
#line 333 "sparse_bitset.opt"
        MR_Integer mercury__pprint__V_19_19;

#line 334 "sparse_bitset.opt"
        {
#line 334 "sparse_bitset.opt"
          mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(mercury__pprint__TypeClassInfo_for_enum_20, mercury__pprint__V_11_10, mercury__pprint__HeadVar__3_3, &mercury__pprint__V_15_13);
        }
#line 336 "sparse_bitset.opt"
        mercury__pprint__V_22_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pprint__V_10_9, (MR_Integer) 0)));
#line 336 "sparse_bitset.opt"
        mercury__pprint__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pprint__V_10_9, (MR_Integer) 1)));
#line 66 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{
#line 66 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 2329 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_19_19  = Bits;
#line 66 "int.opt"
}
#line 339 "sparse_bitset.opt"
        {
#line 339 "sparse_bitset.opt"
          mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__pprint__TypeClassInfo_for_enum_20, (MR_Integer) 1, mercury__pprint__V_22_17, mercury__pprint__V_18_18, mercury__pprint__V_19_19, mercury__pprint__V_15_13, mercury__pprint__HeadVar__4_4);
#line 339 "sparse_bitset.opt"
          return;
        }
#line 333 "sparse_bitset.opt"
      }
#line 331 "sparse_bitset.opt"
  }
#line 77 "sparse_bitset.opt"
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
#line 2414 "pprint.c"
                  void MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 2416 "pprint.c"
                  void MR_CALL (* mercury__pprint__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 248 "string.opt"
                  {
#line 248 "string.opt"
                    mercury__string__count_codepoints_2_p_0(mercury__pprint__I_5, mercury__pprint__K_4);
                  }
#line 2424 "pprint.c"
                  mercury__pprint__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__V_85_85, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2426 "pprint.c"
                  {
#line 2428 "pprint.c"
                    mercury__pprint__func_0(((MR_Box) mercury__pprint__V_85_85), mercury__pprint__V_86_86, ((MR_Box) ((MR_String) "\n")), mercury__pprint__HeadVar__7_7, &mercury__pprint__S1_52);
                  }
#line 2431 "pprint.c"
                  mercury__pprint__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__V_85_85, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2433 "pprint.c"
                  {
#line 2435 "pprint.c"
                    mercury__pprint__func_1(((MR_Box) mercury__pprint__V_85_85), mercury__pprint__V_86_86, ((MR_Box) (mercury__pprint__I_5)), mercury__pprint__S1_52, mercury__pprint__S_8);
#line 2437 "pprint.c"
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

#line 248 "string.opt"
                  {
#line 248 "string.opt"
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

#line 22 "univ.opt"
                  mercury__pprint__TypeInfo_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_69, (MR_Integer) 0)));
#line 22 "univ.opt"
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

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_57_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(
#line 311 "list.int"
  MR_Word mercury__pprint__V_12_12,
#line 311 "list.int"
  MR_Integer mercury__pprint__V_13_13,
#line 311 "list.int"
  MR_Word mercury__pprint__HeadVar__2_2)
#line 311 "list.int"
{
#line 610 "list.opt"
  {
#line 610 "list.opt"
    MR_bool mercury__pprint__succeeded;
#line 610 "list.opt"
    MR_Word mercury__pprint__HeadVar__3_3;

#line 610 "list.opt"
    if ((mercury__pprint__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "list.opt"
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "list.opt"
    else
#line 611 "list.opt"
      {
#line 611 "list.opt"
        MR_Box mercury__pprint__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 0));
#line 611 "list.opt"
        MR_Word mercury__pprint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));
#line 611 "list.opt"
        MR_Word mercury__pprint__V_8_8;
#line 611 "list.opt"
        MR_Word mercury__pprint__V_9_9;

#line 664 "pprint.m"
        {
#line 664 "pprint.m"
          mercury__pprint__V_8_8 = mercury__pprint__to_doc_3_f_0(mercury__pprint__V_12_12, mercury__pprint__V_13_13, (MR_Integer) 1000, mercury__pprint__V_6_6);
        }
#line 613 "list.opt"
        {
#line 613 "list.opt"
          mercury__pprint__V_9_9 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_57_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(mercury__pprint__V_12_12, mercury__pprint__V_13_13, mercury__pprint__V_7_7);
        }
#line 611 "list.opt"
        {
#line 611 "list.opt"
          mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (mercury__pprint__V_8_8));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__V_9_9));
#line 611 "list.opt"
        }
#line 611 "list.opt"
      }
#line 610 "list.opt"
    return mercury__pprint__HeadVar__3_3;
#line 610 "list.opt"
  }
#line 311 "list.int"
}

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_56_95_95_91_50_93_95_48_2_f_in__list_0(
#line 311 "list.int"
  MR_Integer mercury__pprint__V_12_12,
#line 311 "list.int"
  MR_Word mercury__pprint__HeadVar__2_2)
#line 311 "list.int"
{
#line 610 "list.opt"
  {
#line 610 "list.opt"
    MR_bool mercury__pprint__succeeded;
#line 610 "list.opt"
    MR_Word mercury__pprint__HeadVar__3_3;

#line 610 "list.opt"
    if ((mercury__pprint__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "list.opt"
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "list.opt"
    else
#line 611 "list.opt"
      {
#line 611 "list.opt"
        MR_Word mercury__pprint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 0)));
#line 611 "list.opt"
        MR_Word mercury__pprint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));
#line 611 "list.opt"
        MR_Word mercury__pprint__V_8_8;
#line 611 "list.opt"
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
          MR_hl_field(MR_mktag(3), mercury__pprint__V_8_8, 2) = ((MR_Box) (mercury__pprint__V_6_6));
#line 630 "pprint.m"
        }
#line 613 "list.opt"
        {
#line 613 "list.opt"
          mercury__pprint__V_9_9 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_56_95_95_91_50_93_95_48_2_f_in__list_0(mercury__pprint__V_12_12, mercury__pprint__V_7_7);
        }
#line 611 "list.opt"
        {
#line 611 "list.opt"
          mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (mercury__pprint__V_8_8));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__V_9_9));
#line 611 "list.opt"
        }
#line 611 "list.opt"
      }
#line 610 "list.opt"
    return mercury__pprint__HeadVar__3_3;
#line 610 "list.opt"
  }
#line 311 "list.int"
}

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_2_f_in__list_0(
#line 311 "list.int"
  MR_Word mercury__pprint__HeadVar__2_2)
#line 311 "list.int"
{
#line 610 "list.opt"
  {
#line 610 "list.opt"
    MR_bool mercury__pprint__succeeded;
#line 610 "list.opt"
    MR_Word mercury__pprint__HeadVar__3_3;

#line 610 "list.opt"
    if ((mercury__pprint__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "list.opt"
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "list.opt"
    else
#line 611 "list.opt"
      {
#line 611 "list.opt"
        MR_Word mercury__pprint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 0)));
#line 611 "list.opt"
        MR_Word mercury__pprint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));
#line 611 "list.opt"
        MR_Word mercury__pprint__V_8_8;
#line 611 "list.opt"
        MR_Word mercury__pprint__V_9_9;
#line 611 "list.opt"
        MR_Box mercury__pprint__K_20 = (MR_hl_field(MR_mktag(0), mercury__pprint__V_6_6, (MR_Integer) 0));
#line 611 "list.opt"
        MR_Box mercury__pprint__V_21 = (MR_hl_field(MR_mktag(0), mercury__pprint__V_6_6, (MR_Integer) 1));

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
#line 613 "list.opt"
        {
#line 613 "list.opt"
          mercury__pprint__V_9_9 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_2_f_in__list_0(mercury__pprint__V_7_7);
        }
#line 611 "list.opt"
        {
#line 611 "list.opt"
          mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (mercury__pprint__V_8_8));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__V_9_9));
#line 611 "list.opt"
        }
#line 611 "list.opt"
      }
#line 610 "list.opt"
    return mercury__pprint__HeadVar__3_3;
#line 610 "list.opt"
  }
#line 311 "list.int"
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

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__pprint__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
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

#line 248 "string.opt"
                  {
#line 248 "string.opt"
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

#line 22 "univ.opt"
                  mercury__pprint__TypeInfo_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_46, (MR_Integer) 0)));
#line 22 "univ.opt"
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

#line 248 "string.opt"
                  {
#line 248 "string.opt"
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

#line 22 "univ.opt"
                  mercury__pprint__TypeInfo_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_46, (MR_Integer) 0)));
#line 22 "univ.opt"
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

#line 513 "string.int0"
static void MR_CALL 
mercury__pprint__next_boundary__ho23__ho52_4_p_in__string_0(
#line 513 "string.int0"
  MR_String mercury__pprint__V_6_6,
#line 513 "string.int0"
  MR_Integer mercury__pprint__V_7_7,
#line 513 "string.int0"
  MR_Integer * mercury__pprint__V_8_8)
#line 513 "string.int0"
{
#line 742 "string.opt"
  while (MR_TRUE)
#line 742 "string.opt"
    {
#line 742 "string.opt"
      /* tailcall optimized into a loop */
#line 742 "string.opt"
      {
#line 742 "string.opt"
        MR_bool mercury__pprint__succeeded;
#line 742 "string.opt"
        MR_Integer mercury__pprint__V_9_9;
#line 738 "string.opt"
        MR_Char mercury__pprint__V_10_10;

#line 1047 "string.opt"
{
#define MR_PROC_LABEL mercury__pprint__next_boundary__ho23__ho52_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__pprint__V_6_6 ;
	Index =  mercury__pprint__V_7_7 ;
		{
#line 1047 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 3695 "pprint.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__pprint__V_9_9  = NextIndex;
	 mercury__pprint__V_10_10  = Ch;
#line 1047 "string.opt"
	}
mercury__pprint__succeeded  = SUCCESS_INDICATOR;
}
#line 738 "string.opt"
        if (mercury__pprint__succeeded)
#line 738 "string.opt"
          {
#line 18 "std_util.opt"
            {
#line 18 "std_util.opt"
              mercury__pprint__succeeded = mercury__char__is_whitespace_1_p_0(mercury__pprint__V_10_10);
            }
#line 17 "std_util.opt"
            mercury__pprint__succeeded = !(mercury__pprint__succeeded);
#line 738 "string.opt"
          }
#line 742 "string.opt"
        if (mercury__pprint__succeeded)
#line 741 "string.opt"
          {
#line 741 "string.opt"
            /* direct tailcall eliminated */
#line 741 "string.opt"
            {
#line 741 "string.opt"
              MR_Integer mercury__pprint__V_7__tmp_copy_7 = mercury__pprint__V_9_9;

#line 741 "string.opt"
              mercury__pprint__V_7_7 = mercury__pprint__V_7__tmp_copy_7;
#line 741 "string.opt"
            }
#line 741 "string.opt"
            continue;
#line 741 "string.opt"
          }
#line 742 "string.opt"
        else
#line 743 "string.opt"
          *mercury__pprint__V_8_8 = mercury__pprint__V_7_7;
#line 742 "string.opt"
      }
#line 742 "string.opt"
      break;
#line 742 "string.opt"
    }
#line 513 "string.int0"
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

#line 248 "string.opt"
                  {
#line 248 "string.opt"
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

#line 22 "univ.opt"
                  mercury__pprint__TypeInfo_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_46, (MR_Integer) 0)));
#line 22 "univ.opt"
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

#line 248 "string.opt"
                  {
#line 248 "string.opt"
                    mercury__string__count_codepoints_2_p_0(mercury__pprint__T_54, &mercury__pprint__V_57_57);
                  }
#line 567 "pprint.m"
                  *mercury__pprint__K_3 = (mercury__pprint__HeadVar__2_2 + mercury__pprint__V_57_57);
#line 1585 "io.opt"
{
#define MR_PROC_LABEL mercury__pprint__layout_flat__ho50_6_p_0

	MR_String Message;

	Message =  mercury__pprint__T_54 ;
		{
#line 1585 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 4207 "pprint.c"

		;}
#undef MR_PROC_LABEL
#line 1585 "io.opt"
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

#line 22 "univ.opt"
                  mercury__pprint__TypeInfo_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_46, (MR_Integer) 0)));
#line 22 "univ.opt"
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
#line 1585 "io.opt"
{
#define MR_PROC_LABEL mercury__pprint__lb__ho43_8_p_0

	MR_String Message;

	Message =  (MR_String) "\n" ;
		{
#line 1585 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 4362 "pprint.c"

		;}
#undef MR_PROC_LABEL
#line 1585 "io.opt"
}
#line 1585 "io.opt"
{
#define MR_PROC_LABEL mercury__pprint__lb__ho43_8_p_0

	MR_String Message;

	Message =  mercury__pprint__I_5 ;
		{
#line 1585 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 4380 "pprint.c"

		;}
#undef MR_PROC_LABEL
#line 1585 "io.opt"
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

#line 159 "string.opt"
                  {
#line 159 "string.opt"
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
#line 1585 "io.opt"
{
#define MR_PROC_LABEL mercury__pprint__lb__ho43_8_p_0

	MR_String Message;

	Message =  mercury__pprint__T_79 ;
		{
#line 1585 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 4540 "pprint.c"

		;}
#undef MR_PROC_LABEL
#line 1585 "io.opt"
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

#line 22 "univ.opt"
                  mercury__pprint__TypeInfo_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_69, (MR_Integer) 0)));
#line 22 "univ.opt"
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

#line 159 "string.opt"
                  {
#line 159 "string.opt"
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

#line 22 "univ.opt"
                  mercury__pprint__TypeInfo_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_69, (MR_Integer) 0)));
#line 22 "univ.opt"
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

#line 513 "string.int0"
static void MR_CALL 
mercury__pprint__next_boundary__ho41_4_p_in__string_0(
#line 513 "string.int0"
  MR_String mercury__pprint__V_6_6,
#line 513 "string.int0"
  MR_Integer mercury__pprint__V_7_7,
#line 513 "string.int0"
  MR_Integer * mercury__pprint__V_8_8)
#line 513 "string.int0"
{
#line 742 "string.opt"
  while (MR_TRUE)
#line 742 "string.opt"
    {
#line 742 "string.opt"
      /* tailcall optimized into a loop */
#line 742 "string.opt"
      {
#line 742 "string.opt"
        MR_bool mercury__pprint__succeeded;
#line 742 "string.opt"
        MR_Integer mercury__pprint__V_9_9;
#line 738 "string.opt"
        MR_Char mercury__pprint__V_10_10;

#line 1047 "string.opt"
{
#define MR_PROC_LABEL mercury__pprint__next_boundary__ho41_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__pprint__V_6_6 ;
	Index =  mercury__pprint__V_7_7 ;
		{
#line 1047 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 5046 "pprint.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__pprint__V_9_9  = NextIndex;
	 mercury__pprint__V_10_10  = Ch;
#line 1047 "string.opt"
	}
mercury__pprint__succeeded  = SUCCESS_INDICATOR;
}
#line 738 "string.opt"
        if (mercury__pprint__succeeded)
#line 739 "string.opt"
          {
#line 739 "string.opt"
            mercury__pprint__succeeded = mercury__char__is_whitespace_1_p_0(mercury__pprint__V_10_10);
          }
#line 742 "string.opt"
        if (mercury__pprint__succeeded)
#line 741 "string.opt"
          {
#line 741 "string.opt"
            /* direct tailcall eliminated */
#line 741 "string.opt"
            {
#line 741 "string.opt"
              MR_Integer mercury__pprint__V_7__tmp_copy_7 = mercury__pprint__V_9_9;

#line 741 "string.opt"
              mercury__pprint__V_7_7 = mercury__pprint__V_7__tmp_copy_7;
#line 741 "string.opt"
            }
#line 741 "string.opt"
            continue;
#line 741 "string.opt"
          }
#line 742 "string.opt"
        else
#line 743 "string.opt"
          *mercury__pprint__V_8_8 = mercury__pprint__V_7_7;
#line 742 "string.opt"
      }
#line 742 "string.opt"
      break;
#line 742 "string.opt"
    }
#line 513 "string.int0"
}

#line 553 "string.int0"
static void MR_CALL 
mercury__pprint__words_loop__ho40_4_p_in__string_0(
#line 553 "string.int0"
  MR_String mercury__pprint__V_6_6,
#line 553 "string.int0"
  MR_Integer mercury__pprint__V_7_7,
#line 553 "string.int0"
  MR_Word * mercury__pprint__V_8_8)
#line 553 "string.int0"
{
#line 1120 "string.opt"
  {
#line 1120 "string.opt"
    MR_bool mercury__pprint__succeeded;
#line 1120 "string.opt"
    MR_Integer mercury__pprint__V_9_10;

#line 1122 "string.opt"
    {
#line 1122 "string.opt"
      mercury__pprint__next_boundary__ho23__ho52_4_p_in__string_0(mercury__pprint__V_6_6, mercury__pprint__V_7_7, &mercury__pprint__V_9_10);
    }
#line 1124 "string.opt"
    mercury__pprint__succeeded = (mercury__pprint__V_9_10 == mercury__pprint__V_7_7);
#line 1127 "string.opt"
    if (mercury__pprint__succeeded)
#line 1126 "string.opt"
      *mercury__pprint__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1127 "string.opt"
    else
#line 1128 "string.opt"
      {
#line 1128 "string.opt"
        MR_String mercury__pprint__V_10_11;
#line 1128 "string.opt"
        MR_Integer mercury__pprint__V_11_12;

#line 1015 "string.opt"
{
#define MR_PROC_LABEL mercury__pprint__words_loop__ho40_4_p_in__string_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__pprint__V_6_6 ;
	Start =  mercury__pprint__V_7_7 ;
	End =  mercury__pprint__V_9_10 ;
		{
#line 1015 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 5156 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_10_11  = SubString;
#line 1015 "string.opt"
}
#line 1129 "string.opt"
        {
#line 1129 "string.opt"
          mercury__pprint__next_boundary__ho41_4_p_in__string_0(mercury__pprint__V_6_6, mercury__pprint__V_9_10, &mercury__pprint__V_11_12);
        }
#line 1131 "string.opt"
        mercury__pprint__succeeded = (mercury__pprint__V_9_10 == mercury__pprint__V_11_12);
#line 1135 "string.opt"
        if (mercury__pprint__succeeded)
#line 1133 "string.opt"
          {
#line 1133 "string.opt"
            MR_Word mercury__pprint__V_14_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1133 "string.opt"
            {
#line 1133 "string.opt"
              MR_Word base;
#line 1133 "string.opt"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1133 "string.opt"
              *mercury__pprint__V_8_8 = base;
#line 1133 "string.opt"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pprint__V_10_11));
#line 1133 "string.opt"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pprint__V_14_13));
#line 1133 "string.opt"
            }
#line 1133 "string.opt"
          }
#line 1135 "string.opt"
        else
#line 1136 "string.opt"
          {
#line 1136 "string.opt"
            MR_Word mercury__pprint__V_12_14;

#line 1136 "string.opt"
            {
#line 1136 "string.opt"
              mercury__pprint__words_loop__ho40_4_p_in__string_0(mercury__pprint__V_6_6, mercury__pprint__V_11_12, &mercury__pprint__V_12_14);
            }
#line 1137 "string.opt"
            {
#line 1137 "string.opt"
              MR_Word base;
#line 1137 "string.opt"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1137 "string.opt"
              *mercury__pprint__V_8_8 = base;
#line 1137 "string.opt"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pprint__V_10_11));
#line 1137 "string.opt"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pprint__V_12_14));
#line 1137 "string.opt"
            }
#line 1136 "string.opt"
          }
#line 1128 "string.opt"
      }
#line 1120 "string.opt"
  }
#line 553 "string.int0"
}

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__pprint__map__ho37_2_f_in__list_0(
#line 311 "list.int"
  MR_Word mercury__pprint__HeadVar__2_2)
#line 311 "list.int"
{
#line 610 "list.opt"
  {
#line 610 "list.opt"
    MR_bool mercury__pprint__succeeded;
#line 610 "list.opt"
    MR_Word mercury__pprint__HeadVar__3_3;

#line 610 "list.opt"
    if ((mercury__pprint__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "list.opt"
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "list.opt"
    else
#line 611 "list.opt"
      {
#line 611 "list.opt"
        MR_String mercury__pprint__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 0)));
#line 611 "list.opt"
        MR_Word mercury__pprint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));
#line 611 "list.opt"
        MR_Word mercury__pprint__V_8_8;
#line 611 "list.opt"
        MR_Word mercury__pprint__V_9_9;

#line 431 "pprint.m"
        {
#line 431 "pprint.m"
          mercury__pprint__V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "pprint.m"
          MR_hl_field(MR_mktag(3), mercury__pprint__V_8_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 431 "pprint.m"
          MR_hl_field(MR_mktag(3), mercury__pprint__V_8_8, 1) = ((MR_Box) (mercury__pprint__V_6_6));
#line 431 "pprint.m"
        }
#line 613 "list.opt"
        {
#line 613 "list.opt"
          mercury__pprint__V_9_9 = mercury__pprint__map__ho37_2_f_in__list_0(mercury__pprint__V_7_7);
        }
#line 611 "list.opt"
        {
#line 611 "list.opt"
          mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (mercury__pprint__V_8_8));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__V_9_9));
#line 611 "list.opt"
        }
#line 611 "list.opt"
      }
#line 610 "list.opt"
    return mercury__pprint__HeadVar__3_3;
#line 610 "list.opt"
  }
#line 311 "list.int"
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
#line 5496 "pprint.c"
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
#line 5518 "pprint.c"
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

#line 5583 "pprint.c"
        {
#line 5585 "pprint.c"
          mercury__pprint__succeeded = mercury__builtin__unify_2_p_0(mercury__pprint__TypeInfo_for_K_9, mercury__pprint__V_3_3, mercury__pprint__V_5_5);
        }
#line 402 "pprint.m"
        if (mercury__pprint__succeeded)
#line 5590 "pprint.c"
          {
#line 5592 "pprint.c"
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
#line 5634 "pprint.c"
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
#line 5682 "pprint.c"
                      *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                      break;
#line 384 "pprint.m"
                    case (MR_Integer) 2:
#line 5688 "pprint.c"
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
#line 5701 "pprint.c"
                          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                          break;
#line 384 "pprint.m"
                        case (MR_Integer) 1:
#line 5707 "pprint.c"
                          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                          break;
#line 384 "pprint.m"
                        case (MR_Integer) 2:
#line 5713 "pprint.c"
                          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                          break;
#line 384 "pprint.m"
                        case (MR_Integer) 3:
#line 5719 "pprint.c"
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
#line 5763 "pprint.c"
                      *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                      break;
#line 384 "pprint.m"
                    case (MR_Integer) 2:
#line 5769 "pprint.c"
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
#line 5782 "pprint.c"
                          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                          break;
#line 384 "pprint.m"
                        case (MR_Integer) 1:
#line 5788 "pprint.c"
                          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                          break;
#line 384 "pprint.m"
                        case (MR_Integer) 2:
#line 5794 "pprint.c"
                          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                          break;
#line 384 "pprint.m"
                        case (MR_Integer) 3:
#line 5800 "pprint.c"
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
#line 5839 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 1:
#line 5845 "pprint.c"
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
#line 5869 "pprint.c"
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
#line 5906 "pprint.c"
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
#line 5919 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 1:
#line 5925 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 2:
#line 5931 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 3:
#line 5937 "pprint.c"
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
#line 5974 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 1:
#line 5980 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                    }
#line 384 "pprint.m"
                    break;
#line 384 "pprint.m"
                  case (MR_Integer) 1:
#line 5990 "pprint.c"
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

#line 71 "private_builtin.opt"
                      mercury__pprint__succeeded = (mercury__pprint__V_186_186 < mercury__pprint__V_49_49);
#line 74 "private_builtin.opt"
                      if (mercury__pprint__succeeded)
#line 73 "private_builtin.opt"
                        mercury__pprint__V_51_51 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
                      else
#line 79 "private_builtin.opt"
                        {
#line 76 "private_builtin.opt"
                          mercury__pprint__succeeded = (mercury__pprint__V_186_186 == mercury__pprint__V_49_49);
#line 79 "private_builtin.opt"
                          if (mercury__pprint__succeeded)
#line 78 "private_builtin.opt"
                            mercury__pprint__V_51_51 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
                          else
#line 80 "private_builtin.opt"
                            mercury__pprint__V_51_51 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
                        }
#line 6027 "pprint.c"
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
#line 6071 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 1:
#line 6077 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 2:
#line 6083 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 3:
#line 6089 "pprint.c"
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
#line 6133 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                          case (MR_Integer) 1:
#line 6139 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                        }
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 1:
#line 6149 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 2:
#line 6155 "pprint.c"
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
                              MR_Integer mercury__pprint__V_7_196;

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__pprint____Compare____doc_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__pprint__V_184_184 ;
	S2 =  mercury__pprint__V_80_80 ;
		{
#line 102 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6194 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_7_196  = Res;
#line 102 "private_builtin.opt"
}
#line 89 "private_builtin.opt"
                              mercury__pprint__succeeded = (mercury__pprint__V_7_196 < (MR_Integer) 0);
#line 92 "private_builtin.opt"
                              if (mercury__pprint__succeeded)
#line 91 "private_builtin.opt"
                                mercury__pprint__V_82_82 = (MR_Integer) 1;
#line 92 "private_builtin.opt"
                              else
#line 97 "private_builtin.opt"
                                {
#line 94 "private_builtin.opt"
                                  mercury__pprint__succeeded = (mercury__pprint__V_7_196 == (MR_Integer) 0);
#line 97 "private_builtin.opt"
                                  if (mercury__pprint__succeeded)
#line 96 "private_builtin.opt"
                                    mercury__pprint__V_82_82 = (MR_Integer) 0;
#line 97 "private_builtin.opt"
                                  else
#line 98 "private_builtin.opt"
                                    mercury__pprint__V_82_82 = (MR_Integer) 2;
#line 97 "private_builtin.opt"
                                }
#line 6223 "pprint.c"
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
#line 6260 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                          case (MR_Integer) 2:
#line 6266 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                          case (MR_Integer) 3:
#line 6272 "pprint.c"
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
#line 6307 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                          case (MR_Integer) 1:
#line 6313 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                        }
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 1:
#line 6323 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 2:
#line 6329 "pprint.c"
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
#line 6342 "pprint.c"
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
                              MR_Integer mercury__pprint__V_7_204;

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__pprint____Compare____doc_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__pprint__V_189_189 ;
	S2 =  mercury__pprint__V_106_106 ;
		{
#line 102 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6370 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_7_204  = Res;
#line 102 "private_builtin.opt"
}
#line 89 "private_builtin.opt"
                              mercury__pprint__succeeded = (mercury__pprint__V_7_204 < (MR_Integer) 0);
#line 92 "private_builtin.opt"
                              if (mercury__pprint__succeeded)
#line 91 "private_builtin.opt"
                                *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 92 "private_builtin.opt"
                              else
#line 97 "private_builtin.opt"
                                {
#line 94 "private_builtin.opt"
                                  mercury__pprint__succeeded = (mercury__pprint__V_7_204 == (MR_Integer) 0);
#line 97 "private_builtin.opt"
                                  if (mercury__pprint__succeeded)
#line 96 "private_builtin.opt"
                                    *mercury__pprint__HeadVar__1_1 = (MR_Integer) 0;
#line 97 "private_builtin.opt"
                                  else
#line 98 "private_builtin.opt"
                                    *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 97 "private_builtin.opt"
                                }
#line 384 "pprint.m"
                            }
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                          case (MR_Integer) 2:
#line 6405 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                          case (MR_Integer) 3:
#line 6411 "pprint.c"
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
#line 6446 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                          case (MR_Integer) 1:
#line 6452 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                        }
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 1:
#line 6462 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 2:
#line 6468 "pprint.c"
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
#line 6481 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                          case (MR_Integer) 1:
#line 6487 "pprint.c"
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
#line 6521 "pprint.c"
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
#line 6558 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                          case (MR_Integer) 1:
#line 6564 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                        }
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 1:
#line 6574 "pprint.c"
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                        break;
#line 384 "pprint.m"
                      case (MR_Integer) 2:
#line 6580 "pprint.c"
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
#line 6593 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                          case (MR_Integer) 1:
#line 6599 "pprint.c"
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 384 "pprint.m"
                            break;
#line 384 "pprint.m"
                          case (MR_Integer) 2:
#line 6605 "pprint.c"
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

#line 71 "private_builtin.opt"
                              mercury__pprint__succeeded = (mercury__pprint__V_181_181 < mercury__pprint__V_165_165);
#line 74 "private_builtin.opt"
                              if (mercury__pprint__succeeded)
#line 73 "private_builtin.opt"
                                mercury__pprint__V_167_167 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
                              else
#line 79 "private_builtin.opt"
                                {
#line 76 "private_builtin.opt"
                                  mercury__pprint__succeeded = (mercury__pprint__V_181_181 == mercury__pprint__V_165_165);
#line 79 "private_builtin.opt"
                                  if (mercury__pprint__succeeded)
#line 78 "private_builtin.opt"
                                    mercury__pprint__V_167_167 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
                                  else
#line 80 "private_builtin.opt"
                                    mercury__pprint__V_167_167 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
                                }
#line 6642 "pprint.c"
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
#line 6789 "pprint.c"
                    {
#line 6791 "pprint.c"
                      mercury__pprint__succeeded = mercury__pprint____Unify____doc_0_0(mercury__pprint__V_5_5, mercury__pprint__V_7_7);
                    }
#line 384 "pprint.m"
                    if (mercury__pprint__succeeded)
#line 6796 "pprint.c"
                      {
#line 6798 "pprint.c"
                        /* direct tailcall eliminated */
#line 6800 "pprint.c"
                        {
#line 6802 "pprint.c"
                          MR_Word mercury__pprint__HeadVar__1__tmp_copy_1 = mercury__pprint__V_6_6;
#line 6804 "pprint.c"
                          MR_Word mercury__pprint__HeadVar__2__tmp_copy_2 = mercury__pprint__V_8_8;

#line 6807 "pprint.c"
                          mercury__pprint__HeadVar__2_2 = mercury__pprint__HeadVar__2__tmp_copy_2;
#line 6809 "pprint.c"
                          mercury__pprint__HeadVar__1_1 = mercury__pprint__HeadVar__1__tmp_copy_1;
#line 6811 "pprint.c"
                        }
#line 6813 "pprint.c"
                        continue;
#line 6815 "pprint.c"
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
#line 6846 "pprint.c"
                    mercury__pprint__succeeded = (mercury__pprint__V_9_9 == mercury__pprint__V_11_11);
#line 384 "pprint.m"
                    if (mercury__pprint__succeeded)
#line 6850 "pprint.c"
                      {
#line 6852 "pprint.c"
                        /* direct tailcall eliminated */
#line 6854 "pprint.c"
                        {
#line 6856 "pprint.c"
                          MR_Word mercury__pprint__HeadVar__1__tmp_copy_1 = mercury__pprint__V_10_10;
#line 6858 "pprint.c"
                          MR_Word mercury__pprint__HeadVar__2__tmp_copy_2 = mercury__pprint__V_12_12;

#line 6861 "pprint.c"
                          mercury__pprint__HeadVar__2_2 = mercury__pprint__HeadVar__2__tmp_copy_2;
#line 6863 "pprint.c"
                          mercury__pprint__HeadVar__1_1 = mercury__pprint__HeadVar__1__tmp_copy_1;
#line 6865 "pprint.c"
                        }
#line 6867 "pprint.c"
                        continue;
#line 6869 "pprint.c"
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
#line 6907 "pprint.c"
                        mercury__pprint__succeeded = (strcmp(mercury__pprint__V_13_13, mercury__pprint__V_15_15) == 0);
#line 384 "pprint.m"
                        if (mercury__pprint__succeeded)
#line 6911 "pprint.c"
                          {
#line 6913 "pprint.c"
                            /* direct tailcall eliminated */
#line 6915 "pprint.c"
                            {
#line 6917 "pprint.c"
                              MR_Word mercury__pprint__HeadVar__1__tmp_copy_1 = mercury__pprint__V_14_14;
#line 6919 "pprint.c"
                              MR_Word mercury__pprint__HeadVar__2__tmp_copy_2 = mercury__pprint__V_16_16;

#line 6922 "pprint.c"
                              mercury__pprint__HeadVar__2_2 = mercury__pprint__HeadVar__2__tmp_copy_2;
#line 6924 "pprint.c"
                              mercury__pprint__HeadVar__1_1 = mercury__pprint__HeadVar__1__tmp_copy_1;
#line 6926 "pprint.c"
                            }
#line 6928 "pprint.c"
                            continue;
#line 6930 "pprint.c"
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
#line 6955 "pprint.c"
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
#line 6980 "pprint.c"
                        /* direct tailcall eliminated */
#line 6982 "pprint.c"
                        {
#line 6984 "pprint.c"
                          MR_Word mercury__pprint__HeadVar__1__tmp_copy_1 = mercury__pprint__V_21_21;
#line 6986 "pprint.c"
                          MR_Word mercury__pprint__HeadVar__2__tmp_copy_2 = mercury__pprint__V_22_22;

#line 6989 "pprint.c"
                          mercury__pprint__HeadVar__2_2 = mercury__pprint__HeadVar__2__tmp_copy_2;
#line 6991 "pprint.c"
                          mercury__pprint__HeadVar__1_1 = mercury__pprint__HeadVar__1__tmp_copy_1;
#line 6993 "pprint.c"
                        }
#line 6995 "pprint.c"
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
#line 7026 "pprint.c"
                        mercury__pprint__succeeded = (mercury__pprint__V_23_23 == mercury__pprint__V_25_25);
#line 384 "pprint.m"
                        if (mercury__pprint__succeeded)
#line 7030 "pprint.c"
                          {
#line 7032 "pprint.c"
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

#line 71 "private_builtin.opt"
    mercury__pprint__succeeded = (mercury__pprint__Cast_HeadVar1_4 < mercury__pprint__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
    if (mercury__pprint__succeeded)
#line 73 "private_builtin.opt"
      *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
    else
#line 79 "private_builtin.opt"
      {
#line 76 "private_builtin.opt"
        mercury__pprint__succeeded = (mercury__pprint__Cast_HeadVar1_4 == mercury__pprint__Cast_HeadVar2_5);
#line 79 "private_builtin.opt"
        if (mercury__pprint__succeeded)
#line 78 "private_builtin.opt"
          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
        else
#line 80 "private_builtin.opt"
          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
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
#line 7181 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 7183 "pprint.c"
    MR_Box mercury__pprint__conv1_V_26_26;
#line 7185 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 7187 "pprint.c"
    MR_Box mercury__pprint__conv3_V_27_27;

#line 7190 "pprint.c"
    {
#line 7192 "pprint.c"
      mercury__pprint__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7194 "pprint.c"
      MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_16_16, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_15_15));
#line 7196 "pprint.c"
      MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_16_16, 1) = ((MR_Box) (mercury__pprint__TypeInfo_for_T_12));
#line 7198 "pprint.c"
    }
#line 7200 "pprint.c"
    {
#line 7202 "pprint.c"
      mercury__pprint__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7204 "pprint.c"
      MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_18_18, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_17_17));
#line 7206 "pprint.c"
      MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_18_18, 1) = ((MR_Box) (mercury__pprint__TypeInfo_16_16));
#line 7208 "pprint.c"
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
#line 7222 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_22 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 7224 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_23 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 583 "pprint.m"
    {
#line 583 "pprint.m"
      mercury__pprint__V_7_7 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_22, mercury__pprint__TypeClassInfo_for_doc_23, mercury__pprint__TypeClassInfo_for_doc_14, ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), ((MR_Box) (mercury__pprint__V_8_8)));
    }
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__robdd_to_doc_2_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 7252 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_29_29  = Max;
#line 223 "int.opt"
}
#line 7259 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_13, (MR_Integer) 0)), (MR_Integer) 5)));
#line 7261 "pprint.c"
    {
#line 7263 "pprint.c"
      mercury__pprint__conv1_V_26_26 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_13), ((MR_Box) (mercury__pprint__V_29_29)), ((MR_Box) ((MR_String) "robdd_dnf")));
    }
#line 7266 "pprint.c"
    mercury__pprint__V_26_26 = ((MR_Word) mercury__pprint__conv1_V_26_26);
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__robdd_to_doc_2_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 7289 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_32_32  = Max;
#line 223 "int.opt"
}
#line 7296 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 7298 "pprint.c"
    {
#line 7300 "pprint.c"
      mercury__pprint__conv3_V_27_27 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_14), ((MR_Box) (mercury__pprint__V_32_32)), ((MR_Box) (mercury__pprint__V_7_7)));
    }
#line 7303 "pprint.c"
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
#line 7375 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 7377 "pprint.c"
    MR_Box mercury__pprint__conv1_V_33_33;
#line 7379 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 7381 "pprint.c"
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
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__map_pair_to_doc_2_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 7426 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_35_35  = Max;
#line 223 "int.opt"
}
#line 7433 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_23, (MR_Integer) 0)), (MR_Integer) 5)));
#line 7435 "pprint.c"
    {
#line 7437 "pprint.c"
      mercury__pprint__conv1_V_33_33 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_23), ((MR_Box) (mercury__pprint__V_35_35)), ((MR_Box) (mercury__pprint__V_16_16)));
    }
#line 7440 "pprint.c"
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
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__map_pair_to_doc_2_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 7473 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_40_40  = Max;
#line 223 "int.opt"
}
#line 7480 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_23, (MR_Integer) 0)), (MR_Integer) 5)));
#line 7482 "pprint.c"
    {
#line 7484 "pprint.c"
      mercury__pprint__conv3_V_38_38 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_23), ((MR_Box) (mercury__pprint__V_40_40)), ((MR_Box) (mercury__pprint__V_14_14)));
    }
#line 7487 "pprint.c"
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
#line 7573 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 7575 "pprint.c"
    MR_Box mercury__pprint__conv1_V_42_42;
#line 7577 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 7579 "pprint.c"
    MR_Box mercury__pprint__conv3_V_43_43;
#line 7581 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_4)(MR_Box, MR_Box, MR_Box);
#line 7583 "pprint.c"
    MR_Box mercury__pprint__conv5_V_53_53;

#line 7586 "pprint.c"
    {
#line 7588 "pprint.c"
      mercury__pprint__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7590 "pprint.c"
      MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_21_21, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_20_20));
#line 7592 "pprint.c"
      MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_21_21, 1) = ((MR_Box) (mercury__pprint__TypeInfo_for_T1_16));
#line 7594 "pprint.c"
      MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_21_21, 2) = ((MR_Box) (mercury__pprint__TypeInfo_for_T2_17));
#line 7596 "pprint.c"
    }
#line 408 "tree234.opt"
    mercury__pprint__V_5_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 409 "tree234.opt"
    {
#line 409 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__pprint__TypeInfo_for_T1_16, mercury__pprint__TypeInfo_for_T2_17, mercury__pprint__X_5, mercury__pprint__V_5_32, &mercury__pprint__V_9_9);
    }
#line 990 "pprint.m"
    {
#line 990 "pprint.m"
      mercury__pprint__KVs_7 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_2_f_in__list_0(mercury__pprint__V_9_9);
    }
#line 7610 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_24 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 7612 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_25 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 991 "pprint.m"
    mercury__pprint__V_14_14 = (mercury__pprint__Depth_4 - (MR_Integer) 1);
#line 991 "pprint.m"
    {
#line 991 "pprint.m"
      mercury__pprint__V_13_13 = mercury__pprint__list_to_doc_2_f_0(mercury__pprint__TypeInfo_21_21, mercury__pprint__V_14_14, (MR_Word) mercury__pprint__KVs_7);
    }
#line 7621 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_38 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 7623 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_39 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 583 "pprint.m"
    {
#line 583 "pprint.m"
      mercury__pprint__V_12_12 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_38, mercury__pprint__TypeClassInfo_for_doc_39, mercury__pprint__TypeClassInfo_for_doc_24, ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), ((MR_Box) (mercury__pprint__V_13_13)));
    }
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__map_to_doc_2_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 7651 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_45_45  = Max;
#line 223 "int.opt"
}
#line 7658 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_25, (MR_Integer) 0)), (MR_Integer) 5)));
#line 7660 "pprint.c"
    {
#line 7662 "pprint.c"
      mercury__pprint__conv1_V_42_42 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_25), ((MR_Box) (mercury__pprint__V_45_45)), ((MR_Box) ((MR_String) "map")));
    }
#line 7665 "pprint.c"
    mercury__pprint__V_42_42 = ((MR_Word) mercury__pprint__conv1_V_42_42);
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__map_to_doc_2_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 7688 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_48_48  = Max;
#line 223 "int.opt"
}
#line 7695 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 7697 "pprint.c"
    {
#line 7699 "pprint.c"
      mercury__pprint__conv3_V_43_43 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_24), ((MR_Box) (mercury__pprint__V_48_48)), ((MR_Box) (mercury__pprint__V_12_12)));
    }
#line 7702 "pprint.c"
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
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__map_to_doc_2_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 7735 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_55_55  = Max;
#line 223 "int.opt"
}
#line 7742 "pprint.c"
    mercury__pprint__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 7744 "pprint.c"
    {
#line 7746 "pprint.c"
      mercury__pprint__conv5_V_53_53 = mercury__pprint__func_4(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_24), ((MR_Box) (mercury__pprint__V_55_55)), ((MR_Box) (mercury__pprint__V_10_10)));
    }
#line 7749 "pprint.c"
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
#line 7811 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 7813 "pprint.c"
    MR_Box mercury__pprint__conv1_V_21_21;
#line 7815 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 7817 "pprint.c"
    MR_Box mercury__pprint__conv3_V_30_30;

#line 982 "pprint.m"
    {
#line 982 "pprint.m"
      mercury__deconstruct__deconstruct_5_p_1(mercury__pprint__TypeInfo_for_T_17, mercury__pprint__Tuple_5, (MR_Integer) 1, &mercury__pprint___Name_7, &mercury__pprint___Arity_8, &mercury__pprint__UnivArgs_9);
    }
#line 7825 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_18 = (MR_Word) &mercury__pprint_scalar_common_1[0];
#line 983 "pprint.m"
    mercury__pprint__V_15_15 = (mercury__pprint__Depth_4 - (MR_Integer) 1);
#line 983 "pprint.m"
    {
#line 983 "pprint.m"
      mercury__pprint__V_14_14 = mercury__pprint__packed_cs_univ_args_2_f_0(mercury__pprint__V_15_15, mercury__pprint__UnivArgs_9);
    }
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__tuple_to_doc_2_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 7855 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_23_23  = Max;
#line 223 "int.opt"
}
#line 7862 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 7864 "pprint.c"
    {
#line 7866 "pprint.c"
      mercury__pprint__conv1_V_21_21 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_18), ((MR_Box) (mercury__pprint__V_23_23)), ((MR_Box) (mercury__pprint__V_14_14)));
    }
#line 7869 "pprint.c"
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
#line 7881 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_28 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 585 "pprint.m"
    {
#line 585 "pprint.m"
      mercury__pprint__V_11_11 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_28, mercury__pprint__TypeClassInfo_for_doc_28, mercury__pprint__TypeClassInfo_for_doc_18, ((MR_Box) ((MR_String) "{")), ((MR_Box) ((MR_String) "}")), ((MR_Box) (mercury__pprint__V_12_12)));
    }
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__tuple_to_doc_2_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 7909 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_32_32  = Max;
#line 223 "int.opt"
}
#line 7916 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 7918 "pprint.c"
    {
#line 7920 "pprint.c"
      mercury__pprint__conv3_V_30_30 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_18), ((MR_Box) (mercury__pprint__V_32_32)), ((MR_Box) (mercury__pprint__V_11_11)));
    }
#line 7923 "pprint.c"
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
#line 278 "version_array.opt"
    MR_Word mercury__pprint__TypeInfo_for_T_60;
#line 7997 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 7999 "pprint.c"
    MR_Box mercury__pprint__conv1_V_45_45;
#line 8001 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 8003 "pprint.c"
    MR_Box mercury__pprint__conv3_V_46_46;
#line 8005 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_4)(MR_Box, MR_Box, MR_Box);
#line 8007 "pprint.c"
    MR_Box mercury__pprint__conv5_V_56_56;

#line 278 "version_array.opt"
{
#define MR_PROC_LABEL mercury__pprint__version_array_to_doc_2_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__pprint__A_5 , VA);
		{
#line 278 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 8023 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_4_36  = N;
#line 278 "version_array.opt"
}
#line 267 "version_array.opt"
    mercury__pprint__V_8_32 = (mercury__pprint__V_4_36 - (MR_Integer) 1);
#line 247 "version_array.opt"
    {
#line 247 "version_array.opt"
      mercury__pprint__V_12_12 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(mercury__pprint__TypeInfo_for_T_13, mercury__pprint__A_5, mercury__pprint__V_5_21, mercury__pprint__V_8_32);
    }
#line 972 "pprint.m"
    {
#line 972 "pprint.m"
      mercury__pprint__V_9_9 = mercury__pprint__list_to_doc_2_f_0(mercury__pprint__TypeInfo_for_T_13, mercury__pprint__V_10_10, mercury__pprint__V_12_12);
    }
#line 8042 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_41 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 8044 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_42 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 583 "pprint.m"
    {
#line 583 "pprint.m"
      mercury__pprint__V_8_8 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_41, mercury__pprint__TypeClassInfo_for_doc_42, mercury__pprint__TypeClassInfo_for_doc_14, ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), ((MR_Box) (mercury__pprint__V_9_9)));
    }
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__version_array_to_doc_2_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 8072 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_48_48  = Max;
#line 223 "int.opt"
}
#line 8079 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_15, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8081 "pprint.c"
    {
#line 8083 "pprint.c"
      mercury__pprint__conv1_V_45_45 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_15), ((MR_Box) (mercury__pprint__V_48_48)), ((MR_Box) ((MR_String) "version_array")));
    }
#line 8086 "pprint.c"
    mercury__pprint__V_45_45 = ((MR_Word) mercury__pprint__conv1_V_45_45);
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__version_array_to_doc_2_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 8109 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_51_51  = Max;
#line 223 "int.opt"
}
#line 8116 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8118 "pprint.c"
    {
#line 8120 "pprint.c"
      mercury__pprint__conv3_V_46_46 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_14), ((MR_Box) (mercury__pprint__V_51_51)), ((MR_Box) (mercury__pprint__V_8_8)));
    }
#line 8123 "pprint.c"
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
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__version_array_to_doc_2_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 8156 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_58_58  = Max;
#line 223 "int.opt"
}
#line 8163 "pprint.c"
    mercury__pprint__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8165 "pprint.c"
    {
#line 8167 "pprint.c"
      mercury__pprint__conv5_V_56_56 = mercury__pprint__func_4(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_14), ((MR_Box) (mercury__pprint__V_58_58)), ((MR_Box) (mercury__pprint__V_6_6)));
    }
#line 8170 "pprint.c"
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
    MR_Integer mercury__pprint__V_5_20;
#line 960 "pprint.m"
    MR_Integer mercury__pprint__V_6_21;
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
#line 857 "array.opt"
    MR_Word mercury__pprint__TypeInfo_for_T_47;
#line 844 "array.opt"
    MR_Word mercury__pprint__TypeInfo_for_T_48;
#line 8244 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 8246 "pprint.c"
    MR_Box mercury__pprint__conv1_V_32_32;
#line 8248 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 8250 "pprint.c"
    MR_Box mercury__pprint__conv3_V_33_33;
#line 8252 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_4)(MR_Box, MR_Box, MR_Box);
#line 8254 "pprint.c"
    MR_Box mercury__pprint__conv5_V_43_43;

#line 857 "array.opt"
{
#define MR_PROC_LABEL mercury__pprint__array_to_doc_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__pprint__A_5 , Array);
		{
#line 857 "array.opt"

    /* Array not used */
    Min = 0;

#line 8271 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_5_20  = Min;
#line 857 "array.opt"
}
#line 844 "array.opt"
{
#define MR_PROC_LABEL mercury__pprint__array_to_doc_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__pprint__A_5 , Array);
		{
#line 844 "array.opt"

    Max = Array->size - 1;

#line 8291 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_6_21  = Max;
#line 844 "array.opt"
}
#line 919 "array.opt"
    {
#line 919 "array.opt"
      mercury__array__fetch_items_4_p_0(mercury__pprint__TypeInfo_for_T_13, mercury__pprint__A_5, mercury__pprint__V_5_20, mercury__pprint__V_6_21, &mercury__pprint__V_12_12);
    }
#line 961 "pprint.m"
    {
#line 961 "pprint.m"
      mercury__pprint__V_9_9 = mercury__pprint__list_to_doc_2_f_0(mercury__pprint__TypeInfo_for_T_13, mercury__pprint__V_10_10, mercury__pprint__V_12_12);
    }
#line 8308 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_28 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 8310 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_29 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 583 "pprint.m"
    {
#line 583 "pprint.m"
      mercury__pprint__V_8_8 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_28, mercury__pprint__TypeClassInfo_for_doc_29, mercury__pprint__TypeClassInfo_for_doc_14, ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), ((MR_Box) (mercury__pprint__V_9_9)));
    }
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__array_to_doc_2_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 8338 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_35_35  = Max;
#line 223 "int.opt"
}
#line 8345 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_15, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8347 "pprint.c"
    {
#line 8349 "pprint.c"
      mercury__pprint__conv1_V_32_32 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_15), ((MR_Box) (mercury__pprint__V_35_35)), ((MR_Box) ((MR_String) "array")));
    }
#line 8352 "pprint.c"
    mercury__pprint__V_32_32 = ((MR_Word) mercury__pprint__conv1_V_32_32);
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__array_to_doc_2_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 8375 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_38_38  = Max;
#line 223 "int.opt"
}
#line 8382 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8384 "pprint.c"
    {
#line 8386 "pprint.c"
      mercury__pprint__conv3_V_33_33 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_14), ((MR_Box) (mercury__pprint__V_38_38)), ((MR_Box) (mercury__pprint__V_8_8)));
    }
#line 8389 "pprint.c"
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
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__array_to_doc_2_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 8422 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_45_45  = Max;
#line 223 "int.opt"
}
#line 8429 "pprint.c"
    mercury__pprint__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8431 "pprint.c"
    {
#line 8433 "pprint.c"
      mercury__pprint__conv5_V_43_43 = mercury__pprint__func_4(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_14), ((MR_Box) (mercury__pprint__V_45_45)), ((MR_Box) (mercury__pprint__V_6_6)));
    }
#line 8436 "pprint.c"
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
#line 8492 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 8494 "pprint.c"
    MR_Box mercury__pprint__conv1_V_27_27;

#line 625 "pprint.m"
    {
#line 625 "pprint.m"
      mercury__pprint__V_15_15 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_57_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(mercury__pprint__TypeInfo_for_T_11, mercury__pprint__V_9_9, mercury__pprint__Xs_5);
    }
#line 8502 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_24 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 616 "pprint.m"
    {
#line 616 "pprint.m"
      mercury__pprint__V_8_8 = mercury__pprint__packed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_24, mercury__pprint__TypeClassInfo_for_doc_17, mercury__pprint__V_9_9, ((MR_Box) ((MR_String) ", ")), mercury__pprint__V_15_15);
    }
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__list_to_doc_2_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 8530 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_29_29  = Max;
#line 223 "int.opt"
}
#line 8537 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_12, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8539 "pprint.c"
    {
#line 8541 "pprint.c"
      mercury__pprint__conv1_V_27_27 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_12), ((MR_Box) (mercury__pprint__V_29_29)), ((MR_Box) (mercury__pprint__V_8_8)));
    }
#line 8544 "pprint.c"
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
#line 8556 "pprint.c"
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
    MR_Word mercury__pprint__V_6_40;
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
#line 8623 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 8625 "pprint.c"
    MR_Box mercury__pprint__conv1_V_64_64;
#line 8627 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 8629 "pprint.c"
    MR_Box mercury__pprint__conv3_V_65_65;
#line 8631 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_4)(MR_Box, MR_Box, MR_Box);
#line 8633 "pprint.c"
    MR_Box mercury__pprint__conv5_V_75_75;

#line 136 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__pprint__sparse_bitset_to_doc_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__pprint__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{
#line 136 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 8651 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__TypeInfo_17_17  = TypeInfo;
#line 136 "private_builtin.opt"
}
#line 944 "pprint.m"
    mercury__pprint__V_10_10 = (mercury__pprint__Depth_4 - (MR_Integer) 1);
#line 601 "sparse_bitset.opt"
    mercury__pprint__V_10_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 462 "sparse_bitset.opt"
    mercury__pprint__V_6_40 = (MR_Word) mercury__pprint__A_5;
#line 472 "sparse_bitset.opt"
    {
#line 472 "sparse_bitset.opt"
      mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(mercury__pprint__TypeClassInfo_for_enum_13, mercury__pprint__V_6_40, mercury__pprint__V_10_21, &mercury__pprint__V_12_12);
    }
#line 944 "pprint.m"
    {
#line 944 "pprint.m"
      mercury__pprint__V_9_9 = mercury__pprint__list_to_doc_2_f_0(mercury__pprint__TypeInfo_17_17, mercury__pprint__V_10_10, mercury__pprint__V_12_12);
    }
#line 8674 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_60 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 8676 "pprint.c"
    mercury__pprint__TypeClassInfo_for_doc_61 = (MR_Word) &mercury__pprint_scalar_common_1[1];
#line 583 "pprint.m"
    {
#line 583 "pprint.m"
      mercury__pprint__V_8_8 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_60, mercury__pprint__TypeClassInfo_for_doc_61, mercury__pprint__TypeClassInfo_for_doc_14, ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), ((MR_Box) (mercury__pprint__V_9_9)));
    }
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__sparse_bitset_to_doc_2_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 8704 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_67_67  = Max;
#line 223 "int.opt"
}
#line 8711 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_15, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8713 "pprint.c"
    {
#line 8715 "pprint.c"
      mercury__pprint__conv1_V_64_64 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_15), ((MR_Box) (mercury__pprint__V_67_67)), ((MR_Box) ((MR_String) "sparse_bitset")));
    }
#line 8718 "pprint.c"
    mercury__pprint__V_64_64 = ((MR_Word) mercury__pprint__conv1_V_64_64);
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__sparse_bitset_to_doc_2_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 8741 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_70_70  = Max;
#line 223 "int.opt"
}
#line 8748 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8750 "pprint.c"
    {
#line 8752 "pprint.c"
      mercury__pprint__conv3_V_65_65 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_14), ((MR_Box) (mercury__pprint__V_70_70)), ((MR_Box) (mercury__pprint__V_8_8)));
    }
#line 8755 "pprint.c"
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
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__sparse_bitset_to_doc_2_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 8788 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_77_77  = Max;
#line 223 "int.opt"
}
#line 8795 "pprint.c"
    mercury__pprint__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8797 "pprint.c"
    {
#line 8799 "pprint.c"
      mercury__pprint__conv5_V_75_75 = mercury__pprint__func_4(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_14), ((MR_Box) (mercury__pprint__V_77_77)), ((MR_Box) (mercury__pprint__V_6_6)));
    }
#line 8802 "pprint.c"
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
#line 8850 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box);
#line 8852 "pprint.c"
    MR_Box mercury__pprint__conv1_V_6_6;

#line 8855 "pprint.c"
    {
#line 8857 "pprint.c"
      mercury__pprint__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8859 "pprint.c"
      MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_10_10, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_9_9));
#line 8861 "pprint.c"
      MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_10_10, 1) = ((MR_Box) (mercury__pprint__TypeInfo_for_T_7));
#line 8863 "pprint.c"
    }
#line 8865 "pprint.c"
    {
#line 8867 "pprint.c"
      mercury__pprint__TypeClassInfo_for_enum_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8869 "pprint.c"
      MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_enum_12, 0) = ((MR_Box) (mercury__pprint__BaseTypeClassInfo_for_enum_11));
#line 8871 "pprint.c"
      MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_enum_12, 1) = ((MR_Box) (mercury__pprint__TypeInfo_for_T_7));
#line 8873 "pprint.c"
      MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_enum_12, 2) = ((MR_Box) (mercury__pprint__TypeInfo_10_10));
#line 8875 "pprint.c"
    }
#line 8877 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_enum_12, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8879 "pprint.c"
    {
#line 8881 "pprint.c"
      mercury__pprint__conv1_V_6_6 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_enum_12), ((MR_Box) (mercury__pprint__V_5)));
    }
#line 8884 "pprint.c"
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
#line 199 "type_desc.opt"
    MR_Box mercury__pprint__V_17_17;
#line 143 "type_desc.opt"
    MR_Word mercury__pprint__V_5_22;
#line 34 "type_desc.opt"
    MR_Box mercury__pprint__V_11_11;
#line 60 "builtin.opt"
    MR_Box mercury__pprint__conv0_R_4;

#line 199 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_robdd_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__pprint__TypeInfo_for_T1_14 ;
		{
#line 199 "type_desc.opt"
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
#line 8966 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_10_10  = TypeInfo;
#line 199 "type_desc.opt"
}
#line 143 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_robdd_2_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__pprint__V_10_10 ;
		{
#line 143 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 8996 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_5_22  = TypeCtorDesc;
	 mercury__pprint__V_8_8  = ArgTypes;
#line 143 "type_desc.opt"
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
#line 9014 "pprint.c"
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
#line 34 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_robdd_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pprint__ArgTypeDesc_5 ;
		{
#line 34 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 9038 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__pprint__TypeInfo_for_T_13  = TypeInfo_for_T;
#line 34 "type_desc.opt"
}
#line 9045 "pprint.c"
            mercury__pprint__TypeCtorInfo_15_15 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_robdd_1;
#line 9047 "pprint.c"
            {
#line 9049 "pprint.c"
              mercury__pprint__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9051 "pprint.c"
              MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_16_16, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_15_15));
#line 9053 "pprint.c"
              MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_16_16, 1) = ((MR_Box) (*mercury__pprint__TypeInfo_for_T_13));
#line 9055 "pprint.c"
            }
#line 60 "builtin.opt"
            {
#line 60 "builtin.opt"
              mercury__pprint__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pprint__TypeInfo_for_T1_14, mercury__pprint__TypeInfo_16_16, mercury__pprint__X_3, &mercury__pprint__conv0_R_4);
            }
#line 60 "builtin.opt"
            if (mercury__pprint__succeeded)
#line 60 "builtin.opt"
              {
#line 60 "builtin.opt"
                *mercury__pprint__R_4 = ((MR_Word) mercury__pprint__conv0_R_4);
#line 60 "builtin.opt"
                mercury__pprint__succeeded = MR_TRUE;
#line 60 "builtin.opt"
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
#line 199 "type_desc.opt"
    MR_Box mercury__pprint__V_23_23;
#line 143 "type_desc.opt"
    MR_Word mercury__pprint__V_5_28;
#line 34 "type_desc.opt"
    MR_Box mercury__pprint__V_15_15;
#line 34 "type_desc.opt"
    MR_Box mercury__pprint__V_16_16;
#line 60 "builtin.opt"
    MR_Box mercury__pprint__conv0_MP_4;

#line 199 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_pair_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__pprint__TypeInfo_for_T1_20 ;
		{
#line 199 "type_desc.opt"
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
#line 9159 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_14_14  = TypeInfo;
#line 199 "type_desc.opt"
}
#line 143 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_pair_2_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__pprint__V_14_14 ;
		{
#line 143 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 9189 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_5_28  = TypeCtorDesc;
	 mercury__pprint__V_11_11  = ArgTypes;
#line 143 "type_desc.opt"
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
#line 9217 "pprint.c"
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
#line 34 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_pair_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pprint__KeyTypeDesc_5 ;
		{
#line 34 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 9241 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__pprint__TypeInfo_for_T_18  = TypeInfo_for_T;
#line 34 "type_desc.opt"
}
#line 34 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_pair_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pprint__ValueTypeDesc_6 ;
		{
#line 34 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 9261 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__pprint__TypeInfo_for_T_19  = TypeInfo_for_T;
#line 34 "type_desc.opt"
}
#line 9268 "pprint.c"
                mercury__pprint__TypeCtorInfo_21_21 = (MR_Word) &mercury__pprint__pprint__type_ctor_info_map_pair_2;
#line 9270 "pprint.c"
                {
#line 9272 "pprint.c"
                  mercury__pprint__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9274 "pprint.c"
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_22_22, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_21_21));
#line 9276 "pprint.c"
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_22_22, 1) = ((MR_Box) (*mercury__pprint__TypeInfo_for_T_18));
#line 9278 "pprint.c"
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_22_22, 2) = ((MR_Box) (*mercury__pprint__TypeInfo_for_T_19));
#line 9280 "pprint.c"
                }
#line 60 "builtin.opt"
                {
#line 60 "builtin.opt"
                  mercury__pprint__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pprint__TypeInfo_for_T1_20, mercury__pprint__TypeInfo_22_22, mercury__pprint__X_3, &mercury__pprint__conv0_MP_4);
                }
#line 60 "builtin.opt"
                if (mercury__pprint__succeeded)
#line 60 "builtin.opt"
                  {
#line 60 "builtin.opt"
                    *mercury__pprint__MP_4 = ((MR_Word) mercury__pprint__conv0_MP_4);
#line 60 "builtin.opt"
                    mercury__pprint__succeeded = MR_TRUE;
#line 60 "builtin.opt"
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
#line 199 "type_desc.opt"
    MR_Box mercury__pprint__V_23_23;
#line 143 "type_desc.opt"
    MR_Word mercury__pprint__V_5_28;
#line 34 "type_desc.opt"
    MR_Box mercury__pprint__V_15_15;
#line 34 "type_desc.opt"
    MR_Box mercury__pprint__V_16_16;
#line 60 "builtin.opt"
    MR_Box mercury__pprint__conv0_M_4;

#line 199 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__pprint__TypeInfo_for_T1_20 ;
		{
#line 199 "type_desc.opt"
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
#line 9386 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_14_14  = TypeInfo;
#line 199 "type_desc.opt"
}
#line 143 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_2_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__pprint__V_14_14 ;
		{
#line 143 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 9416 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_5_28  = TypeCtorDesc;
	 mercury__pprint__V_11_11  = ArgTypes;
#line 143 "type_desc.opt"
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
#line 9444 "pprint.c"
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
#line 34 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pprint__KeyTypeDesc_5 ;
		{
#line 34 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 9468 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__pprint__TypeInfo_for_T_18  = TypeInfo_for_T;
#line 34 "type_desc.opt"
}
#line 34 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pprint__ValueTypeDesc_6 ;
		{
#line 34 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 9488 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__pprint__TypeInfo_for_T_19  = TypeInfo_for_T;
#line 34 "type_desc.opt"
}
#line 9495 "pprint.c"
                mercury__pprint__TypeCtorInfo_21_21 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 9497 "pprint.c"
                {
#line 9499 "pprint.c"
                  mercury__pprint__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9501 "pprint.c"
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_22_22, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_21_21));
#line 9503 "pprint.c"
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_22_22, 1) = ((MR_Box) (*mercury__pprint__TypeInfo_for_T_18));
#line 9505 "pprint.c"
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_22_22, 2) = ((MR_Box) (*mercury__pprint__TypeInfo_for_T_19));
#line 9507 "pprint.c"
                }
#line 60 "builtin.opt"
                {
#line 60 "builtin.opt"
                  mercury__pprint__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pprint__TypeInfo_for_T1_20, mercury__pprint__TypeInfo_22_22, mercury__pprint__X_3, &mercury__pprint__conv0_M_4);
                }
#line 60 "builtin.opt"
                if (mercury__pprint__succeeded)
#line 60 "builtin.opt"
                  {
#line 60 "builtin.opt"
                    *mercury__pprint__M_4 = ((MR_Word) mercury__pprint__conv0_M_4);
#line 60 "builtin.opt"
                    mercury__pprint__succeeded = MR_TRUE;
#line 60 "builtin.opt"
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
#line 199 "type_desc.opt"
    MR_Box mercury__pprint__V_17_17;
#line 143 "type_desc.opt"
    MR_Word mercury__pprint__V_5_22;
#line 34 "type_desc.opt"
    MR_Box mercury__pprint__V_11_11;
#line 60 "builtin.opt"
    MR_Box mercury__pprint__conv0_VA_4;

#line 199 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_version_array_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__pprint__TypeInfo_for_T1_14 ;
		{
#line 199 "type_desc.opt"
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
#line 9605 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_10_10  = TypeInfo;
#line 199 "type_desc.opt"
}
#line 143 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_version_array_2_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__pprint__V_10_10 ;
		{
#line 143 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 9635 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_5_22  = TypeCtorDesc;
	 mercury__pprint__V_8_8  = ArgTypes;
#line 143 "type_desc.opt"
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
#line 9653 "pprint.c"
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
#line 34 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_version_array_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pprint__ArgTypeDesc_5 ;
		{
#line 34 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 9677 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__pprint__TypeInfo_for_T_13  = TypeInfo_for_T;
#line 34 "type_desc.opt"
}
#line 9684 "pprint.c"
            mercury__pprint__TypeCtorInfo_15_15 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
#line 9686 "pprint.c"
            {
#line 9688 "pprint.c"
              mercury__pprint__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9690 "pprint.c"
              MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_16_16, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_15_15));
#line 9692 "pprint.c"
              MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_16_16, 1) = ((MR_Box) (*mercury__pprint__TypeInfo_for_T_13));
#line 9694 "pprint.c"
            }
#line 60 "builtin.opt"
            {
#line 60 "builtin.opt"
              mercury__pprint__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pprint__TypeInfo_for_T1_14, mercury__pprint__TypeInfo_16_16, mercury__pprint__X_3, &mercury__pprint__conv0_VA_4);
            }
#line 60 "builtin.opt"
            if (mercury__pprint__succeeded)
#line 60 "builtin.opt"
              {
#line 60 "builtin.opt"
                *mercury__pprint__VA_4 = ((MR_Box) mercury__pprint__conv0_VA_4);
#line 60 "builtin.opt"
                mercury__pprint__succeeded = MR_TRUE;
#line 60 "builtin.opt"
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
#line 9966 "pprint.c"
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
#line 10063 "pprint.c"
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
#line 10105 "pprint.c"
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
#line 10176 "pprint.c"
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
#line 10245 "pprint.c"
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
#line 10358 "pprint.c"
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
#line 199 "type_desc.opt"
    MR_Box mercury__pprint__V_46_46;
#line 143 "type_desc.opt"
    MR_Word mercury__pprint__V_5_51;
#line 34 "type_desc.opt"
    MR_Box mercury__pprint__V_42_42;
#line 60 "builtin.opt"
    MR_Box mercury__pprint__conv0_Var_8;

#line 199 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__to_doc_3_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__pprint__TypeInfo_for_T_18 ;
		{
#line 199 "type_desc.opt"
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
#line 10643 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_41_41  = TypeInfo;
#line 199 "type_desc.opt"
}
#line 143 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__to_doc_3_f_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__pprint__V_41_41 ;
		{
#line 143 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 10673 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_5_51  = TypeCtorDesc;
	 mercury__pprint__V_39_39  = ArgTypes;
#line 143 "type_desc.opt"
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
#line 10691 "pprint.c"
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
#line 34 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__to_doc_3_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pprint__ArgTypeDesc_36 ;
		{
#line 34 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 10715 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__TypeInfo_19_19  = TypeInfo_for_T;
#line 34 "type_desc.opt"
}
#line 10722 "pprint.c"
            mercury__pprint__TypeCtorInfo_15_44 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 10724 "pprint.c"
            {
#line 10726 "pprint.c"
              mercury__pprint__TypeInfo_16_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10728 "pprint.c"
              MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_16_45, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_15_44));
#line 10730 "pprint.c"
              MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_16_45, 1) = ((MR_Box) (mercury__pprint__TypeInfo_19_19));
#line 10732 "pprint.c"
            }
#line 60 "builtin.opt"
            {
#line 60 "builtin.opt"
              mercury__pprint__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pprint__TypeInfo_for_T_18, mercury__pprint__TypeInfo_16_45, mercury__pprint__X_7, &mercury__pprint__conv0_Var_8);
            }
#line 60 "builtin.opt"
            if (mercury__pprint__succeeded)
#line 60 "builtin.opt"
              {
#line 60 "builtin.opt"
                mercury__pprint__Var_8 = ((MR_Word) mercury__pprint__conv0_Var_8);
#line 60 "builtin.opt"
                mercury__pprint__succeeded = MR_TRUE;
#line 60 "builtin.opt"
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
#line 60 "builtin.opt"
        MR_Box mercury__pprint__conv1_SparseBitsetInt_9;

#line 60 "builtin.opt"
        {
#line 60 "builtin.opt"
          mercury__pprint__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pprint__TypeInfo_for_T_18, mercury__pprint__TypeInfo_7_57, mercury__pprint__X_7, &mercury__pprint__conv1_SparseBitsetInt_9);
        }
#line 60 "builtin.opt"
        if (mercury__pprint__succeeded)
#line 60 "builtin.opt"
          {
#line 60 "builtin.opt"
            mercury__pprint__SparseBitsetInt_9 = ((MR_Word) mercury__pprint__conv1_SparseBitsetInt_9);
#line 60 "builtin.opt"
            mercury__pprint__succeeded = MR_TRUE;
#line 60 "builtin.opt"
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
#line 60 "builtin.opt"
            MR_Box mercury__pprint__conv2_A_62;

#line 60 "builtin.opt"
            {
#line 60 "builtin.opt"
              mercury__pprint__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pprint__TypeInfo_for_T_18, mercury__pprint__TypeInfo_8_65, mercury__pprint__X_7, &mercury__pprint__conv2_A_62);
            }
#line 60 "builtin.opt"
            if (mercury__pprint__succeeded)
#line 60 "builtin.opt"
              {
#line 60 "builtin.opt"
                mercury__pprint__A_62 = ((MR_Word) mercury__pprint__conv2_A_62);
#line 60 "builtin.opt"
                mercury__pprint__succeeded = MR_TRUE;
#line 60 "builtin.opt"
              }
#line 841 "pprint.m"
            if (mercury__pprint__succeeded)
#line 841 "pprint.m"
              {
#line 10836 "pprint.c"
                mercury__pprint__TypeInfo_for_T2_64 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 10838 "pprint.c"
                mercury__pprint__SparseBitsetVar_10 = mercury__pprint__A_62;
#line 10840 "pprint.c"
                mercury__pprint__TypeInfo_21_21 = mercury__pprint__TypeInfo_for_T2_64;
#line 10842 "pprint.c"
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

#line 10859 "pprint.c"
                {
#line 10861 "pprint.c"
                  mercury__pprint__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10863 "pprint.c"
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_23_23, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_22_22));
#line 10865 "pprint.c"
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_23_23, 1) = ((MR_Box) (mercury__pprint__TypeInfo_21_21));
#line 10867 "pprint.c"
                }
#line 10869 "pprint.c"
                {
#line 10871 "pprint.c"
                  mercury__pprint__TypeClassInfo_for_enum_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10873 "pprint.c"
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_enum_25, 0) = ((MR_Box) (mercury__pprint__BaseTypeClassInfo_for_enum_24));
#line 10875 "pprint.c"
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_enum_25, 1) = ((MR_Box) (mercury__pprint__TypeInfo_21_21));
#line 10877 "pprint.c"
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_enum_25, 2) = ((MR_Box) (mercury__pprint__TypeInfo_23_23));
#line 10879 "pprint.c"
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
#line 199 "type_desc.opt"
                MR_Box mercury__pprint__V_81_81;
#line 143 "type_desc.opt"
                MR_Word mercury__pprint__V_5_86;
#line 34 "type_desc.opt"
                MR_Box mercury__pprint__V_77_77;
#line 60 "builtin.opt"
                MR_Box mercury__pprint__conv3_List_11;

#line 199 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__to_doc_3_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__pprint__TypeInfo_for_T_18 ;
		{
#line 199 "type_desc.opt"
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
#line 10947 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_76_76  = TypeInfo;
#line 199 "type_desc.opt"
}
#line 143 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__to_doc_3_f_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__pprint__V_76_76 ;
		{
#line 143 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 10977 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_5_86  = TypeCtorDesc;
	 mercury__pprint__V_74_74  = ArgTypes;
#line 143 "type_desc.opt"
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
#line 10995 "pprint.c"
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
#line 34 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pprint__to_doc_3_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pprint__ArgTypeDesc_71 ;
		{
#line 34 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 11019 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__TypeInfo_26_26  = TypeInfo_for_T;
#line 34 "type_desc.opt"
}
#line 11026 "pprint.c"
                        mercury__pprint__TypeCtorInfo_15_79 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 11028 "pprint.c"
                        {
#line 11030 "pprint.c"
                          mercury__pprint__TypeInfo_16_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11032 "pprint.c"
                          MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_16_80, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_15_79));
#line 11034 "pprint.c"
                          MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_16_80, 1) = ((MR_Box) (mercury__pprint__TypeInfo_26_26));
#line 11036 "pprint.c"
                        }
#line 60 "builtin.opt"
                        {
#line 60 "builtin.opt"
                          mercury__pprint__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pprint__TypeInfo_for_T_18, mercury__pprint__TypeInfo_16_80, mercury__pprint__X_7, &mercury__pprint__conv3_List_11);
                        }
#line 60 "builtin.opt"
                        if (mercury__pprint__succeeded)
#line 60 "builtin.opt"
                          {
#line 60 "builtin.opt"
                            mercury__pprint__List_11 = ((MR_Word) mercury__pprint__conv3_List_11);
#line 60 "builtin.opt"
                            mercury__pprint__succeeded = MR_TRUE;
#line 60 "builtin.opt"
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
    MR_Word mercury__pprint__V_7_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 167 "list.opt"
    {
#line 167 "list.opt"
      mercury__list__accumulate_n_copies_4_p_0(mercury__pprint__TypeCtorInfo_8_15, mercury__pprint__J_5, ((MR_Box) (MR_Word) ((MR_Char) 32)), mercury__pprint__V_7_19, &mercury__pprint__V_7_14);
    }
#line 502 "string.opt"
    {
#line 502 "string.opt"
      mercury__string__from_char_list_2_p_0(mercury__pprint__V_7_14, &mercury__pprint__V_6_6);
    }
#line 159 "string.opt"
    {
#line 159 "string.opt"
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

#line 248 "string.opt"
                  {
#line 248 "string.opt"
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

#line 22 "univ.opt"
                  mercury__pprint__TypeInfo_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_19, (MR_Integer) 0)));
#line 22 "univ.opt"
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

#line 159 "string.opt"
                  {
#line 159 "string.opt"
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

#line 22 "univ.opt"
                  mercury__pprint__TypeInfo_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_69, (MR_Integer) 0)));
#line 22 "univ.opt"
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

#line 159 "string.opt"
                  {
#line 159 "string.opt"
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

#line 22 "univ.opt"
                  mercury__pprint__TypeInfo_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_69, (MR_Integer) 0)));
#line 22 "univ.opt"
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
#line 12365 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 12367 "pprint.c"
    MR_Box mercury__pprint__conv1_V_13_13;
#line 462 "pprint.m"
    MR_Integer mercury__pprint__V_30_30;

#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__write_5_p_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 12393 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_23_23  = Max;
#line 223 "int.opt"
}
#line 12400 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_15, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12402 "pprint.c"
    {
#line 12404 "pprint.c"
      mercury__pprint__conv1_V_13_13 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_15), ((MR_Box) (mercury__pprint__V_23_23)), mercury__pprint__X_8);
    }
#line 12407 "pprint.c"
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
#line 12438 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 12440 "pprint.c"
    MR_Box mercury__pprint__conv1_V_11_11;
#line 462 "pprint.m"
    MR_Integer mercury__pprint__V_27_27;

#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__write_4_p_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 12466 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_19_19  = Max;
#line 223 "int.opt"
}
#line 12473 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_13, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12475 "pprint.c"
    {
#line 12477 "pprint.c"
      mercury__pprint__conv1_V_11_11 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_13), ((MR_Box) (mercury__pprint__V_19_19)), mercury__pprint__X_6);
    }
#line 12480 "pprint.c"
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
#line 12523 "pprint.c"
    mercury__pprint__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1040 "list.opt"
    {
#line 1040 "list.opt"
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

#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__to_doc_1_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 12611 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_4_4  = Max;
#line 223 "int.opt"
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
    MR_Integer mercury__pprint__V_7_24;

#line 1143 "string.opt"
    {
#line 1143 "string.opt"
      mercury__pprint__next_boundary__ho41_4_p_in__string_0(mercury__pprint__String_3, (MR_Integer) 0, &mercury__pprint__V_7_24);
    }
#line 1144 "string.opt"
    {
#line 1144 "string.opt"
      mercury__pprint__words_loop__ho40_4_p_in__string_0(mercury__pprint__String_3, mercury__pprint__V_7_24, &mercury__pprint__V_10_10);
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
#line 12725 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 12727 "pprint.c"
    MR_Box mercury__pprint__conv1_V_8_8;
#line 12729 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 12731 "pprint.c"
    MR_Box mercury__pprint__conv3_V_9_9;

#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__colon_space_line_0_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 12755 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_11_11  = Max;
#line 223 "int.opt"
}
#line 12762 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12764 "pprint.c"
    {
#line 12766 "pprint.c"
      mercury__pprint__conv1_V_8_8 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_4), ((MR_Box) (mercury__pprint__V_11_11)), ((MR_Box) ((MR_String) ": ")));
    }
#line 12769 "pprint.c"
    mercury__pprint__V_8_8 = ((MR_Word) mercury__pprint__conv1_V_8_8);
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__colon_space_line_0_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 12792 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_14_14  = Max;
#line 223 "int.opt"
}
#line 12799 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12801 "pprint.c"
    {
#line 12803 "pprint.c"
      mercury__pprint__conv3_V_9_9 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_5), ((MR_Box) (mercury__pprint__V_14_14)), ((MR_Box) (mercury__pprint__V_3_3)));
    }
#line 12806 "pprint.c"
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
#line 12850 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 12852 "pprint.c"
    MR_Box mercury__pprint__conv1_V_8_8;
#line 12854 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 12856 "pprint.c"
    MR_Box mercury__pprint__conv3_V_9_9;

#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__semic_space_line_0_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 12880 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_11_11  = Max;
#line 223 "int.opt"
}
#line 12887 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12889 "pprint.c"
    {
#line 12891 "pprint.c"
      mercury__pprint__conv1_V_8_8 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_4), ((MR_Box) (mercury__pprint__V_11_11)), ((MR_Box) ((MR_String) "; ")));
    }
#line 12894 "pprint.c"
    mercury__pprint__V_8_8 = ((MR_Word) mercury__pprint__conv1_V_8_8);
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__semic_space_line_0_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 12917 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_14_14  = Max;
#line 223 "int.opt"
}
#line 12924 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12926 "pprint.c"
    {
#line 12928 "pprint.c"
      mercury__pprint__conv3_V_9_9 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_5), ((MR_Box) (mercury__pprint__V_14_14)), ((MR_Box) (mercury__pprint__V_3_3)));
    }
#line 12931 "pprint.c"
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
#line 12975 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 12977 "pprint.c"
    MR_Box mercury__pprint__conv1_V_8_8;
#line 12979 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 12981 "pprint.c"
    MR_Box mercury__pprint__conv3_V_9_9;

#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__comma_space_line_0_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 13005 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_11_11  = Max;
#line 223 "int.opt"
}
#line 13012 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13014 "pprint.c"
    {
#line 13016 "pprint.c"
      mercury__pprint__conv1_V_8_8 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_4), ((MR_Box) (mercury__pprint__V_11_11)), ((MR_Box) ((MR_String) ", ")));
    }
#line 13019 "pprint.c"
    mercury__pprint__V_8_8 = ((MR_Word) mercury__pprint__conv1_V_8_8);
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__comma_space_line_0_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 13042 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_14_14  = Max;
#line 223 "int.opt"
}
#line 13049 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13051 "pprint.c"
    {
#line 13053 "pprint.c"
      mercury__pprint__conv3_V_9_9 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_5), ((MR_Box) (mercury__pprint__V_14_14)), ((MR_Box) (mercury__pprint__V_3_3)));
    }
#line 13056 "pprint.c"
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
#line 13100 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 13102 "pprint.c"
    MR_Box mercury__pprint__conv1_V_8_8;
#line 13104 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 13106 "pprint.c"
    MR_Box mercury__pprint__conv3_V_9_9;

#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__space_line_0_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 13130 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_11_11  = Max;
#line 223 "int.opt"
}
#line 13137 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13139 "pprint.c"
    {
#line 13141 "pprint.c"
      mercury__pprint__conv1_V_8_8 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_4), ((MR_Box) (mercury__pprint__V_11_11)), ((MR_Box) ((MR_String) " ")));
    }
#line 13144 "pprint.c"
    mercury__pprint__V_8_8 = ((MR_Word) mercury__pprint__conv1_V_8_8);
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__space_line_0_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 13167 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_14_14  = Max;
#line 223 "int.opt"
}
#line 13174 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13176 "pprint.c"
    {
#line 13178 "pprint.c"
      mercury__pprint__conv3_V_9_9 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_5), ((MR_Box) (mercury__pprint__V_14_14)), ((MR_Box) (mercury__pprint__V_3_3)));
    }
#line 13181 "pprint.c"
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
#line 13225 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 13227 "pprint.c"
    MR_Box mercury__pprint__conv1_V_8_8;
#line 13229 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 13231 "pprint.c"
    MR_Box mercury__pprint__conv3_V_9_9;

#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__colon_line_0_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 13255 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_11_11  = Max;
#line 223 "int.opt"
}
#line 13262 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13264 "pprint.c"
    {
#line 13266 "pprint.c"
      mercury__pprint__conv1_V_8_8 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_4), ((MR_Box) (mercury__pprint__V_11_11)), ((MR_Box) ((MR_String) ":")));
    }
#line 13269 "pprint.c"
    mercury__pprint__V_8_8 = ((MR_Word) mercury__pprint__conv1_V_8_8);
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__colon_line_0_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 13292 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_14_14  = Max;
#line 223 "int.opt"
}
#line 13299 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13301 "pprint.c"
    {
#line 13303 "pprint.c"
      mercury__pprint__conv3_V_9_9 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_5), ((MR_Box) (mercury__pprint__V_14_14)), ((MR_Box) (mercury__pprint__V_3_3)));
    }
#line 13306 "pprint.c"
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
#line 13350 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 13352 "pprint.c"
    MR_Box mercury__pprint__conv1_V_8_8;
#line 13354 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 13356 "pprint.c"
    MR_Box mercury__pprint__conv3_V_9_9;

#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__semic_line_0_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 13380 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_11_11  = Max;
#line 223 "int.opt"
}
#line 13387 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13389 "pprint.c"
    {
#line 13391 "pprint.c"
      mercury__pprint__conv1_V_8_8 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_4), ((MR_Box) (mercury__pprint__V_11_11)), ((MR_Box) ((MR_String) ";")));
    }
#line 13394 "pprint.c"
    mercury__pprint__V_8_8 = ((MR_Word) mercury__pprint__conv1_V_8_8);
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__semic_line_0_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 13417 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_14_14  = Max;
#line 223 "int.opt"
}
#line 13424 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13426 "pprint.c"
    {
#line 13428 "pprint.c"
      mercury__pprint__conv3_V_9_9 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_5), ((MR_Box) (mercury__pprint__V_14_14)), ((MR_Box) (mercury__pprint__V_3_3)));
    }
#line 13431 "pprint.c"
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
#line 13475 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 13477 "pprint.c"
    MR_Box mercury__pprint__conv1_V_8_8;
#line 13479 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 13481 "pprint.c"
    MR_Box mercury__pprint__conv3_V_9_9;

#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__comma_line_0_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 13505 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_11_11  = Max;
#line 223 "int.opt"
}
#line 13512 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13514 "pprint.c"
    {
#line 13516 "pprint.c"
      mercury__pprint__conv1_V_8_8 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_4), ((MR_Box) (mercury__pprint__V_11_11)), ((MR_Box) ((MR_String) ",")));
    }
#line 13519 "pprint.c"
    mercury__pprint__V_8_8 = ((MR_Word) mercury__pprint__conv1_V_8_8);
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__comma_line_0_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 13542 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_14_14  = Max;
#line 223 "int.opt"
}
#line 13549 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13551 "pprint.c"
    {
#line 13553 "pprint.c"
      mercury__pprint__conv3_V_9_9 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_5), ((MR_Box) (mercury__pprint__V_14_14)), ((MR_Box) (mercury__pprint__V_3_3)));
    }
#line 13556 "pprint.c"
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
#line 13787 "pprint.c"
            MR_Box MR_CALL (* mercury__pprint__func_4)(MR_Box, MR_Box, MR_Box);
#line 13789 "pprint.c"
            MR_Box mercury__pprint__conv5_V_19_19;
#line 13791 "pprint.c"
            MR_Box MR_CALL (* mercury__pprint__func_6)(MR_Box, MR_Box, MR_Box);
#line 13793 "pprint.c"
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
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__separated_3_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 13829 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_22_22  = Max;
#line 223 "int.opt"
}
#line 13836 "pprint.c"
            mercury__pprint__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13838 "pprint.c"
            {
#line 13840 "pprint.c"
              mercury__pprint__conv5_V_19_19 = mercury__pprint__func_4(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_14), ((MR_Box) (mercury__pprint__V_22_22)), mercury__pprint__Sep_2);
            }
#line 13843 "pprint.c"
            mercury__pprint__V_19_19 = ((MR_Word) mercury__pprint__conv5_V_19_19);
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__separated_3_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 13866 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_25_25  = Max;
#line 223 "int.opt"
}
#line 13873 "pprint.c"
            mercury__pprint__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13875 "pprint.c"
            {
#line 13877 "pprint.c"
              mercury__pprint__conv7_V_20_20 = mercury__pprint__func_6(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_16), ((MR_Box) (mercury__pprint__V_25_25)), ((MR_Box) (mercury__pprint__V_13_13)));
            }
#line 13880 "pprint.c"
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
#line 13935 "pprint.c"
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
#line 13978 "pprint.c"
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

#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__packed_cs_1_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 14065 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_9_9  = Max;
#line 223 "int.opt"
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
#line 14135 "pprint.c"
            MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 14137 "pprint.c"
            MR_Box mercury__pprint__conv3_V_46_46;

#line 602 "pprint.m"
            mercury__pprint__succeeded = ((MR_Integer) 0 < mercury__pprint__HeadVar__1_1);
#line 602 "pprint.m"
            if (mercury__pprint__succeeded)
#line 411 "pprint.m"
              {
#line 411 "pprint.m"
                MR_Integer mercury__pprint__V_41_41;
#line 14148 "pprint.c"
                MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 14150 "pprint.c"
                MR_Box mercury__pprint__conv1_V_13_13;

#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__packed_3_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 14174 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_41_41  = Max;
#line 223 "int.opt"
}
#line 14181 "pprint.c"
                mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14183 "pprint.c"
                {
#line 14185 "pprint.c"
                  mercury__pprint__conv1_V_13_13 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_34), ((MR_Box) (mercury__pprint__V_41_41)), mercury__pprint__V_39_39);
                }
#line 14188 "pprint.c"
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
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__packed_3_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 14226 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_48_48  = Max;
#line 223 "int.opt"
}
#line 14233 "pprint.c"
            mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_35, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14235 "pprint.c"
            {
#line 14237 "pprint.c"
              mercury__pprint__conv3_V_46_46 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_35), ((MR_Box) (mercury__pprint__V_48_48)), ((MR_Box) (mercury__pprint__V_11_11)));
            }
#line 14240 "pprint.c"
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
#line 14290 "pprint.c"
                MR_Box MR_CALL (* mercury__pprint__func_4)(MR_Box, MR_Box, MR_Box);
#line 14292 "pprint.c"
                MR_Box mercury__pprint__conv5_V_52_52;
#line 14294 "pprint.c"
                MR_Box MR_CALL (* mercury__pprint__func_6)(MR_Box, MR_Box, MR_Box);
#line 14296 "pprint.c"
                MR_Box mercury__pprint__conv7_V_53_53;
#line 14298 "pprint.c"
                MR_Box MR_CALL (* mercury__pprint__func_8)(MR_Box, MR_Box, MR_Box);
#line 14300 "pprint.c"
                MR_Box mercury__pprint__conv9_V_63_63;

#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__packed_3_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 14324 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_55_55  = Max;
#line 223 "int.opt"
}
#line 14331 "pprint.c"
                mercury__pprint__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14333 "pprint.c"
                {
#line 14335 "pprint.c"
                  mercury__pprint__conv5_V_52_52 = mercury__pprint__func_4(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_34), ((MR_Box) (mercury__pprint__V_55_55)), mercury__pprint__V_39_39);
                }
#line 14338 "pprint.c"
                mercury__pprint__V_52_52 = ((MR_Word) mercury__pprint__conv5_V_52_52);
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__packed_3_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 14361 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_58_58  = Max;
#line 223 "int.opt"
}
#line 14368 "pprint.c"
                mercury__pprint__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_33, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14370 "pprint.c"
                {
#line 14372 "pprint.c"
                  mercury__pprint__conv7_V_53_53 = mercury__pprint__func_6(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_33), ((MR_Box) (mercury__pprint__V_58_58)), mercury__pprint__HeadVar__2_2);
                }
#line 14375 "pprint.c"
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
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__packed_3_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 14413 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_65_65  = Max;
#line 223 "int.opt"
}
#line 14420 "pprint.c"
                mercury__pprint__func_8 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_36, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14422 "pprint.c"
                {
#line 14424 "pprint.c"
                  mercury__pprint__conv9_V_63_63 = mercury__pprint__func_8(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_36), ((MR_Box) (mercury__pprint__V_65_65)), ((MR_Box) (mercury__pprint__V_23_23)));
                }
#line 14427 "pprint.c"
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
#line 14469 "pprint.c"
                MR_Box MR_CALL (* mercury__pprint__func_10)(MR_Box, MR_Box, MR_Box);
#line 14471 "pprint.c"
                MR_Box mercury__pprint__conv11_V_70_70;

#line 607 "pprint.m"
                {
#line 607 "pprint.m"
                  mercury__pprint__V_30_30 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_37, mercury__pprint__TypeClassInfo_for_doc_37, ((MR_Box) (mercury__pprint__V_31_31)), ((MR_Box) (mercury__pprint__V_32_32)));
                }
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__packed_3_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 14500 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_72_72  = Max;
#line 223 "int.opt"
}
#line 14507 "pprint.c"
                mercury__pprint__func_10 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_37, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14509 "pprint.c"
                {
#line 14511 "pprint.c"
                  mercury__pprint__conv11_V_70_70 = mercury__pprint__func_10(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_37), ((MR_Box) (mercury__pprint__V_72_72)), ((MR_Box) (mercury__pprint__V_30_30)));
                }
#line 14514 "pprint.c"
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

#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__packed_2_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 14582 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_6_6  = Max;
#line 223 "int.opt"
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
#line 14736 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 14738 "pprint.c"
    MR_Box mercury__pprint__conv1_V_15_15;
#line 14740 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 14742 "pprint.c"
    MR_Box mercury__pprint__conv3_V_16_16;
#line 14744 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_4)(MR_Box, MR_Box, MR_Box);
#line 14746 "pprint.c"
    MR_Box mercury__pprint__conv5_V_27_27;
#line 14748 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_6)(MR_Box, MR_Box, MR_Box);
#line 14750 "pprint.c"
    MR_Box mercury__pprint__conv7_V_28_28;

#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__bracketed_3_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 14774 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_18_18  = Max;
#line 223 "int.opt"
}
#line 14781 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_11, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14783 "pprint.c"
    {
#line 14785 "pprint.c"
      mercury__pprint__conv1_V_15_15 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_11), ((MR_Box) (mercury__pprint__V_18_18)), mercury__pprint__D_7);
    }
#line 14788 "pprint.c"
    mercury__pprint__V_15_15 = ((MR_Word) mercury__pprint__conv1_V_15_15);
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__bracketed_3_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 14811 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_21_21  = Max;
#line 223 "int.opt"
}
#line 14818 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_10, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14820 "pprint.c"
    {
#line 14822 "pprint.c"
      mercury__pprint__conv3_V_16_16 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_10), ((MR_Box) (mercury__pprint__V_21_21)), mercury__pprint__R_6);
    }
#line 14825 "pprint.c"
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
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__bracketed_3_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 14858 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_30_30  = Max;
#line 223 "int.opt"
}
#line 14865 "pprint.c"
    mercury__pprint__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14867 "pprint.c"
    {
#line 14869 "pprint.c"
      mercury__pprint__conv5_V_27_27 = mercury__pprint__func_4(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_9), ((MR_Box) (mercury__pprint__V_30_30)), mercury__pprint__L_5);
    }
#line 14872 "pprint.c"
    mercury__pprint__V_27_27 = ((MR_Word) mercury__pprint__conv5_V_27_27);
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__bracketed_3_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 14895 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_33_33  = Max;
#line 223 "int.opt"
}
#line 14902 "pprint.c"
    mercury__pprint__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_12, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14904 "pprint.c"
    {
#line 14906 "pprint.c"
      mercury__pprint__conv7_V_28_28 = mercury__pprint__func_6(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_12), ((MR_Box) (mercury__pprint__V_33_33)), ((MR_Box) (mercury__pprint__V_8_8)));
    }
#line 14909 "pprint.c"
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
#line 14959 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 14961 "pprint.c"
    MR_Box mercury__pprint__conv1_V_12_12;
#line 14963 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 14965 "pprint.c"
    MR_Box mercury__pprint__conv3_V_13_13;

#line 578 "pprint.m"
    {
#line 578 "pprint.m"
      mercury__pprint__V_6_6 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_9, mercury__pprint__TypeClassInfo_for_doc_9, ((MR_Box) (mercury__pprint__V_7_7)), ((MR_Box) (mercury__pprint__Y_5)));
    }
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__f_60_47_62_2_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 14994 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_15_15  = Max;
#line 223 "int.opt"
}
#line 15001 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_8, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15003 "pprint.c"
    {
#line 15005 "pprint.c"
      mercury__pprint__conv1_V_12_12 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_8), ((MR_Box) (mercury__pprint__V_15_15)), ((MR_Box) (mercury__pprint__X_4)));
    }
#line 15008 "pprint.c"
    mercury__pprint__V_12_12 = ((MR_Word) mercury__pprint__conv1_V_12_12);
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__f_60_47_62_2_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 15031 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_18_18  = Max;
#line 223 "int.opt"
}
#line 15038 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15040 "pprint.c"
    {
#line 15042 "pprint.c"
      mercury__pprint__conv3_V_13_13 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_9), ((MR_Box) (mercury__pprint__V_18_18)), ((MR_Box) (mercury__pprint__V_6_6)));
    }
#line 15045 "pprint.c"
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
          MR_Word mercury__pprint__V_9_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 438 "pprint.m"
          MR_Word mercury__pprint__V_10_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 45 "string.format.opt"
          {
#line 45 "string.format.opt"
            mercury__string__format__format_float_component_6_p_0(mercury__pprint__V_44_44, mercury__pprint__V_9_61, mercury__pprint__V_10_62, (MR_Integer) 2, mercury__pprint__F_21, &mercury__pprint__V_22_22);
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
          MR_Word mercury__pprint__V_7_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 437 "pprint.m"
          MR_Word mercury__pprint__V_8_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 65 "string.format.opt"
          {
#line 65 "string.format.opt"
            mercury__string__format__format_signed_int_component_5_p_0(mercury__pprint__V_38_38, mercury__pprint__V_7_67, mercury__pprint__V_8_68, mercury__pprint__I_15, &mercury__pprint__V_16_16);
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
          MR_Word mercury__pprint__V_7_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 435 "pprint.m"
          MR_Word mercury__pprint__V_8_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 85 "string.format.opt"
          {
#line 85 "string.format.opt"
            mercury__string__format__format_string_component_5_p_0(mercury__pprint__V_32_32, mercury__pprint__V_7_73, mercury__pprint__V_8_74, mercury__pprint__S_3, &mercury__pprint__V_4_4);
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
          MR_Word mercury__pprint__V_7_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 36 "string.format.opt"
          {
#line 36 "string.format.opt"
            mercury__string__format__format_char_component_4_p_0(mercury__pprint__V_51_51, mercury__pprint__V_7_55, mercury__pprint__C_9, &mercury__pprint__V_10_10);
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
#line 15245 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 15247 "pprint.c"
    MR_Box mercury__pprint__conv1_V_4_4;

#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__group_1_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 15271 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_7_7  = Max;
#line 223 "int.opt"
}
#line 15278 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15280 "pprint.c"
    {
#line 15282 "pprint.c"
      mercury__pprint__conv1_V_4_4 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_5), ((MR_Box) (mercury__pprint__V_7_7)), mercury__pprint__X_3);
    }
#line 15285 "pprint.c"
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
#line 15325 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 15327 "pprint.c"
    MR_Box mercury__pprint__conv1_V_6_6;

#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__label_2_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 15351 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_9_9  = Max;
#line 223 "int.opt"
}
#line 15358 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_7, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15360 "pprint.c"
    {
#line 15362 "pprint.c"
      mercury__pprint__conv1_V_6_6 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_7), ((MR_Box) (mercury__pprint__V_9_9)), mercury__pprint__X_5);
    }
#line 15365 "pprint.c"
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
#line 15407 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 15409 "pprint.c"
    MR_Box mercury__pprint__conv1_V_6_6;

#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__nest_2_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 15433 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_9_9  = Max;
#line 223 "int.opt"
}
#line 15440 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_7, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15442 "pprint.c"
    {
#line 15444 "pprint.c"
      mercury__pprint__conv1_V_6_6 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_7), ((MR_Box) (mercury__pprint__V_9_9)), mercury__pprint__X_5);
    }
#line 15447 "pprint.c"
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
#line 15595 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 15597 "pprint.c"
    MR_Box mercury__pprint__conv1_V_6_6;
#line 15599 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
#line 15601 "pprint.c"
    MR_Box mercury__pprint__conv3_V_7_7;

#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__f_43_43_2_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 15625 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_11_11  = Max;
#line 223 "int.opt"
}
#line 15632 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_8, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15634 "pprint.c"
    {
#line 15636 "pprint.c"
      mercury__pprint__conv1_V_6_6 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_8), ((MR_Box) (mercury__pprint__V_11_11)), mercury__pprint__Doc1_4);
    }
#line 15639 "pprint.c"
    mercury__pprint__V_6_6 = ((MR_Word) mercury__pprint__conv1_V_6_6);
#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__f_43_43_2_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 15662 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_14_14  = Max;
#line 223 "int.opt"
}
#line 15669 "pprint.c"
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15671 "pprint.c"
    {
#line 15673 "pprint.c"
      mercury__pprint__conv3_V_7_7 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_9), ((MR_Box) (mercury__pprint__V_14_14)), mercury__pprint__Doc2_5);
    }
#line 15676 "pprint.c"
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
#line 15712 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
#line 15714 "pprint.c"
    MR_Box mercury__pprint__conv1_HeadVar__2_2;

#line 223 "int.opt"
{
#define MR_PROC_LABEL mercury__pprint__doc_1_f_0

	MR_Integer Max;

		{
#line 223 "int.opt"

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

#line 15738 "pprint.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_4_4  = Max;
#line 223 "int.opt"
}
#line 15745 "pprint.c"
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15747 "pprint.c"
    {
#line 15749 "pprint.c"
      mercury__pprint__conv1_HeadVar__2_2 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_5), ((MR_Box) (mercury__pprint__V_4_4)), mercury__pprint__X_3);
    }
#line 15752 "pprint.c"
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
#line 15772 "pprint.c"
  {
#line 15774 "pprint.c"
    MR_bool mercury__pprint__succeeded;
#line 15776 "pprint.c"
    MR_Word mercury__pprint__HeadVar__3_3;
#line 15778 "pprint.c"
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15780 "pprint.c"
    MR_Box mercury__pprint__conv1_HeadVar__3_3;

#line 15783 "pprint.c"
    {
#line 15785 "pprint.c"
      mercury__pprint__conv1_HeadVar__3_3 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_4), ((MR_Box) (mercury__pprint__HeadVar__1_1)), mercury__pprint__HeadVar__2_2);
    }
#line 15788 "pprint.c"
    mercury__pprint__HeadVar__3_3 = ((MR_Word) mercury__pprint__conv1_HeadVar__3_3);
#line 15790 "pprint.c"
    return mercury__pprint__HeadVar__3_3;
#line 15792 "pprint.c"
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
