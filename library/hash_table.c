/*
** Automatically generated from `hash_table.m'
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


/* :- module hash_table. */
/* :- implementation. */

/*
INIT mercury__hash_table__init
ENDINIT
*/

#include "hash_table.mih"


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




#line 94 "hash_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__hash_table__hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2;

#line 97 "hash_table.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__hash_table__array__pti_array_1__pseudo_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2;

#line 100 "hash_table.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0;

#line 103 "hash_table.c"
static const MR_PseudoTypeInfo mercury__hash_table__hash_table__field_types_hash_table_2_0[4];

#line 106 "hash_table.c"
static const MR_ConstString mercury__hash_table__hash_table__field_names_hash_table_2_0[4];

#line 109 "hash_table.c"
static const MR_DuFunctorDesc mercury__hash_table__hash_table__du_functor_desc_hash_table_2_0;

#line 112 "hash_table.c"
static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_table_2_0[1];

#line 115 "hash_table.c"
static const MR_DuPtagLayout mercury__hash_table__hash_table__du_ptag_ordered_hash_table_2[1];

#line 118 "hash_table.c"
static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_name_ordered_hash_table_2[1];

#line 121 "hash_table.c"
static const MR_Integer mercury__hash_table__hash_table__functor_number_map_hash_table_2[1];

#line 124 "hash_table.c"
static const MR_DuFunctorDesc mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_0;

#line 127 "hash_table.c"
static const MR_PseudoTypeInfo mercury__hash_table__hash_table__field_types_hash_table_alist_2_1[2];

#line 130 "hash_table.c"
static const MR_DuFunctorDesc mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_1;

#line 133 "hash_table.c"
static const MR_PseudoTypeInfo mercury__hash_table__hash_table__field_types_hash_table_alist_2_2[3];

#line 136 "hash_table.c"
static const MR_DuFunctorDesc mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_2;

#line 139 "hash_table.c"
static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_table_alist_2_0[1];

#line 142 "hash_table.c"
static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_table_alist_2_1[1];

#line 145 "hash_table.c"
static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_table_alist_2_2[1];

#line 148 "hash_table.c"
static const MR_DuPtagLayout mercury__hash_table__hash_table__du_ptag_ordered_hash_table_alist_2[3];

#line 151 "hash_table.c"
static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_name_ordered_hash_table_alist_2[3];

#line 154 "hash_table.c"
static const MR_Integer mercury__hash_table__hash_table__functor_number_map_hash_table_alist_2[3];

#line 157 "hash_table.c"
static MR_bool MR_CALL 
mercury__hash_table____Unify____buckets_2_0_10001(
#line 160 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 162 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 164 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_3,
#line 166 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4);

#line 169 "hash_table.c"
static void MR_CALL 
mercury__hash_table____Compare____buckets_2_0_10001(
#line 172 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 174 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 176 "hash_table.c"
  MR_Box * mercury__hash_table__wrapper_arg_3,
#line 178 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4,
#line 180 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_5);

#line 183 "hash_table.c"
static MR_bool MR_CALL 
mercury__hash_table____Unify____hash_pred_1_0_10001(
#line 186 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 188 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 190 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_3);

#line 193 "hash_table.c"
static void MR_CALL 
mercury__hash_table____Compare____hash_pred_1_0_10001(
#line 196 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 198 "hash_table.c"
  MR_Box * mercury__hash_table__wrapper_arg_2,
#line 200 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_3,
#line 202 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4);

#line 205 "hash_table.c"
static MR_bool MR_CALL 
mercury__hash_table____Unify____hash_table_2_0_10001(
#line 208 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 210 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 212 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_3,
#line 214 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4);

#line 217 "hash_table.c"
static void MR_CALL 
mercury__hash_table____Compare____hash_table_2_0_10001(
#line 220 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 222 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 224 "hash_table.c"
  MR_Box * mercury__hash_table__wrapper_arg_3,
#line 226 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4,
#line 228 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_5);

#line 231 "hash_table.c"
static MR_bool MR_CALL 
mercury__hash_table____Unify____hash_table_alist_2_0_10001(
#line 234 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 236 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 238 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_3,
#line 240 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4);

#line 243 "hash_table.c"
static void MR_CALL 
mercury__hash_table____Compare____hash_table_alist_2_0_10001(
#line 246 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 248 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 250 "hash_table.c"
  MR_Box * mercury__hash_table__wrapper_arg_3,
#line 252 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4,
#line 254 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_5);

#line 95 "array.opt"
static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 95 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 95 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 95 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 95 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 95 "array.opt"
  MR_ArrayPtr mercury__hash_table__V_8_8,
#line 95 "array.opt"
  MR_Integer mercury__hash_table__V_9_9,
#line 95 "array.opt"
  MR_Integer mercury__hash_table__V_10_10,
#line 95 "array.opt"
  MR_Box mercury__hash_table__V_12_11,
#line 95 "array.opt"
  MR_Box * mercury__hash_table__V_13_12);

#line 94 "array.opt"
static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 94 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 94 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 94 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 94 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 94 "array.opt"
  MR_ArrayPtr mercury__hash_table__V_8_8,
#line 94 "array.opt"
  MR_Integer mercury__hash_table__V_9_9,
#line 94 "array.opt"
  MR_Integer mercury__hash_table__V_10_10,
#line 94 "array.opt"
  MR_Box mercury__hash_table__V_12_11,
#line 94 "array.opt"
  MR_Box * mercury__hash_table__V_13_12);

#line 93 "array.opt"
static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 93 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 93 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 93 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 93 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 93 "array.opt"
  MR_ArrayPtr mercury__hash_table__V_8_8,
#line 93 "array.opt"
  MR_Integer mercury__hash_table__V_9_9,
#line 93 "array.opt"
  MR_Integer mercury__hash_table__V_10_10,
#line 93 "array.opt"
  MR_Box mercury__hash_table__V_12_11,
#line 93 "array.opt"
  MR_Box * mercury__hash_table__V_13_12);

#line 92 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 92 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 92 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 92 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 92 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 92 "array.opt"
  MR_ArrayPtr mercury__hash_table__V_8_8,
#line 92 "array.opt"
  MR_Integer mercury__hash_table__V_9_9,
#line 92 "array.opt"
  MR_Integer mercury__hash_table__V_10_10,
#line 92 "array.opt"
  MR_Box mercury__hash_table__V_12_11,
#line 92 "array.opt"
  MR_Box * mercury__hash_table__V_13_12);

#line 91 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 91 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 91 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 91 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 91 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 91 "array.opt"
  MR_ArrayPtr mercury__hash_table__V_8_8,
#line 91 "array.opt"
  MR_Integer mercury__hash_table__V_9_9,
#line 91 "array.opt"
  MR_Integer mercury__hash_table__V_10_10,
#line 91 "array.opt"
  MR_Box mercury__hash_table__V_12_11,
#line 91 "array.opt"
  MR_Box * mercury__hash_table__V_13_12);

#line 90 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 90 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 90 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 90 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 90 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 90 "array.opt"
  MR_ArrayPtr mercury__hash_table__V_8_8,
#line 90 "array.opt"
  MR_Integer mercury__hash_table__V_9_9,
#line 90 "array.opt"
  MR_Integer mercury__hash_table__V_10_10,
#line 90 "array.opt"
  MR_Box mercury__hash_table__V_12_11,
#line 90 "array.opt"
  MR_Box * mercury__hash_table__V_13_12);

#line 92 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 92 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 92 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 92 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 92 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 92 "array.opt"
  MR_ArrayPtr mercury__hash_table__V_8_8,
#line 92 "array.opt"
  MR_Integer mercury__hash_table__V_9_9,
#line 92 "array.opt"
  MR_Integer mercury__hash_table__V_10_10,
#line 92 "array.opt"
  MR_Box mercury__hash_table__V_12_11,
#line 92 "array.opt"
  MR_Box * mercury__hash_table__V_13_12);

#line 90 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 90 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 90 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 90 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 90 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 90 "array.opt"
  MR_ArrayPtr mercury__hash_table__V_8_8,
#line 90 "array.opt"
  MR_Integer mercury__hash_table__V_9_9,
#line 90 "array.opt"
  MR_Integer mercury__hash_table__V_10_10,
#line 90 "array.opt"
  MR_Box mercury__hash_table__V_12_11,
#line 90 "array.opt"
  MR_Box * mercury__hash_table__V_13_12);

#line 90 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__array_0(
#line 90 "array.opt"
  MR_Word mercury__hash_table__V_27_27,
#line 90 "array.opt"
  MR_Word mercury__hash_table__V_28_28,
#line 90 "array.opt"
  MR_ArrayPtr mercury__hash_table__V_8_8,
#line 90 "array.opt"
  MR_Integer mercury__hash_table__V_9_9,
#line 90 "array.opt"
  MR_Integer mercury__hash_table__V_10_10,
#line 90 "array.opt"
  MR_Word mercury__hash_table__V_12_11,
#line 90 "array.opt"
  MR_Word * mercury__hash_table__V_13_12);

#line 87 "array.opt"
static MR_Integer MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_53_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
#line 87 "array.opt"
  MR_Word mercury__hash_table__V_19_19,
#line 87 "array.opt"
  MR_ArrayPtr mercury__hash_table__V_8_8,
#line 87 "array.opt"
  MR_Integer mercury__hash_table__V_9_9,
#line 87 "array.opt"
  MR_Integer mercury__hash_table__V_10_10,
#line 87 "array.opt"
  MR_Integer mercury__hash_table__V_11_11);

#line 64 "array.int"
static MR_Integer MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
#line 64 "array.int"
  MR_Word mercury__hash_table__V_13_13,
#line 64 "array.int"
  MR_ArrayPtr mercury__hash_table__V_6_6,
#line 64 "array.int"
  MR_Integer mercury__hash_table__V_7_7);

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 601 "hash_table.m"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0(
#line 601 "hash_table.m"
  MR_Word mercury__hash_table__AL_6,
#line 601 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_7,
#line 601 "hash_table.m"
  MR_Integer mercury__hash_table__NumBuckets_8,
#line 601 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__STATE_VARIABLE_Buckets_0_13,
#line 601 "hash_table.m"
  MR_ArrayPtr * mercury__hash_table__STATE_VARIABLE_Buckets_14);

#line 588 "hash_table.m"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_p_0(
#line 588 "hash_table.m"
  MR_Integer mercury__hash_table__I_7,
#line 588 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__OldBuckets_8,
#line 588 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_9,
#line 588 "hash_table.m"
  MR_Integer mercury__hash_table__NumBuckets_10,
#line 588 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__STATE_VARIABLE_Buckets_0_13,
#line 588 "hash_table.m"
  MR_ArrayPtr * mercury__hash_table__STATE_VARIABLE_Buckets_14);

#line 506 "hash_table.m"
static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(
#line 506 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_12,
#line 506 "hash_table.m"
  MR_Word mercury__hash_table__AL0_4,
#line 506 "hash_table.m"
  MR_Box mercury__hash_table__K_5,
#line 506 "hash_table.m"
  MR_Word * mercury__hash_table__AL_6);

#line 386 "hash_table.m"
static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(
#line 386 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_14,
#line 386 "hash_table.m"
  MR_Word mercury__hash_table__AL0_5,
#line 386 "hash_table.m"
  MR_Box mercury__hash_table__K_6,
#line 386 "hash_table.m"
  MR_Box mercury__hash_table__V_7,
#line 386 "hash_table.m"
  MR_Word * mercury__hash_table__AL_8);

#line 127 "list.int"
static void MR_CALL 
mercury__hash_table__foldl__ho13_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__hash_table__HeadVar__2_2,
#line 127 "list.int"
  MR_Integer mercury__hash_table__HeadVar__3_3,
#line 127 "list.int"
  MR_Integer * mercury__hash_table__HeadVar__4_4);

#line 575 "hash_table.m"
static MR_Word MR_CALL 
mercury__hash_table__expand_4_f_0(
#line 575 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_20,
#line 575 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_21,
#line 575 "hash_table.m"
  MR_Integer mercury__hash_table__NumOccupants_6,
#line 575 "hash_table.m"
  MR_Integer mercury__hash_table__MaxOccupants0_7,
#line 575 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_8,
#line 575 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__Buckets0_9);


static /* final */ const MR_Box mercury__hash_table_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__hash_table_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__hash_table_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__hash_table_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__hash_table_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__hash_table_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__hash_table_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__hash_table_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__hash_table_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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



#line 637 "hash_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__hash_table__hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2 = {
  &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 646 "hash_table.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__hash_table__array__pti_array_1__pseudo_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &mercury__hash_table__hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
  }
};

#line 654 "hash_table.c"
const MR_TypeCtorInfo_Struct mercury__hash_table__hash_table__type_ctor_info_buckets_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__hash_table____Unify____buckets_2_0_10001)),
  ((MR_Box) (mercury__hash_table____Compare____buckets_2_0_10001)),
  (MR_String) "hash_table",
  (MR_String) "buckets",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__hash_table__array__pti_array_1__pseudo_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 671 "hash_table.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 681 "hash_table.c"
const MR_TypeCtorInfo_Struct mercury__hash_table__hash_table__type_ctor_info_hash_pred_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__hash_table____Unify____hash_pred_1_0_10001)),
  ((MR_Box) (mercury__hash_table____Compare____hash_pred_1_0_10001)),
  (MR_String) "hash_table",
  (MR_String) "hash_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 698 "hash_table.c"
static const MR_PseudoTypeInfo mercury__hash_table__hash_table__field_types_hash_table_2_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__hash_table__array__pti_array_1__pseudo_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
};

#line 706 "hash_table.c"
static const MR_ConstString mercury__hash_table__hash_table__field_names_hash_table_2_0[4] = {
  (MR_String) "num_occupants",
  (MR_String) "max_occupants",
  (MR_String) "hash_pred",
  (MR_String) "buckets"
};

#line 714 "hash_table.c"
static const MR_DuFunctorDesc mercury__hash_table__hash_table__du_functor_desc_hash_table_2_0 = {
  (MR_String) "ht",
  (MR_Integer) 4,
  (MR_Integer) 12,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__hash_table__hash_table__field_types_hash_table_2_0,
  mercury__hash_table__hash_table__field_names_hash_table_2_0,
  NULL,
  NULL
};

#line 729 "hash_table.c"
static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_table_2_0[1] = {
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_2_0
};

#line 734 "hash_table.c"
static const MR_DuPtagLayout mercury__hash_table__hash_table__du_ptag_ordered_hash_table_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__hash_table__hash_table__du_stag_ordered_hash_table_2_0
  }
};

#line 743 "hash_table.c"
static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_name_ordered_hash_table_2[1] = {
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_2_0
};

#line 748 "hash_table.c"
static const MR_Integer mercury__hash_table__hash_table__functor_number_map_hash_table_2[1] = {
  (MR_Integer) 0
};

#line 753 "hash_table.c"
const MR_TypeCtorInfo_Struct mercury__hash_table__hash_table__type_ctor_info_hash_table_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__hash_table____Unify____hash_table_2_0_10001)),
  ((MR_Box) (mercury__hash_table____Compare____hash_table_2_0_10001)),
  (MR_String) "hash_table",
  (MR_String) "hash_table",
  {     mercury__hash_table__hash_table__du_name_ordered_hash_table_2 },
  {     mercury__hash_table__hash_table__du_ptag_ordered_hash_table_2 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__hash_table__hash_table__functor_number_map_hash_table_2
};

#line 770 "hash_table.c"
static const MR_DuFunctorDesc mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_0 = {
  (MR_String) "ht_nil",
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

#line 785 "hash_table.c"
static const MR_PseudoTypeInfo mercury__hash_table__hash_table__field_types_hash_table_alist_2_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 791 "hash_table.c"
static const MR_DuFunctorDesc mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_1 = {
  (MR_String) "ht_single",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__hash_table__hash_table__field_types_hash_table_alist_2_1,
  NULL,
  NULL,
  NULL
};

#line 806 "hash_table.c"
static const MR_PseudoTypeInfo mercury__hash_table__hash_table__field_types_hash_table_alist_2_2[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &mercury__hash_table__hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
};

#line 813 "hash_table.c"
static const MR_DuFunctorDesc mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_2 = {
  (MR_String) "ht_cons",
  (MR_Integer) 3,
  (MR_Integer) 7,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__hash_table__hash_table__field_types_hash_table_alist_2_2,
  NULL,
  NULL,
  NULL
};

#line 828 "hash_table.c"
static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_table_alist_2_0[1] = {
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_0
};

#line 833 "hash_table.c"
static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_table_alist_2_1[1] = {
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_1
};

#line 838 "hash_table.c"
static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_stag_ordered_hash_table_alist_2_2[1] = {
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_2
};

#line 843 "hash_table.c"
static const MR_DuPtagLayout mercury__hash_table__hash_table__du_ptag_ordered_hash_table_alist_2[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__hash_table__hash_table__du_stag_ordered_hash_table_alist_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__hash_table__hash_table__du_stag_ordered_hash_table_alist_2_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__hash_table__hash_table__du_stag_ordered_hash_table_alist_2_2
  }
};

#line 862 "hash_table.c"
static const MR_DuFunctorDescPtr mercury__hash_table__hash_table__du_name_ordered_hash_table_alist_2[3] = {
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_2,
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_0,
  &mercury__hash_table__hash_table__du_functor_desc_hash_table_alist_2_1
};

#line 869 "hash_table.c"
static const MR_Integer mercury__hash_table__hash_table__functor_number_map_hash_table_alist_2[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 876 "hash_table.c"
const MR_TypeCtorInfo_Struct mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__hash_table____Unify____hash_table_alist_2_0_10001)),
  ((MR_Box) (mercury__hash_table____Compare____hash_table_alist_2_0_10001)),
  (MR_String) "hash_table",
  (MR_String) "hash_table_alist",
  {     mercury__hash_table__hash_table__du_name_ordered_hash_table_alist_2 },
  {     mercury__hash_table__hash_table__du_ptag_ordered_hash_table_alist_2 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__hash_table__hash_table__functor_number_map_hash_table_alist_2
};

#line 893 "hash_table.c"
static MR_bool MR_CALL 
mercury__hash_table____Unify____buckets_2_0_10001(
#line 896 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 898 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 900 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_3,
#line 902 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4)
#line 904 "hash_table.c"
{
#line 906 "hash_table.c"
  {
#line 908 "hash_table.c"
    MR_bool mercury__hash_table__succeeded;

#line 911 "hash_table.c"
    {
#line 913 "hash_table.c"
      mercury__hash_table__succeeded = mercury__hash_table____Unify____buckets_2_0(((MR_Word) mercury__hash_table__wrapper_arg_1), ((MR_Word) mercury__hash_table__wrapper_arg_2), ((MR_ArrayPtr) mercury__hash_table__wrapper_arg_3), ((MR_ArrayPtr) mercury__hash_table__wrapper_arg_4));
    }
#line 916 "hash_table.c"
    return mercury__hash_table__succeeded;
#line 918 "hash_table.c"
  }
#line 920 "hash_table.c"
}

#line 923 "hash_table.c"
static void MR_CALL 
mercury__hash_table____Compare____buckets_2_0_10001(
#line 926 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 928 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 930 "hash_table.c"
  MR_Box * mercury__hash_table__wrapper_arg_3,
#line 932 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4,
#line 934 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_5)
#line 936 "hash_table.c"
{
#line 938 "hash_table.c"
  {
#line 940 "hash_table.c"
    MR_Word mercury__hash_table__conv0_HeadVar__1_1;

#line 943 "hash_table.c"
    {
#line 945 "hash_table.c"
      mercury__hash_table____Compare____buckets_2_0(((MR_Word) mercury__hash_table__wrapper_arg_1), ((MR_Word) mercury__hash_table__wrapper_arg_2), &mercury__hash_table__conv0_HeadVar__1_1, ((MR_ArrayPtr) mercury__hash_table__wrapper_arg_4), ((MR_ArrayPtr) mercury__hash_table__wrapper_arg_5));
    }
#line 948 "hash_table.c"
    *mercury__hash_table__wrapper_arg_3 = ((MR_Box) (mercury__hash_table__conv0_HeadVar__1_1));
#line 950 "hash_table.c"
  }
#line 952 "hash_table.c"
}

#line 955 "hash_table.c"
static MR_bool MR_CALL 
mercury__hash_table____Unify____hash_pred_1_0_10001(
#line 958 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 960 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 962 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_3)
#line 964 "hash_table.c"
{
#line 966 "hash_table.c"
  {
#line 968 "hash_table.c"
    MR_bool mercury__hash_table__succeeded;

#line 971 "hash_table.c"
    {
#line 973 "hash_table.c"
      mercury__hash_table__succeeded = mercury__hash_table____Unify____hash_pred_1_0(((MR_Word) mercury__hash_table__wrapper_arg_1), ((MR_Word) mercury__hash_table__wrapper_arg_2), ((MR_Word) mercury__hash_table__wrapper_arg_3));
    }
#line 976 "hash_table.c"
    return mercury__hash_table__succeeded;
#line 978 "hash_table.c"
  }
#line 980 "hash_table.c"
}

#line 983 "hash_table.c"
static void MR_CALL 
mercury__hash_table____Compare____hash_pred_1_0_10001(
#line 986 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 988 "hash_table.c"
  MR_Box * mercury__hash_table__wrapper_arg_2,
#line 990 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_3,
#line 992 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4)
#line 994 "hash_table.c"
{
#line 996 "hash_table.c"
  {
#line 998 "hash_table.c"
    MR_Word mercury__hash_table__conv0_HeadVar__1_1;

#line 1001 "hash_table.c"
    {
#line 1003 "hash_table.c"
      mercury__hash_table____Compare____hash_pred_1_0(((MR_Word) mercury__hash_table__wrapper_arg_1), &mercury__hash_table__conv0_HeadVar__1_1, ((MR_Word) mercury__hash_table__wrapper_arg_3), ((MR_Word) mercury__hash_table__wrapper_arg_4));
    }
#line 1006 "hash_table.c"
    *mercury__hash_table__wrapper_arg_2 = ((MR_Box) (mercury__hash_table__conv0_HeadVar__1_1));
#line 1008 "hash_table.c"
  }
#line 1010 "hash_table.c"
}

#line 1013 "hash_table.c"
static MR_bool MR_CALL 
mercury__hash_table____Unify____hash_table_2_0_10001(
#line 1016 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 1018 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 1020 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_3,
#line 1022 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4)
#line 1024 "hash_table.c"
{
#line 1026 "hash_table.c"
  {
#line 1028 "hash_table.c"
    MR_bool mercury__hash_table__succeeded;

#line 1031 "hash_table.c"
    {
#line 1033 "hash_table.c"
      mercury__hash_table__succeeded = mercury__hash_table____Unify____hash_table_2_0(((MR_Word) mercury__hash_table__wrapper_arg_1), ((MR_Word) mercury__hash_table__wrapper_arg_2), ((MR_Word) mercury__hash_table__wrapper_arg_3), ((MR_Word) mercury__hash_table__wrapper_arg_4));
    }
#line 1036 "hash_table.c"
    return mercury__hash_table__succeeded;
#line 1038 "hash_table.c"
  }
#line 1040 "hash_table.c"
}

#line 1043 "hash_table.c"
static void MR_CALL 
mercury__hash_table____Compare____hash_table_2_0_10001(
#line 1046 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 1048 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 1050 "hash_table.c"
  MR_Box * mercury__hash_table__wrapper_arg_3,
#line 1052 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4,
#line 1054 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_5)
#line 1056 "hash_table.c"
{
#line 1058 "hash_table.c"
  {
#line 1060 "hash_table.c"
    MR_Word mercury__hash_table__conv0_HeadVar__1_1;

#line 1063 "hash_table.c"
    {
#line 1065 "hash_table.c"
      mercury__hash_table____Compare____hash_table_2_0(((MR_Word) mercury__hash_table__wrapper_arg_1), ((MR_Word) mercury__hash_table__wrapper_arg_2), &mercury__hash_table__conv0_HeadVar__1_1, ((MR_Word) mercury__hash_table__wrapper_arg_4), ((MR_Word) mercury__hash_table__wrapper_arg_5));
    }
#line 1068 "hash_table.c"
    *mercury__hash_table__wrapper_arg_3 = ((MR_Box) (mercury__hash_table__conv0_HeadVar__1_1));
#line 1070 "hash_table.c"
  }
#line 1072 "hash_table.c"
}

#line 1075 "hash_table.c"
static MR_bool MR_CALL 
mercury__hash_table____Unify____hash_table_alist_2_0_10001(
#line 1078 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 1080 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 1082 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_3,
#line 1084 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4)
#line 1086 "hash_table.c"
{
#line 1088 "hash_table.c"
  {
#line 1090 "hash_table.c"
    MR_bool mercury__hash_table__succeeded;

#line 1093 "hash_table.c"
    {
#line 1095 "hash_table.c"
      mercury__hash_table__succeeded = mercury__hash_table____Unify____hash_table_alist_2_0(((MR_Word) mercury__hash_table__wrapper_arg_1), ((MR_Word) mercury__hash_table__wrapper_arg_2), ((MR_Word) mercury__hash_table__wrapper_arg_3), ((MR_Word) mercury__hash_table__wrapper_arg_4));
    }
#line 1098 "hash_table.c"
    return mercury__hash_table__succeeded;
#line 1100 "hash_table.c"
  }
#line 1102 "hash_table.c"
}

#line 1105 "hash_table.c"
static void MR_CALL 
mercury__hash_table____Compare____hash_table_alist_2_0_10001(
#line 1108 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_1,
#line 1110 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_2,
#line 1112 "hash_table.c"
  MR_Box * mercury__hash_table__wrapper_arg_3,
#line 1114 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_4,
#line 1116 "hash_table.c"
  MR_Box mercury__hash_table__wrapper_arg_5)
#line 1118 "hash_table.c"
{
#line 1120 "hash_table.c"
  {
#line 1122 "hash_table.c"
    MR_Word mercury__hash_table__conv0_HeadVar__1_1;

#line 1125 "hash_table.c"
    {
#line 1127 "hash_table.c"
      mercury__hash_table____Compare____hash_table_alist_2_0(((MR_Word) mercury__hash_table__wrapper_arg_1), ((MR_Word) mercury__hash_table__wrapper_arg_2), &mercury__hash_table__conv0_HeadVar__1_1, ((MR_Word) mercury__hash_table__wrapper_arg_4), ((MR_Word) mercury__hash_table__wrapper_arg_5));
    }
#line 1130 "hash_table.c"
    *mercury__hash_table__wrapper_arg_3 = ((MR_Box) (mercury__hash_table__conv0_HeadVar__1_1));
#line 1132 "hash_table.c"
  }
#line 1134 "hash_table.c"
}

#line 95 "array.opt"
static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 95 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 95 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 95 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 95 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 95 "array.opt"
  MR_ArrayPtr mercury__hash_table__V_8_8,
#line 95 "array.opt"
  MR_Integer mercury__hash_table__V_9_9,
#line 95 "array.opt"
  MR_Integer mercury__hash_table__V_10_10,
#line 95 "array.opt"
  MR_Box mercury__hash_table__V_12_11,
#line 95 "array.opt"
  MR_Box * mercury__hash_table__V_13_12)
#line 95 "array.opt"
{
#line 465 "array.opt"
  while (MR_TRUE)
#line 465 "array.opt"
    {
#line 465 "array.opt"
      /* tailcall optimized into a loop */
#line 465 "array.opt"
      {
#line 465 "array.opt"
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_10_10 < mercury__hash_table__V_9_9);

#line 465 "array.opt"
        if (mercury__hash_table__succeeded)
#line 464 "array.opt"
          {
#line 464 "array.opt"
            *mercury__hash_table__V_13_12 = mercury__hash_table__V_12_11;
#line 464 "array.opt"
            mercury__hash_table__succeeded = MR_TRUE;
#line 464 "array.opt"
          }
#line 465 "array.opt"
        else
#line 466 "array.opt"
          {
#line 466 "array.opt"
            MR_Word mercury__hash_table__V_14_13;
#line 466 "array.opt"
            MR_Box mercury__hash_table__V_15_14;
#line 466 "array.opt"
            MR_Integer mercury__hash_table__V_16_15;
#line 466 "array.opt"
            MR_Integer mercury__hash_table__V_18_16;
#line 942 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
#line 942 "array.opt"
            MR_Box mercury__hash_table__conv0_Item;

#line 942 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_8_8 , Array);
	Index =  mercury__hash_table__V_9_9 ;
		{
#line 942 "array.opt"

    Item = Array->elements[Index];

#line 1213 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
#line 942 "array.opt"
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
#line 942 "array.opt"
}
#line 467 "array.opt"
            {
#line 467 "array.opt"
              mercury__hash_table__succeeded = mercury__hash_table__fold_p_4_p_5(mercury__hash_table__V_22_22, mercury__hash_table__V_23_23, mercury__hash_table__V_24_24, mercury__hash_table__V_25_25, mercury__hash_table__V_14_13, mercury__hash_table__V_12_11, &mercury__hash_table__V_15_14);
            }
#line 466 "array.opt"
            if (mercury__hash_table__succeeded)
#line 466 "array.opt"
              {
#line 469 "array.opt"
                mercury__hash_table__V_18_16 = (MR_Integer) 1;
#line 468 "array.opt"
                mercury__hash_table__V_16_15 = (mercury__hash_table__V_9_9 + mercury__hash_table__V_18_16);
#line 470 "array.opt"
                /* direct tailcall eliminated */
#line 470 "array.opt"
                {
#line 470 "array.opt"
                  MR_Integer mercury__hash_table__V_9__tmp_copy_9 = mercury__hash_table__V_16_15;
#line 470 "array.opt"
                  MR_Box mercury__hash_table__V_12__tmp_copy_11 = mercury__hash_table__V_15_14;

#line 470 "array.opt"
                  mercury__hash_table__V_12_11 = mercury__hash_table__V_12__tmp_copy_11;
#line 470 "array.opt"
                  mercury__hash_table__V_9_9 = mercury__hash_table__V_9__tmp_copy_9;
#line 470 "array.opt"
                }
#line 470 "array.opt"
                continue;
#line 466 "array.opt"
              }
#line 466 "array.opt"
          }
#line 465 "array.opt"
        return mercury__hash_table__succeeded;
#line 465 "array.opt"
      }
#line 465 "array.opt"
      break;
#line 465 "array.opt"
    }
#line 95 "array.opt"
}

#line 94 "array.opt"
static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 94 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 94 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 94 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 94 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 94 "array.opt"
  MR_ArrayPtr mercury__hash_table__V_8_8,
#line 94 "array.opt"
  MR_Integer mercury__hash_table__V_9_9,
#line 94 "array.opt"
  MR_Integer mercury__hash_table__V_10_10,
#line 94 "array.opt"
  MR_Box mercury__hash_table__V_12_11,
#line 94 "array.opt"
  MR_Box * mercury__hash_table__V_13_12)
#line 94 "array.opt"
{
#line 465 "array.opt"
  while (MR_TRUE)
#line 465 "array.opt"
    {
#line 465 "array.opt"
      /* tailcall optimized into a loop */
#line 465 "array.opt"
      {
#line 465 "array.opt"
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_10_10 < mercury__hash_table__V_9_9);

#line 465 "array.opt"
        if (mercury__hash_table__succeeded)
#line 464 "array.opt"
          {
#line 464 "array.opt"
            *mercury__hash_table__V_13_12 = mercury__hash_table__V_12_11;
#line 464 "array.opt"
            mercury__hash_table__succeeded = MR_TRUE;
#line 464 "array.opt"
          }
#line 465 "array.opt"
        else
#line 466 "array.opt"
          {
#line 466 "array.opt"
            MR_Word mercury__hash_table__V_14_13;
#line 466 "array.opt"
            MR_Box mercury__hash_table__V_15_14;
#line 466 "array.opt"
            MR_Integer mercury__hash_table__V_16_15;
#line 466 "array.opt"
            MR_Integer mercury__hash_table__V_18_16;
#line 942 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
#line 942 "array.opt"
            MR_Box mercury__hash_table__conv0_Item;

#line 942 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_8_8 , Array);
	Index =  mercury__hash_table__V_9_9 ;
		{
#line 942 "array.opt"

    Item = Array->elements[Index];

#line 1343 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
#line 942 "array.opt"
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
#line 942 "array.opt"
}
#line 467 "array.opt"
            {
#line 467 "array.opt"
              mercury__hash_table__succeeded = mercury__hash_table__fold_p_4_p_4(mercury__hash_table__V_22_22, mercury__hash_table__V_23_23, mercury__hash_table__V_24_24, mercury__hash_table__V_25_25, mercury__hash_table__V_14_13, mercury__hash_table__V_12_11, &mercury__hash_table__V_15_14);
            }
#line 466 "array.opt"
            if (mercury__hash_table__succeeded)
#line 466 "array.opt"
              {
#line 469 "array.opt"
                mercury__hash_table__V_18_16 = (MR_Integer) 1;
#line 468 "array.opt"
                mercury__hash_table__V_16_15 = (mercury__hash_table__V_9_9 + mercury__hash_table__V_18_16);
#line 470 "array.opt"
                /* direct tailcall eliminated */
#line 470 "array.opt"
                {
#line 470 "array.opt"
                  MR_Integer mercury__hash_table__V_9__tmp_copy_9 = mercury__hash_table__V_16_15;
#line 470 "array.opt"
                  MR_Box mercury__hash_table__V_12__tmp_copy_11 = mercury__hash_table__V_15_14;

#line 470 "array.opt"
                  mercury__hash_table__V_12_11 = mercury__hash_table__V_12__tmp_copy_11;
#line 470 "array.opt"
                  mercury__hash_table__V_9_9 = mercury__hash_table__V_9__tmp_copy_9;
#line 470 "array.opt"
                }
#line 470 "array.opt"
                continue;
#line 466 "array.opt"
              }
#line 466 "array.opt"
          }
#line 465 "array.opt"
        return mercury__hash_table__succeeded;
#line 465 "array.opt"
      }
#line 465 "array.opt"
      break;
#line 465 "array.opt"
    }
#line 94 "array.opt"
}

#line 93 "array.opt"
static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 93 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 93 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 93 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 93 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 93 "array.opt"
  MR_ArrayPtr mercury__hash_table__V_8_8,
#line 93 "array.opt"
  MR_Integer mercury__hash_table__V_9_9,
#line 93 "array.opt"
  MR_Integer mercury__hash_table__V_10_10,
#line 93 "array.opt"
  MR_Box mercury__hash_table__V_12_11,
#line 93 "array.opt"
  MR_Box * mercury__hash_table__V_13_12)
#line 93 "array.opt"
{
#line 465 "array.opt"
  while (MR_TRUE)
#line 465 "array.opt"
    {
#line 465 "array.opt"
      /* tailcall optimized into a loop */
#line 465 "array.opt"
      {
#line 465 "array.opt"
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_10_10 < mercury__hash_table__V_9_9);

#line 465 "array.opt"
        if (mercury__hash_table__succeeded)
#line 464 "array.opt"
          {
#line 464 "array.opt"
            *mercury__hash_table__V_13_12 = mercury__hash_table__V_12_11;
#line 464 "array.opt"
            mercury__hash_table__succeeded = MR_TRUE;
#line 464 "array.opt"
          }
#line 465 "array.opt"
        else
#line 466 "array.opt"
          {
#line 466 "array.opt"
            MR_Word mercury__hash_table__V_14_13;
#line 466 "array.opt"
            MR_Box mercury__hash_table__V_15_14;
#line 466 "array.opt"
            MR_Integer mercury__hash_table__V_16_15;
#line 466 "array.opt"
            MR_Integer mercury__hash_table__V_18_16;
#line 942 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
#line 942 "array.opt"
            MR_Box mercury__hash_table__conv0_Item;

#line 942 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_8_8 , Array);
	Index =  mercury__hash_table__V_9_9 ;
		{
#line 942 "array.opt"

    Item = Array->elements[Index];

#line 1473 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
#line 942 "array.opt"
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
#line 942 "array.opt"
}
#line 467 "array.opt"
            {
#line 467 "array.opt"
              mercury__hash_table__succeeded = mercury__hash_table__fold_p_4_p_3(mercury__hash_table__V_22_22, mercury__hash_table__V_23_23, mercury__hash_table__V_24_24, mercury__hash_table__V_25_25, mercury__hash_table__V_14_13, mercury__hash_table__V_12_11, &mercury__hash_table__V_15_14);
            }
#line 466 "array.opt"
            if (mercury__hash_table__succeeded)
#line 466 "array.opt"
              {
#line 469 "array.opt"
                mercury__hash_table__V_18_16 = (MR_Integer) 1;
#line 468 "array.opt"
                mercury__hash_table__V_16_15 = (mercury__hash_table__V_9_9 + mercury__hash_table__V_18_16);
#line 470 "array.opt"
                /* direct tailcall eliminated */
#line 470 "array.opt"
                {
#line 470 "array.opt"
                  MR_Integer mercury__hash_table__V_9__tmp_copy_9 = mercury__hash_table__V_16_15;
#line 470 "array.opt"
                  MR_Box mercury__hash_table__V_12__tmp_copy_11 = mercury__hash_table__V_15_14;

#line 470 "array.opt"
                  mercury__hash_table__V_12_11 = mercury__hash_table__V_12__tmp_copy_11;
#line 470 "array.opt"
                  mercury__hash_table__V_9_9 = mercury__hash_table__V_9__tmp_copy_9;
#line 470 "array.opt"
                }
#line 470 "array.opt"
                continue;
#line 466 "array.opt"
              }
#line 466 "array.opt"
          }
#line 465 "array.opt"
        return mercury__hash_table__succeeded;
#line 465 "array.opt"
      }
#line 465 "array.opt"
      break;
#line 465 "array.opt"
    }
#line 93 "array.opt"
}

#line 92 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 92 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 92 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 92 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 92 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 92 "array.opt"
  MR_ArrayPtr mercury__hash_table__V_8_8,
#line 92 "array.opt"
  MR_Integer mercury__hash_table__V_9_9,
#line 92 "array.opt"
  MR_Integer mercury__hash_table__V_10_10,
#line 92 "array.opt"
  MR_Box mercury__hash_table__V_12_11,
#line 92 "array.opt"
  MR_Box * mercury__hash_table__V_13_12)
#line 92 "array.opt"
{
#line 465 "array.opt"
  while (MR_TRUE)
#line 465 "array.opt"
    {
#line 465 "array.opt"
      /* tailcall optimized into a loop */
#line 465 "array.opt"
      {
#line 465 "array.opt"
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_10_10 < mercury__hash_table__V_9_9);

#line 465 "array.opt"
        if (mercury__hash_table__succeeded)
#line 464 "array.opt"
          *mercury__hash_table__V_13_12 = mercury__hash_table__V_12_11;
#line 465 "array.opt"
        else
#line 466 "array.opt"
          {
#line 466 "array.opt"
            MR_Word mercury__hash_table__V_14_13;
#line 466 "array.opt"
            MR_Box mercury__hash_table__V_15_14;
#line 466 "array.opt"
            MR_Integer mercury__hash_table__V_16_15;
#line 942 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
#line 942 "array.opt"
            MR_Box mercury__hash_table__conv0_Item;

#line 942 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_8_8 , Array);
	Index =  mercury__hash_table__V_9_9 ;
		{
#line 942 "array.opt"

    Item = Array->elements[Index];

#line 1595 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
#line 942 "array.opt"
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
#line 942 "array.opt"
}
#line 467 "array.opt"
            {
#line 467 "array.opt"
              mercury__hash_table__fold_p_4_p_2(mercury__hash_table__V_22_22, mercury__hash_table__V_23_23, mercury__hash_table__V_24_24, mercury__hash_table__V_25_25, mercury__hash_table__V_14_13, mercury__hash_table__V_12_11, &mercury__hash_table__V_15_14);
            }
#line 468 "array.opt"
            mercury__hash_table__V_16_15 = (mercury__hash_table__V_9_9 + (MR_Integer) 1);
#line 470 "array.opt"
            /* direct tailcall eliminated */
#line 470 "array.opt"
            {
#line 470 "array.opt"
              MR_Integer mercury__hash_table__V_9__tmp_copy_9 = mercury__hash_table__V_16_15;
#line 470 "array.opt"
              MR_Box mercury__hash_table__V_12__tmp_copy_11 = mercury__hash_table__V_15_14;

#line 470 "array.opt"
              mercury__hash_table__V_12_11 = mercury__hash_table__V_12__tmp_copy_11;
#line 470 "array.opt"
              mercury__hash_table__V_9_9 = mercury__hash_table__V_9__tmp_copy_9;
#line 470 "array.opt"
            }
#line 470 "array.opt"
            continue;
#line 466 "array.opt"
          }
#line 465 "array.opt"
      }
#line 465 "array.opt"
      break;
#line 465 "array.opt"
    }
#line 92 "array.opt"
}

#line 91 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 91 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 91 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 91 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 91 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 91 "array.opt"
  MR_ArrayPtr mercury__hash_table__V_8_8,
#line 91 "array.opt"
  MR_Integer mercury__hash_table__V_9_9,
#line 91 "array.opt"
  MR_Integer mercury__hash_table__V_10_10,
#line 91 "array.opt"
  MR_Box mercury__hash_table__V_12_11,
#line 91 "array.opt"
  MR_Box * mercury__hash_table__V_13_12)
#line 91 "array.opt"
{
#line 465 "array.opt"
  while (MR_TRUE)
#line 465 "array.opt"
    {
#line 465 "array.opt"
      /* tailcall optimized into a loop */
#line 465 "array.opt"
      {
#line 465 "array.opt"
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_10_10 < mercury__hash_table__V_9_9);

#line 465 "array.opt"
        if (mercury__hash_table__succeeded)
#line 464 "array.opt"
          *mercury__hash_table__V_13_12 = mercury__hash_table__V_12_11;
#line 465 "array.opt"
        else
#line 466 "array.opt"
          {
#line 466 "array.opt"
            MR_Word mercury__hash_table__V_14_13;
#line 466 "array.opt"
            MR_Box mercury__hash_table__V_15_14;
#line 466 "array.opt"
            MR_Integer mercury__hash_table__V_16_15;
#line 942 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
#line 942 "array.opt"
            MR_Box mercury__hash_table__conv0_Item;

#line 942 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_8_8 , Array);
	Index =  mercury__hash_table__V_9_9 ;
		{
#line 942 "array.opt"

    Item = Array->elements[Index];

#line 1707 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
#line 942 "array.opt"
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
#line 942 "array.opt"
}
#line 467 "array.opt"
            {
#line 467 "array.opt"
              mercury__hash_table__fold_p_4_p_1(mercury__hash_table__V_22_22, mercury__hash_table__V_23_23, mercury__hash_table__V_24_24, mercury__hash_table__V_25_25, mercury__hash_table__V_14_13, mercury__hash_table__V_12_11, &mercury__hash_table__V_15_14);
            }
#line 468 "array.opt"
            mercury__hash_table__V_16_15 = (mercury__hash_table__V_9_9 + (MR_Integer) 1);
#line 470 "array.opt"
            /* direct tailcall eliminated */
#line 470 "array.opt"
            {
#line 470 "array.opt"
              MR_Integer mercury__hash_table__V_9__tmp_copy_9 = mercury__hash_table__V_16_15;
#line 470 "array.opt"
              MR_Box mercury__hash_table__V_12__tmp_copy_11 = mercury__hash_table__V_15_14;

#line 470 "array.opt"
              mercury__hash_table__V_12_11 = mercury__hash_table__V_12__tmp_copy_11;
#line 470 "array.opt"
              mercury__hash_table__V_9_9 = mercury__hash_table__V_9__tmp_copy_9;
#line 470 "array.opt"
            }
#line 470 "array.opt"
            continue;
#line 466 "array.opt"
          }
#line 465 "array.opt"
      }
#line 465 "array.opt"
      break;
#line 465 "array.opt"
    }
#line 91 "array.opt"
}

#line 90 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 90 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 90 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 90 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 90 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 90 "array.opt"
  MR_ArrayPtr mercury__hash_table__V_8_8,
#line 90 "array.opt"
  MR_Integer mercury__hash_table__V_9_9,
#line 90 "array.opt"
  MR_Integer mercury__hash_table__V_10_10,
#line 90 "array.opt"
  MR_Box mercury__hash_table__V_12_11,
#line 90 "array.opt"
  MR_Box * mercury__hash_table__V_13_12)
#line 90 "array.opt"
{
#line 465 "array.opt"
  while (MR_TRUE)
#line 465 "array.opt"
    {
#line 465 "array.opt"
      /* tailcall optimized into a loop */
#line 465 "array.opt"
      {
#line 465 "array.opt"
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_10_10 < mercury__hash_table__V_9_9);

#line 465 "array.opt"
        if (mercury__hash_table__succeeded)
#line 464 "array.opt"
          *mercury__hash_table__V_13_12 = mercury__hash_table__V_12_11;
#line 465 "array.opt"
        else
#line 466 "array.opt"
          {
#line 466 "array.opt"
            MR_Word mercury__hash_table__V_14_13;
#line 466 "array.opt"
            MR_Box mercury__hash_table__V_15_14;
#line 466 "array.opt"
            MR_Integer mercury__hash_table__V_16_15;
#line 942 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
#line 942 "array.opt"
            MR_Box mercury__hash_table__conv0_Item;

#line 942 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_8_8 , Array);
	Index =  mercury__hash_table__V_9_9 ;
		{
#line 942 "array.opt"

    Item = Array->elements[Index];

#line 1819 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
#line 942 "array.opt"
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
#line 942 "array.opt"
}
#line 467 "array.opt"
            {
#line 467 "array.opt"
              mercury__hash_table__fold_p_4_p_0(mercury__hash_table__V_22_22, mercury__hash_table__V_23_23, mercury__hash_table__V_24_24, mercury__hash_table__V_25_25, mercury__hash_table__V_14_13, mercury__hash_table__V_12_11, &mercury__hash_table__V_15_14);
            }
#line 468 "array.opt"
            mercury__hash_table__V_16_15 = (mercury__hash_table__V_9_9 + (MR_Integer) 1);
#line 470 "array.opt"
            /* direct tailcall eliminated */
#line 470 "array.opt"
            {
#line 470 "array.opt"
              MR_Integer mercury__hash_table__V_9__tmp_copy_9 = mercury__hash_table__V_16_15;
#line 470 "array.opt"
              MR_Box mercury__hash_table__V_12__tmp_copy_11 = mercury__hash_table__V_15_14;

#line 470 "array.opt"
              mercury__hash_table__V_12_11 = mercury__hash_table__V_12__tmp_copy_11;
#line 470 "array.opt"
              mercury__hash_table__V_9_9 = mercury__hash_table__V_9__tmp_copy_9;
#line 470 "array.opt"
            }
#line 470 "array.opt"
            continue;
#line 466 "array.opt"
          }
#line 465 "array.opt"
      }
#line 465 "array.opt"
      break;
#line 465 "array.opt"
    }
#line 90 "array.opt"
}

#line 92 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 92 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 92 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 92 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 92 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 92 "array.opt"
  MR_ArrayPtr mercury__hash_table__V_8_8,
#line 92 "array.opt"
  MR_Integer mercury__hash_table__V_9_9,
#line 92 "array.opt"
  MR_Integer mercury__hash_table__V_10_10,
#line 92 "array.opt"
  MR_Box mercury__hash_table__V_12_11,
#line 92 "array.opt"
  MR_Box * mercury__hash_table__V_13_12)
#line 92 "array.opt"
{
#line 465 "array.opt"
  while (MR_TRUE)
#line 465 "array.opt"
    {
#line 465 "array.opt"
      /* tailcall optimized into a loop */
#line 465 "array.opt"
      {
#line 465 "array.opt"
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_10_10 < mercury__hash_table__V_9_9);

#line 465 "array.opt"
        if (mercury__hash_table__succeeded)
#line 464 "array.opt"
          *mercury__hash_table__V_13_12 = mercury__hash_table__V_12_11;
#line 465 "array.opt"
        else
#line 466 "array.opt"
          {
#line 466 "array.opt"
            MR_Word mercury__hash_table__V_14_13;
#line 466 "array.opt"
            MR_Box mercury__hash_table__V_15_14;
#line 466 "array.opt"
            MR_Integer mercury__hash_table__V_16_15;
#line 942 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
#line 942 "array.opt"
            MR_Box mercury__hash_table__conv0_Item;

#line 942 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_8_8 , Array);
	Index =  mercury__hash_table__V_9_9 ;
		{
#line 942 "array.opt"

    Item = Array->elements[Index];

#line 1931 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
#line 942 "array.opt"
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
#line 942 "array.opt"
}
#line 467 "array.opt"
            {
#line 467 "array.opt"
              mercury__hash_table__fold_f_4_p_1(mercury__hash_table__V_22_22, mercury__hash_table__V_23_23, mercury__hash_table__V_24_24, mercury__hash_table__V_25_25, mercury__hash_table__V_14_13, mercury__hash_table__V_12_11, &mercury__hash_table__V_15_14);
            }
#line 468 "array.opt"
            mercury__hash_table__V_16_15 = (mercury__hash_table__V_9_9 + (MR_Integer) 1);
#line 470 "array.opt"
            /* direct tailcall eliminated */
#line 470 "array.opt"
            {
#line 470 "array.opt"
              MR_Integer mercury__hash_table__V_9__tmp_copy_9 = mercury__hash_table__V_16_15;
#line 470 "array.opt"
              MR_Box mercury__hash_table__V_12__tmp_copy_11 = mercury__hash_table__V_15_14;

#line 470 "array.opt"
              mercury__hash_table__V_12_11 = mercury__hash_table__V_12__tmp_copy_11;
#line 470 "array.opt"
              mercury__hash_table__V_9_9 = mercury__hash_table__V_9__tmp_copy_9;
#line 470 "array.opt"
            }
#line 470 "array.opt"
            continue;
#line 466 "array.opt"
          }
#line 465 "array.opt"
      }
#line 465 "array.opt"
      break;
#line 465 "array.opt"
    }
#line 92 "array.opt"
}

#line 90 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(
#line 90 "array.opt"
  MR_Word mercury__hash_table__V_22_22,
#line 90 "array.opt"
  MR_Word mercury__hash_table__V_23_23,
#line 90 "array.opt"
  MR_Word mercury__hash_table__V_24_24,
#line 90 "array.opt"
  MR_Word mercury__hash_table__V_25_25,
#line 90 "array.opt"
  MR_ArrayPtr mercury__hash_table__V_8_8,
#line 90 "array.opt"
  MR_Integer mercury__hash_table__V_9_9,
#line 90 "array.opt"
  MR_Integer mercury__hash_table__V_10_10,
#line 90 "array.opt"
  MR_Box mercury__hash_table__V_12_11,
#line 90 "array.opt"
  MR_Box * mercury__hash_table__V_13_12)
#line 90 "array.opt"
{
#line 465 "array.opt"
  while (MR_TRUE)
#line 465 "array.opt"
    {
#line 465 "array.opt"
      /* tailcall optimized into a loop */
#line 465 "array.opt"
      {
#line 465 "array.opt"
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_10_10 < mercury__hash_table__V_9_9);

#line 465 "array.opt"
        if (mercury__hash_table__succeeded)
#line 464 "array.opt"
          *mercury__hash_table__V_13_12 = mercury__hash_table__V_12_11;
#line 465 "array.opt"
        else
#line 466 "array.opt"
          {
#line 466 "array.opt"
            MR_Word mercury__hash_table__V_14_13;
#line 466 "array.opt"
            MR_Box mercury__hash_table__V_15_14;
#line 466 "array.opt"
            MR_Integer mercury__hash_table__V_16_15;
#line 942 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_29;
#line 942 "array.opt"
            MR_Box mercury__hash_table__conv0_Item;

#line 942 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_8_8 , Array);
	Index =  mercury__hash_table__V_9_9 ;
		{
#line 942 "array.opt"

    Item = Array->elements[Index];

#line 2043 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
#line 942 "array.opt"
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
#line 942 "array.opt"
}
#line 467 "array.opt"
            {
#line 467 "array.opt"
              mercury__hash_table__fold_f_4_p_0(mercury__hash_table__V_22_22, mercury__hash_table__V_23_23, mercury__hash_table__V_24_24, mercury__hash_table__V_25_25, mercury__hash_table__V_14_13, mercury__hash_table__V_12_11, &mercury__hash_table__V_15_14);
            }
#line 468 "array.opt"
            mercury__hash_table__V_16_15 = (mercury__hash_table__V_9_9 + (MR_Integer) 1);
#line 470 "array.opt"
            /* direct tailcall eliminated */
#line 470 "array.opt"
            {
#line 470 "array.opt"
              MR_Integer mercury__hash_table__V_9__tmp_copy_9 = mercury__hash_table__V_16_15;
#line 470 "array.opt"
              MR_Box mercury__hash_table__V_12__tmp_copy_11 = mercury__hash_table__V_15_14;

#line 470 "array.opt"
              mercury__hash_table__V_12_11 = mercury__hash_table__V_12__tmp_copy_11;
#line 470 "array.opt"
              mercury__hash_table__V_9_9 = mercury__hash_table__V_9__tmp_copy_9;
#line 470 "array.opt"
            }
#line 470 "array.opt"
            continue;
#line 466 "array.opt"
          }
#line 465 "array.opt"
      }
#line 465 "array.opt"
      break;
#line 465 "array.opt"
    }
#line 90 "array.opt"
}

#line 90 "array.opt"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__array_0(
#line 90 "array.opt"
  MR_Word mercury__hash_table__V_27_27,
#line 90 "array.opt"
  MR_Word mercury__hash_table__V_28_28,
#line 90 "array.opt"
  MR_ArrayPtr mercury__hash_table__V_8_8,
#line 90 "array.opt"
  MR_Integer mercury__hash_table__V_9_9,
#line 90 "array.opt"
  MR_Integer mercury__hash_table__V_10_10,
#line 90 "array.opt"
  MR_Word mercury__hash_table__V_12_11,
#line 90 "array.opt"
  MR_Word * mercury__hash_table__V_13_12)
#line 90 "array.opt"
{
#line 465 "array.opt"
  while (MR_TRUE)
#line 465 "array.opt"
    {
#line 465 "array.opt"
      /* tailcall optimized into a loop */
#line 465 "array.opt"
      {
#line 465 "array.opt"
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_10_10 < mercury__hash_table__V_9_9);

#line 465 "array.opt"
        if (mercury__hash_table__succeeded)
#line 464 "array.opt"
          *mercury__hash_table__V_13_12 = mercury__hash_table__V_12_11;
#line 465 "array.opt"
        else
#line 466 "array.opt"
          {
#line 466 "array.opt"
            MR_Word mercury__hash_table__V_14_13;
#line 466 "array.opt"
            MR_Word mercury__hash_table__V_15_14;
#line 466 "array.opt"
            MR_Integer mercury__hash_table__V_16_15;
#line 942 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_32;
#line 942 "array.opt"
            MR_Box mercury__hash_table__conv0_Item;

#line 942 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_8_8 , Array);
	Index =  mercury__hash_table__V_9_9 ;
		{
#line 942 "array.opt"

    Item = Array->elements[Index];

#line 2151 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
#line 942 "array.opt"
            mercury__hash_table__V_14_13 = ((MR_Word) mercury__hash_table__conv0_Item);
#line 942 "array.opt"
}
#line 467 "array.opt"
            {
#line 467 "array.opt"
              mercury__hash_table__to_assoc_list_2_3_p_0(mercury__hash_table__V_27_27, mercury__hash_table__V_28_28, mercury__hash_table__V_14_13, mercury__hash_table__V_12_11, &mercury__hash_table__V_15_14);
            }
#line 468 "array.opt"
            mercury__hash_table__V_16_15 = (mercury__hash_table__V_9_9 + (MR_Integer) 1);
#line 470 "array.opt"
            /* direct tailcall eliminated */
#line 470 "array.opt"
            {
#line 470 "array.opt"
              MR_Integer mercury__hash_table__V_9__tmp_copy_9 = mercury__hash_table__V_16_15;
#line 470 "array.opt"
              MR_Word mercury__hash_table__V_12__tmp_copy_11 = mercury__hash_table__V_15_14;

#line 470 "array.opt"
              mercury__hash_table__V_12_11 = mercury__hash_table__V_12__tmp_copy_11;
#line 470 "array.opt"
              mercury__hash_table__V_9_9 = mercury__hash_table__V_9__tmp_copy_9;
#line 470 "array.opt"
            }
#line 470 "array.opt"
            continue;
#line 466 "array.opt"
          }
#line 465 "array.opt"
      }
#line 465 "array.opt"
      break;
#line 465 "array.opt"
    }
#line 90 "array.opt"
}

#line 87 "array.opt"
static MR_Integer MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_53_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
#line 87 "array.opt"
  MR_Word mercury__hash_table__V_19_19,
#line 87 "array.opt"
  MR_ArrayPtr mercury__hash_table__V_8_8,
#line 87 "array.opt"
  MR_Integer mercury__hash_table__V_9_9,
#line 87 "array.opt"
  MR_Integer mercury__hash_table__V_10_10,
#line 87 "array.opt"
  MR_Integer mercury__hash_table__V_11_11)
#line 87 "array.opt"
{
#line 452 "array.opt"
  while (MR_TRUE)
#line 452 "array.opt"
    {
#line 452 "array.opt"
      /* tailcall optimized into a loop */
#line 452 "array.opt"
      {
#line 452 "array.opt"
        MR_bool mercury__hash_table__succeeded = (mercury__hash_table__V_11_11 < mercury__hash_table__V_10_10);
#line 452 "array.opt"
        MR_Integer mercury__hash_table__V_6_12;

#line 452 "array.opt"
        if (mercury__hash_table__succeeded)
#line 451 "array.opt"
          mercury__hash_table__V_6_12 = mercury__hash_table__V_9_9;
#line 452 "array.opt"
        else
#line 453 "array.opt"
          {
#line 453 "array.opt"
            MR_Integer mercury__hash_table__V_12_13;
#line 453 "array.opt"
            MR_Integer mercury__hash_table__V_14_14;
#line 453 "array.opt"
            MR_Box mercury__hash_table__V_13_15;
#line 453 "array.opt"
            MR_Integer mercury__hash_table__HX_36;
#line 453 "array.opt"
            MR_Integer mercury__hash_table__V_70_70;
#line 453 "array.opt"
            MR_Integer mercury__hash_table__V_71_71;
#line 453 "array.opt"
            MR_Integer mercury__hash_table__V_72_72;
#line 453 "array.opt"
            MR_Integer mercury__hash_table__V_73_73;
#line 942 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_for_T1_1_75;

#line 942 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_53_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_8_8 , Array);
	Index =  mercury__hash_table__V_10_10 ;
		{
#line 942 "array.opt"

    Item = Array->elements[Index];

#line 2265 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_13_15  = (MR_Box) Item;
#line 942 "array.opt"
}
#line 708 "hash_table.m"
            {
#line 708 "hash_table.m"
              mercury__hash_table__generic_hash_2_p_0(mercury__hash_table__V_19_19, mercury__hash_table__V_13_15, &mercury__hash_table__HX_36);
            }
#line 729 "hash_table.m"
            mercury__hash_table__V_70_70 = (mercury__hash_table__V_9_9 << mercury__hash_table__HX_36);
#line 64 "int.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_53_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0

	MR_Integer Bits;

		{
#line 64 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 2290 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_73_73  = Bits;
#line 64 "int.opt"
}
#line 730 "hash_table.m"
            mercury__hash_table__V_72_72 = (mercury__hash_table__V_73_73 - mercury__hash_table__HX_36);
#line 730 "hash_table.m"
            mercury__hash_table__V_71_71 = (mercury__hash_table__V_9_9 >> mercury__hash_table__V_72_72);
#line 729 "hash_table.m"
            mercury__hash_table__V_12_13 = (mercury__hash_table__V_70_70 ^ mercury__hash_table__V_71_71);
#line 456 "array.opt"
            mercury__hash_table__V_14_14 = (mercury__hash_table__V_10_10 + (MR_Integer) 1);
#line 453 "array.opt"
            /* direct tailcall eliminated */
#line 453 "array.opt"
            {
#line 453 "array.opt"
              MR_Integer mercury__hash_table__V_9__tmp_copy_9 = mercury__hash_table__V_12_13;
#line 453 "array.opt"
              MR_Integer mercury__hash_table__V_10__tmp_copy_10 = mercury__hash_table__V_14_14;

#line 453 "array.opt"
              mercury__hash_table__V_10_10 = mercury__hash_table__V_10__tmp_copy_10;
#line 453 "array.opt"
              mercury__hash_table__V_9_9 = mercury__hash_table__V_9__tmp_copy_9;
#line 453 "array.opt"
            }
#line 453 "array.opt"
            continue;
#line 453 "array.opt"
          }
#line 452 "array.opt"
        return mercury__hash_table__V_6_12;
#line 452 "array.opt"
      }
#line 452 "array.opt"
      break;
#line 452 "array.opt"
    }
#line 87 "array.opt"
}

#line 64 "array.int"
static MR_Integer MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
#line 64 "array.int"
  MR_Word mercury__hash_table__V_13_13,
#line 64 "array.int"
  MR_ArrayPtr mercury__hash_table__V_6_6,
#line 64 "array.int"
  MR_Integer mercury__hash_table__V_7_7)
#line 64 "array.int"
{
#line 575 "array.opt"
  {
#line 575 "array.opt"
    MR_bool mercury__hash_table__succeeded;
#line 575 "array.opt"
    MR_Integer mercury__hash_table__V_4_8;
#line 575 "array.opt"
    MR_Integer mercury__hash_table__V_8_9;
#line 575 "array.opt"
    MR_Integer mercury__hash_table__V_9_10;
#line 852 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_for_T1_18;
#line 839 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_for_T1_19;

#line 852 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_6_6 , Array);
		{
#line 852 "array.opt"

    /* Array not used */
    Min = 0;

#line 2375 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_8_9  = Min;
#line 852 "array.opt"
}
#line 839 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_6_6 , Array);
		{
#line 839 "array.opt"

    Max = Array->size - 1;

#line 2395 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_9_10  = Max;
#line 839 "array.opt"
}
#line 576 "array.opt"
    {
#line 576 "array.opt"
      mercury__hash_table__V_4_8 = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_53_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(mercury__hash_table__V_13_13, mercury__hash_table__V_6_6, mercury__hash_table__V_7_7, mercury__hash_table__V_8_9, mercury__hash_table__V_9_10);
    }
#line 575 "array.opt"
    return mercury__hash_table__V_4_8;
#line 575 "array.opt"
  }
#line 64 "array.int"
}

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__hash_table__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
}

#line 601 "hash_table.m"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0(
#line 601 "hash_table.m"
  MR_Word mercury__hash_table__AL_6,
#line 601 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_7,
#line 601 "hash_table.m"
  MR_Integer mercury__hash_table__NumBuckets_8,
#line 601 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__STATE_VARIABLE_Buckets_0_13,
#line 601 "hash_table.m"
  MR_ArrayPtr * mercury__hash_table__STATE_VARIABLE_Buckets_14)
#line 601 "hash_table.m"
{
#line 607 "hash_table.m"
  while (MR_TRUE)
#line 607 "hash_table.m"
    {
#line 607 "hash_table.m"
      /* tailcall optimized into a loop */
#line 607 "hash_table.m"
      {
#line 607 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 607 "hash_table.m"
#line 607 "hash_table.m"
        switch (MR_tag((MR_Word) mercury__hash_table__AL_6)) {
#line 607 "hash_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 607 "hash_table.m"
          case (MR_Integer) 0:
#line 606 "hash_table.m"
            *mercury__hash_table__STATE_VARIABLE_Buckets_14 = mercury__hash_table__STATE_VARIABLE_Buckets_0_13;
#line 607 "hash_table.m"
            break;
#line 607 "hash_table.m"
          case (MR_Integer) 1:
#line 608 "hash_table.m"
            {
#line 608 "hash_table.m"
              MR_Box mercury__hash_table__K_10 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL_6, (MR_Integer) 0));
#line 608 "hash_table.m"
              MR_Box mercury__hash_table__V_11 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL_6, (MR_Integer) 1));
#line 608 "hash_table.m"
              MR_Integer mercury__hash_table__H_54;
#line 608 "hash_table.m"
              MR_Word mercury__hash_table__AL0_55;
#line 608 "hash_table.m"
              MR_Word mercury__hash_table__AL_56;
#line 608 "hash_table.m"
              MR_Integer mercury__hash_table__Hash_69;
#line 608 "hash_table.m"
              MR_Integer mercury__hash_table__V_70_70;
#line 328 "hash_table.m"
              void MR_CALL (* mercury__hash_table__func_4)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__HashPred_7, (MR_Integer) 1)));
#line 328 "hash_table.m"
              MR_Box mercury__hash_table__conv5_Hash_69;
#line 942 "array.opt"
              MR_Word mercury__hash_table__TypeInfo_26_74;
#line 942 "array.opt"
              MR_Box mercury__hash_table__conv6_Item;
#line 946 "array.opt"
              MR_Word mercury__hash_table__TypeInfo_26_75;
#line 946 "array.opt"
              MR_ArrayPtr mercury__hash_table__conv7_Array;

#line 328 "hash_table.m"
              {
#line 328 "hash_table.m"
                mercury__hash_table__func_4(((MR_Box) mercury__hash_table__HashPred_7), mercury__hash_table__K_10, &mercury__hash_table__conv5_Hash_69);
              }
#line 328 "hash_table.m"
              mercury__hash_table__Hash_69 = ((MR_Integer) mercury__hash_table__conv5_Hash_69);
#line 330 "hash_table.m"
              mercury__hash_table__V_70_70 = (mercury__hash_table__NumBuckets_8 - (MR_Integer) 1);
#line 330 "hash_table.m"
              mercury__hash_table__H_54 = (mercury__hash_table__Hash_69 & mercury__hash_table__V_70_70);
#line 942 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__STATE_VARIABLE_Buckets_0_13 , Array);
	Index =  mercury__hash_table__H_54 ;
		{
#line 942 "array.opt"

    Item = Array->elements[Index];

#line 2525 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv6_Item  = (MR_Box) Item;
#line 942 "array.opt"
              mercury__hash_table__AL0_55 = ((MR_Word) mercury__hash_table__conv6_Item);
#line 942 "array.opt"
}
#line 625 "hash_table.m"
#line 625 "hash_table.m"
              switch (MR_tag((MR_Word) mercury__hash_table__AL0_55)) {
#line 625 "hash_table.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 625 "hash_table.m"
                case (MR_Integer) 0:
#line 624 "hash_table.m"
                  mercury__hash_table__AL_56 = mercury__hash_table__AL_6;
#line 625 "hash_table.m"
                  break;
#line 625 "hash_table.m"
                case (MR_Integer) 1:
#line 629 "hash_table.m"
                  {
#line 629 "hash_table.m"
                    mercury__hash_table__AL_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 629 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_56, 0) = mercury__hash_table__K_10;
#line 629 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_56, 1) = mercury__hash_table__V_11;
#line 629 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_56, 2) = ((MR_Box) (mercury__hash_table__AL0_55));
#line 629 "hash_table.m"
                  }
#line 625 "hash_table.m"
                  break;
#line 625 "hash_table.m"
                case (MR_Integer) 2:
#line 629 "hash_table.m"
                  {
#line 629 "hash_table.m"
                    mercury__hash_table__AL_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 629 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_56, 0) = mercury__hash_table__K_10;
#line 629 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_56, 1) = mercury__hash_table__V_11;
#line 629 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_56, 2) = ((MR_Box) (mercury__hash_table__AL0_55));
#line 629 "hash_table.m"
                  }
#line 625 "hash_table.m"
                  break;
#line 625 "hash_table.m"
              }
#line 946 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__hash_table__H_54 ;
	Item = (MR_Word) ((MR_Box) (mercury__hash_table__AL_56)) ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__STATE_VARIABLE_Buckets_0_13 , Array0);
		{
#line 946 "array.opt"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;

#line 2597 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__hash_table__conv7_Array );
#line 946 "array.opt"
              *mercury__hash_table__STATE_VARIABLE_Buckets_14 = (MR_ArrayPtr) mercury__hash_table__conv7_Array;
#line 946 "array.opt"
}
#line 608 "hash_table.m"
            }
#line 607 "hash_table.m"
            break;
#line 607 "hash_table.m"
          case (MR_Integer) 2:
#line 611 "hash_table.m"
            {
#line 611 "hash_table.m"
              MR_Word mercury__hash_table__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__AL_6, (MR_Integer) 2)));
#line 611 "hash_table.m"
              MR_ArrayPtr mercury__hash_table__STATE_VARIABLE_Buckets_15_15;
#line 611 "hash_table.m"
              MR_Box mercury__hash_table__K_18 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL_6, (MR_Integer) 0));
#line 611 "hash_table.m"
              MR_Box mercury__hash_table__V_19 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL_6, (MR_Integer) 1));
#line 611 "hash_table.m"
              MR_Integer mercury__hash_table__H_29;
#line 611 "hash_table.m"
              MR_Word mercury__hash_table__AL0_30;
#line 611 "hash_table.m"
              MR_Word mercury__hash_table__AL_31;
#line 611 "hash_table.m"
              MR_Integer mercury__hash_table__Hash_44;
#line 611 "hash_table.m"
              MR_Integer mercury__hash_table__V_45_45;
#line 328 "hash_table.m"
              void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__HashPred_7, (MR_Integer) 1)));
#line 328 "hash_table.m"
              MR_Box mercury__hash_table__conv1_Hash_44;
#line 942 "array.opt"
              MR_Word mercury__hash_table__TypeInfo_26_72;
#line 942 "array.opt"
              MR_Box mercury__hash_table__conv2_Item;
#line 946 "array.opt"
              MR_Word mercury__hash_table__TypeInfo_26_73;
#line 946 "array.opt"
              MR_ArrayPtr mercury__hash_table__conv3_Array;

#line 328 "hash_table.m"
              {
#line 328 "hash_table.m"
                mercury__hash_table__func_0(((MR_Box) mercury__hash_table__HashPred_7), mercury__hash_table__K_18, &mercury__hash_table__conv1_Hash_44);
              }
#line 328 "hash_table.m"
              mercury__hash_table__Hash_44 = ((MR_Integer) mercury__hash_table__conv1_Hash_44);
#line 330 "hash_table.m"
              mercury__hash_table__V_45_45 = (mercury__hash_table__NumBuckets_8 - (MR_Integer) 1);
#line 330 "hash_table.m"
              mercury__hash_table__H_29 = (mercury__hash_table__Hash_44 & mercury__hash_table__V_45_45);
#line 942 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__STATE_VARIABLE_Buckets_0_13 , Array);
	Index =  mercury__hash_table__H_29 ;
		{
#line 942 "array.opt"

    Item = Array->elements[Index];

#line 2671 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv2_Item  = (MR_Box) Item;
#line 942 "array.opt"
              mercury__hash_table__AL0_30 = ((MR_Word) mercury__hash_table__conv2_Item);
#line 942 "array.opt"
}
#line 625 "hash_table.m"
#line 625 "hash_table.m"
              switch (MR_tag((MR_Word) mercury__hash_table__AL0_30)) {
#line 625 "hash_table.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 625 "hash_table.m"
                case (MR_Integer) 0:
#line 624 "hash_table.m"
                  {
#line 624 "hash_table.m"
                    mercury__hash_table__AL_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 624 "hash_table.m"
                    MR_hl_field(MR_mktag(1), mercury__hash_table__AL_31, 0) = mercury__hash_table__K_18;
#line 624 "hash_table.m"
                    MR_hl_field(MR_mktag(1), mercury__hash_table__AL_31, 1) = mercury__hash_table__V_19;
#line 624 "hash_table.m"
                  }
#line 625 "hash_table.m"
                  break;
#line 625 "hash_table.m"
                case (MR_Integer) 1:
#line 629 "hash_table.m"
                  {
#line 629 "hash_table.m"
                    mercury__hash_table__AL_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 629 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_31, 0) = mercury__hash_table__K_18;
#line 629 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_31, 1) = mercury__hash_table__V_19;
#line 629 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_31, 2) = ((MR_Box) (mercury__hash_table__AL0_30));
#line 629 "hash_table.m"
                  }
#line 625 "hash_table.m"
                  break;
#line 625 "hash_table.m"
                case (MR_Integer) 2:
#line 629 "hash_table.m"
                  {
#line 629 "hash_table.m"
                    mercury__hash_table__AL_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 629 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_31, 0) = mercury__hash_table__K_18;
#line 629 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_31, 1) = mercury__hash_table__V_19;
#line 629 "hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__hash_table__AL_31, 2) = ((MR_Box) (mercury__hash_table__AL0_30));
#line 629 "hash_table.m"
                  }
#line 625 "hash_table.m"
                  break;
#line 625 "hash_table.m"
              }
#line 946 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__hash_table__H_29 ;
	Item = (MR_Word) ((MR_Box) (mercury__hash_table__AL_31)) ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__STATE_VARIABLE_Buckets_0_13 , Array0);
		{
#line 946 "array.opt"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;

#line 2751 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__hash_table__conv3_Array );
#line 946 "array.opt"
              mercury__hash_table__STATE_VARIABLE_Buckets_15_15 = (MR_ArrayPtr) mercury__hash_table__conv3_Array;
#line 946 "array.opt"
}
#line 613 "hash_table.m"
              /* direct tailcall eliminated */
#line 613 "hash_table.m"
              {
#line 613 "hash_table.m"
                MR_Word mercury__hash_table__AL__tmp_copy_6 = mercury__hash_table__T_12;
#line 613 "hash_table.m"
                MR_ArrayPtr mercury__hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13 = mercury__hash_table__STATE_VARIABLE_Buckets_15_15;

#line 613 "hash_table.m"
                mercury__hash_table__STATE_VARIABLE_Buckets_0_13 = mercury__hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13;
#line 613 "hash_table.m"
                mercury__hash_table__AL_6 = mercury__hash_table__AL__tmp_copy_6;
#line 613 "hash_table.m"
              }
#line 613 "hash_table.m"
              continue;
#line 611 "hash_table.m"
            }
#line 607 "hash_table.m"
            break;
#line 607 "hash_table.m"
        }
#line 607 "hash_table.m"
      }
#line 607 "hash_table.m"
      break;
#line 607 "hash_table.m"
    }
#line 601 "hash_table.m"
}

#line 588 "hash_table.m"
static void MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_p_0(
#line 588 "hash_table.m"
  MR_Integer mercury__hash_table__I_7,
#line 588 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__OldBuckets_8,
#line 588 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_9,
#line 588 "hash_table.m"
  MR_Integer mercury__hash_table__NumBuckets_10,
#line 588 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__STATE_VARIABLE_Buckets_0_13,
#line 588 "hash_table.m"
  MR_ArrayPtr * mercury__hash_table__STATE_VARIABLE_Buckets_14)
#line 588 "hash_table.m"
{
#line 595 "hash_table.m"
  while (MR_TRUE)
#line 595 "hash_table.m"
    {
#line 595 "hash_table.m"
      /* tailcall optimized into a loop */
#line 595 "hash_table.m"
      {
#line 595 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;
#line 593 "hash_table.m"
        MR_Integer mercury__hash_table__V_15_15;
#line 893 "array.opt"
        MR_Word mercury__hash_table__TypeInfo_23_28;

#line 893 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__OldBuckets_8 , Array);
		{
#line 893 "array.opt"

    Max = Array->size;

#line 2837 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_15_15  = Max;
#line 893 "array.opt"
}
#line 593 "hash_table.m"
        mercury__hash_table__succeeded = (mercury__hash_table__I_7 >= mercury__hash_table__V_15_15);
#line 595 "hash_table.m"
        if (mercury__hash_table__succeeded)
#line 595 "hash_table.m"
          *mercury__hash_table__STATE_VARIABLE_Buckets_14 = mercury__hash_table__STATE_VARIABLE_Buckets_0_13;
#line 595 "hash_table.m"
        else
#line 596 "hash_table.m"
          {
#line 596 "hash_table.m"
            MR_Word mercury__hash_table__AL_12;
#line 596 "hash_table.m"
            MR_ArrayPtr mercury__hash_table__STATE_VARIABLE_Buckets_16_16;
#line 596 "hash_table.m"
            MR_Integer mercury__hash_table__V_17_17;
#line 942 "array.opt"
            MR_Word mercury__hash_table__TypeInfo_25_29;
#line 942 "array.opt"
            MR_Box mercury__hash_table__conv0_Item;

#line 942 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__OldBuckets_8 , Array);
	Index =  mercury__hash_table__I_7 ;
		{
#line 942 "array.opt"

    Item = Array->elements[Index];

#line 2880 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv0_Item  = (MR_Box) Item;
#line 942 "array.opt"
            mercury__hash_table__AL_12 = ((MR_Word) mercury__hash_table__conv0_Item);
#line 942 "array.opt"
}
#line 597 "hash_table.m"
            {
#line 597 "hash_table.m"
              mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_97_108_105_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0(mercury__hash_table__AL_12, mercury__hash_table__HashPred_9, mercury__hash_table__NumBuckets_10, mercury__hash_table__STATE_VARIABLE_Buckets_0_13, &mercury__hash_table__STATE_VARIABLE_Buckets_16_16);
            }
#line 598 "hash_table.m"
            mercury__hash_table__V_17_17 = (mercury__hash_table__I_7 + (MR_Integer) 1);
#line 598 "hash_table.m"
            /* direct tailcall eliminated */
#line 598 "hash_table.m"
            {
#line 598 "hash_table.m"
              MR_Integer mercury__hash_table__I__tmp_copy_7 = mercury__hash_table__V_17_17;
#line 598 "hash_table.m"
              MR_ArrayPtr mercury__hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13 = mercury__hash_table__STATE_VARIABLE_Buckets_16_16;

#line 598 "hash_table.m"
              mercury__hash_table__STATE_VARIABLE_Buckets_0_13 = mercury__hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13;
#line 598 "hash_table.m"
              mercury__hash_table__I_7 = mercury__hash_table__I__tmp_copy_7;
#line 598 "hash_table.m"
            }
#line 598 "hash_table.m"
            continue;
#line 596 "hash_table.m"
          }
#line 595 "hash_table.m"
      }
#line 595 "hash_table.m"
      break;
#line 595 "hash_table.m"
    }
#line 588 "hash_table.m"
}

#line 506 "hash_table.m"
static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(
#line 506 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_12,
#line 506 "hash_table.m"
  MR_Word mercury__hash_table__AL0_4,
#line 506 "hash_table.m"
  MR_Box mercury__hash_table__K_5,
#line 506 "hash_table.m"
  MR_Word * mercury__hash_table__AL_6)
#line 506 "hash_table.m"
{
#line 514 "hash_table.m"
  {
#line 514 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;

#line 514 "hash_table.m"
    if (((MR_tag((MR_Word) mercury__hash_table__AL0_4)) == (MR_mktag((MR_Integer) 2))))
#line 519 "hash_table.m"
      {
#line 519 "hash_table.m"
        MR_Box mercury__hash_table__K0_8 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL0_4, (MR_Integer) 0));
#line 519 "hash_table.m"
        MR_Box mercury__hash_table__V0_9 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL0_4, (MR_Integer) 1));
#line 519 "hash_table.m"
        MR_Word mercury__hash_table__T0_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__AL0_4, (MR_Integer) 2)));

#line 520 "hash_table.m"
        {
#line 520 "hash_table.m"
          mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_12, mercury__hash_table__K0_8, mercury__hash_table__K_5);
        }
#line 522 "hash_table.m"
        if (mercury__hash_table__succeeded)
#line 521 "hash_table.m"
          {
#line 521 "hash_table.m"
            *mercury__hash_table__AL_6 = mercury__hash_table__T0_10;
#line 521 "hash_table.m"
            mercury__hash_table__succeeded = MR_TRUE;
#line 521 "hash_table.m"
          }
#line 522 "hash_table.m"
        else
#line 523 "hash_table.m"
          {
#line 523 "hash_table.m"
            MR_Word mercury__hash_table__T_11;

#line 523 "hash_table.m"
            {
#line 523 "hash_table.m"
              mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(mercury__hash_table__TypeInfo_for_K_12, mercury__hash_table__T0_10, mercury__hash_table__K_5, &mercury__hash_table__T_11);
            }
#line 523 "hash_table.m"
            if (mercury__hash_table__succeeded)
#line 523 "hash_table.m"
              {
#line 524 "hash_table.m"
                {
#line 524 "hash_table.m"
                  MR_Word base;
#line 524 "hash_table.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 524 "hash_table.m"
                  *mercury__hash_table__AL_6 = base;
#line 524 "hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__hash_table__K0_8;
#line 524 "hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__hash_table__V0_9;
#line 524 "hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__hash_table__T_11));
#line 524 "hash_table.m"
                }
#line 524 "hash_table.m"
                mercury__hash_table__succeeded = MR_TRUE;
#line 523 "hash_table.m"
              }
#line 523 "hash_table.m"
          }
#line 519 "hash_table.m"
      }
#line 514 "hash_table.m"
    else
#line 514 "hash_table.m"
    if (((MR_tag((MR_Word) mercury__hash_table__AL0_4)) == (MR_mktag((MR_Integer) 1))))
#line 515 "hash_table.m"
      {
#line 515 "hash_table.m"
        MR_Box mercury__hash_table__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL0_4, (MR_Integer) 0));
#line 515 "hash_table.m"
        MR_Box mercury__hash_table__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL0_4, (MR_Integer) 1));

#line 515 "hash_table.m"
        {
#line 515 "hash_table.m"
          mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_12, mercury__hash_table__K_5, mercury__hash_table__V_14_14);
        }
#line 515 "hash_table.m"
        if (mercury__hash_table__succeeded)
#line 515 "hash_table.m"
          {
#line 517 "hash_table.m"
            *mercury__hash_table__AL_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 517 "hash_table.m"
            mercury__hash_table__succeeded = MR_TRUE;
#line 515 "hash_table.m"
          }
#line 515 "hash_table.m"
      }
#line 514 "hash_table.m"
    else
#line 514 "hash_table.m"
      mercury__hash_table__succeeded = MR_FALSE;
#line 514 "hash_table.m"
    return mercury__hash_table__succeeded;
#line 514 "hash_table.m"
  }
#line 506 "hash_table.m"
}

#line 386 "hash_table.m"
static MR_bool MR_CALL 
mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(
#line 386 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_14,
#line 386 "hash_table.m"
  MR_Word mercury__hash_table__AL0_5,
#line 386 "hash_table.m"
  MR_Box mercury__hash_table__K_6,
#line 386 "hash_table.m"
  MR_Box mercury__hash_table__V_7,
#line 386 "hash_table.m"
  MR_Word * mercury__hash_table__AL_8)
#line 386 "hash_table.m"
{
#line 394 "hash_table.m"
  {
#line 394 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;

#line 394 "hash_table.m"
    if (((MR_tag((MR_Word) mercury__hash_table__AL0_5)) == (MR_mktag((MR_Integer) 2))))
#line 398 "hash_table.m"
      {
#line 398 "hash_table.m"
        MR_Box mercury__hash_table__K0_10 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL0_5, (MR_Integer) 0));
#line 398 "hash_table.m"
        MR_Box mercury__hash_table__V0_11 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL0_5, (MR_Integer) 1));
#line 398 "hash_table.m"
        MR_Word mercury__hash_table__T0_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__AL0_5, (MR_Integer) 2)));

#line 399 "hash_table.m"
        {
#line 399 "hash_table.m"
          mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_14, mercury__hash_table__K0_10, mercury__hash_table__K_6);
        }
#line 401 "hash_table.m"
        if (mercury__hash_table__succeeded)
#line 400 "hash_table.m"
          {
#line 400 "hash_table.m"
            {
#line 400 "hash_table.m"
              MR_Word base;
#line 400 "hash_table.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 400 "hash_table.m"
              *mercury__hash_table__AL_8 = base;
#line 400 "hash_table.m"
              MR_hl_field(MR_mktag(2), base, 0) = mercury__hash_table__K0_10;
#line 400 "hash_table.m"
              MR_hl_field(MR_mktag(2), base, 1) = mercury__hash_table__V_7;
#line 400 "hash_table.m"
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__hash_table__T0_12));
#line 400 "hash_table.m"
            }
#line 400 "hash_table.m"
            mercury__hash_table__succeeded = MR_TRUE;
#line 400 "hash_table.m"
          }
#line 401 "hash_table.m"
        else
#line 402 "hash_table.m"
          {
#line 402 "hash_table.m"
            MR_Word mercury__hash_table__T_13;

#line 402 "hash_table.m"
            {
#line 402 "hash_table.m"
              mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(mercury__hash_table__TypeInfo_for_K_14, mercury__hash_table__T0_12, mercury__hash_table__K_6, mercury__hash_table__V_7, &mercury__hash_table__T_13);
            }
#line 402 "hash_table.m"
            if (mercury__hash_table__succeeded)
#line 402 "hash_table.m"
              {
#line 403 "hash_table.m"
                {
#line 403 "hash_table.m"
                  MR_Word base;
#line 403 "hash_table.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 403 "hash_table.m"
                  *mercury__hash_table__AL_8 = base;
#line 403 "hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__hash_table__K0_10;
#line 403 "hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__hash_table__V0_11;
#line 403 "hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__hash_table__T_13));
#line 403 "hash_table.m"
                }
#line 403 "hash_table.m"
                mercury__hash_table__succeeded = MR_TRUE;
#line 402 "hash_table.m"
              }
#line 402 "hash_table.m"
          }
#line 398 "hash_table.m"
      }
#line 394 "hash_table.m"
    else
#line 394 "hash_table.m"
    if (((MR_tag((MR_Word) mercury__hash_table__AL0_5)) == (MR_mktag((MR_Integer) 1))))
#line 395 "hash_table.m"
      {
#line 395 "hash_table.m"
        MR_Box mercury__hash_table__V_16_16 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL0_5, (MR_Integer) 0));
#line 395 "hash_table.m"
        MR_Box mercury__hash_table__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL0_5, (MR_Integer) 1));

#line 395 "hash_table.m"
        {
#line 395 "hash_table.m"
          mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_14, mercury__hash_table__K_6, mercury__hash_table__V_16_16);
        }
#line 395 "hash_table.m"
        if (mercury__hash_table__succeeded)
#line 395 "hash_table.m"
          {
#line 396 "hash_table.m"
            {
#line 396 "hash_table.m"
              MR_Word base;
#line 396 "hash_table.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "hash_table.m"
              *mercury__hash_table__AL_8 = base;
#line 396 "hash_table.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__hash_table__K_6;
#line 396 "hash_table.m"
              MR_hl_field(MR_mktag(1), base, 1) = mercury__hash_table__V_7;
#line 396 "hash_table.m"
            }
#line 396 "hash_table.m"
            mercury__hash_table__succeeded = MR_TRUE;
#line 395 "hash_table.m"
          }
#line 395 "hash_table.m"
      }
#line 394 "hash_table.m"
    else
#line 394 "hash_table.m"
      mercury__hash_table__succeeded = MR_FALSE;
#line 394 "hash_table.m"
    return mercury__hash_table__succeeded;
#line 394 "hash_table.m"
  }
#line 386 "hash_table.m"
}

#line 127 "list.int"
static void MR_CALL 
mercury__hash_table__foldl__ho13_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__hash_table__HeadVar__2_2,
#line 127 "list.int"
  MR_Integer mercury__hash_table__HeadVar__3_3,
#line 127 "list.int"
  MR_Integer * mercury__hash_table__HeadVar__4_4)
#line 127 "list.int"
{
#line 393 "list.opt"
  while (MR_TRUE)
#line 393 "list.opt"
    {
#line 393 "list.opt"
      /* tailcall optimized into a loop */
#line 393 "list.opt"
      {
#line 393 "list.opt"
        MR_bool mercury__hash_table__succeeded;

#line 393 "list.opt"
        if ((mercury__hash_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 393 "list.opt"
          *mercury__hash_table__HeadVar__4_4 = mercury__hash_table__HeadVar__3_3;
#line 393 "list.opt"
        else
#line 395 "list.opt"
          {
#line 395 "list.opt"
            MR_Word mercury__hash_table__TypeCtorInfo_47_59 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 395 "list.opt"
            MR_Word mercury__hash_table__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__2_2, (MR_Integer) 0)));
#line 395 "list.opt"
            MR_Word mercury__hash_table__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__2_2, (MR_Integer) 1)));
#line 395 "list.opt"
            MR_Integer mercury__hash_table__V_15_13;
#line 395 "list.opt"
            MR_Integer mercury__hash_table__HUA_36;
#line 395 "list.opt"
            MR_Integer mercury__hash_table__V_64_64;
#line 395 "list.opt"
            MR_Integer mercury__hash_table__V_65_65;
#line 395 "list.opt"
            MR_Integer mercury__hash_table__V_66_66;
#line 395 "list.opt"
            MR_Integer mercury__hash_table__V_67_67;

#line 718 "hash_table.m"
            {
#line 718 "hash_table.m"
              mercury__hash_table__generic_hash_2_p_0(mercury__hash_table__TypeCtorInfo_47_59, ((MR_Box) (mercury__hash_table__V_10_9)), &mercury__hash_table__HUA_36);
            }
#line 729 "hash_table.m"
            mercury__hash_table__V_64_64 = (mercury__hash_table__HeadVar__3_3 << mercury__hash_table__HUA_36);
#line 64 "int.opt"
{
#define MR_PROC_LABEL mercury__hash_table__foldl__ho13_4_p_in__list_0

	MR_Integer Bits;

		{
#line 64 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 3265 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_67_67  = Bits;
#line 64 "int.opt"
}
#line 730 "hash_table.m"
            mercury__hash_table__V_66_66 = (mercury__hash_table__V_67_67 - mercury__hash_table__HUA_36);
#line 730 "hash_table.m"
            mercury__hash_table__V_65_65 = (mercury__hash_table__HeadVar__3_3 >> mercury__hash_table__V_66_66);
#line 729 "hash_table.m"
            mercury__hash_table__V_15_13 = (mercury__hash_table__V_64_64 ^ mercury__hash_table__V_65_65);
#line 397 "list.opt"
            /* direct tailcall eliminated */
#line 397 "list.opt"
            {
#line 397 "list.opt"
              MR_Word mercury__hash_table__HeadVar__2__tmp_copy_2 = mercury__hash_table__V_11_10;
#line 397 "list.opt"
              MR_Integer mercury__hash_table__HeadVar__3__tmp_copy_3 = mercury__hash_table__V_15_13;

#line 397 "list.opt"
              mercury__hash_table__HeadVar__3_3 = mercury__hash_table__HeadVar__3__tmp_copy_3;
#line 397 "list.opt"
              mercury__hash_table__HeadVar__2_2 = mercury__hash_table__HeadVar__2__tmp_copy_2;
#line 397 "list.opt"
            }
#line 397 "list.opt"
            continue;
#line 395 "list.opt"
          }
#line 393 "list.opt"
      }
#line 393 "list.opt"
      break;
#line 393 "list.opt"
    }
#line 127 "list.int"
}

#line 277 "hash_table.m"
void MR_CALL 
mercury__hash_table____Compare____hash_table_alist_2_0(
#line 277 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_39,
#line 277 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_40,
#line 277 "hash_table.m"
  MR_Word * mercury__hash_table__HeadVar__1_1,
#line 277 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__2_2,
#line 277 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__3_3)
#line 277 "hash_table.m"
{
#line 277 "hash_table.m"
  while (MR_TRUE)
#line 277 "hash_table.m"
    {
#line 277 "hash_table.m"
      /* tailcall optimized into a loop */
#line 277 "hash_table.m"
      {
#line 277 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;
#line 277 "hash_table.m"
        MR_Integer mercury__hash_table__CastX_37 = (MR_Integer) mercury__hash_table__HeadVar__2_2;
#line 277 "hash_table.m"
        MR_Integer mercury__hash_table__CastY_38 = (MR_Integer) mercury__hash_table__HeadVar__3_3;

#line 277 "hash_table.m"
        mercury__hash_table__succeeded = (mercury__hash_table__CastX_37 == mercury__hash_table__CastY_38);
#line 277 "hash_table.m"
        if (mercury__hash_table__succeeded)
#line 3340 "hash_table.c"
          *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 0;
#line 277 "hash_table.m"
        else
#line 277 "hash_table.m"
#line 277 "hash_table.m"
          switch (MR_tag((MR_Word) mercury__hash_table__HeadVar__2_2)) {
#line 277 "hash_table.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 277 "hash_table.m"
            case (MR_Integer) 0:
#line 277 "hash_table.m"
#line 277 "hash_table.m"
              switch (MR_tag((MR_Word) mercury__hash_table__HeadVar__3_3)) {
#line 277 "hash_table.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 277 "hash_table.m"
                case (MR_Integer) 0:
#line 277 "hash_table.m"
                  *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 0;
#line 277 "hash_table.m"
                  break;
#line 277 "hash_table.m"
                case (MR_Integer) 1:
#line 3364 "hash_table.c"
                  *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "hash_table.m"
                  break;
#line 277 "hash_table.m"
                case (MR_Integer) 2:
#line 3370 "hash_table.c"
                  *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "hash_table.m"
                  break;
#line 277 "hash_table.m"
              }
#line 277 "hash_table.m"
              break;
#line 277 "hash_table.m"
            case (MR_Integer) 1:
#line 277 "hash_table.m"
              {
#line 277 "hash_table.m"
                MR_Box mercury__hash_table__V_46_46 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 277 "hash_table.m"
                MR_Box mercury__hash_table__V_47_47 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__2_2, (MR_Integer) 0));

#line 277 "hash_table.m"
#line 277 "hash_table.m"
                switch (MR_tag((MR_Word) mercury__hash_table__HeadVar__3_3)) {
#line 277 "hash_table.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 277 "hash_table.m"
                  case (MR_Integer) 0:
#line 3394 "hash_table.c"
                    *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "hash_table.m"
                    break;
#line 277 "hash_table.m"
                  case (MR_Integer) 1:
#line 277 "hash_table.m"
                    {
#line 277 "hash_table.m"
                      MR_Box mercury__hash_table__V_13_13 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__3_3, (MR_Integer) 0));
#line 277 "hash_table.m"
                      MR_Box mercury__hash_table__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__3_3, (MR_Integer) 1));
#line 277 "hash_table.m"
                      MR_Word mercury__hash_table__V_15_15;

#line 277 "hash_table.m"
                      {
#line 277 "hash_table.m"
                        mercury__builtin__compare_3_p_0(mercury__hash_table__TypeInfo_for_K_39, &mercury__hash_table__V_15_15, mercury__hash_table__V_47_47, mercury__hash_table__V_13_13);
                      }
#line 3414 "hash_table.c"
                      mercury__hash_table__succeeded = (mercury__hash_table__V_15_15 == (MR_Integer) 0);
#line 277 "hash_table.m"
                      mercury__hash_table__succeeded = !(mercury__hash_table__succeeded);
#line 277 "hash_table.m"
                      if (mercury__hash_table__succeeded)
#line 277 "hash_table.m"
                        *mercury__hash_table__HeadVar__1_1 = mercury__hash_table__V_15_15;
#line 277 "hash_table.m"
                      else
#line 277 "hash_table.m"
                        {
#line 277 "hash_table.m"
                          mercury__builtin__compare_3_p_0(mercury__hash_table__TypeInfo_for_V_40, mercury__hash_table__HeadVar__1_1, mercury__hash_table__V_46_46, mercury__hash_table__V_14_14);
                        }
#line 277 "hash_table.m"
                    }
#line 277 "hash_table.m"
                    break;
#line 277 "hash_table.m"
                  case (MR_Integer) 2:
#line 3435 "hash_table.c"
                    *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 1;
#line 277 "hash_table.m"
                    break;
#line 277 "hash_table.m"
                }
#line 277 "hash_table.m"
              }
#line 277 "hash_table.m"
              break;
#line 277 "hash_table.m"
            case (MR_Integer) 2:
#line 277 "hash_table.m"
              {
#line 277 "hash_table.m"
                MR_Word mercury__hash_table__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__2_2, (MR_Integer) 2)));
#line 277 "hash_table.m"
                MR_Box mercury__hash_table__V_44_44 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 277 "hash_table.m"
                MR_Box mercury__hash_table__V_45_45 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__2_2, (MR_Integer) 0));

#line 277 "hash_table.m"
#line 277 "hash_table.m"
                switch (MR_tag((MR_Word) mercury__hash_table__HeadVar__3_3)) {
#line 277 "hash_table.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 277 "hash_table.m"
                  case (MR_Integer) 0:
#line 3463 "hash_table.c"
                    *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "hash_table.m"
                    break;
#line 277 "hash_table.m"
                  case (MR_Integer) 1:
#line 3469 "hash_table.c"
                    *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 2;
#line 277 "hash_table.m"
                    break;
#line 277 "hash_table.m"
                  case (MR_Integer) 2:
#line 277 "hash_table.m"
                    {
#line 277 "hash_table.m"
                      MR_Box mercury__hash_table__V_32_32 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__3_3, (MR_Integer) 0));
#line 277 "hash_table.m"
                      MR_Box mercury__hash_table__V_33_33 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__3_3, (MR_Integer) 1));
#line 277 "hash_table.m"
                      MR_Word mercury__hash_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__3_3, (MR_Integer) 2)));
#line 277 "hash_table.m"
                      MR_Word mercury__hash_table__V_35_35;

#line 277 "hash_table.m"
                      {
#line 277 "hash_table.m"
                        mercury__builtin__compare_3_p_0(mercury__hash_table__TypeInfo_for_K_39, &mercury__hash_table__V_35_35, mercury__hash_table__V_45_45, mercury__hash_table__V_32_32);
                      }
#line 3491 "hash_table.c"
                      mercury__hash_table__succeeded = (mercury__hash_table__V_35_35 == (MR_Integer) 0);
#line 277 "hash_table.m"
                      mercury__hash_table__succeeded = !(mercury__hash_table__succeeded);
#line 277 "hash_table.m"
                      if (mercury__hash_table__succeeded)
#line 277 "hash_table.m"
                        *mercury__hash_table__HeadVar__1_1 = mercury__hash_table__V_35_35;
#line 277 "hash_table.m"
                      else
#line 277 "hash_table.m"
                        {
#line 277 "hash_table.m"
                          MR_Word mercury__hash_table__V_36_36;

#line 277 "hash_table.m"
                          {
#line 277 "hash_table.m"
                            mercury__builtin__compare_3_p_0(mercury__hash_table__TypeInfo_for_V_40, &mercury__hash_table__V_36_36, mercury__hash_table__V_44_44, mercury__hash_table__V_33_33);
                          }
#line 3511 "hash_table.c"
                          mercury__hash_table__succeeded = (mercury__hash_table__V_36_36 == (MR_Integer) 0);
#line 277 "hash_table.m"
                          mercury__hash_table__succeeded = !(mercury__hash_table__succeeded);
#line 277 "hash_table.m"
                          if (mercury__hash_table__succeeded)
#line 277 "hash_table.m"
                            *mercury__hash_table__HeadVar__1_1 = mercury__hash_table__V_36_36;
#line 277 "hash_table.m"
                          else
#line 277 "hash_table.m"
                            {
#line 277 "hash_table.m"
                              /* direct tailcall eliminated */
#line 277 "hash_table.m"
                              {
#line 277 "hash_table.m"
                                MR_Word mercury__hash_table__HeadVar__2__tmp_copy_2 = mercury__hash_table__V_43_43;
#line 277 "hash_table.m"
                                MR_Word mercury__hash_table__HeadVar__3__tmp_copy_3 = mercury__hash_table__V_34_34;

#line 277 "hash_table.m"
                                mercury__hash_table__HeadVar__3_3 = mercury__hash_table__HeadVar__3__tmp_copy_3;
#line 277 "hash_table.m"
                                mercury__hash_table__HeadVar__2_2 = mercury__hash_table__HeadVar__2__tmp_copy_2;
#line 277 "hash_table.m"
                              }
#line 277 "hash_table.m"
                              continue;
#line 277 "hash_table.m"
                            }
#line 277 "hash_table.m"
                        }
#line 277 "hash_table.m"
                    }
#line 277 "hash_table.m"
                    break;
#line 277 "hash_table.m"
                }
#line 277 "hash_table.m"
              }
#line 277 "hash_table.m"
              break;
#line 277 "hash_table.m"
          }
#line 277 "hash_table.m"
      }
#line 277 "hash_table.m"
      break;
#line 277 "hash_table.m"
    }
#line 277 "hash_table.m"
}

#line 277 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table____Unify____hash_table_alist_2_0(
#line 277 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_17,
#line 277 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_18,
#line 277 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__1_1,
#line 277 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__2_2)
#line 277 "hash_table.m"
{
#line 277 "hash_table.m"
  while (MR_TRUE)
#line 277 "hash_table.m"
    {
#line 277 "hash_table.m"
      /* tailcall optimized into a loop */
#line 277 "hash_table.m"
      {
#line 277 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;
#line 277 "hash_table.m"
        MR_Integer mercury__hash_table__CastX_15 = (MR_Integer) mercury__hash_table__HeadVar__1_1;
#line 277 "hash_table.m"
        MR_Integer mercury__hash_table__CastY_16 = (MR_Integer) mercury__hash_table__HeadVar__2_2;

#line 277 "hash_table.m"
        mercury__hash_table__succeeded = (mercury__hash_table__CastX_15 == mercury__hash_table__CastY_16);
#line 277 "hash_table.m"
        if (mercury__hash_table__succeeded)
#line 277 "hash_table.m"
          mercury__hash_table__succeeded = MR_TRUE;
#line 277 "hash_table.m"
        else
#line 277 "hash_table.m"
#line 277 "hash_table.m"
          switch (MR_tag((MR_Word) mercury__hash_table__HeadVar__1_1)) {
#line 277 "hash_table.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 277 "hash_table.m"
            case (MR_Integer) 0:
#line 277 "hash_table.m"
              {
#line 277 "hash_table.m"
                MR_Integer mercury__hash_table__CastX_3 = (MR_Integer) mercury__hash_table__HeadVar__1_1;
#line 277 "hash_table.m"
                MR_Integer mercury__hash_table__CastY_4 = (MR_Integer) mercury__hash_table__HeadVar__2_2;

#line 277 "hash_table.m"
                mercury__hash_table__succeeded = (mercury__hash_table__CastY_4 == mercury__hash_table__CastX_3);
#line 277 "hash_table.m"
              }
#line 277 "hash_table.m"
              break;
#line 277 "hash_table.m"
            case (MR_Integer) 1:
#line 277 "hash_table.m"
              {
#line 277 "hash_table.m"
                MR_Box mercury__hash_table__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__1_1, (MR_Integer) 0));
#line 277 "hash_table.m"
                MR_Box mercury__hash_table__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__1_1, (MR_Integer) 1));
#line 277 "hash_table.m"
                MR_Box mercury__hash_table__V_7_7;
#line 277 "hash_table.m"
                MR_Box mercury__hash_table__V_8_8;

#line 277 "hash_table.m"
                mercury__hash_table__succeeded = ((MR_tag((MR_Word) mercury__hash_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 277 "hash_table.m"
                if (mercury__hash_table__succeeded)
#line 277 "hash_table.m"
                  {
#line 277 "hash_table.m"
                    mercury__hash_table__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__2_2, (MR_Integer) 0));
#line 277 "hash_table.m"
                    mercury__hash_table__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 3644 "hash_table.c"
                    {
#line 3646 "hash_table.c"
                      mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_17, mercury__hash_table__V_5_5, mercury__hash_table__V_7_7);
                    }
#line 277 "hash_table.m"
                    if (mercury__hash_table__succeeded)
#line 3651 "hash_table.c"
                      {
#line 3653 "hash_table.c"
                        mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_V_18, mercury__hash_table__V_6_6, mercury__hash_table__V_8_8);
                      }
#line 277 "hash_table.m"
                  }
#line 277 "hash_table.m"
              }
#line 277 "hash_table.m"
              break;
#line 277 "hash_table.m"
            case (MR_Integer) 2:
#line 277 "hash_table.m"
              {
#line 277 "hash_table.m"
                MR_Box mercury__hash_table__V_9_9 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__1_1, (MR_Integer) 0));
#line 277 "hash_table.m"
                MR_Box mercury__hash_table__V_10_10 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__1_1, (MR_Integer) 1));
#line 277 "hash_table.m"
                MR_Word mercury__hash_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__1_1, (MR_Integer) 2)));
#line 277 "hash_table.m"
                MR_Box mercury__hash_table__V_12_12;
#line 277 "hash_table.m"
                MR_Box mercury__hash_table__V_13_13;
#line 277 "hash_table.m"
                MR_Word mercury__hash_table__V_14_14;

#line 277 "hash_table.m"
                mercury__hash_table__succeeded = ((MR_tag((MR_Word) mercury__hash_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 277 "hash_table.m"
                if (mercury__hash_table__succeeded)
#line 277 "hash_table.m"
                  {
#line 277 "hash_table.m"
                    mercury__hash_table__V_12_12 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__2_2, (MR_Integer) 0));
#line 277 "hash_table.m"
                    mercury__hash_table__V_13_13 = (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 277 "hash_table.m"
                    mercury__hash_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__HeadVar__2_2, (MR_Integer) 2)));
#line 3691 "hash_table.c"
                    {
#line 3693 "hash_table.c"
                      mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_17, mercury__hash_table__V_9_9, mercury__hash_table__V_12_12);
                    }
#line 277 "hash_table.m"
                    if (mercury__hash_table__succeeded)
#line 277 "hash_table.m"
                      {
#line 3700 "hash_table.c"
                        {
#line 3702 "hash_table.c"
                          mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_V_18, mercury__hash_table__V_10_10, mercury__hash_table__V_13_13);
                        }
#line 277 "hash_table.m"
                        if (mercury__hash_table__succeeded)
#line 3707 "hash_table.c"
                          {
#line 3709 "hash_table.c"
                            /* direct tailcall eliminated */
#line 3711 "hash_table.c"
                            {
#line 3713 "hash_table.c"
                              MR_Word mercury__hash_table__HeadVar__1__tmp_copy_1 = mercury__hash_table__V_11_11;
#line 3715 "hash_table.c"
                              MR_Word mercury__hash_table__HeadVar__2__tmp_copy_2 = mercury__hash_table__V_14_14;

#line 3718 "hash_table.c"
                              mercury__hash_table__HeadVar__2_2 = mercury__hash_table__HeadVar__2__tmp_copy_2;
#line 3720 "hash_table.c"
                              mercury__hash_table__HeadVar__1_1 = mercury__hash_table__HeadVar__1__tmp_copy_1;
#line 3722 "hash_table.c"
                            }
#line 3724 "hash_table.c"
                            continue;
#line 3726 "hash_table.c"
                          }
#line 277 "hash_table.m"
                      }
#line 277 "hash_table.m"
                  }
#line 277 "hash_table.m"
              }
#line 277 "hash_table.m"
              break;
#line 277 "hash_table.m"
          }
#line 277 "hash_table.m"
        return mercury__hash_table__succeeded;
#line 277 "hash_table.m"
      }
#line 277 "hash_table.m"
      break;
#line 277 "hash_table.m"
    }
#line 277 "hash_table.m"
}

#line 254 "hash_table.m"
void MR_CALL 
mercury__hash_table____Compare____hash_table_2_0(
#line 254 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_17,
#line 254 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_18,
#line 254 "hash_table.m"
  MR_Word * mercury__hash_table__HeadVar__1_1,
#line 254 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__2_2,
#line 254 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__3_3)
#line 254 "hash_table.m"
{
#line 254 "hash_table.m"
  {
#line 254 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 254 "hash_table.m"
    MR_Integer mercury__hash_table__CastX_15 = (MR_Integer) mercury__hash_table__HeadVar__2_2;
#line 254 "hash_table.m"
    MR_Integer mercury__hash_table__CastY_16 = (MR_Integer) mercury__hash_table__HeadVar__3_3;

#line 254 "hash_table.m"
    mercury__hash_table__succeeded = (mercury__hash_table__CastX_15 == mercury__hash_table__CastY_16);
#line 254 "hash_table.m"
    if (mercury__hash_table__succeeded)
#line 3777 "hash_table.c"
      *mercury__hash_table__HeadVar__1_1 = (MR_Integer) 0;
#line 254 "hash_table.m"
    else
#line 254 "hash_table.m"
      {
#line 254 "hash_table.m"
        MR_Integer mercury__hash_table__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 0)));
#line 254 "hash_table.m"
        MR_Integer mercury__hash_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 1)));
#line 254 "hash_table.m"
        MR_Word mercury__hash_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 2)));
#line 254 "hash_table.m"
        MR_ArrayPtr mercury__hash_table__V_7_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 3)));
#line 254 "hash_table.m"
        MR_Integer mercury__hash_table__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__3_3, (MR_Integer) 0)));
#line 254 "hash_table.m"
        MR_Integer mercury__hash_table__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__3_3, (MR_Integer) 1)));
#line 254 "hash_table.m"
        MR_Word mercury__hash_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__3_3, (MR_Integer) 2)));
#line 254 "hash_table.m"
        MR_ArrayPtr mercury__hash_table__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__3_3, (MR_Integer) 3)));
#line 254 "hash_table.m"
        MR_Word mercury__hash_table__V_12_12;

#line 69 "private_builtin.opt"
        mercury__hash_table__succeeded = (mercury__hash_table__V_4_4 < mercury__hash_table__V_8_8);
#line 72 "private_builtin.opt"
        if (mercury__hash_table__succeeded)
#line 71 "private_builtin.opt"
          mercury__hash_table__V_12_12 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
        else
#line 77 "private_builtin.opt"
          {
#line 74 "private_builtin.opt"
            mercury__hash_table__succeeded = (mercury__hash_table__V_4_4 == mercury__hash_table__V_8_8);
#line 77 "private_builtin.opt"
            if (mercury__hash_table__succeeded)
#line 76 "private_builtin.opt"
              mercury__hash_table__V_12_12 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
            else
#line 78 "private_builtin.opt"
              mercury__hash_table__V_12_12 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
          }
#line 3824 "hash_table.c"
        mercury__hash_table__succeeded = (mercury__hash_table__V_12_12 == (MR_Integer) 0);
#line 254 "hash_table.m"
        mercury__hash_table__succeeded = !(mercury__hash_table__succeeded);
#line 254 "hash_table.m"
        if (mercury__hash_table__succeeded)
#line 254 "hash_table.m"
          *mercury__hash_table__HeadVar__1_1 = mercury__hash_table__V_12_12;
#line 254 "hash_table.m"
        else
#line 254 "hash_table.m"
          {
#line 254 "hash_table.m"
            MR_Word mercury__hash_table__V_13_13;

#line 69 "private_builtin.opt"
            mercury__hash_table__succeeded = (mercury__hash_table__V_5_5 < mercury__hash_table__V_9_9);
#line 72 "private_builtin.opt"
            if (mercury__hash_table__succeeded)
#line 71 "private_builtin.opt"
              mercury__hash_table__V_13_13 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
            else
#line 77 "private_builtin.opt"
              {
#line 74 "private_builtin.opt"
                mercury__hash_table__succeeded = (mercury__hash_table__V_5_5 == mercury__hash_table__V_9_9);
#line 77 "private_builtin.opt"
                if (mercury__hash_table__succeeded)
#line 76 "private_builtin.opt"
                  mercury__hash_table__V_13_13 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
                else
#line 78 "private_builtin.opt"
                  mercury__hash_table__V_13_13 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
              }
#line 3861 "hash_table.c"
            mercury__hash_table__succeeded = (mercury__hash_table__V_13_13 == (MR_Integer) 0);
#line 254 "hash_table.m"
            mercury__hash_table__succeeded = !(mercury__hash_table__succeeded);
#line 254 "hash_table.m"
            if (mercury__hash_table__succeeded)
#line 254 "hash_table.m"
              *mercury__hash_table__HeadVar__1_1 = mercury__hash_table__V_13_13;
#line 254 "hash_table.m"
            else
#line 254 "hash_table.m"
              {
#line 254 "hash_table.m"
                MR_Word mercury__hash_table__V_14_14;

#line 254 "hash_table.m"
                {
#line 254 "hash_table.m"
                  mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__hash_table__V_14_14, (MR_Word) mercury__hash_table__V_6_6, (MR_Word) mercury__hash_table__V_10_10);
                }
#line 3881 "hash_table.c"
                mercury__hash_table__succeeded = (mercury__hash_table__V_14_14 == (MR_Integer) 0);
#line 254 "hash_table.m"
                mercury__hash_table__succeeded = !(mercury__hash_table__succeeded);
#line 254 "hash_table.m"
                if (mercury__hash_table__succeeded)
#line 254 "hash_table.m"
                  *mercury__hash_table__HeadVar__1_1 = mercury__hash_table__V_14_14;
#line 254 "hash_table.m"
                else
#line 254 "hash_table.m"
                  {
#line 254 "hash_table.m"
                    MR_Word mercury__hash_table__TypeCtorInfo_25_25 = (MR_Word) &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2;
#line 254 "hash_table.m"
                    MR_Word mercury__hash_table__TypeInfo_26_26;

#line 3898 "hash_table.c"
                    {
#line 3900 "hash_table.c"
                      mercury__hash_table__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3902 "hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_26_26, 0) = ((MR_Box) (mercury__hash_table__TypeCtorInfo_25_25));
#line 3904 "hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_26_26, 1) = ((MR_Box) (mercury__hash_table__TypeInfo_for_K_17));
#line 3906 "hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_26_26, 2) = ((MR_Box) (mercury__hash_table__TypeInfo_for_V_18));
#line 3908 "hash_table.c"
                    }
#line 254 "hash_table.m"
                    {
#line 254 "hash_table.m"
                      mercury__array____Compare____array_1_0(mercury__hash_table__TypeInfo_26_26, mercury__hash_table__HeadVar__1_1, (MR_ArrayPtr) mercury__hash_table__V_7_7, (MR_ArrayPtr) mercury__hash_table__V_11_11);
                    }
#line 254 "hash_table.m"
                  }
#line 254 "hash_table.m"
              }
#line 254 "hash_table.m"
          }
#line 254 "hash_table.m"
      }
#line 254 "hash_table.m"
  }
#line 254 "hash_table.m"
}

#line 254 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table____Unify____hash_table_2_0(
#line 254 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_13,
#line 254 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_14,
#line 254 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__1_1,
#line 254 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__2_2)
#line 254 "hash_table.m"
{
#line 254 "hash_table.m"
  {
#line 254 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 254 "hash_table.m"
    MR_Integer mercury__hash_table__CastX_11 = (MR_Integer) mercury__hash_table__HeadVar__1_1;
#line 254 "hash_table.m"
    MR_Integer mercury__hash_table__CastY_12 = (MR_Integer) mercury__hash_table__HeadVar__2_2;

#line 254 "hash_table.m"
    mercury__hash_table__succeeded = (mercury__hash_table__CastX_11 == mercury__hash_table__CastY_12);
#line 254 "hash_table.m"
    if (mercury__hash_table__succeeded)
#line 254 "hash_table.m"
      mercury__hash_table__succeeded = MR_TRUE;
#line 254 "hash_table.m"
    else
#line 254 "hash_table.m"
      {
#line 254 "hash_table.m"
        MR_Word mercury__hash_table__TypeCtorInfo_15_15;
#line 254 "hash_table.m"
        MR_Word mercury__hash_table__TypeInfo_16_16;
#line 254 "hash_table.m"
        MR_Integer mercury__hash_table__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 0)));
#line 254 "hash_table.m"
        MR_Integer mercury__hash_table__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 1)));
#line 254 "hash_table.m"
        MR_Word mercury__hash_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 2)));
#line 254 "hash_table.m"
        MR_ArrayPtr mercury__hash_table__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 3)));
#line 254 "hash_table.m"
        MR_Integer mercury__hash_table__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 0)));
#line 254 "hash_table.m"
        MR_Integer mercury__hash_table__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 1)));
#line 254 "hash_table.m"
        MR_Word mercury__hash_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 2)));
#line 254 "hash_table.m"
        MR_ArrayPtr mercury__hash_table__V_10_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__2_2, (MR_Integer) 3)));

#line 3981 "hash_table.c"
        mercury__hash_table__succeeded = (mercury__hash_table__V_3_3 == mercury__hash_table__V_7_7);
#line 254 "hash_table.m"
        if (mercury__hash_table__succeeded)
#line 254 "hash_table.m"
          {
#line 3987 "hash_table.c"
            mercury__hash_table__succeeded = (mercury__hash_table__V_4_4 == mercury__hash_table__V_8_8);
#line 254 "hash_table.m"
            if (mercury__hash_table__succeeded)
#line 254 "hash_table.m"
              {
#line 3993 "hash_table.c"
                {
#line 3995 "hash_table.c"
                  mercury__hash_table__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__hash_table__V_5_5, (MR_Word) mercury__hash_table__V_9_9);
                }
#line 254 "hash_table.m"
                if (mercury__hash_table__succeeded)
#line 254 "hash_table.m"
                  {
#line 4002 "hash_table.c"
                    mercury__hash_table__TypeCtorInfo_15_15 = (MR_Word) &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2;
#line 4004 "hash_table.c"
                    {
#line 4006 "hash_table.c"
                      mercury__hash_table__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4008 "hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_16_16, 0) = ((MR_Box) (mercury__hash_table__TypeCtorInfo_15_15));
#line 4010 "hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_16_16, 1) = ((MR_Box) (mercury__hash_table__TypeInfo_for_K_13));
#line 4012 "hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_16_16, 2) = ((MR_Box) (mercury__hash_table__TypeInfo_for_V_14));
#line 4014 "hash_table.c"
                    }
#line 4016 "hash_table.c"
                    {
#line 4018 "hash_table.c"
                      mercury__hash_table__succeeded = mercury__array____Unify____array_1_0(mercury__hash_table__TypeInfo_16_16, (MR_ArrayPtr) mercury__hash_table__V_6_6, (MR_ArrayPtr) mercury__hash_table__V_10_10);
                    }
#line 254 "hash_table.m"
                  }
#line 254 "hash_table.m"
              }
#line 254 "hash_table.m"
          }
#line 254 "hash_table.m"
      }
#line 254 "hash_table.m"
    return mercury__hash_table__succeeded;
#line 254 "hash_table.m"
  }
#line 254 "hash_table.m"
}

#line 54 "hash_table.m"
void MR_CALL 
mercury__hash_table____Compare____hash_pred_1_0(
#line 54 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_6,
#line 54 "hash_table.m"
  MR_Word * mercury__hash_table__HeadVar__1_1,
#line 54 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__2_2,
#line 54 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__3_3)
#line 54 "hash_table.m"
{
#line 54 "hash_table.m"
  {
#line 54 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 54 "hash_table.m"
    MR_Word mercury__hash_table__Cast_HeadVar1_4 = mercury__hash_table__HeadVar__2_2;
#line 54 "hash_table.m"
    MR_Word mercury__hash_table__Cast_HeadVar2_5 = mercury__hash_table__HeadVar__3_3;

#line 54 "hash_table.m"
    {
#line 54 "hash_table.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__hash_table__HeadVar__1_1, (MR_Word) mercury__hash_table__Cast_HeadVar1_4, (MR_Word) mercury__hash_table__Cast_HeadVar2_5);
    }
#line 54 "hash_table.m"
  }
#line 54 "hash_table.m"
}

#line 54 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table____Unify____hash_pred_1_0(
#line 54 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_5,
#line 54 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__1_1,
#line 54 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__2_2)
#line 54 "hash_table.m"
{
#line 54 "hash_table.m"
  {
#line 54 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 54 "hash_table.m"
    MR_Word mercury__hash_table__Cast_HeadVar1_3 = mercury__hash_table__HeadVar__1_1;
#line 54 "hash_table.m"
    MR_Word mercury__hash_table__Cast_HeadVar2_4 = mercury__hash_table__HeadVar__2_2;

#line 54 "hash_table.m"
    {
#line 54 "hash_table.m"
      mercury__hash_table__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__hash_table__Cast_HeadVar1_3, (MR_Word) mercury__hash_table__Cast_HeadVar2_4);
    }
#line 54 "hash_table.m"
    return mercury__hash_table__succeeded;
#line 54 "hash_table.m"
  }
#line 54 "hash_table.m"
}

#line 271 "hash_table.m"
void MR_CALL 
mercury__hash_table____Compare____buckets_2_0(
#line 271 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_6,
#line 271 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_7,
#line 271 "hash_table.m"
  MR_Word * mercury__hash_table__HeadVar__1_1,
#line 271 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__HeadVar__2_2,
#line 271 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__HeadVar__3_3)
#line 271 "hash_table.m"
{
#line 271 "hash_table.m"
  {
#line 271 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 271 "hash_table.m"
    MR_Word mercury__hash_table__TypeCtorInfo_8_8 = (MR_Word) &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2;
#line 271 "hash_table.m"
    MR_Word mercury__hash_table__TypeInfo_9_9;
#line 271 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Cast_HeadVar1_4 = mercury__hash_table__HeadVar__2_2;
#line 271 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Cast_HeadVar2_5 = mercury__hash_table__HeadVar__3_3;

#line 4128 "hash_table.c"
    {
#line 4130 "hash_table.c"
      mercury__hash_table__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4132 "hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_9_9, 0) = ((MR_Box) (mercury__hash_table__TypeCtorInfo_8_8));
#line 4134 "hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_9_9, 1) = ((MR_Box) (mercury__hash_table__TypeInfo_for_K_6));
#line 4136 "hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_9_9, 2) = ((MR_Box) (mercury__hash_table__TypeInfo_for_V_7));
#line 4138 "hash_table.c"
    }
#line 271 "hash_table.m"
    {
#line 271 "hash_table.m"
      mercury__array____Compare____array_1_0(mercury__hash_table__TypeInfo_9_9, mercury__hash_table__HeadVar__1_1, (MR_ArrayPtr) mercury__hash_table__Cast_HeadVar1_4, (MR_ArrayPtr) mercury__hash_table__Cast_HeadVar2_5);
    }
#line 271 "hash_table.m"
  }
#line 271 "hash_table.m"
}

#line 271 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table____Unify____buckets_2_0(
#line 271 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_5,
#line 271 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_6,
#line 271 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__HeadVar__1_1,
#line 271 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__HeadVar__2_2)
#line 271 "hash_table.m"
{
#line 271 "hash_table.m"
  {
#line 271 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 271 "hash_table.m"
    MR_Word mercury__hash_table__TypeCtorInfo_7_7 = (MR_Word) &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2;
#line 271 "hash_table.m"
    MR_Word mercury__hash_table__TypeInfo_8_8;
#line 271 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Cast_HeadVar1_3 = mercury__hash_table__HeadVar__1_1;
#line 271 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Cast_HeadVar2_4 = mercury__hash_table__HeadVar__2_2;

#line 4176 "hash_table.c"
    {
#line 4178 "hash_table.c"
      mercury__hash_table__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4180 "hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_8_8, 0) = ((MR_Box) (mercury__hash_table__TypeCtorInfo_7_7));
#line 4182 "hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_8_8, 1) = ((MR_Box) (mercury__hash_table__TypeInfo_for_K_5));
#line 4184 "hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_8_8, 2) = ((MR_Box) (mercury__hash_table__TypeInfo_for_V_6));
#line 4186 "hash_table.c"
    }
#line 271 "hash_table.m"
    {
#line 271 "hash_table.m"
      mercury__hash_table__succeeded = mercury__array____Unify____array_1_0(mercury__hash_table__TypeInfo_8_8, (MR_ArrayPtr) mercury__hash_table__Cast_HeadVar1_3, (MR_ArrayPtr) mercury__hash_table__Cast_HeadVar2_4);
    }
#line 271 "hash_table.m"
    return mercury__hash_table__succeeded;
#line 271 "hash_table.m"
  }
#line 271 "hash_table.m"
}

#line 763 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table__fold_p_4_p_5(
#line 763 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_18,
#line 763 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_19,
#line 763 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_20,
#line 763 "hash_table.m"
  MR_Word mercury__hash_table__P_5,
#line 763 "hash_table.m"
  MR_Word mercury__hash_table__List_6,
#line 763 "hash_table.m"
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_11,
#line 763 "hash_table.m"
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_12)
#line 763 "hash_table.m"
{
#line 768 "hash_table.m"
  while (MR_TRUE)
#line 768 "hash_table.m"
    {
#line 768 "hash_table.m"
      /* tailcall optimized into a loop */
#line 768 "hash_table.m"
      {
#line 768 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 768 "hash_table.m"
#line 768 "hash_table.m"
        switch (MR_tag((MR_Word) mercury__hash_table__List_6)) {
#line 768 "hash_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 768 "hash_table.m"
          case (MR_Integer) 0:
#line 767 "hash_table.m"
            {
#line 767 "hash_table.m"
              *mercury__hash_table__STATE_VARIABLE_A_12 = mercury__hash_table__STATE_VARIABLE_A_0_11;
#line 767 "hash_table.m"
              mercury__hash_table__succeeded = MR_TRUE;
#line 767 "hash_table.m"
            }
#line 768 "hash_table.m"
            break;
#line 768 "hash_table.m"
          case (MR_Integer) 1:
#line 769 "hash_table.m"
            {
#line 769 "hash_table.m"
              MR_Box mercury__hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
#line 769 "hash_table.m"
              MR_Box mercury__hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
#line 770 "hash_table.m"
              MR_bool MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 770 "hash_table.m"
              {
#line 770 "hash_table.m"
                mercury__hash_table__succeeded = mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_8, mercury__hash_table__V_9, mercury__hash_table__STATE_VARIABLE_A_0_11, mercury__hash_table__STATE_VARIABLE_A_12);
              }
#line 769 "hash_table.m"
            }
#line 768 "hash_table.m"
            break;
#line 768 "hash_table.m"
          case (MR_Integer) 2:
#line 772 "hash_table.m"
            {
#line 772 "hash_table.m"
              MR_Word mercury__hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
#line 772 "hash_table.m"
              MR_Box mercury__hash_table__STATE_VARIABLE_A_13_13;
#line 772 "hash_table.m"
              MR_Box mercury__hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
#line 772 "hash_table.m"
              MR_Box mercury__hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
#line 773 "hash_table.m"
              MR_bool MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 773 "hash_table.m"
              {
#line 773 "hash_table.m"
                mercury__hash_table__succeeded = mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_16, mercury__hash_table__V_17, mercury__hash_table__STATE_VARIABLE_A_0_11, &mercury__hash_table__STATE_VARIABLE_A_13_13);
              }
#line 772 "hash_table.m"
              if (mercury__hash_table__succeeded)
#line 774 "hash_table.m"
                {
#line 774 "hash_table.m"
                  /* direct tailcall eliminated */
#line 774 "hash_table.m"
                  {
#line 774 "hash_table.m"
                    MR_Word mercury__hash_table__List__tmp_copy_6 = mercury__hash_table__KVs_10;
#line 774 "hash_table.m"
                    MR_Box mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_A_13_13;

#line 774 "hash_table.m"
                    mercury__hash_table__STATE_VARIABLE_A_0_11 = mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 774 "hash_table.m"
                    mercury__hash_table__List_6 = mercury__hash_table__List__tmp_copy_6;
#line 774 "hash_table.m"
                  }
#line 774 "hash_table.m"
                  continue;
#line 774 "hash_table.m"
                }
#line 772 "hash_table.m"
            }
#line 768 "hash_table.m"
            break;
#line 768 "hash_table.m"
        }
#line 768 "hash_table.m"
        return mercury__hash_table__succeeded;
#line 768 "hash_table.m"
      }
#line 768 "hash_table.m"
      break;
#line 768 "hash_table.m"
    }
#line 763 "hash_table.m"
}

#line 762 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table__fold_p_4_p_4(
#line 762 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_18,
#line 762 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_19,
#line 762 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_20,
#line 762 "hash_table.m"
  MR_Word mercury__hash_table__P_5,
#line 762 "hash_table.m"
  MR_Word mercury__hash_table__List_6,
#line 762 "hash_table.m"
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_11,
#line 762 "hash_table.m"
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_12)
#line 762 "hash_table.m"
{
#line 768 "hash_table.m"
  while (MR_TRUE)
#line 768 "hash_table.m"
    {
#line 768 "hash_table.m"
      /* tailcall optimized into a loop */
#line 768 "hash_table.m"
      {
#line 768 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 768 "hash_table.m"
#line 768 "hash_table.m"
        switch (MR_tag((MR_Word) mercury__hash_table__List_6)) {
#line 768 "hash_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 768 "hash_table.m"
          case (MR_Integer) 0:
#line 767 "hash_table.m"
            {
#line 767 "hash_table.m"
              *mercury__hash_table__STATE_VARIABLE_A_12 = mercury__hash_table__STATE_VARIABLE_A_0_11;
#line 767 "hash_table.m"
              mercury__hash_table__succeeded = MR_TRUE;
#line 767 "hash_table.m"
            }
#line 768 "hash_table.m"
            break;
#line 768 "hash_table.m"
          case (MR_Integer) 1:
#line 769 "hash_table.m"
            {
#line 769 "hash_table.m"
              MR_Box mercury__hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
#line 769 "hash_table.m"
              MR_Box mercury__hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
#line 770 "hash_table.m"
              MR_bool MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 770 "hash_table.m"
              {
#line 770 "hash_table.m"
                mercury__hash_table__succeeded = mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_8, mercury__hash_table__V_9, mercury__hash_table__STATE_VARIABLE_A_0_11, mercury__hash_table__STATE_VARIABLE_A_12);
              }
#line 769 "hash_table.m"
            }
#line 768 "hash_table.m"
            break;
#line 768 "hash_table.m"
          case (MR_Integer) 2:
#line 772 "hash_table.m"
            {
#line 772 "hash_table.m"
              MR_Word mercury__hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
#line 772 "hash_table.m"
              MR_Box mercury__hash_table__STATE_VARIABLE_A_13_13;
#line 772 "hash_table.m"
              MR_Box mercury__hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
#line 772 "hash_table.m"
              MR_Box mercury__hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
#line 773 "hash_table.m"
              MR_bool MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 773 "hash_table.m"
              {
#line 773 "hash_table.m"
                mercury__hash_table__succeeded = mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_16, mercury__hash_table__V_17, mercury__hash_table__STATE_VARIABLE_A_0_11, &mercury__hash_table__STATE_VARIABLE_A_13_13);
              }
#line 772 "hash_table.m"
              if (mercury__hash_table__succeeded)
#line 774 "hash_table.m"
                {
#line 774 "hash_table.m"
                  /* direct tailcall eliminated */
#line 774 "hash_table.m"
                  {
#line 774 "hash_table.m"
                    MR_Word mercury__hash_table__List__tmp_copy_6 = mercury__hash_table__KVs_10;
#line 774 "hash_table.m"
                    MR_Box mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_A_13_13;

#line 774 "hash_table.m"
                    mercury__hash_table__STATE_VARIABLE_A_0_11 = mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 774 "hash_table.m"
                    mercury__hash_table__List_6 = mercury__hash_table__List__tmp_copy_6;
#line 774 "hash_table.m"
                  }
#line 774 "hash_table.m"
                  continue;
#line 774 "hash_table.m"
                }
#line 772 "hash_table.m"
            }
#line 768 "hash_table.m"
            break;
#line 768 "hash_table.m"
        }
#line 768 "hash_table.m"
        return mercury__hash_table__succeeded;
#line 768 "hash_table.m"
      }
#line 768 "hash_table.m"
      break;
#line 768 "hash_table.m"
    }
#line 762 "hash_table.m"
}

#line 761 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table__fold_p_4_p_3(
#line 761 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_18,
#line 761 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_19,
#line 761 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_20,
#line 761 "hash_table.m"
  MR_Word mercury__hash_table__P_5,
#line 761 "hash_table.m"
  MR_Word mercury__hash_table__List_6,
#line 761 "hash_table.m"
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_11,
#line 761 "hash_table.m"
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_12)
#line 761 "hash_table.m"
{
#line 768 "hash_table.m"
  while (MR_TRUE)
#line 768 "hash_table.m"
    {
#line 768 "hash_table.m"
      /* tailcall optimized into a loop */
#line 768 "hash_table.m"
      {
#line 768 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 768 "hash_table.m"
#line 768 "hash_table.m"
        switch (MR_tag((MR_Word) mercury__hash_table__List_6)) {
#line 768 "hash_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 768 "hash_table.m"
          case (MR_Integer) 0:
#line 767 "hash_table.m"
            {
#line 767 "hash_table.m"
              *mercury__hash_table__STATE_VARIABLE_A_12 = mercury__hash_table__STATE_VARIABLE_A_0_11;
#line 767 "hash_table.m"
              mercury__hash_table__succeeded = MR_TRUE;
#line 767 "hash_table.m"
            }
#line 768 "hash_table.m"
            break;
#line 768 "hash_table.m"
          case (MR_Integer) 1:
#line 769 "hash_table.m"
            {
#line 769 "hash_table.m"
              MR_Box mercury__hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
#line 769 "hash_table.m"
              MR_Box mercury__hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
#line 770 "hash_table.m"
              MR_bool MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 770 "hash_table.m"
              {
#line 770 "hash_table.m"
                mercury__hash_table__succeeded = mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_8, mercury__hash_table__V_9, mercury__hash_table__STATE_VARIABLE_A_0_11, mercury__hash_table__STATE_VARIABLE_A_12);
              }
#line 769 "hash_table.m"
            }
#line 768 "hash_table.m"
            break;
#line 768 "hash_table.m"
          case (MR_Integer) 2:
#line 772 "hash_table.m"
            {
#line 772 "hash_table.m"
              MR_Word mercury__hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
#line 772 "hash_table.m"
              MR_Box mercury__hash_table__STATE_VARIABLE_A_13_13;
#line 772 "hash_table.m"
              MR_Box mercury__hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
#line 772 "hash_table.m"
              MR_Box mercury__hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
#line 773 "hash_table.m"
              MR_bool MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 773 "hash_table.m"
              {
#line 773 "hash_table.m"
                mercury__hash_table__succeeded = mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_16, mercury__hash_table__V_17, mercury__hash_table__STATE_VARIABLE_A_0_11, &mercury__hash_table__STATE_VARIABLE_A_13_13);
              }
#line 772 "hash_table.m"
              if (mercury__hash_table__succeeded)
#line 774 "hash_table.m"
                {
#line 774 "hash_table.m"
                  /* direct tailcall eliminated */
#line 774 "hash_table.m"
                  {
#line 774 "hash_table.m"
                    MR_Word mercury__hash_table__List__tmp_copy_6 = mercury__hash_table__KVs_10;
#line 774 "hash_table.m"
                    MR_Box mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_A_13_13;

#line 774 "hash_table.m"
                    mercury__hash_table__STATE_VARIABLE_A_0_11 = mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 774 "hash_table.m"
                    mercury__hash_table__List_6 = mercury__hash_table__List__tmp_copy_6;
#line 774 "hash_table.m"
                  }
#line 774 "hash_table.m"
                  continue;
#line 774 "hash_table.m"
                }
#line 772 "hash_table.m"
            }
#line 768 "hash_table.m"
            break;
#line 768 "hash_table.m"
        }
#line 768 "hash_table.m"
        return mercury__hash_table__succeeded;
#line 768 "hash_table.m"
      }
#line 768 "hash_table.m"
      break;
#line 768 "hash_table.m"
    }
#line 761 "hash_table.m"
}

#line 760 "hash_table.m"
void MR_CALL 
mercury__hash_table__fold_p_4_p_2(
#line 760 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_18,
#line 760 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_19,
#line 760 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_20,
#line 760 "hash_table.m"
  MR_Word mercury__hash_table__P_5,
#line 760 "hash_table.m"
  MR_Word mercury__hash_table__List_6,
#line 760 "hash_table.m"
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_11,
#line 760 "hash_table.m"
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_12)
#line 760 "hash_table.m"
{
#line 768 "hash_table.m"
  while (MR_TRUE)
#line 768 "hash_table.m"
    {
#line 768 "hash_table.m"
      /* tailcall optimized into a loop */
#line 768 "hash_table.m"
      {
#line 768 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 768 "hash_table.m"
#line 768 "hash_table.m"
        switch (MR_tag((MR_Word) mercury__hash_table__List_6)) {
#line 768 "hash_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 768 "hash_table.m"
          case (MR_Integer) 0:
#line 767 "hash_table.m"
            *mercury__hash_table__STATE_VARIABLE_A_12 = mercury__hash_table__STATE_VARIABLE_A_0_11;
#line 768 "hash_table.m"
            break;
#line 768 "hash_table.m"
          case (MR_Integer) 1:
#line 769 "hash_table.m"
            {
#line 769 "hash_table.m"
              MR_Box mercury__hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
#line 769 "hash_table.m"
              MR_Box mercury__hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
#line 770 "hash_table.m"
              void MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 770 "hash_table.m"
              {
#line 770 "hash_table.m"
                mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_8, mercury__hash_table__V_9, mercury__hash_table__STATE_VARIABLE_A_0_11, mercury__hash_table__STATE_VARIABLE_A_12);
              }
#line 769 "hash_table.m"
            }
#line 768 "hash_table.m"
            break;
#line 768 "hash_table.m"
          case (MR_Integer) 2:
#line 772 "hash_table.m"
            {
#line 772 "hash_table.m"
              MR_Word mercury__hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
#line 772 "hash_table.m"
              MR_Box mercury__hash_table__STATE_VARIABLE_A_13_13;
#line 772 "hash_table.m"
              MR_Box mercury__hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
#line 772 "hash_table.m"
              MR_Box mercury__hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
#line 773 "hash_table.m"
              void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 773 "hash_table.m"
              {
#line 773 "hash_table.m"
                mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_16, mercury__hash_table__V_17, mercury__hash_table__STATE_VARIABLE_A_0_11, &mercury__hash_table__STATE_VARIABLE_A_13_13);
              }
#line 774 "hash_table.m"
              /* direct tailcall eliminated */
#line 774 "hash_table.m"
              {
#line 774 "hash_table.m"
                MR_Word mercury__hash_table__List__tmp_copy_6 = mercury__hash_table__KVs_10;
#line 774 "hash_table.m"
                MR_Box mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_A_13_13;

#line 774 "hash_table.m"
                mercury__hash_table__STATE_VARIABLE_A_0_11 = mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 774 "hash_table.m"
                mercury__hash_table__List_6 = mercury__hash_table__List__tmp_copy_6;
#line 774 "hash_table.m"
              }
#line 774 "hash_table.m"
              continue;
#line 772 "hash_table.m"
            }
#line 768 "hash_table.m"
            break;
#line 768 "hash_table.m"
        }
#line 768 "hash_table.m"
      }
#line 768 "hash_table.m"
      break;
#line 768 "hash_table.m"
    }
#line 760 "hash_table.m"
}

#line 759 "hash_table.m"
void MR_CALL 
mercury__hash_table__fold_p_4_p_1(
#line 759 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_18,
#line 759 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_19,
#line 759 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_20,
#line 759 "hash_table.m"
  MR_Word mercury__hash_table__P_5,
#line 759 "hash_table.m"
  MR_Word mercury__hash_table__List_6,
#line 759 "hash_table.m"
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_11,
#line 759 "hash_table.m"
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_12)
#line 759 "hash_table.m"
{
#line 768 "hash_table.m"
  while (MR_TRUE)
#line 768 "hash_table.m"
    {
#line 768 "hash_table.m"
      /* tailcall optimized into a loop */
#line 768 "hash_table.m"
      {
#line 768 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 768 "hash_table.m"
#line 768 "hash_table.m"
        switch (MR_tag((MR_Word) mercury__hash_table__List_6)) {
#line 768 "hash_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 768 "hash_table.m"
          case (MR_Integer) 0:
#line 767 "hash_table.m"
            *mercury__hash_table__STATE_VARIABLE_A_12 = mercury__hash_table__STATE_VARIABLE_A_0_11;
#line 768 "hash_table.m"
            break;
#line 768 "hash_table.m"
          case (MR_Integer) 1:
#line 769 "hash_table.m"
            {
#line 769 "hash_table.m"
              MR_Box mercury__hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
#line 769 "hash_table.m"
              MR_Box mercury__hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
#line 770 "hash_table.m"
              void MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 770 "hash_table.m"
              {
#line 770 "hash_table.m"
                mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_8, mercury__hash_table__V_9, mercury__hash_table__STATE_VARIABLE_A_0_11, mercury__hash_table__STATE_VARIABLE_A_12);
              }
#line 769 "hash_table.m"
            }
#line 768 "hash_table.m"
            break;
#line 768 "hash_table.m"
          case (MR_Integer) 2:
#line 772 "hash_table.m"
            {
#line 772 "hash_table.m"
              MR_Word mercury__hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
#line 772 "hash_table.m"
              MR_Box mercury__hash_table__STATE_VARIABLE_A_13_13;
#line 772 "hash_table.m"
              MR_Box mercury__hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
#line 772 "hash_table.m"
              MR_Box mercury__hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
#line 773 "hash_table.m"
              void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 773 "hash_table.m"
              {
#line 773 "hash_table.m"
                mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_16, mercury__hash_table__V_17, mercury__hash_table__STATE_VARIABLE_A_0_11, &mercury__hash_table__STATE_VARIABLE_A_13_13);
              }
#line 774 "hash_table.m"
              /* direct tailcall eliminated */
#line 774 "hash_table.m"
              {
#line 774 "hash_table.m"
                MR_Word mercury__hash_table__List__tmp_copy_6 = mercury__hash_table__KVs_10;
#line 774 "hash_table.m"
                MR_Box mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_A_13_13;

#line 774 "hash_table.m"
                mercury__hash_table__STATE_VARIABLE_A_0_11 = mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 774 "hash_table.m"
                mercury__hash_table__List_6 = mercury__hash_table__List__tmp_copy_6;
#line 774 "hash_table.m"
              }
#line 774 "hash_table.m"
              continue;
#line 772 "hash_table.m"
            }
#line 768 "hash_table.m"
            break;
#line 768 "hash_table.m"
        }
#line 768 "hash_table.m"
      }
#line 768 "hash_table.m"
      break;
#line 768 "hash_table.m"
    }
#line 759 "hash_table.m"
}

#line 758 "hash_table.m"
void MR_CALL 
mercury__hash_table__fold_p_4_p_0(
#line 758 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_18,
#line 758 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_19,
#line 758 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_20,
#line 758 "hash_table.m"
  MR_Word mercury__hash_table__P_5,
#line 758 "hash_table.m"
  MR_Word mercury__hash_table__List_6,
#line 758 "hash_table.m"
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_11,
#line 758 "hash_table.m"
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_12)
#line 758 "hash_table.m"
{
#line 768 "hash_table.m"
  while (MR_TRUE)
#line 768 "hash_table.m"
    {
#line 768 "hash_table.m"
      /* tailcall optimized into a loop */
#line 768 "hash_table.m"
      {
#line 768 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 768 "hash_table.m"
#line 768 "hash_table.m"
        switch (MR_tag((MR_Word) mercury__hash_table__List_6)) {
#line 768 "hash_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 768 "hash_table.m"
          case (MR_Integer) 0:
#line 767 "hash_table.m"
            *mercury__hash_table__STATE_VARIABLE_A_12 = mercury__hash_table__STATE_VARIABLE_A_0_11;
#line 768 "hash_table.m"
            break;
#line 768 "hash_table.m"
          case (MR_Integer) 1:
#line 769 "hash_table.m"
            {
#line 769 "hash_table.m"
              MR_Box mercury__hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
#line 769 "hash_table.m"
              MR_Box mercury__hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
#line 770 "hash_table.m"
              void MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 770 "hash_table.m"
              {
#line 770 "hash_table.m"
                mercury__hash_table__func_1(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_8, mercury__hash_table__V_9, mercury__hash_table__STATE_VARIABLE_A_0_11, mercury__hash_table__STATE_VARIABLE_A_12);
              }
#line 769 "hash_table.m"
            }
#line 768 "hash_table.m"
            break;
#line 768 "hash_table.m"
          case (MR_Integer) 2:
#line 772 "hash_table.m"
            {
#line 772 "hash_table.m"
              MR_Word mercury__hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
#line 772 "hash_table.m"
              MR_Box mercury__hash_table__STATE_VARIABLE_A_13_13;
#line 772 "hash_table.m"
              MR_Box mercury__hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
#line 772 "hash_table.m"
              MR_Box mercury__hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
#line 773 "hash_table.m"
              void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__P_5, (MR_Integer) 1)));

#line 773 "hash_table.m"
              {
#line 773 "hash_table.m"
                mercury__hash_table__func_0(((MR_Box) mercury__hash_table__P_5), mercury__hash_table__K_16, mercury__hash_table__V_17, mercury__hash_table__STATE_VARIABLE_A_0_11, &mercury__hash_table__STATE_VARIABLE_A_13_13);
              }
#line 774 "hash_table.m"
              /* direct tailcall eliminated */
#line 774 "hash_table.m"
              {
#line 774 "hash_table.m"
                MR_Word mercury__hash_table__List__tmp_copy_6 = mercury__hash_table__KVs_10;
#line 774 "hash_table.m"
                MR_Box mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__hash_table__STATE_VARIABLE_A_13_13;

#line 774 "hash_table.m"
                mercury__hash_table__STATE_VARIABLE_A_0_11 = mercury__hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 774 "hash_table.m"
                mercury__hash_table__List_6 = mercury__hash_table__List__tmp_copy_6;
#line 774 "hash_table.m"
              }
#line 774 "hash_table.m"
              continue;
#line 772 "hash_table.m"
            }
#line 768 "hash_table.m"
            break;
#line 768 "hash_table.m"
        }
#line 768 "hash_table.m"
      }
#line 768 "hash_table.m"
      break;
#line 768 "hash_table.m"
    }
#line 758 "hash_table.m"
}

#line 739 "hash_table.m"
void MR_CALL 
mercury__hash_table__fold_f_4_p_1(
#line 739 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_15,
#line 739 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_16,
#line 739 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_17,
#line 739 "hash_table.m"
  MR_Word mercury__hash_table__F_5,
#line 739 "hash_table.m"
  MR_Word mercury__hash_table__List_6,
#line 739 "hash_table.m"
  MR_Box mercury__hash_table__A0_7,
#line 739 "hash_table.m"
  MR_Box * mercury__hash_table__A_8)
#line 739 "hash_table.m"
{
#line 745 "hash_table.m"
  while (MR_TRUE)
#line 745 "hash_table.m"
    {
#line 745 "hash_table.m"
      /* tailcall optimized into a loop */
#line 745 "hash_table.m"
      {
#line 745 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 745 "hash_table.m"
#line 745 "hash_table.m"
        switch (MR_tag((MR_Word) mercury__hash_table__List_6)) {
#line 745 "hash_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 745 "hash_table.m"
          case (MR_Integer) 0:
#line 744 "hash_table.m"
            *mercury__hash_table__A_8 = mercury__hash_table__A0_7;
#line 745 "hash_table.m"
            break;
#line 745 "hash_table.m"
          case (MR_Integer) 1:
#line 746 "hash_table.m"
            {
#line 746 "hash_table.m"
              MR_Box mercury__hash_table__K_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
#line 746 "hash_table.m"
              MR_Box mercury__hash_table__V_10 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
#line 747 "hash_table.m"
              MR_Box MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__hash_table__F_5, (MR_Integer) 1)));

#line 747 "hash_table.m"
              {
#line 747 "hash_table.m"
                *mercury__hash_table__A_8 = mercury__hash_table__func_1(((MR_Box) mercury__hash_table__F_5), mercury__hash_table__K_9, mercury__hash_table__V_10, mercury__hash_table__A0_7);
              }
#line 746 "hash_table.m"
            }
#line 745 "hash_table.m"
            break;
#line 745 "hash_table.m"
          case (MR_Integer) 2:
#line 749 "hash_table.m"
            {
#line 749 "hash_table.m"
              MR_Word mercury__hash_table__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
#line 749 "hash_table.m"
              MR_Box mercury__hash_table__A1_12;
#line 749 "hash_table.m"
              MR_Box mercury__hash_table__K_13 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
#line 749 "hash_table.m"
              MR_Box mercury__hash_table__V_14 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
#line 750 "hash_table.m"
              MR_Box MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__hash_table__F_5, (MR_Integer) 1)));

#line 750 "hash_table.m"
              {
#line 750 "hash_table.m"
                mercury__hash_table__A1_12 = mercury__hash_table__func_0(((MR_Box) mercury__hash_table__F_5), mercury__hash_table__K_13, mercury__hash_table__V_14, mercury__hash_table__A0_7);
              }
#line 751 "hash_table.m"
              /* direct tailcall eliminated */
#line 751 "hash_table.m"
              {
#line 751 "hash_table.m"
                MR_Word mercury__hash_table__List__tmp_copy_6 = mercury__hash_table__KVs_11;
#line 751 "hash_table.m"
                MR_Box mercury__hash_table__A0__tmp_copy_7 = mercury__hash_table__A1_12;

#line 751 "hash_table.m"
                mercury__hash_table__A0_7 = mercury__hash_table__A0__tmp_copy_7;
#line 751 "hash_table.m"
                mercury__hash_table__List_6 = mercury__hash_table__List__tmp_copy_6;
#line 751 "hash_table.m"
              }
#line 751 "hash_table.m"
              continue;
#line 749 "hash_table.m"
            }
#line 745 "hash_table.m"
            break;
#line 745 "hash_table.m"
        }
#line 745 "hash_table.m"
      }
#line 745 "hash_table.m"
      break;
#line 745 "hash_table.m"
    }
#line 739 "hash_table.m"
}

#line 738 "hash_table.m"
void MR_CALL 
mercury__hash_table__fold_f_4_p_0(
#line 738 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_15,
#line 738 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_16,
#line 738 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_17,
#line 738 "hash_table.m"
  MR_Word mercury__hash_table__F_5,
#line 738 "hash_table.m"
  MR_Word mercury__hash_table__List_6,
#line 738 "hash_table.m"
  MR_Box mercury__hash_table__A0_7,
#line 738 "hash_table.m"
  MR_Box * mercury__hash_table__A_8)
#line 738 "hash_table.m"
{
#line 745 "hash_table.m"
  while (MR_TRUE)
#line 745 "hash_table.m"
    {
#line 745 "hash_table.m"
      /* tailcall optimized into a loop */
#line 745 "hash_table.m"
      {
#line 745 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 745 "hash_table.m"
#line 745 "hash_table.m"
        switch (MR_tag((MR_Word) mercury__hash_table__List_6)) {
#line 745 "hash_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 745 "hash_table.m"
          case (MR_Integer) 0:
#line 744 "hash_table.m"
            *mercury__hash_table__A_8 = mercury__hash_table__A0_7;
#line 745 "hash_table.m"
            break;
#line 745 "hash_table.m"
          case (MR_Integer) 1:
#line 746 "hash_table.m"
            {
#line 746 "hash_table.m"
              MR_Box mercury__hash_table__K_9 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 0));
#line 746 "hash_table.m"
              MR_Box mercury__hash_table__V_10 = (MR_hl_field(MR_mktag(1), mercury__hash_table__List_6, (MR_Integer) 1));
#line 747 "hash_table.m"
              MR_Box MR_CALL (* mercury__hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__hash_table__F_5, (MR_Integer) 1)));

#line 747 "hash_table.m"
              {
#line 747 "hash_table.m"
                *mercury__hash_table__A_8 = mercury__hash_table__func_1(((MR_Box) mercury__hash_table__F_5), mercury__hash_table__K_9, mercury__hash_table__V_10, mercury__hash_table__A0_7);
              }
#line 746 "hash_table.m"
            }
#line 745 "hash_table.m"
            break;
#line 745 "hash_table.m"
          case (MR_Integer) 2:
#line 749 "hash_table.m"
            {
#line 749 "hash_table.m"
              MR_Word mercury__hash_table__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 2)));
#line 749 "hash_table.m"
              MR_Box mercury__hash_table__A1_12;
#line 749 "hash_table.m"
              MR_Box mercury__hash_table__K_13 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 0));
#line 749 "hash_table.m"
              MR_Box mercury__hash_table__V_14 = (MR_hl_field(MR_mktag(2), mercury__hash_table__List_6, (MR_Integer) 1));
#line 750 "hash_table.m"
              MR_Box MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__hash_table__F_5, (MR_Integer) 1)));

#line 750 "hash_table.m"
              {
#line 750 "hash_table.m"
                mercury__hash_table__A1_12 = mercury__hash_table__func_0(((MR_Box) mercury__hash_table__F_5), mercury__hash_table__K_13, mercury__hash_table__V_14, mercury__hash_table__A0_7);
              }
#line 751 "hash_table.m"
              /* direct tailcall eliminated */
#line 751 "hash_table.m"
              {
#line 751 "hash_table.m"
                MR_Word mercury__hash_table__List__tmp_copy_6 = mercury__hash_table__KVs_11;
#line 751 "hash_table.m"
                MR_Box mercury__hash_table__A0__tmp_copy_7 = mercury__hash_table__A1_12;

#line 751 "hash_table.m"
                mercury__hash_table__A0_7 = mercury__hash_table__A0__tmp_copy_7;
#line 751 "hash_table.m"
                mercury__hash_table__List_6 = mercury__hash_table__List__tmp_copy_6;
#line 751 "hash_table.m"
              }
#line 751 "hash_table.m"
              continue;
#line 749 "hash_table.m"
            }
#line 745 "hash_table.m"
            break;
#line 745 "hash_table.m"
        }
#line 745 "hash_table.m"
      }
#line 745 "hash_table.m"
      break;
#line 745 "hash_table.m"
    }
#line 738 "hash_table.m"
}

#line 575 "hash_table.m"
static MR_Word MR_CALL 
mercury__hash_table__expand_4_f_0(
#line 575 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_20,
#line 575 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_21,
#line 575 "hash_table.m"
  MR_Integer mercury__hash_table__NumOccupants_6,
#line 575 "hash_table.m"
  MR_Integer mercury__hash_table__MaxOccupants0_7,
#line 575 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_8,
#line 575 "hash_table.m"
  MR_ArrayPtr mercury__hash_table__Buckets0_9)
#line 575 "hash_table.m"
{
#line 580 "hash_table.m"
  {
#line 580 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 580 "hash_table.m"
    MR_Word mercury__hash_table__HT_10;
#line 580 "hash_table.m"
    MR_Word mercury__hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2;
#line 580 "hash_table.m"
    MR_Word mercury__hash_table__TypeInfo_23_23;
#line 580 "hash_table.m"
    MR_Integer mercury__hash_table__NumBuckets0_11;
#line 580 "hash_table.m"
    MR_Integer mercury__hash_table__NumBuckets_12;
#line 580 "hash_table.m"
    MR_Integer mercury__hash_table__MaxOccupants_13;
#line 580 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Buckets1_14;
#line 580 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Buckets_15;
#line 580 "hash_table.m"
    MR_Word mercury__hash_table__V_18_18;
#line 893 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_26;
#line 584 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__conv0_Buckets1_14;

#line 5190 "hash_table.c"
    {
#line 5192 "hash_table.c"
      mercury__hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5194 "hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__hash_table__TypeCtorInfo_22_22));
#line 5196 "hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__hash_table__TypeInfo_for_K_20));
#line 5198 "hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__hash_table__TypeInfo_for_V_21));
#line 5200 "hash_table.c"
    }
#line 893 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__expand_4_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Buckets0_9 , Array);
		{
#line 893 "array.opt"

    Max = Array->size;

#line 5215 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__NumBuckets0_11  = Max;
#line 893 "array.opt"
}
#line 582 "hash_table.m"
    mercury__hash_table__NumBuckets_12 = (mercury__hash_table__NumBuckets0_11 + mercury__hash_table__NumBuckets0_11);
#line 583 "hash_table.m"
    mercury__hash_table__MaxOccupants_13 = (mercury__hash_table__MaxOccupants0_7 + mercury__hash_table__MaxOccupants0_7);
#line 584 "hash_table.m"
    mercury__hash_table__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 584 "hash_table.m"
    {
#line 584 "hash_table.m"
      mercury__array__init_3_p_0(mercury__hash_table__TypeInfo_23_23, mercury__hash_table__NumBuckets_12, ((MR_Box) (mercury__hash_table__V_18_18)), &mercury__hash_table__conv0_Buckets1_14);
    }
#line 584 "hash_table.m"
    mercury__hash_table__Buckets1_14 = (MR_ArrayPtr) mercury__hash_table__conv0_Buckets1_14;
#line 585 "hash_table.m"
    {
#line 585 "hash_table.m"
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_105_110_115_101_114_116_95_98_105_110_100_105_110_103_115_95_95_91_49_44_32_50_93_95_48_6_p_0((MR_Integer) 0, mercury__hash_table__Buckets0_9, mercury__hash_table__HashPred_8, mercury__hash_table__NumBuckets_12, mercury__hash_table__Buckets1_14, &mercury__hash_table__Buckets_15);
    }
#line 586 "hash_table.m"
    {
#line 586 "hash_table.m"
      mercury__hash_table__HT_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 586 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, 0) = ((MR_Box) (mercury__hash_table__NumOccupants_6));
#line 586 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, 1) = ((MR_Box) (mercury__hash_table__MaxOccupants_13));
#line 586 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, 2) = ((MR_Box) (mercury__hash_table__HashPred_8));
#line 586 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__HT_10, 3) = ((MR_Box) (mercury__hash_table__Buckets_15));
#line 586 "hash_table.m"
    }
#line 580 "hash_table.m"
    return mercury__hash_table__HT_10;
#line 580 "hash_table.m"
  }
#line 575 "hash_table.m"
}

#line 555 "hash_table.m"
void MR_CALL 
mercury__hash_table__from_assoc_list_2_3_p_0(
#line 555 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_16,
#line 555 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_17,
#line 555 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__1_1,
#line 555 "hash_table.m"
  MR_Word mercury__hash_table__STATE_VARIABLE_HT_0_2,
#line 555 "hash_table.m"
  MR_Word * mercury__hash_table__STATE_VARIABLE_HT_3)
#line 555 "hash_table.m"
{
#line 558 "hash_table.m"
  while (MR_TRUE)
#line 558 "hash_table.m"
    {
#line 558 "hash_table.m"
      /* tailcall optimized into a loop */
#line 558 "hash_table.m"
      {
#line 558 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 558 "hash_table.m"
        if ((mercury__hash_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 558 "hash_table.m"
          *mercury__hash_table__STATE_VARIABLE_HT_3 = mercury__hash_table__STATE_VARIABLE_HT_0_2;
#line 558 "hash_table.m"
        else
#line 559 "hash_table.m"
          {
#line 559 "hash_table.m"
            MR_Box mercury__hash_table__K_7;
#line 559 "hash_table.m"
            MR_Box mercury__hash_table__V_8;
#line 559 "hash_table.m"
            MR_Word mercury__hash_table__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__1_1, (MR_Integer) 1)));
#line 559 "hash_table.m"
            MR_Word mercury__hash_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__hash_table__HeadVar__1_1, (MR_Integer) 0)));
#line 559 "hash_table.m"
            MR_Word mercury__hash_table__STATE_VARIABLE_HT_14_14;

#line 559 "hash_table.m"
            mercury__hash_table__K_7 = (MR_hl_field(MR_mktag(0), mercury__hash_table__V_13_13, (MR_Integer) 0));
#line 559 "hash_table.m"
            mercury__hash_table__V_8 = (MR_hl_field(MR_mktag(0), mercury__hash_table__V_13_13, (MR_Integer) 1));
#line 382 "hash_table.m"
            {
#line 382 "hash_table.m"
              mercury__hash_table__STATE_VARIABLE_HT_14_14 = mercury__hash_table__set_3_f_0(mercury__hash_table__TypeInfo_for_K_16, mercury__hash_table__TypeInfo_for_V_17, mercury__hash_table__STATE_VARIABLE_HT_0_2, mercury__hash_table__K_7, mercury__hash_table__V_8);
            }
#line 561 "hash_table.m"
            /* direct tailcall eliminated */
#line 561 "hash_table.m"
            {
#line 561 "hash_table.m"
              MR_Word mercury__hash_table__HeadVar__1__tmp_copy_1 = mercury__hash_table__T_9;
#line 561 "hash_table.m"
              MR_Word mercury__hash_table__STATE_VARIABLE_HT_0__tmp_copy_2 = mercury__hash_table__STATE_VARIABLE_HT_14_14;

#line 561 "hash_table.m"
              mercury__hash_table__STATE_VARIABLE_HT_0_2 = mercury__hash_table__STATE_VARIABLE_HT_0__tmp_copy_2;
#line 561 "hash_table.m"
              mercury__hash_table__HeadVar__1_1 = mercury__hash_table__HeadVar__1__tmp_copy_1;
#line 561 "hash_table.m"
            }
#line 561 "hash_table.m"
            continue;
#line 559 "hash_table.m"
          }
#line 558 "hash_table.m"
      }
#line 558 "hash_table.m"
      break;
#line 558 "hash_table.m"
    }
#line 555 "hash_table.m"
}

#line 533 "hash_table.m"
void MR_CALL 
mercury__hash_table__to_assoc_list_2_3_p_0(
#line 533 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_15,
#line 533 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_16,
#line 533 "hash_table.m"
  MR_Word mercury__hash_table__X_4,
#line 533 "hash_table.m"
  MR_Word mercury__hash_table__AL0_5,
#line 533 "hash_table.m"
  MR_Word * mercury__hash_table__AL_6)
#line 533 "hash_table.m"
{
#line 540 "hash_table.m"
  while (MR_TRUE)
#line 540 "hash_table.m"
    {
#line 540 "hash_table.m"
      /* tailcall optimized into a loop */
#line 540 "hash_table.m"
      {
#line 540 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 540 "hash_table.m"
#line 540 "hash_table.m"
        switch (MR_tag((MR_Word) mercury__hash_table__X_4)) {
#line 540 "hash_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 540 "hash_table.m"
          case (MR_Integer) 0:
#line 539 "hash_table.m"
            *mercury__hash_table__AL_6 = mercury__hash_table__AL0_5;
#line 540 "hash_table.m"
            break;
#line 540 "hash_table.m"
          case (MR_Integer) 1:
#line 541 "hash_table.m"
            {
#line 541 "hash_table.m"
              MR_Box mercury__hash_table__K_7 = (MR_hl_field(MR_mktag(1), mercury__hash_table__X_4, (MR_Integer) 0));
#line 541 "hash_table.m"
              MR_Box mercury__hash_table__V_8 = (MR_hl_field(MR_mktag(1), mercury__hash_table__X_4, (MR_Integer) 1));
#line 541 "hash_table.m"
              MR_Word mercury__hash_table__V_12_12;

#line 542 "hash_table.m"
              {
#line 542 "hash_table.m"
                mercury__hash_table__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 542 "hash_table.m"
                MR_hl_field(MR_mktag(0), mercury__hash_table__V_12_12, 0) = mercury__hash_table__K_7;
#line 542 "hash_table.m"
                MR_hl_field(MR_mktag(0), mercury__hash_table__V_12_12, 1) = mercury__hash_table__V_8;
#line 542 "hash_table.m"
              }
#line 542 "hash_table.m"
              {
#line 542 "hash_table.m"
                MR_Word base;
#line 542 "hash_table.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "hash_table.m"
                *mercury__hash_table__AL_6 = base;
#line 542 "hash_table.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__hash_table__V_12_12));
#line 542 "hash_table.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__hash_table__AL0_5));
#line 542 "hash_table.m"
              }
#line 541 "hash_table.m"
            }
#line 540 "hash_table.m"
            break;
#line 540 "hash_table.m"
          case (MR_Integer) 2:
#line 544 "hash_table.m"
            {
#line 544 "hash_table.m"
              MR_Word mercury__hash_table__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__X_4, (MR_Integer) 2)));
#line 544 "hash_table.m"
              MR_Word mercury__hash_table__AL1_10;
#line 544 "hash_table.m"
              MR_Word mercury__hash_table__V_11_11;
#line 544 "hash_table.m"
              MR_Box mercury__hash_table__K_13 = (MR_hl_field(MR_mktag(2), mercury__hash_table__X_4, (MR_Integer) 0));
#line 544 "hash_table.m"
              MR_Box mercury__hash_table__V_14 = (MR_hl_field(MR_mktag(2), mercury__hash_table__X_4, (MR_Integer) 1));

#line 545 "hash_table.m"
              {
#line 545 "hash_table.m"
                mercury__hash_table__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 545 "hash_table.m"
                MR_hl_field(MR_mktag(0), mercury__hash_table__V_11_11, 0) = mercury__hash_table__K_13;
#line 545 "hash_table.m"
                MR_hl_field(MR_mktag(0), mercury__hash_table__V_11_11, 1) = mercury__hash_table__V_14;
#line 545 "hash_table.m"
              }
#line 545 "hash_table.m"
              {
#line 545 "hash_table.m"
                mercury__hash_table__AL1_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 545 "hash_table.m"
                MR_hl_field(MR_mktag(1), mercury__hash_table__AL1_10, 0) = ((MR_Box) (mercury__hash_table__V_11_11));
#line 545 "hash_table.m"
                MR_hl_field(MR_mktag(1), mercury__hash_table__AL1_10, 1) = ((MR_Box) (mercury__hash_table__AL0_5));
#line 545 "hash_table.m"
              }
#line 546 "hash_table.m"
              /* direct tailcall eliminated */
#line 546 "hash_table.m"
              {
#line 546 "hash_table.m"
                MR_Word mercury__hash_table__X__tmp_copy_4 = mercury__hash_table__T_9;
#line 546 "hash_table.m"
                MR_Word mercury__hash_table__AL0__tmp_copy_5 = mercury__hash_table__AL1_10;

#line 546 "hash_table.m"
                mercury__hash_table__AL0_5 = mercury__hash_table__AL0__tmp_copy_5;
#line 546 "hash_table.m"
                mercury__hash_table__X_4 = mercury__hash_table__X__tmp_copy_4;
#line 546 "hash_table.m"
              }
#line 546 "hash_table.m"
              continue;
#line 544 "hash_table.m"
            }
#line 540 "hash_table.m"
            break;
#line 540 "hash_table.m"
        }
#line 540 "hash_table.m"
      }
#line 540 "hash_table.m"
      break;
#line 540 "hash_table.m"
    }
#line 533 "hash_table.m"
}

#line 416 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table__alist_search_3_p_0(
#line 416 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_10,
#line 416 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_11,
#line 416 "hash_table.m"
  MR_Word mercury__hash_table__AL_4,
#line 416 "hash_table.m"
  MR_Box mercury__hash_table__K_5,
#line 416 "hash_table.m"
  MR_Box * mercury__hash_table__V_6)
#line 416 "hash_table.m"
{
#line 423 "hash_table.m"
  while (MR_TRUE)
#line 423 "hash_table.m"
    {
#line 423 "hash_table.m"
      /* tailcall optimized into a loop */
#line 423 "hash_table.m"
      {
#line 423 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;

#line 423 "hash_table.m"
        if (((MR_tag((MR_Word) mercury__hash_table__AL_4)) == (MR_mktag((MR_Integer) 2))))
#line 426 "hash_table.m"
          {
#line 426 "hash_table.m"
            MR_Box mercury__hash_table__HK_7 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL_4, (MR_Integer) 0));
#line 426 "hash_table.m"
            MR_Box mercury__hash_table__HV_8 = (MR_hl_field(MR_mktag(2), mercury__hash_table__AL_4, (MR_Integer) 1));
#line 426 "hash_table.m"
            MR_Word mercury__hash_table__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__hash_table__AL_4, (MR_Integer) 2)));

#line 427 "hash_table.m"
            {
#line 427 "hash_table.m"
              mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_10, mercury__hash_table__HK_7, mercury__hash_table__K_5);
            }
#line 429 "hash_table.m"
            if (mercury__hash_table__succeeded)
#line 428 "hash_table.m"
              {
#line 428 "hash_table.m"
                *mercury__hash_table__V_6 = mercury__hash_table__HV_8;
#line 428 "hash_table.m"
                mercury__hash_table__succeeded = MR_TRUE;
#line 428 "hash_table.m"
              }
#line 429 "hash_table.m"
            else
#line 430 "hash_table.m"
              {
#line 430 "hash_table.m"
                /* direct tailcall eliminated */
#line 430 "hash_table.m"
                {
#line 430 "hash_table.m"
                  MR_Word mercury__hash_table__AL__tmp_copy_4 = mercury__hash_table__T_9;

#line 430 "hash_table.m"
                  mercury__hash_table__AL_4 = mercury__hash_table__AL__tmp_copy_4;
#line 430 "hash_table.m"
                }
#line 430 "hash_table.m"
                continue;
#line 430 "hash_table.m"
              }
#line 426 "hash_table.m"
          }
#line 423 "hash_table.m"
        else
#line 423 "hash_table.m"
        if (((MR_tag((MR_Word) mercury__hash_table__AL_4)) == (MR_mktag((MR_Integer) 1))))
#line 424 "hash_table.m"
          {
#line 424 "hash_table.m"
            MR_Box mercury__hash_table__V_12_12 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL_4, (MR_Integer) 0));

#line 424 "hash_table.m"
            *mercury__hash_table__V_6 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL_4, (MR_Integer) 1));
#line 424 "hash_table.m"
            {
#line 424 "hash_table.m"
              mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_10, mercury__hash_table__K_5, mercury__hash_table__V_12_12);
            }
#line 424 "hash_table.m"
          }
#line 423 "hash_table.m"
        else
#line 423 "hash_table.m"
          mercury__hash_table__succeeded = MR_FALSE;
#line 423 "hash_table.m"
        return mercury__hash_table__succeeded;
#line 423 "hash_table.m"
      }
#line 423 "hash_table.m"
      break;
#line 423 "hash_table.m"
    }
#line 416 "hash_table.m"
}

#line 323 "hash_table.m"
void MR_CALL 
mercury__hash_table__find_slot_2_4_p_0(
#line 323 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_12,
#line 323 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_5,
#line 323 "hash_table.m"
  MR_Box mercury__hash_table__K_6,
#line 323 "hash_table.m"
  MR_Integer mercury__hash_table__NumBuckets_7,
#line 323 "hash_table.m"
  MR_Integer * mercury__hash_table__H_8)
#line 323 "hash_table.m"
{
#line 327 "hash_table.m"
  {
#line 327 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 327 "hash_table.m"
    MR_Integer mercury__hash_table__Hash_9;
#line 327 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_10;
#line 328 "hash_table.m"
    void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__HashPred_5, (MR_Integer) 1)));
#line 328 "hash_table.m"
    MR_Box mercury__hash_table__conv1_Hash_9;

#line 328 "hash_table.m"
    {
#line 328 "hash_table.m"
      mercury__hash_table__func_0(((MR_Box) mercury__hash_table__HashPred_5), mercury__hash_table__K_6, &mercury__hash_table__conv1_Hash_9);
    }
#line 328 "hash_table.m"
    mercury__hash_table__Hash_9 = ((MR_Integer) mercury__hash_table__conv1_Hash_9);
#line 330 "hash_table.m"
    mercury__hash_table__V_10_10 = (mercury__hash_table__NumBuckets_7 - (MR_Integer) 1);
#line 330 "hash_table.m"
    *mercury__hash_table__H_8 = (mercury__hash_table__Hash_9 & mercury__hash_table__V_10_10);
#line 327 "hash_table.m"
  }
#line 323 "hash_table.m"
}

#line 316 "hash_table.m"
MR_Integer MR_CALL 
mercury__hash_table__find_slot_2_f_0(
#line 316 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_9,
#line 316 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_10,
#line 316 "hash_table.m"
  MR_Word mercury__hash_table__HT_4,
#line 316 "hash_table.m"
  MR_Box mercury__hash_table__K_5)
#line 316 "hash_table.m"
{
#line 320 "hash_table.m"
  {
#line 320 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 320 "hash_table.m"
    MR_Integer mercury__hash_table__H_6;
#line 320 "hash_table.m"
    MR_Word mercury__hash_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 2)));
#line 320 "hash_table.m"
    MR_Integer mercury__hash_table__V_8_8;
#line 320 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 3)));
#line 320 "hash_table.m"
    MR_Integer mercury__hash_table__Hash_27;
#line 320 "hash_table.m"
    MR_Integer mercury__hash_table__V_28_28;
#line 92 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 0)));
#line 92 "hash_table.m"
    MR_Integer mercury__hash_table__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 1)));
#line 893 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_11_30;
#line 328 "hash_table.m"
    void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 328 "hash_table.m"
    MR_Box mercury__hash_table__conv1_Hash_27;

#line 893 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__find_slot_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_13_13 , Array);
		{
#line 893 "array.opt"

    Max = Array->size;

#line 5689 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_8_8  = Max;
#line 893 "array.opt"
}
#line 328 "hash_table.m"
    mercury__hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__V_7_7, (MR_Integer) 1)));
#line 328 "hash_table.m"
    {
#line 328 "hash_table.m"
      mercury__hash_table__func_0(((MR_Box) mercury__hash_table__V_7_7), mercury__hash_table__K_5, &mercury__hash_table__conv1_Hash_27);
    }
#line 328 "hash_table.m"
    mercury__hash_table__Hash_27 = ((MR_Integer) mercury__hash_table__conv1_Hash_27);
#line 330 "hash_table.m"
    mercury__hash_table__V_28_28 = (mercury__hash_table__V_8_8 - (MR_Integer) 1);
#line 330 "hash_table.m"
    mercury__hash_table__H_6 = (mercury__hash_table__Hash_27 & mercury__hash_table__V_28_28);
#line 320 "hash_table.m"
    return mercury__hash_table__H_6;
#line 320 "hash_table.m"
  }
#line 316 "hash_table.m"
}

#line 229 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table__fold_4_p_5(
#line 229 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_16,
#line 229 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_17,
#line 229 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_18,
#line 229 "hash_table.m"
  MR_Word mercury__hash_table__P_5,
#line 229 "hash_table.m"
  MR_Word mercury__hash_table__HT_6,
#line 229 "hash_table.m"
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_8,
#line 229 "hash_table.m"
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_9)
#line 229 "hash_table.m"
{
#line 754 "hash_table.m"
  {
#line 754 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 754 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
#line 754 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_28;
#line 754 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_29;
#line 755 "hash_table.m"
    MR_Integer mercury__hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
#line 755 "hash_table.m"
    MR_Integer mercury__hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
#line 755 "hash_table.m"
    MR_Word mercury__hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
#line 852 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_35;
#line 839 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_36;

#line 852 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_5

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 852 "array.opt"

    /* Array not used */
    Min = 0;

#line 5770 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_28  = Min;
#line 852 "array.opt"
}
#line 839 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_5

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 839 "array.opt"

    Max = Array->size - 1;

#line 5790 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_29  = Max;
#line 839 "array.opt"
}
#line 573 "array.opt"
    {
#line 573 "array.opt"
      mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_16, mercury__hash_table__TypeInfo_for_V_17, mercury__hash_table__TypeInfo_for_T_18, mercury__hash_table__P_5, mercury__hash_table__V_11_11, mercury__hash_table__V_10_28, mercury__hash_table__V_11_29, mercury__hash_table__STATE_VARIABLE_A_0_8, mercury__hash_table__STATE_VARIABLE_A_9);
    }
#line 754 "hash_table.m"
    return mercury__hash_table__succeeded;
#line 754 "hash_table.m"
  }
#line 229 "hash_table.m"
}

#line 227 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table__fold_4_p_4(
#line 227 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_16,
#line 227 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_17,
#line 227 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_18,
#line 227 "hash_table.m"
  MR_Word mercury__hash_table__P_5,
#line 227 "hash_table.m"
  MR_Word mercury__hash_table__HT_6,
#line 227 "hash_table.m"
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_8,
#line 227 "hash_table.m"
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_9)
#line 227 "hash_table.m"
{
#line 754 "hash_table.m"
  {
#line 754 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 754 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
#line 754 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_28;
#line 754 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_29;
#line 755 "hash_table.m"
    MR_Integer mercury__hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
#line 755 "hash_table.m"
    MR_Integer mercury__hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
#line 755 "hash_table.m"
    MR_Word mercury__hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
#line 852 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_35;
#line 839 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_36;

#line 852 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_4

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 852 "array.opt"

    /* Array not used */
    Min = 0;

#line 5863 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_28  = Min;
#line 852 "array.opt"
}
#line 839 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_4

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 839 "array.opt"

    Max = Array->size - 1;

#line 5883 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_29  = Max;
#line 839 "array.opt"
}
#line 573 "array.opt"
    {
#line 573 "array.opt"
      mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_16, mercury__hash_table__TypeInfo_for_V_17, mercury__hash_table__TypeInfo_for_T_18, mercury__hash_table__P_5, mercury__hash_table__V_11_11, mercury__hash_table__V_10_28, mercury__hash_table__V_11_29, mercury__hash_table__STATE_VARIABLE_A_0_8, mercury__hash_table__STATE_VARIABLE_A_9);
    }
#line 754 "hash_table.m"
    return mercury__hash_table__succeeded;
#line 754 "hash_table.m"
  }
#line 227 "hash_table.m"
}

#line 225 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table__fold_4_p_3(
#line 225 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_16,
#line 225 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_17,
#line 225 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_18,
#line 225 "hash_table.m"
  MR_Word mercury__hash_table__P_5,
#line 225 "hash_table.m"
  MR_Word mercury__hash_table__HT_6,
#line 225 "hash_table.m"
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_8,
#line 225 "hash_table.m"
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_9)
#line 225 "hash_table.m"
{
#line 754 "hash_table.m"
  {
#line 754 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 754 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
#line 754 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_28;
#line 754 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_29;
#line 755 "hash_table.m"
    MR_Integer mercury__hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
#line 755 "hash_table.m"
    MR_Integer mercury__hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
#line 755 "hash_table.m"
    MR_Word mercury__hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
#line 852 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_35;
#line 839 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_36;

#line 852 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 852 "array.opt"

    /* Array not used */
    Min = 0;

#line 5956 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_28  = Min;
#line 852 "array.opt"
}
#line 839 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 839 "array.opt"

    Max = Array->size - 1;

#line 5976 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_29  = Max;
#line 839 "array.opt"
}
#line 573 "array.opt"
    {
#line 573 "array.opt"
      mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_16, mercury__hash_table__TypeInfo_for_V_17, mercury__hash_table__TypeInfo_for_T_18, mercury__hash_table__P_5, mercury__hash_table__V_11_11, mercury__hash_table__V_10_28, mercury__hash_table__V_11_29, mercury__hash_table__STATE_VARIABLE_A_0_8, mercury__hash_table__STATE_VARIABLE_A_9);
    }
#line 754 "hash_table.m"
    return mercury__hash_table__succeeded;
#line 754 "hash_table.m"
  }
#line 225 "hash_table.m"
}

#line 223 "hash_table.m"
void MR_CALL 
mercury__hash_table__fold_4_p_2(
#line 223 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_16,
#line 223 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_17,
#line 223 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_18,
#line 223 "hash_table.m"
  MR_Word mercury__hash_table__P_5,
#line 223 "hash_table.m"
  MR_Word mercury__hash_table__HT_6,
#line 223 "hash_table.m"
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_8,
#line 223 "hash_table.m"
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_9)
#line 223 "hash_table.m"
{
#line 754 "hash_table.m"
  {
#line 754 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 754 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
#line 754 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_28;
#line 754 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_29;
#line 755 "hash_table.m"
    MR_Integer mercury__hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
#line 755 "hash_table.m"
    MR_Integer mercury__hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
#line 755 "hash_table.m"
    MR_Word mercury__hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
#line 852 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_35;
#line 839 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_36;

#line 852 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 852 "array.opt"

    /* Array not used */
    Min = 0;

#line 6049 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_28  = Min;
#line 852 "array.opt"
}
#line 839 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 839 "array.opt"

    Max = Array->size - 1;

#line 6069 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_29  = Max;
#line 839 "array.opt"
}
#line 573 "array.opt"
    {
#line 573 "array.opt"
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_16, mercury__hash_table__TypeInfo_for_V_17, mercury__hash_table__TypeInfo_for_T_18, mercury__hash_table__P_5, mercury__hash_table__V_11_11, mercury__hash_table__V_10_28, mercury__hash_table__V_11_29, mercury__hash_table__STATE_VARIABLE_A_0_8, mercury__hash_table__STATE_VARIABLE_A_9);
    }
#line 754 "hash_table.m"
  }
#line 223 "hash_table.m"
}

#line 221 "hash_table.m"
void MR_CALL 
mercury__hash_table__fold_4_p_1(
#line 221 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_16,
#line 221 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_17,
#line 221 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_18,
#line 221 "hash_table.m"
  MR_Word mercury__hash_table__P_5,
#line 221 "hash_table.m"
  MR_Word mercury__hash_table__HT_6,
#line 221 "hash_table.m"
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_8,
#line 221 "hash_table.m"
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_9)
#line 221 "hash_table.m"
{
#line 754 "hash_table.m"
  {
#line 754 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 754 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
#line 754 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_28;
#line 754 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_29;
#line 755 "hash_table.m"
    MR_Integer mercury__hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
#line 755 "hash_table.m"
    MR_Integer mercury__hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
#line 755 "hash_table.m"
    MR_Word mercury__hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
#line 852 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_35;
#line 839 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_36;

#line 852 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 852 "array.opt"

    /* Array not used */
    Min = 0;

#line 6140 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_28  = Min;
#line 852 "array.opt"
}
#line 839 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 839 "array.opt"

    Max = Array->size - 1;

#line 6160 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_29  = Max;
#line 839 "array.opt"
}
#line 573 "array.opt"
    {
#line 573 "array.opt"
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_16, mercury__hash_table__TypeInfo_for_V_17, mercury__hash_table__TypeInfo_for_T_18, mercury__hash_table__P_5, mercury__hash_table__V_11_11, mercury__hash_table__V_10_28, mercury__hash_table__V_11_29, mercury__hash_table__STATE_VARIABLE_A_0_8, mercury__hash_table__STATE_VARIABLE_A_9);
    }
#line 754 "hash_table.m"
  }
#line 221 "hash_table.m"
}

#line 219 "hash_table.m"
void MR_CALL 
mercury__hash_table__fold_4_p_0(
#line 219 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_16,
#line 219 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_17,
#line 219 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_18,
#line 219 "hash_table.m"
  MR_Word mercury__hash_table__P_5,
#line 219 "hash_table.m"
  MR_Word mercury__hash_table__HT_6,
#line 219 "hash_table.m"
  MR_Box mercury__hash_table__STATE_VARIABLE_A_0_8,
#line 219 "hash_table.m"
  MR_Box * mercury__hash_table__STATE_VARIABLE_A_9)
#line 219 "hash_table.m"
{
#line 754 "hash_table.m"
  {
#line 754 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 754 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
#line 754 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_28;
#line 754 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_29;
#line 755 "hash_table.m"
    MR_Integer mercury__hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
#line 755 "hash_table.m"
    MR_Integer mercury__hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
#line 755 "hash_table.m"
    MR_Word mercury__hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
#line 852 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_35;
#line 839 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_23_36;

#line 852 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 852 "array.opt"

    /* Array not used */
    Min = 0;

#line 6231 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_28  = Min;
#line 852 "array.opt"
}
#line 839 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_11_11 , Array);
		{
#line 839 "array.opt"

    Max = Array->size - 1;

#line 6251 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_29  = Max;
#line 839 "array.opt"
}
#line 573 "array.opt"
    {
#line 573 "array.opt"
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_16, mercury__hash_table__TypeInfo_for_V_17, mercury__hash_table__TypeInfo_for_T_18, mercury__hash_table__P_5, mercury__hash_table__V_11_11, mercury__hash_table__V_10_28, mercury__hash_table__V_11_29, mercury__hash_table__STATE_VARIABLE_A_0_8, mercury__hash_table__STATE_VARIABLE_A_9);
    }
#line 754 "hash_table.m"
  }
#line 219 "hash_table.m"
}

#line 214 "hash_table.m"
MR_Box MR_CALL 
mercury__hash_table__fold_3_f_1(
#line 214 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_14,
#line 214 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_15,
#line 214 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_16,
#line 214 "hash_table.m"
  MR_Word mercury__hash_table__F_5,
#line 214 "hash_table.m"
  MR_Word mercury__hash_table__HT_6,
#line 214 "hash_table.m"
  MR_Box mercury__hash_table__X0_7)
#line 214 "hash_table.m"
{
#line 734 "hash_table.m"
  {
#line 734 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 734 "hash_table.m"
    MR_Box mercury__hash_table__X_8;
#line 734 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_10_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
#line 734 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_26;
#line 734 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_27;
#line 735 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
#line 735 "hash_table.m"
    MR_Integer mercury__hash_table__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
#line 735 "hash_table.m"
    MR_Word mercury__hash_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
#line 852 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_21_33;
#line 839 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_21_34;

#line 852 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_3_f_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_10_10 , Array);
		{
#line 852 "array.opt"

    /* Array not used */
    Min = 0;

#line 6322 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_26  = Min;
#line 852 "array.opt"
}
#line 839 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_3_f_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_10_10 , Array);
		{
#line 839 "array.opt"

    Max = Array->size - 1;

#line 6342 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_27  = Max;
#line 839 "array.opt"
}
#line 573 "array.opt"
    {
#line 573 "array.opt"
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_14, mercury__hash_table__TypeInfo_for_V_15, mercury__hash_table__TypeInfo_for_T_16, mercury__hash_table__F_5, mercury__hash_table__V_10_10, mercury__hash_table__V_10_26, mercury__hash_table__V_11_27, mercury__hash_table__X0_7, &mercury__hash_table__X_8);
    }
#line 734 "hash_table.m"
    return mercury__hash_table__X_8;
#line 734 "hash_table.m"
  }
#line 214 "hash_table.m"
}

#line 213 "hash_table.m"
MR_Box MR_CALL 
mercury__hash_table__fold_3_f_0(
#line 213 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_14,
#line 213 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_15,
#line 213 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_16,
#line 213 "hash_table.m"
  MR_Word mercury__hash_table__F_5,
#line 213 "hash_table.m"
  MR_Word mercury__hash_table__HT_6,
#line 213 "hash_table.m"
  MR_Box mercury__hash_table__X0_7)
#line 213 "hash_table.m"
{
#line 734 "hash_table.m"
  {
#line 734 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 734 "hash_table.m"
    MR_Box mercury__hash_table__X_8;
#line 734 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_10_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 3)));
#line 734 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_26;
#line 734 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_27;
#line 735 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 0)));
#line 735 "hash_table.m"
    MR_Integer mercury__hash_table__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 1)));
#line 735 "hash_table.m"
    MR_Word mercury__hash_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, (MR_Integer) 2)));
#line 852 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_21_33;
#line 839 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_21_34;

#line 852 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_10_10 , Array);
		{
#line 852 "array.opt"

    /* Array not used */
    Min = 0;

#line 6415 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_26  = Min;
#line 852 "array.opt"
}
#line 839 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__fold_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_10_10 , Array);
		{
#line 839 "array.opt"

    Max = Array->size - 1;

#line 6435 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_27  = Max;
#line 839 "array.opt"
}
#line 573 "array.opt"
    {
#line 573 "array.opt"
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_55_44_32_56_44_32_57_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_14, mercury__hash_table__TypeInfo_for_V_15, mercury__hash_table__TypeInfo_for_T_16, mercury__hash_table__F_5, mercury__hash_table__V_10_10, mercury__hash_table__V_10_26, mercury__hash_table__V_11_27, mercury__hash_table__X0_7, &mercury__hash_table__X_8);
    }
#line 734 "hash_table.m"
    return mercury__hash_table__X_8;
#line 734 "hash_table.m"
  }
#line 213 "hash_table.m"
}

#line 207 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__from_assoc_list_2_f_0(
#line 207 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_8,
#line 207 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_9,
#line 207 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_4,
#line 207 "hash_table.m"
  MR_Word mercury__hash_table__AList_5)
#line 207 "hash_table.m"
{
#line 552 "hash_table.m"
  {
#line 552 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 552 "hash_table.m"
    MR_Word mercury__hash_table__HT_6;
#line 552 "hash_table.m"
    MR_Word mercury__hash_table__V_7_7;

#line 306 "hash_table.m"
    {
#line 306 "hash_table.m"
      mercury__hash_table__V_7_7 = mercury__hash_table__init_3_f_0(mercury__hash_table__TypeInfo_for_K_8, mercury__hash_table__TypeInfo_for_V_9, mercury__hash_table__HashPred_4, (MR_Integer) 7, (MR_Float) 0.90000000000000002);
    }
#line 553 "hash_table.m"
    {
#line 553 "hash_table.m"
      mercury__hash_table__from_assoc_list_2_3_p_0(mercury__hash_table__TypeInfo_for_K_8, mercury__hash_table__TypeInfo_for_V_9, mercury__hash_table__AList_5, mercury__hash_table__V_7_7, &mercury__hash_table__HT_6);
    }
#line 552 "hash_table.m"
    return mercury__hash_table__HT_6;
#line 552 "hash_table.m"
  }
#line 207 "hash_table.m"
}

#line 202 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__from_assoc_list_4_f_0(
#line 202 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_12,
#line 202 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_13,
#line 202 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_6,
#line 202 "hash_table.m"
  MR_Integer mercury__hash_table__N_7,
#line 202 "hash_table.m"
  MR_Float mercury__hash_table__MaxOccupants_8,
#line 202 "hash_table.m"
  MR_Word mercury__hash_table__AList_9)
#line 202 "hash_table.m"
{
#line 549 "hash_table.m"
  {
#line 549 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 549 "hash_table.m"
    MR_Word mercury__hash_table__HT_10;
#line 549 "hash_table.m"
    MR_Word mercury__hash_table__V_11_11;

#line 550 "hash_table.m"
    {
#line 550 "hash_table.m"
      mercury__hash_table__V_11_11 = mercury__hash_table__init_3_f_0(mercury__hash_table__TypeInfo_for_K_12, mercury__hash_table__TypeInfo_for_V_13, mercury__hash_table__HashPred_6, mercury__hash_table__N_7, mercury__hash_table__MaxOccupants_8);
    }
#line 550 "hash_table.m"
    {
#line 550 "hash_table.m"
      mercury__hash_table__from_assoc_list_2_3_p_0(mercury__hash_table__TypeInfo_for_K_12, mercury__hash_table__TypeInfo_for_V_13, mercury__hash_table__AList_9, mercury__hash_table__V_11_11, &mercury__hash_table__HT_10);
    }
#line 549 "hash_table.m"
    return mercury__hash_table__HT_10;
#line 549 "hash_table.m"
  }
#line 202 "hash_table.m"
}

#line 192 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__to_assoc_list_1_f_0(
#line 192 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_11,
#line 192 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_12,
#line 192 "hash_table.m"
  MR_Word mercury__hash_table__HT_3)
#line 192 "hash_table.m"
{
#line 530 "hash_table.m"
  {
#line 530 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 530 "hash_table.m"
    MR_Word mercury__hash_table__AL_4;
#line 530 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_6_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 3)));
#line 530 "hash_table.m"
    MR_Word mercury__hash_table__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 530 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_26;
#line 530 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_27;
#line 531 "hash_table.m"
    MR_Integer mercury__hash_table__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 0)));
#line 531 "hash_table.m"
    MR_Integer mercury__hash_table__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 1)));
#line 531 "hash_table.m"
    MR_Word mercury__hash_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 2)));
#line 852 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_17_35;
#line 839 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_17_36;

#line 852 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__to_assoc_list_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_6_6 , Array);
		{
#line 852 "array.opt"

    /* Array not used */
    Min = 0;

#line 6586 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_10_26  = Min;
#line 852 "array.opt"
}
#line 839 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__to_assoc_list_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_6_6 , Array);
		{
#line 839 "array.opt"

    Max = Array->size - 1;

#line 6606 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_11_27  = Max;
#line 839 "array.opt"
}
#line 573 "array.opt"
    {
#line 573 "array.opt"
      mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_6_p_in__array_0(mercury__hash_table__TypeInfo_for_K_11, mercury__hash_table__TypeInfo_for_V_12, mercury__hash_table__V_6_6, mercury__hash_table__V_10_26, mercury__hash_table__V_11_27, mercury__hash_table__V_7_7, &mercury__hash_table__AL_4);
    }
#line 530 "hash_table.m"
    return mercury__hash_table__AL_4;
#line 530 "hash_table.m"
  }
#line 192 "hash_table.m"
}

#line 186 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table__search_3_p_0(
#line 186 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_6,
#line 186 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_7,
#line 186 "hash_table.m"
  MR_Word mercury__hash_table__HT_4,
#line 186 "hash_table.m"
  MR_Box mercury__hash_table__K_5,
#line 186 "hash_table.m"
  MR_Box * mercury__hash_table__HeadVar__3_3)
#line 186 "hash_table.m"
{
#line 409 "hash_table.m"
  {
#line 409 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;

#line 409 "hash_table.m"
    {
#line 409 "hash_table.m"
      mercury__hash_table__succeeded = mercury__hash_table__search_2_f_0(mercury__hash_table__TypeInfo_for_K_6, mercury__hash_table__TypeInfo_for_V_7, mercury__hash_table__HT_4, mercury__hash_table__K_5, mercury__hash_table__HeadVar__3_3);
    }
#line 409 "hash_table.m"
    return mercury__hash_table__succeeded;
#line 409 "hash_table.m"
  }
#line 186 "hash_table.m"
}

#line 182 "hash_table.m"
MR_bool MR_CALL 
mercury__hash_table__search_2_f_0(
#line 182 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_13,
#line 182 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_14,
#line 182 "hash_table.m"
  MR_Word mercury__hash_table__HT_4,
#line 182 "hash_table.m"
  MR_Box mercury__hash_table__K_5,
#line 182 "hash_table.m"
  MR_Box * mercury__hash_table__V_6)
#line 182 "hash_table.m"
{
#line 411 "hash_table.m"
  {
#line 411 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 411 "hash_table.m"
    MR_Integer mercury__hash_table__H_7;
#line 411 "hash_table.m"
    MR_Word mercury__hash_table__AL_8;
#line 411 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_9_9;
#line 411 "hash_table.m"
    MR_Word mercury__hash_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 2)));
#line 411 "hash_table.m"
    MR_Integer mercury__hash_table__V_21_21;
#line 411 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 3)));
#line 411 "hash_table.m"
    MR_Integer mercury__hash_table__Hash_38;
#line 411 "hash_table.m"
    MR_Integer mercury__hash_table__V_39_39;
#line 92 "hash_table.m"
    MR_Integer mercury__hash_table__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 0)));
#line 92 "hash_table.m"
    MR_Integer mercury__hash_table__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 1)));
#line 893 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_11_41;
#line 328 "hash_table.m"
    void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 328 "hash_table.m"
    MR_Box mercury__hash_table__conv1_Hash_38;
#line 413 "hash_table.m"
    MR_Integer mercury__hash_table__V_10_10;
#line 413 "hash_table.m"
    MR_Integer mercury__hash_table__V_11_11;
#line 413 "hash_table.m"
    MR_Word mercury__hash_table__V_12_12;
#line 942 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_16_42;
#line 942 "array.opt"
    MR_Box mercury__hash_table__conv2_Item;

#line 893 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__search_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_24_24 , Array);
		{
#line 893 "array.opt"

    Max = Array->size;

#line 6726 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_21_21  = Max;
#line 893 "array.opt"
}
#line 328 "hash_table.m"
    mercury__hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__V_20_20, (MR_Integer) 1)));
#line 328 "hash_table.m"
    {
#line 328 "hash_table.m"
      mercury__hash_table__func_0(((MR_Box) mercury__hash_table__V_20_20), mercury__hash_table__K_5, &mercury__hash_table__conv1_Hash_38);
    }
#line 328 "hash_table.m"
    mercury__hash_table__Hash_38 = ((MR_Integer) mercury__hash_table__conv1_Hash_38);
#line 330 "hash_table.m"
    mercury__hash_table__V_39_39 = (mercury__hash_table__V_21_21 - (MR_Integer) 1);
#line 330 "hash_table.m"
    mercury__hash_table__H_7 = (mercury__hash_table__Hash_38 & mercury__hash_table__V_39_39);
#line 413 "hash_table.m"
    mercury__hash_table__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 0)));
#line 413 "hash_table.m"
    mercury__hash_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 1)));
#line 413 "hash_table.m"
    mercury__hash_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 2)));
#line 413 "hash_table.m"
    mercury__hash_table__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_4, (MR_Integer) 3)));
#line 942 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__search_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_9_9 , Array);
	Index =  mercury__hash_table__H_7 ;
		{
#line 942 "array.opt"

    Item = Array->elements[Index];

#line 6769 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv2_Item  = (MR_Box) Item;
#line 942 "array.opt"
    mercury__hash_table__AL_8 = ((MR_Word) mercury__hash_table__conv2_Item);
#line 942 "array.opt"
}
#line 414 "hash_table.m"
    {
#line 414 "hash_table.m"
      mercury__hash_table__succeeded = mercury__hash_table__alist_search_3_p_0(mercury__hash_table__TypeInfo_for_K_13, mercury__hash_table__TypeInfo_for_V_14, mercury__hash_table__AL_8, mercury__hash_table__K_5, mercury__hash_table__V_6);
    }
#line 411 "hash_table.m"
    return mercury__hash_table__succeeded;
#line 411 "hash_table.m"
  }
#line 182 "hash_table.m"
}

#line 176 "hash_table.m"
MR_Box MR_CALL 
mercury__hash_table__elem_2_f_0(
#line 176 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_6,
#line 176 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_7,
#line 176 "hash_table.m"
  MR_Box mercury__hash_table__K_4,
#line 176 "hash_table.m"
  MR_Word mercury__hash_table__HT_5)
#line 176 "hash_table.m"
{
#line 482 "hash_table.m"
  {
#line 482 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 482 "hash_table.m"
    MR_Box mercury__hash_table__HeadVar__3_3;
#line 482 "hash_table.m"
    MR_Box mercury__hash_table__V_10;

#line 483 "hash_table.m"
    {
#line 483 "hash_table.m"
      mercury__hash_table__succeeded = mercury__hash_table__search_2_f_0(mercury__hash_table__TypeInfo_for_K_6, mercury__hash_table__TypeInfo_for_V_7, mercury__hash_table__HT_5, mercury__hash_table__K_4, &mercury__hash_table__V_10);
    }
#line 482 "hash_table.m"
    if (mercury__hash_table__succeeded)
#line 484 "hash_table.m"
      mercury__hash_table__HeadVar__3_3 = mercury__hash_table__V_10;
#line 482 "hash_table.m"
    else
#line 485 "hash_table.m"
      {
#line 485 "hash_table.m"
        MR_Word mercury__hash_table__TypeCtorInfo_11_13 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 485 "hash_table.m"
        MR_Word mercury__hash_table__V_11_11 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.lookup: key not found"));

#line 485 "hash_table.m"
        {
#line 485 "hash_table.m"
          return mercury__hash_table__HeadVar__3_3 = mercury__exception__throw_1_f_0(mercury__hash_table__TypeCtorInfo_11_13, mercury__hash_table__TypeInfo_for_V_7, ((MR_Box) (mercury__hash_table__V_11_11)));
        }
#line 485 "hash_table.m"
      }
#line 482 "hash_table.m"
    return mercury__hash_table__HeadVar__3_3;
#line 482 "hash_table.m"
  }
#line 176 "hash_table.m"
}

#line 169 "hash_table.m"
MR_Box MR_CALL 
mercury__hash_table__lookup_2_f_0(
#line 169 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_9,
#line 169 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_10,
#line 169 "hash_table.m"
  MR_Word mercury__hash_table__HT_4,
#line 169 "hash_table.m"
  MR_Box mercury__hash_table__K_5)
#line 169 "hash_table.m"
{
#line 482 "hash_table.m"
  {
#line 482 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 482 "hash_table.m"
    MR_Box mercury__hash_table__HeadVar__3_3;
#line 482 "hash_table.m"
    MR_Box mercury__hash_table__V_6;

#line 483 "hash_table.m"
    {
#line 483 "hash_table.m"
      mercury__hash_table__succeeded = mercury__hash_table__search_2_f_0(mercury__hash_table__TypeInfo_for_K_9, mercury__hash_table__TypeInfo_for_V_10, mercury__hash_table__HT_4, mercury__hash_table__K_5, &mercury__hash_table__V_6);
    }
#line 482 "hash_table.m"
    if (mercury__hash_table__succeeded)
#line 484 "hash_table.m"
      mercury__hash_table__HeadVar__3_3 = mercury__hash_table__V_6;
#line 482 "hash_table.m"
    else
#line 485 "hash_table.m"
      {
#line 485 "hash_table.m"
        MR_Word mercury__hash_table__TypeCtorInfo_11_11 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 485 "hash_table.m"
        MR_Word mercury__hash_table__V_7_7 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.lookup: key not found"));

#line 485 "hash_table.m"
        {
#line 485 "hash_table.m"
          return mercury__hash_table__HeadVar__3_3 = mercury__exception__throw_1_f_0(mercury__hash_table__TypeCtorInfo_11_11, mercury__hash_table__TypeInfo_for_V_10, ((MR_Box) (mercury__hash_table__V_7_7)));
        }
#line 485 "hash_table.m"
      }
#line 482 "hash_table.m"
    return mercury__hash_table__HeadVar__3_3;
#line 482 "hash_table.m"
  }
#line 169 "hash_table.m"
}

#line 162 "hash_table.m"
void MR_CALL 
mercury__hash_table__delete_3_p_0(
#line 162 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_6,
#line 162 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_7,
#line 162 "hash_table.m"
  MR_Box mercury__hash_table__K_4,
#line 162 "hash_table.m"
  MR_Word mercury__hash_table__HT_5,
#line 162 "hash_table.m"
  MR_Word * mercury__hash_table__HeadVar__3_3)
#line 162 "hash_table.m"
{
#line 504 "hash_table.m"
  {
#line 504 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;

#line 504 "hash_table.m"
    {
#line 504 "hash_table.m"
      *mercury__hash_table__HeadVar__3_3 = mercury__hash_table__delete_2_f_0(mercury__hash_table__TypeInfo_for_K_6, mercury__hash_table__TypeInfo_for_V_7, mercury__hash_table__HT_5, mercury__hash_table__K_4);
    }
#line 504 "hash_table.m"
  }
#line 162 "hash_table.m"
}

#line 160 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__delete_2_f_0(
#line 160 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_21,
#line 160 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_22,
#line 160 "hash_table.m"
  MR_Word mercury__hash_table__HT0_4,
#line 160 "hash_table.m"
  MR_Box mercury__hash_table__K_5)
#line 160 "hash_table.m"
{
#line 492 "hash_table.m"
  {
#line 492 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 492 "hash_table.m"
    MR_Word mercury__hash_table__HT_6;
#line 492 "hash_table.m"
    MR_Integer mercury__hash_table__H_7;
#line 492 "hash_table.m"
    MR_Word mercury__hash_table__AL0_8;
#line 492 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_16_16;
#line 492 "hash_table.m"
    MR_Word mercury__hash_table__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 2)));
#line 492 "hash_table.m"
    MR_Integer mercury__hash_table__V_29_29;
#line 492 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 3)));
#line 492 "hash_table.m"
    MR_Integer mercury__hash_table__Hash_46;
#line 492 "hash_table.m"
    MR_Integer mercury__hash_table__V_47_47;
#line 92 "hash_table.m"
    MR_Integer mercury__hash_table__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 0)));
#line 92 "hash_table.m"
    MR_Integer mercury__hash_table__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 1)));
#line 893 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_11_49;
#line 328 "hash_table.m"
    void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 328 "hash_table.m"
    MR_Box mercury__hash_table__conv1_Hash_46;
#line 494 "hash_table.m"
    MR_Integer mercury__hash_table__V_18_18;
#line 494 "hash_table.m"
    MR_Integer mercury__hash_table__V_19_19;
#line 494 "hash_table.m"
    MR_Word mercury__hash_table__V_20_20;
#line 942 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_24_50;
#line 942 "array.opt"
    MR_Box mercury__hash_table__conv2_Item;
#line 500 "hash_table.m"
    MR_Word mercury__hash_table__AL_9;

#line 893 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__delete_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_32_32 , Array);
		{
#line 893 "array.opt"

    Max = Array->size;

#line 6999 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_29_29  = Max;
#line 893 "array.opt"
}
#line 328 "hash_table.m"
    mercury__hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__V_28_28, (MR_Integer) 1)));
#line 328 "hash_table.m"
    {
#line 328 "hash_table.m"
      mercury__hash_table__func_0(((MR_Box) mercury__hash_table__V_28_28), mercury__hash_table__K_5, &mercury__hash_table__conv1_Hash_46);
    }
#line 328 "hash_table.m"
    mercury__hash_table__Hash_46 = ((MR_Integer) mercury__hash_table__conv1_Hash_46);
#line 330 "hash_table.m"
    mercury__hash_table__V_47_47 = (mercury__hash_table__V_29_29 - (MR_Integer) 1);
#line 330 "hash_table.m"
    mercury__hash_table__H_7 = (mercury__hash_table__Hash_46 & mercury__hash_table__V_47_47);
#line 494 "hash_table.m"
    mercury__hash_table__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 0)));
#line 494 "hash_table.m"
    mercury__hash_table__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 1)));
#line 494 "hash_table.m"
    mercury__hash_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 2)));
#line 494 "hash_table.m"
    mercury__hash_table__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 3)));
#line 942 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__delete_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_16_16 , Array);
	Index =  mercury__hash_table__H_7 ;
		{
#line 942 "array.opt"

    Item = Array->elements[Index];

#line 7042 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv2_Item  = (MR_Box) Item;
#line 942 "array.opt"
    mercury__hash_table__AL0_8 = ((MR_Word) mercury__hash_table__conv2_Item);
#line 942 "array.opt"
}
#line 495 "hash_table.m"
    {
#line 495 "hash_table.m"
      mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(mercury__hash_table__TypeInfo_for_K_21, mercury__hash_table__AL0_8, mercury__hash_table__K_5, &mercury__hash_table__AL_9);
    }
#line 500 "hash_table.m"
    if (mercury__hash_table__succeeded)
#line 496 "hash_table.m"
      {
#line 496 "hash_table.m"
        MR_Integer mercury__hash_table__NumOccupants0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 0)));
#line 496 "hash_table.m"
        MR_Integer mercury__hash_table__MaxOccupants_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 1)));
#line 496 "hash_table.m"
        MR_Word mercury__hash_table__HashPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 2)));
#line 496 "hash_table.m"
        MR_ArrayPtr mercury__hash_table__Buckets0_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_4, (MR_Integer) 3)));
#line 496 "hash_table.m"
        MR_ArrayPtr mercury__hash_table__Buckets_14;
#line 496 "hash_table.m"
        MR_Integer mercury__hash_table__NumOccupants_15;
#line 946 "array.opt"
        MR_Word mercury__hash_table__TypeInfo_24_51;
#line 946 "array.opt"
        MR_ArrayPtr mercury__hash_table__conv3_Array;

#line 946 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__delete_2_f_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__hash_table__H_7 ;
	Item = (MR_Word) ((MR_Box) (mercury__hash_table__AL_9)) ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Buckets0_13 , Array0);
		{
#line 946 "array.opt"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;

#line 7095 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__hash_table__conv3_Array );
#line 946 "array.opt"
        mercury__hash_table__Buckets_14 = (MR_ArrayPtr) mercury__hash_table__conv3_Array;
#line 946 "array.opt"
}
#line 498 "hash_table.m"
        mercury__hash_table__NumOccupants_15 = (mercury__hash_table__NumOccupants0_10 - (MR_Integer) 1);
#line 499 "hash_table.m"
        {
#line 499 "hash_table.m"
          mercury__hash_table__HT_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 499 "hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, 0) = ((MR_Box) (mercury__hash_table__NumOccupants_15));
#line 499 "hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, 1) = ((MR_Box) (mercury__hash_table__MaxOccupants_11));
#line 499 "hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, 2) = ((MR_Box) (mercury__hash_table__HashPred_12));
#line 499 "hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__hash_table__HT_6, 3) = ((MR_Box) (mercury__hash_table__Buckets_14));
#line 499 "hash_table.m"
        }
#line 496 "hash_table.m"
      }
#line 500 "hash_table.m"
    else
#line 501 "hash_table.m"
      mercury__hash_table__HT_6 = mercury__hash_table__HT0_4;
#line 492 "hash_table.m"
    return mercury__hash_table__HT_6;
#line 492 "hash_table.m"
  }
#line 160 "hash_table.m"
}

#line 153 "hash_table.m"
void MR_CALL 
mercury__hash_table__det_update_4_p_0(
#line 153 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_8,
#line 153 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_9,
#line 153 "hash_table.m"
  MR_Box mercury__hash_table__K_5,
#line 153 "hash_table.m"
  MR_Box mercury__hash_table__V_6,
#line 153 "hash_table.m"
  MR_Word mercury__hash_table__HT_7,
#line 153 "hash_table.m"
  MR_Word * mercury__hash_table__HeadVar__4_4)
#line 153 "hash_table.m"
{
#line 478 "hash_table.m"
  {
#line 478 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;

#line 478 "hash_table.m"
    {
#line 478 "hash_table.m"
      *mercury__hash_table__HeadVar__4_4 = mercury__hash_table__det_update_3_f_0(mercury__hash_table__TypeInfo_for_K_8, mercury__hash_table__TypeInfo_for_V_9, mercury__hash_table__HT_7, mercury__hash_table__K_5, mercury__hash_table__V_6);
    }
#line 478 "hash_table.m"
  }
#line 153 "hash_table.m"
}

#line 151 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__det_update_3_f_0(
#line 151 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_26,
#line 151 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_27,
#line 151 "hash_table.m"
  MR_Word mercury__hash_table__STATE_VARIABLE_HT_0_14,
#line 151 "hash_table.m"
  MR_Box mercury__hash_table__K_6,
#line 151 "hash_table.m"
  MR_Box mercury__hash_table__V_7)
#line 151 "hash_table.m"
{
#line 466 "hash_table.m"
  {
#line 466 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 466 "hash_table.m"
    MR_Word mercury__hash_table__STATE_VARIABLE_HT_15;
#line 466 "hash_table.m"
    MR_Integer mercury__hash_table__H_8;
#line 466 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Buckets0_9;
#line 466 "hash_table.m"
    MR_Word mercury__hash_table__AL0_10;
#line 466 "hash_table.m"
    MR_Word mercury__hash_table__AL_12;
#line 466 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Buckets_13;
#line 466 "hash_table.m"
    MR_Word mercury__hash_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 2)));
#line 466 "hash_table.m"
    MR_Integer mercury__hash_table__V_35_35;
#line 466 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 3)));
#line 466 "hash_table.m"
    MR_Integer mercury__hash_table__Hash_52;
#line 466 "hash_table.m"
    MR_Integer mercury__hash_table__V_53_53;
#line 92 "hash_table.m"
    MR_Integer mercury__hash_table__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 0)));
#line 92 "hash_table.m"
    MR_Integer mercury__hash_table__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 1)));
#line 893 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_11_55;
#line 328 "hash_table.m"
    void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 328 "hash_table.m"
    MR_Box mercury__hash_table__conv1_Hash_52;
#line 468 "hash_table.m"
    MR_Integer mercury__hash_table__V_19_19;
#line 468 "hash_table.m"
    MR_Integer mercury__hash_table__V_20_20;
#line 468 "hash_table.m"
    MR_Word mercury__hash_table__V_21_21;
#line 942 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_29_56;
#line 942 "array.opt"
    MR_Box mercury__hash_table__conv2_Item;
#line 472 "hash_table.m"
    MR_Word mercury__hash_table__AL1_11;
#line 946 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_29_57;
#line 946 "array.opt"
    MR_ArrayPtr mercury__hash_table__conv3_Array;
#line 476 "hash_table.m"
    MR_Integer mercury__hash_table__V_22_22;
#line 476 "hash_table.m"
    MR_Integer mercury__hash_table__V_23_23;
#line 476 "hash_table.m"
    MR_Word mercury__hash_table__V_24_24;
#line 476 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_25_25;

#line 893 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__det_update_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_38_38 , Array);
		{
#line 893 "array.opt"

    Max = Array->size;

#line 7254 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_35_35  = Max;
#line 893 "array.opt"
}
#line 328 "hash_table.m"
    mercury__hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__V_34_34, (MR_Integer) 1)));
#line 328 "hash_table.m"
    {
#line 328 "hash_table.m"
      mercury__hash_table__func_0(((MR_Box) mercury__hash_table__V_34_34), mercury__hash_table__K_6, &mercury__hash_table__conv1_Hash_52);
    }
#line 328 "hash_table.m"
    mercury__hash_table__Hash_52 = ((MR_Integer) mercury__hash_table__conv1_Hash_52);
#line 330 "hash_table.m"
    mercury__hash_table__V_53_53 = (mercury__hash_table__V_35_35 - (MR_Integer) 1);
#line 330 "hash_table.m"
    mercury__hash_table__H_8 = (mercury__hash_table__Hash_52 & mercury__hash_table__V_53_53);
#line 468 "hash_table.m"
    mercury__hash_table__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 0)));
#line 468 "hash_table.m"
    mercury__hash_table__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 1)));
#line 468 "hash_table.m"
    mercury__hash_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 2)));
#line 468 "hash_table.m"
    mercury__hash_table__Buckets0_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 3)));
#line 942 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__det_update_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Buckets0_9 , Array);
	Index =  mercury__hash_table__H_8 ;
		{
#line 942 "array.opt"

    Item = Array->elements[Index];

#line 7297 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv2_Item  = (MR_Box) Item;
#line 942 "array.opt"
    mercury__hash_table__AL0_10 = ((MR_Word) mercury__hash_table__conv2_Item);
#line 942 "array.opt"
}
#line 470 "hash_table.m"
    {
#line 470 "hash_table.m"
      mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(mercury__hash_table__TypeInfo_for_K_26, mercury__hash_table__AL0_10, mercury__hash_table__K_6, mercury__hash_table__V_7, &mercury__hash_table__AL1_11);
    }
#line 472 "hash_table.m"
    if (mercury__hash_table__succeeded)
#line 471 "hash_table.m"
      mercury__hash_table__AL_12 = mercury__hash_table__AL1_11;
#line 472 "hash_table.m"
    else
#line 473 "hash_table.m"
      {
#line 473 "hash_table.m"
        MR_Word mercury__hash_table__TypeCtorInfo_30_30 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 473 "hash_table.m"
        MR_Word mercury__hash_table__V_16_16 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.det_update: key not found"));

#line 473 "hash_table.m"
        {
#line 473 "hash_table.m"
          mercury__exception__throw_1_p_0(mercury__hash_table__TypeCtorInfo_30_30, ((MR_Box) (mercury__hash_table__V_16_16)));
        }
#line 473 "hash_table.m"
      }
#line 946 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__det_update_3_f_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__hash_table__H_8 ;
	Item = (MR_Word) ((MR_Box) (mercury__hash_table__AL_12)) ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Buckets0_9 , Array0);
		{
#line 946 "array.opt"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;

#line 7349 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__hash_table__conv3_Array );
#line 946 "array.opt"
    mercury__hash_table__Buckets_13 = (MR_ArrayPtr) mercury__hash_table__conv3_Array;
#line 946 "array.opt"
}
#line 476 "hash_table.m"
    mercury__hash_table__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 0)));
#line 476 "hash_table.m"
    mercury__hash_table__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 1)));
#line 476 "hash_table.m"
    mercury__hash_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 2)));
#line 476 "hash_table.m"
    mercury__hash_table__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_0_14, (MR_Integer) 3)));
#line 476 "hash_table.m"
    {
#line 476 "hash_table.m"
      mercury__hash_table__STATE_VARIABLE_HT_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 476 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_15, 0) = ((MR_Box) (mercury__hash_table__V_22_22));
#line 476 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_15, 1) = ((MR_Box) (mercury__hash_table__V_23_23));
#line 476 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_15, 2) = ((MR_Box) (mercury__hash_table__V_24_24));
#line 476 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__STATE_VARIABLE_HT_15, 3) = ((MR_Box) (mercury__hash_table__Buckets_13));
#line 476 "hash_table.m"
    }
#line 466 "hash_table.m"
    return mercury__hash_table__STATE_VARIABLE_HT_15;
#line 466 "hash_table.m"
  }
#line 151 "hash_table.m"
}

#line 144 "hash_table.m"
void MR_CALL 
mercury__hash_table__det_insert_4_p_0(
#line 144 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_8,
#line 144 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_9,
#line 144 "hash_table.m"
  MR_Box mercury__hash_table__K_5,
#line 144 "hash_table.m"
  MR_Box mercury__hash_table__V_6,
#line 144 "hash_table.m"
  MR_Word mercury__hash_table__HT_7,
#line 144 "hash_table.m"
  MR_Word * mercury__hash_table__HeadVar__4_4)
#line 144 "hash_table.m"
{
#line 462 "hash_table.m"
  {
#line 462 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;

#line 462 "hash_table.m"
    {
#line 462 "hash_table.m"
      *mercury__hash_table__HeadVar__4_4 = mercury__hash_table__det_insert_3_f_0(mercury__hash_table__TypeInfo_for_K_8, mercury__hash_table__TypeInfo_for_V_9, mercury__hash_table__HT_7, mercury__hash_table__K_5, mercury__hash_table__V_6);
    }
#line 462 "hash_table.m"
  }
#line 144 "hash_table.m"
}

#line 142 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__det_insert_3_f_0(
#line 142 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_27,
#line 142 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_28,
#line 142 "hash_table.m"
  MR_Word mercury__hash_table__HT0_5,
#line 142 "hash_table.m"
  MR_Box mercury__hash_table__K_6,
#line 142 "hash_table.m"
  MR_Box mercury__hash_table__V_7)
#line 142 "hash_table.m"
{
#line 436 "hash_table.m"
  {
#line 436 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 436 "hash_table.m"
    MR_Word mercury__hash_table__HT_8;
#line 436 "hash_table.m"
    MR_Integer mercury__hash_table__H_9;
#line 436 "hash_table.m"
    MR_Integer mercury__hash_table__NumOccupants0_10;
#line 436 "hash_table.m"
    MR_Integer mercury__hash_table__MaxOccupants_11;
#line 436 "hash_table.m"
    MR_Word mercury__hash_table__HashPred_12;
#line 436 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Buckets0_13;
#line 436 "hash_table.m"
    MR_Word mercury__hash_table__AL0_14;
#line 436 "hash_table.m"
    MR_Word mercury__hash_table__AL_15;
#line 436 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Buckets_22;
#line 436 "hash_table.m"
    MR_Integer mercury__hash_table__NumOccupants_23;
#line 436 "hash_table.m"
    MR_Word mercury__hash_table__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 2)));
#line 436 "hash_table.m"
    MR_Integer mercury__hash_table__V_48_48;
#line 436 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 3)));
#line 436 "hash_table.m"
    MR_Integer mercury__hash_table__Hash_65;
#line 436 "hash_table.m"
    MR_Integer mercury__hash_table__V_66_66;
#line 92 "hash_table.m"
    MR_Integer mercury__hash_table__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 0)));
#line 92 "hash_table.m"
    MR_Integer mercury__hash_table__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 1)));
#line 893 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_11_68;
#line 328 "hash_table.m"
    void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 328 "hash_table.m"
    MR_Box mercury__hash_table__conv1_Hash_65;
#line 942 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_30_69;
#line 942 "array.opt"
    MR_Box mercury__hash_table__conv2_Item;
#line 946 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_30_70;
#line 946 "array.opt"
    MR_ArrayPtr mercury__hash_table__conv3_Array;

#line 893 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__det_insert_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_51_51 , Array);
		{
#line 893 "array.opt"

    Max = Array->size;

#line 7500 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_48_48  = Max;
#line 893 "array.opt"
}
#line 328 "hash_table.m"
    mercury__hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__V_47_47, (MR_Integer) 1)));
#line 328 "hash_table.m"
    {
#line 328 "hash_table.m"
      mercury__hash_table__func_0(((MR_Box) mercury__hash_table__V_47_47), mercury__hash_table__K_6, &mercury__hash_table__conv1_Hash_65);
    }
#line 328 "hash_table.m"
    mercury__hash_table__Hash_65 = ((MR_Integer) mercury__hash_table__conv1_Hash_65);
#line 330 "hash_table.m"
    mercury__hash_table__V_66_66 = (mercury__hash_table__V_48_48 - (MR_Integer) 1);
#line 330 "hash_table.m"
    mercury__hash_table__H_9 = (mercury__hash_table__Hash_65 & mercury__hash_table__V_66_66);
#line 438 "hash_table.m"
    mercury__hash_table__NumOccupants0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 0)));
#line 438 "hash_table.m"
    mercury__hash_table__MaxOccupants_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 1)));
#line 438 "hash_table.m"
    mercury__hash_table__HashPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 2)));
#line 438 "hash_table.m"
    mercury__hash_table__Buckets0_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 3)));
#line 942 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__det_insert_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Buckets0_13 , Array);
	Index =  mercury__hash_table__H_9 ;
		{
#line 942 "array.opt"

    Item = Array->elements[Index];

#line 7543 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv2_Item  = (MR_Box) Item;
#line 942 "array.opt"
    mercury__hash_table__AL0_14 = ((MR_Word) mercury__hash_table__conv2_Item);
#line 942 "array.opt"
}
#line 443 "hash_table.m"
#line 443 "hash_table.m"
    switch (MR_tag((MR_Word) mercury__hash_table__AL0_14)) {
#line 443 "hash_table.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 443 "hash_table.m"
      case (MR_Integer) 0:
#line 442 "hash_table.m"
        {
#line 442 "hash_table.m"
          mercury__hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "hash_table.m"
          MR_hl_field(MR_mktag(1), mercury__hash_table__AL_15, 0) = mercury__hash_table__K_6;
#line 442 "hash_table.m"
          MR_hl_field(MR_mktag(1), mercury__hash_table__AL_15, 1) = mercury__hash_table__V_7;
#line 442 "hash_table.m"
        }
#line 443 "hash_table.m"
        break;
#line 443 "hash_table.m"
      case (MR_Integer) 1:
#line 450 "hash_table.m"
        {
#line 447 "hash_table.m"
          MR_Box mercury__hash_table__V_32_32;

#line 447 "hash_table.m"
          {
#line 447 "hash_table.m"
            mercury__hash_table__succeeded = mercury__hash_table__alist_search_3_p_0(mercury__hash_table__TypeInfo_for_K_27, mercury__hash_table__TypeInfo_for_V_28, mercury__hash_table__AL0_14, mercury__hash_table__K_6, &mercury__hash_table__V_32_32);
          }
#line 450 "hash_table.m"
          if (mercury__hash_table__succeeded)
#line 448 "hash_table.m"
            {
#line 448 "hash_table.m"
              MR_Word mercury__hash_table__TypeCtorInfo_31_35 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 448 "hash_table.m"
              MR_Word mercury__hash_table__V_33_33 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.det_insert: key already present"));

#line 448 "hash_table.m"
              {
#line 448 "hash_table.m"
                mercury__exception__throw_1_p_0(mercury__hash_table__TypeCtorInfo_31_35, ((MR_Box) (mercury__hash_table__V_33_33)));
              }
#line 448 "hash_table.m"
            }
#line 450 "hash_table.m"
          else
#line 451 "hash_table.m"
            {
#line 451 "hash_table.m"
              mercury__hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 451 "hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 0) = mercury__hash_table__K_6;
#line 451 "hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 1) = mercury__hash_table__V_7;
#line 451 "hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 2) = ((MR_Box) (mercury__hash_table__AL0_14));
#line 451 "hash_table.m"
            }
#line 450 "hash_table.m"
        }
#line 443 "hash_table.m"
        break;
#line 443 "hash_table.m"
      case (MR_Integer) 2:
#line 450 "hash_table.m"
        {
#line 447 "hash_table.m"
          MR_Box mercury__hash_table__V_21_21;

#line 447 "hash_table.m"
          {
#line 447 "hash_table.m"
            mercury__hash_table__succeeded = mercury__hash_table__alist_search_3_p_0(mercury__hash_table__TypeInfo_for_K_27, mercury__hash_table__TypeInfo_for_V_28, mercury__hash_table__AL0_14, mercury__hash_table__K_6, &mercury__hash_table__V_21_21);
          }
#line 450 "hash_table.m"
          if (mercury__hash_table__succeeded)
#line 448 "hash_table.m"
            {
#line 448 "hash_table.m"
              MR_Word mercury__hash_table__TypeCtorInfo_31_31 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 448 "hash_table.m"
              MR_Word mercury__hash_table__V_24_24 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.det_insert: key already present"));

#line 448 "hash_table.m"
              {
#line 448 "hash_table.m"
                mercury__exception__throw_1_p_0(mercury__hash_table__TypeCtorInfo_31_31, ((MR_Box) (mercury__hash_table__V_24_24)));
              }
#line 448 "hash_table.m"
            }
#line 450 "hash_table.m"
          else
#line 451 "hash_table.m"
            {
#line 451 "hash_table.m"
              mercury__hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 451 "hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 0) = mercury__hash_table__K_6;
#line 451 "hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 1) = mercury__hash_table__V_7;
#line 451 "hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 2) = ((MR_Box) (mercury__hash_table__AL0_14));
#line 451 "hash_table.m"
            }
#line 450 "hash_table.m"
        }
#line 443 "hash_table.m"
        break;
#line 443 "hash_table.m"
    }
#line 946 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__det_insert_3_f_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__hash_table__H_9 ;
	Item = (MR_Word) ((MR_Box) (mercury__hash_table__AL_15)) ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Buckets0_13 , Array0);
		{
#line 946 "array.opt"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;

#line 7683 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__hash_table__conv3_Array );
#line 946 "array.opt"
    mercury__hash_table__Buckets_22 = (MR_ArrayPtr) mercury__hash_table__conv3_Array;
#line 946 "array.opt"
}
#line 455 "hash_table.m"
    mercury__hash_table__NumOccupants_23 = (mercury__hash_table__NumOccupants0_10 + (MR_Integer) 1);
#line 456 "hash_table.m"
    mercury__hash_table__succeeded = (mercury__hash_table__NumOccupants_23 > mercury__hash_table__MaxOccupants_11);
#line 458 "hash_table.m"
    if (mercury__hash_table__succeeded)
#line 457 "hash_table.m"
      {
#line 457 "hash_table.m"
        mercury__hash_table__HT_8 = mercury__hash_table__expand_4_f_0(mercury__hash_table__TypeInfo_for_K_27, mercury__hash_table__TypeInfo_for_V_28, mercury__hash_table__NumOccupants_23, mercury__hash_table__MaxOccupants_11, mercury__hash_table__HashPred_12, mercury__hash_table__Buckets_22);
      }
#line 458 "hash_table.m"
    else
#line 459 "hash_table.m"
      {
#line 459 "hash_table.m"
        mercury__hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 459 "hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 0) = ((MR_Box) (mercury__hash_table__NumOccupants_23));
#line 459 "hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 1) = ((MR_Box) (mercury__hash_table__MaxOccupants_11));
#line 459 "hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 2) = ((MR_Box) (mercury__hash_table__HashPred_12));
#line 459 "hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 3) = ((MR_Box) (mercury__hash_table__Buckets_22));
#line 459 "hash_table.m"
      }
#line 436 "hash_table.m"
    return mercury__hash_table__HT_8;
#line 436 "hash_table.m"
  }
#line 142 "hash_table.m"
}

#line 136 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__f_101_108_101_109_32_58_61_3_f_0(
#line 136 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_8,
#line 136 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_9,
#line 136 "hash_table.m"
  MR_Box mercury__hash_table__K_5,
#line 136 "hash_table.m"
  MR_Word mercury__hash_table__HT_6,
#line 136 "hash_table.m"
  MR_Box mercury__hash_table__V_7)
#line 136 "hash_table.m"
{
#line 382 "hash_table.m"
  {
#line 382 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 382 "hash_table.m"
    MR_Word mercury__hash_table__HeadVar__4_4;

#line 382 "hash_table.m"
    {
#line 382 "hash_table.m"
      mercury__hash_table__HeadVar__4_4 = mercury__hash_table__set_3_f_0(mercury__hash_table__TypeInfo_for_K_8, mercury__hash_table__TypeInfo_for_V_9, mercury__hash_table__HT_6, mercury__hash_table__K_5, mercury__hash_table__V_7);
    }
#line 382 "hash_table.m"
    return mercury__hash_table__HeadVar__4_4;
#line 382 "hash_table.m"
  }
#line 136 "hash_table.m"
}

#line 129 "hash_table.m"
void MR_CALL 
mercury__hash_table__set_4_p_0(
#line 129 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_8,
#line 129 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_9,
#line 129 "hash_table.m"
  MR_Box mercury__hash_table__K_5,
#line 129 "hash_table.m"
  MR_Box mercury__hash_table__V_6,
#line 129 "hash_table.m"
  MR_Word mercury__hash_table__HT_7,
#line 129 "hash_table.m"
  MR_Word * mercury__hash_table__HeadVar__4_4)
#line 129 "hash_table.m"
{
#line 384 "hash_table.m"
  {
#line 384 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;

#line 384 "hash_table.m"
    {
#line 384 "hash_table.m"
      *mercury__hash_table__HeadVar__4_4 = mercury__hash_table__set_3_f_0(mercury__hash_table__TypeInfo_for_K_8, mercury__hash_table__TypeInfo_for_V_9, mercury__hash_table__HT_7, mercury__hash_table__K_5, mercury__hash_table__V_6);
    }
#line 384 "hash_table.m"
  }
#line 129 "hash_table.m"
}

#line 127 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__set_3_f_0(
#line 127 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_26,
#line 127 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_27,
#line 127 "hash_table.m"
  MR_Word mercury__hash_table__HT0_5,
#line 127 "hash_table.m"
  MR_Box mercury__hash_table__K_6,
#line 127 "hash_table.m"
  MR_Box mercury__hash_table__V_7)
#line 127 "hash_table.m"
{
#line 341 "hash_table.m"
  {
#line 341 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 341 "hash_table.m"
    MR_Word mercury__hash_table__HT_8;
#line 341 "hash_table.m"
    MR_Integer mercury__hash_table__H_9;
#line 341 "hash_table.m"
    MR_Integer mercury__hash_table__NumOccupants0_10;
#line 341 "hash_table.m"
    MR_Integer mercury__hash_table__MaxOccupants_11;
#line 341 "hash_table.m"
    MR_Word mercury__hash_table__HashPred_12;
#line 341 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Buckets0_13;
#line 341 "hash_table.m"
    MR_Word mercury__hash_table__AL0_14;
#line 341 "hash_table.m"
    MR_Word mercury__hash_table__AL_15;
#line 341 "hash_table.m"
    MR_Word mercury__hash_table__MayExpand_16;
#line 341 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Buckets_23;
#line 341 "hash_table.m"
    MR_Word mercury__hash_table__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 2)));
#line 341 "hash_table.m"
    MR_Integer mercury__hash_table__V_34_34;
#line 341 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 3)));
#line 341 "hash_table.m"
    MR_Integer mercury__hash_table__Hash_51;
#line 341 "hash_table.m"
    MR_Integer mercury__hash_table__V_52_52;
#line 92 "hash_table.m"
    MR_Integer mercury__hash_table__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 0)));
#line 92 "hash_table.m"
    MR_Integer mercury__hash_table__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 1)));
#line 893 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_11_54;
#line 328 "hash_table.m"
    void MR_CALL (* mercury__hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 328 "hash_table.m"
    MR_Box mercury__hash_table__conv1_Hash_51;
#line 942 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_29_55;
#line 942 "array.opt"
    MR_Box mercury__hash_table__conv2_Item;
#line 946 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_29_56;
#line 946 "array.opt"
    MR_ArrayPtr mercury__hash_table__conv3_Array;

#line 893 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__set_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_37_37 , Array);
		{
#line 893 "array.opt"

    Max = Array->size;

#line 7873 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_34_34  = Max;
#line 893 "array.opt"
}
#line 328 "hash_table.m"
    mercury__hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__hash_table__V_33_33, (MR_Integer) 1)));
#line 328 "hash_table.m"
    {
#line 328 "hash_table.m"
      mercury__hash_table__func_0(((MR_Box) mercury__hash_table__V_33_33), mercury__hash_table__K_6, &mercury__hash_table__conv1_Hash_51);
    }
#line 328 "hash_table.m"
    mercury__hash_table__Hash_51 = ((MR_Integer) mercury__hash_table__conv1_Hash_51);
#line 330 "hash_table.m"
    mercury__hash_table__V_52_52 = (mercury__hash_table__V_34_34 - (MR_Integer) 1);
#line 330 "hash_table.m"
    mercury__hash_table__H_9 = (mercury__hash_table__Hash_51 & mercury__hash_table__V_52_52);
#line 343 "hash_table.m"
    mercury__hash_table__NumOccupants0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 0)));
#line 343 "hash_table.m"
    mercury__hash_table__MaxOccupants_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 1)));
#line 343 "hash_table.m"
    mercury__hash_table__HashPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 2)));
#line 343 "hash_table.m"
    mercury__hash_table__Buckets0_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT0_5, (MR_Integer) 3)));
#line 942 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__set_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Buckets0_13 , Array);
	Index =  mercury__hash_table__H_9 ;
		{
#line 942 "array.opt"

    Item = Array->elements[Index];

#line 7916 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__conv2_Item  = (MR_Box) Item;
#line 942 "array.opt"
    mercury__hash_table__AL0_14 = ((MR_Word) mercury__hash_table__conv2_Item);
#line 942 "array.opt"
}
#line 349 "hash_table.m"
#line 349 "hash_table.m"
    switch (MR_tag((MR_Word) mercury__hash_table__AL0_14)) {
#line 349 "hash_table.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 349 "hash_table.m"
      case (MR_Integer) 0:
#line 346 "hash_table.m"
        {
#line 347 "hash_table.m"
          {
#line 347 "hash_table.m"
            mercury__hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "hash_table.m"
            MR_hl_field(MR_mktag(1), mercury__hash_table__AL_15, 0) = mercury__hash_table__K_6;
#line 347 "hash_table.m"
            MR_hl_field(MR_mktag(1), mercury__hash_table__AL_15, 1) = mercury__hash_table__V_7;
#line 347 "hash_table.m"
          }
#line 348 "hash_table.m"
          mercury__hash_table__MayExpand_16 = (MR_Integer) 1;
#line 346 "hash_table.m"
        }
#line 349 "hash_table.m"
        break;
#line 349 "hash_table.m"
      case (MR_Integer) 1:
#line 350 "hash_table.m"
        {
#line 350 "hash_table.m"
          MR_Box mercury__hash_table__K0_17 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL0_14, (MR_Integer) 0));
#line 350 "hash_table.m"
          MR_Box mercury__hash_table___V0_18 = (MR_hl_field(MR_mktag(1), mercury__hash_table__AL0_14, (MR_Integer) 1));

#line 351 "hash_table.m"
          {
#line 351 "hash_table.m"
            mercury__hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__hash_table__TypeInfo_for_K_26, mercury__hash_table__K0_17, mercury__hash_table__K_6);
          }
#line 354 "hash_table.m"
          if (mercury__hash_table__succeeded)
#line 352 "hash_table.m"
            {
#line 352 "hash_table.m"
              {
#line 352 "hash_table.m"
                mercury__hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "hash_table.m"
                MR_hl_field(MR_mktag(1), mercury__hash_table__AL_15, 0) = mercury__hash_table__K0_17;
#line 352 "hash_table.m"
                MR_hl_field(MR_mktag(1), mercury__hash_table__AL_15, 1) = mercury__hash_table__V_7;
#line 352 "hash_table.m"
              }
#line 353 "hash_table.m"
              mercury__hash_table__MayExpand_16 = (MR_Integer) 0;
#line 352 "hash_table.m"
            }
#line 354 "hash_table.m"
          else
#line 355 "hash_table.m"
            {
#line 355 "hash_table.m"
              {
#line 355 "hash_table.m"
                mercury__hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 355 "hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 0) = mercury__hash_table__K_6;
#line 355 "hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 1) = mercury__hash_table__V_7;
#line 355 "hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 2) = ((MR_Box) (mercury__hash_table__AL0_14));
#line 355 "hash_table.m"
              }
#line 356 "hash_table.m"
              mercury__hash_table__MayExpand_16 = (MR_Integer) 1;
#line 355 "hash_table.m"
            }
#line 350 "hash_table.m"
        }
#line 349 "hash_table.m"
        break;
#line 349 "hash_table.m"
      case (MR_Integer) 2:
#line 363 "hash_table.m"
        {
#line 363 "hash_table.m"
          MR_Word mercury__hash_table__AL1_22;

#line 360 "hash_table.m"
          {
#line 360 "hash_table.m"
            mercury__hash_table__succeeded = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(mercury__hash_table__TypeInfo_for_K_26, mercury__hash_table__AL0_14, mercury__hash_table__K_6, mercury__hash_table__V_7, &mercury__hash_table__AL1_22);
          }
#line 363 "hash_table.m"
          if (mercury__hash_table__succeeded)
#line 361 "hash_table.m"
            {
#line 361 "hash_table.m"
              mercury__hash_table__AL_15 = mercury__hash_table__AL1_22;
#line 362 "hash_table.m"
              mercury__hash_table__MayExpand_16 = (MR_Integer) 0;
#line 361 "hash_table.m"
            }
#line 363 "hash_table.m"
          else
#line 364 "hash_table.m"
            {
#line 364 "hash_table.m"
              {
#line 364 "hash_table.m"
                mercury__hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 364 "hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 0) = mercury__hash_table__K_6;
#line 364 "hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 1) = mercury__hash_table__V_7;
#line 364 "hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__hash_table__AL_15, 2) = ((MR_Box) (mercury__hash_table__AL0_14));
#line 364 "hash_table.m"
              }
#line 365 "hash_table.m"
              mercury__hash_table__MayExpand_16 = (MR_Integer) 1;
#line 364 "hash_table.m"
            }
#line 363 "hash_table.m"
        }
#line 349 "hash_table.m"
        break;
#line 349 "hash_table.m"
    }
#line 946 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__set_3_f_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__hash_table__H_9 ;
	Item = (MR_Word) ((MR_Box) (mercury__hash_table__AL_15)) ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Buckets0_13 , Array0);
		{
#line 946 "array.opt"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;

#line 8072 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__hash_table__conv3_Array );
#line 946 "array.opt"
    mercury__hash_table__Buckets_23 = (MR_ArrayPtr) mercury__hash_table__conv3_Array;
#line 946 "array.opt"
}
#line 372 "hash_table.m"
#line 372 "hash_table.m"
    switch (mercury__hash_table__MayExpand_16) {
#line 372 "hash_table.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 372 "hash_table.m"
      case (MR_Integer) 0:
#line 371 "hash_table.m"
        {
#line 371 "hash_table.m"
          mercury__hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 371 "hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 0) = ((MR_Box) (mercury__hash_table__NumOccupants0_10));
#line 371 "hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 1) = ((MR_Box) (mercury__hash_table__MaxOccupants_11));
#line 371 "hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 2) = ((MR_Box) (mercury__hash_table__HashPred_12));
#line 371 "hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 3) = ((MR_Box) (mercury__hash_table__Buckets_23));
#line 371 "hash_table.m"
        }
#line 372 "hash_table.m"
        break;
#line 372 "hash_table.m"
      case (MR_Integer) 1:
#line 373 "hash_table.m"
        {
#line 373 "hash_table.m"
          MR_Integer mercury__hash_table__NumOccupants_24 = (mercury__hash_table__NumOccupants0_10 + (MR_Integer) 1);

#line 375 "hash_table.m"
          mercury__hash_table__succeeded = (mercury__hash_table__NumOccupants_24 > mercury__hash_table__MaxOccupants_11);
#line 377 "hash_table.m"
          if (mercury__hash_table__succeeded)
#line 376 "hash_table.m"
            {
#line 376 "hash_table.m"
              mercury__hash_table__HT_8 = mercury__hash_table__expand_4_f_0(mercury__hash_table__TypeInfo_for_K_26, mercury__hash_table__TypeInfo_for_V_27, mercury__hash_table__NumOccupants_24, mercury__hash_table__MaxOccupants_11, mercury__hash_table__HashPred_12, mercury__hash_table__Buckets_23);
            }
#line 377 "hash_table.m"
          else
#line 378 "hash_table.m"
            {
#line 378 "hash_table.m"
              mercury__hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 378 "hash_table.m"
              MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 0) = ((MR_Box) (mercury__hash_table__NumOccupants_24));
#line 378 "hash_table.m"
              MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 1) = ((MR_Box) (mercury__hash_table__MaxOccupants_11));
#line 378 "hash_table.m"
              MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 2) = ((MR_Box) (mercury__hash_table__HashPred_12));
#line 378 "hash_table.m"
              MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 3) = ((MR_Box) (mercury__hash_table__Buckets_23));
#line 378 "hash_table.m"
            }
#line 373 "hash_table.m"
        }
#line 372 "hash_table.m"
        break;
#line 372 "hash_table.m"
    }
#line 341 "hash_table.m"
    return mercury__hash_table__HT_8;
#line 341 "hash_table.m"
  }
#line 127 "hash_table.m"
}

#line 121 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__copy_1_f_0(
#line 121 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_10,
#line 121 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_11,
#line 121 "hash_table.m"
  MR_Word mercury__hash_table__Orig_3)
#line 121 "hash_table.m"
{
#line 334 "hash_table.m"
  {
#line 334 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 334 "hash_table.m"
    MR_Word mercury__hash_table__Copy_4;
#line 334 "hash_table.m"
    MR_Integer mercury__hash_table__NumOccupants_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__Orig_3, (MR_Integer) 0)));
#line 334 "hash_table.m"
    MR_Integer mercury__hash_table__MaxOccupants_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__Orig_3, (MR_Integer) 1)));
#line 334 "hash_table.m"
    MR_Word mercury__hash_table__HashPred_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__Orig_3, (MR_Integer) 2)));
#line 334 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Buckets0_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__Orig_3, (MR_Integer) 3)));
#line 334 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__Buckets_9;
#line 349 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_13_14;
#line 349 "array.opt"
    MR_ArrayPtr mercury__hash_table__conv0_Array;

#line 349 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__copy_1_f_0

	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__Buckets0_8 , Array0);
		{
#line 349 "array.opt"

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);

#line 8195 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__hash_table__conv0_Array );
#line 349 "array.opt"
    mercury__hash_table__Buckets_9 = (MR_ArrayPtr) mercury__hash_table__conv0_Array;
#line 349 "array.opt"
}
#line 337 "hash_table.m"
    {
#line 337 "hash_table.m"
      mercury__hash_table__Copy_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 337 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__Copy_4, 0) = ((MR_Box) (mercury__hash_table__NumOccupants_5));
#line 337 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__Copy_4, 1) = ((MR_Box) (mercury__hash_table__MaxOccupants_6));
#line 337 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__Copy_4, 2) = ((MR_Box) (mercury__hash_table__HashPred_7));
#line 337 "hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__hash_table__Copy_4, 3) = ((MR_Box) (mercury__hash_table__Buckets_9));
#line 337 "hash_table.m"
    }
#line 334 "hash_table.m"
    return mercury__hash_table__Copy_4;
#line 334 "hash_table.m"
  }
#line 121 "hash_table.m"
}

#line 112 "hash_table.m"
MR_Integer MR_CALL 
mercury__hash_table__num_occupants_1_f_0(
#line 112 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_6,
#line 112 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_7,
#line 112 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__1_1)
#line 112 "hash_table.m"
{
#line 111 "hash_table.m"
  {
#line 111 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 111 "hash_table.m"
    MR_Integer mercury__hash_table__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 0)));
#line 111 "hash_table.m"
    MR_Integer mercury__hash_table__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 1)));
#line 111 "hash_table.m"
    MR_Word mercury__hash_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 2)));
#line 111 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_5_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 3)));

#line 111 "hash_table.m"
    return mercury__hash_table__HeadVar__2_2;
#line 111 "hash_table.m"
  }
#line 112 "hash_table.m"
}

#line 106 "hash_table.m"
MR_Integer MR_CALL 
mercury__hash_table__num_buckets_1_f_0(
#line 106 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_8,
#line 106 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_9,
#line 106 "hash_table.m"
  MR_Word mercury__hash_table__HT_3)
#line 106 "hash_table.m"
{
#line 311 "hash_table.m"
  {
#line 311 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 311 "hash_table.m"
    MR_Integer mercury__hash_table__HeadVar__2_2;
#line 311 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_4_4 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 3)));
#line 311 "hash_table.m"
    MR_Integer mercury__hash_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 0)));
#line 311 "hash_table.m"
    MR_Integer mercury__hash_table__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 1)));
#line 311 "hash_table.m"
    MR_Word mercury__hash_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HT_3, (MR_Integer) 2)));
#line 893 "array.opt"
    MR_Word mercury__hash_table__TypeInfo_11_14;

#line 893 "array.opt"
{
#define MR_PROC_LABEL mercury__hash_table__num_buckets_1_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__hash_table__V_4_4 , Array);
		{
#line 893 "array.opt"

    Max = Array->size;

#line 8297 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__HeadVar__2_2  = Max;
#line 893 "array.opt"
}
#line 311 "hash_table.m"
    return mercury__hash_table__HeadVar__2_2;
#line 311 "hash_table.m"
  }
#line 106 "hash_table.m"
}

#line 101 "hash_table.m"
void MR_CALL 
mercury__hash_table__generic_hash_2_p_0(
#line 101 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_T_38,
#line 101 "hash_table.m"
  MR_Box mercury__hash_table__T_3,
#line 101 "hash_table.m"
  MR_Integer * mercury__hash_table__H_4)
#line 101 "hash_table.m"
{
#line 697 "hash_table.m"
  while (MR_TRUE)
#line 697 "hash_table.m"
    {
#line 697 "hash_table.m"
      /* tailcall optimized into a loop */
#line 697 "hash_table.m"
      {
#line 697 "hash_table.m"
        MR_bool mercury__hash_table__succeeded;
#line 697 "hash_table.m"
        MR_Integer mercury__hash_table__Int_5;
#line 695 "hash_table.m"
        MR_Word mercury__hash_table__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 59 "builtin.opt"
        MR_Box mercury__hash_table__conv0_Int_5;

#line 59 "builtin.opt"
        {
#line 59 "builtin.opt"
          mercury__hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__hash_table__TypeInfo_for_T_38, mercury__hash_table__TypeCtorInfo_39_39, mercury__hash_table__T_3, &mercury__hash_table__conv0_Int_5);
        }
#line 59 "builtin.opt"
        if (mercury__hash_table__succeeded)
#line 59 "builtin.opt"
          {
#line 59 "builtin.opt"
            mercury__hash_table__Int_5 = ((MR_Integer) mercury__hash_table__conv0_Int_5);
#line 59 "builtin.opt"
            mercury__hash_table__succeeded = MR_TRUE;
#line 59 "builtin.opt"
          }
#line 697 "hash_table.m"
        if (mercury__hash_table__succeeded)
#line 643 "hash_table.m"
          {
#line 646 "hash_table.m"
{
#define MR_PROC_LABEL mercury__hash_table__generic_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__hash_table__Int_5 ;
		{
#line 646 "hash_table.m"

    const int c2 = 0x27d4eb2d; /* a prime or an odd constant */
    MR_Unsigned key;

    key = N;

    if (sizeof(MR_Word) == 4) {
        key = (key ^ 61) ^ (key >> 16);
        key = key + (key << 3);
        key = key ^ (key >> 4);
        key = key * c2;
        key = key ^ (key >> 15);
    } else {
        key = (~key) + (key << 21); /* key = (key << 21) - key - 1; */
        key = key ^ (key >> 24);
        key = (key + (key << 3)) + (key << 8); /* key * 265 */
        key = key ^ (key >> 14);
        key = (key + (key << 2)) + (key << 4); /* key * 21 */
        key = key ^ (key >> 28);
        key = key + (key << 31);
    }

    H = key;

#line 8392 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__hash_table__H_4  = H;
#line 646 "hash_table.m"
}
#line 643 "hash_table.m"
          }
#line 697 "hash_table.m"
        else
#line 699 "hash_table.m"
          {
#line 699 "hash_table.m"
            MR_String mercury__hash_table__String_6;
#line 697 "hash_table.m"
            MR_Word mercury__hash_table__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 59 "builtin.opt"
            MR_Box mercury__hash_table__conv1_String_6;

#line 59 "builtin.opt"
            {
#line 59 "builtin.opt"
              mercury__hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__hash_table__TypeInfo_for_T_38, mercury__hash_table__TypeCtorInfo_40_40, mercury__hash_table__T_3, &mercury__hash_table__conv1_String_6);
            }
#line 59 "builtin.opt"
            if (mercury__hash_table__succeeded)
#line 59 "builtin.opt"
              {
#line 59 "builtin.opt"
                mercury__hash_table__String_6 = ((MR_String) mercury__hash_table__conv1_String_6);
#line 59 "builtin.opt"
                mercury__hash_table__succeeded = MR_TRUE;
#line 59 "builtin.opt"
              }
#line 699 "hash_table.m"
            if (mercury__hash_table__succeeded)
#line 675 "hash_table.m"
              {
#line 675 "hash_table.m"
                *mercury__hash_table__H_4 = mercury__string__hash_1_f_0(mercury__hash_table__String_6);
              }
#line 699 "hash_table.m"
            else
#line 701 "hash_table.m"
              {
#line 701 "hash_table.m"
                MR_Float mercury__hash_table__Float_7;
#line 699 "hash_table.m"
                MR_Word mercury__hash_table__TypeCtorInfo_41_41 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 59 "builtin.opt"
                MR_Box mercury__hash_table__conv2_Float_7;

#line 59 "builtin.opt"
                {
#line 59 "builtin.opt"
                  mercury__hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__hash_table__TypeInfo_for_T_38, mercury__hash_table__TypeCtorInfo_41_41, mercury__hash_table__T_3, &mercury__hash_table__conv2_Float_7);
                }
#line 59 "builtin.opt"
                if (mercury__hash_table__succeeded)
#line 59 "builtin.opt"
                  {
#line 59 "builtin.opt"
                    mercury__hash_table__Float_7 = MR_unbox_float(mercury__hash_table__conv2_Float_7);
#line 59 "builtin.opt"
                    mercury__hash_table__succeeded = MR_TRUE;
#line 59 "builtin.opt"
                  }
#line 701 "hash_table.m"
                if (mercury__hash_table__succeeded)
#line 108 "float.opt"
                  {
#line 108 "float.opt"
{
#define MR_PROC_LABEL mercury__hash_table__generic_hash_2_p_0

	MR_Float F;
	MR_Integer H;

	F =  mercury__hash_table__Float_7 ;
		{
#line 108 "float.opt"

    H = MR_hash_float(F);

#line 8477 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__hash_table__H_4  = H;
#line 108 "float.opt"
}
#line 108 "float.opt"
                  }
#line 701 "hash_table.m"
                else
#line 703 "hash_table.m"
                  {
#line 703 "hash_table.m"
                    MR_Char mercury__hash_table__Char_8;
#line 701 "hash_table.m"
                    MR_Word mercury__hash_table__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 59 "builtin.opt"
                    MR_Box mercury__hash_table__conv3_Char_8;

#line 59 "builtin.opt"
                    {
#line 59 "builtin.opt"
                      mercury__hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__hash_table__TypeInfo_for_T_38, mercury__hash_table__TypeCtorInfo_42_42, mercury__hash_table__T_3, &mercury__hash_table__conv3_Char_8);
                    }
#line 59 "builtin.opt"
                    if (mercury__hash_table__succeeded)
#line 59 "builtin.opt"
                      {
#line 59 "builtin.opt"
                        mercury__hash_table__Char_8 = ((MR_Char) (MR_Word) mercury__hash_table__conv3_Char_8);
#line 59 "builtin.opt"
                        mercury__hash_table__succeeded = MR_TRUE;
#line 59 "builtin.opt"
                      }
#line 703 "hash_table.m"
                    if (mercury__hash_table__succeeded)
#line 687 "hash_table.m"
                      {
#line 687 "hash_table.m"
                        MR_Integer mercury__hash_table__V_63_63;

#line 110 "char.opt"
{
#define MR_PROC_LABEL mercury__hash_table__generic_hash_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__hash_table__Char_8 ;
		{
#line 110 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 8532 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_63_63  = Int;
#line 110 "char.opt"
}
#line 646 "hash_table.m"
{
#define MR_PROC_LABEL mercury__hash_table__generic_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__hash_table__V_63_63 ;
		{
#line 646 "hash_table.m"

    const int c2 = 0x27d4eb2d; /* a prime or an odd constant */
    MR_Unsigned key;

    key = N;

    if (sizeof(MR_Word) == 4) {
        key = (key ^ 61) ^ (key >> 16);
        key = key + (key << 3);
        key = key ^ (key >> 4);
        key = key * c2;
        key = key ^ (key >> 15);
    } else {
        key = (~key) + (key << 21); /* key = (key << 21) - key - 1; */
        key = key ^ (key >> 24);
        key = (key + (key << 3)) + (key << 8); /* key * 265 */
        key = key ^ (key >> 14);
        key = (key + (key << 2)) + (key << 4); /* key * 21 */
        key = key ^ (key >> 28);
        key = key + (key << 31);
    }

    H = key;

#line 8573 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__hash_table__H_4  = H;
#line 646 "hash_table.m"
}
#line 687 "hash_table.m"
                      }
#line 703 "hash_table.m"
                    else
#line 705 "hash_table.m"
                      {
#line 705 "hash_table.m"
                        MR_Word mercury__hash_table__Univ_9;
#line 703 "hash_table.m"
                        MR_Word mercury__hash_table__TypeCtorInfo_43_43 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 59 "builtin.opt"
                        MR_Box mercury__hash_table__conv4_Univ_9;

#line 59 "builtin.opt"
                        {
#line 59 "builtin.opt"
                          mercury__hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__hash_table__TypeInfo_for_T_38, mercury__hash_table__TypeCtorInfo_43_43, mercury__hash_table__T_3, &mercury__hash_table__conv4_Univ_9);
                        }
#line 59 "builtin.opt"
                        if (mercury__hash_table__succeeded)
#line 59 "builtin.opt"
                          {
#line 59 "builtin.opt"
                            mercury__hash_table__Univ_9 = ((MR_Word) mercury__hash_table__conv4_Univ_9);
#line 59 "builtin.opt"
                            mercury__hash_table__succeeded = MR_TRUE;
#line 59 "builtin.opt"
                          }
#line 705 "hash_table.m"
                        if (mercury__hash_table__succeeded)
#line 704 "hash_table.m"
                          {
#line 704 "hash_table.m"
                            MR_Word mercury__hash_table__TypeInfo_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__Univ_9, (MR_Integer) 0)));
#line 704 "hash_table.m"
                            MR_Box mercury__hash_table__V_22_22 = (MR_hl_field(MR_mktag(0), mercury__hash_table__Univ_9, (MR_Integer) 1));

#line 704 "hash_table.m"
                            /* direct tailcall eliminated */
#line 704 "hash_table.m"
                            {
#line 704 "hash_table.m"
                              MR_Word mercury__hash_table__TypeInfo_for_T__tmp_copy_38 = mercury__hash_table__TypeInfo_44_44;
#line 704 "hash_table.m"
                              MR_Box mercury__hash_table__T__tmp_copy_3 = mercury__hash_table__V_22_22;

#line 704 "hash_table.m"
                              mercury__hash_table__T_3 = mercury__hash_table__T__tmp_copy_3;
#line 704 "hash_table.m"
                              mercury__hash_table__TypeInfo_for_T_38 = mercury__hash_table__TypeInfo_for_T__tmp_copy_38;
#line 704 "hash_table.m"
                            }
#line 704 "hash_table.m"
                            continue;
#line 704 "hash_table.m"
                          }
#line 705 "hash_table.m"
                        else
#line 712 "hash_table.m"
                          {
#line 712 "hash_table.m"
                            MR_Word mercury__hash_table__TypeInfo_45_45;
#line 712 "hash_table.m"
                            MR_ArrayPtr mercury__hash_table__Array_10;
#line 705 "hash_table.m"
                            MR_ArrayPtr mercury__hash_table__conv5_Array_10;

#line 705 "hash_table.m"
                            {
#line 705 "hash_table.m"
                              mercury__hash_table__succeeded = mercury__array__dynamic_cast_to_array_2_p_0(mercury__hash_table__TypeInfo_for_T_38, &mercury__hash_table__TypeInfo_45_45, mercury__hash_table__T_3, &mercury__hash_table__conv5_Array_10);
                            }
#line 705 "hash_table.m"
                            if (mercury__hash_table__succeeded)
#line 705 "hash_table.m"
                              {
#line 705 "hash_table.m"
                                mercury__hash_table__Array_10 = (MR_ArrayPtr) mercury__hash_table__conv5_Array_10;
#line 705 "hash_table.m"
                                mercury__hash_table__succeeded = MR_TRUE;
#line 705 "hash_table.m"
                              }
#line 712 "hash_table.m"
                            if (mercury__hash_table__succeeded)
#line 706 "hash_table.m"
                              {
#line 706 "hash_table.m"
                                {
#line 706 "hash_table.m"
                                  *mercury__hash_table__H_4 = mercury__hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(mercury__hash_table__TypeInfo_45_45, mercury__hash_table__Array_10, (MR_Integer) 0);
                                }
#line 706 "hash_table.m"
                              }
#line 712 "hash_table.m"
                            else
#line 713 "hash_table.m"
                              {
#line 713 "hash_table.m"
                                MR_String mercury__hash_table__FunctorName_15;
#line 713 "hash_table.m"
                                MR_Integer mercury__hash_table__Arity_16;
#line 713 "hash_table.m"
                                MR_Word mercury__hash_table__Args_17;
#line 713 "hash_table.m"
                                MR_Integer mercury__hash_table__H0_18;
#line 713 "hash_table.m"
                                MR_Integer mercury__hash_table__H1_19;
#line 713 "hash_table.m"
                                MR_Integer mercury__hash_table__V_73_73;
#line 713 "hash_table.m"
                                MR_Integer mercury__hash_table__V_74_74;
#line 713 "hash_table.m"
                                MR_Integer mercury__hash_table__V_75_75;
#line 713 "hash_table.m"
                                MR_Integer mercury__hash_table__V_76_76;

#line 713 "hash_table.m"
                                {
#line 713 "hash_table.m"
                                  mercury__deconstruct__deconstruct_5_p_1(mercury__hash_table__TypeInfo_for_T_38, mercury__hash_table__T_3, (MR_Integer) 1, &mercury__hash_table__FunctorName_15, &mercury__hash_table__Arity_16, &mercury__hash_table__Args_17);
                                }
#line 675 "hash_table.m"
                                {
#line 675 "hash_table.m"
                                  mercury__hash_table__H0_18 = mercury__string__hash_1_f_0(mercury__hash_table__FunctorName_15);
                                }
#line 729 "hash_table.m"
                                mercury__hash_table__V_73_73 = (mercury__hash_table__H0_18 << mercury__hash_table__Arity_16);
#line 64 "int.opt"
{
#define MR_PROC_LABEL mercury__hash_table__generic_hash_2_p_0

	MR_Integer Bits;

		{
#line 64 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 8719 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_76_76  = Bits;
#line 64 "int.opt"
}
#line 730 "hash_table.m"
                                mercury__hash_table__V_75_75 = (mercury__hash_table__V_76_76 - mercury__hash_table__Arity_16);
#line 730 "hash_table.m"
                                mercury__hash_table__V_74_74 = (mercury__hash_table__H0_18 >> mercury__hash_table__V_75_75);
#line 729 "hash_table.m"
                                mercury__hash_table__H1_19 = (mercury__hash_table__V_73_73 ^ mercury__hash_table__V_74_74);
#line 716 "hash_table.m"
                                {
#line 716 "hash_table.m"
                                  mercury__hash_table__foldl__ho13_4_p_in__list_0(mercury__hash_table__Args_17, mercury__hash_table__H1_19, mercury__hash_table__H_4);
                                }
#line 713 "hash_table.m"
                              }
#line 712 "hash_table.m"
                          }
#line 705 "hash_table.m"
                      }
#line 703 "hash_table.m"
                  }
#line 701 "hash_table.m"
              }
#line 699 "hash_table.m"
          }
#line 697 "hash_table.m"
      }
#line 697 "hash_table.m"
      break;
#line 697 "hash_table.m"
    }
#line 101 "hash_table.m"
}

#line 100 "hash_table.m"
void MR_CALL 
mercury__hash_table__float_hash_2_p_0(
#line 100 "hash_table.m"
  MR_Float mercury__hash_table__F_3,
#line 100 "hash_table.m"
  MR_Integer * mercury__hash_table__HeadVar__2_2)
#line 100 "hash_table.m"
{
#line 108 "float.opt"
  {
#line 108 "float.opt"
    MR_bool mercury__hash_table__succeeded;

#line 108 "float.opt"
{
#define MR_PROC_LABEL mercury__hash_table__float_hash_2_p_0

	MR_Float F;
	MR_Integer H;

	F =  mercury__hash_table__F_3 ;
		{
#line 108 "float.opt"

    H = MR_hash_float(F);

#line 8785 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__hash_table__HeadVar__2_2  = H;
#line 108 "float.opt"
}
#line 108 "float.opt"
  }
#line 100 "hash_table.m"
}

#line 99 "hash_table.m"
void MR_CALL 
mercury__hash_table__char_hash_2_p_0(
#line 99 "hash_table.m"
  MR_Char mercury__hash_table__C_3,
#line 99 "hash_table.m"
  MR_Integer * mercury__hash_table__H_4)
#line 99 "hash_table.m"
{
#line 687 "hash_table.m"
  {
#line 687 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 687 "hash_table.m"
    MR_Integer mercury__hash_table__V_5_5;

#line 110 "char.opt"
{
#define MR_PROC_LABEL mercury__hash_table__char_hash_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__hash_table__C_3 ;
		{
#line 110 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 8826 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_5_5  = Int;
#line 110 "char.opt"
}
#line 646 "hash_table.m"
{
#define MR_PROC_LABEL mercury__hash_table__char_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__hash_table__V_5_5 ;
		{
#line 646 "hash_table.m"

    const int c2 = 0x27d4eb2d; /* a prime or an odd constant */
    MR_Unsigned key;

    key = N;

    if (sizeof(MR_Word) == 4) {
        key = (key ^ 61) ^ (key >> 16);
        key = key + (key << 3);
        key = key ^ (key >> 4);
        key = key * c2;
        key = key ^ (key >> 15);
    } else {
        key = (~key) + (key << 21); /* key = (key << 21) - key - 1; */
        key = key ^ (key >> 24);
        key = (key + (key << 3)) + (key << 8); /* key * 265 */
        key = key ^ (key >> 14);
        key = (key + (key << 2)) + (key << 4); /* key * 21 */
        key = key ^ (key >> 28);
        key = key + (key << 31);
    }

    H = key;

#line 8867 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__hash_table__H_4  = H;
#line 646 "hash_table.m"
}
#line 687 "hash_table.m"
  }
#line 99 "hash_table.m"
}

#line 98 "hash_table.m"
void MR_CALL 
mercury__hash_table__string_hash_2_p_0(
#line 98 "hash_table.m"
  MR_String mercury__hash_table__S_3,
#line 98 "hash_table.m"
  MR_Integer * mercury__hash_table__HeadVar__2_2)
#line 98 "hash_table.m"
{
#line 675 "hash_table.m"
  {
#line 675 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;

#line 675 "hash_table.m"
    {
#line 675 "hash_table.m"
      *mercury__hash_table__HeadVar__2_2 = mercury__string__hash_1_f_0(mercury__hash_table__S_3);
    }
#line 675 "hash_table.m"
  }
#line 98 "hash_table.m"
}

#line 97 "hash_table.m"
void MR_CALL 
mercury__hash_table__int_hash_2_p_0(
#line 97 "hash_table.m"
  MR_Integer mercury__hash_table__N_1,
#line 97 "hash_table.m"
  MR_Integer * mercury__hash_table__H_2)
#line 97 "hash_table.m"
{
#line 643 "hash_table.m"
  {
#line 643 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;

#line 646 "hash_table.m"
{
#define MR_PROC_LABEL mercury__hash_table__int_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__hash_table__N_1 ;
		{
#line 646 "hash_table.m"

    const int c2 = 0x27d4eb2d; /* a prime or an odd constant */
    MR_Unsigned key;

    key = N;

    if (sizeof(MR_Word) == 4) {
        key = (key ^ 61) ^ (key >> 16);
        key = key + (key << 3);
        key = key ^ (key >> 4);
        key = key * c2;
        key = key ^ (key >> 15);
    } else {
        key = (~key) + (key << 21); /* key = (key << 21) - key - 1; */
        key = key ^ (key >> 24);
        key = (key + (key << 3)) + (key << 8); /* key * 265 */
        key = key ^ (key >> 14);
        key = (key + (key << 2)) + (key << 4); /* key * 21 */
        key = key ^ (key >> 28);
        key = key + (key << 31);
    }

    H = key;

#line 8951 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__hash_table__H_2  = H;
#line 646 "hash_table.m"
}
#line 643 "hash_table.m"
  }
#line 97 "hash_table.m"
}

#line 93 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__hash_pred_1_f_0(
#line 93 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_6,
#line 93 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_7,
#line 93 "hash_table.m"
  MR_Word mercury__hash_table__HeadVar__1_1)
#line 93 "hash_table.m"
{
#line 92 "hash_table.m"
  {
#line 92 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 92 "hash_table.m"
    MR_Word mercury__hash_table__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 2)));
#line 92 "hash_table.m"
    MR_Integer mercury__hash_table__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 0)));
#line 92 "hash_table.m"
    MR_Integer mercury__hash_table__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 1)));
#line 92 "hash_table.m"
    MR_ArrayPtr mercury__hash_table__V_5_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__hash_table__HeadVar__1_1, (MR_Integer) 3)));

#line 92 "hash_table.m"
    return mercury__hash_table__HeadVar__2_2;
#line 92 "hash_table.m"
  }
#line 93 "hash_table.m"
}

#line 88 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__new_default_1_f_0(
#line 88 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_6,
#line 88 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_7,
#line 88 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_3)
#line 88 "hash_table.m"
{
#line 307 "hash_table.m"
  {
#line 307 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 307 "hash_table.m"
    MR_Word mercury__hash_table__HeadVar__2_2;

#line 307 "hash_table.m"
    {
#line 307 "hash_table.m"
      mercury__hash_table__HeadVar__2_2 = mercury__hash_table__init_3_f_0(mercury__hash_table__TypeInfo_for_K_6, mercury__hash_table__TypeInfo_for_V_7, mercury__hash_table__HashPred_3, (MR_Integer) 7, (MR_Float) 0.90000000000000002);
    }
#line 307 "hash_table.m"
    return mercury__hash_table__HeadVar__2_2;
#line 307 "hash_table.m"
  }
#line 88 "hash_table.m"
}

#line 82 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__init_default_1_f_0(
#line 82 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_6,
#line 82 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_7,
#line 82 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_3)
#line 82 "hash_table.m"
{
#line 306 "hash_table.m"
  {
#line 306 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 306 "hash_table.m"
    MR_Word mercury__hash_table__HeadVar__2_2;

#line 306 "hash_table.m"
    {
#line 306 "hash_table.m"
      mercury__hash_table__HeadVar__2_2 = mercury__hash_table__init_3_f_0(mercury__hash_table__TypeInfo_for_K_6, mercury__hash_table__TypeInfo_for_V_7, mercury__hash_table__HashPred_3, (MR_Integer) 7, (MR_Float) 0.90000000000000002);
    }
#line 306 "hash_table.m"
    return mercury__hash_table__HeadVar__2_2;
#line 306 "hash_table.m"
  }
#line 82 "hash_table.m"
}

#line 76 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__new_3_f_0(
#line 76 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_8,
#line 76 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_9,
#line 76 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_5,
#line 76 "hash_table.m"
  MR_Integer mercury__hash_table__N_6,
#line 76 "hash_table.m"
  MR_Float mercury__hash_table__MaxOccupancy_7)
#line 76 "hash_table.m"
{
#line 300 "hash_table.m"
  {
#line 300 "hash_table.m"
    MR_bool mercury__hash_table__succeeded;
#line 300 "hash_table.m"
    MR_Word mercury__hash_table__HeadVar__4_4;

#line 300 "hash_table.m"
    {
#line 300 "hash_table.m"
      mercury__hash_table__HeadVar__4_4 = mercury__hash_table__init_3_f_0(mercury__hash_table__TypeInfo_for_K_8, mercury__hash_table__TypeInfo_for_V_9, mercury__hash_table__HashPred_5, mercury__hash_table__N_6, mercury__hash_table__MaxOccupancy_7);
    }
#line 300 "hash_table.m"
    return mercury__hash_table__HeadVar__4_4;
#line 300 "hash_table.m"
  }
#line 76 "hash_table.m"
}

#line 70 "hash_table.m"
MR_Word MR_CALL 
mercury__hash_table__init_3_f_0(
#line 70 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_K_26,
#line 70 "hash_table.m"
  MR_Word mercury__hash_table__TypeInfo_for_V_27,
#line 70 "hash_table.m"
  MR_Word mercury__hash_table__HashPred_5,
#line 70 "hash_table.m"
  MR_Integer mercury__hash_table__N_6,
#line 70 "hash_table.m"
  MR_Float mercury__hash_table__MaxOccupancy_7)
#line 70 "hash_table.m"
{
#line 287 "hash_table.m"
  {
#line 287 "hash_table.m"
    MR_bool mercury__hash_table__succeeded = (mercury__hash_table__N_6 <= (MR_Integer) 0);
#line 287 "hash_table.m"
    MR_Word mercury__hash_table__HT_8;

#line 287 "hash_table.m"
    if (mercury__hash_table__succeeded)
#line 286 "hash_table.m"
      {
#line 286 "hash_table.m"
        MR_Word mercury__hash_table__TypeCtorInfo_28_28 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 286 "hash_table.m"
        MR_Word mercury__hash_table__V_13_13 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.init: N =< 0"));

#line 286 "hash_table.m"
        {
#line 286 "hash_table.m"
          mercury__exception__throw_1_p_0(mercury__hash_table__TypeCtorInfo_28_28, ((MR_Box) (mercury__hash_table__V_13_13)));
        }
#line 286 "hash_table.m"
      }
#line 287 "hash_table.m"
    else
#line 290 "hash_table.m"
      {
#line 287 "hash_table.m"
        MR_Integer mercury__hash_table__V_15_15;

#line 64 "int.opt"
{
#define MR_PROC_LABEL mercury__hash_table__init_3_f_0

	MR_Integer Bits;

		{
#line 64 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 9144 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_15_15  = Bits;
#line 64 "int.opt"
}
#line 287 "hash_table.m"
        mercury__hash_table__succeeded = (mercury__hash_table__N_6 >= mercury__hash_table__V_15_15);
#line 290 "hash_table.m"
        if (mercury__hash_table__succeeded)
#line 288 "hash_table.m"
          {
#line 288 "hash_table.m"
            MR_Word mercury__hash_table__TypeCtorInfo_29_29 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 288 "hash_table.m"
            MR_Word mercury__hash_table__V_16_16 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.init: N >= int.bits_per_int"));

#line 288 "hash_table.m"
            {
#line 288 "hash_table.m"
              mercury__exception__throw_1_p_0(mercury__hash_table__TypeCtorInfo_29_29, ((MR_Box) (mercury__hash_table__V_16_16)));
            }
#line 288 "hash_table.m"
          }
#line 290 "hash_table.m"
        else
#line 293 "hash_table.m"
          {
#line 290 "hash_table.m"
            mercury__hash_table__succeeded = (mercury__hash_table__MaxOccupancy_7 <= ((MR_Float) 0.0000000000000000));
#line 293 "hash_table.m"
            if (mercury__hash_table__succeeded)
#line 291 "hash_table.m"
              {
#line 291 "hash_table.m"
                MR_Word mercury__hash_table__TypeCtorInfo_30_30 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 291 "hash_table.m"
                MR_Word mercury__hash_table__V_19_19 = (MR_Word) ((MR_Box) ((MR_String) "hash_table.init: MaxOccupancy =< 0.0"));

#line 291 "hash_table.m"
                {
#line 291 "hash_table.m"
                  mercury__exception__throw_1_p_0(mercury__hash_table__TypeCtorInfo_30_30, ((MR_Box) (mercury__hash_table__V_19_19)));
                }
#line 291 "hash_table.m"
              }
#line 293 "hash_table.m"
            else
#line 294 "hash_table.m"
              {
#line 294 "hash_table.m"
                MR_Word mercury__hash_table__TypeCtorInfo_31_31;
#line 294 "hash_table.m"
                MR_Word mercury__hash_table__TypeInfo_32_32;
#line 294 "hash_table.m"
                MR_Integer mercury__hash_table__NumBuckets_9;
#line 294 "hash_table.m"
                MR_Integer mercury__hash_table__MaxOccupants_10;
#line 294 "hash_table.m"
                MR_ArrayPtr mercury__hash_table__Buckets_11;
#line 294 "hash_table.m"
                MR_Float mercury__hash_table__V_22_22;
#line 294 "hash_table.m"
                MR_Float mercury__hash_table__V_23_23;
#line 294 "hash_table.m"
                MR_Word mercury__hash_table__V_24_24;
#line 711 "array.opt"
                MR_ArrayPtr mercury__hash_table__conv0_Buckets_11;

#line 294 "hash_table.m"
                {
#line 294 "hash_table.m"
                  mercury__hash_table__NumBuckets_9 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, mercury__hash_table__N_6);
                }
#line 46 "float.opt"
{
#define MR_PROC_LABEL mercury__hash_table__init_3_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal =  mercury__hash_table__NumBuckets_9 ;
		{
#line 46 "float.opt"

    FloatVal = IntVal;

#line 9232 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__V_23_23  = FloatVal;
#line 46 "float.opt"
}
#line 295 "hash_table.m"
                mercury__hash_table__V_22_22 = (mercury__hash_table__V_23_23 * mercury__hash_table__MaxOccupancy_7);
#line 38 "float.opt"
{
#define MR_PROC_LABEL mercury__hash_table__init_3_f_0

	MR_Float X;
	MR_Integer Ceil;

	X =  mercury__hash_table__V_22_22 ;
		{
#line 38 "float.opt"

    Ceil = (MR_Integer) ceil(X);

#line 9254 "hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__hash_table__MaxOccupants_10  = Ceil;
#line 38 "float.opt"
}
#line 9261 "hash_table.c"
                mercury__hash_table__TypeCtorInfo_31_31 = (MR_Word) &mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2;
#line 9263 "hash_table.c"
                {
#line 9265 "hash_table.c"
                  mercury__hash_table__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9267 "hash_table.c"
                  MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_32_32, 0) = ((MR_Box) (mercury__hash_table__TypeCtorInfo_31_31));
#line 9269 "hash_table.c"
                  MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_32_32, 1) = ((MR_Box) (mercury__hash_table__TypeInfo_for_K_26));
#line 9271 "hash_table.c"
                  MR_hl_field(MR_mktag(0), mercury__hash_table__TypeInfo_32_32, 2) = ((MR_Box) (mercury__hash_table__TypeInfo_for_V_27));
#line 9273 "hash_table.c"
                }
#line 296 "hash_table.m"
                mercury__hash_table__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 711 "array.opt"
                {
#line 711 "array.opt"
                  mercury__array__init_3_p_0(mercury__hash_table__TypeInfo_32_32, mercury__hash_table__NumBuckets_9, ((MR_Box) (mercury__hash_table__V_24_24)), &mercury__hash_table__conv0_Buckets_11);
                }
#line 711 "array.opt"
                mercury__hash_table__Buckets_11 = (MR_ArrayPtr) mercury__hash_table__conv0_Buckets_11;
#line 297 "hash_table.m"
                {
#line 297 "hash_table.m"
                  mercury__hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 297 "hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 0) = ((MR_Box) ((MR_Integer) 0));
#line 297 "hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 1) = ((MR_Box) (mercury__hash_table__MaxOccupants_10));
#line 297 "hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 2) = ((MR_Box) (mercury__hash_table__HashPred_5));
#line 297 "hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__hash_table__HT_8, 3) = ((MR_Box) (mercury__hash_table__Buckets_11));
#line 297 "hash_table.m"
                }
#line 294 "hash_table.m"
              }
#line 293 "hash_table.m"
          }
#line 290 "hash_table.m"
      }
#line 287 "hash_table.m"
    return mercury__hash_table__HT_8;
#line 287 "hash_table.m"
  }
#line 70 "hash_table.m"
}

void mercury__hash_table__init(void)
{
}

void mercury__hash_table__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__hash_table__hash_table__type_ctor_info_buckets_2);
	MR_register_type_ctor_info(&mercury__hash_table__hash_table__type_ctor_info_hash_pred_1);
	MR_register_type_ctor_info(&mercury__hash_table__hash_table__type_ctor_info_hash_table_2);
	MR_register_type_ctor_info(&mercury__hash_table__hash_table__type_ctor_info_hash_table_alist_2);
}

void mercury__hash_table__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hash_table. */
