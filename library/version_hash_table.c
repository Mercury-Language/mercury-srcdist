/*
** Automatically generated from `version_hash_table.m'
** by the Mercury compiler,
** version 13.05.1, configured for x86_64-apple-darwin12.3.0.
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




#line 86 "version_hash_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__version_hash_table__version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2;

#line 89 "version_hash_table.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__version_hash_table__version_array__pti_version_array_1__pseudo_version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2;

#line 92 "version_hash_table.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__version_hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0;

#line 95 "version_hash_table.c"
static const MR_DuFunctorDesc mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_0;

#line 98 "version_hash_table.c"
static const MR_PseudoTypeInfo mercury__version_hash_table__version_hash_table__field_types_hash_table_alist_2_1[2];

#line 101 "version_hash_table.c"
static const MR_DuFunctorDesc mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_1;

#line 104 "version_hash_table.c"
static const MR_PseudoTypeInfo mercury__version_hash_table__version_hash_table__field_types_hash_table_alist_2_2[3];

#line 107 "version_hash_table.c"
static const MR_DuFunctorDesc mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_2;

#line 110 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_0[1];

#line 113 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_1[1];

#line 116 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_2[1];

#line 119 "version_hash_table.c"
static const MR_DuPtagLayout mercury__version_hash_table__version_hash_table__du_ptag_ordered_hash_table_alist_2[3];

#line 122 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_name_ordered_hash_table_alist_2[3];

#line 125 "version_hash_table.c"
static const MR_Integer mercury__version_hash_table__version_hash_table__functor_number_map_hash_table_alist_2[3];

#line 128 "version_hash_table.c"
static const MR_PseudoTypeInfo mercury__version_hash_table__version_hash_table__field_types_version_hash_table_2_0[4];

#line 131 "version_hash_table.c"
static const MR_ConstString mercury__version_hash_table__version_hash_table__field_names_version_hash_table_2_0[4];

#line 134 "version_hash_table.c"
static const MR_DuFunctorDesc mercury__version_hash_table__version_hash_table__du_functor_desc_version_hash_table_2_0;

#line 137 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_version_hash_table_2_0[1];

#line 140 "version_hash_table.c"
static const MR_DuPtagLayout mercury__version_hash_table__version_hash_table__du_ptag_ordered_version_hash_table_2[1];

#line 143 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_name_ordered_version_hash_table_2[1];

#line 146 "version_hash_table.c"
static const MR_Integer mercury__version_hash_table__version_hash_table__functor_number_map_version_hash_table_2[1];

#line 149 "version_hash_table.c"
static MR_bool MR_CALL 
mercury__version_hash_table____Unify____buckets_2_0_10001(
#line 152 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 154 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 156 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_3,
#line 158 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4);

#line 161 "version_hash_table.c"
static void MR_CALL 
mercury__version_hash_table____Compare____buckets_2_0_10001(
#line 164 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 166 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 168 "version_hash_table.c"
  MR_Box * mercury__version_hash_table__wrapper_arg_3,
#line 170 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4,
#line 172 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_5);

#line 175 "version_hash_table.c"
static MR_bool MR_CALL 
mercury__version_hash_table____Unify____hash_pred_1_0_10001(
#line 178 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 180 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 182 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_3);

#line 185 "version_hash_table.c"
static void MR_CALL 
mercury__version_hash_table____Compare____hash_pred_1_0_10001(
#line 188 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 190 "version_hash_table.c"
  MR_Box * mercury__version_hash_table__wrapper_arg_2,
#line 192 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_3,
#line 194 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4);

#line 197 "version_hash_table.c"
static MR_bool MR_CALL 
mercury__version_hash_table____Unify____hash_table_alist_2_0_10001(
#line 200 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 202 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 204 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_3,
#line 206 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4);

#line 209 "version_hash_table.c"
static void MR_CALL 
mercury__version_hash_table____Compare____hash_table_alist_2_0_10001(
#line 212 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 214 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 216 "version_hash_table.c"
  MR_Box * mercury__version_hash_table__wrapper_arg_3,
#line 218 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4,
#line 220 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_5);

#line 223 "version_hash_table.c"
static MR_bool MR_CALL 
mercury__version_hash_table____Unify____version_hash_table_2_0_10001(
#line 226 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 228 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 230 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_3,
#line 232 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4);

#line 235 "version_hash_table.c"
static void MR_CALL 
mercury__version_hash_table____Compare____version_hash_table_2_0_10001(
#line 238 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 240 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 242 "version_hash_table.c"
  MR_Box * mercury__version_hash_table__wrapper_arg_3,
#line 244 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4,
#line 246 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_5);

#line 842 "version_hash_table.m"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_112_95_95_104_111_51_51_95_95_91_54_93_95_48_4_p_0(
#line 842 "version_hash_table.m"
  MR_Word mercury__version_hash_table__V_21_21,
#line 842 "version_hash_table.m"
  MR_Word mercury__version_hash_table__V_22_22,
#line 842 "version_hash_table.m"
  MR_Word mercury__version_hash_table__V_23_23,
#line 842 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
#line 842 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
#line 842 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6);

#line 81 "version_array.opt"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_53_44_32_49_48_93_95_48_6_p_in__version_array_0(
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
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
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
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
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
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
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
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
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
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
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
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
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
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
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
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_6_p_in__version_array_0(
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

#line 96 "array.opt"
static MR_Integer MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
#line 96 "array.opt"
  MR_Word mercury__version_hash_table__V_19_19,
#line 96 "array.opt"
  MR_ArrayPtr mercury__version_hash_table__A_8_8,
#line 96 "array.opt"
  MR_Integer mercury__version_hash_table__X_9_9,
#line 96 "array.opt"
  MR_Integer mercury__version_hash_table__I_10_10,
#line 96 "array.opt"
  MR_Integer mercury__version_hash_table__Max_11_11);

#line 61 "array.int"
static MR_Integer MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
#line 61 "array.int"
  MR_Word mercury__version_hash_table__V_13_13,
#line 61 "array.int"
  MR_ArrayPtr mercury__version_hash_table__A_6_6,
#line 61 "array.int"
  MR_Integer mercury__version_hash_table__X_7_7);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 882 "version_hash_table.m"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_105_110_116_101_114_95_101_113_117_97_108_115_95_95_91_49_93_95_48_2_p_0(
#line 882 "version_hash_table.m"
  MR_Box mercury__version_hash_table__HeadVar__1_1,
#line 882 "version_hash_table.m"
  MR_Box mercury__version_hash_table__HeadVar__2_2);

#line 560 "version_hash_table.m"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(
#line 560 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_12,
#line 560 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL0_4,
#line 560 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 560 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__AL_6);

#line 427 "version_hash_table.m"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(
#line 427 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_14,
#line 427 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL0_5,
#line 427 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_6,
#line 427 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_7,
#line 427 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__AL_8);

#line 130 "list.int"
static void MR_CALL 
mercury__version_hash_table__foldl__ho17_4_p_in__list_0(
#line 130 "list.int"
  MR_Word mercury__version_hash_table__HeadVar__2_2,
#line 130 "list.int"
  MR_Integer mercury__version_hash_table__HeadVar__3_3,
#line 130 "list.int"
  MR_Integer * mercury__version_hash_table__HeadVar__4_4);

#line 882 "version_hash_table.m"
static MR_bool MR_CALL 
mercury__version_hash_table__pointer_equals_2_p_0(
#line 882 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_5,
#line 882 "version_hash_table.m"
  MR_Box mercury__version_hash_table__HeadVar__1_1,
#line 882 "version_hash_table.m"
  MR_Box mercury__version_hash_table__HeadVar__2_2);

#line 659 "version_hash_table.m"
static void MR_CALL 
mercury__version_hash_table__reinsert_alist_5_p_0(
#line 659 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_20,
#line 659 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_21,
#line 659 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL_6,
#line 659 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_7,
#line 659 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumBuckets_8,
#line 659 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13,
#line 659 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Buckets_14);

#line 646 "version_hash_table.m"
static void MR_CALL 
mercury__version_hash_table__reinsert_bindings_6_p_0(
#line 646 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_20,
#line 646 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_21,
#line 646 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__I_7,
#line 646 "version_hash_table.m"
  MR_Box mercury__version_hash_table__OldBuckets_8,
#line 646 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_9,
#line 646 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumBuckets_10,
#line 646 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13,
#line 646 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Buckets_14);

#line 632 "version_hash_table.m"
static MR_Word MR_CALL 
mercury__version_hash_table__expand_4_f_0(
#line 632 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_21,
#line 632 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_22,
#line 632 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumOccupants_6,
#line 632 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__MaxOccupants0_7,
#line 632 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred0_8,
#line 632 "version_hash_table.m"
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
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
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



#line 976 "version_hash_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__version_hash_table__version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 985 "version_hash_table.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__version_hash_table__version_array__pti_version_array_1__pseudo_version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2 = {
  &mercury__version_array__version_array__type_ctor_info_version_array_1,
  {
    (MR_PseudoTypeInfo) &mercury__version_hash_table__version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
  }
};

#line 993 "version_hash_table.c"
const MR_TypeCtorInfo_Struct mercury__version_hash_table__version_hash_table__type_ctor_info_buckets_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__version_hash_table____Unify____buckets_2_0_10001)),
  ((MR_Box) (mercury__version_hash_table____Compare____buckets_2_0_10001)),
  (MR_String) "version_hash_table",
  (MR_String) "buckets",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__version_hash_table__version_array__pti_version_array_1__pseudo_version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1014 "version_hash_table.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__version_hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1024 "version_hash_table.c"
const MR_TypeCtorInfo_Struct mercury__version_hash_table__version_hash_table__type_ctor_info_hash_pred_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__version_hash_table____Unify____hash_pred_1_0_10001)),
  ((MR_Box) (mercury__version_hash_table____Compare____hash_pred_1_0_10001)),
  (MR_String) "version_hash_table",
  (MR_String) "hash_pred",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__version_hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1045 "version_hash_table.c"
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

#line 1060 "version_hash_table.c"
static const MR_PseudoTypeInfo mercury__version_hash_table__version_hash_table__field_types_hash_table_alist_2_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 1066 "version_hash_table.c"
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

#line 1081 "version_hash_table.c"
static const MR_PseudoTypeInfo mercury__version_hash_table__version_hash_table__field_types_hash_table_alist_2_2[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &mercury__version_hash_table__version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
};

#line 1088 "version_hash_table.c"
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

#line 1103 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_0[1] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_0
};

#line 1108 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_1[1] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_1
};

#line 1113 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_2[1] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_2
};

#line 1118 "version_hash_table.c"
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

#line 1137 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_name_ordered_hash_table_alist_2[3] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_2,
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_0,
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_1
};

#line 1144 "version_hash_table.c"
static const MR_Integer mercury__version_hash_table__version_hash_table__functor_number_map_hash_table_alist_2[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1151 "version_hash_table.c"
const MR_TypeCtorInfo_Struct mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__version_hash_table____Unify____hash_table_alist_2_0_10001)),
  ((MR_Box) (mercury__version_hash_table____Compare____hash_table_alist_2_0_10001)),
  (MR_String) "version_hash_table",
  (MR_String) "hash_table_alist",
  {
    mercury__version_hash_table__version_hash_table__du_name_ordered_hash_table_alist_2
  },
  {
    mercury__version_hash_table__version_hash_table__du_ptag_ordered_hash_table_alist_2
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__version_hash_table__version_hash_table__functor_number_map_hash_table_alist_2
};

#line 1172 "version_hash_table.c"
static const MR_PseudoTypeInfo mercury__version_hash_table__version_hash_table__field_types_version_hash_table_2_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__version_hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__version_hash_table__version_array__pti_version_array_1__pseudo_version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
};

#line 1180 "version_hash_table.c"
static const MR_ConstString mercury__version_hash_table__version_hash_table__field_names_version_hash_table_2_0[4] = {
  (MR_String) "ht_num_occupants",
  (MR_String) "ht_max_occupants",
  (MR_String) "ht_hash_pred",
  (MR_String) "ht_buckets"
};

#line 1188 "version_hash_table.c"
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

#line 1203 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_version_hash_table_2_0[1] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_version_hash_table_2_0
};

#line 1208 "version_hash_table.c"
static const MR_DuPtagLayout mercury__version_hash_table__version_hash_table__du_ptag_ordered_version_hash_table_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__version_hash_table__version_hash_table__du_stag_ordered_version_hash_table_2_0
  }
};

#line 1217 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_name_ordered_version_hash_table_2[1] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_version_hash_table_2_0
};

#line 1222 "version_hash_table.c"
static const MR_Integer mercury__version_hash_table__version_hash_table__functor_number_map_version_hash_table_2[1] = {
  (MR_Integer) 0
};

#line 1227 "version_hash_table.c"
const MR_TypeCtorInfo_Struct mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU_USEREQ,
  ((MR_Box) (mercury__version_hash_table____Unify____version_hash_table_2_0_10001)),
  ((MR_Box) (mercury__version_hash_table____Compare____version_hash_table_2_0_10001)),
  (MR_String) "version_hash_table",
  (MR_String) "version_hash_table",
  {
    mercury__version_hash_table__version_hash_table__du_name_ordered_version_hash_table_2
  },
  {
    mercury__version_hash_table__version_hash_table__du_ptag_ordered_version_hash_table_2
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__version_hash_table__version_hash_table__functor_number_map_version_hash_table_2
};

#line 1248 "version_hash_table.c"
static MR_bool MR_CALL 
mercury__version_hash_table____Unify____buckets_2_0_10001(
#line 1251 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 1253 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 1255 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_3,
#line 1257 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4)
#line 1259 "version_hash_table.c"
{
#line 1261 "version_hash_table.c"
  {
#line 1263 "version_hash_table.c"
    MR_bool mercury__version_hash_table__succeeded;

#line 1266 "version_hash_table.c"
    {
#line 1268 "version_hash_table.c"
      mercury__version_hash_table__succeeded = mercury__version_hash_table____Unify____buckets_2_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), ((MR_Box) mercury__version_hash_table__wrapper_arg_3), ((MR_Box) mercury__version_hash_table__wrapper_arg_4));
    }
#line 1271 "version_hash_table.c"
    return mercury__version_hash_table__succeeded;
#line 1273 "version_hash_table.c"
  }
#line 1275 "version_hash_table.c"
}

#line 1278 "version_hash_table.c"
static void MR_CALL 
mercury__version_hash_table____Compare____buckets_2_0_10001(
#line 1281 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 1283 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 1285 "version_hash_table.c"
  MR_Box * mercury__version_hash_table__wrapper_arg_3,
#line 1287 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4,
#line 1289 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_5)
#line 1291 "version_hash_table.c"
{
#line 1293 "version_hash_table.c"
  {
#line 1295 "version_hash_table.c"
    MR_Word mercury__version_hash_table__conv0_HeadVar__1_1;

#line 1298 "version_hash_table.c"
    {
#line 1300 "version_hash_table.c"
      mercury__version_hash_table____Compare____buckets_2_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), &mercury__version_hash_table__conv0_HeadVar__1_1, ((MR_Box) mercury__version_hash_table__wrapper_arg_4), ((MR_Box) mercury__version_hash_table__wrapper_arg_5));
    }
#line 1303 "version_hash_table.c"
    *mercury__version_hash_table__wrapper_arg_3 = ((MR_Box) (mercury__version_hash_table__conv0_HeadVar__1_1));
#line 1305 "version_hash_table.c"
  }
#line 1307 "version_hash_table.c"
}

#line 1310 "version_hash_table.c"
static MR_bool MR_CALL 
mercury__version_hash_table____Unify____hash_pred_1_0_10001(
#line 1313 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 1315 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 1317 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_3)
#line 1319 "version_hash_table.c"
{
#line 1321 "version_hash_table.c"
  {
#line 1323 "version_hash_table.c"
    MR_bool mercury__version_hash_table__succeeded;

#line 1326 "version_hash_table.c"
    {
#line 1328 "version_hash_table.c"
      mercury__version_hash_table__succeeded = mercury__version_hash_table____Unify____hash_pred_1_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), ((MR_Word) mercury__version_hash_table__wrapper_arg_3));
    }
#line 1331 "version_hash_table.c"
    return mercury__version_hash_table__succeeded;
#line 1333 "version_hash_table.c"
  }
#line 1335 "version_hash_table.c"
}

#line 1338 "version_hash_table.c"
static void MR_CALL 
mercury__version_hash_table____Compare____hash_pred_1_0_10001(
#line 1341 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 1343 "version_hash_table.c"
  MR_Box * mercury__version_hash_table__wrapper_arg_2,
#line 1345 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_3,
#line 1347 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4)
#line 1349 "version_hash_table.c"
{
#line 1351 "version_hash_table.c"
  {
#line 1353 "version_hash_table.c"
    MR_Word mercury__version_hash_table__conv0_HeadVar__1_1;

#line 1356 "version_hash_table.c"
    {
#line 1358 "version_hash_table.c"
      mercury__version_hash_table____Compare____hash_pred_1_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), &mercury__version_hash_table__conv0_HeadVar__1_1, ((MR_Word) mercury__version_hash_table__wrapper_arg_3), ((MR_Word) mercury__version_hash_table__wrapper_arg_4));
    }
#line 1361 "version_hash_table.c"
    *mercury__version_hash_table__wrapper_arg_2 = ((MR_Box) (mercury__version_hash_table__conv0_HeadVar__1_1));
#line 1363 "version_hash_table.c"
  }
#line 1365 "version_hash_table.c"
}

#line 1368 "version_hash_table.c"
static MR_bool MR_CALL 
mercury__version_hash_table____Unify____hash_table_alist_2_0_10001(
#line 1371 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 1373 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 1375 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_3,
#line 1377 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4)
#line 1379 "version_hash_table.c"
{
#line 1381 "version_hash_table.c"
  {
#line 1383 "version_hash_table.c"
    MR_bool mercury__version_hash_table__succeeded;

#line 1386 "version_hash_table.c"
    {
#line 1388 "version_hash_table.c"
      mercury__version_hash_table__succeeded = mercury__version_hash_table____Unify____hash_table_alist_2_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), ((MR_Word) mercury__version_hash_table__wrapper_arg_3), ((MR_Word) mercury__version_hash_table__wrapper_arg_4));
    }
#line 1391 "version_hash_table.c"
    return mercury__version_hash_table__succeeded;
#line 1393 "version_hash_table.c"
  }
#line 1395 "version_hash_table.c"
}

#line 1398 "version_hash_table.c"
static void MR_CALL 
mercury__version_hash_table____Compare____hash_table_alist_2_0_10001(
#line 1401 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 1403 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 1405 "version_hash_table.c"
  MR_Box * mercury__version_hash_table__wrapper_arg_3,
#line 1407 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4,
#line 1409 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_5)
#line 1411 "version_hash_table.c"
{
#line 1413 "version_hash_table.c"
  {
#line 1415 "version_hash_table.c"
    MR_Word mercury__version_hash_table__conv0_HeadVar__1_1;

#line 1418 "version_hash_table.c"
    {
#line 1420 "version_hash_table.c"
      mercury__version_hash_table____Compare____hash_table_alist_2_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), &mercury__version_hash_table__conv0_HeadVar__1_1, ((MR_Word) mercury__version_hash_table__wrapper_arg_4), ((MR_Word) mercury__version_hash_table__wrapper_arg_5));
    }
#line 1423 "version_hash_table.c"
    *mercury__version_hash_table__wrapper_arg_3 = ((MR_Box) (mercury__version_hash_table__conv0_HeadVar__1_1));
#line 1425 "version_hash_table.c"
  }
#line 1427 "version_hash_table.c"
}

#line 1430 "version_hash_table.c"
static MR_bool MR_CALL 
mercury__version_hash_table____Unify____version_hash_table_2_0_10001(
#line 1433 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 1435 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 1437 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_3,
#line 1439 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4)
#line 1441 "version_hash_table.c"
{
#line 1443 "version_hash_table.c"
  {
#line 1445 "version_hash_table.c"
    MR_bool mercury__version_hash_table__succeeded;

#line 1448 "version_hash_table.c"
    {
#line 1450 "version_hash_table.c"
      mercury__version_hash_table__succeeded = mercury__version_hash_table____Unify____version_hash_table_2_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), ((MR_Word) mercury__version_hash_table__wrapper_arg_3), ((MR_Word) mercury__version_hash_table__wrapper_arg_4));
    }
#line 1453 "version_hash_table.c"
    return mercury__version_hash_table__succeeded;
#line 1455 "version_hash_table.c"
  }
#line 1457 "version_hash_table.c"
}

#line 1460 "version_hash_table.c"
static void MR_CALL 
mercury__version_hash_table____Compare____version_hash_table_2_0_10001(
#line 1463 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 1465 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 1467 "version_hash_table.c"
  MR_Box * mercury__version_hash_table__wrapper_arg_3,
#line 1469 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4,
#line 1471 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_5)
#line 1473 "version_hash_table.c"
{
#line 1475 "version_hash_table.c"
  {
#line 1477 "version_hash_table.c"
    MR_Word mercury__version_hash_table__conv0_HeadVar__1_1;

#line 1480 "version_hash_table.c"
    {
#line 1482 "version_hash_table.c"
      mercury__version_hash_table____Compare____version_hash_table_2_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), &mercury__version_hash_table__conv0_HeadVar__1_1, ((MR_Word) mercury__version_hash_table__wrapper_arg_4), ((MR_Word) mercury__version_hash_table__wrapper_arg_5));
    }
#line 1485 "version_hash_table.c"
    *mercury__version_hash_table__wrapper_arg_3 = ((MR_Box) (mercury__version_hash_table__conv0_HeadVar__1_1));
#line 1487 "version_hash_table.c"
  }
#line 1489 "version_hash_table.c"
}

#line 842 "version_hash_table.m"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_112_95_95_104_111_51_51_95_95_91_54_93_95_48_4_p_0(
#line 842 "version_hash_table.m"
  MR_Word mercury__version_hash_table__V_21_21,
#line 842 "version_hash_table.m"
  MR_Word mercury__version_hash_table__V_22_22,
#line 842 "version_hash_table.m"
  MR_Word mercury__version_hash_table__V_23_23,
#line 842 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
#line 842 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
#line 842 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6)
#line 842 "version_hash_table.m"
{
#line 849 "version_hash_table.m"
  while (MR_TRUE)
#line 849 "version_hash_table.m"
    {
#line 849 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 849 "version_hash_table.m"
      {
#line 849 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 849 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 848 "version_hash_table.m"
          mercury__version_hash_table__succeeded = MR_TRUE;
#line 849 "version_hash_table.m"
        else
#line 849 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 853 "version_hash_table.m"
            {
#line 853 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 853 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 853 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 853 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_27_27;

#line 879 "version_hash_table.m"
              mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 450 "version_hash_table.m"
              {
#line 450 "version_hash_table.m"
                mercury__version_hash_table__succeeded = mercury__version_hash_table__search_2_f_0(mercury__version_hash_table__V_21_21, mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__K_16, &mercury__version_hash_table__V_27_27);
              }
#line 853 "version_hash_table.m"
              if (mercury__version_hash_table__succeeded)
#line 853 "version_hash_table.m"
                {
#line 880 "version_hash_table.m"
                  {
#line 880 "version_hash_table.m"
                    mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_17, mercury__version_hash_table__V_27_27);
                  }
#line 853 "version_hash_table.m"
                  if (mercury__version_hash_table__succeeded)
#line 855 "version_hash_table.m"
                    {
#line 855 "version_hash_table.m"
                      /* direct tailcall eliminated */
#line 855 "version_hash_table.m"
                      {
#line 855 "version_hash_table.m"
                        MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;

#line 855 "version_hash_table.m"
                        mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 855 "version_hash_table.m"
                      }
#line 855 "version_hash_table.m"
                      continue;
#line 855 "version_hash_table.m"
                    }
#line 853 "version_hash_table.m"
                }
#line 853 "version_hash_table.m"
            }
#line 849 "version_hash_table.m"
          else
#line 850 "version_hash_table.m"
            {
#line 850 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 850 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 850 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_33_33;

#line 879 "version_hash_table.m"
              mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 450 "version_hash_table.m"
              {
#line 450 "version_hash_table.m"
                mercury__version_hash_table__succeeded = mercury__version_hash_table__search_2_f_0(mercury__version_hash_table__V_21_21, mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__K_8, &mercury__version_hash_table__V_33_33);
              }
#line 850 "version_hash_table.m"
              if (mercury__version_hash_table__succeeded)
#line 880 "version_hash_table.m"
                {
#line 880 "version_hash_table.m"
                  return mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_9, mercury__version_hash_table__V_33_33);
                }
#line 850 "version_hash_table.m"
            }
#line 849 "version_hash_table.m"
        return mercury__version_hash_table__succeeded;
#line 849 "version_hash_table.m"
      }
#line 849 "version_hash_table.m"
      break;
#line 849 "version_hash_table.m"
    }
#line 842 "version_hash_table.m"
}

#line 81 "version_array.opt"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_53_44_32_49_48_93_95_48_6_p_in__version_array_0(
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
#line 223 "version_array.opt"
  while (MR_TRUE)
#line 223 "version_array.opt"
    {
#line 223 "version_array.opt"
      /* tailcall optimized into a loop */
#line 223 "version_array.opt"
      {
#line 223 "version_array.opt"
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__Lo_9_9 < mercury__version_hash_table__Hi_10_10);

#line 223 "version_array.opt"
        if (mercury__version_hash_table__succeeded)
#line 218 "version_array.opt"
          {
#line 218 "version_array.opt"
            MR_Word mercury__version_hash_table__V_14_13;
#line 218 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_16_15;
#line 218 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_18_16;
#line 218 "version_array.opt"
            MR_Box mercury__version_hash_table__conv0_V_14_13;

#line 218 "version_array.opt"
            {
#line 218 "version_array.opt"
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__VA_8_8, mercury__version_hash_table__Lo_9_9);
            }
#line 218 "version_array.opt"
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
#line 219 "version_array.opt"
            {
#line 219 "version_array.opt"
              mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_112_95_95_104_111_51_51_95_95_91_54_93_95_48_4_p_0(mercury__version_hash_table__V_26_26, mercury__version_hash_table__V_27_27, mercury__version_hash_table__V_28_28, mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_14_13);
            }
#line 218 "version_array.opt"
            if (mercury__version_hash_table__succeeded)
#line 218 "version_array.opt"
              {
#line 221 "version_array.opt"
                mercury__version_hash_table__V_18_16 = (MR_Integer) 1;
#line 220 "version_array.opt"
                mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__Lo_9_9 + mercury__version_hash_table__V_18_16);
#line 222 "version_array.opt"
                /* direct tailcall eliminated */
#line 222 "version_array.opt"
                {
#line 222 "version_array.opt"
                  MR_Integer mercury__version_hash_table__Lo_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;

#line 222 "version_array.opt"
                  mercury__version_hash_table__Lo_9_9 = mercury__version_hash_table__Lo_9__tmp_copy_9;
#line 222 "version_array.opt"
                }
#line 222 "version_array.opt"
                continue;
#line 218 "version_array.opt"
              }
#line 218 "version_array.opt"
          }
#line 223 "version_array.opt"
        else
#line 224 "version_array.opt"
          mercury__version_hash_table__succeeded = MR_TRUE;
#line 223 "version_array.opt"
        return mercury__version_hash_table__succeeded;
#line 223 "version_array.opt"
      }
#line 223 "version_array.opt"
      break;
#line 223 "version_array.opt"
    }
#line 81 "version_array.opt"
}

#line 83 "version_array.opt"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
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
#line 223 "version_array.opt"
  while (MR_TRUE)
#line 223 "version_array.opt"
    {
#line 223 "version_array.opt"
      /* tailcall optimized into a loop */
#line 223 "version_array.opt"
      {
#line 223 "version_array.opt"
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__Lo_9_9 < mercury__version_hash_table__Hi_10_10);

#line 223 "version_array.opt"
        if (mercury__version_hash_table__succeeded)
#line 218 "version_array.opt"
          {
#line 218 "version_array.opt"
            MR_Word mercury__version_hash_table__V_14_13;
#line 218 "version_array.opt"
            MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 218 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_16_15;
#line 218 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_18_16;
#line 218 "version_array.opt"
            MR_Box mercury__version_hash_table__conv0_V_14_13;

#line 218 "version_array.opt"
            {
#line 218 "version_array.opt"
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__VA_8_8, mercury__version_hash_table__Lo_9_9);
            }
#line 218 "version_array.opt"
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
#line 219 "version_array.opt"
            {
#line 219 "version_array.opt"
              mercury__version_hash_table__succeeded = mercury__version_hash_table__fold_p_4_p_5(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_24_24, mercury__version_hash_table__V_25_25, mercury__version_hash_table__V_14_13, mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 218 "version_array.opt"
            if (mercury__version_hash_table__succeeded)
#line 218 "version_array.opt"
              {
#line 221 "version_array.opt"
                mercury__version_hash_table__V_18_16 = (MR_Integer) 1;
#line 220 "version_array.opt"
                mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__Lo_9_9 + mercury__version_hash_table__V_18_16);
#line 222 "version_array.opt"
                /* direct tailcall eliminated */
#line 222 "version_array.opt"
                {
#line 222 "version_array.opt"
                  MR_Integer mercury__version_hash_table__Lo_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
#line 222 "version_array.opt"
                  MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 222 "version_array.opt"
                  mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 222 "version_array.opt"
                  mercury__version_hash_table__Lo_9_9 = mercury__version_hash_table__Lo_9__tmp_copy_9;
#line 222 "version_array.opt"
                }
#line 222 "version_array.opt"
                continue;
#line 218 "version_array.opt"
              }
#line 218 "version_array.opt"
          }
#line 223 "version_array.opt"
        else
#line 224 "version_array.opt"
          {
#line 224 "version_array.opt"
            *mercury__version_hash_table__STATE_VARIABLE_Acc_13_12 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 224 "version_array.opt"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 224 "version_array.opt"
          }
#line 223 "version_array.opt"
        return mercury__version_hash_table__succeeded;
#line 223 "version_array.opt"
      }
#line 223 "version_array.opt"
      break;
#line 223 "version_array.opt"
    }
#line 83 "version_array.opt"
}

#line 82 "version_array.opt"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
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
#line 223 "version_array.opt"
  while (MR_TRUE)
#line 223 "version_array.opt"
    {
#line 223 "version_array.opt"
      /* tailcall optimized into a loop */
#line 223 "version_array.opt"
      {
#line 223 "version_array.opt"
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__Lo_9_9 < mercury__version_hash_table__Hi_10_10);

#line 223 "version_array.opt"
        if (mercury__version_hash_table__succeeded)
#line 218 "version_array.opt"
          {
#line 218 "version_array.opt"
            MR_Word mercury__version_hash_table__V_14_13;
#line 218 "version_array.opt"
            MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 218 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_16_15;
#line 218 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_18_16;
#line 218 "version_array.opt"
            MR_Box mercury__version_hash_table__conv0_V_14_13;

#line 218 "version_array.opt"
            {
#line 218 "version_array.opt"
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__VA_8_8, mercury__version_hash_table__Lo_9_9);
            }
#line 218 "version_array.opt"
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
#line 219 "version_array.opt"
            {
#line 219 "version_array.opt"
              mercury__version_hash_table__succeeded = mercury__version_hash_table__fold_p_4_p_4(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_24_24, mercury__version_hash_table__V_25_25, mercury__version_hash_table__V_14_13, mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 218 "version_array.opt"
            if (mercury__version_hash_table__succeeded)
#line 218 "version_array.opt"
              {
#line 221 "version_array.opt"
                mercury__version_hash_table__V_18_16 = (MR_Integer) 1;
#line 220 "version_array.opt"
                mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__Lo_9_9 + mercury__version_hash_table__V_18_16);
#line 222 "version_array.opt"
                /* direct tailcall eliminated */
#line 222 "version_array.opt"
                {
#line 222 "version_array.opt"
                  MR_Integer mercury__version_hash_table__Lo_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
#line 222 "version_array.opt"
                  MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 222 "version_array.opt"
                  mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 222 "version_array.opt"
                  mercury__version_hash_table__Lo_9_9 = mercury__version_hash_table__Lo_9__tmp_copy_9;
#line 222 "version_array.opt"
                }
#line 222 "version_array.opt"
                continue;
#line 218 "version_array.opt"
              }
#line 218 "version_array.opt"
          }
#line 223 "version_array.opt"
        else
#line 224 "version_array.opt"
          {
#line 224 "version_array.opt"
            *mercury__version_hash_table__STATE_VARIABLE_Acc_13_12 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 224 "version_array.opt"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 224 "version_array.opt"
          }
#line 223 "version_array.opt"
        return mercury__version_hash_table__succeeded;
#line 223 "version_array.opt"
      }
#line 223 "version_array.opt"
      break;
#line 223 "version_array.opt"
    }
#line 82 "version_array.opt"
}

#line 81 "version_array.opt"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
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
#line 223 "version_array.opt"
  while (MR_TRUE)
#line 223 "version_array.opt"
    {
#line 223 "version_array.opt"
      /* tailcall optimized into a loop */
#line 223 "version_array.opt"
      {
#line 223 "version_array.opt"
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__Lo_9_9 < mercury__version_hash_table__Hi_10_10);

#line 223 "version_array.opt"
        if (mercury__version_hash_table__succeeded)
#line 218 "version_array.opt"
          {
#line 218 "version_array.opt"
            MR_Word mercury__version_hash_table__V_14_13;
#line 218 "version_array.opt"
            MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 218 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_16_15;
#line 218 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_18_16;
#line 218 "version_array.opt"
            MR_Box mercury__version_hash_table__conv0_V_14_13;

#line 218 "version_array.opt"
            {
#line 218 "version_array.opt"
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__VA_8_8, mercury__version_hash_table__Lo_9_9);
            }
#line 218 "version_array.opt"
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
#line 219 "version_array.opt"
            {
#line 219 "version_array.opt"
              mercury__version_hash_table__succeeded = mercury__version_hash_table__fold_p_4_p_3(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_24_24, mercury__version_hash_table__V_25_25, mercury__version_hash_table__V_14_13, mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 218 "version_array.opt"
            if (mercury__version_hash_table__succeeded)
#line 218 "version_array.opt"
              {
#line 221 "version_array.opt"
                mercury__version_hash_table__V_18_16 = (MR_Integer) 1;
#line 220 "version_array.opt"
                mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__Lo_9_9 + mercury__version_hash_table__V_18_16);
#line 222 "version_array.opt"
                /* direct tailcall eliminated */
#line 222 "version_array.opt"
                {
#line 222 "version_array.opt"
                  MR_Integer mercury__version_hash_table__Lo_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
#line 222 "version_array.opt"
                  MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 222 "version_array.opt"
                  mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 222 "version_array.opt"
                  mercury__version_hash_table__Lo_9_9 = mercury__version_hash_table__Lo_9__tmp_copy_9;
#line 222 "version_array.opt"
                }
#line 222 "version_array.opt"
                continue;
#line 218 "version_array.opt"
              }
#line 218 "version_array.opt"
          }
#line 223 "version_array.opt"
        else
#line 224 "version_array.opt"
          {
#line 224 "version_array.opt"
            *mercury__version_hash_table__STATE_VARIABLE_Acc_13_12 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 224 "version_array.opt"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 224 "version_array.opt"
          }
#line 223 "version_array.opt"
        return mercury__version_hash_table__succeeded;
#line 223 "version_array.opt"
      }
#line 223 "version_array.opt"
      break;
#line 223 "version_array.opt"
    }
#line 81 "version_array.opt"
}

#line 80 "version_array.opt"
static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
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
#line 223 "version_array.opt"
  while (MR_TRUE)
#line 223 "version_array.opt"
    {
#line 223 "version_array.opt"
      /* tailcall optimized into a loop */
#line 223 "version_array.opt"
      {
#line 223 "version_array.opt"
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__Lo_9_9 < mercury__version_hash_table__Hi_10_10);

#line 223 "version_array.opt"
        if (mercury__version_hash_table__succeeded)
#line 218 "version_array.opt"
          {
#line 218 "version_array.opt"
            MR_Word mercury__version_hash_table__V_14_13;
#line 218 "version_array.opt"
            MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 218 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_16_15;
#line 218 "version_array.opt"
            MR_Box mercury__version_hash_table__conv0_V_14_13;

#line 218 "version_array.opt"
            {
#line 218 "version_array.opt"
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__VA_8_8, mercury__version_hash_table__Lo_9_9);
            }
#line 218 "version_array.opt"
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
#line 219 "version_array.opt"
            {
#line 219 "version_array.opt"
              mercury__version_hash_table__fold_p_4_p_2(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_24_24, mercury__version_hash_table__V_25_25, mercury__version_hash_table__V_14_13, mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 220 "version_array.opt"
            mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__Lo_9_9 + (MR_Integer) 1);
#line 222 "version_array.opt"
            /* direct tailcall eliminated */
#line 222 "version_array.opt"
            {
#line 222 "version_array.opt"
              MR_Integer mercury__version_hash_table__Lo_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
#line 222 "version_array.opt"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 222 "version_array.opt"
              mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 222 "version_array.opt"
              mercury__version_hash_table__Lo_9_9 = mercury__version_hash_table__Lo_9__tmp_copy_9;
#line 222 "version_array.opt"
            }
#line 222 "version_array.opt"
            continue;
#line 218 "version_array.opt"
          }
#line 223 "version_array.opt"
        else
#line 224 "version_array.opt"
          *mercury__version_hash_table__STATE_VARIABLE_Acc_13_12 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 223 "version_array.opt"
      }
#line 223 "version_array.opt"
      break;
#line 223 "version_array.opt"
    }
#line 80 "version_array.opt"
}

#line 79 "version_array.opt"
static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
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
#line 223 "version_array.opt"
  while (MR_TRUE)
#line 223 "version_array.opt"
    {
#line 223 "version_array.opt"
      /* tailcall optimized into a loop */
#line 223 "version_array.opt"
      {
#line 223 "version_array.opt"
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__Lo_9_9 < mercury__version_hash_table__Hi_10_10);

#line 223 "version_array.opt"
        if (mercury__version_hash_table__succeeded)
#line 218 "version_array.opt"
          {
#line 218 "version_array.opt"
            MR_Word mercury__version_hash_table__V_14_13;
#line 218 "version_array.opt"
            MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 218 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_16_15;
#line 218 "version_array.opt"
            MR_Box mercury__version_hash_table__conv0_V_14_13;

#line 218 "version_array.opt"
            {
#line 218 "version_array.opt"
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__VA_8_8, mercury__version_hash_table__Lo_9_9);
            }
#line 218 "version_array.opt"
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
#line 219 "version_array.opt"
            {
#line 219 "version_array.opt"
              mercury__version_hash_table__fold_p_4_p_1(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_24_24, mercury__version_hash_table__V_25_25, mercury__version_hash_table__V_14_13, mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 220 "version_array.opt"
            mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__Lo_9_9 + (MR_Integer) 1);
#line 222 "version_array.opt"
            /* direct tailcall eliminated */
#line 222 "version_array.opt"
            {
#line 222 "version_array.opt"
              MR_Integer mercury__version_hash_table__Lo_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
#line 222 "version_array.opt"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 222 "version_array.opt"
              mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 222 "version_array.opt"
              mercury__version_hash_table__Lo_9_9 = mercury__version_hash_table__Lo_9__tmp_copy_9;
#line 222 "version_array.opt"
            }
#line 222 "version_array.opt"
            continue;
#line 218 "version_array.opt"
          }
#line 223 "version_array.opt"
        else
#line 224 "version_array.opt"
          *mercury__version_hash_table__STATE_VARIABLE_Acc_13_12 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 223 "version_array.opt"
      }
#line 223 "version_array.opt"
      break;
#line 223 "version_array.opt"
    }
#line 79 "version_array.opt"
}

#line 78 "version_array.opt"
static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
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
#line 223 "version_array.opt"
  while (MR_TRUE)
#line 223 "version_array.opt"
    {
#line 223 "version_array.opt"
      /* tailcall optimized into a loop */
#line 223 "version_array.opt"
      {
#line 223 "version_array.opt"
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__Lo_9_9 < mercury__version_hash_table__Hi_10_10);

#line 223 "version_array.opt"
        if (mercury__version_hash_table__succeeded)
#line 218 "version_array.opt"
          {
#line 218 "version_array.opt"
            MR_Word mercury__version_hash_table__V_14_13;
#line 218 "version_array.opt"
            MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 218 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_16_15;
#line 218 "version_array.opt"
            MR_Box mercury__version_hash_table__conv0_V_14_13;

#line 218 "version_array.opt"
            {
#line 218 "version_array.opt"
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__VA_8_8, mercury__version_hash_table__Lo_9_9);
            }
#line 218 "version_array.opt"
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
#line 219 "version_array.opt"
            {
#line 219 "version_array.opt"
              mercury__version_hash_table__fold_p_4_p_0(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_24_24, mercury__version_hash_table__V_25_25, mercury__version_hash_table__V_14_13, mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 220 "version_array.opt"
            mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__Lo_9_9 + (MR_Integer) 1);
#line 222 "version_array.opt"
            /* direct tailcall eliminated */
#line 222 "version_array.opt"
            {
#line 222 "version_array.opt"
              MR_Integer mercury__version_hash_table__Lo_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
#line 222 "version_array.opt"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 222 "version_array.opt"
              mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 222 "version_array.opt"
              mercury__version_hash_table__Lo_9_9 = mercury__version_hash_table__Lo_9__tmp_copy_9;
#line 222 "version_array.opt"
            }
#line 222 "version_array.opt"
            continue;
#line 218 "version_array.opt"
          }
#line 223 "version_array.opt"
        else
#line 224 "version_array.opt"
          *mercury__version_hash_table__STATE_VARIABLE_Acc_13_12 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 223 "version_array.opt"
      }
#line 223 "version_array.opt"
      break;
#line 223 "version_array.opt"
    }
#line 78 "version_array.opt"
}

#line 78 "version_array.opt"
static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
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
#line 223 "version_array.opt"
  while (MR_TRUE)
#line 223 "version_array.opt"
    {
#line 223 "version_array.opt"
      /* tailcall optimized into a loop */
#line 223 "version_array.opt"
      {
#line 223 "version_array.opt"
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__Lo_9_9 < mercury__version_hash_table__Hi_10_10);

#line 223 "version_array.opt"
        if (mercury__version_hash_table__succeeded)
#line 218 "version_array.opt"
          {
#line 218 "version_array.opt"
            MR_Word mercury__version_hash_table__V_14_13;
#line 218 "version_array.opt"
            MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 218 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_16_15;
#line 218 "version_array.opt"
            MR_Box mercury__version_hash_table__conv0_V_14_13;

#line 218 "version_array.opt"
            {
#line 218 "version_array.opt"
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__VA_8_8, mercury__version_hash_table__Lo_9_9);
            }
#line 218 "version_array.opt"
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
#line 219 "version_array.opt"
            {
#line 219 "version_array.opt"
              mercury__version_hash_table__fold_f_4_p_0(mercury__version_hash_table__V_22_22, mercury__version_hash_table__V_23_23, mercury__version_hash_table__V_24_24, mercury__version_hash_table__V_25_25, mercury__version_hash_table__V_14_13, mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 220 "version_array.opt"
            mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__Lo_9_9 + (MR_Integer) 1);
#line 222 "version_array.opt"
            /* direct tailcall eliminated */
#line 222 "version_array.opt"
            {
#line 222 "version_array.opt"
              MR_Integer mercury__version_hash_table__Lo_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
#line 222 "version_array.opt"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 222 "version_array.opt"
              mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 222 "version_array.opt"
              mercury__version_hash_table__Lo_9_9 = mercury__version_hash_table__Lo_9__tmp_copy_9;
#line 222 "version_array.opt"
            }
#line 222 "version_array.opt"
            continue;
#line 218 "version_array.opt"
          }
#line 223 "version_array.opt"
        else
#line 224 "version_array.opt"
          *mercury__version_hash_table__STATE_VARIABLE_Acc_13_12 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 223 "version_array.opt"
      }
#line 223 "version_array.opt"
      break;
#line 223 "version_array.opt"
    }
#line 78 "version_array.opt"
}

#line 78 "version_array.opt"
static void MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_6_p_in__version_array_0(
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
#line 223 "version_array.opt"
  while (MR_TRUE)
#line 223 "version_array.opt"
    {
#line 223 "version_array.opt"
      /* tailcall optimized into a loop */
#line 223 "version_array.opt"
      {
#line 223 "version_array.opt"
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__Lo_9_9 < mercury__version_hash_table__Hi_10_10);

#line 223 "version_array.opt"
        if (mercury__version_hash_table__succeeded)
#line 218 "version_array.opt"
          {
#line 218 "version_array.opt"
            MR_Word mercury__version_hash_table__V_14_13;
#line 218 "version_array.opt"
            MR_Word mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;
#line 218 "version_array.opt"
            MR_Integer mercury__version_hash_table__V_16_15;
#line 218 "version_array.opt"
            MR_Box mercury__version_hash_table__conv0_V_14_13;

#line 218 "version_array.opt"
            {
#line 218 "version_array.opt"
              mercury__version_hash_table__conv0_V_14_13 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_for_T1_1_17, (MR_Box) mercury__version_hash_table__VA_8_8, mercury__version_hash_table__Lo_9_9);
            }
#line 218 "version_array.opt"
            mercury__version_hash_table__V_14_13 = ((MR_Word) mercury__version_hash_table__conv0_V_14_13);
#line 219 "version_array.opt"
            {
#line 219 "version_array.opt"
              mercury__version_hash_table__to_assoc_list_2_3_p_0(mercury__version_hash_table__V_27_27, mercury__version_hash_table__V_28_28, mercury__version_hash_table__V_14_13, mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11, &mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14);
            }
#line 220 "version_array.opt"
            mercury__version_hash_table__V_16_15 = (mercury__version_hash_table__Lo_9_9 + (MR_Integer) 1);
#line 222 "version_array.opt"
            /* direct tailcall eliminated */
#line 222 "version_array.opt"
            {
#line 222 "version_array.opt"
              MR_Integer mercury__version_hash_table__Lo_9__tmp_copy_9 = mercury__version_hash_table__V_16_15;
#line 222 "version_array.opt"
              MR_Word mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_15_15_14;

#line 222 "version_array.opt"
              mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12__tmp_copy_11;
#line 222 "version_array.opt"
              mercury__version_hash_table__Lo_9_9 = mercury__version_hash_table__Lo_9__tmp_copy_9;
#line 222 "version_array.opt"
            }
#line 222 "version_array.opt"
            continue;
#line 218 "version_array.opt"
          }
#line 223 "version_array.opt"
        else
#line 224 "version_array.opt"
          *mercury__version_hash_table__STATE_VARIABLE_Acc_13_12 = mercury__version_hash_table__STATE_VARIABLE_Acc_0_12_11;
#line 223 "version_array.opt"
      }
#line 223 "version_array.opt"
      break;
#line 223 "version_array.opt"
    }
#line 78 "version_array.opt"
}

#line 96 "array.opt"
static MR_Integer MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
#line 96 "array.opt"
  MR_Word mercury__version_hash_table__V_19_19,
#line 96 "array.opt"
  MR_ArrayPtr mercury__version_hash_table__A_8_8,
#line 96 "array.opt"
  MR_Integer mercury__version_hash_table__X_9_9,
#line 96 "array.opt"
  MR_Integer mercury__version_hash_table__I_10_10,
#line 96 "array.opt"
  MR_Integer mercury__version_hash_table__Max_11_11)
#line 96 "array.opt"
{
#line 629 "array.opt"
  while (MR_TRUE)
#line 629 "array.opt"
    {
#line 629 "array.opt"
      /* tailcall optimized into a loop */
#line 629 "array.opt"
      {
#line 629 "array.opt"
        MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__Max_11_11 < mercury__version_hash_table__I_10_10);
#line 629 "array.opt"
        MR_Integer mercury__version_hash_table__HeadVar__6_6_12;

#line 629 "array.opt"
        if (mercury__version_hash_table__succeeded)
#line 628 "array.opt"
          mercury__version_hash_table__HeadVar__6_6_12 = mercury__version_hash_table__X_9_9;
#line 629 "array.opt"
        else
#line 630 "array.opt"
          {
#line 630 "array.opt"
            MR_Integer mercury__version_hash_table__V_12_13;
#line 630 "array.opt"
            MR_Integer mercury__version_hash_table__V_14_14;
#line 630 "array.opt"
            MR_Box mercury__version_hash_table__V_13_15;
#line 630 "array.opt"
            MR_Integer mercury__version_hash_table__HX_36;
#line 630 "array.opt"
            MR_Integer mercury__version_hash_table__V_70_70;
#line 630 "array.opt"
            MR_Integer mercury__version_hash_table__V_71_71;
#line 630 "array.opt"
            MR_Integer mercury__version_hash_table__V_72_72;
#line 630 "array.opt"
            MR_Integer mercury__version_hash_table__V_73_73;
#line 276 "array.opt"
            MR_Word mercury__version_hash_table__TypeInfo_for_T1_1_75;

#line 276 "array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__version_hash_table__A_8_8 , Array);
	Index =  mercury__version_hash_table__I_10_10 ;
		{
#line 276 "array.opt"

    Item = Array->elements[Index];

#line 2595 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_13_15  = (MR_Box) Item;
#line 276 "array.opt"
}
#line 777 "version_hash_table.m"
            {
#line 777 "version_hash_table.m"
              mercury__version_hash_table__generic_hash_2_p_0(mercury__version_hash_table__V_19_19, mercury__version_hash_table__V_13_15, &mercury__version_hash_table__HX_36);
            }
#line 804 "version_hash_table.m"
            mercury__version_hash_table__V_70_70 = (mercury__version_hash_table__X_9_9 << mercury__version_hash_table__HX_36);
#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 2620 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_73_73  = Bits;
#line 171 "int.opt"
}
#line 805 "version_hash_table.m"
            mercury__version_hash_table__V_72_72 = (mercury__version_hash_table__V_73_73 - mercury__version_hash_table__HX_36);
#line 804 "version_hash_table.m"
            mercury__version_hash_table__V_71_71 = (mercury__version_hash_table__X_9_9 >> mercury__version_hash_table__V_72_72);
#line 803 "version_hash_table.m"
            mercury__version_hash_table__V_12_13 = (mercury__version_hash_table__V_70_70 ^ mercury__version_hash_table__V_71_71);
#line 633 "array.opt"
            mercury__version_hash_table__V_14_14 = (mercury__version_hash_table__I_10_10 + (MR_Integer) 1);
#line 630 "array.opt"
            /* direct tailcall eliminated */
#line 630 "array.opt"
            {
#line 630 "array.opt"
              MR_Integer mercury__version_hash_table__X_9__tmp_copy_9 = mercury__version_hash_table__V_12_13;
#line 630 "array.opt"
              MR_Integer mercury__version_hash_table__I_10__tmp_copy_10 = mercury__version_hash_table__V_14_14;

#line 630 "array.opt"
              mercury__version_hash_table__I_10_10 = mercury__version_hash_table__I_10__tmp_copy_10;
#line 630 "array.opt"
              mercury__version_hash_table__X_9_9 = mercury__version_hash_table__X_9__tmp_copy_9;
#line 630 "array.opt"
            }
#line 630 "array.opt"
            continue;
#line 630 "array.opt"
          }
#line 629 "array.opt"
        return mercury__version_hash_table__HeadVar__6_6_12;
#line 629 "array.opt"
      }
#line 629 "array.opt"
      break;
#line 629 "array.opt"
    }
#line 96 "array.opt"
}

#line 61 "array.int"
static MR_Integer MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
#line 61 "array.int"
  MR_Word mercury__version_hash_table__V_13_13,
#line 61 "array.int"
  MR_ArrayPtr mercury__version_hash_table__A_6_6,
#line 61 "array.int"
  MR_Integer mercury__version_hash_table__X_7_7)
#line 61 "array.int"
{
#line 393 "array.opt"
  {
#line 393 "array.opt"
    MR_bool mercury__version_hash_table__succeeded;
#line 393 "array.opt"
    MR_Integer mercury__version_hash_table__HeadVar__4_4_8;
#line 393 "array.opt"
    MR_Integer mercury__version_hash_table__V_8_9;
#line 393 "array.opt"
    MR_Integer mercury__version_hash_table__V_9_10;
#line 239 "array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_for_T1_18;
#line 247 "array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_for_T1_19;

#line 239 "array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__version_hash_table__A_6_6 , Array);
		{
#line 239 "array.opt"

    /* Array not used */
    Min = 0;

#line 2705 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_8_9  = Min;
#line 239 "array.opt"
}
#line 247 "array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__version_hash_table__A_6_6 , Array);
		{
#line 247 "array.opt"

    Max = Array->size - 1;

#line 2725 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_9_10  = Max;
#line 247 "array.opt"
}
#line 394 "array.opt"
    {
#line 394 "array.opt"
      return mercury__version_hash_table__HeadVar__4_4_8 = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(mercury__version_hash_table__V_13_13, mercury__version_hash_table__A_6_6, mercury__version_hash_table__X_7_7, mercury__version_hash_table__V_8_9, mercury__version_hash_table__V_9_10);
    }
#line 393 "array.opt"
    return mercury__version_hash_table__HeadVar__4_4_8;
#line 393 "array.opt"
  }
#line 61 "array.int"
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

#line 882 "version_hash_table.m"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_105_110_116_101_114_95_101_113_117_97_108_115_95_95_91_49_93_95_48_2_p_0(
#line 882 "version_hash_table.m"
  MR_Box mercury__version_hash_table__HeadVar__1_1,
#line 882 "version_hash_table.m"
  MR_Box mercury__version_hash_table__HeadVar__2_2)
#line 882 "version_hash_table.m"
{
#line 885 "version_hash_table.m"
  {
#line 885 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 885 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_T_6;

#line 888 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_105_110_116_101_114_95_101_113_117_97_108_115_95_95_91_49_93_95_48_2_p_0

	MR_Word A;
	MR_Word B;
	MR_bool SUCCESS_INDICATOR;

	A = (MR_Word) mercury__version_hash_table__HeadVar__1_1 ;
	B = (MR_Word) mercury__version_hash_table__HeadVar__2_2 ;
		{
#line 888 "version_hash_table.m"

    SUCCESS_INDICATOR = (A == B);

#line 2792 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 888 "version_hash_table.m"
	}
mercury__version_hash_table__succeeded  = SUCCESS_INDICATOR;
}
#line 885 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 885 "version_hash_table.m"
  }
#line 882 "version_hash_table.m"
}

#line 560 "version_hash_table.m"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(
#line 560 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_12,
#line 560 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL0_4,
#line 560 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 560 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__AL_6)
#line 560 "version_hash_table.m"
{
#line 568 "version_hash_table.m"
  {
#line 568 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 568 "version_hash_table.m"
    if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_4)) == (MR_mktag((MR_Integer) 2))))
#line 573 "version_hash_table.m"
      {
#line 573 "version_hash_table.m"
        MR_Box mercury__version_hash_table__K0_8 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_4, (MR_Integer) 0));
#line 573 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V0_9 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_4, (MR_Integer) 1));
#line 573 "version_hash_table.m"
        MR_Word mercury__version_hash_table__T0_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_4, (MR_Integer) 2)));

#line 574 "version_hash_table.m"
        {
#line 574 "version_hash_table.m"
          mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_12, mercury__version_hash_table__K0_8, mercury__version_hash_table__K_5);
        }
#line 576 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 575 "version_hash_table.m"
          {
#line 575 "version_hash_table.m"
            *mercury__version_hash_table__AL_6 = mercury__version_hash_table__T0_10;
#line 575 "version_hash_table.m"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 575 "version_hash_table.m"
          }
#line 576 "version_hash_table.m"
        else
#line 577 "version_hash_table.m"
          {
#line 577 "version_hash_table.m"
            MR_Word mercury__version_hash_table__T_11;

#line 577 "version_hash_table.m"
            {
#line 577 "version_hash_table.m"
              mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(mercury__version_hash_table__TypeInfo_for_K_12, mercury__version_hash_table__T0_10, mercury__version_hash_table__K_5, &mercury__version_hash_table__T_11);
            }
#line 577 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 577 "version_hash_table.m"
              {
#line 578 "version_hash_table.m"
                {
#line 578 "version_hash_table.m"
                  MR_Word base;
#line 578 "version_hash_table.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 578 "version_hash_table.m"
                  *mercury__version_hash_table__AL_6 = base;
#line 578 "version_hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__version_hash_table__K0_8;
#line 578 "version_hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__version_hash_table__V0_9;
#line 578 "version_hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__version_hash_table__T_11));
#line 578 "version_hash_table.m"
                }
#line 578 "version_hash_table.m"
                mercury__version_hash_table__succeeded = MR_TRUE;
#line 577 "version_hash_table.m"
              }
#line 577 "version_hash_table.m"
          }
#line 573 "version_hash_table.m"
      }
#line 568 "version_hash_table.m"
    else
#line 568 "version_hash_table.m"
      if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_4)) == (MR_mktag((MR_Integer) 1))))
#line 569 "version_hash_table.m"
        {
#line 569 "version_hash_table.m"
          MR_Box mercury__version_hash_table__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_4, (MR_Integer) 0));
#line 569 "version_hash_table.m"
          MR_Box mercury__version_hash_table__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_4, (MR_Integer) 1));

#line 569 "version_hash_table.m"
          {
#line 569 "version_hash_table.m"
            mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_12, mercury__version_hash_table__K_5, mercury__version_hash_table__V_14_14);
          }
#line 569 "version_hash_table.m"
          if (mercury__version_hash_table__succeeded)
#line 569 "version_hash_table.m"
            {
#line 571 "version_hash_table.m"
              *mercury__version_hash_table__AL_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 571 "version_hash_table.m"
              mercury__version_hash_table__succeeded = MR_TRUE;
#line 569 "version_hash_table.m"
            }
#line 569 "version_hash_table.m"
        }
#line 568 "version_hash_table.m"
      else
#line 568 "version_hash_table.m"
        mercury__version_hash_table__succeeded = MR_FALSE;
#line 568 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 568 "version_hash_table.m"
  }
#line 560 "version_hash_table.m"
}

#line 427 "version_hash_table.m"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(
#line 427 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_14,
#line 427 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL0_5,
#line 427 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_6,
#line 427 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_7,
#line 427 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__AL_8)
#line 427 "version_hash_table.m"
{
#line 435 "version_hash_table.m"
  {
#line 435 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 435 "version_hash_table.m"
    if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_5)) == (MR_mktag((MR_Integer) 2))))
#line 439 "version_hash_table.m"
      {
#line 439 "version_hash_table.m"
        MR_Box mercury__version_hash_table__K0_10 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_5, (MR_Integer) 0));
#line 439 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V0_11 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_5, (MR_Integer) 1));
#line 439 "version_hash_table.m"
        MR_Word mercury__version_hash_table__T0_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_5, (MR_Integer) 2)));

#line 440 "version_hash_table.m"
        {
#line 440 "version_hash_table.m"
          mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_14, mercury__version_hash_table__K0_10, mercury__version_hash_table__K_6);
        }
#line 442 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 441 "version_hash_table.m"
          {
#line 441 "version_hash_table.m"
            {
#line 441 "version_hash_table.m"
              MR_Word base;
#line 441 "version_hash_table.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 441 "version_hash_table.m"
              *mercury__version_hash_table__AL_8 = base;
#line 441 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), base, 0) = mercury__version_hash_table__K0_10;
#line 441 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), base, 1) = mercury__version_hash_table__V_7;
#line 441 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__version_hash_table__T0_12));
#line 441 "version_hash_table.m"
            }
#line 441 "version_hash_table.m"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 441 "version_hash_table.m"
          }
#line 442 "version_hash_table.m"
        else
#line 443 "version_hash_table.m"
          {
#line 443 "version_hash_table.m"
            MR_Word mercury__version_hash_table__T_13;

#line 443 "version_hash_table.m"
            {
#line 443 "version_hash_table.m"
              mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(mercury__version_hash_table__TypeInfo_for_K_14, mercury__version_hash_table__T0_12, mercury__version_hash_table__K_6, mercury__version_hash_table__V_7, &mercury__version_hash_table__T_13);
            }
#line 443 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 443 "version_hash_table.m"
              {
#line 444 "version_hash_table.m"
                {
#line 444 "version_hash_table.m"
                  MR_Word base;
#line 444 "version_hash_table.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 444 "version_hash_table.m"
                  *mercury__version_hash_table__AL_8 = base;
#line 444 "version_hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__version_hash_table__K0_10;
#line 444 "version_hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__version_hash_table__V0_11;
#line 444 "version_hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__version_hash_table__T_13));
#line 444 "version_hash_table.m"
                }
#line 444 "version_hash_table.m"
                mercury__version_hash_table__succeeded = MR_TRUE;
#line 443 "version_hash_table.m"
              }
#line 443 "version_hash_table.m"
          }
#line 439 "version_hash_table.m"
      }
#line 435 "version_hash_table.m"
    else
#line 435 "version_hash_table.m"
      if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_5)) == (MR_mktag((MR_Integer) 1))))
#line 436 "version_hash_table.m"
        {
#line 436 "version_hash_table.m"
          MR_Box mercury__version_hash_table__V_16_16 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_5, (MR_Integer) 0));
#line 436 "version_hash_table.m"
          MR_Box mercury__version_hash_table__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_5, (MR_Integer) 1));

#line 436 "version_hash_table.m"
          {
#line 436 "version_hash_table.m"
            mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_14, mercury__version_hash_table__K_6, mercury__version_hash_table__V_16_16);
          }
#line 436 "version_hash_table.m"
          if (mercury__version_hash_table__succeeded)
#line 436 "version_hash_table.m"
            {
#line 437 "version_hash_table.m"
              {
#line 437 "version_hash_table.m"
                MR_Word base;
#line 437 "version_hash_table.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "version_hash_table.m"
                *mercury__version_hash_table__AL_8 = base;
#line 437 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), base, 0) = mercury__version_hash_table__K_6;
#line 437 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), base, 1) = mercury__version_hash_table__V_7;
#line 437 "version_hash_table.m"
              }
#line 437 "version_hash_table.m"
              mercury__version_hash_table__succeeded = MR_TRUE;
#line 436 "version_hash_table.m"
            }
#line 436 "version_hash_table.m"
        }
#line 435 "version_hash_table.m"
      else
#line 435 "version_hash_table.m"
        mercury__version_hash_table__succeeded = MR_FALSE;
#line 435 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 435 "version_hash_table.m"
  }
#line 427 "version_hash_table.m"
}

#line 130 "list.int"
static void MR_CALL 
mercury__version_hash_table__foldl__ho17_4_p_in__list_0(
#line 130 "list.int"
  MR_Word mercury__version_hash_table__HeadVar__2_2,
#line 130 "list.int"
  MR_Integer mercury__version_hash_table__HeadVar__3_3,
#line 130 "list.int"
  MR_Integer * mercury__version_hash_table__HeadVar__4_4)
#line 130 "list.int"
{
#line 332 "list.opt"
  while (MR_TRUE)
#line 332 "list.opt"
    {
#line 332 "list.opt"
      /* tailcall optimized into a loop */
#line 332 "list.opt"
      {
#line 332 "list.opt"
        MR_bool mercury__version_hash_table__succeeded;

#line 332 "list.opt"
        if ((mercury__version_hash_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 332 "list.opt"
          *mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__HeadVar__3_3;
#line 332 "list.opt"
        else
#line 334 "list.opt"
          {
#line 334 "list.opt"
            MR_Word mercury__version_hash_table__TypeCtorInfo_47_59 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 334 "list.opt"
            MR_Word mercury__version_hash_table__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0)));
#line 334 "list.opt"
            MR_Word mercury__version_hash_table__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1)));
#line 334 "list.opt"
            MR_Integer mercury__version_hash_table__STATE_VARIABLE_A_15_15_13;
#line 334 "list.opt"
            MR_Integer mercury__version_hash_table__HUA_36;
#line 334 "list.opt"
            MR_Integer mercury__version_hash_table__V_64_64;
#line 334 "list.opt"
            MR_Integer mercury__version_hash_table__V_65_65;
#line 334 "list.opt"
            MR_Integer mercury__version_hash_table__V_66_66;
#line 334 "list.opt"
            MR_Integer mercury__version_hash_table__V_67_67;

#line 791 "version_hash_table.m"
            {
#line 791 "version_hash_table.m"
              mercury__version_hash_table__generic_hash_2_p_0(mercury__version_hash_table__TypeCtorInfo_47_59, ((MR_Box) (mercury__version_hash_table__H_10_9)), &mercury__version_hash_table__HUA_36);
            }
#line 804 "version_hash_table.m"
            mercury__version_hash_table__V_64_64 = (mercury__version_hash_table__HeadVar__3_3 << mercury__version_hash_table__HUA_36);
#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__foldl__ho17_4_p_in__list_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 3149 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_67_67  = Bits;
#line 171 "int.opt"
}
#line 805 "version_hash_table.m"
            mercury__version_hash_table__V_66_66 = (mercury__version_hash_table__V_67_67 - mercury__version_hash_table__HUA_36);
#line 804 "version_hash_table.m"
            mercury__version_hash_table__V_65_65 = (mercury__version_hash_table__HeadVar__3_3 >> mercury__version_hash_table__V_66_66);
#line 803 "version_hash_table.m"
            mercury__version_hash_table__STATE_VARIABLE_A_15_15_13 = (mercury__version_hash_table__V_64_64 ^ mercury__version_hash_table__V_65_65);
#line 336 "list.opt"
            /* direct tailcall eliminated */
#line 336 "list.opt"
            {
#line 336 "list.opt"
              MR_Word mercury__version_hash_table__HeadVar__2__tmp_copy_2 = mercury__version_hash_table__T_11_10;
#line 336 "list.opt"
              MR_Integer mercury__version_hash_table__HeadVar__3__tmp_copy_3 = mercury__version_hash_table__STATE_VARIABLE_A_15_15_13;

#line 336 "list.opt"
              mercury__version_hash_table__HeadVar__3_3 = mercury__version_hash_table__HeadVar__3__tmp_copy_3;
#line 336 "list.opt"
              mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__HeadVar__2__tmp_copy_2;
#line 336 "list.opt"
            }
#line 336 "list.opt"
            continue;
#line 334 "list.opt"
          }
#line 332 "list.opt"
      }
#line 332 "list.opt"
      break;
#line 332 "list.opt"
    }
#line 130 "list.int"
}

#line 246 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table____Compare____version_hash_table_2_0(
#line 246 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_4,
#line 246 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_5,
#line 246 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__1_1,
#line 246 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__2_2,
#line 246 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__3_3)
#line 246 "version_hash_table.m"
{
#line 246 "version_hash_table.m"
  {
#line 246 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 246 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_6_6 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2;
#line 246 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_7_7;

#line 3214 "version_hash_table.c"
    {
#line 3216 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3218 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_7_7, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_6_6));
#line 3220 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_7_7, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_4));
#line 3222 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_7_7, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_5));
#line 3224 "version_hash_table.c"
    }
#line 246 "version_hash_table.m"
    {
#line 246 "version_hash_table.m"
      mercury__private_builtin__builtin_compare_non_canonical_type_3_p_0(mercury__version_hash_table__TypeInfo_7_7, mercury__version_hash_table__HeadVar__1_1, ((MR_Box) (mercury__version_hash_table__HeadVar__2_2)), ((MR_Box) (mercury__version_hash_table__HeadVar__3_3)));
#line 246 "version_hash_table.m"
      return;
    }
#line 246 "version_hash_table.m"
  }
#line 246 "version_hash_table.m"
}

#line 246 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table____Unify____version_hash_table_2_0(
#line 246 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_5,
#line 246 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_6,
#line 246 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__1_1,
#line 246 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__2_2)
#line 246 "version_hash_table.m"
{
#line 246 "version_hash_table.m"
  {
#line 246 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 246 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__CastX_3 = (MR_Integer) mercury__version_hash_table__HeadVar__1_1;
#line 246 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__CastY_4 = (MR_Integer) mercury__version_hash_table__HeadVar__2_2;

#line 246 "version_hash_table.m"
    mercury__version_hash_table__succeeded = (mercury__version_hash_table__CastX_3 == mercury__version_hash_table__CastY_4);
#line 246 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 246 "version_hash_table.m"
      mercury__version_hash_table__succeeded = MR_TRUE;
#line 246 "version_hash_table.m"
    else
#line 246 "version_hash_table.m"
      {
#line 246 "version_hash_table.m"
        return mercury__version_hash_table__succeeded = mercury__version_hash_table__equals_2_p_0(mercury__version_hash_table__TypeInfo_for_K_5, mercury__version_hash_table__TypeInfo_for_V_6, mercury__version_hash_table__HeadVar__1_1, mercury__version_hash_table__HeadVar__2_2);
      }
#line 246 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 246 "version_hash_table.m"
  }
#line 246 "version_hash_table.m"
}

#line 261 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table____Compare____hash_table_alist_2_0(
#line 261 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_39,
#line 261 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_40,
#line 261 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__1_1,
#line 261 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__2_2,
#line 261 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__3_3)
#line 261 "version_hash_table.m"
{
#line 261 "version_hash_table.m"
  while (MR_TRUE)
#line 261 "version_hash_table.m"
    {
#line 261 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 261 "version_hash_table.m"
      {
#line 261 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;
#line 261 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__CastX_37 = (MR_Integer) mercury__version_hash_table__HeadVar__2_2;
#line 261 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__CastY_38 = (MR_Integer) mercury__version_hash_table__HeadVar__3_3;

#line 261 "version_hash_table.m"
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__CastX_37 == mercury__version_hash_table__CastY_38);
#line 261 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 3314 "version_hash_table.c"
          *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 0;
#line 261 "version_hash_table.m"
        else
#line 261 "version_hash_table.m"
          if ((mercury__version_hash_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 261 "version_hash_table.m"
            if ((mercury__version_hash_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 261 "version_hash_table.m"
              *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 0;
#line 261 "version_hash_table.m"
            else
#line 261 "version_hash_table.m"
              if (((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3328 "version_hash_table.c"
                *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "version_hash_table.m"
              else
#line 3332 "version_hash_table.c"
                *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "version_hash_table.m"
          else
#line 261 "version_hash_table.m"
            if (((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 261 "version_hash_table.m"
              {
#line 261 "version_hash_table.m"
                MR_Word mercury__version_hash_table__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 2)));
#line 261 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_44_44 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 261 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_45_45 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0));

#line 261 "version_hash_table.m"
                if ((mercury__version_hash_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3349 "version_hash_table.c"
                  *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "version_hash_table.m"
                else
#line 261 "version_hash_table.m"
                  if (((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 261 "version_hash_table.m"
                    {
#line 261 "version_hash_table.m"
                      MR_Box mercury__version_hash_table__V_32_32 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 0));
#line 261 "version_hash_table.m"
                      MR_Box mercury__version_hash_table__V_33_33 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 1));
#line 261 "version_hash_table.m"
                      MR_Word mercury__version_hash_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 2)));
#line 261 "version_hash_table.m"
                      MR_Word mercury__version_hash_table__V_35_35;

#line 261 "version_hash_table.m"
                      {
#line 261 "version_hash_table.m"
                        mercury__builtin__compare_3_p_0(mercury__version_hash_table__TypeInfo_for_K_39, &mercury__version_hash_table__V_35_35, mercury__version_hash_table__V_45_45, mercury__version_hash_table__V_32_32);
                      }
#line 3371 "version_hash_table.c"
                      mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_35_35 == (MR_Integer) 0);
#line 261 "version_hash_table.m"
                      mercury__version_hash_table__succeeded = !(mercury__version_hash_table__succeeded);
#line 261 "version_hash_table.m"
                      if (mercury__version_hash_table__succeeded)
#line 261 "version_hash_table.m"
                        *mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__V_35_35;
#line 261 "version_hash_table.m"
                      else
#line 261 "version_hash_table.m"
                        {
#line 261 "version_hash_table.m"
                          MR_Word mercury__version_hash_table__V_36_36;

#line 261 "version_hash_table.m"
                          {
#line 261 "version_hash_table.m"
                            mercury__builtin__compare_3_p_0(mercury__version_hash_table__TypeInfo_for_V_40, &mercury__version_hash_table__V_36_36, mercury__version_hash_table__V_44_44, mercury__version_hash_table__V_33_33);
                          }
#line 3391 "version_hash_table.c"
                          mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_36_36 == (MR_Integer) 0);
#line 261 "version_hash_table.m"
                          mercury__version_hash_table__succeeded = !(mercury__version_hash_table__succeeded);
#line 261 "version_hash_table.m"
                          if (mercury__version_hash_table__succeeded)
#line 261 "version_hash_table.m"
                            *mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__V_36_36;
#line 261 "version_hash_table.m"
                          else
#line 261 "version_hash_table.m"
                            {
#line 261 "version_hash_table.m"
                              /* direct tailcall eliminated */
#line 261 "version_hash_table.m"
                              {
#line 261 "version_hash_table.m"
                                MR_Word mercury__version_hash_table__HeadVar__2__tmp_copy_2 = mercury__version_hash_table__V_43_43;
#line 261 "version_hash_table.m"
                                MR_Word mercury__version_hash_table__HeadVar__3__tmp_copy_3 = mercury__version_hash_table__V_34_34;

#line 261 "version_hash_table.m"
                                mercury__version_hash_table__HeadVar__3_3 = mercury__version_hash_table__HeadVar__3__tmp_copy_3;
#line 261 "version_hash_table.m"
                                mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__HeadVar__2__tmp_copy_2;
#line 261 "version_hash_table.m"
                              }
#line 261 "version_hash_table.m"
                              continue;
#line 261 "version_hash_table.m"
                            }
#line 261 "version_hash_table.m"
                        }
#line 261 "version_hash_table.m"
                    }
#line 261 "version_hash_table.m"
                  else
#line 3428 "version_hash_table.c"
                    *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "version_hash_table.m"
              }
#line 261 "version_hash_table.m"
            else
#line 261 "version_hash_table.m"
              {
#line 261 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_46_46 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 261 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_47_47 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0));

#line 261 "version_hash_table.m"
                if ((mercury__version_hash_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3443 "version_hash_table.c"
                  *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "version_hash_table.m"
                else
#line 261 "version_hash_table.m"
                  if (((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3449 "version_hash_table.c"
                    *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "version_hash_table.m"
                  else
#line 261 "version_hash_table.m"
                    {
#line 261 "version_hash_table.m"
                      MR_Box mercury__version_hash_table__V_13_13 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 0));
#line 261 "version_hash_table.m"
                      MR_Box mercury__version_hash_table__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 1));
#line 261 "version_hash_table.m"
                      MR_Word mercury__version_hash_table__V_15_15;

#line 261 "version_hash_table.m"
                      {
#line 261 "version_hash_table.m"
                        mercury__builtin__compare_3_p_0(mercury__version_hash_table__TypeInfo_for_K_39, &mercury__version_hash_table__V_15_15, mercury__version_hash_table__V_47_47, mercury__version_hash_table__V_13_13);
                      }
#line 3467 "version_hash_table.c"
                      mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_15_15 == (MR_Integer) 0);
#line 261 "version_hash_table.m"
                      mercury__version_hash_table__succeeded = !(mercury__version_hash_table__succeeded);
#line 261 "version_hash_table.m"
                      if (mercury__version_hash_table__succeeded)
#line 261 "version_hash_table.m"
                        *mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__V_15_15;
#line 261 "version_hash_table.m"
                      else
#line 261 "version_hash_table.m"
                        {
#line 261 "version_hash_table.m"
                          mercury__builtin__compare_3_p_0(mercury__version_hash_table__TypeInfo_for_V_40, mercury__version_hash_table__HeadVar__1_1, mercury__version_hash_table__V_46_46, mercury__version_hash_table__V_14_14);
#line 261 "version_hash_table.m"
                          return;
                        }
#line 261 "version_hash_table.m"
                    }
#line 261 "version_hash_table.m"
              }
#line 261 "version_hash_table.m"
      }
#line 261 "version_hash_table.m"
      break;
#line 261 "version_hash_table.m"
    }
#line 261 "version_hash_table.m"
}

#line 261 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table____Unify____hash_table_alist_2_0(
#line 261 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_17,
#line 261 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_18,
#line 261 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__1_1,
#line 261 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__2_2)
#line 261 "version_hash_table.m"
{
#line 261 "version_hash_table.m"
  while (MR_TRUE)
#line 261 "version_hash_table.m"
    {
#line 261 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 261 "version_hash_table.m"
      {
#line 261 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;
#line 261 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__CastX_15 = (MR_Integer) mercury__version_hash_table__HeadVar__1_1;
#line 261 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__CastY_16 = (MR_Integer) mercury__version_hash_table__HeadVar__2_2;

#line 261 "version_hash_table.m"
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__CastX_15 == mercury__version_hash_table__CastY_16);
#line 261 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 261 "version_hash_table.m"
          mercury__version_hash_table__succeeded = MR_TRUE;
#line 261 "version_hash_table.m"
        else
#line 261 "version_hash_table.m"
          if ((mercury__version_hash_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 261 "version_hash_table.m"
            {
#line 261 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__CastX_3 = (MR_Integer) mercury__version_hash_table__HeadVar__1_1;
#line 261 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__CastY_4 = (MR_Integer) mercury__version_hash_table__HeadVar__2_2;

#line 261 "version_hash_table.m"
              mercury__version_hash_table__succeeded = (mercury__version_hash_table__CastY_4 == mercury__version_hash_table__CastX_3);
#line 261 "version_hash_table.m"
            }
#line 261 "version_hash_table.m"
          else
#line 261 "version_hash_table.m"
            if (((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 261 "version_hash_table.m"
              {
#line 261 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_9_9 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 0));
#line 261 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_10_10 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 1));
#line 261 "version_hash_table.m"
                MR_Word mercury__version_hash_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 2)));
#line 261 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_12_12;
#line 261 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_13_13;
#line 261 "version_hash_table.m"
                MR_Word mercury__version_hash_table__V_14_14;

#line 261 "version_hash_table.m"
                mercury__version_hash_table__succeeded = ((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 261 "version_hash_table.m"
                if (mercury__version_hash_table__succeeded)
#line 261 "version_hash_table.m"
                  {
#line 261 "version_hash_table.m"
                    mercury__version_hash_table__V_12_12 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0));
#line 261 "version_hash_table.m"
                    mercury__version_hash_table__V_13_13 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 261 "version_hash_table.m"
                    mercury__version_hash_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 2)));
#line 3577 "version_hash_table.c"
                    {
#line 3579 "version_hash_table.c"
                      mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_17, mercury__version_hash_table__V_9_9, mercury__version_hash_table__V_12_12);
                    }
#line 261 "version_hash_table.m"
                    if (mercury__version_hash_table__succeeded)
#line 261 "version_hash_table.m"
                      {
#line 3586 "version_hash_table.c"
                        {
#line 3588 "version_hash_table.c"
                          mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_V_18, mercury__version_hash_table__V_10_10, mercury__version_hash_table__V_13_13);
                        }
#line 261 "version_hash_table.m"
                        if (mercury__version_hash_table__succeeded)
#line 3593 "version_hash_table.c"
                          {
#line 3595 "version_hash_table.c"
                            /* direct tailcall eliminated */
#line 3597 "version_hash_table.c"
                            {
#line 3599 "version_hash_table.c"
                              MR_Word mercury__version_hash_table__HeadVar__1__tmp_copy_1 = mercury__version_hash_table__V_11_11;
#line 3601 "version_hash_table.c"
                              MR_Word mercury__version_hash_table__HeadVar__2__tmp_copy_2 = mercury__version_hash_table__V_14_14;

#line 3604 "version_hash_table.c"
                              mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__HeadVar__2__tmp_copy_2;
#line 3606 "version_hash_table.c"
                              mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__HeadVar__1__tmp_copy_1;
#line 3608 "version_hash_table.c"
                            }
#line 3610 "version_hash_table.c"
                            continue;
#line 3612 "version_hash_table.c"
                          }
#line 261 "version_hash_table.m"
                      }
#line 261 "version_hash_table.m"
                  }
#line 261 "version_hash_table.m"
              }
#line 261 "version_hash_table.m"
            else
#line 261 "version_hash_table.m"
              {
#line 261 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 0));
#line 261 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 1));
#line 261 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_7_7;
#line 261 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_8_8;

#line 261 "version_hash_table.m"
                mercury__version_hash_table__succeeded = ((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 261 "version_hash_table.m"
                if (mercury__version_hash_table__succeeded)
#line 261 "version_hash_table.m"
                  {
#line 261 "version_hash_table.m"
                    mercury__version_hash_table__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0));
#line 261 "version_hash_table.m"
                    mercury__version_hash_table__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 3643 "version_hash_table.c"
                    {
#line 3645 "version_hash_table.c"
                      mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_17, mercury__version_hash_table__V_5_5, mercury__version_hash_table__V_7_7);
                    }
#line 261 "version_hash_table.m"
                    if (mercury__version_hash_table__succeeded)
#line 3650 "version_hash_table.c"
                      {
#line 3652 "version_hash_table.c"
                        return mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_V_18, mercury__version_hash_table__V_6_6, mercury__version_hash_table__V_8_8);
                      }
#line 261 "version_hash_table.m"
                  }
#line 261 "version_hash_table.m"
              }
#line 261 "version_hash_table.m"
        return mercury__version_hash_table__succeeded;
#line 261 "version_hash_table.m"
      }
#line 261 "version_hash_table.m"
      break;
#line 261 "version_hash_table.m"
    }
#line 261 "version_hash_table.m"
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

#line 255 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table____Compare____buckets_2_0(
#line 255 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_6,
#line 255 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_7,
#line 255 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__1_1,
#line 255 "version_hash_table.m"
  MR_Box mercury__version_hash_table__HeadVar__2_2,
#line 255 "version_hash_table.m"
  MR_Box mercury__version_hash_table__HeadVar__3_3)
#line 255 "version_hash_table.m"
{
#line 255 "version_hash_table.m"
  {
#line 255 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 255 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_8_8 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 255 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_9_9;
#line 255 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Cast_HeadVar1_4 = mercury__version_hash_table__HeadVar__2_2;
#line 255 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Cast_HeadVar2_5 = mercury__version_hash_table__HeadVar__3_3;

#line 3764 "version_hash_table.c"
    {
#line 3766 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3768 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_9_9, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_8_8));
#line 3770 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_9_9, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_6));
#line 3772 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_9_9, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_7));
#line 3774 "version_hash_table.c"
    }
#line 255 "version_hash_table.m"
    {
#line 255 "version_hash_table.m"
      mercury__version_array____Compare____version_array_1_0(mercury__version_hash_table__TypeInfo_9_9, mercury__version_hash_table__HeadVar__1_1, (MR_Box) mercury__version_hash_table__Cast_HeadVar1_4, (MR_Box) mercury__version_hash_table__Cast_HeadVar2_5);
#line 255 "version_hash_table.m"
      return;
    }
#line 255 "version_hash_table.m"
  }
#line 255 "version_hash_table.m"
}

#line 255 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table____Unify____buckets_2_0(
#line 255 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_5,
#line 255 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_6,
#line 255 "version_hash_table.m"
  MR_Box mercury__version_hash_table__HeadVar__1_1,
#line 255 "version_hash_table.m"
  MR_Box mercury__version_hash_table__HeadVar__2_2)
#line 255 "version_hash_table.m"
{
#line 255 "version_hash_table.m"
  {
#line 255 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 255 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_7_7 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 255 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_8_8;
#line 255 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Cast_HeadVar1_3 = mercury__version_hash_table__HeadVar__1_1;
#line 255 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Cast_HeadVar2_4 = mercury__version_hash_table__HeadVar__2_2;

#line 3814 "version_hash_table.c"
    {
#line 3816 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3818 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_8_8, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_7_7));
#line 3820 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_8_8, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_5));
#line 3822 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_8_8, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_6));
#line 3824 "version_hash_table.c"
    }
#line 255 "version_hash_table.m"
    {
#line 255 "version_hash_table.m"
      return mercury__version_hash_table__succeeded = mercury__version_array____Unify____version_array_1_0(mercury__version_hash_table__TypeInfo_8_8, (MR_Box) mercury__version_hash_table__Cast_HeadVar1_3, (MR_Box) mercury__version_hash_table__Cast_HeadVar2_4);
    }
#line 255 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 255 "version_hash_table.m"
  }
#line 255 "version_hash_table.m"
}

#line 882 "version_hash_table.m"
static MR_bool MR_CALL 
mercury__version_hash_table__pointer_equals_2_p_0(
#line 882 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_5,
#line 882 "version_hash_table.m"
  MR_Box mercury__version_hash_table__HeadVar__1_1,
#line 882 "version_hash_table.m"
  MR_Box mercury__version_hash_table__HeadVar__2_2)
#line 882 "version_hash_table.m"
{
#line 885 "version_hash_table.m"
  {
#line 885 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 885 "version_hash_table.m"
    {
#line 885 "version_hash_table.m"
      return mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_105_110_116_101_114_95_101_113_117_97_108_115_95_95_91_49_93_95_48_2_p_0(mercury__version_hash_table__HeadVar__1_1, mercury__version_hash_table__HeadVar__2_2);
    }
#line 885 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 885 "version_hash_table.m"
  }
#line 882 "version_hash_table.m"
}

#line 844 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__fold_p_4_p_5(
#line 844 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
#line 844 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
#line 844 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_20,
#line 844 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 844 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 844 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_11,
#line 844 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_12)
#line 844 "version_hash_table.m"
{
#line 849 "version_hash_table.m"
  while (MR_TRUE)
#line 849 "version_hash_table.m"
    {
#line 849 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 849 "version_hash_table.m"
      {
#line 849 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 849 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 848 "version_hash_table.m"
          {
#line 848 "version_hash_table.m"
            *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
#line 848 "version_hash_table.m"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 848 "version_hash_table.m"
          }
#line 849 "version_hash_table.m"
        else
#line 849 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 853 "version_hash_table.m"
            {
#line 853 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 853 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
#line 853 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 853 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 854 "version_hash_table.m"
              MR_bool MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 854 "version_hash_table.m"
              {
#line 854 "version_hash_table.m"
                mercury__version_hash_table__succeeded = mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
              }
#line 853 "version_hash_table.m"
              if (mercury__version_hash_table__succeeded)
#line 855 "version_hash_table.m"
                {
#line 855 "version_hash_table.m"
                  /* direct tailcall eliminated */
#line 855 "version_hash_table.m"
                  {
#line 855 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
#line 855 "version_hash_table.m"
                    MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

#line 855 "version_hash_table.m"
                    mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 855 "version_hash_table.m"
                    mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 855 "version_hash_table.m"
                  }
#line 855 "version_hash_table.m"
                  continue;
#line 855 "version_hash_table.m"
                }
#line 853 "version_hash_table.m"
            }
#line 849 "version_hash_table.m"
          else
#line 850 "version_hash_table.m"
            {
#line 850 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 850 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 851 "version_hash_table.m"
              MR_bool MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 851 "version_hash_table.m"
              {
#line 851 "version_hash_table.m"
                return mercury__version_hash_table__succeeded = mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
              }
#line 850 "version_hash_table.m"
            }
#line 849 "version_hash_table.m"
        return mercury__version_hash_table__succeeded;
#line 849 "version_hash_table.m"
      }
#line 849 "version_hash_table.m"
      break;
#line 849 "version_hash_table.m"
    }
#line 844 "version_hash_table.m"
}

#line 843 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__fold_p_4_p_4(
#line 843 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
#line 843 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
#line 843 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_20,
#line 843 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 843 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 843 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_11,
#line 843 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_12)
#line 843 "version_hash_table.m"
{
#line 849 "version_hash_table.m"
  while (MR_TRUE)
#line 849 "version_hash_table.m"
    {
#line 849 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 849 "version_hash_table.m"
      {
#line 849 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 849 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 848 "version_hash_table.m"
          {
#line 848 "version_hash_table.m"
            *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
#line 848 "version_hash_table.m"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 848 "version_hash_table.m"
          }
#line 849 "version_hash_table.m"
        else
#line 849 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 853 "version_hash_table.m"
            {
#line 853 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 853 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
#line 853 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 853 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 854 "version_hash_table.m"
              MR_bool MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 854 "version_hash_table.m"
              {
#line 854 "version_hash_table.m"
                mercury__version_hash_table__succeeded = mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
              }
#line 853 "version_hash_table.m"
              if (mercury__version_hash_table__succeeded)
#line 855 "version_hash_table.m"
                {
#line 855 "version_hash_table.m"
                  /* direct tailcall eliminated */
#line 855 "version_hash_table.m"
                  {
#line 855 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
#line 855 "version_hash_table.m"
                    MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

#line 855 "version_hash_table.m"
                    mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 855 "version_hash_table.m"
                    mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 855 "version_hash_table.m"
                  }
#line 855 "version_hash_table.m"
                  continue;
#line 855 "version_hash_table.m"
                }
#line 853 "version_hash_table.m"
            }
#line 849 "version_hash_table.m"
          else
#line 850 "version_hash_table.m"
            {
#line 850 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 850 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 851 "version_hash_table.m"
              MR_bool MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 851 "version_hash_table.m"
              {
#line 851 "version_hash_table.m"
                return mercury__version_hash_table__succeeded = mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
              }
#line 850 "version_hash_table.m"
            }
#line 849 "version_hash_table.m"
        return mercury__version_hash_table__succeeded;
#line 849 "version_hash_table.m"
      }
#line 849 "version_hash_table.m"
      break;
#line 849 "version_hash_table.m"
    }
#line 843 "version_hash_table.m"
}

#line 842 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__fold_p_4_p_3(
#line 842 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
#line 842 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
#line 842 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_20,
#line 842 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 842 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 842 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_11,
#line 842 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_12)
#line 842 "version_hash_table.m"
{
#line 849 "version_hash_table.m"
  while (MR_TRUE)
#line 849 "version_hash_table.m"
    {
#line 849 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 849 "version_hash_table.m"
      {
#line 849 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 849 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 848 "version_hash_table.m"
          {
#line 848 "version_hash_table.m"
            *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
#line 848 "version_hash_table.m"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 848 "version_hash_table.m"
          }
#line 849 "version_hash_table.m"
        else
#line 849 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 853 "version_hash_table.m"
            {
#line 853 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 853 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
#line 853 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 853 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 854 "version_hash_table.m"
              MR_bool MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 854 "version_hash_table.m"
              {
#line 854 "version_hash_table.m"
                mercury__version_hash_table__succeeded = mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
              }
#line 853 "version_hash_table.m"
              if (mercury__version_hash_table__succeeded)
#line 855 "version_hash_table.m"
                {
#line 855 "version_hash_table.m"
                  /* direct tailcall eliminated */
#line 855 "version_hash_table.m"
                  {
#line 855 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
#line 855 "version_hash_table.m"
                    MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

#line 855 "version_hash_table.m"
                    mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 855 "version_hash_table.m"
                    mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 855 "version_hash_table.m"
                  }
#line 855 "version_hash_table.m"
                  continue;
#line 855 "version_hash_table.m"
                }
#line 853 "version_hash_table.m"
            }
#line 849 "version_hash_table.m"
          else
#line 850 "version_hash_table.m"
            {
#line 850 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 850 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 851 "version_hash_table.m"
              MR_bool MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 851 "version_hash_table.m"
              {
#line 851 "version_hash_table.m"
                return mercury__version_hash_table__succeeded = mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
              }
#line 850 "version_hash_table.m"
            }
#line 849 "version_hash_table.m"
        return mercury__version_hash_table__succeeded;
#line 849 "version_hash_table.m"
      }
#line 849 "version_hash_table.m"
      break;
#line 849 "version_hash_table.m"
    }
#line 842 "version_hash_table.m"
}

#line 841 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_p_4_p_2(
#line 841 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
#line 841 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
#line 841 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_20,
#line 841 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 841 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 841 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_11,
#line 841 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_12)
#line 841 "version_hash_table.m"
{
#line 849 "version_hash_table.m"
  while (MR_TRUE)
#line 849 "version_hash_table.m"
    {
#line 849 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 849 "version_hash_table.m"
      {
#line 849 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 849 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 848 "version_hash_table.m"
          *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
#line 849 "version_hash_table.m"
        else
#line 849 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 853 "version_hash_table.m"
            {
#line 853 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 853 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
#line 853 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 853 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 854 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 854 "version_hash_table.m"
              {
#line 854 "version_hash_table.m"
                mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
              }
#line 855 "version_hash_table.m"
              /* direct tailcall eliminated */
#line 855 "version_hash_table.m"
              {
#line 855 "version_hash_table.m"
                MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
#line 855 "version_hash_table.m"
                MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

#line 855 "version_hash_table.m"
                mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 855 "version_hash_table.m"
                mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 855 "version_hash_table.m"
              }
#line 855 "version_hash_table.m"
              continue;
#line 853 "version_hash_table.m"
            }
#line 849 "version_hash_table.m"
          else
#line 850 "version_hash_table.m"
            {
#line 850 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 850 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 851 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 851 "version_hash_table.m"
              {
#line 851 "version_hash_table.m"
                mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
#line 851 "version_hash_table.m"
                return;
              }
#line 850 "version_hash_table.m"
            }
#line 849 "version_hash_table.m"
      }
#line 849 "version_hash_table.m"
      break;
#line 849 "version_hash_table.m"
    }
#line 841 "version_hash_table.m"
}

#line 840 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_p_4_p_1(
#line 840 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
#line 840 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
#line 840 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_20,
#line 840 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 840 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 840 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_11,
#line 840 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_12)
#line 840 "version_hash_table.m"
{
#line 849 "version_hash_table.m"
  while (MR_TRUE)
#line 849 "version_hash_table.m"
    {
#line 849 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 849 "version_hash_table.m"
      {
#line 849 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 849 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 848 "version_hash_table.m"
          *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
#line 849 "version_hash_table.m"
        else
#line 849 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 853 "version_hash_table.m"
            {
#line 853 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 853 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
#line 853 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 853 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 854 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 854 "version_hash_table.m"
              {
#line 854 "version_hash_table.m"
                mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
              }
#line 855 "version_hash_table.m"
              /* direct tailcall eliminated */
#line 855 "version_hash_table.m"
              {
#line 855 "version_hash_table.m"
                MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
#line 855 "version_hash_table.m"
                MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

#line 855 "version_hash_table.m"
                mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 855 "version_hash_table.m"
                mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 855 "version_hash_table.m"
              }
#line 855 "version_hash_table.m"
              continue;
#line 853 "version_hash_table.m"
            }
#line 849 "version_hash_table.m"
          else
#line 850 "version_hash_table.m"
            {
#line 850 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 850 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 851 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 851 "version_hash_table.m"
              {
#line 851 "version_hash_table.m"
                mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
#line 851 "version_hash_table.m"
                return;
              }
#line 850 "version_hash_table.m"
            }
#line 849 "version_hash_table.m"
      }
#line 849 "version_hash_table.m"
      break;
#line 849 "version_hash_table.m"
    }
#line 840 "version_hash_table.m"
}

#line 839 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_p_4_p_0(
#line 839 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
#line 839 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
#line 839 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_20,
#line 839 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 839 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 839 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_11,
#line 839 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_12)
#line 839 "version_hash_table.m"
{
#line 849 "version_hash_table.m"
  while (MR_TRUE)
#line 849 "version_hash_table.m"
    {
#line 849 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 849 "version_hash_table.m"
      {
#line 849 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 849 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 848 "version_hash_table.m"
          *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
#line 849 "version_hash_table.m"
        else
#line 849 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 853 "version_hash_table.m"
            {
#line 853 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 853 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
#line 853 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 853 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 854 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 854 "version_hash_table.m"
              {
#line 854 "version_hash_table.m"
                mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
              }
#line 855 "version_hash_table.m"
              /* direct tailcall eliminated */
#line 855 "version_hash_table.m"
              {
#line 855 "version_hash_table.m"
                MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
#line 855 "version_hash_table.m"
                MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

#line 855 "version_hash_table.m"
                mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 855 "version_hash_table.m"
                mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 855 "version_hash_table.m"
              }
#line 855 "version_hash_table.m"
              continue;
#line 853 "version_hash_table.m"
            }
#line 849 "version_hash_table.m"
          else
#line 850 "version_hash_table.m"
            {
#line 850 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 850 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 851 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 851 "version_hash_table.m"
              {
#line 851 "version_hash_table.m"
                mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
#line 851 "version_hash_table.m"
                return;
              }
#line 850 "version_hash_table.m"
            }
#line 849 "version_hash_table.m"
      }
#line 849 "version_hash_table.m"
      break;
#line 849 "version_hash_table.m"
    }
#line 839 "version_hash_table.m"
}

#line 817 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_f_4_p_1(
#line 817 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_15,
#line 817 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_16,
#line 817 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_17,
#line 817 "version_hash_table.m"
  MR_Word mercury__version_hash_table__F_5,
#line 817 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 817 "version_hash_table.m"
  MR_Box mercury__version_hash_table__A0_7,
#line 817 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__A_8)
#line 817 "version_hash_table.m"
{
#line 823 "version_hash_table.m"
  while (MR_TRUE)
#line 823 "version_hash_table.m"
    {
#line 823 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 823 "version_hash_table.m"
      {
#line 823 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 823 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 822 "version_hash_table.m"
          *mercury__version_hash_table__A_8 = mercury__version_hash_table__A0_7;
#line 823 "version_hash_table.m"
        else
#line 823 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 827 "version_hash_table.m"
            {
#line 827 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 827 "version_hash_table.m"
              MR_Box mercury__version_hash_table__A1_12;
#line 827 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_13 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 827 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_14 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 828 "version_hash_table.m"
              MR_Box MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__F_5, (MR_Integer) 1)));

#line 828 "version_hash_table.m"
              {
#line 828 "version_hash_table.m"
                mercury__version_hash_table__A1_12 = mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__F_5), mercury__version_hash_table__K_13, mercury__version_hash_table__V_14, mercury__version_hash_table__A0_7);
              }
#line 829 "version_hash_table.m"
              /* direct tailcall eliminated */
#line 829 "version_hash_table.m"
              {
#line 829 "version_hash_table.m"
                MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_11;
#line 829 "version_hash_table.m"
                MR_Box mercury__version_hash_table__A0__tmp_copy_7 = mercury__version_hash_table__A1_12;

#line 829 "version_hash_table.m"
                mercury__version_hash_table__A0_7 = mercury__version_hash_table__A0__tmp_copy_7;
#line 829 "version_hash_table.m"
                mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 829 "version_hash_table.m"
              }
#line 829 "version_hash_table.m"
              continue;
#line 827 "version_hash_table.m"
            }
#line 823 "version_hash_table.m"
          else
#line 824 "version_hash_table.m"
            {
#line 824 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 824 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_10 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 825 "version_hash_table.m"
              MR_Box MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__F_5, (MR_Integer) 1)));

#line 825 "version_hash_table.m"
              {
#line 825 "version_hash_table.m"
                *mercury__version_hash_table__A_8 = mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__F_5), mercury__version_hash_table__K_9, mercury__version_hash_table__V_10, mercury__version_hash_table__A0_7);
              }
#line 824 "version_hash_table.m"
            }
#line 823 "version_hash_table.m"
      }
#line 823 "version_hash_table.m"
      break;
#line 823 "version_hash_table.m"
    }
#line 817 "version_hash_table.m"
}

#line 816 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_f_4_p_0(
#line 816 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_15,
#line 816 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_16,
#line 816 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_17,
#line 816 "version_hash_table.m"
  MR_Word mercury__version_hash_table__F_5,
#line 816 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 816 "version_hash_table.m"
  MR_Box mercury__version_hash_table__A0_7,
#line 816 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__A_8)
#line 816 "version_hash_table.m"
{
#line 823 "version_hash_table.m"
  while (MR_TRUE)
#line 823 "version_hash_table.m"
    {
#line 823 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 823 "version_hash_table.m"
      {
#line 823 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 823 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 822 "version_hash_table.m"
          *mercury__version_hash_table__A_8 = mercury__version_hash_table__A0_7;
#line 823 "version_hash_table.m"
        else
#line 823 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 827 "version_hash_table.m"
            {
#line 827 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 827 "version_hash_table.m"
              MR_Box mercury__version_hash_table__A1_12;
#line 827 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_13 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 827 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_14 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 828 "version_hash_table.m"
              MR_Box MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__F_5, (MR_Integer) 1)));

#line 828 "version_hash_table.m"
              {
#line 828 "version_hash_table.m"
                mercury__version_hash_table__A1_12 = mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__F_5), mercury__version_hash_table__K_13, mercury__version_hash_table__V_14, mercury__version_hash_table__A0_7);
              }
#line 829 "version_hash_table.m"
              /* direct tailcall eliminated */
#line 829 "version_hash_table.m"
              {
#line 829 "version_hash_table.m"
                MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_11;
#line 829 "version_hash_table.m"
                MR_Box mercury__version_hash_table__A0__tmp_copy_7 = mercury__version_hash_table__A1_12;

#line 829 "version_hash_table.m"
                mercury__version_hash_table__A0_7 = mercury__version_hash_table__A0__tmp_copy_7;
#line 829 "version_hash_table.m"
                mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 829 "version_hash_table.m"
              }
#line 829 "version_hash_table.m"
              continue;
#line 827 "version_hash_table.m"
            }
#line 823 "version_hash_table.m"
          else
#line 824 "version_hash_table.m"
            {
#line 824 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 824 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_10 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 825 "version_hash_table.m"
              MR_Box MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__F_5, (MR_Integer) 1)));

#line 825 "version_hash_table.m"
              {
#line 825 "version_hash_table.m"
                *mercury__version_hash_table__A_8 = mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__F_5), mercury__version_hash_table__K_9, mercury__version_hash_table__V_10, mercury__version_hash_table__A0_7);
              }
#line 824 "version_hash_table.m"
            }
#line 823 "version_hash_table.m"
      }
#line 823 "version_hash_table.m"
      break;
#line 823 "version_hash_table.m"
    }
#line 816 "version_hash_table.m"
}

#line 659 "version_hash_table.m"
static void MR_CALL 
mercury__version_hash_table__reinsert_alist_5_p_0(
#line 659 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_20,
#line 659 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_21,
#line 659 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL_6,
#line 659 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_7,
#line 659 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumBuckets_8,
#line 659 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13,
#line 659 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Buckets_14)
#line 659 "version_hash_table.m"
{
#line 665 "version_hash_table.m"
  while (MR_TRUE)
#line 665 "version_hash_table.m"
    {
#line 665 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 665 "version_hash_table.m"
      {
#line 665 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 665 "version_hash_table.m"
        if ((mercury__version_hash_table__AL_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 664 "version_hash_table.m"
          *mercury__version_hash_table__STATE_VARIABLE_Buckets_14 = mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13;
#line 665 "version_hash_table.m"
        else
#line 665 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__AL_6)) == (MR_mktag((MR_Integer) 2))))
#line 669 "version_hash_table.m"
            {
#line 669 "version_hash_table.m"
              MR_Word mercury__version_hash_table__TypeCtorInfo_23_36;
#line 669 "version_hash_table.m"
              MR_Word mercury__version_hash_table__TypeInfo_24_37;
#line 669 "version_hash_table.m"
              MR_Word mercury__version_hash_table__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_6, (MR_Integer) 2)));
#line 669 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_15_15;
#line 669 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_18 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_6, (MR_Integer) 0));
#line 669 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_19 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_6, (MR_Integer) 1));
#line 669 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__H_28;
#line 669 "version_hash_table.m"
              MR_Word mercury__version_hash_table__AL0_29;
#line 669 "version_hash_table.m"
              MR_Word mercury__version_hash_table__AL_30;
#line 669 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__Hash_42;
#line 669 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__V_43_43;
#line 340 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_7, (MR_Integer) 1)));
#line 340 "version_hash_table.m"
              MR_Box mercury__version_hash_table__conv1_Hash_42;
#line 154 "version_array.opt"
              MR_Box mercury__version_hash_table__conv2_AL0_29;
#line 157 "version_array.opt"
              MR_Box mercury__version_hash_table__conv3_STATE_VARIABLE_Buckets_15_15;

#line 340 "version_hash_table.m"
              {
#line 340 "version_hash_table.m"
                mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_7), mercury__version_hash_table__K_18, &mercury__version_hash_table__conv1_Hash_42);
              }
#line 340 "version_hash_table.m"
              mercury__version_hash_table__Hash_42 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_42);
#line 342 "version_hash_table.m"
              mercury__version_hash_table__V_43_43 = (mercury__version_hash_table__NumBuckets_8 - (MR_Integer) 1);
#line 342 "version_hash_table.m"
              mercury__version_hash_table__H_28 = (mercury__version_hash_table__Hash_42 & mercury__version_hash_table__V_43_43);
#line 4812 "version_hash_table.c"
              mercury__version_hash_table__TypeCtorInfo_23_36 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 4814 "version_hash_table.c"
              {
#line 4816 "version_hash_table.c"
                mercury__version_hash_table__TypeInfo_24_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4818 "version_hash_table.c"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_37, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_23_36));
#line 4820 "version_hash_table.c"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_37, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_20));
#line 4822 "version_hash_table.c"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_37, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_21));
#line 4824 "version_hash_table.c"
              }
#line 154 "version_array.opt"
              {
#line 154 "version_array.opt"
                mercury__version_hash_table__conv2_AL0_29 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_24_37, (MR_Box) mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13, mercury__version_hash_table__H_28);
              }
#line 154 "version_array.opt"
              mercury__version_hash_table__AL0_29 = ((MR_Word) mercury__version_hash_table__conv2_AL0_29);
#line 683 "version_hash_table.m"
              if ((mercury__version_hash_table__AL0_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 682 "version_hash_table.m"
                {
#line 682 "version_hash_table.m"
                  mercury__version_hash_table__AL_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "version_hash_table.m"
                  MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_30, 0) = mercury__version_hash_table__K_18;
#line 682 "version_hash_table.m"
                  MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_30, 1) = mercury__version_hash_table__V_19;
#line 682 "version_hash_table.m"
                }
#line 683 "version_hash_table.m"
              else
#line 683 "version_hash_table.m"
                if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_29)) == (MR_mktag((MR_Integer) 2))))
#line 687 "version_hash_table.m"
                  {
#line 687 "version_hash_table.m"
                    mercury__version_hash_table__AL_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 687 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 0) = mercury__version_hash_table__K_18;
#line 687 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 1) = mercury__version_hash_table__V_19;
#line 687 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 2) = ((MR_Box) (mercury__version_hash_table__AL0_29));
#line 687 "version_hash_table.m"
                  }
#line 683 "version_hash_table.m"
                else
#line 687 "version_hash_table.m"
                  {
#line 687 "version_hash_table.m"
                    mercury__version_hash_table__AL_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 687 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 0) = mercury__version_hash_table__K_18;
#line 687 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 1) = mercury__version_hash_table__V_19;
#line 687 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 2) = ((MR_Box) (mercury__version_hash_table__AL0_29));
#line 687 "version_hash_table.m"
                  }
#line 157 "version_array.opt"
              {
#line 157 "version_array.opt"
                mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_24_37, mercury__version_hash_table__H_28, ((MR_Box) (mercury__version_hash_table__AL_30)), (MR_Box) mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13, &mercury__version_hash_table__conv3_STATE_VARIABLE_Buckets_15_15);
              }
#line 157 "version_array.opt"
              mercury__version_hash_table__STATE_VARIABLE_Buckets_15_15 = (MR_Box) mercury__version_hash_table__conv3_STATE_VARIABLE_Buckets_15_15;
#line 671 "version_hash_table.m"
              /* direct tailcall eliminated */
#line 671 "version_hash_table.m"
              {
#line 671 "version_hash_table.m"
                MR_Word mercury__version_hash_table__AL__tmp_copy_6 = mercury__version_hash_table__T_12;
#line 671 "version_hash_table.m"
                MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13 = mercury__version_hash_table__STATE_VARIABLE_Buckets_15_15;

#line 671 "version_hash_table.m"
                mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13 = mercury__version_hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13;
#line 671 "version_hash_table.m"
                mercury__version_hash_table__AL_6 = mercury__version_hash_table__AL__tmp_copy_6;
#line 671 "version_hash_table.m"
              }
#line 671 "version_hash_table.m"
              continue;
#line 669 "version_hash_table.m"
            }
#line 665 "version_hash_table.m"
          else
#line 666 "version_hash_table.m"
            {
#line 666 "version_hash_table.m"
              MR_Word mercury__version_hash_table__TypeCtorInfo_23_66;
#line 666 "version_hash_table.m"
              MR_Word mercury__version_hash_table__TypeInfo_24_67;
#line 666 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_10 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_6, (MR_Integer) 0));
#line 666 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_11 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_6, (MR_Integer) 1));
#line 666 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__H_58;
#line 666 "version_hash_table.m"
              MR_Word mercury__version_hash_table__AL0_59;
#line 666 "version_hash_table.m"
              MR_Word mercury__version_hash_table__AL_60;
#line 666 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__Hash_72;
#line 666 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__V_73_73;
#line 340 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_4)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_7, (MR_Integer) 1)));
#line 340 "version_hash_table.m"
              MR_Box mercury__version_hash_table__conv5_Hash_72;
#line 154 "version_array.opt"
              MR_Box mercury__version_hash_table__conv6_AL0_59;
#line 157 "version_array.opt"
              MR_Box mercury__version_hash_table__conv7_STATE_VARIABLE_Buckets_14;

#line 340 "version_hash_table.m"
              {
#line 340 "version_hash_table.m"
                mercury__version_hash_table__func_4(((MR_Box) mercury__version_hash_table__HashPred_7), mercury__version_hash_table__K_10, &mercury__version_hash_table__conv5_Hash_72);
              }
#line 340 "version_hash_table.m"
              mercury__version_hash_table__Hash_72 = ((MR_Integer) mercury__version_hash_table__conv5_Hash_72);
#line 342 "version_hash_table.m"
              mercury__version_hash_table__V_73_73 = (mercury__version_hash_table__NumBuckets_8 - (MR_Integer) 1);
#line 342 "version_hash_table.m"
              mercury__version_hash_table__H_58 = (mercury__version_hash_table__Hash_72 & mercury__version_hash_table__V_73_73);
#line 4943 "version_hash_table.c"
              mercury__version_hash_table__TypeCtorInfo_23_66 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 4945 "version_hash_table.c"
              {
#line 4947 "version_hash_table.c"
                mercury__version_hash_table__TypeInfo_24_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4949 "version_hash_table.c"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_67, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_23_66));
#line 4951 "version_hash_table.c"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_67, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_20));
#line 4953 "version_hash_table.c"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_67, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_21));
#line 4955 "version_hash_table.c"
              }
#line 154 "version_array.opt"
              {
#line 154 "version_array.opt"
                mercury__version_hash_table__conv6_AL0_59 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_24_67, (MR_Box) mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13, mercury__version_hash_table__H_58);
              }
#line 154 "version_array.opt"
              mercury__version_hash_table__AL0_59 = ((MR_Word) mercury__version_hash_table__conv6_AL0_59);
#line 683 "version_hash_table.m"
              if ((mercury__version_hash_table__AL0_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 682 "version_hash_table.m"
                mercury__version_hash_table__AL_60 = mercury__version_hash_table__AL_6;
#line 683 "version_hash_table.m"
              else
#line 683 "version_hash_table.m"
                if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_59)) == (MR_mktag((MR_Integer) 2))))
#line 687 "version_hash_table.m"
                  {
#line 687 "version_hash_table.m"
                    mercury__version_hash_table__AL_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 687 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 0) = mercury__version_hash_table__K_10;
#line 687 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 1) = mercury__version_hash_table__V_11;
#line 687 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 2) = ((MR_Box) (mercury__version_hash_table__AL0_59));
#line 687 "version_hash_table.m"
                  }
#line 683 "version_hash_table.m"
                else
#line 687 "version_hash_table.m"
                  {
#line 687 "version_hash_table.m"
                    mercury__version_hash_table__AL_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 687 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 0) = mercury__version_hash_table__K_10;
#line 687 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 1) = mercury__version_hash_table__V_11;
#line 687 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 2) = ((MR_Box) (mercury__version_hash_table__AL0_59));
#line 687 "version_hash_table.m"
                  }
#line 157 "version_array.opt"
              {
#line 157 "version_array.opt"
                mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_24_67, mercury__version_hash_table__H_58, ((MR_Box) (mercury__version_hash_table__AL_60)), (MR_Box) mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13, &mercury__version_hash_table__conv7_STATE_VARIABLE_Buckets_14);
              }
#line 157 "version_array.opt"
              *mercury__version_hash_table__STATE_VARIABLE_Buckets_14 = (MR_Box) mercury__version_hash_table__conv7_STATE_VARIABLE_Buckets_14;
#line 666 "version_hash_table.m"
            }
#line 665 "version_hash_table.m"
      }
#line 665 "version_hash_table.m"
      break;
#line 665 "version_hash_table.m"
    }
#line 659 "version_hash_table.m"
}

#line 646 "version_hash_table.m"
static void MR_CALL 
mercury__version_hash_table__reinsert_bindings_6_p_0(
#line 646 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_20,
#line 646 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_21,
#line 646 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__I_7,
#line 646 "version_hash_table.m"
  MR_Box mercury__version_hash_table__OldBuckets_8,
#line 646 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_9,
#line 646 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumBuckets_10,
#line 646 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13,
#line 646 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Buckets_14)
#line 646 "version_hash_table.m"
{
#line 653 "version_hash_table.m"
  while (MR_TRUE)
#line 653 "version_hash_table.m"
    {
#line 653 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 653 "version_hash_table.m"
      {
#line 653 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;
#line 651 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_15_15;
#line 158 "version_array.opt"
        MR_Word mercury__version_hash_table__TypeInfo_23_29;

#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__reinsert_bindings_6_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__OldBuckets_8 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 5065 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_15_15  = N;
#line 158 "version_array.opt"
}
#line 651 "version_hash_table.m"
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__I_7 >= mercury__version_hash_table__V_15_15);
#line 653 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 651 "version_hash_table.m"
          *mercury__version_hash_table__STATE_VARIABLE_Buckets_14 = mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13;
#line 653 "version_hash_table.m"
        else
#line 654 "version_hash_table.m"
          {
#line 654 "version_hash_table.m"
            MR_Word mercury__version_hash_table__TypeCtorInfo_24_24 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 654 "version_hash_table.m"
            MR_Word mercury__version_hash_table__TypeInfo_25_25;
#line 654 "version_hash_table.m"
            MR_Word mercury__version_hash_table__AL_12;
#line 654 "version_hash_table.m"
            MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_16_16;
#line 654 "version_hash_table.m"
            MR_Integer mercury__version_hash_table__V_17_17;
#line 154 "version_array.opt"
            MR_Box mercury__version_hash_table__conv0_AL_12;

#line 5095 "version_hash_table.c"
            {
#line 5097 "version_hash_table.c"
              mercury__version_hash_table__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5099 "version_hash_table.c"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_25_25, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_24_24));
#line 5101 "version_hash_table.c"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_25_25, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_20));
#line 5103 "version_hash_table.c"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_25_25, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_21));
#line 5105 "version_hash_table.c"
            }
#line 154 "version_array.opt"
            {
#line 154 "version_array.opt"
              mercury__version_hash_table__conv0_AL_12 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_25_25, (MR_Box) mercury__version_hash_table__OldBuckets_8, mercury__version_hash_table__I_7);
            }
#line 154 "version_array.opt"
            mercury__version_hash_table__AL_12 = ((MR_Word) mercury__version_hash_table__conv0_AL_12);
#line 655 "version_hash_table.m"
            {
#line 655 "version_hash_table.m"
              mercury__version_hash_table__reinsert_alist_5_p_0(mercury__version_hash_table__TypeInfo_for_K_20, mercury__version_hash_table__TypeInfo_for_V_21, mercury__version_hash_table__AL_12, mercury__version_hash_table__HashPred_9, mercury__version_hash_table__NumBuckets_10, mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13, &mercury__version_hash_table__STATE_VARIABLE_Buckets_16_16);
            }
#line 656 "version_hash_table.m"
            mercury__version_hash_table__V_17_17 = (mercury__version_hash_table__I_7 + (MR_Integer) 1);
#line 656 "version_hash_table.m"
            /* direct tailcall eliminated */
#line 656 "version_hash_table.m"
            {
#line 656 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__I__tmp_copy_7 = mercury__version_hash_table__V_17_17;
#line 656 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13 = mercury__version_hash_table__STATE_VARIABLE_Buckets_16_16;

#line 656 "version_hash_table.m"
              mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13 = mercury__version_hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13;
#line 656 "version_hash_table.m"
              mercury__version_hash_table__I_7 = mercury__version_hash_table__I__tmp_copy_7;
#line 656 "version_hash_table.m"
            }
#line 656 "version_hash_table.m"
            continue;
#line 654 "version_hash_table.m"
          }
#line 653 "version_hash_table.m"
      }
#line 653 "version_hash_table.m"
      break;
#line 653 "version_hash_table.m"
    }
#line 646 "version_hash_table.m"
}

#line 632 "version_hash_table.m"
static MR_Word MR_CALL 
mercury__version_hash_table__expand_4_f_0(
#line 632 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_21,
#line 632 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_22,
#line 632 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumOccupants_6,
#line 632 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__MaxOccupants0_7,
#line 632 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred0_8,
#line 632 "version_hash_table.m"
  MR_Box mercury__version_hash_table__Buckets0_9)
#line 632 "version_hash_table.m"
{
#line 637 "version_hash_table.m"
  {
#line 637 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 637 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_10;
#line 637 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_23_23 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 637 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_24_24;
#line 637 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumBuckets0_11;
#line 637 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumBuckets_12;
#line 637 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__MaxOccupants_13;
#line 637 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_14;
#line 637 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets1_15;
#line 637 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_16;
#line 637 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_19_19;
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_24_25;
#line 347 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_26;
#line 642 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv0_Buckets1_15;

#line 5197 "version_hash_table.c"
    {
#line 5199 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5201 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_24, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_23_23));
#line 5203 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_24, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_21));
#line 5205 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_24, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_22));
#line 5207 "version_hash_table.c"
    }
#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__expand_4_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets0_9 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 5222 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__NumBuckets0_11  = N;
#line 158 "version_array.opt"
}
#line 639 "version_hash_table.m"
    mercury__version_hash_table__NumBuckets_12 = (mercury__version_hash_table__NumBuckets0_11 + mercury__version_hash_table__NumBuckets0_11);
#line 640 "version_hash_table.m"
    mercury__version_hash_table__MaxOccupants_13 = (mercury__version_hash_table__MaxOccupants0_7 + mercury__version_hash_table__MaxOccupants0_7);
#line 350 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__expand_4_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HashPred0_8 ;
		{
#line 350 "version_hash_table.m"

    HashPred = HashPred0;

#line 5246 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_14  = HashPred;
#line 350 "version_hash_table.m"
}
#line 642 "version_hash_table.m"
    mercury__version_hash_table__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 642 "version_hash_table.m"
    {
#line 642 "version_hash_table.m"
      mercury__version_hash_table__conv0_Buckets1_15 = mercury__version_array__init_2_f_0(mercury__version_hash_table__TypeInfo_24_24, mercury__version_hash_table__NumBuckets_12, ((MR_Box) (mercury__version_hash_table__V_19_19)));
    }
#line 642 "version_hash_table.m"
    mercury__version_hash_table__Buckets1_15 = (MR_Box) mercury__version_hash_table__conv0_Buckets1_15;
#line 643 "version_hash_table.m"
    {
#line 643 "version_hash_table.m"
      mercury__version_hash_table__reinsert_bindings_6_p_0(mercury__version_hash_table__TypeInfo_for_K_21, mercury__version_hash_table__TypeInfo_for_V_22, (MR_Integer) 0, mercury__version_hash_table__Buckets0_9, mercury__version_hash_table__HashPred_14, mercury__version_hash_table__NumBuckets_12, mercury__version_hash_table__Buckets1_15, &mercury__version_hash_table__Buckets_16);
    }
#line 644 "version_hash_table.m"
    {
#line 644 "version_hash_table.m"
      mercury__version_hash_table__HT_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 644 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants_6));
#line 644 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_13));
#line 644 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_14));
#line 644 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_16));
#line 644 "version_hash_table.m"
    }
#line 637 "version_hash_table.m"
    return mercury__version_hash_table__HT_10;
#line 637 "version_hash_table.m"
  }
#line 632 "version_hash_table.m"
}

#line 612 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__from_assoc_list_2_3_p_0(
#line 612 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_16,
#line 612 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_17,
#line 612 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__1_1,
#line 612 "version_hash_table.m"
  MR_Word mercury__version_hash_table__STATE_VARIABLE_HT_0_2,
#line 612 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__STATE_VARIABLE_HT_3)
#line 612 "version_hash_table.m"
{
#line 615 "version_hash_table.m"
  while (MR_TRUE)
#line 615 "version_hash_table.m"
    {
#line 615 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 615 "version_hash_table.m"
      {
#line 615 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 615 "version_hash_table.m"
        if ((mercury__version_hash_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "version_hash_table.m"
          *mercury__version_hash_table__STATE_VARIABLE_HT_3 = mercury__version_hash_table__STATE_VARIABLE_HT_0_2;
#line 615 "version_hash_table.m"
        else
#line 616 "version_hash_table.m"
          {
#line 616 "version_hash_table.m"
            MR_Box mercury__version_hash_table__K_7;
#line 616 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_8;
#line 616 "version_hash_table.m"
            MR_Word mercury__version_hash_table__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 1)));
#line 616 "version_hash_table.m"
            MR_Word mercury__version_hash_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 0)));
#line 616 "version_hash_table.m"
            MR_Word mercury__version_hash_table__STATE_VARIABLE_HT_14_14;

#line 616 "version_hash_table.m"
            mercury__version_hash_table__K_7 = (MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_13_13, (MR_Integer) 0));
#line 616 "version_hash_table.m"
            mercury__version_hash_table__V_8 = (MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_13_13, (MR_Integer) 1));
#line 423 "version_hash_table.m"
            {
#line 423 "version_hash_table.m"
              mercury__version_hash_table__STATE_VARIABLE_HT_14_14 = mercury__version_hash_table__set_3_f_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__STATE_VARIABLE_HT_0_2, mercury__version_hash_table__K_7, mercury__version_hash_table__V_8);
            }
#line 618 "version_hash_table.m"
            /* direct tailcall eliminated */
#line 618 "version_hash_table.m"
            {
#line 618 "version_hash_table.m"
              MR_Word mercury__version_hash_table__HeadVar__1__tmp_copy_1 = mercury__version_hash_table__T_9;
#line 618 "version_hash_table.m"
              MR_Word mercury__version_hash_table__STATE_VARIABLE_HT_0__tmp_copy_2 = mercury__version_hash_table__STATE_VARIABLE_HT_14_14;

#line 618 "version_hash_table.m"
              mercury__version_hash_table__STATE_VARIABLE_HT_0_2 = mercury__version_hash_table__STATE_VARIABLE_HT_0__tmp_copy_2;
#line 618 "version_hash_table.m"
              mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__HeadVar__1__tmp_copy_1;
#line 618 "version_hash_table.m"
            }
#line 618 "version_hash_table.m"
            continue;
#line 616 "version_hash_table.m"
          }
#line 615 "version_hash_table.m"
      }
#line 615 "version_hash_table.m"
      break;
#line 615 "version_hash_table.m"
    }
#line 612 "version_hash_table.m"
}

#line 590 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__to_assoc_list_2_3_p_0(
#line 590 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_15,
#line 590 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_16,
#line 590 "version_hash_table.m"
  MR_Word mercury__version_hash_table__X_4,
#line 590 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL0_5,
#line 590 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__AL_6)
#line 590 "version_hash_table.m"
{
#line 597 "version_hash_table.m"
  while (MR_TRUE)
#line 597 "version_hash_table.m"
    {
#line 597 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 597 "version_hash_table.m"
      {
#line 597 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 597 "version_hash_table.m"
        if ((mercury__version_hash_table__X_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 596 "version_hash_table.m"
          *mercury__version_hash_table__AL_6 = mercury__version_hash_table__AL0_5;
#line 597 "version_hash_table.m"
        else
#line 597 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__X_4)) == (MR_mktag((MR_Integer) 2))))
#line 601 "version_hash_table.m"
            {
#line 601 "version_hash_table.m"
              MR_Word mercury__version_hash_table__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__X_4, (MR_Integer) 2)));
#line 601 "version_hash_table.m"
              MR_Word mercury__version_hash_table__AL1_10;
#line 601 "version_hash_table.m"
              MR_Word mercury__version_hash_table__V_11_11;
#line 601 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_13 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__X_4, (MR_Integer) 0));
#line 601 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_14 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__X_4, (MR_Integer) 1));

#line 602 "version_hash_table.m"
              {
#line 602 "version_hash_table.m"
                mercury__version_hash_table__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 602 "version_hash_table.m"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_11_11, 0) = mercury__version_hash_table__K_13;
#line 602 "version_hash_table.m"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_11_11, 1) = mercury__version_hash_table__V_14;
#line 602 "version_hash_table.m"
              }
#line 602 "version_hash_table.m"
              {
#line 602 "version_hash_table.m"
                mercury__version_hash_table__AL1_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 602 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL1_10, 0) = ((MR_Box) (mercury__version_hash_table__V_11_11));
#line 602 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL1_10, 1) = ((MR_Box) (mercury__version_hash_table__AL0_5));
#line 602 "version_hash_table.m"
              }
#line 603 "version_hash_table.m"
              /* direct tailcall eliminated */
#line 603 "version_hash_table.m"
              {
#line 603 "version_hash_table.m"
                MR_Word mercury__version_hash_table__X__tmp_copy_4 = mercury__version_hash_table__T_9;
#line 603 "version_hash_table.m"
                MR_Word mercury__version_hash_table__AL0__tmp_copy_5 = mercury__version_hash_table__AL1_10;

#line 603 "version_hash_table.m"
                mercury__version_hash_table__AL0_5 = mercury__version_hash_table__AL0__tmp_copy_5;
#line 603 "version_hash_table.m"
                mercury__version_hash_table__X_4 = mercury__version_hash_table__X__tmp_copy_4;
#line 603 "version_hash_table.m"
              }
#line 603 "version_hash_table.m"
              continue;
#line 601 "version_hash_table.m"
            }
#line 597 "version_hash_table.m"
          else
#line 598 "version_hash_table.m"
            {
#line 598 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_7 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__X_4, (MR_Integer) 0));
#line 598 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__X_4, (MR_Integer) 1));
#line 598 "version_hash_table.m"
              MR_Word mercury__version_hash_table__V_12_12;

#line 599 "version_hash_table.m"
              {
#line 599 "version_hash_table.m"
                mercury__version_hash_table__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 599 "version_hash_table.m"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_12_12, 0) = mercury__version_hash_table__K_7;
#line 599 "version_hash_table.m"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_12_12, 1) = mercury__version_hash_table__V_8;
#line 599 "version_hash_table.m"
              }
#line 599 "version_hash_table.m"
              {
#line 599 "version_hash_table.m"
                MR_Word base;
#line 599 "version_hash_table.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 599 "version_hash_table.m"
                *mercury__version_hash_table__AL_6 = base;
#line 599 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__version_hash_table__V_12_12));
#line 599 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__version_hash_table__AL0_5));
#line 599 "version_hash_table.m"
              }
#line 598 "version_hash_table.m"
            }
#line 597 "version_hash_table.m"
      }
#line 597 "version_hash_table.m"
      break;
#line 597 "version_hash_table.m"
    }
#line 590 "version_hash_table.m"
}

#line 460 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__alist_search_3_p_0(
#line 460 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_10,
#line 460 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_11,
#line 460 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL_4,
#line 460 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 460 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__V_6)
#line 460 "version_hash_table.m"
{
#line 467 "version_hash_table.m"
  while (MR_TRUE)
#line 467 "version_hash_table.m"
    {
#line 467 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 467 "version_hash_table.m"
      {
#line 467 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 467 "version_hash_table.m"
        if (((MR_tag((MR_Word) mercury__version_hash_table__AL_4)) == (MR_mktag((MR_Integer) 2))))
#line 470 "version_hash_table.m"
          {
#line 470 "version_hash_table.m"
            MR_Box mercury__version_hash_table__HK_7 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_4, (MR_Integer) 0));
#line 470 "version_hash_table.m"
            MR_Box mercury__version_hash_table__HV_8 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_4, (MR_Integer) 1));
#line 470 "version_hash_table.m"
            MR_Word mercury__version_hash_table__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_4, (MR_Integer) 2)));

#line 471 "version_hash_table.m"
            {
#line 471 "version_hash_table.m"
              mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_10, mercury__version_hash_table__HK_7, mercury__version_hash_table__K_5);
            }
#line 473 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 472 "version_hash_table.m"
              {
#line 472 "version_hash_table.m"
                *mercury__version_hash_table__V_6 = mercury__version_hash_table__HV_8;
#line 472 "version_hash_table.m"
                mercury__version_hash_table__succeeded = MR_TRUE;
#line 472 "version_hash_table.m"
              }
#line 473 "version_hash_table.m"
            else
#line 474 "version_hash_table.m"
              {
#line 474 "version_hash_table.m"
                /* direct tailcall eliminated */
#line 474 "version_hash_table.m"
                {
#line 474 "version_hash_table.m"
                  MR_Word mercury__version_hash_table__AL__tmp_copy_4 = mercury__version_hash_table__T_9;

#line 474 "version_hash_table.m"
                  mercury__version_hash_table__AL_4 = mercury__version_hash_table__AL__tmp_copy_4;
#line 474 "version_hash_table.m"
                }
#line 474 "version_hash_table.m"
                continue;
#line 474 "version_hash_table.m"
              }
#line 470 "version_hash_table.m"
          }
#line 467 "version_hash_table.m"
        else
#line 467 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__AL_4)) == (MR_mktag((MR_Integer) 1))))
#line 468 "version_hash_table.m"
            {
#line 468 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_12_12 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_4, (MR_Integer) 0));

#line 468 "version_hash_table.m"
              *mercury__version_hash_table__V_6 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_4, (MR_Integer) 1));
#line 468 "version_hash_table.m"
              {
#line 468 "version_hash_table.m"
                return mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_10, mercury__version_hash_table__K_5, mercury__version_hash_table__V_12_12);
              }
#line 468 "version_hash_table.m"
            }
#line 467 "version_hash_table.m"
          else
#line 467 "version_hash_table.m"
            mercury__version_hash_table__succeeded = MR_FALSE;
#line 467 "version_hash_table.m"
        return mercury__version_hash_table__succeeded;
#line 467 "version_hash_table.m"
      }
#line 467 "version_hash_table.m"
      break;
#line 467 "version_hash_table.m"
    }
#line 460 "version_hash_table.m"
}

#line 344 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__unsafe_hash_pred_cast_2_p_0(
#line 344 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_3,
#line 344 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__1_1,
#line 344 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__2_2)
#line 344 "version_hash_table.m"
{
#line 347 "version_hash_table.m"
  {
#line 347 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 347 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_4;

#line 350 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__unsafe_hash_pred_cast_2_p_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HeadVar__1_1 ;
		{
#line 350 "version_hash_table.m"

    HashPred = HashPred0;

#line 5639 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__HeadVar__2_2  = HashPred;
#line 350 "version_hash_table.m"
}
#line 347 "version_hash_table.m"
  }
#line 344 "version_hash_table.m"
}

#line 335 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__find_slot_2_4_p_0(
#line 335 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_12,
#line 335 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_5,
#line 335 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_6,
#line 335 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumBuckets_7,
#line 335 "version_hash_table.m"
  MR_Integer * mercury__version_hash_table__H_8)
#line 335 "version_hash_table.m"
{
#line 339 "version_hash_table.m"
  {
#line 339 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 339 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_9;
#line 339 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_10_10;
#line 340 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_5, (MR_Integer) 1)));
#line 340 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_9;

#line 340 "version_hash_table.m"
    {
#line 340 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_5), mercury__version_hash_table__K_6, &mercury__version_hash_table__conv1_Hash_9);
    }
#line 340 "version_hash_table.m"
    mercury__version_hash_table__Hash_9 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_9);
#line 342 "version_hash_table.m"
    mercury__version_hash_table__V_10_10 = (mercury__version_hash_table__NumBuckets_7 - (MR_Integer) 1);
#line 342 "version_hash_table.m"
    *mercury__version_hash_table__H_8 = (mercury__version_hash_table__Hash_9 & mercury__version_hash_table__V_10_10);
#line 339 "version_hash_table.m"
  }
#line 335 "version_hash_table.m"
}

#line 325 "version_hash_table.m"
MR_Integer MR_CALL 
mercury__version_hash_table__find_slot_2_f_0(
#line 325 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_13,
#line 325 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_14,
#line 325 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_4,
#line 325 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5)
#line 325 "version_hash_table.m"
{
#line 328 "version_hash_table.m"
  {
#line 328 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 328 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__H_6;
#line 328 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 2)));
#line 328 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_8;
#line 328 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_9_9;
#line 328 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_27;
#line 328 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_28_28;
#line 330 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 0)));
#line 330 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 1)));
#line 330 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 3)));
#line 347 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_30;
#line 315 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_17_17;
#line 315 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_18_18;
#line 315 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_19_19;
#line 315 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_20_20;
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_12_31;
#line 340 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 340 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_27;

#line 350 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__find_slot_2_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HashPred0_7 ;
		{
#line 350 "version_hash_table.m"

    HashPred = HashPred0;

#line 5760 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_8  = HashPred;
#line 350 "version_hash_table.m"
}
#line 315 "version_hash_table.m"
    mercury__version_hash_table__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 0)));
#line 315 "version_hash_table.m"
    mercury__version_hash_table__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 1)));
#line 315 "version_hash_table.m"
    mercury__version_hash_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 2)));
#line 315 "version_hash_table.m"
    mercury__version_hash_table__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 3)));
#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__find_slot_2_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_17_17 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 5788 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_9_9  = N;
#line 158 "version_array.opt"
}
#line 340 "version_hash_table.m"
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_8, (MR_Integer) 1)));
#line 340 "version_hash_table.m"
    {
#line 340 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_8), mercury__version_hash_table__K_5, &mercury__version_hash_table__conv1_Hash_27);
    }
#line 340 "version_hash_table.m"
    mercury__version_hash_table__Hash_27 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_27);
#line 342 "version_hash_table.m"
    mercury__version_hash_table__V_28_28 = (mercury__version_hash_table__V_9_9 - (MR_Integer) 1);
#line 342 "version_hash_table.m"
    mercury__version_hash_table__H_6 = (mercury__version_hash_table__Hash_27 & mercury__version_hash_table__V_28_28);
#line 328 "version_hash_table.m"
    return mercury__version_hash_table__H_6;
#line 328 "version_hash_table.m"
  }
#line 325 "version_hash_table.m"
}

#line 276 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__init_2_4_f_0(
#line 276 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_29,
#line 276 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_30,
#line 276 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_6,
#line 276 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__N_7,
#line 276 "version_hash_table.m"
  MR_Float mercury__version_hash_table__MaxOccupancy_8,
#line 276 "version_hash_table.m"
  MR_Word mercury__version_hash_table__NeedSafety_9)
#line 276 "version_hash_table.m"
{
#line 282 "version_hash_table.m"
  {
#line 282 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__N_7 <= (MR_Integer) 0);
#line 282 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_10;

#line 282 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 281 "version_hash_table.m"
      {
#line 281 "version_hash_table.m"
        MR_Word mercury__version_hash_table__TypeCtorInfo_31_31 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 281 "version_hash_table.m"
        MR_Word mercury__version_hash_table__V_15_15 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.new_hash_table: N =< 0"));

#line 281 "version_hash_table.m"
        {
#line 281 "version_hash_table.m"
          mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_31_31, ((MR_Box) (mercury__version_hash_table__V_15_15)));
        }
#line 281 "version_hash_table.m"
      }
#line 282 "version_hash_table.m"
    else
#line 285 "version_hash_table.m"
      {
#line 282 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_17_17;

#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__init_2_4_f_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 5873 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_17_17  = Bits;
#line 171 "int.opt"
}
#line 282 "version_hash_table.m"
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__N_7 >= mercury__version_hash_table__V_17_17);
#line 285 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 283 "version_hash_table.m"
          {
#line 283 "version_hash_table.m"
            MR_Word mercury__version_hash_table__TypeCtorInfo_32_32 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 283 "version_hash_table.m"
            MR_Word mercury__version_hash_table__V_18_18 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.new: N >= int.bits_per_int"));

#line 283 "version_hash_table.m"
            {
#line 283 "version_hash_table.m"
              mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_32_32, ((MR_Box) (mercury__version_hash_table__V_18_18)));
            }
#line 283 "version_hash_table.m"
          }
#line 285 "version_hash_table.m"
        else
#line 288 "version_hash_table.m"
          {
#line 285 "version_hash_table.m"
            mercury__version_hash_table__succeeded = (mercury__version_hash_table__MaxOccupancy_8 <= ((MR_Float) 0.0000000000000000));
#line 288 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 286 "version_hash_table.m"
              {
#line 286 "version_hash_table.m"
                MR_Word mercury__version_hash_table__TypeCtorInfo_33_33 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 286 "version_hash_table.m"
                MR_Word mercury__version_hash_table__V_21_21 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.new: MaxOccupancy =< 0.0"));

#line 286 "version_hash_table.m"
                {
#line 286 "version_hash_table.m"
                  mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_33_33, ((MR_Box) (mercury__version_hash_table__V_21_21)));
                }
#line 286 "version_hash_table.m"
              }
#line 288 "version_hash_table.m"
            else
#line 289 "version_hash_table.m"
              {
#line 289 "version_hash_table.m"
                MR_Integer mercury__version_hash_table__NumBuckets_11;
#line 289 "version_hash_table.m"
                MR_Integer mercury__version_hash_table__MaxOccupants_12;
#line 289 "version_hash_table.m"
                MR_Box mercury__version_hash_table__Buckets_13;
#line 289 "version_hash_table.m"
                MR_Float mercury__version_hash_table__V_24_24;
#line 289 "version_hash_table.m"
                MR_Float mercury__version_hash_table__V_25_25;

#line 289 "version_hash_table.m"
                {
#line 289 "version_hash_table.m"
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

#line 5953 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_25_25  = FloatVal;
#line 81 "float.opt"
}
#line 290 "version_hash_table.m"
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

#line 5975 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__MaxOccupants_12  = Ceil;
#line 84 "float.opt"
}
#line 294 "version_hash_table.m"
                if ((mercury__version_hash_table__NeedSafety_9 == (MR_Integer) 0))
#line 295 "version_hash_table.m"
                  {
#line 295 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__TypeCtorInfo_36_36 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 295 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__TypeInfo_37_37;
#line 295 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__V_26_26;
#line 296 "version_hash_table.m"
                    MR_Box mercury__version_hash_table__conv0_Buckets_13;

#line 5995 "version_hash_table.c"
                    {
#line 5997 "version_hash_table.c"
                      mercury__version_hash_table__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5999 "version_hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_37_37, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_36_36));
#line 6001 "version_hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_37_37, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_29));
#line 6003 "version_hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_37_37, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_30));
#line 6005 "version_hash_table.c"
                    }
#line 296 "version_hash_table.m"
                    mercury__version_hash_table__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 296 "version_hash_table.m"
                    {
#line 296 "version_hash_table.m"
                      mercury__version_hash_table__conv0_Buckets_13 = mercury__version_array__unsafe_new_2_f_0(mercury__version_hash_table__TypeInfo_37_37, mercury__version_hash_table__NumBuckets_11, ((MR_Box) (mercury__version_hash_table__V_26_26)));
                    }
#line 296 "version_hash_table.m"
                    mercury__version_hash_table__Buckets_13 = (MR_Box) mercury__version_hash_table__conv0_Buckets_13;
#line 295 "version_hash_table.m"
                  }
#line 294 "version_hash_table.m"
                else
#line 292 "version_hash_table.m"
                  {
#line 292 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__TypeCtorInfo_34_34 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 292 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__TypeInfo_35_35;
#line 292 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__V_27_27;
#line 293 "version_hash_table.m"
                    MR_Box mercury__version_hash_table__conv1_Buckets_13;

#line 6031 "version_hash_table.c"
                    {
#line 6033 "version_hash_table.c"
                      mercury__version_hash_table__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6035 "version_hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_35_35, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_34_34));
#line 6037 "version_hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_35_35, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_29));
#line 6039 "version_hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_35_35, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_30));
#line 6041 "version_hash_table.c"
                    }
#line 293 "version_hash_table.m"
                    mercury__version_hash_table__V_27_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 293 "version_hash_table.m"
                    {
#line 293 "version_hash_table.m"
                      mercury__version_hash_table__conv1_Buckets_13 = mercury__version_array__init_2_f_0(mercury__version_hash_table__TypeInfo_35_35, mercury__version_hash_table__NumBuckets_11, ((MR_Box) (mercury__version_hash_table__V_27_27)));
                    }
#line 293 "version_hash_table.m"
                    mercury__version_hash_table__Buckets_13 = (MR_Box) mercury__version_hash_table__conv1_Buckets_13;
#line 292 "version_hash_table.m"
                  }
#line 298 "version_hash_table.m"
                {
#line 298 "version_hash_table.m"
                  mercury__version_hash_table__HT_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 298 "version_hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 0) = ((MR_Box) ((MR_Integer) 0));
#line 298 "version_hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_12));
#line 298 "version_hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_6));
#line 298 "version_hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_13));
#line 298 "version_hash_table.m"
                }
#line 289 "version_hash_table.m"
              }
#line 288 "version_hash_table.m"
          }
#line 285 "version_hash_table.m"
      }
#line 282 "version_hash_table.m"
    return mercury__version_hash_table__HT_10;
#line 282 "version_hash_table.m"
  }
#line 276 "version_hash_table.m"
}

#line 218 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__equals_2_p_0(
#line 218 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_10,
#line 218 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_11,
#line 218 "version_hash_table.m"
  MR_Word mercury__version_hash_table__A_3,
#line 218 "version_hash_table.m"
  MR_Word mercury__version_hash_table__B_4)
#line 218 "version_hash_table.m"
{
#line 863 "version_hash_table.m"
  {
#line 863 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 885 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_13_57;

#line 888 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__equals_2_p_0

	MR_Word A;
	MR_Word B;
	MR_bool SUCCESS_INDICATOR;

	A = (MR_Word) ((MR_Box) (mercury__version_hash_table__A_3)) ;
	B = (MR_Word) ((MR_Box) (mercury__version_hash_table__B_4)) ;
		{
#line 888 "version_hash_table.m"

    SUCCESS_INDICATOR = (A == B);

#line 6116 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 888 "version_hash_table.m"
	}
mercury__version_hash_table__succeeded  = SUCCESS_INDICATOR;
}
#line 863 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 862 "version_hash_table.m"
      mercury__version_hash_table__succeeded = MR_TRUE;
#line 863 "version_hash_table.m"
    else
#line 867 "version_hash_table.m"
      {
#line 867 "version_hash_table.m"
        MR_Word mercury__version_hash_table__TypeCtorInfo_22_46;
#line 867 "version_hash_table.m"
        MR_Word mercury__version_hash_table__TypeInfo_23_47;
#line 867 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__NumA_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 0)));
#line 867 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__NumB_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__B_4, (MR_Integer) 0)));
#line 867 "version_hash_table.m"
        MR_Box mercury__version_hash_table__Buckets_36;
#line 867 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_10_52;
#line 867 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_11_53;
#line 320 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 1)));
#line 320 "version_hash_table.m"
        MR_Word mercury__version_hash_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 2)));
#line 320 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V_25_25 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 3)));
#line 320 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__B_4, (MR_Integer) 1)));
#line 320 "version_hash_table.m"
        MR_Word mercury__version_hash_table__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__B_4, (MR_Integer) 2)));
#line 320 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V_30_30 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__B_4, (MR_Integer) 3)));
#line 834 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_39_39;
#line 834 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_40_40;
#line 834 "version_hash_table.m"
        MR_Word mercury__version_hash_table__V_41_41;
#line 158 "version_array.opt"
        MR_Word mercury__version_hash_table__TypeInfo_23_58;

#line 869 "version_hash_table.m"
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__NumA_5 == mercury__version_hash_table__NumB_6);
#line 867 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 867 "version_hash_table.m"
          {
#line 873 "version_hash_table.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 834 "version_hash_table.m"
            mercury__version_hash_table__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 0)));
#line 834 "version_hash_table.m"
            mercury__version_hash_table__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 1)));
#line 834 "version_hash_table.m"
            mercury__version_hash_table__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 2)));
#line 834 "version_hash_table.m"
            mercury__version_hash_table__Buckets_36 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__A_3, (MR_Integer) 3)));
#line 6184 "version_hash_table.c"
            mercury__version_hash_table__TypeCtorInfo_22_46 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 181 "version_array.opt"
            mercury__version_hash_table__V_10_52 = (MR_Integer) 0;
#line 6188 "version_hash_table.c"
            {
#line 6190 "version_hash_table.c"
              mercury__version_hash_table__TypeInfo_23_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6192 "version_hash_table.c"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_47, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_46));
#line 6194 "version_hash_table.c"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_47, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_10));
#line 6196 "version_hash_table.c"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_47, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_11));
#line 6198 "version_hash_table.c"
            }
#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__equals_2_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_36 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6213 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_53  = N;
#line 158 "version_array.opt"
}
#line 183 "version_array.opt"
            {
#line 183 "version_array.opt"
              return mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_53_44_32_49_48_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_10, mercury__version_hash_table__TypeInfo_for_V_11, mercury__version_hash_table__TypeInfo_for_K_10, mercury__version_hash_table__TypeInfo_for_V_11, mercury__version_hash_table__B_4, mercury__version_hash_table__TypeInfo_23_47, mercury__version_hash_table__Buckets_36, mercury__version_hash_table__V_10_52, mercury__version_hash_table__V_11_53);
            }
#line 867 "version_hash_table.m"
          }
#line 867 "version_hash_table.m"
      }
#line 863 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 863 "version_hash_table.m"
  }
#line 218 "version_hash_table.m"
}

#line 211 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__fold_4_p_5(
#line 211 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_16,
#line 211 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_17,
#line 211 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_18,
#line 211 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 211 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_6,
#line 211 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_9,
#line 211 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_10)
#line 211 "version_hash_table.m"
{
#line 832 "version_hash_table.m"
  {
#line 832 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 832 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 832 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
#line 832 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 832 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_29;
#line 834 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 834 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 834 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_23_31;

#line 6276 "version_hash_table.c"
    {
#line 6278 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6280 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_22));
#line 6282 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_16));
#line 6284 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_17));
#line 6286 "version_hash_table.c"
    }
#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_5

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_8 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6301 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_29  = N;
#line 158 "version_array.opt"
}
#line 183 "version_array.opt"
    {
#line 183 "version_array.opt"
      return mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__TypeInfo_for_T_18, mercury__version_hash_table__P_5, mercury__version_hash_table__TypeInfo_23_23, mercury__version_hash_table__Buckets_8, (MR_Integer) 0, mercury__version_hash_table__V_11_29, mercury__version_hash_table__STATE_VARIABLE_A_0_9, mercury__version_hash_table__STATE_VARIABLE_A_10);
    }
#line 832 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 832 "version_hash_table.m"
  }
#line 211 "version_hash_table.m"
}

#line 210 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__fold_4_p_4(
#line 210 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_16,
#line 210 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_17,
#line 210 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_18,
#line 210 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 210 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_6,
#line 210 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_9,
#line 210 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_10)
#line 210 "version_hash_table.m"
{
#line 832 "version_hash_table.m"
  {
#line 832 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 832 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 832 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
#line 832 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 832 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_29;
#line 834 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 834 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 834 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_23_31;

#line 6360 "version_hash_table.c"
    {
#line 6362 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6364 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_22));
#line 6366 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_16));
#line 6368 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_17));
#line 6370 "version_hash_table.c"
    }
#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_4

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_8 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6385 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_29  = N;
#line 158 "version_array.opt"
}
#line 183 "version_array.opt"
    {
#line 183 "version_array.opt"
      return mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__TypeInfo_for_T_18, mercury__version_hash_table__P_5, mercury__version_hash_table__TypeInfo_23_23, mercury__version_hash_table__Buckets_8, (MR_Integer) 0, mercury__version_hash_table__V_11_29, mercury__version_hash_table__STATE_VARIABLE_A_0_9, mercury__version_hash_table__STATE_VARIABLE_A_10);
    }
#line 832 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 832 "version_hash_table.m"
  }
#line 210 "version_hash_table.m"
}

#line 209 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__fold_4_p_3(
#line 209 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_16,
#line 209 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_17,
#line 209 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_18,
#line 209 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 209 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_6,
#line 209 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_9,
#line 209 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_10)
#line 209 "version_hash_table.m"
{
#line 832 "version_hash_table.m"
  {
#line 832 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 832 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 832 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
#line 832 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 832 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_29;
#line 834 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 834 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 834 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_23_31;

#line 6444 "version_hash_table.c"
    {
#line 6446 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6448 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_22));
#line 6450 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_16));
#line 6452 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_17));
#line 6454 "version_hash_table.c"
    }
#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_3

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_8 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6469 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_29  = N;
#line 158 "version_array.opt"
}
#line 183 "version_array.opt"
    {
#line 183 "version_array.opt"
      return mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__TypeInfo_for_T_18, mercury__version_hash_table__P_5, mercury__version_hash_table__TypeInfo_23_23, mercury__version_hash_table__Buckets_8, (MR_Integer) 0, mercury__version_hash_table__V_11_29, mercury__version_hash_table__STATE_VARIABLE_A_0_9, mercury__version_hash_table__STATE_VARIABLE_A_10);
    }
#line 832 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 832 "version_hash_table.m"
  }
#line 209 "version_hash_table.m"
}

#line 208 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_4_p_2(
#line 208 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_16,
#line 208 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_17,
#line 208 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_18,
#line 208 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 208 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_6,
#line 208 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_9,
#line 208 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_10)
#line 208 "version_hash_table.m"
{
#line 832 "version_hash_table.m"
  {
#line 832 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 832 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 832 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
#line 832 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 832 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_29;
#line 834 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 834 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 834 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_23_31;

#line 6528 "version_hash_table.c"
    {
#line 6530 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6532 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_22));
#line 6534 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_16));
#line 6536 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_17));
#line 6538 "version_hash_table.c"
    }
#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_2

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_8 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6553 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_29  = N;
#line 158 "version_array.opt"
}
#line 183 "version_array.opt"
    {
#line 183 "version_array.opt"
      mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__TypeInfo_for_T_18, mercury__version_hash_table__P_5, mercury__version_hash_table__TypeInfo_23_23, mercury__version_hash_table__Buckets_8, (MR_Integer) 0, mercury__version_hash_table__V_11_29, mercury__version_hash_table__STATE_VARIABLE_A_0_9, mercury__version_hash_table__STATE_VARIABLE_A_10);
#line 183 "version_array.opt"
      return;
    }
#line 832 "version_hash_table.m"
  }
#line 208 "version_hash_table.m"
}

#line 207 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_4_p_1(
#line 207 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_16,
#line 207 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_17,
#line 207 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_18,
#line 207 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 207 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_6,
#line 207 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_9,
#line 207 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_10)
#line 207 "version_hash_table.m"
{
#line 832 "version_hash_table.m"
  {
#line 832 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 832 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 832 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
#line 832 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 832 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_29;
#line 834 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 834 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 834 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_23_31;

#line 6612 "version_hash_table.c"
    {
#line 6614 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6616 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_22));
#line 6618 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_16));
#line 6620 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_17));
#line 6622 "version_hash_table.c"
    }
#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_1

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_8 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6637 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_29  = N;
#line 158 "version_array.opt"
}
#line 183 "version_array.opt"
    {
#line 183 "version_array.opt"
      mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__TypeInfo_for_T_18, mercury__version_hash_table__P_5, mercury__version_hash_table__TypeInfo_23_23, mercury__version_hash_table__Buckets_8, (MR_Integer) 0, mercury__version_hash_table__V_11_29, mercury__version_hash_table__STATE_VARIABLE_A_0_9, mercury__version_hash_table__STATE_VARIABLE_A_10);
#line 183 "version_array.opt"
      return;
    }
#line 832 "version_hash_table.m"
  }
#line 207 "version_hash_table.m"
}

#line 206 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_4_p_0(
#line 206 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_16,
#line 206 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_17,
#line 206 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_18,
#line 206 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 206 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_6,
#line 206 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_9,
#line 206 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_10)
#line 206 "version_hash_table.m"
{
#line 832 "version_hash_table.m"
  {
#line 832 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 832 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 832 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
#line 832 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 832 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_29;
#line 834 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 834 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 834 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_23_31;

#line 6696 "version_hash_table.c"
    {
#line 6698 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6700 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_22));
#line 6702 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_16));
#line 6704 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_17));
#line 6706 "version_hash_table.c"
    }
#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_8 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6721 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_29  = N;
#line 158 "version_array.opt"
}
#line 183 "version_array.opt"
    {
#line 183 "version_array.opt"
      mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__TypeInfo_for_T_18, mercury__version_hash_table__P_5, mercury__version_hash_table__TypeInfo_23_23, mercury__version_hash_table__Buckets_8, (MR_Integer) 0, mercury__version_hash_table__V_11_29, mercury__version_hash_table__STATE_VARIABLE_A_0_9, mercury__version_hash_table__STATE_VARIABLE_A_10);
#line 183 "version_array.opt"
      return;
    }
#line 832 "version_hash_table.m"
  }
#line 206 "version_hash_table.m"
}

#line 201 "version_hash_table.m"
MR_Box MR_CALL 
mercury__version_hash_table__fold_3_f_0(
#line 201 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_14,
#line 201 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_15,
#line 201 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_16,
#line 201 "version_hash_table.m"
  MR_Word mercury__version_hash_table__F_5,
#line 201 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_6,
#line 201 "version_hash_table.m"
  MR_Box mercury__version_hash_table__X0_7)
#line 201 "version_hash_table.m"
{
#line 809 "version_hash_table.m"
  {
#line 809 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 809 "version_hash_table.m"
    MR_Box mercury__version_hash_table__X_8;
#line 809 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_20_20 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 809 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_21_21;
#line 809 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_9 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 809 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_27;
#line 811 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 811 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 811 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_21_29;

#line 6780 "version_hash_table.c"
    {
#line 6782 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6784 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_21_21, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_20_20));
#line 6786 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_21_21, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_14));
#line 6788 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_21_21, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_15));
#line 6790 "version_hash_table.c"
    }
#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_9 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6805 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_27  = N;
#line 158 "version_array.opt"
}
#line 183 "version_array.opt"
    {
#line 183 "version_array.opt"
      mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_14, mercury__version_hash_table__TypeInfo_for_V_15, mercury__version_hash_table__TypeInfo_for_T_16, mercury__version_hash_table__F_5, mercury__version_hash_table__TypeInfo_21_21, mercury__version_hash_table__Buckets_9, (MR_Integer) 0, mercury__version_hash_table__V_11_27, mercury__version_hash_table__X0_7, &mercury__version_hash_table__X_8);
    }
#line 809 "version_hash_table.m"
    return mercury__version_hash_table__X_8;
#line 809 "version_hash_table.m"
  }
#line 201 "version_hash_table.m"
}

#line 196 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__from_assoc_list_2_f_0(
#line 196 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_8,
#line 196 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_9,
#line 196 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_4,
#line 196 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AList_5)
#line 196 "version_hash_table.m"
{
#line 609 "version_hash_table.m"
  {
#line 609 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 609 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_6;
#line 609 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_7_7;

#line 268 "version_hash_table.m"
    {
#line 268 "version_hash_table.m"
      mercury__version_hash_table__V_7_7 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HashPred_4, (MR_Integer) 7, (MR_Float) 0.90000000000000002, (MR_Integer) 1);
    }
#line 610 "version_hash_table.m"
    {
#line 610 "version_hash_table.m"
      mercury__version_hash_table__from_assoc_list_2_3_p_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__AList_5, mercury__version_hash_table__V_7_7, &mercury__version_hash_table__HT_6);
    }
#line 609 "version_hash_table.m"
    return mercury__version_hash_table__HT_6;
#line 609 "version_hash_table.m"
  }
#line 196 "version_hash_table.m"
}

#line 189 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__from_assoc_list_4_f_0(
#line 189 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_12,
#line 189 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_13,
#line 189 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_6,
#line 189 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__N_7,
#line 189 "version_hash_table.m"
  MR_Float mercury__version_hash_table__MaxOccupants_8,
#line 189 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AList_9)
#line 189 "version_hash_table.m"
{
#line 606 "version_hash_table.m"
  {
#line 606 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 606 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_10;
#line 606 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_11_11;

#line 268 "version_hash_table.m"
    {
#line 268 "version_hash_table.m"
      mercury__version_hash_table__V_11_11 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_12, mercury__version_hash_table__TypeInfo_for_V_13, mercury__version_hash_table__HashPred_6, mercury__version_hash_table__N_7, mercury__version_hash_table__MaxOccupants_8, (MR_Integer) 1);
    }
#line 607 "version_hash_table.m"
    {
#line 607 "version_hash_table.m"
      mercury__version_hash_table__from_assoc_list_2_3_p_0(mercury__version_hash_table__TypeInfo_for_K_12, mercury__version_hash_table__TypeInfo_for_V_13, mercury__version_hash_table__AList_9, mercury__version_hash_table__V_11_11, &mercury__version_hash_table__HT_10);
    }
#line 606 "version_hash_table.m"
    return mercury__version_hash_table__HT_10;
#line 606 "version_hash_table.m"
  }
#line 189 "version_hash_table.m"
}

#line 182 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__to_assoc_list_1_f_0(
#line 182 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_11,
#line 182 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_12,
#line 182 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_3)
#line 182 "version_hash_table.m"
{
#line 584 "version_hash_table.m"
  {
#line 584 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 584 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL_4;
#line 584 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_16_16 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 584 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_17_17;
#line 584 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 3)));
#line 584 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 584 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_27;
#line 586 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 0)));
#line 586 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 1)));
#line 586 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 2)));
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_17_31;

#line 6942 "version_hash_table.c"
    {
#line 6944 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6946 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_17_17, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_16_16));
#line 6948 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_17_17, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_11));
#line 6950 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_17_17, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_12));
#line 6952 "version_hash_table.c"
    }
#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__to_assoc_list_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__Buckets_5 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6967 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_27  = N;
#line 158 "version_array.opt"
}
#line 183 "version_array.opt"
    {
#line 183 "version_array.opt"
      mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_11, mercury__version_hash_table__TypeInfo_for_V_12, mercury__version_hash_table__TypeInfo_17_17, mercury__version_hash_table__Buckets_5, (MR_Integer) 0, mercury__version_hash_table__V_11_27, mercury__version_hash_table__V_7_7, &mercury__version_hash_table__AL_4);
    }
#line 584 "version_hash_table.m"
    return mercury__version_hash_table__AL_4;
#line 584 "version_hash_table.m"
  }
#line 182 "version_hash_table.m"
}

#line 178 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__search_3_p_0(
#line 178 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_6,
#line 178 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_7,
#line 178 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_4,
#line 178 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 178 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__HeadVar__3_3)
#line 178 "version_hash_table.m"
{
#line 450 "version_hash_table.m"
  {
#line 450 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 450 "version_hash_table.m"
    {
#line 450 "version_hash_table.m"
      return mercury__version_hash_table__succeeded = mercury__version_hash_table__search_2_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HT_4, mercury__version_hash_table__K_5, mercury__version_hash_table__HeadVar__3_3);
    }
#line 450 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 450 "version_hash_table.m"
  }
#line 178 "version_hash_table.m"
}

#line 177 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__search_2_f_0(
#line 177 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_13,
#line 177 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_14,
#line 177 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_4,
#line 177 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 177 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__V_6)
#line 177 "version_hash_table.m"
{
#line 452 "version_hash_table.m"
  {
#line 452 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 452 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_15_15;
#line 452 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_16_16;
#line 452 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__H_7;
#line 452 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_8;
#line 452 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL_9;
#line 452 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 2)));
#line 452 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_21;
#line 452 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_22_22;
#line 452 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_38;
#line 452 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_39_39;
#line 330 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 0)));
#line 330 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 1)));
#line 330 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_25_25 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 3)));
#line 347 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_44;
#line 315 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_28_28;
#line 315 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_29_29;
#line 315 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_30_30;
#line 315 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_31_31;
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_12_45;
#line 340 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 340 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_38;
#line 455 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_10_10;
#line 455 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_11;
#line 455 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_12_12;
#line 154 "version_array.opt"
    MR_Box mercury__version_hash_table__conv2_AL_9;

#line 350 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__search_2_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HashPred0_20 ;
		{
#line 350 "version_hash_table.m"

    HashPred = HashPred0;

#line 7101 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_21  = HashPred;
#line 350 "version_hash_table.m"
}
#line 315 "version_hash_table.m"
    mercury__version_hash_table__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 0)));
#line 315 "version_hash_table.m"
    mercury__version_hash_table__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 1)));
#line 315 "version_hash_table.m"
    mercury__version_hash_table__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 2)));
#line 315 "version_hash_table.m"
    mercury__version_hash_table__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 3)));
#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__search_2_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_28_28 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 7129 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_22_22  = N;
#line 158 "version_array.opt"
}
#line 340 "version_hash_table.m"
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_21, (MR_Integer) 1)));
#line 340 "version_hash_table.m"
    {
#line 340 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_21), mercury__version_hash_table__K_5, &mercury__version_hash_table__conv1_Hash_38);
    }
#line 340 "version_hash_table.m"
    mercury__version_hash_table__Hash_38 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_38);
#line 342 "version_hash_table.m"
    mercury__version_hash_table__V_39_39 = (mercury__version_hash_table__V_22_22 - (MR_Integer) 1);
#line 342 "version_hash_table.m"
    mercury__version_hash_table__H_7 = (mercury__version_hash_table__Hash_38 & mercury__version_hash_table__V_39_39);
#line 455 "version_hash_table.m"
    mercury__version_hash_table__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 0)));
#line 455 "version_hash_table.m"
    mercury__version_hash_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 1)));
#line 455 "version_hash_table.m"
    mercury__version_hash_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 2)));
#line 455 "version_hash_table.m"
    mercury__version_hash_table__Buckets_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 3)));
#line 7157 "version_hash_table.c"
    mercury__version_hash_table__TypeCtorInfo_15_15 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 7159 "version_hash_table.c"
    {
#line 7161 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7163 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_16_16, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_15_15));
#line 7165 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_16_16, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_13));
#line 7167 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_16_16, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_14));
#line 7169 "version_hash_table.c"
    }
#line 154 "version_array.opt"
    {
#line 154 "version_array.opt"
      mercury__version_hash_table__conv2_AL_9 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_16_16, (MR_Box) mercury__version_hash_table__Buckets_8, mercury__version_hash_table__H_7);
    }
#line 154 "version_array.opt"
    mercury__version_hash_table__AL_9 = ((MR_Word) mercury__version_hash_table__conv2_AL_9);
#line 458 "version_hash_table.m"
    {
#line 458 "version_hash_table.m"
      return mercury__version_hash_table__succeeded = mercury__version_hash_table__alist_search_3_p_0(mercury__version_hash_table__TypeInfo_for_K_13, mercury__version_hash_table__TypeInfo_for_V_14, mercury__version_hash_table__AL_9, mercury__version_hash_table__K_5, mercury__version_hash_table__V_6);
    }
#line 452 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 452 "version_hash_table.m"
  }
#line 177 "version_hash_table.m"
}

#line 173 "version_hash_table.m"
MR_Box MR_CALL 
mercury__version_hash_table__elem_2_f_0(
#line 173 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_6,
#line 173 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_7,
#line 173 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_4,
#line 173 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_5)
#line 173 "version_hash_table.m"
{
#line 533 "version_hash_table.m"
  {
#line 533 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 533 "version_hash_table.m"
    MR_Box mercury__version_hash_table__HeadVar__3_3;
#line 533 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_10;

#line 534 "version_hash_table.m"
    {
#line 534 "version_hash_table.m"
      mercury__version_hash_table__succeeded = mercury__version_hash_table__search_2_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HT_5, mercury__version_hash_table__K_4, &mercury__version_hash_table__V_10);
    }
#line 533 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 533 "version_hash_table.m"
      mercury__version_hash_table__HeadVar__3_3 = mercury__version_hash_table__V_10;
#line 533 "version_hash_table.m"
    else
#line 536 "version_hash_table.m"
      {
#line 533 "version_hash_table.m"
        {
#line 533 "version_hash_table.m"
          mercury__version_hash_table__HeadVar__3_3 = mercury__require__func_error_1_f_0(mercury__version_hash_table__TypeInfo_for_V_7, (MR_String) "version_hash_table.lookup: key not found");
        }
#line 536 "version_hash_table.m"
      }
#line 533 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__3_3;
#line 533 "version_hash_table.m"
  }
#line 173 "version_hash_table.m"
}

#line 168 "version_hash_table.m"
MR_Box MR_CALL 
mercury__version_hash_table__lookup_2_f_0(
#line 168 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_8,
#line 168 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_9,
#line 168 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_4,
#line 168 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5)
#line 168 "version_hash_table.m"
{
#line 533 "version_hash_table.m"
  {
#line 533 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 533 "version_hash_table.m"
    MR_Box mercury__version_hash_table__HeadVar__3_3;
#line 533 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_6;

#line 534 "version_hash_table.m"
    {
#line 534 "version_hash_table.m"
      mercury__version_hash_table__succeeded = mercury__version_hash_table__search_2_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HT_4, mercury__version_hash_table__K_5, &mercury__version_hash_table__V_6);
    }
#line 533 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 533 "version_hash_table.m"
      mercury__version_hash_table__HeadVar__3_3 = mercury__version_hash_table__V_6;
#line 533 "version_hash_table.m"
    else
#line 536 "version_hash_table.m"
      {
#line 533 "version_hash_table.m"
        {
#line 533 "version_hash_table.m"
          mercury__version_hash_table__HeadVar__3_3 = mercury__require__func_error_1_f_0(mercury__version_hash_table__TypeInfo_for_V_9, (MR_String) "version_hash_table.lookup: key not found");
        }
#line 536 "version_hash_table.m"
      }
#line 533 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__3_3;
#line 533 "version_hash_table.m"
  }
#line 168 "version_hash_table.m"
}

#line 162 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__delete_3_p_0(
#line 162 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_6,
#line 162 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_7,
#line 162 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_4,
#line 162 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_5,
#line 162 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__3_3)
#line 162 "version_hash_table.m"
{
#line 558 "version_hash_table.m"
  {
#line 558 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 558 "version_hash_table.m"
    {
#line 558 "version_hash_table.m"
      *mercury__version_hash_table__HeadVar__3_3 = mercury__version_hash_table__delete_2_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HT_5, mercury__version_hash_table__K_4);
    }
#line 558 "version_hash_table.m"
  }
#line 162 "version_hash_table.m"
}

#line 161 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__delete_2_f_0(
#line 161 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_17,
#line 161 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_18,
#line 161 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT0_4,
#line 161 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5)
#line 161 "version_hash_table.m"
{
#line 543 "version_hash_table.m"
  {
#line 543 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 543 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_6;
#line 543 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_19_19;
#line 543 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_20_20;
#line 543 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__H_7;
#line 543 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumOccupants0_8;
#line 543 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__MaxOccupants_9;
#line 543 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_10;
#line 543 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets0_11;
#line 543 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL0_12;
#line 543 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 2)));
#line 543 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_25;
#line 543 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_26_26;
#line 543 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_42;
#line 543 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_43_43;
#line 330 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 0)));
#line 330 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 1)));
#line 330 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_29_29 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 3)));
#line 347 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_52;
#line 315 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_32_32;
#line 315 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_33_33;
#line 315 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_34_34;
#line 315 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_35_35;
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_12_53;
#line 340 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 340 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_42;
#line 154 "version_array.opt"
    MR_Box mercury__version_hash_table__conv2_AL0_12;
#line 554 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL_13;

#line 350 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__delete_2_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HashPred0_24 ;
		{
#line 350 "version_hash_table.m"

    HashPred = HashPred0;

#line 7403 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_25  = HashPred;
#line 350 "version_hash_table.m"
}
#line 315 "version_hash_table.m"
    mercury__version_hash_table__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 0)));
#line 315 "version_hash_table.m"
    mercury__version_hash_table__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 1)));
#line 315 "version_hash_table.m"
    mercury__version_hash_table__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 2)));
#line 315 "version_hash_table.m"
    mercury__version_hash_table__V_32_32 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 3)));
#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__delete_2_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_32_32 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 7431 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_26_26  = N;
#line 158 "version_array.opt"
}
#line 340 "version_hash_table.m"
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_25, (MR_Integer) 1)));
#line 340 "version_hash_table.m"
    {
#line 340 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_25), mercury__version_hash_table__K_5, &mercury__version_hash_table__conv1_Hash_42);
    }
#line 340 "version_hash_table.m"
    mercury__version_hash_table__Hash_42 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_42);
#line 342 "version_hash_table.m"
    mercury__version_hash_table__V_43_43 = (mercury__version_hash_table__V_26_26 - (MR_Integer) 1);
#line 342 "version_hash_table.m"
    mercury__version_hash_table__H_7 = (mercury__version_hash_table__Hash_42 & mercury__version_hash_table__V_43_43);
#line 547 "version_hash_table.m"
    mercury__version_hash_table__NumOccupants0_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 0)));
#line 547 "version_hash_table.m"
    mercury__version_hash_table__MaxOccupants_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 1)));
#line 547 "version_hash_table.m"
    mercury__version_hash_table__HashPred_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 2)));
#line 547 "version_hash_table.m"
    mercury__version_hash_table__Buckets0_11 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 3)));
#line 7459 "version_hash_table.c"
    mercury__version_hash_table__TypeCtorInfo_19_19 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 7461 "version_hash_table.c"
    {
#line 7463 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7465 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_20_20, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_19_19));
#line 7467 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_20_20, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_17));
#line 7469 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_20_20, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_18));
#line 7471 "version_hash_table.c"
    }
#line 154 "version_array.opt"
    {
#line 154 "version_array.opt"
      mercury__version_hash_table__conv2_AL0_12 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_20_20, (MR_Box) mercury__version_hash_table__Buckets0_11, mercury__version_hash_table__H_7);
    }
#line 154 "version_array.opt"
    mercury__version_hash_table__AL0_12 = ((MR_Word) mercury__version_hash_table__conv2_AL0_12);
#line 550 "version_hash_table.m"
    {
#line 550 "version_hash_table.m"
      mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(mercury__version_hash_table__TypeInfo_for_K_17, mercury__version_hash_table__AL0_12, mercury__version_hash_table__K_5, &mercury__version_hash_table__AL_13);
    }
#line 554 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 551 "version_hash_table.m"
      {
#line 551 "version_hash_table.m"
        MR_Box mercury__version_hash_table__Buckets_14;
#line 551 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__NumOccupants_15;
#line 157 "version_array.opt"
        MR_Box mercury__version_hash_table__conv3_Buckets_14;

#line 157 "version_array.opt"
        {
#line 157 "version_array.opt"
          mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_20_20, mercury__version_hash_table__H_7, ((MR_Box) (mercury__version_hash_table__AL_13)), (MR_Box) mercury__version_hash_table__Buckets0_11, &mercury__version_hash_table__conv3_Buckets_14);
        }
#line 157 "version_array.opt"
        mercury__version_hash_table__Buckets_14 = (MR_Box) mercury__version_hash_table__conv3_Buckets_14;
#line 552 "version_hash_table.m"
        mercury__version_hash_table__NumOccupants_15 = (mercury__version_hash_table__NumOccupants0_8 - (MR_Integer) 1);
#line 553 "version_hash_table.m"
        {
#line 553 "version_hash_table.m"
          mercury__version_hash_table__HT_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 553 "version_hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants_15));
#line 553 "version_hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_9));
#line 553 "version_hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_10));
#line 553 "version_hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_14));
#line 553 "version_hash_table.m"
        }
#line 551 "version_hash_table.m"
      }
#line 554 "version_hash_table.m"
    else
#line 555 "version_hash_table.m"
      mercury__version_hash_table__HT_6 = mercury__version_hash_table__HT0_4;
#line 543 "version_hash_table.m"
    return mercury__version_hash_table__HT_6;
#line 543 "version_hash_table.m"
  }
#line 161 "version_hash_table.m"
}

#line 153 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__det_update_4_p_0(
#line 153 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_8,
#line 153 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_9,
#line 153 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 153 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_6,
#line 153 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_7,
#line 153 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__4_4)
#line 153 "version_hash_table.m"
{
#line 529 "version_hash_table.m"
  {
#line 529 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 529 "version_hash_table.m"
    {
#line 529 "version_hash_table.m"
      *mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__det_update_3_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HT_7, mercury__version_hash_table__K_5, mercury__version_hash_table__V_6);
    }
#line 529 "version_hash_table.m"
  }
#line 153 "version_hash_table.m"
}

#line 152 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__det_update_3_f_0(
#line 152 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_24,
#line 152 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_25,
#line 152 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT0_5,
#line 152 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_6,
#line 152 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_7)
#line 152 "version_hash_table.m"
{
#line 513 "version_hash_table.m"
  {
#line 513 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 513 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_8;
#line 513 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_26_26;
#line 513 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_27_27;
#line 513 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__H_9;
#line 513 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets0_10;
#line 513 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL0_11;
#line 513 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL_13;
#line 513 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_14;
#line 513 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 513 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_33;
#line 513 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_34_34;
#line 513 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_50;
#line 513 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_51_51;
#line 330 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 330 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 330 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_37_37 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 347 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_60;
#line 315 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_40_40;
#line 315 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_41_41;
#line 315 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_42_42;
#line 315 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_43_43;
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_12_61;
#line 340 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 340 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_50;
#line 516 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_17_17;
#line 516 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_18_18;
#line 516 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_19_19;
#line 154 "version_array.opt"
    MR_Box mercury__version_hash_table__conv2_AL0_11;
#line 521 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL1_12;
#line 157 "version_array.opt"
    MR_Box mercury__version_hash_table__conv3_Buckets_14;
#line 526 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_20_20;
#line 526 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_21_21;
#line 526 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_22_22;
#line 526 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_23_23;

#line 350 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__det_update_3_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HashPred0_32 ;
		{
#line 350 "version_hash_table.m"

    HashPred = HashPred0;

#line 7665 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_33  = HashPred;
#line 350 "version_hash_table.m"
}
#line 315 "version_hash_table.m"
    mercury__version_hash_table__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 315 "version_hash_table.m"
    mercury__version_hash_table__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 315 "version_hash_table.m"
    mercury__version_hash_table__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 315 "version_hash_table.m"
    mercury__version_hash_table__V_40_40 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__det_update_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_40_40 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 7693 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_34_34  = N;
#line 158 "version_array.opt"
}
#line 340 "version_hash_table.m"
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_33, (MR_Integer) 1)));
#line 340 "version_hash_table.m"
    {
#line 340 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_33), mercury__version_hash_table__K_6, &mercury__version_hash_table__conv1_Hash_50);
    }
#line 340 "version_hash_table.m"
    mercury__version_hash_table__Hash_50 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_50);
#line 342 "version_hash_table.m"
    mercury__version_hash_table__V_51_51 = (mercury__version_hash_table__V_34_34 - (MR_Integer) 1);
#line 342 "version_hash_table.m"
    mercury__version_hash_table__H_9 = (mercury__version_hash_table__Hash_50 & mercury__version_hash_table__V_51_51);
#line 516 "version_hash_table.m"
    mercury__version_hash_table__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 516 "version_hash_table.m"
    mercury__version_hash_table__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 516 "version_hash_table.m"
    mercury__version_hash_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 516 "version_hash_table.m"
    mercury__version_hash_table__Buckets0_10 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 7721 "version_hash_table.c"
    mercury__version_hash_table__TypeCtorInfo_26_26 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 7723 "version_hash_table.c"
    {
#line 7725 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7727 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_27_27, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_26_26));
#line 7729 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_27_27, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_24));
#line 7731 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_27_27, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_25));
#line 7733 "version_hash_table.c"
    }
#line 154 "version_array.opt"
    {
#line 154 "version_array.opt"
      mercury__version_hash_table__conv2_AL0_11 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_27_27, (MR_Box) mercury__version_hash_table__Buckets0_10, mercury__version_hash_table__H_9);
    }
#line 154 "version_array.opt"
    mercury__version_hash_table__AL0_11 = ((MR_Word) mercury__version_hash_table__conv2_AL0_11);
#line 519 "version_hash_table.m"
    {
#line 519 "version_hash_table.m"
      mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(mercury__version_hash_table__TypeInfo_for_K_24, mercury__version_hash_table__AL0_11, mercury__version_hash_table__K_6, mercury__version_hash_table__V_7, &mercury__version_hash_table__AL1_12);
    }
#line 521 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 520 "version_hash_table.m"
      mercury__version_hash_table__AL_13 = mercury__version_hash_table__AL1_12;
#line 521 "version_hash_table.m"
    else
#line 522 "version_hash_table.m"
      {
#line 522 "version_hash_table.m"
        MR_Word mercury__version_hash_table__TypeCtorInfo_28_28 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 522 "version_hash_table.m"
        MR_Word mercury__version_hash_table__V_15_15 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.det_update: key not found"));

#line 522 "version_hash_table.m"
        {
#line 522 "version_hash_table.m"
          mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_28_28, ((MR_Box) (mercury__version_hash_table__V_15_15)));
        }
#line 522 "version_hash_table.m"
      }
#line 157 "version_array.opt"
    {
#line 157 "version_array.opt"
      mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_27_27, mercury__version_hash_table__H_9, ((MR_Box) (mercury__version_hash_table__AL_13)), (MR_Box) mercury__version_hash_table__Buckets0_10, &mercury__version_hash_table__conv3_Buckets_14);
    }
#line 157 "version_array.opt"
    mercury__version_hash_table__Buckets_14 = (MR_Box) mercury__version_hash_table__conv3_Buckets_14;
#line 526 "version_hash_table.m"
    mercury__version_hash_table__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 526 "version_hash_table.m"
    mercury__version_hash_table__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 526 "version_hash_table.m"
    mercury__version_hash_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 526 "version_hash_table.m"
    mercury__version_hash_table__V_23_23 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 526 "version_hash_table.m"
    {
#line 526 "version_hash_table.m"
      mercury__version_hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 526 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 0) = ((MR_Box) (mercury__version_hash_table__V_20_20));
#line 526 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 1) = ((MR_Box) (mercury__version_hash_table__V_21_21));
#line 526 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 2) = ((MR_Box) (mercury__version_hash_table__V_22_22));
#line 526 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_14));
#line 526 "version_hash_table.m"
    }
#line 513 "version_hash_table.m"
    return mercury__version_hash_table__HT_8;
#line 513 "version_hash_table.m"
  }
#line 152 "version_hash_table.m"
}

#line 144 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__det_insert_4_p_0(
#line 144 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_8,
#line 144 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_9,
#line 144 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 144 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_6,
#line 144 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_7,
#line 144 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__4_4)
#line 144 "version_hash_table.m"
{
#line 509 "version_hash_table.m"
  {
#line 509 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 509 "version_hash_table.m"
    {
#line 509 "version_hash_table.m"
      *mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__det_insert_3_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HT_7, mercury__version_hash_table__K_5, mercury__version_hash_table__V_6);
    }
#line 509 "version_hash_table.m"
  }
#line 144 "version_hash_table.m"
}

#line 143 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__det_insert_3_f_0(
#line 143 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_27,
#line 143 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_28,
#line 143 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT0_5,
#line 143 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_6,
#line 143 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_7)
#line 143 "version_hash_table.m"
{
#line 480 "version_hash_table.m"
  {
#line 480 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 480 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_8;
#line 480 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_29_29;
#line 480 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_30_30;
#line 480 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__H_9;
#line 480 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumOccupants0_10;
#line 480 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__MaxOccupants_11;
#line 480 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_12;
#line 480 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets0_13;
#line 480 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL0_14;
#line 480 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL_15;
#line 480 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_22;
#line 480 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumOccupants_23;
#line 480 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 480 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_48;
#line 480 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_49_49;
#line 480 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_65;
#line 480 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_66_66;
#line 330 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 330 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 330 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_52_52 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 347 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_75;
#line 315 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_55_55;
#line 315 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_56_56;
#line 315 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_57_57;
#line 315 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_58_58;
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_12_76;
#line 340 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 340 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_65;
#line 154 "version_array.opt"
    MR_Box mercury__version_hash_table__conv2_AL0_14;
#line 157 "version_array.opt"
    MR_Box mercury__version_hash_table__conv3_Buckets_22;

#line 350 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__det_insert_3_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HashPred0_47 ;
		{
#line 350 "version_hash_table.m"

    HashPred = HashPred0;

#line 7928 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_48  = HashPred;
#line 350 "version_hash_table.m"
}
#line 315 "version_hash_table.m"
    mercury__version_hash_table__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 315 "version_hash_table.m"
    mercury__version_hash_table__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 315 "version_hash_table.m"
    mercury__version_hash_table__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 315 "version_hash_table.m"
    mercury__version_hash_table__V_55_55 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__det_insert_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_55_55 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 7956 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_49_49  = N;
#line 158 "version_array.opt"
}
#line 340 "version_hash_table.m"
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_48, (MR_Integer) 1)));
#line 340 "version_hash_table.m"
    {
#line 340 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_48), mercury__version_hash_table__K_6, &mercury__version_hash_table__conv1_Hash_65);
    }
#line 340 "version_hash_table.m"
    mercury__version_hash_table__Hash_65 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_65);
#line 342 "version_hash_table.m"
    mercury__version_hash_table__V_66_66 = (mercury__version_hash_table__V_49_49 - (MR_Integer) 1);
#line 342 "version_hash_table.m"
    mercury__version_hash_table__H_9 = (mercury__version_hash_table__Hash_65 & mercury__version_hash_table__V_66_66);
#line 484 "version_hash_table.m"
    mercury__version_hash_table__NumOccupants0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 484 "version_hash_table.m"
    mercury__version_hash_table__MaxOccupants_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 484 "version_hash_table.m"
    mercury__version_hash_table__HashPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 484 "version_hash_table.m"
    mercury__version_hash_table__Buckets0_13 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 7984 "version_hash_table.c"
    mercury__version_hash_table__TypeCtorInfo_29_29 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 7986 "version_hash_table.c"
    {
#line 7988 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7990 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_30_30, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_29_29));
#line 7992 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_30_30, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_27));
#line 7994 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_30_30, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_28));
#line 7996 "version_hash_table.c"
    }
#line 154 "version_array.opt"
    {
#line 154 "version_array.opt"
      mercury__version_hash_table__conv2_AL0_14 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_30_30, (MR_Box) mercury__version_hash_table__Buckets0_13, mercury__version_hash_table__H_9);
    }
#line 154 "version_array.opt"
    mercury__version_hash_table__AL0_14 = ((MR_Word) mercury__version_hash_table__conv2_AL0_14);
#line 490 "version_hash_table.m"
    if ((mercury__version_hash_table__AL0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 489 "version_hash_table.m"
      {
#line 489 "version_hash_table.m"
        mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 489 "version_hash_table.m"
        MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
#line 489 "version_hash_table.m"
        MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 489 "version_hash_table.m"
      }
#line 490 "version_hash_table.m"
    else
#line 490 "version_hash_table.m"
      if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_14)) == (MR_mktag((MR_Integer) 2))))
#line 497 "version_hash_table.m"
        {
#line 494 "version_hash_table.m"
          MR_Box mercury__version_hash_table__V_21_21;

#line 494 "version_hash_table.m"
          {
#line 494 "version_hash_table.m"
            mercury__version_hash_table__succeeded = mercury__version_hash_table__alist_search_3_p_0(mercury__version_hash_table__TypeInfo_for_K_27, mercury__version_hash_table__TypeInfo_for_V_28, mercury__version_hash_table__AL0_14, mercury__version_hash_table__K_6, &mercury__version_hash_table__V_21_21);
          }
#line 497 "version_hash_table.m"
          if (mercury__version_hash_table__succeeded)
#line 495 "version_hash_table.m"
            {
#line 495 "version_hash_table.m"
              MR_Word mercury__version_hash_table__TypeCtorInfo_31_31 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 495 "version_hash_table.m"
              MR_Word mercury__version_hash_table__V_24_24 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.det_insert: key already present"));

#line 495 "version_hash_table.m"
              {
#line 495 "version_hash_table.m"
                mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_31_31, ((MR_Box) (mercury__version_hash_table__V_24_24)));
              }
#line 495 "version_hash_table.m"
            }
#line 497 "version_hash_table.m"
          else
#line 498 "version_hash_table.m"
            {
#line 498 "version_hash_table.m"
              mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 498 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
#line 498 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 498 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 2) = ((MR_Box) (mercury__version_hash_table__AL0_14));
#line 498 "version_hash_table.m"
            }
#line 497 "version_hash_table.m"
        }
#line 490 "version_hash_table.m"
      else
#line 497 "version_hash_table.m"
        {
#line 494 "version_hash_table.m"
          MR_Box mercury__version_hash_table__V_32_32;

#line 494 "version_hash_table.m"
          {
#line 494 "version_hash_table.m"
            mercury__version_hash_table__succeeded = mercury__version_hash_table__alist_search_3_p_0(mercury__version_hash_table__TypeInfo_for_K_27, mercury__version_hash_table__TypeInfo_for_V_28, mercury__version_hash_table__AL0_14, mercury__version_hash_table__K_6, &mercury__version_hash_table__V_32_32);
          }
#line 497 "version_hash_table.m"
          if (mercury__version_hash_table__succeeded)
#line 495 "version_hash_table.m"
            {
#line 495 "version_hash_table.m"
              MR_Word mercury__version_hash_table__TypeCtorInfo_31_35 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 495 "version_hash_table.m"
              MR_Word mercury__version_hash_table__V_33_33 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.det_insert: key already present"));

#line 495 "version_hash_table.m"
              {
#line 495 "version_hash_table.m"
                mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_31_35, ((MR_Box) (mercury__version_hash_table__V_33_33)));
              }
#line 495 "version_hash_table.m"
            }
#line 497 "version_hash_table.m"
          else
#line 498 "version_hash_table.m"
            {
#line 498 "version_hash_table.m"
              mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 498 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
#line 498 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 498 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 2) = ((MR_Box) (mercury__version_hash_table__AL0_14));
#line 498 "version_hash_table.m"
            }
#line 497 "version_hash_table.m"
        }
#line 157 "version_array.opt"
    {
#line 157 "version_array.opt"
      mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_30_30, mercury__version_hash_table__H_9, ((MR_Box) (mercury__version_hash_table__AL_15)), (MR_Box) mercury__version_hash_table__Buckets0_13, &mercury__version_hash_table__conv3_Buckets_22);
    }
#line 157 "version_array.opt"
    mercury__version_hash_table__Buckets_22 = (MR_Box) mercury__version_hash_table__conv3_Buckets_22;
#line 502 "version_hash_table.m"
    mercury__version_hash_table__NumOccupants_23 = (mercury__version_hash_table__NumOccupants0_10 + (MR_Integer) 1);
#line 503 "version_hash_table.m"
    mercury__version_hash_table__succeeded = (mercury__version_hash_table__NumOccupants_23 > mercury__version_hash_table__MaxOccupants_11);
#line 505 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 504 "version_hash_table.m"
      {
#line 504 "version_hash_table.m"
        return mercury__version_hash_table__HT_8 = mercury__version_hash_table__expand_4_f_0(mercury__version_hash_table__TypeInfo_for_K_27, mercury__version_hash_table__TypeInfo_for_V_28, mercury__version_hash_table__NumOccupants_23, mercury__version_hash_table__MaxOccupants_11, mercury__version_hash_table__HashPred_12, mercury__version_hash_table__Buckets_22);
      }
#line 505 "version_hash_table.m"
    else
#line 506 "version_hash_table.m"
      {
#line 506 "version_hash_table.m"
        mercury__version_hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 506 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants_23));
#line 506 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_11));
#line 506 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_12));
#line 506 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_22));
#line 506 "version_hash_table.m"
      }
#line 480 "version_hash_table.m"
    return mercury__version_hash_table__HT_8;
#line 480 "version_hash_table.m"
  }
#line 143 "version_hash_table.m"
}

#line 137 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__f_101_108_101_109_32_58_61_3_f_0(
#line 137 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_8,
#line 137 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_9,
#line 137 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 137 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_6,
#line 137 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_7)
#line 137 "version_hash_table.m"
{
#line 423 "version_hash_table.m"
  {
#line 423 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 423 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__4_4;

#line 423 "version_hash_table.m"
    {
#line 423 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__set_3_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HT_6, mercury__version_hash_table__K_5, mercury__version_hash_table__V_7);
    }
#line 423 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__4_4;
#line 423 "version_hash_table.m"
  }
#line 137 "version_hash_table.m"
}

#line 130 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__set_4_p_0(
#line 130 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_8,
#line 130 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_9,
#line 130 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 130 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_6,
#line 130 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_7,
#line 130 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__4_4)
#line 130 "version_hash_table.m"
{
#line 425 "version_hash_table.m"
  {
#line 425 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 425 "version_hash_table.m"
    {
#line 425 "version_hash_table.m"
      *mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__set_3_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HT_7, mercury__version_hash_table__K_5, mercury__version_hash_table__V_6);
    }
#line 425 "version_hash_table.m"
  }
#line 130 "version_hash_table.m"
}

#line 129 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__set_3_f_0(
#line 129 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_26,
#line 129 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_27,
#line 129 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT0_5,
#line 129 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_6,
#line 129 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_7)
#line 129 "version_hash_table.m"
{
#line 379 "version_hash_table.m"
  {
#line 379 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 379 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_8;
#line 379 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_28_28;
#line 379 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_29_29;
#line 379 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__H_9;
#line 379 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumOccupants0_10;
#line 379 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__MaxOccupants_11;
#line 379 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_12;
#line 379 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets0_13;
#line 379 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL0_14;
#line 379 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL_15;
#line 379 "version_hash_table.m"
    MR_Word mercury__version_hash_table__MayExpand_16;
#line 379 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_23;
#line 379 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 379 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_34;
#line 379 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_35_35;
#line 379 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_51;
#line 379 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_52_52;
#line 330 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 330 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 330 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_38_38 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 347 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_61;
#line 315 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_41_41;
#line 315 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_42_42;
#line 315 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_43_43;
#line 315 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_44_44;
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_12_62;
#line 340 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 340 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_51;
#line 154 "version_array.opt"
    MR_Box mercury__version_hash_table__conv2_AL0_14;
#line 157 "version_array.opt"
    MR_Box mercury__version_hash_table__conv3_Buckets_23;

#line 350 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__set_3_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HashPred0_33 ;
		{
#line 350 "version_hash_table.m"

    HashPred = HashPred0;

#line 8307 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_34  = HashPred;
#line 350 "version_hash_table.m"
}
#line 315 "version_hash_table.m"
    mercury__version_hash_table__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 315 "version_hash_table.m"
    mercury__version_hash_table__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 315 "version_hash_table.m"
    mercury__version_hash_table__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 315 "version_hash_table.m"
    mercury__version_hash_table__V_41_41 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__set_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_41_41 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 8335 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_35_35  = N;
#line 158 "version_array.opt"
}
#line 340 "version_hash_table.m"
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_34, (MR_Integer) 1)));
#line 340 "version_hash_table.m"
    {
#line 340 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_34), mercury__version_hash_table__K_6, &mercury__version_hash_table__conv1_Hash_51);
    }
#line 340 "version_hash_table.m"
    mercury__version_hash_table__Hash_51 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_51);
#line 342 "version_hash_table.m"
    mercury__version_hash_table__V_52_52 = (mercury__version_hash_table__V_35_35 - (MR_Integer) 1);
#line 342 "version_hash_table.m"
    mercury__version_hash_table__H_9 = (mercury__version_hash_table__Hash_51 & mercury__version_hash_table__V_52_52);
#line 383 "version_hash_table.m"
    mercury__version_hash_table__NumOccupants0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 383 "version_hash_table.m"
    mercury__version_hash_table__MaxOccupants_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 383 "version_hash_table.m"
    mercury__version_hash_table__HashPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 383 "version_hash_table.m"
    mercury__version_hash_table__Buckets0_13 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 8363 "version_hash_table.c"
    mercury__version_hash_table__TypeCtorInfo_28_28 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 8365 "version_hash_table.c"
    {
#line 8367 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8369 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_29_29, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_28_28));
#line 8371 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_29_29, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_26));
#line 8373 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_29_29, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_27));
#line 8375 "version_hash_table.c"
    }
#line 154 "version_array.opt"
    {
#line 154 "version_array.opt"
      mercury__version_hash_table__conv2_AL0_14 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_29_29, (MR_Box) mercury__version_hash_table__Buckets0_13, mercury__version_hash_table__H_9);
    }
#line 154 "version_array.opt"
    mercury__version_hash_table__AL0_14 = ((MR_Word) mercury__version_hash_table__conv2_AL0_14);
#line 390 "version_hash_table.m"
    if ((mercury__version_hash_table__AL0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 387 "version_hash_table.m"
      {
#line 388 "version_hash_table.m"
        {
#line 388 "version_hash_table.m"
          mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "version_hash_table.m"
          MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
#line 388 "version_hash_table.m"
          MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 388 "version_hash_table.m"
        }
#line 389 "version_hash_table.m"
        mercury__version_hash_table__MayExpand_16 = (MR_Integer) 1;
#line 387 "version_hash_table.m"
      }
#line 390 "version_hash_table.m"
    else
#line 390 "version_hash_table.m"
      if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_14)) == (MR_mktag((MR_Integer) 2))))
#line 404 "version_hash_table.m"
        {
#line 404 "version_hash_table.m"
          MR_Word mercury__version_hash_table__AL1_22;

#line 401 "version_hash_table.m"
          {
#line 401 "version_hash_table.m"
            mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(mercury__version_hash_table__TypeInfo_for_K_26, mercury__version_hash_table__AL0_14, mercury__version_hash_table__K_6, mercury__version_hash_table__V_7, &mercury__version_hash_table__AL1_22);
          }
#line 404 "version_hash_table.m"
          if (mercury__version_hash_table__succeeded)
#line 402 "version_hash_table.m"
            {
#line 402 "version_hash_table.m"
              mercury__version_hash_table__AL_15 = mercury__version_hash_table__AL1_22;
#line 403 "version_hash_table.m"
              mercury__version_hash_table__MayExpand_16 = (MR_Integer) 0;
#line 402 "version_hash_table.m"
            }
#line 404 "version_hash_table.m"
          else
#line 405 "version_hash_table.m"
            {
#line 405 "version_hash_table.m"
              {
#line 405 "version_hash_table.m"
                mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 405 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
#line 405 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 405 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 2) = ((MR_Box) (mercury__version_hash_table__AL0_14));
#line 405 "version_hash_table.m"
              }
#line 406 "version_hash_table.m"
              mercury__version_hash_table__MayExpand_16 = (MR_Integer) 1;
#line 405 "version_hash_table.m"
            }
#line 404 "version_hash_table.m"
        }
#line 390 "version_hash_table.m"
      else
#line 391 "version_hash_table.m"
        {
#line 391 "version_hash_table.m"
          MR_Box mercury__version_hash_table__K0_17 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_14, (MR_Integer) 0));
#line 391 "version_hash_table.m"
          MR_Box mercury__version_hash_table___V0_18 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_14, (MR_Integer) 1));

#line 392 "version_hash_table.m"
          {
#line 392 "version_hash_table.m"
            mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_26, mercury__version_hash_table__K0_17, mercury__version_hash_table__K_6);
          }
#line 395 "version_hash_table.m"
          if (mercury__version_hash_table__succeeded)
#line 393 "version_hash_table.m"
            {
#line 393 "version_hash_table.m"
              {
#line 393 "version_hash_table.m"
                mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 393 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K0_17;
#line 393 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 393 "version_hash_table.m"
              }
#line 394 "version_hash_table.m"
              mercury__version_hash_table__MayExpand_16 = (MR_Integer) 0;
#line 393 "version_hash_table.m"
            }
#line 395 "version_hash_table.m"
          else
#line 396 "version_hash_table.m"
            {
#line 396 "version_hash_table.m"
              {
#line 396 "version_hash_table.m"
                mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 396 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
#line 396 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 396 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 2) = ((MR_Box) (mercury__version_hash_table__AL0_14));
#line 396 "version_hash_table.m"
              }
#line 397 "version_hash_table.m"
              mercury__version_hash_table__MayExpand_16 = (MR_Integer) 1;
#line 396 "version_hash_table.m"
            }
#line 391 "version_hash_table.m"
        }
#line 157 "version_array.opt"
    {
#line 157 "version_array.opt"
      mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_29_29, mercury__version_hash_table__H_9, ((MR_Box) (mercury__version_hash_table__AL_15)), (MR_Box) mercury__version_hash_table__Buckets0_13, &mercury__version_hash_table__conv3_Buckets_23);
    }
#line 157 "version_array.opt"
    mercury__version_hash_table__Buckets_23 = (MR_Box) mercury__version_hash_table__conv3_Buckets_23;
#line 413 "version_hash_table.m"
    if ((mercury__version_hash_table__MayExpand_16 == (MR_Integer) 0))
#line 412 "version_hash_table.m"
      {
#line 412 "version_hash_table.m"
        mercury__version_hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 412 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants0_10));
#line 412 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_11));
#line 412 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_12));
#line 412 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_23));
#line 412 "version_hash_table.m"
      }
#line 413 "version_hash_table.m"
    else
#line 414 "version_hash_table.m"
      {
#line 414 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__NumOccupants_24 = (mercury__version_hash_table__NumOccupants0_10 + (MR_Integer) 1);

#line 416 "version_hash_table.m"
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__NumOccupants_24 > mercury__version_hash_table__MaxOccupants_11);
#line 418 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 417 "version_hash_table.m"
          {
#line 417 "version_hash_table.m"
            return mercury__version_hash_table__HT_8 = mercury__version_hash_table__expand_4_f_0(mercury__version_hash_table__TypeInfo_for_K_26, mercury__version_hash_table__TypeInfo_for_V_27, mercury__version_hash_table__NumOccupants_24, mercury__version_hash_table__MaxOccupants_11, mercury__version_hash_table__HashPred_12, mercury__version_hash_table__Buckets_23);
          }
#line 418 "version_hash_table.m"
        else
#line 419 "version_hash_table.m"
          {
#line 419 "version_hash_table.m"
            mercury__version_hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 419 "version_hash_table.m"
            MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants_24));
#line 419 "version_hash_table.m"
            MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_11));
#line 419 "version_hash_table.m"
            MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_12));
#line 419 "version_hash_table.m"
            MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_23));
#line 419 "version_hash_table.m"
          }
#line 414 "version_hash_table.m"
      }
#line 379 "version_hash_table.m"
    return mercury__version_hash_table__HT_8;
#line 379 "version_hash_table.m"
  }
#line 129 "version_hash_table.m"
}

#line 123 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__copy_1_f_0(
#line 123 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_10,
#line 123 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_11,
#line 123 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT0_3)
#line 123 "version_hash_table.m"
{
#line 371 "version_hash_table.m"
  {
#line 371 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 371 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_4;
#line 372 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_12_12 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 372 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_13_13;
#line 372 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_14_14 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
#line 372 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_15_15;
#line 372 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumOccupants_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_3, (MR_Integer) 0)));
#line 372 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__MaxOccupants_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_3, (MR_Integer) 1)));
#line 372 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_3, (MR_Integer) 2)));
#line 372 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets0_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_3, (MR_Integer) 3)));
#line 372 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_9;
#line 56 "builtin.opt"
    MR_Box mercury__version_hash_table__conv0_Copy;

#line 8604 "version_hash_table.c"
    {
#line 8606 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8608 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_13_13, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_12_12));
#line 8610 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_13_13, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_10));
#line 8612 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_13_13, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_11));
#line 8614 "version_hash_table.c"
    }
#line 8616 "version_hash_table.c"
    {
#line 8618 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8620 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_15_15, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_14_14));
#line 8622 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_15_15, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_13_13));
#line 8624 "version_hash_table.c"
    }
#line 56 "builtin.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__copy_1_f_0

	MR_Word TypeInfo_for_T;
	MR_Word Value;
	MR_Word Copy;

	TypeInfo_for_T =  mercury__version_hash_table__TypeInfo_15_15 ;
	Value = (MR_Word) ((MR_Box) (mercury__version_hash_table__Buckets0_8)) ;
		{
#line 56 "builtin.opt"

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();

#line 8643 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__conv0_Copy  = (MR_Box) Copy;
#line 56 "builtin.opt"
    mercury__version_hash_table__Buckets_9 = ((MR_Box) mercury__version_hash_table__conv0_Copy);
#line 56 "builtin.opt"
}
#line 374 "version_hash_table.m"
    {
#line 374 "version_hash_table.m"
      mercury__version_hash_table__HT_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 374 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants_5));
#line 374 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_6));
#line 374 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_7));
#line 374 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_9));
#line 374 "version_hash_table.m"
    }
#line 371 "version_hash_table.m"
    return mercury__version_hash_table__HT_4;
#line 371 "version_hash_table.m"
  }
#line 123 "version_hash_table.m"
}

#line 113 "version_hash_table.m"
MR_Integer MR_CALL 
mercury__version_hash_table__num_occupants_1_f_0(
#line 113 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_8,
#line 113 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_9,
#line 113 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_3)
#line 113 "version_hash_table.m"
{
#line 319 "version_hash_table.m"
  {
#line 319 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 319 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumOccupants_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 0)));
#line 320 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 1)));
#line 320 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 2)));
#line 320 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 3)));

#line 319 "version_hash_table.m"
    return mercury__version_hash_table__NumOccupants_4;
#line 319 "version_hash_table.m"
  }
#line 113 "version_hash_table.m"
}

#line 109 "version_hash_table.m"
MR_Integer MR_CALL 
mercury__version_hash_table__num_buckets_1_f_0(
#line 109 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_9,
#line 109 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_10,
#line 109 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_3)
#line 109 "version_hash_table.m"
{
#line 314 "version_hash_table.m"
  {
#line 314 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 314 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumBuckets_4;
#line 315 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_5_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 3)));
#line 315 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 0)));
#line 315 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 1)));
#line 315 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 2)));
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_12_13;

#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__num_buckets_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_5_5 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 8745 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__NumBuckets_4  = N;
#line 158 "version_array.opt"
}
#line 314 "version_hash_table.m"
    return mercury__version_hash_table__NumBuckets_4;
#line 314 "version_hash_table.m"
  }
#line 109 "version_hash_table.m"
}

#line 105 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__generic_hash_2_p_0(
#line 105 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_38,
#line 105 "version_hash_table.m"
  MR_Box mercury__version_hash_table__T_3,
#line 105 "version_hash_table.m"
  MR_Integer * mercury__version_hash_table__H_4)
#line 105 "version_hash_table.m"
{
#line 757 "version_hash_table.m"
  while (MR_TRUE)
#line 757 "version_hash_table.m"
    {
#line 757 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 757 "version_hash_table.m"
      {
#line 757 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;
#line 757 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__Int_5;
#line 753 "version_hash_table.m"
        MR_Word mercury__version_hash_table__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 109 "builtin.opt"
        MR_Box mercury__version_hash_table__conv0_Int_5;

#line 109 "builtin.opt"
        {
#line 109 "builtin.opt"
          mercury__version_hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__version_hash_table__TypeInfo_for_T_38, mercury__version_hash_table__TypeCtorInfo_39_39, mercury__version_hash_table__T_3, &mercury__version_hash_table__conv0_Int_5);
        }
#line 109 "builtin.opt"
        if (mercury__version_hash_table__succeeded)
#line 109 "builtin.opt"
          {
#line 109 "builtin.opt"
            mercury__version_hash_table__Int_5 = ((MR_Integer) mercury__version_hash_table__conv0_Int_5);
#line 109 "builtin.opt"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 109 "builtin.opt"
          }
#line 757 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 701 "version_hash_table.m"
          {
#line 704 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__generic_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__version_hash_table__Int_5 ;
		{
#line 704 "version_hash_table.m"

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

#line 8840 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__H_4  = H;
#line 704 "version_hash_table.m"
}
#line 701 "version_hash_table.m"
          }
#line 757 "version_hash_table.m"
        else
#line 761 "version_hash_table.m"
          {
#line 761 "version_hash_table.m"
            MR_String mercury__version_hash_table__String_6;
#line 757 "version_hash_table.m"
            MR_Word mercury__version_hash_table__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 109 "builtin.opt"
            MR_Box mercury__version_hash_table__conv1_String_6;

#line 109 "builtin.opt"
            {
#line 109 "builtin.opt"
              mercury__version_hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__version_hash_table__TypeInfo_for_T_38, mercury__version_hash_table__TypeCtorInfo_40_40, mercury__version_hash_table__T_3, &mercury__version_hash_table__conv1_String_6);
            }
#line 109 "builtin.opt"
            if (mercury__version_hash_table__succeeded)
#line 109 "builtin.opt"
              {
#line 109 "builtin.opt"
                mercury__version_hash_table__String_6 = ((MR_String) mercury__version_hash_table__conv1_String_6);
#line 109 "builtin.opt"
                mercury__version_hash_table__succeeded = MR_TRUE;
#line 109 "builtin.opt"
              }
#line 761 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 733 "version_hash_table.m"
              {
#line 733 "version_hash_table.m"
                *mercury__version_hash_table__H_4 = mercury__string__hash_1_f_0(mercury__version_hash_table__String_6);
              }
#line 761 "version_hash_table.m"
            else
#line 765 "version_hash_table.m"
              {
#line 765 "version_hash_table.m"
                MR_Float mercury__version_hash_table__Float_7;
#line 761 "version_hash_table.m"
                MR_Word mercury__version_hash_table__TypeCtorInfo_41_41 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 109 "builtin.opt"
                MR_Box mercury__version_hash_table__conv2_Float_7;

#line 109 "builtin.opt"
                {
#line 109 "builtin.opt"
                  mercury__version_hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__version_hash_table__TypeInfo_for_T_38, mercury__version_hash_table__TypeCtorInfo_41_41, mercury__version_hash_table__T_3, &mercury__version_hash_table__conv2_Float_7);
                }
#line 109 "builtin.opt"
                if (mercury__version_hash_table__succeeded)
#line 109 "builtin.opt"
                  {
#line 109 "builtin.opt"
                    mercury__version_hash_table__Float_7 = MR_unbox_float(mercury__version_hash_table__conv2_Float_7);
#line 109 "builtin.opt"
                    mercury__version_hash_table__succeeded = MR_TRUE;
#line 109 "builtin.opt"
                  }
#line 765 "version_hash_table.m"
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

#line 8925 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__H_4  = H;
#line 112 "float.opt"
}
#line 112 "float.opt"
                  }
#line 765 "version_hash_table.m"
                else
#line 769 "version_hash_table.m"
                  {
#line 769 "version_hash_table.m"
                    MR_Char mercury__version_hash_table__Char_8;
#line 765 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 109 "builtin.opt"
                    MR_Box mercury__version_hash_table__conv3_Char_8;

#line 109 "builtin.opt"
                    {
#line 109 "builtin.opt"
                      mercury__version_hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__version_hash_table__TypeInfo_for_T_38, mercury__version_hash_table__TypeCtorInfo_42_42, mercury__version_hash_table__T_3, &mercury__version_hash_table__conv3_Char_8);
                    }
#line 109 "builtin.opt"
                    if (mercury__version_hash_table__succeeded)
#line 109 "builtin.opt"
                      {
#line 109 "builtin.opt"
                        mercury__version_hash_table__Char_8 = ((MR_Char) (MR_Word) mercury__version_hash_table__conv3_Char_8);
#line 109 "builtin.opt"
                        mercury__version_hash_table__succeeded = MR_TRUE;
#line 109 "builtin.opt"
                      }
#line 769 "version_hash_table.m"
                    if (mercury__version_hash_table__succeeded)
#line 745 "version_hash_table.m"
                      {
#line 745 "version_hash_table.m"
                        MR_Integer mercury__version_hash_table__V_63_63;

#line 63 "char.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__generic_hash_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__version_hash_table__Char_8 ;
		{
#line 63 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 8980 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_63_63  = Int;
#line 63 "char.opt"
}
#line 704 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__generic_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__version_hash_table__V_63_63 ;
		{
#line 704 "version_hash_table.m"

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

#line 9021 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__H_4  = H;
#line 704 "version_hash_table.m"
}
#line 745 "version_hash_table.m"
                      }
#line 769 "version_hash_table.m"
                    else
#line 773 "version_hash_table.m"
                      {
#line 773 "version_hash_table.m"
                        MR_Word mercury__version_hash_table__Univ_9;
#line 769 "version_hash_table.m"
                        MR_Word mercury__version_hash_table__TypeCtorInfo_43_43 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 109 "builtin.opt"
                        MR_Box mercury__version_hash_table__conv4_Univ_9;

#line 109 "builtin.opt"
                        {
#line 109 "builtin.opt"
                          mercury__version_hash_table__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__version_hash_table__TypeInfo_for_T_38, mercury__version_hash_table__TypeCtorInfo_43_43, mercury__version_hash_table__T_3, &mercury__version_hash_table__conv4_Univ_9);
                        }
#line 109 "builtin.opt"
                        if (mercury__version_hash_table__succeeded)
#line 109 "builtin.opt"
                          {
#line 109 "builtin.opt"
                            mercury__version_hash_table__Univ_9 = ((MR_Word) mercury__version_hash_table__conv4_Univ_9);
#line 109 "builtin.opt"
                            mercury__version_hash_table__succeeded = MR_TRUE;
#line 109 "builtin.opt"
                          }
#line 773 "version_hash_table.m"
                        if (mercury__version_hash_table__succeeded)
#line 771 "version_hash_table.m"
                          {
#line 771 "version_hash_table.m"
                            MR_Word mercury__version_hash_table__TypeInfo_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__Univ_9, (MR_Integer) 0)));
#line 771 "version_hash_table.m"
                            MR_Box mercury__version_hash_table__V_22_22 = (MR_hl_field(MR_mktag(0), mercury__version_hash_table__Univ_9, (MR_Integer) 1));

#line 771 "version_hash_table.m"
                            /* direct tailcall eliminated */
#line 771 "version_hash_table.m"
                            {
#line 771 "version_hash_table.m"
                              MR_Word mercury__version_hash_table__TypeInfo_for_T__tmp_copy_38 = mercury__version_hash_table__TypeInfo_44_44;
#line 771 "version_hash_table.m"
                              MR_Box mercury__version_hash_table__T__tmp_copy_3 = mercury__version_hash_table__V_22_22;

#line 771 "version_hash_table.m"
                              mercury__version_hash_table__T_3 = mercury__version_hash_table__T__tmp_copy_3;
#line 771 "version_hash_table.m"
                              mercury__version_hash_table__TypeInfo_for_T_38 = mercury__version_hash_table__TypeInfo_for_T__tmp_copy_38;
#line 771 "version_hash_table.m"
                            }
#line 771 "version_hash_table.m"
                            continue;
#line 771 "version_hash_table.m"
                          }
#line 773 "version_hash_table.m"
                        else
#line 784 "version_hash_table.m"
                          {
#line 784 "version_hash_table.m"
                            MR_Word mercury__version_hash_table__TypeInfo_45_45;
#line 784 "version_hash_table.m"
                            MR_ArrayPtr mercury__version_hash_table__Array_10;
#line 773 "version_hash_table.m"
                            MR_ArrayPtr mercury__version_hash_table__conv5_Array_10;

#line 773 "version_hash_table.m"
                            {
#line 773 "version_hash_table.m"
                              mercury__version_hash_table__succeeded = mercury__array__dynamic_cast_to_array_2_p_0(mercury__version_hash_table__TypeInfo_for_T_38, &mercury__version_hash_table__TypeInfo_45_45, mercury__version_hash_table__T_3, &mercury__version_hash_table__conv5_Array_10);
                            }
#line 773 "version_hash_table.m"
                            if (mercury__version_hash_table__succeeded)
#line 773 "version_hash_table.m"
                              {
#line 773 "version_hash_table.m"
                                mercury__version_hash_table__Array_10 = (MR_ArrayPtr) mercury__version_hash_table__conv5_Array_10;
#line 773 "version_hash_table.m"
                                mercury__version_hash_table__succeeded = MR_TRUE;
#line 773 "version_hash_table.m"
                              }
#line 784 "version_hash_table.m"
                            if (mercury__version_hash_table__succeeded)
#line 775 "version_hash_table.m"
                              {
#line 775 "version_hash_table.m"
                                {
#line 775 "version_hash_table.m"
                                  *mercury__version_hash_table__H_4 = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(mercury__version_hash_table__TypeInfo_45_45, mercury__version_hash_table__Array_10, (MR_Integer) 0);
                                }
#line 775 "version_hash_table.m"
                              }
#line 784 "version_hash_table.m"
                            else
#line 786 "version_hash_table.m"
                              {
#line 786 "version_hash_table.m"
                                MR_String mercury__version_hash_table__FunctorName_15;
#line 786 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__Arity_16;
#line 786 "version_hash_table.m"
                                MR_Word mercury__version_hash_table__Args_17;
#line 786 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__H0_18;
#line 786 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__H1_19;
#line 786 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__V_73_73;
#line 786 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__V_74_74;
#line 786 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__V_75_75;
#line 786 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__V_76_76;

#line 786 "version_hash_table.m"
                                {
#line 786 "version_hash_table.m"
                                  mercury__deconstruct__deconstruct_5_p_1(mercury__version_hash_table__TypeInfo_for_T_38, mercury__version_hash_table__T_3, (MR_Integer) 1, &mercury__version_hash_table__FunctorName_15, &mercury__version_hash_table__Arity_16, &mercury__version_hash_table__Args_17);
                                }
#line 733 "version_hash_table.m"
                                {
#line 733 "version_hash_table.m"
                                  mercury__version_hash_table__H0_18 = mercury__string__hash_1_f_0(mercury__version_hash_table__FunctorName_15);
                                }
#line 804 "version_hash_table.m"
                                mercury__version_hash_table__V_73_73 = (mercury__version_hash_table__H0_18 << mercury__version_hash_table__Arity_16);
#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__generic_hash_2_p_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 9167 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_76_76  = Bits;
#line 171 "int.opt"
}
#line 805 "version_hash_table.m"
                                mercury__version_hash_table__V_75_75 = (mercury__version_hash_table__V_76_76 - mercury__version_hash_table__Arity_16);
#line 804 "version_hash_table.m"
                                mercury__version_hash_table__V_74_74 = (mercury__version_hash_table__H0_18 >> mercury__version_hash_table__V_75_75);
#line 803 "version_hash_table.m"
                                mercury__version_hash_table__H1_19 = (mercury__version_hash_table__V_73_73 ^ mercury__version_hash_table__V_74_74);
#line 789 "version_hash_table.m"
                                {
#line 789 "version_hash_table.m"
                                  mercury__version_hash_table__foldl__ho17_4_p_in__list_0(mercury__version_hash_table__Args_17, mercury__version_hash_table__H1_19, mercury__version_hash_table__H_4);
#line 789 "version_hash_table.m"
                                  return;
                                }
#line 786 "version_hash_table.m"
                              }
#line 784 "version_hash_table.m"
                          }
#line 773 "version_hash_table.m"
                      }
#line 769 "version_hash_table.m"
                  }
#line 765 "version_hash_table.m"
              }
#line 761 "version_hash_table.m"
          }
#line 757 "version_hash_table.m"
      }
#line 757 "version_hash_table.m"
      break;
#line 757 "version_hash_table.m"
    }
#line 105 "version_hash_table.m"
}

#line 104 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__float_hash_2_p_0(
#line 104 "version_hash_table.m"
  MR_Float mercury__version_hash_table__F_3,
#line 104 "version_hash_table.m"
  MR_Integer * mercury__version_hash_table__HeadVar__2_2)
#line 104 "version_hash_table.m"
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

#line 9235 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__HeadVar__2_2  = H;
#line 112 "float.opt"
}
#line 112 "float.opt"
  }
#line 104 "version_hash_table.m"
}

#line 103 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__char_hash_2_p_0(
#line 103 "version_hash_table.m"
  MR_Char mercury__version_hash_table__C_3,
#line 103 "version_hash_table.m"
  MR_Integer * mercury__version_hash_table__H_4)
#line 103 "version_hash_table.m"
{
#line 745 "version_hash_table.m"
  {
#line 745 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 745 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_5_5;

#line 63 "char.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__char_hash_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__version_hash_table__C_3 ;
		{
#line 63 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 9276 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_5_5  = Int;
#line 63 "char.opt"
}
#line 704 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__char_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__version_hash_table__V_5_5 ;
		{
#line 704 "version_hash_table.m"

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

#line 9317 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__H_4  = H;
#line 704 "version_hash_table.m"
}
#line 745 "version_hash_table.m"
  }
#line 103 "version_hash_table.m"
}

#line 102 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__string_hash_2_p_0(
#line 102 "version_hash_table.m"
  MR_String mercury__version_hash_table__S_3,
#line 102 "version_hash_table.m"
  MR_Integer * mercury__version_hash_table__HeadVar__2_2)
#line 102 "version_hash_table.m"
{
#line 733 "version_hash_table.m"
  {
#line 733 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 733 "version_hash_table.m"
    {
#line 733 "version_hash_table.m"
      *mercury__version_hash_table__HeadVar__2_2 = mercury__string__hash_1_f_0(mercury__version_hash_table__S_3);
    }
#line 733 "version_hash_table.m"
  }
#line 102 "version_hash_table.m"
}

#line 101 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__int_hash_2_p_0(
#line 101 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__N_1,
#line 101 "version_hash_table.m"
  MR_Integer * mercury__version_hash_table__H_2)
#line 101 "version_hash_table.m"
{
#line 701 "version_hash_table.m"
  {
#line 701 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 704 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__int_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__version_hash_table__N_1 ;
		{
#line 704 "version_hash_table.m"

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

#line 9401 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__H_2  = H;
#line 704 "version_hash_table.m"
}
#line 701 "version_hash_table.m"
  }
#line 101 "version_hash_table.m"
}

#line 92 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__unsafe_new_default_1_f_0(
#line 92 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_6,
#line 92 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_7,
#line 92 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_3)
#line 92 "version_hash_table.m"
{
#line 309 "version_hash_table.m"
  {
#line 309 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 309 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__2_2;

#line 272 "version_hash_table.m"
    {
#line 272 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HashPred_3, (MR_Integer) 7, (MR_Float) 0.90000000000000002, (MR_Integer) 0);
    }
#line 309 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__2_2;
#line 309 "version_hash_table.m"
  }
#line 92 "version_hash_table.m"
}

#line 88 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__unsafe_init_default_1_f_0(
#line 88 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_6,
#line 88 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_7,
#line 88 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_3)
#line 88 "version_hash_table.m"
{
#line 308 "version_hash_table.m"
  {
#line 308 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 308 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__2_2;

#line 272 "version_hash_table.m"
    {
#line 272 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HashPred_3, (MR_Integer) 7, (MR_Float) 0.90000000000000002, (MR_Integer) 0);
    }
#line 308 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__2_2;
#line 308 "version_hash_table.m"
  }
#line 88 "version_hash_table.m"
}

#line 80 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__new_default_1_f_0(
#line 80 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_6,
#line 80 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_7,
#line 80 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_3)
#line 80 "version_hash_table.m"
{
#line 306 "version_hash_table.m"
  {
#line 306 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 306 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__2_2;

#line 268 "version_hash_table.m"
    {
#line 268 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HashPred_3, (MR_Integer) 7, (MR_Float) 0.90000000000000002, (MR_Integer) 1);
    }
#line 306 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__2_2;
#line 306 "version_hash_table.m"
  }
#line 80 "version_hash_table.m"
}

#line 76 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__init_default_1_f_0(
#line 76 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_6,
#line 76 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_7,
#line 76 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_3)
#line 76 "version_hash_table.m"
{
#line 305 "version_hash_table.m"
  {
#line 305 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 305 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__2_2;

#line 268 "version_hash_table.m"
    {
#line 268 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HashPred_3, (MR_Integer) 7, (MR_Float) 0.90000000000000002, (MR_Integer) 1);
    }
#line 305 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__2_2;
#line 305 "version_hash_table.m"
  }
#line 76 "version_hash_table.m"
}

#line 70 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__unsafe_new_3_f_0(
#line 70 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_9,
#line 70 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_10,
#line 70 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_5,
#line 70 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__N_6,
#line 70 "version_hash_table.m"
  MR_Float mercury__version_hash_table__MaxOccupancy_7)
#line 70 "version_hash_table.m"
{
#line 274 "version_hash_table.m"
  {
#line 274 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 274 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__4_4;

#line 274 "version_hash_table.m"
    {
#line 274 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_9, mercury__version_hash_table__TypeInfo_for_V_10, mercury__version_hash_table__HashPred_5, mercury__version_hash_table__N_6, mercury__version_hash_table__MaxOccupancy_7, (MR_Integer) 0);
    }
#line 274 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__4_4;
#line 274 "version_hash_table.m"
  }
#line 70 "version_hash_table.m"
}

#line 66 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__unsafe_init_3_f_0(
#line 66 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_9,
#line 66 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_10,
#line 66 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_5,
#line 66 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__N_6,
#line 66 "version_hash_table.m"
  MR_Float mercury__version_hash_table__MaxOccupancy_7)
#line 66 "version_hash_table.m"
{
#line 272 "version_hash_table.m"
  {
#line 272 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 272 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__4_4;

#line 272 "version_hash_table.m"
    {
#line 272 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_9, mercury__version_hash_table__TypeInfo_for_V_10, mercury__version_hash_table__HashPred_5, mercury__version_hash_table__N_6, mercury__version_hash_table__MaxOccupancy_7, (MR_Integer) 0);
    }
#line 272 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__4_4;
#line 272 "version_hash_table.m"
  }
#line 66 "version_hash_table.m"
}

#line 53 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__new_3_f_0(
#line 53 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_9,
#line 53 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_10,
#line 53 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_5,
#line 53 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__N_6,
#line 53 "version_hash_table.m"
  MR_Float mercury__version_hash_table__MaxOccupancy_7)
#line 53 "version_hash_table.m"
{
#line 270 "version_hash_table.m"
  {
#line 270 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 270 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__4_4;

#line 270 "version_hash_table.m"
    {
#line 270 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_9, mercury__version_hash_table__TypeInfo_for_V_10, mercury__version_hash_table__HashPred_5, mercury__version_hash_table__N_6, mercury__version_hash_table__MaxOccupancy_7, (MR_Integer) 1);
    }
#line 270 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__4_4;
#line 270 "version_hash_table.m"
  }
#line 53 "version_hash_table.m"
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
#line 268 "version_hash_table.m"
  {
#line 268 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 268 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__4_4;

#line 268 "version_hash_table.m"
    {
#line 268 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_9, mercury__version_hash_table__TypeInfo_for_V_10, mercury__version_hash_table__HashPred_5, mercury__version_hash_table__N_6, mercury__version_hash_table__MaxOccupancy_7, (MR_Integer) 1);
    }
#line 268 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__4_4;
#line 268 "version_hash_table.m"
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
