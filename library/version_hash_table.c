/*
** Automatically generated from `version_hash_table.m'
** by the Mercury compiler,
** version rotd-2015-03-16
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

#line 820 "version_hash_table.m"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_112_95_95_104_111_50_57_95_95_91_54_93_95_48_4_p_0(
#line 820 "version_hash_table.m"
  MR_Word mercury__version_hash_table__V_21_21,
#line 820 "version_hash_table.m"
  MR_Word mercury__version_hash_table__V_22_22,
#line 820 "version_hash_table.m"
  MR_Word mercury__version_hash_table__V_23_23,
#line 820 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
#line 820 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
#line 820 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6);

#line 81 "version_array.opt"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_53_44_32_49_48_93_95_48_6_p_in__version_array_0(
#line 81 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 81 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 81 "version_array.opt"
  MR_Word mercury__version_hash_table__V_26_26,
#line 81 "version_array.opt"
  MR_Word mercury__version_hash_table__V_27_27,
#line 81 "version_array.opt"
  MR_Word mercury__version_hash_table__V_28_28,
#line 81 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 81 "version_array.opt"
  MR_Box mercury__version_hash_table__VA_8_8,
#line 81 "version_array.opt"
  MR_Integer mercury__version_hash_table__Lo_9_9,
#line 81 "version_array.opt"
  MR_Integer mercury__version_hash_table__Hi_10_10);

#line 83 "version_array.opt"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
#line 83 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 83 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 83 "version_array.opt"
  MR_Word mercury__version_hash_table__V_24_24,
#line 83 "version_array.opt"
  MR_Word mercury__version_hash_table__V_25_25,
#line 83 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 83 "version_array.opt"
  MR_Box mercury__version_hash_table__VA_8_8,
#line 83 "version_array.opt"
  MR_Integer mercury__version_hash_table__Lo_9_9,
#line 83 "version_array.opt"
  MR_Integer mercury__version_hash_table__Hi_10_10,
#line 83 "version_array.opt"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 83 "version_array.opt"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Acc_13_12);

#line 82 "version_array.opt"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
#line 82 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 82 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 82 "version_array.opt"
  MR_Word mercury__version_hash_table__V_24_24,
#line 82 "version_array.opt"
  MR_Word mercury__version_hash_table__V_25_25,
#line 82 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 82 "version_array.opt"
  MR_Box mercury__version_hash_table__VA_8_8,
#line 82 "version_array.opt"
  MR_Integer mercury__version_hash_table__Lo_9_9,
#line 82 "version_array.opt"
  MR_Integer mercury__version_hash_table__Hi_10_10,
#line 82 "version_array.opt"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 82 "version_array.opt"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Acc_13_12);

#line 81 "version_array.opt"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
#line 81 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 81 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 81 "version_array.opt"
  MR_Word mercury__version_hash_table__V_24_24,
#line 81 "version_array.opt"
  MR_Word mercury__version_hash_table__V_25_25,
#line 81 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 81 "version_array.opt"
  MR_Box mercury__version_hash_table__VA_8_8,
#line 81 "version_array.opt"
  MR_Integer mercury__version_hash_table__Lo_9_9,
#line 81 "version_array.opt"
  MR_Integer mercury__version_hash_table__Hi_10_10,
#line 81 "version_array.opt"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 81 "version_array.opt"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Acc_13_12);

#line 80 "version_array.opt"
static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
#line 80 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 80 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 80 "version_array.opt"
  MR_Word mercury__version_hash_table__V_24_24,
#line 80 "version_array.opt"
  MR_Word mercury__version_hash_table__V_25_25,
#line 80 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 80 "version_array.opt"
  MR_Box mercury__version_hash_table__VA_8_8,
#line 80 "version_array.opt"
  MR_Integer mercury__version_hash_table__Lo_9_9,
#line 80 "version_array.opt"
  MR_Integer mercury__version_hash_table__Hi_10_10,
#line 80 "version_array.opt"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 80 "version_array.opt"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Acc_13_12);

#line 79 "version_array.opt"
static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
#line 79 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 79 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 79 "version_array.opt"
  MR_Word mercury__version_hash_table__V_24_24,
#line 79 "version_array.opt"
  MR_Word mercury__version_hash_table__V_25_25,
#line 79 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 79 "version_array.opt"
  MR_Box mercury__version_hash_table__VA_8_8,
#line 79 "version_array.opt"
  MR_Integer mercury__version_hash_table__Lo_9_9,
#line 79 "version_array.opt"
  MR_Integer mercury__version_hash_table__Hi_10_10,
#line 79 "version_array.opt"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 79 "version_array.opt"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Acc_13_12);

#line 78 "version_array.opt"
static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
#line 78 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 78 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 78 "version_array.opt"
  MR_Word mercury__version_hash_table__V_24_24,
#line 78 "version_array.opt"
  MR_Word mercury__version_hash_table__V_25_25,
#line 78 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 78 "version_array.opt"
  MR_Box mercury__version_hash_table__VA_8_8,
#line 78 "version_array.opt"
  MR_Integer mercury__version_hash_table__Lo_9_9,
#line 78 "version_array.opt"
  MR_Integer mercury__version_hash_table__Hi_10_10,
#line 78 "version_array.opt"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 78 "version_array.opt"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Acc_13_12);

#line 78 "version_array.opt"
static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
#line 78 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 78 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 78 "version_array.opt"
  MR_Word mercury__version_hash_table__V_24_24,
#line 78 "version_array.opt"
  MR_Word mercury__version_hash_table__V_25_25,
#line 78 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 78 "version_array.opt"
  MR_Box mercury__version_hash_table__VA_8_8,
#line 78 "version_array.opt"
  MR_Integer mercury__version_hash_table__Lo_9_9,
#line 78 "version_array.opt"
  MR_Integer mercury__version_hash_table__Hi_10_10,
#line 78 "version_array.opt"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 78 "version_array.opt"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Acc_13_12);

#line 78 "version_array.opt"
static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_6_p_in__version_array_0(
#line 78 "version_array.opt"
  MR_Word mercury__version_hash_table__V_27_27,
#line 78 "version_array.opt"
  MR_Word mercury__version_hash_table__V_28_28,
#line 78 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 78 "version_array.opt"
  MR_Box mercury__version_hash_table__VA_8_8,
#line 78 "version_array.opt"
  MR_Integer mercury__version_hash_table__Lo_9_9,
#line 78 "version_array.opt"
  MR_Integer mercury__version_hash_table__Hi_10_10,
#line 78 "version_array.opt"
  MR_Word mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 78 "version_array.opt"
  MR_Word * mercury__version_hash_table__STATE_VARIABLE_Acc_13_12);

#line 98 "array.opt"
static MR_Integer MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_53_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
#line 98 "array.opt"
  MR_Word mercury__version_hash_table__V_19_19,
#line 98 "array.opt"
  MR_ArrayPtr mercury__version_hash_table__A_8_8,
#line 98 "array.opt"
  MR_Integer mercury__version_hash_table__X_9_9,
#line 98 "array.opt"
  MR_Integer mercury__version_hash_table__I_10_10,
#line 98 "array.opt"
  MR_Integer mercury__version_hash_table__Max_11_11);

#line 65 "array.int"
static MR_Integer MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
#line 65 "array.int"
  MR_Word mercury__version_hash_table__V_13_13,
#line 65 "array.int"
  MR_ArrayPtr mercury__version_hash_table__A_6_6,
#line 65 "array.int"
  MR_Integer mercury__version_hash_table__X_7_7);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 538 "version_hash_table.m"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(
#line 538 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_12,
#line 538 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL0_4,
#line 538 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 538 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__AL_6);

#line 405 "version_hash_table.m"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(
#line 405 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_14,
#line 405 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL0_5,
#line 405 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_6,
#line 405 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_7,
#line 405 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__AL_8);

#line 133 "list.int"
static void MR_CALL 
mercury__version_hash_table__foldl__ho13_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__version_hash_table__HeadVar__2_2,
#line 133 "list.int"
  MR_Integer mercury__version_hash_table__HeadVar__3_3,
#line 133 "list.int"
  MR_Integer * mercury__version_hash_table__HeadVar__4_4);

#line 637 "version_hash_table.m"
static void MR_CALL 
mercury__version_hash_table__reinsert_alist_5_p_0(
#line 637 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_20,
#line 637 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_21,
#line 637 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL_6,
#line 637 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_7,
#line 637 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumBuckets_8,
#line 637 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13,
#line 637 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Buckets_14);

#line 624 "version_hash_table.m"
static void MR_CALL 
mercury__version_hash_table__reinsert_bindings_6_p_0(
#line 624 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_20,
#line 624 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_21,
#line 624 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__I_7,
#line 624 "version_hash_table.m"
  MR_Box mercury__version_hash_table__OldBuckets_8,
#line 624 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_9,
#line 624 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumBuckets_10,
#line 624 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13,
#line 624 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Buckets_14);

#line 610 "version_hash_table.m"
static MR_Word MR_CALL 
mercury__version_hash_table__expand_4_f_0(
#line 610 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_21,
#line 610 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_22,
#line 610 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumOccupants_6,
#line 610 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__MaxOccupants0_7,
#line 610 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred0_8,
#line 610 "version_hash_table.m"
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



#include "version_hash_table.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
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



#line 968 "version_hash_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__version_hash_table__version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 977 "version_hash_table.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__version_hash_table__version_array__pti_version_array_1__pseudo_version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2 = {
  &mercury__version_array__version_array__type_ctor_info_version_array_1,
  {
    (MR_PseudoTypeInfo) &mercury__version_hash_table__version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
  }
};

#line 985 "version_hash_table.c"
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

#line 1002 "version_hash_table.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__version_hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1012 "version_hash_table.c"
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

#line 1029 "version_hash_table.c"
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

#line 1044 "version_hash_table.c"
static const MR_PseudoTypeInfo mercury__version_hash_table__version_hash_table__field_types_hash_table_alist_2_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 1050 "version_hash_table.c"
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

#line 1065 "version_hash_table.c"
static const MR_PseudoTypeInfo mercury__version_hash_table__version_hash_table__field_types_hash_table_alist_2_2[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &mercury__version_hash_table__version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
};

#line 1072 "version_hash_table.c"
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

#line 1087 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_0[1] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_0
};

#line 1092 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_1[1] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_1
};

#line 1097 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_2[1] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_2
};

#line 1102 "version_hash_table.c"
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

#line 1121 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_name_ordered_hash_table_alist_2[3] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_2,
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_0,
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_1
};

#line 1128 "version_hash_table.c"
static const MR_Integer mercury__version_hash_table__version_hash_table__functor_number_map_hash_table_alist_2[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1135 "version_hash_table.c"
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

#line 1152 "version_hash_table.c"
static const MR_PseudoTypeInfo mercury__version_hash_table__version_hash_table__field_types_version_hash_table_2_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__version_hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__version_hash_table__version_array__pti_version_array_1__pseudo_version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
};

#line 1160 "version_hash_table.c"
static const MR_ConstString mercury__version_hash_table__version_hash_table__field_names_version_hash_table_2_0[4] = {
  (MR_String) "ht_num_occupants",
  (MR_String) "ht_max_occupants",
  (MR_String) "ht_hash_pred",
  (MR_String) "ht_buckets"
};

#line 1168 "version_hash_table.c"
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

#line 1183 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_version_hash_table_2_0[1] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_version_hash_table_2_0
};

#line 1188 "version_hash_table.c"
static const MR_DuPtagLayout mercury__version_hash_table__version_hash_table__du_ptag_ordered_version_hash_table_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__version_hash_table__version_hash_table__du_stag_ordered_version_hash_table_2_0
  }
};

#line 1197 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_name_ordered_version_hash_table_2[1] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_version_hash_table_2_0
};

#line 1202 "version_hash_table.c"
static const MR_Integer mercury__version_hash_table__version_hash_table__functor_number_map_version_hash_table_2[1] = {
  (MR_Integer) 0
};

#line 1207 "version_hash_table.c"
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

#line 1224 "version_hash_table.c"
static MR_bool MR_CALL 
mercury__version_hash_table____Unify____buckets_2_0_10001(
#line 1227 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 1229 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 1231 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_3,
#line 1233 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4)
#line 1235 "version_hash_table.c"
{
#line 1237 "version_hash_table.c"
  {
#line 1239 "version_hash_table.c"
    MR_bool mercury__version_hash_table__succeeded;

#line 1242 "version_hash_table.c"
    {
#line 1244 "version_hash_table.c"
      mercury__version_hash_table__succeeded = mercury__version_hash_table____Unify____buckets_2_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), ((MR_Box) mercury__version_hash_table__wrapper_arg_3), ((MR_Box) mercury__version_hash_table__wrapper_arg_4));
    }
#line 1247 "version_hash_table.c"
    return mercury__version_hash_table__succeeded;
#line 1249 "version_hash_table.c"
  }
#line 1251 "version_hash_table.c"
}

#line 1254 "version_hash_table.c"
static void MR_CALL 
mercury__version_hash_table____Compare____buckets_2_0_10001(
#line 1257 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 1259 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 1261 "version_hash_table.c"
  MR_Box * mercury__version_hash_table__wrapper_arg_3,
#line 1263 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4,
#line 1265 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_5)
#line 1267 "version_hash_table.c"
{
#line 1269 "version_hash_table.c"
  {
#line 1271 "version_hash_table.c"
    MR_Word mercury__version_hash_table__conv0_HeadVar__1_1;

#line 1274 "version_hash_table.c"
    {
#line 1276 "version_hash_table.c"
      mercury__version_hash_table____Compare____buckets_2_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), &mercury__version_hash_table__conv0_HeadVar__1_1, ((MR_Box) mercury__version_hash_table__wrapper_arg_4), ((MR_Box) mercury__version_hash_table__wrapper_arg_5));
    }
#line 1279 "version_hash_table.c"
    *mercury__version_hash_table__wrapper_arg_3 = ((MR_Box) (mercury__version_hash_table__conv0_HeadVar__1_1));
#line 1281 "version_hash_table.c"
  }
#line 1283 "version_hash_table.c"
}

#line 1286 "version_hash_table.c"
static MR_bool MR_CALL 
mercury__version_hash_table____Unify____hash_pred_1_0_10001(
#line 1289 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 1291 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 1293 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_3)
#line 1295 "version_hash_table.c"
{
#line 1297 "version_hash_table.c"
  {
#line 1299 "version_hash_table.c"
    MR_bool mercury__version_hash_table__succeeded;

#line 1302 "version_hash_table.c"
    {
#line 1304 "version_hash_table.c"
      mercury__version_hash_table__succeeded = mercury__version_hash_table____Unify____hash_pred_1_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), ((MR_Word) mercury__version_hash_table__wrapper_arg_3));
    }
#line 1307 "version_hash_table.c"
    return mercury__version_hash_table__succeeded;
#line 1309 "version_hash_table.c"
  }
#line 1311 "version_hash_table.c"
}

#line 1314 "version_hash_table.c"
static void MR_CALL 
mercury__version_hash_table____Compare____hash_pred_1_0_10001(
#line 1317 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 1319 "version_hash_table.c"
  MR_Box * mercury__version_hash_table__wrapper_arg_2,
#line 1321 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_3,
#line 1323 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4)
#line 1325 "version_hash_table.c"
{
#line 1327 "version_hash_table.c"
  {
#line 1329 "version_hash_table.c"
    MR_Word mercury__version_hash_table__conv0_HeadVar__1_1;

#line 1332 "version_hash_table.c"
    {
#line 1334 "version_hash_table.c"
      mercury__version_hash_table____Compare____hash_pred_1_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), &mercury__version_hash_table__conv0_HeadVar__1_1, ((MR_Word) mercury__version_hash_table__wrapper_arg_3), ((MR_Word) mercury__version_hash_table__wrapper_arg_4));
    }
#line 1337 "version_hash_table.c"
    *mercury__version_hash_table__wrapper_arg_2 = ((MR_Box) (mercury__version_hash_table__conv0_HeadVar__1_1));
#line 1339 "version_hash_table.c"
  }
#line 1341 "version_hash_table.c"
}

#line 1344 "version_hash_table.c"
static MR_bool MR_CALL 
mercury__version_hash_table____Unify____hash_table_alist_2_0_10001(
#line 1347 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 1349 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 1351 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_3,
#line 1353 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4)
#line 1355 "version_hash_table.c"
{
#line 1357 "version_hash_table.c"
  {
#line 1359 "version_hash_table.c"
    MR_bool mercury__version_hash_table__succeeded;

#line 1362 "version_hash_table.c"
    {
#line 1364 "version_hash_table.c"
      mercury__version_hash_table__succeeded = mercury__version_hash_table____Unify____hash_table_alist_2_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), ((MR_Word) mercury__version_hash_table__wrapper_arg_3), ((MR_Word) mercury__version_hash_table__wrapper_arg_4));
    }
#line 1367 "version_hash_table.c"
    return mercury__version_hash_table__succeeded;
#line 1369 "version_hash_table.c"
  }
#line 1371 "version_hash_table.c"
}

#line 1374 "version_hash_table.c"
static void MR_CALL 
mercury__version_hash_table____Compare____hash_table_alist_2_0_10001(
#line 1377 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 1379 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 1381 "version_hash_table.c"
  MR_Box * mercury__version_hash_table__wrapper_arg_3,
#line 1383 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4,
#line 1385 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_5)
#line 1387 "version_hash_table.c"
{
#line 1389 "version_hash_table.c"
  {
#line 1391 "version_hash_table.c"
    MR_Word mercury__version_hash_table__conv0_HeadVar__1_1;

#line 1394 "version_hash_table.c"
    {
#line 1396 "version_hash_table.c"
      mercury__version_hash_table____Compare____hash_table_alist_2_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), &mercury__version_hash_table__conv0_HeadVar__1_1, ((MR_Word) mercury__version_hash_table__wrapper_arg_4), ((MR_Word) mercury__version_hash_table__wrapper_arg_5));
    }
#line 1399 "version_hash_table.c"
    *mercury__version_hash_table__wrapper_arg_3 = ((MR_Box) (mercury__version_hash_table__conv0_HeadVar__1_1));
#line 1401 "version_hash_table.c"
  }
#line 1403 "version_hash_table.c"
}

#line 1406 "version_hash_table.c"
static MR_bool MR_CALL 
mercury__version_hash_table____Unify____version_hash_table_2_0_10001(
#line 1409 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 1411 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 1413 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_3,
#line 1415 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4)
#line 1417 "version_hash_table.c"
{
#line 1419 "version_hash_table.c"
  {
#line 1421 "version_hash_table.c"
    MR_bool mercury__version_hash_table__succeeded;

#line 1424 "version_hash_table.c"
    {
#line 1426 "version_hash_table.c"
      mercury__version_hash_table__succeeded = mercury__version_hash_table____Unify____version_hash_table_2_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), ((MR_Word) mercury__version_hash_table__wrapper_arg_3), ((MR_Word) mercury__version_hash_table__wrapper_arg_4));
    }
#line 1429 "version_hash_table.c"
    return mercury__version_hash_table__succeeded;
#line 1431 "version_hash_table.c"
  }
#line 1433 "version_hash_table.c"
}

#line 1436 "version_hash_table.c"
static void MR_CALL 
mercury__version_hash_table____Compare____version_hash_table_2_0_10001(
#line 1439 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 1441 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 1443 "version_hash_table.c"
  MR_Box * mercury__version_hash_table__wrapper_arg_3,
#line 1445 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4,
#line 1447 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_5)
#line 1449 "version_hash_table.c"
{
#line 1451 "version_hash_table.c"
  {
#line 1453 "version_hash_table.c"
    MR_Word mercury__version_hash_table__conv0_HeadVar__1_1;

#line 1456 "version_hash_table.c"
    {
#line 1458 "version_hash_table.c"
      mercury__version_hash_table____Compare____version_hash_table_2_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), &mercury__version_hash_table__conv0_HeadVar__1_1, ((MR_Word) mercury__version_hash_table__wrapper_arg_4), ((MR_Word) mercury__version_hash_table__wrapper_arg_5));
    }
#line 1461 "version_hash_table.c"
    *mercury__version_hash_table__wrapper_arg_3 = ((MR_Box) (mercury__version_hash_table__conv0_HeadVar__1_1));
#line 1463 "version_hash_table.c"
  }
#line 1465 "version_hash_table.c"
}

#line 820 "version_hash_table.m"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_112_95_95_104_111_50_57_95_95_91_54_93_95_48_4_p_0(
#line 820 "version_hash_table.m"
  MR_Word mercury__version_hash_table__V_21_21,
#line 820 "version_hash_table.m"
  MR_Word mercury__version_hash_table__V_22_22,
#line 820 "version_hash_table.m"
  MR_Word mercury__version_hash_table__V_23_23,
#line 820 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
#line 820 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
#line 820 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6)
#line 820 "version_hash_table.m"
{
#line 827 "version_hash_table.m"
  while (MR_TRUE)
#line 827 "version_hash_table.m"
    {
#line 827 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 827 "version_hash_table.m"
      {
#line 827 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 827 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 826 "version_hash_table.m"
          mercury__version_hash_table__succeeded = MR_TRUE;
#line 827 "version_hash_table.m"
        else
#line 827 "version_hash_table.m"
        if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 831 "version_hash_table.m"
          {
#line 831 "version_hash_table.m"
            MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 831 "version_hash_table.m"
            MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 831 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 831 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_27_27;

#line 857 "version_hash_table.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 428 "version_hash_table.m"
            {
#line 428 "version_hash_table.m"
              mercury__version_hash_table__succeeded = mercury__version_hash_table__search_2_f_0(mercury__version_hash_table__V_21_21, mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__K_16, &mercury__version_hash_table__V_27_27);
            }
#line 831 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 831 "version_hash_table.m"
              {
#line 858 "version_hash_table.m"
                {
#line 858 "version_hash_table.m"
                  mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_17, mercury__version_hash_table__V_27_27);
                }
#line 831 "version_hash_table.m"
                if (mercury__version_hash_table__succeeded)
#line 833 "version_hash_table.m"
                  {
#line 833 "version_hash_table.m"
                    /* direct tailcall eliminated */
#line 833 "version_hash_table.m"
                    {
#line 833 "version_hash_table.m"
                      MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;

#line 833 "version_hash_table.m"
                      mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 833 "version_hash_table.m"
                    }
#line 833 "version_hash_table.m"
                    continue;
#line 833 "version_hash_table.m"
                  }
#line 831 "version_hash_table.m"
              }
#line 831 "version_hash_table.m"
          }
#line 827 "version_hash_table.m"
        else
#line 828 "version_hash_table.m"
          {
#line 828 "version_hash_table.m"
            MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 828 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 828 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_33_33;

#line 857 "version_hash_table.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 428 "version_hash_table.m"
            {
#line 428 "version_hash_table.m"
              mercury__version_hash_table__succeeded = mercury__version_hash_table__search_2_f_0(mercury__version_hash_table__V_21_21, mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__K_8, &mercury__version_hash_table__V_33_33);
            }
#line 828 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 858 "version_hash_table.m"
              {
#line 858 "version_hash_table.m"
                return mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_9, mercury__version_hash_table__V_33_33);
              }
#line 828 "version_hash_table.m"
          }
#line 827 "version_hash_table.m"
        return mercury__version_hash_table__succeeded;
#line 827 "version_hash_table.m"
      }
#line 827 "version_hash_table.m"
      break;
#line 827 "version_hash_table.m"
    }
#line 820 "version_hash_table.m"
}

#line 81 "version_array.opt"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_53_44_32_49_48_93_95_48_6_p_in__version_array_0(
#line 81 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 81 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 81 "version_array.opt"
  MR_Word mercury__version_hash_table__V_26_26,
#line 81 "version_array.opt"
  MR_Word mercury__version_hash_table__V_27_27,
#line 81 "version_array.opt"
  MR_Word mercury__version_hash_table__V_28_28,
#line 81 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 81 "version_array.opt"
  MR_Box mercury__version_hash_table__VA_8_8,
#line 81 "version_array.opt"
  MR_Integer mercury__version_hash_table__Lo_9_9,
#line 81 "version_array.opt"
  MR_Integer mercury__version_hash_table__Hi_10_10)
#line 81 "version_array.opt"
{
#line 238 "version_array.opt"
  while (MR_TRUE)
#line 238 "version_array.opt"
    {
#line 238 "version_array.opt"
      /* tailcall optimized into a loop */
#line 238 "version_array.opt"
      {
#line 238 "version_array.opt"
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__Lo_9_9 < mercury__version_hash_table__Hi_10_10);

#line 238 "version_array.opt"
        if (mercury__version_hash_table__succeeded)
#line 233 "version_array.opt"
          {
#line 233 "version_array.opt"
            MR_Word mercury__version_hash_table__V_14_13;
#line 233 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_16_15;
#line 233 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_18_16;
#line 233 "version_array.opt"
            MR_Box mercury__version_hash_table__conv0_V_14_13;

#line 233 "version_array.opt"
            {
#line 233 "version_array.opt"
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__VA_8_8, mercury__version_hash_table__Lo_9_9);
            }
#line 233 "version_array.opt"
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
#line 234 "version_array.opt"
            {
#line 234 "version_array.opt"
              mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_112_95_95_104_111_50_57_95_95_91_54_93_95_48_4_p_0(mercury__version_hash_table__V_26_26, mercury__version_hash_table__V_27_27, mercury__version_hash_table__V_28_28, mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_14_13);
            }
#line 233 "version_array.opt"
            if (mercury__version_hash_table__succeeded)
#line 233 "version_array.opt"
              {
#line 236 "version_array.opt"
                mercury__version_hash_table__V_18_16 = (MR_Integer) 1;
#line 235 "version_array.opt"
                mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__Lo_9_9 + mercury__version_hash_table__V_18_16);
#line 237 "version_array.opt"
                /* direct tailcall eliminated */
#line 237 "version_array.opt"
                {
#line 237 "version_array.opt"
                  MR_Integer mercury__version_hash_table__Lo_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;

#line 237 "version_array.opt"
                  mercury__version_hash_table__Lo_9_9 = mercury__version_hash_table__Lo_9__tmp_copy_9;
#line 237 "version_array.opt"
                }
#line 237 "version_array.opt"
                continue;
#line 233 "version_array.opt"
              }
#line 233 "version_array.opt"
          }
#line 238 "version_array.opt"
        else
#line 239 "version_array.opt"
          mercury__version_hash_table__succeeded = MR_TRUE;
#line 238 "version_array.opt"
        return mercury__version_hash_table__succeeded;
#line 238 "version_array.opt"
      }
#line 238 "version_array.opt"
      break;
#line 238 "version_array.opt"
    }
#line 81 "version_array.opt"
}

#line 83 "version_array.opt"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
#line 83 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 83 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 83 "version_array.opt"
  MR_Word mercury__version_hash_table__V_24_24,
#line 83 "version_array.opt"
  MR_Word mercury__version_hash_table__V_25_25,
#line 83 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 83 "version_array.opt"
  MR_Box mercury__version_hash_table__VA_8_8,
#line 83 "version_array.opt"
  MR_Integer mercury__version_hash_table__Lo_9_9,
#line 83 "version_array.opt"
  MR_Integer mercury__version_hash_table__Hi_10_10,
#line 83 "version_array.opt"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 83 "version_array.opt"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Acc_13_12)
#line 83 "version_array.opt"
{
#line 238 "version_array.opt"
  while (MR_TRUE)
#line 238 "version_array.opt"
    {
#line 238 "version_array.opt"
      /* tailcall optimized into a loop */
#line 238 "version_array.opt"
      {
#line 238 "version_array.opt"
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__Lo_9_9 < mercury__version_hash_table__Hi_10_10);

#line 238 "version_array.opt"
        if (mercury__version_hash_table__succeeded)
#line 233 "version_array.opt"
          {
#line 233 "version_array.opt"
            MR_Word mercury__version_hash_table__V_14_13;
#line 233 "version_array.opt"
            MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 233 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_16_15;
#line 233 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_18_16;
#line 233 "version_array.opt"
            MR_Box mercury__version_hash_table__conv0_V_14_13;

#line 233 "version_array.opt"
            {
#line 233 "version_array.opt"
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__VA_8_8, mercury__version_hash_table__Lo_9_9);
            }
#line 233 "version_array.opt"
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
#line 234 "version_array.opt"
            {
#line 234 "version_array.opt"
              mercury__version_hash_table__succeeded = mercury__version_hash_table__fold_p_4_p_5(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_24_24, mercury__version_hash_table__V_25_25, mercury__version_hash_table__V_14_13, mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 233 "version_array.opt"
            if (mercury__version_hash_table__succeeded)
#line 233 "version_array.opt"
              {
#line 236 "version_array.opt"
                mercury__version_hash_table__V_18_16 = (MR_Integer) 1;
#line 235 "version_array.opt"
                mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__Lo_9_9 + mercury__version_hash_table__V_18_16);
#line 237 "version_array.opt"
                /* direct tailcall eliminated */
#line 237 "version_array.opt"
                {
#line 237 "version_array.opt"
                  MR_Integer mercury__version_hash_table__Lo_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
#line 237 "version_array.opt"
                  MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 237 "version_array.opt"
                  mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 237 "version_array.opt"
                  mercury__version_hash_table__Lo_9_9 = mercury__version_hash_table__Lo_9__tmp_copy_9;
#line 237 "version_array.opt"
                }
#line 237 "version_array.opt"
                continue;
#line 233 "version_array.opt"
              }
#line 233 "version_array.opt"
          }
#line 238 "version_array.opt"
        else
#line 239 "version_array.opt"
          {
#line 239 "version_array.opt"
            *mercury__version_hash_table__STATE_VARIABLE_Acc_13_12 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 239 "version_array.opt"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 239 "version_array.opt"
          }
#line 238 "version_array.opt"
        return mercury__version_hash_table__succeeded;
#line 238 "version_array.opt"
      }
#line 238 "version_array.opt"
      break;
#line 238 "version_array.opt"
    }
#line 83 "version_array.opt"
}

#line 82 "version_array.opt"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
#line 82 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 82 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 82 "version_array.opt"
  MR_Word mercury__version_hash_table__V_24_24,
#line 82 "version_array.opt"
  MR_Word mercury__version_hash_table__V_25_25,
#line 82 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 82 "version_array.opt"
  MR_Box mercury__version_hash_table__VA_8_8,
#line 82 "version_array.opt"
  MR_Integer mercury__version_hash_table__Lo_9_9,
#line 82 "version_array.opt"
  MR_Integer mercury__version_hash_table__Hi_10_10,
#line 82 "version_array.opt"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 82 "version_array.opt"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Acc_13_12)
#line 82 "version_array.opt"
{
#line 238 "version_array.opt"
  while (MR_TRUE)
#line 238 "version_array.opt"
    {
#line 238 "version_array.opt"
      /* tailcall optimized into a loop */
#line 238 "version_array.opt"
      {
#line 238 "version_array.opt"
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__Lo_9_9 < mercury__version_hash_table__Hi_10_10);

#line 238 "version_array.opt"
        if (mercury__version_hash_table__succeeded)
#line 233 "version_array.opt"
          {
#line 233 "version_array.opt"
            MR_Word mercury__version_hash_table__V_14_13;
#line 233 "version_array.opt"
            MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 233 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_16_15;
#line 233 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_18_16;
#line 233 "version_array.opt"
            MR_Box mercury__version_hash_table__conv0_V_14_13;

#line 233 "version_array.opt"
            {
#line 233 "version_array.opt"
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__VA_8_8, mercury__version_hash_table__Lo_9_9);
            }
#line 233 "version_array.opt"
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
#line 234 "version_array.opt"
            {
#line 234 "version_array.opt"
              mercury__version_hash_table__succeeded = mercury__version_hash_table__fold_p_4_p_4(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_24_24, mercury__version_hash_table__V_25_25, mercury__version_hash_table__V_14_13, mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 233 "version_array.opt"
            if (mercury__version_hash_table__succeeded)
#line 233 "version_array.opt"
              {
#line 236 "version_array.opt"
                mercury__version_hash_table__V_18_16 = (MR_Integer) 1;
#line 235 "version_array.opt"
                mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__Lo_9_9 + mercury__version_hash_table__V_18_16);
#line 237 "version_array.opt"
                /* direct tailcall eliminated */
#line 237 "version_array.opt"
                {
#line 237 "version_array.opt"
                  MR_Integer mercury__version_hash_table__Lo_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
#line 237 "version_array.opt"
                  MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 237 "version_array.opt"
                  mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 237 "version_array.opt"
                  mercury__version_hash_table__Lo_9_9 = mercury__version_hash_table__Lo_9__tmp_copy_9;
#line 237 "version_array.opt"
                }
#line 237 "version_array.opt"
                continue;
#line 233 "version_array.opt"
              }
#line 233 "version_array.opt"
          }
#line 238 "version_array.opt"
        else
#line 239 "version_array.opt"
          {
#line 239 "version_array.opt"
            *mercury__version_hash_table__STATE_VARIABLE_Acc_13_12 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 239 "version_array.opt"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 239 "version_array.opt"
          }
#line 238 "version_array.opt"
        return mercury__version_hash_table__succeeded;
#line 238 "version_array.opt"
      }
#line 238 "version_array.opt"
      break;
#line 238 "version_array.opt"
    }
#line 82 "version_array.opt"
}

#line 81 "version_array.opt"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
#line 81 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 81 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 81 "version_array.opt"
  MR_Word mercury__version_hash_table__V_24_24,
#line 81 "version_array.opt"
  MR_Word mercury__version_hash_table__V_25_25,
#line 81 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 81 "version_array.opt"
  MR_Box mercury__version_hash_table__VA_8_8,
#line 81 "version_array.opt"
  MR_Integer mercury__version_hash_table__Lo_9_9,
#line 81 "version_array.opt"
  MR_Integer mercury__version_hash_table__Hi_10_10,
#line 81 "version_array.opt"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 81 "version_array.opt"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Acc_13_12)
#line 81 "version_array.opt"
{
#line 238 "version_array.opt"
  while (MR_TRUE)
#line 238 "version_array.opt"
    {
#line 238 "version_array.opt"
      /* tailcall optimized into a loop */
#line 238 "version_array.opt"
      {
#line 238 "version_array.opt"
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__Lo_9_9 < mercury__version_hash_table__Hi_10_10);

#line 238 "version_array.opt"
        if (mercury__version_hash_table__succeeded)
#line 233 "version_array.opt"
          {
#line 233 "version_array.opt"
            MR_Word mercury__version_hash_table__V_14_13;
#line 233 "version_array.opt"
            MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 233 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_16_15;
#line 233 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_18_16;
#line 233 "version_array.opt"
            MR_Box mercury__version_hash_table__conv0_V_14_13;

#line 233 "version_array.opt"
            {
#line 233 "version_array.opt"
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__VA_8_8, mercury__version_hash_table__Lo_9_9);
            }
#line 233 "version_array.opt"
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
#line 234 "version_array.opt"
            {
#line 234 "version_array.opt"
              mercury__version_hash_table__succeeded = mercury__version_hash_table__fold_p_4_p_3(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_24_24, mercury__version_hash_table__V_25_25, mercury__version_hash_table__V_14_13, mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 233 "version_array.opt"
            if (mercury__version_hash_table__succeeded)
#line 233 "version_array.opt"
              {
#line 236 "version_array.opt"
                mercury__version_hash_table__V_18_16 = (MR_Integer) 1;
#line 235 "version_array.opt"
                mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__Lo_9_9 + mercury__version_hash_table__V_18_16);
#line 237 "version_array.opt"
                /* direct tailcall eliminated */
#line 237 "version_array.opt"
                {
#line 237 "version_array.opt"
                  MR_Integer mercury__version_hash_table__Lo_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
#line 237 "version_array.opt"
                  MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 237 "version_array.opt"
                  mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 237 "version_array.opt"
                  mercury__version_hash_table__Lo_9_9 = mercury__version_hash_table__Lo_9__tmp_copy_9;
#line 237 "version_array.opt"
                }
#line 237 "version_array.opt"
                continue;
#line 233 "version_array.opt"
              }
#line 233 "version_array.opt"
          }
#line 238 "version_array.opt"
        else
#line 239 "version_array.opt"
          {
#line 239 "version_array.opt"
            *mercury__version_hash_table__STATE_VARIABLE_Acc_13_12 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 239 "version_array.opt"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 239 "version_array.opt"
          }
#line 238 "version_array.opt"
        return mercury__version_hash_table__succeeded;
#line 238 "version_array.opt"
      }
#line 238 "version_array.opt"
      break;
#line 238 "version_array.opt"
    }
#line 81 "version_array.opt"
}

#line 80 "version_array.opt"
static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
#line 80 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 80 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 80 "version_array.opt"
  MR_Word mercury__version_hash_table__V_24_24,
#line 80 "version_array.opt"
  MR_Word mercury__version_hash_table__V_25_25,
#line 80 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 80 "version_array.opt"
  MR_Box mercury__version_hash_table__VA_8_8,
#line 80 "version_array.opt"
  MR_Integer mercury__version_hash_table__Lo_9_9,
#line 80 "version_array.opt"
  MR_Integer mercury__version_hash_table__Hi_10_10,
#line 80 "version_array.opt"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 80 "version_array.opt"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Acc_13_12)
#line 80 "version_array.opt"
{
#line 238 "version_array.opt"
  while (MR_TRUE)
#line 238 "version_array.opt"
    {
#line 238 "version_array.opt"
      /* tailcall optimized into a loop */
#line 238 "version_array.opt"
      {
#line 238 "version_array.opt"
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__Lo_9_9 < mercury__version_hash_table__Hi_10_10);

#line 238 "version_array.opt"
        if (mercury__version_hash_table__succeeded)
#line 233 "version_array.opt"
          {
#line 233 "version_array.opt"
            MR_Word mercury__version_hash_table__V_14_13;
#line 233 "version_array.opt"
            MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 233 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_16_15;
#line 233 "version_array.opt"
            MR_Box mercury__version_hash_table__conv0_V_14_13;

#line 233 "version_array.opt"
            {
#line 233 "version_array.opt"
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__VA_8_8, mercury__version_hash_table__Lo_9_9);
            }
#line 233 "version_array.opt"
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
#line 234 "version_array.opt"
            {
#line 234 "version_array.opt"
              mercury__version_hash_table__fold_p_4_p_2(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_24_24, mercury__version_hash_table__V_25_25, mercury__version_hash_table__V_14_13, mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 235 "version_array.opt"
            mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__Lo_9_9 + (MR_Integer) 1);
#line 237 "version_array.opt"
            /* direct tailcall eliminated */
#line 237 "version_array.opt"
            {
#line 237 "version_array.opt"
              MR_Integer mercury__version_hash_table__Lo_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
#line 237 "version_array.opt"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 237 "version_array.opt"
              mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 237 "version_array.opt"
              mercury__version_hash_table__Lo_9_9 = mercury__version_hash_table__Lo_9__tmp_copy_9;
#line 237 "version_array.opt"
            }
#line 237 "version_array.opt"
            continue;
#line 233 "version_array.opt"
          }
#line 238 "version_array.opt"
        else
#line 239 "version_array.opt"
          *mercury__version_hash_table__STATE_VARIABLE_Acc_13_12 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 238 "version_array.opt"
      }
#line 238 "version_array.opt"
      break;
#line 238 "version_array.opt"
    }
#line 80 "version_array.opt"
}

#line 79 "version_array.opt"
static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
#line 79 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 79 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 79 "version_array.opt"
  MR_Word mercury__version_hash_table__V_24_24,
#line 79 "version_array.opt"
  MR_Word mercury__version_hash_table__V_25_25,
#line 79 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 79 "version_array.opt"
  MR_Box mercury__version_hash_table__VA_8_8,
#line 79 "version_array.opt"
  MR_Integer mercury__version_hash_table__Lo_9_9,
#line 79 "version_array.opt"
  MR_Integer mercury__version_hash_table__Hi_10_10,
#line 79 "version_array.opt"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 79 "version_array.opt"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Acc_13_12)
#line 79 "version_array.opt"
{
#line 238 "version_array.opt"
  while (MR_TRUE)
#line 238 "version_array.opt"
    {
#line 238 "version_array.opt"
      /* tailcall optimized into a loop */
#line 238 "version_array.opt"
      {
#line 238 "version_array.opt"
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__Lo_9_9 < mercury__version_hash_table__Hi_10_10);

#line 238 "version_array.opt"
        if (mercury__version_hash_table__succeeded)
#line 233 "version_array.opt"
          {
#line 233 "version_array.opt"
            MR_Word mercury__version_hash_table__V_14_13;
#line 233 "version_array.opt"
            MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 233 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_16_15;
#line 233 "version_array.opt"
            MR_Box mercury__version_hash_table__conv0_V_14_13;

#line 233 "version_array.opt"
            {
#line 233 "version_array.opt"
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__VA_8_8, mercury__version_hash_table__Lo_9_9);
            }
#line 233 "version_array.opt"
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
#line 234 "version_array.opt"
            {
#line 234 "version_array.opt"
              mercury__version_hash_table__fold_p_4_p_1(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_24_24, mercury__version_hash_table__V_25_25, mercury__version_hash_table__V_14_13, mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 235 "version_array.opt"
            mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__Lo_9_9 + (MR_Integer) 1);
#line 237 "version_array.opt"
            /* direct tailcall eliminated */
#line 237 "version_array.opt"
            {
#line 237 "version_array.opt"
              MR_Integer mercury__version_hash_table__Lo_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
#line 237 "version_array.opt"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 237 "version_array.opt"
              mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 237 "version_array.opt"
              mercury__version_hash_table__Lo_9_9 = mercury__version_hash_table__Lo_9__tmp_copy_9;
#line 237 "version_array.opt"
            }
#line 237 "version_array.opt"
            continue;
#line 233 "version_array.opt"
          }
#line 238 "version_array.opt"
        else
#line 239 "version_array.opt"
          *mercury__version_hash_table__STATE_VARIABLE_Acc_13_12 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 238 "version_array.opt"
      }
#line 238 "version_array.opt"
      break;
#line 238 "version_array.opt"
    }
#line 79 "version_array.opt"
}

#line 78 "version_array.opt"
static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
#line 78 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 78 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 78 "version_array.opt"
  MR_Word mercury__version_hash_table__V_24_24,
#line 78 "version_array.opt"
  MR_Word mercury__version_hash_table__V_25_25,
#line 78 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 78 "version_array.opt"
  MR_Box mercury__version_hash_table__VA_8_8,
#line 78 "version_array.opt"
  MR_Integer mercury__version_hash_table__Lo_9_9,
#line 78 "version_array.opt"
  MR_Integer mercury__version_hash_table__Hi_10_10,
#line 78 "version_array.opt"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 78 "version_array.opt"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Acc_13_12)
#line 78 "version_array.opt"
{
#line 238 "version_array.opt"
  while (MR_TRUE)
#line 238 "version_array.opt"
    {
#line 238 "version_array.opt"
      /* tailcall optimized into a loop */
#line 238 "version_array.opt"
      {
#line 238 "version_array.opt"
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__Lo_9_9 < mercury__version_hash_table__Hi_10_10);

#line 238 "version_array.opt"
        if (mercury__version_hash_table__succeeded)
#line 233 "version_array.opt"
          {
#line 233 "version_array.opt"
            MR_Word mercury__version_hash_table__V_14_13;
#line 233 "version_array.opt"
            MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 233 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_16_15;
#line 233 "version_array.opt"
            MR_Box mercury__version_hash_table__conv0_V_14_13;

#line 233 "version_array.opt"
            {
#line 233 "version_array.opt"
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__VA_8_8, mercury__version_hash_table__Lo_9_9);
            }
#line 233 "version_array.opt"
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
#line 234 "version_array.opt"
            {
#line 234 "version_array.opt"
              mercury__version_hash_table__fold_p_4_p_0(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_24_24, mercury__version_hash_table__V_25_25, mercury__version_hash_table__V_14_13, mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 235 "version_array.opt"
            mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__Lo_9_9 + (MR_Integer) 1);
#line 237 "version_array.opt"
            /* direct tailcall eliminated */
#line 237 "version_array.opt"
            {
#line 237 "version_array.opt"
              MR_Integer mercury__version_hash_table__Lo_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
#line 237 "version_array.opt"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 237 "version_array.opt"
              mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 237 "version_array.opt"
              mercury__version_hash_table__Lo_9_9 = mercury__version_hash_table__Lo_9__tmp_copy_9;
#line 237 "version_array.opt"
            }
#line 237 "version_array.opt"
            continue;
#line 233 "version_array.opt"
          }
#line 238 "version_array.opt"
        else
#line 239 "version_array.opt"
          *mercury__version_hash_table__STATE_VARIABLE_Acc_13_12 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 238 "version_array.opt"
      }
#line 238 "version_array.opt"
      break;
#line 238 "version_array.opt"
    }
#line 78 "version_array.opt"
}

#line 78 "version_array.opt"
static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
#line 78 "version_array.opt"
  MR_Word mercury__version_hash_table__V_22_22,
#line 78 "version_array.opt"
  MR_Word mercury__version_hash_table__V_23_23,
#line 78 "version_array.opt"
  MR_Word mercury__version_hash_table__V_24_24,
#line 78 "version_array.opt"
  MR_Word mercury__version_hash_table__V_25_25,
#line 78 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 78 "version_array.opt"
  MR_Box mercury__version_hash_table__VA_8_8,
#line 78 "version_array.opt"
  MR_Integer mercury__version_hash_table__Lo_9_9,
#line 78 "version_array.opt"
  MR_Integer mercury__version_hash_table__Hi_10_10,
#line 78 "version_array.opt"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 78 "version_array.opt"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Acc_13_12)
#line 78 "version_array.opt"
{
#line 238 "version_array.opt"
  while (MR_TRUE)
#line 238 "version_array.opt"
    {
#line 238 "version_array.opt"
      /* tailcall optimized into a loop */
#line 238 "version_array.opt"
      {
#line 238 "version_array.opt"
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__Lo_9_9 < mercury__version_hash_table__Hi_10_10);

#line 238 "version_array.opt"
        if (mercury__version_hash_table__succeeded)
#line 233 "version_array.opt"
          {
#line 233 "version_array.opt"
            MR_Word mercury__version_hash_table__V_14_13;
#line 233 "version_array.opt"
            MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 233 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_16_15;
#line 233 "version_array.opt"
            MR_Box mercury__version_hash_table__conv0_V_14_13;

#line 233 "version_array.opt"
            {
#line 233 "version_array.opt"
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__VA_8_8, mercury__version_hash_table__Lo_9_9);
            }
#line 233 "version_array.opt"
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
#line 234 "version_array.opt"
            {
#line 234 "version_array.opt"
              mercury__version_hash_table__fold_f_4_p_0(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_24_24, mercury__version_hash_table__V_25_25, mercury__version_hash_table__V_14_13, mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 235 "version_array.opt"
            mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__Lo_9_9 + (MR_Integer) 1);
#line 237 "version_array.opt"
            /* direct tailcall eliminated */
#line 237 "version_array.opt"
            {
#line 237 "version_array.opt"
              MR_Integer mercury__version_hash_table__Lo_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
#line 237 "version_array.opt"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 237 "version_array.opt"
              mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 237 "version_array.opt"
              mercury__version_hash_table__Lo_9_9 = mercury__version_hash_table__Lo_9__tmp_copy_9;
#line 237 "version_array.opt"
            }
#line 237 "version_array.opt"
            continue;
#line 233 "version_array.opt"
          }
#line 238 "version_array.opt"
        else
#line 239 "version_array.opt"
          *mercury__version_hash_table__STATE_VARIABLE_Acc_13_12 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 238 "version_array.opt"
      }
#line 238 "version_array.opt"
      break;
#line 238 "version_array.opt"
    }
#line 78 "version_array.opt"
}

#line 78 "version_array.opt"
static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_6_p_in__version_array_0(
#line 78 "version_array.opt"
  MR_Word mercury__version_hash_table__V_27_27,
#line 78 "version_array.opt"
  MR_Word mercury__version_hash_table__V_28_28,
#line 78 "version_array.opt"
  MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_17,
#line 78 "version_array.opt"
  MR_Box mercury__version_hash_table__VA_8_8,
#line 78 "version_array.opt"
  MR_Integer mercury__version_hash_table__Lo_9_9,
#line 78 "version_array.opt"
  MR_Integer mercury__version_hash_table__Hi_10_10,
#line 78 "version_array.opt"
  MR_Word mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11,
#line 78 "version_array.opt"
  MR_Word * mercury__version_hash_table__STATE_VARIABLE_Acc_13_12)
#line 78 "version_array.opt"
{
#line 238 "version_array.opt"
  while (MR_TRUE)
#line 238 "version_array.opt"
    {
#line 238 "version_array.opt"
      /* tailcall optimized into a loop */
#line 238 "version_array.opt"
      {
#line 238 "version_array.opt"
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__Lo_9_9 < mercury__version_hash_table__Hi_10_10);

#line 238 "version_array.opt"
        if (mercury__version_hash_table__succeeded)
#line 233 "version_array.opt"
          {
#line 233 "version_array.opt"
            MR_Word mercury__version_hash_table__V_14_13;
#line 233 "version_array.opt"
            MR_Word mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 233 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_16_15;
#line 233 "version_array.opt"
            MR_Box mercury__version_hash_table__conv0_V_14_13;

#line 233 "version_array.opt"
            {
#line 233 "version_array.opt"
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__VA_8_8, mercury__version_hash_table__Lo_9_9);
            }
#line 233 "version_array.opt"
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
#line 234 "version_array.opt"
            {
#line 234 "version_array.opt"
              mercury__version_hash_table__to_assoc_list_2_3_p_0(mercury__version_hash_table__V_27_27, mercury__version_hash_table__V_28_28, mercury__version_hash_table__V_14_13, mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 235 "version_array.opt"
            mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__Lo_9_9 + (MR_Integer) 1);
#line 237 "version_array.opt"
            /* direct tailcall eliminated */
#line 237 "version_array.opt"
            {
#line 237 "version_array.opt"
              MR_Integer mercury__version_hash_table__Lo_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
#line 237 "version_array.opt"
              MR_Word mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 237 "version_array.opt"
              mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 237 "version_array.opt"
              mercury__version_hash_table__Lo_9_9 = mercury__version_hash_table__Lo_9__tmp_copy_9;
#line 237 "version_array.opt"
            }
#line 237 "version_array.opt"
            continue;
#line 233 "version_array.opt"
          }
#line 238 "version_array.opt"
        else
#line 239 "version_array.opt"
          *mercury__version_hash_table__STATE_VARIABLE_Acc_13_12 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 238 "version_array.opt"
      }
#line 238 "version_array.opt"
      break;
#line 238 "version_array.opt"
    }
#line 78 "version_array.opt"
}

#line 98 "array.opt"
static MR_Integer MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_53_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
#line 98 "array.opt"
  MR_Word mercury__version_hash_table__V_19_19,
#line 98 "array.opt"
  MR_ArrayPtr mercury__version_hash_table__A_8_8,
#line 98 "array.opt"
  MR_Integer mercury__version_hash_table__X_9_9,
#line 98 "array.opt"
  MR_Integer mercury__version_hash_table__I_10_10,
#line 98 "array.opt"
  MR_Integer mercury__version_hash_table__Max_11_11)
#line 98 "array.opt"
{
#line 671 "array.opt"
  while (MR_TRUE)
#line 671 "array.opt"
    {
#line 671 "array.opt"
      /* tailcall optimized into a loop */
#line 671 "array.opt"
      {
#line 671 "array.opt"
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__Max_11_11 < mercury__version_hash_table__I_10_10);
#line 671 "array.opt"
        MR_Integer mercury__version_hash_table__HeadVar__6_6_12;

#line 671 "array.opt"
        if (mercury__version_hash_table__succeeded)
#line 670 "array.opt"
          mercury__version_hash_table__HeadVar__6_6_12 = mercury__version_hash_table__X_9_9;
#line 671 "array.opt"
        else
#line 672 "array.opt"
          {
#line 672 "array.opt"
            MR_Integer mercury__version_hash_table__V_12_13;
#line 672 "array.opt"
            MR_Integer mercury__version_hash_table__V_14_14;
#line 672 "array.opt"
            MR_Box mercury__version_hash_table__V_13_15;
#line 672 "array.opt"
            MR_Integer mercury__version_hash_table__HX_36;
#line 672 "array.opt"
            MR_Integer mercury__version_hash_table__V_70_70;
#line 672 "array.opt"
            MR_Integer mercury__version_hash_table__V_71_71;
#line 672 "array.opt"
            MR_Integer mercury__version_hash_table__V_72_72;
#line 672 "array.opt"
            MR_Integer mercury__version_hash_table__V_73_73;
#line 285 "array.opt"
            MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_75;

#line 285 "array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_53_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__version_hash_table__A_8_8 , Array);
	Index =  mercury__version_hash_table__I_10_10 ;
		{
#line 285 "array.opt"

    Item = Array->elements[Index];

#line 2571 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_13_15  = (MR_Box) Item;
#line 285 "array.opt"
}
#line 755 "version_hash_table.m"
            {
#line 755 "version_hash_table.m"
              mercury__version_hash_table__generic_hash_2_p_0(mercury__version_hash_table__V_19_19, mercury__version_hash_table__V_13_15, &mercury__version_hash_table__HX_36);
            }
#line 782 "version_hash_table.m"
            mercury__version_hash_table__V_70_70 = (mercury__version_hash_table__X_9_9 << mercury__version_hash_table__HX_36);
#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_53_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 2596 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_73_73  = Bits;
#line 171 "int.opt"
}
#line 783 "version_hash_table.m"
            mercury__version_hash_table__V_72_72 = (mercury__version_hash_table__V_73_73 - mercury__version_hash_table__HX_36);
#line 783 "version_hash_table.m"
            mercury__version_hash_table__V_71_71 = (mercury__version_hash_table__X_9_9 >> mercury__version_hash_table__V_72_72);
#line 782 "version_hash_table.m"
            mercury__version_hash_table__V_12_13 = (mercury__version_hash_table__V_70_70 ^ mercury__version_hash_table__V_71_71);
#line 675 "array.opt"
            mercury__version_hash_table__V_14_14 = (mercury__version_hash_table__I_10_10 + (MR_Integer) 1);
#line 672 "array.opt"
            /* direct tailcall eliminated */
#line 672 "array.opt"
            {
#line 672 "array.opt"
              MR_Integer mercury__version_hash_table__X_9__tmp_copy_9 = mercury__version_hash_table__V_12_13;
#line 672 "array.opt"
              MR_Integer mercury__version_hash_table__I_10__tmp_copy_10 = mercury__version_hash_table__V_14_14;

#line 672 "array.opt"
              mercury__version_hash_table__I_10_10 = mercury__version_hash_table__I_10__tmp_copy_10;
#line 672 "array.opt"
              mercury__version_hash_table__X_9_9 = mercury__version_hash_table__X_9__tmp_copy_9;
#line 672 "array.opt"
            }
#line 672 "array.opt"
            continue;
#line 672 "array.opt"
          }
#line 671 "array.opt"
        return mercury__version_hash_table__HeadVar__6_6_12;
#line 671 "array.opt"
      }
#line 671 "array.opt"
      break;
#line 671 "array.opt"
    }
#line 98 "array.opt"
}

#line 65 "array.int"
static MR_Integer MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
#line 65 "array.int"
  MR_Word mercury__version_hash_table__V_13_13,
#line 65 "array.int"
  MR_ArrayPtr mercury__version_hash_table__A_6_6,
#line 65 "array.int"
  MR_Integer mercury__version_hash_table__X_7_7)
#line 65 "array.int"
{
#line 401 "array.opt"
  {
#line 401 "array.opt"
    MR_bool mercury__version_hash_table__succeeded;
#line 401 "array.opt"
    MR_Integer mercury__version_hash_table__HeadVar__4_4_8;
#line 401 "array.opt"
    MR_Integer mercury__version_hash_table__V_8_9;
#line 401 "array.opt"
    MR_Integer mercury__version_hash_table__V_9_10;
#line 245 "array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_for_T1_18;
#line 253 "array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_for_T1_19;

#line 245 "array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__version_hash_table__A_6_6 , Array);
		{
#line 245 "array.opt"

    /* Array not used */
    Min = 0;

#line 2681 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_8_9  = Min;
#line 245 "array.opt"
}
#line 253 "array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__version_hash_table__A_6_6 , Array);
		{
#line 253 "array.opt"

    Max = Array->size - 1;

#line 2701 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_9_10  = Max;
#line 253 "array.opt"
}
#line 402 "array.opt"
    {
#line 402 "array.opt"
      return mercury__version_hash_table__HeadVar__4_4_8 = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_53_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(mercury__version_hash_table__V_13_13, mercury__version_hash_table__A_6_6, mercury__version_hash_table__X_7_7, mercury__version_hash_table__V_8_9, mercury__version_hash_table__V_9_10);
    }
#line 401 "array.opt"
    return mercury__version_hash_table__HeadVar__4_4_8;
#line 401 "array.opt"
  }
#line 65 "array.int"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__version_hash_table__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 538 "version_hash_table.m"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(
#line 538 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_12,
#line 538 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL0_4,
#line 538 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 538 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__AL_6)
#line 538 "version_hash_table.m"
{
#line 546 "version_hash_table.m"
  {
#line 546 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 546 "version_hash_table.m"
    if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_4)) == (MR_mktag((MR_Integer) 2))))
#line 551 "version_hash_table.m"
      {
#line 551 "version_hash_table.m"
        MR_Box mercury__version_hash_table__K0_8 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_4, (MR_Integer) 0));
#line 551 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V0_9 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_4, (MR_Integer) 1));
#line 551 "version_hash_table.m"
        MR_Word mercury__version_hash_table__T0_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_4, (MR_Integer) 2)));

#line 552 "version_hash_table.m"
        {
#line 552 "version_hash_table.m"
          mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_12, mercury__version_hash_table__K0_8, mercury__version_hash_table__K_5);
        }
#line 554 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 553 "version_hash_table.m"
          {
#line 553 "version_hash_table.m"
            *mercury__version_hash_table__AL_6 = mercury__version_hash_table__T0_10;
#line 553 "version_hash_table.m"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 553 "version_hash_table.m"
          }
#line 554 "version_hash_table.m"
        else
#line 555 "version_hash_table.m"
          {
#line 555 "version_hash_table.m"
            MR_Word mercury__version_hash_table__T_11;

#line 555 "version_hash_table.m"
            {
#line 555 "version_hash_table.m"
              mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(mercury__version_hash_table__TypeInfo_for_K_12, mercury__version_hash_table__T0_10, mercury__version_hash_table__K_5, &mercury__version_hash_table__T_11);
            }
#line 555 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 555 "version_hash_table.m"
              {
#line 556 "version_hash_table.m"
                {
#line 556 "version_hash_table.m"
                  MR_Word base;
#line 556 "version_hash_table.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 556 "version_hash_table.m"
                  *mercury__version_hash_table__AL_6 = base;
#line 556 "version_hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__version_hash_table__K0_8;
#line 556 "version_hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__version_hash_table__V0_9;
#line 556 "version_hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__version_hash_table__T_11));
#line 556 "version_hash_table.m"
                }
#line 556 "version_hash_table.m"
                mercury__version_hash_table__succeeded = MR_TRUE;
#line 555 "version_hash_table.m"
              }
#line 555 "version_hash_table.m"
          }
#line 551 "version_hash_table.m"
      }
#line 546 "version_hash_table.m"
    else
#line 546 "version_hash_table.m"
    if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_4)) == (MR_mktag((MR_Integer) 1))))
#line 547 "version_hash_table.m"
      {
#line 547 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_4, (MR_Integer) 0));
#line 547 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_4, (MR_Integer) 1));

#line 547 "version_hash_table.m"
        {
#line 547 "version_hash_table.m"
          mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_12, mercury__version_hash_table__K_5, mercury__version_hash_table__V_14_14);
        }
#line 547 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 547 "version_hash_table.m"
          {
#line 549 "version_hash_table.m"
            *mercury__version_hash_table__AL_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 549 "version_hash_table.m"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 547 "version_hash_table.m"
          }
#line 547 "version_hash_table.m"
      }
#line 546 "version_hash_table.m"
    else
#line 546 "version_hash_table.m"
      mercury__version_hash_table__succeeded = MR_FALSE;
#line 546 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 546 "version_hash_table.m"
  }
#line 538 "version_hash_table.m"
}

#line 405 "version_hash_table.m"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(
#line 405 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_14,
#line 405 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL0_5,
#line 405 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_6,
#line 405 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_7,
#line 405 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__AL_8)
#line 405 "version_hash_table.m"
{
#line 413 "version_hash_table.m"
  {
#line 413 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 413 "version_hash_table.m"
    if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_5)) == (MR_mktag((MR_Integer) 2))))
#line 417 "version_hash_table.m"
      {
#line 417 "version_hash_table.m"
        MR_Box mercury__version_hash_table__K0_10 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_5, (MR_Integer) 0));
#line 417 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V0_11 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_5, (MR_Integer) 1));
#line 417 "version_hash_table.m"
        MR_Word mercury__version_hash_table__T0_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_5, (MR_Integer) 2)));

#line 418 "version_hash_table.m"
        {
#line 418 "version_hash_table.m"
          mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_14, mercury__version_hash_table__K0_10, mercury__version_hash_table__K_6);
        }
#line 420 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 419 "version_hash_table.m"
          {
#line 419 "version_hash_table.m"
            {
#line 419 "version_hash_table.m"
              MR_Word base;
#line 419 "version_hash_table.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 419 "version_hash_table.m"
              *mercury__version_hash_table__AL_8 = base;
#line 419 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), base, 0) = mercury__version_hash_table__K0_10;
#line 419 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), base, 1) = mercury__version_hash_table__V_7;
#line 419 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__version_hash_table__T0_12));
#line 419 "version_hash_table.m"
            }
#line 419 "version_hash_table.m"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 419 "version_hash_table.m"
          }
#line 420 "version_hash_table.m"
        else
#line 421 "version_hash_table.m"
          {
#line 421 "version_hash_table.m"
            MR_Word mercury__version_hash_table__T_13;

#line 421 "version_hash_table.m"
            {
#line 421 "version_hash_table.m"
              mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(mercury__version_hash_table__TypeInfo_for_K_14, mercury__version_hash_table__T0_12, mercury__version_hash_table__K_6, mercury__version_hash_table__V_7, &mercury__version_hash_table__T_13);
            }
#line 421 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 421 "version_hash_table.m"
              {
#line 422 "version_hash_table.m"
                {
#line 422 "version_hash_table.m"
                  MR_Word base;
#line 422 "version_hash_table.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 422 "version_hash_table.m"
                  *mercury__version_hash_table__AL_8 = base;
#line 422 "version_hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__version_hash_table__K0_10;
#line 422 "version_hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__version_hash_table__V0_11;
#line 422 "version_hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__version_hash_table__T_13));
#line 422 "version_hash_table.m"
                }
#line 422 "version_hash_table.m"
                mercury__version_hash_table__succeeded = MR_TRUE;
#line 421 "version_hash_table.m"
              }
#line 421 "version_hash_table.m"
          }
#line 417 "version_hash_table.m"
      }
#line 413 "version_hash_table.m"
    else
#line 413 "version_hash_table.m"
    if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_5)) == (MR_mktag((MR_Integer) 1))))
#line 414 "version_hash_table.m"
      {
#line 414 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V_16_16 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_5, (MR_Integer) 0));
#line 414 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_5, (MR_Integer) 1));

#line 414 "version_hash_table.m"
        {
#line 414 "version_hash_table.m"
          mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_14, mercury__version_hash_table__K_6, mercury__version_hash_table__V_16_16);
        }
#line 414 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 414 "version_hash_table.m"
          {
#line 415 "version_hash_table.m"
            {
#line 415 "version_hash_table.m"
              MR_Word base;
#line 415 "version_hash_table.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "version_hash_table.m"
              *mercury__version_hash_table__AL_8 = base;
#line 415 "version_hash_table.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__version_hash_table__K_6;
#line 415 "version_hash_table.m"
              MR_hl_field(MR_mktag(1), base, 1) = mercury__version_hash_table__V_7;
#line 415 "version_hash_table.m"
            }
#line 415 "version_hash_table.m"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 414 "version_hash_table.m"
          }
#line 414 "version_hash_table.m"
      }
#line 413 "version_hash_table.m"
    else
#line 413 "version_hash_table.m"
      mercury__version_hash_table__succeeded = MR_FALSE;
#line 413 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 413 "version_hash_table.m"
  }
#line 405 "version_hash_table.m"
}

#line 133 "list.int"
static void MR_CALL 
mercury__version_hash_table__foldl__ho13_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__version_hash_table__HeadVar__2_2,
#line 133 "list.int"
  MR_Integer mercury__version_hash_table__HeadVar__3_3,
#line 133 "list.int"
  MR_Integer * mercury__version_hash_table__HeadVar__4_4)
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
        MR_bool mercury__version_hash_table__succeeded;

#line 380 "list.opt"
        if ((mercury__version_hash_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "list.opt"
          *mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__HeadVar__3_3;
#line 380 "list.opt"
        else
#line 382 "list.opt"
          {
#line 382 "list.opt"
            MR_Word mercury__version_hash_table__TypeCtorInfo_47_59 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 382 "list.opt"
            MR_Word mercury__version_hash_table__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0)));
#line 382 "list.opt"
            MR_Word mercury__version_hash_table__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "list.opt"
            MR_Integer mercury__version_hash_table__STATE_VARIABLE_A_15_15_13;
#line 382 "list.opt"
            MR_Integer mercury__version_hash_table__HUA_36;
#line 382 "list.opt"
            MR_Integer mercury__version_hash_table__V_64_64;
#line 382 "list.opt"
            MR_Integer mercury__version_hash_table__V_65_65;
#line 382 "list.opt"
            MR_Integer mercury__version_hash_table__V_66_66;
#line 382 "list.opt"
            MR_Integer mercury__version_hash_table__V_67_67;

#line 769 "version_hash_table.m"
            {
#line 769 "version_hash_table.m"
              mercury__version_hash_table__generic_hash_2_p_0(mercury__version_hash_table__TypeCtorInfo_47_59, ((MR_Box) (mercury__version_hash_table__H_10_9)), &mercury__version_hash_table__HUA_36);
            }
#line 782 "version_hash_table.m"
            mercury__version_hash_table__V_64_64 = (mercury__version_hash_table__HeadVar__3_3 << mercury__version_hash_table__HUA_36);
#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__foldl__ho13_4_p_in__list_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 3078 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_67_67  = Bits;
#line 171 "int.opt"
}
#line 783 "version_hash_table.m"
            mercury__version_hash_table__V_66_66 = (mercury__version_hash_table__V_67_67 - mercury__version_hash_table__HUA_36);
#line 783 "version_hash_table.m"
            mercury__version_hash_table__V_65_65 = (mercury__version_hash_table__HeadVar__3_3 >> mercury__version_hash_table__V_66_66);
#line 782 "version_hash_table.m"
            mercury__version_hash_table__STATE_VARIABLE_A_15_15_13 = (mercury__version_hash_table__V_64_64 ^ mercury__version_hash_table__V_65_65);
#line 384 "list.opt"
            /* direct tailcall eliminated */
#line 384 "list.opt"
            {
#line 384 "list.opt"
              MR_Word mercury__version_hash_table__HeadVar__2__tmp_copy_2 = mercury__version_hash_table__T_11_10;
#line 384 "list.opt"
              MR_Integer mercury__version_hash_table__HeadVar__3__tmp_copy_3 = mercury__version_hash_table__STATE_VARIABLE_A_15_15_13;

#line 384 "list.opt"
              mercury__version_hash_table__HeadVar__3_3 = mercury__version_hash_table__HeadVar__3__tmp_copy_3;
#line 384 "list.opt"
              mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__HeadVar__2__tmp_copy_2;
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

#line 230 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table____Compare____version_hash_table_2_0(
#line 230 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_4,
#line 230 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_5,
#line 230 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__1_1,
#line 230 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__2_2,
#line 230 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__3_3)
#line 230 "version_hash_table.m"
{
#line 230 "version_hash_table.m"
  {
#line 230 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 230 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_6_6 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2;
#line 230 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_7_7;

#line 3143 "version_hash_table.c"
    {
#line 3145 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3147 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_7_7, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_6_6));
#line 3149 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_7_7, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_4));
#line 3151 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_7_7, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_5));
#line 3153 "version_hash_table.c"
    }
#line 230 "version_hash_table.m"
    {
#line 230 "version_hash_table.m"
      mercury__private_builtin__builtin_compare_non_canonical_type_3_p_0(mercury__version_hash_table__TypeInfo_7_7, mercury__version_hash_table__HeadVar__1_1, ((MR_Box) (mercury__version_hash_table__HeadVar__2_2)), ((MR_Box) (mercury__version_hash_table__HeadVar__3_3)));
#line 230 "version_hash_table.m"
      return;
    }
#line 230 "version_hash_table.m"
  }
#line 230 "version_hash_table.m"
}

#line 230 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table____Unify____version_hash_table_2_0(
#line 230 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_5,
#line 230 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_6,
#line 230 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__1_1,
#line 230 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__2_2)
#line 230 "version_hash_table.m"
{
#line 230 "version_hash_table.m"
  {
#line 230 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 230 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__CastX_3 = (MR_Integer) mercury__version_hash_table__HeadVar__1_1;
#line 230 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__CastY_4 = (MR_Integer) mercury__version_hash_table__HeadVar__2_2;

#line 230 "version_hash_table.m"
    mercury__version_hash_table__succeeded = (mercury__version_hash_table__CastX_3 == mercury__version_hash_table__CastY_4);
#line 230 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 230 "version_hash_table.m"
      mercury__version_hash_table__succeeded = MR_TRUE;
#line 230 "version_hash_table.m"
    else
#line 230 "version_hash_table.m"
      {
#line 230 "version_hash_table.m"
        return mercury__version_hash_table__succeeded = mercury__version_hash_table__equal_2_p_0(mercury__version_hash_table__TypeInfo_for_K_5, mercury__version_hash_table__TypeInfo_for_V_6, mercury__version_hash_table__HeadVar__1_1, mercury__version_hash_table__HeadVar__2_2);
      }
#line 230 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 230 "version_hash_table.m"
  }
#line 230 "version_hash_table.m"
}

#line 245 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table____Compare____hash_table_alist_2_0(
#line 245 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_39,
#line 245 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_40,
#line 245 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__1_1,
#line 245 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__2_2,
#line 245 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__3_3)
#line 245 "version_hash_table.m"
{
#line 245 "version_hash_table.m"
  while (MR_TRUE)
#line 245 "version_hash_table.m"
    {
#line 245 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 245 "version_hash_table.m"
      {
#line 245 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;
#line 245 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__CastX_37 = (MR_Integer) mercury__version_hash_table__HeadVar__2_2;
#line 245 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__CastY_38 = (MR_Integer) mercury__version_hash_table__HeadVar__3_3;

#line 245 "version_hash_table.m"
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__CastX_37 == mercury__version_hash_table__CastY_38);
#line 245 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 3243 "version_hash_table.c"
          *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 0;
#line 245 "version_hash_table.m"
        else
#line 245 "version_hash_table.m"
        if ((mercury__version_hash_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 245 "version_hash_table.m"
          if ((mercury__version_hash_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 245 "version_hash_table.m"
            *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 0;
#line 245 "version_hash_table.m"
          else
#line 245 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3257 "version_hash_table.c"
            *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "version_hash_table.m"
          else
#line 3261 "version_hash_table.c"
            *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "version_hash_table.m"
        else
#line 245 "version_hash_table.m"
        if (((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 245 "version_hash_table.m"
          {
#line 245 "version_hash_table.m"
            MR_Word mercury__version_hash_table__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 2)));
#line 245 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_44_44 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 245 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_45_45 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0));

#line 245 "version_hash_table.m"
            if ((mercury__version_hash_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3278 "version_hash_table.c"
              *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "version_hash_table.m"
            else
#line 245 "version_hash_table.m"
            if (((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 245 "version_hash_table.m"
              {
#line 245 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_32_32 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 0));
#line 245 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_33_33 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 1));
#line 245 "version_hash_table.m"
                MR_Word mercury__version_hash_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 2)));
#line 245 "version_hash_table.m"
                MR_Word mercury__version_hash_table__V_35_35;

#line 245 "version_hash_table.m"
                {
#line 245 "version_hash_table.m"
                  mercury__builtin__compare_3_p_0(mercury__version_hash_table__TypeInfo_for_K_39, &mercury__version_hash_table__V_35_35, mercury__version_hash_table__V_45_45, mercury__version_hash_table__V_32_32);
                }
#line 3300 "version_hash_table.c"
                mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_35_35 == (MR_Integer) 0);
#line 245 "version_hash_table.m"
                mercury__version_hash_table__succeeded = !(mercury__version_hash_table__succeeded);
#line 245 "version_hash_table.m"
                if (mercury__version_hash_table__succeeded)
#line 245 "version_hash_table.m"
                  *mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__V_35_35;
#line 245 "version_hash_table.m"
                else
#line 245 "version_hash_table.m"
                  {
#line 245 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__V_36_36;

#line 245 "version_hash_table.m"
                    {
#line 245 "version_hash_table.m"
                      mercury__builtin__compare_3_p_0(mercury__version_hash_table__TypeInfo_for_V_40, &mercury__version_hash_table__V_36_36, mercury__version_hash_table__V_44_44, mercury__version_hash_table__V_33_33);
                    }
#line 3320 "version_hash_table.c"
                    mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_36_36 == (MR_Integer) 0);
#line 245 "version_hash_table.m"
                    mercury__version_hash_table__succeeded = !(mercury__version_hash_table__succeeded);
#line 245 "version_hash_table.m"
                    if (mercury__version_hash_table__succeeded)
#line 245 "version_hash_table.m"
                      *mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__V_36_36;
#line 245 "version_hash_table.m"
                    else
#line 245 "version_hash_table.m"
                      {
#line 245 "version_hash_table.m"
                        /* direct tailcall eliminated */
#line 245 "version_hash_table.m"
                        {
#line 245 "version_hash_table.m"
                          MR_Word mercury__version_hash_table__HeadVar__2__tmp_copy_2 = mercury__version_hash_table__V_43_43;
#line 245 "version_hash_table.m"
                          MR_Word mercury__version_hash_table__HeadVar__3__tmp_copy_3 = mercury__version_hash_table__V_34_34;

#line 245 "version_hash_table.m"
                          mercury__version_hash_table__HeadVar__3_3 = mercury__version_hash_table__HeadVar__3__tmp_copy_3;
#line 245 "version_hash_table.m"
                          mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__HeadVar__2__tmp_copy_2;
#line 245 "version_hash_table.m"
                        }
#line 245 "version_hash_table.m"
                        continue;
#line 245 "version_hash_table.m"
                      }
#line 245 "version_hash_table.m"
                  }
#line 245 "version_hash_table.m"
              }
#line 245 "version_hash_table.m"
            else
#line 3357 "version_hash_table.c"
              *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "version_hash_table.m"
          }
#line 245 "version_hash_table.m"
        else
#line 245 "version_hash_table.m"
          {
#line 245 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_46_46 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 245 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_47_47 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0));

#line 245 "version_hash_table.m"
            if ((mercury__version_hash_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3372 "version_hash_table.c"
              *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "version_hash_table.m"
            else
#line 245 "version_hash_table.m"
            if (((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3378 "version_hash_table.c"
              *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "version_hash_table.m"
            else
#line 245 "version_hash_table.m"
              {
#line 245 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_13_13 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 0));
#line 245 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 1));
#line 245 "version_hash_table.m"
                MR_Word mercury__version_hash_table__V_15_15;

#line 245 "version_hash_table.m"
                {
#line 245 "version_hash_table.m"
                  mercury__builtin__compare_3_p_0(mercury__version_hash_table__TypeInfo_for_K_39, &mercury__version_hash_table__V_15_15, mercury__version_hash_table__V_47_47, mercury__version_hash_table__V_13_13);
                }
#line 3396 "version_hash_table.c"
                mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_15_15 == (MR_Integer) 0);
#line 245 "version_hash_table.m"
                mercury__version_hash_table__succeeded = !(mercury__version_hash_table__succeeded);
#line 245 "version_hash_table.m"
                if (mercury__version_hash_table__succeeded)
#line 245 "version_hash_table.m"
                  *mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__V_15_15;
#line 245 "version_hash_table.m"
                else
#line 245 "version_hash_table.m"
                  {
#line 245 "version_hash_table.m"
                    mercury__builtin__compare_3_p_0(mercury__version_hash_table__TypeInfo_for_V_40, mercury__version_hash_table__HeadVar__1_1, mercury__version_hash_table__V_46_46, mercury__version_hash_table__V_14_14);
#line 245 "version_hash_table.m"
                    return;
                  }
#line 245 "version_hash_table.m"
              }
#line 245 "version_hash_table.m"
          }
#line 245 "version_hash_table.m"
      }
#line 245 "version_hash_table.m"
      break;
#line 245 "version_hash_table.m"
    }
#line 245 "version_hash_table.m"
}

#line 245 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table____Unify____hash_table_alist_2_0(
#line 245 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_17,
#line 245 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_18,
#line 245 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__1_1,
#line 245 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__2_2)
#line 245 "version_hash_table.m"
{
#line 245 "version_hash_table.m"
  while (MR_TRUE)
#line 245 "version_hash_table.m"
    {
#line 245 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 245 "version_hash_table.m"
      {
#line 245 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;
#line 245 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__CastX_15 = (MR_Integer) mercury__version_hash_table__HeadVar__1_1;
#line 245 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__CastY_16 = (MR_Integer) mercury__version_hash_table__HeadVar__2_2;

#line 245 "version_hash_table.m"
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__CastX_15 == mercury__version_hash_table__CastY_16);
#line 245 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 245 "version_hash_table.m"
          mercury__version_hash_table__succeeded = MR_TRUE;
#line 245 "version_hash_table.m"
        else
#line 245 "version_hash_table.m"
        if ((mercury__version_hash_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 245 "version_hash_table.m"
          {
#line 245 "version_hash_table.m"
            MR_Integer mercury__version_hash_table__CastX_3 = (MR_Integer) mercury__version_hash_table__HeadVar__1_1;
#line 245 "version_hash_table.m"
            MR_Integer mercury__version_hash_table__CastY_4 = (MR_Integer) mercury__version_hash_table__HeadVar__2_2;

#line 245 "version_hash_table.m"
            mercury__version_hash_table__succeeded = (mercury__version_hash_table__CastY_4 == mercury__version_hash_table__CastX_3);
#line 245 "version_hash_table.m"
          }
#line 245 "version_hash_table.m"
        else
#line 245 "version_hash_table.m"
        if (((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 245 "version_hash_table.m"
          {
#line 245 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_9_9 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 0));
#line 245 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_10_10 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 1));
#line 245 "version_hash_table.m"
            MR_Word mercury__version_hash_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 2)));
#line 245 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_12_12;
#line 245 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_13_13;
#line 245 "version_hash_table.m"
            MR_Word mercury__version_hash_table__V_14_14;

#line 245 "version_hash_table.m"
            mercury__version_hash_table__succeeded = ((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 245 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 245 "version_hash_table.m"
              {
#line 245 "version_hash_table.m"
                mercury__version_hash_table__V_12_12 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0));
#line 245 "version_hash_table.m"
                mercury__version_hash_table__V_13_13 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 245 "version_hash_table.m"
                mercury__version_hash_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 2)));
#line 3506 "version_hash_table.c"
                {
#line 3508 "version_hash_table.c"
                  mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_17, mercury__version_hash_table__V_9_9, mercury__version_hash_table__V_12_12);
                }
#line 245 "version_hash_table.m"
                if (mercury__version_hash_table__succeeded)
#line 245 "version_hash_table.m"
                  {
#line 3515 "version_hash_table.c"
                    {
#line 3517 "version_hash_table.c"
                      mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_V_18, mercury__version_hash_table__V_10_10, mercury__version_hash_table__V_13_13);
                    }
#line 245 "version_hash_table.m"
                    if (mercury__version_hash_table__succeeded)
#line 3522 "version_hash_table.c"
                      {
#line 3524 "version_hash_table.c"
                        /* direct tailcall eliminated */
#line 3526 "version_hash_table.c"
                        {
#line 3528 "version_hash_table.c"
                          MR_Word mercury__version_hash_table__HeadVar__1__tmp_copy_1 = mercury__version_hash_table__V_11_11;
#line 3530 "version_hash_table.c"
                          MR_Word mercury__version_hash_table__HeadVar__2__tmp_copy_2 = mercury__version_hash_table__V_14_14;

#line 3533 "version_hash_table.c"
                          mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__HeadVar__2__tmp_copy_2;
#line 3535 "version_hash_table.c"
                          mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__HeadVar__1__tmp_copy_1;
#line 3537 "version_hash_table.c"
                        }
#line 3539 "version_hash_table.c"
                        continue;
#line 3541 "version_hash_table.c"
                      }
#line 245 "version_hash_table.m"
                  }
#line 245 "version_hash_table.m"
              }
#line 245 "version_hash_table.m"
          }
#line 245 "version_hash_table.m"
        else
#line 245 "version_hash_table.m"
          {
#line 245 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 0));
#line 245 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 1));
#line 245 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_7_7;
#line 245 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_8_8;

#line 245 "version_hash_table.m"
            mercury__version_hash_table__succeeded = ((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 245 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 245 "version_hash_table.m"
              {
#line 245 "version_hash_table.m"
                mercury__version_hash_table__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0));
#line 245 "version_hash_table.m"
                mercury__version_hash_table__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 3572 "version_hash_table.c"
                {
#line 3574 "version_hash_table.c"
                  mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_17, mercury__version_hash_table__V_5_5, mercury__version_hash_table__V_7_7);
                }
#line 245 "version_hash_table.m"
                if (mercury__version_hash_table__succeeded)
#line 3579 "version_hash_table.c"
                  {
#line 3581 "version_hash_table.c"
                    return mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_V_18, mercury__version_hash_table__V_6_6, mercury__version_hash_table__V_8_8);
                  }
#line 245 "version_hash_table.m"
              }
#line 245 "version_hash_table.m"
          }
#line 245 "version_hash_table.m"
        return mercury__version_hash_table__succeeded;
#line 245 "version_hash_table.m"
      }
#line 245 "version_hash_table.m"
      break;
#line 245 "version_hash_table.m"
    }
#line 245 "version_hash_table.m"
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

#line 239 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table____Compare____buckets_2_0(
#line 239 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_6,
#line 239 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_7,
#line 239 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__1_1,
#line 239 "version_hash_table.m"
  MR_Box mercury__version_hash_table__HeadVar__2_2,
#line 239 "version_hash_table.m"
  MR_Box mercury__version_hash_table__HeadVar__3_3)
#line 239 "version_hash_table.m"
{
#line 239 "version_hash_table.m"
  {
#line 239 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 239 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_8_8 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 239 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_9_9;
#line 239 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Cast_HeadVar1_4 = mercury__version_hash_table__HeadVar__2_2;
#line 239 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Cast_HeadVar2_5 = mercury__version_hash_table__HeadVar__3_3;

#line 3693 "version_hash_table.c"
    {
#line 3695 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3697 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_9_9, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_8_8));
#line 3699 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_9_9, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_6));
#line 3701 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_9_9, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_7));
#line 3703 "version_hash_table.c"
    }
#line 239 "version_hash_table.m"
    {
#line 239 "version_hash_table.m"
      mercury__version_array____Compare____version_array_1_0(mercury__version_hash_table__TypeInfo_9_9, mercury__version_hash_table__HeadVar__1_1, (MR_Box) mercury__version_hash_table__Cast_HeadVar1_4, (MR_Box) mercury__version_hash_table__Cast_HeadVar2_5);
#line 239 "version_hash_table.m"
      return;
    }
#line 239 "version_hash_table.m"
  }
#line 239 "version_hash_table.m"
}

#line 239 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table____Unify____buckets_2_0(
#line 239 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_5,
#line 239 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_6,
#line 239 "version_hash_table.m"
  MR_Box mercury__version_hash_table__HeadVar__1_1,
#line 239 "version_hash_table.m"
  MR_Box mercury__version_hash_table__HeadVar__2_2)
#line 239 "version_hash_table.m"
{
#line 239 "version_hash_table.m"
  {
#line 239 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 239 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_7_7 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 239 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_8_8;
#line 239 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Cast_HeadVar1_3 = mercury__version_hash_table__HeadVar__1_1;
#line 239 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Cast_HeadVar2_4 = mercury__version_hash_table__HeadVar__2_2;

#line 3743 "version_hash_table.c"
    {
#line 3745 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3747 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_8_8, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_7_7));
#line 3749 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_8_8, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_5));
#line 3751 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_8_8, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_6));
#line 3753 "version_hash_table.c"
    }
#line 239 "version_hash_table.m"
    {
#line 239 "version_hash_table.m"
      return mercury__version_hash_table__succeeded = mercury__version_array____Unify____version_array_1_0(mercury__version_hash_table__TypeInfo_8_8, (MR_Box) mercury__version_hash_table__Cast_HeadVar1_3, (MR_Box) mercury__version_hash_table__Cast_HeadVar2_4);
    }
#line 239 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 239 "version_hash_table.m"
  }
#line 239 "version_hash_table.m"
}

#line 822 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__fold_p_4_p_5(
#line 822 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
#line 822 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
#line 822 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_20,
#line 822 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 822 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 822 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_11,
#line 822 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_12)
#line 822 "version_hash_table.m"
{
#line 827 "version_hash_table.m"
  while (MR_TRUE)
#line 827 "version_hash_table.m"
    {
#line 827 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 827 "version_hash_table.m"
      {
#line 827 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 827 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 826 "version_hash_table.m"
          {
#line 826 "version_hash_table.m"
            *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
#line 826 "version_hash_table.m"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 826 "version_hash_table.m"
          }
#line 827 "version_hash_table.m"
        else
#line 827 "version_hash_table.m"
        if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 831 "version_hash_table.m"
          {
#line 831 "version_hash_table.m"
            MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 831 "version_hash_table.m"
            MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
#line 831 "version_hash_table.m"
            MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 831 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 832 "version_hash_table.m"
            MR_bool MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 832 "version_hash_table.m"
            {
#line 832 "version_hash_table.m"
              mercury__version_hash_table__succeeded = mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
            }
#line 831 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 833 "version_hash_table.m"
              {
#line 833 "version_hash_table.m"
                /* direct tailcall eliminated */
#line 833 "version_hash_table.m"
                {
#line 833 "version_hash_table.m"
                  MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
#line 833 "version_hash_table.m"
                  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

#line 833 "version_hash_table.m"
                  mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 833 "version_hash_table.m"
                  mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 833 "version_hash_table.m"
                }
#line 833 "version_hash_table.m"
                continue;
#line 833 "version_hash_table.m"
              }
#line 831 "version_hash_table.m"
          }
#line 827 "version_hash_table.m"
        else
#line 828 "version_hash_table.m"
          {
#line 828 "version_hash_table.m"
            MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 828 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 829 "version_hash_table.m"
            MR_bool MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 829 "version_hash_table.m"
            {
#line 829 "version_hash_table.m"
              return mercury__version_hash_table__succeeded = mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
            }
#line 828 "version_hash_table.m"
          }
#line 827 "version_hash_table.m"
        return mercury__version_hash_table__succeeded;
#line 827 "version_hash_table.m"
      }
#line 827 "version_hash_table.m"
      break;
#line 827 "version_hash_table.m"
    }
#line 822 "version_hash_table.m"
}

#line 821 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__fold_p_4_p_4(
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
#line 827 "version_hash_table.m"
  while (MR_TRUE)
#line 827 "version_hash_table.m"
    {
#line 827 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 827 "version_hash_table.m"
      {
#line 827 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 827 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 826 "version_hash_table.m"
          {
#line 826 "version_hash_table.m"
            *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
#line 826 "version_hash_table.m"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 826 "version_hash_table.m"
          }
#line 827 "version_hash_table.m"
        else
#line 827 "version_hash_table.m"
        if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 831 "version_hash_table.m"
          {
#line 831 "version_hash_table.m"
            MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 831 "version_hash_table.m"
            MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
#line 831 "version_hash_table.m"
            MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 831 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 832 "version_hash_table.m"
            MR_bool MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 832 "version_hash_table.m"
            {
#line 832 "version_hash_table.m"
              mercury__version_hash_table__succeeded = mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
            }
#line 831 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 833 "version_hash_table.m"
              {
#line 833 "version_hash_table.m"
                /* direct tailcall eliminated */
#line 833 "version_hash_table.m"
                {
#line 833 "version_hash_table.m"
                  MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
#line 833 "version_hash_table.m"
                  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

#line 833 "version_hash_table.m"
                  mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 833 "version_hash_table.m"
                  mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 833 "version_hash_table.m"
                }
#line 833 "version_hash_table.m"
                continue;
#line 833 "version_hash_table.m"
              }
#line 831 "version_hash_table.m"
          }
#line 827 "version_hash_table.m"
        else
#line 828 "version_hash_table.m"
          {
#line 828 "version_hash_table.m"
            MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 828 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 829 "version_hash_table.m"
            MR_bool MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 829 "version_hash_table.m"
            {
#line 829 "version_hash_table.m"
              return mercury__version_hash_table__succeeded = mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
            }
#line 828 "version_hash_table.m"
          }
#line 827 "version_hash_table.m"
        return mercury__version_hash_table__succeeded;
#line 827 "version_hash_table.m"
      }
#line 827 "version_hash_table.m"
      break;
#line 827 "version_hash_table.m"
    }
#line 821 "version_hash_table.m"
}

#line 820 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__fold_p_4_p_3(
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
#line 827 "version_hash_table.m"
  while (MR_TRUE)
#line 827 "version_hash_table.m"
    {
#line 827 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 827 "version_hash_table.m"
      {
#line 827 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 827 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 826 "version_hash_table.m"
          {
#line 826 "version_hash_table.m"
            *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
#line 826 "version_hash_table.m"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 826 "version_hash_table.m"
          }
#line 827 "version_hash_table.m"
        else
#line 827 "version_hash_table.m"
        if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 831 "version_hash_table.m"
          {
#line 831 "version_hash_table.m"
            MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 831 "version_hash_table.m"
            MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
#line 831 "version_hash_table.m"
            MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 831 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 832 "version_hash_table.m"
            MR_bool MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 832 "version_hash_table.m"
            {
#line 832 "version_hash_table.m"
              mercury__version_hash_table__succeeded = mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
            }
#line 831 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 833 "version_hash_table.m"
              {
#line 833 "version_hash_table.m"
                /* direct tailcall eliminated */
#line 833 "version_hash_table.m"
                {
#line 833 "version_hash_table.m"
                  MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
#line 833 "version_hash_table.m"
                  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

#line 833 "version_hash_table.m"
                  mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 833 "version_hash_table.m"
                  mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 833 "version_hash_table.m"
                }
#line 833 "version_hash_table.m"
                continue;
#line 833 "version_hash_table.m"
              }
#line 831 "version_hash_table.m"
          }
#line 827 "version_hash_table.m"
        else
#line 828 "version_hash_table.m"
          {
#line 828 "version_hash_table.m"
            MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 828 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 829 "version_hash_table.m"
            MR_bool MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 829 "version_hash_table.m"
            {
#line 829 "version_hash_table.m"
              return mercury__version_hash_table__succeeded = mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
            }
#line 828 "version_hash_table.m"
          }
#line 827 "version_hash_table.m"
        return mercury__version_hash_table__succeeded;
#line 827 "version_hash_table.m"
      }
#line 827 "version_hash_table.m"
      break;
#line 827 "version_hash_table.m"
    }
#line 820 "version_hash_table.m"
}

#line 819 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_p_4_p_2(
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
#line 827 "version_hash_table.m"
  while (MR_TRUE)
#line 827 "version_hash_table.m"
    {
#line 827 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 827 "version_hash_table.m"
      {
#line 827 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 827 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 826 "version_hash_table.m"
          *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
#line 827 "version_hash_table.m"
        else
#line 827 "version_hash_table.m"
        if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 831 "version_hash_table.m"
          {
#line 831 "version_hash_table.m"
            MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 831 "version_hash_table.m"
            MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
#line 831 "version_hash_table.m"
            MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 831 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 832 "version_hash_table.m"
            void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 832 "version_hash_table.m"
            {
#line 832 "version_hash_table.m"
              mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
            }
#line 833 "version_hash_table.m"
            /* direct tailcall eliminated */
#line 833 "version_hash_table.m"
            {
#line 833 "version_hash_table.m"
              MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
#line 833 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

#line 833 "version_hash_table.m"
              mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 833 "version_hash_table.m"
              mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 833 "version_hash_table.m"
            }
#line 833 "version_hash_table.m"
            continue;
#line 831 "version_hash_table.m"
          }
#line 827 "version_hash_table.m"
        else
#line 828 "version_hash_table.m"
          {
#line 828 "version_hash_table.m"
            MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 828 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 829 "version_hash_table.m"
            void MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 829 "version_hash_table.m"
            {
#line 829 "version_hash_table.m"
              mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
#line 829 "version_hash_table.m"
              return;
            }
#line 828 "version_hash_table.m"
          }
#line 827 "version_hash_table.m"
      }
#line 827 "version_hash_table.m"
      break;
#line 827 "version_hash_table.m"
    }
#line 819 "version_hash_table.m"
}

#line 818 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_p_4_p_1(
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
#line 827 "version_hash_table.m"
  while (MR_TRUE)
#line 827 "version_hash_table.m"
    {
#line 827 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 827 "version_hash_table.m"
      {
#line 827 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 827 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 826 "version_hash_table.m"
          *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
#line 827 "version_hash_table.m"
        else
#line 827 "version_hash_table.m"
        if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 831 "version_hash_table.m"
          {
#line 831 "version_hash_table.m"
            MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 831 "version_hash_table.m"
            MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
#line 831 "version_hash_table.m"
            MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 831 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 832 "version_hash_table.m"
            void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 832 "version_hash_table.m"
            {
#line 832 "version_hash_table.m"
              mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
            }
#line 833 "version_hash_table.m"
            /* direct tailcall eliminated */
#line 833 "version_hash_table.m"
            {
#line 833 "version_hash_table.m"
              MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
#line 833 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

#line 833 "version_hash_table.m"
              mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 833 "version_hash_table.m"
              mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 833 "version_hash_table.m"
            }
#line 833 "version_hash_table.m"
            continue;
#line 831 "version_hash_table.m"
          }
#line 827 "version_hash_table.m"
        else
#line 828 "version_hash_table.m"
          {
#line 828 "version_hash_table.m"
            MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 828 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 829 "version_hash_table.m"
            void MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 829 "version_hash_table.m"
            {
#line 829 "version_hash_table.m"
              mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
#line 829 "version_hash_table.m"
              return;
            }
#line 828 "version_hash_table.m"
          }
#line 827 "version_hash_table.m"
      }
#line 827 "version_hash_table.m"
      break;
#line 827 "version_hash_table.m"
    }
#line 818 "version_hash_table.m"
}

#line 817 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_p_4_p_0(
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
#line 827 "version_hash_table.m"
  while (MR_TRUE)
#line 827 "version_hash_table.m"
    {
#line 827 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 827 "version_hash_table.m"
      {
#line 827 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 827 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 826 "version_hash_table.m"
          *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
#line 827 "version_hash_table.m"
        else
#line 827 "version_hash_table.m"
        if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 831 "version_hash_table.m"
          {
#line 831 "version_hash_table.m"
            MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 831 "version_hash_table.m"
            MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
#line 831 "version_hash_table.m"
            MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 831 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 832 "version_hash_table.m"
            void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 832 "version_hash_table.m"
            {
#line 832 "version_hash_table.m"
              mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
            }
#line 833 "version_hash_table.m"
            /* direct tailcall eliminated */
#line 833 "version_hash_table.m"
            {
#line 833 "version_hash_table.m"
              MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
#line 833 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

#line 833 "version_hash_table.m"
              mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 833 "version_hash_table.m"
              mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 833 "version_hash_table.m"
            }
#line 833 "version_hash_table.m"
            continue;
#line 831 "version_hash_table.m"
          }
#line 827 "version_hash_table.m"
        else
#line 828 "version_hash_table.m"
          {
#line 828 "version_hash_table.m"
            MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 828 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 829 "version_hash_table.m"
            void MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 829 "version_hash_table.m"
            {
#line 829 "version_hash_table.m"
              mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
#line 829 "version_hash_table.m"
              return;
            }
#line 828 "version_hash_table.m"
          }
#line 827 "version_hash_table.m"
      }
#line 827 "version_hash_table.m"
      break;
#line 827 "version_hash_table.m"
    }
#line 817 "version_hash_table.m"
}

#line 795 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_f_4_p_1(
#line 795 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_15,
#line 795 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_16,
#line 795 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_17,
#line 795 "version_hash_table.m"
  MR_Word mercury__version_hash_table__F_5,
#line 795 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 795 "version_hash_table.m"
  MR_Box mercury__version_hash_table__A0_7,
#line 795 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__A_8)
#line 795 "version_hash_table.m"
{
#line 801 "version_hash_table.m"
  while (MR_TRUE)
#line 801 "version_hash_table.m"
    {
#line 801 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 801 "version_hash_table.m"
      {
#line 801 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 801 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 800 "version_hash_table.m"
          *mercury__version_hash_table__A_8 = mercury__version_hash_table__A0_7;
#line 801 "version_hash_table.m"
        else
#line 801 "version_hash_table.m"
        if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 805 "version_hash_table.m"
          {
#line 805 "version_hash_table.m"
            MR_Word mercury__version_hash_table__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 805 "version_hash_table.m"
            MR_Box mercury__version_hash_table__A1_12;
#line 805 "version_hash_table.m"
            MR_Box mercury__version_hash_table__K_13 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 805 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_14 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 806 "version_hash_table.m"
            MR_Box MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__F_5, (MR_Integer) 1)));

#line 806 "version_hash_table.m"
            {
#line 806 "version_hash_table.m"
              mercury__version_hash_table__A1_12 = mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__F_5), mercury__version_hash_table__K_13, mercury__version_hash_table__V_14, mercury__version_hash_table__A0_7);
            }
#line 807 "version_hash_table.m"
            /* direct tailcall eliminated */
#line 807 "version_hash_table.m"
            {
#line 807 "version_hash_table.m"
              MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_11;
#line 807 "version_hash_table.m"
              MR_Box mercury__version_hash_table__A0__tmp_copy_7 = mercury__version_hash_table__A1_12;

#line 807 "version_hash_table.m"
              mercury__version_hash_table__A0_7 = mercury__version_hash_table__A0__tmp_copy_7;
#line 807 "version_hash_table.m"
              mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 807 "version_hash_table.m"
            }
#line 807 "version_hash_table.m"
            continue;
#line 805 "version_hash_table.m"
          }
#line 801 "version_hash_table.m"
        else
#line 802 "version_hash_table.m"
          {
#line 802 "version_hash_table.m"
            MR_Box mercury__version_hash_table__K_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 802 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_10 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 803 "version_hash_table.m"
            MR_Box MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__F_5, (MR_Integer) 1)));

#line 803 "version_hash_table.m"
            {
#line 803 "version_hash_table.m"
              *mercury__version_hash_table__A_8 = mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__F_5), mercury__version_hash_table__K_9, mercury__version_hash_table__V_10, mercury__version_hash_table__A0_7);
            }
#line 802 "version_hash_table.m"
          }
#line 801 "version_hash_table.m"
      }
#line 801 "version_hash_table.m"
      break;
#line 801 "version_hash_table.m"
    }
#line 795 "version_hash_table.m"
}

#line 794 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_f_4_p_0(
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
#line 801 "version_hash_table.m"
  while (MR_TRUE)
#line 801 "version_hash_table.m"
    {
#line 801 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 801 "version_hash_table.m"
      {
#line 801 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 801 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 800 "version_hash_table.m"
          *mercury__version_hash_table__A_8 = mercury__version_hash_table__A0_7;
#line 801 "version_hash_table.m"
        else
#line 801 "version_hash_table.m"
        if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 805 "version_hash_table.m"
          {
#line 805 "version_hash_table.m"
            MR_Word mercury__version_hash_table__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 805 "version_hash_table.m"
            MR_Box mercury__version_hash_table__A1_12;
#line 805 "version_hash_table.m"
            MR_Box mercury__version_hash_table__K_13 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 805 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_14 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 806 "version_hash_table.m"
            MR_Box MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__F_5, (MR_Integer) 1)));

#line 806 "version_hash_table.m"
            {
#line 806 "version_hash_table.m"
              mercury__version_hash_table__A1_12 = mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__F_5), mercury__version_hash_table__K_13, mercury__version_hash_table__V_14, mercury__version_hash_table__A0_7);
            }
#line 807 "version_hash_table.m"
            /* direct tailcall eliminated */
#line 807 "version_hash_table.m"
            {
#line 807 "version_hash_table.m"
              MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_11;
#line 807 "version_hash_table.m"
              MR_Box mercury__version_hash_table__A0__tmp_copy_7 = mercury__version_hash_table__A1_12;

#line 807 "version_hash_table.m"
              mercury__version_hash_table__A0_7 = mercury__version_hash_table__A0__tmp_copy_7;
#line 807 "version_hash_table.m"
              mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 807 "version_hash_table.m"
            }
#line 807 "version_hash_table.m"
            continue;
#line 805 "version_hash_table.m"
          }
#line 801 "version_hash_table.m"
        else
#line 802 "version_hash_table.m"
          {
#line 802 "version_hash_table.m"
            MR_Box mercury__version_hash_table__K_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 802 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_10 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 803 "version_hash_table.m"
            MR_Box MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__F_5, (MR_Integer) 1)));

#line 803 "version_hash_table.m"
            {
#line 803 "version_hash_table.m"
              *mercury__version_hash_table__A_8 = mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__F_5), mercury__version_hash_table__K_9, mercury__version_hash_table__V_10, mercury__version_hash_table__A0_7);
            }
#line 802 "version_hash_table.m"
          }
#line 801 "version_hash_table.m"
      }
#line 801 "version_hash_table.m"
      break;
#line 801 "version_hash_table.m"
    }
#line 794 "version_hash_table.m"
}

#line 637 "version_hash_table.m"
static void MR_CALL 
mercury__version_hash_table__reinsert_alist_5_p_0(
#line 637 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_20,
#line 637 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_21,
#line 637 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL_6,
#line 637 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_7,
#line 637 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumBuckets_8,
#line 637 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13,
#line 637 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Buckets_14)
#line 637 "version_hash_table.m"
{
#line 643 "version_hash_table.m"
  while (MR_TRUE)
#line 643 "version_hash_table.m"
    {
#line 643 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 643 "version_hash_table.m"
      {
#line 643 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 643 "version_hash_table.m"
        if ((mercury__version_hash_table__AL_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 642 "version_hash_table.m"
          *mercury__version_hash_table__STATE_VARIABLE_Buckets_14 = mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13;
#line 643 "version_hash_table.m"
        else
#line 643 "version_hash_table.m"
        if (((MR_tag((MR_Word) mercury__version_hash_table__AL_6)) == (MR_mktag((MR_Integer) 2))))
#line 647 "version_hash_table.m"
          {
#line 647 "version_hash_table.m"
            MR_Word mercury__version_hash_table__TypeCtorInfo_23_36;
#line 647 "version_hash_table.m"
            MR_Word mercury__version_hash_table__TypeInfo_24_37;
#line 647 "version_hash_table.m"
            MR_Word mercury__version_hash_table__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_6, (MR_Integer) 2)));
#line 647 "version_hash_table.m"
            MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_15_15;
#line 647 "version_hash_table.m"
            MR_Box mercury__version_hash_table__K_18 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_6, (MR_Integer) 0));
#line 647 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_19 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_6, (MR_Integer) 1));
#line 647 "version_hash_table.m"
            MR_Integer mercury__version_hash_table__H_28;
#line 647 "version_hash_table.m"
            MR_Word mercury__version_hash_table__AL0_29;
#line 647 "version_hash_table.m"
            MR_Word mercury__version_hash_table__AL_30;
#line 647 "version_hash_table.m"
            MR_Integer mercury__version_hash_table__Hash_42;
#line 647 "version_hash_table.m"
            MR_Integer mercury__version_hash_table__V_43_43;
#line 318 "version_hash_table.m"
            void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_7, (MR_Integer) 1)));
#line 318 "version_hash_table.m"
            MR_Box mercury__version_hash_table__conv1_Hash_42;
#line 158 "version_array.opt"
            MR_Box mercury__version_hash_table__conv2_AL0_29;
#line 161 "version_array.opt"
            MR_Box mercury__version_hash_table__conv3_STATE_VARIABLE_Buckets_15_15;

#line 318 "version_hash_table.m"
            {
#line 318 "version_hash_table.m"
              mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_7), mercury__version_hash_table__K_18, &mercury__version_hash_table__conv1_Hash_42);
            }
#line 318 "version_hash_table.m"
            mercury__version_hash_table__Hash_42 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_42);
#line 320 "version_hash_table.m"
            mercury__version_hash_table__V_43_43 = (mercury__version_hash_table__NumBuckets_8 - (MR_Integer) 1);
#line 320 "version_hash_table.m"
            mercury__version_hash_table__H_28 = (mercury__version_hash_table__Hash_42 & mercury__version_hash_table__V_43_43);
#line 4713 "version_hash_table.c"
            mercury__version_hash_table__TypeCtorInfo_23_36 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 4715 "version_hash_table.c"
            {
#line 4717 "version_hash_table.c"
              mercury__version_hash_table__TypeInfo_24_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4719 "version_hash_table.c"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_37, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_23_36));
#line 4721 "version_hash_table.c"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_37, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_20));
#line 4723 "version_hash_table.c"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_37, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_21));
#line 4725 "version_hash_table.c"
            }
#line 158 "version_array.opt"
            {
#line 158 "version_array.opt"
              mercury__version_hash_table__conv2_AL0_29 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_24_37, (MR_Box) mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13, mercury__version_hash_table__H_28);
            }
#line 158 "version_array.opt"
            mercury__version_hash_table__AL0_29 = ((MR_Word) mercury__version_hash_table__conv2_AL0_29);
#line 661 "version_hash_table.m"
            if ((mercury__version_hash_table__AL0_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 660 "version_hash_table.m"
              {
#line 660 "version_hash_table.m"
                mercury__version_hash_table__AL_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_30, 0) = mercury__version_hash_table__K_18;
#line 660 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_30, 1) = mercury__version_hash_table__V_19;
#line 660 "version_hash_table.m"
              }
#line 661 "version_hash_table.m"
            else
#line 661 "version_hash_table.m"
            if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_29)) == (MR_mktag((MR_Integer) 2))))
#line 665 "version_hash_table.m"
              {
#line 665 "version_hash_table.m"
                mercury__version_hash_table__AL_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 665 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 0) = mercury__version_hash_table__K_18;
#line 665 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 1) = mercury__version_hash_table__V_19;
#line 665 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 2) = ((MR_Box) (mercury__version_hash_table__AL0_29));
#line 665 "version_hash_table.m"
              }
#line 661 "version_hash_table.m"
            else
#line 665 "version_hash_table.m"
              {
#line 665 "version_hash_table.m"
                mercury__version_hash_table__AL_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 665 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 0) = mercury__version_hash_table__K_18;
#line 665 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 1) = mercury__version_hash_table__V_19;
#line 665 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 2) = ((MR_Box) (mercury__version_hash_table__AL0_29));
#line 665 "version_hash_table.m"
              }
#line 161 "version_array.opt"
            {
#line 161 "version_array.opt"
              mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_24_37, mercury__version_hash_table__H_28, ((MR_Box) (mercury__version_hash_table__AL_30)), (MR_Box) mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13, &mercury__version_hash_table__conv3_STATE_VARIABLE_Buckets_15_15);
            }
#line 161 "version_array.opt"
            mercury__version_hash_table__STATE_VARIABLE_Buckets_15_15 = (MR_Box) mercury__version_hash_table__conv3_STATE_VARIABLE_Buckets_15_15;
#line 649 "version_hash_table.m"
            /* direct tailcall eliminated */
#line 649 "version_hash_table.m"
            {
#line 649 "version_hash_table.m"
              MR_Word mercury__version_hash_table__AL__tmp_copy_6 = mercury__version_hash_table__T_12;
#line 649 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13 = mercury__version_hash_table__STATE_VARIABLE_Buckets_15_15;

#line 649 "version_hash_table.m"
              mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13 = mercury__version_hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13;
#line 649 "version_hash_table.m"
              mercury__version_hash_table__AL_6 = mercury__version_hash_table__AL__tmp_copy_6;
#line 649 "version_hash_table.m"
            }
#line 649 "version_hash_table.m"
            continue;
#line 647 "version_hash_table.m"
          }
#line 643 "version_hash_table.m"
        else
#line 644 "version_hash_table.m"
          {
#line 644 "version_hash_table.m"
            MR_Word mercury__version_hash_table__TypeCtorInfo_23_66;
#line 644 "version_hash_table.m"
            MR_Word mercury__version_hash_table__TypeInfo_24_67;
#line 644 "version_hash_table.m"
            MR_Box mercury__version_hash_table__K_10 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_6, (MR_Integer) 0));
#line 644 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_11 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_6, (MR_Integer) 1));
#line 644 "version_hash_table.m"
            MR_Integer mercury__version_hash_table__H_58;
#line 644 "version_hash_table.m"
            MR_Word mercury__version_hash_table__AL0_59;
#line 644 "version_hash_table.m"
            MR_Word mercury__version_hash_table__AL_60;
#line 644 "version_hash_table.m"
            MR_Integer mercury__version_hash_table__Hash_72;
#line 644 "version_hash_table.m"
            MR_Integer mercury__version_hash_table__V_73_73;
#line 318 "version_hash_table.m"
            void MR_CALL (* mercury__version_hash_table__func_4)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_7, (MR_Integer) 1)));
#line 318 "version_hash_table.m"
            MR_Box mercury__version_hash_table__conv5_Hash_72;
#line 158 "version_array.opt"
            MR_Box mercury__version_hash_table__conv6_AL0_59;
#line 161 "version_array.opt"
            MR_Box mercury__version_hash_table__conv7_STATE_VARIABLE_Buckets_14;

#line 318 "version_hash_table.m"
            {
#line 318 "version_hash_table.m"
              mercury__version_hash_table__func_4(((MR_Box) mercury__version_hash_table__HashPred_7), mercury__version_hash_table__K_10, &mercury__version_hash_table__conv5_Hash_72);
            }
#line 318 "version_hash_table.m"
            mercury__version_hash_table__Hash_72 = ((MR_Integer) mercury__version_hash_table__conv5_Hash_72);
#line 320 "version_hash_table.m"
            mercury__version_hash_table__V_73_73 = (mercury__version_hash_table__NumBuckets_8 - (MR_Integer) 1);
#line 320 "version_hash_table.m"
            mercury__version_hash_table__H_58 = (mercury__version_hash_table__Hash_72 & mercury__version_hash_table__V_73_73);
#line 4844 "version_hash_table.c"
            mercury__version_hash_table__TypeCtorInfo_23_66 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 4846 "version_hash_table.c"
            {
#line 4848 "version_hash_table.c"
              mercury__version_hash_table__TypeInfo_24_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4850 "version_hash_table.c"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_67, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_23_66));
#line 4852 "version_hash_table.c"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_67, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_20));
#line 4854 "version_hash_table.c"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_67, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_21));
#line 4856 "version_hash_table.c"
            }
#line 158 "version_array.opt"
            {
#line 158 "version_array.opt"
              mercury__version_hash_table__conv6_AL0_59 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_24_67, (MR_Box) mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13, mercury__version_hash_table__H_58);
            }
#line 158 "version_array.opt"
            mercury__version_hash_table__AL0_59 = ((MR_Word) mercury__version_hash_table__conv6_AL0_59);
#line 661 "version_hash_table.m"
            if ((mercury__version_hash_table__AL0_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 660 "version_hash_table.m"
              mercury__version_hash_table__AL_60 = mercury__version_hash_table__AL_6;
#line 661 "version_hash_table.m"
            else
#line 661 "version_hash_table.m"
            if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_59)) == (MR_mktag((MR_Integer) 2))))
#line 665 "version_hash_table.m"
              {
#line 665 "version_hash_table.m"
                mercury__version_hash_table__AL_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 665 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 0) = mercury__version_hash_table__K_10;
#line 665 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 1) = mercury__version_hash_table__V_11;
#line 665 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 2) = ((MR_Box) (mercury__version_hash_table__AL0_59));
#line 665 "version_hash_table.m"
              }
#line 661 "version_hash_table.m"
            else
#line 665 "version_hash_table.m"
              {
#line 665 "version_hash_table.m"
                mercury__version_hash_table__AL_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 665 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 0) = mercury__version_hash_table__K_10;
#line 665 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 1) = mercury__version_hash_table__V_11;
#line 665 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 2) = ((MR_Box) (mercury__version_hash_table__AL0_59));
#line 665 "version_hash_table.m"
              }
#line 161 "version_array.opt"
            {
#line 161 "version_array.opt"
              mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_24_67, mercury__version_hash_table__H_58, ((MR_Box) (mercury__version_hash_table__AL_60)), (MR_Box) mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13, &mercury__version_hash_table__conv7_STATE_VARIABLE_Buckets_14);
            }
#line 161 "version_array.opt"
            *mercury__version_hash_table__STATE_VARIABLE_Buckets_14 = (MR_Box) mercury__version_hash_table__conv7_STATE_VARIABLE_Buckets_14;
#line 644 "version_hash_table.m"
          }
#line 643 "version_hash_table.m"
      }
#line 643 "version_hash_table.m"
      break;
#line 643 "version_hash_table.m"
    }
#line 637 "version_hash_table.m"
}

#line 624 "version_hash_table.m"
static void MR_CALL 
mercury__version_hash_table__reinsert_bindings_6_p_0(
#line 624 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_20,
#line 624 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_21,
#line 624 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__I_7,
#line 624 "version_hash_table.m"
  MR_Box mercury__version_hash_table__OldBuckets_8,
#line 624 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_9,
#line 624 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumBuckets_10,
#line 624 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13,
#line 624 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Buckets_14)
#line 624 "version_hash_table.m"
{
#line 631 "version_hash_table.m"
  while (MR_TRUE)
#line 631 "version_hash_table.m"
    {
#line 631 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 631 "version_hash_table.m"
      {
#line 631 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;
#line 629 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_15_15;
#line 162 "version_array.opt"
        MR_Word mercury__version_hash_table__TypeInfo_23_29;

#line 162 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__reinsert_bindings_6_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__OldBuckets_8 , VA);
		{
#line 162 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 4966 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_15_15  = N;
#line 162 "version_array.opt"
}
#line 629 "version_hash_table.m"
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__I_7 >= mercury__version_hash_table__V_15_15);
#line 631 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 631 "version_hash_table.m"
          *mercury__version_hash_table__STATE_VARIABLE_Buckets_14 = mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13;
#line 631 "version_hash_table.m"
        else
#line 632 "version_hash_table.m"
          {
#line 632 "version_hash_table.m"
            MR_Word mercury__version_hash_table__TypeCtorInfo_24_24 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 632 "version_hash_table.m"
            MR_Word mercury__version_hash_table__TypeInfo_25_25;
#line 632 "version_hash_table.m"
            MR_Word mercury__version_hash_table__AL_12;
#line 632 "version_hash_table.m"
            MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_16_16;
#line 632 "version_hash_table.m"
            MR_Integer mercury__version_hash_table__V_17_17;
#line 158 "version_array.opt"
            MR_Box mercury__version_hash_table__conv0_AL_12;

#line 4996 "version_hash_table.c"
            {
#line 4998 "version_hash_table.c"
              mercury__version_hash_table__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5000 "version_hash_table.c"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_25_25, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_24_24));
#line 5002 "version_hash_table.c"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_25_25, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_20));
#line 5004 "version_hash_table.c"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_25_25, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_21));
#line 5006 "version_hash_table.c"
            }
#line 158 "version_array.opt"
            {
#line 158 "version_array.opt"
              mercury__version_hash_table__conv0_AL_12 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_25_25, (MR_Box) mercury__version_hash_table__OldBuckets_8, mercury__version_hash_table__I_7);
            }
#line 158 "version_array.opt"
            mercury__version_hash_table__AL_12 = ((MR_Word) mercury__version_hash_table__conv0_AL_12);
#line 633 "version_hash_table.m"
            {
#line 633 "version_hash_table.m"
              mercury__version_hash_table__reinsert_alist_5_p_0(mercury__version_hash_table__TypeInfo_for_K_20, mercury__version_hash_table__TypeInfo_for_V_21, mercury__version_hash_table__AL_12, mercury__version_hash_table__HashPred_9, mercury__version_hash_table__NumBuckets_10, mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13, &mercury__version_hash_table__STATE_VARIABLE_Buckets_16_16);
            }
#line 634 "version_hash_table.m"
            mercury__version_hash_table__V_17_17 = (mercury__version_hash_table__I_7 + (MR_Integer) 1);
#line 634 "version_hash_table.m"
            /* direct tailcall eliminated */
#line 634 "version_hash_table.m"
            {
#line 634 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__I__tmp_copy_7 = mercury__version_hash_table__V_17_17;
#line 634 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13 = mercury__version_hash_table__STATE_VARIABLE_Buckets_16_16;

#line 634 "version_hash_table.m"
              mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13 = mercury__version_hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13;
#line 634 "version_hash_table.m"
              mercury__version_hash_table__I_7 = mercury__version_hash_table__I__tmp_copy_7;
#line 634 "version_hash_table.m"
            }
#line 634 "version_hash_table.m"
            continue;
#line 632 "version_hash_table.m"
          }
#line 631 "version_hash_table.m"
      }
#line 631 "version_hash_table.m"
      break;
#line 631 "version_hash_table.m"
    }
#line 624 "version_hash_table.m"
}

#line 610 "version_hash_table.m"
static MR_Word MR_CALL 
mercury__version_hash_table__expand_4_f_0(
#line 610 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_21,
#line 610 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_22,
#line 610 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumOccupants_6,
#line 610 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__MaxOccupants0_7,
#line 610 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred0_8,
#line 610 "version_hash_table.m"
  MR_Box mercury__version_hash_table__Buckets0_9)
#line 610 "version_hash_table.m"
{
#line 615 "version_hash_table.m"
  {
#line 615 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 615 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_10;
#line 615 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_23_23 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 615 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_24_24;
#line 615 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumBuckets0_11;
#line 615 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumBuckets_12;
#line 615 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__MaxOccupants_13;
#line 615 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_14;
#line 615 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets1_15;
#line 615 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_16;
#line 615 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_19_19;
#line 162 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_24_25;
#line 325 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_26;
#line 620 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv0_Buckets1_15;

#line 5098 "version_hash_table.c"
    {
#line 5100 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5102 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_24, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_23_23));
#line 5104 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_24, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_21));
#line 5106 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_24, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_22));
#line 5108 "version_hash_table.c"
    }
#line 162 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__expand_4_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets0_9 , VA);
		{
#line 162 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 5123 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__NumBuckets0_11  = N;
#line 162 "version_array.opt"
}
#line 617 "version_hash_table.m"
    mercury__version_hash_table__NumBuckets_12 = (mercury__version_hash_table__NumBuckets0_11 + mercury__version_hash_table__NumBuckets0_11);
#line 618 "version_hash_table.m"
    mercury__version_hash_table__MaxOccupants_13 = (mercury__version_hash_table__MaxOccupants0_7 + mercury__version_hash_table__MaxOccupants0_7);
#line 328 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__expand_4_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HashPred0_8 ;
		{
#line 328 "version_hash_table.m"

    HashPred = HashPred0;

#line 5147 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_14  = HashPred;
#line 328 "version_hash_table.m"
}
#line 620 "version_hash_table.m"
    mercury__version_hash_table__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 620 "version_hash_table.m"
    {
#line 620 "version_hash_table.m"
      mercury__version_hash_table__conv0_Buckets1_15 = mercury__version_array__init_2_f_0(mercury__version_hash_table__TypeInfo_24_24, mercury__version_hash_table__NumBuckets_12, ((MR_Box) (mercury__version_hash_table__V_19_19)));
    }
#line 620 "version_hash_table.m"
    mercury__version_hash_table__Buckets1_15 = (MR_Box) mercury__version_hash_table__conv0_Buckets1_15;
#line 621 "version_hash_table.m"
    {
#line 621 "version_hash_table.m"
      mercury__version_hash_table__reinsert_bindings_6_p_0(mercury__version_hash_table__TypeInfo_for_K_21, mercury__version_hash_table__TypeInfo_for_V_22, (MR_Integer) 0, mercury__version_hash_table__Buckets0_9, mercury__version_hash_table__HashPred_14, mercury__version_hash_table__NumBuckets_12, mercury__version_hash_table__Buckets1_15, &mercury__version_hash_table__Buckets_16);
    }
#line 622 "version_hash_table.m"
    {
#line 622 "version_hash_table.m"
      mercury__version_hash_table__HT_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 622 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants_6));
#line 622 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_13));
#line 622 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_14));
#line 622 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_16));
#line 622 "version_hash_table.m"
    }
#line 615 "version_hash_table.m"
    return mercury__version_hash_table__HT_10;
#line 615 "version_hash_table.m"
  }
#line 610 "version_hash_table.m"
}

#line 590 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__from_assoc_list_2_3_p_0(
#line 590 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_16,
#line 590 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_17,
#line 590 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__1_1,
#line 590 "version_hash_table.m"
  MR_Word mercury__version_hash_table__STATE_VARIABLE_HT_0_2,
#line 590 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__STATE_VARIABLE_HT_3)
#line 590 "version_hash_table.m"
{
#line 593 "version_hash_table.m"
  while (MR_TRUE)
#line 593 "version_hash_table.m"
    {
#line 593 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 593 "version_hash_table.m"
      {
#line 593 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 593 "version_hash_table.m"
        if ((mercury__version_hash_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 593 "version_hash_table.m"
          *mercury__version_hash_table__STATE_VARIABLE_HT_3 = mercury__version_hash_table__STATE_VARIABLE_HT_0_2;
#line 593 "version_hash_table.m"
        else
#line 594 "version_hash_table.m"
          {
#line 594 "version_hash_table.m"
            MR_Box mercury__version_hash_table__K_7;
#line 594 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_8;
#line 594 "version_hash_table.m"
            MR_Word mercury__version_hash_table__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 1)));
#line 594 "version_hash_table.m"
            MR_Word mercury__version_hash_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 0)));
#line 594 "version_hash_table.m"
            MR_Word mercury__version_hash_table__STATE_VARIABLE_HT_14_14;

#line 594 "version_hash_table.m"
            mercury__version_hash_table__K_7 = (MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_13_13, (MR_Integer) 0));
#line 594 "version_hash_table.m"
            mercury__version_hash_table__V_8 = (MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_13_13, (MR_Integer) 1));
#line 401 "version_hash_table.m"
            {
#line 401 "version_hash_table.m"
              mercury__version_hash_table__STATE_VARIABLE_HT_14_14 = mercury__version_hash_table__set_3_f_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__STATE_VARIABLE_HT_0_2, mercury__version_hash_table__K_7, mercury__version_hash_table__V_8);
            }
#line 596 "version_hash_table.m"
            /* direct tailcall eliminated */
#line 596 "version_hash_table.m"
            {
#line 596 "version_hash_table.m"
              MR_Word mercury__version_hash_table__HeadVar__1__tmp_copy_1 = mercury__version_hash_table__T_9;
#line 596 "version_hash_table.m"
              MR_Word mercury__version_hash_table__STATE_VARIABLE_HT_0__tmp_copy_2 = mercury__version_hash_table__STATE_VARIABLE_HT_14_14;

#line 596 "version_hash_table.m"
              mercury__version_hash_table__STATE_VARIABLE_HT_0_2 = mercury__version_hash_table__STATE_VARIABLE_HT_0__tmp_copy_2;
#line 596 "version_hash_table.m"
              mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__HeadVar__1__tmp_copy_1;
#line 596 "version_hash_table.m"
            }
#line 596 "version_hash_table.m"
            continue;
#line 594 "version_hash_table.m"
          }
#line 593 "version_hash_table.m"
      }
#line 593 "version_hash_table.m"
      break;
#line 593 "version_hash_table.m"
    }
#line 590 "version_hash_table.m"
}

#line 568 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__to_assoc_list_2_3_p_0(
#line 568 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_15,
#line 568 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_16,
#line 568 "version_hash_table.m"
  MR_Word mercury__version_hash_table__X_4,
#line 568 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL0_5,
#line 568 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__AL_6)
#line 568 "version_hash_table.m"
{
#line 575 "version_hash_table.m"
  while (MR_TRUE)
#line 575 "version_hash_table.m"
    {
#line 575 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 575 "version_hash_table.m"
      {
#line 575 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 575 "version_hash_table.m"
        if ((mercury__version_hash_table__X_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 574 "version_hash_table.m"
          *mercury__version_hash_table__AL_6 = mercury__version_hash_table__AL0_5;
#line 575 "version_hash_table.m"
        else
#line 575 "version_hash_table.m"
        if (((MR_tag((MR_Word) mercury__version_hash_table__X_4)) == (MR_mktag((MR_Integer) 2))))
#line 579 "version_hash_table.m"
          {
#line 579 "version_hash_table.m"
            MR_Word mercury__version_hash_table__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__X_4, (MR_Integer) 2)));
#line 579 "version_hash_table.m"
            MR_Word mercury__version_hash_table__AL1_10;
#line 579 "version_hash_table.m"
            MR_Word mercury__version_hash_table__V_11_11;
#line 579 "version_hash_table.m"
            MR_Box mercury__version_hash_table__K_13 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__X_4, (MR_Integer) 0));
#line 579 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_14 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__X_4, (MR_Integer) 1));

#line 580 "version_hash_table.m"
            {
#line 580 "version_hash_table.m"
              mercury__version_hash_table__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 580 "version_hash_table.m"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_11_11, 0) = mercury__version_hash_table__K_13;
#line 580 "version_hash_table.m"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_11_11, 1) = mercury__version_hash_table__V_14;
#line 580 "version_hash_table.m"
            }
#line 580 "version_hash_table.m"
            {
#line 580 "version_hash_table.m"
              mercury__version_hash_table__AL1_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "version_hash_table.m"
              MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL1_10, 0) = ((MR_Box) (mercury__version_hash_table__V_11_11));
#line 580 "version_hash_table.m"
              MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL1_10, 1) = ((MR_Box) (mercury__version_hash_table__AL0_5));
#line 580 "version_hash_table.m"
            }
#line 581 "version_hash_table.m"
            /* direct tailcall eliminated */
#line 581 "version_hash_table.m"
            {
#line 581 "version_hash_table.m"
              MR_Word mercury__version_hash_table__X__tmp_copy_4 = mercury__version_hash_table__T_9;
#line 581 "version_hash_table.m"
              MR_Word mercury__version_hash_table__AL0__tmp_copy_5 = mercury__version_hash_table__AL1_10;

#line 581 "version_hash_table.m"
              mercury__version_hash_table__AL0_5 = mercury__version_hash_table__AL0__tmp_copy_5;
#line 581 "version_hash_table.m"
              mercury__version_hash_table__X_4 = mercury__version_hash_table__X__tmp_copy_4;
#line 581 "version_hash_table.m"
            }
#line 581 "version_hash_table.m"
            continue;
#line 579 "version_hash_table.m"
          }
#line 575 "version_hash_table.m"
        else
#line 576 "version_hash_table.m"
          {
#line 576 "version_hash_table.m"
            MR_Box mercury__version_hash_table__K_7 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__X_4, (MR_Integer) 0));
#line 576 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__X_4, (MR_Integer) 1));
#line 576 "version_hash_table.m"
            MR_Word mercury__version_hash_table__V_12_12;

#line 577 "version_hash_table.m"
            {
#line 577 "version_hash_table.m"
              mercury__version_hash_table__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 577 "version_hash_table.m"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_12_12, 0) = mercury__version_hash_table__K_7;
#line 577 "version_hash_table.m"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_12_12, 1) = mercury__version_hash_table__V_8;
#line 577 "version_hash_table.m"
            }
#line 577 "version_hash_table.m"
            {
#line 577 "version_hash_table.m"
              MR_Word base;
#line 577 "version_hash_table.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "version_hash_table.m"
              *mercury__version_hash_table__AL_6 = base;
#line 577 "version_hash_table.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__version_hash_table__V_12_12));
#line 577 "version_hash_table.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__version_hash_table__AL0_5));
#line 577 "version_hash_table.m"
            }
#line 576 "version_hash_table.m"
          }
#line 575 "version_hash_table.m"
      }
#line 575 "version_hash_table.m"
      break;
#line 575 "version_hash_table.m"
    }
#line 568 "version_hash_table.m"
}

#line 438 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__alist_search_3_p_0(
#line 438 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_10,
#line 438 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_11,
#line 438 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL_4,
#line 438 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 438 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__V_6)
#line 438 "version_hash_table.m"
{
#line 445 "version_hash_table.m"
  while (MR_TRUE)
#line 445 "version_hash_table.m"
    {
#line 445 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 445 "version_hash_table.m"
      {
#line 445 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 445 "version_hash_table.m"
        if (((MR_tag((MR_Word) mercury__version_hash_table__AL_4)) == (MR_mktag((MR_Integer) 2))))
#line 448 "version_hash_table.m"
          {
#line 448 "version_hash_table.m"
            MR_Box mercury__version_hash_table__HK_7 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_4, (MR_Integer) 0));
#line 448 "version_hash_table.m"
            MR_Box mercury__version_hash_table__HV_8 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_4, (MR_Integer) 1));
#line 448 "version_hash_table.m"
            MR_Word mercury__version_hash_table__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_4, (MR_Integer) 2)));

#line 449 "version_hash_table.m"
            {
#line 449 "version_hash_table.m"
              mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_10, mercury__version_hash_table__HK_7, mercury__version_hash_table__K_5);
            }
#line 451 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 450 "version_hash_table.m"
              {
#line 450 "version_hash_table.m"
                *mercury__version_hash_table__V_6 = mercury__version_hash_table__HV_8;
#line 450 "version_hash_table.m"
                mercury__version_hash_table__succeeded = MR_TRUE;
#line 450 "version_hash_table.m"
              }
#line 451 "version_hash_table.m"
            else
#line 452 "version_hash_table.m"
              {
#line 452 "version_hash_table.m"
                /* direct tailcall eliminated */
#line 452 "version_hash_table.m"
                {
#line 452 "version_hash_table.m"
                  MR_Word mercury__version_hash_table__AL__tmp_copy_4 = mercury__version_hash_table__T_9;

#line 452 "version_hash_table.m"
                  mercury__version_hash_table__AL_4 = mercury__version_hash_table__AL__tmp_copy_4;
#line 452 "version_hash_table.m"
                }
#line 452 "version_hash_table.m"
                continue;
#line 452 "version_hash_table.m"
              }
#line 448 "version_hash_table.m"
          }
#line 445 "version_hash_table.m"
        else
#line 445 "version_hash_table.m"
        if (((MR_tag((MR_Word) mercury__version_hash_table__AL_4)) == (MR_mktag((MR_Integer) 1))))
#line 446 "version_hash_table.m"
          {
#line 446 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_12_12 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_4, (MR_Integer) 0));

#line 446 "version_hash_table.m"
            *mercury__version_hash_table__V_6 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_4, (MR_Integer) 1));
#line 446 "version_hash_table.m"
            {
#line 446 "version_hash_table.m"
              return mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_10, mercury__version_hash_table__K_5, mercury__version_hash_table__V_12_12);
            }
#line 446 "version_hash_table.m"
          }
#line 445 "version_hash_table.m"
        else
#line 445 "version_hash_table.m"
          mercury__version_hash_table__succeeded = MR_FALSE;
#line 445 "version_hash_table.m"
        return mercury__version_hash_table__succeeded;
#line 445 "version_hash_table.m"
      }
#line 445 "version_hash_table.m"
      break;
#line 445 "version_hash_table.m"
    }
#line 438 "version_hash_table.m"
}

#line 322 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__unsafe_hash_pred_cast_2_p_0(
#line 322 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_3,
#line 322 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__1_1,
#line 322 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__2_2)
#line 322 "version_hash_table.m"
{
#line 325 "version_hash_table.m"
  {
#line 325 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 325 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_4;

#line 328 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__unsafe_hash_pred_cast_2_p_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HeadVar__1_1 ;
		{
#line 328 "version_hash_table.m"

    HashPred = HashPred0;

#line 5540 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__HeadVar__2_2  = HashPred;
#line 328 "version_hash_table.m"
}
#line 325 "version_hash_table.m"
  }
#line 322 "version_hash_table.m"
}

#line 313 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__find_slot_2_4_p_0(
#line 313 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_12,
#line 313 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_5,
#line 313 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_6,
#line 313 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumBuckets_7,
#line 313 "version_hash_table.m"
  MR_Integer * mercury__version_hash_table__H_8)
#line 313 "version_hash_table.m"
{
#line 317 "version_hash_table.m"
  {
#line 317 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 317 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_9;
#line 317 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_10_10;
#line 318 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_5, (MR_Integer) 1)));
#line 318 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_9;

#line 318 "version_hash_table.m"
    {
#line 318 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_5), mercury__version_hash_table__K_6, &mercury__version_hash_table__conv1_Hash_9);
    }
#line 318 "version_hash_table.m"
    mercury__version_hash_table__Hash_9 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_9);
#line 320 "version_hash_table.m"
    mercury__version_hash_table__V_10_10 = (mercury__version_hash_table__NumBuckets_7 - (MR_Integer) 1);
#line 320 "version_hash_table.m"
    *mercury__version_hash_table__H_8 = (mercury__version_hash_table__Hash_9 & mercury__version_hash_table__V_10_10);
#line 317 "version_hash_table.m"
  }
#line 313 "version_hash_table.m"
}

#line 303 "version_hash_table.m"
MR_Integer MR_CALL 
mercury__version_hash_table__find_slot_2_f_0(
#line 303 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_13,
#line 303 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_14,
#line 303 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_4,
#line 303 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5)
#line 303 "version_hash_table.m"
{
#line 306 "version_hash_table.m"
  {
#line 306 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 306 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__H_6;
#line 306 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 2)));
#line 306 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_8;
#line 306 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_9_9;
#line 306 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_27;
#line 306 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_28_28;
#line 308 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 0)));
#line 308 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 1)));
#line 308 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 3)));
#line 325 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_30;
#line 293 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_17_17;
#line 293 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_18_18;
#line 293 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_19_19;
#line 293 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_20_20;
#line 162 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_12_31;
#line 318 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 318 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_27;

#line 328 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__find_slot_2_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HashPred0_7 ;
		{
#line 328 "version_hash_table.m"

    HashPred = HashPred0;

#line 5661 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_8  = HashPred;
#line 328 "version_hash_table.m"
}
#line 293 "version_hash_table.m"
    mercury__version_hash_table__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 0)));
#line 293 "version_hash_table.m"
    mercury__version_hash_table__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 1)));
#line 293 "version_hash_table.m"
    mercury__version_hash_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 2)));
#line 293 "version_hash_table.m"
    mercury__version_hash_table__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 3)));
#line 162 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__find_slot_2_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_17_17 , VA);
		{
#line 162 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 5689 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_9_9  = N;
#line 162 "version_array.opt"
}
#line 318 "version_hash_table.m"
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_8, (MR_Integer) 1)));
#line 318 "version_hash_table.m"
    {
#line 318 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_8), mercury__version_hash_table__K_5, &mercury__version_hash_table__conv1_Hash_27);
    }
#line 318 "version_hash_table.m"
    mercury__version_hash_table__Hash_27 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_27);
#line 320 "version_hash_table.m"
    mercury__version_hash_table__V_28_28 = (mercury__version_hash_table__V_9_9 - (MR_Integer) 1);
#line 320 "version_hash_table.m"
    mercury__version_hash_table__H_6 = (mercury__version_hash_table__Hash_27 & mercury__version_hash_table__V_28_28);
#line 306 "version_hash_table.m"
    return mercury__version_hash_table__H_6;
#line 306 "version_hash_table.m"
  }
#line 303 "version_hash_table.m"
}

#line 256 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__init_2_4_f_0(
#line 256 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_29,
#line 256 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_30,
#line 256 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_6,
#line 256 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__N_7,
#line 256 "version_hash_table.m"
  MR_Float mercury__version_hash_table__MaxOccupancy_8,
#line 256 "version_hash_table.m"
  MR_Word mercury__version_hash_table__NeedSafety_9)
#line 256 "version_hash_table.m"
{
#line 262 "version_hash_table.m"
  {
#line 262 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__N_7 <= (MR_Integer) 0);
#line 262 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_10;

#line 262 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 261 "version_hash_table.m"
      {
#line 261 "version_hash_table.m"
        MR_Word mercury__version_hash_table__TypeCtorInfo_31_31 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 261 "version_hash_table.m"
        MR_Word mercury__version_hash_table__V_15_15 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.new_hash_table: N =< 0"));

#line 261 "version_hash_table.m"
        {
#line 261 "version_hash_table.m"
          mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_31_31, ((MR_Box) (mercury__version_hash_table__V_15_15)));
        }
#line 261 "version_hash_table.m"
      }
#line 262 "version_hash_table.m"
    else
#line 265 "version_hash_table.m"
      {
#line 262 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_17_17;

#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__init_2_4_f_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 5774 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_17_17  = Bits;
#line 171 "int.opt"
}
#line 262 "version_hash_table.m"
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__N_7 >= mercury__version_hash_table__V_17_17);
#line 265 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 263 "version_hash_table.m"
          {
#line 263 "version_hash_table.m"
            MR_Word mercury__version_hash_table__TypeCtorInfo_32_32 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 263 "version_hash_table.m"
            MR_Word mercury__version_hash_table__V_18_18 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.new: N >= int.bits_per_int"));

#line 263 "version_hash_table.m"
            {
#line 263 "version_hash_table.m"
              mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_32_32, ((MR_Box) (mercury__version_hash_table__V_18_18)));
            }
#line 263 "version_hash_table.m"
          }
#line 265 "version_hash_table.m"
        else
#line 268 "version_hash_table.m"
          {
#line 265 "version_hash_table.m"
            mercury__version_hash_table__succeeded = (mercury__version_hash_table__MaxOccupancy_8 <= ((MR_Float) 0.0000000000000000));
#line 268 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 266 "version_hash_table.m"
              {
#line 266 "version_hash_table.m"
                MR_Word mercury__version_hash_table__TypeCtorInfo_33_33 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 266 "version_hash_table.m"
                MR_Word mercury__version_hash_table__V_21_21 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.new: MaxOccupancy =< 0.0"));

#line 266 "version_hash_table.m"
                {
#line 266 "version_hash_table.m"
                  mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_33_33, ((MR_Box) (mercury__version_hash_table__V_21_21)));
                }
#line 266 "version_hash_table.m"
              }
#line 268 "version_hash_table.m"
            else
#line 269 "version_hash_table.m"
              {
#line 269 "version_hash_table.m"
                MR_Integer mercury__version_hash_table__NumBuckets_11;
#line 269 "version_hash_table.m"
                MR_Integer mercury__version_hash_table__MaxOccupants_12;
#line 269 "version_hash_table.m"
                MR_Box mercury__version_hash_table__Buckets_13;
#line 269 "version_hash_table.m"
                MR_Float mercury__version_hash_table__V_24_24;
#line 269 "version_hash_table.m"
                MR_Float mercury__version_hash_table__V_25_25;

#line 269 "version_hash_table.m"
                {
#line 269 "version_hash_table.m"
                  mercury__version_hash_table__NumBuckets_11 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, mercury__version_hash_table__N_7);
                }
#line 81 "float.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__init_2_4_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal =  mercury__version_hash_table__NumBuckets_11 ;
		{
#line 81 "float.opt"

    FloatVal = IntVal;

#line 5854 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_25_25  = FloatVal;
#line 81 "float.opt"
}
#line 270 "version_hash_table.m"
                mercury__version_hash_table__V_24_24 = (mercury__version_hash_table__V_25_25 * mercury__version_hash_table__MaxOccupancy_8);
#line 84 "float.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__init_2_4_f_0

	MR_Float X;
	MR_Integer Ceil;

	X =  mercury__version_hash_table__V_24_24 ;
		{
#line 84 "float.opt"

    Ceil = (MR_Integer) ceil(X);

#line 5876 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__MaxOccupants_12  = Ceil;
#line 84 "float.opt"
}
#line 274 "version_hash_table.m"
                if ((mercury__version_hash_table__NeedSafety_9 == (MR_Integer) 0))
#line 275 "version_hash_table.m"
                  {
#line 275 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__TypeCtorInfo_36_36 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 275 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__TypeInfo_37_37;
#line 275 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__V_26_26;
#line 276 "version_hash_table.m"
                    MR_Box mercury__version_hash_table__conv0_Buckets_13;

#line 5896 "version_hash_table.c"
                    {
#line 5898 "version_hash_table.c"
                      mercury__version_hash_table__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5900 "version_hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_37_37, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_36_36));
#line 5902 "version_hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_37_37, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_29));
#line 5904 "version_hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_37_37, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_30));
#line 5906 "version_hash_table.c"
                    }
#line 276 "version_hash_table.m"
                    mercury__version_hash_table__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 276 "version_hash_table.m"
                    {
#line 276 "version_hash_table.m"
                      mercury__version_hash_table__conv0_Buckets_13 = mercury__version_array__unsafe_init_2_f_0(mercury__version_hash_table__TypeInfo_37_37, mercury__version_hash_table__NumBuckets_11, ((MR_Box) (mercury__version_hash_table__V_26_26)));
                    }
#line 276 "version_hash_table.m"
                    mercury__version_hash_table__Buckets_13 = (MR_Box) mercury__version_hash_table__conv0_Buckets_13;
#line 275 "version_hash_table.m"
                  }
#line 274 "version_hash_table.m"
                else
#line 272 "version_hash_table.m"
                  {
#line 272 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__TypeCtorInfo_34_34 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 272 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__TypeInfo_35_35;
#line 272 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__V_27_27;
#line 273 "version_hash_table.m"
                    MR_Box mercury__version_hash_table__conv1_Buckets_13;

#line 5932 "version_hash_table.c"
                    {
#line 5934 "version_hash_table.c"
                      mercury__version_hash_table__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5936 "version_hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_35_35, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_34_34));
#line 5938 "version_hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_35_35, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_29));
#line 5940 "version_hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_35_35, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_30));
#line 5942 "version_hash_table.c"
                    }
#line 273 "version_hash_table.m"
                    mercury__version_hash_table__V_27_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 273 "version_hash_table.m"
                    {
#line 273 "version_hash_table.m"
                      mercury__version_hash_table__conv1_Buckets_13 = mercury__version_array__init_2_f_0(mercury__version_hash_table__TypeInfo_35_35, mercury__version_hash_table__NumBuckets_11, ((MR_Box) (mercury__version_hash_table__V_27_27)));
                    }
#line 273 "version_hash_table.m"
                    mercury__version_hash_table__Buckets_13 = (MR_Box) mercury__version_hash_table__conv1_Buckets_13;
#line 272 "version_hash_table.m"
                  }
#line 278 "version_hash_table.m"
                {
#line 278 "version_hash_table.m"
                  mercury__version_hash_table__HT_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 278 "version_hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 0) = ((MR_Box) ((MR_Integer) 0));
#line 278 "version_hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_12));
#line 278 "version_hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_6));
#line 278 "version_hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_13));
#line 278 "version_hash_table.m"
                }
#line 269 "version_hash_table.m"
              }
#line 268 "version_hash_table.m"
          }
#line 265 "version_hash_table.m"
      }
#line 262 "version_hash_table.m"
    return mercury__version_hash_table__HT_10;
#line 262 "version_hash_table.m"
  }
#line 256 "version_hash_table.m"
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
#line 841 "version_hash_table.m"
  {
#line 841 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 839 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_12_12 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2;
#line 839 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_13_13;

#line 6004 "version_hash_table.c"
    {
#line 6006 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6008 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_13_13, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_12_12));
#line 6010 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_13_13, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_10));
#line 6012 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_13_13, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_11));
#line 6014 "version_hash_table.c"
    }
#line 839 "version_hash_table.m"
    mercury__version_hash_table__succeeded = (((MR_Word) mercury__version_hash_table__A_3) == ((MR_Word) mercury__version_hash_table__B_4));
#line 841 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 840 "version_hash_table.m"
      mercury__version_hash_table__succeeded = MR_TRUE;
#line 841 "version_hash_table.m"
    else
#line 845 "version_hash_table.m"
      {
#line 845 "version_hash_table.m"
        MR_Word mercury__version_hash_table__TypeCtorInfo_22_44;
#line 845 "version_hash_table.m"
        MR_Word mercury__version_hash_table__TypeInfo_23_45;
#line 845 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__NumA_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 0)));
#line 845 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__NumB_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__B_4, (MR_Integer) 0)));
#line 845 "version_hash_table.m"
        MR_Box mercury__version_hash_table__Buckets_34;
#line 845 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_10_50;
#line 845 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_11_51;
#line 298 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 1)));
#line 298 "version_hash_table.m"
        MR_Word mercury__version_hash_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 2)));
#line 298 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V_23_23 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 3)));
#line 298 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__B_4, (MR_Integer) 1)));
#line 298 "version_hash_table.m"
        MR_Word mercury__version_hash_table__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__B_4, (MR_Integer) 2)));
#line 298 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__B_4, (MR_Integer) 3)));
#line 812 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_37_37;
#line 812 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_38_38;
#line 812 "version_hash_table.m"
        MR_Word mercury__version_hash_table__V_39_39;
#line 162 "version_array.opt"
        MR_Word mercury__version_hash_table__TypeInfo_23_55;

#line 847 "version_hash_table.m"
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__NumA_5 == mercury__version_hash_table__NumB_6);
#line 845 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 845 "version_hash_table.m"
          {
#line 851 "version_hash_table.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 812 "version_hash_table.m"
            mercury__version_hash_table__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 0)));
#line 812 "version_hash_table.m"
            mercury__version_hash_table__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 1)));
#line 812 "version_hash_table.m"
            mercury__version_hash_table__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 2)));
#line 812 "version_hash_table.m"
            mercury__version_hash_table__Buckets_34 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 3)));
#line 6077 "version_hash_table.c"
            mercury__version_hash_table__TypeCtorInfo_22_44 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 188 "version_array.opt"
            mercury__version_hash_table__V_10_50 = (MR_Integer) 0;
#line 6081 "version_hash_table.c"
            {
#line 6083 "version_hash_table.c"
              mercury__version_hash_table__TypeInfo_23_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6085 "version_hash_table.c"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_45, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_44));
#line 6087 "version_hash_table.c"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_45, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_10));
#line 6089 "version_hash_table.c"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_45, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_11));
#line 6091 "version_hash_table.c"
            }
#line 162 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__equal_2_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_34 , VA);
		{
#line 162 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6106 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_51  = N;
#line 162 "version_array.opt"
}
#line 190 "version_array.opt"
            {
#line 190 "version_array.opt"
              return mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_53_44_32_49_48_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_10, mercury__version_hash_table__TypeInfo_for_V_11, mercury__version_hash_table__TypeInfo_for_K_10, mercury__version_hash_table__TypeInfo_for_V_11, mercury__version_hash_table__B_4, mercury__version_hash_table__TypeInfo_23_45, mercury__version_hash_table__Buckets_34, mercury__version_hash_table__V_10_50, mercury__version_hash_table__V_11_51);
            }
#line 845 "version_hash_table.m"
          }
#line 845 "version_hash_table.m"
      }
#line 841 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 841 "version_hash_table.m"
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
#line 810 "version_hash_table.m"
  {
#line 810 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 810 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 810 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
#line 810 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 810 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_29;
#line 812 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 812 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 812 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
#line 162 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_23_31;

#line 6169 "version_hash_table.c"
    {
#line 6171 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6173 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_22));
#line 6175 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_16));
#line 6177 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_17));
#line 6179 "version_hash_table.c"
    }
#line 162 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_5

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_8 , VA);
		{
#line 162 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6194 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_29  = N;
#line 162 "version_array.opt"
}
#line 190 "version_array.opt"
    {
#line 190 "version_array.opt"
      return mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__TypeInfo_for_T_18, mercury__version_hash_table__P_5, mercury__version_hash_table__TypeInfo_23_23, mercury__version_hash_table__Buckets_8, (MR_Integer) 0, mercury__version_hash_table__V_11_29, mercury__version_hash_table__STATE_VARIABLE_A_0_9, mercury__version_hash_table__STATE_VARIABLE_A_10);
    }
#line 810 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 810 "version_hash_table.m"
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
#line 810 "version_hash_table.m"
  {
#line 810 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 810 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 810 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
#line 810 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 810 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_29;
#line 812 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 812 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 812 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
#line 162 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_23_31;

#line 6253 "version_hash_table.c"
    {
#line 6255 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6257 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_22));
#line 6259 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_16));
#line 6261 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_17));
#line 6263 "version_hash_table.c"
    }
#line 162 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_4

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_8 , VA);
		{
#line 162 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6278 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_29  = N;
#line 162 "version_array.opt"
}
#line 190 "version_array.opt"
    {
#line 190 "version_array.opt"
      return mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__TypeInfo_for_T_18, mercury__version_hash_table__P_5, mercury__version_hash_table__TypeInfo_23_23, mercury__version_hash_table__Buckets_8, (MR_Integer) 0, mercury__version_hash_table__V_11_29, mercury__version_hash_table__STATE_VARIABLE_A_0_9, mercury__version_hash_table__STATE_VARIABLE_A_10);
    }
#line 810 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 810 "version_hash_table.m"
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
#line 810 "version_hash_table.m"
  {
#line 810 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 810 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 810 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
#line 810 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 810 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_29;
#line 812 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 812 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 812 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
#line 162 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_23_31;

#line 6337 "version_hash_table.c"
    {
#line 6339 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6341 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_22));
#line 6343 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_16));
#line 6345 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_17));
#line 6347 "version_hash_table.c"
    }
#line 162 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_3

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_8 , VA);
		{
#line 162 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6362 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_29  = N;
#line 162 "version_array.opt"
}
#line 190 "version_array.opt"
    {
#line 190 "version_array.opt"
      return mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__TypeInfo_for_T_18, mercury__version_hash_table__P_5, mercury__version_hash_table__TypeInfo_23_23, mercury__version_hash_table__Buckets_8, (MR_Integer) 0, mercury__version_hash_table__V_11_29, mercury__version_hash_table__STATE_VARIABLE_A_0_9, mercury__version_hash_table__STATE_VARIABLE_A_10);
    }
#line 810 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 810 "version_hash_table.m"
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
#line 810 "version_hash_table.m"
  {
#line 810 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 810 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 810 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
#line 810 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 810 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_29;
#line 812 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 812 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 812 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
#line 162 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_23_31;

#line 6421 "version_hash_table.c"
    {
#line 6423 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6425 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_22));
#line 6427 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_16));
#line 6429 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_17));
#line 6431 "version_hash_table.c"
    }
#line 162 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_2

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_8 , VA);
		{
#line 162 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6446 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_29  = N;
#line 162 "version_array.opt"
}
#line 190 "version_array.opt"
    {
#line 190 "version_array.opt"
      mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__TypeInfo_for_T_18, mercury__version_hash_table__P_5, mercury__version_hash_table__TypeInfo_23_23, mercury__version_hash_table__Buckets_8, (MR_Integer) 0, mercury__version_hash_table__V_11_29, mercury__version_hash_table__STATE_VARIABLE_A_0_9, mercury__version_hash_table__STATE_VARIABLE_A_10);
#line 190 "version_array.opt"
      return;
    }
#line 810 "version_hash_table.m"
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
#line 810 "version_hash_table.m"
  {
#line 810 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 810 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 810 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
#line 810 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 810 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_29;
#line 812 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 812 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 812 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
#line 162 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_23_31;

#line 6505 "version_hash_table.c"
    {
#line 6507 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6509 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_22));
#line 6511 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_16));
#line 6513 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_17));
#line 6515 "version_hash_table.c"
    }
#line 162 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_1

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_8 , VA);
		{
#line 162 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6530 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_29  = N;
#line 162 "version_array.opt"
}
#line 190 "version_array.opt"
    {
#line 190 "version_array.opt"
      mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__TypeInfo_for_T_18, mercury__version_hash_table__P_5, mercury__version_hash_table__TypeInfo_23_23, mercury__version_hash_table__Buckets_8, (MR_Integer) 0, mercury__version_hash_table__V_11_29, mercury__version_hash_table__STATE_VARIABLE_A_0_9, mercury__version_hash_table__STATE_VARIABLE_A_10);
#line 190 "version_array.opt"
      return;
    }
#line 810 "version_hash_table.m"
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
#line 810 "version_hash_table.m"
  {
#line 810 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 810 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 810 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
#line 810 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 810 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_29;
#line 812 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 812 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 812 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
#line 162 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_23_31;

#line 6589 "version_hash_table.c"
    {
#line 6591 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6593 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_22));
#line 6595 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_16));
#line 6597 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_17));
#line 6599 "version_hash_table.c"
    }
#line 162 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_8 , VA);
		{
#line 162 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6614 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_29  = N;
#line 162 "version_array.opt"
}
#line 190 "version_array.opt"
    {
#line 190 "version_array.opt"
      mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__TypeInfo_for_T_18, mercury__version_hash_table__P_5, mercury__version_hash_table__TypeInfo_23_23, mercury__version_hash_table__Buckets_8, (MR_Integer) 0, mercury__version_hash_table__V_11_29, mercury__version_hash_table__STATE_VARIABLE_A_0_9, mercury__version_hash_table__STATE_VARIABLE_A_10);
#line 190 "version_array.opt"
      return;
    }
#line 810 "version_hash_table.m"
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
#line 787 "version_hash_table.m"
  {
#line 787 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 787 "version_hash_table.m"
    MR_Box mercury__version_hash_table__X_8;
#line 787 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_20_20 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 787 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_21_21;
#line 787 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_9 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 787 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_27;
#line 789 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 789 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 789 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
#line 162 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_21_29;

#line 6673 "version_hash_table.c"
    {
#line 6675 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6677 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_21_21, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_20_20));
#line 6679 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_21_21, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_14));
#line 6681 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_21_21, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_15));
#line 6683 "version_hash_table.c"
    }
#line 162 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_9 , VA);
		{
#line 162 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6698 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_27  = N;
#line 162 "version_array.opt"
}
#line 190 "version_array.opt"
    {
#line 190 "version_array.opt"
      mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_14, mercury__version_hash_table__TypeInfo_for_V_15, mercury__version_hash_table__TypeInfo_for_T_16, mercury__version_hash_table__F_5, mercury__version_hash_table__TypeInfo_21_21, mercury__version_hash_table__Buckets_9, (MR_Integer) 0, mercury__version_hash_table__V_11_27, mercury__version_hash_table__X0_7, &mercury__version_hash_table__X_8);
    }
#line 787 "version_hash_table.m"
    return mercury__version_hash_table__X_8;
#line 787 "version_hash_table.m"
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
#line 587 "version_hash_table.m"
  {
#line 587 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 587 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_6;
#line 587 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_7_7;

#line 252 "version_hash_table.m"
    {
#line 252 "version_hash_table.m"
      mercury__version_hash_table__V_7_7 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HashPred_4, (MR_Integer) 7, (MR_Float) 0.90000000000000002, (MR_Integer) 1);
    }
#line 588 "version_hash_table.m"
    {
#line 588 "version_hash_table.m"
      mercury__version_hash_table__from_assoc_list_2_3_p_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__AList_5, mercury__version_hash_table__V_7_7, &mercury__version_hash_table__HT_6);
    }
#line 587 "version_hash_table.m"
    return mercury__version_hash_table__HT_6;
#line 587 "version_hash_table.m"
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
#line 584 "version_hash_table.m"
  {
#line 584 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 584 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_10;
#line 584 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_11_11;

#line 252 "version_hash_table.m"
    {
#line 252 "version_hash_table.m"
      mercury__version_hash_table__V_11_11 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_12, mercury__version_hash_table__TypeInfo_for_V_13, mercury__version_hash_table__HashPred_6, mercury__version_hash_table__N_7, mercury__version_hash_table__MaxOccupants_8, (MR_Integer) 1);
    }
#line 585 "version_hash_table.m"
    {
#line 585 "version_hash_table.m"
      mercury__version_hash_table__from_assoc_list_2_3_p_0(mercury__version_hash_table__TypeInfo_for_K_12, mercury__version_hash_table__TypeInfo_for_V_13, mercury__version_hash_table__AList_9, mercury__version_hash_table__V_11_11, &mercury__version_hash_table__HT_10);
    }
#line 584 "version_hash_table.m"
    return mercury__version_hash_table__HT_10;
#line 584 "version_hash_table.m"
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
#line 562 "version_hash_table.m"
  {
#line 562 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 562 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL_4;
#line 562 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_16_16 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 562 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_17_17;
#line 562 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 3)));
#line 562 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 562 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_27;
#line 564 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 0)));
#line 564 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 1)));
#line 564 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 2)));
#line 162 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_17_31;

#line 6835 "version_hash_table.c"
    {
#line 6837 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6839 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_17_17, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_16_16));
#line 6841 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_17_17, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_11));
#line 6843 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_17_17, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_12));
#line 6845 "version_hash_table.c"
    }
#line 162 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__to_assoc_list_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_5 , VA);
		{
#line 162 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6860 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_27  = N;
#line 162 "version_array.opt"
}
#line 190 "version_array.opt"
    {
#line 190 "version_array.opt"
      mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_11, mercury__version_hash_table__TypeInfo_for_V_12, mercury__version_hash_table__TypeInfo_17_17, mercury__version_hash_table__Buckets_5, (MR_Integer) 0, mercury__version_hash_table__V_11_27, mercury__version_hash_table__V_7_7, &mercury__version_hash_table__AL_4);
    }
#line 562 "version_hash_table.m"
    return mercury__version_hash_table__AL_4;
#line 562 "version_hash_table.m"
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
#line 428 "version_hash_table.m"
  {
#line 428 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 428 "version_hash_table.m"
    {
#line 428 "version_hash_table.m"
      return mercury__version_hash_table__succeeded = mercury__version_hash_table__search_2_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HT_4, mercury__version_hash_table__K_5, mercury__version_hash_table__HeadVar__3_3);
    }
#line 428 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 428 "version_hash_table.m"
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
#line 430 "version_hash_table.m"
  {
#line 430 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 430 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_15_15;
#line 430 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_16_16;
#line 430 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__H_7;
#line 430 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_8;
#line 430 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL_9;
#line 430 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 2)));
#line 430 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_21;
#line 430 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_22_22;
#line 430 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_38;
#line 430 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_39_39;
#line 308 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 0)));
#line 308 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 1)));
#line 308 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_25_25 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 3)));
#line 325 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_44;
#line 293 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_28_28;
#line 293 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_29_29;
#line 293 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_30_30;
#line 293 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_31_31;
#line 162 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_12_45;
#line 318 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 318 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_38;
#line 433 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_10_10;
#line 433 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_11;
#line 433 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_12_12;
#line 158 "version_array.opt"
    MR_Box mercury__version_hash_table__conv2_AL_9;

#line 328 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__search_2_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HashPred0_20 ;
		{
#line 328 "version_hash_table.m"

    HashPred = HashPred0;

#line 6994 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_21  = HashPred;
#line 328 "version_hash_table.m"
}
#line 293 "version_hash_table.m"
    mercury__version_hash_table__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 0)));
#line 293 "version_hash_table.m"
    mercury__version_hash_table__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 1)));
#line 293 "version_hash_table.m"
    mercury__version_hash_table__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 2)));
#line 293 "version_hash_table.m"
    mercury__version_hash_table__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 3)));
#line 162 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__search_2_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_28_28 , VA);
		{
#line 162 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 7022 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_22_22  = N;
#line 162 "version_array.opt"
}
#line 318 "version_hash_table.m"
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_21, (MR_Integer) 1)));
#line 318 "version_hash_table.m"
    {
#line 318 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_21), mercury__version_hash_table__K_5, &mercury__version_hash_table__conv1_Hash_38);
    }
#line 318 "version_hash_table.m"
    mercury__version_hash_table__Hash_38 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_38);
#line 320 "version_hash_table.m"
    mercury__version_hash_table__V_39_39 = (mercury__version_hash_table__V_22_22 - (MR_Integer) 1);
#line 320 "version_hash_table.m"
    mercury__version_hash_table__H_7 = (mercury__version_hash_table__Hash_38 & mercury__version_hash_table__V_39_39);
#line 433 "version_hash_table.m"
    mercury__version_hash_table__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 0)));
#line 433 "version_hash_table.m"
    mercury__version_hash_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 1)));
#line 433 "version_hash_table.m"
    mercury__version_hash_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 2)));
#line 433 "version_hash_table.m"
    mercury__version_hash_table__Buckets_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 3)));
#line 7050 "version_hash_table.c"
    mercury__version_hash_table__TypeCtorInfo_15_15 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 7052 "version_hash_table.c"
    {
#line 7054 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7056 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_16_16, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_15_15));
#line 7058 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_16_16, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_13));
#line 7060 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_16_16, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_14));
#line 7062 "version_hash_table.c"
    }
#line 158 "version_array.opt"
    {
#line 158 "version_array.opt"
      mercury__version_hash_table__conv2_AL_9 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_16_16, (MR_Box) mercury__version_hash_table__Buckets_8, mercury__version_hash_table__H_7);
    }
#line 158 "version_array.opt"
    mercury__version_hash_table__AL_9 = ((MR_Word) mercury__version_hash_table__conv2_AL_9);
#line 436 "version_hash_table.m"
    {
#line 436 "version_hash_table.m"
      return mercury__version_hash_table__succeeded = mercury__version_hash_table__alist_search_3_p_0(mercury__version_hash_table__TypeInfo_for_K_13, mercury__version_hash_table__TypeInfo_for_V_14, mercury__version_hash_table__AL_9, mercury__version_hash_table__K_5, mercury__version_hash_table__V_6);
    }
#line 430 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 430 "version_hash_table.m"
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
#line 511 "version_hash_table.m"
  {
#line 511 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 511 "version_hash_table.m"
    MR_Box mercury__version_hash_table__HeadVar__3_3;
#line 511 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_10;

#line 512 "version_hash_table.m"
    {
#line 512 "version_hash_table.m"
      mercury__version_hash_table__succeeded = mercury__version_hash_table__search_2_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HT_5, mercury__version_hash_table__K_4, &mercury__version_hash_table__V_10);
    }
#line 511 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 513 "version_hash_table.m"
      mercury__version_hash_table__HeadVar__3_3 = mercury__version_hash_table__V_10;
#line 511 "version_hash_table.m"
    else
#line 514 "version_hash_table.m"
      {
#line 514 "version_hash_table.m"
        {
#line 514 "version_hash_table.m"
          mercury__version_hash_table__HeadVar__3_3 = mercury__require__func_error_1_f_0(mercury__version_hash_table__TypeInfo_for_V_7, (MR_String) "version_hash_table.lookup: key not found");
        }
#line 514 "version_hash_table.m"
      }
#line 511 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__3_3;
#line 511 "version_hash_table.m"
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
#line 511 "version_hash_table.m"
  {
#line 511 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 511 "version_hash_table.m"
    MR_Box mercury__version_hash_table__HeadVar__3_3;
#line 511 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_6;

#line 512 "version_hash_table.m"
    {
#line 512 "version_hash_table.m"
      mercury__version_hash_table__succeeded = mercury__version_hash_table__search_2_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HT_4, mercury__version_hash_table__K_5, &mercury__version_hash_table__V_6);
    }
#line 511 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 513 "version_hash_table.m"
      mercury__version_hash_table__HeadVar__3_3 = mercury__version_hash_table__V_6;
#line 511 "version_hash_table.m"
    else
#line 514 "version_hash_table.m"
      {
#line 514 "version_hash_table.m"
        {
#line 514 "version_hash_table.m"
          mercury__version_hash_table__HeadVar__3_3 = mercury__require__func_error_1_f_0(mercury__version_hash_table__TypeInfo_for_V_9, (MR_String) "version_hash_table.lookup: key not found");
        }
#line 514 "version_hash_table.m"
      }
#line 511 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__3_3;
#line 511 "version_hash_table.m"
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
#line 536 "version_hash_table.m"
  {
#line 536 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 536 "version_hash_table.m"
    {
#line 536 "version_hash_table.m"
      *mercury__version_hash_table__HeadVar__3_3 = mercury__version_hash_table__delete_2_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HT_5, mercury__version_hash_table__K_4);
    }
#line 536 "version_hash_table.m"
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
#line 521 "version_hash_table.m"
  {
#line 521 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 521 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_6;
#line 521 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_19_19;
#line 521 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_20_20;
#line 521 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__H_7;
#line 521 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumOccupants0_8;
#line 521 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__MaxOccupants_9;
#line 521 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_10;
#line 521 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets0_11;
#line 521 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL0_12;
#line 521 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 2)));
#line 521 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_25;
#line 521 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_26_26;
#line 521 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_42;
#line 521 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_43_43;
#line 308 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 0)));
#line 308 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 1)));
#line 308 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_29_29 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 3)));
#line 325 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_52;
#line 293 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_32_32;
#line 293 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_33_33;
#line 293 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_34_34;
#line 293 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_35_35;
#line 162 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_12_53;
#line 318 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 318 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_42;
#line 158 "version_array.opt"
    MR_Box mercury__version_hash_table__conv2_AL0_12;
#line 532 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL_13;

#line 328 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__delete_2_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HashPred0_24 ;
		{
#line 328 "version_hash_table.m"

    HashPred = HashPred0;

#line 7296 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_25  = HashPred;
#line 328 "version_hash_table.m"
}
#line 293 "version_hash_table.m"
    mercury__version_hash_table__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 0)));
#line 293 "version_hash_table.m"
    mercury__version_hash_table__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 1)));
#line 293 "version_hash_table.m"
    mercury__version_hash_table__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 2)));
#line 293 "version_hash_table.m"
    mercury__version_hash_table__V_32_32 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 3)));
#line 162 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__delete_2_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_32_32 , VA);
		{
#line 162 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 7324 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_26_26  = N;
#line 162 "version_array.opt"
}
#line 318 "version_hash_table.m"
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_25, (MR_Integer) 1)));
#line 318 "version_hash_table.m"
    {
#line 318 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_25), mercury__version_hash_table__K_5, &mercury__version_hash_table__conv1_Hash_42);
    }
#line 318 "version_hash_table.m"
    mercury__version_hash_table__Hash_42 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_42);
#line 320 "version_hash_table.m"
    mercury__version_hash_table__V_43_43 = (mercury__version_hash_table__V_26_26 - (MR_Integer) 1);
#line 320 "version_hash_table.m"
    mercury__version_hash_table__H_7 = (mercury__version_hash_table__Hash_42 & mercury__version_hash_table__V_43_43);
#line 525 "version_hash_table.m"
    mercury__version_hash_table__NumOccupants0_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 0)));
#line 525 "version_hash_table.m"
    mercury__version_hash_table__MaxOccupants_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 1)));
#line 525 "version_hash_table.m"
    mercury__version_hash_table__HashPred_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 2)));
#line 525 "version_hash_table.m"
    mercury__version_hash_table__Buckets0_11 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 3)));
#line 7352 "version_hash_table.c"
    mercury__version_hash_table__TypeCtorInfo_19_19 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 7354 "version_hash_table.c"
    {
#line 7356 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7358 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_20_20, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_19_19));
#line 7360 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_20_20, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_17));
#line 7362 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_20_20, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_18));
#line 7364 "version_hash_table.c"
    }
#line 158 "version_array.opt"
    {
#line 158 "version_array.opt"
      mercury__version_hash_table__conv2_AL0_12 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_20_20, (MR_Box) mercury__version_hash_table__Buckets0_11, mercury__version_hash_table__H_7);
    }
#line 158 "version_array.opt"
    mercury__version_hash_table__AL0_12 = ((MR_Word) mercury__version_hash_table__conv2_AL0_12);
#line 528 "version_hash_table.m"
    {
#line 528 "version_hash_table.m"
      mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(mercury__version_hash_table__TypeInfo_for_K_17, mercury__version_hash_table__AL0_12, mercury__version_hash_table__K_5, &mercury__version_hash_table__AL_13);
    }
#line 532 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 529 "version_hash_table.m"
      {
#line 529 "version_hash_table.m"
        MR_Box mercury__version_hash_table__Buckets_14;
#line 529 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__NumOccupants_15;
#line 161 "version_array.opt"
        MR_Box mercury__version_hash_table__conv3_Buckets_14;

#line 161 "version_array.opt"
        {
#line 161 "version_array.opt"
          mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_20_20, mercury__version_hash_table__H_7, ((MR_Box) (mercury__version_hash_table__AL_13)), (MR_Box) mercury__version_hash_table__Buckets0_11, &mercury__version_hash_table__conv3_Buckets_14);
        }
#line 161 "version_array.opt"
        mercury__version_hash_table__Buckets_14 = (MR_Box) mercury__version_hash_table__conv3_Buckets_14;
#line 530 "version_hash_table.m"
        mercury__version_hash_table__NumOccupants_15 = (mercury__version_hash_table__NumOccupants0_8 - (MR_Integer) 1);
#line 531 "version_hash_table.m"
        {
#line 531 "version_hash_table.m"
          mercury__version_hash_table__HT_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 531 "version_hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants_15));
#line 531 "version_hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_9));
#line 531 "version_hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_10));
#line 531 "version_hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_14));
#line 531 "version_hash_table.m"
        }
#line 529 "version_hash_table.m"
      }
#line 532 "version_hash_table.m"
    else
#line 533 "version_hash_table.m"
      mercury__version_hash_table__HT_6 = mercury__version_hash_table__HT0_4;
#line 521 "version_hash_table.m"
    return mercury__version_hash_table__HT_6;
#line 521 "version_hash_table.m"
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
#line 507 "version_hash_table.m"
  {
#line 507 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 507 "version_hash_table.m"
    {
#line 507 "version_hash_table.m"
      *mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__det_update_3_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HT_7, mercury__version_hash_table__K_5, mercury__version_hash_table__V_6);
    }
#line 507 "version_hash_table.m"
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
#line 491 "version_hash_table.m"
  {
#line 491 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 491 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_8;
#line 491 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_26_26;
#line 491 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_27_27;
#line 491 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__H_9;
#line 491 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets0_10;
#line 491 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL0_11;
#line 491 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL_13;
#line 491 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_14;
#line 491 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 491 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_33;
#line 491 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_34_34;
#line 491 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_50;
#line 491 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_51_51;
#line 308 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 308 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 308 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_37_37 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 325 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_60;
#line 293 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_40_40;
#line 293 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_41_41;
#line 293 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_42_42;
#line 293 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_43_43;
#line 162 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_12_61;
#line 318 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 318 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_50;
#line 494 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_17_17;
#line 494 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_18_18;
#line 494 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_19_19;
#line 158 "version_array.opt"
    MR_Box mercury__version_hash_table__conv2_AL0_11;
#line 499 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL1_12;
#line 161 "version_array.opt"
    MR_Box mercury__version_hash_table__conv3_Buckets_14;
#line 504 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_20_20;
#line 504 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_21_21;
#line 504 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_22_22;
#line 504 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_23_23;

#line 328 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__det_update_3_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HashPred0_32 ;
		{
#line 328 "version_hash_table.m"

    HashPred = HashPred0;

#line 7558 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_33  = HashPred;
#line 328 "version_hash_table.m"
}
#line 293 "version_hash_table.m"
    mercury__version_hash_table__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 293 "version_hash_table.m"
    mercury__version_hash_table__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 293 "version_hash_table.m"
    mercury__version_hash_table__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 293 "version_hash_table.m"
    mercury__version_hash_table__V_40_40 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 162 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__det_update_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_40_40 , VA);
		{
#line 162 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 7586 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_34_34  = N;
#line 162 "version_array.opt"
}
#line 318 "version_hash_table.m"
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_33, (MR_Integer) 1)));
#line 318 "version_hash_table.m"
    {
#line 318 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_33), mercury__version_hash_table__K_6, &mercury__version_hash_table__conv1_Hash_50);
    }
#line 318 "version_hash_table.m"
    mercury__version_hash_table__Hash_50 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_50);
#line 320 "version_hash_table.m"
    mercury__version_hash_table__V_51_51 = (mercury__version_hash_table__V_34_34 - (MR_Integer) 1);
#line 320 "version_hash_table.m"
    mercury__version_hash_table__H_9 = (mercury__version_hash_table__Hash_50 & mercury__version_hash_table__V_51_51);
#line 494 "version_hash_table.m"
    mercury__version_hash_table__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 494 "version_hash_table.m"
    mercury__version_hash_table__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 494 "version_hash_table.m"
    mercury__version_hash_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 494 "version_hash_table.m"
    mercury__version_hash_table__Buckets0_10 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 7614 "version_hash_table.c"
    mercury__version_hash_table__TypeCtorInfo_26_26 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 7616 "version_hash_table.c"
    {
#line 7618 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7620 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_27_27, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_26_26));
#line 7622 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_27_27, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_24));
#line 7624 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_27_27, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_25));
#line 7626 "version_hash_table.c"
    }
#line 158 "version_array.opt"
    {
#line 158 "version_array.opt"
      mercury__version_hash_table__conv2_AL0_11 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_27_27, (MR_Box) mercury__version_hash_table__Buckets0_10, mercury__version_hash_table__H_9);
    }
#line 158 "version_array.opt"
    mercury__version_hash_table__AL0_11 = ((MR_Word) mercury__version_hash_table__conv2_AL0_11);
#line 497 "version_hash_table.m"
    {
#line 497 "version_hash_table.m"
      mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(mercury__version_hash_table__TypeInfo_for_K_24, mercury__version_hash_table__AL0_11, mercury__version_hash_table__K_6, mercury__version_hash_table__V_7, &mercury__version_hash_table__AL1_12);
    }
#line 499 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 498 "version_hash_table.m"
      mercury__version_hash_table__AL_13 = mercury__version_hash_table__AL1_12;
#line 499 "version_hash_table.m"
    else
#line 500 "version_hash_table.m"
      {
#line 500 "version_hash_table.m"
        MR_Word mercury__version_hash_table__TypeCtorInfo_28_28 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 500 "version_hash_table.m"
        MR_Word mercury__version_hash_table__V_15_15 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.det_update: key not found"));

#line 500 "version_hash_table.m"
        {
#line 500 "version_hash_table.m"
          mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_28_28, ((MR_Box) (mercury__version_hash_table__V_15_15)));
        }
#line 500 "version_hash_table.m"
      }
#line 161 "version_array.opt"
    {
#line 161 "version_array.opt"
      mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_27_27, mercury__version_hash_table__H_9, ((MR_Box) (mercury__version_hash_table__AL_13)), (MR_Box) mercury__version_hash_table__Buckets0_10, &mercury__version_hash_table__conv3_Buckets_14);
    }
#line 161 "version_array.opt"
    mercury__version_hash_table__Buckets_14 = (MR_Box) mercury__version_hash_table__conv3_Buckets_14;
#line 504 "version_hash_table.m"
    mercury__version_hash_table__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 504 "version_hash_table.m"
    mercury__version_hash_table__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 504 "version_hash_table.m"
    mercury__version_hash_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 504 "version_hash_table.m"
    mercury__version_hash_table__V_23_23 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 504 "version_hash_table.m"
    {
#line 504 "version_hash_table.m"
      mercury__version_hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 504 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 0) = ((MR_Box) (mercury__version_hash_table__V_20_20));
#line 504 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 1) = ((MR_Box) (mercury__version_hash_table__V_21_21));
#line 504 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 2) = ((MR_Box) (mercury__version_hash_table__V_22_22));
#line 504 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_14));
#line 504 "version_hash_table.m"
    }
#line 491 "version_hash_table.m"
    return mercury__version_hash_table__HT_8;
#line 491 "version_hash_table.m"
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
#line 487 "version_hash_table.m"
  {
#line 487 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 487 "version_hash_table.m"
    {
#line 487 "version_hash_table.m"
      *mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__det_insert_3_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HT_7, mercury__version_hash_table__K_5, mercury__version_hash_table__V_6);
    }
#line 487 "version_hash_table.m"
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
#line 458 "version_hash_table.m"
  {
#line 458 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 458 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_8;
#line 458 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_29_29;
#line 458 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_30_30;
#line 458 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__H_9;
#line 458 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumOccupants0_10;
#line 458 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__MaxOccupants_11;
#line 458 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_12;
#line 458 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets0_13;
#line 458 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL0_14;
#line 458 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL_15;
#line 458 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_22;
#line 458 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumOccupants_23;
#line 458 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 458 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_48;
#line 458 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_49_49;
#line 458 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_65;
#line 458 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_66_66;
#line 308 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 308 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 308 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_52_52 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 325 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_75;
#line 293 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_55_55;
#line 293 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_56_56;
#line 293 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_57_57;
#line 293 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_58_58;
#line 162 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_12_76;
#line 318 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 318 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_65;
#line 158 "version_array.opt"
    MR_Box mercury__version_hash_table__conv2_AL0_14;
#line 161 "version_array.opt"
    MR_Box mercury__version_hash_table__conv3_Buckets_22;

#line 328 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__det_insert_3_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HashPred0_47 ;
		{
#line 328 "version_hash_table.m"

    HashPred = HashPred0;

#line 7821 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_48  = HashPred;
#line 328 "version_hash_table.m"
}
#line 293 "version_hash_table.m"
    mercury__version_hash_table__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 293 "version_hash_table.m"
    mercury__version_hash_table__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 293 "version_hash_table.m"
    mercury__version_hash_table__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 293 "version_hash_table.m"
    mercury__version_hash_table__V_55_55 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 162 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__det_insert_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_55_55 , VA);
		{
#line 162 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 7849 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_49_49  = N;
#line 162 "version_array.opt"
}
#line 318 "version_hash_table.m"
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_48, (MR_Integer) 1)));
#line 318 "version_hash_table.m"
    {
#line 318 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_48), mercury__version_hash_table__K_6, &mercury__version_hash_table__conv1_Hash_65);
    }
#line 318 "version_hash_table.m"
    mercury__version_hash_table__Hash_65 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_65);
#line 320 "version_hash_table.m"
    mercury__version_hash_table__V_66_66 = (mercury__version_hash_table__V_49_49 - (MR_Integer) 1);
#line 320 "version_hash_table.m"
    mercury__version_hash_table__H_9 = (mercury__version_hash_table__Hash_65 & mercury__version_hash_table__V_66_66);
#line 462 "version_hash_table.m"
    mercury__version_hash_table__NumOccupants0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 462 "version_hash_table.m"
    mercury__version_hash_table__MaxOccupants_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 462 "version_hash_table.m"
    mercury__version_hash_table__HashPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 462 "version_hash_table.m"
    mercury__version_hash_table__Buckets0_13 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 7877 "version_hash_table.c"
    mercury__version_hash_table__TypeCtorInfo_29_29 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 7879 "version_hash_table.c"
    {
#line 7881 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7883 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_30_30, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_29_29));
#line 7885 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_30_30, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_27));
#line 7887 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_30_30, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_28));
#line 7889 "version_hash_table.c"
    }
#line 158 "version_array.opt"
    {
#line 158 "version_array.opt"
      mercury__version_hash_table__conv2_AL0_14 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_30_30, (MR_Box) mercury__version_hash_table__Buckets0_13, mercury__version_hash_table__H_9);
    }
#line 158 "version_array.opt"
    mercury__version_hash_table__AL0_14 = ((MR_Word) mercury__version_hash_table__conv2_AL0_14);
#line 468 "version_hash_table.m"
    if ((mercury__version_hash_table__AL0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 467 "version_hash_table.m"
      {
#line 467 "version_hash_table.m"
        mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "version_hash_table.m"
        MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
#line 467 "version_hash_table.m"
        MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 467 "version_hash_table.m"
      }
#line 468 "version_hash_table.m"
    else
#line 468 "version_hash_table.m"
    if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_14)) == (MR_mktag((MR_Integer) 2))))
#line 475 "version_hash_table.m"
      {
#line 472 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V_21_21;

#line 472 "version_hash_table.m"
        {
#line 472 "version_hash_table.m"
          mercury__version_hash_table__succeeded = mercury__version_hash_table__alist_search_3_p_0(mercury__version_hash_table__TypeInfo_for_K_27, mercury__version_hash_table__TypeInfo_for_V_28, mercury__version_hash_table__AL0_14, mercury__version_hash_table__K_6, &mercury__version_hash_table__V_21_21);
        }
#line 475 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 473 "version_hash_table.m"
          {
#line 473 "version_hash_table.m"
            MR_Word mercury__version_hash_table__TypeCtorInfo_31_31 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 473 "version_hash_table.m"
            MR_Word mercury__version_hash_table__V_24_24 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.det_insert: key already present"));

#line 473 "version_hash_table.m"
            {
#line 473 "version_hash_table.m"
              mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_31_31, ((MR_Box) (mercury__version_hash_table__V_24_24)));
            }
#line 473 "version_hash_table.m"
          }
#line 475 "version_hash_table.m"
        else
#line 476 "version_hash_table.m"
          {
#line 476 "version_hash_table.m"
            mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 476 "version_hash_table.m"
            MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
#line 476 "version_hash_table.m"
            MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 476 "version_hash_table.m"
            MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 2) = ((MR_Box) (mercury__version_hash_table__AL0_14));
#line 476 "version_hash_table.m"
          }
#line 475 "version_hash_table.m"
      }
#line 468 "version_hash_table.m"
    else
#line 475 "version_hash_table.m"
      {
#line 472 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V_32_32;

#line 472 "version_hash_table.m"
        {
#line 472 "version_hash_table.m"
          mercury__version_hash_table__succeeded = mercury__version_hash_table__alist_search_3_p_0(mercury__version_hash_table__TypeInfo_for_K_27, mercury__version_hash_table__TypeInfo_for_V_28, mercury__version_hash_table__AL0_14, mercury__version_hash_table__K_6, &mercury__version_hash_table__V_32_32);
        }
#line 475 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 473 "version_hash_table.m"
          {
#line 473 "version_hash_table.m"
            MR_Word mercury__version_hash_table__TypeCtorInfo_31_35 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 473 "version_hash_table.m"
            MR_Word mercury__version_hash_table__V_33_33 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.det_insert: key already present"));

#line 473 "version_hash_table.m"
            {
#line 473 "version_hash_table.m"
              mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_31_35, ((MR_Box) (mercury__version_hash_table__V_33_33)));
            }
#line 473 "version_hash_table.m"
          }
#line 475 "version_hash_table.m"
        else
#line 476 "version_hash_table.m"
          {
#line 476 "version_hash_table.m"
            mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 476 "version_hash_table.m"
            MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
#line 476 "version_hash_table.m"
            MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 476 "version_hash_table.m"
            MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 2) = ((MR_Box) (mercury__version_hash_table__AL0_14));
#line 476 "version_hash_table.m"
          }
#line 475 "version_hash_table.m"
      }
#line 161 "version_array.opt"
    {
#line 161 "version_array.opt"
      mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_30_30, mercury__version_hash_table__H_9, ((MR_Box) (mercury__version_hash_table__AL_15)), (MR_Box) mercury__version_hash_table__Buckets0_13, &mercury__version_hash_table__conv3_Buckets_22);
    }
#line 161 "version_array.opt"
    mercury__version_hash_table__Buckets_22 = (MR_Box) mercury__version_hash_table__conv3_Buckets_22;
#line 480 "version_hash_table.m"
    mercury__version_hash_table__NumOccupants_23 = (mercury__version_hash_table__NumOccupants0_10 + (MR_Integer) 1);
#line 481 "version_hash_table.m"
    mercury__version_hash_table__succeeded = (mercury__version_hash_table__NumOccupants_23 > mercury__version_hash_table__MaxOccupants_11);
#line 483 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 482 "version_hash_table.m"
      {
#line 482 "version_hash_table.m"
        return mercury__version_hash_table__HT_8 = mercury__version_hash_table__expand_4_f_0(mercury__version_hash_table__TypeInfo_for_K_27, mercury__version_hash_table__TypeInfo_for_V_28, mercury__version_hash_table__NumOccupants_23, mercury__version_hash_table__MaxOccupants_11, mercury__version_hash_table__HashPred_12, mercury__version_hash_table__Buckets_22);
      }
#line 483 "version_hash_table.m"
    else
#line 484 "version_hash_table.m"
      {
#line 484 "version_hash_table.m"
        mercury__version_hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 484 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants_23));
#line 484 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_11));
#line 484 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_12));
#line 484 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_22));
#line 484 "version_hash_table.m"
      }
#line 458 "version_hash_table.m"
    return mercury__version_hash_table__HT_8;
#line 458 "version_hash_table.m"
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
#line 401 "version_hash_table.m"
  {
#line 401 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 401 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__4_4;

#line 401 "version_hash_table.m"
    {
#line 401 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__set_3_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HT_6, mercury__version_hash_table__K_5, mercury__version_hash_table__V_7);
    }
#line 401 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__4_4;
#line 401 "version_hash_table.m"
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
#line 403 "version_hash_table.m"
  {
#line 403 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 403 "version_hash_table.m"
    {
#line 403 "version_hash_table.m"
      *mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__set_3_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HT_7, mercury__version_hash_table__K_5, mercury__version_hash_table__V_6);
    }
#line 403 "version_hash_table.m"
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
#line 357 "version_hash_table.m"
  {
#line 357 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 357 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_8;
#line 357 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_28_28;
#line 357 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_29_29;
#line 357 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__H_9;
#line 357 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumOccupants0_10;
#line 357 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__MaxOccupants_11;
#line 357 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_12;
#line 357 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets0_13;
#line 357 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL0_14;
#line 357 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL_15;
#line 357 "version_hash_table.m"
    MR_Word mercury__version_hash_table__MayExpand_16;
#line 357 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_23;
#line 357 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 357 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_34;
#line 357 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_35_35;
#line 357 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_51;
#line 357 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_52_52;
#line 308 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 308 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 308 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_38_38 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 325 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_61;
#line 293 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_41_41;
#line 293 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_42_42;
#line 293 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_43_43;
#line 293 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_44_44;
#line 162 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_12_62;
#line 318 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 318 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_51;
#line 158 "version_array.opt"
    MR_Box mercury__version_hash_table__conv2_AL0_14;
#line 161 "version_array.opt"
    MR_Box mercury__version_hash_table__conv3_Buckets_23;

#line 328 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__set_3_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HashPred0_33 ;
		{
#line 328 "version_hash_table.m"

    HashPred = HashPred0;

#line 8200 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_34  = HashPred;
#line 328 "version_hash_table.m"
}
#line 293 "version_hash_table.m"
    mercury__version_hash_table__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 293 "version_hash_table.m"
    mercury__version_hash_table__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 293 "version_hash_table.m"
    mercury__version_hash_table__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 293 "version_hash_table.m"
    mercury__version_hash_table__V_41_41 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 162 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__set_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_41_41 , VA);
		{
#line 162 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 8228 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_35_35  = N;
#line 162 "version_array.opt"
}
#line 318 "version_hash_table.m"
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_34, (MR_Integer) 1)));
#line 318 "version_hash_table.m"
    {
#line 318 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_34), mercury__version_hash_table__K_6, &mercury__version_hash_table__conv1_Hash_51);
    }
#line 318 "version_hash_table.m"
    mercury__version_hash_table__Hash_51 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_51);
#line 320 "version_hash_table.m"
    mercury__version_hash_table__V_52_52 = (mercury__version_hash_table__V_35_35 - (MR_Integer) 1);
#line 320 "version_hash_table.m"
    mercury__version_hash_table__H_9 = (mercury__version_hash_table__Hash_51 & mercury__version_hash_table__V_52_52);
#line 361 "version_hash_table.m"
    mercury__version_hash_table__NumOccupants0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 361 "version_hash_table.m"
    mercury__version_hash_table__MaxOccupants_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 361 "version_hash_table.m"
    mercury__version_hash_table__HashPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 361 "version_hash_table.m"
    mercury__version_hash_table__Buckets0_13 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 8256 "version_hash_table.c"
    mercury__version_hash_table__TypeCtorInfo_28_28 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 8258 "version_hash_table.c"
    {
#line 8260 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8262 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_29_29, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_28_28));
#line 8264 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_29_29, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_26));
#line 8266 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_29_29, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_27));
#line 8268 "version_hash_table.c"
    }
#line 158 "version_array.opt"
    {
#line 158 "version_array.opt"
      mercury__version_hash_table__conv2_AL0_14 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_29_29, (MR_Box) mercury__version_hash_table__Buckets0_13, mercury__version_hash_table__H_9);
    }
#line 158 "version_array.opt"
    mercury__version_hash_table__AL0_14 = ((MR_Word) mercury__version_hash_table__conv2_AL0_14);
#line 368 "version_hash_table.m"
    if ((mercury__version_hash_table__AL0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 365 "version_hash_table.m"
      {
#line 366 "version_hash_table.m"
        {
#line 366 "version_hash_table.m"
          mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "version_hash_table.m"
          MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
#line 366 "version_hash_table.m"
          MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 366 "version_hash_table.m"
        }
#line 367 "version_hash_table.m"
        mercury__version_hash_table__MayExpand_16 = (MR_Integer) 1;
#line 365 "version_hash_table.m"
      }
#line 368 "version_hash_table.m"
    else
#line 368 "version_hash_table.m"
    if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_14)) == (MR_mktag((MR_Integer) 2))))
#line 382 "version_hash_table.m"
      {
#line 382 "version_hash_table.m"
        MR_Word mercury__version_hash_table__AL1_22;

#line 379 "version_hash_table.m"
        {
#line 379 "version_hash_table.m"
          mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(mercury__version_hash_table__TypeInfo_for_K_26, mercury__version_hash_table__AL0_14, mercury__version_hash_table__K_6, mercury__version_hash_table__V_7, &mercury__version_hash_table__AL1_22);
        }
#line 382 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 380 "version_hash_table.m"
          {
#line 380 "version_hash_table.m"
            mercury__version_hash_table__AL_15 = mercury__version_hash_table__AL1_22;
#line 381 "version_hash_table.m"
            mercury__version_hash_table__MayExpand_16 = (MR_Integer) 0;
#line 380 "version_hash_table.m"
          }
#line 382 "version_hash_table.m"
        else
#line 383 "version_hash_table.m"
          {
#line 383 "version_hash_table.m"
            {
#line 383 "version_hash_table.m"
              mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 383 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
#line 383 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 383 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 2) = ((MR_Box) (mercury__version_hash_table__AL0_14));
#line 383 "version_hash_table.m"
            }
#line 384 "version_hash_table.m"
            mercury__version_hash_table__MayExpand_16 = (MR_Integer) 1;
#line 383 "version_hash_table.m"
          }
#line 382 "version_hash_table.m"
      }
#line 368 "version_hash_table.m"
    else
#line 369 "version_hash_table.m"
      {
#line 369 "version_hash_table.m"
        MR_Box mercury__version_hash_table__K0_17 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_14, (MR_Integer) 0));
#line 369 "version_hash_table.m"
        MR_Box mercury__version_hash_table___V0_18 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_14, (MR_Integer) 1));

#line 370 "version_hash_table.m"
        {
#line 370 "version_hash_table.m"
          mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_26, mercury__version_hash_table__K0_17, mercury__version_hash_table__K_6);
        }
#line 373 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 371 "version_hash_table.m"
          {
#line 371 "version_hash_table.m"
            {
#line 371 "version_hash_table.m"
              mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "version_hash_table.m"
              MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K0_17;
#line 371 "version_hash_table.m"
              MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 371 "version_hash_table.m"
            }
#line 372 "version_hash_table.m"
            mercury__version_hash_table__MayExpand_16 = (MR_Integer) 0;
#line 371 "version_hash_table.m"
          }
#line 373 "version_hash_table.m"
        else
#line 374 "version_hash_table.m"
          {
#line 374 "version_hash_table.m"
            {
#line 374 "version_hash_table.m"
              mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 374 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
#line 374 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 374 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 2) = ((MR_Box) (mercury__version_hash_table__AL0_14));
#line 374 "version_hash_table.m"
            }
#line 375 "version_hash_table.m"
            mercury__version_hash_table__MayExpand_16 = (MR_Integer) 1;
#line 374 "version_hash_table.m"
          }
#line 369 "version_hash_table.m"
      }
#line 161 "version_array.opt"
    {
#line 161 "version_array.opt"
      mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_29_29, mercury__version_hash_table__H_9, ((MR_Box) (mercury__version_hash_table__AL_15)), (MR_Box) mercury__version_hash_table__Buckets0_13, &mercury__version_hash_table__conv3_Buckets_23);
    }
#line 161 "version_array.opt"
    mercury__version_hash_table__Buckets_23 = (MR_Box) mercury__version_hash_table__conv3_Buckets_23;
#line 391 "version_hash_table.m"
    if ((mercury__version_hash_table__MayExpand_16 == (MR_Integer) 0))
#line 390 "version_hash_table.m"
      {
#line 390 "version_hash_table.m"
        mercury__version_hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 390 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants0_10));
#line 390 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_11));
#line 390 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_12));
#line 390 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_23));
#line 390 "version_hash_table.m"
      }
#line 391 "version_hash_table.m"
    else
#line 392 "version_hash_table.m"
      {
#line 392 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__NumOccupants_24 = (mercury__version_hash_table__NumOccupants0_10 + (MR_Integer) 1);

#line 394 "version_hash_table.m"
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__NumOccupants_24 > mercury__version_hash_table__MaxOccupants_11);
#line 396 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 395 "version_hash_table.m"
          {
#line 395 "version_hash_table.m"
            return mercury__version_hash_table__HT_8 = mercury__version_hash_table__expand_4_f_0(mercury__version_hash_table__TypeInfo_for_K_26, mercury__version_hash_table__TypeInfo_for_V_27, mercury__version_hash_table__NumOccupants_24, mercury__version_hash_table__MaxOccupants_11, mercury__version_hash_table__HashPred_12, mercury__version_hash_table__Buckets_23);
          }
#line 396 "version_hash_table.m"
        else
#line 397 "version_hash_table.m"
          {
#line 397 "version_hash_table.m"
            mercury__version_hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 397 "version_hash_table.m"
            MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants_24));
#line 397 "version_hash_table.m"
            MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_11));
#line 397 "version_hash_table.m"
            MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_12));
#line 397 "version_hash_table.m"
            MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_23));
#line 397 "version_hash_table.m"
          }
#line 392 "version_hash_table.m"
      }
#line 357 "version_hash_table.m"
    return mercury__version_hash_table__HT_8;
#line 357 "version_hash_table.m"
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
#line 349 "version_hash_table.m"
  {
#line 349 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 349 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_4;
#line 350 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_12_12 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 350 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_13_13;
#line 350 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumOccupants_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_3, (MR_Integer) 0)));
#line 350 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__MaxOccupants_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_3, (MR_Integer) 1)));
#line 350 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_3, (MR_Integer) 2)));
#line 350 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets0_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_3, (MR_Integer) 3)));
#line 350 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_9;
#line 351 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv0_Buckets_9;

#line 8493 "version_hash_table.c"
    {
#line 8495 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8497 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_13_13, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_12_12));
#line 8499 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_13_13, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_10));
#line 8501 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_13_13, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_11));
#line 8503 "version_hash_table.c"
    }
#line 351 "version_hash_table.m"
    {
#line 351 "version_hash_table.m"
      mercury__version_hash_table__conv0_Buckets_9 = mercury__version_array__copy_1_f_0(mercury__version_hash_table__TypeInfo_13_13, (MR_Box) mercury__version_hash_table__Buckets0_8);
    }
#line 351 "version_hash_table.m"
    mercury__version_hash_table__Buckets_9 = (MR_Box) mercury__version_hash_table__conv0_Buckets_9;
#line 352 "version_hash_table.m"
    {
#line 352 "version_hash_table.m"
      mercury__version_hash_table__HT_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 352 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants_5));
#line 352 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_6));
#line 352 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_7));
#line 352 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_9));
#line 352 "version_hash_table.m"
    }
#line 349 "version_hash_table.m"
    return mercury__version_hash_table__HT_4;
#line 349 "version_hash_table.m"
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
#line 297 "version_hash_table.m"
  {
#line 297 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 297 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumOccupants_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 0)));
#line 298 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 1)));
#line 298 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 2)));
#line 298 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 3)));

#line 297 "version_hash_table.m"
    return mercury__version_hash_table__NumOccupants_4;
#line 297 "version_hash_table.m"
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
#line 292 "version_hash_table.m"
  {
#line 292 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 292 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumBuckets_4;
#line 293 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_5_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 3)));
#line 293 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 0)));
#line 293 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 1)));
#line 293 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 2)));
#line 162 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_12_13;

#line 162 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__num_buckets_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_5_5 , VA);
		{
#line 162 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 8605 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__NumBuckets_4  = N;
#line 162 "version_array.opt"
}
#line 292 "version_hash_table.m"
    return mercury__version_hash_table__NumBuckets_4;
#line 292 "version_hash_table.m"
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
#line 735 "version_hash_table.m"
  while (MR_TRUE)
#line 735 "version_hash_table.m"
    {
#line 735 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 735 "version_hash_table.m"
      {
#line 735 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;
#line 735 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__Int_5;
#line 731 "version_hash_table.m"
        MR_Word mercury__version_hash_table__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 107 "builtin.opt"
        MR_Box mercury__version_hash_table__conv0_Int_5;

#line 107 "builtin.opt"
        {
#line 107 "builtin.opt"
          mercury__version_hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__version_hash_table__TypeInfo_for_T_38, mercury__version_hash_table__TypeCtorInfo_39_39, mercury__version_hash_table__T_3, &mercury__version_hash_table__conv0_Int_5);
        }
#line 107 "builtin.opt"
        if (mercury__version_hash_table__succeeded)
#line 107 "builtin.opt"
          {
#line 107 "builtin.opt"
            mercury__version_hash_table__Int_5 = ((MR_Integer) mercury__version_hash_table__conv0_Int_5);
#line 107 "builtin.opt"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 107 "builtin.opt"
          }
#line 735 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 679 "version_hash_table.m"
          {
#line 682 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__generic_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__version_hash_table__Int_5 ;
		{
#line 682 "version_hash_table.m"

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

#line 8700 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__H_4  = H;
#line 682 "version_hash_table.m"
}
#line 679 "version_hash_table.m"
          }
#line 735 "version_hash_table.m"
        else
#line 739 "version_hash_table.m"
          {
#line 739 "version_hash_table.m"
            MR_String mercury__version_hash_table__String_6;
#line 735 "version_hash_table.m"
            MR_Word mercury__version_hash_table__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 107 "builtin.opt"
            MR_Box mercury__version_hash_table__conv1_String_6;

#line 107 "builtin.opt"
            {
#line 107 "builtin.opt"
              mercury__version_hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__version_hash_table__TypeInfo_for_T_38, mercury__version_hash_table__TypeCtorInfo_40_40, mercury__version_hash_table__T_3, &mercury__version_hash_table__conv1_String_6);
            }
#line 107 "builtin.opt"
            if (mercury__version_hash_table__succeeded)
#line 107 "builtin.opt"
              {
#line 107 "builtin.opt"
                mercury__version_hash_table__String_6 = ((MR_String) mercury__version_hash_table__conv1_String_6);
#line 107 "builtin.opt"
                mercury__version_hash_table__succeeded = MR_TRUE;
#line 107 "builtin.opt"
              }
#line 739 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 711 "version_hash_table.m"
              {
#line 711 "version_hash_table.m"
                *mercury__version_hash_table__H_4 = mercury__string__hash_1_f_0(mercury__version_hash_table__String_6);
              }
#line 739 "version_hash_table.m"
            else
#line 743 "version_hash_table.m"
              {
#line 743 "version_hash_table.m"
                MR_Float mercury__version_hash_table__Float_7;
#line 739 "version_hash_table.m"
                MR_Word mercury__version_hash_table__TypeCtorInfo_41_41 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 107 "builtin.opt"
                MR_Box mercury__version_hash_table__conv2_Float_7;

#line 107 "builtin.opt"
                {
#line 107 "builtin.opt"
                  mercury__version_hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__version_hash_table__TypeInfo_for_T_38, mercury__version_hash_table__TypeCtorInfo_41_41, mercury__version_hash_table__T_3, &mercury__version_hash_table__conv2_Float_7);
                }
#line 107 "builtin.opt"
                if (mercury__version_hash_table__succeeded)
#line 107 "builtin.opt"
                  {
#line 107 "builtin.opt"
                    mercury__version_hash_table__Float_7 = MR_unbox_float(mercury__version_hash_table__conv2_Float_7);
#line 107 "builtin.opt"
                    mercury__version_hash_table__succeeded = MR_TRUE;
#line 107 "builtin.opt"
                  }
#line 743 "version_hash_table.m"
                if (mercury__version_hash_table__succeeded)
#line 112 "float.opt"
                  {
#line 112 "float.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__generic_hash_2_p_0

	MR_Float F;
	MR_Integer H;

	F =  mercury__version_hash_table__Float_7 ;
		{
#line 112 "float.opt"

    H = MR_hash_float(F);

#line 8785 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__H_4  = H;
#line 112 "float.opt"
}
#line 112 "float.opt"
                  }
#line 743 "version_hash_table.m"
                else
#line 747 "version_hash_table.m"
                  {
#line 747 "version_hash_table.m"
                    MR_Char mercury__version_hash_table__Char_8;
#line 743 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 107 "builtin.opt"
                    MR_Box mercury__version_hash_table__conv3_Char_8;

#line 107 "builtin.opt"
                    {
#line 107 "builtin.opt"
                      mercury__version_hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__version_hash_table__TypeInfo_for_T_38, mercury__version_hash_table__TypeCtorInfo_42_42, mercury__version_hash_table__T_3, &mercury__version_hash_table__conv3_Char_8);
                    }
#line 107 "builtin.opt"
                    if (mercury__version_hash_table__succeeded)
#line 107 "builtin.opt"
                      {
#line 107 "builtin.opt"
                        mercury__version_hash_table__Char_8 = ((MR_Char) (MR_Word) mercury__version_hash_table__conv3_Char_8);
#line 107 "builtin.opt"
                        mercury__version_hash_table__succeeded = MR_TRUE;
#line 107 "builtin.opt"
                      }
#line 747 "version_hash_table.m"
                    if (mercury__version_hash_table__succeeded)
#line 723 "version_hash_table.m"
                      {
#line 723 "version_hash_table.m"
                        MR_Integer mercury__version_hash_table__V_63_63;

#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__generic_hash_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__version_hash_table__Char_8 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 8840 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_63_63  = Int;
#line 66 "char.opt"
}
#line 682 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__generic_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__version_hash_table__V_63_63 ;
		{
#line 682 "version_hash_table.m"

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

#line 8881 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__H_4  = H;
#line 682 "version_hash_table.m"
}
#line 723 "version_hash_table.m"
                      }
#line 747 "version_hash_table.m"
                    else
#line 751 "version_hash_table.m"
                      {
#line 751 "version_hash_table.m"
                        MR_Word mercury__version_hash_table__Univ_9;
#line 747 "version_hash_table.m"
                        MR_Word mercury__version_hash_table__TypeCtorInfo_43_43 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 107 "builtin.opt"
                        MR_Box mercury__version_hash_table__conv4_Univ_9;

#line 107 "builtin.opt"
                        {
#line 107 "builtin.opt"
                          mercury__version_hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__version_hash_table__TypeInfo_for_T_38, mercury__version_hash_table__TypeCtorInfo_43_43, mercury__version_hash_table__T_3, &mercury__version_hash_table__conv4_Univ_9);
                        }
#line 107 "builtin.opt"
                        if (mercury__version_hash_table__succeeded)
#line 107 "builtin.opt"
                          {
#line 107 "builtin.opt"
                            mercury__version_hash_table__Univ_9 = ((MR_Word) mercury__version_hash_table__conv4_Univ_9);
#line 107 "builtin.opt"
                            mercury__version_hash_table__succeeded = MR_TRUE;
#line 107 "builtin.opt"
                          }
#line 751 "version_hash_table.m"
                        if (mercury__version_hash_table__succeeded)
#line 749 "version_hash_table.m"
                          {
#line 749 "version_hash_table.m"
                            MR_Word mercury__version_hash_table__TypeInfo_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__Univ_9, (MR_Integer) 0)));
#line 749 "version_hash_table.m"
                            MR_Box mercury__version_hash_table__V_22_22 = (MR_hl_field(MR_mktag(0), mercury__version_hash_table__Univ_9, (MR_Integer) 1));

#line 749 "version_hash_table.m"
                            /* direct tailcall eliminated */
#line 749 "version_hash_table.m"
                            {
#line 749 "version_hash_table.m"
                              MR_Word mercury__version_hash_table__TypeInfo_for_T__tmp_copy_38 = mercury__version_hash_table__TypeInfo_44_44;
#line 749 "version_hash_table.m"
                              MR_Box mercury__version_hash_table__T__tmp_copy_3 = mercury__version_hash_table__V_22_22;

#line 749 "version_hash_table.m"
                              mercury__version_hash_table__T_3 = mercury__version_hash_table__T__tmp_copy_3;
#line 749 "version_hash_table.m"
                              mercury__version_hash_table__TypeInfo_for_T_38 = mercury__version_hash_table__TypeInfo_for_T__tmp_copy_38;
#line 749 "version_hash_table.m"
                            }
#line 749 "version_hash_table.m"
                            continue;
#line 749 "version_hash_table.m"
                          }
#line 751 "version_hash_table.m"
                        else
#line 762 "version_hash_table.m"
                          {
#line 762 "version_hash_table.m"
                            MR_Word mercury__version_hash_table__TypeInfo_45_45;
#line 762 "version_hash_table.m"
                            MR_ArrayPtr mercury__version_hash_table__Array_10;
#line 751 "version_hash_table.m"
                            MR_ArrayPtr mercury__version_hash_table__conv5_Array_10;

#line 751 "version_hash_table.m"
                            {
#line 751 "version_hash_table.m"
                              mercury__version_hash_table__succeeded = mercury__array__dynamic_cast_to_array_2_p_0(mercury__version_hash_table__TypeInfo_for_T_38, &mercury__version_hash_table__TypeInfo_45_45, mercury__version_hash_table__T_3, &mercury__version_hash_table__conv5_Array_10);
                            }
#line 751 "version_hash_table.m"
                            if (mercury__version_hash_table__succeeded)
#line 751 "version_hash_table.m"
                              {
#line 751 "version_hash_table.m"
                                mercury__version_hash_table__Array_10 = (MR_ArrayPtr) mercury__version_hash_table__conv5_Array_10;
#line 751 "version_hash_table.m"
                                mercury__version_hash_table__succeeded = MR_TRUE;
#line 751 "version_hash_table.m"
                              }
#line 762 "version_hash_table.m"
                            if (mercury__version_hash_table__succeeded)
#line 753 "version_hash_table.m"
                              {
#line 753 "version_hash_table.m"
                                {
#line 753 "version_hash_table.m"
                                  *mercury__version_hash_table__H_4 = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(mercury__version_hash_table__TypeInfo_45_45, mercury__version_hash_table__Array_10, (MR_Integer) 0);
                                }
#line 753 "version_hash_table.m"
                              }
#line 762 "version_hash_table.m"
                            else
#line 764 "version_hash_table.m"
                              {
#line 764 "version_hash_table.m"
                                MR_String mercury__version_hash_table__FunctorName_15;
#line 764 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__Arity_16;
#line 764 "version_hash_table.m"
                                MR_Word mercury__version_hash_table__Args_17;
#line 764 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__H0_18;
#line 764 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__H1_19;
#line 764 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__V_73_73;
#line 764 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__V_74_74;
#line 764 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__V_75_75;
#line 764 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__V_76_76;

#line 764 "version_hash_table.m"
                                {
#line 764 "version_hash_table.m"
                                  mercury__deconstruct__deconstruct_5_p_1(mercury__version_hash_table__TypeInfo_for_T_38, mercury__version_hash_table__T_3, (MR_Integer) 1, &mercury__version_hash_table__FunctorName_15, &mercury__version_hash_table__Arity_16, &mercury__version_hash_table__Args_17);
                                }
#line 711 "version_hash_table.m"
                                {
#line 711 "version_hash_table.m"
                                  mercury__version_hash_table__H0_18 = mercury__string__hash_1_f_0(mercury__version_hash_table__FunctorName_15);
                                }
#line 782 "version_hash_table.m"
                                mercury__version_hash_table__V_73_73 = (mercury__version_hash_table__H0_18 << mercury__version_hash_table__Arity_16);
#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__generic_hash_2_p_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 9027 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_76_76  = Bits;
#line 171 "int.opt"
}
#line 783 "version_hash_table.m"
                                mercury__version_hash_table__V_75_75 = (mercury__version_hash_table__V_76_76 - mercury__version_hash_table__Arity_16);
#line 783 "version_hash_table.m"
                                mercury__version_hash_table__V_74_74 = (mercury__version_hash_table__H0_18 >> mercury__version_hash_table__V_75_75);
#line 782 "version_hash_table.m"
                                mercury__version_hash_table__H1_19 = (mercury__version_hash_table__V_73_73 ^ mercury__version_hash_table__V_74_74);
#line 767 "version_hash_table.m"
                                {
#line 767 "version_hash_table.m"
                                  mercury__version_hash_table__foldl__ho13_4_p_in__list_0(mercury__version_hash_table__Args_17, mercury__version_hash_table__H1_19, mercury__version_hash_table__H_4);
#line 767 "version_hash_table.m"
                                  return;
                                }
#line 764 "version_hash_table.m"
                              }
#line 762 "version_hash_table.m"
                          }
#line 751 "version_hash_table.m"
                      }
#line 747 "version_hash_table.m"
                  }
#line 743 "version_hash_table.m"
              }
#line 739 "version_hash_table.m"
          }
#line 735 "version_hash_table.m"
      }
#line 735 "version_hash_table.m"
      break;
#line 735 "version_hash_table.m"
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
#line 112 "float.opt"
  {
#line 112 "float.opt"
    MR_bool mercury__version_hash_table__succeeded;

#line 112 "float.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__float_hash_2_p_0

	MR_Float F;
	MR_Integer H;

	F =  mercury__version_hash_table__F_3 ;
		{
#line 112 "float.opt"

    H = MR_hash_float(F);

#line 9095 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__HeadVar__2_2  = H;
#line 112 "float.opt"
}
#line 112 "float.opt"
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
#line 723 "version_hash_table.m"
  {
#line 723 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 723 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_5_5;

#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__char_hash_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__version_hash_table__C_3 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 9136 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_5_5  = Int;
#line 66 "char.opt"
}
#line 682 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__char_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__version_hash_table__V_5_5 ;
		{
#line 682 "version_hash_table.m"

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

#line 9177 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__H_4  = H;
#line 682 "version_hash_table.m"
}
#line 723 "version_hash_table.m"
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
#line 711 "version_hash_table.m"
  {
#line 711 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 711 "version_hash_table.m"
    {
#line 711 "version_hash_table.m"
      *mercury__version_hash_table__HeadVar__2_2 = mercury__string__hash_1_f_0(mercury__version_hash_table__S_3);
    }
#line 711 "version_hash_table.m"
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
#line 679 "version_hash_table.m"
  {
#line 679 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 682 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__int_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__version_hash_table__N_1 ;
		{
#line 682 "version_hash_table.m"

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

#line 9261 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__H_2  = H;
#line 682 "version_hash_table.m"
}
#line 679 "version_hash_table.m"
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
#line 287 "version_hash_table.m"
  {
#line 287 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 287 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__2_2;

#line 254 "version_hash_table.m"
    {
#line 254 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HashPred_3, (MR_Integer) 7, (MR_Float) 0.90000000000000002, (MR_Integer) 0);
    }
#line 287 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__2_2;
#line 287 "version_hash_table.m"
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
#line 285 "version_hash_table.m"
  {
#line 285 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 285 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__2_2;

#line 252 "version_hash_table.m"
    {
#line 252 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HashPred_3, (MR_Integer) 7, (MR_Float) 0.90000000000000002, (MR_Integer) 1);
    }
#line 285 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__2_2;
#line 285 "version_hash_table.m"
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
#line 254 "version_hash_table.m"
  {
#line 254 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 254 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__4_4;

#line 254 "version_hash_table.m"
    {
#line 254 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_9, mercury__version_hash_table__TypeInfo_for_V_10, mercury__version_hash_table__HashPred_5, mercury__version_hash_table__N_6, mercury__version_hash_table__MaxOccupancy_7, (MR_Integer) 0);
    }
#line 254 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__4_4;
#line 254 "version_hash_table.m"
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
#line 252 "version_hash_table.m"
  {
#line 252 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 252 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__4_4;

#line 252 "version_hash_table.m"
    {
#line 252 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_9, mercury__version_hash_table__TypeInfo_for_V_10, mercury__version_hash_table__HashPred_5, mercury__version_hash_table__N_6, mercury__version_hash_table__MaxOccupancy_7, (MR_Integer) 1);
    }
#line 252 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__4_4;
#line 252 "version_hash_table.m"
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
