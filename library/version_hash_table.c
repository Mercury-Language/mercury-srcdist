/*
** Automatically generated from `version_hash_table.m'
** by the Mercury compiler,
** version rotd-2015-10-06
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


/* :- module version_hash_table. */
/* :- implementation. */

/*
INIT mercury__version_hash_table__init
ENDINIT
*/

#include "version_hash_table.mih"


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




#line 94 "version_hash_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__version_hash_table__version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2;

#line 97 "version_hash_table.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__version_hash_table__version_array__pti_version_array_1__pseudo_version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2;

#line 100 "version_hash_table.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__version_hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0;

#line 103 "version_hash_table.c"
static const MR_DuFunctorDesc mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_0;

#line 106 "version_hash_table.c"
static const MR_PseudoTypeInfo mercury__version_hash_table__version_hash_table__field_types_hash_table_alist_2_1[2];

#line 109 "version_hash_table.c"
static const MR_DuFunctorDesc mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_1;

#line 112 "version_hash_table.c"
static const MR_PseudoTypeInfo mercury__version_hash_table__version_hash_table__field_types_hash_table_alist_2_2[3];

#line 115 "version_hash_table.c"
static const MR_DuFunctorDesc mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_2;

#line 118 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_0[1];

#line 121 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_1[1];

#line 124 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_2[1];

#line 127 "version_hash_table.c"
static const MR_DuPtagLayout mercury__version_hash_table__version_hash_table__du_ptag_ordered_hash_table_alist_2[3];

#line 130 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_name_ordered_hash_table_alist_2[3];

#line 133 "version_hash_table.c"
static const MR_Integer mercury__version_hash_table__version_hash_table__functor_number_map_hash_table_alist_2[3];

#line 136 "version_hash_table.c"
static const MR_PseudoTypeInfo mercury__version_hash_table__version_hash_table__field_types_version_hash_table_2_0[4];

#line 139 "version_hash_table.c"
static const MR_ConstString mercury__version_hash_table__version_hash_table__field_names_version_hash_table_2_0[4];

#line 142 "version_hash_table.c"
static const MR_DuFunctorDesc mercury__version_hash_table__version_hash_table__du_functor_desc_version_hash_table_2_0;

#line 145 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_version_hash_table_2_0[1];

#line 148 "version_hash_table.c"
static const MR_DuPtagLayout mercury__version_hash_table__version_hash_table__du_ptag_ordered_version_hash_table_2[1];

#line 151 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_name_ordered_version_hash_table_2[1];

#line 154 "version_hash_table.c"
static const MR_Integer mercury__version_hash_table__version_hash_table__functor_number_map_version_hash_table_2[1];

#line 157 "version_hash_table.c"
static MR_bool MR_CALL 
mercury__version_hash_table____Unify____buckets_2_0_10001(
#line 160 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 162 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 164 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_3,
#line 166 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4);

#line 169 "version_hash_table.c"
static void MR_CALL 
mercury__version_hash_table____Compare____buckets_2_0_10001(
#line 172 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 174 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 176 "version_hash_table.c"
  MR_Box * mercury__version_hash_table__wrapper_arg_3,
#line 178 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4,
#line 180 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_5);

#line 183 "version_hash_table.c"
static MR_bool MR_CALL 
mercury__version_hash_table____Unify____hash_pred_1_0_10001(
#line 186 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 188 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 190 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_3);

#line 193 "version_hash_table.c"
static void MR_CALL 
mercury__version_hash_table____Compare____hash_pred_1_0_10001(
#line 196 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 198 "version_hash_table.c"
  MR_Box * mercury__version_hash_table__wrapper_arg_2,
#line 200 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_3,
#line 202 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4);

#line 205 "version_hash_table.c"
static MR_bool MR_CALL 
mercury__version_hash_table____Unify____hash_table_alist_2_0_10001(
#line 208 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 210 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 212 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_3,
#line 214 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4);

#line 217 "version_hash_table.c"
static void MR_CALL 
mercury__version_hash_table____Compare____hash_table_alist_2_0_10001(
#line 220 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 222 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 224 "version_hash_table.c"
  MR_Box * mercury__version_hash_table__wrapper_arg_3,
#line 226 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4,
#line 228 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_5);

#line 231 "version_hash_table.c"
static MR_bool MR_CALL 
mercury__version_hash_table____Unify____version_hash_table_2_0_10001(
#line 234 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 236 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 238 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_3,
#line 240 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4);

#line 243 "version_hash_table.c"
static void MR_CALL 
mercury__version_hash_table____Compare____version_hash_table_2_0_10001(
#line 246 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 248 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 250 "version_hash_table.c"
  MR_Box * mercury__version_hash_table__wrapper_arg_3,
#line 252 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4,
#line 254 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_5);

#line 819 "version_hash_table.m"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_112_95_95_104_111_50_57_95_95_91_54_93_95_48_4_p_0(
#line 819 "version_hash_table.m"
  MR_Word mercury__version_hash_table__V_21_21,
#line 819 "version_hash_table.m"
  MR_Word mercury__version_hash_table__V_22_22,
#line 819 "version_hash_table.m"
  MR_Word mercury__version_hash_table__V_23_23,
#line 819 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
#line 819 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
#line 819 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6);

#line 55 "version_array.opt"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_53_44_32_49_48_93_95_48_6_p_in__version_array_0(
#line 55 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 55 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 55 "version_array.opt"
  MR_Word mercury__version_hash_table__V_26_26,
#line 55 "version_array.opt"
  MR_Word mercury__version_hash_table__V_27_27,
#line 55 "version_array.opt"
  MR_Word mercury__version_hash_table__V_28_28,
#line 55 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 55 "version_array.opt"
  MR_Box mercury__version_hash_table__V_8_8,
#line 55 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_9_9,
#line 55 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_10_10);

#line 57 "version_array.opt"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
#line 57 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 57 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 57 "version_array.opt"
  MR_Word mercury__version_hash_table__V_24_24,
#line 57 "version_array.opt"
  MR_Word mercury__version_hash_table__V_25_25,
#line 57 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 57 "version_array.opt"
  MR_Box mercury__version_hash_table__V_8_8,
#line 57 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_9_9,
#line 57 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_10_10,
#line 57 "version_array.opt"
  MR_Box mercury__version_hash_table__V_12_11,
#line 57 "version_array.opt"
  MR_Box * mercury__version_hash_table__V_13_12);

#line 56 "version_array.opt"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
#line 56 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 56 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 56 "version_array.opt"
  MR_Word mercury__version_hash_table__V_24_24,
#line 56 "version_array.opt"
  MR_Word mercury__version_hash_table__V_25_25,
#line 56 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 56 "version_array.opt"
  MR_Box mercury__version_hash_table__V_8_8,
#line 56 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_9_9,
#line 56 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_10_10,
#line 56 "version_array.opt"
  MR_Box mercury__version_hash_table__V_12_11,
#line 56 "version_array.opt"
  MR_Box * mercury__version_hash_table__V_13_12);

#line 55 "version_array.opt"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
#line 55 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 55 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 55 "version_array.opt"
  MR_Word mercury__version_hash_table__V_24_24,
#line 55 "version_array.opt"
  MR_Word mercury__version_hash_table__V_25_25,
#line 55 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 55 "version_array.opt"
  MR_Box mercury__version_hash_table__V_8_8,
#line 55 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_9_9,
#line 55 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_10_10,
#line 55 "version_array.opt"
  MR_Box mercury__version_hash_table__V_12_11,
#line 55 "version_array.opt"
  MR_Box * mercury__version_hash_table__V_13_12);

#line 54 "version_array.opt"
static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
#line 54 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 54 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 54 "version_array.opt"
  MR_Word mercury__version_hash_table__V_24_24,
#line 54 "version_array.opt"
  MR_Word mercury__version_hash_table__V_25_25,
#line 54 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 54 "version_array.opt"
  MR_Box mercury__version_hash_table__V_8_8,
#line 54 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_9_9,
#line 54 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_10_10,
#line 54 "version_array.opt"
  MR_Box mercury__version_hash_table__V_12_11,
#line 54 "version_array.opt"
  MR_Box * mercury__version_hash_table__V_13_12);

#line 53 "version_array.opt"
static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
#line 53 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 53 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 53 "version_array.opt"
  MR_Word mercury__version_hash_table__V_24_24,
#line 53 "version_array.opt"
  MR_Word mercury__version_hash_table__V_25_25,
#line 53 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 53 "version_array.opt"
  MR_Box mercury__version_hash_table__V_8_8,
#line 53 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_9_9,
#line 53 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_10_10,
#line 53 "version_array.opt"
  MR_Box mercury__version_hash_table__V_12_11,
#line 53 "version_array.opt"
  MR_Box * mercury__version_hash_table__V_13_12);

#line 52 "version_array.opt"
static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
#line 52 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 52 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 52 "version_array.opt"
  MR_Word mercury__version_hash_table__V_24_24,
#line 52 "version_array.opt"
  MR_Word mercury__version_hash_table__V_25_25,
#line 52 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 52 "version_array.opt"
  MR_Box mercury__version_hash_table__V_8_8,
#line 52 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_9_9,
#line 52 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_10_10,
#line 52 "version_array.opt"
  MR_Box mercury__version_hash_table__V_12_11,
#line 52 "version_array.opt"
  MR_Box * mercury__version_hash_table__V_13_12);

#line 52 "version_array.opt"
static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
#line 52 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 52 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 52 "version_array.opt"
  MR_Word mercury__version_hash_table__V_24_24,
#line 52 "version_array.opt"
  MR_Word mercury__version_hash_table__V_25_25,
#line 52 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 52 "version_array.opt"
  MR_Box mercury__version_hash_table__V_8_8,
#line 52 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_9_9,
#line 52 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_10_10,
#line 52 "version_array.opt"
  MR_Box mercury__version_hash_table__V_12_11,
#line 52 "version_array.opt"
  MR_Box * mercury__version_hash_table__V_13_12);

#line 52 "version_array.opt"
static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_6_p_in__version_array_0(
#line 52 "version_array.opt"
  MR_Word mercury__version_hash_table__V_27_27,
#line 52 "version_array.opt"
  MR_Word mercury__version_hash_table__V_28_28,
#line 52 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 52 "version_array.opt"
  MR_Box mercury__version_hash_table__V_8_8,
#line 52 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_9_9,
#line 52 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_10_10,
#line 52 "version_array.opt"
  MR_Word mercury__version_hash_table__V_12_11,
#line 52 "version_array.opt"
  MR_Word * mercury__version_hash_table__V_13_12);

#line 87 "array.opt"
static MR_Integer MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_53_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
#line 87 "array.opt"
  MR_Word mercury__version_hash_table__V_19_19,
#line 87 "array.opt"
  MR_ArrayPtr mercury__version_hash_table__V_8_8,
#line 87 "array.opt"
  MR_Integer mercury__version_hash_table__V_9_9,
#line 87 "array.opt"
  MR_Integer mercury__version_hash_table__V_10_10,
#line 87 "array.opt"
  MR_Integer mercury__version_hash_table__V_11_11);

#line 64 "array.int"
static MR_Integer MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
#line 64 "array.int"
  MR_Word mercury__version_hash_table__V_13_13,
#line 64 "array.int"
  MR_ArrayPtr mercury__version_hash_table__V_6_6,
#line 64 "array.int"
  MR_Integer mercury__version_hash_table__V_7_7);

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 537 "version_hash_table.m"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(
#line 537 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_12,
#line 537 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL0_4,
#line 537 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 537 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__AL_6);

#line 404 "version_hash_table.m"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(
#line 404 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_14,
#line 404 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL0_5,
#line 404 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_6,
#line 404 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_7,
#line 404 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__AL_8);

#line 127 "list.int"
static void MR_CALL 
mercury__version_hash_table__foldl__ho13_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__version_hash_table__HeadVar__2_2,
#line 127 "list.int"
  MR_Integer mercury__version_hash_table__HeadVar__3_3,
#line 127 "list.int"
  MR_Integer * mercury__version_hash_table__HeadVar__4_4);

#line 636 "version_hash_table.m"
static void MR_CALL 
mercury__version_hash_table__reinsert_alist_5_p_0(
#line 636 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_20,
#line 636 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_21,
#line 636 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL_6,
#line 636 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_7,
#line 636 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumBuckets_8,
#line 636 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13,
#line 636 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Buckets_14);

#line 623 "version_hash_table.m"
static void MR_CALL 
mercury__version_hash_table__reinsert_bindings_6_p_0(
#line 623 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_20,
#line 623 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_21,
#line 623 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__I_7,
#line 623 "version_hash_table.m"
  MR_Box mercury__version_hash_table__OldBuckets_8,
#line 623 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_9,
#line 623 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumBuckets_10,
#line 623 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13,
#line 623 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Buckets_14);

#line 609 "version_hash_table.m"
static MR_Word MR_CALL 
mercury__version_hash_table__expand_4_f_0(
#line 609 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_21,
#line 609 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_22,
#line 609 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumOccupants_6,
#line 609 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__MaxOccupants0_7,
#line 609 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred0_8,
#line 609 "version_hash_table.m"
  MR_Box mercury__version_hash_table__Buckets0_9);


static /* final */ const MR_Box mercury__version_hash_table_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__version_hash_table_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__version_hash_table_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__version_hash_table_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__version_hash_table_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__version_hash_table_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__version_hash_table_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__version_hash_table_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__version_hash_table_scalar_common_2[0])),
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
#include "version_hash_table.mh"



#line 677 "version_hash_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__version_hash_table__version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 686 "version_hash_table.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__version_hash_table__version_array__pti_version_array_1__pseudo_version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2 = {
  &mercury__version_array__version_array__type_ctor_info_version_array_1,
  {
    (MR_PseudoTypeInfo) &mercury__version_hash_table__version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
  }
};

#line 694 "version_hash_table.c"
const MR_TypeCtorInfo_Struct mercury__version_hash_table__version_hash_table__type_ctor_info_buckets_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__version_hash_table____Unify____buckets_2_0_10001)),
  ((MR_Box) (mercury__version_hash_table____Compare____buckets_2_0_10001)),
  (MR_String) "version_hash_table",
  (MR_String) "buckets",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__version_hash_table__version_array__pti_version_array_1__pseudo_version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 711 "version_hash_table.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__version_hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 721 "version_hash_table.c"
const MR_TypeCtorInfo_Struct mercury__version_hash_table__version_hash_table__type_ctor_info_hash_pred_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__version_hash_table____Unify____hash_pred_1_0_10001)),
  ((MR_Box) (mercury__version_hash_table____Compare____hash_pred_1_0_10001)),
  (MR_String) "version_hash_table",
  (MR_String) "hash_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__version_hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 738 "version_hash_table.c"
static const MR_DuFunctorDesc mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_0 = {
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

#line 753 "version_hash_table.c"
static const MR_PseudoTypeInfo mercury__version_hash_table__version_hash_table__field_types_hash_table_alist_2_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 759 "version_hash_table.c"
static const MR_DuFunctorDesc mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_1 = {
  (MR_String) "ht_single",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__version_hash_table__version_hash_table__field_types_hash_table_alist_2_1,
  NULL,
  NULL,
  NULL
};

#line 774 "version_hash_table.c"
static const MR_PseudoTypeInfo mercury__version_hash_table__version_hash_table__field_types_hash_table_alist_2_2[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &mercury__version_hash_table__version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
};

#line 781 "version_hash_table.c"
static const MR_DuFunctorDesc mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_2 = {
  (MR_String) "ht_cons",
  (MR_Integer) 3,
  (MR_Integer) 7,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__version_hash_table__version_hash_table__field_types_hash_table_alist_2_2,
  NULL,
  NULL,
  NULL
};

#line 796 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_0[1] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_0
};

#line 801 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_1[1] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_1
};

#line 806 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_2[1] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_2
};

#line 811 "version_hash_table.c"
static const MR_DuPtagLayout mercury__version_hash_table__version_hash_table__du_ptag_ordered_hash_table_alist_2[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_2
  }
};

#line 830 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_name_ordered_hash_table_alist_2[3] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_2,
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_0,
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_1
};

#line 837 "version_hash_table.c"
static const MR_Integer mercury__version_hash_table__version_hash_table__functor_number_map_hash_table_alist_2[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 844 "version_hash_table.c"
const MR_TypeCtorInfo_Struct mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__version_hash_table____Unify____hash_table_alist_2_0_10001)),
  ((MR_Box) (mercury__version_hash_table____Compare____hash_table_alist_2_0_10001)),
  (MR_String) "version_hash_table",
  (MR_String) "hash_table_alist",
  {     mercury__version_hash_table__version_hash_table__du_name_ordered_hash_table_alist_2 },
  {     mercury__version_hash_table__version_hash_table__du_ptag_ordered_hash_table_alist_2 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__version_hash_table__version_hash_table__functor_number_map_hash_table_alist_2
};

#line 861 "version_hash_table.c"
static const MR_PseudoTypeInfo mercury__version_hash_table__version_hash_table__field_types_version_hash_table_2_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__version_hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__version_hash_table__version_array__pti_version_array_1__pseudo_version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
};

#line 869 "version_hash_table.c"
static const MR_ConstString mercury__version_hash_table__version_hash_table__field_names_version_hash_table_2_0[4] = {
  (MR_String) "ht_num_occupants",
  (MR_String) "ht_max_occupants",
  (MR_String) "ht_hash_pred",
  (MR_String) "ht_buckets"
};

#line 877 "version_hash_table.c"
static const MR_DuFunctorDesc mercury__version_hash_table__version_hash_table__du_functor_desc_version_hash_table_2_0 = {
  (MR_String) "ht",
  (MR_Integer) 4,
  (MR_Integer) 12,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__version_hash_table__version_hash_table__field_types_version_hash_table_2_0,
  mercury__version_hash_table__version_hash_table__field_names_version_hash_table_2_0,
  NULL,
  NULL
};

#line 892 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_version_hash_table_2_0[1] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_version_hash_table_2_0
};

#line 897 "version_hash_table.c"
static const MR_DuPtagLayout mercury__version_hash_table__version_hash_table__du_ptag_ordered_version_hash_table_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__version_hash_table__version_hash_table__du_stag_ordered_version_hash_table_2_0
  }
};

#line 906 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_name_ordered_version_hash_table_2[1] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_version_hash_table_2_0
};

#line 911 "version_hash_table.c"
static const MR_Integer mercury__version_hash_table__version_hash_table__functor_number_map_version_hash_table_2[1] = {
  (MR_Integer) 0
};

#line 916 "version_hash_table.c"
const MR_TypeCtorInfo_Struct mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU_USEREQ,
  ((MR_Box) (mercury__version_hash_table____Unify____version_hash_table_2_0_10001)),
  ((MR_Box) (mercury__version_hash_table____Compare____version_hash_table_2_0_10001)),
  (MR_String) "version_hash_table",
  (MR_String) "version_hash_table",
  {     mercury__version_hash_table__version_hash_table__du_name_ordered_version_hash_table_2 },
  {     mercury__version_hash_table__version_hash_table__du_ptag_ordered_version_hash_table_2 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__version_hash_table__version_hash_table__functor_number_map_version_hash_table_2
};

#line 933 "version_hash_table.c"
static MR_bool MR_CALL 
mercury__version_hash_table____Unify____buckets_2_0_10001(
#line 936 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 938 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 940 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_3,
#line 942 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4)
#line 944 "version_hash_table.c"
{
#line 946 "version_hash_table.c"
  {
#line 948 "version_hash_table.c"
    MR_bool mercury__version_hash_table__succeeded;

#line 951 "version_hash_table.c"
    {
#line 953 "version_hash_table.c"
      mercury__version_hash_table__succeeded = mercury__version_hash_table____Unify____buckets_2_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), ((MR_Box) mercury__version_hash_table__wrapper_arg_3), ((MR_Box) mercury__version_hash_table__wrapper_arg_4));
    }
#line 956 "version_hash_table.c"
    return mercury__version_hash_table__succeeded;
#line 958 "version_hash_table.c"
  }
#line 960 "version_hash_table.c"
}

#line 963 "version_hash_table.c"
static void MR_CALL 
mercury__version_hash_table____Compare____buckets_2_0_10001(
#line 966 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 968 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 970 "version_hash_table.c"
  MR_Box * mercury__version_hash_table__wrapper_arg_3,
#line 972 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4,
#line 974 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_5)
#line 976 "version_hash_table.c"
{
#line 978 "version_hash_table.c"
  {
#line 980 "version_hash_table.c"
    MR_Word mercury__version_hash_table__conv0_HeadVar__1_1;

#line 983 "version_hash_table.c"
    {
#line 985 "version_hash_table.c"
      mercury__version_hash_table____Compare____buckets_2_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), &mercury__version_hash_table__conv0_HeadVar__1_1, ((MR_Box) mercury__version_hash_table__wrapper_arg_4), ((MR_Box) mercury__version_hash_table__wrapper_arg_5));
    }
#line 988 "version_hash_table.c"
    *mercury__version_hash_table__wrapper_arg_3 = ((MR_Box) (mercury__version_hash_table__conv0_HeadVar__1_1));
#line 990 "version_hash_table.c"
  }
#line 992 "version_hash_table.c"
}

#line 995 "version_hash_table.c"
static MR_bool MR_CALL 
mercury__version_hash_table____Unify____hash_pred_1_0_10001(
#line 998 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 1000 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 1002 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_3)
#line 1004 "version_hash_table.c"
{
#line 1006 "version_hash_table.c"
  {
#line 1008 "version_hash_table.c"
    MR_bool mercury__version_hash_table__succeeded;

#line 1011 "version_hash_table.c"
    {
#line 1013 "version_hash_table.c"
      mercury__version_hash_table__succeeded = mercury__version_hash_table____Unify____hash_pred_1_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), ((MR_Word) mercury__version_hash_table__wrapper_arg_3));
    }
#line 1016 "version_hash_table.c"
    return mercury__version_hash_table__succeeded;
#line 1018 "version_hash_table.c"
  }
#line 1020 "version_hash_table.c"
}

#line 1023 "version_hash_table.c"
static void MR_CALL 
mercury__version_hash_table____Compare____hash_pred_1_0_10001(
#line 1026 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 1028 "version_hash_table.c"
  MR_Box * mercury__version_hash_table__wrapper_arg_2,
#line 1030 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_3,
#line 1032 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4)
#line 1034 "version_hash_table.c"
{
#line 1036 "version_hash_table.c"
  {
#line 1038 "version_hash_table.c"
    MR_Word mercury__version_hash_table__conv0_HeadVar__1_1;

#line 1041 "version_hash_table.c"
    {
#line 1043 "version_hash_table.c"
      mercury__version_hash_table____Compare____hash_pred_1_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), &mercury__version_hash_table__conv0_HeadVar__1_1, ((MR_Word) mercury__version_hash_table__wrapper_arg_3), ((MR_Word) mercury__version_hash_table__wrapper_arg_4));
    }
#line 1046 "version_hash_table.c"
    *mercury__version_hash_table__wrapper_arg_2 = ((MR_Box) (mercury__version_hash_table__conv0_HeadVar__1_1));
#line 1048 "version_hash_table.c"
  }
#line 1050 "version_hash_table.c"
}

#line 1053 "version_hash_table.c"
static MR_bool MR_CALL 
mercury__version_hash_table____Unify____hash_table_alist_2_0_10001(
#line 1056 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 1058 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 1060 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_3,
#line 1062 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4)
#line 1064 "version_hash_table.c"
{
#line 1066 "version_hash_table.c"
  {
#line 1068 "version_hash_table.c"
    MR_bool mercury__version_hash_table__succeeded;

#line 1071 "version_hash_table.c"
    {
#line 1073 "version_hash_table.c"
      mercury__version_hash_table__succeeded = mercury__version_hash_table____Unify____hash_table_alist_2_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), ((MR_Word) mercury__version_hash_table__wrapper_arg_3), ((MR_Word) mercury__version_hash_table__wrapper_arg_4));
    }
#line 1076 "version_hash_table.c"
    return mercury__version_hash_table__succeeded;
#line 1078 "version_hash_table.c"
  }
#line 1080 "version_hash_table.c"
}

#line 1083 "version_hash_table.c"
static void MR_CALL 
mercury__version_hash_table____Compare____hash_table_alist_2_0_10001(
#line 1086 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 1088 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 1090 "version_hash_table.c"
  MR_Box * mercury__version_hash_table__wrapper_arg_3,
#line 1092 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4,
#line 1094 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_5)
#line 1096 "version_hash_table.c"
{
#line 1098 "version_hash_table.c"
  {
#line 1100 "version_hash_table.c"
    MR_Word mercury__version_hash_table__conv0_HeadVar__1_1;

#line 1103 "version_hash_table.c"
    {
#line 1105 "version_hash_table.c"
      mercury__version_hash_table____Compare____hash_table_alist_2_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), &mercury__version_hash_table__conv0_HeadVar__1_1, ((MR_Word) mercury__version_hash_table__wrapper_arg_4), ((MR_Word) mercury__version_hash_table__wrapper_arg_5));
    }
#line 1108 "version_hash_table.c"
    *mercury__version_hash_table__wrapper_arg_3 = ((MR_Box) (mercury__version_hash_table__conv0_HeadVar__1_1));
#line 1110 "version_hash_table.c"
  }
#line 1112 "version_hash_table.c"
}

#line 1115 "version_hash_table.c"
static MR_bool MR_CALL 
mercury__version_hash_table____Unify____version_hash_table_2_0_10001(
#line 1118 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 1120 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 1122 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_3,
#line 1124 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4)
#line 1126 "version_hash_table.c"
{
#line 1128 "version_hash_table.c"
  {
#line 1130 "version_hash_table.c"
    MR_bool mercury__version_hash_table__succeeded;

#line 1133 "version_hash_table.c"
    {
#line 1135 "version_hash_table.c"
      mercury__version_hash_table__succeeded = mercury__version_hash_table____Unify____version_hash_table_2_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), ((MR_Word) mercury__version_hash_table__wrapper_arg_3), ((MR_Word) mercury__version_hash_table__wrapper_arg_4));
    }
#line 1138 "version_hash_table.c"
    return mercury__version_hash_table__succeeded;
#line 1140 "version_hash_table.c"
  }
#line 1142 "version_hash_table.c"
}

#line 1145 "version_hash_table.c"
static void MR_CALL 
mercury__version_hash_table____Compare____version_hash_table_2_0_10001(
#line 1148 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 1150 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 1152 "version_hash_table.c"
  MR_Box * mercury__version_hash_table__wrapper_arg_3,
#line 1154 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4,
#line 1156 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_5)
#line 1158 "version_hash_table.c"
{
#line 1160 "version_hash_table.c"
  {
#line 1162 "version_hash_table.c"
    MR_Word mercury__version_hash_table__conv0_HeadVar__1_1;

#line 1165 "version_hash_table.c"
    {
#line 1167 "version_hash_table.c"
      mercury__version_hash_table____Compare____version_hash_table_2_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), &mercury__version_hash_table__conv0_HeadVar__1_1, ((MR_Word) mercury__version_hash_table__wrapper_arg_4), ((MR_Word) mercury__version_hash_table__wrapper_arg_5));
    }
#line 1170 "version_hash_table.c"
    *mercury__version_hash_table__wrapper_arg_3 = ((MR_Box) (mercury__version_hash_table__conv0_HeadVar__1_1));
#line 1172 "version_hash_table.c"
  }
#line 1174 "version_hash_table.c"
}

#line 819 "version_hash_table.m"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_112_95_95_104_111_50_57_95_95_91_54_93_95_48_4_p_0(
#line 819 "version_hash_table.m"
  MR_Word mercury__version_hash_table__V_21_21,
#line 819 "version_hash_table.m"
  MR_Word mercury__version_hash_table__V_22_22,
#line 819 "version_hash_table.m"
  MR_Word mercury__version_hash_table__V_23_23,
#line 819 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
#line 819 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
#line 819 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6)
#line 819 "version_hash_table.m"
{
#line 826 "version_hash_table.m"
  while (MR_TRUE)
#line 826 "version_hash_table.m"
    {
#line 826 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 826 "version_hash_table.m"
      {
#line 826 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 826 "version_hash_table.m"
#line 826 "version_hash_table.m"
        switch (MR_tag((MR_Word) mercury__version_hash_table__List_6)) {
#line 826 "version_hash_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 826 "version_hash_table.m"
          case (MR_Integer) 0:
#line 825 "version_hash_table.m"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 826 "version_hash_table.m"
            break;
#line 826 "version_hash_table.m"
          case (MR_Integer) 1:
#line 827 "version_hash_table.m"
            {
#line 827 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 827 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 827 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_33_33;

#line 856 "version_hash_table.m"
              mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 427 "version_hash_table.m"
              {
#line 427 "version_hash_table.m"
                mercury__version_hash_table__succeeded = mercury__version_hash_table__search_2_f_0(mercury__version_hash_table__V_21_21, mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__K_8, &mercury__version_hash_table__V_33_33);
              }
#line 827 "version_hash_table.m"
              if (mercury__version_hash_table__succeeded)
#line 857 "version_hash_table.m"
                {
#line 857 "version_hash_table.m"
                  return mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_9, mercury__version_hash_table__V_33_33);
                }
#line 827 "version_hash_table.m"
            }
#line 826 "version_hash_table.m"
            break;
#line 826 "version_hash_table.m"
          case (MR_Integer) 2:
#line 830 "version_hash_table.m"
            {
#line 830 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 830 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 830 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 830 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_27_27;

#line 856 "version_hash_table.m"
              mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 427 "version_hash_table.m"
              {
#line 427 "version_hash_table.m"
                mercury__version_hash_table__succeeded = mercury__version_hash_table__search_2_f_0(mercury__version_hash_table__V_21_21, mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__K_16, &mercury__version_hash_table__V_27_27);
              }
#line 830 "version_hash_table.m"
              if (mercury__version_hash_table__succeeded)
#line 830 "version_hash_table.m"
                {
#line 857 "version_hash_table.m"
                  {
#line 857 "version_hash_table.m"
                    mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_17, mercury__version_hash_table__V_27_27);
                  }
#line 830 "version_hash_table.m"
                  if (mercury__version_hash_table__succeeded)
#line 832 "version_hash_table.m"
                    {
#line 832 "version_hash_table.m"
                      /* direct tailcall eliminated */
#line 832 "version_hash_table.m"
                      {
#line 832 "version_hash_table.m"
                        MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;

#line 832 "version_hash_table.m"
                        mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 832 "version_hash_table.m"
                      }
#line 832 "version_hash_table.m"
                      continue;
#line 832 "version_hash_table.m"
                    }
#line 830 "version_hash_table.m"
                }
#line 830 "version_hash_table.m"
            }
#line 826 "version_hash_table.m"
            break;
#line 826 "version_hash_table.m"
        }
#line 826 "version_hash_table.m"
        return mercury__version_hash_table__succeeded;
#line 826 "version_hash_table.m"
      }
#line 826 "version_hash_table.m"
      break;
#line 826 "version_hash_table.m"
    }
#line 819 "version_hash_table.m"
}

#line 55 "version_array.opt"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_53_44_32_49_48_93_95_48_6_p_in__version_array_0(
#line 55 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 55 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 55 "version_array.opt"
  MR_Word mercury__version_hash_table__V_26_26,
#line 55 "version_array.opt"
  MR_Word mercury__version_hash_table__V_27_27,
#line 55 "version_array.opt"
  MR_Word mercury__version_hash_table__V_28_28,
#line 55 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 55 "version_array.opt"
  MR_Box mercury__version_hash_table__V_8_8,
#line 55 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_9_9,
#line 55 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_10_10)
#line 55 "version_array.opt"
{
#line 152 "version_array.opt"
  while (MR_TRUE)
#line 152 "version_array.opt"
    {
#line 152 "version_array.opt"
      /* tailcall optimized into a loop */
#line 152 "version_array.opt"
      {
#line 152 "version_array.opt"
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_9_9 < mercury__version_hash_table__V_10_10);

#line 152 "version_array.opt"
        if (mercury__version_hash_table__succeeded)
#line 147 "version_array.opt"
          {
#line 147 "version_array.opt"
            MR_Word mercury__version_hash_table__V_14_13;
#line 147 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_16_15;
#line 147 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_18_16;
#line 147 "version_array.opt"
            MR_Box mercury__version_hash_table__conv0_V_14_13;

#line 147 "version_array.opt"
            {
#line 147 "version_array.opt"
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__V_8_8, mercury__version_hash_table__V_9_9);
            }
#line 147 "version_array.opt"
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
#line 148 "version_array.opt"
            {
#line 148 "version_array.opt"
              mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_112_95_95_104_111_50_57_95_95_91_54_93_95_48_4_p_0(mercury__version_hash_table__V_26_26, mercury__version_hash_table__V_27_27, mercury__version_hash_table__V_28_28, mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_14_13);
            }
#line 147 "version_array.opt"
            if (mercury__version_hash_table__succeeded)
#line 147 "version_array.opt"
              {
#line 150 "version_array.opt"
                mercury__version_hash_table__V_18_16 = (MR_Integer) 1;
#line 149 "version_array.opt"
                mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__V_9_9 + mercury__version_hash_table__V_18_16);
#line 151 "version_array.opt"
                /* direct tailcall eliminated */
#line 151 "version_array.opt"
                {
#line 151 "version_array.opt"
                  MR_Integer mercury__version_hash_table__V_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;

#line 151 "version_array.opt"
                  mercury__version_hash_table__V_9_9 = mercury__version_hash_table__V_9__tmp_copy_9;
#line 151 "version_array.opt"
                }
#line 151 "version_array.opt"
                continue;
#line 147 "version_array.opt"
              }
#line 147 "version_array.opt"
          }
#line 152 "version_array.opt"
        else
#line 153 "version_array.opt"
          mercury__version_hash_table__succeeded = MR_TRUE;
#line 152 "version_array.opt"
        return mercury__version_hash_table__succeeded;
#line 152 "version_array.opt"
      }
#line 152 "version_array.opt"
      break;
#line 152 "version_array.opt"
    }
#line 55 "version_array.opt"
}

#line 57 "version_array.opt"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
#line 57 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 57 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 57 "version_array.opt"
  MR_Word mercury__version_hash_table__V_24_24,
#line 57 "version_array.opt"
  MR_Word mercury__version_hash_table__V_25_25,
#line 57 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 57 "version_array.opt"
  MR_Box mercury__version_hash_table__V_8_8,
#line 57 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_9_9,
#line 57 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_10_10,
#line 57 "version_array.opt"
  MR_Box mercury__version_hash_table__V_12_11,
#line 57 "version_array.opt"
  MR_Box * mercury__version_hash_table__V_13_12)
#line 57 "version_array.opt"
{
#line 152 "version_array.opt"
  while (MR_TRUE)
#line 152 "version_array.opt"
    {
#line 152 "version_array.opt"
      /* tailcall optimized into a loop */
#line 152 "version_array.opt"
      {
#line 152 "version_array.opt"
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_9_9 < mercury__version_hash_table__V_10_10);

#line 152 "version_array.opt"
        if (mercury__version_hash_table__succeeded)
#line 147 "version_array.opt"
          {
#line 147 "version_array.opt"
            MR_Word mercury__version_hash_table__V_14_13;
#line 147 "version_array.opt"
            MR_Box mercury__version_hash_table__V_15_14;
#line 147 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_16_15;
#line 147 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_18_16;
#line 147 "version_array.opt"
            MR_Box mercury__version_hash_table__conv0_V_14_13;

#line 147 "version_array.opt"
            {
#line 147 "version_array.opt"
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__V_8_8, mercury__version_hash_table__V_9_9);
            }
#line 147 "version_array.opt"
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
#line 148 "version_array.opt"
            {
#line 148 "version_array.opt"
              mercury__version_hash_table__succeeded = mercury__version_hash_table__fold_p_4_p_5(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_24_24, mercury__version_hash_table__V_25_25, mercury__version_hash_table__V_14_13, mercury__version_hash_table__V_12_11, &mercury__version_hash_table__V_15_14);
            }
#line 147 "version_array.opt"
            if (mercury__version_hash_table__succeeded)
#line 147 "version_array.opt"
              {
#line 150 "version_array.opt"
                mercury__version_hash_table__V_18_16 = (MR_Integer) 1;
#line 149 "version_array.opt"
                mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__V_9_9 + mercury__version_hash_table__V_18_16);
#line 151 "version_array.opt"
                /* direct tailcall eliminated */
#line 151 "version_array.opt"
                {
#line 151 "version_array.opt"
                  MR_Integer mercury__version_hash_table__V_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
#line 151 "version_array.opt"
                  MR_Box mercury__version_hash_table__V_12__tmp_copy_11 = mercury__version_hash_table__V_15_14;

#line 151 "version_array.opt"
                  mercury__version_hash_table__V_12_11 = mercury__version_hash_table__V_12__tmp_copy_11;
#line 151 "version_array.opt"
                  mercury__version_hash_table__V_9_9 = mercury__version_hash_table__V_9__tmp_copy_9;
#line 151 "version_array.opt"
                }
#line 151 "version_array.opt"
                continue;
#line 147 "version_array.opt"
              }
#line 147 "version_array.opt"
          }
#line 152 "version_array.opt"
        else
#line 153 "version_array.opt"
          {
#line 153 "version_array.opt"
            *mercury__version_hash_table__V_13_12 = mercury__version_hash_table__V_12_11;
#line 153 "version_array.opt"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 153 "version_array.opt"
          }
#line 152 "version_array.opt"
        return mercury__version_hash_table__succeeded;
#line 152 "version_array.opt"
      }
#line 152 "version_array.opt"
      break;
#line 152 "version_array.opt"
    }
#line 57 "version_array.opt"
}

#line 56 "version_array.opt"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
#line 56 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 56 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 56 "version_array.opt"
  MR_Word mercury__version_hash_table__V_24_24,
#line 56 "version_array.opt"
  MR_Word mercury__version_hash_table__V_25_25,
#line 56 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 56 "version_array.opt"
  MR_Box mercury__version_hash_table__V_8_8,
#line 56 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_9_9,
#line 56 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_10_10,
#line 56 "version_array.opt"
  MR_Box mercury__version_hash_table__V_12_11,
#line 56 "version_array.opt"
  MR_Box * mercury__version_hash_table__V_13_12)
#line 56 "version_array.opt"
{
#line 152 "version_array.opt"
  while (MR_TRUE)
#line 152 "version_array.opt"
    {
#line 152 "version_array.opt"
      /* tailcall optimized into a loop */
#line 152 "version_array.opt"
      {
#line 152 "version_array.opt"
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_9_9 < mercury__version_hash_table__V_10_10);

#line 152 "version_array.opt"
        if (mercury__version_hash_table__succeeded)
#line 147 "version_array.opt"
          {
#line 147 "version_array.opt"
            MR_Word mercury__version_hash_table__V_14_13;
#line 147 "version_array.opt"
            MR_Box mercury__version_hash_table__V_15_14;
#line 147 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_16_15;
#line 147 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_18_16;
#line 147 "version_array.opt"
            MR_Box mercury__version_hash_table__conv0_V_14_13;

#line 147 "version_array.opt"
            {
#line 147 "version_array.opt"
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__V_8_8, mercury__version_hash_table__V_9_9);
            }
#line 147 "version_array.opt"
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
#line 148 "version_array.opt"
            {
#line 148 "version_array.opt"
              mercury__version_hash_table__succeeded = mercury__version_hash_table__fold_p_4_p_4(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_24_24, mercury__version_hash_table__V_25_25, mercury__version_hash_table__V_14_13, mercury__version_hash_table__V_12_11, &mercury__version_hash_table__V_15_14);
            }
#line 147 "version_array.opt"
            if (mercury__version_hash_table__succeeded)
#line 147 "version_array.opt"
              {
#line 150 "version_array.opt"
                mercury__version_hash_table__V_18_16 = (MR_Integer) 1;
#line 149 "version_array.opt"
                mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__V_9_9 + mercury__version_hash_table__V_18_16);
#line 151 "version_array.opt"
                /* direct tailcall eliminated */
#line 151 "version_array.opt"
                {
#line 151 "version_array.opt"
                  MR_Integer mercury__version_hash_table__V_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
#line 151 "version_array.opt"
                  MR_Box mercury__version_hash_table__V_12__tmp_copy_11 = mercury__version_hash_table__V_15_14;

#line 151 "version_array.opt"
                  mercury__version_hash_table__V_12_11 = mercury__version_hash_table__V_12__tmp_copy_11;
#line 151 "version_array.opt"
                  mercury__version_hash_table__V_9_9 = mercury__version_hash_table__V_9__tmp_copy_9;
#line 151 "version_array.opt"
                }
#line 151 "version_array.opt"
                continue;
#line 147 "version_array.opt"
              }
#line 147 "version_array.opt"
          }
#line 152 "version_array.opt"
        else
#line 153 "version_array.opt"
          {
#line 153 "version_array.opt"
            *mercury__version_hash_table__V_13_12 = mercury__version_hash_table__V_12_11;
#line 153 "version_array.opt"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 153 "version_array.opt"
          }
#line 152 "version_array.opt"
        return mercury__version_hash_table__succeeded;
#line 152 "version_array.opt"
      }
#line 152 "version_array.opt"
      break;
#line 152 "version_array.opt"
    }
#line 56 "version_array.opt"
}

#line 55 "version_array.opt"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
#line 55 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 55 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 55 "version_array.opt"
  MR_Word mercury__version_hash_table__V_24_24,
#line 55 "version_array.opt"
  MR_Word mercury__version_hash_table__V_25_25,
#line 55 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 55 "version_array.opt"
  MR_Box mercury__version_hash_table__V_8_8,
#line 55 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_9_9,
#line 55 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_10_10,
#line 55 "version_array.opt"
  MR_Box mercury__version_hash_table__V_12_11,
#line 55 "version_array.opt"
  MR_Box * mercury__version_hash_table__V_13_12)
#line 55 "version_array.opt"
{
#line 152 "version_array.opt"
  while (MR_TRUE)
#line 152 "version_array.opt"
    {
#line 152 "version_array.opt"
      /* tailcall optimized into a loop */
#line 152 "version_array.opt"
      {
#line 152 "version_array.opt"
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_9_9 < mercury__version_hash_table__V_10_10);

#line 152 "version_array.opt"
        if (mercury__version_hash_table__succeeded)
#line 147 "version_array.opt"
          {
#line 147 "version_array.opt"
            MR_Word mercury__version_hash_table__V_14_13;
#line 147 "version_array.opt"
            MR_Box mercury__version_hash_table__V_15_14;
#line 147 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_16_15;
#line 147 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_18_16;
#line 147 "version_array.opt"
            MR_Box mercury__version_hash_table__conv0_V_14_13;

#line 147 "version_array.opt"
            {
#line 147 "version_array.opt"
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__V_8_8, mercury__version_hash_table__V_9_9);
            }
#line 147 "version_array.opt"
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
#line 148 "version_array.opt"
            {
#line 148 "version_array.opt"
              mercury__version_hash_table__succeeded = mercury__version_hash_table__fold_p_4_p_3(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_24_24, mercury__version_hash_table__V_25_25, mercury__version_hash_table__V_14_13, mercury__version_hash_table__V_12_11, &mercury__version_hash_table__V_15_14);
            }
#line 147 "version_array.opt"
            if (mercury__version_hash_table__succeeded)
#line 147 "version_array.opt"
              {
#line 150 "version_array.opt"
                mercury__version_hash_table__V_18_16 = (MR_Integer) 1;
#line 149 "version_array.opt"
                mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__V_9_9 + mercury__version_hash_table__V_18_16);
#line 151 "version_array.opt"
                /* direct tailcall eliminated */
#line 151 "version_array.opt"
                {
#line 151 "version_array.opt"
                  MR_Integer mercury__version_hash_table__V_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
#line 151 "version_array.opt"
                  MR_Box mercury__version_hash_table__V_12__tmp_copy_11 = mercury__version_hash_table__V_15_14;

#line 151 "version_array.opt"
                  mercury__version_hash_table__V_12_11 = mercury__version_hash_table__V_12__tmp_copy_11;
#line 151 "version_array.opt"
                  mercury__version_hash_table__V_9_9 = mercury__version_hash_table__V_9__tmp_copy_9;
#line 151 "version_array.opt"
                }
#line 151 "version_array.opt"
                continue;
#line 147 "version_array.opt"
              }
#line 147 "version_array.opt"
          }
#line 152 "version_array.opt"
        else
#line 153 "version_array.opt"
          {
#line 153 "version_array.opt"
            *mercury__version_hash_table__V_13_12 = mercury__version_hash_table__V_12_11;
#line 153 "version_array.opt"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 153 "version_array.opt"
          }
#line 152 "version_array.opt"
        return mercury__version_hash_table__succeeded;
#line 152 "version_array.opt"
      }
#line 152 "version_array.opt"
      break;
#line 152 "version_array.opt"
    }
#line 55 "version_array.opt"
}

#line 54 "version_array.opt"
static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
#line 54 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 54 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 54 "version_array.opt"
  MR_Word mercury__version_hash_table__V_24_24,
#line 54 "version_array.opt"
  MR_Word mercury__version_hash_table__V_25_25,
#line 54 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 54 "version_array.opt"
  MR_Box mercury__version_hash_table__V_8_8,
#line 54 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_9_9,
#line 54 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_10_10,
#line 54 "version_array.opt"
  MR_Box mercury__version_hash_table__V_12_11,
#line 54 "version_array.opt"
  MR_Box * mercury__version_hash_table__V_13_12)
#line 54 "version_array.opt"
{
#line 152 "version_array.opt"
  while (MR_TRUE)
#line 152 "version_array.opt"
    {
#line 152 "version_array.opt"
      /* tailcall optimized into a loop */
#line 152 "version_array.opt"
      {
#line 152 "version_array.opt"
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_9_9 < mercury__version_hash_table__V_10_10);

#line 152 "version_array.opt"
        if (mercury__version_hash_table__succeeded)
#line 147 "version_array.opt"
          {
#line 147 "version_array.opt"
            MR_Word mercury__version_hash_table__V_14_13;
#line 147 "version_array.opt"
            MR_Box mercury__version_hash_table__V_15_14;
#line 147 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_16_15;
#line 147 "version_array.opt"
            MR_Box mercury__version_hash_table__conv0_V_14_13;

#line 147 "version_array.opt"
            {
#line 147 "version_array.opt"
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__V_8_8, mercury__version_hash_table__V_9_9);
            }
#line 147 "version_array.opt"
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
#line 148 "version_array.opt"
            {
#line 148 "version_array.opt"
              mercury__version_hash_table__fold_p_4_p_2(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_24_24, mercury__version_hash_table__V_25_25, mercury__version_hash_table__V_14_13, mercury__version_hash_table__V_12_11, &mercury__version_hash_table__V_15_14);
            }
#line 149 "version_array.opt"
            mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__V_9_9 + (MR_Integer) 1);
#line 151 "version_array.opt"
            /* direct tailcall eliminated */
#line 151 "version_array.opt"
            {
#line 151 "version_array.opt"
              MR_Integer mercury__version_hash_table__V_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
#line 151 "version_array.opt"
              MR_Box mercury__version_hash_table__V_12__tmp_copy_11 = mercury__version_hash_table__V_15_14;

#line 151 "version_array.opt"
              mercury__version_hash_table__V_12_11 = mercury__version_hash_table__V_12__tmp_copy_11;
#line 151 "version_array.opt"
              mercury__version_hash_table__V_9_9 = mercury__version_hash_table__V_9__tmp_copy_9;
#line 151 "version_array.opt"
            }
#line 151 "version_array.opt"
            continue;
#line 147 "version_array.opt"
          }
#line 152 "version_array.opt"
        else
#line 153 "version_array.opt"
          *mercury__version_hash_table__V_13_12 = mercury__version_hash_table__V_12_11;
#line 152 "version_array.opt"
      }
#line 152 "version_array.opt"
      break;
#line 152 "version_array.opt"
    }
#line 54 "version_array.opt"
}

#line 53 "version_array.opt"
static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
#line 53 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 53 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 53 "version_array.opt"
  MR_Word mercury__version_hash_table__V_24_24,
#line 53 "version_array.opt"
  MR_Word mercury__version_hash_table__V_25_25,
#line 53 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 53 "version_array.opt"
  MR_Box mercury__version_hash_table__V_8_8,
#line 53 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_9_9,
#line 53 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_10_10,
#line 53 "version_array.opt"
  MR_Box mercury__version_hash_table__V_12_11,
#line 53 "version_array.opt"
  MR_Box * mercury__version_hash_table__V_13_12)
#line 53 "version_array.opt"
{
#line 152 "version_array.opt"
  while (MR_TRUE)
#line 152 "version_array.opt"
    {
#line 152 "version_array.opt"
      /* tailcall optimized into a loop */
#line 152 "version_array.opt"
      {
#line 152 "version_array.opt"
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_9_9 < mercury__version_hash_table__V_10_10);

#line 152 "version_array.opt"
        if (mercury__version_hash_table__succeeded)
#line 147 "version_array.opt"
          {
#line 147 "version_array.opt"
            MR_Word mercury__version_hash_table__V_14_13;
#line 147 "version_array.opt"
            MR_Box mercury__version_hash_table__V_15_14;
#line 147 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_16_15;
#line 147 "version_array.opt"
            MR_Box mercury__version_hash_table__conv0_V_14_13;

#line 147 "version_array.opt"
            {
#line 147 "version_array.opt"
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__V_8_8, mercury__version_hash_table__V_9_9);
            }
#line 147 "version_array.opt"
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
#line 148 "version_array.opt"
            {
#line 148 "version_array.opt"
              mercury__version_hash_table__fold_p_4_p_1(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_24_24, mercury__version_hash_table__V_25_25, mercury__version_hash_table__V_14_13, mercury__version_hash_table__V_12_11, &mercury__version_hash_table__V_15_14);
            }
#line 149 "version_array.opt"
            mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__V_9_9 + (MR_Integer) 1);
#line 151 "version_array.opt"
            /* direct tailcall eliminated */
#line 151 "version_array.opt"
            {
#line 151 "version_array.opt"
              MR_Integer mercury__version_hash_table__V_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
#line 151 "version_array.opt"
              MR_Box mercury__version_hash_table__V_12__tmp_copy_11 = mercury__version_hash_table__V_15_14;

#line 151 "version_array.opt"
              mercury__version_hash_table__V_12_11 = mercury__version_hash_table__V_12__tmp_copy_11;
#line 151 "version_array.opt"
              mercury__version_hash_table__V_9_9 = mercury__version_hash_table__V_9__tmp_copy_9;
#line 151 "version_array.opt"
            }
#line 151 "version_array.opt"
            continue;
#line 147 "version_array.opt"
          }
#line 152 "version_array.opt"
        else
#line 153 "version_array.opt"
          *mercury__version_hash_table__V_13_12 = mercury__version_hash_table__V_12_11;
#line 152 "version_array.opt"
      }
#line 152 "version_array.opt"
      break;
#line 152 "version_array.opt"
    }
#line 53 "version_array.opt"
}

#line 52 "version_array.opt"
static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
#line 52 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 52 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 52 "version_array.opt"
  MR_Word mercury__version_hash_table__V_24_24,
#line 52 "version_array.opt"
  MR_Word mercury__version_hash_table__V_25_25,
#line 52 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 52 "version_array.opt"
  MR_Box mercury__version_hash_table__V_8_8,
#line 52 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_9_9,
#line 52 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_10_10,
#line 52 "version_array.opt"
  MR_Box mercury__version_hash_table__V_12_11,
#line 52 "version_array.opt"
  MR_Box * mercury__version_hash_table__V_13_12)
#line 52 "version_array.opt"
{
#line 152 "version_array.opt"
  while (MR_TRUE)
#line 152 "version_array.opt"
    {
#line 152 "version_array.opt"
      /* tailcall optimized into a loop */
#line 152 "version_array.opt"
      {
#line 152 "version_array.opt"
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_9_9 < mercury__version_hash_table__V_10_10);

#line 152 "version_array.opt"
        if (mercury__version_hash_table__succeeded)
#line 147 "version_array.opt"
          {
#line 147 "version_array.opt"
            MR_Word mercury__version_hash_table__V_14_13;
#line 147 "version_array.opt"
            MR_Box mercury__version_hash_table__V_15_14;
#line 147 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_16_15;
#line 147 "version_array.opt"
            MR_Box mercury__version_hash_table__conv0_V_14_13;

#line 147 "version_array.opt"
            {
#line 147 "version_array.opt"
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__V_8_8, mercury__version_hash_table__V_9_9);
            }
#line 147 "version_array.opt"
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
#line 148 "version_array.opt"
            {
#line 148 "version_array.opt"
              mercury__version_hash_table__fold_p_4_p_0(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_24_24, mercury__version_hash_table__V_25_25, mercury__version_hash_table__V_14_13, mercury__version_hash_table__V_12_11, &mercury__version_hash_table__V_15_14);
            }
#line 149 "version_array.opt"
            mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__V_9_9 + (MR_Integer) 1);
#line 151 "version_array.opt"
            /* direct tailcall eliminated */
#line 151 "version_array.opt"
            {
#line 151 "version_array.opt"
              MR_Integer mercury__version_hash_table__V_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
#line 151 "version_array.opt"
              MR_Box mercury__version_hash_table__V_12__tmp_copy_11 = mercury__version_hash_table__V_15_14;

#line 151 "version_array.opt"
              mercury__version_hash_table__V_12_11 = mercury__version_hash_table__V_12__tmp_copy_11;
#line 151 "version_array.opt"
              mercury__version_hash_table__V_9_9 = mercury__version_hash_table__V_9__tmp_copy_9;
#line 151 "version_array.opt"
            }
#line 151 "version_array.opt"
            continue;
#line 147 "version_array.opt"
          }
#line 152 "version_array.opt"
        else
#line 153 "version_array.opt"
          *mercury__version_hash_table__V_13_12 = mercury__version_hash_table__V_12_11;
#line 152 "version_array.opt"
      }
#line 152 "version_array.opt"
      break;
#line 152 "version_array.opt"
    }
#line 52 "version_array.opt"
}

#line 52 "version_array.opt"
static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
#line 52 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 52 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 52 "version_array.opt"
  MR_Word mercury__version_hash_table__V_24_24,
#line 52 "version_array.opt"
  MR_Word mercury__version_hash_table__V_25_25,
#line 52 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 52 "version_array.opt"
  MR_Box mercury__version_hash_table__V_8_8,
#line 52 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_9_9,
#line 52 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_10_10,
#line 52 "version_array.opt"
  MR_Box mercury__version_hash_table__V_12_11,
#line 52 "version_array.opt"
  MR_Box * mercury__version_hash_table__V_13_12)
#line 52 "version_array.opt"
{
#line 152 "version_array.opt"
  while (MR_TRUE)
#line 152 "version_array.opt"
    {
#line 152 "version_array.opt"
      /* tailcall optimized into a loop */
#line 152 "version_array.opt"
      {
#line 152 "version_array.opt"
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_9_9 < mercury__version_hash_table__V_10_10);

#line 152 "version_array.opt"
        if (mercury__version_hash_table__succeeded)
#line 147 "version_array.opt"
          {
#line 147 "version_array.opt"
            MR_Word mercury__version_hash_table__V_14_13;
#line 147 "version_array.opt"
            MR_Box mercury__version_hash_table__V_15_14;
#line 147 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_16_15;
#line 147 "version_array.opt"
            MR_Box mercury__version_hash_table__conv0_V_14_13;

#line 147 "version_array.opt"
            {
#line 147 "version_array.opt"
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__V_8_8, mercury__version_hash_table__V_9_9);
            }
#line 147 "version_array.opt"
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
#line 148 "version_array.opt"
            {
#line 148 "version_array.opt"
              mercury__version_hash_table__fold_f_4_p_0(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_24_24, mercury__version_hash_table__V_25_25, mercury__version_hash_table__V_14_13, mercury__version_hash_table__V_12_11, &mercury__version_hash_table__V_15_14);
            }
#line 149 "version_array.opt"
            mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__V_9_9 + (MR_Integer) 1);
#line 151 "version_array.opt"
            /* direct tailcall eliminated */
#line 151 "version_array.opt"
            {
#line 151 "version_array.opt"
              MR_Integer mercury__version_hash_table__V_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
#line 151 "version_array.opt"
              MR_Box mercury__version_hash_table__V_12__tmp_copy_11 = mercury__version_hash_table__V_15_14;

#line 151 "version_array.opt"
              mercury__version_hash_table__V_12_11 = mercury__version_hash_table__V_12__tmp_copy_11;
#line 151 "version_array.opt"
              mercury__version_hash_table__V_9_9 = mercury__version_hash_table__V_9__tmp_copy_9;
#line 151 "version_array.opt"
            }
#line 151 "version_array.opt"
            continue;
#line 147 "version_array.opt"
          }
#line 152 "version_array.opt"
        else
#line 153 "version_array.opt"
          *mercury__version_hash_table__V_13_12 = mercury__version_hash_table__V_12_11;
#line 152 "version_array.opt"
      }
#line 152 "version_array.opt"
      break;
#line 152 "version_array.opt"
    }
#line 52 "version_array.opt"
}

#line 52 "version_array.opt"
static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_6_p_in__version_array_0(
#line 52 "version_array.opt"
  MR_Word mercury__version_hash_table__V_27_27,
#line 52 "version_array.opt"
  MR_Word mercury__version_hash_table__V_28_28,
#line 52 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 52 "version_array.opt"
  MR_Box mercury__version_hash_table__V_8_8,
#line 52 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_9_9,
#line 52 "version_array.opt"
  MR_Integer mercury__version_hash_table__V_10_10,
#line 52 "version_array.opt"
  MR_Word mercury__version_hash_table__V_12_11,
#line 52 "version_array.opt"
  MR_Word * mercury__version_hash_table__V_13_12)
#line 52 "version_array.opt"
{
#line 152 "version_array.opt"
  while (MR_TRUE)
#line 152 "version_array.opt"
    {
#line 152 "version_array.opt"
      /* tailcall optimized into a loop */
#line 152 "version_array.opt"
      {
#line 152 "version_array.opt"
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_9_9 < mercury__version_hash_table__V_10_10);

#line 152 "version_array.opt"
        if (mercury__version_hash_table__succeeded)
#line 147 "version_array.opt"
          {
#line 147 "version_array.opt"
            MR_Word mercury__version_hash_table__V_14_13;
#line 147 "version_array.opt"
            MR_Word mercury__version_hash_table__V_15_14;
#line 147 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_16_15;
#line 147 "version_array.opt"
            MR_Box mercury__version_hash_table__conv0_V_14_13;

#line 147 "version_array.opt"
            {
#line 147 "version_array.opt"
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__V_8_8, mercury__version_hash_table__V_9_9);
            }
#line 147 "version_array.opt"
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
#line 148 "version_array.opt"
            {
#line 148 "version_array.opt"
              mercury__version_hash_table__to_assoc_list_2_3_p_0(mercury__version_hash_table__V_27_27, mercury__version_hash_table__V_28_28, mercury__version_hash_table__V_14_13, mercury__version_hash_table__V_12_11, &mercury__version_hash_table__V_15_14);
            }
#line 149 "version_array.opt"
            mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__V_9_9 + (MR_Integer) 1);
#line 151 "version_array.opt"
            /* direct tailcall eliminated */
#line 151 "version_array.opt"
            {
#line 151 "version_array.opt"
              MR_Integer mercury__version_hash_table__V_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
#line 151 "version_array.opt"
              MR_Word mercury__version_hash_table__V_12__tmp_copy_11 = mercury__version_hash_table__V_15_14;

#line 151 "version_array.opt"
              mercury__version_hash_table__V_12_11 = mercury__version_hash_table__V_12__tmp_copy_11;
#line 151 "version_array.opt"
              mercury__version_hash_table__V_9_9 = mercury__version_hash_table__V_9__tmp_copy_9;
#line 151 "version_array.opt"
            }
#line 151 "version_array.opt"
            continue;
#line 147 "version_array.opt"
          }
#line 152 "version_array.opt"
        else
#line 153 "version_array.opt"
          *mercury__version_hash_table__V_13_12 = mercury__version_hash_table__V_12_11;
#line 152 "version_array.opt"
      }
#line 152 "version_array.opt"
      break;
#line 152 "version_array.opt"
    }
#line 52 "version_array.opt"
}

#line 87 "array.opt"
static MR_Integer MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_53_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
#line 87 "array.opt"
  MR_Word mercury__version_hash_table__V_19_19,
#line 87 "array.opt"
  MR_ArrayPtr mercury__version_hash_table__V_8_8,
#line 87 "array.opt"
  MR_Integer mercury__version_hash_table__V_9_9,
#line 87 "array.opt"
  MR_Integer mercury__version_hash_table__V_10_10,
#line 87 "array.opt"
  MR_Integer mercury__version_hash_table__V_11_11)
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
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_11_11 < mercury__version_hash_table__V_10_10);
#line 452 "array.opt"
        MR_Integer mercury__version_hash_table__V_6_12;

#line 452 "array.opt"
        if (mercury__version_hash_table__succeeded)
#line 451 "array.opt"
          mercury__version_hash_table__V_6_12 = mercury__version_hash_table__V_9_9;
#line 452 "array.opt"
        else
#line 453 "array.opt"
          {
#line 453 "array.opt"
            MR_Integer mercury__version_hash_table__V_12_13;
#line 453 "array.opt"
            MR_Integer mercury__version_hash_table__V_14_14;
#line 453 "array.opt"
            MR_Box mercury__version_hash_table__V_13_15;
#line 453 "array.opt"
            MR_Integer mercury__version_hash_table__HX_36;
#line 453 "array.opt"
            MR_Integer mercury__version_hash_table__V_70_70;
#line 453 "array.opt"
            MR_Integer mercury__version_hash_table__V_71_71;
#line 453 "array.opt"
            MR_Integer mercury__version_hash_table__V_72_72;
#line 453 "array.opt"
            MR_Integer mercury__version_hash_table__V_73_73;
#line 942 "array.opt"
            MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_75;

#line 942 "array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_53_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__version_hash_table__V_8_8 , Array);
	Index =  mercury__version_hash_table__V_10_10 ;
		{
#line 942 "array.opt"

    Item = Array->elements[Index];

#line 2291 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_13_15  = (MR_Box) Item;
#line 942 "array.opt"
}
#line 754 "version_hash_table.m"
            {
#line 754 "version_hash_table.m"
              mercury__version_hash_table__generic_hash_2_p_0(mercury__version_hash_table__V_19_19, mercury__version_hash_table__V_13_15, &mercury__version_hash_table__HX_36);
            }
#line 781 "version_hash_table.m"
            mercury__version_hash_table__V_70_70 = (mercury__version_hash_table__V_9_9 << mercury__version_hash_table__HX_36);
#line 64 "int.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_53_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0

	MR_Integer Bits;

		{
#line 64 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 2316 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_73_73  = Bits;
#line 64 "int.opt"
}
#line 782 "version_hash_table.m"
            mercury__version_hash_table__V_72_72 = (mercury__version_hash_table__V_73_73 - mercury__version_hash_table__HX_36);
#line 782 "version_hash_table.m"
            mercury__version_hash_table__V_71_71 = (mercury__version_hash_table__V_9_9 >> mercury__version_hash_table__V_72_72);
#line 781 "version_hash_table.m"
            mercury__version_hash_table__V_12_13 = (mercury__version_hash_table__V_70_70 ^ mercury__version_hash_table__V_71_71);
#line 456 "array.opt"
            mercury__version_hash_table__V_14_14 = (mercury__version_hash_table__V_10_10 + (MR_Integer) 1);
#line 453 "array.opt"
            /* direct tailcall eliminated */
#line 453 "array.opt"
            {
#line 453 "array.opt"
              MR_Integer mercury__version_hash_table__V_9__tmp_copy_9 = mercury__version_hash_table__V_12_13;
#line 453 "array.opt"
              MR_Integer mercury__version_hash_table__V_10__tmp_copy_10 = mercury__version_hash_table__V_14_14;

#line 453 "array.opt"
              mercury__version_hash_table__V_10_10 = mercury__version_hash_table__V_10__tmp_copy_10;
#line 453 "array.opt"
              mercury__version_hash_table__V_9_9 = mercury__version_hash_table__V_9__tmp_copy_9;
#line 453 "array.opt"
            }
#line 453 "array.opt"
            continue;
#line 453 "array.opt"
          }
#line 452 "array.opt"
        return mercury__version_hash_table__V_6_12;
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
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
#line 64 "array.int"
  MR_Word mercury__version_hash_table__V_13_13,
#line 64 "array.int"
  MR_ArrayPtr mercury__version_hash_table__V_6_6,
#line 64 "array.int"
  MR_Integer mercury__version_hash_table__V_7_7)
#line 64 "array.int"
{
#line 575 "array.opt"
  {
#line 575 "array.opt"
    MR_bool mercury__version_hash_table__succeeded;
#line 575 "array.opt"
    MR_Integer mercury__version_hash_table__V_4_8;
#line 575 "array.opt"
    MR_Integer mercury__version_hash_table__V_8_9;
#line 575 "array.opt"
    MR_Integer mercury__version_hash_table__V_9_10;
#line 852 "array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_for_T1_18;
#line 839 "array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_for_T1_19;

#line 852 "array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__version_hash_table__V_6_6 , Array);
		{
#line 852 "array.opt"

    /* Array not used */
    Min = 0;

#line 2401 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_8_9  = Min;
#line 852 "array.opt"
}
#line 839 "array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__version_hash_table__V_6_6 , Array);
		{
#line 839 "array.opt"

    Max = Array->size - 1;

#line 2421 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_9_10  = Max;
#line 839 "array.opt"
}
#line 576 "array.opt"
    {
#line 576 "array.opt"
      return mercury__version_hash_table__V_4_8 = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_53_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(mercury__version_hash_table__V_13_13, mercury__version_hash_table__V_6_6, mercury__version_hash_table__V_7_7, mercury__version_hash_table__V_8_9, mercury__version_hash_table__V_9_10);
    }
#line 575 "array.opt"
    return mercury__version_hash_table__V_4_8;
#line 575 "array.opt"
  }
#line 64 "array.int"
}

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__version_hash_table__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
}

#line 537 "version_hash_table.m"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(
#line 537 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_12,
#line 537 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL0_4,
#line 537 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 537 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__AL_6)
#line 537 "version_hash_table.m"
{
#line 545 "version_hash_table.m"
  {
#line 545 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 545 "version_hash_table.m"
    if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_4)) == (MR_mktag((MR_Integer) 2))))
#line 550 "version_hash_table.m"
      {
#line 550 "version_hash_table.m"
        MR_Box mercury__version_hash_table__K0_8 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_4, (MR_Integer) 0));
#line 550 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V0_9 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_4, (MR_Integer) 1));
#line 550 "version_hash_table.m"
        MR_Word mercury__version_hash_table__T0_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_4, (MR_Integer) 2)));

#line 551 "version_hash_table.m"
        {
#line 551 "version_hash_table.m"
          mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_12, mercury__version_hash_table__K0_8, mercury__version_hash_table__K_5);
        }
#line 553 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 552 "version_hash_table.m"
          {
#line 552 "version_hash_table.m"
            *mercury__version_hash_table__AL_6 = mercury__version_hash_table__T0_10;
#line 552 "version_hash_table.m"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 552 "version_hash_table.m"
          }
#line 553 "version_hash_table.m"
        else
#line 554 "version_hash_table.m"
          {
#line 554 "version_hash_table.m"
            MR_Word mercury__version_hash_table__T_11;

#line 554 "version_hash_table.m"
            {
#line 554 "version_hash_table.m"
              mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(mercury__version_hash_table__TypeInfo_for_K_12, mercury__version_hash_table__T0_10, mercury__version_hash_table__K_5, &mercury__version_hash_table__T_11);
            }
#line 554 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 554 "version_hash_table.m"
              {
#line 555 "version_hash_table.m"
                {
#line 555 "version_hash_table.m"
                  MR_Word base;
#line 555 "version_hash_table.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 555 "version_hash_table.m"
                  *mercury__version_hash_table__AL_6 = base;
#line 555 "version_hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__version_hash_table__K0_8;
#line 555 "version_hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__version_hash_table__V0_9;
#line 555 "version_hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__version_hash_table__T_11));
#line 555 "version_hash_table.m"
                }
#line 555 "version_hash_table.m"
                mercury__version_hash_table__succeeded = MR_TRUE;
#line 554 "version_hash_table.m"
              }
#line 554 "version_hash_table.m"
          }
#line 550 "version_hash_table.m"
      }
#line 545 "version_hash_table.m"
    else
#line 545 "version_hash_table.m"
    if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_4)) == (MR_mktag((MR_Integer) 1))))
#line 546 "version_hash_table.m"
      {
#line 546 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_4, (MR_Integer) 0));
#line 546 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_4, (MR_Integer) 1));

#line 546 "version_hash_table.m"
        {
#line 546 "version_hash_table.m"
          mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_12, mercury__version_hash_table__K_5, mercury__version_hash_table__V_14_14);
        }
#line 546 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 546 "version_hash_table.m"
          {
#line 548 "version_hash_table.m"
            *mercury__version_hash_table__AL_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 548 "version_hash_table.m"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 546 "version_hash_table.m"
          }
#line 546 "version_hash_table.m"
      }
#line 545 "version_hash_table.m"
    else
#line 545 "version_hash_table.m"
      mercury__version_hash_table__succeeded = MR_FALSE;
#line 545 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 545 "version_hash_table.m"
  }
#line 537 "version_hash_table.m"
}

#line 404 "version_hash_table.m"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(
#line 404 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_14,
#line 404 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL0_5,
#line 404 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_6,
#line 404 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_7,
#line 404 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__AL_8)
#line 404 "version_hash_table.m"
{
#line 412 "version_hash_table.m"
  {
#line 412 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 412 "version_hash_table.m"
    if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_5)) == (MR_mktag((MR_Integer) 2))))
#line 416 "version_hash_table.m"
      {
#line 416 "version_hash_table.m"
        MR_Box mercury__version_hash_table__K0_10 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_5, (MR_Integer) 0));
#line 416 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V0_11 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_5, (MR_Integer) 1));
#line 416 "version_hash_table.m"
        MR_Word mercury__version_hash_table__T0_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_5, (MR_Integer) 2)));

#line 417 "version_hash_table.m"
        {
#line 417 "version_hash_table.m"
          mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_14, mercury__version_hash_table__K0_10, mercury__version_hash_table__K_6);
        }
#line 419 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 418 "version_hash_table.m"
          {
#line 418 "version_hash_table.m"
            {
#line 418 "version_hash_table.m"
              MR_Word base;
#line 418 "version_hash_table.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 418 "version_hash_table.m"
              *mercury__version_hash_table__AL_8 = base;
#line 418 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), base, 0) = mercury__version_hash_table__K0_10;
#line 418 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), base, 1) = mercury__version_hash_table__V_7;
#line 418 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__version_hash_table__T0_12));
#line 418 "version_hash_table.m"
            }
#line 418 "version_hash_table.m"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 418 "version_hash_table.m"
          }
#line 419 "version_hash_table.m"
        else
#line 420 "version_hash_table.m"
          {
#line 420 "version_hash_table.m"
            MR_Word mercury__version_hash_table__T_13;

#line 420 "version_hash_table.m"
            {
#line 420 "version_hash_table.m"
              mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(mercury__version_hash_table__TypeInfo_for_K_14, mercury__version_hash_table__T0_12, mercury__version_hash_table__K_6, mercury__version_hash_table__V_7, &mercury__version_hash_table__T_13);
            }
#line 420 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 420 "version_hash_table.m"
              {
#line 421 "version_hash_table.m"
                {
#line 421 "version_hash_table.m"
                  MR_Word base;
#line 421 "version_hash_table.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 421 "version_hash_table.m"
                  *mercury__version_hash_table__AL_8 = base;
#line 421 "version_hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__version_hash_table__K0_10;
#line 421 "version_hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__version_hash_table__V0_11;
#line 421 "version_hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__version_hash_table__T_13));
#line 421 "version_hash_table.m"
                }
#line 421 "version_hash_table.m"
                mercury__version_hash_table__succeeded = MR_TRUE;
#line 420 "version_hash_table.m"
              }
#line 420 "version_hash_table.m"
          }
#line 416 "version_hash_table.m"
      }
#line 412 "version_hash_table.m"
    else
#line 412 "version_hash_table.m"
    if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_5)) == (MR_mktag((MR_Integer) 1))))
#line 413 "version_hash_table.m"
      {
#line 413 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V_16_16 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_5, (MR_Integer) 0));
#line 413 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_5, (MR_Integer) 1));

#line 413 "version_hash_table.m"
        {
#line 413 "version_hash_table.m"
          mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_14, mercury__version_hash_table__K_6, mercury__version_hash_table__V_16_16);
        }
#line 413 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 413 "version_hash_table.m"
          {
#line 414 "version_hash_table.m"
            {
#line 414 "version_hash_table.m"
              MR_Word base;
#line 414 "version_hash_table.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "version_hash_table.m"
              *mercury__version_hash_table__AL_8 = base;
#line 414 "version_hash_table.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__version_hash_table__K_6;
#line 414 "version_hash_table.m"
              MR_hl_field(MR_mktag(1), base, 1) = mercury__version_hash_table__V_7;
#line 414 "version_hash_table.m"
            }
#line 414 "version_hash_table.m"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 413 "version_hash_table.m"
          }
#line 413 "version_hash_table.m"
      }
#line 412 "version_hash_table.m"
    else
#line 412 "version_hash_table.m"
      mercury__version_hash_table__succeeded = MR_FALSE;
#line 412 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 412 "version_hash_table.m"
  }
#line 404 "version_hash_table.m"
}

#line 127 "list.int"
static void MR_CALL 
mercury__version_hash_table__foldl__ho13_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__version_hash_table__HeadVar__2_2,
#line 127 "list.int"
  MR_Integer mercury__version_hash_table__HeadVar__3_3,
#line 127 "list.int"
  MR_Integer * mercury__version_hash_table__HeadVar__4_4)
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
        MR_bool mercury__version_hash_table__succeeded;

#line 391 "list.opt"
        if ((mercury__version_hash_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "list.opt"
          *mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__HeadVar__3_3;
#line 391 "list.opt"
        else
#line 393 "list.opt"
          {
#line 393 "list.opt"
            MR_Word mercury__version_hash_table__TypeCtorInfo_47_59 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 393 "list.opt"
            MR_Word mercury__version_hash_table__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0)));
#line 393 "list.opt"
            MR_Word mercury__version_hash_table__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1)));
#line 393 "list.opt"
            MR_Integer mercury__version_hash_table__V_15_13;
#line 393 "list.opt"
            MR_Integer mercury__version_hash_table__HUA_36;
#line 393 "list.opt"
            MR_Integer mercury__version_hash_table__V_64_64;
#line 393 "list.opt"
            MR_Integer mercury__version_hash_table__V_65_65;
#line 393 "list.opt"
            MR_Integer mercury__version_hash_table__V_66_66;
#line 393 "list.opt"
            MR_Integer mercury__version_hash_table__V_67_67;

#line 768 "version_hash_table.m"
            {
#line 768 "version_hash_table.m"
              mercury__version_hash_table__generic_hash_2_p_0(mercury__version_hash_table__TypeCtorInfo_47_59, ((MR_Box) (mercury__version_hash_table__V_10_9)), &mercury__version_hash_table__HUA_36);
            }
#line 781 "version_hash_table.m"
            mercury__version_hash_table__V_64_64 = (mercury__version_hash_table__HeadVar__3_3 << mercury__version_hash_table__HUA_36);
#line 64 "int.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__foldl__ho13_4_p_in__list_0

	MR_Integer Bits;

		{
#line 64 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 2798 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_67_67  = Bits;
#line 64 "int.opt"
}
#line 782 "version_hash_table.m"
            mercury__version_hash_table__V_66_66 = (mercury__version_hash_table__V_67_67 - mercury__version_hash_table__HUA_36);
#line 782 "version_hash_table.m"
            mercury__version_hash_table__V_65_65 = (mercury__version_hash_table__HeadVar__3_3 >> mercury__version_hash_table__V_66_66);
#line 781 "version_hash_table.m"
            mercury__version_hash_table__V_15_13 = (mercury__version_hash_table__V_64_64 ^ mercury__version_hash_table__V_65_65);
#line 395 "list.opt"
            /* direct tailcall eliminated */
#line 395 "list.opt"
            {
#line 395 "list.opt"
              MR_Word mercury__version_hash_table__HeadVar__2__tmp_copy_2 = mercury__version_hash_table__V_11_10;
#line 395 "list.opt"
              MR_Integer mercury__version_hash_table__HeadVar__3__tmp_copy_3 = mercury__version_hash_table__V_15_13;

#line 395 "list.opt"
              mercury__version_hash_table__HeadVar__3_3 = mercury__version_hash_table__HeadVar__3__tmp_copy_3;
#line 395 "list.opt"
              mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__HeadVar__2__tmp_copy_2;
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

#line 229 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table____Compare____version_hash_table_2_0(
#line 229 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_4,
#line 229 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_5,
#line 229 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__1_1,
#line 229 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__2_2,
#line 229 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__3_3)
#line 229 "version_hash_table.m"
{
#line 229 "version_hash_table.m"
  {
#line 229 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 229 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_6_6 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2;
#line 229 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_7_7;

#line 2863 "version_hash_table.c"
    {
#line 2865 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2867 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_7_7, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_6_6));
#line 2869 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_7_7, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_4));
#line 2871 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_7_7, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_5));
#line 2873 "version_hash_table.c"
    }
#line 229 "version_hash_table.m"
    {
#line 229 "version_hash_table.m"
      mercury__private_builtin__builtin_compare_non_canonical_type_3_p_0(mercury__version_hash_table__TypeInfo_7_7, mercury__version_hash_table__HeadVar__1_1, ((MR_Box) (mercury__version_hash_table__HeadVar__2_2)), ((MR_Box) (mercury__version_hash_table__HeadVar__3_3)));
#line 229 "version_hash_table.m"
      return;
    }
#line 229 "version_hash_table.m"
  }
#line 229 "version_hash_table.m"
}

#line 229 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table____Unify____version_hash_table_2_0(
#line 229 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_5,
#line 229 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_6,
#line 229 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__1_1,
#line 229 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__2_2)
#line 229 "version_hash_table.m"
{
#line 229 "version_hash_table.m"
  {
#line 229 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 229 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__CastX_3 = (MR_Integer) mercury__version_hash_table__HeadVar__1_1;
#line 229 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__CastY_4 = (MR_Integer) mercury__version_hash_table__HeadVar__2_2;

#line 229 "version_hash_table.m"
    mercury__version_hash_table__succeeded = (mercury__version_hash_table__CastX_3 == mercury__version_hash_table__CastY_4);
#line 229 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 229 "version_hash_table.m"
      mercury__version_hash_table__succeeded = MR_TRUE;
#line 229 "version_hash_table.m"
    else
#line 229 "version_hash_table.m"
      {
#line 229 "version_hash_table.m"
        return mercury__version_hash_table__succeeded = mercury__version_hash_table__equal_2_p_0(mercury__version_hash_table__TypeInfo_for_K_5, mercury__version_hash_table__TypeInfo_for_V_6, mercury__version_hash_table__HeadVar__1_1, mercury__version_hash_table__HeadVar__2_2);
      }
#line 229 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 229 "version_hash_table.m"
  }
#line 229 "version_hash_table.m"
}

#line 244 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table____Compare____hash_table_alist_2_0(
#line 244 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_39,
#line 244 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_40,
#line 244 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__1_1,
#line 244 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__2_2,
#line 244 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__3_3)
#line 244 "version_hash_table.m"
{
#line 244 "version_hash_table.m"
  while (MR_TRUE)
#line 244 "version_hash_table.m"
    {
#line 244 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 244 "version_hash_table.m"
      {
#line 244 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;
#line 244 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__CastX_37 = (MR_Integer) mercury__version_hash_table__HeadVar__2_2;
#line 244 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__CastY_38 = (MR_Integer) mercury__version_hash_table__HeadVar__3_3;

#line 244 "version_hash_table.m"
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__CastX_37 == mercury__version_hash_table__CastY_38);
#line 244 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 2963 "version_hash_table.c"
          *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 0;
#line 244 "version_hash_table.m"
        else
#line 244 "version_hash_table.m"
#line 244 "version_hash_table.m"
          switch (MR_tag((MR_Word) mercury__version_hash_table__HeadVar__2_2)) {
#line 244 "version_hash_table.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 244 "version_hash_table.m"
            case (MR_Integer) 0:
#line 244 "version_hash_table.m"
#line 244 "version_hash_table.m"
              switch (MR_tag((MR_Word) mercury__version_hash_table__HeadVar__3_3)) {
#line 244 "version_hash_table.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 244 "version_hash_table.m"
                case (MR_Integer) 0:
#line 244 "version_hash_table.m"
                  *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 0;
#line 244 "version_hash_table.m"
                  break;
#line 244 "version_hash_table.m"
                case (MR_Integer) 1:
#line 2987 "version_hash_table.c"
                  *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 1;
#line 244 "version_hash_table.m"
                  break;
#line 244 "version_hash_table.m"
                case (MR_Integer) 2:
#line 2993 "version_hash_table.c"
                  *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 1;
#line 244 "version_hash_table.m"
                  break;
#line 244 "version_hash_table.m"
              }
#line 244 "version_hash_table.m"
              break;
#line 244 "version_hash_table.m"
            case (MR_Integer) 1:
#line 244 "version_hash_table.m"
              {
#line 244 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_46_46 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 244 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_47_47 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0));

#line 244 "version_hash_table.m"
#line 244 "version_hash_table.m"
                switch (MR_tag((MR_Word) mercury__version_hash_table__HeadVar__3_3)) {
#line 244 "version_hash_table.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 244 "version_hash_table.m"
                  case (MR_Integer) 0:
#line 3017 "version_hash_table.c"
                    *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 2;
#line 244 "version_hash_table.m"
                    break;
#line 244 "version_hash_table.m"
                  case (MR_Integer) 1:
#line 244 "version_hash_table.m"
                    {
#line 244 "version_hash_table.m"
                      MR_Box mercury__version_hash_table__V_13_13 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 0));
#line 244 "version_hash_table.m"
                      MR_Box mercury__version_hash_table__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 1));
#line 244 "version_hash_table.m"
                      MR_Word mercury__version_hash_table__V_15_15;

#line 244 "version_hash_table.m"
                      {
#line 244 "version_hash_table.m"
                        mercury__builtin__compare_3_p_0(mercury__version_hash_table__TypeInfo_for_K_39, &mercury__version_hash_table__V_15_15, mercury__version_hash_table__V_47_47, mercury__version_hash_table__V_13_13);
                      }
#line 3037 "version_hash_table.c"
                      mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_15_15 == (MR_Integer) 0);
#line 244 "version_hash_table.m"
                      mercury__version_hash_table__succeeded = !(mercury__version_hash_table__succeeded);
#line 244 "version_hash_table.m"
                      if (mercury__version_hash_table__succeeded)
#line 244 "version_hash_table.m"
                        *mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__V_15_15;
#line 244 "version_hash_table.m"
                      else
#line 244 "version_hash_table.m"
                        {
#line 244 "version_hash_table.m"
                          mercury__builtin__compare_3_p_0(mercury__version_hash_table__TypeInfo_for_V_40, mercury__version_hash_table__HeadVar__1_1, mercury__version_hash_table__V_46_46, mercury__version_hash_table__V_14_14);
#line 244 "version_hash_table.m"
                          return;
                        }
#line 244 "version_hash_table.m"
                    }
#line 244 "version_hash_table.m"
                    break;
#line 244 "version_hash_table.m"
                  case (MR_Integer) 2:
#line 3060 "version_hash_table.c"
                    *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 1;
#line 244 "version_hash_table.m"
                    break;
#line 244 "version_hash_table.m"
                }
#line 244 "version_hash_table.m"
              }
#line 244 "version_hash_table.m"
              break;
#line 244 "version_hash_table.m"
            case (MR_Integer) 2:
#line 244 "version_hash_table.m"
              {
#line 244 "version_hash_table.m"
                MR_Word mercury__version_hash_table__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 2)));
#line 244 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_44_44 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 244 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_45_45 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0));

#line 244 "version_hash_table.m"
#line 244 "version_hash_table.m"
                switch (MR_tag((MR_Word) mercury__version_hash_table__HeadVar__3_3)) {
#line 244 "version_hash_table.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 244 "version_hash_table.m"
                  case (MR_Integer) 0:
#line 3088 "version_hash_table.c"
                    *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 2;
#line 244 "version_hash_table.m"
                    break;
#line 244 "version_hash_table.m"
                  case (MR_Integer) 1:
#line 3094 "version_hash_table.c"
                    *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 2;
#line 244 "version_hash_table.m"
                    break;
#line 244 "version_hash_table.m"
                  case (MR_Integer) 2:
#line 244 "version_hash_table.m"
                    {
#line 244 "version_hash_table.m"
                      MR_Box mercury__version_hash_table__V_32_32 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 0));
#line 244 "version_hash_table.m"
                      MR_Box mercury__version_hash_table__V_33_33 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 1));
#line 244 "version_hash_table.m"
                      MR_Word mercury__version_hash_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 2)));
#line 244 "version_hash_table.m"
                      MR_Word mercury__version_hash_table__V_35_35;

#line 244 "version_hash_table.m"
                      {
#line 244 "version_hash_table.m"
                        mercury__builtin__compare_3_p_0(mercury__version_hash_table__TypeInfo_for_K_39, &mercury__version_hash_table__V_35_35, mercury__version_hash_table__V_45_45, mercury__version_hash_table__V_32_32);
                      }
#line 3116 "version_hash_table.c"
                      mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_35_35 == (MR_Integer) 0);
#line 244 "version_hash_table.m"
                      mercury__version_hash_table__succeeded = !(mercury__version_hash_table__succeeded);
#line 244 "version_hash_table.m"
                      if (mercury__version_hash_table__succeeded)
#line 244 "version_hash_table.m"
                        *mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__V_35_35;
#line 244 "version_hash_table.m"
                      else
#line 244 "version_hash_table.m"
                        {
#line 244 "version_hash_table.m"
                          MR_Word mercury__version_hash_table__V_36_36;

#line 244 "version_hash_table.m"
                          {
#line 244 "version_hash_table.m"
                            mercury__builtin__compare_3_p_0(mercury__version_hash_table__TypeInfo_for_V_40, &mercury__version_hash_table__V_36_36, mercury__version_hash_table__V_44_44, mercury__version_hash_table__V_33_33);
                          }
#line 3136 "version_hash_table.c"
                          mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_36_36 == (MR_Integer) 0);
#line 244 "version_hash_table.m"
                          mercury__version_hash_table__succeeded = !(mercury__version_hash_table__succeeded);
#line 244 "version_hash_table.m"
                          if (mercury__version_hash_table__succeeded)
#line 244 "version_hash_table.m"
                            *mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__V_36_36;
#line 244 "version_hash_table.m"
                          else
#line 244 "version_hash_table.m"
                            {
#line 244 "version_hash_table.m"
                              /* direct tailcall eliminated */
#line 244 "version_hash_table.m"
                              {
#line 244 "version_hash_table.m"
                                MR_Word mercury__version_hash_table__HeadVar__2__tmp_copy_2 = mercury__version_hash_table__V_43_43;
#line 244 "version_hash_table.m"
                                MR_Word mercury__version_hash_table__HeadVar__3__tmp_copy_3 = mercury__version_hash_table__V_34_34;

#line 244 "version_hash_table.m"
                                mercury__version_hash_table__HeadVar__3_3 = mercury__version_hash_table__HeadVar__3__tmp_copy_3;
#line 244 "version_hash_table.m"
                                mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__HeadVar__2__tmp_copy_2;
#line 244 "version_hash_table.m"
                              }
#line 244 "version_hash_table.m"
                              continue;
#line 244 "version_hash_table.m"
                            }
#line 244 "version_hash_table.m"
                        }
#line 244 "version_hash_table.m"
                    }
#line 244 "version_hash_table.m"
                    break;
#line 244 "version_hash_table.m"
                }
#line 244 "version_hash_table.m"
              }
#line 244 "version_hash_table.m"
              break;
#line 244 "version_hash_table.m"
          }
#line 244 "version_hash_table.m"
      }
#line 244 "version_hash_table.m"
      break;
#line 244 "version_hash_table.m"
    }
#line 244 "version_hash_table.m"
}

#line 244 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table____Unify____hash_table_alist_2_0(
#line 244 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_17,
#line 244 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_18,
#line 244 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__1_1,
#line 244 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__2_2)
#line 244 "version_hash_table.m"
{
#line 244 "version_hash_table.m"
  while (MR_TRUE)
#line 244 "version_hash_table.m"
    {
#line 244 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 244 "version_hash_table.m"
      {
#line 244 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;
#line 244 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__CastX_15 = (MR_Integer) mercury__version_hash_table__HeadVar__1_1;
#line 244 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__CastY_16 = (MR_Integer) mercury__version_hash_table__HeadVar__2_2;

#line 244 "version_hash_table.m"
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__CastX_15 == mercury__version_hash_table__CastY_16);
#line 244 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 244 "version_hash_table.m"
          mercury__version_hash_table__succeeded = MR_TRUE;
#line 244 "version_hash_table.m"
        else
#line 244 "version_hash_table.m"
#line 244 "version_hash_table.m"
          switch (MR_tag((MR_Word) mercury__version_hash_table__HeadVar__1_1)) {
#line 244 "version_hash_table.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 244 "version_hash_table.m"
            case (MR_Integer) 0:
#line 244 "version_hash_table.m"
              {
#line 244 "version_hash_table.m"
                MR_Integer mercury__version_hash_table__CastX_3 = (MR_Integer) mercury__version_hash_table__HeadVar__1_1;
#line 244 "version_hash_table.m"
                MR_Integer mercury__version_hash_table__CastY_4 = (MR_Integer) mercury__version_hash_table__HeadVar__2_2;

#line 244 "version_hash_table.m"
                mercury__version_hash_table__succeeded = (mercury__version_hash_table__CastY_4 == mercury__version_hash_table__CastX_3);
#line 244 "version_hash_table.m"
              }
#line 244 "version_hash_table.m"
              break;
#line 244 "version_hash_table.m"
            case (MR_Integer) 1:
#line 244 "version_hash_table.m"
              {
#line 244 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 0));
#line 244 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 1));
#line 244 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_7_7;
#line 244 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_8_8;

#line 244 "version_hash_table.m"
                mercury__version_hash_table__succeeded = ((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 244 "version_hash_table.m"
                if (mercury__version_hash_table__succeeded)
#line 244 "version_hash_table.m"
                  {
#line 244 "version_hash_table.m"
                    mercury__version_hash_table__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0));
#line 244 "version_hash_table.m"
                    mercury__version_hash_table__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 3269 "version_hash_table.c"
                    {
#line 3271 "version_hash_table.c"
                      mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_17, mercury__version_hash_table__V_5_5, mercury__version_hash_table__V_7_7);
                    }
#line 244 "version_hash_table.m"
                    if (mercury__version_hash_table__succeeded)
#line 3276 "version_hash_table.c"
                      {
#line 3278 "version_hash_table.c"
                        return mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_V_18, mercury__version_hash_table__V_6_6, mercury__version_hash_table__V_8_8);
                      }
#line 244 "version_hash_table.m"
                  }
#line 244 "version_hash_table.m"
              }
#line 244 "version_hash_table.m"
              break;
#line 244 "version_hash_table.m"
            case (MR_Integer) 2:
#line 244 "version_hash_table.m"
              {
#line 244 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_9_9 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 0));
#line 244 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_10_10 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 1));
#line 244 "version_hash_table.m"
                MR_Word mercury__version_hash_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 2)));
#line 244 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_12_12;
#line 244 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_13_13;
#line 244 "version_hash_table.m"
                MR_Word mercury__version_hash_table__V_14_14;

#line 244 "version_hash_table.m"
                mercury__version_hash_table__succeeded = ((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 244 "version_hash_table.m"
                if (mercury__version_hash_table__succeeded)
#line 244 "version_hash_table.m"
                  {
#line 244 "version_hash_table.m"
                    mercury__version_hash_table__V_12_12 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0));
#line 244 "version_hash_table.m"
                    mercury__version_hash_table__V_13_13 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 244 "version_hash_table.m"
                    mercury__version_hash_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 2)));
#line 3316 "version_hash_table.c"
                    {
#line 3318 "version_hash_table.c"
                      mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_17, mercury__version_hash_table__V_9_9, mercury__version_hash_table__V_12_12);
                    }
#line 244 "version_hash_table.m"
                    if (mercury__version_hash_table__succeeded)
#line 244 "version_hash_table.m"
                      {
#line 3325 "version_hash_table.c"
                        {
#line 3327 "version_hash_table.c"
                          mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_V_18, mercury__version_hash_table__V_10_10, mercury__version_hash_table__V_13_13);
                        }
#line 244 "version_hash_table.m"
                        if (mercury__version_hash_table__succeeded)
#line 3332 "version_hash_table.c"
                          {
#line 3334 "version_hash_table.c"
                            /* direct tailcall eliminated */
#line 3336 "version_hash_table.c"
                            {
#line 3338 "version_hash_table.c"
                              MR_Word mercury__version_hash_table__HeadVar__1__tmp_copy_1 = mercury__version_hash_table__V_11_11;
#line 3340 "version_hash_table.c"
                              MR_Word mercury__version_hash_table__HeadVar__2__tmp_copy_2 = mercury__version_hash_table__V_14_14;

#line 3343 "version_hash_table.c"
                              mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__HeadVar__2__tmp_copy_2;
#line 3345 "version_hash_table.c"
                              mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__HeadVar__1__tmp_copy_1;
#line 3347 "version_hash_table.c"
                            }
#line 3349 "version_hash_table.c"
                            continue;
#line 3351 "version_hash_table.c"
                          }
#line 244 "version_hash_table.m"
                      }
#line 244 "version_hash_table.m"
                  }
#line 244 "version_hash_table.m"
              }
#line 244 "version_hash_table.m"
              break;
#line 244 "version_hash_table.m"
          }
#line 244 "version_hash_table.m"
        return mercury__version_hash_table__succeeded;
#line 244 "version_hash_table.m"
      }
#line 244 "version_hash_table.m"
      break;
#line 244 "version_hash_table.m"
    }
#line 244 "version_hash_table.m"
}

#line 34 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table____Compare____hash_pred_1_0(
#line 34 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_6,
#line 34 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__1_1,
#line 34 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__2_2,
#line 34 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__3_3)
#line 34 "version_hash_table.m"
{
#line 34 "version_hash_table.m"
  {
#line 34 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 34 "version_hash_table.m"
    MR_Word mercury__version_hash_table__Cast_HeadVar1_4 = mercury__version_hash_table__HeadVar__2_2;
#line 34 "version_hash_table.m"
    MR_Word mercury__version_hash_table__Cast_HeadVar2_5 = mercury__version_hash_table__HeadVar__3_3;

#line 34 "version_hash_table.m"
    {
#line 34 "version_hash_table.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__version_hash_table__HeadVar__1_1, (MR_Word) mercury__version_hash_table__Cast_HeadVar1_4, (MR_Word) mercury__version_hash_table__Cast_HeadVar2_5);
#line 34 "version_hash_table.m"
      return;
    }
#line 34 "version_hash_table.m"
  }
#line 34 "version_hash_table.m"
}

#line 34 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table____Unify____hash_pred_1_0(
#line 34 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_5,
#line 34 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__1_1,
#line 34 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__2_2)
#line 34 "version_hash_table.m"
{
#line 34 "version_hash_table.m"
  {
#line 34 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 34 "version_hash_table.m"
    MR_Word mercury__version_hash_table__Cast_HeadVar1_3 = mercury__version_hash_table__HeadVar__1_1;
#line 34 "version_hash_table.m"
    MR_Word mercury__version_hash_table__Cast_HeadVar2_4 = mercury__version_hash_table__HeadVar__2_2;

#line 34 "version_hash_table.m"
    {
#line 34 "version_hash_table.m"
      return mercury__version_hash_table__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__version_hash_table__Cast_HeadVar1_3, (MR_Word) mercury__version_hash_table__Cast_HeadVar2_4);
    }
#line 34 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 34 "version_hash_table.m"
  }
#line 34 "version_hash_table.m"
}

#line 238 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table____Compare____buckets_2_0(
#line 238 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_6,
#line 238 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_7,
#line 238 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__1_1,
#line 238 "version_hash_table.m"
  MR_Box mercury__version_hash_table__HeadVar__2_2,
#line 238 "version_hash_table.m"
  MR_Box mercury__version_hash_table__HeadVar__3_3)
#line 238 "version_hash_table.m"
{
#line 238 "version_hash_table.m"
  {
#line 238 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 238 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_8_8 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 238 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_9_9;
#line 238 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Cast_HeadVar1_4 = mercury__version_hash_table__HeadVar__2_2;
#line 238 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Cast_HeadVar2_5 = mercury__version_hash_table__HeadVar__3_3;

#line 3468 "version_hash_table.c"
    {
#line 3470 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3472 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_9_9, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_8_8));
#line 3474 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_9_9, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_6));
#line 3476 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_9_9, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_7));
#line 3478 "version_hash_table.c"
    }
#line 238 "version_hash_table.m"
    {
#line 238 "version_hash_table.m"
      mercury__version_array____Compare____version_array_1_0(mercury__version_hash_table__TypeInfo_9_9, mercury__version_hash_table__HeadVar__1_1, (MR_Box) mercury__version_hash_table__Cast_HeadVar1_4, (MR_Box) mercury__version_hash_table__Cast_HeadVar2_5);
#line 238 "version_hash_table.m"
      return;
    }
#line 238 "version_hash_table.m"
  }
#line 238 "version_hash_table.m"
}

#line 238 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table____Unify____buckets_2_0(
#line 238 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_5,
#line 238 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_6,
#line 238 "version_hash_table.m"
  MR_Box mercury__version_hash_table__HeadVar__1_1,
#line 238 "version_hash_table.m"
  MR_Box mercury__version_hash_table__HeadVar__2_2)
#line 238 "version_hash_table.m"
{
#line 238 "version_hash_table.m"
  {
#line 238 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 238 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_7_7 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 238 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_8_8;
#line 238 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Cast_HeadVar1_3 = mercury__version_hash_table__HeadVar__1_1;
#line 238 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Cast_HeadVar2_4 = mercury__version_hash_table__HeadVar__2_2;

#line 3518 "version_hash_table.c"
    {
#line 3520 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3522 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_8_8, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_7_7));
#line 3524 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_8_8, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_5));
#line 3526 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_8_8, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_6));
#line 3528 "version_hash_table.c"
    }
#line 238 "version_hash_table.m"
    {
#line 238 "version_hash_table.m"
      return mercury__version_hash_table__succeeded = mercury__version_array____Unify____version_array_1_0(mercury__version_hash_table__TypeInfo_8_8, (MR_Box) mercury__version_hash_table__Cast_HeadVar1_3, (MR_Box) mercury__version_hash_table__Cast_HeadVar2_4);
    }
#line 238 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 238 "version_hash_table.m"
  }
#line 238 "version_hash_table.m"
}

#line 821 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__fold_p_4_p_5(
#line 821 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
#line 821 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
#line 821 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_20,
#line 821 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 821 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 821 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_11,
#line 821 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_12)
#line 821 "version_hash_table.m"
{
#line 826 "version_hash_table.m"
  while (MR_TRUE)
#line 826 "version_hash_table.m"
    {
#line 826 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 826 "version_hash_table.m"
      {
#line 826 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 826 "version_hash_table.m"
#line 826 "version_hash_table.m"
        switch (MR_tag((MR_Word) mercury__version_hash_table__List_6)) {
#line 826 "version_hash_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 826 "version_hash_table.m"
          case (MR_Integer) 0:
#line 825 "version_hash_table.m"
            {
#line 825 "version_hash_table.m"
              *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
#line 825 "version_hash_table.m"
              mercury__version_hash_table__succeeded = MR_TRUE;
#line 825 "version_hash_table.m"
            }
#line 826 "version_hash_table.m"
            break;
#line 826 "version_hash_table.m"
          case (MR_Integer) 1:
#line 827 "version_hash_table.m"
            {
#line 827 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 827 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 828 "version_hash_table.m"
              MR_bool MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 828 "version_hash_table.m"
              {
#line 828 "version_hash_table.m"
                return mercury__version_hash_table__succeeded = mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
              }
#line 827 "version_hash_table.m"
            }
#line 826 "version_hash_table.m"
            break;
#line 826 "version_hash_table.m"
          case (MR_Integer) 2:
#line 830 "version_hash_table.m"
            {
#line 830 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 830 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
#line 830 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 830 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 831 "version_hash_table.m"
              MR_bool MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 831 "version_hash_table.m"
              {
#line 831 "version_hash_table.m"
                mercury__version_hash_table__succeeded = mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
              }
#line 830 "version_hash_table.m"
              if (mercury__version_hash_table__succeeded)
#line 832 "version_hash_table.m"
                {
#line 832 "version_hash_table.m"
                  /* direct tailcall eliminated */
#line 832 "version_hash_table.m"
                  {
#line 832 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
#line 832 "version_hash_table.m"
                    MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

#line 832 "version_hash_table.m"
                    mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 832 "version_hash_table.m"
                    mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 832 "version_hash_table.m"
                  }
#line 832 "version_hash_table.m"
                  continue;
#line 832 "version_hash_table.m"
                }
#line 830 "version_hash_table.m"
            }
#line 826 "version_hash_table.m"
            break;
#line 826 "version_hash_table.m"
        }
#line 826 "version_hash_table.m"
        return mercury__version_hash_table__succeeded;
#line 826 "version_hash_table.m"
      }
#line 826 "version_hash_table.m"
      break;
#line 826 "version_hash_table.m"
    }
#line 821 "version_hash_table.m"
}

#line 820 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__fold_p_4_p_4(
#line 820 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
#line 820 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
#line 820 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_20,
#line 820 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 820 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 820 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_11,
#line 820 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_12)
#line 820 "version_hash_table.m"
{
#line 826 "version_hash_table.m"
  while (MR_TRUE)
#line 826 "version_hash_table.m"
    {
#line 826 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 826 "version_hash_table.m"
      {
#line 826 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 826 "version_hash_table.m"
#line 826 "version_hash_table.m"
        switch (MR_tag((MR_Word) mercury__version_hash_table__List_6)) {
#line 826 "version_hash_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 826 "version_hash_table.m"
          case (MR_Integer) 0:
#line 825 "version_hash_table.m"
            {
#line 825 "version_hash_table.m"
              *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
#line 825 "version_hash_table.m"
              mercury__version_hash_table__succeeded = MR_TRUE;
#line 825 "version_hash_table.m"
            }
#line 826 "version_hash_table.m"
            break;
#line 826 "version_hash_table.m"
          case (MR_Integer) 1:
#line 827 "version_hash_table.m"
            {
#line 827 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 827 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 828 "version_hash_table.m"
              MR_bool MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 828 "version_hash_table.m"
              {
#line 828 "version_hash_table.m"
                return mercury__version_hash_table__succeeded = mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
              }
#line 827 "version_hash_table.m"
            }
#line 826 "version_hash_table.m"
            break;
#line 826 "version_hash_table.m"
          case (MR_Integer) 2:
#line 830 "version_hash_table.m"
            {
#line 830 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 830 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
#line 830 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 830 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 831 "version_hash_table.m"
              MR_bool MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 831 "version_hash_table.m"
              {
#line 831 "version_hash_table.m"
                mercury__version_hash_table__succeeded = mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
              }
#line 830 "version_hash_table.m"
              if (mercury__version_hash_table__succeeded)
#line 832 "version_hash_table.m"
                {
#line 832 "version_hash_table.m"
                  /* direct tailcall eliminated */
#line 832 "version_hash_table.m"
                  {
#line 832 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
#line 832 "version_hash_table.m"
                    MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

#line 832 "version_hash_table.m"
                    mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 832 "version_hash_table.m"
                    mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 832 "version_hash_table.m"
                  }
#line 832 "version_hash_table.m"
                  continue;
#line 832 "version_hash_table.m"
                }
#line 830 "version_hash_table.m"
            }
#line 826 "version_hash_table.m"
            break;
#line 826 "version_hash_table.m"
        }
#line 826 "version_hash_table.m"
        return mercury__version_hash_table__succeeded;
#line 826 "version_hash_table.m"
      }
#line 826 "version_hash_table.m"
      break;
#line 826 "version_hash_table.m"
    }
#line 820 "version_hash_table.m"
}

#line 819 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__fold_p_4_p_3(
#line 819 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
#line 819 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
#line 819 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_20,
#line 819 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 819 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 819 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_11,
#line 819 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_12)
#line 819 "version_hash_table.m"
{
#line 826 "version_hash_table.m"
  while (MR_TRUE)
#line 826 "version_hash_table.m"
    {
#line 826 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 826 "version_hash_table.m"
      {
#line 826 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 826 "version_hash_table.m"
#line 826 "version_hash_table.m"
        switch (MR_tag((MR_Word) mercury__version_hash_table__List_6)) {
#line 826 "version_hash_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 826 "version_hash_table.m"
          case (MR_Integer) 0:
#line 825 "version_hash_table.m"
            {
#line 825 "version_hash_table.m"
              *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
#line 825 "version_hash_table.m"
              mercury__version_hash_table__succeeded = MR_TRUE;
#line 825 "version_hash_table.m"
            }
#line 826 "version_hash_table.m"
            break;
#line 826 "version_hash_table.m"
          case (MR_Integer) 1:
#line 827 "version_hash_table.m"
            {
#line 827 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 827 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 828 "version_hash_table.m"
              MR_bool MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 828 "version_hash_table.m"
              {
#line 828 "version_hash_table.m"
                return mercury__version_hash_table__succeeded = mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
              }
#line 827 "version_hash_table.m"
            }
#line 826 "version_hash_table.m"
            break;
#line 826 "version_hash_table.m"
          case (MR_Integer) 2:
#line 830 "version_hash_table.m"
            {
#line 830 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 830 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
#line 830 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 830 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 831 "version_hash_table.m"
              MR_bool MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 831 "version_hash_table.m"
              {
#line 831 "version_hash_table.m"
                mercury__version_hash_table__succeeded = mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
              }
#line 830 "version_hash_table.m"
              if (mercury__version_hash_table__succeeded)
#line 832 "version_hash_table.m"
                {
#line 832 "version_hash_table.m"
                  /* direct tailcall eliminated */
#line 832 "version_hash_table.m"
                  {
#line 832 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
#line 832 "version_hash_table.m"
                    MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

#line 832 "version_hash_table.m"
                    mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 832 "version_hash_table.m"
                    mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 832 "version_hash_table.m"
                  }
#line 832 "version_hash_table.m"
                  continue;
#line 832 "version_hash_table.m"
                }
#line 830 "version_hash_table.m"
            }
#line 826 "version_hash_table.m"
            break;
#line 826 "version_hash_table.m"
        }
#line 826 "version_hash_table.m"
        return mercury__version_hash_table__succeeded;
#line 826 "version_hash_table.m"
      }
#line 826 "version_hash_table.m"
      break;
#line 826 "version_hash_table.m"
    }
#line 819 "version_hash_table.m"
}

#line 818 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_p_4_p_2(
#line 818 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
#line 818 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
#line 818 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_20,
#line 818 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 818 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 818 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_11,
#line 818 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_12)
#line 818 "version_hash_table.m"
{
#line 826 "version_hash_table.m"
  while (MR_TRUE)
#line 826 "version_hash_table.m"
    {
#line 826 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 826 "version_hash_table.m"
      {
#line 826 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 826 "version_hash_table.m"
#line 826 "version_hash_table.m"
        switch (MR_tag((MR_Word) mercury__version_hash_table__List_6)) {
#line 826 "version_hash_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 826 "version_hash_table.m"
          case (MR_Integer) 0:
#line 825 "version_hash_table.m"
            *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
#line 826 "version_hash_table.m"
            break;
#line 826 "version_hash_table.m"
          case (MR_Integer) 1:
#line 827 "version_hash_table.m"
            {
#line 827 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 827 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 828 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 828 "version_hash_table.m"
              {
#line 828 "version_hash_table.m"
                mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
#line 828 "version_hash_table.m"
                return;
              }
#line 827 "version_hash_table.m"
            }
#line 826 "version_hash_table.m"
            break;
#line 826 "version_hash_table.m"
          case (MR_Integer) 2:
#line 830 "version_hash_table.m"
            {
#line 830 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 830 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
#line 830 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 830 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 831 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 831 "version_hash_table.m"
              {
#line 831 "version_hash_table.m"
                mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
              }
#line 832 "version_hash_table.m"
              /* direct tailcall eliminated */
#line 832 "version_hash_table.m"
              {
#line 832 "version_hash_table.m"
                MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
#line 832 "version_hash_table.m"
                MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

#line 832 "version_hash_table.m"
                mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 832 "version_hash_table.m"
                mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 832 "version_hash_table.m"
              }
#line 832 "version_hash_table.m"
              continue;
#line 830 "version_hash_table.m"
            }
#line 826 "version_hash_table.m"
            break;
#line 826 "version_hash_table.m"
        }
#line 826 "version_hash_table.m"
      }
#line 826 "version_hash_table.m"
      break;
#line 826 "version_hash_table.m"
    }
#line 818 "version_hash_table.m"
}

#line 817 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_p_4_p_1(
#line 817 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
#line 817 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
#line 817 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_20,
#line 817 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 817 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 817 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_11,
#line 817 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_12)
#line 817 "version_hash_table.m"
{
#line 826 "version_hash_table.m"
  while (MR_TRUE)
#line 826 "version_hash_table.m"
    {
#line 826 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 826 "version_hash_table.m"
      {
#line 826 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 826 "version_hash_table.m"
#line 826 "version_hash_table.m"
        switch (MR_tag((MR_Word) mercury__version_hash_table__List_6)) {
#line 826 "version_hash_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 826 "version_hash_table.m"
          case (MR_Integer) 0:
#line 825 "version_hash_table.m"
            *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
#line 826 "version_hash_table.m"
            break;
#line 826 "version_hash_table.m"
          case (MR_Integer) 1:
#line 827 "version_hash_table.m"
            {
#line 827 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 827 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 828 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 828 "version_hash_table.m"
              {
#line 828 "version_hash_table.m"
                mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
#line 828 "version_hash_table.m"
                return;
              }
#line 827 "version_hash_table.m"
            }
#line 826 "version_hash_table.m"
            break;
#line 826 "version_hash_table.m"
          case (MR_Integer) 2:
#line 830 "version_hash_table.m"
            {
#line 830 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 830 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
#line 830 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 830 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 831 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 831 "version_hash_table.m"
              {
#line 831 "version_hash_table.m"
                mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
              }
#line 832 "version_hash_table.m"
              /* direct tailcall eliminated */
#line 832 "version_hash_table.m"
              {
#line 832 "version_hash_table.m"
                MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
#line 832 "version_hash_table.m"
                MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

#line 832 "version_hash_table.m"
                mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 832 "version_hash_table.m"
                mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 832 "version_hash_table.m"
              }
#line 832 "version_hash_table.m"
              continue;
#line 830 "version_hash_table.m"
            }
#line 826 "version_hash_table.m"
            break;
#line 826 "version_hash_table.m"
        }
#line 826 "version_hash_table.m"
      }
#line 826 "version_hash_table.m"
      break;
#line 826 "version_hash_table.m"
    }
#line 817 "version_hash_table.m"
}

#line 816 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_p_4_p_0(
#line 816 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
#line 816 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
#line 816 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_20,
#line 816 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 816 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 816 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_11,
#line 816 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_12)
#line 816 "version_hash_table.m"
{
#line 826 "version_hash_table.m"
  while (MR_TRUE)
#line 826 "version_hash_table.m"
    {
#line 826 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 826 "version_hash_table.m"
      {
#line 826 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 826 "version_hash_table.m"
#line 826 "version_hash_table.m"
        switch (MR_tag((MR_Word) mercury__version_hash_table__List_6)) {
#line 826 "version_hash_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 826 "version_hash_table.m"
          case (MR_Integer) 0:
#line 825 "version_hash_table.m"
            *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
#line 826 "version_hash_table.m"
            break;
#line 826 "version_hash_table.m"
          case (MR_Integer) 1:
#line 827 "version_hash_table.m"
            {
#line 827 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 827 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 828 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 828 "version_hash_table.m"
              {
#line 828 "version_hash_table.m"
                mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
#line 828 "version_hash_table.m"
                return;
              }
#line 827 "version_hash_table.m"
            }
#line 826 "version_hash_table.m"
            break;
#line 826 "version_hash_table.m"
          case (MR_Integer) 2:
#line 830 "version_hash_table.m"
            {
#line 830 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 830 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
#line 830 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 830 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 831 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 831 "version_hash_table.m"
              {
#line 831 "version_hash_table.m"
                mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
              }
#line 832 "version_hash_table.m"
              /* direct tailcall eliminated */
#line 832 "version_hash_table.m"
              {
#line 832 "version_hash_table.m"
                MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
#line 832 "version_hash_table.m"
                MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

#line 832 "version_hash_table.m"
                mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 832 "version_hash_table.m"
                mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 832 "version_hash_table.m"
              }
#line 832 "version_hash_table.m"
              continue;
#line 830 "version_hash_table.m"
            }
#line 826 "version_hash_table.m"
            break;
#line 826 "version_hash_table.m"
        }
#line 826 "version_hash_table.m"
      }
#line 826 "version_hash_table.m"
      break;
#line 826 "version_hash_table.m"
    }
#line 816 "version_hash_table.m"
}

#line 794 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_f_4_p_1(
#line 794 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_15,
#line 794 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_16,
#line 794 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_17,
#line 794 "version_hash_table.m"
  MR_Word mercury__version_hash_table__F_5,
#line 794 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 794 "version_hash_table.m"
  MR_Box mercury__version_hash_table__A0_7,
#line 794 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__A_8)
#line 794 "version_hash_table.m"
{
#line 800 "version_hash_table.m"
  while (MR_TRUE)
#line 800 "version_hash_table.m"
    {
#line 800 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 800 "version_hash_table.m"
      {
#line 800 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 800 "version_hash_table.m"
#line 800 "version_hash_table.m"
        switch (MR_tag((MR_Word) mercury__version_hash_table__List_6)) {
#line 800 "version_hash_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 800 "version_hash_table.m"
          case (MR_Integer) 0:
#line 799 "version_hash_table.m"
            *mercury__version_hash_table__A_8 = mercury__version_hash_table__A0_7;
#line 800 "version_hash_table.m"
            break;
#line 800 "version_hash_table.m"
          case (MR_Integer) 1:
#line 801 "version_hash_table.m"
            {
#line 801 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 801 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_10 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 802 "version_hash_table.m"
              MR_Box MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__F_5, (MR_Integer) 1)));

#line 802 "version_hash_table.m"
              {
#line 802 "version_hash_table.m"
                *mercury__version_hash_table__A_8 = mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__F_5), mercury__version_hash_table__K_9, mercury__version_hash_table__V_10, mercury__version_hash_table__A0_7);
              }
#line 801 "version_hash_table.m"
            }
#line 800 "version_hash_table.m"
            break;
#line 800 "version_hash_table.m"
          case (MR_Integer) 2:
#line 804 "version_hash_table.m"
            {
#line 804 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 804 "version_hash_table.m"
              MR_Box mercury__version_hash_table__A1_12;
#line 804 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_13 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 804 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_14 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 805 "version_hash_table.m"
              MR_Box MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__F_5, (MR_Integer) 1)));

#line 805 "version_hash_table.m"
              {
#line 805 "version_hash_table.m"
                mercury__version_hash_table__A1_12 = mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__F_5), mercury__version_hash_table__K_13, mercury__version_hash_table__V_14, mercury__version_hash_table__A0_7);
              }
#line 806 "version_hash_table.m"
              /* direct tailcall eliminated */
#line 806 "version_hash_table.m"
              {
#line 806 "version_hash_table.m"
                MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_11;
#line 806 "version_hash_table.m"
                MR_Box mercury__version_hash_table__A0__tmp_copy_7 = mercury__version_hash_table__A1_12;

#line 806 "version_hash_table.m"
                mercury__version_hash_table__A0_7 = mercury__version_hash_table__A0__tmp_copy_7;
#line 806 "version_hash_table.m"
                mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 806 "version_hash_table.m"
              }
#line 806 "version_hash_table.m"
              continue;
#line 804 "version_hash_table.m"
            }
#line 800 "version_hash_table.m"
            break;
#line 800 "version_hash_table.m"
        }
#line 800 "version_hash_table.m"
      }
#line 800 "version_hash_table.m"
      break;
#line 800 "version_hash_table.m"
    }
#line 794 "version_hash_table.m"
}

#line 793 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_f_4_p_0(
#line 793 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_15,
#line 793 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_16,
#line 793 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_17,
#line 793 "version_hash_table.m"
  MR_Word mercury__version_hash_table__F_5,
#line 793 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 793 "version_hash_table.m"
  MR_Box mercury__version_hash_table__A0_7,
#line 793 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__A_8)
#line 793 "version_hash_table.m"
{
#line 800 "version_hash_table.m"
  while (MR_TRUE)
#line 800 "version_hash_table.m"
    {
#line 800 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 800 "version_hash_table.m"
      {
#line 800 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 800 "version_hash_table.m"
#line 800 "version_hash_table.m"
        switch (MR_tag((MR_Word) mercury__version_hash_table__List_6)) {
#line 800 "version_hash_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 800 "version_hash_table.m"
          case (MR_Integer) 0:
#line 799 "version_hash_table.m"
            *mercury__version_hash_table__A_8 = mercury__version_hash_table__A0_7;
#line 800 "version_hash_table.m"
            break;
#line 800 "version_hash_table.m"
          case (MR_Integer) 1:
#line 801 "version_hash_table.m"
            {
#line 801 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 801 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_10 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 802 "version_hash_table.m"
              MR_Box MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__F_5, (MR_Integer) 1)));

#line 802 "version_hash_table.m"
              {
#line 802 "version_hash_table.m"
                *mercury__version_hash_table__A_8 = mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__F_5), mercury__version_hash_table__K_9, mercury__version_hash_table__V_10, mercury__version_hash_table__A0_7);
              }
#line 801 "version_hash_table.m"
            }
#line 800 "version_hash_table.m"
            break;
#line 800 "version_hash_table.m"
          case (MR_Integer) 2:
#line 804 "version_hash_table.m"
            {
#line 804 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 804 "version_hash_table.m"
              MR_Box mercury__version_hash_table__A1_12;
#line 804 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_13 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 804 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_14 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 805 "version_hash_table.m"
              MR_Box MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__F_5, (MR_Integer) 1)));

#line 805 "version_hash_table.m"
              {
#line 805 "version_hash_table.m"
                mercury__version_hash_table__A1_12 = mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__F_5), mercury__version_hash_table__K_13, mercury__version_hash_table__V_14, mercury__version_hash_table__A0_7);
              }
#line 806 "version_hash_table.m"
              /* direct tailcall eliminated */
#line 806 "version_hash_table.m"
              {
#line 806 "version_hash_table.m"
                MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_11;
#line 806 "version_hash_table.m"
                MR_Box mercury__version_hash_table__A0__tmp_copy_7 = mercury__version_hash_table__A1_12;

#line 806 "version_hash_table.m"
                mercury__version_hash_table__A0_7 = mercury__version_hash_table__A0__tmp_copy_7;
#line 806 "version_hash_table.m"
                mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 806 "version_hash_table.m"
              }
#line 806 "version_hash_table.m"
              continue;
#line 804 "version_hash_table.m"
            }
#line 800 "version_hash_table.m"
            break;
#line 800 "version_hash_table.m"
        }
#line 800 "version_hash_table.m"
      }
#line 800 "version_hash_table.m"
      break;
#line 800 "version_hash_table.m"
    }
#line 793 "version_hash_table.m"
}

#line 636 "version_hash_table.m"
static void MR_CALL 
mercury__version_hash_table__reinsert_alist_5_p_0(
#line 636 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_20,
#line 636 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_21,
#line 636 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL_6,
#line 636 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_7,
#line 636 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumBuckets_8,
#line 636 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13,
#line 636 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Buckets_14)
#line 636 "version_hash_table.m"
{
#line 642 "version_hash_table.m"
  while (MR_TRUE)
#line 642 "version_hash_table.m"
    {
#line 642 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 642 "version_hash_table.m"
      {
#line 642 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 642 "version_hash_table.m"
#line 642 "version_hash_table.m"
        switch (MR_tag((MR_Word) mercury__version_hash_table__AL_6)) {
#line 642 "version_hash_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 642 "version_hash_table.m"
          case (MR_Integer) 0:
#line 641 "version_hash_table.m"
            *mercury__version_hash_table__STATE_VARIABLE_Buckets_14 = mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13;
#line 642 "version_hash_table.m"
            break;
#line 642 "version_hash_table.m"
          case (MR_Integer) 1:
#line 643 "version_hash_table.m"
            {
#line 643 "version_hash_table.m"
              MR_Word mercury__version_hash_table__TypeCtorInfo_23_66;
#line 643 "version_hash_table.m"
              MR_Word mercury__version_hash_table__TypeInfo_24_67;
#line 643 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_10 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_6, (MR_Integer) 0));
#line 643 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_11 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_6, (MR_Integer) 1));
#line 643 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__H_58;
#line 643 "version_hash_table.m"
              MR_Word mercury__version_hash_table__AL0_59;
#line 643 "version_hash_table.m"
              MR_Word mercury__version_hash_table__AL_60;
#line 643 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__Hash_72;
#line 643 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__V_73_73;
#line 317 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_4)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_7, (MR_Integer) 1)));
#line 317 "version_hash_table.m"
              MR_Box mercury__version_hash_table__conv5_Hash_72;
#line 201 "version_array.opt"
              MR_Box mercury__version_hash_table__conv6_AL0_59;
#line 205 "version_array.opt"
              MR_Box mercury__version_hash_table__conv7_STATE_VARIABLE_Buckets_14;

#line 317 "version_hash_table.m"
              {
#line 317 "version_hash_table.m"
                mercury__version_hash_table__func_4(((MR_Box) mercury__version_hash_table__HashPred_7), mercury__version_hash_table__K_10, &mercury__version_hash_table__conv5_Hash_72);
              }
#line 317 "version_hash_table.m"
              mercury__version_hash_table__Hash_72 = ((MR_Integer) mercury__version_hash_table__conv5_Hash_72);
#line 319 "version_hash_table.m"
              mercury__version_hash_table__V_73_73 = (mercury__version_hash_table__NumBuckets_8 - (MR_Integer) 1);
#line 319 "version_hash_table.m"
              mercury__version_hash_table__H_58 = (mercury__version_hash_table__Hash_72 & mercury__version_hash_table__V_73_73);
#line 4577 "version_hash_table.c"
              mercury__version_hash_table__TypeCtorInfo_23_66 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 4579 "version_hash_table.c"
              {
#line 4581 "version_hash_table.c"
                mercury__version_hash_table__TypeInfo_24_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4583 "version_hash_table.c"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_67, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_23_66));
#line 4585 "version_hash_table.c"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_67, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_20));
#line 4587 "version_hash_table.c"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_67, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_21));
#line 4589 "version_hash_table.c"
              }
#line 201 "version_array.opt"
              {
#line 201 "version_array.opt"
                mercury__version_hash_table__conv6_AL0_59 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_24_67, (MR_Box) mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13, mercury__version_hash_table__H_58);
              }
#line 201 "version_array.opt"
              mercury__version_hash_table__AL0_59 = ((MR_Word) mercury__version_hash_table__conv6_AL0_59);
#line 660 "version_hash_table.m"
#line 660 "version_hash_table.m"
              switch (MR_tag((MR_Word) mercury__version_hash_table__AL0_59)) {
#line 660 "version_hash_table.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 660 "version_hash_table.m"
                case (MR_Integer) 0:
#line 659 "version_hash_table.m"
                  mercury__version_hash_table__AL_60 = mercury__version_hash_table__AL_6;
#line 660 "version_hash_table.m"
                  break;
#line 660 "version_hash_table.m"
                case (MR_Integer) 1:
#line 664 "version_hash_table.m"
                  {
#line 664 "version_hash_table.m"
                    mercury__version_hash_table__AL_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 664 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 0) = mercury__version_hash_table__K_10;
#line 664 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 1) = mercury__version_hash_table__V_11;
#line 664 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 2) = ((MR_Box) (mercury__version_hash_table__AL0_59));
#line 664 "version_hash_table.m"
                  }
#line 660 "version_hash_table.m"
                  break;
#line 660 "version_hash_table.m"
                case (MR_Integer) 2:
#line 664 "version_hash_table.m"
                  {
#line 664 "version_hash_table.m"
                    mercury__version_hash_table__AL_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 664 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 0) = mercury__version_hash_table__K_10;
#line 664 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 1) = mercury__version_hash_table__V_11;
#line 664 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 2) = ((MR_Box) (mercury__version_hash_table__AL0_59));
#line 664 "version_hash_table.m"
                  }
#line 660 "version_hash_table.m"
                  break;
#line 660 "version_hash_table.m"
              }
#line 205 "version_array.opt"
              {
#line 205 "version_array.opt"
                mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_24_67, mercury__version_hash_table__H_58, ((MR_Box) (mercury__version_hash_table__AL_60)), (MR_Box) mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13, &mercury__version_hash_table__conv7_STATE_VARIABLE_Buckets_14);
              }
#line 205 "version_array.opt"
              *mercury__version_hash_table__STATE_VARIABLE_Buckets_14 = (MR_Box) mercury__version_hash_table__conv7_STATE_VARIABLE_Buckets_14;
#line 643 "version_hash_table.m"
            }
#line 642 "version_hash_table.m"
            break;
#line 642 "version_hash_table.m"
          case (MR_Integer) 2:
#line 646 "version_hash_table.m"
            {
#line 646 "version_hash_table.m"
              MR_Word mercury__version_hash_table__TypeCtorInfo_23_36;
#line 646 "version_hash_table.m"
              MR_Word mercury__version_hash_table__TypeInfo_24_37;
#line 646 "version_hash_table.m"
              MR_Word mercury__version_hash_table__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_6, (MR_Integer) 2)));
#line 646 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_15_15;
#line 646 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_18 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_6, (MR_Integer) 0));
#line 646 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_19 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_6, (MR_Integer) 1));
#line 646 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__H_28;
#line 646 "version_hash_table.m"
              MR_Word mercury__version_hash_table__AL0_29;
#line 646 "version_hash_table.m"
              MR_Word mercury__version_hash_table__AL_30;
#line 646 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__Hash_42;
#line 646 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__V_43_43;
#line 317 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_7, (MR_Integer) 1)));
#line 317 "version_hash_table.m"
              MR_Box mercury__version_hash_table__conv1_Hash_42;
#line 201 "version_array.opt"
              MR_Box mercury__version_hash_table__conv2_AL0_29;
#line 205 "version_array.opt"
              MR_Box mercury__version_hash_table__conv3_STATE_VARIABLE_Buckets_15_15;

#line 317 "version_hash_table.m"
              {
#line 317 "version_hash_table.m"
                mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_7), mercury__version_hash_table__K_18, &mercury__version_hash_table__conv1_Hash_42);
              }
#line 317 "version_hash_table.m"
              mercury__version_hash_table__Hash_42 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_42);
#line 319 "version_hash_table.m"
              mercury__version_hash_table__V_43_43 = (mercury__version_hash_table__NumBuckets_8 - (MR_Integer) 1);
#line 319 "version_hash_table.m"
              mercury__version_hash_table__H_28 = (mercury__version_hash_table__Hash_42 & mercury__version_hash_table__V_43_43);
#line 4700 "version_hash_table.c"
              mercury__version_hash_table__TypeCtorInfo_23_36 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 4702 "version_hash_table.c"
              {
#line 4704 "version_hash_table.c"
                mercury__version_hash_table__TypeInfo_24_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4706 "version_hash_table.c"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_37, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_23_36));
#line 4708 "version_hash_table.c"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_37, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_20));
#line 4710 "version_hash_table.c"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_37, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_21));
#line 4712 "version_hash_table.c"
              }
#line 201 "version_array.opt"
              {
#line 201 "version_array.opt"
                mercury__version_hash_table__conv2_AL0_29 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_24_37, (MR_Box) mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13, mercury__version_hash_table__H_28);
              }
#line 201 "version_array.opt"
              mercury__version_hash_table__AL0_29 = ((MR_Word) mercury__version_hash_table__conv2_AL0_29);
#line 660 "version_hash_table.m"
#line 660 "version_hash_table.m"
              switch (MR_tag((MR_Word) mercury__version_hash_table__AL0_29)) {
#line 660 "version_hash_table.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 660 "version_hash_table.m"
                case (MR_Integer) 0:
#line 659 "version_hash_table.m"
                  {
#line 659 "version_hash_table.m"
                    mercury__version_hash_table__AL_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "version_hash_table.m"
                    MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_30, 0) = mercury__version_hash_table__K_18;
#line 659 "version_hash_table.m"
                    MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_30, 1) = mercury__version_hash_table__V_19;
#line 659 "version_hash_table.m"
                  }
#line 660 "version_hash_table.m"
                  break;
#line 660 "version_hash_table.m"
                case (MR_Integer) 1:
#line 664 "version_hash_table.m"
                  {
#line 664 "version_hash_table.m"
                    mercury__version_hash_table__AL_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 664 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 0) = mercury__version_hash_table__K_18;
#line 664 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 1) = mercury__version_hash_table__V_19;
#line 664 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 2) = ((MR_Box) (mercury__version_hash_table__AL0_29));
#line 664 "version_hash_table.m"
                  }
#line 660 "version_hash_table.m"
                  break;
#line 660 "version_hash_table.m"
                case (MR_Integer) 2:
#line 664 "version_hash_table.m"
                  {
#line 664 "version_hash_table.m"
                    mercury__version_hash_table__AL_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 664 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 0) = mercury__version_hash_table__K_18;
#line 664 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 1) = mercury__version_hash_table__V_19;
#line 664 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 2) = ((MR_Box) (mercury__version_hash_table__AL0_29));
#line 664 "version_hash_table.m"
                  }
#line 660 "version_hash_table.m"
                  break;
#line 660 "version_hash_table.m"
              }
#line 205 "version_array.opt"
              {
#line 205 "version_array.opt"
                mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_24_37, mercury__version_hash_table__H_28, ((MR_Box) (mercury__version_hash_table__AL_30)), (MR_Box) mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13, &mercury__version_hash_table__conv3_STATE_VARIABLE_Buckets_15_15);
              }
#line 205 "version_array.opt"
              mercury__version_hash_table__STATE_VARIABLE_Buckets_15_15 = (MR_Box) mercury__version_hash_table__conv3_STATE_VARIABLE_Buckets_15_15;
#line 648 "version_hash_table.m"
              /* direct tailcall eliminated */
#line 648 "version_hash_table.m"
              {
#line 648 "version_hash_table.m"
                MR_Word mercury__version_hash_table__AL__tmp_copy_6 = mercury__version_hash_table__T_12;
#line 648 "version_hash_table.m"
                MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13 = mercury__version_hash_table__STATE_VARIABLE_Buckets_15_15;

#line 648 "version_hash_table.m"
                mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13 = mercury__version_hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13;
#line 648 "version_hash_table.m"
                mercury__version_hash_table__AL_6 = mercury__version_hash_table__AL__tmp_copy_6;
#line 648 "version_hash_table.m"
              }
#line 648 "version_hash_table.m"
              continue;
#line 646 "version_hash_table.m"
            }
#line 642 "version_hash_table.m"
            break;
#line 642 "version_hash_table.m"
        }
#line 642 "version_hash_table.m"
      }
#line 642 "version_hash_table.m"
      break;
#line 642 "version_hash_table.m"
    }
#line 636 "version_hash_table.m"
}

#line 623 "version_hash_table.m"
static void MR_CALL 
mercury__version_hash_table__reinsert_bindings_6_p_0(
#line 623 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_20,
#line 623 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_21,
#line 623 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__I_7,
#line 623 "version_hash_table.m"
  MR_Box mercury__version_hash_table__OldBuckets_8,
#line 623 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_9,
#line 623 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumBuckets_10,
#line 623 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13,
#line 623 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Buckets_14)
#line 623 "version_hash_table.m"
{
#line 630 "version_hash_table.m"
  while (MR_TRUE)
#line 630 "version_hash_table.m"
    {
#line 630 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 630 "version_hash_table.m"
      {
#line 630 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;
#line 628 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_15_15;
#line 277 "version_array.opt"
        MR_Word mercury__version_hash_table__TypeInfo_23_29;

#line 277 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__reinsert_bindings_6_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__OldBuckets_8 , VA);
		{
#line 277 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 4862 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_15_15  = N;
#line 277 "version_array.opt"
}
#line 628 "version_hash_table.m"
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__I_7 >= mercury__version_hash_table__V_15_15);
#line 630 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 630 "version_hash_table.m"
          *mercury__version_hash_table__STATE_VARIABLE_Buckets_14 = mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13;
#line 630 "version_hash_table.m"
        else
#line 631 "version_hash_table.m"
          {
#line 631 "version_hash_table.m"
            MR_Word mercury__version_hash_table__TypeCtorInfo_24_24 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 631 "version_hash_table.m"
            MR_Word mercury__version_hash_table__TypeInfo_25_25;
#line 631 "version_hash_table.m"
            MR_Word mercury__version_hash_table__AL_12;
#line 631 "version_hash_table.m"
            MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_16_16;
#line 631 "version_hash_table.m"
            MR_Integer mercury__version_hash_table__V_17_17;
#line 201 "version_array.opt"
            MR_Box mercury__version_hash_table__conv0_AL_12;

#line 4892 "version_hash_table.c"
            {
#line 4894 "version_hash_table.c"
              mercury__version_hash_table__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4896 "version_hash_table.c"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_25_25, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_24_24));
#line 4898 "version_hash_table.c"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_25_25, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_20));
#line 4900 "version_hash_table.c"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_25_25, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_21));
#line 4902 "version_hash_table.c"
            }
#line 201 "version_array.opt"
            {
#line 201 "version_array.opt"
              mercury__version_hash_table__conv0_AL_12 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_25_25, (MR_Box) mercury__version_hash_table__OldBuckets_8, mercury__version_hash_table__I_7);
            }
#line 201 "version_array.opt"
            mercury__version_hash_table__AL_12 = ((MR_Word) mercury__version_hash_table__conv0_AL_12);
#line 632 "version_hash_table.m"
            {
#line 632 "version_hash_table.m"
              mercury__version_hash_table__reinsert_alist_5_p_0(mercury__version_hash_table__TypeInfo_for_K_20, mercury__version_hash_table__TypeInfo_for_V_21, mercury__version_hash_table__AL_12, mercury__version_hash_table__HashPred_9, mercury__version_hash_table__NumBuckets_10, mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13, &mercury__version_hash_table__STATE_VARIABLE_Buckets_16_16);
            }
#line 633 "version_hash_table.m"
            mercury__version_hash_table__V_17_17 = (mercury__version_hash_table__I_7 + (MR_Integer) 1);
#line 633 "version_hash_table.m"
            /* direct tailcall eliminated */
#line 633 "version_hash_table.m"
            {
#line 633 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__I__tmp_copy_7 = mercury__version_hash_table__V_17_17;
#line 633 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13 = mercury__version_hash_table__STATE_VARIABLE_Buckets_16_16;

#line 633 "version_hash_table.m"
              mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13 = mercury__version_hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13;
#line 633 "version_hash_table.m"
              mercury__version_hash_table__I_7 = mercury__version_hash_table__I__tmp_copy_7;
#line 633 "version_hash_table.m"
            }
#line 633 "version_hash_table.m"
            continue;
#line 631 "version_hash_table.m"
          }
#line 630 "version_hash_table.m"
      }
#line 630 "version_hash_table.m"
      break;
#line 630 "version_hash_table.m"
    }
#line 623 "version_hash_table.m"
}

#line 609 "version_hash_table.m"
static MR_Word MR_CALL 
mercury__version_hash_table__expand_4_f_0(
#line 609 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_21,
#line 609 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_22,
#line 609 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumOccupants_6,
#line 609 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__MaxOccupants0_7,
#line 609 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred0_8,
#line 609 "version_hash_table.m"
  MR_Box mercury__version_hash_table__Buckets0_9)
#line 609 "version_hash_table.m"
{
#line 614 "version_hash_table.m"
  {
#line 614 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 614 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_10;
#line 614 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_23_23 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 614 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_24_24;
#line 614 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumBuckets0_11;
#line 614 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumBuckets_12;
#line 614 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__MaxOccupants_13;
#line 614 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_14;
#line 614 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets1_15;
#line 614 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_16;
#line 614 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_19_19;
#line 277 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_24_25;
#line 324 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_26;
#line 619 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv0_Buckets1_15;

#line 4994 "version_hash_table.c"
    {
#line 4996 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4998 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_24, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_23_23));
#line 5000 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_24, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_21));
#line 5002 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_24, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_22));
#line 5004 "version_hash_table.c"
    }
#line 277 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__expand_4_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets0_9 , VA);
		{
#line 277 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 5019 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__NumBuckets0_11  = N;
#line 277 "version_array.opt"
}
#line 616 "version_hash_table.m"
    mercury__version_hash_table__NumBuckets_12 = (mercury__version_hash_table__NumBuckets0_11 + mercury__version_hash_table__NumBuckets0_11);
#line 617 "version_hash_table.m"
    mercury__version_hash_table__MaxOccupants_13 = (mercury__version_hash_table__MaxOccupants0_7 + mercury__version_hash_table__MaxOccupants0_7);
#line 327 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__expand_4_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HashPred0_8 ;
		{
#line 327 "version_hash_table.m"

    HashPred = HashPred0;

#line 5043 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_14  = HashPred;
#line 327 "version_hash_table.m"
}
#line 619 "version_hash_table.m"
    mercury__version_hash_table__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 619 "version_hash_table.m"
    {
#line 619 "version_hash_table.m"
      mercury__version_hash_table__conv0_Buckets1_15 = mercury__version_array__init_2_f_0(mercury__version_hash_table__TypeInfo_24_24, mercury__version_hash_table__NumBuckets_12, ((MR_Box) (mercury__version_hash_table__V_19_19)));
    }
#line 619 "version_hash_table.m"
    mercury__version_hash_table__Buckets1_15 = (MR_Box) mercury__version_hash_table__conv0_Buckets1_15;
#line 620 "version_hash_table.m"
    {
#line 620 "version_hash_table.m"
      mercury__version_hash_table__reinsert_bindings_6_p_0(mercury__version_hash_table__TypeInfo_for_K_21, mercury__version_hash_table__TypeInfo_for_V_22, (MR_Integer) 0, mercury__version_hash_table__Buckets0_9, mercury__version_hash_table__HashPred_14, mercury__version_hash_table__NumBuckets_12, mercury__version_hash_table__Buckets1_15, &mercury__version_hash_table__Buckets_16);
    }
#line 621 "version_hash_table.m"
    {
#line 621 "version_hash_table.m"
      mercury__version_hash_table__HT_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 621 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants_6));
#line 621 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_13));
#line 621 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_14));
#line 621 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_16));
#line 621 "version_hash_table.m"
    }
#line 614 "version_hash_table.m"
    return mercury__version_hash_table__HT_10;
#line 614 "version_hash_table.m"
  }
#line 609 "version_hash_table.m"
}

#line 589 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__from_assoc_list_2_3_p_0(
#line 589 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_16,
#line 589 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_17,
#line 589 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__1_1,
#line 589 "version_hash_table.m"
  MR_Word mercury__version_hash_table__STATE_VARIABLE_HT_0_2,
#line 589 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__STATE_VARIABLE_HT_3)
#line 589 "version_hash_table.m"
{
#line 592 "version_hash_table.m"
  while (MR_TRUE)
#line 592 "version_hash_table.m"
    {
#line 592 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 592 "version_hash_table.m"
      {
#line 592 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 592 "version_hash_table.m"
        if ((mercury__version_hash_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 592 "version_hash_table.m"
          *mercury__version_hash_table__STATE_VARIABLE_HT_3 = mercury__version_hash_table__STATE_VARIABLE_HT_0_2;
#line 592 "version_hash_table.m"
        else
#line 593 "version_hash_table.m"
          {
#line 593 "version_hash_table.m"
            MR_Box mercury__version_hash_table__K_7;
#line 593 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_8;
#line 593 "version_hash_table.m"
            MR_Word mercury__version_hash_table__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 1)));
#line 593 "version_hash_table.m"
            MR_Word mercury__version_hash_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 0)));
#line 593 "version_hash_table.m"
            MR_Word mercury__version_hash_table__STATE_VARIABLE_HT_14_14;

#line 593 "version_hash_table.m"
            mercury__version_hash_table__K_7 = (MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_13_13, (MR_Integer) 0));
#line 593 "version_hash_table.m"
            mercury__version_hash_table__V_8 = (MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_13_13, (MR_Integer) 1));
#line 400 "version_hash_table.m"
            {
#line 400 "version_hash_table.m"
              mercury__version_hash_table__STATE_VARIABLE_HT_14_14 = mercury__version_hash_table__set_3_f_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__STATE_VARIABLE_HT_0_2, mercury__version_hash_table__K_7, mercury__version_hash_table__V_8);
            }
#line 595 "version_hash_table.m"
            /* direct tailcall eliminated */
#line 595 "version_hash_table.m"
            {
#line 595 "version_hash_table.m"
              MR_Word mercury__version_hash_table__HeadVar__1__tmp_copy_1 = mercury__version_hash_table__T_9;
#line 595 "version_hash_table.m"
              MR_Word mercury__version_hash_table__STATE_VARIABLE_HT_0__tmp_copy_2 = mercury__version_hash_table__STATE_VARIABLE_HT_14_14;

#line 595 "version_hash_table.m"
              mercury__version_hash_table__STATE_VARIABLE_HT_0_2 = mercury__version_hash_table__STATE_VARIABLE_HT_0__tmp_copy_2;
#line 595 "version_hash_table.m"
              mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__HeadVar__1__tmp_copy_1;
#line 595 "version_hash_table.m"
            }
#line 595 "version_hash_table.m"
            continue;
#line 593 "version_hash_table.m"
          }
#line 592 "version_hash_table.m"
      }
#line 592 "version_hash_table.m"
      break;
#line 592 "version_hash_table.m"
    }
#line 589 "version_hash_table.m"
}

#line 567 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__to_assoc_list_2_3_p_0(
#line 567 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_15,
#line 567 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_16,
#line 567 "version_hash_table.m"
  MR_Word mercury__version_hash_table__X_4,
#line 567 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL0_5,
#line 567 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__AL_6)
#line 567 "version_hash_table.m"
{
#line 574 "version_hash_table.m"
  while (MR_TRUE)
#line 574 "version_hash_table.m"
    {
#line 574 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 574 "version_hash_table.m"
      {
#line 574 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 574 "version_hash_table.m"
#line 574 "version_hash_table.m"
        switch (MR_tag((MR_Word) mercury__version_hash_table__X_4)) {
#line 574 "version_hash_table.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 574 "version_hash_table.m"
          case (MR_Integer) 0:
#line 573 "version_hash_table.m"
            *mercury__version_hash_table__AL_6 = mercury__version_hash_table__AL0_5;
#line 574 "version_hash_table.m"
            break;
#line 574 "version_hash_table.m"
          case (MR_Integer) 1:
#line 575 "version_hash_table.m"
            {
#line 575 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_7 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__X_4, (MR_Integer) 0));
#line 575 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__X_4, (MR_Integer) 1));
#line 575 "version_hash_table.m"
              MR_Word mercury__version_hash_table__V_12_12;

#line 576 "version_hash_table.m"
              {
#line 576 "version_hash_table.m"
                mercury__version_hash_table__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 576 "version_hash_table.m"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_12_12, 0) = mercury__version_hash_table__K_7;
#line 576 "version_hash_table.m"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_12_12, 1) = mercury__version_hash_table__V_8;
#line 576 "version_hash_table.m"
              }
#line 576 "version_hash_table.m"
              {
#line 576 "version_hash_table.m"
                MR_Word base;
#line 576 "version_hash_table.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "version_hash_table.m"
                *mercury__version_hash_table__AL_6 = base;
#line 576 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__version_hash_table__V_12_12));
#line 576 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__version_hash_table__AL0_5));
#line 576 "version_hash_table.m"
              }
#line 575 "version_hash_table.m"
            }
#line 574 "version_hash_table.m"
            break;
#line 574 "version_hash_table.m"
          case (MR_Integer) 2:
#line 578 "version_hash_table.m"
            {
#line 578 "version_hash_table.m"
              MR_Word mercury__version_hash_table__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__X_4, (MR_Integer) 2)));
#line 578 "version_hash_table.m"
              MR_Word mercury__version_hash_table__AL1_10;
#line 578 "version_hash_table.m"
              MR_Word mercury__version_hash_table__V_11_11;
#line 578 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_13 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__X_4, (MR_Integer) 0));
#line 578 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_14 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__X_4, (MR_Integer) 1));

#line 579 "version_hash_table.m"
              {
#line 579 "version_hash_table.m"
                mercury__version_hash_table__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 579 "version_hash_table.m"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_11_11, 0) = mercury__version_hash_table__K_13;
#line 579 "version_hash_table.m"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_11_11, 1) = mercury__version_hash_table__V_14;
#line 579 "version_hash_table.m"
              }
#line 579 "version_hash_table.m"
              {
#line 579 "version_hash_table.m"
                mercury__version_hash_table__AL1_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 579 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL1_10, 0) = ((MR_Box) (mercury__version_hash_table__V_11_11));
#line 579 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL1_10, 1) = ((MR_Box) (mercury__version_hash_table__AL0_5));
#line 579 "version_hash_table.m"
              }
#line 580 "version_hash_table.m"
              /* direct tailcall eliminated */
#line 580 "version_hash_table.m"
              {
#line 580 "version_hash_table.m"
                MR_Word mercury__version_hash_table__X__tmp_copy_4 = mercury__version_hash_table__T_9;
#line 580 "version_hash_table.m"
                MR_Word mercury__version_hash_table__AL0__tmp_copy_5 = mercury__version_hash_table__AL1_10;

#line 580 "version_hash_table.m"
                mercury__version_hash_table__AL0_5 = mercury__version_hash_table__AL0__tmp_copy_5;
#line 580 "version_hash_table.m"
                mercury__version_hash_table__X_4 = mercury__version_hash_table__X__tmp_copy_4;
#line 580 "version_hash_table.m"
              }
#line 580 "version_hash_table.m"
              continue;
#line 578 "version_hash_table.m"
            }
#line 574 "version_hash_table.m"
            break;
#line 574 "version_hash_table.m"
        }
#line 574 "version_hash_table.m"
      }
#line 574 "version_hash_table.m"
      break;
#line 574 "version_hash_table.m"
    }
#line 567 "version_hash_table.m"
}

#line 437 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__alist_search_3_p_0(
#line 437 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_10,
#line 437 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_11,
#line 437 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL_4,
#line 437 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 437 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__V_6)
#line 437 "version_hash_table.m"
{
#line 444 "version_hash_table.m"
  while (MR_TRUE)
#line 444 "version_hash_table.m"
    {
#line 444 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 444 "version_hash_table.m"
      {
#line 444 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 444 "version_hash_table.m"
        if (((MR_tag((MR_Word) mercury__version_hash_table__AL_4)) == (MR_mktag((MR_Integer) 2))))
#line 447 "version_hash_table.m"
          {
#line 447 "version_hash_table.m"
            MR_Box mercury__version_hash_table__HK_7 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_4, (MR_Integer) 0));
#line 447 "version_hash_table.m"
            MR_Box mercury__version_hash_table__HV_8 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_4, (MR_Integer) 1));
#line 447 "version_hash_table.m"
            MR_Word mercury__version_hash_table__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_4, (MR_Integer) 2)));

#line 448 "version_hash_table.m"
            {
#line 448 "version_hash_table.m"
              mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_10, mercury__version_hash_table__HK_7, mercury__version_hash_table__K_5);
            }
#line 450 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 449 "version_hash_table.m"
              {
#line 449 "version_hash_table.m"
                *mercury__version_hash_table__V_6 = mercury__version_hash_table__HV_8;
#line 449 "version_hash_table.m"
                mercury__version_hash_table__succeeded = MR_TRUE;
#line 449 "version_hash_table.m"
              }
#line 450 "version_hash_table.m"
            else
#line 451 "version_hash_table.m"
              {
#line 451 "version_hash_table.m"
                /* direct tailcall eliminated */
#line 451 "version_hash_table.m"
                {
#line 451 "version_hash_table.m"
                  MR_Word mercury__version_hash_table__AL__tmp_copy_4 = mercury__version_hash_table__T_9;

#line 451 "version_hash_table.m"
                  mercury__version_hash_table__AL_4 = mercury__version_hash_table__AL__tmp_copy_4;
#line 451 "version_hash_table.m"
                }
#line 451 "version_hash_table.m"
                continue;
#line 451 "version_hash_table.m"
              }
#line 447 "version_hash_table.m"
          }
#line 444 "version_hash_table.m"
        else
#line 444 "version_hash_table.m"
        if (((MR_tag((MR_Word) mercury__version_hash_table__AL_4)) == (MR_mktag((MR_Integer) 1))))
#line 445 "version_hash_table.m"
          {
#line 445 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_12_12 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_4, (MR_Integer) 0));

#line 445 "version_hash_table.m"
            *mercury__version_hash_table__V_6 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_4, (MR_Integer) 1));
#line 445 "version_hash_table.m"
            {
#line 445 "version_hash_table.m"
              return mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_10, mercury__version_hash_table__K_5, mercury__version_hash_table__V_12_12);
            }
#line 445 "version_hash_table.m"
          }
#line 444 "version_hash_table.m"
        else
#line 444 "version_hash_table.m"
          mercury__version_hash_table__succeeded = MR_FALSE;
#line 444 "version_hash_table.m"
        return mercury__version_hash_table__succeeded;
#line 444 "version_hash_table.m"
      }
#line 444 "version_hash_table.m"
      break;
#line 444 "version_hash_table.m"
    }
#line 437 "version_hash_table.m"
}

#line 321 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__unsafe_hash_pred_cast_2_p_0(
#line 321 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_3,
#line 321 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__1_1,
#line 321 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__2_2)
#line 321 "version_hash_table.m"
{
#line 324 "version_hash_table.m"
  {
#line 324 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 324 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_4;

#line 327 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__unsafe_hash_pred_cast_2_p_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HeadVar__1_1 ;
		{
#line 327 "version_hash_table.m"

    HashPred = HashPred0;

#line 5447 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__HeadVar__2_2  = HashPred;
#line 327 "version_hash_table.m"
}
#line 324 "version_hash_table.m"
  }
#line 321 "version_hash_table.m"
}

#line 312 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__find_slot_2_4_p_0(
#line 312 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_12,
#line 312 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_5,
#line 312 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_6,
#line 312 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumBuckets_7,
#line 312 "version_hash_table.m"
  MR_Integer * mercury__version_hash_table__H_8)
#line 312 "version_hash_table.m"
{
#line 316 "version_hash_table.m"
  {
#line 316 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 316 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_9;
#line 316 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_10_10;
#line 317 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_5, (MR_Integer) 1)));
#line 317 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_9;

#line 317 "version_hash_table.m"
    {
#line 317 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_5), mercury__version_hash_table__K_6, &mercury__version_hash_table__conv1_Hash_9);
    }
#line 317 "version_hash_table.m"
    mercury__version_hash_table__Hash_9 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_9);
#line 319 "version_hash_table.m"
    mercury__version_hash_table__V_10_10 = (mercury__version_hash_table__NumBuckets_7 - (MR_Integer) 1);
#line 319 "version_hash_table.m"
    *mercury__version_hash_table__H_8 = (mercury__version_hash_table__Hash_9 & mercury__version_hash_table__V_10_10);
#line 316 "version_hash_table.m"
  }
#line 312 "version_hash_table.m"
}

#line 302 "version_hash_table.m"
MR_Integer MR_CALL 
mercury__version_hash_table__find_slot_2_f_0(
#line 302 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_13,
#line 302 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_14,
#line 302 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_4,
#line 302 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5)
#line 302 "version_hash_table.m"
{
#line 305 "version_hash_table.m"
  {
#line 305 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 305 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__H_6;
#line 305 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 2)));
#line 305 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_8;
#line 305 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_9_9;
#line 305 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_27;
#line 305 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_28_28;
#line 307 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 0)));
#line 307 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 1)));
#line 307 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 3)));
#line 324 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_30;
#line 292 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_17_17;
#line 292 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_18_18;
#line 292 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_19_19;
#line 292 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_20_20;
#line 277 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_12_31;
#line 317 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 317 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_27;

#line 327 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__find_slot_2_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HashPred0_7 ;
		{
#line 327 "version_hash_table.m"

    HashPred = HashPred0;

#line 5568 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_8  = HashPred;
#line 327 "version_hash_table.m"
}
#line 292 "version_hash_table.m"
    mercury__version_hash_table__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 0)));
#line 292 "version_hash_table.m"
    mercury__version_hash_table__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 1)));
#line 292 "version_hash_table.m"
    mercury__version_hash_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 2)));
#line 292 "version_hash_table.m"
    mercury__version_hash_table__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 3)));
#line 277 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__find_slot_2_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_17_17 , VA);
		{
#line 277 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 5596 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_9_9  = N;
#line 277 "version_array.opt"
}
#line 317 "version_hash_table.m"
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_8, (MR_Integer) 1)));
#line 317 "version_hash_table.m"
    {
#line 317 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_8), mercury__version_hash_table__K_5, &mercury__version_hash_table__conv1_Hash_27);
    }
#line 317 "version_hash_table.m"
    mercury__version_hash_table__Hash_27 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_27);
#line 319 "version_hash_table.m"
    mercury__version_hash_table__V_28_28 = (mercury__version_hash_table__V_9_9 - (MR_Integer) 1);
#line 319 "version_hash_table.m"
    mercury__version_hash_table__H_6 = (mercury__version_hash_table__Hash_27 & mercury__version_hash_table__V_28_28);
#line 305 "version_hash_table.m"
    return mercury__version_hash_table__H_6;
#line 305 "version_hash_table.m"
  }
#line 302 "version_hash_table.m"
}

#line 255 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__init_2_4_f_0(
#line 255 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_29,
#line 255 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_30,
#line 255 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_6,
#line 255 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__N_7,
#line 255 "version_hash_table.m"
  MR_Float mercury__version_hash_table__MaxOccupancy_8,
#line 255 "version_hash_table.m"
  MR_Word mercury__version_hash_table__NeedSafety_9)
#line 255 "version_hash_table.m"
{
#line 261 "version_hash_table.m"
  {
#line 261 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__N_7 <= (MR_Integer) 0);
#line 261 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_10;

#line 261 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 260 "version_hash_table.m"
      {
#line 260 "version_hash_table.m"
        MR_Word mercury__version_hash_table__TypeCtorInfo_31_31 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 260 "version_hash_table.m"
        MR_Word mercury__version_hash_table__V_15_15 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.new_hash_table: N =< 0"));

#line 260 "version_hash_table.m"
        {
#line 260 "version_hash_table.m"
          mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_31_31, ((MR_Box) (mercury__version_hash_table__V_15_15)));
        }
#line 260 "version_hash_table.m"
      }
#line 261 "version_hash_table.m"
    else
#line 264 "version_hash_table.m"
      {
#line 261 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_17_17;

#line 64 "int.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__init_2_4_f_0

	MR_Integer Bits;

		{
#line 64 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 5681 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_17_17  = Bits;
#line 64 "int.opt"
}
#line 261 "version_hash_table.m"
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__N_7 >= mercury__version_hash_table__V_17_17);
#line 264 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 262 "version_hash_table.m"
          {
#line 262 "version_hash_table.m"
            MR_Word mercury__version_hash_table__TypeCtorInfo_32_32 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 262 "version_hash_table.m"
            MR_Word mercury__version_hash_table__V_18_18 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.new: N >= int.bits_per_int"));

#line 262 "version_hash_table.m"
            {
#line 262 "version_hash_table.m"
              mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_32_32, ((MR_Box) (mercury__version_hash_table__V_18_18)));
            }
#line 262 "version_hash_table.m"
          }
#line 264 "version_hash_table.m"
        else
#line 267 "version_hash_table.m"
          {
#line 264 "version_hash_table.m"
            mercury__version_hash_table__succeeded = (mercury__version_hash_table__MaxOccupancy_8 <= ((MR_Float) 0.0000000000000000));
#line 267 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 265 "version_hash_table.m"
              {
#line 265 "version_hash_table.m"
                MR_Word mercury__version_hash_table__TypeCtorInfo_33_33 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 265 "version_hash_table.m"
                MR_Word mercury__version_hash_table__V_21_21 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.new: MaxOccupancy =< 0.0"));

#line 265 "version_hash_table.m"
                {
#line 265 "version_hash_table.m"
                  mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_33_33, ((MR_Box) (mercury__version_hash_table__V_21_21)));
                }
#line 265 "version_hash_table.m"
              }
#line 267 "version_hash_table.m"
            else
#line 268 "version_hash_table.m"
              {
#line 268 "version_hash_table.m"
                MR_Integer mercury__version_hash_table__NumBuckets_11;
#line 268 "version_hash_table.m"
                MR_Integer mercury__version_hash_table__MaxOccupants_12;
#line 268 "version_hash_table.m"
                MR_Box mercury__version_hash_table__Buckets_13;
#line 268 "version_hash_table.m"
                MR_Float mercury__version_hash_table__V_24_24;
#line 268 "version_hash_table.m"
                MR_Float mercury__version_hash_table__V_25_25;

#line 268 "version_hash_table.m"
                {
#line 268 "version_hash_table.m"
                  mercury__version_hash_table__NumBuckets_11 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, mercury__version_hash_table__N_7);
                }
#line 46 "float.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__init_2_4_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal =  mercury__version_hash_table__NumBuckets_11 ;
		{
#line 46 "float.opt"

    FloatVal = IntVal;

#line 5761 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_25_25  = FloatVal;
#line 46 "float.opt"
}
#line 269 "version_hash_table.m"
                mercury__version_hash_table__V_24_24 = (mercury__version_hash_table__V_25_25 * mercury__version_hash_table__MaxOccupancy_8);
#line 38 "float.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__init_2_4_f_0

	MR_Float X;
	MR_Integer Ceil;

	X =  mercury__version_hash_table__V_24_24 ;
		{
#line 38 "float.opt"

    Ceil = (MR_Integer) ceil(X);

#line 5783 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__MaxOccupants_12  = Ceil;
#line 38 "float.opt"
}
#line 273 "version_hash_table.m"
#line 273 "version_hash_table.m"
                switch (mercury__version_hash_table__NeedSafety_9) {
#line 273 "version_hash_table.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 273 "version_hash_table.m"
                  case (MR_Integer) 0:
#line 274 "version_hash_table.m"
                    {
#line 274 "version_hash_table.m"
                      MR_Word mercury__version_hash_table__TypeCtorInfo_36_36 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 274 "version_hash_table.m"
                      MR_Word mercury__version_hash_table__TypeInfo_37_37;
#line 274 "version_hash_table.m"
                      MR_Word mercury__version_hash_table__V_26_26;
#line 275 "version_hash_table.m"
                      MR_Box mercury__version_hash_table__conv0_Buckets_13;

#line 5808 "version_hash_table.c"
                      {
#line 5810 "version_hash_table.c"
                        mercury__version_hash_table__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5812 "version_hash_table.c"
                        MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_37_37, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_36_36));
#line 5814 "version_hash_table.c"
                        MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_37_37, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_29));
#line 5816 "version_hash_table.c"
                        MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_37_37, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_30));
#line 5818 "version_hash_table.c"
                      }
#line 275 "version_hash_table.m"
                      mercury__version_hash_table__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 275 "version_hash_table.m"
                      {
#line 275 "version_hash_table.m"
                        mercury__version_hash_table__conv0_Buckets_13 = mercury__version_array__unsafe_init_2_f_0(mercury__version_hash_table__TypeInfo_37_37, mercury__version_hash_table__NumBuckets_11, ((MR_Box) (mercury__version_hash_table__V_26_26)));
                      }
#line 275 "version_hash_table.m"
                      mercury__version_hash_table__Buckets_13 = (MR_Box) mercury__version_hash_table__conv0_Buckets_13;
#line 274 "version_hash_table.m"
                    }
#line 273 "version_hash_table.m"
                    break;
#line 273 "version_hash_table.m"
                  case (MR_Integer) 1:
#line 271 "version_hash_table.m"
                    {
#line 271 "version_hash_table.m"
                      MR_Word mercury__version_hash_table__TypeCtorInfo_34_34 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 271 "version_hash_table.m"
                      MR_Word mercury__version_hash_table__TypeInfo_35_35;
#line 271 "version_hash_table.m"
                      MR_Word mercury__version_hash_table__V_27_27;
#line 272 "version_hash_table.m"
                      MR_Box mercury__version_hash_table__conv1_Buckets_13;

#line 5846 "version_hash_table.c"
                      {
#line 5848 "version_hash_table.c"
                        mercury__version_hash_table__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5850 "version_hash_table.c"
                        MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_35_35, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_34_34));
#line 5852 "version_hash_table.c"
                        MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_35_35, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_29));
#line 5854 "version_hash_table.c"
                        MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_35_35, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_30));
#line 5856 "version_hash_table.c"
                      }
#line 272 "version_hash_table.m"
                      mercury__version_hash_table__V_27_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 272 "version_hash_table.m"
                      {
#line 272 "version_hash_table.m"
                        mercury__version_hash_table__conv1_Buckets_13 = mercury__version_array__init_2_f_0(mercury__version_hash_table__TypeInfo_35_35, mercury__version_hash_table__NumBuckets_11, ((MR_Box) (mercury__version_hash_table__V_27_27)));
                      }
#line 272 "version_hash_table.m"
                      mercury__version_hash_table__Buckets_13 = (MR_Box) mercury__version_hash_table__conv1_Buckets_13;
#line 271 "version_hash_table.m"
                    }
#line 273 "version_hash_table.m"
                    break;
#line 273 "version_hash_table.m"
                }
#line 277 "version_hash_table.m"
                {
#line 277 "version_hash_table.m"
                  mercury__version_hash_table__HT_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 277 "version_hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 0) = ((MR_Box) ((MR_Integer) 0));
#line 277 "version_hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_12));
#line 277 "version_hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_6));
#line 277 "version_hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_13));
#line 277 "version_hash_table.m"
                }
#line 268 "version_hash_table.m"
              }
#line 267 "version_hash_table.m"
          }
#line 264 "version_hash_table.m"
      }
#line 261 "version_hash_table.m"
    return mercury__version_hash_table__HT_10;
#line 261 "version_hash_table.m"
  }
#line 255 "version_hash_table.m"
}

#line 202 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__equal_2_p_0(
#line 202 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_10,
#line 202 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_11,
#line 202 "version_hash_table.m"
  MR_Word mercury__version_hash_table__A_3,
#line 202 "version_hash_table.m"
  MR_Word mercury__version_hash_table__B_4)
#line 202 "version_hash_table.m"
{
#line 840 "version_hash_table.m"
  {
#line 840 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 838 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_12_12 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2;
#line 838 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_13_13;

#line 5922 "version_hash_table.c"
    {
#line 5924 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5926 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_13_13, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_12_12));
#line 5928 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_13_13, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_10));
#line 5930 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_13_13, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_11));
#line 5932 "version_hash_table.c"
    }
#line 838 "version_hash_table.m"
    mercury__version_hash_table__succeeded = (((MR_Word) mercury__version_hash_table__A_3) == ((MR_Word) mercury__version_hash_table__B_4));
#line 840 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 839 "version_hash_table.m"
      mercury__version_hash_table__succeeded = MR_TRUE;
#line 840 "version_hash_table.m"
    else
#line 844 "version_hash_table.m"
      {
#line 844 "version_hash_table.m"
        MR_Word mercury__version_hash_table__TypeCtorInfo_22_44;
#line 844 "version_hash_table.m"
        MR_Word mercury__version_hash_table__TypeInfo_23_45;
#line 844 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__NumA_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 0)));
#line 844 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__NumB_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__B_4, (MR_Integer) 0)));
#line 844 "version_hash_table.m"
        MR_Box mercury__version_hash_table__Buckets_34;
#line 844 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_10_50;
#line 844 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_11_51;
#line 297 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 1)));
#line 297 "version_hash_table.m"
        MR_Word mercury__version_hash_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 2)));
#line 297 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V_23_23 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 3)));
#line 297 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__B_4, (MR_Integer) 1)));
#line 297 "version_hash_table.m"
        MR_Word mercury__version_hash_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__B_4, (MR_Integer) 2)));
#line 297 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__B_4, (MR_Integer) 3)));
#line 811 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_37_37;
#line 811 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_38_38;
#line 811 "version_hash_table.m"
        MR_Word mercury__version_hash_table__V_39_39;
#line 277 "version_array.opt"
        MR_Word mercury__version_hash_table__TypeInfo_23_55;

#line 846 "version_hash_table.m"
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__NumA_5 == mercury__version_hash_table__NumB_6);
#line 844 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 844 "version_hash_table.m"
          {
#line 850 "version_hash_table.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 811 "version_hash_table.m"
            mercury__version_hash_table__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 0)));
#line 811 "version_hash_table.m"
            mercury__version_hash_table__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 1)));
#line 811 "version_hash_table.m"
            mercury__version_hash_table__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 2)));
#line 811 "version_hash_table.m"
            mercury__version_hash_table__Buckets_34 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 3)));
#line 5995 "version_hash_table.c"
            mercury__version_hash_table__TypeCtorInfo_22_44 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 227 "version_array.opt"
            mercury__version_hash_table__V_10_50 = (MR_Integer) 0;
#line 5999 "version_hash_table.c"
            {
#line 6001 "version_hash_table.c"
              mercury__version_hash_table__TypeInfo_23_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6003 "version_hash_table.c"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_45, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_44));
#line 6005 "version_hash_table.c"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_45, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_10));
#line 6007 "version_hash_table.c"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_45, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_11));
#line 6009 "version_hash_table.c"
            }
#line 277 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__equal_2_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_34 , VA);
		{
#line 277 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6024 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_51  = N;
#line 277 "version_array.opt"
}
#line 229 "version_array.opt"
            {
#line 229 "version_array.opt"
              return mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_53_44_32_49_48_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_10, mercury__version_hash_table__TypeInfo_for_V_11, mercury__version_hash_table__TypeInfo_for_K_10, mercury__version_hash_table__TypeInfo_for_V_11, mercury__version_hash_table__B_4, mercury__version_hash_table__TypeInfo_23_45, mercury__version_hash_table__Buckets_34, mercury__version_hash_table__V_10_50, mercury__version_hash_table__V_11_51);
            }
#line 844 "version_hash_table.m"
          }
#line 844 "version_hash_table.m"
      }
#line 840 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 840 "version_hash_table.m"
  }
#line 202 "version_hash_table.m"
}

#line 195 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__fold_4_p_5(
#line 195 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_16,
#line 195 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_17,
#line 195 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_18,
#line 195 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 195 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_6,
#line 195 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_9,
#line 195 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_10)
#line 195 "version_hash_table.m"
{
#line 809 "version_hash_table.m"
  {
#line 809 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 809 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 809 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
#line 809 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 809 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_29;
#line 811 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 811 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 811 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
#line 277 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_23_31;

#line 6087 "version_hash_table.c"
    {
#line 6089 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6091 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_22));
#line 6093 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_16));
#line 6095 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_17));
#line 6097 "version_hash_table.c"
    }
#line 277 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_5

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_8 , VA);
		{
#line 277 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6112 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_29  = N;
#line 277 "version_array.opt"
}
#line 229 "version_array.opt"
    {
#line 229 "version_array.opt"
      return mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__TypeInfo_for_T_18, mercury__version_hash_table__P_5, mercury__version_hash_table__TypeInfo_23_23, mercury__version_hash_table__Buckets_8, (MR_Integer) 0, mercury__version_hash_table__V_11_29, mercury__version_hash_table__STATE_VARIABLE_A_0_9, mercury__version_hash_table__STATE_VARIABLE_A_10);
    }
#line 809 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 809 "version_hash_table.m"
  }
#line 195 "version_hash_table.m"
}

#line 194 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__fold_4_p_4(
#line 194 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_16,
#line 194 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_17,
#line 194 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_18,
#line 194 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 194 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_6,
#line 194 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_9,
#line 194 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_10)
#line 194 "version_hash_table.m"
{
#line 809 "version_hash_table.m"
  {
#line 809 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 809 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 809 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
#line 809 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 809 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_29;
#line 811 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 811 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 811 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
#line 277 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_23_31;

#line 6171 "version_hash_table.c"
    {
#line 6173 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6175 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_22));
#line 6177 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_16));
#line 6179 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_17));
#line 6181 "version_hash_table.c"
    }
#line 277 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_4

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_8 , VA);
		{
#line 277 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6196 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_29  = N;
#line 277 "version_array.opt"
}
#line 229 "version_array.opt"
    {
#line 229 "version_array.opt"
      return mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__TypeInfo_for_T_18, mercury__version_hash_table__P_5, mercury__version_hash_table__TypeInfo_23_23, mercury__version_hash_table__Buckets_8, (MR_Integer) 0, mercury__version_hash_table__V_11_29, mercury__version_hash_table__STATE_VARIABLE_A_0_9, mercury__version_hash_table__STATE_VARIABLE_A_10);
    }
#line 809 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 809 "version_hash_table.m"
  }
#line 194 "version_hash_table.m"
}

#line 193 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__fold_4_p_3(
#line 193 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_16,
#line 193 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_17,
#line 193 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_18,
#line 193 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 193 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_6,
#line 193 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_9,
#line 193 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_10)
#line 193 "version_hash_table.m"
{
#line 809 "version_hash_table.m"
  {
#line 809 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 809 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 809 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
#line 809 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 809 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_29;
#line 811 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 811 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 811 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
#line 277 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_23_31;

#line 6255 "version_hash_table.c"
    {
#line 6257 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6259 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_22));
#line 6261 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_16));
#line 6263 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_17));
#line 6265 "version_hash_table.c"
    }
#line 277 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_3

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_8 , VA);
		{
#line 277 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6280 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_29  = N;
#line 277 "version_array.opt"
}
#line 229 "version_array.opt"
    {
#line 229 "version_array.opt"
      return mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__TypeInfo_for_T_18, mercury__version_hash_table__P_5, mercury__version_hash_table__TypeInfo_23_23, mercury__version_hash_table__Buckets_8, (MR_Integer) 0, mercury__version_hash_table__V_11_29, mercury__version_hash_table__STATE_VARIABLE_A_0_9, mercury__version_hash_table__STATE_VARIABLE_A_10);
    }
#line 809 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 809 "version_hash_table.m"
  }
#line 193 "version_hash_table.m"
}

#line 192 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_4_p_2(
#line 192 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_16,
#line 192 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_17,
#line 192 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_18,
#line 192 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 192 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_6,
#line 192 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_9,
#line 192 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_10)
#line 192 "version_hash_table.m"
{
#line 809 "version_hash_table.m"
  {
#line 809 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 809 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 809 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
#line 809 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 809 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_29;
#line 811 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 811 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 811 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
#line 277 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_23_31;

#line 6339 "version_hash_table.c"
    {
#line 6341 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6343 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_22));
#line 6345 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_16));
#line 6347 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_17));
#line 6349 "version_hash_table.c"
    }
#line 277 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_2

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_8 , VA);
		{
#line 277 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6364 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_29  = N;
#line 277 "version_array.opt"
}
#line 229 "version_array.opt"
    {
#line 229 "version_array.opt"
      mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__TypeInfo_for_T_18, mercury__version_hash_table__P_5, mercury__version_hash_table__TypeInfo_23_23, mercury__version_hash_table__Buckets_8, (MR_Integer) 0, mercury__version_hash_table__V_11_29, mercury__version_hash_table__STATE_VARIABLE_A_0_9, mercury__version_hash_table__STATE_VARIABLE_A_10);
#line 229 "version_array.opt"
      return;
    }
#line 809 "version_hash_table.m"
  }
#line 192 "version_hash_table.m"
}

#line 191 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_4_p_1(
#line 191 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_16,
#line 191 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_17,
#line 191 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_18,
#line 191 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 191 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_6,
#line 191 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_9,
#line 191 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_10)
#line 191 "version_hash_table.m"
{
#line 809 "version_hash_table.m"
  {
#line 809 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 809 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 809 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
#line 809 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 809 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_29;
#line 811 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 811 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 811 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
#line 277 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_23_31;

#line 6423 "version_hash_table.c"
    {
#line 6425 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6427 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_22));
#line 6429 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_16));
#line 6431 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_17));
#line 6433 "version_hash_table.c"
    }
#line 277 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_1

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_8 , VA);
		{
#line 277 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6448 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_29  = N;
#line 277 "version_array.opt"
}
#line 229 "version_array.opt"
    {
#line 229 "version_array.opt"
      mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__TypeInfo_for_T_18, mercury__version_hash_table__P_5, mercury__version_hash_table__TypeInfo_23_23, mercury__version_hash_table__Buckets_8, (MR_Integer) 0, mercury__version_hash_table__V_11_29, mercury__version_hash_table__STATE_VARIABLE_A_0_9, mercury__version_hash_table__STATE_VARIABLE_A_10);
#line 229 "version_array.opt"
      return;
    }
#line 809 "version_hash_table.m"
  }
#line 191 "version_hash_table.m"
}

#line 190 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_4_p_0(
#line 190 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_16,
#line 190 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_17,
#line 190 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_18,
#line 190 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 190 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_6,
#line 190 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_9,
#line 190 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_10)
#line 190 "version_hash_table.m"
{
#line 809 "version_hash_table.m"
  {
#line 809 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 809 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 809 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
#line 809 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 809 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_29;
#line 811 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 811 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 811 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
#line 277 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_23_31;

#line 6507 "version_hash_table.c"
    {
#line 6509 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6511 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_22));
#line 6513 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_16));
#line 6515 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_17));
#line 6517 "version_hash_table.c"
    }
#line 277 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_8 , VA);
		{
#line 277 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6532 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_29  = N;
#line 277 "version_array.opt"
}
#line 229 "version_array.opt"
    {
#line 229 "version_array.opt"
      mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__TypeInfo_for_T_18, mercury__version_hash_table__P_5, mercury__version_hash_table__TypeInfo_23_23, mercury__version_hash_table__Buckets_8, (MR_Integer) 0, mercury__version_hash_table__V_11_29, mercury__version_hash_table__STATE_VARIABLE_A_0_9, mercury__version_hash_table__STATE_VARIABLE_A_10);
#line 229 "version_array.opt"
      return;
    }
#line 809 "version_hash_table.m"
  }
#line 190 "version_hash_table.m"
}

#line 185 "version_hash_table.m"
MR_Box MR_CALL 
mercury__version_hash_table__fold_3_f_0(
#line 185 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_14,
#line 185 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_15,
#line 185 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_16,
#line 185 "version_hash_table.m"
  MR_Word mercury__version_hash_table__F_5,
#line 185 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_6,
#line 185 "version_hash_table.m"
  MR_Box mercury__version_hash_table__X0_7)
#line 185 "version_hash_table.m"
{
#line 786 "version_hash_table.m"
  {
#line 786 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 786 "version_hash_table.m"
    MR_Box mercury__version_hash_table__X_8;
#line 786 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_20_20 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 786 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_21_21;
#line 786 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_9 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 786 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_27;
#line 788 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 788 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 788 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
#line 277 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_21_29;

#line 6591 "version_hash_table.c"
    {
#line 6593 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6595 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_21_21, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_20_20));
#line 6597 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_21_21, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_14));
#line 6599 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_21_21, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_15));
#line 6601 "version_hash_table.c"
    }
#line 277 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_9 , VA);
		{
#line 277 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6616 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_27  = N;
#line 277 "version_array.opt"
}
#line 229 "version_array.opt"
    {
#line 229 "version_array.opt"
      mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_14, mercury__version_hash_table__TypeInfo_for_V_15, mercury__version_hash_table__TypeInfo_for_T_16, mercury__version_hash_table__F_5, mercury__version_hash_table__TypeInfo_21_21, mercury__version_hash_table__Buckets_9, (MR_Integer) 0, mercury__version_hash_table__V_11_27, mercury__version_hash_table__X0_7, &mercury__version_hash_table__X_8);
    }
#line 786 "version_hash_table.m"
    return mercury__version_hash_table__X_8;
#line 786 "version_hash_table.m"
  }
#line 185 "version_hash_table.m"
}

#line 180 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__from_assoc_list_2_f_0(
#line 180 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_8,
#line 180 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_9,
#line 180 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_4,
#line 180 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AList_5)
#line 180 "version_hash_table.m"
{
#line 586 "version_hash_table.m"
  {
#line 586 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 586 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_6;
#line 586 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_7_7;

#line 251 "version_hash_table.m"
    {
#line 251 "version_hash_table.m"
      mercury__version_hash_table__V_7_7 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HashPred_4, (MR_Integer) 7, (MR_Float) 0.90000000000000002, (MR_Integer) 1);
    }
#line 587 "version_hash_table.m"
    {
#line 587 "version_hash_table.m"
      mercury__version_hash_table__from_assoc_list_2_3_p_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__AList_5, mercury__version_hash_table__V_7_7, &mercury__version_hash_table__HT_6);
    }
#line 586 "version_hash_table.m"
    return mercury__version_hash_table__HT_6;
#line 586 "version_hash_table.m"
  }
#line 180 "version_hash_table.m"
}

#line 173 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__from_assoc_list_4_f_0(
#line 173 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_12,
#line 173 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_13,
#line 173 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_6,
#line 173 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__N_7,
#line 173 "version_hash_table.m"
  MR_Float mercury__version_hash_table__MaxOccupants_8,
#line 173 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AList_9)
#line 173 "version_hash_table.m"
{
#line 583 "version_hash_table.m"
  {
#line 583 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 583 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_10;
#line 583 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_11_11;

#line 251 "version_hash_table.m"
    {
#line 251 "version_hash_table.m"
      mercury__version_hash_table__V_11_11 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_12, mercury__version_hash_table__TypeInfo_for_V_13, mercury__version_hash_table__HashPred_6, mercury__version_hash_table__N_7, mercury__version_hash_table__MaxOccupants_8, (MR_Integer) 1);
    }
#line 584 "version_hash_table.m"
    {
#line 584 "version_hash_table.m"
      mercury__version_hash_table__from_assoc_list_2_3_p_0(mercury__version_hash_table__TypeInfo_for_K_12, mercury__version_hash_table__TypeInfo_for_V_13, mercury__version_hash_table__AList_9, mercury__version_hash_table__V_11_11, &mercury__version_hash_table__HT_10);
    }
#line 583 "version_hash_table.m"
    return mercury__version_hash_table__HT_10;
#line 583 "version_hash_table.m"
  }
#line 173 "version_hash_table.m"
}

#line 166 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__to_assoc_list_1_f_0(
#line 166 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_11,
#line 166 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_12,
#line 166 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_3)
#line 166 "version_hash_table.m"
{
#line 561 "version_hash_table.m"
  {
#line 561 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 561 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL_4;
#line 561 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_16_16 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 561 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_17_17;
#line 561 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 3)));
#line 561 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 561 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_27;
#line 563 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 0)));
#line 563 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 1)));
#line 563 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 2)));
#line 277 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_17_31;

#line 6753 "version_hash_table.c"
    {
#line 6755 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6757 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_17_17, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_16_16));
#line 6759 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_17_17, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_11));
#line 6761 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_17_17, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_12));
#line 6763 "version_hash_table.c"
    }
#line 277 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__to_assoc_list_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_5 , VA);
		{
#line 277 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6778 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_27  = N;
#line 277 "version_array.opt"
}
#line 229 "version_array.opt"
    {
#line 229 "version_array.opt"
      mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_11, mercury__version_hash_table__TypeInfo_for_V_12, mercury__version_hash_table__TypeInfo_17_17, mercury__version_hash_table__Buckets_5, (MR_Integer) 0, mercury__version_hash_table__V_11_27, mercury__version_hash_table__V_7_7, &mercury__version_hash_table__AL_4);
    }
#line 561 "version_hash_table.m"
    return mercury__version_hash_table__AL_4;
#line 561 "version_hash_table.m"
  }
#line 166 "version_hash_table.m"
}

#line 162 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__search_3_p_0(
#line 162 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_6,
#line 162 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_7,
#line 162 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_4,
#line 162 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 162 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__HeadVar__3_3)
#line 162 "version_hash_table.m"
{
#line 427 "version_hash_table.m"
  {
#line 427 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 427 "version_hash_table.m"
    {
#line 427 "version_hash_table.m"
      return mercury__version_hash_table__succeeded = mercury__version_hash_table__search_2_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HT_4, mercury__version_hash_table__K_5, mercury__version_hash_table__HeadVar__3_3);
    }
#line 427 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 427 "version_hash_table.m"
  }
#line 162 "version_hash_table.m"
}

#line 161 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__search_2_f_0(
#line 161 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_13,
#line 161 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_14,
#line 161 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_4,
#line 161 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 161 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__V_6)
#line 161 "version_hash_table.m"
{
#line 429 "version_hash_table.m"
  {
#line 429 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 429 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_15_15;
#line 429 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_16_16;
#line 429 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__H_7;
#line 429 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_8;
#line 429 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL_9;
#line 429 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 2)));
#line 429 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_21;
#line 429 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_22_22;
#line 429 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_38;
#line 429 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_39_39;
#line 307 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 0)));
#line 307 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 1)));
#line 307 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_25_25 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 3)));
#line 324 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_44;
#line 292 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_28_28;
#line 292 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_29_29;
#line 292 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_30_30;
#line 292 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_31_31;
#line 277 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_12_45;
#line 317 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 317 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_38;
#line 432 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_10_10;
#line 432 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_11;
#line 432 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_12_12;
#line 201 "version_array.opt"
    MR_Box mercury__version_hash_table__conv2_AL_9;

#line 327 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__search_2_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HashPred0_20 ;
		{
#line 327 "version_hash_table.m"

    HashPred = HashPred0;

#line 6912 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_21  = HashPred;
#line 327 "version_hash_table.m"
}
#line 292 "version_hash_table.m"
    mercury__version_hash_table__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 0)));
#line 292 "version_hash_table.m"
    mercury__version_hash_table__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 1)));
#line 292 "version_hash_table.m"
    mercury__version_hash_table__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 2)));
#line 292 "version_hash_table.m"
    mercury__version_hash_table__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 3)));
#line 277 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__search_2_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_28_28 , VA);
		{
#line 277 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6940 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_22_22  = N;
#line 277 "version_array.opt"
}
#line 317 "version_hash_table.m"
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_21, (MR_Integer) 1)));
#line 317 "version_hash_table.m"
    {
#line 317 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_21), mercury__version_hash_table__K_5, &mercury__version_hash_table__conv1_Hash_38);
    }
#line 317 "version_hash_table.m"
    mercury__version_hash_table__Hash_38 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_38);
#line 319 "version_hash_table.m"
    mercury__version_hash_table__V_39_39 = (mercury__version_hash_table__V_22_22 - (MR_Integer) 1);
#line 319 "version_hash_table.m"
    mercury__version_hash_table__H_7 = (mercury__version_hash_table__Hash_38 & mercury__version_hash_table__V_39_39);
#line 432 "version_hash_table.m"
    mercury__version_hash_table__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 0)));
#line 432 "version_hash_table.m"
    mercury__version_hash_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 1)));
#line 432 "version_hash_table.m"
    mercury__version_hash_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 2)));
#line 432 "version_hash_table.m"
    mercury__version_hash_table__Buckets_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 3)));
#line 6968 "version_hash_table.c"
    mercury__version_hash_table__TypeCtorInfo_15_15 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 6970 "version_hash_table.c"
    {
#line 6972 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6974 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_16_16, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_15_15));
#line 6976 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_16_16, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_13));
#line 6978 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_16_16, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_14));
#line 6980 "version_hash_table.c"
    }
#line 201 "version_array.opt"
    {
#line 201 "version_array.opt"
      mercury__version_hash_table__conv2_AL_9 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_16_16, (MR_Box) mercury__version_hash_table__Buckets_8, mercury__version_hash_table__H_7);
    }
#line 201 "version_array.opt"
    mercury__version_hash_table__AL_9 = ((MR_Word) mercury__version_hash_table__conv2_AL_9);
#line 435 "version_hash_table.m"
    {
#line 435 "version_hash_table.m"
      return mercury__version_hash_table__succeeded = mercury__version_hash_table__alist_search_3_p_0(mercury__version_hash_table__TypeInfo_for_K_13, mercury__version_hash_table__TypeInfo_for_V_14, mercury__version_hash_table__AL_9, mercury__version_hash_table__K_5, mercury__version_hash_table__V_6);
    }
#line 429 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 429 "version_hash_table.m"
  }
#line 161 "version_hash_table.m"
}

#line 157 "version_hash_table.m"
MR_Box MR_CALL 
mercury__version_hash_table__elem_2_f_0(
#line 157 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_6,
#line 157 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_7,
#line 157 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_4,
#line 157 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_5)
#line 157 "version_hash_table.m"
{
#line 510 "version_hash_table.m"
  {
#line 510 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 510 "version_hash_table.m"
    MR_Box mercury__version_hash_table__HeadVar__3_3;
#line 510 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_10;

#line 511 "version_hash_table.m"
    {
#line 511 "version_hash_table.m"
      mercury__version_hash_table__succeeded = mercury__version_hash_table__search_2_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HT_5, mercury__version_hash_table__K_4, &mercury__version_hash_table__V_10);
    }
#line 510 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 512 "version_hash_table.m"
      mercury__version_hash_table__HeadVar__3_3 = mercury__version_hash_table__V_10;
#line 510 "version_hash_table.m"
    else
#line 513 "version_hash_table.m"
      {
#line 513 "version_hash_table.m"
        {
#line 513 "version_hash_table.m"
          mercury__version_hash_table__HeadVar__3_3 = mercury__require__func_error_1_f_0(mercury__version_hash_table__TypeInfo_for_V_7, (MR_String) "version_hash_table.lookup: key not found");
        }
#line 513 "version_hash_table.m"
      }
#line 510 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__3_3;
#line 510 "version_hash_table.m"
  }
#line 157 "version_hash_table.m"
}

#line 152 "version_hash_table.m"
MR_Box MR_CALL 
mercury__version_hash_table__lookup_2_f_0(
#line 152 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_8,
#line 152 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_9,
#line 152 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_4,
#line 152 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5)
#line 152 "version_hash_table.m"
{
#line 510 "version_hash_table.m"
  {
#line 510 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 510 "version_hash_table.m"
    MR_Box mercury__version_hash_table__HeadVar__3_3;
#line 510 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_6;

#line 511 "version_hash_table.m"
    {
#line 511 "version_hash_table.m"
      mercury__version_hash_table__succeeded = mercury__version_hash_table__search_2_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HT_4, mercury__version_hash_table__K_5, &mercury__version_hash_table__V_6);
    }
#line 510 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 512 "version_hash_table.m"
      mercury__version_hash_table__HeadVar__3_3 = mercury__version_hash_table__V_6;
#line 510 "version_hash_table.m"
    else
#line 513 "version_hash_table.m"
      {
#line 513 "version_hash_table.m"
        {
#line 513 "version_hash_table.m"
          mercury__version_hash_table__HeadVar__3_3 = mercury__require__func_error_1_f_0(mercury__version_hash_table__TypeInfo_for_V_9, (MR_String) "version_hash_table.lookup: key not found");
        }
#line 513 "version_hash_table.m"
      }
#line 510 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__3_3;
#line 510 "version_hash_table.m"
  }
#line 152 "version_hash_table.m"
}

#line 146 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__delete_3_p_0(
#line 146 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_6,
#line 146 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_7,
#line 146 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_4,
#line 146 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_5,
#line 146 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__3_3)
#line 146 "version_hash_table.m"
{
#line 535 "version_hash_table.m"
  {
#line 535 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 535 "version_hash_table.m"
    {
#line 535 "version_hash_table.m"
      *mercury__version_hash_table__HeadVar__3_3 = mercury__version_hash_table__delete_2_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HT_5, mercury__version_hash_table__K_4);
    }
#line 535 "version_hash_table.m"
  }
#line 146 "version_hash_table.m"
}

#line 145 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__delete_2_f_0(
#line 145 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_17,
#line 145 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_18,
#line 145 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT0_4,
#line 145 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5)
#line 145 "version_hash_table.m"
{
#line 520 "version_hash_table.m"
  {
#line 520 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 520 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_6;
#line 520 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_19_19;
#line 520 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_20_20;
#line 520 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__H_7;
#line 520 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumOccupants0_8;
#line 520 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__MaxOccupants_9;
#line 520 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_10;
#line 520 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets0_11;
#line 520 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL0_12;
#line 520 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 2)));
#line 520 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_25;
#line 520 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_26_26;
#line 520 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_42;
#line 520 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_43_43;
#line 307 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 0)));
#line 307 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 1)));
#line 307 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_29_29 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 3)));
#line 324 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_52;
#line 292 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_32_32;
#line 292 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_33_33;
#line 292 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_34_34;
#line 292 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_35_35;
#line 277 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_12_53;
#line 317 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 317 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_42;
#line 201 "version_array.opt"
    MR_Box mercury__version_hash_table__conv2_AL0_12;
#line 531 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL_13;

#line 327 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__delete_2_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HashPred0_24 ;
		{
#line 327 "version_hash_table.m"

    HashPred = HashPred0;

#line 7214 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_25  = HashPred;
#line 327 "version_hash_table.m"
}
#line 292 "version_hash_table.m"
    mercury__version_hash_table__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 0)));
#line 292 "version_hash_table.m"
    mercury__version_hash_table__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 1)));
#line 292 "version_hash_table.m"
    mercury__version_hash_table__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 2)));
#line 292 "version_hash_table.m"
    mercury__version_hash_table__V_32_32 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 3)));
#line 277 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__delete_2_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_32_32 , VA);
		{
#line 277 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 7242 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_26_26  = N;
#line 277 "version_array.opt"
}
#line 317 "version_hash_table.m"
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_25, (MR_Integer) 1)));
#line 317 "version_hash_table.m"
    {
#line 317 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_25), mercury__version_hash_table__K_5, &mercury__version_hash_table__conv1_Hash_42);
    }
#line 317 "version_hash_table.m"
    mercury__version_hash_table__Hash_42 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_42);
#line 319 "version_hash_table.m"
    mercury__version_hash_table__V_43_43 = (mercury__version_hash_table__V_26_26 - (MR_Integer) 1);
#line 319 "version_hash_table.m"
    mercury__version_hash_table__H_7 = (mercury__version_hash_table__Hash_42 & mercury__version_hash_table__V_43_43);
#line 524 "version_hash_table.m"
    mercury__version_hash_table__NumOccupants0_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 0)));
#line 524 "version_hash_table.m"
    mercury__version_hash_table__MaxOccupants_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 1)));
#line 524 "version_hash_table.m"
    mercury__version_hash_table__HashPred_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 2)));
#line 524 "version_hash_table.m"
    mercury__version_hash_table__Buckets0_11 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 3)));
#line 7270 "version_hash_table.c"
    mercury__version_hash_table__TypeCtorInfo_19_19 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 7272 "version_hash_table.c"
    {
#line 7274 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7276 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_20_20, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_19_19));
#line 7278 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_20_20, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_17));
#line 7280 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_20_20, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_18));
#line 7282 "version_hash_table.c"
    }
#line 201 "version_array.opt"
    {
#line 201 "version_array.opt"
      mercury__version_hash_table__conv2_AL0_12 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_20_20, (MR_Box) mercury__version_hash_table__Buckets0_11, mercury__version_hash_table__H_7);
    }
#line 201 "version_array.opt"
    mercury__version_hash_table__AL0_12 = ((MR_Word) mercury__version_hash_table__conv2_AL0_12);
#line 527 "version_hash_table.m"
    {
#line 527 "version_hash_table.m"
      mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(mercury__version_hash_table__TypeInfo_for_K_17, mercury__version_hash_table__AL0_12, mercury__version_hash_table__K_5, &mercury__version_hash_table__AL_13);
    }
#line 531 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 528 "version_hash_table.m"
      {
#line 528 "version_hash_table.m"
        MR_Box mercury__version_hash_table__Buckets_14;
#line 528 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__NumOccupants_15;
#line 205 "version_array.opt"
        MR_Box mercury__version_hash_table__conv3_Buckets_14;

#line 205 "version_array.opt"
        {
#line 205 "version_array.opt"
          mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_20_20, mercury__version_hash_table__H_7, ((MR_Box) (mercury__version_hash_table__AL_13)), (MR_Box) mercury__version_hash_table__Buckets0_11, &mercury__version_hash_table__conv3_Buckets_14);
        }
#line 205 "version_array.opt"
        mercury__version_hash_table__Buckets_14 = (MR_Box) mercury__version_hash_table__conv3_Buckets_14;
#line 529 "version_hash_table.m"
        mercury__version_hash_table__NumOccupants_15 = (mercury__version_hash_table__NumOccupants0_8 - (MR_Integer) 1);
#line 530 "version_hash_table.m"
        {
#line 530 "version_hash_table.m"
          mercury__version_hash_table__HT_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 530 "version_hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants_15));
#line 530 "version_hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_9));
#line 530 "version_hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_10));
#line 530 "version_hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_14));
#line 530 "version_hash_table.m"
        }
#line 528 "version_hash_table.m"
      }
#line 531 "version_hash_table.m"
    else
#line 532 "version_hash_table.m"
      mercury__version_hash_table__HT_6 = mercury__version_hash_table__HT0_4;
#line 520 "version_hash_table.m"
    return mercury__version_hash_table__HT_6;
#line 520 "version_hash_table.m"
  }
#line 145 "version_hash_table.m"
}

#line 137 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__det_update_4_p_0(
#line 137 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_8,
#line 137 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_9,
#line 137 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 137 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_6,
#line 137 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_7,
#line 137 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__4_4)
#line 137 "version_hash_table.m"
{
#line 506 "version_hash_table.m"
  {
#line 506 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 506 "version_hash_table.m"
    {
#line 506 "version_hash_table.m"
      *mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__det_update_3_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HT_7, mercury__version_hash_table__K_5, mercury__version_hash_table__V_6);
    }
#line 506 "version_hash_table.m"
  }
#line 137 "version_hash_table.m"
}

#line 136 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__det_update_3_f_0(
#line 136 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_24,
#line 136 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_25,
#line 136 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT0_5,
#line 136 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_6,
#line 136 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_7)
#line 136 "version_hash_table.m"
{
#line 490 "version_hash_table.m"
  {
#line 490 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 490 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_8;
#line 490 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_26_26;
#line 490 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_27_27;
#line 490 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__H_9;
#line 490 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets0_10;
#line 490 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL0_11;
#line 490 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL_13;
#line 490 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_14;
#line 490 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 490 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_33;
#line 490 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_34_34;
#line 490 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_50;
#line 490 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_51_51;
#line 307 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 307 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 307 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_37_37 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 324 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_60;
#line 292 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_40_40;
#line 292 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_41_41;
#line 292 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_42_42;
#line 292 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_43_43;
#line 277 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_12_61;
#line 317 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 317 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_50;
#line 493 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_17_17;
#line 493 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_18_18;
#line 493 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_19_19;
#line 201 "version_array.opt"
    MR_Box mercury__version_hash_table__conv2_AL0_11;
#line 498 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL1_12;
#line 205 "version_array.opt"
    MR_Box mercury__version_hash_table__conv3_Buckets_14;
#line 503 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_20_20;
#line 503 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_21_21;
#line 503 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_22_22;
#line 503 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_23_23;

#line 327 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__det_update_3_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HashPred0_32 ;
		{
#line 327 "version_hash_table.m"

    HashPred = HashPred0;

#line 7476 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_33  = HashPred;
#line 327 "version_hash_table.m"
}
#line 292 "version_hash_table.m"
    mercury__version_hash_table__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 292 "version_hash_table.m"
    mercury__version_hash_table__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 292 "version_hash_table.m"
    mercury__version_hash_table__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 292 "version_hash_table.m"
    mercury__version_hash_table__V_40_40 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 277 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__det_update_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_40_40 , VA);
		{
#line 277 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 7504 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_34_34  = N;
#line 277 "version_array.opt"
}
#line 317 "version_hash_table.m"
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_33, (MR_Integer) 1)));
#line 317 "version_hash_table.m"
    {
#line 317 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_33), mercury__version_hash_table__K_6, &mercury__version_hash_table__conv1_Hash_50);
    }
#line 317 "version_hash_table.m"
    mercury__version_hash_table__Hash_50 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_50);
#line 319 "version_hash_table.m"
    mercury__version_hash_table__V_51_51 = (mercury__version_hash_table__V_34_34 - (MR_Integer) 1);
#line 319 "version_hash_table.m"
    mercury__version_hash_table__H_9 = (mercury__version_hash_table__Hash_50 & mercury__version_hash_table__V_51_51);
#line 493 "version_hash_table.m"
    mercury__version_hash_table__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 493 "version_hash_table.m"
    mercury__version_hash_table__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 493 "version_hash_table.m"
    mercury__version_hash_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 493 "version_hash_table.m"
    mercury__version_hash_table__Buckets0_10 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 7532 "version_hash_table.c"
    mercury__version_hash_table__TypeCtorInfo_26_26 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 7534 "version_hash_table.c"
    {
#line 7536 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7538 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_27_27, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_26_26));
#line 7540 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_27_27, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_24));
#line 7542 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_27_27, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_25));
#line 7544 "version_hash_table.c"
    }
#line 201 "version_array.opt"
    {
#line 201 "version_array.opt"
      mercury__version_hash_table__conv2_AL0_11 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_27_27, (MR_Box) mercury__version_hash_table__Buckets0_10, mercury__version_hash_table__H_9);
    }
#line 201 "version_array.opt"
    mercury__version_hash_table__AL0_11 = ((MR_Word) mercury__version_hash_table__conv2_AL0_11);
#line 496 "version_hash_table.m"
    {
#line 496 "version_hash_table.m"
      mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(mercury__version_hash_table__TypeInfo_for_K_24, mercury__version_hash_table__AL0_11, mercury__version_hash_table__K_6, mercury__version_hash_table__V_7, &mercury__version_hash_table__AL1_12);
    }
#line 498 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 497 "version_hash_table.m"
      mercury__version_hash_table__AL_13 = mercury__version_hash_table__AL1_12;
#line 498 "version_hash_table.m"
    else
#line 499 "version_hash_table.m"
      {
#line 499 "version_hash_table.m"
        MR_Word mercury__version_hash_table__TypeCtorInfo_28_28 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 499 "version_hash_table.m"
        MR_Word mercury__version_hash_table__V_15_15 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.det_update: key not found"));

#line 499 "version_hash_table.m"
        {
#line 499 "version_hash_table.m"
          mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_28_28, ((MR_Box) (mercury__version_hash_table__V_15_15)));
        }
#line 499 "version_hash_table.m"
      }
#line 205 "version_array.opt"
    {
#line 205 "version_array.opt"
      mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_27_27, mercury__version_hash_table__H_9, ((MR_Box) (mercury__version_hash_table__AL_13)), (MR_Box) mercury__version_hash_table__Buckets0_10, &mercury__version_hash_table__conv3_Buckets_14);
    }
#line 205 "version_array.opt"
    mercury__version_hash_table__Buckets_14 = (MR_Box) mercury__version_hash_table__conv3_Buckets_14;
#line 503 "version_hash_table.m"
    mercury__version_hash_table__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 503 "version_hash_table.m"
    mercury__version_hash_table__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 503 "version_hash_table.m"
    mercury__version_hash_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 503 "version_hash_table.m"
    mercury__version_hash_table__V_23_23 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 503 "version_hash_table.m"
    {
#line 503 "version_hash_table.m"
      mercury__version_hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 503 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 0) = ((MR_Box) (mercury__version_hash_table__V_20_20));
#line 503 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 1) = ((MR_Box) (mercury__version_hash_table__V_21_21));
#line 503 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 2) = ((MR_Box) (mercury__version_hash_table__V_22_22));
#line 503 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_14));
#line 503 "version_hash_table.m"
    }
#line 490 "version_hash_table.m"
    return mercury__version_hash_table__HT_8;
#line 490 "version_hash_table.m"
  }
#line 136 "version_hash_table.m"
}

#line 128 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__det_insert_4_p_0(
#line 128 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_8,
#line 128 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_9,
#line 128 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 128 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_6,
#line 128 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_7,
#line 128 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__4_4)
#line 128 "version_hash_table.m"
{
#line 486 "version_hash_table.m"
  {
#line 486 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 486 "version_hash_table.m"
    {
#line 486 "version_hash_table.m"
      *mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__det_insert_3_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HT_7, mercury__version_hash_table__K_5, mercury__version_hash_table__V_6);
    }
#line 486 "version_hash_table.m"
  }
#line 128 "version_hash_table.m"
}

#line 127 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__det_insert_3_f_0(
#line 127 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_27,
#line 127 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_28,
#line 127 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT0_5,
#line 127 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_6,
#line 127 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_7)
#line 127 "version_hash_table.m"
{
#line 457 "version_hash_table.m"
  {
#line 457 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 457 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_8;
#line 457 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_29_29;
#line 457 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_30_30;
#line 457 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__H_9;
#line 457 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumOccupants0_10;
#line 457 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__MaxOccupants_11;
#line 457 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_12;
#line 457 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets0_13;
#line 457 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL0_14;
#line 457 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL_15;
#line 457 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_22;
#line 457 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumOccupants_23;
#line 457 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 457 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_48;
#line 457 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_49_49;
#line 457 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_65;
#line 457 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_66_66;
#line 307 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 307 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 307 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_52_52 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 324 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_75;
#line 292 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_55_55;
#line 292 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_56_56;
#line 292 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_57_57;
#line 292 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_58_58;
#line 277 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_12_76;
#line 317 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 317 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_65;
#line 201 "version_array.opt"
    MR_Box mercury__version_hash_table__conv2_AL0_14;
#line 205 "version_array.opt"
    MR_Box mercury__version_hash_table__conv3_Buckets_22;

#line 327 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__det_insert_3_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HashPred0_47 ;
		{
#line 327 "version_hash_table.m"

    HashPred = HashPred0;

#line 7739 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_48  = HashPred;
#line 327 "version_hash_table.m"
}
#line 292 "version_hash_table.m"
    mercury__version_hash_table__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 292 "version_hash_table.m"
    mercury__version_hash_table__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 292 "version_hash_table.m"
    mercury__version_hash_table__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 292 "version_hash_table.m"
    mercury__version_hash_table__V_55_55 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 277 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__det_insert_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_55_55 , VA);
		{
#line 277 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 7767 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_49_49  = N;
#line 277 "version_array.opt"
}
#line 317 "version_hash_table.m"
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_48, (MR_Integer) 1)));
#line 317 "version_hash_table.m"
    {
#line 317 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_48), mercury__version_hash_table__K_6, &mercury__version_hash_table__conv1_Hash_65);
    }
#line 317 "version_hash_table.m"
    mercury__version_hash_table__Hash_65 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_65);
#line 319 "version_hash_table.m"
    mercury__version_hash_table__V_66_66 = (mercury__version_hash_table__V_49_49 - (MR_Integer) 1);
#line 319 "version_hash_table.m"
    mercury__version_hash_table__H_9 = (mercury__version_hash_table__Hash_65 & mercury__version_hash_table__V_66_66);
#line 461 "version_hash_table.m"
    mercury__version_hash_table__NumOccupants0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 461 "version_hash_table.m"
    mercury__version_hash_table__MaxOccupants_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 461 "version_hash_table.m"
    mercury__version_hash_table__HashPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 461 "version_hash_table.m"
    mercury__version_hash_table__Buckets0_13 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 7795 "version_hash_table.c"
    mercury__version_hash_table__TypeCtorInfo_29_29 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 7797 "version_hash_table.c"
    {
#line 7799 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7801 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_30_30, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_29_29));
#line 7803 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_30_30, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_27));
#line 7805 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_30_30, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_28));
#line 7807 "version_hash_table.c"
    }
#line 201 "version_array.opt"
    {
#line 201 "version_array.opt"
      mercury__version_hash_table__conv2_AL0_14 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_30_30, (MR_Box) mercury__version_hash_table__Buckets0_13, mercury__version_hash_table__H_9);
    }
#line 201 "version_array.opt"
    mercury__version_hash_table__AL0_14 = ((MR_Word) mercury__version_hash_table__conv2_AL0_14);
#line 467 "version_hash_table.m"
#line 467 "version_hash_table.m"
    switch (MR_tag((MR_Word) mercury__version_hash_table__AL0_14)) {
#line 467 "version_hash_table.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 467 "version_hash_table.m"
      case (MR_Integer) 0:
#line 466 "version_hash_table.m"
        {
#line 466 "version_hash_table.m"
          mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "version_hash_table.m"
          MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
#line 466 "version_hash_table.m"
          MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 466 "version_hash_table.m"
        }
#line 467 "version_hash_table.m"
        break;
#line 467 "version_hash_table.m"
      case (MR_Integer) 1:
#line 474 "version_hash_table.m"
        {
#line 471 "version_hash_table.m"
          MR_Box mercury__version_hash_table__V_32_32;

#line 471 "version_hash_table.m"
          {
#line 471 "version_hash_table.m"
            mercury__version_hash_table__succeeded = mercury__version_hash_table__alist_search_3_p_0(mercury__version_hash_table__TypeInfo_for_K_27, mercury__version_hash_table__TypeInfo_for_V_28, mercury__version_hash_table__AL0_14, mercury__version_hash_table__K_6, &mercury__version_hash_table__V_32_32);
          }
#line 474 "version_hash_table.m"
          if (mercury__version_hash_table__succeeded)
#line 472 "version_hash_table.m"
            {
#line 472 "version_hash_table.m"
              MR_Word mercury__version_hash_table__TypeCtorInfo_31_35 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 472 "version_hash_table.m"
              MR_Word mercury__version_hash_table__V_33_33 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.det_insert: key already present"));

#line 472 "version_hash_table.m"
              {
#line 472 "version_hash_table.m"
                mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_31_35, ((MR_Box) (mercury__version_hash_table__V_33_33)));
              }
#line 472 "version_hash_table.m"
            }
#line 474 "version_hash_table.m"
          else
#line 475 "version_hash_table.m"
            {
#line 475 "version_hash_table.m"
              mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 475 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
#line 475 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 475 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 2) = ((MR_Box) (mercury__version_hash_table__AL0_14));
#line 475 "version_hash_table.m"
            }
#line 474 "version_hash_table.m"
        }
#line 467 "version_hash_table.m"
        break;
#line 467 "version_hash_table.m"
      case (MR_Integer) 2:
#line 474 "version_hash_table.m"
        {
#line 471 "version_hash_table.m"
          MR_Box mercury__version_hash_table__V_21_21;

#line 471 "version_hash_table.m"
          {
#line 471 "version_hash_table.m"
            mercury__version_hash_table__succeeded = mercury__version_hash_table__alist_search_3_p_0(mercury__version_hash_table__TypeInfo_for_K_27, mercury__version_hash_table__TypeInfo_for_V_28, mercury__version_hash_table__AL0_14, mercury__version_hash_table__K_6, &mercury__version_hash_table__V_21_21);
          }
#line 474 "version_hash_table.m"
          if (mercury__version_hash_table__succeeded)
#line 472 "version_hash_table.m"
            {
#line 472 "version_hash_table.m"
              MR_Word mercury__version_hash_table__TypeCtorInfo_31_31 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 472 "version_hash_table.m"
              MR_Word mercury__version_hash_table__V_24_24 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.det_insert: key already present"));

#line 472 "version_hash_table.m"
              {
#line 472 "version_hash_table.m"
                mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_31_31, ((MR_Box) (mercury__version_hash_table__V_24_24)));
              }
#line 472 "version_hash_table.m"
            }
#line 474 "version_hash_table.m"
          else
#line 475 "version_hash_table.m"
            {
#line 475 "version_hash_table.m"
              mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 475 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
#line 475 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 475 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 2) = ((MR_Box) (mercury__version_hash_table__AL0_14));
#line 475 "version_hash_table.m"
            }
#line 474 "version_hash_table.m"
        }
#line 467 "version_hash_table.m"
        break;
#line 467 "version_hash_table.m"
    }
#line 205 "version_array.opt"
    {
#line 205 "version_array.opt"
      mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_30_30, mercury__version_hash_table__H_9, ((MR_Box) (mercury__version_hash_table__AL_15)), (MR_Box) mercury__version_hash_table__Buckets0_13, &mercury__version_hash_table__conv3_Buckets_22);
    }
#line 205 "version_array.opt"
    mercury__version_hash_table__Buckets_22 = (MR_Box) mercury__version_hash_table__conv3_Buckets_22;
#line 479 "version_hash_table.m"
    mercury__version_hash_table__NumOccupants_23 = (mercury__version_hash_table__NumOccupants0_10 + (MR_Integer) 1);
#line 480 "version_hash_table.m"
    mercury__version_hash_table__succeeded = (mercury__version_hash_table__NumOccupants_23 > mercury__version_hash_table__MaxOccupants_11);
#line 482 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 481 "version_hash_table.m"
      {
#line 481 "version_hash_table.m"
        return mercury__version_hash_table__HT_8 = mercury__version_hash_table__expand_4_f_0(mercury__version_hash_table__TypeInfo_for_K_27, mercury__version_hash_table__TypeInfo_for_V_28, mercury__version_hash_table__NumOccupants_23, mercury__version_hash_table__MaxOccupants_11, mercury__version_hash_table__HashPred_12, mercury__version_hash_table__Buckets_22);
      }
#line 482 "version_hash_table.m"
    else
#line 483 "version_hash_table.m"
      {
#line 483 "version_hash_table.m"
        mercury__version_hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 483 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants_23));
#line 483 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_11));
#line 483 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_12));
#line 483 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_22));
#line 483 "version_hash_table.m"
      }
#line 457 "version_hash_table.m"
    return mercury__version_hash_table__HT_8;
#line 457 "version_hash_table.m"
  }
#line 127 "version_hash_table.m"
}

#line 121 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__f_101_108_101_109_32_58_61_3_f_0(
#line 121 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_8,
#line 121 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_9,
#line 121 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 121 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_6,
#line 121 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_7)
#line 121 "version_hash_table.m"
{
#line 400 "version_hash_table.m"
  {
#line 400 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 400 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__4_4;

#line 400 "version_hash_table.m"
    {
#line 400 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__set_3_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HT_6, mercury__version_hash_table__K_5, mercury__version_hash_table__V_7);
    }
#line 400 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__4_4;
#line 400 "version_hash_table.m"
  }
#line 121 "version_hash_table.m"
}

#line 114 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__set_4_p_0(
#line 114 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_8,
#line 114 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_9,
#line 114 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 114 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_6,
#line 114 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_7,
#line 114 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__4_4)
#line 114 "version_hash_table.m"
{
#line 402 "version_hash_table.m"
  {
#line 402 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 402 "version_hash_table.m"
    {
#line 402 "version_hash_table.m"
      *mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__set_3_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HT_7, mercury__version_hash_table__K_5, mercury__version_hash_table__V_6);
    }
#line 402 "version_hash_table.m"
  }
#line 114 "version_hash_table.m"
}

#line 113 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__set_3_f_0(
#line 113 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_26,
#line 113 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_27,
#line 113 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT0_5,
#line 113 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_6,
#line 113 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_7)
#line 113 "version_hash_table.m"
{
#line 356 "version_hash_table.m"
  {
#line 356 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 356 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_8;
#line 356 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_28_28;
#line 356 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_29_29;
#line 356 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__H_9;
#line 356 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumOccupants0_10;
#line 356 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__MaxOccupants_11;
#line 356 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_12;
#line 356 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets0_13;
#line 356 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL0_14;
#line 356 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL_15;
#line 356 "version_hash_table.m"
    MR_Word mercury__version_hash_table__MayExpand_16;
#line 356 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_23;
#line 356 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 356 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_34;
#line 356 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_35_35;
#line 356 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_51;
#line 356 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_52_52;
#line 307 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 307 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 307 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_38_38 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 324 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_61;
#line 292 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_41_41;
#line 292 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_42_42;
#line 292 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_43_43;
#line 292 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_44_44;
#line 277 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_12_62;
#line 317 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 317 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_51;
#line 201 "version_array.opt"
    MR_Box mercury__version_hash_table__conv2_AL0_14;
#line 205 "version_array.opt"
    MR_Box mercury__version_hash_table__conv3_Buckets_23;

#line 327 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__set_3_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HashPred0_33 ;
		{
#line 327 "version_hash_table.m"

    HashPred = HashPred0;

#line 8129 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_34  = HashPred;
#line 327 "version_hash_table.m"
}
#line 292 "version_hash_table.m"
    mercury__version_hash_table__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 292 "version_hash_table.m"
    mercury__version_hash_table__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 292 "version_hash_table.m"
    mercury__version_hash_table__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 292 "version_hash_table.m"
    mercury__version_hash_table__V_41_41 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 277 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__set_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_41_41 , VA);
		{
#line 277 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 8157 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_35_35  = N;
#line 277 "version_array.opt"
}
#line 317 "version_hash_table.m"
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_34, (MR_Integer) 1)));
#line 317 "version_hash_table.m"
    {
#line 317 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_34), mercury__version_hash_table__K_6, &mercury__version_hash_table__conv1_Hash_51);
    }
#line 317 "version_hash_table.m"
    mercury__version_hash_table__Hash_51 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_51);
#line 319 "version_hash_table.m"
    mercury__version_hash_table__V_52_52 = (mercury__version_hash_table__V_35_35 - (MR_Integer) 1);
#line 319 "version_hash_table.m"
    mercury__version_hash_table__H_9 = (mercury__version_hash_table__Hash_51 & mercury__version_hash_table__V_52_52);
#line 360 "version_hash_table.m"
    mercury__version_hash_table__NumOccupants0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 360 "version_hash_table.m"
    mercury__version_hash_table__MaxOccupants_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 360 "version_hash_table.m"
    mercury__version_hash_table__HashPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 360 "version_hash_table.m"
    mercury__version_hash_table__Buckets0_13 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 8185 "version_hash_table.c"
    mercury__version_hash_table__TypeCtorInfo_28_28 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 8187 "version_hash_table.c"
    {
#line 8189 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8191 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_29_29, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_28_28));
#line 8193 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_29_29, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_26));
#line 8195 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_29_29, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_27));
#line 8197 "version_hash_table.c"
    }
#line 201 "version_array.opt"
    {
#line 201 "version_array.opt"
      mercury__version_hash_table__conv2_AL0_14 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_29_29, (MR_Box) mercury__version_hash_table__Buckets0_13, mercury__version_hash_table__H_9);
    }
#line 201 "version_array.opt"
    mercury__version_hash_table__AL0_14 = ((MR_Word) mercury__version_hash_table__conv2_AL0_14);
#line 367 "version_hash_table.m"
#line 367 "version_hash_table.m"
    switch (MR_tag((MR_Word) mercury__version_hash_table__AL0_14)) {
#line 367 "version_hash_table.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 367 "version_hash_table.m"
      case (MR_Integer) 0:
#line 364 "version_hash_table.m"
        {
#line 365 "version_hash_table.m"
          {
#line 365 "version_hash_table.m"
            mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 365 "version_hash_table.m"
            MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
#line 365 "version_hash_table.m"
            MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 365 "version_hash_table.m"
          }
#line 366 "version_hash_table.m"
          mercury__version_hash_table__MayExpand_16 = (MR_Integer) 1;
#line 364 "version_hash_table.m"
        }
#line 367 "version_hash_table.m"
        break;
#line 367 "version_hash_table.m"
      case (MR_Integer) 1:
#line 368 "version_hash_table.m"
        {
#line 368 "version_hash_table.m"
          MR_Box mercury__version_hash_table__K0_17 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_14, (MR_Integer) 0));
#line 368 "version_hash_table.m"
          MR_Box mercury__version_hash_table___V0_18 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_14, (MR_Integer) 1));

#line 369 "version_hash_table.m"
          {
#line 369 "version_hash_table.m"
            mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_26, mercury__version_hash_table__K0_17, mercury__version_hash_table__K_6);
          }
#line 372 "version_hash_table.m"
          if (mercury__version_hash_table__succeeded)
#line 370 "version_hash_table.m"
            {
#line 370 "version_hash_table.m"
              {
#line 370 "version_hash_table.m"
                mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 370 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K0_17;
#line 370 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 370 "version_hash_table.m"
              }
#line 371 "version_hash_table.m"
              mercury__version_hash_table__MayExpand_16 = (MR_Integer) 0;
#line 370 "version_hash_table.m"
            }
#line 372 "version_hash_table.m"
          else
#line 373 "version_hash_table.m"
            {
#line 373 "version_hash_table.m"
              {
#line 373 "version_hash_table.m"
                mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 373 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
#line 373 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 373 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 2) = ((MR_Box) (mercury__version_hash_table__AL0_14));
#line 373 "version_hash_table.m"
              }
#line 374 "version_hash_table.m"
              mercury__version_hash_table__MayExpand_16 = (MR_Integer) 1;
#line 373 "version_hash_table.m"
            }
#line 368 "version_hash_table.m"
        }
#line 367 "version_hash_table.m"
        break;
#line 367 "version_hash_table.m"
      case (MR_Integer) 2:
#line 381 "version_hash_table.m"
        {
#line 381 "version_hash_table.m"
          MR_Word mercury__version_hash_table__AL1_22;

#line 378 "version_hash_table.m"
          {
#line 378 "version_hash_table.m"
            mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(mercury__version_hash_table__TypeInfo_for_K_26, mercury__version_hash_table__AL0_14, mercury__version_hash_table__K_6, mercury__version_hash_table__V_7, &mercury__version_hash_table__AL1_22);
          }
#line 381 "version_hash_table.m"
          if (mercury__version_hash_table__succeeded)
#line 379 "version_hash_table.m"
            {
#line 379 "version_hash_table.m"
              mercury__version_hash_table__AL_15 = mercury__version_hash_table__AL1_22;
#line 380 "version_hash_table.m"
              mercury__version_hash_table__MayExpand_16 = (MR_Integer) 0;
#line 379 "version_hash_table.m"
            }
#line 381 "version_hash_table.m"
          else
#line 382 "version_hash_table.m"
            {
#line 382 "version_hash_table.m"
              {
#line 382 "version_hash_table.m"
                mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 382 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
#line 382 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 382 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 2) = ((MR_Box) (mercury__version_hash_table__AL0_14));
#line 382 "version_hash_table.m"
              }
#line 383 "version_hash_table.m"
              mercury__version_hash_table__MayExpand_16 = (MR_Integer) 1;
#line 382 "version_hash_table.m"
            }
#line 381 "version_hash_table.m"
        }
#line 367 "version_hash_table.m"
        break;
#line 367 "version_hash_table.m"
    }
#line 205 "version_array.opt"
    {
#line 205 "version_array.opt"
      mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_29_29, mercury__version_hash_table__H_9, ((MR_Box) (mercury__version_hash_table__AL_15)), (MR_Box) mercury__version_hash_table__Buckets0_13, &mercury__version_hash_table__conv3_Buckets_23);
    }
#line 205 "version_array.opt"
    mercury__version_hash_table__Buckets_23 = (MR_Box) mercury__version_hash_table__conv3_Buckets_23;
#line 390 "version_hash_table.m"
#line 390 "version_hash_table.m"
    switch (mercury__version_hash_table__MayExpand_16) {
#line 390 "version_hash_table.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 390 "version_hash_table.m"
      case (MR_Integer) 0:
#line 389 "version_hash_table.m"
        {
#line 389 "version_hash_table.m"
          mercury__version_hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 389 "version_hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants0_10));
#line 389 "version_hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_11));
#line 389 "version_hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_12));
#line 389 "version_hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_23));
#line 389 "version_hash_table.m"
        }
#line 390 "version_hash_table.m"
        break;
#line 390 "version_hash_table.m"
      case (MR_Integer) 1:
#line 391 "version_hash_table.m"
        {
#line 391 "version_hash_table.m"
          MR_Integer mercury__version_hash_table__NumOccupants_24 = (mercury__version_hash_table__NumOccupants0_10 + (MR_Integer) 1);

#line 393 "version_hash_table.m"
          mercury__version_hash_table__succeeded = (mercury__version_hash_table__NumOccupants_24 > mercury__version_hash_table__MaxOccupants_11);
#line 395 "version_hash_table.m"
          if (mercury__version_hash_table__succeeded)
#line 394 "version_hash_table.m"
            {
#line 394 "version_hash_table.m"
              return mercury__version_hash_table__HT_8 = mercury__version_hash_table__expand_4_f_0(mercury__version_hash_table__TypeInfo_for_K_26, mercury__version_hash_table__TypeInfo_for_V_27, mercury__version_hash_table__NumOccupants_24, mercury__version_hash_table__MaxOccupants_11, mercury__version_hash_table__HashPred_12, mercury__version_hash_table__Buckets_23);
            }
#line 395 "version_hash_table.m"
          else
#line 396 "version_hash_table.m"
            {
#line 396 "version_hash_table.m"
              mercury__version_hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 396 "version_hash_table.m"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants_24));
#line 396 "version_hash_table.m"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_11));
#line 396 "version_hash_table.m"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_12));
#line 396 "version_hash_table.m"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_23));
#line 396 "version_hash_table.m"
            }
#line 391 "version_hash_table.m"
        }
#line 390 "version_hash_table.m"
        break;
#line 390 "version_hash_table.m"
    }
#line 356 "version_hash_table.m"
    return mercury__version_hash_table__HT_8;
#line 356 "version_hash_table.m"
  }
#line 113 "version_hash_table.m"
}

#line 107 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__copy_1_f_0(
#line 107 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_10,
#line 107 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_11,
#line 107 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT0_3)
#line 107 "version_hash_table.m"
{
#line 348 "version_hash_table.m"
  {
#line 348 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 348 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_4;
#line 349 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_12_12 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 349 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_13_13;
#line 349 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumOccupants_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_3, (MR_Integer) 0)));
#line 349 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__MaxOccupants_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_3, (MR_Integer) 1)));
#line 349 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_3, (MR_Integer) 2)));
#line 349 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets0_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_3, (MR_Integer) 3)));
#line 349 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_9;
#line 350 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv0_Buckets_9;

#line 8444 "version_hash_table.c"
    {
#line 8446 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8448 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_13_13, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_12_12));
#line 8450 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_13_13, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_10));
#line 8452 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_13_13, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_11));
#line 8454 "version_hash_table.c"
    }
#line 350 "version_hash_table.m"
    {
#line 350 "version_hash_table.m"
      mercury__version_hash_table__conv0_Buckets_9 = mercury__version_array__copy_1_f_0(mercury__version_hash_table__TypeInfo_13_13, (MR_Box) mercury__version_hash_table__Buckets0_8);
    }
#line 350 "version_hash_table.m"
    mercury__version_hash_table__Buckets_9 = (MR_Box) mercury__version_hash_table__conv0_Buckets_9;
#line 351 "version_hash_table.m"
    {
#line 351 "version_hash_table.m"
      mercury__version_hash_table__HT_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 351 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants_5));
#line 351 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_6));
#line 351 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_7));
#line 351 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_9));
#line 351 "version_hash_table.m"
    }
#line 348 "version_hash_table.m"
    return mercury__version_hash_table__HT_4;
#line 348 "version_hash_table.m"
  }
#line 107 "version_hash_table.m"
}

#line 97 "version_hash_table.m"
MR_Integer MR_CALL 
mercury__version_hash_table__num_occupants_1_f_0(
#line 97 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_8,
#line 97 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_9,
#line 97 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_3)
#line 97 "version_hash_table.m"
{
#line 296 "version_hash_table.m"
  {
#line 296 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 296 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumOccupants_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 0)));
#line 297 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 1)));
#line 297 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 2)));
#line 297 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 3)));

#line 296 "version_hash_table.m"
    return mercury__version_hash_table__NumOccupants_4;
#line 296 "version_hash_table.m"
  }
#line 97 "version_hash_table.m"
}

#line 93 "version_hash_table.m"
MR_Integer MR_CALL 
mercury__version_hash_table__num_buckets_1_f_0(
#line 93 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_9,
#line 93 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_10,
#line 93 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_3)
#line 93 "version_hash_table.m"
{
#line 291 "version_hash_table.m"
  {
#line 291 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 291 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumBuckets_4;
#line 292 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_5_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 3)));
#line 292 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 0)));
#line 292 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 1)));
#line 292 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 2)));
#line 277 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_12_13;

#line 277 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__num_buckets_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_5_5 , VA);
		{
#line 277 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 8556 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__NumBuckets_4  = N;
#line 277 "version_array.opt"
}
#line 291 "version_hash_table.m"
    return mercury__version_hash_table__NumBuckets_4;
#line 291 "version_hash_table.m"
  }
#line 93 "version_hash_table.m"
}

#line 89 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__generic_hash_2_p_0(
#line 89 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_38,
#line 89 "version_hash_table.m"
  MR_Box mercury__version_hash_table__T_3,
#line 89 "version_hash_table.m"
  MR_Integer * mercury__version_hash_table__H_4)
#line 89 "version_hash_table.m"
{
#line 734 "version_hash_table.m"
  while (MR_TRUE)
#line 734 "version_hash_table.m"
    {
#line 734 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 734 "version_hash_table.m"
      {
#line 734 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;
#line 734 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__Int_5;
#line 730 "version_hash_table.m"
        MR_Word mercury__version_hash_table__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 59 "builtin.opt"
        MR_Box mercury__version_hash_table__conv0_Int_5;

#line 59 "builtin.opt"
        {
#line 59 "builtin.opt"
          mercury__version_hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__version_hash_table__TypeInfo_for_T_38, mercury__version_hash_table__TypeCtorInfo_39_39, mercury__version_hash_table__T_3, &mercury__version_hash_table__conv0_Int_5);
        }
#line 59 "builtin.opt"
        if (mercury__version_hash_table__succeeded)
#line 59 "builtin.opt"
          {
#line 59 "builtin.opt"
            mercury__version_hash_table__Int_5 = ((MR_Integer) mercury__version_hash_table__conv0_Int_5);
#line 59 "builtin.opt"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 59 "builtin.opt"
          }
#line 734 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 678 "version_hash_table.m"
          {
#line 681 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__generic_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__version_hash_table__Int_5 ;
		{
#line 681 "version_hash_table.m"

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

#line 8651 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__H_4  = H;
#line 681 "version_hash_table.m"
}
#line 678 "version_hash_table.m"
          }
#line 734 "version_hash_table.m"
        else
#line 738 "version_hash_table.m"
          {
#line 738 "version_hash_table.m"
            MR_String mercury__version_hash_table__String_6;
#line 734 "version_hash_table.m"
            MR_Word mercury__version_hash_table__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 59 "builtin.opt"
            MR_Box mercury__version_hash_table__conv1_String_6;

#line 59 "builtin.opt"
            {
#line 59 "builtin.opt"
              mercury__version_hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__version_hash_table__TypeInfo_for_T_38, mercury__version_hash_table__TypeCtorInfo_40_40, mercury__version_hash_table__T_3, &mercury__version_hash_table__conv1_String_6);
            }
#line 59 "builtin.opt"
            if (mercury__version_hash_table__succeeded)
#line 59 "builtin.opt"
              {
#line 59 "builtin.opt"
                mercury__version_hash_table__String_6 = ((MR_String) mercury__version_hash_table__conv1_String_6);
#line 59 "builtin.opt"
                mercury__version_hash_table__succeeded = MR_TRUE;
#line 59 "builtin.opt"
              }
#line 738 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 710 "version_hash_table.m"
              {
#line 710 "version_hash_table.m"
                *mercury__version_hash_table__H_4 = mercury__string__hash_1_f_0(mercury__version_hash_table__String_6);
              }
#line 738 "version_hash_table.m"
            else
#line 742 "version_hash_table.m"
              {
#line 742 "version_hash_table.m"
                MR_Float mercury__version_hash_table__Float_7;
#line 738 "version_hash_table.m"
                MR_Word mercury__version_hash_table__TypeCtorInfo_41_41 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 59 "builtin.opt"
                MR_Box mercury__version_hash_table__conv2_Float_7;

#line 59 "builtin.opt"
                {
#line 59 "builtin.opt"
                  mercury__version_hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__version_hash_table__TypeInfo_for_T_38, mercury__version_hash_table__TypeCtorInfo_41_41, mercury__version_hash_table__T_3, &mercury__version_hash_table__conv2_Float_7);
                }
#line 59 "builtin.opt"
                if (mercury__version_hash_table__succeeded)
#line 59 "builtin.opt"
                  {
#line 59 "builtin.opt"
                    mercury__version_hash_table__Float_7 = MR_unbox_float(mercury__version_hash_table__conv2_Float_7);
#line 59 "builtin.opt"
                    mercury__version_hash_table__succeeded = MR_TRUE;
#line 59 "builtin.opt"
                  }
#line 742 "version_hash_table.m"
                if (mercury__version_hash_table__succeeded)
#line 108 "float.opt"
                  {
#line 108 "float.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__generic_hash_2_p_0

	MR_Float F;
	MR_Integer H;

	F =  mercury__version_hash_table__Float_7 ;
		{
#line 108 "float.opt"

    H = MR_hash_float(F);

#line 8736 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__H_4  = H;
#line 108 "float.opt"
}
#line 108 "float.opt"
                  }
#line 742 "version_hash_table.m"
                else
#line 746 "version_hash_table.m"
                  {
#line 746 "version_hash_table.m"
                    MR_Char mercury__version_hash_table__Char_8;
#line 742 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 59 "builtin.opt"
                    MR_Box mercury__version_hash_table__conv3_Char_8;

#line 59 "builtin.opt"
                    {
#line 59 "builtin.opt"
                      mercury__version_hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__version_hash_table__TypeInfo_for_T_38, mercury__version_hash_table__TypeCtorInfo_42_42, mercury__version_hash_table__T_3, &mercury__version_hash_table__conv3_Char_8);
                    }
#line 59 "builtin.opt"
                    if (mercury__version_hash_table__succeeded)
#line 59 "builtin.opt"
                      {
#line 59 "builtin.opt"
                        mercury__version_hash_table__Char_8 = ((MR_Char) (MR_Word) mercury__version_hash_table__conv3_Char_8);
#line 59 "builtin.opt"
                        mercury__version_hash_table__succeeded = MR_TRUE;
#line 59 "builtin.opt"
                      }
#line 746 "version_hash_table.m"
                    if (mercury__version_hash_table__succeeded)
#line 722 "version_hash_table.m"
                      {
#line 722 "version_hash_table.m"
                        MR_Integer mercury__version_hash_table__V_63_63;

#line 110 "char.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__generic_hash_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__version_hash_table__Char_8 ;
		{
#line 110 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 8791 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_63_63  = Int;
#line 110 "char.opt"
}
#line 681 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__generic_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__version_hash_table__V_63_63 ;
		{
#line 681 "version_hash_table.m"

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

#line 8832 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__H_4  = H;
#line 681 "version_hash_table.m"
}
#line 722 "version_hash_table.m"
                      }
#line 746 "version_hash_table.m"
                    else
#line 750 "version_hash_table.m"
                      {
#line 750 "version_hash_table.m"
                        MR_Word mercury__version_hash_table__Univ_9;
#line 746 "version_hash_table.m"
                        MR_Word mercury__version_hash_table__TypeCtorInfo_43_43 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 59 "builtin.opt"
                        MR_Box mercury__version_hash_table__conv4_Univ_9;

#line 59 "builtin.opt"
                        {
#line 59 "builtin.opt"
                          mercury__version_hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__version_hash_table__TypeInfo_for_T_38, mercury__version_hash_table__TypeCtorInfo_43_43, mercury__version_hash_table__T_3, &mercury__version_hash_table__conv4_Univ_9);
                        }
#line 59 "builtin.opt"
                        if (mercury__version_hash_table__succeeded)
#line 59 "builtin.opt"
                          {
#line 59 "builtin.opt"
                            mercury__version_hash_table__Univ_9 = ((MR_Word) mercury__version_hash_table__conv4_Univ_9);
#line 59 "builtin.opt"
                            mercury__version_hash_table__succeeded = MR_TRUE;
#line 59 "builtin.opt"
                          }
#line 750 "version_hash_table.m"
                        if (mercury__version_hash_table__succeeded)
#line 748 "version_hash_table.m"
                          {
#line 748 "version_hash_table.m"
                            MR_Word mercury__version_hash_table__TypeInfo_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__Univ_9, (MR_Integer) 0)));
#line 748 "version_hash_table.m"
                            MR_Box mercury__version_hash_table__V_22_22 = (MR_hl_field(MR_mktag(0), mercury__version_hash_table__Univ_9, (MR_Integer) 1));

#line 748 "version_hash_table.m"
                            /* direct tailcall eliminated */
#line 748 "version_hash_table.m"
                            {
#line 748 "version_hash_table.m"
                              MR_Word mercury__version_hash_table__TypeInfo_for_T__tmp_copy_38 = mercury__version_hash_table__TypeInfo_44_44;
#line 748 "version_hash_table.m"
                              MR_Box mercury__version_hash_table__T__tmp_copy_3 = mercury__version_hash_table__V_22_22;

#line 748 "version_hash_table.m"
                              mercury__version_hash_table__T_3 = mercury__version_hash_table__T__tmp_copy_3;
#line 748 "version_hash_table.m"
                              mercury__version_hash_table__TypeInfo_for_T_38 = mercury__version_hash_table__TypeInfo_for_T__tmp_copy_38;
#line 748 "version_hash_table.m"
                            }
#line 748 "version_hash_table.m"
                            continue;
#line 748 "version_hash_table.m"
                          }
#line 750 "version_hash_table.m"
                        else
#line 761 "version_hash_table.m"
                          {
#line 761 "version_hash_table.m"
                            MR_Word mercury__version_hash_table__TypeInfo_45_45;
#line 761 "version_hash_table.m"
                            MR_ArrayPtr mercury__version_hash_table__Array_10;
#line 750 "version_hash_table.m"
                            MR_ArrayPtr mercury__version_hash_table__conv5_Array_10;

#line 750 "version_hash_table.m"
                            {
#line 750 "version_hash_table.m"
                              mercury__version_hash_table__succeeded = mercury__array__dynamic_cast_to_array_2_p_0(mercury__version_hash_table__TypeInfo_for_T_38, &mercury__version_hash_table__TypeInfo_45_45, mercury__version_hash_table__T_3, &mercury__version_hash_table__conv5_Array_10);
                            }
#line 750 "version_hash_table.m"
                            if (mercury__version_hash_table__succeeded)
#line 750 "version_hash_table.m"
                              {
#line 750 "version_hash_table.m"
                                mercury__version_hash_table__Array_10 = (MR_ArrayPtr) mercury__version_hash_table__conv5_Array_10;
#line 750 "version_hash_table.m"
                                mercury__version_hash_table__succeeded = MR_TRUE;
#line 750 "version_hash_table.m"
                              }
#line 761 "version_hash_table.m"
                            if (mercury__version_hash_table__succeeded)
#line 752 "version_hash_table.m"
                              {
#line 752 "version_hash_table.m"
                                {
#line 752 "version_hash_table.m"
                                  *mercury__version_hash_table__H_4 = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(mercury__version_hash_table__TypeInfo_45_45, mercury__version_hash_table__Array_10, (MR_Integer) 0);
                                }
#line 752 "version_hash_table.m"
                              }
#line 761 "version_hash_table.m"
                            else
#line 763 "version_hash_table.m"
                              {
#line 763 "version_hash_table.m"
                                MR_String mercury__version_hash_table__FunctorName_15;
#line 763 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__Arity_16;
#line 763 "version_hash_table.m"
                                MR_Word mercury__version_hash_table__Args_17;
#line 763 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__H0_18;
#line 763 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__H1_19;
#line 763 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__V_73_73;
#line 763 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__V_74_74;
#line 763 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__V_75_75;
#line 763 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__V_76_76;

#line 763 "version_hash_table.m"
                                {
#line 763 "version_hash_table.m"
                                  mercury__deconstruct__deconstruct_5_p_1(mercury__version_hash_table__TypeInfo_for_T_38, mercury__version_hash_table__T_3, (MR_Integer) 1, &mercury__version_hash_table__FunctorName_15, &mercury__version_hash_table__Arity_16, &mercury__version_hash_table__Args_17);
                                }
#line 710 "version_hash_table.m"
                                {
#line 710 "version_hash_table.m"
                                  mercury__version_hash_table__H0_18 = mercury__string__hash_1_f_0(mercury__version_hash_table__FunctorName_15);
                                }
#line 781 "version_hash_table.m"
                                mercury__version_hash_table__V_73_73 = (mercury__version_hash_table__H0_18 << mercury__version_hash_table__Arity_16);
#line 64 "int.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__generic_hash_2_p_0

	MR_Integer Bits;

		{
#line 64 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 8978 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_76_76  = Bits;
#line 64 "int.opt"
}
#line 782 "version_hash_table.m"
                                mercury__version_hash_table__V_75_75 = (mercury__version_hash_table__V_76_76 - mercury__version_hash_table__Arity_16);
#line 782 "version_hash_table.m"
                                mercury__version_hash_table__V_74_74 = (mercury__version_hash_table__H0_18 >> mercury__version_hash_table__V_75_75);
#line 781 "version_hash_table.m"
                                mercury__version_hash_table__H1_19 = (mercury__version_hash_table__V_73_73 ^ mercury__version_hash_table__V_74_74);
#line 766 "version_hash_table.m"
                                {
#line 766 "version_hash_table.m"
                                  mercury__version_hash_table__foldl__ho13_4_p_in__list_0(mercury__version_hash_table__Args_17, mercury__version_hash_table__H1_19, mercury__version_hash_table__H_4);
#line 766 "version_hash_table.m"
                                  return;
                                }
#line 763 "version_hash_table.m"
                              }
#line 761 "version_hash_table.m"
                          }
#line 750 "version_hash_table.m"
                      }
#line 746 "version_hash_table.m"
                  }
#line 742 "version_hash_table.m"
              }
#line 738 "version_hash_table.m"
          }
#line 734 "version_hash_table.m"
      }
#line 734 "version_hash_table.m"
      break;
#line 734 "version_hash_table.m"
    }
#line 89 "version_hash_table.m"
}

#line 88 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__float_hash_2_p_0(
#line 88 "version_hash_table.m"
  MR_Float mercury__version_hash_table__F_3,
#line 88 "version_hash_table.m"
  MR_Integer * mercury__version_hash_table__HeadVar__2_2)
#line 88 "version_hash_table.m"
{
#line 108 "float.opt"
  {
#line 108 "float.opt"
    MR_bool mercury__version_hash_table__succeeded;

#line 108 "float.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__float_hash_2_p_0

	MR_Float F;
	MR_Integer H;

	F =  mercury__version_hash_table__F_3 ;
		{
#line 108 "float.opt"

    H = MR_hash_float(F);

#line 9046 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__HeadVar__2_2  = H;
#line 108 "float.opt"
}
#line 108 "float.opt"
  }
#line 88 "version_hash_table.m"
}

#line 87 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__char_hash_2_p_0(
#line 87 "version_hash_table.m"
  MR_Char mercury__version_hash_table__C_3,
#line 87 "version_hash_table.m"
  MR_Integer * mercury__version_hash_table__H_4)
#line 87 "version_hash_table.m"
{
#line 722 "version_hash_table.m"
  {
#line 722 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 722 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_5_5;

#line 110 "char.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__char_hash_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__version_hash_table__C_3 ;
		{
#line 110 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 9087 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_5_5  = Int;
#line 110 "char.opt"
}
#line 681 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__char_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__version_hash_table__V_5_5 ;
		{
#line 681 "version_hash_table.m"

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

#line 9128 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__H_4  = H;
#line 681 "version_hash_table.m"
}
#line 722 "version_hash_table.m"
  }
#line 87 "version_hash_table.m"
}

#line 86 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__string_hash_2_p_0(
#line 86 "version_hash_table.m"
  MR_String mercury__version_hash_table__S_3,
#line 86 "version_hash_table.m"
  MR_Integer * mercury__version_hash_table__HeadVar__2_2)
#line 86 "version_hash_table.m"
{
#line 710 "version_hash_table.m"
  {
#line 710 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 710 "version_hash_table.m"
    {
#line 710 "version_hash_table.m"
      *mercury__version_hash_table__HeadVar__2_2 = mercury__string__hash_1_f_0(mercury__version_hash_table__S_3);
    }
#line 710 "version_hash_table.m"
  }
#line 86 "version_hash_table.m"
}

#line 85 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__int_hash_2_p_0(
#line 85 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__N_1,
#line 85 "version_hash_table.m"
  MR_Integer * mercury__version_hash_table__H_2)
#line 85 "version_hash_table.m"
{
#line 678 "version_hash_table.m"
  {
#line 678 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 681 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__int_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__version_hash_table__N_1 ;
		{
#line 681 "version_hash_table.m"

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

#line 9212 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__H_2  = H;
#line 681 "version_hash_table.m"
}
#line 678 "version_hash_table.m"
  }
#line 85 "version_hash_table.m"
}

#line 76 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__unsafe_init_default_1_f_0(
#line 76 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_6,
#line 76 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_7,
#line 76 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_3)
#line 76 "version_hash_table.m"
{
#line 286 "version_hash_table.m"
  {
#line 286 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 286 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__2_2;

#line 253 "version_hash_table.m"
    {
#line 253 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HashPred_3, (MR_Integer) 7, (MR_Float) 0.90000000000000002, (MR_Integer) 0);
    }
#line 286 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__2_2;
#line 286 "version_hash_table.m"
  }
#line 76 "version_hash_table.m"
}

#line 68 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__init_default_1_f_0(
#line 68 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_6,
#line 68 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_7,
#line 68 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_3)
#line 68 "version_hash_table.m"
{
#line 284 "version_hash_table.m"
  {
#line 284 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 284 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__2_2;

#line 251 "version_hash_table.m"
    {
#line 251 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HashPred_3, (MR_Integer) 7, (MR_Float) 0.90000000000000002, (MR_Integer) 1);
    }
#line 284 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__2_2;
#line 284 "version_hash_table.m"
  }
#line 68 "version_hash_table.m"
}

#line 62 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__unsafe_init_3_f_0(
#line 62 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_9,
#line 62 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_10,
#line 62 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_5,
#line 62 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__N_6,
#line 62 "version_hash_table.m"
  MR_Float mercury__version_hash_table__MaxOccupancy_7)
#line 62 "version_hash_table.m"
{
#line 253 "version_hash_table.m"
  {
#line 253 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 253 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__4_4;

#line 253 "version_hash_table.m"
    {
#line 253 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_9, mercury__version_hash_table__TypeInfo_for_V_10, mercury__version_hash_table__HashPred_5, mercury__version_hash_table__N_6, mercury__version_hash_table__MaxOccupancy_7, (MR_Integer) 0);
    }
#line 253 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__4_4;
#line 253 "version_hash_table.m"
  }
#line 62 "version_hash_table.m"
}

#line 49 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__init_3_f_0(
#line 49 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_9,
#line 49 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_10,
#line 49 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_5,
#line 49 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__N_6,
#line 49 "version_hash_table.m"
  MR_Float mercury__version_hash_table__MaxOccupancy_7)
#line 49 "version_hash_table.m"
{
#line 251 "version_hash_table.m"
  {
#line 251 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 251 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__4_4;

#line 251 "version_hash_table.m"
    {
#line 251 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_9, mercury__version_hash_table__TypeInfo_for_V_10, mercury__version_hash_table__HashPred_5, mercury__version_hash_table__N_6, mercury__version_hash_table__MaxOccupancy_7, (MR_Integer) 1);
    }
#line 251 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__4_4;
#line 251 "version_hash_table.m"
  }
#line 49 "version_hash_table.m"
}

void mercury__version_hash_table__init(void)
{
}

void mercury__version_hash_table__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__version_hash_table__version_hash_table__type_ctor_info_buckets_2);
	MR_register_type_ctor_info(&mercury__version_hash_table__version_hash_table__type_ctor_info_hash_pred_1);
	MR_register_type_ctor_info(&mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2);
	MR_register_type_ctor_info(&mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2);
}

void mercury__version_hash_table__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module version_hash_table. */
