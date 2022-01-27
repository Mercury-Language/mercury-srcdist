/*
** Automatically generated from `version_hash_table.m'
** by the Mercury compiler,
** version 13.05, configured for x86_64-apple-darwin12.3.0.
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

#line 83 "version_array.opt"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
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
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
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
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
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
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
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
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
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
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
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
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_6_p_in__version_array_0(
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
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
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
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
#line 61 "array.int"
  MR_Word mercury__version_hash_table__V_13_13,
#line 61 "array.int"
  MR_ArrayPtr mercury__version_hash_table__A_6_6,
#line 61 "array.int"
  MR_Integer mercury__version_hash_table__X_7_7);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 516 "version_hash_table.m"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(
#line 516 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_12,
#line 516 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL0_4,
#line 516 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 516 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__AL_6);

#line 398 "version_hash_table.m"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(
#line 398 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_14,
#line 398 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL0_5,
#line 398 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_6,
#line 398 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_7,
#line 398 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__AL_8);

#line 130 "list.int"
static void MR_CALL 
mercury__version_hash_table__foldl__ho16_4_p_in__list_0(
#line 130 "list.int"
  MR_Word mercury__version_hash_table__HeadVar__2_2,
#line 130 "list.int"
  MR_Integer mercury__version_hash_table__HeadVar__3_3,
#line 130 "list.int"
  MR_Integer * mercury__version_hash_table__HeadVar__4_4);

#line 612 "version_hash_table.m"
static void MR_CALL 
mercury__version_hash_table__reinsert_alist_5_p_0(
#line 612 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_20,
#line 612 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_21,
#line 612 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL_6,
#line 612 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_7,
#line 612 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumBuckets_8,
#line 612 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13,
#line 612 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Buckets_14);

#line 599 "version_hash_table.m"
static void MR_CALL 
mercury__version_hash_table__reinsert_bindings_6_p_0(
#line 599 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_20,
#line 599 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_21,
#line 599 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__I_7,
#line 599 "version_hash_table.m"
  MR_Box mercury__version_hash_table__OldBuckets_8,
#line 599 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_9,
#line 599 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumBuckets_10,
#line 599 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13,
#line 599 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Buckets_14);

#line 585 "version_hash_table.m"
static MR_Word MR_CALL 
mercury__version_hash_table__expand_4_f_0(
#line 585 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_21,
#line 585 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_22,
#line 585 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumOccupants_6,
#line 585 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__MaxOccupants0_7,
#line 585 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred0_8,
#line 585 "version_hash_table.m"
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



#line 920 "version_hash_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__version_hash_table__version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 929 "version_hash_table.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__version_hash_table__version_array__pti_version_array_1__pseudo_version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2 = {
  &mercury__version_array__version_array__type_ctor_info_version_array_1,
  {
    (MR_PseudoTypeInfo) &mercury__version_hash_table__version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
  }
};

#line 937 "version_hash_table.c"
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

#line 958 "version_hash_table.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__version_hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 968 "version_hash_table.c"
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

#line 989 "version_hash_table.c"
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

#line 1004 "version_hash_table.c"
static const MR_PseudoTypeInfo mercury__version_hash_table__version_hash_table__field_types_hash_table_alist_2_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 1010 "version_hash_table.c"
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

#line 1025 "version_hash_table.c"
static const MR_PseudoTypeInfo mercury__version_hash_table__version_hash_table__field_types_hash_table_alist_2_2[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &mercury__version_hash_table__version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
};

#line 1032 "version_hash_table.c"
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

#line 1047 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_0[1] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_0
};

#line 1052 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_1[1] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_1
};

#line 1057 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_hash_table_alist_2_2[1] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_2
};

#line 1062 "version_hash_table.c"
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

#line 1081 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_name_ordered_hash_table_alist_2[3] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_2,
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_0,
  &mercury__version_hash_table__version_hash_table__du_functor_desc_hash_table_alist_2_1
};

#line 1088 "version_hash_table.c"
static const MR_Integer mercury__version_hash_table__version_hash_table__functor_number_map_hash_table_alist_2[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1095 "version_hash_table.c"
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

#line 1116 "version_hash_table.c"
static const MR_PseudoTypeInfo mercury__version_hash_table__version_hash_table__field_types_version_hash_table_2_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__version_hash_table____vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__version_hash_table__version_array__pti_version_array_1__pseudo_version_hash_table__pti_hash_table_alist_2__pseudo_1__pseudo_2
};

#line 1124 "version_hash_table.c"
static const MR_ConstString mercury__version_hash_table__version_hash_table__field_names_version_hash_table_2_0[4] = {
  (MR_String) "num_occupants",
  (MR_String) "max_occupants",
  (MR_String) "hash_pred",
  (MR_String) "buckets"
};

#line 1132 "version_hash_table.c"
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

#line 1147 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_stag_ordered_version_hash_table_2_0[1] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_version_hash_table_2_0
};

#line 1152 "version_hash_table.c"
static const MR_DuPtagLayout mercury__version_hash_table__version_hash_table__du_ptag_ordered_version_hash_table_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__version_hash_table__version_hash_table__du_stag_ordered_version_hash_table_2_0
  }
};

#line 1161 "version_hash_table.c"
static const MR_DuFunctorDescPtr mercury__version_hash_table__version_hash_table__du_name_ordered_version_hash_table_2[1] = {
  &mercury__version_hash_table__version_hash_table__du_functor_desc_version_hash_table_2_0
};

#line 1166 "version_hash_table.c"
static const MR_Integer mercury__version_hash_table__version_hash_table__functor_number_map_version_hash_table_2[1] = {
  (MR_Integer) 0
};

#line 1171 "version_hash_table.c"
const MR_TypeCtorInfo_Struct mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 1192 "version_hash_table.c"
static MR_bool MR_CALL 
mercury__version_hash_table____Unify____buckets_2_0_10001(
#line 1195 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 1197 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 1199 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_3,
#line 1201 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4)
#line 1203 "version_hash_table.c"
{
#line 1205 "version_hash_table.c"
  {
#line 1207 "version_hash_table.c"
    MR_bool mercury__version_hash_table__succeeded;

#line 1210 "version_hash_table.c"
    {
#line 1212 "version_hash_table.c"
      mercury__version_hash_table__succeeded = mercury__version_hash_table____Unify____buckets_2_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), ((MR_Box) mercury__version_hash_table__wrapper_arg_3), ((MR_Box) mercury__version_hash_table__wrapper_arg_4));
    }
#line 1215 "version_hash_table.c"
    return mercury__version_hash_table__succeeded;
#line 1217 "version_hash_table.c"
  }
#line 1219 "version_hash_table.c"
}

#line 1222 "version_hash_table.c"
static void MR_CALL 
mercury__version_hash_table____Compare____buckets_2_0_10001(
#line 1225 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 1227 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 1229 "version_hash_table.c"
  MR_Box * mercury__version_hash_table__wrapper_arg_3,
#line 1231 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4,
#line 1233 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_5)
#line 1235 "version_hash_table.c"
{
#line 1237 "version_hash_table.c"
  {
#line 1239 "version_hash_table.c"
    MR_Word mercury__version_hash_table__conv0_HeadVar__1_1;

#line 1242 "version_hash_table.c"
    {
#line 1244 "version_hash_table.c"
      mercury__version_hash_table____Compare____buckets_2_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), &mercury__version_hash_table__conv0_HeadVar__1_1, ((MR_Box) mercury__version_hash_table__wrapper_arg_4), ((MR_Box) mercury__version_hash_table__wrapper_arg_5));
    }
#line 1247 "version_hash_table.c"
    *mercury__version_hash_table__wrapper_arg_3 = ((MR_Box) (mercury__version_hash_table__conv0_HeadVar__1_1));
#line 1249 "version_hash_table.c"
  }
#line 1251 "version_hash_table.c"
}

#line 1254 "version_hash_table.c"
static MR_bool MR_CALL 
mercury__version_hash_table____Unify____hash_pred_1_0_10001(
#line 1257 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 1259 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 1261 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_3)
#line 1263 "version_hash_table.c"
{
#line 1265 "version_hash_table.c"
  {
#line 1267 "version_hash_table.c"
    MR_bool mercury__version_hash_table__succeeded;

#line 1270 "version_hash_table.c"
    {
#line 1272 "version_hash_table.c"
      mercury__version_hash_table__succeeded = mercury__version_hash_table____Unify____hash_pred_1_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), ((MR_Word) mercury__version_hash_table__wrapper_arg_3));
    }
#line 1275 "version_hash_table.c"
    return mercury__version_hash_table__succeeded;
#line 1277 "version_hash_table.c"
  }
#line 1279 "version_hash_table.c"
}

#line 1282 "version_hash_table.c"
static void MR_CALL 
mercury__version_hash_table____Compare____hash_pred_1_0_10001(
#line 1285 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 1287 "version_hash_table.c"
  MR_Box * mercury__version_hash_table__wrapper_arg_2,
#line 1289 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_3,
#line 1291 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4)
#line 1293 "version_hash_table.c"
{
#line 1295 "version_hash_table.c"
  {
#line 1297 "version_hash_table.c"
    MR_Word mercury__version_hash_table__conv0_HeadVar__1_1;

#line 1300 "version_hash_table.c"
    {
#line 1302 "version_hash_table.c"
      mercury__version_hash_table____Compare____hash_pred_1_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), &mercury__version_hash_table__conv0_HeadVar__1_1, ((MR_Word) mercury__version_hash_table__wrapper_arg_3), ((MR_Word) mercury__version_hash_table__wrapper_arg_4));
    }
#line 1305 "version_hash_table.c"
    *mercury__version_hash_table__wrapper_arg_2 = ((MR_Box) (mercury__version_hash_table__conv0_HeadVar__1_1));
#line 1307 "version_hash_table.c"
  }
#line 1309 "version_hash_table.c"
}

#line 1312 "version_hash_table.c"
static MR_bool MR_CALL 
mercury__version_hash_table____Unify____hash_table_alist_2_0_10001(
#line 1315 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 1317 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 1319 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_3,
#line 1321 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4)
#line 1323 "version_hash_table.c"
{
#line 1325 "version_hash_table.c"
  {
#line 1327 "version_hash_table.c"
    MR_bool mercury__version_hash_table__succeeded;

#line 1330 "version_hash_table.c"
    {
#line 1332 "version_hash_table.c"
      mercury__version_hash_table__succeeded = mercury__version_hash_table____Unify____hash_table_alist_2_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), ((MR_Word) mercury__version_hash_table__wrapper_arg_3), ((MR_Word) mercury__version_hash_table__wrapper_arg_4));
    }
#line 1335 "version_hash_table.c"
    return mercury__version_hash_table__succeeded;
#line 1337 "version_hash_table.c"
  }
#line 1339 "version_hash_table.c"
}

#line 1342 "version_hash_table.c"
static void MR_CALL 
mercury__version_hash_table____Compare____hash_table_alist_2_0_10001(
#line 1345 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 1347 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 1349 "version_hash_table.c"
  MR_Box * mercury__version_hash_table__wrapper_arg_3,
#line 1351 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4,
#line 1353 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_5)
#line 1355 "version_hash_table.c"
{
#line 1357 "version_hash_table.c"
  {
#line 1359 "version_hash_table.c"
    MR_Word mercury__version_hash_table__conv0_HeadVar__1_1;

#line 1362 "version_hash_table.c"
    {
#line 1364 "version_hash_table.c"
      mercury__version_hash_table____Compare____hash_table_alist_2_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), &mercury__version_hash_table__conv0_HeadVar__1_1, ((MR_Word) mercury__version_hash_table__wrapper_arg_4), ((MR_Word) mercury__version_hash_table__wrapper_arg_5));
    }
#line 1367 "version_hash_table.c"
    *mercury__version_hash_table__wrapper_arg_3 = ((MR_Box) (mercury__version_hash_table__conv0_HeadVar__1_1));
#line 1369 "version_hash_table.c"
  }
#line 1371 "version_hash_table.c"
}

#line 1374 "version_hash_table.c"
static MR_bool MR_CALL 
mercury__version_hash_table____Unify____version_hash_table_2_0_10001(
#line 1377 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 1379 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 1381 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_3,
#line 1383 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4)
#line 1385 "version_hash_table.c"
{
#line 1387 "version_hash_table.c"
  {
#line 1389 "version_hash_table.c"
    MR_bool mercury__version_hash_table__succeeded;

#line 1392 "version_hash_table.c"
    {
#line 1394 "version_hash_table.c"
      mercury__version_hash_table__succeeded = mercury__version_hash_table____Unify____version_hash_table_2_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), ((MR_Word) mercury__version_hash_table__wrapper_arg_3), ((MR_Word) mercury__version_hash_table__wrapper_arg_4));
    }
#line 1397 "version_hash_table.c"
    return mercury__version_hash_table__succeeded;
#line 1399 "version_hash_table.c"
  }
#line 1401 "version_hash_table.c"
}

#line 1404 "version_hash_table.c"
static void MR_CALL 
mercury__version_hash_table____Compare____version_hash_table_2_0_10001(
#line 1407 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_1,
#line 1409 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_2,
#line 1411 "version_hash_table.c"
  MR_Box * mercury__version_hash_table__wrapper_arg_3,
#line 1413 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_4,
#line 1415 "version_hash_table.c"
  MR_Box mercury__version_hash_table__wrapper_arg_5)
#line 1417 "version_hash_table.c"
{
#line 1419 "version_hash_table.c"
  {
#line 1421 "version_hash_table.c"
    MR_Word mercury__version_hash_table__conv0_HeadVar__1_1;

#line 1424 "version_hash_table.c"
    {
#line 1426 "version_hash_table.c"
      mercury__version_hash_table____Compare____version_hash_table_2_0(((MR_Word) mercury__version_hash_table__wrapper_arg_1), ((MR_Word) mercury__version_hash_table__wrapper_arg_2), &mercury__version_hash_table__conv0_HeadVar__1_1, ((MR_Word) mercury__version_hash_table__wrapper_arg_4), ((MR_Word) mercury__version_hash_table__wrapper_arg_5));
    }
#line 1429 "version_hash_table.c"
    *mercury__version_hash_table__wrapper_arg_3 = ((MR_Box) (mercury__version_hash_table__conv0_HeadVar__1_1));
#line 1431 "version_hash_table.c"
  }
#line 1433 "version_hash_table.c"
}

#line 83 "version_array.opt"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
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
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
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
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
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
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
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
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
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
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(
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
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_6_p_in__version_array_0(
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
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
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
#define MR_PROC_LABEL mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__version_hash_table__A_8_8 , Array);
	Index =  mercury__version_hash_table__I_10_10 ;
		{
#line 276 "array.opt"

    Item = Array->elements[Index];

#line 2316 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_13_15  = (MR_Box) Item;
#line 276 "array.opt"
}
#line 730 "version_hash_table.m"
            {
#line 730 "version_hash_table.m"
              mercury__version_hash_table__generic_hash_2_p_0(mercury__version_hash_table__V_19_19, mercury__version_hash_table__V_13_15, &mercury__version_hash_table__HX_36);
            }
#line 757 "version_hash_table.m"
            mercury__version_hash_table__V_70_70 = (mercury__version_hash_table__X_9_9 << mercury__version_hash_table__HX_36);
#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 2341 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_73_73  = Bits;
#line 171 "int.opt"
}
#line 758 "version_hash_table.m"
            mercury__version_hash_table__V_72_72 = (mercury__version_hash_table__V_73_73 - mercury__version_hash_table__HX_36);
#line 757 "version_hash_table.m"
            mercury__version_hash_table__V_71_71 = (mercury__version_hash_table__X_9_9 >> mercury__version_hash_table__V_72_72);
#line 756 "version_hash_table.m"
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
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
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
#define MR_PROC_LABEL mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__version_hash_table__A_6_6 , Array);
		{
#line 239 "array.opt"

    /* Array not used */
    Min = 0;

#line 2426 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_8_9  = Min;
#line 239 "array.opt"
}
#line 247 "array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__version_hash_table__A_6_6 , Array);
		{
#line 247 "array.opt"

    Max = Array->size - 1;

#line 2446 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_9_10  = Max;
#line 247 "array.opt"
}
#line 394 "array.opt"
    {
#line 394 "array.opt"
      return mercury__version_hash_table__HeadVar__4_4_8 = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_108_95_102_117_110_99_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(mercury__version_hash_table__V_13_13, mercury__version_hash_table__A_6_6, mercury__version_hash_table__X_7_7, mercury__version_hash_table__V_8_9, mercury__version_hash_table__V_9_10);
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

#line 516 "version_hash_table.m"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(
#line 516 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_12,
#line 516 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL0_4,
#line 516 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 516 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__AL_6)
#line 516 "version_hash_table.m"
{
#line 524 "version_hash_table.m"
  {
#line 524 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 524 "version_hash_table.m"
    if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_4)) == (MR_mktag((MR_Integer) 2))))
#line 529 "version_hash_table.m"
      {
#line 529 "version_hash_table.m"
        MR_Box mercury__version_hash_table__K0_8 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_4, (MR_Integer) 0));
#line 529 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V0_9 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_4, (MR_Integer) 1));
#line 529 "version_hash_table.m"
        MR_Word mercury__version_hash_table__T0_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_4, (MR_Integer) 2)));

#line 530 "version_hash_table.m"
        {
#line 530 "version_hash_table.m"
          mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_12, mercury__version_hash_table__K0_8, mercury__version_hash_table__K_5);
        }
#line 532 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 531 "version_hash_table.m"
          {
#line 531 "version_hash_table.m"
            *mercury__version_hash_table__AL_6 = mercury__version_hash_table__T0_10;
#line 531 "version_hash_table.m"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 531 "version_hash_table.m"
          }
#line 532 "version_hash_table.m"
        else
#line 533 "version_hash_table.m"
          {
#line 533 "version_hash_table.m"
            MR_Word mercury__version_hash_table__T_11;

#line 533 "version_hash_table.m"
            {
#line 533 "version_hash_table.m"
              mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(mercury__version_hash_table__TypeInfo_for_K_12, mercury__version_hash_table__T0_10, mercury__version_hash_table__K_5, &mercury__version_hash_table__T_11);
            }
#line 533 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 533 "version_hash_table.m"
              {
#line 534 "version_hash_table.m"
                {
#line 534 "version_hash_table.m"
                  MR_Word base;
#line 534 "version_hash_table.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 534 "version_hash_table.m"
                  *mercury__version_hash_table__AL_6 = base;
#line 534 "version_hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__version_hash_table__K0_8;
#line 534 "version_hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__version_hash_table__V0_9;
#line 534 "version_hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__version_hash_table__T_11));
#line 534 "version_hash_table.m"
                }
#line 534 "version_hash_table.m"
                mercury__version_hash_table__succeeded = MR_TRUE;
#line 533 "version_hash_table.m"
              }
#line 533 "version_hash_table.m"
          }
#line 529 "version_hash_table.m"
      }
#line 524 "version_hash_table.m"
    else
#line 524 "version_hash_table.m"
      if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_4)) == (MR_mktag((MR_Integer) 1))))
#line 525 "version_hash_table.m"
        {
#line 525 "version_hash_table.m"
          MR_Box mercury__version_hash_table__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_4, (MR_Integer) 0));
#line 525 "version_hash_table.m"
          MR_Box mercury__version_hash_table__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_4, (MR_Integer) 1));

#line 525 "version_hash_table.m"
          {
#line 525 "version_hash_table.m"
            mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_12, mercury__version_hash_table__K_5, mercury__version_hash_table__V_14_14);
          }
#line 525 "version_hash_table.m"
          if (mercury__version_hash_table__succeeded)
#line 525 "version_hash_table.m"
            {
#line 527 "version_hash_table.m"
              *mercury__version_hash_table__AL_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 527 "version_hash_table.m"
              mercury__version_hash_table__succeeded = MR_TRUE;
#line 525 "version_hash_table.m"
            }
#line 525 "version_hash_table.m"
        }
#line 524 "version_hash_table.m"
      else
#line 524 "version_hash_table.m"
        mercury__version_hash_table__succeeded = MR_FALSE;
#line 524 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 524 "version_hash_table.m"
  }
#line 516 "version_hash_table.m"
}

#line 398 "version_hash_table.m"
static MR_bool MR_CALL 
mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(
#line 398 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_14,
#line 398 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL0_5,
#line 398 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_6,
#line 398 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_7,
#line 398 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__AL_8)
#line 398 "version_hash_table.m"
{
#line 406 "version_hash_table.m"
  {
#line 406 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 406 "version_hash_table.m"
    if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_5)) == (MR_mktag((MR_Integer) 2))))
#line 410 "version_hash_table.m"
      {
#line 410 "version_hash_table.m"
        MR_Box mercury__version_hash_table__K0_10 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_5, (MR_Integer) 0));
#line 410 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V0_11 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_5, (MR_Integer) 1));
#line 410 "version_hash_table.m"
        MR_Word mercury__version_hash_table__T0_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL0_5, (MR_Integer) 2)));

#line 411 "version_hash_table.m"
        {
#line 411 "version_hash_table.m"
          mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_14, mercury__version_hash_table__K0_10, mercury__version_hash_table__K_6);
        }
#line 413 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 412 "version_hash_table.m"
          {
#line 412 "version_hash_table.m"
            {
#line 412 "version_hash_table.m"
              MR_Word base;
#line 412 "version_hash_table.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 412 "version_hash_table.m"
              *mercury__version_hash_table__AL_8 = base;
#line 412 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), base, 0) = mercury__version_hash_table__K0_10;
#line 412 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), base, 1) = mercury__version_hash_table__V_7;
#line 412 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__version_hash_table__T0_12));
#line 412 "version_hash_table.m"
            }
#line 412 "version_hash_table.m"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 412 "version_hash_table.m"
          }
#line 413 "version_hash_table.m"
        else
#line 414 "version_hash_table.m"
          {
#line 414 "version_hash_table.m"
            MR_Word mercury__version_hash_table__T_13;

#line 414 "version_hash_table.m"
            {
#line 414 "version_hash_table.m"
              mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(mercury__version_hash_table__TypeInfo_for_K_14, mercury__version_hash_table__T0_12, mercury__version_hash_table__K_6, mercury__version_hash_table__V_7, &mercury__version_hash_table__T_13);
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
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 415 "version_hash_table.m"
                  *mercury__version_hash_table__AL_8 = base;
#line 415 "version_hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__version_hash_table__K0_10;
#line 415 "version_hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__version_hash_table__V0_11;
#line 415 "version_hash_table.m"
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__version_hash_table__T_13));
#line 415 "version_hash_table.m"
                }
#line 415 "version_hash_table.m"
                mercury__version_hash_table__succeeded = MR_TRUE;
#line 414 "version_hash_table.m"
              }
#line 414 "version_hash_table.m"
          }
#line 410 "version_hash_table.m"
      }
#line 406 "version_hash_table.m"
    else
#line 406 "version_hash_table.m"
      if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_5)) == (MR_mktag((MR_Integer) 1))))
#line 407 "version_hash_table.m"
        {
#line 407 "version_hash_table.m"
          MR_Box mercury__version_hash_table__V_16_16 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_5, (MR_Integer) 0));
#line 407 "version_hash_table.m"
          MR_Box mercury__version_hash_table__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_5, (MR_Integer) 1));

#line 407 "version_hash_table.m"
          {
#line 407 "version_hash_table.m"
            mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_14, mercury__version_hash_table__K_6, mercury__version_hash_table__V_16_16);
          }
#line 407 "version_hash_table.m"
          if (mercury__version_hash_table__succeeded)
#line 407 "version_hash_table.m"
            {
#line 408 "version_hash_table.m"
              {
#line 408 "version_hash_table.m"
                MR_Word base;
#line 408 "version_hash_table.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "version_hash_table.m"
                *mercury__version_hash_table__AL_8 = base;
#line 408 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), base, 0) = mercury__version_hash_table__K_6;
#line 408 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), base, 1) = mercury__version_hash_table__V_7;
#line 408 "version_hash_table.m"
              }
#line 408 "version_hash_table.m"
              mercury__version_hash_table__succeeded = MR_TRUE;
#line 407 "version_hash_table.m"
            }
#line 407 "version_hash_table.m"
        }
#line 406 "version_hash_table.m"
      else
#line 406 "version_hash_table.m"
        mercury__version_hash_table__succeeded = MR_FALSE;
#line 406 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 406 "version_hash_table.m"
  }
#line 398 "version_hash_table.m"
}

#line 130 "list.int"
static void MR_CALL 
mercury__version_hash_table__foldl__ho16_4_p_in__list_0(
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

#line 744 "version_hash_table.m"
            {
#line 744 "version_hash_table.m"
              mercury__version_hash_table__generic_hash_2_p_0(mercury__version_hash_table__TypeCtorInfo_47_59, ((MR_Box) (mercury__version_hash_table__H_10_9)), &mercury__version_hash_table__HUA_36);
            }
#line 757 "version_hash_table.m"
            mercury__version_hash_table__V_64_64 = (mercury__version_hash_table__HeadVar__3_3 << mercury__version_hash_table__HUA_36);
#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__foldl__ho16_4_p_in__list_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 2823 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_67_67  = Bits;
#line 171 "int.opt"
}
#line 758 "version_hash_table.m"
            mercury__version_hash_table__V_66_66 = (mercury__version_hash_table__V_67_67 - mercury__version_hash_table__HUA_36);
#line 757 "version_hash_table.m"
            mercury__version_hash_table__V_65_65 = (mercury__version_hash_table__HeadVar__3_3 >> mercury__version_hash_table__V_66_66);
#line 756 "version_hash_table.m"
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

#line 234 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table____Compare____version_hash_table_2_0(
#line 234 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_17,
#line 234 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_18,
#line 234 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__1_1,
#line 234 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__2_2,
#line 234 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__3_3)
#line 234 "version_hash_table.m"
{
#line 234 "version_hash_table.m"
  {
#line 234 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 234 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__CastX_15 = (MR_Integer) mercury__version_hash_table__HeadVar__2_2;
#line 234 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__CastY_16 = (MR_Integer) mercury__version_hash_table__HeadVar__3_3;

#line 234 "version_hash_table.m"
    mercury__version_hash_table__succeeded = (mercury__version_hash_table__CastX_15 == mercury__version_hash_table__CastY_16);
#line 234 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 2892 "version_hash_table.c"
      *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 0;
#line 234 "version_hash_table.m"
    else
#line 234 "version_hash_table.m"
      {
#line 234 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0)));
#line 234 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1)));
#line 234 "version_hash_table.m"
        MR_Word mercury__version_hash_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 2)));
#line 234 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 3)));
#line 234 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 0)));
#line 234 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 1)));
#line 234 "version_hash_table.m"
        MR_Word mercury__version_hash_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 2)));
#line 234 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V_11_11 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 3)));
#line 234 "version_hash_table.m"
        MR_Word mercury__version_hash_table__V_12_12;

#line 66 "private_builtin.opt"
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_4_4 < mercury__version_hash_table__V_8_8);
#line 69 "private_builtin.opt"
        if (mercury__version_hash_table__succeeded)
#line 68 "private_builtin.opt"
          mercury__version_hash_table__V_12_12 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_4_4 == mercury__version_hash_table__V_8_8);
#line 74 "private_builtin.opt"
            if (mercury__version_hash_table__succeeded)
#line 73 "private_builtin.opt"
              mercury__version_hash_table__V_12_12 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__version_hash_table__V_12_12 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 2939 "version_hash_table.c"
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_12_12 == (MR_Integer) 0);
#line 234 "version_hash_table.m"
        mercury__version_hash_table__succeeded = !(mercury__version_hash_table__succeeded);
#line 234 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 234 "version_hash_table.m"
          *mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__V_12_12;
#line 234 "version_hash_table.m"
        else
#line 234 "version_hash_table.m"
          {
#line 234 "version_hash_table.m"
            MR_Word mercury__version_hash_table__V_13_13;

#line 66 "private_builtin.opt"
            mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_5_5 < mercury__version_hash_table__V_9_9);
#line 69 "private_builtin.opt"
            if (mercury__version_hash_table__succeeded)
#line 68 "private_builtin.opt"
              mercury__version_hash_table__V_13_13 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_5_5 == mercury__version_hash_table__V_9_9);
#line 74 "private_builtin.opt"
                if (mercury__version_hash_table__succeeded)
#line 73 "private_builtin.opt"
                  mercury__version_hash_table__V_13_13 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  mercury__version_hash_table__V_13_13 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 2976 "version_hash_table.c"
            mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_13_13 == (MR_Integer) 0);
#line 234 "version_hash_table.m"
            mercury__version_hash_table__succeeded = !(mercury__version_hash_table__succeeded);
#line 234 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 234 "version_hash_table.m"
              *mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__V_13_13;
#line 234 "version_hash_table.m"
            else
#line 234 "version_hash_table.m"
              {
#line 234 "version_hash_table.m"
                MR_Word mercury__version_hash_table__V_14_14;

#line 234 "version_hash_table.m"
                {
#line 234 "version_hash_table.m"
                  mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__version_hash_table__V_14_14, (MR_Word) mercury__version_hash_table__V_6_6, (MR_Word) mercury__version_hash_table__V_10_10);
                }
#line 2996 "version_hash_table.c"
                mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_14_14 == (MR_Integer) 0);
#line 234 "version_hash_table.m"
                mercury__version_hash_table__succeeded = !(mercury__version_hash_table__succeeded);
#line 234 "version_hash_table.m"
                if (mercury__version_hash_table__succeeded)
#line 234 "version_hash_table.m"
                  *mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__V_14_14;
#line 234 "version_hash_table.m"
                else
#line 234 "version_hash_table.m"
                  {
#line 234 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__TypeCtorInfo_25_25 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 234 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__TypeInfo_26_26;

#line 3013 "version_hash_table.c"
                    {
#line 3015 "version_hash_table.c"
                      mercury__version_hash_table__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3017 "version_hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_26_26, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_25_25));
#line 3019 "version_hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_26_26, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_17));
#line 3021 "version_hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_26_26, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_18));
#line 3023 "version_hash_table.c"
                    }
#line 234 "version_hash_table.m"
                    {
#line 234 "version_hash_table.m"
                      mercury__version_array____Compare____version_array_1_0(mercury__version_hash_table__TypeInfo_26_26, mercury__version_hash_table__HeadVar__1_1, (MR_Box) mercury__version_hash_table__V_7_7, (MR_Box) mercury__version_hash_table__V_11_11);
#line 234 "version_hash_table.m"
                      return;
                    }
#line 234 "version_hash_table.m"
                  }
#line 234 "version_hash_table.m"
              }
#line 234 "version_hash_table.m"
          }
#line 234 "version_hash_table.m"
      }
#line 234 "version_hash_table.m"
  }
#line 234 "version_hash_table.m"
}

#line 234 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table____Unify____version_hash_table_2_0(
#line 234 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_13,
#line 234 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_14,
#line 234 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__1_1,
#line 234 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__2_2)
#line 234 "version_hash_table.m"
{
#line 234 "version_hash_table.m"
  {
#line 234 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 234 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__CastX_11 = (MR_Integer) mercury__version_hash_table__HeadVar__1_1;
#line 234 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__CastY_12 = (MR_Integer) mercury__version_hash_table__HeadVar__2_2;

#line 234 "version_hash_table.m"
    mercury__version_hash_table__succeeded = (mercury__version_hash_table__CastX_11 == mercury__version_hash_table__CastY_12);
#line 234 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 234 "version_hash_table.m"
      mercury__version_hash_table__succeeded = MR_TRUE;
#line 234 "version_hash_table.m"
    else
#line 234 "version_hash_table.m"
      {
#line 234 "version_hash_table.m"
        MR_Word mercury__version_hash_table__TypeCtorInfo_15_15;
#line 234 "version_hash_table.m"
        MR_Word mercury__version_hash_table__TypeInfo_16_16;
#line 234 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 0)));
#line 234 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 1)));
#line 234 "version_hash_table.m"
        MR_Word mercury__version_hash_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 2)));
#line 234 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V_6_6 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 3)));
#line 234 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0)));
#line 234 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1)));
#line 234 "version_hash_table.m"
        MR_Word mercury__version_hash_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 2)));
#line 234 "version_hash_table.m"
        MR_Box mercury__version_hash_table__V_10_10 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 3)));

#line 3098 "version_hash_table.c"
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_3_3 == mercury__version_hash_table__V_7_7);
#line 234 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 234 "version_hash_table.m"
          {
#line 3104 "version_hash_table.c"
            mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_4_4 == mercury__version_hash_table__V_8_8);
#line 234 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 234 "version_hash_table.m"
              {
#line 3110 "version_hash_table.c"
                {
#line 3112 "version_hash_table.c"
                  mercury__version_hash_table__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__version_hash_table__V_5_5, (MR_Word) mercury__version_hash_table__V_9_9);
                }
#line 234 "version_hash_table.m"
                if (mercury__version_hash_table__succeeded)
#line 234 "version_hash_table.m"
                  {
#line 3119 "version_hash_table.c"
                    mercury__version_hash_table__TypeCtorInfo_15_15 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 3121 "version_hash_table.c"
                    {
#line 3123 "version_hash_table.c"
                      mercury__version_hash_table__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3125 "version_hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_16_16, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_15_15));
#line 3127 "version_hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_16_16, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_13));
#line 3129 "version_hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_16_16, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_14));
#line 3131 "version_hash_table.c"
                    }
#line 3133 "version_hash_table.c"
                    {
#line 3135 "version_hash_table.c"
                      return mercury__version_hash_table__succeeded = mercury__version_array____Unify____version_array_1_0(mercury__version_hash_table__TypeInfo_16_16, (MR_Box) mercury__version_hash_table__V_6_6, (MR_Box) mercury__version_hash_table__V_10_10);
                    }
#line 234 "version_hash_table.m"
                  }
#line 234 "version_hash_table.m"
              }
#line 234 "version_hash_table.m"
          }
#line 234 "version_hash_table.m"
      }
#line 234 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 234 "version_hash_table.m"
  }
#line 234 "version_hash_table.m"
}

#line 248 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table____Compare____hash_table_alist_2_0(
#line 248 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_39,
#line 248 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_40,
#line 248 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__1_1,
#line 248 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__2_2,
#line 248 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__3_3)
#line 248 "version_hash_table.m"
{
#line 248 "version_hash_table.m"
  while (MR_TRUE)
#line 248 "version_hash_table.m"
    {
#line 248 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 248 "version_hash_table.m"
      {
#line 248 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;
#line 248 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__CastX_37 = (MR_Integer) mercury__version_hash_table__HeadVar__2_2;
#line 248 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__CastY_38 = (MR_Integer) mercury__version_hash_table__HeadVar__3_3;

#line 248 "version_hash_table.m"
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__CastX_37 == mercury__version_hash_table__CastY_38);
#line 248 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 3187 "version_hash_table.c"
          *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 0;
#line 248 "version_hash_table.m"
        else
#line 248 "version_hash_table.m"
          if ((mercury__version_hash_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 248 "version_hash_table.m"
            if ((mercury__version_hash_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 248 "version_hash_table.m"
              *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 0;
#line 248 "version_hash_table.m"
            else
#line 248 "version_hash_table.m"
              if (((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3201 "version_hash_table.c"
                *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "version_hash_table.m"
              else
#line 3205 "version_hash_table.c"
                *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "version_hash_table.m"
          else
#line 248 "version_hash_table.m"
            if (((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 248 "version_hash_table.m"
              {
#line 248 "version_hash_table.m"
                MR_Word mercury__version_hash_table__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 2)));
#line 248 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_44_44 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 248 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_45_45 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0));

#line 248 "version_hash_table.m"
                if ((mercury__version_hash_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3222 "version_hash_table.c"
                  *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "version_hash_table.m"
                else
#line 248 "version_hash_table.m"
                  if (((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 248 "version_hash_table.m"
                    {
#line 248 "version_hash_table.m"
                      MR_Box mercury__version_hash_table__V_32_32 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 0));
#line 248 "version_hash_table.m"
                      MR_Box mercury__version_hash_table__V_33_33 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 1));
#line 248 "version_hash_table.m"
                      MR_Word mercury__version_hash_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 2)));
#line 248 "version_hash_table.m"
                      MR_Word mercury__version_hash_table__V_35_35;

#line 248 "version_hash_table.m"
                      {
#line 248 "version_hash_table.m"
                        mercury__builtin__compare_3_p_0(mercury__version_hash_table__TypeInfo_for_K_39, &mercury__version_hash_table__V_35_35, mercury__version_hash_table__V_45_45, mercury__version_hash_table__V_32_32);
                      }
#line 3244 "version_hash_table.c"
                      mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_35_35 == (MR_Integer) 0);
#line 248 "version_hash_table.m"
                      mercury__version_hash_table__succeeded = !(mercury__version_hash_table__succeeded);
#line 248 "version_hash_table.m"
                      if (mercury__version_hash_table__succeeded)
#line 248 "version_hash_table.m"
                        *mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__V_35_35;
#line 248 "version_hash_table.m"
                      else
#line 248 "version_hash_table.m"
                        {
#line 248 "version_hash_table.m"
                          MR_Word mercury__version_hash_table__V_36_36;

#line 248 "version_hash_table.m"
                          {
#line 248 "version_hash_table.m"
                            mercury__builtin__compare_3_p_0(mercury__version_hash_table__TypeInfo_for_V_40, &mercury__version_hash_table__V_36_36, mercury__version_hash_table__V_44_44, mercury__version_hash_table__V_33_33);
                          }
#line 3264 "version_hash_table.c"
                          mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_36_36 == (MR_Integer) 0);
#line 248 "version_hash_table.m"
                          mercury__version_hash_table__succeeded = !(mercury__version_hash_table__succeeded);
#line 248 "version_hash_table.m"
                          if (mercury__version_hash_table__succeeded)
#line 248 "version_hash_table.m"
                            *mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__V_36_36;
#line 248 "version_hash_table.m"
                          else
#line 248 "version_hash_table.m"
                            {
#line 248 "version_hash_table.m"
                              /* direct tailcall eliminated */
#line 248 "version_hash_table.m"
                              {
#line 248 "version_hash_table.m"
                                MR_Word mercury__version_hash_table__HeadVar__2__tmp_copy_2 = mercury__version_hash_table__V_43_43;
#line 248 "version_hash_table.m"
                                MR_Word mercury__version_hash_table__HeadVar__3__tmp_copy_3 = mercury__version_hash_table__V_34_34;

#line 248 "version_hash_table.m"
                                mercury__version_hash_table__HeadVar__3_3 = mercury__version_hash_table__HeadVar__3__tmp_copy_3;
#line 248 "version_hash_table.m"
                                mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__HeadVar__2__tmp_copy_2;
#line 248 "version_hash_table.m"
                              }
#line 248 "version_hash_table.m"
                              continue;
#line 248 "version_hash_table.m"
                            }
#line 248 "version_hash_table.m"
                        }
#line 248 "version_hash_table.m"
                    }
#line 248 "version_hash_table.m"
                  else
#line 3301 "version_hash_table.c"
                    *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "version_hash_table.m"
              }
#line 248 "version_hash_table.m"
            else
#line 248 "version_hash_table.m"
              {
#line 248 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_46_46 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 248 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_47_47 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0));

#line 248 "version_hash_table.m"
                if ((mercury__version_hash_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3316 "version_hash_table.c"
                  *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "version_hash_table.m"
                else
#line 248 "version_hash_table.m"
                  if (((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3322 "version_hash_table.c"
                    *mercury__version_hash_table__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "version_hash_table.m"
                  else
#line 248 "version_hash_table.m"
                    {
#line 248 "version_hash_table.m"
                      MR_Box mercury__version_hash_table__V_13_13 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 0));
#line 248 "version_hash_table.m"
                      MR_Box mercury__version_hash_table__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__3_3, (MR_Integer) 1));
#line 248 "version_hash_table.m"
                      MR_Word mercury__version_hash_table__V_15_15;

#line 248 "version_hash_table.m"
                      {
#line 248 "version_hash_table.m"
                        mercury__builtin__compare_3_p_0(mercury__version_hash_table__TypeInfo_for_K_39, &mercury__version_hash_table__V_15_15, mercury__version_hash_table__V_47_47, mercury__version_hash_table__V_13_13);
                      }
#line 3340 "version_hash_table.c"
                      mercury__version_hash_table__succeeded = (mercury__version_hash_table__V_15_15 == (MR_Integer) 0);
#line 248 "version_hash_table.m"
                      mercury__version_hash_table__succeeded = !(mercury__version_hash_table__succeeded);
#line 248 "version_hash_table.m"
                      if (mercury__version_hash_table__succeeded)
#line 248 "version_hash_table.m"
                        *mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__V_15_15;
#line 248 "version_hash_table.m"
                      else
#line 248 "version_hash_table.m"
                        {
#line 248 "version_hash_table.m"
                          mercury__builtin__compare_3_p_0(mercury__version_hash_table__TypeInfo_for_V_40, mercury__version_hash_table__HeadVar__1_1, mercury__version_hash_table__V_46_46, mercury__version_hash_table__V_14_14);
#line 248 "version_hash_table.m"
                          return;
                        }
#line 248 "version_hash_table.m"
                    }
#line 248 "version_hash_table.m"
              }
#line 248 "version_hash_table.m"
      }
#line 248 "version_hash_table.m"
      break;
#line 248 "version_hash_table.m"
    }
#line 248 "version_hash_table.m"
}

#line 248 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table____Unify____hash_table_alist_2_0(
#line 248 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_17,
#line 248 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_18,
#line 248 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__1_1,
#line 248 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__2_2)
#line 248 "version_hash_table.m"
{
#line 248 "version_hash_table.m"
  while (MR_TRUE)
#line 248 "version_hash_table.m"
    {
#line 248 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 248 "version_hash_table.m"
      {
#line 248 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;
#line 248 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__CastX_15 = (MR_Integer) mercury__version_hash_table__HeadVar__1_1;
#line 248 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__CastY_16 = (MR_Integer) mercury__version_hash_table__HeadVar__2_2;

#line 248 "version_hash_table.m"
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__CastX_15 == mercury__version_hash_table__CastY_16);
#line 248 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 248 "version_hash_table.m"
          mercury__version_hash_table__succeeded = MR_TRUE;
#line 248 "version_hash_table.m"
        else
#line 248 "version_hash_table.m"
          if ((mercury__version_hash_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 248 "version_hash_table.m"
            {
#line 248 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__CastX_3 = (MR_Integer) mercury__version_hash_table__HeadVar__1_1;
#line 248 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__CastY_4 = (MR_Integer) mercury__version_hash_table__HeadVar__2_2;

#line 248 "version_hash_table.m"
              mercury__version_hash_table__succeeded = (mercury__version_hash_table__CastY_4 == mercury__version_hash_table__CastX_3);
#line 248 "version_hash_table.m"
            }
#line 248 "version_hash_table.m"
          else
#line 248 "version_hash_table.m"
            if (((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 248 "version_hash_table.m"
              {
#line 248 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_9_9 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 0));
#line 248 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_10_10 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 1));
#line 248 "version_hash_table.m"
                MR_Word mercury__version_hash_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 2)));
#line 248 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_12_12;
#line 248 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_13_13;
#line 248 "version_hash_table.m"
                MR_Word mercury__version_hash_table__V_14_14;

#line 248 "version_hash_table.m"
                mercury__version_hash_table__succeeded = ((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 248 "version_hash_table.m"
                if (mercury__version_hash_table__succeeded)
#line 248 "version_hash_table.m"
                  {
#line 248 "version_hash_table.m"
                    mercury__version_hash_table__V_12_12 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0));
#line 248 "version_hash_table.m"
                    mercury__version_hash_table__V_13_13 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 248 "version_hash_table.m"
                    mercury__version_hash_table__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 2)));
#line 3450 "version_hash_table.c"
                    {
#line 3452 "version_hash_table.c"
                      mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_17, mercury__version_hash_table__V_9_9, mercury__version_hash_table__V_12_12);
                    }
#line 248 "version_hash_table.m"
                    if (mercury__version_hash_table__succeeded)
#line 248 "version_hash_table.m"
                      {
#line 3459 "version_hash_table.c"
                        {
#line 3461 "version_hash_table.c"
                          mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_V_18, mercury__version_hash_table__V_10_10, mercury__version_hash_table__V_13_13);
                        }
#line 248 "version_hash_table.m"
                        if (mercury__version_hash_table__succeeded)
#line 3466 "version_hash_table.c"
                          {
#line 3468 "version_hash_table.c"
                            /* direct tailcall eliminated */
#line 3470 "version_hash_table.c"
                            {
#line 3472 "version_hash_table.c"
                              MR_Word mercury__version_hash_table__HeadVar__1__tmp_copy_1 = mercury__version_hash_table__V_11_11;
#line 3474 "version_hash_table.c"
                              MR_Word mercury__version_hash_table__HeadVar__2__tmp_copy_2 = mercury__version_hash_table__V_14_14;

#line 3477 "version_hash_table.c"
                              mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__HeadVar__2__tmp_copy_2;
#line 3479 "version_hash_table.c"
                              mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__HeadVar__1__tmp_copy_1;
#line 3481 "version_hash_table.c"
                            }
#line 3483 "version_hash_table.c"
                            continue;
#line 3485 "version_hash_table.c"
                          }
#line 248 "version_hash_table.m"
                      }
#line 248 "version_hash_table.m"
                  }
#line 248 "version_hash_table.m"
              }
#line 248 "version_hash_table.m"
            else
#line 248 "version_hash_table.m"
              {
#line 248 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 0));
#line 248 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 1));
#line 248 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_7_7;
#line 248 "version_hash_table.m"
                MR_Box mercury__version_hash_table__V_8_8;

#line 248 "version_hash_table.m"
                mercury__version_hash_table__succeeded = ((MR_tag((MR_Word) mercury__version_hash_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 248 "version_hash_table.m"
                if (mercury__version_hash_table__succeeded)
#line 248 "version_hash_table.m"
                  {
#line 248 "version_hash_table.m"
                    mercury__version_hash_table__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 0));
#line 248 "version_hash_table.m"
                    mercury__version_hash_table__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__2_2, (MR_Integer) 1));
#line 3516 "version_hash_table.c"
                    {
#line 3518 "version_hash_table.c"
                      mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_17, mercury__version_hash_table__V_5_5, mercury__version_hash_table__V_7_7);
                    }
#line 248 "version_hash_table.m"
                    if (mercury__version_hash_table__succeeded)
#line 3523 "version_hash_table.c"
                      {
#line 3525 "version_hash_table.c"
                        return mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_V_18, mercury__version_hash_table__V_6_6, mercury__version_hash_table__V_8_8);
                      }
#line 248 "version_hash_table.m"
                  }
#line 248 "version_hash_table.m"
              }
#line 248 "version_hash_table.m"
        return mercury__version_hash_table__succeeded;
#line 248 "version_hash_table.m"
      }
#line 248 "version_hash_table.m"
      break;
#line 248 "version_hash_table.m"
    }
#line 248 "version_hash_table.m"
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

#line 242 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table____Compare____buckets_2_0(
#line 242 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_6,
#line 242 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_7,
#line 242 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__1_1,
#line 242 "version_hash_table.m"
  MR_Box mercury__version_hash_table__HeadVar__2_2,
#line 242 "version_hash_table.m"
  MR_Box mercury__version_hash_table__HeadVar__3_3)
#line 242 "version_hash_table.m"
{
#line 242 "version_hash_table.m"
  {
#line 242 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 242 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_8_8 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 242 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_9_9;
#line 242 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Cast_HeadVar1_4 = mercury__version_hash_table__HeadVar__2_2;
#line 242 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Cast_HeadVar2_5 = mercury__version_hash_table__HeadVar__3_3;

#line 3637 "version_hash_table.c"
    {
#line 3639 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3641 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_9_9, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_8_8));
#line 3643 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_9_9, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_6));
#line 3645 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_9_9, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_7));
#line 3647 "version_hash_table.c"
    }
#line 242 "version_hash_table.m"
    {
#line 242 "version_hash_table.m"
      mercury__version_array____Compare____version_array_1_0(mercury__version_hash_table__TypeInfo_9_9, mercury__version_hash_table__HeadVar__1_1, (MR_Box) mercury__version_hash_table__Cast_HeadVar1_4, (MR_Box) mercury__version_hash_table__Cast_HeadVar2_5);
#line 242 "version_hash_table.m"
      return;
    }
#line 242 "version_hash_table.m"
  }
#line 242 "version_hash_table.m"
}

#line 242 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table____Unify____buckets_2_0(
#line 242 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_5,
#line 242 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_6,
#line 242 "version_hash_table.m"
  MR_Box mercury__version_hash_table__HeadVar__1_1,
#line 242 "version_hash_table.m"
  MR_Box mercury__version_hash_table__HeadVar__2_2)
#line 242 "version_hash_table.m"
{
#line 242 "version_hash_table.m"
  {
#line 242 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 242 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_7_7 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 242 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_8_8;
#line 242 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Cast_HeadVar1_3 = mercury__version_hash_table__HeadVar__1_1;
#line 242 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Cast_HeadVar2_4 = mercury__version_hash_table__HeadVar__2_2;

#line 3687 "version_hash_table.c"
    {
#line 3689 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3691 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_8_8, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_7_7));
#line 3693 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_8_8, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_5));
#line 3695 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_8_8, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_6));
#line 3697 "version_hash_table.c"
    }
#line 242 "version_hash_table.m"
    {
#line 242 "version_hash_table.m"
      return mercury__version_hash_table__succeeded = mercury__version_array____Unify____version_array_1_0(mercury__version_hash_table__TypeInfo_8_8, (MR_Box) mercury__version_hash_table__Cast_HeadVar1_3, (MR_Box) mercury__version_hash_table__Cast_HeadVar2_4);
    }
#line 242 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 242 "version_hash_table.m"
  }
#line 242 "version_hash_table.m"
}

#line 791 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__fold_p_4_p_5(
#line 791 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
#line 791 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
#line 791 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_20,
#line 791 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 791 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 791 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_11,
#line 791 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_12)
#line 791 "version_hash_table.m"
{
#line 796 "version_hash_table.m"
  while (MR_TRUE)
#line 796 "version_hash_table.m"
    {
#line 796 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 796 "version_hash_table.m"
      {
#line 796 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 796 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 795 "version_hash_table.m"
          {
#line 795 "version_hash_table.m"
            *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
#line 795 "version_hash_table.m"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 795 "version_hash_table.m"
          }
#line 796 "version_hash_table.m"
        else
#line 796 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 800 "version_hash_table.m"
            {
#line 800 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 800 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
#line 800 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 800 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 801 "version_hash_table.m"
              MR_bool MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 801 "version_hash_table.m"
              {
#line 801 "version_hash_table.m"
                mercury__version_hash_table__succeeded = mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
              }
#line 800 "version_hash_table.m"
              if (mercury__version_hash_table__succeeded)
#line 802 "version_hash_table.m"
                {
#line 802 "version_hash_table.m"
                  /* direct tailcall eliminated */
#line 802 "version_hash_table.m"
                  {
#line 802 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
#line 802 "version_hash_table.m"
                    MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

#line 802 "version_hash_table.m"
                    mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 802 "version_hash_table.m"
                    mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 802 "version_hash_table.m"
                  }
#line 802 "version_hash_table.m"
                  continue;
#line 802 "version_hash_table.m"
                }
#line 800 "version_hash_table.m"
            }
#line 796 "version_hash_table.m"
          else
#line 797 "version_hash_table.m"
            {
#line 797 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 797 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 798 "version_hash_table.m"
              MR_bool MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 798 "version_hash_table.m"
              {
#line 798 "version_hash_table.m"
                return mercury__version_hash_table__succeeded = mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
              }
#line 797 "version_hash_table.m"
            }
#line 796 "version_hash_table.m"
        return mercury__version_hash_table__succeeded;
#line 796 "version_hash_table.m"
      }
#line 796 "version_hash_table.m"
      break;
#line 796 "version_hash_table.m"
    }
#line 791 "version_hash_table.m"
}

#line 790 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__fold_p_4_p_4(
#line 790 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
#line 790 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
#line 790 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_20,
#line 790 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 790 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 790 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_11,
#line 790 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_12)
#line 790 "version_hash_table.m"
{
#line 796 "version_hash_table.m"
  while (MR_TRUE)
#line 796 "version_hash_table.m"
    {
#line 796 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 796 "version_hash_table.m"
      {
#line 796 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 796 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 795 "version_hash_table.m"
          {
#line 795 "version_hash_table.m"
            *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
#line 795 "version_hash_table.m"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 795 "version_hash_table.m"
          }
#line 796 "version_hash_table.m"
        else
#line 796 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 800 "version_hash_table.m"
            {
#line 800 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 800 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
#line 800 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 800 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 801 "version_hash_table.m"
              MR_bool MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 801 "version_hash_table.m"
              {
#line 801 "version_hash_table.m"
                mercury__version_hash_table__succeeded = mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
              }
#line 800 "version_hash_table.m"
              if (mercury__version_hash_table__succeeded)
#line 802 "version_hash_table.m"
                {
#line 802 "version_hash_table.m"
                  /* direct tailcall eliminated */
#line 802 "version_hash_table.m"
                  {
#line 802 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
#line 802 "version_hash_table.m"
                    MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

#line 802 "version_hash_table.m"
                    mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 802 "version_hash_table.m"
                    mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 802 "version_hash_table.m"
                  }
#line 802 "version_hash_table.m"
                  continue;
#line 802 "version_hash_table.m"
                }
#line 800 "version_hash_table.m"
            }
#line 796 "version_hash_table.m"
          else
#line 797 "version_hash_table.m"
            {
#line 797 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 797 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 798 "version_hash_table.m"
              MR_bool MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 798 "version_hash_table.m"
              {
#line 798 "version_hash_table.m"
                return mercury__version_hash_table__succeeded = mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
              }
#line 797 "version_hash_table.m"
            }
#line 796 "version_hash_table.m"
        return mercury__version_hash_table__succeeded;
#line 796 "version_hash_table.m"
      }
#line 796 "version_hash_table.m"
      break;
#line 796 "version_hash_table.m"
    }
#line 790 "version_hash_table.m"
}

#line 789 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__fold_p_4_p_3(
#line 789 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
#line 789 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
#line 789 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_20,
#line 789 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 789 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 789 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_11,
#line 789 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_12)
#line 789 "version_hash_table.m"
{
#line 796 "version_hash_table.m"
  while (MR_TRUE)
#line 796 "version_hash_table.m"
    {
#line 796 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 796 "version_hash_table.m"
      {
#line 796 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 796 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 795 "version_hash_table.m"
          {
#line 795 "version_hash_table.m"
            *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
#line 795 "version_hash_table.m"
            mercury__version_hash_table__succeeded = MR_TRUE;
#line 795 "version_hash_table.m"
          }
#line 796 "version_hash_table.m"
        else
#line 796 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 800 "version_hash_table.m"
            {
#line 800 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 800 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
#line 800 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 800 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 801 "version_hash_table.m"
              MR_bool MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 801 "version_hash_table.m"
              {
#line 801 "version_hash_table.m"
                mercury__version_hash_table__succeeded = mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
              }
#line 800 "version_hash_table.m"
              if (mercury__version_hash_table__succeeded)
#line 802 "version_hash_table.m"
                {
#line 802 "version_hash_table.m"
                  /* direct tailcall eliminated */
#line 802 "version_hash_table.m"
                  {
#line 802 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
#line 802 "version_hash_table.m"
                    MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

#line 802 "version_hash_table.m"
                    mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 802 "version_hash_table.m"
                    mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 802 "version_hash_table.m"
                  }
#line 802 "version_hash_table.m"
                  continue;
#line 802 "version_hash_table.m"
                }
#line 800 "version_hash_table.m"
            }
#line 796 "version_hash_table.m"
          else
#line 797 "version_hash_table.m"
            {
#line 797 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 797 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 798 "version_hash_table.m"
              MR_bool MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 798 "version_hash_table.m"
              {
#line 798 "version_hash_table.m"
                return mercury__version_hash_table__succeeded = mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
              }
#line 797 "version_hash_table.m"
            }
#line 796 "version_hash_table.m"
        return mercury__version_hash_table__succeeded;
#line 796 "version_hash_table.m"
      }
#line 796 "version_hash_table.m"
      break;
#line 796 "version_hash_table.m"
    }
#line 789 "version_hash_table.m"
}

#line 788 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_p_4_p_2(
#line 788 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
#line 788 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
#line 788 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_20,
#line 788 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 788 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 788 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_11,
#line 788 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_12)
#line 788 "version_hash_table.m"
{
#line 796 "version_hash_table.m"
  while (MR_TRUE)
#line 796 "version_hash_table.m"
    {
#line 796 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 796 "version_hash_table.m"
      {
#line 796 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 796 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 795 "version_hash_table.m"
          *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
#line 796 "version_hash_table.m"
        else
#line 796 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 800 "version_hash_table.m"
            {
#line 800 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 800 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
#line 800 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 800 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 801 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 801 "version_hash_table.m"
              {
#line 801 "version_hash_table.m"
                mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
              }
#line 802 "version_hash_table.m"
              /* direct tailcall eliminated */
#line 802 "version_hash_table.m"
              {
#line 802 "version_hash_table.m"
                MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
#line 802 "version_hash_table.m"
                MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

#line 802 "version_hash_table.m"
                mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 802 "version_hash_table.m"
                mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 802 "version_hash_table.m"
              }
#line 802 "version_hash_table.m"
              continue;
#line 800 "version_hash_table.m"
            }
#line 796 "version_hash_table.m"
          else
#line 797 "version_hash_table.m"
            {
#line 797 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 797 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 798 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 798 "version_hash_table.m"
              {
#line 798 "version_hash_table.m"
                mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
#line 798 "version_hash_table.m"
                return;
              }
#line 797 "version_hash_table.m"
            }
#line 796 "version_hash_table.m"
      }
#line 796 "version_hash_table.m"
      break;
#line 796 "version_hash_table.m"
    }
#line 788 "version_hash_table.m"
}

#line 787 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_p_4_p_1(
#line 787 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
#line 787 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
#line 787 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_20,
#line 787 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 787 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 787 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_11,
#line 787 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_12)
#line 787 "version_hash_table.m"
{
#line 796 "version_hash_table.m"
  while (MR_TRUE)
#line 796 "version_hash_table.m"
    {
#line 796 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 796 "version_hash_table.m"
      {
#line 796 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 796 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 795 "version_hash_table.m"
          *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
#line 796 "version_hash_table.m"
        else
#line 796 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 800 "version_hash_table.m"
            {
#line 800 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 800 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
#line 800 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 800 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 801 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 801 "version_hash_table.m"
              {
#line 801 "version_hash_table.m"
                mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
              }
#line 802 "version_hash_table.m"
              /* direct tailcall eliminated */
#line 802 "version_hash_table.m"
              {
#line 802 "version_hash_table.m"
                MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
#line 802 "version_hash_table.m"
                MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

#line 802 "version_hash_table.m"
                mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 802 "version_hash_table.m"
                mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 802 "version_hash_table.m"
              }
#line 802 "version_hash_table.m"
              continue;
#line 800 "version_hash_table.m"
            }
#line 796 "version_hash_table.m"
          else
#line 797 "version_hash_table.m"
            {
#line 797 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 797 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 798 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 798 "version_hash_table.m"
              {
#line 798 "version_hash_table.m"
                mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
#line 798 "version_hash_table.m"
                return;
              }
#line 797 "version_hash_table.m"
            }
#line 796 "version_hash_table.m"
      }
#line 796 "version_hash_table.m"
      break;
#line 796 "version_hash_table.m"
    }
#line 787 "version_hash_table.m"
}

#line 786 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_p_4_p_0(
#line 786 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_18,
#line 786 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_19,
#line 786 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_20,
#line 786 "version_hash_table.m"
  MR_Word mercury__version_hash_table__P_5,
#line 786 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 786 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_11,
#line 786 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_12)
#line 786 "version_hash_table.m"
{
#line 796 "version_hash_table.m"
  while (MR_TRUE)
#line 796 "version_hash_table.m"
    {
#line 796 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 796 "version_hash_table.m"
      {
#line 796 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 796 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 795 "version_hash_table.m"
          *mercury__version_hash_table__STATE_VARIABLE_A_12 = mercury__version_hash_table__STATE_VARIABLE_A_0_11;
#line 796 "version_hash_table.m"
        else
#line 796 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 800 "version_hash_table.m"
            {
#line 800 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 800 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_A_13_13;
#line 800 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_16 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 800 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_17 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 801 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 801 "version_hash_table.m"
              {
#line 801 "version_hash_table.m"
                mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_16, mercury__version_hash_table__V_17, mercury__version_hash_table__STATE_VARIABLE_A_0_11, &mercury__version_hash_table__STATE_VARIABLE_A_13_13);
              }
#line 802 "version_hash_table.m"
              /* direct tailcall eliminated */
#line 802 "version_hash_table.m"
              {
#line 802 "version_hash_table.m"
                MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_10;
#line 802 "version_hash_table.m"
                MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11 = mercury__version_hash_table__STATE_VARIABLE_A_13_13;

#line 802 "version_hash_table.m"
                mercury__version_hash_table__STATE_VARIABLE_A_0_11 = mercury__version_hash_table__STATE_VARIABLE_A_0__tmp_copy_11;
#line 802 "version_hash_table.m"
                mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 802 "version_hash_table.m"
              }
#line 802 "version_hash_table.m"
              continue;
#line 800 "version_hash_table.m"
            }
#line 796 "version_hash_table.m"
          else
#line 797 "version_hash_table.m"
            {
#line 797 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 797 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 798 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__P_5, (MR_Integer) 1)));

#line 798 "version_hash_table.m"
              {
#line 798 "version_hash_table.m"
                mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__P_5), mercury__version_hash_table__K_8, mercury__version_hash_table__V_9, mercury__version_hash_table__STATE_VARIABLE_A_0_11, mercury__version_hash_table__STATE_VARIABLE_A_12);
#line 798 "version_hash_table.m"
                return;
              }
#line 797 "version_hash_table.m"
            }
#line 796 "version_hash_table.m"
      }
#line 796 "version_hash_table.m"
      break;
#line 796 "version_hash_table.m"
    }
#line 786 "version_hash_table.m"
}

#line 767 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_f_4_p_1(
#line 767 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_15,
#line 767 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_16,
#line 767 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_17,
#line 767 "version_hash_table.m"
  MR_Word mercury__version_hash_table__F_5,
#line 767 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 767 "version_hash_table.m"
  MR_Box mercury__version_hash_table__A0_7,
#line 767 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__A_8)
#line 767 "version_hash_table.m"
{
#line 773 "version_hash_table.m"
  while (MR_TRUE)
#line 773 "version_hash_table.m"
    {
#line 773 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 773 "version_hash_table.m"
      {
#line 773 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 773 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 772 "version_hash_table.m"
          *mercury__version_hash_table__A_8 = mercury__version_hash_table__A0_7;
#line 773 "version_hash_table.m"
        else
#line 773 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 777 "version_hash_table.m"
            {
#line 777 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 777 "version_hash_table.m"
              MR_Box mercury__version_hash_table__A1_12;
#line 777 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_13 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 777 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_14 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 778 "version_hash_table.m"
              MR_Box MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__F_5, (MR_Integer) 1)));

#line 778 "version_hash_table.m"
              {
#line 778 "version_hash_table.m"
                mercury__version_hash_table__A1_12 = mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__F_5), mercury__version_hash_table__K_13, mercury__version_hash_table__V_14, mercury__version_hash_table__A0_7);
              }
#line 779 "version_hash_table.m"
              /* direct tailcall eliminated */
#line 779 "version_hash_table.m"
              {
#line 779 "version_hash_table.m"
                MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_11;
#line 779 "version_hash_table.m"
                MR_Box mercury__version_hash_table__A0__tmp_copy_7 = mercury__version_hash_table__A1_12;

#line 779 "version_hash_table.m"
                mercury__version_hash_table__A0_7 = mercury__version_hash_table__A0__tmp_copy_7;
#line 779 "version_hash_table.m"
                mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 779 "version_hash_table.m"
              }
#line 779 "version_hash_table.m"
              continue;
#line 777 "version_hash_table.m"
            }
#line 773 "version_hash_table.m"
          else
#line 774 "version_hash_table.m"
            {
#line 774 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 774 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_10 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 775 "version_hash_table.m"
              MR_Box MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__F_5, (MR_Integer) 1)));

#line 775 "version_hash_table.m"
              {
#line 775 "version_hash_table.m"
                *mercury__version_hash_table__A_8 = mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__F_5), mercury__version_hash_table__K_9, mercury__version_hash_table__V_10, mercury__version_hash_table__A0_7);
              }
#line 774 "version_hash_table.m"
            }
#line 773 "version_hash_table.m"
      }
#line 773 "version_hash_table.m"
      break;
#line 773 "version_hash_table.m"
    }
#line 767 "version_hash_table.m"
}

#line 766 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__fold_f_4_p_0(
#line 766 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_15,
#line 766 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_16,
#line 766 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_T_17,
#line 766 "version_hash_table.m"
  MR_Word mercury__version_hash_table__F_5,
#line 766 "version_hash_table.m"
  MR_Word mercury__version_hash_table__List_6,
#line 766 "version_hash_table.m"
  MR_Box mercury__version_hash_table__A0_7,
#line 766 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__A_8)
#line 766 "version_hash_table.m"
{
#line 773 "version_hash_table.m"
  while (MR_TRUE)
#line 773 "version_hash_table.m"
    {
#line 773 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 773 "version_hash_table.m"
      {
#line 773 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 773 "version_hash_table.m"
        if ((mercury__version_hash_table__List_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 772 "version_hash_table.m"
          *mercury__version_hash_table__A_8 = mercury__version_hash_table__A0_7;
#line 773 "version_hash_table.m"
        else
#line 773 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__List_6)) == (MR_mktag((MR_Integer) 2))))
#line 777 "version_hash_table.m"
            {
#line 777 "version_hash_table.m"
              MR_Word mercury__version_hash_table__KVs_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 2)));
#line 777 "version_hash_table.m"
              MR_Box mercury__version_hash_table__A1_12;
#line 777 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_13 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 777 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_14 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 778 "version_hash_table.m"
              MR_Box MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__F_5, (MR_Integer) 1)));

#line 778 "version_hash_table.m"
              {
#line 778 "version_hash_table.m"
                mercury__version_hash_table__A1_12 = mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__F_5), mercury__version_hash_table__K_13, mercury__version_hash_table__V_14, mercury__version_hash_table__A0_7);
              }
#line 779 "version_hash_table.m"
              /* direct tailcall eliminated */
#line 779 "version_hash_table.m"
              {
#line 779 "version_hash_table.m"
                MR_Word mercury__version_hash_table__List__tmp_copy_6 = mercury__version_hash_table__KVs_11;
#line 779 "version_hash_table.m"
                MR_Box mercury__version_hash_table__A0__tmp_copy_7 = mercury__version_hash_table__A1_12;

#line 779 "version_hash_table.m"
                mercury__version_hash_table__A0_7 = mercury__version_hash_table__A0__tmp_copy_7;
#line 779 "version_hash_table.m"
                mercury__version_hash_table__List_6 = mercury__version_hash_table__List__tmp_copy_6;
#line 779 "version_hash_table.m"
              }
#line 779 "version_hash_table.m"
              continue;
#line 777 "version_hash_table.m"
            }
#line 773 "version_hash_table.m"
          else
#line 774 "version_hash_table.m"
            {
#line 774 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_9 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 0));
#line 774 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_10 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__List_6, (MR_Integer) 1));
#line 775 "version_hash_table.m"
              MR_Box MR_CALL (* mercury__version_hash_table__func_1)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__F_5, (MR_Integer) 1)));

#line 775 "version_hash_table.m"
              {
#line 775 "version_hash_table.m"
                *mercury__version_hash_table__A_8 = mercury__version_hash_table__func_1(((MR_Box) mercury__version_hash_table__F_5), mercury__version_hash_table__K_9, mercury__version_hash_table__V_10, mercury__version_hash_table__A0_7);
              }
#line 774 "version_hash_table.m"
            }
#line 773 "version_hash_table.m"
      }
#line 773 "version_hash_table.m"
      break;
#line 773 "version_hash_table.m"
    }
#line 766 "version_hash_table.m"
}

#line 612 "version_hash_table.m"
static void MR_CALL 
mercury__version_hash_table__reinsert_alist_5_p_0(
#line 612 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_20,
#line 612 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_21,
#line 612 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL_6,
#line 612 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_7,
#line 612 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumBuckets_8,
#line 612 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13,
#line 612 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Buckets_14)
#line 612 "version_hash_table.m"
{
#line 618 "version_hash_table.m"
  while (MR_TRUE)
#line 618 "version_hash_table.m"
    {
#line 618 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 618 "version_hash_table.m"
      {
#line 618 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 618 "version_hash_table.m"
        if ((mercury__version_hash_table__AL_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 617 "version_hash_table.m"
          *mercury__version_hash_table__STATE_VARIABLE_Buckets_14 = mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13;
#line 618 "version_hash_table.m"
        else
#line 618 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__AL_6)) == (MR_mktag((MR_Integer) 2))))
#line 622 "version_hash_table.m"
            {
#line 622 "version_hash_table.m"
              MR_Word mercury__version_hash_table__TypeCtorInfo_23_36;
#line 622 "version_hash_table.m"
              MR_Word mercury__version_hash_table__TypeInfo_24_37;
#line 622 "version_hash_table.m"
              MR_Word mercury__version_hash_table__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_6, (MR_Integer) 2)));
#line 622 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_15_15;
#line 622 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_18 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_6, (MR_Integer) 0));
#line 622 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_19 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_6, (MR_Integer) 1));
#line 622 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__H_28;
#line 622 "version_hash_table.m"
              MR_Word mercury__version_hash_table__AL0_29;
#line 622 "version_hash_table.m"
              MR_Word mercury__version_hash_table__AL_30;
#line 622 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__Hash_42;
#line 622 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__V_43_43;
#line 316 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_7, (MR_Integer) 1)));
#line 316 "version_hash_table.m"
              MR_Box mercury__version_hash_table__conv1_Hash_42;
#line 154 "version_array.opt"
              MR_Box mercury__version_hash_table__conv2_AL0_29;
#line 157 "version_array.opt"
              MR_Box mercury__version_hash_table__conv3_STATE_VARIABLE_Buckets_15_15;

#line 316 "version_hash_table.m"
              {
#line 316 "version_hash_table.m"
                mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_7), mercury__version_hash_table__K_18, &mercury__version_hash_table__conv1_Hash_42);
              }
#line 316 "version_hash_table.m"
              mercury__version_hash_table__Hash_42 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_42);
#line 318 "version_hash_table.m"
              mercury__version_hash_table__V_43_43 = (mercury__version_hash_table__NumBuckets_8 - (MR_Integer) 1);
#line 318 "version_hash_table.m"
              mercury__version_hash_table__H_28 = (mercury__version_hash_table__Hash_42 & mercury__version_hash_table__V_43_43);
#line 4657 "version_hash_table.c"
              mercury__version_hash_table__TypeCtorInfo_23_36 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 4659 "version_hash_table.c"
              {
#line 4661 "version_hash_table.c"
                mercury__version_hash_table__TypeInfo_24_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4663 "version_hash_table.c"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_37, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_23_36));
#line 4665 "version_hash_table.c"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_37, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_20));
#line 4667 "version_hash_table.c"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_37, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_21));
#line 4669 "version_hash_table.c"
              }
#line 154 "version_array.opt"
              {
#line 154 "version_array.opt"
                mercury__version_hash_table__conv2_AL0_29 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_24_37, (MR_Box) mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13, mercury__version_hash_table__H_28);
              }
#line 154 "version_array.opt"
              mercury__version_hash_table__AL0_29 = ((MR_Word) mercury__version_hash_table__conv2_AL0_29);
#line 636 "version_hash_table.m"
              if ((mercury__version_hash_table__AL0_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 635 "version_hash_table.m"
                {
#line 635 "version_hash_table.m"
                  mercury__version_hash_table__AL_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 635 "version_hash_table.m"
                  MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_30, 0) = mercury__version_hash_table__K_18;
#line 635 "version_hash_table.m"
                  MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_30, 1) = mercury__version_hash_table__V_19;
#line 635 "version_hash_table.m"
                }
#line 636 "version_hash_table.m"
              else
#line 636 "version_hash_table.m"
                if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_29)) == (MR_mktag((MR_Integer) 2))))
#line 640 "version_hash_table.m"
                  {
#line 640 "version_hash_table.m"
                    mercury__version_hash_table__AL_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 640 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 0) = mercury__version_hash_table__K_18;
#line 640 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 1) = mercury__version_hash_table__V_19;
#line 640 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 2) = ((MR_Box) (mercury__version_hash_table__AL0_29));
#line 640 "version_hash_table.m"
                  }
#line 636 "version_hash_table.m"
                else
#line 640 "version_hash_table.m"
                  {
#line 640 "version_hash_table.m"
                    mercury__version_hash_table__AL_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 640 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 0) = mercury__version_hash_table__K_18;
#line 640 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 1) = mercury__version_hash_table__V_19;
#line 640 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_30, 2) = ((MR_Box) (mercury__version_hash_table__AL0_29));
#line 640 "version_hash_table.m"
                  }
#line 157 "version_array.opt"
              {
#line 157 "version_array.opt"
                mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_24_37, mercury__version_hash_table__H_28, ((MR_Box) (mercury__version_hash_table__AL_30)), (MR_Box) mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13, &mercury__version_hash_table__conv3_STATE_VARIABLE_Buckets_15_15);
              }
#line 157 "version_array.opt"
              mercury__version_hash_table__STATE_VARIABLE_Buckets_15_15 = (MR_Box) mercury__version_hash_table__conv3_STATE_VARIABLE_Buckets_15_15;
#line 624 "version_hash_table.m"
              /* direct tailcall eliminated */
#line 624 "version_hash_table.m"
              {
#line 624 "version_hash_table.m"
                MR_Word mercury__version_hash_table__AL__tmp_copy_6 = mercury__version_hash_table__T_12;
#line 624 "version_hash_table.m"
                MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13 = mercury__version_hash_table__STATE_VARIABLE_Buckets_15_15;

#line 624 "version_hash_table.m"
                mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13 = mercury__version_hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13;
#line 624 "version_hash_table.m"
                mercury__version_hash_table__AL_6 = mercury__version_hash_table__AL__tmp_copy_6;
#line 624 "version_hash_table.m"
              }
#line 624 "version_hash_table.m"
              continue;
#line 622 "version_hash_table.m"
            }
#line 618 "version_hash_table.m"
          else
#line 619 "version_hash_table.m"
            {
#line 619 "version_hash_table.m"
              MR_Word mercury__version_hash_table__TypeCtorInfo_23_66;
#line 619 "version_hash_table.m"
              MR_Word mercury__version_hash_table__TypeInfo_24_67;
#line 619 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_10 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_6, (MR_Integer) 0));
#line 619 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_11 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_6, (MR_Integer) 1));
#line 619 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__H_58;
#line 619 "version_hash_table.m"
              MR_Word mercury__version_hash_table__AL0_59;
#line 619 "version_hash_table.m"
              MR_Word mercury__version_hash_table__AL_60;
#line 619 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__Hash_72;
#line 619 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__V_73_73;
#line 316 "version_hash_table.m"
              void MR_CALL (* mercury__version_hash_table__func_4)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_7, (MR_Integer) 1)));
#line 316 "version_hash_table.m"
              MR_Box mercury__version_hash_table__conv5_Hash_72;
#line 154 "version_array.opt"
              MR_Box mercury__version_hash_table__conv6_AL0_59;
#line 157 "version_array.opt"
              MR_Box mercury__version_hash_table__conv7_STATE_VARIABLE_Buckets_14;

#line 316 "version_hash_table.m"
              {
#line 316 "version_hash_table.m"
                mercury__version_hash_table__func_4(((MR_Box) mercury__version_hash_table__HashPred_7), mercury__version_hash_table__K_10, &mercury__version_hash_table__conv5_Hash_72);
              }
#line 316 "version_hash_table.m"
              mercury__version_hash_table__Hash_72 = ((MR_Integer) mercury__version_hash_table__conv5_Hash_72);
#line 318 "version_hash_table.m"
              mercury__version_hash_table__V_73_73 = (mercury__version_hash_table__NumBuckets_8 - (MR_Integer) 1);
#line 318 "version_hash_table.m"
              mercury__version_hash_table__H_58 = (mercury__version_hash_table__Hash_72 & mercury__version_hash_table__V_73_73);
#line 4788 "version_hash_table.c"
              mercury__version_hash_table__TypeCtorInfo_23_66 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 4790 "version_hash_table.c"
              {
#line 4792 "version_hash_table.c"
                mercury__version_hash_table__TypeInfo_24_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4794 "version_hash_table.c"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_67, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_23_66));
#line 4796 "version_hash_table.c"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_67, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_20));
#line 4798 "version_hash_table.c"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_67, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_21));
#line 4800 "version_hash_table.c"
              }
#line 154 "version_array.opt"
              {
#line 154 "version_array.opt"
                mercury__version_hash_table__conv6_AL0_59 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_24_67, (MR_Box) mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13, mercury__version_hash_table__H_58);
              }
#line 154 "version_array.opt"
              mercury__version_hash_table__AL0_59 = ((MR_Word) mercury__version_hash_table__conv6_AL0_59);
#line 636 "version_hash_table.m"
              if ((mercury__version_hash_table__AL0_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 635 "version_hash_table.m"
                mercury__version_hash_table__AL_60 = mercury__version_hash_table__AL_6;
#line 636 "version_hash_table.m"
              else
#line 636 "version_hash_table.m"
                if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_59)) == (MR_mktag((MR_Integer) 2))))
#line 640 "version_hash_table.m"
                  {
#line 640 "version_hash_table.m"
                    mercury__version_hash_table__AL_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 640 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 0) = mercury__version_hash_table__K_10;
#line 640 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 1) = mercury__version_hash_table__V_11;
#line 640 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 2) = ((MR_Box) (mercury__version_hash_table__AL0_59));
#line 640 "version_hash_table.m"
                  }
#line 636 "version_hash_table.m"
                else
#line 640 "version_hash_table.m"
                  {
#line 640 "version_hash_table.m"
                    mercury__version_hash_table__AL_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 640 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 0) = mercury__version_hash_table__K_10;
#line 640 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 1) = mercury__version_hash_table__V_11;
#line 640 "version_hash_table.m"
                    MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_60, 2) = ((MR_Box) (mercury__version_hash_table__AL0_59));
#line 640 "version_hash_table.m"
                  }
#line 157 "version_array.opt"
              {
#line 157 "version_array.opt"
                mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_24_67, mercury__version_hash_table__H_58, ((MR_Box) (mercury__version_hash_table__AL_60)), (MR_Box) mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13, &mercury__version_hash_table__conv7_STATE_VARIABLE_Buckets_14);
              }
#line 157 "version_array.opt"
              *mercury__version_hash_table__STATE_VARIABLE_Buckets_14 = (MR_Box) mercury__version_hash_table__conv7_STATE_VARIABLE_Buckets_14;
#line 619 "version_hash_table.m"
            }
#line 618 "version_hash_table.m"
      }
#line 618 "version_hash_table.m"
      break;
#line 618 "version_hash_table.m"
    }
#line 612 "version_hash_table.m"
}

#line 599 "version_hash_table.m"
static void MR_CALL 
mercury__version_hash_table__reinsert_bindings_6_p_0(
#line 599 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_20,
#line 599 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_21,
#line 599 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__I_7,
#line 599 "version_hash_table.m"
  MR_Box mercury__version_hash_table__OldBuckets_8,
#line 599 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_9,
#line 599 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumBuckets_10,
#line 599 "version_hash_table.m"
  MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13,
#line 599 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_Buckets_14)
#line 599 "version_hash_table.m"
{
#line 606 "version_hash_table.m"
  while (MR_TRUE)
#line 606 "version_hash_table.m"
    {
#line 606 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 606 "version_hash_table.m"
      {
#line 606 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;
#line 604 "version_hash_table.m"
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

#line 4910 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_15_15  = N;
#line 158 "version_array.opt"
}
#line 604 "version_hash_table.m"
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__I_7 >= mercury__version_hash_table__V_15_15);
#line 606 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 604 "version_hash_table.m"
          *mercury__version_hash_table__STATE_VARIABLE_Buckets_14 = mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13;
#line 606 "version_hash_table.m"
        else
#line 607 "version_hash_table.m"
          {
#line 607 "version_hash_table.m"
            MR_Word mercury__version_hash_table__TypeCtorInfo_24_24 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 607 "version_hash_table.m"
            MR_Word mercury__version_hash_table__TypeInfo_25_25;
#line 607 "version_hash_table.m"
            MR_Word mercury__version_hash_table__AL_12;
#line 607 "version_hash_table.m"
            MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_16_16;
#line 607 "version_hash_table.m"
            MR_Integer mercury__version_hash_table__V_17_17;
#line 154 "version_array.opt"
            MR_Box mercury__version_hash_table__conv0_AL_12;

#line 4940 "version_hash_table.c"
            {
#line 4942 "version_hash_table.c"
              mercury__version_hash_table__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4944 "version_hash_table.c"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_25_25, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_24_24));
#line 4946 "version_hash_table.c"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_25_25, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_20));
#line 4948 "version_hash_table.c"
              MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_25_25, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_21));
#line 4950 "version_hash_table.c"
            }
#line 154 "version_array.opt"
            {
#line 154 "version_array.opt"
              mercury__version_hash_table__conv0_AL_12 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_25_25, (MR_Box) mercury__version_hash_table__OldBuckets_8, mercury__version_hash_table__I_7);
            }
#line 154 "version_array.opt"
            mercury__version_hash_table__AL_12 = ((MR_Word) mercury__version_hash_table__conv0_AL_12);
#line 608 "version_hash_table.m"
            {
#line 608 "version_hash_table.m"
              mercury__version_hash_table__reinsert_alist_5_p_0(mercury__version_hash_table__TypeInfo_for_K_20, mercury__version_hash_table__TypeInfo_for_V_21, mercury__version_hash_table__AL_12, mercury__version_hash_table__HashPred_9, mercury__version_hash_table__NumBuckets_10, mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13, &mercury__version_hash_table__STATE_VARIABLE_Buckets_16_16);
            }
#line 609 "version_hash_table.m"
            mercury__version_hash_table__V_17_17 = (mercury__version_hash_table__I_7 + (MR_Integer) 1);
#line 609 "version_hash_table.m"
            /* direct tailcall eliminated */
#line 609 "version_hash_table.m"
            {
#line 609 "version_hash_table.m"
              MR_Integer mercury__version_hash_table__I__tmp_copy_7 = mercury__version_hash_table__V_17_17;
#line 609 "version_hash_table.m"
              MR_Box mercury__version_hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13 = mercury__version_hash_table__STATE_VARIABLE_Buckets_16_16;

#line 609 "version_hash_table.m"
              mercury__version_hash_table__STATE_VARIABLE_Buckets_0_13 = mercury__version_hash_table__STATE_VARIABLE_Buckets_0__tmp_copy_13;
#line 609 "version_hash_table.m"
              mercury__version_hash_table__I_7 = mercury__version_hash_table__I__tmp_copy_7;
#line 609 "version_hash_table.m"
            }
#line 609 "version_hash_table.m"
            continue;
#line 607 "version_hash_table.m"
          }
#line 606 "version_hash_table.m"
      }
#line 606 "version_hash_table.m"
      break;
#line 606 "version_hash_table.m"
    }
#line 599 "version_hash_table.m"
}

#line 585 "version_hash_table.m"
static MR_Word MR_CALL 
mercury__version_hash_table__expand_4_f_0(
#line 585 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_21,
#line 585 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_22,
#line 585 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumOccupants_6,
#line 585 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__MaxOccupants0_7,
#line 585 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred0_8,
#line 585 "version_hash_table.m"
  MR_Box mercury__version_hash_table__Buckets0_9)
#line 585 "version_hash_table.m"
{
#line 590 "version_hash_table.m"
  {
#line 590 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 590 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_10;
#line 590 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_23_23 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 590 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_24_24;
#line 590 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumBuckets0_11;
#line 590 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumBuckets_12;
#line 590 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__MaxOccupants_13;
#line 590 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_14;
#line 590 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets1_15;
#line 590 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_16;
#line 590 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_19_19;
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_24_25;
#line 323 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_26;
#line 595 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv0_Buckets1_15;

#line 5042 "version_hash_table.c"
    {
#line 5044 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5046 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_24, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_23_23));
#line 5048 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_24, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_21));
#line 5050 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_24, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_22));
#line 5052 "version_hash_table.c"
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

#line 5067 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__NumBuckets0_11  = N;
#line 158 "version_array.opt"
}
#line 592 "version_hash_table.m"
    mercury__version_hash_table__NumBuckets_12 = (mercury__version_hash_table__NumBuckets0_11 + mercury__version_hash_table__NumBuckets0_11);
#line 593 "version_hash_table.m"
    mercury__version_hash_table__MaxOccupants_13 = (mercury__version_hash_table__MaxOccupants0_7 + mercury__version_hash_table__MaxOccupants0_7);
#line 326 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__expand_4_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HashPred0_8 ;
		{
#line 326 "version_hash_table.m"

    HashPred = HashPred0;

#line 5091 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_14  = HashPred;
#line 326 "version_hash_table.m"
}
#line 595 "version_hash_table.m"
    mercury__version_hash_table__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 595 "version_hash_table.m"
    {
#line 595 "version_hash_table.m"
      mercury__version_hash_table__conv0_Buckets1_15 = mercury__version_array__init_2_f_0(mercury__version_hash_table__TypeInfo_24_24, mercury__version_hash_table__NumBuckets_12, ((MR_Box) (mercury__version_hash_table__V_19_19)));
    }
#line 595 "version_hash_table.m"
    mercury__version_hash_table__Buckets1_15 = (MR_Box) mercury__version_hash_table__conv0_Buckets1_15;
#line 596 "version_hash_table.m"
    {
#line 596 "version_hash_table.m"
      mercury__version_hash_table__reinsert_bindings_6_p_0(mercury__version_hash_table__TypeInfo_for_K_21, mercury__version_hash_table__TypeInfo_for_V_22, (MR_Integer) 0, mercury__version_hash_table__Buckets0_9, mercury__version_hash_table__HashPred_14, mercury__version_hash_table__NumBuckets_12, mercury__version_hash_table__Buckets1_15, &mercury__version_hash_table__Buckets_16);
    }
#line 597 "version_hash_table.m"
    {
#line 597 "version_hash_table.m"
      mercury__version_hash_table__HT_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 597 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants_6));
#line 597 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_13));
#line 597 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_14));
#line 597 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_16));
#line 597 "version_hash_table.m"
    }
#line 590 "version_hash_table.m"
    return mercury__version_hash_table__HT_10;
#line 590 "version_hash_table.m"
  }
#line 585 "version_hash_table.m"
}

#line 565 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__from_assoc_list_2_3_p_0(
#line 565 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_16,
#line 565 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_17,
#line 565 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__1_1,
#line 565 "version_hash_table.m"
  MR_Word mercury__version_hash_table__STATE_VARIABLE_HT_0_2,
#line 565 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__STATE_VARIABLE_HT_3)
#line 565 "version_hash_table.m"
{
#line 568 "version_hash_table.m"
  while (MR_TRUE)
#line 568 "version_hash_table.m"
    {
#line 568 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 568 "version_hash_table.m"
      {
#line 568 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 568 "version_hash_table.m"
        if ((mercury__version_hash_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 568 "version_hash_table.m"
          *mercury__version_hash_table__STATE_VARIABLE_HT_3 = mercury__version_hash_table__STATE_VARIABLE_HT_0_2;
#line 568 "version_hash_table.m"
        else
#line 569 "version_hash_table.m"
          {
#line 569 "version_hash_table.m"
            MR_Box mercury__version_hash_table__K_7;
#line 569 "version_hash_table.m"
            MR_Box mercury__version_hash_table__V_8;
#line 569 "version_hash_table.m"
            MR_Word mercury__version_hash_table__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 1)));
#line 569 "version_hash_table.m"
            MR_Word mercury__version_hash_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 0)));
#line 569 "version_hash_table.m"
            MR_Word mercury__version_hash_table__STATE_VARIABLE_HT_14_14;

#line 569 "version_hash_table.m"
            mercury__version_hash_table__K_7 = (MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_13_13, (MR_Integer) 0));
#line 569 "version_hash_table.m"
            mercury__version_hash_table__V_8 = (MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_13_13, (MR_Integer) 1));
#line 394 "version_hash_table.m"
            {
#line 394 "version_hash_table.m"
              mercury__version_hash_table__STATE_VARIABLE_HT_14_14 = mercury__version_hash_table__set_3_f_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__STATE_VARIABLE_HT_0_2, mercury__version_hash_table__K_7, mercury__version_hash_table__V_8);
            }
#line 571 "version_hash_table.m"
            /* direct tailcall eliminated */
#line 571 "version_hash_table.m"
            {
#line 571 "version_hash_table.m"
              MR_Word mercury__version_hash_table__HeadVar__1__tmp_copy_1 = mercury__version_hash_table__T_9;
#line 571 "version_hash_table.m"
              MR_Word mercury__version_hash_table__STATE_VARIABLE_HT_0__tmp_copy_2 = mercury__version_hash_table__STATE_VARIABLE_HT_14_14;

#line 571 "version_hash_table.m"
              mercury__version_hash_table__STATE_VARIABLE_HT_0_2 = mercury__version_hash_table__STATE_VARIABLE_HT_0__tmp_copy_2;
#line 571 "version_hash_table.m"
              mercury__version_hash_table__HeadVar__1_1 = mercury__version_hash_table__HeadVar__1__tmp_copy_1;
#line 571 "version_hash_table.m"
            }
#line 571 "version_hash_table.m"
            continue;
#line 569 "version_hash_table.m"
          }
#line 568 "version_hash_table.m"
      }
#line 568 "version_hash_table.m"
      break;
#line 568 "version_hash_table.m"
    }
#line 565 "version_hash_table.m"
}

#line 543 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__to_assoc_list_2_3_p_0(
#line 543 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_15,
#line 543 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_16,
#line 543 "version_hash_table.m"
  MR_Word mercury__version_hash_table__X_4,
#line 543 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL0_5,
#line 543 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__AL_6)
#line 543 "version_hash_table.m"
{
#line 550 "version_hash_table.m"
  while (MR_TRUE)
#line 550 "version_hash_table.m"
    {
#line 550 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 550 "version_hash_table.m"
      {
#line 550 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 550 "version_hash_table.m"
        if ((mercury__version_hash_table__X_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 549 "version_hash_table.m"
          *mercury__version_hash_table__AL_6 = mercury__version_hash_table__AL0_5;
#line 550 "version_hash_table.m"
        else
#line 550 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__X_4)) == (MR_mktag((MR_Integer) 2))))
#line 554 "version_hash_table.m"
            {
#line 554 "version_hash_table.m"
              MR_Word mercury__version_hash_table__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__X_4, (MR_Integer) 2)));
#line 554 "version_hash_table.m"
              MR_Word mercury__version_hash_table__AL1_10;
#line 554 "version_hash_table.m"
              MR_Word mercury__version_hash_table__V_11_11;
#line 554 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_13 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__X_4, (MR_Integer) 0));
#line 554 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_14 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__X_4, (MR_Integer) 1));

#line 555 "version_hash_table.m"
              {
#line 555 "version_hash_table.m"
                mercury__version_hash_table__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 555 "version_hash_table.m"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_11_11, 0) = mercury__version_hash_table__K_13;
#line 555 "version_hash_table.m"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_11_11, 1) = mercury__version_hash_table__V_14;
#line 555 "version_hash_table.m"
              }
#line 555 "version_hash_table.m"
              {
#line 555 "version_hash_table.m"
                mercury__version_hash_table__AL1_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL1_10, 0) = ((MR_Box) (mercury__version_hash_table__V_11_11));
#line 555 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL1_10, 1) = ((MR_Box) (mercury__version_hash_table__AL0_5));
#line 555 "version_hash_table.m"
              }
#line 556 "version_hash_table.m"
              /* direct tailcall eliminated */
#line 556 "version_hash_table.m"
              {
#line 556 "version_hash_table.m"
                MR_Word mercury__version_hash_table__X__tmp_copy_4 = mercury__version_hash_table__T_9;
#line 556 "version_hash_table.m"
                MR_Word mercury__version_hash_table__AL0__tmp_copy_5 = mercury__version_hash_table__AL1_10;

#line 556 "version_hash_table.m"
                mercury__version_hash_table__AL0_5 = mercury__version_hash_table__AL0__tmp_copy_5;
#line 556 "version_hash_table.m"
                mercury__version_hash_table__X_4 = mercury__version_hash_table__X__tmp_copy_4;
#line 556 "version_hash_table.m"
              }
#line 556 "version_hash_table.m"
              continue;
#line 554 "version_hash_table.m"
            }
#line 550 "version_hash_table.m"
          else
#line 551 "version_hash_table.m"
            {
#line 551 "version_hash_table.m"
              MR_Box mercury__version_hash_table__K_7 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__X_4, (MR_Integer) 0));
#line 551 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_8 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__X_4, (MR_Integer) 1));
#line 551 "version_hash_table.m"
              MR_Word mercury__version_hash_table__V_12_12;

#line 552 "version_hash_table.m"
              {
#line 552 "version_hash_table.m"
                mercury__version_hash_table__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 552 "version_hash_table.m"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_12_12, 0) = mercury__version_hash_table__K_7;
#line 552 "version_hash_table.m"
                MR_hl_field(MR_mktag(0), mercury__version_hash_table__V_12_12, 1) = mercury__version_hash_table__V_8;
#line 552 "version_hash_table.m"
              }
#line 552 "version_hash_table.m"
              {
#line 552 "version_hash_table.m"
                MR_Word base;
#line 552 "version_hash_table.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 552 "version_hash_table.m"
                *mercury__version_hash_table__AL_6 = base;
#line 552 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__version_hash_table__V_12_12));
#line 552 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__version_hash_table__AL0_5));
#line 552 "version_hash_table.m"
              }
#line 551 "version_hash_table.m"
            }
#line 550 "version_hash_table.m"
      }
#line 550 "version_hash_table.m"
      break;
#line 550 "version_hash_table.m"
    }
#line 543 "version_hash_table.m"
}

#line 428 "version_hash_table.m"
MR_bool MR_CALL 
mercury__version_hash_table__alist_search_3_p_0(
#line 428 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_10,
#line 428 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_11,
#line 428 "version_hash_table.m"
  MR_Word mercury__version_hash_table__AL_4,
#line 428 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5,
#line 428 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__V_6)
#line 428 "version_hash_table.m"
{
#line 435 "version_hash_table.m"
  while (MR_TRUE)
#line 435 "version_hash_table.m"
    {
#line 435 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 435 "version_hash_table.m"
      {
#line 435 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;

#line 435 "version_hash_table.m"
        if (((MR_tag((MR_Word) mercury__version_hash_table__AL_4)) == (MR_mktag((MR_Integer) 2))))
#line 438 "version_hash_table.m"
          {
#line 438 "version_hash_table.m"
            MR_Box mercury__version_hash_table__HK_7 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_4, (MR_Integer) 0));
#line 438 "version_hash_table.m"
            MR_Box mercury__version_hash_table__HV_8 = (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_4, (MR_Integer) 1));
#line 438 "version_hash_table.m"
            MR_Word mercury__version_hash_table__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_4, (MR_Integer) 2)));

#line 439 "version_hash_table.m"
            {
#line 439 "version_hash_table.m"
              mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_10, mercury__version_hash_table__HK_7, mercury__version_hash_table__K_5);
            }
#line 441 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 440 "version_hash_table.m"
              {
#line 440 "version_hash_table.m"
                *mercury__version_hash_table__V_6 = mercury__version_hash_table__HV_8;
#line 440 "version_hash_table.m"
                mercury__version_hash_table__succeeded = MR_TRUE;
#line 440 "version_hash_table.m"
              }
#line 441 "version_hash_table.m"
            else
#line 442 "version_hash_table.m"
              {
#line 442 "version_hash_table.m"
                /* direct tailcall eliminated */
#line 442 "version_hash_table.m"
                {
#line 442 "version_hash_table.m"
                  MR_Word mercury__version_hash_table__AL__tmp_copy_4 = mercury__version_hash_table__T_9;

#line 442 "version_hash_table.m"
                  mercury__version_hash_table__AL_4 = mercury__version_hash_table__AL__tmp_copy_4;
#line 442 "version_hash_table.m"
                }
#line 442 "version_hash_table.m"
                continue;
#line 442 "version_hash_table.m"
              }
#line 438 "version_hash_table.m"
          }
#line 435 "version_hash_table.m"
        else
#line 435 "version_hash_table.m"
          if (((MR_tag((MR_Word) mercury__version_hash_table__AL_4)) == (MR_mktag((MR_Integer) 1))))
#line 436 "version_hash_table.m"
            {
#line 436 "version_hash_table.m"
              MR_Box mercury__version_hash_table__V_12_12 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_4, (MR_Integer) 0));

#line 436 "version_hash_table.m"
              *mercury__version_hash_table__V_6 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_4, (MR_Integer) 1));
#line 436 "version_hash_table.m"
              {
#line 436 "version_hash_table.m"
                return mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_10, mercury__version_hash_table__K_5, mercury__version_hash_table__V_12_12);
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
#line 435 "version_hash_table.m"
      break;
#line 435 "version_hash_table.m"
    }
#line 428 "version_hash_table.m"
}

#line 320 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__unsafe_hash_pred_cast_2_p_0(
#line 320 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_3,
#line 320 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__1_1,
#line 320 "version_hash_table.m"
  MR_Word * mercury__version_hash_table__HeadVar__2_2)
#line 320 "version_hash_table.m"
{
#line 323 "version_hash_table.m"
  {
#line 323 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 323 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_4;

#line 326 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__unsafe_hash_pred_cast_2_p_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__HeadVar__1_1 ;
		{
#line 326 "version_hash_table.m"

    HashPred = HashPred0;

#line 5484 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__HeadVar__2_2  = HashPred;
#line 326 "version_hash_table.m"
}
#line 323 "version_hash_table.m"
  }
#line 320 "version_hash_table.m"
}

#line 311 "version_hash_table.m"
void MR_CALL 
mercury__version_hash_table__find_slot_2_4_p_0(
#line 311 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_12,
#line 311 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_5,
#line 311 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_6,
#line 311 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__NumBuckets_7,
#line 311 "version_hash_table.m"
  MR_Integer * mercury__version_hash_table__H_8)
#line 311 "version_hash_table.m"
{
#line 315 "version_hash_table.m"
  {
#line 315 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 315 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_9;
#line 315 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_10_10;
#line 316 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_5, (MR_Integer) 1)));
#line 316 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_9;

#line 316 "version_hash_table.m"
    {
#line 316 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_5), mercury__version_hash_table__K_6, &mercury__version_hash_table__conv1_Hash_9);
    }
#line 316 "version_hash_table.m"
    mercury__version_hash_table__Hash_9 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_9);
#line 318 "version_hash_table.m"
    mercury__version_hash_table__V_10_10 = (mercury__version_hash_table__NumBuckets_7 - (MR_Integer) 1);
#line 318 "version_hash_table.m"
    *mercury__version_hash_table__H_8 = (mercury__version_hash_table__Hash_9 & mercury__version_hash_table__V_10_10);
#line 315 "version_hash_table.m"
  }
#line 311 "version_hash_table.m"
}

#line 304 "version_hash_table.m"
MR_Integer MR_CALL 
mercury__version_hash_table__find_slot_2_f_0(
#line 304 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_13,
#line 304 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_14,
#line 304 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_4,
#line 304 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5)
#line 304 "version_hash_table.m"
{
#line 307 "version_hash_table.m"
  {
#line 307 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 307 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__H_6;
#line 307 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_7;
#line 307 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 2)));
#line 307 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_9_9;
#line 307 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_16_16;
#line 307 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_26;
#line 307 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_27_27;
#line 308 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 0)));
#line 308 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 1)));
#line 308 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 3)));
#line 323 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_29;
#line 300 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_17_17;
#line 300 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_18_18;
#line 300 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_19_19;
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_11_30;
#line 316 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 316 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_26;

#line 326 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__find_slot_2_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__V_8_8 ;
		{
#line 326 "version_hash_table.m"

    HashPred = HashPred0;

#line 5605 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_7  = HashPred;
#line 326 "version_hash_table.m"
}
#line 300 "version_hash_table.m"
    mercury__version_hash_table__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 0)));
#line 300 "version_hash_table.m"
    mercury__version_hash_table__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 1)));
#line 300 "version_hash_table.m"
    mercury__version_hash_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 2)));
#line 300 "version_hash_table.m"
    mercury__version_hash_table__V_16_16 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 3)));
#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__find_slot_2_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_16_16 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 5633 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_9_9  = N;
#line 158 "version_array.opt"
}
#line 316 "version_hash_table.m"
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_7, (MR_Integer) 1)));
#line 316 "version_hash_table.m"
    {
#line 316 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_7), mercury__version_hash_table__K_5, &mercury__version_hash_table__conv1_Hash_26);
    }
#line 316 "version_hash_table.m"
    mercury__version_hash_table__Hash_26 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_26);
#line 318 "version_hash_table.m"
    mercury__version_hash_table__V_27_27 = (mercury__version_hash_table__V_9_9 - (MR_Integer) 1);
#line 318 "version_hash_table.m"
    mercury__version_hash_table__H_6 = (mercury__version_hash_table__Hash_26 & mercury__version_hash_table__V_27_27);
#line 307 "version_hash_table.m"
    return mercury__version_hash_table__H_6;
#line 307 "version_hash_table.m"
  }
#line 304 "version_hash_table.m"
}

#line 263 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__init_2_4_f_0(
#line 263 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_29,
#line 263 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_30,
#line 263 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HashPred_6,
#line 263 "version_hash_table.m"
  MR_Integer mercury__version_hash_table__N_7,
#line 263 "version_hash_table.m"
  MR_Float mercury__version_hash_table__MaxOccupancy_8,
#line 263 "version_hash_table.m"
  MR_Word mercury__version_hash_table__NeedSafety_9)
#line 263 "version_hash_table.m"
{
#line 269 "version_hash_table.m"
  {
#line 269 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded = (mercury__version_hash_table__N_7 <= (MR_Integer) 0);
#line 269 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_10;

#line 269 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 268 "version_hash_table.m"
      {
#line 268 "version_hash_table.m"
        MR_Word mercury__version_hash_table__TypeCtorInfo_31_31 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 268 "version_hash_table.m"
        MR_Word mercury__version_hash_table__V_15_15 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.new_hash_table: N =< 0"));

#line 268 "version_hash_table.m"
        {
#line 268 "version_hash_table.m"
          mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_31_31, ((MR_Box) (mercury__version_hash_table__V_15_15)));
        }
#line 268 "version_hash_table.m"
      }
#line 269 "version_hash_table.m"
    else
#line 272 "version_hash_table.m"
      {
#line 269 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__V_17_17;

#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__init_2_4_f_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 5718 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_17_17  = Bits;
#line 171 "int.opt"
}
#line 269 "version_hash_table.m"
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__N_7 >= mercury__version_hash_table__V_17_17);
#line 272 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 270 "version_hash_table.m"
          {
#line 270 "version_hash_table.m"
            MR_Word mercury__version_hash_table__TypeCtorInfo_32_32 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 270 "version_hash_table.m"
            MR_Word mercury__version_hash_table__V_18_18 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.new: N >= int.bits_per_int"));

#line 270 "version_hash_table.m"
            {
#line 270 "version_hash_table.m"
              mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_32_32, ((MR_Box) (mercury__version_hash_table__V_18_18)));
            }
#line 270 "version_hash_table.m"
          }
#line 272 "version_hash_table.m"
        else
#line 275 "version_hash_table.m"
          {
#line 272 "version_hash_table.m"
            mercury__version_hash_table__succeeded = (mercury__version_hash_table__MaxOccupancy_8 <= ((MR_Float) 0.0000000000000000));
#line 275 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 273 "version_hash_table.m"
              {
#line 273 "version_hash_table.m"
                MR_Word mercury__version_hash_table__TypeCtorInfo_33_33 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 273 "version_hash_table.m"
                MR_Word mercury__version_hash_table__V_21_21 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.new: MaxOccupancy =< 0.0"));

#line 273 "version_hash_table.m"
                {
#line 273 "version_hash_table.m"
                  mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_33_33, ((MR_Box) (mercury__version_hash_table__V_21_21)));
                }
#line 273 "version_hash_table.m"
              }
#line 275 "version_hash_table.m"
            else
#line 276 "version_hash_table.m"
              {
#line 276 "version_hash_table.m"
                MR_Integer mercury__version_hash_table__NumBuckets_11;
#line 276 "version_hash_table.m"
                MR_Integer mercury__version_hash_table__MaxOccupants_12;
#line 276 "version_hash_table.m"
                MR_Box mercury__version_hash_table__Buckets_13;
#line 276 "version_hash_table.m"
                MR_Float mercury__version_hash_table__V_24_24;
#line 276 "version_hash_table.m"
                MR_Float mercury__version_hash_table__V_25_25;

#line 276 "version_hash_table.m"
                {
#line 276 "version_hash_table.m"
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

#line 5798 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_25_25  = FloatVal;
#line 81 "float.opt"
}
#line 277 "version_hash_table.m"
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

#line 5820 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__MaxOccupants_12  = Ceil;
#line 84 "float.opt"
}
#line 281 "version_hash_table.m"
                if ((mercury__version_hash_table__NeedSafety_9 == (MR_Integer) 0))
#line 282 "version_hash_table.m"
                  {
#line 282 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__TypeCtorInfo_36_36 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 282 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__TypeInfo_37_37;
#line 282 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__V_26_26;
#line 283 "version_hash_table.m"
                    MR_Box mercury__version_hash_table__conv0_Buckets_13;

#line 5840 "version_hash_table.c"
                    {
#line 5842 "version_hash_table.c"
                      mercury__version_hash_table__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5844 "version_hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_37_37, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_36_36));
#line 5846 "version_hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_37_37, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_29));
#line 5848 "version_hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_37_37, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_30));
#line 5850 "version_hash_table.c"
                    }
#line 283 "version_hash_table.m"
                    mercury__version_hash_table__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 283 "version_hash_table.m"
                    {
#line 283 "version_hash_table.m"
                      mercury__version_hash_table__conv0_Buckets_13 = mercury__version_array__unsafe_new_2_f_0(mercury__version_hash_table__TypeInfo_37_37, mercury__version_hash_table__NumBuckets_11, ((MR_Box) (mercury__version_hash_table__V_26_26)));
                    }
#line 283 "version_hash_table.m"
                    mercury__version_hash_table__Buckets_13 = (MR_Box) mercury__version_hash_table__conv0_Buckets_13;
#line 282 "version_hash_table.m"
                  }
#line 281 "version_hash_table.m"
                else
#line 279 "version_hash_table.m"
                  {
#line 279 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__TypeCtorInfo_34_34 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 279 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__TypeInfo_35_35;
#line 279 "version_hash_table.m"
                    MR_Word mercury__version_hash_table__V_27_27;
#line 280 "version_hash_table.m"
                    MR_Box mercury__version_hash_table__conv1_Buckets_13;

#line 5876 "version_hash_table.c"
                    {
#line 5878 "version_hash_table.c"
                      mercury__version_hash_table__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5880 "version_hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_35_35, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_34_34));
#line 5882 "version_hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_35_35, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_29));
#line 5884 "version_hash_table.c"
                      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_35_35, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_30));
#line 5886 "version_hash_table.c"
                    }
#line 280 "version_hash_table.m"
                    mercury__version_hash_table__V_27_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 280 "version_hash_table.m"
                    {
#line 280 "version_hash_table.m"
                      mercury__version_hash_table__conv1_Buckets_13 = mercury__version_array__init_2_f_0(mercury__version_hash_table__TypeInfo_35_35, mercury__version_hash_table__NumBuckets_11, ((MR_Box) (mercury__version_hash_table__V_27_27)));
                    }
#line 280 "version_hash_table.m"
                    mercury__version_hash_table__Buckets_13 = (MR_Box) mercury__version_hash_table__conv1_Buckets_13;
#line 279 "version_hash_table.m"
                  }
#line 285 "version_hash_table.m"
                {
#line 285 "version_hash_table.m"
                  mercury__version_hash_table__HT_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 285 "version_hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 0) = ((MR_Box) ((MR_Integer) 0));
#line 285 "version_hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_12));
#line 285 "version_hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_6));
#line 285 "version_hash_table.m"
                  MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_10, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_13));
#line 285 "version_hash_table.m"
                }
#line 276 "version_hash_table.m"
              }
#line 275 "version_hash_table.m"
          }
#line 272 "version_hash_table.m"
      }
#line 269 "version_hash_table.m"
    return mercury__version_hash_table__HT_10;
#line 269 "version_hash_table.m"
  }
#line 263 "version_hash_table.m"
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
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_8,
#line 211 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_9)
#line 211 "version_hash_table.m"
{
#line 782 "version_hash_table.m"
  {
#line 782 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 782 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 782 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
#line 782 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_11_11 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 782 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_29;
#line 783 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 783 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 783 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_23_31;

#line 5966 "version_hash_table.c"
    {
#line 5968 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5970 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_22));
#line 5972 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_16));
#line 5974 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_17));
#line 5976 "version_hash_table.c"
    }
#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_5

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_11_11 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 5991 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_29  = N;
#line 158 "version_array.opt"
}
#line 183 "version_array.opt"
    {
#line 183 "version_array.opt"
      return mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__TypeInfo_for_T_18, mercury__version_hash_table__P_5, mercury__version_hash_table__TypeInfo_23_23, mercury__version_hash_table__V_11_11, (MR_Integer) 0, mercury__version_hash_table__V_11_29, mercury__version_hash_table__STATE_VARIABLE_A_0_8, mercury__version_hash_table__STATE_VARIABLE_A_9);
    }
#line 782 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 782 "version_hash_table.m"
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
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_8,
#line 210 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_9)
#line 210 "version_hash_table.m"
{
#line 782 "version_hash_table.m"
  {
#line 782 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 782 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 782 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
#line 782 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_11_11 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 782 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_29;
#line 783 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 783 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 783 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_23_31;

#line 6050 "version_hash_table.c"
    {
#line 6052 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6054 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_22));
#line 6056 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_16));
#line 6058 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_17));
#line 6060 "version_hash_table.c"
    }
#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_4

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_11_11 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6075 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_29  = N;
#line 158 "version_array.opt"
}
#line 183 "version_array.opt"
    {
#line 183 "version_array.opt"
      return mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__TypeInfo_for_T_18, mercury__version_hash_table__P_5, mercury__version_hash_table__TypeInfo_23_23, mercury__version_hash_table__V_11_11, (MR_Integer) 0, mercury__version_hash_table__V_11_29, mercury__version_hash_table__STATE_VARIABLE_A_0_8, mercury__version_hash_table__STATE_VARIABLE_A_9);
    }
#line 782 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 782 "version_hash_table.m"
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
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_8,
#line 209 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_9)
#line 209 "version_hash_table.m"
{
#line 782 "version_hash_table.m"
  {
#line 782 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 782 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 782 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
#line 782 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_11_11 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 782 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_29;
#line 783 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 783 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 783 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_23_31;

#line 6134 "version_hash_table.c"
    {
#line 6136 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6138 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_22));
#line 6140 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_16));
#line 6142 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_17));
#line 6144 "version_hash_table.c"
    }
#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_3

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_11_11 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6159 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_29  = N;
#line 158 "version_array.opt"
}
#line 183 "version_array.opt"
    {
#line 183 "version_array.opt"
      return mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__TypeInfo_for_T_18, mercury__version_hash_table__P_5, mercury__version_hash_table__TypeInfo_23_23, mercury__version_hash_table__V_11_11, (MR_Integer) 0, mercury__version_hash_table__V_11_29, mercury__version_hash_table__STATE_VARIABLE_A_0_8, mercury__version_hash_table__STATE_VARIABLE_A_9);
    }
#line 782 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 782 "version_hash_table.m"
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
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_8,
#line 208 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_9)
#line 208 "version_hash_table.m"
{
#line 782 "version_hash_table.m"
  {
#line 782 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 782 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 782 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
#line 782 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_11_11 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 782 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_29;
#line 783 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 783 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 783 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_23_31;

#line 6218 "version_hash_table.c"
    {
#line 6220 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6222 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_22));
#line 6224 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_16));
#line 6226 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_17));
#line 6228 "version_hash_table.c"
    }
#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_2

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_11_11 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6243 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_29  = N;
#line 158 "version_array.opt"
}
#line 183 "version_array.opt"
    {
#line 183 "version_array.opt"
      mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__TypeInfo_for_T_18, mercury__version_hash_table__P_5, mercury__version_hash_table__TypeInfo_23_23, mercury__version_hash_table__V_11_11, (MR_Integer) 0, mercury__version_hash_table__V_11_29, mercury__version_hash_table__STATE_VARIABLE_A_0_8, mercury__version_hash_table__STATE_VARIABLE_A_9);
#line 183 "version_array.opt"
      return;
    }
#line 782 "version_hash_table.m"
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
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_8,
#line 207 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_9)
#line 207 "version_hash_table.m"
{
#line 782 "version_hash_table.m"
  {
#line 782 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 782 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 782 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
#line 782 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_11_11 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 782 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_29;
#line 783 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 783 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 783 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_23_31;

#line 6302 "version_hash_table.c"
    {
#line 6304 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6306 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_22));
#line 6308 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_16));
#line 6310 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_17));
#line 6312 "version_hash_table.c"
    }
#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_1

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_11_11 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6327 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_29  = N;
#line 158 "version_array.opt"
}
#line 183 "version_array.opt"
    {
#line 183 "version_array.opt"
      mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__TypeInfo_for_T_18, mercury__version_hash_table__P_5, mercury__version_hash_table__TypeInfo_23_23, mercury__version_hash_table__V_11_11, (MR_Integer) 0, mercury__version_hash_table__V_11_29, mercury__version_hash_table__STATE_VARIABLE_A_0_8, mercury__version_hash_table__STATE_VARIABLE_A_9);
#line 183 "version_array.opt"
      return;
    }
#line 782 "version_hash_table.m"
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
  MR_Box mercury__version_hash_table__STATE_VARIABLE_A_0_8,
#line 206 "version_hash_table.m"
  MR_Box * mercury__version_hash_table__STATE_VARIABLE_A_9)
#line 206 "version_hash_table.m"
{
#line 782 "version_hash_table.m"
  {
#line 782 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 782 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_22_22 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 782 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_23_23;
#line 782 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_11_11 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 782 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_29;
#line 783 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 783 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 783 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_23_31;

#line 6386 "version_hash_table.c"
    {
#line 6388 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6390 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_22_22));
#line 6392 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_16));
#line 6394 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_23_23, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_17));
#line 6396 "version_hash_table.c"
    }
#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_11_11 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6411 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_29  = N;
#line 158 "version_array.opt"
}
#line 183 "version_array.opt"
    {
#line 183 "version_array.opt"
      mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_16, mercury__version_hash_table__TypeInfo_for_V_17, mercury__version_hash_table__TypeInfo_for_T_18, mercury__version_hash_table__P_5, mercury__version_hash_table__TypeInfo_23_23, mercury__version_hash_table__V_11_11, (MR_Integer) 0, mercury__version_hash_table__V_11_29, mercury__version_hash_table__STATE_VARIABLE_A_0_8, mercury__version_hash_table__STATE_VARIABLE_A_9);
#line 183 "version_array.opt"
      return;
    }
#line 782 "version_hash_table.m"
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
#line 762 "version_hash_table.m"
  {
#line 762 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 762 "version_hash_table.m"
    MR_Box mercury__version_hash_table__X_8;
#line 762 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_20_20 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 762 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_21_21;
#line 762 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_10_10 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 3)));
#line 762 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_27;
#line 763 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 0)));
#line 763 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 1)));
#line 763 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, (MR_Integer) 2)));
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_21_29;

#line 6470 "version_hash_table.c"
    {
#line 6472 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6474 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_21_21, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_20_20));
#line 6476 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_21_21, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_14));
#line 6478 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_21_21, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_15));
#line 6480 "version_hash_table.c"
    }
#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__fold_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_10_10 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6495 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_27  = N;
#line 158 "version_array.opt"
}
#line 183 "version_array.opt"
    {
#line 183 "version_array.opt"
      mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_56_44_32_57_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_14, mercury__version_hash_table__TypeInfo_for_V_15, mercury__version_hash_table__TypeInfo_for_T_16, mercury__version_hash_table__F_5, mercury__version_hash_table__TypeInfo_21_21, mercury__version_hash_table__V_10_10, (MR_Integer) 0, mercury__version_hash_table__V_11_27, mercury__version_hash_table__X0_7, &mercury__version_hash_table__X_8);
    }
#line 762 "version_hash_table.m"
    return mercury__version_hash_table__X_8;
#line 762 "version_hash_table.m"
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
#line 562 "version_hash_table.m"
  {
#line 562 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 562 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_6;
#line 562 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_7_7;

#line 255 "version_hash_table.m"
    {
#line 255 "version_hash_table.m"
      mercury__version_hash_table__V_7_7 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HashPred_4, (MR_Integer) 7, (MR_Float) 0.90000000000000002, (MR_Integer) 1);
    }
#line 563 "version_hash_table.m"
    {
#line 563 "version_hash_table.m"
      mercury__version_hash_table__from_assoc_list_2_3_p_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__AList_5, mercury__version_hash_table__V_7_7, &mercury__version_hash_table__HT_6);
    }
#line 562 "version_hash_table.m"
    return mercury__version_hash_table__HT_6;
#line 562 "version_hash_table.m"
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
#line 559 "version_hash_table.m"
  {
#line 559 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 559 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_10;
#line 559 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_11_11;

#line 255 "version_hash_table.m"
    {
#line 255 "version_hash_table.m"
      mercury__version_hash_table__V_11_11 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_12, mercury__version_hash_table__TypeInfo_for_V_13, mercury__version_hash_table__HashPred_6, mercury__version_hash_table__N_7, mercury__version_hash_table__MaxOccupants_8, (MR_Integer) 1);
    }
#line 560 "version_hash_table.m"
    {
#line 560 "version_hash_table.m"
      mercury__version_hash_table__from_assoc_list_2_3_p_0(mercury__version_hash_table__TypeInfo_for_K_12, mercury__version_hash_table__TypeInfo_for_V_13, mercury__version_hash_table__AList_9, mercury__version_hash_table__V_11_11, &mercury__version_hash_table__HT_10);
    }
#line 559 "version_hash_table.m"
    return mercury__version_hash_table__HT_10;
#line 559 "version_hash_table.m"
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
#line 540 "version_hash_table.m"
  {
#line 540 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 540 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL_4;
#line 540 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_16_16 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 540 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_17_17;
#line 540 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_6_6 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 3)));
#line 540 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 540 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_27;
#line 541 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 0)));
#line 541 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 1)));
#line 541 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 2)));
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_17_31;

#line 6632 "version_hash_table.c"
    {
#line 6634 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6636 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_17_17, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_16_16));
#line 6638 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_17_17, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_11));
#line 6640 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_17_17, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_12));
#line 6642 "version_hash_table.c"
    }
#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__to_assoc_list_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_6_6 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6657 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_11_27  = N;
#line 158 "version_array.opt"
}
#line 183 "version_array.opt"
    {
#line 183 "version_array.opt"
      mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_57_44_32_49_48_93_95_48_6_p_in__version_array_0(mercury__version_hash_table__TypeInfo_for_K_11, mercury__version_hash_table__TypeInfo_for_V_12, mercury__version_hash_table__TypeInfo_17_17, mercury__version_hash_table__V_6_6, (MR_Integer) 0, mercury__version_hash_table__V_11_27, mercury__version_hash_table__V_7_7, &mercury__version_hash_table__AL_4);
    }
#line 540 "version_hash_table.m"
    return mercury__version_hash_table__AL_4;
#line 540 "version_hash_table.m"
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
#line 421 "version_hash_table.m"
  {
#line 421 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 421 "version_hash_table.m"
    {
#line 421 "version_hash_table.m"
      return mercury__version_hash_table__succeeded = mercury__version_hash_table__search_2_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HT_4, mercury__version_hash_table__K_5, mercury__version_hash_table__HeadVar__3_3);
    }
#line 421 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 421 "version_hash_table.m"
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
#line 423 "version_hash_table.m"
  {
#line 423 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 423 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_15_15;
#line 423 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_16_16;
#line 423 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__H_7;
#line 423 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL_8;
#line 423 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_9_9;
#line 423 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_20;
#line 423 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 2)));
#line 423 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_22_22;
#line 423 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_27_27;
#line 423 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_37;
#line 423 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_38_38;
#line 308 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 0)));
#line 308 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 1)));
#line 308 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_25_25 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 3)));
#line 323 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_43;
#line 300 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_28_28;
#line 300 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_29_29;
#line 300 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_30_30;
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_11_44;
#line 316 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 316 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_37;
#line 425 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_10_10;
#line 425 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_11_11;
#line 425 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_12_12;
#line 154 "version_array.opt"
    MR_Box mercury__version_hash_table__conv2_AL_8;

#line 326 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__search_2_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__V_21_21 ;
		{
#line 326 "version_hash_table.m"

    HashPred = HashPred0;

#line 6791 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_20  = HashPred;
#line 326 "version_hash_table.m"
}
#line 300 "version_hash_table.m"
    mercury__version_hash_table__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 0)));
#line 300 "version_hash_table.m"
    mercury__version_hash_table__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 1)));
#line 300 "version_hash_table.m"
    mercury__version_hash_table__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 2)));
#line 300 "version_hash_table.m"
    mercury__version_hash_table__V_27_27 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 3)));
#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__search_2_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_27_27 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 6819 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_22_22  = N;
#line 158 "version_array.opt"
}
#line 316 "version_hash_table.m"
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_20, (MR_Integer) 1)));
#line 316 "version_hash_table.m"
    {
#line 316 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_20), mercury__version_hash_table__K_5, &mercury__version_hash_table__conv1_Hash_37);
    }
#line 316 "version_hash_table.m"
    mercury__version_hash_table__Hash_37 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_37);
#line 318 "version_hash_table.m"
    mercury__version_hash_table__V_38_38 = (mercury__version_hash_table__V_22_22 - (MR_Integer) 1);
#line 318 "version_hash_table.m"
    mercury__version_hash_table__H_7 = (mercury__version_hash_table__Hash_37 & mercury__version_hash_table__V_38_38);
#line 425 "version_hash_table.m"
    mercury__version_hash_table__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 0)));
#line 425 "version_hash_table.m"
    mercury__version_hash_table__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 1)));
#line 425 "version_hash_table.m"
    mercury__version_hash_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 2)));
#line 425 "version_hash_table.m"
    mercury__version_hash_table__V_9_9 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, (MR_Integer) 3)));
#line 6847 "version_hash_table.c"
    mercury__version_hash_table__TypeCtorInfo_15_15 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 6849 "version_hash_table.c"
    {
#line 6851 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6853 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_16_16, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_15_15));
#line 6855 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_16_16, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_13));
#line 6857 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_16_16, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_14));
#line 6859 "version_hash_table.c"
    }
#line 154 "version_array.opt"
    {
#line 154 "version_array.opt"
      mercury__version_hash_table__conv2_AL_8 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_16_16, (MR_Box) mercury__version_hash_table__V_9_9, mercury__version_hash_table__H_7);
    }
#line 154 "version_array.opt"
    mercury__version_hash_table__AL_8 = ((MR_Word) mercury__version_hash_table__conv2_AL_8);
#line 426 "version_hash_table.m"
    {
#line 426 "version_hash_table.m"
      return mercury__version_hash_table__succeeded = mercury__version_hash_table__alist_search_3_p_0(mercury__version_hash_table__TypeInfo_for_K_13, mercury__version_hash_table__TypeInfo_for_V_14, mercury__version_hash_table__AL_8, mercury__version_hash_table__K_5, mercury__version_hash_table__V_6);
    }
#line 423 "version_hash_table.m"
    return mercury__version_hash_table__succeeded;
#line 423 "version_hash_table.m"
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
#line 492 "version_hash_table.m"
  {
#line 492 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 492 "version_hash_table.m"
    MR_Box mercury__version_hash_table__HeadVar__3_3;
#line 492 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_10;

#line 493 "version_hash_table.m"
    {
#line 493 "version_hash_table.m"
      mercury__version_hash_table__succeeded = mercury__version_hash_table__search_2_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HT_5, mercury__version_hash_table__K_4, &mercury__version_hash_table__V_10);
    }
#line 492 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 492 "version_hash_table.m"
      mercury__version_hash_table__HeadVar__3_3 = mercury__version_hash_table__V_10;
#line 492 "version_hash_table.m"
    else
#line 495 "version_hash_table.m"
      {
#line 492 "version_hash_table.m"
        {
#line 492 "version_hash_table.m"
          mercury__version_hash_table__HeadVar__3_3 = mercury__require__func_error_1_f_0(mercury__version_hash_table__TypeInfo_for_V_7, (MR_String) "version_hash_table.lookup: key not found");
        }
#line 495 "version_hash_table.m"
      }
#line 492 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__3_3;
#line 492 "version_hash_table.m"
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
#line 492 "version_hash_table.m"
  {
#line 492 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 492 "version_hash_table.m"
    MR_Box mercury__version_hash_table__HeadVar__3_3;
#line 492 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_6;

#line 493 "version_hash_table.m"
    {
#line 493 "version_hash_table.m"
      mercury__version_hash_table__succeeded = mercury__version_hash_table__search_2_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HT_4, mercury__version_hash_table__K_5, &mercury__version_hash_table__V_6);
    }
#line 492 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 492 "version_hash_table.m"
      mercury__version_hash_table__HeadVar__3_3 = mercury__version_hash_table__V_6;
#line 492 "version_hash_table.m"
    else
#line 495 "version_hash_table.m"
      {
#line 492 "version_hash_table.m"
        {
#line 492 "version_hash_table.m"
          mercury__version_hash_table__HeadVar__3_3 = mercury__require__func_error_1_f_0(mercury__version_hash_table__TypeInfo_for_V_9, (MR_String) "version_hash_table.lookup: key not found");
        }
#line 495 "version_hash_table.m"
      }
#line 492 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__3_3;
#line 492 "version_hash_table.m"
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
#line 514 "version_hash_table.m"
  {
#line 514 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 514 "version_hash_table.m"
    {
#line 514 "version_hash_table.m"
      *mercury__version_hash_table__HeadVar__3_3 = mercury__version_hash_table__delete_2_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HT_5, mercury__version_hash_table__K_4);
    }
#line 514 "version_hash_table.m"
  }
#line 162 "version_hash_table.m"
}

#line 161 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__delete_2_f_0(
#line 161 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_21,
#line 161 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_22,
#line 161 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT0_4,
#line 161 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_5)
#line 161 "version_hash_table.m"
{
#line 502 "version_hash_table.m"
  {
#line 502 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 502 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_6;
#line 502 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_23_23;
#line 502 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_24_24;
#line 502 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__H_7;
#line 502 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL0_8;
#line 502 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_16_16;
#line 502 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_28;
#line 502 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 2)));
#line 502 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_30_30;
#line 502 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_35_35;
#line 502 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_45;
#line 502 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_46_46;
#line 308 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 0)));
#line 308 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 1)));
#line 308 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_33_33 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 3)));
#line 323 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_55;
#line 300 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_36_36;
#line 300 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_37_37;
#line 300 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_38_38;
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_11_56;
#line 316 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 316 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_45;
#line 504 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_18_18;
#line 504 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_19_19;
#line 504 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_20_20;
#line 154 "version_array.opt"
    MR_Box mercury__version_hash_table__conv2_AL0_8;
#line 510 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL_9;

#line 326 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__delete_2_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__V_29_29 ;
		{
#line 326 "version_hash_table.m"

    HashPred = HashPred0;

#line 7093 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_28  = HashPred;
#line 326 "version_hash_table.m"
}
#line 300 "version_hash_table.m"
    mercury__version_hash_table__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 0)));
#line 300 "version_hash_table.m"
    mercury__version_hash_table__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 1)));
#line 300 "version_hash_table.m"
    mercury__version_hash_table__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 2)));
#line 300 "version_hash_table.m"
    mercury__version_hash_table__V_35_35 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 3)));
#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__delete_2_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_35_35 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 7121 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_30_30  = N;
#line 158 "version_array.opt"
}
#line 316 "version_hash_table.m"
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_28, (MR_Integer) 1)));
#line 316 "version_hash_table.m"
    {
#line 316 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_28), mercury__version_hash_table__K_5, &mercury__version_hash_table__conv1_Hash_45);
    }
#line 316 "version_hash_table.m"
    mercury__version_hash_table__Hash_45 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_45);
#line 318 "version_hash_table.m"
    mercury__version_hash_table__V_46_46 = (mercury__version_hash_table__V_30_30 - (MR_Integer) 1);
#line 318 "version_hash_table.m"
    mercury__version_hash_table__H_7 = (mercury__version_hash_table__Hash_45 & mercury__version_hash_table__V_46_46);
#line 504 "version_hash_table.m"
    mercury__version_hash_table__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 0)));
#line 504 "version_hash_table.m"
    mercury__version_hash_table__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 1)));
#line 504 "version_hash_table.m"
    mercury__version_hash_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 2)));
#line 504 "version_hash_table.m"
    mercury__version_hash_table__V_16_16 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 3)));
#line 7149 "version_hash_table.c"
    mercury__version_hash_table__TypeCtorInfo_23_23 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 7151 "version_hash_table.c"
    {
#line 7153 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7155 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_24, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_23_23));
#line 7157 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_24, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_21));
#line 7159 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_24_24, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_22));
#line 7161 "version_hash_table.c"
    }
#line 154 "version_array.opt"
    {
#line 154 "version_array.opt"
      mercury__version_hash_table__conv2_AL0_8 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_24_24, (MR_Box) mercury__version_hash_table__V_16_16, mercury__version_hash_table__H_7);
    }
#line 154 "version_array.opt"
    mercury__version_hash_table__AL0_8 = ((MR_Word) mercury__version_hash_table__conv2_AL0_8);
#line 505 "version_hash_table.m"
    {
#line 505 "version_hash_table.m"
      mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_109_111_118_101_95_95_91_50_93_95_48_3_p_0(mercury__version_hash_table__TypeInfo_for_K_21, mercury__version_hash_table__AL0_8, mercury__version_hash_table__K_5, &mercury__version_hash_table__AL_9);
    }
#line 510 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 506 "version_hash_table.m"
      {
#line 506 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__NumOccupants0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 0)));
#line 506 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__MaxOccupants_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 1)));
#line 506 "version_hash_table.m"
        MR_Word mercury__version_hash_table__HashPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 2)));
#line 506 "version_hash_table.m"
        MR_Box mercury__version_hash_table__Buckets0_13 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_4, (MR_Integer) 3)));
#line 506 "version_hash_table.m"
        MR_Box mercury__version_hash_table__Buckets_14;
#line 506 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__NumOccupants_15;
#line 157 "version_array.opt"
        MR_Box mercury__version_hash_table__conv3_Buckets_14;

#line 157 "version_array.opt"
        {
#line 157 "version_array.opt"
          mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_24_24, mercury__version_hash_table__H_7, ((MR_Box) (mercury__version_hash_table__AL_9)), (MR_Box) mercury__version_hash_table__Buckets0_13, &mercury__version_hash_table__conv3_Buckets_14);
        }
#line 157 "version_array.opt"
        mercury__version_hash_table__Buckets_14 = (MR_Box) mercury__version_hash_table__conv3_Buckets_14;
#line 508 "version_hash_table.m"
        mercury__version_hash_table__NumOccupants_15 = (mercury__version_hash_table__NumOccupants0_10 - (MR_Integer) 1);
#line 509 "version_hash_table.m"
        {
#line 509 "version_hash_table.m"
          mercury__version_hash_table__HT_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 509 "version_hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants_15));
#line 509 "version_hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_11));
#line 509 "version_hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_12));
#line 509 "version_hash_table.m"
          MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_6, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_14));
#line 509 "version_hash_table.m"
        }
#line 506 "version_hash_table.m"
      }
#line 510 "version_hash_table.m"
    else
#line 511 "version_hash_table.m"
      mercury__version_hash_table__HT_6 = mercury__version_hash_table__HT0_4;
#line 502 "version_hash_table.m"
    return mercury__version_hash_table__HT_6;
#line 502 "version_hash_table.m"
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
#line 488 "version_hash_table.m"
  {
#line 488 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 488 "version_hash_table.m"
    {
#line 488 "version_hash_table.m"
      *mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__det_update_3_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HT_7, mercury__version_hash_table__K_5, mercury__version_hash_table__V_6);
    }
#line 488 "version_hash_table.m"
  }
#line 153 "version_hash_table.m"
}

#line 152 "version_hash_table.m"
MR_Word MR_CALL 
mercury__version_hash_table__det_update_3_f_0(
#line 152 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_28,
#line 152 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_29,
#line 152 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT0_5,
#line 152 "version_hash_table.m"
  MR_Box mercury__version_hash_table__K_6,
#line 152 "version_hash_table.m"
  MR_Box mercury__version_hash_table__V_7)
#line 152 "version_hash_table.m"
{
#line 478 "version_hash_table.m"
  {
#line 478 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 478 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_8;
#line 478 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_30_30;
#line 478 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_31_31;
#line 478 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__H_9;
#line 478 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL0_10;
#line 478 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL_12;
#line 478 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_13_13;
#line 478 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_16_16;
#line 478 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_17_17;
#line 478 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_36;
#line 478 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 478 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_38_38;
#line 478 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_43_43;
#line 478 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_53;
#line 478 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_54_54;
#line 308 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 308 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 308 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_41_41 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 323 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_63;
#line 300 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_44_44;
#line 300 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_45_45;
#line 300 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_46_46;
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_11_64;
#line 316 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 316 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_53;
#line 480 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_18_18;
#line 480 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_19_19;
#line 480 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_20_20;
#line 154 "version_array.opt"
    MR_Box mercury__version_hash_table__conv2_AL0_10;
#line 483 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL1_11;
#line 486 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_21_21;
#line 486 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_22_22;
#line 486 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_23_23;
#line 157 "version_array.opt"
    MR_Box mercury__version_hash_table__conv3_V_17_17;
#line 486 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_24_24;
#line 486 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_25_25;
#line 486 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_26_26;
#line 486 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_27_27;

#line 326 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__det_update_3_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__V_37_37 ;
		{
#line 326 "version_hash_table.m"

    HashPred = HashPred0;

#line 7371 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_36  = HashPred;
#line 326 "version_hash_table.m"
}
#line 300 "version_hash_table.m"
    mercury__version_hash_table__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 300 "version_hash_table.m"
    mercury__version_hash_table__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 300 "version_hash_table.m"
    mercury__version_hash_table__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 300 "version_hash_table.m"
    mercury__version_hash_table__V_43_43 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__det_update_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_43_43 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 7399 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_38_38  = N;
#line 158 "version_array.opt"
}
#line 316 "version_hash_table.m"
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_36, (MR_Integer) 1)));
#line 316 "version_hash_table.m"
    {
#line 316 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_36), mercury__version_hash_table__K_6, &mercury__version_hash_table__conv1_Hash_53);
    }
#line 316 "version_hash_table.m"
    mercury__version_hash_table__Hash_53 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_53);
#line 318 "version_hash_table.m"
    mercury__version_hash_table__V_54_54 = (mercury__version_hash_table__V_38_38 - (MR_Integer) 1);
#line 318 "version_hash_table.m"
    mercury__version_hash_table__H_9 = (mercury__version_hash_table__Hash_53 & mercury__version_hash_table__V_54_54);
#line 480 "version_hash_table.m"
    mercury__version_hash_table__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 480 "version_hash_table.m"
    mercury__version_hash_table__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 480 "version_hash_table.m"
    mercury__version_hash_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 480 "version_hash_table.m"
    mercury__version_hash_table__V_13_13 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 7427 "version_hash_table.c"
    mercury__version_hash_table__TypeCtorInfo_30_30 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 7429 "version_hash_table.c"
    {
#line 7431 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7433 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_31_31, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_30_30));
#line 7435 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_31_31, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_28));
#line 7437 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_31_31, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_29));
#line 7439 "version_hash_table.c"
    }
#line 154 "version_array.opt"
    {
#line 154 "version_array.opt"
      mercury__version_hash_table__conv2_AL0_10 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_31_31, (MR_Box) mercury__version_hash_table__V_13_13, mercury__version_hash_table__H_9);
    }
#line 154 "version_array.opt"
    mercury__version_hash_table__AL0_10 = ((MR_Word) mercury__version_hash_table__conv2_AL0_10);
#line 481 "version_hash_table.m"
    {
#line 481 "version_hash_table.m"
      mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(mercury__version_hash_table__TypeInfo_for_K_28, mercury__version_hash_table__AL0_10, mercury__version_hash_table__K_6, mercury__version_hash_table__V_7, &mercury__version_hash_table__AL1_11);
    }
#line 483 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 482 "version_hash_table.m"
      mercury__version_hash_table__AL_12 = mercury__version_hash_table__AL1_11;
#line 483 "version_hash_table.m"
    else
#line 484 "version_hash_table.m"
      {
#line 484 "version_hash_table.m"
        MR_Word mercury__version_hash_table__TypeCtorInfo_32_32 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 484 "version_hash_table.m"
        MR_Word mercury__version_hash_table__V_14_14 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.det_update: key not found"));

#line 484 "version_hash_table.m"
        {
#line 484 "version_hash_table.m"
          mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_32_32, ((MR_Box) (mercury__version_hash_table__V_14_14)));
        }
#line 484 "version_hash_table.m"
      }
#line 486 "version_hash_table.m"
    mercury__version_hash_table__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 486 "version_hash_table.m"
    mercury__version_hash_table__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 486 "version_hash_table.m"
    mercury__version_hash_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 486 "version_hash_table.m"
    mercury__version_hash_table__V_16_16 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 157 "version_array.opt"
    {
#line 157 "version_array.opt"
      mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_31_31, mercury__version_hash_table__H_9, ((MR_Box) (mercury__version_hash_table__AL_12)), (MR_Box) mercury__version_hash_table__V_16_16, &mercury__version_hash_table__conv3_V_17_17);
    }
#line 157 "version_array.opt"
    mercury__version_hash_table__V_17_17 = (MR_Box) mercury__version_hash_table__conv3_V_17_17;
#line 486 "version_hash_table.m"
    mercury__version_hash_table__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 486 "version_hash_table.m"
    mercury__version_hash_table__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 486 "version_hash_table.m"
    mercury__version_hash_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 486 "version_hash_table.m"
    mercury__version_hash_table__V_27_27 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 486 "version_hash_table.m"
    {
#line 486 "version_hash_table.m"
      mercury__version_hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 486 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 0) = ((MR_Box) (mercury__version_hash_table__V_24_24));
#line 486 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 1) = ((MR_Box) (mercury__version_hash_table__V_25_25));
#line 486 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 2) = ((MR_Box) (mercury__version_hash_table__V_26_26));
#line 486 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 3) = ((MR_Box) (mercury__version_hash_table__V_17_17));
#line 486 "version_hash_table.m"
    }
#line 478 "version_hash_table.m"
    return mercury__version_hash_table__HT_8;
#line 478 "version_hash_table.m"
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
#line 474 "version_hash_table.m"
  {
#line 474 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 474 "version_hash_table.m"
    {
#line 474 "version_hash_table.m"
      *mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__det_insert_3_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HT_7, mercury__version_hash_table__K_5, mercury__version_hash_table__V_6);
    }
#line 474 "version_hash_table.m"
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
#line 448 "version_hash_table.m"
  {
#line 448 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 448 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_8;
#line 448 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_29_29;
#line 448 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_30_30;
#line 448 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__H_9;
#line 448 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumOccupants0_10;
#line 448 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__MaxOccupants_11;
#line 448 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_12;
#line 448 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets0_13;
#line 448 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL0_14;
#line 448 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL_15;
#line 448 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_22;
#line 448 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumOccupants_23;
#line 448 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_47;
#line 448 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 448 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_49_49;
#line 448 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_54_54;
#line 448 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_64;
#line 448 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_65_65;
#line 308 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 308 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 308 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_52_52 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 323 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_74;
#line 300 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_55_55;
#line 300 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_56_56;
#line 300 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_57_57;
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_11_75;
#line 316 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 316 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_64;
#line 154 "version_array.opt"
    MR_Box mercury__version_hash_table__conv2_AL0_14;
#line 157 "version_array.opt"
    MR_Box mercury__version_hash_table__conv3_Buckets_22;

#line 326 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__det_insert_3_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__V_48_48 ;
		{
#line 326 "version_hash_table.m"

    HashPred = HashPred0;

#line 7642 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_47  = HashPred;
#line 326 "version_hash_table.m"
}
#line 300 "version_hash_table.m"
    mercury__version_hash_table__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 300 "version_hash_table.m"
    mercury__version_hash_table__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 300 "version_hash_table.m"
    mercury__version_hash_table__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 300 "version_hash_table.m"
    mercury__version_hash_table__V_54_54 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__det_insert_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_54_54 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 7670 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_49_49  = N;
#line 158 "version_array.opt"
}
#line 316 "version_hash_table.m"
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_47, (MR_Integer) 1)));
#line 316 "version_hash_table.m"
    {
#line 316 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_47), mercury__version_hash_table__K_6, &mercury__version_hash_table__conv1_Hash_64);
    }
#line 316 "version_hash_table.m"
    mercury__version_hash_table__Hash_64 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_64);
#line 318 "version_hash_table.m"
    mercury__version_hash_table__V_65_65 = (mercury__version_hash_table__V_49_49 - (MR_Integer) 1);
#line 318 "version_hash_table.m"
    mercury__version_hash_table__H_9 = (mercury__version_hash_table__Hash_64 & mercury__version_hash_table__V_65_65);
#line 450 "version_hash_table.m"
    mercury__version_hash_table__NumOccupants0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 450 "version_hash_table.m"
    mercury__version_hash_table__MaxOccupants_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 450 "version_hash_table.m"
    mercury__version_hash_table__HashPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 450 "version_hash_table.m"
    mercury__version_hash_table__Buckets0_13 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 7698 "version_hash_table.c"
    mercury__version_hash_table__TypeCtorInfo_29_29 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 7700 "version_hash_table.c"
    {
#line 7702 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7704 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_30_30, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_29_29));
#line 7706 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_30_30, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_27));
#line 7708 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_30_30, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_28));
#line 7710 "version_hash_table.c"
    }
#line 154 "version_array.opt"
    {
#line 154 "version_array.opt"
      mercury__version_hash_table__conv2_AL0_14 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_30_30, (MR_Box) mercury__version_hash_table__Buckets0_13, mercury__version_hash_table__H_9);
    }
#line 154 "version_array.opt"
    mercury__version_hash_table__AL0_14 = ((MR_Word) mercury__version_hash_table__conv2_AL0_14);
#line 455 "version_hash_table.m"
    if ((mercury__version_hash_table__AL0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 454 "version_hash_table.m"
      {
#line 454 "version_hash_table.m"
        mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 454 "version_hash_table.m"
        MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
#line 454 "version_hash_table.m"
        MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 454 "version_hash_table.m"
      }
#line 455 "version_hash_table.m"
    else
#line 455 "version_hash_table.m"
      if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_14)) == (MR_mktag((MR_Integer) 2))))
#line 462 "version_hash_table.m"
        {
#line 459 "version_hash_table.m"
          MR_Box mercury__version_hash_table__V_21_21;

#line 459 "version_hash_table.m"
          {
#line 459 "version_hash_table.m"
            mercury__version_hash_table__succeeded = mercury__version_hash_table__alist_search_3_p_0(mercury__version_hash_table__TypeInfo_for_K_27, mercury__version_hash_table__TypeInfo_for_V_28, mercury__version_hash_table__AL0_14, mercury__version_hash_table__K_6, &mercury__version_hash_table__V_21_21);
          }
#line 462 "version_hash_table.m"
          if (mercury__version_hash_table__succeeded)
#line 460 "version_hash_table.m"
            {
#line 460 "version_hash_table.m"
              MR_Word mercury__version_hash_table__TypeCtorInfo_31_31 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 460 "version_hash_table.m"
              MR_Word mercury__version_hash_table__V_24_24 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.det_insert: key already present"));

#line 460 "version_hash_table.m"
              {
#line 460 "version_hash_table.m"
                mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_31_31, ((MR_Box) (mercury__version_hash_table__V_24_24)));
              }
#line 460 "version_hash_table.m"
            }
#line 462 "version_hash_table.m"
          else
#line 463 "version_hash_table.m"
            {
#line 463 "version_hash_table.m"
              mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 463 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
#line 463 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 463 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 2) = ((MR_Box) (mercury__version_hash_table__AL0_14));
#line 463 "version_hash_table.m"
            }
#line 462 "version_hash_table.m"
        }
#line 455 "version_hash_table.m"
      else
#line 462 "version_hash_table.m"
        {
#line 459 "version_hash_table.m"
          MR_Box mercury__version_hash_table__V_32_32;

#line 459 "version_hash_table.m"
          {
#line 459 "version_hash_table.m"
            mercury__version_hash_table__succeeded = mercury__version_hash_table__alist_search_3_p_0(mercury__version_hash_table__TypeInfo_for_K_27, mercury__version_hash_table__TypeInfo_for_V_28, mercury__version_hash_table__AL0_14, mercury__version_hash_table__K_6, &mercury__version_hash_table__V_32_32);
          }
#line 462 "version_hash_table.m"
          if (mercury__version_hash_table__succeeded)
#line 460 "version_hash_table.m"
            {
#line 460 "version_hash_table.m"
              MR_Word mercury__version_hash_table__TypeCtorInfo_31_35 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 460 "version_hash_table.m"
              MR_Word mercury__version_hash_table__V_33_33 = (MR_Word) ((MR_Box) ((MR_String) "version_hash_table.det_insert: key already present"));

#line 460 "version_hash_table.m"
              {
#line 460 "version_hash_table.m"
                mercury__exception__throw_1_p_0(mercury__version_hash_table__TypeCtorInfo_31_35, ((MR_Box) (mercury__version_hash_table__V_33_33)));
              }
#line 460 "version_hash_table.m"
            }
#line 462 "version_hash_table.m"
          else
#line 463 "version_hash_table.m"
            {
#line 463 "version_hash_table.m"
              mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 463 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
#line 463 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 463 "version_hash_table.m"
              MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 2) = ((MR_Box) (mercury__version_hash_table__AL0_14));
#line 463 "version_hash_table.m"
            }
#line 462 "version_hash_table.m"
        }
#line 157 "version_array.opt"
    {
#line 157 "version_array.opt"
      mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_30_30, mercury__version_hash_table__H_9, ((MR_Box) (mercury__version_hash_table__AL_15)), (MR_Box) mercury__version_hash_table__Buckets0_13, &mercury__version_hash_table__conv3_Buckets_22);
    }
#line 157 "version_array.opt"
    mercury__version_hash_table__Buckets_22 = (MR_Box) mercury__version_hash_table__conv3_Buckets_22;
#line 467 "version_hash_table.m"
    mercury__version_hash_table__NumOccupants_23 = (mercury__version_hash_table__NumOccupants0_10 + (MR_Integer) 1);
#line 468 "version_hash_table.m"
    mercury__version_hash_table__succeeded = (mercury__version_hash_table__NumOccupants_23 > mercury__version_hash_table__MaxOccupants_11);
#line 470 "version_hash_table.m"
    if (mercury__version_hash_table__succeeded)
#line 469 "version_hash_table.m"
      {
#line 469 "version_hash_table.m"
        return mercury__version_hash_table__HT_8 = mercury__version_hash_table__expand_4_f_0(mercury__version_hash_table__TypeInfo_for_K_27, mercury__version_hash_table__TypeInfo_for_V_28, mercury__version_hash_table__NumOccupants_23, mercury__version_hash_table__MaxOccupants_11, mercury__version_hash_table__HashPred_12, mercury__version_hash_table__Buckets_22);
      }
#line 470 "version_hash_table.m"
    else
#line 471 "version_hash_table.m"
      {
#line 471 "version_hash_table.m"
        mercury__version_hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 471 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants_23));
#line 471 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_11));
#line 471 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_12));
#line 471 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_22));
#line 471 "version_hash_table.m"
      }
#line 448 "version_hash_table.m"
    return mercury__version_hash_table__HT_8;
#line 448 "version_hash_table.m"
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
#line 394 "version_hash_table.m"
  {
#line 394 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 394 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__4_4;

#line 394 "version_hash_table.m"
    {
#line 394 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__set_3_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HT_6, mercury__version_hash_table__K_5, mercury__version_hash_table__V_7);
    }
#line 394 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__4_4;
#line 394 "version_hash_table.m"
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
#line 396 "version_hash_table.m"
  {
#line 396 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 396 "version_hash_table.m"
    {
#line 396 "version_hash_table.m"
      *mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__set_3_f_0(mercury__version_hash_table__TypeInfo_for_K_8, mercury__version_hash_table__TypeInfo_for_V_9, mercury__version_hash_table__HT_7, mercury__version_hash_table__K_5, mercury__version_hash_table__V_6);
    }
#line 396 "version_hash_table.m"
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
#line 353 "version_hash_table.m"
  {
#line 353 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 353 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_8;
#line 353 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_28_28;
#line 353 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_29_29;
#line 353 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__H_9;
#line 353 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumOccupants0_10;
#line 353 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__MaxOccupants_11;
#line 353 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_12;
#line 353 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets0_13;
#line 353 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL0_14;
#line 353 "version_hash_table.m"
    MR_Word mercury__version_hash_table__AL_15;
#line 353 "version_hash_table.m"
    MR_Word mercury__version_hash_table__MayExpand_16;
#line 353 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_23;
#line 353 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_33;
#line 353 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 353 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_35_35;
#line 353 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_40_40;
#line 353 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__Hash_50;
#line 353 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_51_51;
#line 308 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 308 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 308 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_38_38 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 323 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_for_K_60;
#line 300 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_41_41;
#line 300 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_42_42;
#line 300 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_43_43;
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_11_61;
#line 316 "version_hash_table.m"
    void MR_CALL (* mercury__version_hash_table__func_0)(MR_Box, MR_Box, MR_Box *);
#line 316 "version_hash_table.m"
    MR_Box mercury__version_hash_table__conv1_Hash_50;
#line 154 "version_array.opt"
    MR_Box mercury__version_hash_table__conv2_AL0_14;
#line 157 "version_array.opt"
    MR_Box mercury__version_hash_table__conv3_Buckets_23;

#line 326 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__set_3_f_0

	MR_Word HashPred0;
	MR_Word HashPred;

	HashPred0 =  mercury__version_hash_table__V_34_34 ;
		{
#line 326 "version_hash_table.m"

    HashPred = HashPred0;

#line 8021 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HashPred_33  = HashPred;
#line 326 "version_hash_table.m"
}
#line 300 "version_hash_table.m"
    mercury__version_hash_table__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 300 "version_hash_table.m"
    mercury__version_hash_table__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 300 "version_hash_table.m"
    mercury__version_hash_table__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 300 "version_hash_table.m"
    mercury__version_hash_table__V_40_40 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__set_3_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_40_40 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 8049 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_35_35  = N;
#line 158 "version_array.opt"
}
#line 316 "version_hash_table.m"
    mercury__version_hash_table__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HashPred_33, (MR_Integer) 1)));
#line 316 "version_hash_table.m"
    {
#line 316 "version_hash_table.m"
      mercury__version_hash_table__func_0(((MR_Box) mercury__version_hash_table__HashPred_33), mercury__version_hash_table__K_6, &mercury__version_hash_table__conv1_Hash_50);
    }
#line 316 "version_hash_table.m"
    mercury__version_hash_table__Hash_50 = ((MR_Integer) mercury__version_hash_table__conv1_Hash_50);
#line 318 "version_hash_table.m"
    mercury__version_hash_table__V_51_51 = (mercury__version_hash_table__V_35_35 - (MR_Integer) 1);
#line 318 "version_hash_table.m"
    mercury__version_hash_table__H_9 = (mercury__version_hash_table__Hash_50 & mercury__version_hash_table__V_51_51);
#line 355 "version_hash_table.m"
    mercury__version_hash_table__NumOccupants0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 0)));
#line 355 "version_hash_table.m"
    mercury__version_hash_table__MaxOccupants_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 1)));
#line 355 "version_hash_table.m"
    mercury__version_hash_table__HashPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 2)));
#line 355 "version_hash_table.m"
    mercury__version_hash_table__Buckets0_13 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_5, (MR_Integer) 3)));
#line 8077 "version_hash_table.c"
    mercury__version_hash_table__TypeCtorInfo_28_28 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 8079 "version_hash_table.c"
    {
#line 8081 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8083 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_29_29, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_28_28));
#line 8085 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_29_29, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_26));
#line 8087 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_29_29, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_27));
#line 8089 "version_hash_table.c"
    }
#line 154 "version_array.opt"
    {
#line 154 "version_array.opt"
      mercury__version_hash_table__conv2_AL0_14 = mercury__version_array__lookup_2_f_0(mercury__version_hash_table__TypeInfo_29_29, (MR_Box) mercury__version_hash_table__Buckets0_13, mercury__version_hash_table__H_9);
    }
#line 154 "version_array.opt"
    mercury__version_hash_table__AL0_14 = ((MR_Word) mercury__version_hash_table__conv2_AL0_14);
#line 361 "version_hash_table.m"
    if ((mercury__version_hash_table__AL0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 358 "version_hash_table.m"
      {
#line 359 "version_hash_table.m"
        {
#line 359 "version_hash_table.m"
          mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 359 "version_hash_table.m"
          MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
#line 359 "version_hash_table.m"
          MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 359 "version_hash_table.m"
        }
#line 360 "version_hash_table.m"
        mercury__version_hash_table__MayExpand_16 = (MR_Integer) 1;
#line 358 "version_hash_table.m"
      }
#line 361 "version_hash_table.m"
    else
#line 361 "version_hash_table.m"
      if (((MR_tag((MR_Word) mercury__version_hash_table__AL0_14)) == (MR_mktag((MR_Integer) 2))))
#line 375 "version_hash_table.m"
        {
#line 375 "version_hash_table.m"
          MR_Word mercury__version_hash_table__AL1_22;

#line 372 "version_hash_table.m"
          {
#line 372 "version_hash_table.m"
            mercury__version_hash_table__succeeded = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_105_115_116_95_114_101_112_108_97_99_101_95_95_91_50_93_95_48_4_p_0(mercury__version_hash_table__TypeInfo_for_K_26, mercury__version_hash_table__AL0_14, mercury__version_hash_table__K_6, mercury__version_hash_table__V_7, &mercury__version_hash_table__AL1_22);
          }
#line 375 "version_hash_table.m"
          if (mercury__version_hash_table__succeeded)
#line 373 "version_hash_table.m"
            {
#line 373 "version_hash_table.m"
              mercury__version_hash_table__AL_15 = mercury__version_hash_table__AL1_22;
#line 374 "version_hash_table.m"
              mercury__version_hash_table__MayExpand_16 = (MR_Integer) 0;
#line 373 "version_hash_table.m"
            }
#line 375 "version_hash_table.m"
          else
#line 376 "version_hash_table.m"
            {
#line 376 "version_hash_table.m"
              {
#line 376 "version_hash_table.m"
                mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 376 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
#line 376 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 376 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 2) = ((MR_Box) (mercury__version_hash_table__AL0_14));
#line 376 "version_hash_table.m"
              }
#line 377 "version_hash_table.m"
              mercury__version_hash_table__MayExpand_16 = (MR_Integer) 1;
#line 376 "version_hash_table.m"
            }
#line 375 "version_hash_table.m"
        }
#line 361 "version_hash_table.m"
      else
#line 362 "version_hash_table.m"
        {
#line 362 "version_hash_table.m"
          MR_Box mercury__version_hash_table__K0_17 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_14, (MR_Integer) 0));
#line 362 "version_hash_table.m"
          MR_Box mercury__version_hash_table___V0_18 = (MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL0_14, (MR_Integer) 1));

#line 363 "version_hash_table.m"
          {
#line 363 "version_hash_table.m"
            mercury__version_hash_table__succeeded = mercury__builtin__unify_2_p_0(mercury__version_hash_table__TypeInfo_for_K_26, mercury__version_hash_table__K0_17, mercury__version_hash_table__K_6);
          }
#line 366 "version_hash_table.m"
          if (mercury__version_hash_table__succeeded)
#line 364 "version_hash_table.m"
            {
#line 364 "version_hash_table.m"
              {
#line 364 "version_hash_table.m"
                mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K0_17;
#line 364 "version_hash_table.m"
                MR_hl_field(MR_mktag(1), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 364 "version_hash_table.m"
              }
#line 365 "version_hash_table.m"
              mercury__version_hash_table__MayExpand_16 = (MR_Integer) 0;
#line 364 "version_hash_table.m"
            }
#line 366 "version_hash_table.m"
          else
#line 367 "version_hash_table.m"
            {
#line 367 "version_hash_table.m"
              {
#line 367 "version_hash_table.m"
                mercury__version_hash_table__AL_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 367 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 0) = mercury__version_hash_table__K_6;
#line 367 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 1) = mercury__version_hash_table__V_7;
#line 367 "version_hash_table.m"
                MR_hl_field(MR_mktag(2), mercury__version_hash_table__AL_15, 2) = ((MR_Box) (mercury__version_hash_table__AL0_14));
#line 367 "version_hash_table.m"
              }
#line 368 "version_hash_table.m"
              mercury__version_hash_table__MayExpand_16 = (MR_Integer) 1;
#line 367 "version_hash_table.m"
            }
#line 362 "version_hash_table.m"
        }
#line 157 "version_array.opt"
    {
#line 157 "version_array.opt"
      mercury__version_array__set_4_p_0(mercury__version_hash_table__TypeInfo_29_29, mercury__version_hash_table__H_9, ((MR_Box) (mercury__version_hash_table__AL_15)), (MR_Box) mercury__version_hash_table__Buckets0_13, &mercury__version_hash_table__conv3_Buckets_23);
    }
#line 157 "version_array.opt"
    mercury__version_hash_table__Buckets_23 = (MR_Box) mercury__version_hash_table__conv3_Buckets_23;
#line 384 "version_hash_table.m"
    if ((mercury__version_hash_table__MayExpand_16 == (MR_Integer) 0))
#line 383 "version_hash_table.m"
      {
#line 383 "version_hash_table.m"
        mercury__version_hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 383 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants0_10));
#line 383 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_11));
#line 383 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_12));
#line 383 "version_hash_table.m"
        MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_23));
#line 383 "version_hash_table.m"
      }
#line 384 "version_hash_table.m"
    else
#line 385 "version_hash_table.m"
      {
#line 385 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__NumOccupants_24 = (mercury__version_hash_table__NumOccupants0_10 + (MR_Integer) 1);

#line 387 "version_hash_table.m"
        mercury__version_hash_table__succeeded = (mercury__version_hash_table__NumOccupants_24 > mercury__version_hash_table__MaxOccupants_11);
#line 389 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 388 "version_hash_table.m"
          {
#line 388 "version_hash_table.m"
            return mercury__version_hash_table__HT_8 = mercury__version_hash_table__expand_4_f_0(mercury__version_hash_table__TypeInfo_for_K_26, mercury__version_hash_table__TypeInfo_for_V_27, mercury__version_hash_table__NumOccupants_24, mercury__version_hash_table__MaxOccupants_11, mercury__version_hash_table__HashPred_12, mercury__version_hash_table__Buckets_23);
          }
#line 389 "version_hash_table.m"
        else
#line 390 "version_hash_table.m"
          {
#line 390 "version_hash_table.m"
            mercury__version_hash_table__HT_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 390 "version_hash_table.m"
            MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants_24));
#line 390 "version_hash_table.m"
            MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_11));
#line 390 "version_hash_table.m"
            MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_12));
#line 390 "version_hash_table.m"
            MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_8, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_23));
#line 390 "version_hash_table.m"
          }
#line 385 "version_hash_table.m"
      }
#line 353 "version_hash_table.m"
    return mercury__version_hash_table__HT_8;
#line 353 "version_hash_table.m"
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
#line 346 "version_hash_table.m"
  {
#line 346 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 346 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HT_4;
#line 346 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_12_12 = (MR_Word) &mercury__version_hash_table__version_hash_table__type_ctor_info_hash_table_alist_2;
#line 346 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_13_13;
#line 346 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeCtorInfo_14_14 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
#line 346 "version_hash_table.m"
    MR_Word mercury__version_hash_table__TypeInfo_15_15;
#line 346 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__NumOccupants_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_3, (MR_Integer) 0)));
#line 346 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__MaxOccupants_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_3, (MR_Integer) 1)));
#line 346 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HashPred_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_3, (MR_Integer) 2)));
#line 346 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets0_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT0_3, (MR_Integer) 3)));
#line 346 "version_hash_table.m"
    MR_Box mercury__version_hash_table__Buckets_9;
#line 56 "builtin.opt"
    MR_Box mercury__version_hash_table__conv0_Copy;

#line 8318 "version_hash_table.c"
    {
#line 8320 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8322 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_13_13, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_12_12));
#line 8324 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_13_13, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_K_10));
#line 8326 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_13_13, 2) = ((MR_Box) (mercury__version_hash_table__TypeInfo_for_V_11));
#line 8328 "version_hash_table.c"
    }
#line 8330 "version_hash_table.c"
    {
#line 8332 "version_hash_table.c"
      mercury__version_hash_table__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8334 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_15_15, 0) = ((MR_Box) (mercury__version_hash_table__TypeCtorInfo_14_14));
#line 8336 "version_hash_table.c"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__TypeInfo_15_15, 1) = ((MR_Box) (mercury__version_hash_table__TypeInfo_13_13));
#line 8338 "version_hash_table.c"
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

#line 8357 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__conv0_Copy  = (MR_Box) Copy;
#line 56 "builtin.opt"
    mercury__version_hash_table__Buckets_9 = ((MR_Box) mercury__version_hash_table__conv0_Copy);
#line 56 "builtin.opt"
}
#line 349 "version_hash_table.m"
    {
#line 349 "version_hash_table.m"
      mercury__version_hash_table__HT_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 349 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, 0) = ((MR_Box) (mercury__version_hash_table__NumOccupants_5));
#line 349 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, 1) = ((MR_Box) (mercury__version_hash_table__MaxOccupants_6));
#line 349 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, 2) = ((MR_Box) (mercury__version_hash_table__HashPred_7));
#line 349 "version_hash_table.m"
      MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_4, 3) = ((MR_Box) (mercury__version_hash_table__Buckets_9));
#line 349 "version_hash_table.m"
    }
#line 346 "version_hash_table.m"
    return mercury__version_hash_table__HT_4;
#line 346 "version_hash_table.m"
  }
#line 123 "version_hash_table.m"
}

#line 113 "version_hash_table.m"
MR_Integer MR_CALL 
mercury__version_hash_table__num_occupants_1_f_0(
#line 113 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_6,
#line 113 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_7,
#line 113 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HeadVar__1_1)
#line 113 "version_hash_table.m"
{
#line 113 "version_hash_table.m"
  {
#line 113 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 113 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 0)));
#line 113 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 1)));
#line 113 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 2)));
#line 113 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_5_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HeadVar__1_1, (MR_Integer) 3)));

#line 113 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__2_2;
#line 113 "version_hash_table.m"
  }
#line 113 "version_hash_table.m"
}

#line 109 "version_hash_table.m"
MR_Integer MR_CALL 
mercury__version_hash_table__num_buckets_1_f_0(
#line 109 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_K_8,
#line 109 "version_hash_table.m"
  MR_Word mercury__version_hash_table__TypeInfo_for_V_9,
#line 109 "version_hash_table.m"
  MR_Word mercury__version_hash_table__HT_3)
#line 109 "version_hash_table.m"
{
#line 300 "version_hash_table.m"
  {
#line 300 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 300 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__HeadVar__2_2;
#line 300 "version_hash_table.m"
    MR_Box mercury__version_hash_table__V_4_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 3)));
#line 300 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 0)));
#line 300 "version_hash_table.m"
    MR_Integer mercury__version_hash_table__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 1)));
#line 300 "version_hash_table.m"
    MR_Word mercury__version_hash_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__HT_3, (MR_Integer) 2)));
#line 158 "version_array.opt"
    MR_Word mercury__version_hash_table__TypeInfo_11_12;

#line 158 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__num_buckets_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, (MR_Box) mercury__version_hash_table__V_4_4 , VA);
		{
#line 158 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 8459 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__HeadVar__2_2  = N;
#line 158 "version_array.opt"
}
#line 300 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__2_2;
#line 300 "version_hash_table.m"
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
#line 710 "version_hash_table.m"
  while (MR_TRUE)
#line 710 "version_hash_table.m"
    {
#line 710 "version_hash_table.m"
      /* tailcall optimized into a loop */
#line 710 "version_hash_table.m"
      {
#line 710 "version_hash_table.m"
        MR_bool mercury__version_hash_table__succeeded;
#line 710 "version_hash_table.m"
        MR_Integer mercury__version_hash_table__Int_5;
#line 706 "version_hash_table.m"
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
#line 710 "version_hash_table.m"
        if (mercury__version_hash_table__succeeded)
#line 654 "version_hash_table.m"
          {
#line 657 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__generic_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__version_hash_table__Int_5 ;
		{
#line 657 "version_hash_table.m"

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

#line 8554 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__H_4  = H;
#line 657 "version_hash_table.m"
}
#line 654 "version_hash_table.m"
          }
#line 710 "version_hash_table.m"
        else
#line 714 "version_hash_table.m"
          {
#line 714 "version_hash_table.m"
            MR_String mercury__version_hash_table__String_6;
#line 710 "version_hash_table.m"
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
#line 714 "version_hash_table.m"
            if (mercury__version_hash_table__succeeded)
#line 686 "version_hash_table.m"
              {
#line 686 "version_hash_table.m"
                *mercury__version_hash_table__H_4 = mercury__string__hash_1_f_0(mercury__version_hash_table__String_6);
              }
#line 714 "version_hash_table.m"
            else
#line 718 "version_hash_table.m"
              {
#line 718 "version_hash_table.m"
                MR_Float mercury__version_hash_table__Float_7;
#line 714 "version_hash_table.m"
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
#line 718 "version_hash_table.m"
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

#line 8639 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__H_4  = H;
#line 112 "float.opt"
}
#line 112 "float.opt"
                  }
#line 718 "version_hash_table.m"
                else
#line 722 "version_hash_table.m"
                  {
#line 722 "version_hash_table.m"
                    MR_Char mercury__version_hash_table__Char_8;
#line 718 "version_hash_table.m"
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
#line 722 "version_hash_table.m"
                    if (mercury__version_hash_table__succeeded)
#line 698 "version_hash_table.m"
                      {
#line 698 "version_hash_table.m"
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

#line 8694 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_63_63  = Int;
#line 63 "char.opt"
}
#line 657 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__generic_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__version_hash_table__V_63_63 ;
		{
#line 657 "version_hash_table.m"

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

#line 8735 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__H_4  = H;
#line 657 "version_hash_table.m"
}
#line 698 "version_hash_table.m"
                      }
#line 722 "version_hash_table.m"
                    else
#line 726 "version_hash_table.m"
                      {
#line 726 "version_hash_table.m"
                        MR_Word mercury__version_hash_table__Univ_9;
#line 722 "version_hash_table.m"
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
#line 726 "version_hash_table.m"
                        if (mercury__version_hash_table__succeeded)
#line 724 "version_hash_table.m"
                          {
#line 724 "version_hash_table.m"
                            MR_Word mercury__version_hash_table__TypeInfo_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__version_hash_table__Univ_9, (MR_Integer) 0)));
#line 724 "version_hash_table.m"
                            MR_Box mercury__version_hash_table__V_22_22 = (MR_hl_field(MR_mktag(0), mercury__version_hash_table__Univ_9, (MR_Integer) 1));

#line 724 "version_hash_table.m"
                            /* direct tailcall eliminated */
#line 724 "version_hash_table.m"
                            {
#line 724 "version_hash_table.m"
                              MR_Word mercury__version_hash_table__TypeInfo_for_T__tmp_copy_38 = mercury__version_hash_table__TypeInfo_44_44;
#line 724 "version_hash_table.m"
                              MR_Box mercury__version_hash_table__T__tmp_copy_3 = mercury__version_hash_table__V_22_22;

#line 724 "version_hash_table.m"
                              mercury__version_hash_table__T_3 = mercury__version_hash_table__T__tmp_copy_3;
#line 724 "version_hash_table.m"
                              mercury__version_hash_table__TypeInfo_for_T_38 = mercury__version_hash_table__TypeInfo_for_T__tmp_copy_38;
#line 724 "version_hash_table.m"
                            }
#line 724 "version_hash_table.m"
                            continue;
#line 724 "version_hash_table.m"
                          }
#line 726 "version_hash_table.m"
                        else
#line 737 "version_hash_table.m"
                          {
#line 737 "version_hash_table.m"
                            MR_Word mercury__version_hash_table__TypeInfo_45_45;
#line 737 "version_hash_table.m"
                            MR_ArrayPtr mercury__version_hash_table__Array_10;
#line 726 "version_hash_table.m"
                            MR_ArrayPtr mercury__version_hash_table__conv5_Array_10;

#line 726 "version_hash_table.m"
                            {
#line 726 "version_hash_table.m"
                              mercury__version_hash_table__succeeded = mercury__array__dynamic_cast_to_array_2_p_0(mercury__version_hash_table__TypeInfo_for_T_38, &mercury__version_hash_table__TypeInfo_45_45, mercury__version_hash_table__T_3, &mercury__version_hash_table__conv5_Array_10);
                            }
#line 726 "version_hash_table.m"
                            if (mercury__version_hash_table__succeeded)
#line 726 "version_hash_table.m"
                              {
#line 726 "version_hash_table.m"
                                mercury__version_hash_table__Array_10 = (MR_ArrayPtr) mercury__version_hash_table__conv5_Array_10;
#line 726 "version_hash_table.m"
                                mercury__version_hash_table__succeeded = MR_TRUE;
#line 726 "version_hash_table.m"
                              }
#line 737 "version_hash_table.m"
                            if (mercury__version_hash_table__succeeded)
#line 728 "version_hash_table.m"
                              {
#line 728 "version_hash_table.m"
                                {
#line 728 "version_hash_table.m"
                                  *mercury__version_hash_table__H_4 = mercury__version_hash_table__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_55_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(mercury__version_hash_table__TypeInfo_45_45, mercury__version_hash_table__Array_10, (MR_Integer) 0);
                                }
#line 728 "version_hash_table.m"
                              }
#line 737 "version_hash_table.m"
                            else
#line 739 "version_hash_table.m"
                              {
#line 739 "version_hash_table.m"
                                MR_String mercury__version_hash_table__FunctorName_15;
#line 739 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__Arity_16;
#line 739 "version_hash_table.m"
                                MR_Word mercury__version_hash_table__Args_17;
#line 739 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__H0_18;
#line 739 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__H1_19;
#line 739 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__V_73_73;
#line 739 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__V_74_74;
#line 739 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__V_75_75;
#line 739 "version_hash_table.m"
                                MR_Integer mercury__version_hash_table__V_76_76;

#line 739 "version_hash_table.m"
                                {
#line 739 "version_hash_table.m"
                                  mercury__deconstruct__deconstruct_5_p_1(mercury__version_hash_table__TypeInfo_for_T_38, mercury__version_hash_table__T_3, (MR_Integer) 1, &mercury__version_hash_table__FunctorName_15, &mercury__version_hash_table__Arity_16, &mercury__version_hash_table__Args_17);
                                }
#line 686 "version_hash_table.m"
                                {
#line 686 "version_hash_table.m"
                                  mercury__version_hash_table__H0_18 = mercury__string__hash_1_f_0(mercury__version_hash_table__FunctorName_15);
                                }
#line 757 "version_hash_table.m"
                                mercury__version_hash_table__V_73_73 = (mercury__version_hash_table__H0_18 << mercury__version_hash_table__Arity_16);
#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__version_hash_table__generic_hash_2_p_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 8881 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_76_76  = Bits;
#line 171 "int.opt"
}
#line 758 "version_hash_table.m"
                                mercury__version_hash_table__V_75_75 = (mercury__version_hash_table__V_76_76 - mercury__version_hash_table__Arity_16);
#line 757 "version_hash_table.m"
                                mercury__version_hash_table__V_74_74 = (mercury__version_hash_table__H0_18 >> mercury__version_hash_table__V_75_75);
#line 756 "version_hash_table.m"
                                mercury__version_hash_table__H1_19 = (mercury__version_hash_table__V_73_73 ^ mercury__version_hash_table__V_74_74);
#line 742 "version_hash_table.m"
                                {
#line 742 "version_hash_table.m"
                                  mercury__version_hash_table__foldl__ho16_4_p_in__list_0(mercury__version_hash_table__Args_17, mercury__version_hash_table__H1_19, mercury__version_hash_table__H_4);
#line 742 "version_hash_table.m"
                                  return;
                                }
#line 739 "version_hash_table.m"
                              }
#line 737 "version_hash_table.m"
                          }
#line 726 "version_hash_table.m"
                      }
#line 722 "version_hash_table.m"
                  }
#line 718 "version_hash_table.m"
              }
#line 714 "version_hash_table.m"
          }
#line 710 "version_hash_table.m"
      }
#line 710 "version_hash_table.m"
      break;
#line 710 "version_hash_table.m"
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

#line 8949 "version_hash_table.c"

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
#line 698 "version_hash_table.m"
  {
#line 698 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 698 "version_hash_table.m"
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

#line 8990 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_hash_table__V_5_5  = Int;
#line 63 "char.opt"
}
#line 657 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__char_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__version_hash_table__V_5_5 ;
		{
#line 657 "version_hash_table.m"

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

#line 9031 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__H_4  = H;
#line 657 "version_hash_table.m"
}
#line 698 "version_hash_table.m"
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
#line 686 "version_hash_table.m"
  {
#line 686 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 686 "version_hash_table.m"
    {
#line 686 "version_hash_table.m"
      *mercury__version_hash_table__HeadVar__2_2 = mercury__string__hash_1_f_0(mercury__version_hash_table__S_3);
    }
#line 686 "version_hash_table.m"
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
#line 654 "version_hash_table.m"
  {
#line 654 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;

#line 657 "version_hash_table.m"
{
#define MR_PROC_LABEL mercury__version_hash_table__int_hash_2_p_0

	MR_Integer N;
	MR_Integer H;

	N =  mercury__version_hash_table__N_1 ;
		{
#line 657 "version_hash_table.m"

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

#line 9115 "version_hash_table.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__version_hash_table__H_2  = H;
#line 657 "version_hash_table.m"
}
#line 654 "version_hash_table.m"
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
#line 296 "version_hash_table.m"
  {
#line 296 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 296 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__2_2;

#line 259 "version_hash_table.m"
    {
#line 259 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HashPred_3, (MR_Integer) 7, (MR_Float) 0.90000000000000002, (MR_Integer) 0);
    }
#line 296 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__2_2;
#line 296 "version_hash_table.m"
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
#line 295 "version_hash_table.m"
  {
#line 295 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 295 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__2_2;

#line 259 "version_hash_table.m"
    {
#line 259 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HashPred_3, (MR_Integer) 7, (MR_Float) 0.90000000000000002, (MR_Integer) 0);
    }
#line 295 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__2_2;
#line 295 "version_hash_table.m"
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
#line 293 "version_hash_table.m"
  {
#line 293 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 293 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__2_2;

#line 255 "version_hash_table.m"
    {
#line 255 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HashPred_3, (MR_Integer) 7, (MR_Float) 0.90000000000000002, (MR_Integer) 1);
    }
#line 293 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__2_2;
#line 293 "version_hash_table.m"
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
#line 292 "version_hash_table.m"
  {
#line 292 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 292 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__2_2;

#line 255 "version_hash_table.m"
    {
#line 255 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__2_2 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_6, mercury__version_hash_table__TypeInfo_for_V_7, mercury__version_hash_table__HashPred_3, (MR_Integer) 7, (MR_Float) 0.90000000000000002, (MR_Integer) 1);
    }
#line 292 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__2_2;
#line 292 "version_hash_table.m"
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
#line 261 "version_hash_table.m"
  {
#line 261 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 261 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__4_4;

#line 261 "version_hash_table.m"
    {
#line 261 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_9, mercury__version_hash_table__TypeInfo_for_V_10, mercury__version_hash_table__HashPred_5, mercury__version_hash_table__N_6, mercury__version_hash_table__MaxOccupancy_7, (MR_Integer) 0);
    }
#line 261 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__4_4;
#line 261 "version_hash_table.m"
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
#line 259 "version_hash_table.m"
  {
#line 259 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 259 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__4_4;

#line 259 "version_hash_table.m"
    {
#line 259 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_9, mercury__version_hash_table__TypeInfo_for_V_10, mercury__version_hash_table__HashPred_5, mercury__version_hash_table__N_6, mercury__version_hash_table__MaxOccupancy_7, (MR_Integer) 0);
    }
#line 259 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__4_4;
#line 259 "version_hash_table.m"
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
#line 257 "version_hash_table.m"
  {
#line 257 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 257 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__4_4;

#line 257 "version_hash_table.m"
    {
#line 257 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_9, mercury__version_hash_table__TypeInfo_for_V_10, mercury__version_hash_table__HashPred_5, mercury__version_hash_table__N_6, mercury__version_hash_table__MaxOccupancy_7, (MR_Integer) 1);
    }
#line 257 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__4_4;
#line 257 "version_hash_table.m"
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
#line 255 "version_hash_table.m"
  {
#line 255 "version_hash_table.m"
    MR_bool mercury__version_hash_table__succeeded;
#line 255 "version_hash_table.m"
    MR_Word mercury__version_hash_table__HeadVar__4_4;

#line 255 "version_hash_table.m"
    {
#line 255 "version_hash_table.m"
      return mercury__version_hash_table__HeadVar__4_4 = mercury__version_hash_table__init_2_4_f_0(mercury__version_hash_table__TypeInfo_for_K_9, mercury__version_hash_table__TypeInfo_for_V_10, mercury__version_hash_table__HashPred_5, mercury__version_hash_table__N_6, mercury__version_hash_table__MaxOccupancy_7, (MR_Integer) 1);
    }
#line 255 "version_hash_table.m"
    return mercury__version_hash_table__HeadVar__4_4;
#line 255 "version_hash_table.m"
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
